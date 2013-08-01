#include <vtkVersion.h>
#include <vtkSmartPointer.h>
#include <vtkPolyData.h>
#include <vtkPolyDataReader.h>
#include <vtkImageData.h>
#include <vtkSphereSource.h>
#include <vtkMetaImageWriter.h>
#include <vtkPolyDataToImageStencil.h>
#include <vtkImageStencil.h>
#include <vtkPointData.h>
#include <string.h>
#include <vtkXMLPUnstructuredGridWriter.h>
#include <vtkXMLPImageDataWriter.h>
#include <vtkPDataSetWriter.h>
#include <vtkPolyDataMapper.h>

#include <mpi.h>
#include <stdio.h>

/**
 * This program generates a sphere (closed surface, vtkPolyData) and converts it into volume
 * representation (vtkImageData) where the foreground voxels are 1 and the background voxels are
 * 0. Internally vtkPolyDataToImageStencil is utilized. The resultant image is saved to disk 
 * in metaimage file format (SphereVolume.mhd).
 */
int main(int argc, char *argv[])
{
    static int size;

    int rank;

    MPI_Status status;

    MPI_Init (&argc, &argv);

    /*DETERMINE TOTAL NUMBER OF PROCESSORS*/
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    /*DETERMINE RANK OF THIS PROCESSOR*/
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    printf("This is the size, %d\n", size); 
    printf("This is the rank, %d\n", rank);

    vtkPolyDataReader *reader = vtkPolyDataReader::New(); 
    reader->SetFileName(argv[1]);
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
    if (rank == 0)
    {
    	reader->Update();
        printf("Yay! rank 0 works! \n");
        bounds[0] = -10;
        bounds[1] = 0;
        bounds[2] = -10;
        bounds[3] = 0;
        bounds[4] = 0;
        bounds[5] = 10;
    }

    if (rank == 1)
    {
    	reader->Update();
        printf("\nyay! rank 1 works! \n");
        bounds[0] = 0;
        bounds[1] = 10;
        bounds[2] = -10;
        bounds[3] = 0;
        bounds[4] = 0;
        bounds[5] = 10;
        printf("This is one of the bounds : %f, %f \n", bounds[0], bounds[1]);
    }

    if (rank == 2)
    {
    	reader->Update();
        printf("\nyay! rank 2 works! \n");
        bounds[0] = -10;
        bounds[1] = 0;
        bounds[2] = 0;
        bounds[3] = 10;
        bounds[4] = 0;
        bounds[5] = 10;
        printf("This is one of the bounds : %f, %f \n", bounds[0], bounds[1]);
    }

    if (rank == 3)
    {
    	reader->Update();
        printf("\nyay! rank 3 works! \n");
        bounds[0] = 0;
        bounds[1] = 10;
        bounds[2] = 0;
        bounds[3] = 10;
        bounds[4] = 0;
        bounds[5] = 10;
        printf("This is one of the bounds : %f, %f \n", bounds[0], bounds[1]);
    }

    if (rank == 4)
    {
    	reader->Update();
        printf("\nyay! rank 4 works! \n");
        bounds[0] = -10;
        bounds[1] = 0;
        bounds[2] = -10;
        bounds[3] = 0;
        bounds[4] = -10;
        bounds[5] = 0;
        printf("This is one of the bounds : %f, %f \n", bounds[0], bounds[1]);
    }

    if (rank == 5)
    {
        reader->Update();
        printf("\nyay! rank 5 works! \n");
        bounds[0] = 0;
        bounds[1] = 10;
        bounds[2] = -10;
        bounds[3] = 0;
        bounds[4] = -10;
        bounds[5] = 0;
        printf("This is one of the bounds : %f, %f, %f, %f \n", bounds[0], bounds[1], bounds[2], bounds[3]);
    }

    if (rank == 6)
    {
        reader->Update();
        printf("\nyay! rank 6 works! \n");
        bounds[0] = -10;
        bounds[1] = 0;
        bounds[2] = 0;
        bounds[3] = 10;
        bounds[4] = -10;
        bounds[5] = 0;
        printf("This is one of the bounds : %f, %f \n", bounds[0], bounds[1]);
    }

    if (rank == 7)
    {
        reader->Update();
        printf("\nyay! rank 7 works! \n");
        bounds[0] = 0;
        bounds[1] = 10;
        bounds[2] = 0;
        bounds[3] = 10;
        bounds[4] = -10;
        bounds[5] = 0;
        printf("This is one of the bounds : %f, %f \n", bounds[0], bounds[1]);
    }
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
/*
        std::string inputFilename = "YoloSwag";
        std::string inputFilename2 = ".mhd"; 
        std::string result = inputFilename + std::to_string(rank) + inputFilename2;
*/
        writer->SetFileName(str);

    #if VTK_MAJOR_VERSION <= 5
        writer->SetInput(imgstenc->GetOutput());
    #else
        writer->SetInputData(imgstenc->GetOutput());
    #endif
        writer->Write();  
        writer->Update();

    MPI_Finalize();    

  return EXIT_SUCCESS;
}
