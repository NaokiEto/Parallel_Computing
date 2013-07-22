# Install script for directory: /home/lakers/Downloads/VTK/Parallel

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

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkParallelPythonD.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkParallelPythonD.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkParallelPythonD.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    ENDIF()
  ENDFOREACH()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8" TYPE SHARED_LIBRARY FILES
    "/home/lakers/Downloads/VTK/bin/libvtkParallelPythonD.so.5.8.0"
    "/home/lakers/Downloads/VTK/bin/libvtkParallelPythonD.so.5.8"
    "/home/lakers/Downloads/VTK/bin/libvtkParallelPythonD.so"
    )
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkParallelPythonD.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkParallelPythonD.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkParallelPythonD.so"
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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkParallel.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkParallel.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkParallel.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    ENDIF()
  ENDFOREACH()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8" TYPE SHARED_LIBRARY FILES
    "/home/lakers/Downloads/VTK/bin/libvtkParallel.so.5.8.0"
    "/home/lakers/Downloads/VTK/bin/libvtkParallel.so.5.8"
    "/home/lakers/Downloads/VTK/bin/libvtkParallel.so"
    )
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkParallel.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkParallel.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkParallel.so"
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
    "/home/lakers/Downloads/VTK/Parallel/vtkBranchExtentTranslator.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkCachingInterpolatedVelocityField.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkClientServerSynchronizedRenderers.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkCollectGraph.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkCollectPolyData.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkCollectTable.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkCommunicator.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkCompositedSynchronizedRenderers.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkCompositer.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkCompressCompositer.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkCutMaterial.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkDistributedDataFilter.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkDistributedStreamTracer.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkDummyCommunicator.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkDummyController.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkDuplicatePolyData.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkEnSightWriter.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkExtractCTHPart.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkExtractPiece.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkExtractPolyDataPiece.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkExtractUnstructuredGridPiece.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkExtractUserDefinedPiece.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkMPIImageReader.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkMultiProcessController.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkMultiProcessStream.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkParallelFactory.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkPassThroughFilter.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkPCellDataToPointData.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkPChacoReader.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkPCosmoHaloFinder.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkPCosmoReader.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkPDataSetReader.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkPDataSetWriter.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkPExtractArraysOverTime.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkPHardwareSelector.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkPieceRequestFilter.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkPieceScalars.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkPKdTree.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkPLinearExtrusionFilter.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkPNrrdReader.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkPOPReader.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkPOpenFOAMReader.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkPOutlineCornerFilter.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkPOutlineFilter.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkPPolyDataNormals.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkPProbeFilter.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkProcess.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkProcessGroup.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkProcessIdScalars.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkPReflectionFilter.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkPSLACReader.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkPSphereSource.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkPStreamTracer.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkPTableToStructuredGrid.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkRectilinearGridOutlineFilter.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkSocketCommunicator.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkSocketController.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkSubCommunicator.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkSubGroup.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkTemporalFractal.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkTemporalInterpolatedVelocityField.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkTemporalStreamTracer.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkTransmitImageDataPiece.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkTransmitPolyDataPiece.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkTransmitRectilinearGridPiece.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkTransmitStructuredGridPiece.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkTransmitUnstructuredGridPiece.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkVPICReader.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkWindBladeReader.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkXMLPHierarchicalBoxDataWriter.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkXMLPMultiBlockDataWriter.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkClientServerCompositePass.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkCompositeRenderManager.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkCompositeRGBAPass.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkCompositeZPass.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkImageRenderManager.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkMemoryLimitImageDataStreamer.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkParallelRenderManager.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkPImageWriter.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkPipelineSize.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkSynchronizedRenderers.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkSynchronizedRenderWindows.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkTreeCompositer.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkExodusIIWriter.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkMPICommunicator.h"
    "/home/lakers/Downloads/VTK/Parallel/vtkMPIController.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8" TYPE FILE FILES "/home/lakers/Downloads/VTK/Utilities/InstallOnly/vtkParallelKit.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.8" TYPE FILE FILES "/home/lakers/Downloads/VTK/Parallel/vtkMPI.h")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

