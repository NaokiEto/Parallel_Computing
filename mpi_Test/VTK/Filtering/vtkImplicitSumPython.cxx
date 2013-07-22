// python wrapper for vtkImplicitSum
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
#include "vtkImplicitSum.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImplicitSum(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImplicitSum(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImplicitSumNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImplicitSumNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImplicitFunctionNew
extern "C" { PyObject *PyVTKClass_vtkImplicitFunctionNew(const char *); }
#define DECLARED_PyVTKClass_vtkImplicitFunctionNew
#endif

static const char **PyvtkImplicitSum_Doc();


static PyObject *
PyvtkImplicitSum_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSum *op = static_cast<vtkImplicitSum *>(vp);

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
      tempr = op->vtkImplicitSum::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitSum_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSum *op = static_cast<vtkImplicitSum *>(vp);

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
      tempr = op->vtkImplicitSum::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitSum_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSum *op = static_cast<vtkImplicitSum *>(vp);

  vtkImplicitSum *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImplicitSum::NewInstance();
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
PyvtkImplicitSum_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImplicitSum *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImplicitSum::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitSum_EvaluateFunction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSum *op = static_cast<vtkImplicitSum *>(vp);

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
      tempr = op->vtkImplicitSum::EvaluateFunction(temp0);
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
PyvtkImplicitSum_EvaluateFunction_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSum *op = static_cast<vtkImplicitSum *>(vp);

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
      tempr = op->vtkImplicitSum::EvaluateFunction(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitSum_EvaluateFunction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImplicitSum_EvaluateFunction_s1(self, args);
    case 3:
      return PyvtkImplicitSum_EvaluateFunction_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "EvaluateFunction");
  return NULL;
}



static PyObject *
PyvtkImplicitSum_EvaluateGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSum *op = static_cast<vtkImplicitSum *>(vp);

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
      op->vtkImplicitSum::EvaluateGradient(temp0, temp1);
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
PyvtkImplicitSum_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSum *op = static_cast<vtkImplicitSum *>(vp);

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
      tempr = op->vtkImplicitSum::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitSum_AddFunction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSum *op = static_cast<vtkImplicitSum *>(vp);

  vtkImplicitFunction *temp0 = NULL;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddFunction(temp0, temp1);
      }
    else
      {
      op->vtkImplicitSum::AddFunction(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitSum_AddFunction_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSum *op = static_cast<vtkImplicitSum *>(vp);

  vtkImplicitFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
    {
    if (ap.IsBound())
      {
      op->AddFunction(temp0);
      }
    else
      {
      op->vtkImplicitSum::AddFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitSum_AddFunction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkImplicitSum_AddFunction_s1(self, args);
    case 1:
      return PyvtkImplicitSum_AddFunction_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddFunction");
  return NULL;
}



static PyObject *
PyvtkImplicitSum_RemoveAllFunctions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllFunctions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSum *op = static_cast<vtkImplicitSum *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllFunctions();
      }
    else
      {
      op->vtkImplicitSum::RemoveAllFunctions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitSum_SetFunctionWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFunctionWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSum *op = static_cast<vtkImplicitSum *>(vp);

  vtkImplicitFunction *temp0 = NULL;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetFunctionWeight(temp0, temp1);
      }
    else
      {
      op->vtkImplicitSum::SetFunctionWeight(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitSum_SetNormalizeByWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalizeByWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSum *op = static_cast<vtkImplicitSum *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNormalizeByWeight(temp0);
      }
    else
      {
      op->vtkImplicitSum::SetNormalizeByWeight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitSum_GetNormalizeByWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalizeByWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSum *op = static_cast<vtkImplicitSum *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNormalizeByWeight();
      }
    else
      {
      tempr = op->vtkImplicitSum::GetNormalizeByWeight();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitSum_NormalizeByWeightOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizeByWeightOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSum *op = static_cast<vtkImplicitSum *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NormalizeByWeightOn();
      }
    else
      {
      op->vtkImplicitSum::NormalizeByWeightOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitSum_NormalizeByWeightOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizeByWeightOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSum *op = static_cast<vtkImplicitSum *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NormalizeByWeightOff();
      }
    else
      {
      op->vtkImplicitSum::NormalizeByWeightOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImplicitSum_Methods[] = {
  {(char*)"GetClassName", PyvtkImplicitSum_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImplicitSum_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImplicitSum_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImplicitSum\nC++: vtkImplicitSum *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImplicitSum_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImplicitSum\nC++: vtkImplicitSum *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"EvaluateFunction", PyvtkImplicitSum_EvaluateFunction, 1,
   (char*)"V.EvaluateFunction([float, float, float]) -> float\nC++: double EvaluateFunction(double x[3])\nV.EvaluateFunction(float, float, float) -> float\nC++: double EvaluateFunction(double x, double y, double z)\n\nEvaluate implicit function using current functions and weights.\n"},
  {(char*)"EvaluateGradient", PyvtkImplicitSum_EvaluateGradient, 1,
   (char*)"V.EvaluateGradient([float, float, float], [float, float, float])\nC++: void EvaluateGradient(double x[3], double g[3])\n\nEvaluate gradient of the weighted sum of functions.  Input\nfunctions should be linear.\n"},
  {(char*)"GetMTime", PyvtkImplicitSum_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nOverride modified time retrieval because of object dependencies.\n"},
  {(char*)"AddFunction", PyvtkImplicitSum_AddFunction, 1,
   (char*)"V.AddFunction(vtkImplicitFunction, float)\nC++: void AddFunction(vtkImplicitFunction *in, double weight)\nV.AddFunction(vtkImplicitFunction)\nC++: void AddFunction(vtkImplicitFunction *in)\n\nAdd another implicit function to the list of functions, along\nwith a weighting factor.\n"},
  {(char*)"RemoveAllFunctions", PyvtkImplicitSum_RemoveAllFunctions, 1,
   (char*)"V.RemoveAllFunctions()\nC++: void RemoveAllFunctions()\n\nRemove all functions from the list.\n"},
  {(char*)"SetFunctionWeight", PyvtkImplicitSum_SetFunctionWeight, 1,
   (char*)"V.SetFunctionWeight(vtkImplicitFunction, float)\nC++: void SetFunctionWeight(vtkImplicitFunction *f, double weight)\n\nSet the weight (coefficient) of the given function to be weight.\n"},
  {(char*)"SetNormalizeByWeight", PyvtkImplicitSum_SetNormalizeByWeight, 1,
   (char*)"V.SetNormalizeByWeight(int)\nC++: void SetNormalizeByWeight(int a)\n\nWhen calculating the function and gradient values of the\ncomposite function, setting NormalizeByWeight on will divide the\nfinal result by the total weight of the component functions. This\nprocess does not otherwise normalize the gradient vector. By\ndefault, NormalizeByWeight is off.\n"},
  {(char*)"GetNormalizeByWeight", PyvtkImplicitSum_GetNormalizeByWeight, 1,
   (char*)"V.GetNormalizeByWeight() -> int\nC++: int GetNormalizeByWeight()\n\nWhen calculating the function and gradient values of the\ncomposite function, setting NormalizeByWeight on will divide the\nfinal result by the total weight of the component functions. This\nprocess does not otherwise normalize the gradient vector. By\ndefault, NormalizeByWeight is off.\n"},
  {(char*)"NormalizeByWeightOn", PyvtkImplicitSum_NormalizeByWeightOn, 1,
   (char*)"V.NormalizeByWeightOn()\nC++: void NormalizeByWeightOn()\n\nWhen calculating the function and gradient values of the\ncomposite function, setting NormalizeByWeight on will divide the\nfinal result by the total weight of the component functions. This\nprocess does not otherwise normalize the gradient vector. By\ndefault, NormalizeByWeight is off.\n"},
  {(char*)"NormalizeByWeightOff", PyvtkImplicitSum_NormalizeByWeightOff, 1,
   (char*)"V.NormalizeByWeightOff()\nC++: void NormalizeByWeightOff()\n\nWhen calculating the function and gradient values of the\ncomposite function, setting NormalizeByWeight on will divide the\nfinal result by the total weight of the component functions. This\nprocess does not otherwise normalize the gradient vector. By\ndefault, NormalizeByWeight is off.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImplicitSum_StaticNew()
{
  return vtkImplicitSum::New();
}

PyObject *PyVTKClass_vtkImplicitSumNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImplicitSum_StaticNew,
    PyvtkImplicitSum_Methods,
    "vtkImplicitSum", modulename,
    NULL, NULL,
    PyvtkImplicitSum_Doc(),
    PyVTKClass_vtkImplicitFunctionNew(modulename));
  return cls;
}

const char **PyvtkImplicitSum_Doc()
{
  static const char *docstring[] = {
    "vtkImplicitSum - implicit sum of other implicit functions\n\n",
    "Superclass: vtkImplicitFunction\n\n",
    "vtkImplicitSum produces a linear combination of other implicit\nfunctions. The contribution of each function is weighted by a scalar\ncoefficient. The NormalizeByWeight option normalizes the output so\nthat the scalar weights add up to 1. Note that this function gives\naccurate sums and gradients only if the input functions are linear.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImplicitSum(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImplicitSumNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImplicitSum", o) != 0)
    {
    Py_DECREF(o);
    }

}

