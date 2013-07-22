# Install script for directory: /home/lakers/Downloads/VTK/IO

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "$HOME/Documents")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "Release")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.8" TYPE FILE FILES "/home/lakers/Downloads/VTK/IO/vtkMINC.h")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkIOPythonD.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkIOPythonD.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkIOPythonD.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    ENDIF()
  ENDFOREACH()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8" TYPE SHARED_LIBRARY FILES
    "/home/lakers/Downloads/VTK/bin/libvtkIOPythonD.so.5.8.0"
    "/home/lakers/Downloads/VTK/bin/libvtkIOPythonD.so.5.8"
    "/home/lakers/Downloads/VTK/bin/libvtkIOPythonD.so"
    )
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkIOPythonD.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkIOPythonD.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkIOPythonD.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_REMOVE
           FILE "${file}")
      IF(CMAKE_INSTALL_DO_STRIP)
        EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "${file}")
      ENDIF(CMAKE_INSTALL_DO_STRIP)
    ENDIF()
  ENDFOREACH()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkIO.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkIO.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkIO.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    ENDIF()
  ENDFOREACH()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8" TYPE SHARED_LIBRARY FILES
    "/home/lakers/Downloads/VTK/bin/libvtkIO.so.5.8.0"
    "/home/lakers/Downloads/VTK/bin/libvtkIO.so.5.8"
    "/home/lakers/Downloads/VTK/bin/libvtkIO.so"
    )
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkIO.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkIO.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkIO.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_REMOVE
           FILE "${file}")
      IF(CMAKE_INSTALL_DO_STRIP)
        EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "${file}")
      ENDIF(CMAKE_INSTALL_DO_STRIP)
    ENDIF()
  ENDFOREACH()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.8" TYPE FILE FILES
    "/home/lakers/Downloads/VTK/IO/vtkAbstractParticleWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkASCIITextCodec.h"
    "/home/lakers/Downloads/VTK/IO/vtkAVSucdReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkBMPReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkBMPWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkBYUReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkBYUWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkBase64InputStream.h"
    "/home/lakers/Downloads/VTK/IO/vtkBase64OutputStream.h"
    "/home/lakers/Downloads/VTK/IO/vtkBase64Utilities.h"
    "/home/lakers/Downloads/VTK/IO/vtkCGMWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkChacoReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkCompositeDataReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkCompositeDataWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkDatabaseToTableReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkDEMReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkDICOMImageReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkDataCompressor.h"
    "/home/lakers/Downloads/VTK/IO/vtkDataObjectReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkDataObjectWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkDataReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkDataSetReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkDataSetWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkDataWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkDelimitedTextWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkEnSight6BinaryReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkEnSight6Reader.h"
    "/home/lakers/Downloads/VTK/IO/vtkEnSightGoldBinaryReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkEnSightGoldReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkEnSightMasterServerReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkEnSightReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkFLUENTReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkFacetWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkGESignaReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkGAMBITReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkGaussianCubeReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkGenericDataObjectReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkGenericDataObjectWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkGenericEnSightReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkGenericMovieWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkGlobFileNames.h"
    "/home/lakers/Downloads/VTK/IO/vtkGraphReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkGraphWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkIVWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkImageReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkImageReader2.h"
    "/home/lakers/Downloads/VTK/IO/vtkImageReader2Collection.h"
    "/home/lakers/Downloads/VTK/IO/vtkImageReader2Factory.h"
    "/home/lakers/Downloads/VTK/IO/vtkImageWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkInputStream.h"
    "/home/lakers/Downloads/VTK/IO/vtkJavaScriptDataWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkJPEGReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkJPEGWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkMFIXReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkMaterialLibrary.h"
    "/home/lakers/Downloads/VTK/IO/vtkMCubesReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkMCubesWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkMedicalImageProperties.h"
    "/home/lakers/Downloads/VTK/IO/vtkMedicalImageReader2.h"
    "/home/lakers/Downloads/VTK/IO/vtkMetaImageReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkMetaImageWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkMINCImageAttributes.h"
    "/home/lakers/Downloads/VTK/IO/vtkMINCImageReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkMINCImageWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkMPASReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkMultiBlockPLOT3DReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkMoleculeReaderBase.h"
    "/home/lakers/Downloads/VTK/IO/vtkNetCDFCFReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkNetCDFPOPReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkNetCDFReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkOBJReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkOpenFOAMReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkOutputStream.h"
    "/home/lakers/Downloads/VTK/IO/vtkPDBReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkPLOT3DReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkPLY.h"
    "/home/lakers/Downloads/VTK/IO/vtkPLYReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkPLYWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkPNGReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkPNGWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkPNMReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkPNMWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkParticleReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkPolyDataReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkPolyDataWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkPostScriptWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkProStarReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkRectilinearGridReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkRectilinearGridWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkRTXMLPolyDataReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkRowQuery.h"
    "/home/lakers/Downloads/VTK/IO/vtkSESAMEReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkShaderCodeLibrary.h"
    "/home/lakers/Downloads/VTK/IO/vtkSLACParticleReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkSLACReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkSQLDatabase.h"
    "/home/lakers/Downloads/VTK/IO/vtkSQLDatabaseSchema.h"
    "/home/lakers/Downloads/VTK/IO/vtkSQLiteDatabase.h"
    "/home/lakers/Downloads/VTK/IO/vtkSQLiteToTableReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkSQLiteQuery.h"
    "/home/lakers/Downloads/VTK/IO/vtkSQLQuery.h"
    "/home/lakers/Downloads/VTK/IO/vtkSLCReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkSTLReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkSTLWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkSimplePointsReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkSortFileNames.h"
    "/home/lakers/Downloads/VTK/IO/vtkStructuredGridReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkStructuredGridWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkStructuredPointsReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkStructuredPointsWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkTableReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkTableWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkTableToDatabaseWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkTableToSQLiteWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkTecplotReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkTextCodec.h"
    "/home/lakers/Downloads/VTK/IO/vtkTextCodecFactory.h"
    "/home/lakers/Downloads/VTK/IO/vtkTIFFReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkTIFFWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkTreeReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkTreeWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkUGFacetReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkUnstructuredGridReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkUnstructuredGridWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkUTF8TextCodec.h"
    "/home/lakers/Downloads/VTK/IO/vtkUTF16TextCodec.h"
    "/home/lakers/Downloads/VTK/IO/vtkVolume16Reader.h"
    "/home/lakers/Downloads/VTK/IO/vtkVolumeReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLCompositeDataReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLDataParser.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLDataReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLDataSetWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLFileReadTester.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLGenericDataObjectReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLHierarchicalBoxDataReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLHierarchicalDataReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLImageDataReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLImageDataWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLHyperOctreeReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLHyperOctreeWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLMaterial.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLMaterialParser.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLMaterialReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLMultiBlockDataReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLMultiGroupDataReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLCompositeDataWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLMultiBlockDataWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLHierarchicalBoxDataWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLPDataReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLPDataSetWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLPDataWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLPImageDataReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLPImageDataWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLPPolyDataReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLPPolyDataWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLPRectilinearGridReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLPRectilinearGridWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLPStructuredDataReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLPStructuredDataWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLPStructuredGridReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLPStructuredGridWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLPUnstructuredDataReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLPUnstructuredDataWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLPUnstructuredGridReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLPUnstructuredGridWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLParser.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLPolyDataReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLPolyDataWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLRectilinearGridReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLRectilinearGridWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLShader.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLStructuredDataReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLStructuredDataWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLStructuredGridReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLStructuredGridWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLUnstructuredDataReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLUnstructuredDataWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLUnstructuredGridReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLUnstructuredGridWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLUtilities.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLWriter.h"
    "/home/lakers/Downloads/VTK/IO/vtkXMLWriterC.h"
    "/home/lakers/Downloads/VTK/IO/vtkXYZMolReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkZLibDataCompressor.h"
    "/home/lakers/Downloads/VTK/IO/vtkRowQueryToTable.h"
    "/home/lakers/Downloads/VTK/IO/vtkArrayReader.h"
    "/home/lakers/Downloads/VTK/IO/vtkArrayWriter.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8" TYPE FILE FILES "/home/lakers/Downloads/VTK/Utilities/InstallOnly/vtkIOKit.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

