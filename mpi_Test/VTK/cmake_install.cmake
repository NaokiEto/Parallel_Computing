# Install script for directory: /home/lakers/Downloads/VTK

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8" TYPE FILE FILES "/home/lakers/Downloads/VTK/VTKBuildSettings.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.8/vtkstd" TYPE FILE FILES "/home/lakers/Downloads/VTK/vtkstd/algorithm")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.8/vtkstd" TYPE FILE FILES "/home/lakers/Downloads/VTK/vtkstd/deque")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.8/vtkstd" TYPE FILE FILES "/home/lakers/Downloads/VTK/vtkstd/exception")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.8/vtkstd" TYPE FILE FILES "/home/lakers/Downloads/VTK/vtkstd/functional")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.8/vtkstd" TYPE FILE FILES "/home/lakers/Downloads/VTK/vtkstd/iterator")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.8/vtkstd" TYPE FILE FILES "/home/lakers/Downloads/VTK/vtkstd/limits")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.8/vtkstd" TYPE FILE FILES "/home/lakers/Downloads/VTK/vtkstd/list")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.8/vtkstd" TYPE FILE FILES "/home/lakers/Downloads/VTK/vtkstd/map")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.8/vtkstd" TYPE FILE FILES "/home/lakers/Downloads/VTK/vtkstd/memory")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.8/vtkstd" TYPE FILE FILES "/home/lakers/Downloads/VTK/vtkstd/new")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.8/vtkstd" TYPE FILE FILES "/home/lakers/Downloads/VTK/vtkstd/numeric")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.8/vtkstd" TYPE FILE FILES "/home/lakers/Downloads/VTK/vtkstd/queue")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.8/vtkstd" TYPE FILE FILES "/home/lakers/Downloads/VTK/vtkstd/set")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.8/vtkstd" TYPE FILE FILES "/home/lakers/Downloads/VTK/vtkstd/stack")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.8/vtkstd" TYPE FILE FILES "/home/lakers/Downloads/VTK/vtkstd/stdexcept")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.8/vtkstd" TYPE FILE FILES "/home/lakers/Downloads/VTK/vtkstd/string")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.8/vtkstd" TYPE FILE FILES "/home/lakers/Downloads/VTK/vtkstd/utility")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.8/vtkstd" TYPE FILE FILES "/home/lakers/Downloads/VTK/vtkstd/vector")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.8" TYPE FILE FILES
    "/home/lakers/Downloads/VTK/vtkCommonInstantiator.h"
    "/home/lakers/Downloads/VTK/vtkFilteringInstantiator.h"
    "/home/lakers/Downloads/VTK/vtkIOInstantiator.h"
    "/home/lakers/Downloads/VTK/vtkImagingInstantiator.h"
    "/home/lakers/Downloads/VTK/vtkGraphicsInstantiator.h"
    "/home/lakers/Downloads/VTK/vtkGenericFilteringInstantiator.h"
    "/home/lakers/Downloads/VTK/vtkRenderingInstantiator.h"
    "/home/lakers/Downloads/VTK/vtkVolumeRenderingInstantiator.h"
    "/home/lakers/Downloads/VTK/vtkHybridInstantiator.h"
    "/home/lakers/Downloads/VTK/vtkWidgetsInstantiator.h"
    "/home/lakers/Downloads/VTK/vtkParallelInstantiator.h"
    "/home/lakers/Downloads/VTK/vtkInfovisInstantiator.h"
    "/home/lakers/Downloads/VTK/vtkGeovisInstantiator.h"
    "/home/lakers/Downloads/VTK/vtkViewsInstantiator.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/CMake" TYPE FILE FILES
    "/home/lakers/Downloads/VTK/CMake/vtkMakeInstantiator.cmake"
    "/home/lakers/Downloads/VTK/CMake/vtkMakeInstantiator.h.in"
    "/home/lakers/Downloads/VTK/CMake/vtkMakeInstantiator.cxx.in"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/CMake" TYPE FILE FILES
    "/home/lakers/Downloads/VTK/CMake/FindMySQL.cmake"
    "/home/lakers/Downloads/VTK/CMake/FindTCL.cmake"
    "/home/lakers/Downloads/VTK/CMake/FindPythonLibs.cmake"
    "/home/lakers/Downloads/VTK/CMake/vtkTclTkMacros.cmake"
    "/home/lakers/Downloads/VTK/CMake/vtkExportKit.cmake"
    "/home/lakers/Downloads/VTK/CMake/vtkKit.cmake.in"
    "/home/lakers/Downloads/VTK/CMake/vtkWrapTcl.cmake"
    "/home/lakers/Downloads/VTK/CMake/vtkWrapJava.cmake"
    "/home/lakers/Downloads/VTK/CMake/vtkWrapPython.cmake"
    "/home/lakers/Downloads/VTK/CMake/vtkWrapperInit.data.in"
    "/home/lakers/Downloads/VTK/CMake/VTKVersionMacros.cmake"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.8" TYPE FILE FILES
    "/home/lakers/Downloads/VTK/vtkConfigure.h"
    "/home/lakers/Downloads/VTK/vtkToolkits.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8" TYPE FILE FILES
    "/home/lakers/Downloads/VTK/UseVTK.cmake"
    "/home/lakers/Downloads/VTK/Wrapping/hints"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/home/lakers/Downloads/VTK/Wrapping/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Utilities/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Common/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Filtering/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Imaging/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Graphics/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/GenericFiltering/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/IO/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Rendering/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/VolumeRendering/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Hybrid/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Widgets/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Parallel/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Infovis/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Geovis/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Views/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Charts/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Wrapping/Python/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Utilities/vtkTclTest2Py/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Common/Testing/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Filtering/Testing/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Graphics/Testing/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/GenericFiltering/Testing/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Imaging/Testing/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/IO/Testing/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Rendering/Testing/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/VolumeRendering/Testing/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Hybrid/Testing/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Widgets/Testing/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Parallel/Testing/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Infovis/Testing/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Geovis/Testing/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Views/Testing/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Charts/Testing/cmake_install.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/Utilities/LastConfigureStep/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

IF(CMAKE_INSTALL_COMPONENT)
  SET(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
ELSE(CMAKE_INSTALL_COMPONENT)
  SET(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
ENDIF(CMAKE_INSTALL_COMPONENT)

FILE(WRITE "/home/lakers/Downloads/VTK/${CMAKE_INSTALL_MANIFEST}" "")
FOREACH(file ${CMAKE_INSTALL_MANIFEST_FILES})
  FILE(APPEND "/home/lakers/Downloads/VTK/${CMAKE_INSTALL_MANIFEST}" "${file}\n")
ENDFOREACH(file)
