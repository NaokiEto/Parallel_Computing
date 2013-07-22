# CMake generated Testfile for 
# Source directory: /home/lakers/Downloads/VTK/Imaging/Testing
# Build directory: /home/lakers/Downloads/VTK/Imaging/Testing
# 
# This file includes the relevent testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(HeaderTesting-Imaging "/usr/bin/python" "/home/lakers/Downloads/VTK/Common/Testing/HeaderTesting.py" "/home/lakers/Downloads/VTK/Imaging" "VTK_IMAGING_EXPORT" "vtkImageAppendComponents.h" "vtkImageCityBlockDistance.h" "vtkImageDivergence.h" "vtkImageDotProduct.h" "vtkImageFFT.h" "vtkImageFourierCenter.h" "vtkImageFourierFilter.h" "vtkImageHybridMedian2D.h" "vtkImageLuminance.h" "vtkImageMagnitude.h" "vtkImageMapToRGBA.h" "vtkImageMirrorPad.h" "vtkImageNormalize.h" "vtkImageRFFT.h" "vtkImageStencilIterator.h" "vtkImageWrapPad.h" "vtkSimpleImageFilterExample.h")
SUBDIRS(Cxx)
SUBDIRS(Python)
