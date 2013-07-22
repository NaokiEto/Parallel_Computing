# Install script for directory: /home/lakers/Downloads/VTK/VolumeRendering

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
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkHAVSVolumeMapper_kbufferVP.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkHAVSVolumeMapper_k2FP.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkHAVSVolumeMapper_k2BeginFP.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkHAVSVolumeMapper_k2EndFP.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkHAVSVolumeMapper_k6FP.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkHAVSVolumeMapper_k6BeginFP.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkHAVSVolumeMapper_k6EndFP.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkVolumeTextureMapper3D_FourDependentNoShadeFP.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkVolumeTextureMapper3D_FourDependentShadeFP.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkVolumeTextureMapper3D_OneComponentNoShadeFP.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkVolumeTextureMapper3D_OneComponentShadeFP.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkVolumeTextureMapper3D_TwoDependentNoShadeFP.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkVolumeTextureMapper3D_TwoDependentShadeFP.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkVolumeRenderingToolkit.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkVolumeRenderingPythonD.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkVolumeRenderingPythonD.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkVolumeRenderingPythonD.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    ENDIF()
  ENDFOREACH()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8" TYPE SHARED_LIBRARY FILES
    "/home/lakers/Downloads/VTK/bin/libvtkVolumeRenderingPythonD.so.5.8.0"
    "/home/lakers/Downloads/VTK/bin/libvtkVolumeRenderingPythonD.so.5.8"
    "/home/lakers/Downloads/VTK/bin/libvtkVolumeRenderingPythonD.so"
    )
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkVolumeRenderingPythonD.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkVolumeRenderingPythonD.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkVolumeRenderingPythonD.so"
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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkVolumeRendering.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkVolumeRendering.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkVolumeRendering.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    ENDIF()
  ENDFOREACH()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8" TYPE SHARED_LIBRARY FILES
    "/home/lakers/Downloads/VTK/bin/libvtkVolumeRendering.so.5.8.0"
    "/home/lakers/Downloads/VTK/bin/libvtkVolumeRendering.so.5.8"
    "/home/lakers/Downloads/VTK/bin/libvtkVolumeRendering.so"
    )
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkVolumeRendering.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkVolumeRendering.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkVolumeRendering.so"
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
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkDirectionEncoder.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkEncodedGradientEstimator.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkEncodedGradientShader.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkFiniteDifferenceGradientEstimator.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkFixedPointRayCastImage.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkFixedPointVolumeRayCastCompositeGOHelper.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkFixedPointVolumeRayCastCompositeGOShadeHelper.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkFixedPointVolumeRayCastCompositeHelper.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkFixedPointVolumeRayCastCompositeShadeHelper.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkFixedPointVolumeRayCastHelper.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkFixedPointVolumeRayCastMIPHelper.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkFixedPointVolumeRayCastMapper.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkVolumeRayCastSpaceLeapingImageFilter.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkGPUVolumeRayCastMapper.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkHAVSVolumeMapper.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkProjectedAAHexahedraMapper.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkProjectedTetrahedraMapper.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkRayCastImageDisplayHelper.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkRecursiveSphereDirectionEncoder.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkSmartVolumeMapper.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkSphericalDirectionEncoder.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkVolumeMapper.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkVolumeOutlineSource.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkVolumePicker.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkVolumeProMapper.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkVolumeRayCastCompositeFunction.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkVolumeRayCastFunction.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkVolumeRayCastIsosurfaceFunction.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkVolumeRayCastMIPFunction.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkVolumeRayCastMapper.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkVolumeRenderingFactory.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkVolumeTextureMapper.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkVolumeTextureMapper2D.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkVolumeTextureMapper3D.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkUnstructuredGridBunykRayCastFunction.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkUnstructuredGridHomogeneousRayIntegrator.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkUnstructuredGridLinearRayIntegrator.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkUnstructuredGridPartialPreIntegration.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkUnstructuredGridPreIntegration.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkUnstructuredGridVolumeMapper.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkUnstructuredGridVolumeRayCastFunction.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkUnstructuredGridVolumeRayCastIterator.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkUnstructuredGridVolumeRayIntegrator.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkUnstructuredGridVolumeRayCastMapper.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkUnstructuredGridVolumeZSweepMapper.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkOpenGLGPUVolumeRayCastMapper.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkOpenGLHAVSVolumeMapper.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkOpenGLProjectedAAHexahedraMapper.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkOpenGLProjectedTetrahedraMapper.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkOpenGLRayCastImageDisplayHelper.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkOpenGLVolumeTextureMapper2D.h"
    "/home/lakers/Downloads/VTK/VolumeRendering/vtkOpenGLVolumeTextureMapper3D.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8" TYPE FILE FILES "/home/lakers/Downloads/VTK/Utilities/InstallOnly/vtkVolumeRenderingKit.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

