// python wrapper for vtkQuadric
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
#include "vtkQuadric.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkQuadric(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkQuadric(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkQuadricNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkQuadricNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImplicitFunctionNew
extern "C" { PyObject *PyVTKClass_vtkImplicitFunctionNew(const char *); }
#define DECLARED_PyVTKClass_vtkImplicitFunctionNew
#endif

static const char **PyvtkQuadric_Doc();


static PyObject *
PyvtkQuadric_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadric *op = static_cast<vtkQuadric *>(vp);

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
      tempr = op->vtkQuadric::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadric_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadric *op = static_cast<vtkQuadric *>(vp);

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
      tempr = op->vtkQuadric::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadric_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadric *op = static_cast<vtkQuadric *>(vp);

  vtkQuadric *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkQuadric::NewInstance();
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
PyvtkQuadric_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkQuadric *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkQuadric::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadric_EvaluateFunction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadric *op = static_cast<vtkQuadric *>(vp);

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
      tempr = op->vtkQuadric::EvaluateFunction(temp0);
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
PyvtkQuadric_EvaluateFunction_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadric *op = static_cast<vtkQuadric *>(vp);

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
      tempr = op->vtkQuadric::EvaluateFunction(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkQuadric_EvaluateFunction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkQuadric_EvaluateFunction_s1(self, args);
    case 3:
      return PyvtkQuadric_EvaluateFunction_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "EvaluateFunction");
  return NULL;
}



static PyObject *
PyvtkQuadric_EvaluateGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadric *op = static_cast<vtkQuadric *>(vp);

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
      op->vtkQuadric::EvaluateGradient(temp0, temp1);
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
PyvtkQuadric_SetCoefficients_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoefficients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadric *op = static_cast<vtkQuadric *>(vp);

  double temp0[10];
  double save0[10];
  const int size0 = 10;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetCoefficients(temp0);
      }
    else
      {
      op->vtkQuadric::SetCoefficients(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkQuadric_SetCoefficients_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoefficients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadric *op = static_cast<vtkQuadric *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  double temp7;
  double temp8;
  double temp9;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(10) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7) &&
      ap.GetValue(temp8) &&
      ap.GetValue(temp9))
    {
    if (ap.IsBound())
      {
      op->SetCoefficients(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
      }
    else
      {
      op->vtkQuadric::SetCoefficients(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkQuadric_SetCoefficients(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkQuadric_SetCoefficients_s1(self, args);
    case 10:
      return PyvtkQuadric_SetCoefficients_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCoefficients");
  return NULL;
}



static PyObject *
PyvtkQuadric_GetCoefficients(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoefficients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadric *op = static_cast<vtkQuadric *>(vp);

  double *tempr;
  int sizer = 10;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCoefficients();
      }
    else
      {
      tempr = op->vtkQuadric::GetCoefficients();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkQuadric_Methods[] = {
  {(char*)"GetClassName", PyvtkQuadric_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkQuadric_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkQuadric_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkQuadric\nC++: vtkQuadric *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkQuadric_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkQuadric\nC++: vtkQuadric *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"EvaluateFunction", PyvtkQuadric_EvaluateFunction, 1,
   (char*)"V.EvaluateFunction([float, float, float]) -> float\nC++: double EvaluateFunction(double x[3])\nV.EvaluateFunction(float, float, float) -> float\nC++: double EvaluateFunction(double x, double y, double z)\n\n"},
  {(char*)"EvaluateGradient", PyvtkQuadric_EvaluateGradient, 1,
   (char*)"V.EvaluateGradient([float, float, float], [float, float, float])\nC++: void EvaluateGradient(double x[3], double g[3])\n\n"},
  {(char*)"SetCoefficients", PyvtkQuadric_SetCoefficients, 1,
   (char*)"V.SetCoefficients([float, float, float, float, float, float,\n    float, float, float, float])\nC++: void SetCoefficients(double a[10])\nV.SetCoefficients(float, float, float, float, float, float, float,\n     float, float, float)\nC++: void SetCoefficients(double a0, double a1, double a2,\n    double a3, double a4, double a5, double a6, double a7,\n    double a8, double a9)\n\n"},
  {(char*)"GetCoefficients", PyvtkQuadric_GetCoefficients, 1,
   (char*)"V.GetCoefficients() -> (float, float, float, float, float, float,\n    float, float, float, float)\nC++: double *GetCoefficients()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkQuadric_StaticNew()
{
  return vtkQuadric::New();
}

PyObject *PyVTKClass_vtkQuadricNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkQuadric_StaticNew,
    PyvtkQuadric_Methods,
    "vtkQuadric", modulename,
    NULL, NULL,
    PyvtkQuadric_Doc(),
    PyVTKClass_vtkImplicitFunctionNew(modulename));
  return cls;
}

const char **PyvtkQuadric_Doc()
{
  static const char *docstring[] = {
    "vtkQuadric - evaluate implicit quadric function\n\n",
    "Superclass: vtkImplicitFunction\n\n",
    "vtkQuadric evaluates the quadric function F(x,y,z) = a0*x^2 + a1*y^2\n+ a2*z^2 + a3*x*y + a4*y*z + a5*x*z + a6*x + a7*y + a8*z + a9.\nvtkQuadric is a concrete implementation of vtkImplicitFunction.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkQuadric(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkQuadricNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkQuadric", o) != 0)
    {
    Py_DECREF(o);
    }

}

