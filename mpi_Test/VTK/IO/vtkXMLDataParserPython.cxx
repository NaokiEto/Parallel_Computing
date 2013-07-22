// python wrapper for vtkXMLDataParser
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#if !defined(__APPLE__)
#include "vtkPython.h"
#undef _XOPEN_SOURCE /* Conflicts with standards.h.  */
#undef _THREAD_SAFE /* Conflicts with pthread.h.  */
#endif
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <vtksys/ios/sstream>
#include "vtkXMLDataParser.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLDataParser(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLDataParser(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLDataParserNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLDataParserNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkXMLParserNew
extern "C" { PyObject *PyVTKClass_vtkXMLParserNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLParserNew
#endif

static const char **PyvtkXMLDataParser_Doc();


static PyObject *
PyvtkXMLDataParser_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataParser *op = static_cast<vtkXMLDataParser *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetClassName();
      }
    else
      {
      tempr = op->vtkXMLDataParser::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataParser_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataParser *op = static_cast<vtkXMLDataParser *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsA(temp0);
      }
    else
      {
      tempr = op->vtkXMLDataParser::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataParser_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataParser *op = static_cast<vtkXMLDataParser *>(vp);

  vtkXMLDataParser *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLDataParser::NewInstance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      if (result && PyVTKObject_Check(result))
        {
        PyVTKObject_GetObject(result)->UnRegister(0);
        PyVTKObject_SetFlag(result, VTK_PYTHON_IGNORE_UNREGISTER, 1);
        }
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataParser_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkXMLDataParser *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkXMLDataParser::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataParser_GetRootElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRootElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataParser *op = static_cast<vtkXMLDataParser *>(vp);

  vtkXMLDataElement *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRootElement();
      }
    else
      {
      tempr = op->vtkXMLDataParser::GetRootElement();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataParser_ReadInlineData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadInlineData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataParser *op = static_cast<vtkXMLDataParser *>(vp);

  vtkXMLDataElement *temp0 = NULL;
  int temp1;
  void  *temp2 = NULL;
  vtkIdType temp3;
  vtkIdType temp4;
  int temp5;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetVTKObject(temp0, "vtkXMLDataElement") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      tempr = op->ReadInlineData(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      tempr = op->vtkXMLDataParser::ReadInlineData(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLDataParser_ReadInlineData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadInlineData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataParser *op = static_cast<vtkXMLDataParser *>(vp);

  vtkXMLDataElement *temp0 = NULL;
  int temp1;
  char *temp2 = NULL;
  vtkIdType temp3;
  vtkIdType temp4;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkXMLDataElement") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      tempr = op->ReadInlineData(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      tempr = op->vtkXMLDataParser::ReadInlineData(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLDataParser_ReadInlineData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkXMLDataParser_ReadInlineData_s1(self, args);
    case 5:
      return PyvtkXMLDataParser_ReadInlineData_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ReadInlineData");
  return NULL;
}



static PyObject *
PyvtkXMLDataParser_ReadAppendedData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAppendedData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataParser *op = static_cast<vtkXMLDataParser *>(vp);

  vtkIdType temp0;
  void  *temp1 = NULL;
  vtkIdType temp2;
  vtkIdType temp3;
  int temp4;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      tempr = op->ReadAppendedData(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      tempr = op->vtkXMLDataParser::ReadAppendedData(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLDataParser_ReadAppendedData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAppendedData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataParser *op = static_cast<vtkXMLDataParser *>(vp);

  vtkIdType temp0;
  char *temp1 = NULL;
  vtkIdType temp2;
  vtkIdType temp3;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      tempr = op->ReadAppendedData(temp0, temp1, temp2, temp3);
      }
    else
      {
      tempr = op->vtkXMLDataParser::ReadAppendedData(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLDataParser_ReadAppendedData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 5:
      return PyvtkXMLDataParser_ReadAppendedData_s1(self, args);
    case 4:
      return PyvtkXMLDataParser_ReadAppendedData_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ReadAppendedData");
  return NULL;
}



static PyObject *
PyvtkXMLDataParser_ReadAsciiData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAsciiData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataParser *op = static_cast<vtkXMLDataParser *>(vp);

  void  *temp0 = NULL;
  vtkIdType temp1;
  vtkIdType temp2;
  int temp3;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      tempr = op->ReadAsciiData(temp0, temp1, temp2, temp3);
      }
    else
      {
      tempr = op->vtkXMLDataParser::ReadAsciiData(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataParser_ReadBinaryData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadBinaryData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataParser *op = static_cast<vtkXMLDataParser *>(vp);

  void  *temp0 = NULL;
  vtkIdType temp1;
  vtkIdType temp2;
  int temp3;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      tempr = op->ReadBinaryData(temp0, temp1, temp2, temp3);
      }
    else
      {
      tempr = op->vtkXMLDataParser::ReadBinaryData(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataParser_SetCompressor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataParser *op = static_cast<vtkXMLDataParser *>(vp);

  vtkDataCompressor *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataCompressor"))
    {
    if (ap.IsBound())
      {
      op->SetCompressor(temp0);
      }
    else
      {
      op->vtkXMLDataParser::SetCompressor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataParser_GetCompressor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompressor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataParser *op = static_cast<vtkXMLDataParser *>(vp);

  vtkDataCompressor *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCompressor();
      }
    else
      {
      tempr = op->vtkXMLDataParser::GetCompressor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataParser_GetWordTypeSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWordTypeSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataParser *op = static_cast<vtkXMLDataParser *>(vp);

  int temp0;
  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWordTypeSize(temp0);
      }
    else
      {
      tempr = op->vtkXMLDataParser::GetWordTypeSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataParser_Parse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Parse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataParser *op = static_cast<vtkXMLDataParser *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->Parse();
      }
    else
      {
      tempr = op->vtkXMLDataParser::Parse();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataParser_GetAbort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataParser *op = static_cast<vtkXMLDataParser *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAbort();
      }
    else
      {
      tempr = op->vtkXMLDataParser::GetAbort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataParser_SetAbort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataParser *op = static_cast<vtkXMLDataParser *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAbort(temp0);
      }
    else
      {
      op->vtkXMLDataParser::SetAbort(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataParser_GetProgress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataParser *op = static_cast<vtkXMLDataParser *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProgress();
      }
    else
      {
      tempr = op->vtkXMLDataParser::GetProgress();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataParser_SetProgress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProgress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataParser *op = static_cast<vtkXMLDataParser *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProgress(temp0);
      }
    else
      {
      op->vtkXMLDataParser::SetProgress(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataParser_SetAttributesEncoding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributesEncoding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataParser *op = static_cast<vtkXMLDataParser *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAttributesEncoding(temp0);
      }
    else
      {
      op->vtkXMLDataParser::SetAttributesEncoding(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataParser_GetAttributesEncodingMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributesEncodingMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataParser *op = static_cast<vtkXMLDataParser *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAttributesEncodingMinValue();
      }
    else
      {
      tempr = op->vtkXMLDataParser::GetAttributesEncodingMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataParser_GetAttributesEncodingMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributesEncodingMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataParser *op = static_cast<vtkXMLDataParser *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAttributesEncodingMaxValue();
      }
    else
      {
      tempr = op->vtkXMLDataParser::GetAttributesEncodingMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataParser_GetAttributesEncoding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributesEncoding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataParser *op = static_cast<vtkXMLDataParser *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAttributesEncoding();
      }
    else
      {
      tempr = op->vtkXMLDataParser::GetAttributesEncoding();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataParser_CharacterDataHandler(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CharacterDataHandler");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataParser *op = static_cast<vtkXMLDataParser *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->CharacterDataHandler(temp0, temp1);
      }
    else
      {
      op->vtkXMLDataParser::CharacterDataHandler(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLDataParser_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLDataParser_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLDataParser_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLDataParser_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLDataParser\nC++: vtkXMLDataParser *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLDataParser_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLDataParser\nC++: vtkXMLDataParser *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetRootElement", PyvtkXMLDataParser_GetRootElement, 1,
   (char*)"V.GetRootElement() -> vtkXMLDataElement\nC++: vtkXMLDataElement *GetRootElement()\n\nGet the root element from the XML document.\n"},
  {(char*)"ReadInlineData", PyvtkXMLDataParser_ReadInlineData, 1,
   (char*)"V.ReadInlineData(vtkXMLDataElement, int, , int, int, int) -> int\nC++: OffsetType ReadInlineData(vtkXMLDataElement *element,\n    int isAscii, void *buffer, OffsetType startWord,\n    OffsetType numWords, int wordType)\nV.ReadInlineData(vtkXMLDataElement, int, string, int, int) -> int\nC++: OffsetType ReadInlineData(vtkXMLDataElement *element,\n    int isAscii, char *buffer, OffsetType startWord,\n    OffsetType numWords)\n\nRead inline data from inside the given element.  Returns the\nnumber of words read.\n"},
  {(char*)"ReadAppendedData", PyvtkXMLDataParser_ReadAppendedData, 1,
   (char*)"V.ReadAppendedData(int, , int, int, int) -> int\nC++: OffsetType ReadAppendedData(OffsetType offset, void *buffer,\n    OffsetType startWord, OffsetType numWords, int wordType)\nV.ReadAppendedData(int, string, int, int) -> int\nC++: OffsetType ReadAppendedData(OffsetType offset, char *buffer,\n    OffsetType startWord, OffsetType numWords)\n\nRead from an appended data section starting at the given appended\ndata offset.  Returns the number of words read.\n"},
  {(char*)"ReadAsciiData", PyvtkXMLDataParser_ReadAsciiData, 1,
   (char*)"V.ReadAsciiData(, int, int, int) -> int\nC++: OffsetType ReadAsciiData(void *buffer, OffsetType startWord,\n    OffsetType numWords, int wordType)\n\nRead from an ascii data section starting at the current position\nin the stream.  Returns the number of words read.\n"},
  {(char*)"ReadBinaryData", PyvtkXMLDataParser_ReadBinaryData, 1,
   (char*)"V.ReadBinaryData(, int, int, int) -> int\nC++: OffsetType ReadBinaryData(void *buffer, OffsetType startWord,\n     OffsetType maxWords, int wordType)\n\nRead from a data section starting at the current position in the\nstream.  Returns the number of words read.\n"},
  {(char*)"SetCompressor", PyvtkXMLDataParser_SetCompressor, 1,
   (char*)"V.SetCompressor(vtkDataCompressor)\nC++: virtual void SetCompressor(vtkDataCompressor *)\n\nGet/Set the compressor used to decompress binary and appended\ndata after reading from the file.\n"},
  {(char*)"GetCompressor", PyvtkXMLDataParser_GetCompressor, 1,
   (char*)"V.GetCompressor() -> vtkDataCompressor\nC++: vtkDataCompressor *GetCompressor()\n\nGet/Set the compressor used to decompress binary and appended\ndata after reading from the file.\n"},
  {(char*)"GetWordTypeSize", PyvtkXMLDataParser_GetWordTypeSize, 1,
   (char*)"V.GetWordTypeSize(int) -> int\nC++: unsigned long GetWordTypeSize(int wordType)\n\nGet the size of a word of the given type.\n"},
  {(char*)"Parse", PyvtkXMLDataParser_Parse, 1,
   (char*)"V.Parse() -> int\nC++: virtual int Parse()\n\nParse the XML input and check that the file is safe to read.\nReturns 1 for okay, 0 for error.\n"},
  {(char*)"GetAbort", PyvtkXMLDataParser_GetAbort, 1,
   (char*)"V.GetAbort() -> int\nC++: int GetAbort()\n\nGet/Set flag to abort reading of data.  This may be set by a\nprogress event observer.\n"},
  {(char*)"SetAbort", PyvtkXMLDataParser_SetAbort, 1,
   (char*)"V.SetAbort(int)\nC++: void SetAbort(int a)\n\nGet/Set flag to abort reading of data.  This may be set by a\nprogress event observer.\n"},
  {(char*)"GetProgress", PyvtkXMLDataParser_GetProgress, 1,
   (char*)"V.GetProgress() -> float\nC++: float GetProgress()\n\nGet/Set progress of reading data.  This may be checked by a\nprogress event observer.\n"},
  {(char*)"SetProgress", PyvtkXMLDataParser_SetProgress, 1,
   (char*)"V.SetProgress(float)\nC++: void SetProgress(float a)\n\nGet/Set progress of reading data.  This may be checked by a\nprogress event observer.\n"},
  {(char*)"SetAttributesEncoding", PyvtkXMLDataParser_SetAttributesEncoding, 1,
   (char*)"V.SetAttributesEncoding(int)\nC++: void SetAttributesEncoding(int)\n\nGet/Set the character encoding that will be used to set the\nattributes's encoding type of each vtkXMLDataElement created by\nthis parser (i.e., the data element attributes will use that\nencoding internally). If set to VTK_ENCODING_NONE (default), the\nattribute encoding type will not be changed and will default to\nthe vtkXMLDataElement default encoding type (see\nvtkXMLDataElement::AttributeEncoding).\n"},
  {(char*)"GetAttributesEncodingMinValue", PyvtkXMLDataParser_GetAttributesEncodingMinValue, 1,
   (char*)"V.GetAttributesEncodingMinValue() -> int\nC++: int GetAttributesEncodingMinValue()\n\nGet/Set the character encoding that will be used to set the\nattributes's encoding type of each vtkXMLDataElement created by\nthis parser (i.e., the data element attributes will use that\nencoding internally). If set to VTK_ENCODING_NONE (default), the\nattribute encoding type will not be changed and will default to\nthe vtkXMLDataElement default encoding type (see\nvtkXMLDataElement::AttributeEncoding).\n"},
  {(char*)"GetAttributesEncodingMaxValue", PyvtkXMLDataParser_GetAttributesEncodingMaxValue, 1,
   (char*)"V.GetAttributesEncodingMaxValue() -> int\nC++: int GetAttributesEncodingMaxValue()\n\nGet/Set the character encoding that will be used to set the\nattributes's encoding type of each vtkXMLDataElement created by\nthis parser (i.e., the data element attributes will use that\nencoding internally). If set to VTK_ENCODING_NONE (default), the\nattribute encoding type will not be changed and will default to\nthe vtkXMLDataElement default encoding type (see\nvtkXMLDataElement::AttributeEncoding).\n"},
  {(char*)"GetAttributesEncoding", PyvtkXMLDataParser_GetAttributesEncoding, 1,
   (char*)"V.GetAttributesEncoding() -> int\nC++: int GetAttributesEncoding()\n\nGet/Set the character encoding that will be used to set the\nattributes's encoding type of each vtkXMLDataElement created by\nthis parser (i.e., the data element attributes will use that\nencoding internally). If set to VTK_ENCODING_NONE (default), the\nattribute encoding type will not be changed and will default to\nthe vtkXMLDataElement default encoding type (see\nvtkXMLDataElement::AttributeEncoding).\n"},
  {(char*)"CharacterDataHandler", PyvtkXMLDataParser_CharacterDataHandler, 1,
   (char*)"V.CharacterDataHandler(string, int)\nC++: virtual void CharacterDataHandler(const char *data,\n    int length)\n\nIf you need the text inside XMLElements, turn IgnoreCharacterData\noff. This method will then be called when the file is parsed, and\nthe text will be stored in each XMLDataElement. VTK XML Readers\nstore the information elsewhere, so the default is to ignore it.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLDataParser_StaticNew()
{
  return vtkXMLDataParser::New();
}

PyObject *PyVTKClass_vtkXMLDataParserNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLDataParser_StaticNew,
    PyvtkXMLDataParser_Methods,
    "vtkXMLDataParser", modulename,
    NULL, NULL,
    PyvtkXMLDataParser_Doc(),
    PyVTKClass_vtkXMLParserNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"BigEndian", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"LittleEndian", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkXMLDataParser_Doc()
{
  static const char *docstring[] = {
    "vtkXMLDataParser - Used by vtkXMLReader to parse VTK XML files.\n\n",
    "Superclass: vtkXMLParser\n\n",
    "vtkXMLDataParser provides a subclass of vtkXMLParser that constructs\na representation of an XML data format's file using vtkXMLDataElement\nto represent each XML element.  This representation is then used by\nvtkXMLReader and its subclasses to traverse the structure of the file\nand extract data.\n\nSee Also:\n\nvtkXMLDataElement\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLDataParser(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLDataParserNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLDataParser", o) != 0)
    {
    Py_DECREF(o);
    }

}

