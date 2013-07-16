/**********************************************************************
Copyright ©2013 Advanced Micro Devices, Inc. All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

1	Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
2	Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or
 other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY
 DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
********************************************************************/


#ifndef SDK_COMMANDLINEPARSER_H_
#define SDK_COMMANDLINEPARSER_H_

/******************************************************************************
* Included header files                                                       *
******************************************************************************/
#include <SDKCommandLineArgs.hpp>
#include <opencv2/core/version.hpp>
#include <opencv2/core/core.hpp>
#include <iostream>

namespace {
/******************************************************************************
* SDKCommandLineParser                                                        *
* Class implements various resources required by the test & initializes the   *
* resources used by tests                                                     *
******************************************************************************/
class SDKCommandLineParser
{
  /**< SDKCommandLineArgs class object to handle cmd line options */
  SDKCommandLineArgs *CmdLineArgs;
  std::string sampleName;  /**< Name of the Sample */
  bool quiet;              /**< Cmd Line Option- if Quiet */
  bool verify;             /**< Cmd Line Option- if verify */
  bool timing;             /**< Cmd Line Option- if Timing */
  bool version;            /**< Cmd Line Option- if version */

public:

  /**
  ***************************************************************************
  * @fn initialize
  * @brief Initialize the resources used by tests
  * @return SDK_SUCCESS on success, SDK_FAILURE otherwise
  **************************************************************************/
  int initialize();

  /**
  ***************************************************************************
  * @brief Constructor of SDKCommandLineParser to initialize member
           variables
  * @param strSampleName Name of the Sample
  * @param numSamples Number of sample input values
  **************************************************************************/
  SDKCommandLineParser(std::string strSampleName, unsigned numSamples);
  
  /**
  ***************************************************************************
  * @brief Destructor of SDKCommandLineParser
  **************************************************************************/
  ~SDKCommandLineParser();

  /**
  ***************************************************************************
  * @fn parseCommandLine
  * @brief parses the command line options given by user
  * @param argc Number of elements in cmd line input
  * @param argv Array of char* storing the CmdLine Options
  * @return SDK_SUCCESS on success, SDK_FAILURE otherwise
  **************************************************************************/
  int parseCommandLine(int argc, char **argv);
  
  /**
  ***************************************************************************
  * @fn usage
  * @brief Displays the various options available for any sample
  * @return void
  **************************************************************************/
  void usage();

  /**
  ***************************************************************************
  * @fn isQuiet
  * @brief Returns the boolean value of quiet.
  * @return bool
  **************************************************************************/
  bool isQuiet()
  {
      return quiet;
  }

  /**
  ***************************************************************************
  * @fn isVerify
  * @brief Returns the boolean value of verify.
  * @return bool
  **************************************************************************/
  bool isVerify()
  {
      return verify;
  }

  /**
  ***************************************************************************
  * @fn isTiming
  * @brief Returns the boolean value of timing.
  * @return bool
  **************************************************************************/
  bool isTiming()
  {
      return timing;
  }

  /**
  ***************************************************************************
  * @fn getCmdLineArgs
  * @brief Returns the object that holds command line arguments data.
  * @return SDKCommandLineArgs
  **************************************************************************/
  SDKCommandLineArgs* getCmdLineArgs()
  {
      return CmdLineArgs;
  }

  /**
  ***************************************************************************
  * @fn OpenCVVersion
  * @brief Returns the string containing OpenCV Version
  * @return const char*
  **************************************************************************/
  const char* OpenCVVersion()
  {
      return CV_VERSION;
  }
};

/******************************************************************************
* Implementation of SDKCommandLineParser::initialize()                        *
******************************************************************************/
int SDKCommandLineParser::initialize()
{
  int defaultOptions = 4;

  Option *optionList = new Option[defaultOptions];
  CHECK_ALLOCATION(optionList,
                   "Error. Failed to allocate memory (optionList)\n");

  optionList[0]._sVersion = "q";
  optionList[0]._lVersion = "quiet";
  optionList[0]._description = "Quiet mode. Suppress most text output.";
  optionList[0]._type = CA_NO_ARGUMENT;
  optionList[0]._value = &quiet;

  optionList[1]._sVersion = "e";
  optionList[1]._lVersion = "verify";
  optionList[1]._description =
                 "Verify results against reference implementation.";
  optionList[1]._type = CA_NO_ARGUMENT;
  optionList[1]._value = &verify;

  optionList[2]._sVersion = "t";
  optionList[2]._lVersion = "timing";
  optionList[2]._description = "Print timing related statistics.";
  optionList[2]._type = CA_NO_ARGUMENT;
  optionList[2]._value = &timing;

  optionList[3]._sVersion = "v";
  optionList[3]._lVersion = "version";
  optionList[3]._description = "OpenCV lib & runtime version string.";
  optionList[3]._type = CA_NO_ARGUMENT;
  optionList[3]._value = &version;

  CmdLineArgs = new SDKCommandLineArgs(defaultOptions, optionList);
  CHECK_ALLOCATION(CmdLineArgs,
                   "Failed to allocate memory. (SDKCommandLineArgs)\n");
              
  return SDK_SUCCESS;
}

/******************************************************************************
* Implementation of SDKCommandLineParser::parseCommandLine()                  *
******************************************************************************/
int SDKCommandLineParser::parseCommandLine(int argc, char**argv)
{
  if(CmdLineArgs==NULL)
  {
    std::cout<<"Error. Command line parser not initialized.\n";
    return SDK_FAILURE;
  }
  else
  {
    if(!CmdLineArgs->parse(argv,argc))
    {
      usage();
      if(CmdLineArgs->isArgSet("h",true) == true)
        exit(SDK_SUCCESS);
      return SDK_FAILURE;
    }
    if(CmdLineArgs->isArgSet("h",true) == true)
    {
      usage();
      exit(SDK_SUCCESS);
    }
    if(CmdLineArgs->isArgSet("v", true)
       || CmdLineArgs->isArgSet("version", false))
    {
      std::cout << "OpenCV version : " << OpenCVVersion() << std::endl;
      exit(0);
    }
  }

  return SDK_SUCCESS;
}

/******************************************************************************
* Implementation of SDKCommandLineParser::usage()                             *
******************************************************************************/
void SDKCommandLineParser::usage()
{
  if(CmdLineArgs==NULL)
    std::cout<<"Error. Command line parser not initialized.\n";
  else
  {
    std::cout<<"Usage\n";
    CmdLineArgs->help();
  }
}

/******************************************************************************
* Implementation of SDKCommandLineParser::SDKCommandLineParser()              *
******************************************************************************/
SDKCommandLineParser::SDKCommandLineParser(
                         std::string strSampleName, unsigned numSamples)
{
  sampleName = strSampleName;
  CmdLineArgs = NULL;
  quiet = 0;
  verify = 0;
  timing = 0;
  initialize();
}

/******************************************************************************
* Implementation of SDKCommandLineParser::~SDKCommandLineParser()             *
******************************************************************************/
SDKCommandLineParser::~SDKCommandLineParser()
{
  delete CmdLineArgs;
}
}
#endif
