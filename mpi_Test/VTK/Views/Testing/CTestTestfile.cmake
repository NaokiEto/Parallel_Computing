# CMake generated Testfile for 
# Source directory: /home/lakers/Downloads/VTK/Views/Testing
# Build directory: /home/lakers/Downloads/VTK/Views/Testing
# 
# This file includes the relevent testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(HeaderTesting-Views "/usr/bin/python" "/home/lakers/Downloads/VTK/Common/Testing/HeaderTesting.py" "/home/lakers/Downloads/VTK/Views" "VTK_VIEWS_EXPORT" "vtkPipelineGraphSource.h")
SUBDIRS(Cxx)
