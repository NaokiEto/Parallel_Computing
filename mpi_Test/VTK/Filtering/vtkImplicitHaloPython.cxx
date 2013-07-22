// python wrapper for vtkImplicitHalo
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
#include "vtkImplicitHalo.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImplicitHalo(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImplicitHalo(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImplicitHaloNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImplicitHaloNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImplicitFunctionNew
extern "C" { PyObject *PyVTKClass_vtkImplicitFunctionNew(const char *); }
#define DECLARED_PyVTKClass_vtkImplicitFunctionNew
#endif

static const char **PyvtkImplicitHalo_Doc();


static PyObject *
PyvtkImplicitHalo_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitHalo *op = static_cast<vtkImplicitHalo *>(vp);

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
      tempr = op->vtkImplicitHalo::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitHalo_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitHalo *op = static_cast<vtkImplicitHalo *>(vp);

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
      tempr = op->vtkImplicitHalo::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitHalo_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitHalo *op = static_cast<vtkImplicitHalo *>(vp);

  vtkImplicitHalo *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImplicitHalo::NewInstance();
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
PyvtkImplicitHalo_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImplicitHalo *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImplicitHalo::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitHalo_EvaluateFunction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitHalo *op = static_cast<vtkImplicitHalo *>(vp);

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
      tempr = op->vtkImplicitHalo::EvaluateFunction(temp0);
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
PyvtkImplicitHalo_EvaluateFunction_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitHalo *op = static_cast<vtkImplicitHalo *>(vp);

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
      tempr = op->vtkImplicitHalo::EvaluateFunction(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitHalo_EvaluateFunction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImplicitHalo_EvaluateFunction_s1(self, args);
    case 3:
      return PyvtkImplicitHalo_EvaluateFunction_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "EvaluateFunction");
  return NULL;
}



static PyObject *
PyvtkImplicitHalo_EvaluateGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitHalo *op = static_cast<vtkImplicitHalo *>(vp);

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
      op->vtkImplicitHalo::EvaluateGradient(temp0, temp1);
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
PyvtkImplicitHalo_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitHalo *op = static_cast<vtkImplicitHalo *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRadius(temp0);
      }
    else
      {
      op->vtkImplicitHalo::SetRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitHalo_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitHalo *op = static_cast<vtkImplicitHalo *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRadius();
      }
    else
      {
      tempr = op->vtkImplicitHalo::GetRadius();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitHalo_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitHalo *op = static_cast<vtkImplicitHalo *>(vp);

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
      op->SetCenter(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImplicitHalo::SetCenter(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitHalo_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitHalo *op = static_cast<vtkImplicitHalo *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetCenter(temp0);
      }
    else
      {
      op->vtkImplicitHalo::SetCenter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitHalo_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImplicitHalo_SetCenter_s1(self, args);
    case 1:
      return PyvtkImplicitHalo_SetCenter_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return NULL;
}



static PyObject *
PyvtkImplicitHalo_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitHalo *op = static_cast<vtkImplicitHalo *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCenter();
      }
    else
      {
      tempr = op->vtkImplicitHalo::GetCenter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitHalo_SetFadeOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFadeOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitHalo *op = static_cast<vtkImplicitHalo *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFadeOut(temp0);
      }
    else
      {
      op->vtkImplicitHalo::SetFadeOut(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitHalo_GetFadeOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFadeOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitHalo *op = static_cast<vtkImplicitHalo *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFadeOut();
      }
    else
      {
      tempr = op->vtkImplicitHalo::GetFadeOut();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImplicitHalo_Methods[] = {
  {(char*)"GetClassName", PyvtkImplicitHalo_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImplicitHalo_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImplicitHalo_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImplicitHalo\nC++: vtkImplicitHalo *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImplicitHalo_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImplicitHalo\nC++: vtkImplicitHalo *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"EvaluateFunction", PyvtkImplicitHalo_EvaluateFunction, 1,
   (char*)"V.EvaluateFunction([float, float, float]) -> float\nC++: virtual double EvaluateFunction(double x[3])\nV.EvaluateFunction(float, float, float) -> float\nC++: virtual double EvaluateFunction(double x, double y, double z)\n\n"},
  {(char*)"EvaluateGradient", PyvtkImplicitHalo_EvaluateGradient, 1,
   (char*)"V.EvaluateGradient([float, float, float], [float, float, float])\nC++: void EvaluateGradient(double x[3], double g[3])\n\n"},
  {(char*)"SetRadius", PyvtkImplicitHalo_SetRadius, 1,
   (char*)"V.SetRadius(float)\nC++: void SetRadius(double a)\n\nRadius of the sphere.\n"},
  {(char*)"GetRadius", PyvtkImplicitHalo_GetRadius, 1,
   (char*)"V.GetRadius() -> float\nC++: double GetRadius()\n\nRadius of the sphere.\n"},
  {(char*)"SetCenter", PyvtkImplicitHalo_SetCenter, 1,
   (char*)"V.SetCenter(float, float, float)\nC++: void SetCenter(double, double, double)\nV.SetCenter((float, float, float))\nC++: void SetCenter(double a[3])\n\n"},
  {(char*)"GetCenter", PyvtkImplicitHalo_GetCenter, 1,
   (char*)"V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\n\n"},
  {(char*)"SetFadeOut", PyvtkImplicitHalo_SetFadeOut, 1,
   (char*)"V.SetFadeOut(float)\nC++: void SetFadeOut(double a)\n\nFadeOut ratio. Valid values are between 0.0 and 1.0.\n"},
  {(char*)"GetFadeOut", PyvtkImplicitHalo_GetFadeOut, 1,
   (char*)"V.GetFadeOut() -> float\nC++: double GetFadeOut()\n\nFadeOut ratio. Valid values are between 0.0 and 1.0.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImplicitHalo_StaticNew()
{
  return vtkImplicitHalo::New();
}

PyObject *PyVTKClass_vtkImplicitHaloNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImplicitHalo_StaticNew,
    PyvtkImplicitHalo_Methods,
    "vtkImplicitHalo", modulename,
    NULL, NULL,
    PyvtkImplicitHalo_Doc(),
    PyVTKClass_vtkImplicitFunctionNew(modulename));
  return cls;
}

const char **PyvtkImplicitHalo_Doc()
{
  static const char *docstring[] = {
    "vtkImplicitHalo - implicit function for an halo\n\n",
    "Superclass: vtkImplicitFunction\n\n",
    "vtkImplicitHalo evaluates to 1.0 for each position in the sphere of a\ngiven center and radius Radius*(1-FadeOut). It evaluates to 0.0 for\neach position out the sphere of a given Center and radius Radius. It\nfades out linearly from 1.0 to 0.0 for points in a radius from\nRadius*(1-FadeOut) to Radius. vtkImplicitHalo is a concrete\nimplementation of vtkImplicitFunction. It is useful as an input to\nvtk",
    "SampleFunction to generate an 2D image of an halo. It is used this\nway by vtkShadowMapPass.\n\nCaveats:\n\nIt does not implement the gradient.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImplicitHalo(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImplicitHaloNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImplicitHalo", o) != 0)
    {
    Py_DECREF(o);
    }

}

