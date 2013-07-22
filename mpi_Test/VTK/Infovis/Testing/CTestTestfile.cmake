# CMake generated Testfile for 
# Source directory: /home/lakers/Downloads/VTK/Infovis/Testing
# Build directory: /home/lakers/Downloads/VTK/Infovis/Testing
# 
# This file includes the relevent testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(HeaderTesting-Infovis "/usr/bin/python" "/home/lakers/Downloads/VTK/Common/Testing/HeaderTesting.py" "/home/lakers/Downloads/VTK/Infovis" "VTK_INFOVIS_EXPORT" "vtkArrayNorm.h" "vtkBivariateStatisticsAlgorithmPrivate.h" "vtkMultiCorrelativeStatisticsAssessFunctor.h" "vtkKMeansAssessFunctor.h" "vtkBoostGraphAdapter.h" "vtkBoostRandomSparseArraySource.h" "vtkSQLDatabaseGraphSource.h" "vtkSQLDatabaseTableSource.h" "vtkStatisticsAlgorithmPrivate.h" "vtkUnivariateStatisticsAlgorithmPrivate.h")
SUBDIRS(Cxx)
SUBDIRS(Python)
