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

#ifndef SDK_COMMANDLINEARGS_HPP_
#define SDK_COMMANDLINEARGS_HPP_

/******************************************************************************
* Included header files                                                       *
******************************************************************************/
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <ctime>
#include <string.h>
#include <cstdlib>

/******************************************************************************
* Defined macros                                                              *
******************************************************************************/
#define SDK_SUCCESS 0
#define SDK_FAILURE 1

#define CHECK_ALLOCATION(actual, msg) \
if(actual == NULL) \
{ \
	std::cout << msg << std::endl; \
	std::cout << "Location : " << __FILE__ << ":" << __LINE__<< std::endl; \
	return SDK_FAILURE; \
}

namespace {

/**************************************************************************
* CmdArgsEnum                                                             *
* Enum for datatype of CmdArgs                                            *
**************************************************************************/
enum CmdArgsEnum
{
  CA_ARG_INT,
  CA_ARG_FLOAT,
  CA_ARG_DOUBLE,
  CA_ARG_STRING,
  CA_NO_ARGUMENT
};

/**************************************************************************
* Option                                                                  *
* struct implements the fields required to map cmd line args to option    *
**************************************************************************/
struct Option
{
  std::string  _sVersion;
  std::string  _lVersion;
  std::string  _description;
  CmdArgsEnum  _type;
  void *       _value;
};

/**************************************************************************
* SDKCommandLineArgs                                                      *
* class implements Support for Command Line Options for any sample        *
**************************************************************************/
class SDKCommandLineArgs
{
private:
  int _numArgs;      /**< number of arguments */
  int _argc;         /**< number of arguments */
  int _seed;         /**< seed value */
  char ** _argv;     /**< array of char* holding CmdLine Options */
  Option * _options; /**< struct option object */

  /**
  *******************************************************************
  * @brief Constructor private and cannot be called directly
  ******************************************************************/
  SDKCommandLineArgs(void)
  {
    _options = NULL;
    _numArgs = 0;
    _argc = 0;
    _argv = NULL;
    _seed = 123;
  }

  /**
  *******************************************************************
  * @fn match
  * @param argv array of CMDLine Options
  * @param argc number of CMdLine Options
  * @return SDK_SUCCESS on success, SDK_FAILURE otherwise
  ******************************************************************/
  int match(char ** argv, int argc);

public:

  /**
  *******************************************************************
  * @brief Constructor to initialize member variables
  * @param numArgs number of arguments
  * @param options array of option objects
  ******************************************************************/
  SDKCommandLineArgs(int numArgs, Option * options)
  : _numArgs(numArgs), _options(options)
  {}

  /**
  *******************************************************************
  * @brief Destructor of SDKCommandLineArgs
  ******************************************************************/
  ~SDKCommandLineArgs()
  {
    if(_options)
      delete[] _options;
  }

  /**
  *******************************************************************
  * @fn AddOption
  * @brief Function to add a new CmdLine Option
  * @param op Option object
  * @return SDK_SUCCESS on success, SDK_FAILURE otherwise
  ******************************************************************/
  int AddOption(Option* op);

  /**
  *******************************************************************
  * @fn DeleteOption
  * @brief Function to a delete CmdLine Option
  * @param op Option object
  * @return SDK_SUCCESS on success, SDK_FAILURE otherwise
  ******************************************************************/
  int DeleteOption(Option* op);

  /**
  *******************************************************************
  * @fn parse
  * @brief Function to parse the Cmdline Options
  * @param argv array of strings of CmdLine Options
  * @param argc Number of CmdLine Options
  * @return 0 on success Positive if expected and Non-zero on failure
  ******************************************************************/
  int parse(char ** argv, int argc);

  /**
  *******************************************************************
  * @fn isArgSet
  * @brief Function to check if a argument is set
  * @param arg option string
  * @param shortVer if the option is short version. (Opt param default=false)
  * @return true if success else false
  ******************************************************************/
  bool isArgSet(std::string arg, bool shortVer = false);

  /**
  *******************************************************************
  * @fn help
  * @brief Function to write help text
  ******************************************************************/
  void help(void);
};

/******************************************************************************
* Implementation of SDKCommandLineArgs::match()                               *
******************************************************************************/
int SDKCommandLineArgs::match(char ** argv, int argc)
{
  int matched  = 0;
  int shortVer = true; // assume short
  char * arg = *argv;

  if ( *arg == '-' && *(arg+1) == '-')
  { // long
      shortVer = false;
      arg++;
  }
  else if (*arg != '-')
  {
      return matched;
  }

  arg++;

  for (int count = 0; count < _numArgs; count++)
  {
    if (shortVer)
    {
      matched = _options[count]._sVersion.compare(arg) == 0 ? 1 : 0;
    }
    else
    {
      matched = _options[count]._lVersion.compare(arg) == 0 ? 1 : 0;
    }

    if (matched == 1)
    {
      if (_options[count]._type == CA_NO_ARGUMENT)
      {
        *((bool *)_options[count]._value) = true;
      }
      //Handing float argument
      else if (_options[count]._type == CA_ARG_FLOAT)
      {
        //FIXME: need to add failure code
        if(argc > 1)
        {
          sscanf(*(argv+1), "%f", (float *)_options[count]._value);
          matched++;
        }
        else
        {
          std::cout<<"Error. Missing argument for \""<<(*argv)<<"\"\n";
          return SDK_FAILURE;
        }
      }
      else if (_options[count]._type == CA_ARG_DOUBLE)
      {
        //FIXME: need to add failure code
        if(argc > 1)
        {
          sscanf(*(argv+1), "%lf", (double *)_options[count]._value);
          matched++;
        }
        else
        {
          std::cout<<"Error. Missing argument for \""<<(*argv)<<"\"\n";
          return SDK_FAILURE;
        }
      }
      else if (_options[count]._type == CA_ARG_INT)
      {
        //FIXME: need to add failure code
        if(argc > 1)
        {
          sscanf(*(argv+1), "%d", (int *)_options[count]._value);
          matched++;
        }
        else
        {
          std::cout<<"Error. Missing argument for \""<<(*argv)<<"\"\n";
          return SDK_FAILURE;
        }
      }
      else
      { // CA_STRING
        if(argc > 1)
        {
          std::string * str = (std::string *)_options[count]._value;
          str->clear();
          str->append(*(argv+1));
          matched++;
        }
        else
        {
          std::cout<<"Error. Missing argument for \""<<(*argv)<<"\"\n";
          return SDK_FAILURE;
        }
      }
      break;
    }
  }
  return matched;
}

/******************************************************************************
* Implementation of SDKCommandLineArgs::parse()                               *
******************************************************************************/
int SDKCommandLineArgs::parse(char ** p_argv, int p_argc)
{
  int matched = 0;
  int argc;
  char **argv;

  _argc = p_argc;
  _argv = p_argv;

  argc = p_argc;
  argv = p_argv;

  if(argc == 1)
    return SDK_FAILURE;

  while (argc > 0)
  {
    matched = match(argv,argc);
    argc -= (matched > 0 ? matched : 1);
    argv += (matched > 0 ? matched : 1);
  }

  return matched;
}

/******************************************************************************
* Implementation of SDKCommandLineArgs::isArgSet()                            *
******************************************************************************/
bool SDKCommandLineArgs::isArgSet(std::string str, bool shortVer)
{
  bool enabled = false;

  for (int count = 0; count < _argc; count++)
  {
    char * arg = _argv[count];

    if (*arg != '-')
    {
      continue;
    }
    else if (*arg == '-' && *(arg+1) == '-' && !shortVer)
    {
      arg++;
    }

    arg++;

    if (str.compare(arg) == 0)
    {
      enabled = true;
      break;
    }
  }

  return enabled;
}

/******************************************************************************
* Implementation of SDKCommandLineArgs::AddOption()                           *
******************************************************************************/
int SDKCommandLineArgs::AddOption(Option* op)
{
    if(!op)
    {
      std::cout<<"Error. Cannot add option, NULL input";
      return -1;
    }
    else
    {
      Option* save;
      if(_options != NULL)
        save = _options;
      _options = new Option[_numArgs + 1];
      if(!_options)
      {
        std::cout<<"Error. Cannot add option ";
        std::cout<<op->_sVersion<<". Memory allocation error\n";
        return SDK_FAILURE;
      }
      if(_options != NULL)
      {
        for(int i=0; i< _numArgs; ++i)
        {
          _options[i] = save[i];
        }
      }
      _options[_numArgs] = *op;
      _numArgs++;
      delete []save;
    }

    return SDK_SUCCESS;
}

/******************************************************************************
* Implementation of SDKCommandLineArgs::DeleteOption()                        *
******************************************************************************/
int SDKCommandLineArgs::DeleteOption(Option* op)
{
  if(!op || _numArgs <= 0)
  {
    std::cout<<"Error. Cannot delete option."
      <<"Null pointer or empty option list\n";
    return SDK_FAILURE;
  }
  for(int i = 0; i < _numArgs; i++)
  {
    if(op->_sVersion == _options[i]._sVersion ||
        op->_lVersion == _options[i]._lVersion )
    {
      for(int j = i; j < _numArgs-1; j++)
      {
        _options[j] = _options[j+1];
      }
      _numArgs--;
    }
  }

    return SDK_SUCCESS;
}

/******************************************************************************
* Implementation of SDKCommandLineArgs::help()                                *
******************************************************************************/
void SDKCommandLineArgs::help(void)
{
  std::string result = "-h, --help\tDisplay this information.\n";

  for (int count = 0; count < _numArgs; count++)
  {
    std::string line;

    if (_options[count]._sVersion.length() > 0)
    {
      line = "-" + _options[count]._sVersion + ", ";
    }

    line += "--" + _options[count]._lVersion
    + "\t"
    + _options[count]._description + "\n";

    result += line;
  }

  std::cout<< result;
}

}

#endif
