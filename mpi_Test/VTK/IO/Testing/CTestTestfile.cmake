# CMake generated Testfile for 
# Source directory: /home/lakers/Downloads/VTK/IO/Testing
# Build directory: /home/lakers/Downloads/VTK/IO/Testing
# 
# This file includes the relevent testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(HeaderTesting-IO "/usr/bin/python" "/home/lakers/Downloads/VTK/Common/Testing/HeaderTesting.py" "/home/lakers/Downloads/VTK/IO" "VTK_IO_EXPORT" "vtkBase64Utilities.h" "vtkMINC.h" "vtkMySQLDatabasePrivate.h" "vtkODBCInternals.h" "vtkOffsetsManagerArray.h" "vtkPLY.h" "vtkPostgreSQLDatabasePrivate.h" "vtkXMLUtilities.h" "vtkXMLWriterC.h" "vtkXMLWriterF.h")
SUBDIRS(Python)
SUBDIRS(Cxx)
