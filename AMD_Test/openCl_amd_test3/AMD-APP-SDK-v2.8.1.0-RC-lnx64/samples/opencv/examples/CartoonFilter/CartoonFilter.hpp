/**********************************************************************
Copyright ©2013 Advanced Micro Devices, Inc. All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

.   Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
.   Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or
 other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY
 DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
********************************************************************/

/**
*******************************************************************************
* @file <CartoonFilter.hpp>
* @brief Show interops by using cartoon filter. Class declaration.
*******************************************************************************
*/

#define NOMINMAX
#include <CL/cl.hpp>

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <SDKCommandLineParser.hpp>
#include <SDKTimer.hpp>

#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <opencv2/core/operations.hpp>

// for OPENCV-CL
#include "opencv2/ocl/ocl.hpp"

using namespace cv;
using namespace cv::ocl;
using namespace std;

/*!<The string to hold the OpenCL kernel file name.*/
const char *kernelFile = "CartoonFilter_Kernels.cl";

/*!<OpenCL information.*/
std::vector<cv::ocl::Info> oclinfo;

/**
* CartoonFilter
* To show the various interops between OpenCV, OpenCL and OpenCV-CL.
*/
class CartoonFilter
{
  std::string imageFile;  /*!<Input image file.*/
  int iterations;  /*!<Number of iterations for kernel execution.*/

  cv::Mat cvFrameCPU;  /*!<The input image file in cv::Mat format.*/
  cv::Mat cvSrcMat;    /*!<The input cv::Mat for filtering.*/
  cv::Mat cvDstMat;    /*!<The output cv::Mat obtained after filtering.*/
  cv::Mat cvCannyDstMat;  /*!<The output canny matrix in cv::Mat.*/
  cv::Mat cvDstCPU;    /*!<The output cv::Mat obtained after 
                        *  verification by running on CPU.*/
                        
  cv::ocl::oclMat oclSrcMat;  /*!<The input image in cv::ocl::oclMat format.*/
  cv::ocl::oclMat oclCannyMat;/*!<The Canny input mat in
                               *  cv::ocl::oclMat format*/

public:
    SDKCommandLineParser cmdLineParser;/*!<Command line parser object.*/

    /**
    * Constructor
    * Initialize command line parser, default image name, number of iterations
    */
    CartoonFilter(std::string str, unsigned samples)
           : imageFile("CartoonFilter_Input.jpg"), iterations(1),
             cmdLineParser(str, samples) {}

    /** Destructor
    */
    ~CartoonFilter() {}

    // Verification
    /**
    ***************************************************************************
    * @fn do_meanShiftOnCPU
    * @brief Perform Mean Shift Filtering on CPU.
    ***************************************************************************
    */
    void do_meanShiftOnCPU(int x0, int y0, uchar *sptr, uchar *dptr, int sstep,
            cv::Size size, int sp, int sr, int maxIter, float eps, int *tab);

    /**
    ***************************************************************************
    * @fn verifyMeanShiftFilterOnCPU
    * @brief Call do_meanShiftOnCPU for every pixel of the image.
    ***************************************************************************
    */
    void verifyMeanShiftFilterOnCPU(const cv::Mat src, cv::Mat &dst, int sp,
               int sr, cv::TermCriteria crit = cv::TermCriteria(
               cv::TermCriteria::MAX_ITER + cv::TermCriteria::EPS, 5, 1));

    /**
    ***************************************************************************
    * @fn doPixelComparision_canny
    * @brief Verify if src1 matches closely to src2.
    *
    * @return int Success or failure status.
    ***************************************************************************
    */
    int doPixelComparision_canny(const cv::Mat src1, const cv::Mat src2);

    /**
    ***************************************************************************
    * @fn CPURefCartoonFilter
    * @brief Run the cartoon filter on CPU for reference.
    *
    * @param cvSrcCPU The input cv::Mat on which the Cartoon Filter is run.
    * @param cvDstCPU The output cv::Mat obtained.
    *
    * @return void
    ***************************************************************************
    */
    void CPURefCartoonFilter(cv::Mat cvSrcCPU, cv::Mat &cvDstCPU);
    
    /**
    ***************************************************************************
    * @fn verifyResults
    * @brief Compare the GPU Cartoon filtered image with the image 
    *        obtained from CPU run.
    *
    * @return int SDK_SUCCESS on success and nonzero on failure.
    ***************************************************************************
    */
    int verifyResults();

    // Color Conversions
    /**
    ***************************************************************************
    * @fn RGB2Gray_caller
    * @brief Convert RGB image to Gray by doing a OpenCL interop.
    *
    * @param oclSrc The source matrix in RGB format.
    * @param oclDst The color converted destination matrix in Gray format.
    * @param int The index.
    ***************************************************************************
    */
    void RGB2Gray_caller(const oclMat &oclSrc, oclMat &oclDst, int bidx);
    
    /**
    ***************************************************************************
    * @fn Gray2RGB_caller
    * @brief Convert Gray image to RGB by doing a OpenCL interop.
    *
    * @param oclSrc The source matrix in Gray format.
    * @param oclDst The color converted destination matrix in RGB format.
    ***************************************************************************
    */
    void Gray2RGB_caller(const oclMat &oclSrc, oclMat &oclDst);
    
    /**
    ***************************************************************************
    * @fn myCvtColor
    * @brief My convert color chooses and calls the relevant color converter.
    *
    * @param oclSrc The source matrix that needs to be color converted.
    * @param oclDst The color converted destination matrix.
    * @param code The color conversion code.
    ***************************************************************************
    */
    void myCvtColor(const oclMat &oclSrc, oclMat &oclDst, int code);

    /**
    ***************************************************************************
    * @fn initialize
    * @brief Initialize command line arguments.
    *
    * @return int SDK_SUCCESS on success and nonzero on failure.
    ***************************************************************************
    */
    int initialize();
    
    /**
    ***************************************************************************
    * @fn setUp
    * @brief Setup device, input file.
    *
    * @return int SDK_SUCCESS on success and nonzero on failure.
    ***************************************************************************
    */
    int setUp();
    
    /**
    ***************************************************************************
    * @fn showInterops
    * @brief Show interops by using Cartoon Filter.
    *
    * @return int SDK_SUCCESS on success and nonzero on failure.
    ***************************************************************************
    */
    int showInterops();
    
    /**
    ***************************************************************************
    * @fn run
    * @brief Run the filter.
    *
    * @return int SDK_SUCCESS on success and nonzero on failure.
    ***************************************************************************
    */
    int run();

    /**
    ***************************************************************************
    * @fn displayCartoonImage
    * @brief Display the original image and the cartoon.
    ***************************************************************************
    */
    void displayCartoonImage();
};