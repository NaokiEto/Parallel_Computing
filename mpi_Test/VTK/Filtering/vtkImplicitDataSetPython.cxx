// python wrapper for vtkImplicitDataSet
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
#include "vtkImplicitDataSet.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImplicitDataSet(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImplicitDataSet(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImplicitDataSetNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImplicitDataSetNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImplicitFunctionNew
extern "C" { PyObject *PyVTKClass_vtkImplicitFunctionNew(const char *); }
#define DECLARED_PyVTKClass_vtkImplicitFunctionNew
#endif

static const char **PyvtkImplicitDataSet_Doc();


static PyObject *
PyvtkImplicitDataSet_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitDataSet *op = static_cast<vtkImplicitDataSet *>(vp);

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
      tempr = op->vtkImplicitDataSet::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitDataSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitDataSet *op = static_cast<vtkImplicitDataSet *>(vp);

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
      tempr = op->vtkImplicitDataSet::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitDataSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitDataSet *op = static_cast<vtkImplicitDataSet *>(vp);

  vtkImplicitDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImplicitDataSet::NewInstance();
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
PyvtkImplicitDataSet_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImplicitDataSet *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImplicitDataSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitDataSet_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitDataSet *op = static_cast<vtkImplicitDataSet *>(vp);

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
      tempr = op->vtkImplicitDataSet::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitDataSet_EvaluateFunction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitDataSet *op = static_cast<vtkImplicitDataSet *>(vp);

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
      tempr = op->vtkImplicitDataSet::EvaluateFunction(temp0);
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
PyvtkImplicitDataSet_EvaluateFunction_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitDataSet *op = static_cast<vtkImplicitDataSet *>(vp);

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
      tempr = op->vtkImplicitDataSet::EvaluateFunction(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitDataSet_EvaluateFunction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImplicitDataSet_EvaluateFunction_s1(self, args);
    case 3:
      return PyvtkImplicitDataSet_EvaluateFunction_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "EvaluateFunction");
  return NULL;
}



static PyObject *
PyvtkImplicitDataSet_EvaluateGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitDataSet *op = static_cast<vtkImplicitDataSet *>(vp);

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
      op->vtkImplicitDataSet::EvaluateGradient(temp0, temp1);
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
PyvtkImplicitDataSet_SetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitDataSet *op = static_cast<vtkImplicitDataSet *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->SetDataSet(temp0);
      }
    else
      {
      op->vtkImplicitDataSet::SetDataSet(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitDataSet_GetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitDataSet *op = static_cast<vtkImplicitDataSet *>(vp);

  vtkDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataSet();
      }
    else
      {
      tempr = op->vtkImplicitDataSet::GetDataSet();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitDataSet_SetOutValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitDataSet *op = static_cast<vtkImplicitDataSet *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutValue(temp0);
      }
    else
      {
      op->vtkImplicitDataSet::SetOutValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitDataSet_GetOutValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitDataSet *op = static_cast<vtkImplicitDataSet *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutValue();
      }
    else
      {
      tempr = op->vtkImplicitDataSet::GetOutValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitDataSet_SetOutGradient_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitDataSet *op = static_cast<vtkImplicitDataSet *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetOutGradient(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImplicitDataSet::SetOutGradient(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitDataSet_SetOutGradient_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitDataSet *op = static_cast<vtkImplicitDataSet *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOutGradient(temp0);
      }
    else
      {
      op->vtkImplicitDataSet::SetOutGradient(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitDataSet_SetOutGradient(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImplicitDataSet_SetOutGradient_s1(self, args);
    case 1:
      return PyvtkImplicitDataSet_SetOutGradient_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOutGradient");
  return NULL;
}



static PyObject *
PyvtkImplicitDataSet_GetOutGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitDataSet *op = static_cast<vtkImplicitDataSet *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutGradient();
      }
    else
      {
      tempr = op->vtkImplicitDataSet::GetOutGradient();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkImplicitDataSet_Methods[] = {
  {(char*)"GetClassName", PyvtkImplicitDataSet_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImplicitDataSet_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImplicitDataSet_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImplicitDataSet\nC++: vtkImplicitDataSet *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImplicitDataSet_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImplicitDataSet\nC++: vtkImplicitDataSet *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetMTime", PyvtkImplicitDataSet_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nReturn the MTime also considering the DataSet dependency.\n"},
  {(char*)"EvaluateFunction", PyvtkImplicitDataSet_EvaluateFunction, 1,
   (char*)"V.EvaluateFunction([float, float, float]) -> float\nC++: double EvaluateFunction(double x[3])\nV.EvaluateFunction(float, float, float) -> float\nC++: double EvaluateFunction(double x, double y, double z)\n\n"},
  {(char*)"EvaluateGradient", PyvtkImplicitDataSet_EvaluateGradient, 1,
   (char*)"V.EvaluateGradient([float, float, float], [float, float, float])\nC++: void EvaluateGradient(double x[3], double n[3])\n\n"},
  {(char*)"SetDataSet", PyvtkImplicitDataSet_SetDataSet, 1,
   (char*)"V.SetDataSet(vtkDataSet)\nC++: virtual void SetDataSet(vtkDataSet *)\n\nSet / get the dataset used for the implicit function evaluation.\n"},
  {(char*)"GetDataSet", PyvtkImplicitDataSet_GetDataSet, 1,
   (char*)"V.GetDataSet() -> vtkDataSet\nC++: vtkDataSet *GetDataSet()\n\nSet / get the dataset used for the implicit function evaluation.\n"},
  {(char*)"SetOutValue", PyvtkImplicitDataSet_SetOutValue, 1,
   (char*)"V.SetOutValue(float)\nC++: void SetOutValue(double a)\n\nSet / get the function value to use for points outside of the\ndataset.\n"},
  {(char*)"GetOutValue", PyvtkImplicitDataSet_GetOutValue, 1,
   (char*)"V.GetOutValue() -> float\nC++: double GetOutValue()\n\nSet / get the function value to use for points outside of the\ndataset.\n"},
  {(char*)"SetOutGradient", PyvtkImplicitDataSet_SetOutGradient, 1,
   (char*)"V.SetOutGradient(float, float, float)\nC++: void SetOutGradient(double, double, double)\nV.SetOutGradient((float, float, float))\nC++: void SetOutGradient(double a[3])\n\n"},
  {(char*)"GetOutGradient", PyvtkImplicitDataSet_GetOutGradient, 1,
   (char*)"V.GetOutGradient() -> (float, float, float)\nC++: double *GetOutGradient()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImplicitDataSet_StaticNew()
{
  return vtkImplicitDataSet::New();
}

PyObject *PyVTKClass_vtkImplicitDataSetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImplicitDataSet_StaticNew,
    PyvtkImplicitDataSet_Methods,
    "vtkImplicitDataSet", modulename,
    NULL, NULL,
    PyvtkImplicitDataSet_Doc(),
    PyVTKClass_vtkImplicitFunctionNew(modulename));
  return cls;
}

const char **PyvtkImplicitDataSet_Doc()
{
  static const char *docstring[] = {
    "vtkImplicitDataSet - treat a dataset as if it were an implicit\nfunction\n\n",
    "Superclass: vtkImplicitFunction\n\n",
    "vtkImplicitDataSet treats any type of dataset as if it were an\nimplicit function. This means it computes a function value and\ngradient. vtkImplicitDataSet is a concrete implementation of\nvtkImplicitFunction.\n\nvtkImplicitDataSet computes the function (at the point x) by\nperforming cell interpolation. That is, it finds the cell containing\nx, and then uses the cell's interpolation functions to comput",
    "e an\ninterpolated scalar value at x. (A similar approach is used to find\nthe gradient, if requested.) Points outside of the dataset are\nassigned the value of the ivar OutValue, and the gradient value\nOutGradient.\n\nCaveats:\n\nAny type of dataset can be used as an implicit function as long as it\nhas scalar data associated with it.\n\nSee Also:\n\nvtkImplicitFunction vtkImplicitVolume vtkClipPolyData vtkC",
    "utter\nvtkImplicitWindowFunction\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImplicitDataSet(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImplicitDataSetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImplicitDataSet", o) != 0)
    {
    Py_DECREF(o);
    }

}

