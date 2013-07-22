// python wrapper for vtkMemoryLimitImageDataStreamer
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
#include "vtkMemoryLimitImageDataStreamer.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMemoryLimitImageDataStreamer(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMemoryLimitImageDataStreamer(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMemoryLimitImageDataStreamerNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMemoryLimitImageDataStreamerNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageDataStreamerNew
extern "C" { PyObject *PyVTKClass_vtkImageDataStreamerNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageDataStreamerNew
#endif

static const char **PyvtkMemoryLimitImageDataStreamer_Doc();


static PyObject *
PyvtkMemoryLimitImageDataStreamer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMemoryLimitImageDataStreamer *op = static_cast<vtkMemoryLimitImageDataStreamer *>(vp);

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
      tempr = op->vtkMemoryLimitImageDataStreamer::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMemoryLimitImageDataStreamer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMemoryLimitImageDataStreamer *op = static_cast<vtkMemoryLimitImageDataStreamer *>(vp);

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
      tempr = op->vtkMemoryLimitImageDataStreamer::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMemoryLimitImageDataStreamer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMemoryLimitImageDataStreamer *op = static_cast<vtkMemoryLimitImageDataStreamer *>(vp);

  vtkMemoryLimitImageDataStreamer *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMemoryLimitImageDataStreamer::NewInstance();
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
PyvtkMemoryLimitImageDataStreamer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkMemoryLimitImageDataStreamer *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkMemoryLimitImageDataStreamer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMemoryLimitImageDataStreamer_SetMemoryLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMemoryLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMemoryLimitImageDataStreamer *op = static_cast<vtkMemoryLimitImageDataStreamer *>(vp);

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
      op->vtkMemoryLimitImageDataStreamer::SetMemoryLimit(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMemoryLimitImageDataStreamer_GetMemoryLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMemoryLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMemoryLimitImageDataStreamer *op = static_cast<vtkMemoryLimitImageDataStreamer *>(vp);

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
      tempr = op->vtkMemoryLimitImageDataStreamer::GetMemoryLimit();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMemoryLimitImageDataStreamer_Methods[] = {
  {(char*)"GetClassName", PyvtkMemoryLimitImageDataStreamer_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMemoryLimitImageDataStreamer_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMemoryLimitImageDataStreamer_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMemoryLimitImageDataStreamer\nC++: vtkMemoryLimitImageDataStreamer *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMemoryLimitImageDataStreamer_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMemoryLimitImageDataStreamer\nC++: vtkMemoryLimitImageDataStreamer *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetMemoryLimit", PyvtkMemoryLimitImageDataStreamer_SetMemoryLimit, 1,
   (char*)"V.SetMemoryLimit(int)\nC++: void SetMemoryLimit(unsigned long a)\n\nSet / Get the memory limit in kilobytes.\n"},
  {(char*)"GetMemoryLimit", PyvtkMemoryLimitImageDataStreamer_GetMemoryLimit, 1,
   (char*)"V.GetMemoryLimit() -> int\nC++: unsigned long GetMemoryLimit()\n\nSet / Get the memory limit in kilobytes.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMemoryLimitImageDataStreamer_StaticNew()
{
  return vtkMemoryLimitImageDataStreamer::New();
}

PyObject *PyVTKClass_vtkMemoryLimitImageDataStreamerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMemoryLimitImageDataStreamer_StaticNew,
    PyvtkMemoryLimitImageDataStreamer_Methods,
    "vtkMemoryLimitImageDataStreamer", modulename,
    NULL, NULL,
    PyvtkMemoryLimitImageDataStreamer_Doc(),
    PyVTKClass_vtkImageDataStreamerNew(modulename));
  return cls;
}

const char **PyvtkMemoryLimitImageDataStreamer_Doc()
{
  static const char *docstring[] = {
    "vtkMemoryLimitImageDataStreamer - Initiates streaming on image data.\n\n",
    "Superclass: vtkImageDataStreamer\n\n",
    "To satisfy a request, this filter calls update on its input many\ntimes with smaller update extents.  All processing up stream streams\nsmaller pieces.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMemoryLimitImageDataStreamer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMemoryLimitImageDataStreamerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMemoryLimitImageDataStreamer", o) != 0)
    {
    Py_DECREF(o);
    }

}

