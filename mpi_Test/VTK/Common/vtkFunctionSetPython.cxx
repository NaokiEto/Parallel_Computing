// python wrapper for vtkFunctionSet
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
#include "vtkFunctionSet.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkFunctionSet(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkFunctionSet(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkFunctionSetNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkFunctionSetNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkFunctionSet_Doc();


static PyObject *
PyvtkFunctionSet_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionSet *op = static_cast<vtkFunctionSet *>(vp);

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
      tempr = op->vtkFunctionSet::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFunctionSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionSet *op = static_cast<vtkFunctionSet *>(vp);

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
      tempr = op->vtkFunctionSet::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFunctionSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionSet *op = static_cast<vtkFunctionSet *>(vp);

  vtkFunctionSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkFunctionSet::NewInstance();
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
PyvtkFunctionSet_GetNumberOfFunctions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFunctions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionSet *op = static_cast<vtkFunctionSet *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfFunctions();
      }
    else
      {
      tempr = op->vtkFunctionSet::GetNumberOfFunctions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFunctionSet_GetNumberOfIndependentVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIndependentVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionSet *op = static_cast<vtkFunctionSet *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfIndependentVariables();
      }
    else
      {
      tempr = op->vtkFunctionSet::GetNumberOfIndependentVariables();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkFunctionSet_Methods[] = {
  {(char*)"GetClassName", PyvtkFunctionSet_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkFunctionSet_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkFunctionSet_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkFunctionSet\nC++: vtkFunctionSet *NewInstance()\n\n"},
  {(char*)"GetNumberOfFunctions", PyvtkFunctionSet_GetNumberOfFunctions, 1,
   (char*)"V.GetNumberOfFunctions() -> int\nC++: virtual int GetNumberOfFunctions()\n\nReturn the number of functions. Note that this is constant for a\ngiven type of set of functions and can not be changed at run\ntime.\n"},
  {(char*)"GetNumberOfIndependentVariables", PyvtkFunctionSet_GetNumberOfIndependentVariables, 1,
   (char*)"V.GetNumberOfIndependentVariables() -> int\nC++: virtual int GetNumberOfIndependentVariables()\n\nReturn the number of independent variables. Note that this is\nconstant for a given type of set of functions and can not be\nchanged at run time.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkFunctionSetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkFunctionSet_Methods,
    "vtkFunctionSet", modulename,
    NULL, NULL,
    PyvtkFunctionSet_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkFunctionSet_Doc()
{
  static const char *docstring[] = {
    "vtkFunctionSet - Abstract interface for sets of functions\n\n",
    "Superclass: vtkObject\n\n",
    "vtkFunctionSet specifies an abstract interface for set of functions\nof the form F_i = F_i(x_j) where F (with i=1..m) are the functions\nand x (with j=1..n) are the independent variables. The only supported\noperation is the  function evaluation at x_j.\n\nSee Also:\n\nvtkImplicitDataSet vtkInterpolatedVelocityField\nvtkInitialValueProblemSolver\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkFunctionSet(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkFunctionSetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkFunctionSet", o) != 0)
    {
    Py_DECREF(o);
    }

}

