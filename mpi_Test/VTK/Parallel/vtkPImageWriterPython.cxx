// python wrapper for vtkPImageWriter
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
#include "vtkPImageWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPImageWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPImageWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPImageWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPImageWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageWriterNew
extern "C" { PyObject *PyVTKClass_vtkImageWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageWriterNew
#endif

static const char **PyvtkPImageWriter_Doc();


static PyObject *
PyvtkPImageWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPImageWriter *op = static_cast<vtkPImageWriter *>(vp);

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
      tempr = op->vtkPImageWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPImageWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPImageWriter *op = static_cast<vtkPImageWriter *>(vp);

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
      tempr = op->vtkPImageWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPImageWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPImageWriter *op = static_cast<vtkPImageWriter *>(vp);

  vtkPImageWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPImageWriter::NewInstance();
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
PyvtkPImageWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPImageWriter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPImageWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPImageWriter_SetMemoryLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMemoryLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPImageWriter *op = static_cast<vtkPImageWriter *>(vp);

  unsigned long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMemoryLimit(temp0);
      }
    else
      {
      op->vtkPImageWriter::SetMemoryLimit(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPImageWriter_GetMemoryLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMemoryLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPImageWriter *op = static_cast<vtkPImageWriter *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMemoryLimit();
      }
    else
      {
      tempr = op->vtkPImageWriter::GetMemoryLimit();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPImageWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkPImageWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPImageWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPImageWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPImageWriter\nC++: vtkPImageWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPImageWriter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPImageWriter\nC++: vtkPImageWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetMemoryLimit", PyvtkPImageWriter_SetMemoryLimit, 1,
   (char*)"V.SetMemoryLimit(int)\nC++: void SetMemoryLimit(unsigned long a)\n\nSet / Get the memory limit in kilobytes. The writer will stream\nto attempt to keep the pipeline size within this limit\n"},
  {(char*)"GetMemoryLimit", PyvtkPImageWriter_GetMemoryLimit, 1,
   (char*)"V.GetMemoryLimit() -> int\nC++: unsigned long GetMemoryLimit()\n\nSet / Get the memory limit in kilobytes. The writer will stream\nto attempt to keep the pipeline size within this limit\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPImageWriter_StaticNew()
{
  return vtkPImageWriter::New();
}

PyObject *PyVTKClass_vtkPImageWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPImageWriter_StaticNew,
    PyvtkPImageWriter_Methods,
    "vtkPImageWriter", modulename,
    NULL, NULL,
    PyvtkPImageWriter_Doc(),
    PyVTKClass_vtkImageWriterNew(modulename));
  return cls;
}

const char **PyvtkPImageWriter_Doc()
{
  static const char *docstring[] = {
    "vtkPImageWriter - Writes images to files.\n\n",
    "Superclass: vtkImageWriter\n\n",
    "vtkPImageWriter writes images to files with any data type. The data\ntype of the file is the same scalar type as the input.  The\ndimensionality determines whether the data will be written in one or\nmultiple files. This class is used as the superclass of most image\nwriting classes such as vtkBMPWriter etc. It supports streaming.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPImageWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPImageWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPImageWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

