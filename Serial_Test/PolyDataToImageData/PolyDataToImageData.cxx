#include <dirent.h>
#include <vector>

#include <vtkVersion.h>
#include <vtkSmartPointer.h>
#include <vtkPolyData.h>
#include <vtkPolyDataReader.h>
#include <vtkImageData.h>
#include <vtkPolyDataToImageStencil.h>
#include <vtkImageStencil.h>
#include <vtkPointData.h>
#include <string.h>
#include <vtkPolyDataMapper.h>
#include <vtkExtractVOI.h>
#include <vtkMarchingCubes.h>
#include <vtkWindowedSincPolyDataFilter.h>
#include <vtkDataArray.h>
#include <vtkLookupTable.h>
#include <vtkPolyDataNormals.h>
#include <vtkPolyDataWriter.h>
#include <vtkAppendPolyData.h>
#include <vtkCleanPolyData.h>
#include <vtkActor.h>
#include <vtkRenderer.h>
#include <vtkRenderWindow.h>
#include <vtkRenderWindowInteractor.h>

#include <stdio.h>

/* holds search results for the vtk file */
std::vector<std::string> results;

/**
* This recursive search algorithm function will be used later to find the vtk 
* file in the directory. The user is to place the vtk file in the build 
* directory, and this function will find it and output it.
*/
void search(std::string curr_directory, std::string extension){
	DIR* dir_point = opendir(curr_directory.c_str());
	dirent* entry = readdir(dir_point);

	while (entry){
	    // filename
		std::string fname = entry->d_name;
		// if filename's last characters are extension
		if (fname.find(extension, (fname.length() - extension.length())) != std::string::npos)
            // add filename to results vector
			results.push_back(fname);
		entry = readdir(dir_point);
	}
	return;
}

/**
 * This program generates a sphere (closed surface, vtkPolyData) and converts it into volume
 * representation (vtkImageData) where the foreground voxels are 1 and the background voxels are
 * 0. Internally vtkPolyDataToImageStencil is utilized. The resultant image is saved to disk 
 * in metaimage file format (SphereVolume.mhd).
 */
int main(int argc, char *argv[])
{
    /* The vtk file extension we want to search for */
    std::string extension;
    extension = "vtk";

	// Setup search parameters
	std::string curr_directory = get_current_dir_name();
	search(curr_directory, extension);
    std::string result = results[0];

    /* This is where the vtk file name result is */
	const char * c = result.c_str();

    vtkPolyDataReader *reader = vtkPolyDataReader::New(); 
    reader->SetFileName(c);
    reader->Update();

    vtkSmartPointer<vtkImageData> whiteImage = vtkSmartPointer<vtkImageData>::New();    
    double bounds[6];
    reader->GetOutput()->GetBounds(bounds);
    double spacing[3]; // desired volume spacing
    spacing[0] = 0.5;
    spacing[1] = 0.5;
    spacing[2] = 0.5;
    whiteImage->SetSpacing(spacing);

    // compute dimensions
    int dim[3];
    for (int i = 0; i < 3; i++)
    {
        dim[i] = static_cast<int>(ceil((bounds[i * 2 + 1] - bounds[i * 2]) / spacing[i]));
    }
    whiteImage->SetDimensions(dim);
    whiteImage->SetExtent(0, dim[0] - 1, 0, dim[1] - 1, 0, dim[2] - 1);

    double origin[3];
    origin[0] = bounds[0] + spacing[0] / 2;
    origin[1] = bounds[2] + spacing[1] / 2;
    origin[2] = bounds[4] + spacing[2] / 2;
    whiteImage->SetOrigin(origin);

    #if VTK_MAJOR_VERSION <= 5
        whiteImage->SetScalarTypeToUnsignedChar();
        whiteImage->AllocateScalars();
    #else
        whiteImage->AllocateScalars(VTK_UNSIGNED_CHAR,1);
    #endif

    // fill the image with foreground voxels:
    unsigned char inval = 255;
    unsigned char outval = 0;
    vtkIdType count = whiteImage->GetNumberOfPoints();
    for (vtkIdType i = 0; i < count; ++i)
    {
        whiteImage->GetPointData()->GetScalars()->SetTuple1(i, inval);
    }

    // polygonal data --> image stencil:
    vtkSmartPointer<vtkPolyDataToImageStencil> pol2stenc = vtkSmartPointer<vtkPolyDataToImageStencil>::New();
    #if VTK_MAJOR_VERSION <= 5
        pol2stenc->SetInput(reader->GetOutput());
    #else
        pol2stenc->SetInputData(reader->GetOutput());
    #endif

    pol2stenc->SetOutputOrigin(origin);
    pol2stenc->SetOutputSpacing(spacing);
    pol2stenc->SetOutputWholeExtent(whiteImage->GetExtent());
    pol2stenc->Update();

    // cut the corresponding white image and set the background:
    vtkSmartPointer<vtkImageStencil> imgstenc = vtkSmartPointer<vtkImageStencil>::New();

    #if VTK_MAJOR_VERSION <= 5
        imgstenc->SetInput(whiteImage);
        imgstenc->SetStencil(pol2stenc->GetOutput());
    #else
        imgstenc->SetInputData(whiteImage);
        imgstenc->SetStencilConnection(pol2stenc->GetOutputPort());
    #endif

    imgstenc->ReverseStencilOff();
    imgstenc->SetBackgroundValue(outval);
    imgstenc->Update();

    // Pass the meta image data to the vtkMarchingCubes
    vtkExtractVOI *voi = vtkExtractVOI::New(); 
    voi->SetInput(imgstenc->GetOutput());  
    voi->SetSampleRate(1,1,1);

    voi->Update();

    //Prepare surface generation
    vtkMarchingCubes *contour = vtkMarchingCubes::New(); //for label images

    contour->SetInput( voi->GetOutput() );

    // choose one label
    int index = 31;

    contour->SetValue(0, index);
    contour->Update(); //needed for GetNumberOfPolys() !!!

    vtkWindowedSincPolyDataFilter *smoother= vtkWindowedSincPolyDataFilter::New();

    #if VTK_MAJOR_VERSION <= 5
        smoother->SetInput(contour->GetOutput());
    #else
        smoother->SetInputConnection(contour->GetOutputPort());   
    #endif

    smoother->SetNumberOfIterations(30); // this has little effect on the error!
    smoother->NonManifoldSmoothingOn();
    smoother->NormalizeCoordinatesOn();
    smoother->GenerateErrorScalarsOn();
    smoother->Update();

    vtkPolyData *smoothed_polys = smoother->GetOutput();
    vtkDataArray *smoother_error= smoothed_polys->GetPointData()->GetScalars();

    // Find min and max z
    double *se_range= smoother_error->GetRange();

    // print se_range
    double minz= se_range[0]; // min(smoother_error)
    double maxz= se_range[1]; // max(smoother_error)

    if (maxz > 1)
    {
        printf("Big smoother error: min/max: %f, %f", minz, maxz);
    }
    minz= .3; // this way colours of different particles are comparable
    maxz= 1;

    // Create the color map
    vtkLookupTable *colorLookupTable = vtkLookupTable::New();
    colorLookupTable->SetTableRange(minz, maxz); // this does nothing, use mapper.SetScalarRange(minz, maxz)
    colorLookupTable->SetHueRange(2/3.0, 1);

    colorLookupTable->Build();

    // calc cell normal
    vtkPolyDataNormals *triangleCellNormals= vtkPolyDataNormals::New();

    #if VTK_MAJOR_VERSION <= 5
        triangleCellNormals->SetInput(smoothed_polys);
    #else
        triangleCellNormals->SetInputData(smoothed_polys);   
    #endif

    triangleCellNormals->ComputeCellNormalsOn();
    triangleCellNormals->ComputePointNormalsOff();
    triangleCellNormals->ConsistencyOn();
    triangleCellNormals->AutoOrientNormalsOn();
    triangleCellNormals->Update(); // creates vtkPolyData

    vtkPolyDataMapper *mapper= vtkPolyDataMapper::New();

    #if VTK_MAJOR_VERSION <= 5
        mapper->SetInput(triangleCellNormals->GetOutput()); // this is better for vis;-)
    #else
        mapper->SetInputConnection(triangleCellNormals->GetOutputPort()); // this is better for vis;-)      
    #endif

    mapper->ScalarVisibilityOn(); // show colour 
    mapper->SetScalarRange(minz, maxz);
    mapper->SetScalarModeToUsePointData(); // the smoother error relates to the verts
    mapper->SetLookupTable(colorLookupTable);

    // output vtkpolydata file
    vtkPolyDataWriter *pWriter = vtkPolyDataWriter::New();
    pWriter->SetFileName(argv[1]);

    #if VTK_MAJOR_VERSION <= 5
	    pWriter->SetInput(triangleCellNormals->GetOutput());
    #else
	    pWriter->SetInputData(triangleCellNormals->GetOutputPort());  
    #endif

    pWriter->Write();

    // Remove any duplicate points.
    vtkCleanPolyData *cleanFilter = vtkCleanPolyData::New();
    cleanFilter->SetInputConnection(triangleCellNormals->GetOutputPort());
    cleanFilter->Update();

    // Create a mapper
    vtkPolyDataMapper *cumulativeMapper = vtkPolyDataMapper::New();
    cumulativeMapper->SetInputConnection(cleanFilter->GetOutputPort());

    // Create an actor
    vtkActor *actor = vtkActor::New();
    actor->SetMapper(cumulativeMapper);

    // Create a renderer, render window, and interactor
    vtkRenderer* renderer = vtkRenderer::New();
    vtkRenderWindow *renderWindow = vtkRenderWindow::New();
    vtkRenderWindowInteractor *renderWindowInteractor = vtkRenderWindowInteractor::New();

    // Add the actors to the scene
    renderWindow->AddRenderer(renderer);
    renderWindowInteractor->SetRenderWindow(renderWindow);
    renderer->AddActor(actor);

    // Render and interact
    renderWindow->Render();
    renderWindowInteractor->Start();
  
    return EXIT_SUCCESS;
}
