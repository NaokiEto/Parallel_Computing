// python wrapper for vtkArrayWriter
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
#include "vtkStdString.h"
#include "vtkArrayWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkArrayWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkArrayWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkArrayWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkArrayWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkWriterNew
extern "C" { PyObject *PyVTKClass_vtkWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkWriterNew
#endif

static const char **PyvtkArrayWriter_Doc();


static PyObject *
PyvtkArrayWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayWriter *op = static_cast<vtkArrayWriter *>(vp);

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
      tempr = op->vtkArrayWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayWriter *op = static_cast<vtkArrayWriter *>(vp);

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
      tempr = op->vtkArrayWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayWriter *op = static_cast<vtkArrayWriter *>(vp);

  vtkArrayWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkArrayWriter::NewInstance();
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
PyvtkArrayWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkArrayWriter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkArrayWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayWriter *op = static_cast<vtkArrayWriter *>(vp);

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
      op->vtkArrayWriter::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayWriter *op = static_cast<vtkArrayWriter *>(vp);

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
      tempr = op->vtkArrayWriter::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayWriter_SetBinary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBinary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayWriter *op = static_cast<vtkArrayWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBinary(temp0);
      }
    else
      {
      op->vtkArrayWriter::SetBinary(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayWriter_GetBinary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayWriter *op = static_cast<vtkArrayWriter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBinary();
      }
    else
      {
      tempr = op->vtkArrayWriter::GetBinary();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayWriter_BinaryOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BinaryOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayWriter *op = static_cast<vtkArrayWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BinaryOn();
      }
    else
      {
      op->vtkArrayWriter::BinaryOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayWriter_BinaryOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BinaryOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayWriter *op = static_cast<vtkArrayWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BinaryOff();
      }
    else
      {
      op->vtkArrayWriter::BinaryOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayWriter_Write_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayWriter *op = static_cast<vtkArrayWriter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->Write();
      }
    else
      {
      tempr = op->vtkArrayWriter::Write();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkArrayWriter_Write_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayWriter *op = static_cast<vtkArrayWriter *>(vp);

  vtkStdString temp0;
  bool temp1 = false;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    if (ap.IsBound())
      {
      tempr = op->Write(temp0, temp1);
      }
    else
      {
      tempr = op->vtkArrayWriter::Write(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkArrayWriter_Write_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Write");

  vtkArray *temp0 = NULL;
  vtkStdString temp1;
  bool temp2 = false;
  bool tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    tempr = vtkArrayWriter::Write(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkArrayWriter_Write_Methods[] = {
  {NULL, PyvtkArrayWriter_Write_s2, 1,
   (char*)"@s|O bool"},
  {NULL, PyvtkArrayWriter_Write_s3, 1,
   (char*)"Os|O *vtkArray bool"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkArrayWriter_Write(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkArrayWriter_Write_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkArrayWriter_Write_s1(self, args);
    case 1:
      return PyvtkArrayWriter_Write_s2(self, args);
    case 3:
      return PyvtkArrayWriter_Write_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Write");
  return NULL;
}


static PyMethodDef PyvtkArrayWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkArrayWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkArrayWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkArrayWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkArrayWriter\nC++: vtkArrayWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkArrayWriter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkArrayWriter\nC++: vtkArrayWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkArrayWriter_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nGet / set the filename where data will be stored (when used as a\nfilter).\n"},
  {(char*)"GetFileName", PyvtkArrayWriter_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nGet / set the filename where data will be stored (when used as a\nfilter).\n"},
  {(char*)"SetBinary", PyvtkArrayWriter_SetBinary, 1,
   (char*)"V.SetBinary(int)\nC++: void SetBinary(int a)\n\nGet / set whether data will be written in binary format (when\nused as a filter).\n"},
  {(char*)"GetBinary", PyvtkArrayWriter_GetBinary, 1,
   (char*)"V.GetBinary() -> int\nC++: int GetBinary()\n\nGet / set whether data will be written in binary format (when\nused as a filter).\n"},
  {(char*)"BinaryOn", PyvtkArrayWriter_BinaryOn, 1,
   (char*)"V.BinaryOn()\nC++: void BinaryOn()\n\nGet / set whether data will be written in binary format (when\nused as a filter).\n"},
  {(char*)"BinaryOff", PyvtkArrayWriter_BinaryOff, 1,
   (char*)"V.BinaryOff()\nC++: void BinaryOff()\n\nGet / set whether data will be written in binary format (when\nused as a filter).\n"},
  {(char*)"Write", PyvtkArrayWriter_Write, 1,
   (char*)"V.Write() -> int\nC++: virtual int Write()\nV.Write(string, bool) -> bool\nC++: bool Write(const vtkStdString &FileName,\n    bool WriteBinary=false)\nV.Write(vtkArray, string, bool) -> bool\nC++: static bool Write(vtkArray *array,\n    const vtkStdString &file_name, bool WriteBinary=false)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkArrayWriter_StaticNew()
{
  return vtkArrayWriter::New();
}

PyObject *PyVTKClass_vtkArrayWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkArrayWriter_StaticNew,
    PyvtkArrayWriter_Methods,
    "vtkArrayWriter", modulename,
    NULL, NULL,
    PyvtkArrayWriter_Doc(),
    PyVTKClass_vtkWriterNew(modulename));
  return cls;
}

const char **PyvtkArrayWriter_Doc()
{
  static const char *docstring[] = {
    "vtkArrayWriter - Serialize sparse and dense arrays to a file or\nstream.\n\n",
    "Superclass: vtkWriter\n\n",
    "vtkArrayWriter serializes sparse and dense array data using a\ntext-based format that is human-readable and easily parsed (default\noption).  The WriteBinary array option can be used to serialize the\nsparse and dense array data using a binary format that is optimized\nfor rapid throughput.\n\nvtkArrayWriter can be used in two distinct ways: first, it can be\nused as a normal pipeline filter, which write",
    "s its inputs to a file. \nAlternatively, static methods are provided for writing vtkArray\ninstances to files or arbitrary c++ streams.\n\nInputs:\n  Input port 0: (required) vtkArrayData object containing a single\nsparse or dense\n                           array.\n\nOutput Format:\n  See\nhttp://www.kitware.com/InfovisWiki/index.php/N-Way_Array_File_Formats\nfor\n  details on how vtkArrayWriter encodes data",
    ".\n\nSee Also:\n\nvtkArrayReader\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkArrayWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkArrayWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkArrayWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

