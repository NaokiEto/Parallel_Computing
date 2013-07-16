/**********************************************************************
Copyright �2013 Advanced Micro Devices, Inc. All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

�	Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
�	Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or
 other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY
 DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
********************************************************************/


#include "PrefixSum.hpp"

int PrefixSum::setupPrefixSum()
{
    if(length < 2)
    {
        length = 2;
    }
    // allocate and init memory used by host
    cl_uint sizeBytes = length * sizeof(cl_float);

    input = (cl_float *) malloc(sizeBytes);
    CHECK_ALLOCATION(input, "Failed to allocate host memory. (input)");
    // random initialisation of input 
    sampleCommon->fillRandom<cl_float>(input, length, 1, 0, 10);

    if(verify)
    {
        verificationOutput = (cl_float *) malloc(sizeBytes);
        CHECK_ALLOCATION(verificationOutput, "Failed to allocate host memory. (verificationOutput)");
        memset(verificationOutput, 0, sizeBytes);
    }
    // Unless quiet mode has been enabled, print the INPUT array
    if(!quiet) 
        sampleCommon->printArray<cl_float>("Input : ", input, length, 1);

    return SDK_SUCCESS;
}

int 
PrefixSum::genBinaryImage()
{
    streamsdk::bifData binaryData;
    binaryData.kernelName = std::string("PrefixSum_Kernels.cl");
    binaryData.flagsStr = std::string("");
    if(isComplierFlagsSpecified())
    binaryData.flagsFileName = std::string(flags.c_str());
    binaryData.binaryName = std::string(dumpBinary.c_str());
    int status = sampleCommon->generateBinaryImage(binaryData);
    return status;
}

int
PrefixSum::setupCL(void)
{
    cl_int status = 0;
    cl_device_type dType;

    if(deviceType.compare("cpu") == 0)
    {
        dType = CL_DEVICE_TYPE_CPU;
    }
    else //deviceType = "gpu" 
    {
        dType = CL_DEVICE_TYPE_GPU;
        if(isThereGPU() == false)
        {
            std::cout << "GPU not found. Falling back to CPU device" << std::endl;
            dType = CL_DEVICE_TYPE_CPU;
        }
    }
	
    // Get platform
    cl_platform_id platform = NULL;
    int retValue = sampleCommon->getPlatform(platform, platformId, isPlatformEnabled());
    CHECK_ERROR(retValue, SDK_SUCCESS, "sampleCommon->getPlatform() failed");

    // Display available devices.
    retValue = sampleCommon->displayDevices(platform, dType);
    CHECK_ERROR(retValue, SDK_SUCCESS, "sampleCommon::displayDevices() failed");

    // If we could find our platform, use it. Otherwise use just available platform.
    cl_context_properties cps[3] = 
    {
        CL_CONTEXT_PLATFORM, 
        (cl_context_properties)platform, 
        0
    };

    context = clCreateContextFromType(
                  cps,
                  dType,
                  NULL,
                  NULL,
                  &status);
    CHECK_OPENCL_ERROR(status, "clCreateContextFromType failed.");

    status = sampleCommon->getDevices(context, &devices, deviceId, isDeviceIdEnabled());
    CHECK_ERROR(status, SDK_SUCCESS, "sampleCommon::getDevices() failed");

    //Set device info of given cl_device_id
    status = deviceInfo.setDeviceInfo(devices[deviceId]);
    CHECK_ERROR(status, SDK_SUCCESS, "SDKDeviceInfo::setDeviceInfo() failed"); 

	// Create command queue
    commandQueue = clCreateCommandQueue(context,
                                        devices[deviceId],
                                        0,
                                        &status);
    CHECK_OPENCL_ERROR(status, "clCreateCommandQueue failed.");
	
    inputBuffer = clCreateBuffer(
                      context, 
                      CL_MEM_READ_ONLY,
                      sizeof(cl_float) * length,
                      NULL, 
                      &status);
    CHECK_OPENCL_ERROR(status, "clCreateBuffer failed. (inputBuffer)");  

    outputBuffer = clCreateBuffer(
                      context, 
					  CL_MEM_WRITE_ONLY,
                      sizeof(cl_float) * length,
                      NULL, 
                      &status);
    CHECK_OPENCL_ERROR(status, "clCreateBuffer failed. (outputBuffer)");  

    // create a CL program using the kernel source 
    streamsdk::buildProgramData buildData;
    buildData.kernelName = std::string("PrefixSum_Kernels.cl");
    buildData.devices = devices;
    buildData.deviceId = deviceId;
    buildData.flagsStr = std::string("");

    if(isLoadBinaryEnabled())
        buildData.binaryName = std::string(loadBinary.c_str());

    if(isComplierFlagsSpecified())
        buildData.flagsFileName = std::string(flags.c_str());

    retValue = sampleCommon->buildOpenCLProgram(program, context, buildData);
    CHECK_ERROR(retValue, SDK_SUCCESS, "sampleCommon::buildOpenCLProgram() failed");

    // get a kernel object handle for a kernel with the given name
    group_kernel = clCreateKernel(program, "group_prefixSum", &status);
    CHECK_OPENCL_ERROR(status, "clCreateKernel::group_prefixSum failed.");

    global_kernel = clCreateKernel(program, "global_prefixSum", &status);
    CHECK_OPENCL_ERROR(status, "clCreateKernel::global_prefixSum failed.");
	
    // Move data host to device
	cl_float *ptr;
    status = mapBuffer( inputBuffer, ptr, length, CL_MAP_WRITE_INVALIDATE_REGION);
    CHECK_ERROR(status, SDK_SUCCESS, "Failed to map device buffer.(textBuf)");
    memcpy(ptr, input, (length * sizeof(cl_float)));
    status = unmapBuffer(inputBuffer, ptr);
    CHECK_ERROR(status, SDK_SUCCESS, "Failed to unmap device buffer.(inputBuffer)");

    return SDK_SUCCESS;
}

int 
PrefixSum::runGroupKernel(size_t offset)
{
	size_t dataSize = length/offset;
	size_t localThreads = kernelInfo.kernelWorkGroupSize;
	size_t globalThreads = (dataSize+1) / 2;	// Actual threads needed
	// Set global thread size multiple of local thread size.
	globalThreads = ((globalThreads + localThreads - 1) / localThreads) * localThreads;

	// Set appropriate arguments to the kernel
	// 1st argument to the kernel - outputBuffer
	int status = clSetKernelArg(
					group_kernel, 
					0, 
					sizeof(cl_mem), 
					(void *)&outputBuffer);
	CHECK_OPENCL_ERROR(status, "clSetKernelArg failed.(outputBuffer)");
	// 2nd argument to the kernel - inputBuffer
	status = clSetKernelArg(
					group_kernel, 
					1, 
					sizeof(cl_mem), 
					// After the 1st kernel run, we read the input from outputBuffer and update in outputBuffer.
					(offset>1) ? (void *)&outputBuffer  : (void *)&inputBuffer);
	CHECK_OPENCL_ERROR(status, "clSetKernelArg failed.(inputBuffer)");
	// 3rd argument to the kernel - local memory
	status = clSetKernelArg(
					group_kernel, 
					2, 
					2*localThreads*sizeof(cl_float), 
					NULL);
	CHECK_OPENCL_ERROR(status, "clSetKernelArg failed.(kernel)");
	// 4th argument to the kernel - length
	status = clSetKernelArg(
					group_kernel, 
					3, 
					sizeof(cl_int),
					(void*)&length);
	CHECK_OPENCL_ERROR(status, "clSetKernelArg failed.(length)");
	// 5th argument to the kernel - memory offset for each input element
	status = clSetKernelArg(
					group_kernel,
					4,
					sizeof(cl_int),
					(void*)&offset);
	CHECK_OPENCL_ERROR(status, "clSetKernelArg failed.(offset)");
	// Enqueue a kernel run call
	cl_event ndrEvt;
	status = clEnqueueNDRangeKernel(
					commandQueue,
					group_kernel,
					1,
					NULL,
					&globalThreads,
					&localThreads,
					0,
					NULL,
					&ndrEvt);
	CHECK_OPENCL_ERROR(status, "clEnqueueNDRangeKernel failed.");

	status = clFlush(commandQueue);
	CHECK_OPENCL_ERROR(status, "clFlush failed.(commandQueue)");
	
	status = sampleCommon->waitForEventAndRelease(&ndrEvt);
	CHECK_ERROR(status, SDK_SUCCESS, "WaitForEventAndRelease(ndrEvt) Failed");
	
	return SDK_SUCCESS;
}

int 
PrefixSum::runGlobalKernel(size_t offset)
{
	size_t localThreads = kernelInfo.kernelWorkGroupSize;
	size_t localDataSize = localThreads << 1;	// Each thread work on 2 elements

	// Set number of threads needed for global_kernel.
	size_t globalThreads = length - offset;
	globalThreads -= (globalThreads / (offset * localDataSize)) * offset;

	// Set global thread size multiple of local thread size.
	globalThreads = ((globalThreads + localThreads - 1) / localThreads) * localThreads;

	// Set appropriate arguments to the kernel
	// 1st argument to the kernel - Global Buffer
	int status = clSetKernelArg(global_kernel,
                  				0,
                  				sizeof(cl_mem),
                  				(void *)&outputBuffer);
	CHECK_OPENCL_ERROR(status, "clSetKernelArg failed.(outputBuffer)");
	// 2nd argument to the kernel - offset
	status = clSetKernelArg(global_kernel,
               				1,
               				sizeof(cl_int),
               				(void*)&offset);
	CHECK_OPENCL_ERROR(status, "clSetKernelArg failed.(offset)");
	// 3rd argument to the kernel - offset
	status = clSetKernelArg(global_kernel,
							2,
							sizeof(cl_int),
							(void*)&length);
	CHECK_OPENCL_ERROR(status, "clSetKernelArg failed.(length)");
	// Run the kernel
	cl_event ndrEvt;
	status = clEnqueueNDRangeKernel(
							commandQueue,
							global_kernel,
							1,
							NULL,
							&globalThreads,
							&localThreads,
							0,
							NULL,
							&ndrEvt);
    CHECK_OPENCL_ERROR(status, "clEnqueueNDRangeKernel failed.");
	
	status = clFlush(commandQueue);
    CHECK_OPENCL_ERROR(status, "clFlush failed.(commandQueue)");

    status = sampleCommon->waitForEventAndRelease(&ndrEvt);
    CHECK_ERROR(status, SDK_SUCCESS, "WaitForEventAndRelease(ndrEvt) Failed");

	return SDK_SUCCESS;
}

int 
PrefixSum::runCLKernels(void)
{
    cl_int status;

    status =  kernelInfo.setKernelWorkGroupInfo(group_kernel, devices[deviceId]);
    CHECK_ERROR(status, SDK_SUCCESS, "setKErnelWorkGroupInfo() failed");
	size_t localThreads = kernelInfo.kernelWorkGroupSize;
	size_t localDataSize = localThreads << 1;	// Each thread work on 2 elements

    cl_ulong availableLocalMemory = deviceInfo.localMemSize - kernelInfo.localMemoryUsed;
    cl_ulong neededLocalMemory = localDataSize * sizeof(cl_float); 
    if(neededLocalMemory > availableLocalMemory)
    {
        std::cout << "Unsupported: Insufficient local memory on device." << std::endl;
        return SDK_SUCCESS;
    }

    cl_event writeEvt;
    status = clEnqueueWriteBuffer(
                commandQueue,
                inputBuffer,
                CL_FALSE,
                0,
                sizeof(cl_float) * length,
                input,
                0,
                NULL,
                &writeEvt);
    CHECK_OPENCL_ERROR(status, "clEnqueueWriteBuffer failed.(inputBuffer)");
    status = clFlush(commandQueue);
    CHECK_OPENCL_ERROR(status, "clFlush failed.(commandQueue)");
    status = sampleCommon->waitForEventAndRelease(&writeEvt);
    CHECK_ERROR(status, SDK_SUCCESS, "WaitForEventAndRelease(writeEvt) Failed");

	for(size_t offset=1; offset<length; offset *= localDataSize) 
	{
		if ((length/offset) > 1)  // Need atlest 2 element for process the kernel
		{
			if(runGroupKernel(offset) != SDK_SUCCESS)
				return SDK_FAILURE;
		}

		// Call global_kernel for update all elements
		if(offset > 1) 
		{
			if(runGlobalKernel(offset) != SDK_SUCCESS)
				return SDK_FAILURE;
		}
	}

    return SDK_SUCCESS;
}

void 
PrefixSum::prefixSumCPUReference(
    cl_float * output,
    cl_float * input,
    const cl_uint length)
{
    output[0] = input[0];

    for(cl_uint i = 1; i< length; ++i)
    {
        output[i] = input[i] + output[i-1];
    }
}

int PrefixSum::initialize()
{
    // Call base class Initialize to get default configuration
    if(this->SDKSample::initialize() != SDK_SUCCESS)
        return SDK_FAILURE;

    streamsdk::Option* array_length = new streamsdk::Option;
    CHECK_ALLOCATION(array_length, "Memory allocation error. (array_length)");

    array_length->_sVersion = "x";
    array_length->_lVersion = "length";
    array_length->_description = "Length of the input array";
    array_length->_type = streamsdk::CA_ARG_INT;
    array_length->_value = &length;
    sampleArgs->AddOption(array_length);
    delete array_length;

    streamsdk::Option* num_iterations = new streamsdk::Option;
    CHECK_ALLOCATION(num_iterations, "Memory allocation error. (num_iterations)");

    num_iterations->_sVersion = "i";
    num_iterations->_lVersion = "iterations";
    num_iterations->_description = "Number of iterations for kernel execution";
    num_iterations->_type = streamsdk::CA_ARG_INT;
    num_iterations->_value = &iterations;

    sampleArgs->AddOption(num_iterations);
    delete num_iterations;

    return SDK_SUCCESS;
}

int PrefixSum::setup()
{
    if(!sampleCommon->isPowerOf2(length))
        length = sampleCommon->roundToPowerOf2(length);
    if(setupPrefixSum() != SDK_SUCCESS)
        return SDK_FAILURE;

    int timer = sampleCommon->createTimer();
    sampleCommon->resetTimer(timer);
    sampleCommon->startTimer(timer);

    if (setupCL() != SDK_SUCCESS)
        return SDK_FAILURE;

    sampleCommon->stopTimer(timer);
    setupTime = (cl_double)sampleCommon->readTimer(timer);
    return SDK_SUCCESS;
}


int PrefixSum::run()
{
    int status = 0;

    // Warm up
    for(int i = 0; i < 2 && iterations != 1; i++)
    {
        // Arguments are set and execution call is enqueued on command buffer
        if(runCLKernels() != SDK_SUCCESS)
            return SDK_FAILURE;
    }

    std::cout << "Executing kernel for " << iterations 
              << " iterations" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;

    int timer = sampleCommon->createTimer();
    sampleCommon->resetTimer(timer);
    sampleCommon->startTimer(timer);   

    for(int i = 0; i < iterations; i++)
    {
        // Arguments are set and execution call is enqueued on command buffer
        if(runCLKernels() != SDK_SUCCESS)
            return SDK_FAILURE;
    }

    sampleCommon->stopTimer(timer);
    kernelTime = (double)(sampleCommon->readTimer(timer));

    return SDK_SUCCESS;
}

int PrefixSum::verifyResults()
{
	int status = SDK_SUCCESS;
    if(verify)
    {
		// Read the device output buffer
		cl_float *ptrOutBuff;
		int status = mapBuffer (outputBuffer, ptrOutBuff,  length * sizeof(cl_float), CL_MAP_READ);
		CHECK_ERROR(status, SDK_SUCCESS, "Failed to map device buffer.(resultBuf)");
	
        // reference implementation
        prefixSumCPUReference(verificationOutput, input, length);

        // compare the results and see if they match
		float epsilon = length * 1e-7f;
        if(sampleCommon->compare(ptrOutBuff, verificationOutput, length, epsilon))
        {
            std::cout << "Passed!\n" << std::endl;
            status = SDK_SUCCESS;
        }
        else
        {
            std::cout << "Failed\n" << std::endl;
            status = SDK_FAILURE;
        }
		
		if(!quiet) {
			sampleCommon->printArray<cl_float>("Output : ", ptrOutBuff, length, 1);
		}

		// un-map outputBuffer
		int result = unmapBuffer(outputBuffer, ptrOutBuff);
		CHECK_ERROR(result, SDK_SUCCESS, "Failed to unmap device buffer.(resultCountBuf)");
    }
    return status;
}

void PrefixSum::printStats()
{
	std::string strArray[4] = 
    {
        "Samples", 
        "Setup Time(sec)", 
        "Avg. kernel time (sec)", 
        "Samples used /sec"
    };
    std::string stats[4];
    double avgKernelTime = kernelTime / iterations;

    stats[0] = sampleCommon->toString(length, std::dec);
    stats[1] = sampleCommon->toString(setupTime, std::dec);
    stats[2] = sampleCommon->toString(avgKernelTime, std::dec);
    stats[3] = sampleCommon->toString((length/avgKernelTime), std::dec);

    this->SDKSample::printStats(strArray, stats, 4);
}

int PrefixSum::cleanup()
{
    // Releases OpenCL resources (Context, Memory etc.)
    cl_int status = 0;

    status = clReleaseKernel(group_kernel);
    CHECK_OPENCL_ERROR(status, "clReleaseKernel failed.(program)");

    status = clReleaseKernel(global_kernel);
    CHECK_OPENCL_ERROR(status, "clReleaseKernel failed.(program)");

    status = clReleaseProgram(program);
    CHECK_OPENCL_ERROR(status, "clReleaseProgram failed.(program)");

    status = clReleaseMemObject(inputBuffer);
    CHECK_OPENCL_ERROR(status, "clReleaseMemObject failed.(inputBuffer)");

    status = clReleaseMemObject(outputBuffer);
    CHECK_OPENCL_ERROR(status, "clReleaseMemObject failed.(outputBuffer)");

    status = clReleaseCommandQueue(commandQueue);
    CHECK_OPENCL_ERROR(status, "clReleaseCommandQueue failed.(commandQueue)");

    status = clReleaseContext(context);
    CHECK_OPENCL_ERROR(status, "clReleaseContext failed.(context)");

    return SDK_SUCCESS;
}

template<typename T>
int PrefixSum::mapBuffer(cl_mem deviceBuffer, T* &hostPointer, size_t sizeInBytes, cl_map_flags flags)
{
    cl_int status;
    hostPointer = (T*) clEnqueueMapBuffer(commandQueue,
                                     deviceBuffer,
                                     CL_TRUE,
                                     flags,
                                     0,
                                     sizeInBytes,
                                     0,
                                     NULL,
                                     NULL,
                                     &status);
    CHECK_OPENCL_ERROR(status, "clEnqueueMapBuffer failed");

    status = clFinish(commandQueue);
    CHECK_OPENCL_ERROR(status, "clFinish failed.");

    return SDK_SUCCESS;
}

int 
PrefixSum::unmapBuffer(cl_mem deviceBuffer, void* hostPointer)
{
    cl_int status;
    status = clEnqueueUnmapMemObject(commandQueue, 
                                     deviceBuffer, 
                                     hostPointer, 
                                     0, 
                                     NULL, 
                                     NULL);
    CHECK_OPENCL_ERROR(status, "clEnqueueUnmapMemObject failed");

    status = clFinish(commandQueue);
    CHECK_OPENCL_ERROR(status, "clFinish failed.");

    return SDK_SUCCESS;
}

int 
main(int argc, char * argv[])
{

    PrefixSum clPrefixSum("OpenCL PrefixSum");
    // Initialize
    if(clPrefixSum.initialize() != SDK_SUCCESS)
        return SDK_FAILURE;

    if(clPrefixSum.parseCommandLine(argc, argv) != SDK_SUCCESS)
        return SDK_FAILURE;

    if(clPrefixSum.isDumpBinaryEnabled())
    {
        //GenBinaryImage
        return clPrefixSum.genBinaryImage();
    }

    // Setup
    if(clPrefixSum.setup() != SDK_SUCCESS)
        return SDK_FAILURE;
    
    // Run
    if(clPrefixSum.run() != SDK_SUCCESS)
        return SDK_FAILURE;

    // VerifyResults
    if(clPrefixSum.verifyResults() != SDK_SUCCESS)
        return SDK_FAILURE;

    // Cleanup
    if (clPrefixSum.cleanup() != SDK_SUCCESS)
        return SDK_FAILURE;

    clPrefixSum.printStats();
    return SDK_SUCCESS;
}
