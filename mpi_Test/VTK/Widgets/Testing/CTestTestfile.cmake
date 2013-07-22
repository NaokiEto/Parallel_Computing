# CMake generated Testfile for 
# Source directory: /home/lakers/Downloads/VTK/Widgets/Testing
# Build directory: /home/lakers/Downloads/VTK/Widgets/Testing
# 
# This file includes the relevent testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(HeaderTesting-Widgets "/usr/bin/python" "/home/lakers/Downloads/VTK/Common/Testing/HeaderTesting.py" "/home/lakers/Downloads/VTK/Widgets" "VTK_WIDGETS_EXPORT")
SUBDIRS(Cxx)
SUBDIRS(Python)
