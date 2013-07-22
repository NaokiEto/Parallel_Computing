// python wrapper for vtkImplicitWindowFunction
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
#include "vtkImplicitWindowFunction.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImplicitWindowFunction(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImplicitWindowFunction(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImplicitWindowFunctionNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImplicitWindowFunctionNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImplicitFunctionNew
extern "C" { PyObject *PyVTKClass_vtkImplicitFunctionNew(const char *); }
#define DECLARED_PyVTKClass_vtkImplicitFunctionNew
#endif

static const char **PyvtkImplicitWindowFunction_Doc();


static PyObject *
PyvtkImplicitWindowFunction_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitWindowFunction *op = static_cast<vtkImplicitWindowFunction *>(vp);

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
      tempr = op->vtkImplicitWindowFunction::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitWindowFunction_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitWindowFunction *op = static_cast<vtkImplicitWindowFunction *>(vp);

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
      tempr = op->vtkImplicitWindowFunction::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitWindowFunction_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitWindowFunction *op = static_cast<vtkImplicitWindowFunction *>(vp);

  vtkImplicitWindowFunction *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImplicitWindowFunction::NewInstance();
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
PyvtkImplicitWindowFunction_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImplicitWindowFunction *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImplicitWindowFunction::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitWindowFunction_EvaluateFunction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitWindowFunction *op = static_cast<vtkImplicitWindowFunction *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      tempr = op->EvaluateFunction(temp0);
      }
    else
      {
      tempr = op->vtkImplicitWindowFunction::EvaluateFunction(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitWindowFunction_EvaluateFunction_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitWindowFunction *op = static_cast<vtkImplicitWindowFunction *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->EvaluateFunction(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkImplicitWindowFunction::EvaluateFunction(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitWindowFunction_EvaluateFunction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImplicitWindowFunction_EvaluateFunction_s1(self, args);
    case 3:
      return PyvtkImplicitWindowFunction_EvaluateFunction_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "EvaluateFunction");
  return NULL;
}



static PyObject *
PyvtkImplicitWindowFunction_EvaluateGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitWindowFunction *op = static_cast<vtkImplicitWindowFunction *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->EvaluateGradient(temp0, temp1);
      }
    else
      {
      op->vtkImplicitWindowFunction::EvaluateGradient(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitWindowFunction_SetImplicitFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImplicitFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitWindowFunction *op = static_cast<vtkImplicitWindowFunction *>(vp);

  vtkImplicitFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
    {
    if (ap.IsBound())
      {
      op->SetImplicitFunction(temp0);
      }
    else
      {
      op->vtkImplicitWindowFunction::SetImplicitFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitWindowFunction_GetImplicitFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImplicitFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitWindowFunction *op = static_cast<vtkImplicitWindowFunction *>(vp);

  vtkImplicitFunction *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetImplicitFunction();
      }
    else
      {
      tempr = op->vtkImplicitWindowFunction::GetImplicitFunction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitWindowFunction_SetWindowRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitWindowFunction *op = static_cast<vtkImplicitWindowFunction *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetWindowRange(temp0, temp1);
      }
    else
      {
      op->vtkImplicitWindowFunction::SetWindowRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitWindowFunction_SetWindowRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitWindowFunction *op = static_cast<vtkImplicitWindowFunction *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetWindowRange(temp0);
      }
    else
      {
      op->vtkImplicitWindowFunction::SetWindowRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitWindowFunction_SetWindowRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkImplicitWindowFunction_SetWindowRange_s1(self, args);
    case 1:
      return PyvtkImplicitWindowFunction_SetWindowRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetWindowRange");
  return NULL;
}



static PyObject *
PyvtkImplicitWindowFunction_GetWindowRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitWindowFunction *op = static_cast<vtkImplicitWindowFunction *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWindowRange();
      }
    else
      {
      tempr = op->vtkImplicitWindowFunction::GetWindowRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitWindowFunction_SetWindowValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitWindowFunction *op = static_cast<vtkImplicitWindowFunction *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetWindowValues(temp0, temp1);
      }
    else
      {
      op->vtkImplicitWindowFunction::SetWindowValues(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitWindowFunction_SetWindowValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitWindowFunction *op = static_cast<vtkImplicitWindowFunction *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetWindowValues(temp0);
      }
    else
      {
      op->vtkImplicitWindowFunction::SetWindowValues(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitWindowFunction_SetWindowValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkImplicitWindowFunction_SetWindowValues_s1(self, args);
    case 1:
      return PyvtkImplicitWindowFunction_SetWindowValues_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetWindowValues");
  return NULL;
}



static PyObject *
PyvtkImplicitWindowFunction_GetWindowValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitWindowFunction *op = static_cast<vtkImplicitWindowFunction *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWindowValues();
      }
    else
      {
      tempr = op->vtkImplicitWindowFunction::GetWindowValues();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitWindowFunction_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitWindowFunction *op = static_cast<vtkImplicitWindowFunction *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMTime();
      }
    else
      {
      tempr = op->vtkImplicitWindowFunction::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImplicitWindowFunction_Methods[] = {
  {(char*)"GetClassName", PyvtkImplicitWindowFunction_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImplicitWindowFunction_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImplicitWindowFunction_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImplicitWindowFunction\nC++: vtkImplicitWindowFunction *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImplicitWindowFunction_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImplicitWindowFunction\nC++: vtkImplicitWindowFunction *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"EvaluateFunction", PyvtkImplicitWindowFunction_EvaluateFunction, 1,
   (char*)"V.EvaluateFunction([float, float, float]) -> float\nC++: double EvaluateFunction(double x[3])\nV.EvaluateFunction(float, float, float) -> float\nC++: double EvaluateFunction(double x, double y, double z)\n\n"},
  {(char*)"EvaluateGradient", PyvtkImplicitWindowFunction_EvaluateGradient, 1,
   (char*)"V.EvaluateGradient([float, float, float], [float, float, float])\nC++: void EvaluateGradient(double x[3], double n[3])\n\n"},
  {(char*)"SetImplicitFunction", PyvtkImplicitWindowFunction_SetImplicitFunction, 1,
   (char*)"V.SetImplicitFunction(vtkImplicitFunction)\nC++: virtual void SetImplicitFunction(vtkImplicitFunction *)\n\nSpecify an implicit function to operate on.\n"},
  {(char*)"GetImplicitFunction", PyvtkImplicitWindowFunction_GetImplicitFunction, 1,
   (char*)"V.GetImplicitFunction() -> vtkImplicitFunction\nC++: vtkImplicitFunction *GetImplicitFunction()\n\nSpecify an implicit function to operate on.\n"},
  {(char*)"SetWindowRange", PyvtkImplicitWindowFunction_SetWindowRange, 1,
   (char*)"V.SetWindowRange(float, float)\nC++: void SetWindowRange(double, double)\nV.SetWindowRange((float, float))\nC++: void SetWindowRange(double a[2])\n\n"},
  {(char*)"GetWindowRange", PyvtkImplicitWindowFunction_GetWindowRange, 1,
   (char*)"V.GetWindowRange() -> (float, float)\nC++: double *GetWindowRange()\n\nSpecify the range of function values which are considered to lie\nwithin the window. WindowRange[0] is assumed to be less than\nWindowRange[1].\n"},
  {(char*)"SetWindowValues", PyvtkImplicitWindowFunction_SetWindowValues, 1,
   (char*)"V.SetWindowValues(float, float)\nC++: void SetWindowValues(double, double)\nV.SetWindowValues((float, float))\nC++: void SetWindowValues(double a[2])\n\n"},
  {(char*)"GetWindowValues", PyvtkImplicitWindowFunction_GetWindowValues, 1,
   (char*)"V.GetWindowValues() -> (float, float)\nC++: double *GetWindowValues()\n\nSpecify the range of output values that the window range is\nmapped into. This is effectively a scaling and shifting of the\noriginal function values.\n"},
  {(char*)"GetMTime", PyvtkImplicitWindowFunction_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nOverride modified time retrieval because of object dependencies.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImplicitWindowFunction_StaticNew()
{
  return vtkImplicitWindowFunction::New();
}

PyObject *PyVTKClass_vtkImplicitWindowFunctionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImplicitWindowFunction_StaticNew,
    PyvtkImplicitWindowFunction_Methods,
    "vtkImplicitWindowFunction", modulename,
    NULL, NULL,
    PyvtkImplicitWindowFunction_Doc(),
    PyVTKClass_vtkImplicitFunctionNew(modulename));
  return cls;
}

const char **PyvtkImplicitWindowFunction_Doc()
{
  static const char *docstring[] = {
    "vtkImplicitWindowFunction - implicit function maps another implicit\nfunction to lie within a specified range\n\n",
    "Superclass: vtkImplicitFunction\n\n",
    "vtkImplicitWindowFunction is used to modify the output of another\nimplicit function to lie within a specified \"window\", or function\nrange. This can be used to add \"thickness\" to cutting or clipping\nfunctions.\n\nThis class works as follows. First, it evaluates the function value\nof the user-specified implicit function. Then, based on the window\nrange specified, it maps the function value into the wi",
    "ndow values\nspecified.\n\nSee Also:\n\nvtkImplicitFunction\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImplicitWindowFunction(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImplicitWindowFunctionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImplicitWindowFunction", o) != 0)
    {
    Py_DECREF(o);
    }

}

