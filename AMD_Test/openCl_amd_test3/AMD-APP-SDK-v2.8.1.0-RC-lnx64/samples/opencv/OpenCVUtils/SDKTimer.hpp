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


#ifndef SDKTIMER_H_
#define SDKTIMER_H_

/******************************************************************************
* Included header files                                                       *
******************************************************************************/
#include <iostream>
#ifdef _WIN32
#include <windows.h>
#else
#include <sys/time.h>
#include <linux/limits.h>
#endif

/******************************************************************************
* SDKTimer                                                                 *
******************************************************************************/
class SDKTimer
{
  std::string timerName;
  long long clockFreq;
  long long clockTicks;
  long long startTime, endTime;
    
public:
  /** 
  ***************************************************************************
  * @brief Constructor of SDKTimer to initialize member variables
  **************************************************************************/
  SDKTimer()
  {
#ifdef _WIN32
    QueryPerformanceFrequency((LARGE_INTEGER*)&clockFreq);
#else
    clockFreq = (long long)1.0E3;
#endif
    clockTicks = 0;
    startTime = 0;
  }

  /**
  ***************************************************************************
  * @brief Destructor of SDKTimer
  **************************************************************************/
  ~SDKTimer()
  {}

  /**
  ***************************************************************************
  * @fn resetTimer
  * @brief reset the timer 
  **************************************************************************/
  void resetTimer()
  {
#ifdef _WIN32
    QueryPerformanceFrequency((LARGE_INTEGER*)&clockFreq);
#else
    clockFreq = (long long)1.0E3;
#endif
    clockTicks = 0;
    startTime = 0;
  }

  /**
  ***************************************************************************
  * @fn startTimer
  * @brief start the timer 
  **************************************************************************/
  int startTimer()
  {
#ifdef _WIN32
    QueryPerformanceCounter((LARGE_INTEGER*)&(startTime));
#else
    struct timeval curTime;
    gettimeofday(&curTime, 0);
    startTime = (long long)curTime.tv_sec * (long long)1.0E3 + (long long)curTime.tv_usec / (long long)1.0E3;
#endif
    return SDK_SUCCESS;
  }

  /**
  ***************************************************************************
  * @fn stopTimer
  * @brief stop the timer
  * @return runTime = stopTime - startTime
  **************************************************************************/
  int stopTimer()
  {
    if (startTime == 0)
      std::cout << "Warning! stopTimer called before startTimer" << std::endl;
#ifdef _WIN32
    QueryPerformanceCounter((LARGE_INTEGER*)&(endTime));
#else
    struct timeval curTime;
    gettimeofday(&curTime, 0);
    endTime = (long long)curTime.tv_sec * (long long)1.0E3+ (long long)curTime.tv_usec / (long long)1.0E3;
#endif

    endTime = endTime - startTime;
    startTime = 0;
    clockTicks = clockTicks + endTime;

    return SDK_SUCCESS;
  }

double readTimer()
{
  double reading = double(clockTicks);
  reading = double(reading / clockFreq);

  return reading;
}
};

#endif
