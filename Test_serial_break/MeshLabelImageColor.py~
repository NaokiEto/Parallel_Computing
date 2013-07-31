import vtk
import numpy
import glob, sys, os, string
from mpi4py import MPI

comm = MPI.COMM_WORLD
size = comm.Get_size()
rank = comm.Get_rank()

def parallel_mpi(n):

    # Go to this directory
    os.chdir("PolyDataToImageData/build")

    # Find the correct file
    for files in glob.glob("YoloSwag" + str(n) + ".mhd"):
        print files

        input = str(files)
         
        # Prepare to read the file
         
        readerVolume = vtk.vtkMetaImageReader()
        readerVolume.SetFileName(input)
        readerVolume.Update()
         
        voi = vtk.vtkExtractVOI() 
        voi.SetInput(readerVolume.GetOutput())  
        voi.SetSampleRate(1,1,1)

        voi.Update()#necessary for GetScalarRange()
        srange= voi.GetOutput().GetScalarRange()#needs Update() before!
        print "Range", srange
         
         
        ##Prepare surface generation
        contour = vtk.vtkMarchingCubes() #for label images

        contour.SetInput( voi.GetOutput() )
        #contour.ComputeNormalsOn()
         
         
        #choose one label
        index= 31
         
        print "Doing label", index
         
        contour.SetValue(0, index)
        contour.Update() #needed for GetNumberOfPolys() !!!
         
         
        smoother= vtk.vtkWindowedSincPolyDataFilter()
        if vtk.VTK_MAJOR_VERSION <= 5:
            smoother.SetInput(contour.GetOutput())
        else:
            smoother.SetInputConnection(contour.GetOutputPort())    
        smoother.SetNumberOfIterations(30) #this has little effect on the error!
        #smoother.BoundarySmoothingOff()
        #smoother.FeatureEdgeSmoothingOff()
        #smoother.SetFeatureAngle(120.0)
        #smoother.SetPassBand(.001)        #this increases the error a lot!
        smoother.NonManifoldSmoothingOn()
        smoother.NormalizeCoordinatesOn()
        smoother.GenerateErrorScalarsOn() 
        #smoother.GenerateErrorVectorsOn()
        smoother.Update()
         
        smoothed_polys= smoother.GetOutput()
        smoother_error= smoothed_polys.GetPointData().GetScalars()
         
        ##Find min and max z
        se_range= smoother_error.GetRange()
        print se_range
        minz= se_range[0] #min(smoother_error)
        maxz= se_range[1] #max(smoother_error)
        if (maxz > 1):
            print "Big smoother error: min/max:", minz, maxz
        minz=  .3 #this way colours of different particles are comparable
        maxz= 1
         
        ## Create the color map
        colorLookupTable= vtk.vtkLookupTable()
        colorLookupTable.SetTableRange(minz, maxz) #this does nothing, use mapper.SetScalarRange(minz, maxz)
        colorLookupTable.SetHueRange(2/3.0, 1)
        #colorLookupTable.SetSaturationRange(0, 0)
        #colorLookupTable.SetValueRange(1, 0)
        #colorLookupTable.SetNumberOfColors(256) #256 default
        colorLookupTable.Build()
         
        ##calc cell normal
        triangleCellNormals= vtk.vtkPolyDataNormals()
        if vtk.VTK_MAJOR_VERSION <= 5:
            triangleCellNormals.SetInput(smoothed_polys)
        else:
            triangleCellNormals.SetInputData(smoothed_polys)    
        triangleCellNormals.ComputeCellNormalsOn()
        triangleCellNormals.ComputePointNormalsOff()
        triangleCellNormals.ConsistencyOn()
        triangleCellNormals.AutoOrientNormalsOn()
        triangleCellNormals.Update() #creates vtkPolyData
         
         
        mapper= vtk.vtkPolyDataMapper()
        #mapper.SetInput(smoothed_polys) #this has no normals
        if vtk.VTK_MAJOR_VERSION <= 5:
            mapper.SetInput(triangleCellNormals.GetOutput()) #this is better for vis;-)
        else:
            mapper.SetInputConnection(triangleCellNormals.GetOutputPort()) #this is better for vis;-)    
        mapper.ScalarVisibilityOn()#show colour 
        mapper.SetScalarRange(minz, maxz)
        #mapper.SetScalarModeToUseCellData() # contains the label eg. 31
        mapper.SetScalarModeToUsePointData() #the smoother error relates to the verts
        mapper.SetLookupTable(colorLookupTable)

        writer = vtk.vtkPolyDataWriter()
        writer.SetFileName("../../ShrimpChowFun" + str(n) + ".vtk")

        if vtk.VTK_MAJOR_VERSION <= 5:
            writer.SetInput(triangleCellNormals.GetOutput())
        else:
            writer.SetInputData(triangleCellNormals.GetOutputPort())
        writer.Write()

parallel_mpi(rank)

if rank == 0:

    # Go to this directory
    os.chdir("../../")

    appendWriter = vtk.vtkAppendPolyData()

    for i in range(size):
        inputNum = vtk.vtkPolyData()
        reader = vtk.vtkPolyDataReader()

        inputFileName = "ShrimpChowFun" + str(i) + ".vtk"
        reader.SetFileName(inputFileName)
        reader.Update()
        inputNum.ShallowCopy(reader.GetOutput())

        if vtk.VTK_MAJOR_VERSION <= 5:
            appendWriter.AddInput(reader.GetOutput())

        else:
            appendWriter.AddInputData(inputNum)

        appendWriter.Update()

    pWriter = vtk.vtkPolyDataWriter()
    pWriter.SetFileName(sys.argv[1])

    if vtk.VTK_MAJOR_VERSION <= 5:
        pWriter.SetInput(appendWriter.GetOutput())
    else:
        pWriter.SetInputData(appendWriter.GetOutputPort())
    pWriter.Write()

    # Remove any duplicate points.
    cleanFilter = vtk.vtkCleanPolyData()
    cleanFilter.SetInputConnection(appendWriter.GetOutputPort())
    cleanFilter.Update()

    # Create a mapper
    cumulativeMapper = vtk.vtkPolyDataMapper()
    cumulativeMapper.SetInputConnection(cleanFilter.GetOutputPort())

    # Create an actor
    actor = vtk.vtkActor()
    actor.SetMapper(cumulativeMapper)

    # Create a renderer, render window, and interactor
    renderer = vtk.vtkRenderer()
    renderWindow = vtk.vtkRenderWindow()
    renderWindowInteractor = vtk.vtkRenderWindowInteractor()

    # Add the actors to the scene
    renderWindow.AddRenderer(renderer)
    renderWindowInteractor.SetRenderWindow(renderWindow)
    renderer.AddActor(actor)

    # Render and interact
    renderWindow.Render()
    renderWindowInteractor.Start()
