// python wrapper for vtkFixedWidthTextReader
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
#include "vtkFixedWidthTextReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkFixedWidthTextReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkFixedWidthTextReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkFixedWidthTextReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkFixedWidthTextReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkTableAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTableAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableAlgorithmNew
#endif

static const char **PyvtkFixedWidthTextReader_Doc();


static PyObject *
PyvtkFixedWidthTextReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedWidthTextReader *op = static_cast<vtkFixedWidthTextReader *>(vp);

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
      tempr = op->vtkFixedWidthTextReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedWidthTextReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedWidthTextReader *op = static_cast<vtkFixedWidthTextReader *>(vp);

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
      tempr = op->vtkFixedWidthTextReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedWidthTextReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedWidthTextReader *op = static_cast<vtkFixedWidthTextReader *>(vp);

  vtkFixedWidthTextReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkFixedWidthTextReader::NewInstance();
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
PyvtkFixedWidthTextReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkFixedWidthTextReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkFixedWidthTextReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedWidthTextReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedWidthTextReader *op = static_cast<vtkFixedWidthTextReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFileName();
      }
    else
      {
      tempr = op->vtkFixedWidthTextReader::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedWidthTextReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedWidthTextReader *op = static_cast<vtkFixedWidthTextReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileName(temp0);
      }
    else
      {
      op->vtkFixedWidthTextReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedWidthTextReader_SetFieldWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedWidthTextReader *op = static_cast<vtkFixedWidthTextReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFieldWidth(temp0);
      }
    else
      {
      op->vtkFixedWidthTextReader::SetFieldWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedWidthTextReader_GetFieldWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedWidthTextReader *op = static_cast<vtkFixedWidthTextReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFieldWidth();
      }
    else
      {
      tempr = op->vtkFixedWidthTextReader::GetFieldWidth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedWidthTextReader_SetStripWhiteSpace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStripWhiteSpace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedWidthTextReader *op = static_cast<vtkFixedWidthTextReader *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStripWhiteSpace(temp0);
      }
    else
      {
      op->vtkFixedWidthTextReader::SetStripWhiteSpace(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedWidthTextReader_GetStripWhiteSpace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStripWhiteSpace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedWidthTextReader *op = static_cast<vtkFixedWidthTextReader *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStripWhiteSpace();
      }
    else
      {
      tempr = op->vtkFixedWidthTextReader::GetStripWhiteSpace();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedWidthTextReader_StripWhiteSpaceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StripWhiteSpaceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedWidthTextReader *op = static_cast<vtkFixedWidthTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StripWhiteSpaceOn();
      }
    else
      {
      op->vtkFixedWidthTextReader::StripWhiteSpaceOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedWidthTextReader_StripWhiteSpaceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StripWhiteSpaceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedWidthTextReader *op = static_cast<vtkFixedWidthTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StripWhiteSpaceOff();
      }
    else
      {
      op->vtkFixedWidthTextReader::StripWhiteSpaceOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedWidthTextReader_GetHaveHeaders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHaveHeaders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedWidthTextReader *op = static_cast<vtkFixedWidthTextReader *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHaveHeaders();
      }
    else
      {
      tempr = op->vtkFixedWidthTextReader::GetHaveHeaders();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedWidthTextReader_SetHaveHeaders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHaveHeaders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedWidthTextReader *op = static_cast<vtkFixedWidthTextReader *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHaveHeaders(temp0);
      }
    else
      {
      op->vtkFixedWidthTextReader::SetHaveHeaders(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedWidthTextReader_HaveHeadersOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HaveHeadersOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedWidthTextReader *op = static_cast<vtkFixedWidthTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HaveHeadersOn();
      }
    else
      {
      op->vtkFixedWidthTextReader::HaveHeadersOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedWidthTextReader_HaveHeadersOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HaveHeadersOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedWidthTextReader *op = static_cast<vtkFixedWidthTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HaveHeadersOff();
      }
    else
      {
      op->vtkFixedWidthTextReader::HaveHeadersOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkFixedWidthTextReader_Methods[] = {
  {(char*)"GetClassName", PyvtkFixedWidthTextReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkFixedWidthTextReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkFixedWidthTextReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkFixedWidthTextReader\nC++: vtkFixedWidthTextReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkFixedWidthTextReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkFixedWidthTextReader\nC++: vtkFixedWidthTextReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetFileName", PyvtkFixedWidthTextReader_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\n"},
  {(char*)"SetFileName", PyvtkFixedWidthTextReader_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\n"},
  {(char*)"SetFieldWidth", PyvtkFixedWidthTextReader_SetFieldWidth, 1,
   (char*)"V.SetFieldWidth(int)\nC++: void SetFieldWidth(int a)\n\nSet/get the field width\n"},
  {(char*)"GetFieldWidth", PyvtkFixedWidthTextReader_GetFieldWidth, 1,
   (char*)"V.GetFieldWidth() -> int\nC++: int GetFieldWidth()\n\nSet/get the field width\n"},
  {(char*)"SetStripWhiteSpace", PyvtkFixedWidthTextReader_SetStripWhiteSpace, 1,
   (char*)"V.SetStripWhiteSpace(bool)\nC++: void SetStripWhiteSpace(bool a)\n\nIf set, this flag will cause the reader to strip whitespace from\nthe beginning and ending of each field.  Defaults to off.\n"},
  {(char*)"GetStripWhiteSpace", PyvtkFixedWidthTextReader_GetStripWhiteSpace, 1,
   (char*)"V.GetStripWhiteSpace() -> bool\nC++: bool GetStripWhiteSpace()\n\nIf set, this flag will cause the reader to strip whitespace from\nthe beginning and ending of each field.  Defaults to off.\n"},
  {(char*)"StripWhiteSpaceOn", PyvtkFixedWidthTextReader_StripWhiteSpaceOn, 1,
   (char*)"V.StripWhiteSpaceOn()\nC++: void StripWhiteSpaceOn()\n\nIf set, this flag will cause the reader to strip whitespace from\nthe beginning and ending of each field.  Defaults to off.\n"},
  {(char*)"StripWhiteSpaceOff", PyvtkFixedWidthTextReader_StripWhiteSpaceOff, 1,
   (char*)"V.StripWhiteSpaceOff()\nC++: void StripWhiteSpaceOff()\n\nIf set, this flag will cause the reader to strip whitespace from\nthe beginning and ending of each field.  Defaults to off.\n"},
  {(char*)"GetHaveHeaders", PyvtkFixedWidthTextReader_GetHaveHeaders, 1,
   (char*)"V.GetHaveHeaders() -> bool\nC++: bool GetHaveHeaders()\n\nSet/get whether to treat the first line of the file as headers.\n"},
  {(char*)"SetHaveHeaders", PyvtkFixedWidthTextReader_SetHaveHeaders, 1,
   (char*)"V.SetHaveHeaders(bool)\nC++: void SetHaveHeaders(bool a)\n\nSet/get whether to treat the first line of the file as headers.\n"},
  {(char*)"HaveHeadersOn", PyvtkFixedWidthTextReader_HaveHeadersOn, 1,
   (char*)"V.HaveHeadersOn()\nC++: void HaveHeadersOn()\n\nSet/get whether to treat the first line of the file as headers.\n"},
  {(char*)"HaveHeadersOff", PyvtkFixedWidthTextReader_HaveHeadersOff, 1,
   (char*)"V.HaveHeadersOff()\nC++: void HaveHeadersOff()\n\nSet/get whether to treat the first line of the file as headers.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkFixedWidthTextReader_StaticNew()
{
  return vtkFixedWidthTextReader::New();
}

PyObject *PyVTKClass_vtkFixedWidthTextReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkFixedWidthTextReader_StaticNew,
    PyvtkFixedWidthTextReader_Methods,
    "vtkFixedWidthTextReader", modulename,
    NULL, NULL,
    PyvtkFixedWidthTextReader_Doc(),
    PyVTKClass_vtkTableAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkFixedWidthTextReader_Doc()
{
  static const char *docstring[] = {
    "vtkFixedWidthTextReader - reader for pulling in text files with\nfixed-width fields\n\n",
    "Superclass: vtkTableAlgorithm\n\n",
    "vtkFixedWidthTextReader reads in a table from a text file where each\ncolumn occupies a certain number of characters.\n\nThis class emits ProgressEvent for every 100 lines it reads.\n\nCaveats:\n\nThis first version of the reader will assume that all fields have the\nsame width.  It also assumes that the first line in the file has at\nleast as many fields (i.e. at least as many characters) as any other\nlin",
    "e in the file.\n\nThanks:\n\nThanks to Andy Wilson from Sandia National Laboratories for\nimplementing this class.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkFixedWidthTextReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkFixedWidthTextReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkFixedWidthTextReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

