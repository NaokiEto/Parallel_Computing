# Install script for directory: /home/lakers/Downloads/VTK/Utilities/vtkmetaio

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkmetaio.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkmetaio.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkmetaio.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    ENDIF()
  ENDFOREACH()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8" TYPE SHARED_LIBRARY FILES
    "/home/lakers/Downloads/VTK/bin/libvtkmetaio.so.5.8.0"
    "/home/lakers/Downloads/VTK/bin/libvtkmetaio.so.5.8"
    "/home/lakers/Downloads/VTK/bin/libvtkmetaio.so"
    )
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkmetaio.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkmetaio.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkmetaio.so"
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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.8/vtkmetaio" TYPE FILE FILES
    "/home/lakers/Downloads/VTK/Utilities/vtkmetaio/metaTubeGraph.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkmetaio/metaCommand.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkmetaio/metaBlob.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkmetaio/metaLandmark.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkmetaio/metaScene.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkmetaio/metaObject.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkmetaio/metaContour.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkmetaio/metaDTITube.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkmetaio/metaEvent.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkmetaio/metaImage.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkmetaio/metaTube.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkmetaio/metaImageUtils.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkmetaio/metaTransform.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkmetaio/metaImageTypes.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkmetaio/metaOutput.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkmetaio/metaGroup.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkmetaio/metaVesselTube.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkmetaio/metaMesh.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkmetaio/localMetaConfiguration.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkmetaio/metaLine.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkmetaio/metaArray.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkmetaio/metaEllipse.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkmetaio/metaITKUtils.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkmetaio/metaArrow.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkmetaio/metaForm.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkmetaio/metaGaussian.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkmetaio/metaUtils.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkmetaio/metaSurface.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkmetaio/metaTypes.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
