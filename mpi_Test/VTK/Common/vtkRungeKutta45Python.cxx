// python wrapper for vtkRungeKutta45
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
#include "vtkRungeKutta45.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkRungeKutta45(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkRungeKutta45(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkRungeKutta45New(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkRungeKutta45New(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkInitialValueProblemSolverNew
extern "C" { PyObject *PyVTKClass_vtkInitialValueProblemSolverNew(const char *); }
#define DECLARED_PyVTKClass_vtkInitialValueProblemSolverNew
#endif

static const char **PyvtkRungeKutta45_Doc();


static PyObject *
PyvtkRungeKutta45_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRungeKutta45 *op = static_cast<vtkRungeKutta45 *>(vp);

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
      tempr = op->vtkRungeKutta45::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRungeKutta45_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRungeKutta45 *op = static_cast<vtkRungeKutta45 *>(vp);

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
      tempr = op->vtkRungeKutta45::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRungeKutta45_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRungeKutta45 *op = static_cast<vtkRungeKutta45 *>(vp);

  vtkRungeKutta45 *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkRungeKutta45::NewInstance();
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
PyvtkRungeKutta45_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkRungeKutta45 *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkRungeKutta45::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkRungeKutta45_Methods[] = {
  {(char*)"GetClassName", PyvtkRungeKutta45_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRungeKutta45_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRungeKutta45_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkRungeKutta45\nC++: vtkRungeKutta45 *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRungeKutta45_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRungeKutta45\nC++: vtkRungeKutta45 *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRungeKutta45_StaticNew()
{
  return vtkRungeKutta45::New();
}

PyObject *PyVTKClass_vtkRungeKutta45New(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRungeKutta45_StaticNew,
    PyvtkRungeKutta45_Methods,
    "vtkRungeKutta45", modulename,
    NULL, NULL,
    PyvtkRungeKutta45_Doc(),
    PyVTKClass_vtkInitialValueProblemSolverNew(modulename));
  return cls;
}

const char **PyvtkRungeKutta45_Doc()
{
  static const char *docstring[] = {
    "vtkRungeKutta45 - Integrate an initial value problem using 5th\n\n",
    "Superclass: vtkInitialValueProblemSolver\n\n",
    "This is a concrete sub-class of vtkInitialValueProblemSolver. It uses\na 5th order Runge-Kutta method with stepsize control to obtain the\nvalues of a set of functions at the next time step. The stepsize is\nadjusted by calculating an estimated error using an embedded 4th\norder Runge-Kutta formula: Press, W. H. et al., 1992, Numerical\nRecipes in Fortran, Second Edition, Cambridge University Press Cas",
    "h,\nJ.R. and Karp, A.H. 1990, ACM Transactions on Mathematical Software,\nvol 16, pp 201-222\n\nSee Also:\n\nvtkInitialValueProblemSolver vtkRungeKutta4 vtkRungeKutta2\nvtkFunctionSet\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRungeKutta45(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRungeKutta45New(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRungeKutta45", o) != 0)
    {
    Py_DECREF(o);
    }

}

