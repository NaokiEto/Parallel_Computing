// python wrapper for vtkRungeKutta2
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
#include "vtkRungeKutta2.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkRungeKutta2(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkRungeKutta2(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkRungeKutta2New(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkRungeKutta2New(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkInitialValueProblemSolverNew
extern "C" { PyObject *PyVTKClass_vtkInitialValueProblemSolverNew(const char *); }
#define DECLARED_PyVTKClass_vtkInitialValueProblemSolverNew
#endif

static const char **PyvtkRungeKutta2_Doc();


static PyObject *
PyvtkRungeKutta2_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRungeKutta2 *op = static_cast<vtkRungeKutta2 *>(vp);

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
      tempr = op->vtkRungeKutta2::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRungeKutta2_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRungeKutta2 *op = static_cast<vtkRungeKutta2 *>(vp);

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
      tempr = op->vtkRungeKutta2::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRungeKutta2_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRungeKutta2 *op = static_cast<vtkRungeKutta2 *>(vp);

  vtkRungeKutta2 *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkRungeKutta2::NewInstance();
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
PyvtkRungeKutta2_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkRungeKutta2 *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkRungeKutta2::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkRungeKutta2_Methods[] = {
  {(char*)"GetClassName", PyvtkRungeKutta2_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRungeKutta2_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRungeKutta2_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkRungeKutta2\nC++: vtkRungeKutta2 *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRungeKutta2_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRungeKutta2\nC++: vtkRungeKutta2 *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRungeKutta2_StaticNew()
{
  return vtkRungeKutta2::New();
}

PyObject *PyVTKClass_vtkRungeKutta2New(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRungeKutta2_StaticNew,
    PyvtkRungeKutta2_Methods,
    "vtkRungeKutta2", modulename,
    NULL, NULL,
    PyvtkRungeKutta2_Doc(),
    PyVTKClass_vtkInitialValueProblemSolverNew(modulename));
  return cls;
}

const char **PyvtkRungeKutta2_Doc()
{
  static const char *docstring[] = {
    "vtkRungeKutta2 - Integrate an initial value problem using 2nd\n\n",
    "Superclass: vtkInitialValueProblemSolver\n\n",
    "This is a concrete sub-class of vtkInitialValueProblemSolver. It uses\na 2nd order Runge-Kutta method to obtain the values of a set of\nfunctions at the next time step.\n\nSee Also:\n\nvtkInitialValueProblemSolver vtkRungeKutta4 vtkRungeKutta45\nvtkFunctionSet\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRungeKutta2(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRungeKutta2New(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRungeKutta2", o) != 0)
    {
    Py_DECREF(o);
    }

}

