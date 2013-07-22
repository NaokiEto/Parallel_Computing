// python wrapper for vtkDistributedStreamTracer
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
#include "vtkDistributedStreamTracer.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDistributedStreamTracer(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDistributedStreamTracer(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDistributedStreamTracerNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDistributedStreamTracerNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPStreamTracerNew
extern "C" { PyObject *PyVTKClass_vtkPStreamTracerNew(const char *); }
#define DECLARED_PyVTKClass_vtkPStreamTracerNew
#endif

static const char **PyvtkDistributedStreamTracer_Doc();


static PyObject *
PyvtkDistributedStreamTracer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedStreamTracer *op = static_cast<vtkDistributedStreamTracer *>(vp);

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
      tempr = op->vtkDistributedStreamTracer::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistributedStreamTracer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedStreamTracer *op = static_cast<vtkDistributedStreamTracer *>(vp);

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
      tempr = op->vtkDistributedStreamTracer::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistributedStreamTracer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedStreamTracer *op = static_cast<vtkDistributedStreamTracer *>(vp);

  vtkDistributedStreamTracer *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDistributedStreamTracer::NewInstance();
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
PyvtkDistributedStreamTracer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDistributedStreamTracer *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDistributedStreamTracer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDistributedStreamTracer_Methods[] = {
  {(char*)"GetClassName", PyvtkDistributedStreamTracer_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDistributedStreamTracer_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDistributedStreamTracer_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDistributedStreamTracer\nC++: vtkDistributedStreamTracer *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDistributedStreamTracer_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDistributedStreamTracer\nC++: vtkDistributedStreamTracer *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDistributedStreamTracer_StaticNew()
{
  return vtkDistributedStreamTracer::New();
}

PyObject *PyVTKClass_vtkDistributedStreamTracerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDistributedStreamTracer_StaticNew,
    PyvtkDistributedStreamTracer_Methods,
    "vtkDistributedStreamTracer", modulename,
    NULL, NULL,
    PyvtkDistributedStreamTracer_Doc(),
    PyVTKClass_vtkPStreamTracerNew(modulename));
  return cls;
}

const char **PyvtkDistributedStreamTracer_Doc()
{
  static const char *docstring[] = {
    "vtkDistributedStreamTracer - Distributed streamline generator\n\n",
    "Superclass: vtkPStreamTracer\n\n",
    "This filter integrates streamlines on a distributed dataset. It is\nessentially a serial algorithm: only one process is active at one\ntime and it is not more efficient than a single process integration.\nIt is useful when the data is too large to be on one process and has\nto be kept distributed.\n\nSee Also:\n\nvtkStreamTracer vtkPStreamTracer\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDistributedStreamTracer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDistributedStreamTracerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDistributedStreamTracer", o) != 0)
    {
    Py_DECREF(o);
    }

}

