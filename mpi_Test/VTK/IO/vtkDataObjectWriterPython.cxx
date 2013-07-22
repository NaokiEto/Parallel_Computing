// python wrapper for vtkDataObjectWriter
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
#include "vtkDataObjectWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDataObjectWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDataObjectWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDataObjectWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDataObjectWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkWriterNew
extern "C" { PyObject *PyVTKClass_vtkWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkWriterNew
#endif

static const char **PyvtkDataObjectWriter_Doc();


static PyObject *
PyvtkDataObjectWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

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
      tempr = op->vtkDataObjectWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

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
      tempr = op->vtkDataObjectWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  vtkDataObjectWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDataObjectWriter::NewInstance();
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
PyvtkDataObjectWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDataObjectWriter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDataObjectWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

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
      op->vtkDataObjectWriter::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

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
      tempr = op->vtkDataObjectWriter::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_SetHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHeader(temp0);
      }
    else
      {
      op->vtkDataObjectWriter::SetHeader(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_GetHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHeader();
      }
    else
      {
      tempr = op->vtkDataObjectWriter::GetHeader();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_SetFileType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileType(temp0);
      }
    else
      {
      op->vtkDataObjectWriter::SetFileType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_GetFileType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFileType();
      }
    else
      {
      tempr = op->vtkDataObjectWriter::GetFileType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_SetFileTypeToASCII(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileTypeToASCII");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetFileTypeToASCII();
      }
    else
      {
      op->vtkDataObjectWriter::SetFileTypeToASCII();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_SetFileTypeToBinary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileTypeToBinary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetFileTypeToBinary();
      }
    else
      {
      op->vtkDataObjectWriter::SetFileTypeToBinary();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_SetFieldDataName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldDataName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFieldDataName(temp0);
      }
    else
      {
      op->vtkDataObjectWriter::SetFieldDataName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_GetFieldDataName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDataName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFieldDataName();
      }
    else
      {
      tempr = op->vtkDataObjectWriter::GetFieldDataName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDataObjectWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkDataObjectWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataObjectWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataObjectWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDataObjectWriter\nC++: vtkDataObjectWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDataObjectWriter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDataObjectWriter\nC++: vtkDataObjectWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkDataObjectWriter_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(const char *filename)\n\nMethods delegated to vtkDataWriter, see vtkDataWriter.\n"},
  {(char*)"GetFileName", PyvtkDataObjectWriter_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nMethods delegated to vtkDataWriter, see vtkDataWriter.\n"},
  {(char*)"SetHeader", PyvtkDataObjectWriter_SetHeader, 1,
   (char*)"V.SetHeader(string)\nC++: void SetHeader(const char *header)\n\nMethods delegated to vtkDataWriter, see vtkDataWriter.\n"},
  {(char*)"GetHeader", PyvtkDataObjectWriter_GetHeader, 1,
   (char*)"V.GetHeader() -> string\nC++: char *GetHeader()\n\nMethods delegated to vtkDataWriter, see vtkDataWriter.\n"},
  {(char*)"SetFileType", PyvtkDataObjectWriter_SetFileType, 1,
   (char*)"V.SetFileType(int)\nC++: void SetFileType(int type)\n\nMethods delegated to vtkDataWriter, see vtkDataWriter.\n"},
  {(char*)"GetFileType", PyvtkDataObjectWriter_GetFileType, 1,
   (char*)"V.GetFileType() -> int\nC++: int GetFileType()\n\nMethods delegated to vtkDataWriter, see vtkDataWriter.\n"},
  {(char*)"SetFileTypeToASCII", PyvtkDataObjectWriter_SetFileTypeToASCII, 1,
   (char*)"V.SetFileTypeToASCII()\nC++: void SetFileTypeToASCII()\n\nMethods delegated to vtkDataWriter, see vtkDataWriter.\n"},
  {(char*)"SetFileTypeToBinary", PyvtkDataObjectWriter_SetFileTypeToBinary, 1,
   (char*)"V.SetFileTypeToBinary()\nC++: void SetFileTypeToBinary()\n\nMethods delegated to vtkDataWriter, see vtkDataWriter.\n"},
  {(char*)"SetFieldDataName", PyvtkDataObjectWriter_SetFieldDataName, 1,
   (char*)"V.SetFieldDataName(string)\nC++: void SetFieldDataName(const char *fieldname)\n\nMethods delegated to vtkDataWriter, see vtkDataWriter.\n"},
  {(char*)"GetFieldDataName", PyvtkDataObjectWriter_GetFieldDataName, 1,
   (char*)"V.GetFieldDataName() -> string\nC++: char *GetFieldDataName()\n\nMethods delegated to vtkDataWriter, see vtkDataWriter.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDataObjectWriter_StaticNew()
{
  return vtkDataObjectWriter::New();
}

PyObject *PyVTKClass_vtkDataObjectWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDataObjectWriter_StaticNew,
    PyvtkDataObjectWriter_Methods,
    "vtkDataObjectWriter", modulename,
    NULL, NULL,
    PyvtkDataObjectWriter_Doc(),
    PyVTKClass_vtkWriterNew(modulename));
  return cls;
}

const char **PyvtkDataObjectWriter_Doc()
{
  static const char *docstring[] = {
    "vtkDataObjectWriter - write vtk field data\n\n",
    "Superclass: vtkWriter\n\n",
    "vtkDataObjectWriter is a source object that writes ASCII or binary\nfield data files in vtk format. Field data is a general form of data\nin matrix form.\n\nCaveats:\n\nBinary files written on one system may not be readable on other\nsystems.\n\nSee Also:\n\nvtkFieldData vtkFieldDataReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataObjectWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataObjectWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataObjectWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

