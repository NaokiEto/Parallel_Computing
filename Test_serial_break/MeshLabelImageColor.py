import vtk
import glob, sys, os, string
from mpi4py import MPI

comm = MPI.COMM_WORLD
size = comm.Get_size()
rank = comm.Get_rank()


if rank == 0:
 
    os.chdir("PolyDataToImageData/build")

    for files in glob.glob("YoloSwag0.mhd"):
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

        writer = vtk.vtkXMLPolyDataWriter();
        writer.SetFileName("../../ShrimpChowFun0.vtk");

        if vtk.VTK_MAJOR_VERSION <= 5:
            writer.SetInput(triangleCellNormals.GetOutput())
        else:
            writer.SetInputData(triangleCellNormals.GetOutputPort())
        writer.Write()

if rank == 1:
 
    os.chdir("PolyDataToImageData/build")

    for files in glob.glob("YoloSwag1.mhd"):
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

        writer = vtk.vtkXMLPolyDataWriter();
        writer.SetFileName("../../ShrimpChowFun1.vtk");

        if vtk.VTK_MAJOR_VERSION <= 5:
            writer.SetInput(triangleCellNormals.GetOutput())
        else:
            writer.SetInputData(triangleCellNormals.GetOutputPort())
        writer.Write()

if rank == 2:
 
    os.chdir("PolyDataToImageData/build")

    for files in glob.glob("YoloSwag2.mhd"):
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

        writer = vtk.vtkXMLPolyDataWriter();
        writer.SetFileName("../../ShrimpChowFun2.vtk");

        if vtk.VTK_MAJOR_VERSION <= 5:
            writer.SetInput(triangleCellNormals.GetOutput())
        else:
            writer.SetInputData(triangleCellNormals.GetOutputPort())
        writer.Write()
     
if rank == 3:
 
    os.chdir("PolyDataToImageData/build")

    for files in glob.glob("Yolo3.mhd"):
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

        writer = vtk.vtkXMLPolyDataWriter();
        writer.SetFileName("../../ShrimpChowFun3.vtk");

        if vtk.VTK_MAJOR_VERSION <= 5:
            writer.SetInput(triangleCellNormals.GetOutput())
        else:
            writer.SetInputData(triangleCellNormals.GetOutputPort())
        writer.Write()
     
if rank == 4:
 
    os.chdir("PolyDataToImageData/build")

    for files in glob.glob("YoloSwag4.mhd"):
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

        writer = vtk.vtkXMLPolyDataWriter();
        writer.SetFileName("../../ShrimpChowFun4.vtk");

        if vtk.VTK_MAJOR_VERSION <= 5:
            writer.SetInput(triangleCellNormals.GetOutput())
        else:
            writer.SetInputData(triangleCellNormals.GetOutputPort())
        writer.Write()

if rank == 5:
 
    os.chdir("PolyDataToImageData/build")

    for files in glob.glob("YoloSwag5.mhd"):
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

        writer = vtk.vtkXMLPolyDataWriter();
        writer.SetFileName("../../ShrimpChowFun5.vtk");

        if vtk.VTK_MAJOR_VERSION <= 5:
            writer.SetInput(triangleCellNormals.GetOutput())
        else:
            writer.SetInputData(triangleCellNormals.GetOutputPort())
        writer.Write()

if rank == 6:
 
    os.chdir("PolyDataToImageData/build")

    for files in glob.glob("YoloSwag6.mhd"):
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

        writer = vtk.vtkXMLPolyDataWriter();
        writer.SetFileName("../../ShrimpChowFun6.vtk");

        if vtk.VTK_MAJOR_VERSION <= 5:
            writer.SetInput(triangleCellNormals.GetOutput())
        else:
            writer.SetInputData(triangleCellNormals.GetOutputPort())
        writer.Write()

if rank == 7:
 
    os.chdir("PolyDataToImageData/build")

    for files in glob.glob("YoloSwag7.mhd"):
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

        writer = vtk.vtkXMLPolyDataWriter();
        writer.SetFileName("../../ShrimpChowFun7.vtk");

        if vtk.VTK_MAJOR_VERSION <= 5:
            writer.SetInput(triangleCellNormals.GetOutput())
        else:
            writer.SetInputData(triangleCellNormals.GetOutputPort())
        writer.Write()