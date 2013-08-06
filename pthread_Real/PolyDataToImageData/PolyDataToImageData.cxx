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

#include <mpi.h>
#include <stdio.h>
#include <pthread.h>

std::vector<std::string> results;				// holds search results

// recursive search algorithm
void search(std::string curr_directory, std::string extension){
	DIR* dir_point = opendir(curr_directory.c_str());
	dirent* entry = readdir(dir_point);

	while (entry){									// if !entry then end of directory

		std::string fname = entry->d_name;	// filename
											// if filename's last characters are extension
		if (fname.find(extension, (fname.length() - extension.length())) != std::string::npos)
			results.push_back(fname);		// add filename to results vector

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

void* thread_function(char VtkInput[], void *threadid)
{
    vtkPolyDataReader *reader = vtkPolyDataReader::New(); 
    reader->SetFileName(vtkInput);
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
    printf("dimension coordinates are %d, %d, %d, \n", dim[0], dim[1], dim[2]);

    double origin[3];
    origin[0] = bounds[0] + spacing[0]/10;
    origin[1] = bounds[2] + spacing[1]/10;
    origin[2] = bounds[4] + spacing[2]/10;
    whiteImage->SetOrigin(origin);

    printf("origin is %f, %f, %f \n", origin[0], origin[1], origin[2]);

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

    char str[80];

    sprintf(str, "YoloSwag%d.mhd", rank);

    writer->SetFileName(str);

    #if VTK_MAJOR_VERSION <= 5
    writer->SetInput(imgstenc->GetOutput());
    #else
    writer->SetInputData(imgstenc->GetOutput());
    #endif
    writer->Write();  
    writer->Update();
}

int main(int argc, char *argv[])
{
    // The file extension to look for is vtk
    std::string extension;
    extension = "vtk";

	// setup search parameters
	std::string curr_directory = get_current_dir_name();

	search(curr_directory, extension);

    std::cout << "- \t" <<  results[0] << std::endl;

    std::string result = results[0];

	const char * c = result.c_str();

	pthread_t = threads[argc];

	for (i = 0; i < argc-1; i++) {      /* creating threads */
		if (pthread_create(&thread[i], NULL, thread_function, c) {
			 fprintf(stderr, "Failed to create a thread\n"); 
			 exit(1);
		}
	}

	for (i = 0; i < argc-1; i++)
    {
		pthread_join(thread[i], &exit_status);
    }

    // Delete the null files that are outputted
    system("sudo rm -- \\(null\\)*");

	return EXIT_SUCCESS;
}
