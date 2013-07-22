# CMake generated Testfile for 
# Source directory: /home/lakers/Downloads/VTK/Hybrid/Testing
# Build directory: /home/lakers/Downloads/VTK/Hybrid/Testing
# 
# This file includes the relevent testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(HeaderTesting-Hybrid "/usr/bin/python" "/home/lakers/Downloads/VTK/Common/Testing/HeaderTesting.py" "/home/lakers/Downloads/VTK/Hybrid" "VTK_HYBRID_EXPORT" "vtk3DS.h" "vtkExodusIIReaderParser.h" "vtkExodusIIReaderPrivate.h" "vtkExodusIIReaderVariableCheck.h" "vtkVRML.h" "vtkX3D.h" "vtkX3DExporterFIWriterHelper.h")
SUBDIRS(Cxx)
SUBDIRS(Python)
