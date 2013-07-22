// python wrapper for vtkDataCompressor
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
#include "vtkDataCompressor.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDataCompressor(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDataCompressor(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDataCompressorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDataCompressorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkDataCompressor_Doc();


static PyObject *
PyvtkDataCompressor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataCompressor *op = static_cast<vtkDataCompressor *>(vp);

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
      tempr = op->vtkDataCompressor::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataCompressor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataCompressor *op = static_cast<vtkDataCompressor *>(vp);

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
      tempr = op->vtkDataCompressor::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataCompressor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataCompressor *op = static_cast<vtkDataCompressor *>(vp);

  vtkDataCompressor *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDataCompressor::NewInstance();
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
PyvtkDataCompressor_GetMaximumCompressionSpace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumCompressionSpace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataCompressor *op = static_cast<vtkDataCompressor *>(vp);

  unsigned long temp0;
  unsigned long tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = op->GetMaximumCompressionSpace(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDataCompressor_Methods[] = {
  {(char*)"GetClassName", PyvtkDataCompressor_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataCompressor_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataCompressor_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDataCompressor\nC++: vtkDataCompressor *NewInstance()\n\n"},
  {(char*)"GetMaximumCompressionSpace", PyvtkDataCompressor_GetMaximumCompressionSpace, 1,
   (char*)"V.GetMaximumCompressionSpace(int) -> int\nC++: virtual unsigned long GetMaximumCompressionSpace(\n    unsigned long size)\n\nGet the maximum space that may be needed to store data of the\ngiven uncompressed size after compression.  This is the minimum\nsize of the output buffer that can be passed to the four-argument\nCompress method.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkDataCompressorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkDataCompressor_Methods,
    "vtkDataCompressor", modulename,
    NULL, NULL,
    PyvtkDataCompressor_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkDataCompressor_Doc()
{
  static const char *docstring[] = {
    "vtkDataCompressor - Abstract interface for data compression classes.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkDataCompressor provides a universal interface for data\ncompression.  Subclasses provide one compression method and one\ndecompression method.  The public interface to all compressors\nremains the same, and is defined by this class.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataCompressor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataCompressorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataCompressor", o) != 0)
    {
    Py_DECREF(o);
    }

}

