// python wrapper for vtkInitialValueProblemSolver
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
#include "vtkInitialValueProblemSolver.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkInitialValueProblemSolver(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkInitialValueProblemSolver(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkInitialValueProblemSolverNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkInitialValueProblemSolverNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkInitialValueProblemSolver_Doc();


static PyObject *
PyvtkInitialValueProblemSolver_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInitialValueProblemSolver *op = static_cast<vtkInitialValueProblemSolver *>(vp);

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
      tempr = op->vtkInitialValueProblemSolver::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInitialValueProblemSolver_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInitialValueProblemSolver *op = static_cast<vtkInitialValueProblemSolver *>(vp);

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
      tempr = op->vtkInitialValueProblemSolver::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInitialValueProblemSolver_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInitialValueProblemSolver *op = static_cast<vtkInitialValueProblemSolver *>(vp);

  vtkInitialValueProblemSolver *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkInitialValueProblemSolver::NewInstance();
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
PyvtkInitialValueProblemSolver_SetFunctionSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFunctionSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInitialValueProblemSolver *op = static_cast<vtkInitialValueProblemSolver *>(vp);

  vtkFunctionSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFunctionSet"))
    {
    if (ap.IsBound())
      {
      op->SetFunctionSet(temp0);
      }
    else
      {
      op->vtkInitialValueProblemSolver::SetFunctionSet(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInitialValueProblemSolver_GetFunctionSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFunctionSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInitialValueProblemSolver *op = static_cast<vtkInitialValueProblemSolver *>(vp);

  vtkFunctionSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFunctionSet();
      }
    else
      {
      tempr = op->vtkInitialValueProblemSolver::GetFunctionSet();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInitialValueProblemSolver_IsAdaptive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAdaptive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInitialValueProblemSolver *op = static_cast<vtkInitialValueProblemSolver *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsAdaptive();
      }
    else
      {
      tempr = op->vtkInitialValueProblemSolver::IsAdaptive();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkInitialValueProblemSolver_Methods[] = {
  {(char*)"GetClassName", PyvtkInitialValueProblemSolver_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInitialValueProblemSolver_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInitialValueProblemSolver_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkInitialValueProblemSolver\nC++: vtkInitialValueProblemSolver *NewInstance()\n\n"},
  {(char*)"SetFunctionSet", PyvtkInitialValueProblemSolver_SetFunctionSet, 1,
   (char*)"V.SetFunctionSet(vtkFunctionSet)\nC++: virtual void SetFunctionSet(vtkFunctionSet *functionset)\n\nSet / get the dataset used for the implicit function evaluation.\n"},
  {(char*)"GetFunctionSet", PyvtkInitialValueProblemSolver_GetFunctionSet, 1,
   (char*)"V.GetFunctionSet() -> vtkFunctionSet\nC++: vtkFunctionSet *GetFunctionSet()\n\nSet / get the dataset used for the implicit function evaluation.\n"},
  {(char*)"IsAdaptive", PyvtkInitialValueProblemSolver_IsAdaptive, 1,
   (char*)"V.IsAdaptive() -> int\nC++: virtual int IsAdaptive()\n\nReturns 1 if the solver uses adaptive stepsize control, 0\notherwise\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkInitialValueProblemSolverNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkInitialValueProblemSolver_Methods,
    "vtkInitialValueProblemSolver", modulename,
    NULL, NULL,
    PyvtkInitialValueProblemSolver_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"OUT_OF_DOMAIN", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"NOT_INITIALIZED", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"UNEXPECTED_VALUE", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkInitialValueProblemSolver_Doc()
{
  static const char *docstring[] = {
    "vtkInitialValueProblemSolver - Integrate a set of ordinary\n\n",
    "Superclass: vtkObject\n\n",
    "Given a vtkFunctionSet which returns dF_i(x_j, t)/dt given x_j and t,\nvtkInitialValueProblemSolver computes the value of F_i at t+deltat.\n\nSee Also:\n\nvtkRungeKutta2 vtkRungeKutta4\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInitialValueProblemSolver(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInitialValueProblemSolverNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInitialValueProblemSolver", o) != 0)
    {
    Py_DECREF(o);
    }

}

