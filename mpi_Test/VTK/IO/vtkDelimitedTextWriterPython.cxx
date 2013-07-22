// python wrapper for vtkDelimitedTextWriter
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
#include "vtkDelimitedTextWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDelimitedTextWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDelimitedTextWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDelimitedTextWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDelimitedTextWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkWriterNew
extern "C" { PyObject *PyVTKClass_vtkWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkWriterNew
#endif

static const char **PyvtkDelimitedTextWriter_Doc();


static PyObject *
PyvtkDelimitedTextWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

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
      tempr = op->vtkDelimitedTextWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

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
      tempr = op->vtkDelimitedTextWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

  vtkDelimitedTextWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDelimitedTextWriter::NewInstance();
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
PyvtkDelimitedTextWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDelimitedTextWriter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDelimitedTextWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextWriter_SetFieldDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFieldDelimiter(temp0);
      }
    else
      {
      op->vtkDelimitedTextWriter::SetFieldDelimiter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextWriter_GetFieldDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFieldDelimiter();
      }
    else
      {
      tempr = op->vtkDelimitedTextWriter::GetFieldDelimiter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextWriter_SetStringDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStringDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStringDelimiter(temp0);
      }
    else
      {
      op->vtkDelimitedTextWriter::SetStringDelimiter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextWriter_GetStringDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStringDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStringDelimiter();
      }
    else
      {
      tempr = op->vtkDelimitedTextWriter::GetStringDelimiter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

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
      op->vtkDelimitedTextWriter::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

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
      tempr = op->vtkDelimitedTextWriter::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextWriter_SetUseStringDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseStringDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseStringDelimiter(temp0);
      }
    else
      {
      op->vtkDelimitedTextWriter::SetUseStringDelimiter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextWriter_GetUseStringDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseStringDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseStringDelimiter();
      }
    else
      {
      tempr = op->vtkDelimitedTextWriter::GetUseStringDelimiter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextWriter_SetWriteToOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteToOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWriteToOutputString(temp0);
      }
    else
      {
      op->vtkDelimitedTextWriter::SetWriteToOutputString(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextWriter_GetWriteToOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteToOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWriteToOutputString();
      }
    else
      {
      tempr = op->vtkDelimitedTextWriter::GetWriteToOutputString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextWriter_WriteToOutputStringOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToOutputStringOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteToOutputStringOn();
      }
    else
      {
      op->vtkDelimitedTextWriter::WriteToOutputStringOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextWriter_WriteToOutputStringOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToOutputStringOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteToOutputStringOff();
      }
    else
      {
      op->vtkDelimitedTextWriter::WriteToOutputStringOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextWriter_RegisterAndGetOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterAndGetOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->RegisterAndGetOutputString();
      }
    else
      {
      tempr = op->vtkDelimitedTextWriter::RegisterAndGetOutputString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextWriter_GetString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

  vtkStdString temp0;
  vtkStdString tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetString(temp0);
      }
    else
      {
      tempr = op->vtkDelimitedTextWriter::GetString(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDelimitedTextWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkDelimitedTextWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDelimitedTextWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDelimitedTextWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDelimitedTextWriter\nC++: vtkDelimitedTextWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDelimitedTextWriter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDelimitedTextWriter\nC++: vtkDelimitedTextWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFieldDelimiter", PyvtkDelimitedTextWriter_SetFieldDelimiter, 1,
   (char*)"V.SetFieldDelimiter(string)\nC++: void SetFieldDelimiter(char *)\n\nGet/Set the delimiter use to separate fields (\",\" by default.)\n"},
  {(char*)"GetFieldDelimiter", PyvtkDelimitedTextWriter_GetFieldDelimiter, 1,
   (char*)"V.GetFieldDelimiter() -> string\nC++: char *GetFieldDelimiter()\n\nGet/Set the delimiter use to separate fields (\",\" by default.)\n"},
  {(char*)"SetStringDelimiter", PyvtkDelimitedTextWriter_SetStringDelimiter, 1,
   (char*)"V.SetStringDelimiter(string)\nC++: void SetStringDelimiter(char *)\n\nGet/Set the delimiter used for string data, if any eg. double\nquotes(\").\n"},
  {(char*)"GetStringDelimiter", PyvtkDelimitedTextWriter_GetStringDelimiter, 1,
   (char*)"V.GetStringDelimiter() -> string\nC++: char *GetStringDelimiter()\n\nGet/Set the delimiter used for string data, if any eg. double\nquotes(\").\n"},
  {(char*)"SetFileName", PyvtkDelimitedTextWriter_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nGet/Set the filename for the file.\n"},
  {(char*)"GetFileName", PyvtkDelimitedTextWriter_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nGet/Set the filename for the file.\n"},
  {(char*)"SetUseStringDelimiter", PyvtkDelimitedTextWriter_SetUseStringDelimiter, 1,
   (char*)"V.SetUseStringDelimiter(bool)\nC++: void SetUseStringDelimiter(bool a)\n\nGet/Set if StringDelimiter must be used for string data. True by\ndefault.\n"},
  {(char*)"GetUseStringDelimiter", PyvtkDelimitedTextWriter_GetUseStringDelimiter, 1,
   (char*)"V.GetUseStringDelimiter() -> bool\nC++: bool GetUseStringDelimiter()\n\nGet/Set if StringDelimiter must be used for string data. True by\ndefault.\n"},
  {(char*)"SetWriteToOutputString", PyvtkDelimitedTextWriter_SetWriteToOutputString, 1,
   (char*)"V.SetWriteToOutputString(bool)\nC++: void SetWriteToOutputString(bool a)\n\nEnable writing to an OutputString instead of the default, a file.\n"},
  {(char*)"GetWriteToOutputString", PyvtkDelimitedTextWriter_GetWriteToOutputString, 1,
   (char*)"V.GetWriteToOutputString() -> bool\nC++: bool GetWriteToOutputString()\n\nEnable writing to an OutputString instead of the default, a file.\n"},
  {(char*)"WriteToOutputStringOn", PyvtkDelimitedTextWriter_WriteToOutputStringOn, 1,
   (char*)"V.WriteToOutputStringOn()\nC++: void WriteToOutputStringOn()\n\nEnable writing to an OutputString instead of the default, a file.\n"},
  {(char*)"WriteToOutputStringOff", PyvtkDelimitedTextWriter_WriteToOutputStringOff, 1,
   (char*)"V.WriteToOutputStringOff()\nC++: void WriteToOutputStringOff()\n\nEnable writing to an OutputString instead of the default, a file.\n"},
  {(char*)"RegisterAndGetOutputString", PyvtkDelimitedTextWriter_RegisterAndGetOutputString, 1,
   (char*)"V.RegisterAndGetOutputString() -> string\nC++: char *RegisterAndGetOutputString()\n\nThis convenience method returns the string, sets the IVAR to\nNULL, so that the user is responsible for deleting the string.\n"},
  {(char*)"GetString", PyvtkDelimitedTextWriter_GetString, 1,
   (char*)"V.GetString(string) -> string\nC++: vtkStdString GetString(vtkStdString string)\n\nInternal method: Returns the \"string\" with the \"StringDelimiter\"\nif UseStringDelimiter is true.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDelimitedTextWriter_StaticNew()
{
  return vtkDelimitedTextWriter::New();
}

PyObject *PyVTKClass_vtkDelimitedTextWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDelimitedTextWriter_StaticNew,
    PyvtkDelimitedTextWriter_Methods,
    "vtkDelimitedTextWriter", modulename,
    NULL, NULL,
    PyvtkDelimitedTextWriter_Doc(),
    PyVTKClass_vtkWriterNew(modulename));
  return cls;
}

const char **PyvtkDelimitedTextWriter_Doc()
{
  static const char *docstring[] = {
    "vtkDelimitedTextWriter - Delimited text writer for vtkTable\n\n",
    "Superclass: vtkWriter\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDelimitedTextWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDelimitedTextWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDelimitedTextWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

