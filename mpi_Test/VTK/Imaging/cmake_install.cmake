# Install script for directory: /home/lakers/Downloads/VTK/Imaging

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkImagingPythonD.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkImagingPythonD.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkImagingPythonD.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    ENDIF()
  ENDFOREACH()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8" TYPE SHARED_LIBRARY FILES
    "/home/lakers/Downloads/VTK/bin/libvtkImagingPythonD.so.5.8.0"
    "/home/lakers/Downloads/VTK/bin/libvtkImagingPythonD.so.5.8"
    "/home/lakers/Downloads/VTK/bin/libvtkImagingPythonD.so"
    )
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkImagingPythonD.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkImagingPythonD.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkImagingPythonD.so"
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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkImaging.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkImaging.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkImaging.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    ENDIF()
  ENDFOREACH()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8" TYPE SHARED_LIBRARY FILES
    "/home/lakers/Downloads/VTK/bin/libvtkImaging.so.5.8.0"
    "/home/lakers/Downloads/VTK/bin/libvtkImaging.so.5.8"
    "/home/lakers/Downloads/VTK/bin/libvtkImaging.so"
    )
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkImaging.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkImaging.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkImaging.so"
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
    "/home/lakers/Downloads/VTK/Imaging/vtkBooleanTexture.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkExtractVOI.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkFastSplatter.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkGaussianSplatter.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageAccumulate.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageAnisotropicDiffusion2D.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageAnisotropicDiffusion3D.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageAppend.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageAppendComponents.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageBlend.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageButterworthHighPass.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageButterworthLowPass.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageCacheFilter.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageCanvasSource2D.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageCast.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageChangeInformation.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageCheckerboard.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageCityBlockDistance.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageClip.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageConnector.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageConstantPad.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageContinuousDilate3D.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageContinuousErode3D.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageConvolve.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageCorrelation.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageCursor3D.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageDataStreamer.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageDecomposeFilter.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageDifference.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageDilateErode3D.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageDivergence.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageDotProduct.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageEllipsoidSource.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageEuclideanDistance.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageEuclideanToPolar.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageExport.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageExtractComponents.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageFFT.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageFlip.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageFourierCenter.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageFourierFilter.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageGaussianSmooth.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageGaussianSource.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageGradient.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageGradientMagnitude.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageGridSource.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageHSIToRGB.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageHSVToRGB.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageHybridMedian2D.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageIdealHighPass.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageIdealLowPass.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageImport.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageImportExecutive.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageIslandRemoval2D.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageIterateFilter.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageLaplacian.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageLogarithmicScale.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageLogic.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageLuminance.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageMagnify.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageMagnitude.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageMandelbrotSource.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageMapToColors.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageMapToRGBA.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageMapToWindowLevelColors.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageMask.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageMaskBits.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageMathematics.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageMedian3D.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageMirrorPad.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageNoiseSource.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageNonMaximumSuppression.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageNormalize.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageOpenClose3D.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImagePadFilter.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImagePermute.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageSlab.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageQuantizeRGBToIndex.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageRFFT.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageRGBToHSI.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageRGBToHSV.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageRange3D.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageRectilinearWipe.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageResample.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageReslice.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageSeedConnectivity.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageSeparableConvolution.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageShiftScale.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageShrink3D.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageSinusoidSource.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageSkeleton2D.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageSobel2D.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageSobel3D.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageSpatialAlgorithm.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageStencil.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageStencilIterator.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageStencilToImage.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageStencilAlgorithm.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageStencilData.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageStencilSource.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageThreshold.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageToImageStencil.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageTranslateExtent.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageVariance3D.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageWrapPad.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageWeightedSum.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImplicitFunctionToImageStencil.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkLassoStencilSource.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkPointLoad.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkROIStencilSource.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkRTAnalyticSource.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkSampleFunction.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkShepardMethod.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkSimpleImageFilterExample.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkSurfaceReconstructionFilter.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkTriangularTexture.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkVoxelModeller.h"
    "/home/lakers/Downloads/VTK/Imaging/vtkImageSpatialFilter.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8" TYPE FILE FILES "/home/lakers/Downloads/VTK/Utilities/InstallOnly/vtkImagingKit.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.8" TYPE FILE FILES "/home/lakers/Downloads/VTK/Imaging/vtkImageStencilIterator.txx")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

