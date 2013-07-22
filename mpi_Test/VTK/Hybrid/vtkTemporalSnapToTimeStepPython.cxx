// python wrapper for vtkTemporalSnapToTimeStep
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
#include "vtkTemporalSnapToTimeStep.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTemporalSnapToTimeStep(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTemporalSnapToTimeStep(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTemporalSnapToTimeStepNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTemporalSnapToTimeStepNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkTemporalDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTemporalDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTemporalDataSetAlgorithmNew
#endif

static const char **PyvtkTemporalSnapToTimeStep_Doc();


static PyObject *
PyvtkTemporalSnapToTimeStep_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalSnapToTimeStep *op = static_cast<vtkTemporalSnapToTimeStep *>(vp);

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
      tempr = op->vtkTemporalSnapToTimeStep::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalSnapToTimeStep_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalSnapToTimeStep *op = static_cast<vtkTemporalSnapToTimeStep *>(vp);

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
      tempr = op->vtkTemporalSnapToTimeStep::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalSnapToTimeStep_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalSnapToTimeStep *op = static_cast<vtkTemporalSnapToTimeStep *>(vp);

  vtkTemporalSnapToTimeStep *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTemporalSnapToTimeStep::NewInstance();
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
PyvtkTemporalSnapToTimeStep_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTemporalSnapToTimeStep *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTemporalSnapToTimeStep::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalSnapToTimeStep_SetSnapMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSnapMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalSnapToTimeStep *op = static_cast<vtkTemporalSnapToTimeStep *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSnapMode(temp0);
      }
    else
      {
      op->vtkTemporalSnapToTimeStep::SetSnapMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalSnapToTimeStep_GetSnapMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSnapMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalSnapToTimeStep *op = static_cast<vtkTemporalSnapToTimeStep *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSnapMode();
      }
    else
      {
      tempr = op->vtkTemporalSnapToTimeStep::GetSnapMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalSnapToTimeStep_SetSnapModeToNearest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSnapModeToNearest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalSnapToTimeStep *op = static_cast<vtkTemporalSnapToTimeStep *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSnapModeToNearest();
      }
    else
      {
      op->vtkTemporalSnapToTimeStep::SetSnapModeToNearest();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalSnapToTimeStep_SetSnapModeToNextBelowOrEqual(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSnapModeToNextBelowOrEqual");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalSnapToTimeStep *op = static_cast<vtkTemporalSnapToTimeStep *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSnapModeToNextBelowOrEqual();
      }
    else
      {
      op->vtkTemporalSnapToTimeStep::SetSnapModeToNextBelowOrEqual();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalSnapToTimeStep_SetSnapModeToNextAboveOrEqual(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSnapModeToNextAboveOrEqual");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalSnapToTimeStep *op = static_cast<vtkTemporalSnapToTimeStep *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSnapModeToNextAboveOrEqual();
      }
    else
      {
      op->vtkTemporalSnapToTimeStep::SetSnapModeToNextAboveOrEqual();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTemporalSnapToTimeStep_Methods[] = {
  {(char*)"GetClassName", PyvtkTemporalSnapToTimeStep_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTemporalSnapToTimeStep_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTemporalSnapToTimeStep_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTemporalSnapToTimeStep\nC++: vtkTemporalSnapToTimeStep *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTemporalSnapToTimeStep_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTemporalSnapToTimeStep\nC++: vtkTemporalSnapToTimeStep *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSnapMode", PyvtkTemporalSnapToTimeStep_SetSnapMode, 1,
   (char*)"V.SetSnapMode(int)\nC++: void SetSnapMode(int a)\n\n"},
  {(char*)"GetSnapMode", PyvtkTemporalSnapToTimeStep_GetSnapMode, 1,
   (char*)"V.GetSnapMode() -> int\nC++: int GetSnapMode()\n\n"},
  {(char*)"SetSnapModeToNearest", PyvtkTemporalSnapToTimeStep_SetSnapModeToNearest, 1,
   (char*)"V.SetSnapModeToNearest()\nC++: void SetSnapModeToNearest()\n\n"},
  {(char*)"SetSnapModeToNextBelowOrEqual", PyvtkTemporalSnapToTimeStep_SetSnapModeToNextBelowOrEqual, 1,
   (char*)"V.SetSnapModeToNextBelowOrEqual()\nC++: void SetSnapModeToNextBelowOrEqual()\n\n"},
  {(char*)"SetSnapModeToNextAboveOrEqual", PyvtkTemporalSnapToTimeStep_SetSnapModeToNextAboveOrEqual, 1,
   (char*)"V.SetSnapModeToNextAboveOrEqual()\nC++: void SetSnapModeToNextAboveOrEqual()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTemporalSnapToTimeStep_StaticNew()
{
  return vtkTemporalSnapToTimeStep::New();
}

PyObject *PyVTKClass_vtkTemporalSnapToTimeStepNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTemporalSnapToTimeStep_StaticNew,
    PyvtkTemporalSnapToTimeStep_Methods,
    "vtkTemporalSnapToTimeStep", modulename,
    NULL, NULL,
    PyvtkTemporalSnapToTimeStep_Doc(),
    PyVTKClass_vtkTemporalDataSetAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"VTK_SNAP_NEAREST", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"VTK_SNAP_NEXTBELOW_OR_EQUAL", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"VTK_SNAP_NEXTABOVE_OR_EQUAL", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkTemporalSnapToTimeStep_Doc()
{
  static const char *docstring[] = {
    "vtkTemporalSnapToTimeStep - modify the time range/steps of temporal\ndata\n\n",
    "Superclass: vtkTemporalDataSetAlgorithm\n\n",
    "vtkTemporalSnapToTimeStep  modify the time range or time steps of the\ndata without changing the data itself. The data is not resampled by\nthis filter, only the information accompanying the data is modified.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTemporalSnapToTimeStep(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTemporalSnapToTimeStepNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTemporalSnapToTimeStep", o) != 0)
    {
    Py_DECREF(o);
    }

}

