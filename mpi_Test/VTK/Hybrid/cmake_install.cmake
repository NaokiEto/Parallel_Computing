# Install script for directory: /home/lakers/Downloads/VTK/Hybrid

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkHybridPythonD.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkHybridPythonD.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkHybridPythonD.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    ENDIF()
  ENDFOREACH()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8" TYPE SHARED_LIBRARY FILES
    "/home/lakers/Downloads/VTK/bin/libvtkHybridPythonD.so.5.8.0"
    "/home/lakers/Downloads/VTK/bin/libvtkHybridPythonD.so.5.8"
    "/home/lakers/Downloads/VTK/bin/libvtkHybridPythonD.so"
    )
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkHybridPythonD.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkHybridPythonD.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkHybridPythonD.so"
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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkHybrid.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkHybrid.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkHybrid.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    ENDIF()
  ENDFOREACH()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8" TYPE SHARED_LIBRARY FILES
    "/home/lakers/Downloads/VTK/bin/libvtkHybrid.so.5.8.0"
    "/home/lakers/Downloads/VTK/bin/libvtkHybrid.so.5.8"
    "/home/lakers/Downloads/VTK/bin/libvtkHybrid.so"
    )
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkHybrid.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkHybrid.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkHybrid.so"
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
    "/home/lakers/Downloads/VTK/Hybrid/vtk3DSImporter.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkArcPlotter.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkAnnotatedCubeActor.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkAxisActor.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkAxesActor.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkBarChartActor.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkCaptionActor2D.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkCornerAnnotation.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkCubeAxesActor.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkCubeAxesActor2D.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkDepthSortPolyData.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkEarthSource.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkFacetReader.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkGreedyTerrainDecimation.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkGridTransform.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkImageDataLIC2D.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkImageDataLIC2DExtentTranslator.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkImageToPolyDataFilter.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkImplicitModeller.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkIterativeClosestPointTransform.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkLandmarkTransform.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkLegendBoxActor.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkLegendScaleActor.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkLSDynaReader.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkMNIObjectReader.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkMNIObjectWriter.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkMNITagPointReader.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkMNITagPointWriter.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkMNITransformReader.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkMNITransformWriter.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkPCAAnalysisFilter.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkPieChartActor.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkPolyDataSilhouette.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkPolyDataToImageStencil.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkProcrustesAlignmentFilter.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkProjectedTerrainPath.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkRIBExporter.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkRIBLight.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkRIBProperty.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkRenderLargeImage.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkSpiderPlotActor.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkStructuredGridLIC2D.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkTemporalDataSetCache.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkTemporalInterpolator.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkTemporalShiftScale.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkTemporalSnapToTimeStep.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkThinPlateSplineTransform.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkTransformToGrid.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkVRMLImporter.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkVectorText.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkVideoSource.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkWeightedTransformFilter.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkXYPlotActor.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkX3D.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkX3DExporter.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkX3DExporterWriter.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkX3DExporterXMLWriter.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkX3DExporterFIWriter.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkExodusIICache.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkExodusIIReader.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkExodusIIReaderParser.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkExodusIIReaderVariableCheck.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkExodusReader.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkDSPFilterDefinition.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkExodusModel.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkDSPFilterGroup.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkPExodusIIReader.h"
    "/home/lakers/Downloads/VTK/Hybrid/vtkPExodusReader.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8" TYPE FILE FILES "/home/lakers/Downloads/VTK/Utilities/InstallOnly/vtkHybridKit.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.8" TYPE FILE FILES "/home/lakers/Downloads/VTK/Hybrid/vtk3DS.h")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

