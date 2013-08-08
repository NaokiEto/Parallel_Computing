#include <unistd.h>
#include <iostream>
#include <dirent.h>
#include <vector>

#include <vtkVersion.h>
#include <vtkSmartPointer.h>
#include <vtkPolyData.h>
#include <vtkPolyDataReader.h>
#include <vtkImageData.h>
#include <vtkMetaImageWriter.h>
#include <vtkPolyDataToImageStencil.h>
#include <vtkImageStencil.h>
#include <vtkPointData.h>
#include <string.h>
#include <vtkPDataSetWriter.h>
#include <vtkPolyDataMapper.h>
#include <vtkMetaImageReader.h>
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

#include <mpi.h>
#include <stdio.h>

// holds search results
std::vector<std::string> results;

// recursive search algorithm
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
 * This program converts a vtkPolyData image into volume representation (vtkImageData) 
 * where the foreground voxels are 1 and the background voxels are 0. Internally 
 * vtkPolyDataToImageStencil is utilized. The resultant image is saved to disk in 
 * metaimage file formats.
 */

int main(int argc, char *argv[])
{

    int NumOfCharPD = 23;

    char strPD[NumOfCharPD];

    sprintf(strPD, "ShrimpChowFun.vtk");

    std::string extension;
    extension = "vtk";

	// setup search parameters
	std::string curr_directory = get_current_dir_name();

	search(curr_directory, extension);

    //std::cout << "- \t" <<  results[0] << std::endl;

    std::string result = results[0];

	const char * c = result.c_str();

    static int size;

    int rank;

    MPI_Status status;

    MPI_Init (&argc, &argv);

    int MASTER = 0;

    /*DETERMINE TOTAL NUMBER OF PROCESSORS*/
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    /*DETERMINE RANK OF THIS PROCESSOR*/
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    //printf("This is the size, %d\n", size); 
    //printf("This is the rank, %d\n", rank);

    if (rank >= 1)
    {

        vtkPolyDataReader *reader = vtkPolyDataReader::New();
        size_t length = strlen(c) + 1;
        char strarg[length]; 
        sprintf(strarg, c);
        reader->SetFileName(strarg);
        reader->Update();

        vtkSmartPointer<vtkImageData> whiteImage = vtkSmartPointer<vtkImageData>::New();    

        //reader->GetOutput()->GetBounds(bounds);
        reader->Update();
        double spacing[3]; // desired volume spacing
        spacing[0] = 0.1;
        spacing[1] = 0.1;
        spacing[2] = 0.1;
        whiteImage->SetSpacing(spacing);

        double bounds[6];
        vtkSmartPointer<vtkMetaImageWriter> writer = vtkSmartPointer<vtkMetaImageWriter>::New();

        // cut the corresponding white image and set the background:
        vtkSmartPointer<vtkImageStencil> imgstenc = vtkSmartPointer<vtkImageStencil>::New();
        reader->Update();

        bounds[0] = -10.0 + 20.0 * double(rank - 1.0) / double(size - 1);
        bounds[1] = -10.0 + 20.0 * double(rank) / double(size - 1);
        bounds[2] = -10;
        bounds[3] = 10;
        bounds[4] = -10;
        bounds[5] = 10;

        //reader->Update();
        // compute dimensions
        int dim[3];
        for (int i = 0; i < 3; i++)
        {
        dim[i] = static_cast<int>(ceil((bounds[i * 2 + 1] - bounds[i * 2]) / spacing[i]));
        }
        whiteImage->SetDimensions(dim);
        whiteImage->SetExtent(0, dim[0] - 1, 0, dim[1] - 1, 0, dim[2] - 1);
        //printf("dimension coordinates are %d, %d, %d, \n", dim[0], dim[1], dim[2]);

        double origin[3];
        origin[0] = bounds[0] + spacing[0]/10;
        origin[1] = bounds[2] + spacing[1]/10;
        origin[2] = bounds[4] + spacing[2]/10;
        whiteImage->SetOrigin(origin);

        //printf("origin is %f, %f, %f \n", origin[0], origin[1], origin[2]);

        //reader->Update();

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

        //reader->Update();

        // polygonal data --> image stencil:
        vtkSmartPointer<vtkPolyDataToImageStencil> pol2stenc = vtkSmartPointer<vtkPolyDataToImageStencil>::New();
        //pol2stenc->Update();
        #if VTK_MAJOR_VERSION <= 5
	    pol2stenc->SetInput(reader->GetOutput());
        #else
	    pol2stenc->SetInputData(reader->GetOutput());
        #endif

        pol2stenc->SetOutputOrigin(origin);
        pol2stenc->SetOutputSpacing(spacing);
        pol2stenc->SetOutputWholeExtent(whiteImage->GetExtent());
        pol2stenc->Update();

        //imgstenc->Update();
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

        // figure out how many characters are the file names
        int NumOfChar;

        NumOfChar = 13;

	    NumOfChar = log10(rank) + 13;

        char str[NumOfChar];

        sprintf(str, "YoloSwag%d.mhd", rank);

        printf(str);
        printf("\n");

        writer->SetFileName(str);

        #if VTK_MAJOR_VERSION <= 5
	    writer->SetInput(imgstenc->GetOutput());
        #else
	    writer->SetInputData(imgstenc->GetOutput());
        #endif

        writer->Write();  
        writer->Update();

        // lets open that file and pass it through vtkMarchingCubes
        vtkMetaImageReader *MIReader = vtkMetaImageReader::New(); 
        MIReader->SetFileName(str);
        MIReader->Update();

        vtkExtractVOI *voi = vtkExtractVOI::New(); 
        voi->SetInput(MIReader->GetOutput());  
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
	    printf("Big smoother error: min/max: %d, %d", minz, maxz);
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

        vtkPolyDataWriter *PDwriter = vtkPolyDataWriter::New();

        // figure out how many characters are the file names

        NumOfCharPD = 19;

        NumOfCharPD = log10(rank) + 19;

        strPD[NumOfCharPD];

        sprintf(strPD, "ShrimpChowFun%d.vtk", rank);

        printf(strPD);

        printf("\n");

        PDwriter->SetFileName(strPD);

        #if VTK_MAJOR_VERSION <= 5
    	    PDwriter->SetInput(triangleCellNormals->GetOutput());
        #else
    	    PDwriter->SetInputData(triangleCellNormals->GetOutputPort());  
        #endif

        PDwriter->Write();


        MPI_Send(strPD, NumOfCharPD, MPI_CHAR, 0, 1, MPI_COMM_WORLD);
    }

// Master
    if (rank == MASTER)
    {

         printf("I'm here!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! \n");

        for(int i = 1; i < size; i++)
        {
            MPI_Recv(strPD, NumOfCharPD, MPI_CHAR, i, 1, MPI_COMM_WORLD, &status);

            printf("did it work? \n");
        }
        
        // to append each piece into 1 big vtk file
        vtkAppendPolyData *appendWriter = vtkAppendPolyData::New();

        for(int k = 1; k < size; k++)
        {
            vtkPolyData *inputNum = vtkPolyData::New();
            vtkPolyDataReader *reader = vtkPolyDataReader::New();

            int NumOfCharPDMASTER;

            NumOfCharPDMASTER = 19;

            NumOfCharPDMASTER = log10(k) + 19;

            char strPDMASTER[NumOfCharPDMASTER];

            sprintf(strPDMASTER, "ShrimpChowFun%d.vtk", k);
            reader->SetFileName(strPDMASTER);
            reader->Update();
            inputNum->ShallowCopy(reader->GetOutput());

            #if VTK_MAJOR_VERSION <= 5
                appendWriter->AddInput(reader->GetOutput());
            #else
                appendWriter->AddInputData(inputNum);
            #endif

            appendWriter->Update();
        }

        vtkPolyDataWriter *pWriter = vtkPolyDataWriter::New();
        pWriter->SetFileName(argv[1]);

        #if VTK_MAJOR_VERSION <= 5
            pWriter->SetInput(appendWriter->GetOutput());
        #else
            pWriter->SetInputData(appendWriter->GetOutputPort());
        #endif

        pWriter->Write();

        // Remove any duplicate points.
        vtkCleanPolyData *cleanFilter = vtkCleanPolyData::New();
        cleanFilter->SetInputConnection(appendWriter->GetOutputPort());
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

    }

    MPI_Finalize();    

    // Delete the null files that are outputted
    system("sudo rm -- \\(null\\)*");
    system("sudo rm *.mhd");
    system("sudo rm *.zraw");
    system("sudo rm ShrimpChowFun*");

  return EXIT_SUCCESS;
}
