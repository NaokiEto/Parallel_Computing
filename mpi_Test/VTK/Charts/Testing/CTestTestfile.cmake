# CMake generated Testfile for 
# Source directory: /home/lakers/Downloads/VTK/Charts/Testing
# Build directory: /home/lakers/Downloads/VTK/Charts/Testing
# 
# This file includes the relevent testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(HeaderTesting-Charts "/usr/bin/python" "/home/lakers/Downloads/VTK/Common/Testing/HeaderTesting.py" "/home/lakers/Downloads/VTK/Charts" "VTK_CHARTS_EXPORT" "vtkContextMouseEvent.h" "vtkContextScenePrivate.h" "vtkOpenGLContextDevice2DPrivate.h")
SUBDIRS(Cxx)
SUBDIRS(Python)
