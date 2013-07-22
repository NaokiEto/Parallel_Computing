# CMake generated Testfile for 
# Source directory: /home/lakers/Downloads/VTK/Geovis/Testing
# Build directory: /home/lakers/Downloads/VTK/Geovis/Testing
# 
# This file includes the relevent testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(HeaderTesting-Geovis "/usr/bin/python" "/home/lakers/Downloads/VTK/Common/Testing/HeaderTesting.py" "/home/lakers/Downloads/VTK/Geovis" "VTK_GEOVIS_EXPORT" "vtkGeoPatch.h")
SUBDIRS(Cxx)
