# CMake generated Testfile for 
# Source directory: /home/lakers/Downloads/VTK/Filtering/Testing
# Build directory: /home/lakers/Downloads/VTK/Filtering/Testing
# 
# This file includes the relevent testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(HeaderTesting-Filtering "/usr/bin/python" "/home/lakers/Downloads/VTK/Common/Testing/HeaderTesting.py" "/home/lakers/Downloads/VTK/Filtering" "VTK_FILTERING_EXPORT" "vtkActor2DCollection.h" "vtkAMRBox.h" "vtkApplyFilterCommandInternal.h" "vtkArrayData.h" "vtkArrayDataAlgorithm.h" "vtkCellType.h" "vtkCompositeDataSetInternals.h" "vtkDataObjectCollection.h" "vtkDataSetCollection.h" "vtkExecutionSchedulerManager.h" "vtkFactoredArrayData.h" "vtkFactoredArrayDataAlgorithm.h" "vtkFilteringInformationKeyManager.h" "vtkGraphInternals.h" "vtkImageIterator.h" "vtkImageProgressIterator.h" "vtkMarchingCubesCases.h" "vtkMarchingSquaresCases.h" "vtkStructuredPoints.h")
SUBDIRS(Cxx)
SUBDIRS(Python)
