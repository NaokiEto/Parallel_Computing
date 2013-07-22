// python wrapper for vtkPStreamTracer
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
#include "vtkPStreamTracer.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPStreamTracer(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPStreamTracer(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPStreamTracerNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPStreamTracerNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkStreamTracerNew
extern "C" { PyObject *PyVTKClass_vtkStreamTracerNew(const char *); }
#define DECLARED_PyVTKClass_vtkStreamTracerNew
#endif

static const char **PyvtkPStreamTracer_Doc();


static PyObject *
PyvtkPStreamTracer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPStreamTracer *op = static_cast<vtkPStreamTracer *>(vp);

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
      tempr = op->vtkPStreamTracer::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPStreamTracer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPStreamTracer *op = static_cast<vtkPStreamTracer *>(vp);

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
      tempr = op->vtkPStreamTracer::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPStreamTracer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPStreamTracer *op = static_cast<vtkPStreamTracer *>(vp);

  vtkPStreamTracer *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPStreamTracer::NewInstance();
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
PyvtkPStreamTracer_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPStreamTracer *op = static_cast<vtkPStreamTracer *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->SetController(temp0);
      }
    else
      {
      op->vtkPStreamTracer::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPStreamTracer_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPStreamTracer *op = static_cast<vtkPStreamTracer *>(vp);

  vtkMultiProcessController *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetController();
      }
    else
      {
      tempr = op->vtkPStreamTracer::GetController();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPStreamTracer_Methods[] = {
  {(char*)"GetClassName", PyvtkPStreamTracer_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPStreamTracer_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPStreamTracer_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPStreamTracer\nC++: vtkPStreamTracer *NewInstance()\n\n"},
  {(char*)"SetController", PyvtkPStreamTracer_SetController, 1,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(\n    vtkMultiProcessController *controller)\n\nSet/Get the controller use in compositing (set to the global\ncontroller by default) If not using the default, this must be\ncalled before any other methods.\n"},
  {(char*)"GetController", PyvtkPStreamTracer_GetController, 1,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nSet/Get the controller use in compositing (set to the global\ncontroller by default) If not using the default, this must be\ncalled before any other methods.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkPStreamTracerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkPStreamTracer_Methods,
    "vtkPStreamTracer", modulename,
    NULL, NULL,
    PyvtkPStreamTracer_Doc(),
    PyVTKClass_vtkStreamTracerNew(modulename));
  return cls;
}

const char **PyvtkPStreamTracer_Doc()
{
  static const char *docstring[] = {
    "vtkPStreamTracer - Abstract superclass for parallel streamline\ngenerators\n\n",
    "Superclass: vtkStreamTracer\n\n",
    "This class implements some necessary functionality used by\ndistributed and parallel streamline generators. Note that all\nprocesses must have access to the WHOLE seed source, i.e. the source\nmust be identical on all processes.\n\nSee Also:\n\nvtkStreamTracer vtkDistributedStreamTracer vtkMPIStreamTracer\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPStreamTracer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPStreamTracerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPStreamTracer", o) != 0)
    {
    Py_DECREF(o);
    }

}

