# CMake generated Testfile for 
# Source directory: /home/lakers/Downloads/VTK/VolumeRendering/Testing
# Build directory: /home/lakers/Downloads/VTK/VolumeRendering/Testing
# 
# This file includes the relevent testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(HeaderTesting-VolumeRendering "/usr/bin/python" "/home/lakers/Downloads/VTK/Common/Testing/HeaderTesting.py" "/home/lakers/Downloads/VTK/VolumeRendering" "VTK_VOLUMERENDERING_EXPORT" "vtkVolumeProMapper.h")
SUBDIRS(Cxx)
SUBDIRS(Python)
