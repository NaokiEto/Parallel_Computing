# CMake generated Testfile for 
# Source directory: /home/lakers/Downloads/VTK/Graphics/Testing
# Build directory: /home/lakers/Downloads/VTK/Graphics/Testing
# 
# This file includes the relevent testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(HeaderTesting-Graphics "/usr/bin/python" "/home/lakers/Downloads/VTK/Common/Testing/HeaderTesting.py" "/home/lakers/Downloads/VTK/Graphics" "VTK_GRAPHICS_EXPORT" "vtkButterflySubdivisionFilter.h" "vtkDijkstraGraphInternals.h" "vtkLinearSubdivisionFilter.h" "vtkLoopSubdivisionFilter.h" "vtkOutlineFilter.h" "vtkProgrammableFilter.h" "vtkProgrammableSource.h" "vtkStructuredGridOutlineFilter.h" "vtkStructuredPointsGeometryFilter.h" "vtkTableBasedClipCases.h")
SUBDIRS(Cxx)
SUBDIRS(Python)
