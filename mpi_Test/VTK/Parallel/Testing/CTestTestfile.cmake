# CMake generated Testfile for 
# Source directory: /home/lakers/Downloads/VTK/Parallel/Testing
# Build directory: /home/lakers/Downloads/VTK/Parallel/Testing
# 
# This file includes the relevent testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(HeaderTesting-Parallel "/usr/bin/python" "/home/lakers/Downloads/VTK/Common/Testing/HeaderTesting.py" "/home/lakers/Downloads/VTK/Parallel" "VTK_PARALLEL_EXPORT" "vtkBlockDistribution.h" "vtkMPI.h" "vtkPBGLGraphAdapter.h" "vtkMultiProcessStream.h")
SUBDIRS(Cxx)
SUBDIRS(Python)
