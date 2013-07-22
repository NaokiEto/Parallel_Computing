# CMake generated Testfile for 
# Source directory: /home/lakers/Downloads/VTK/GenericFiltering/Testing
# Build directory: /home/lakers/Downloads/VTK/GenericFiltering/Testing
# 
# This file includes the relevent testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(HeaderTesting-GenericFiltering "/usr/bin/python" "/home/lakers/Downloads/VTK/Common/Testing/HeaderTesting.py" "/home/lakers/Downloads/VTK/GenericFiltering" "VTK_GENERIC_FILTERING_EXPORT")
SUBDIRS(Cxx)
