# Install script for directory: /home/lakers/Downloads/VTK/Utilities

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.8" TYPE FILE FILES
    "/home/lakers/Downloads/VTK/Utilities/metaIOConfig.h"
    "/home/lakers/Downloads/VTK/Utilities/vtk_expat.h"
    "/home/lakers/Downloads/VTK/Utilities/vtk_jpeg.h"
    "/home/lakers/Downloads/VTK/Utilities/vtk_png.h"
    "/home/lakers/Downloads/VTK/Utilities/vtk_zlib.h"
    "/home/lakers/Downloads/VTK/Utilities/vtk_gl2ps.h"
    "/home/lakers/Downloads/VTK/Utilities/vtk_tiff.h"
    "/home/lakers/Downloads/VTK/Utilities/vtk_freetype.h"
    "/home/lakers/Downloads/VTK/Utilities/vtk_libxml2.h"
    "/home/lakers/Downloads/VTK/Utilities/vtk_oggtheora.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.8/internal" TYPE FILE FILES "/home/lakers/Downloads/VTK/Utilities/internal/stdio_core.h")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/home/lakers/Downloads/VTK/Utilities/kwsys/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Utilities/vtkzlib/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Utilities/vtkhdf5/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Utilities/vtkjpeg/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Utilities/vtkpng/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Utilities/vtktiff/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Utilities/vtkexpat/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Utilities/vtkfreetype/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Utilities/vtklibxml2/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Utilities/DICOMParser/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Utilities/MaterialLibrary/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Utilities/vtklibproj4/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Utilities/mrmpi/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Utilities/verdict/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Utilities/vtknetcdf/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Utilities/vtkmetaio/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Utilities/vtksqlite/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Utilities/vtkexodus2/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Utilities/vtkalglib/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Utilities/Doxygen/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Utilities/EncodeString/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Utilities/HashSource/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Utilities/VPIC/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Utilities/Cosmo/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Utilities/ftgl/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Utilities/ParseOGLExt/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

