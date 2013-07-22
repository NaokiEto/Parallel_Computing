# Install script for directory: /home/lakers/Downloads/VTK/Geovis

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkGeovisPythonD.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkGeovisPythonD.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkGeovisPythonD.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    ENDIF()
  ENDFOREACH()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8" TYPE SHARED_LIBRARY FILES
    "/home/lakers/Downloads/VTK/bin/libvtkGeovisPythonD.so.5.8.0"
    "/home/lakers/Downloads/VTK/bin/libvtkGeovisPythonD.so.5.8"
    "/home/lakers/Downloads/VTK/bin/libvtkGeovisPythonD.so"
    )
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkGeovisPythonD.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkGeovisPythonD.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkGeovisPythonD.so"
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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkGeovis.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkGeovis.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkGeovis.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    ENDIF()
  ENDFOREACH()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8" TYPE SHARED_LIBRARY FILES
    "/home/lakers/Downloads/VTK/bin/libvtkGeovis.so.5.8.0"
    "/home/lakers/Downloads/VTK/bin/libvtkGeovis.so.5.8"
    "/home/lakers/Downloads/VTK/bin/libvtkGeovis.so"
    )
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkGeovis.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkGeovis.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkGeovis.so"
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
    "/home/lakers/Downloads/VTK/Geovis/vtkCompassRepresentation.h"
    "/home/lakers/Downloads/VTK/Geovis/vtkCompassWidget.h"
    "/home/lakers/Downloads/VTK/Geovis/vtkGeoAdaptiveArcs.h"
    "/home/lakers/Downloads/VTK/Geovis/vtkGeoAlignedImageRepresentation.h"
    "/home/lakers/Downloads/VTK/Geovis/vtkGeoAlignedImageSource.h"
    "/home/lakers/Downloads/VTK/Geovis/vtkGeoArcs.h"
    "/home/lakers/Downloads/VTK/Geovis/vtkGeoAssignCoordinates.h"
    "/home/lakers/Downloads/VTK/Geovis/vtkGeoCamera.h"
    "/home/lakers/Downloads/VTK/Geovis/vtkGeoFileImageSource.h"
    "/home/lakers/Downloads/VTK/Geovis/vtkGeoFileTerrainSource.h"
    "/home/lakers/Downloads/VTK/Geovis/vtkGeoGlobeSource.h"
    "/home/lakers/Downloads/VTK/Geovis/vtkGeoGraticule.h"
    "/home/lakers/Downloads/VTK/Geovis/vtkGeoImageNode.h"
    "/home/lakers/Downloads/VTK/Geovis/vtkGeoInteractorStyle.h"
    "/home/lakers/Downloads/VTK/Geovis/vtkGeoProjectionSource.h"
    "/home/lakers/Downloads/VTK/Geovis/vtkGeoProjection.h"
    "/home/lakers/Downloads/VTK/Geovis/vtkGeoRandomGraphSource.h"
    "/home/lakers/Downloads/VTK/Geovis/vtkGeoSampleArcs.h"
    "/home/lakers/Downloads/VTK/Geovis/vtkGeoSource.h"
    "/home/lakers/Downloads/VTK/Geovis/vtkGeoSphereTransform.h"
    "/home/lakers/Downloads/VTK/Geovis/vtkGeoTerrain.h"
    "/home/lakers/Downloads/VTK/Geovis/vtkGeoTerrain2D.h"
    "/home/lakers/Downloads/VTK/Geovis/vtkGeoTerrainNode.h"
    "/home/lakers/Downloads/VTK/Geovis/vtkGeoTransform.h"
    "/home/lakers/Downloads/VTK/Geovis/vtkGeoTreeNode.h"
    "/home/lakers/Downloads/VTK/Geovis/vtkGeoTreeNodeCache.h"
    "/home/lakers/Downloads/VTK/Geovis/vtkGeoView.h"
    "/home/lakers/Downloads/VTK/Geovis/vtkGeoView2D.h"
    "/home/lakers/Downloads/VTK/Geovis/vtkGlobeSource.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8" TYPE FILE FILES "/home/lakers/Downloads/VTK/Utilities/InstallOnly/vtkGeovisKit.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

