// python wrapper for vtkQuaternionInterpolator
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
#include "vtkQuaternionInterpolator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkQuaternionInterpolator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkQuaternionInterpolator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkQuaternionInterpolatorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkQuaternionInterpolatorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkQuaternionInterpolator_Doc();


static PyObject *
PyvtkQuaternionInterpolator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

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
      tempr = op->vtkQuaternionInterpolator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

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
      tempr = op->vtkQuaternionInterpolator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  vtkQuaternionInterpolator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkQuaternionInterpolator::NewInstance();
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
PyvtkQuaternionInterpolator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkQuaternionInterpolator *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkQuaternionInterpolator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_GetNumberOfQuaternions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfQuaternions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfQuaternions();
      }
    else
      {
      tempr = op->vtkQuaternionInterpolator::GetNumberOfQuaternions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_GetMinimumT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinimumT();
      }
    else
      {
      tempr = op->vtkQuaternionInterpolator::GetMinimumT();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_GetMaximumT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumT();
      }
    else
      {
      tempr = op->vtkQuaternionInterpolator::GetMaximumT();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkQuaternionInterpolator::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_AddQuaternion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddQuaternion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  double temp0;
  double temp1[4];
  double save1[4];
  const int size1 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->AddQuaternion(temp0, temp1);
      }
    else
      {
      op->vtkQuaternionInterpolator::AddQuaternion(temp0, temp1);
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
PyvtkQuaternionInterpolator_RemoveQuaternion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveQuaternion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveQuaternion(temp0);
      }
    else
      {
      op->vtkQuaternionInterpolator::RemoveQuaternion(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_InterpolateQuaternion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateQuaternion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  double temp0;
  double temp1[4];
  double save1[4];
  const int size1 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->InterpolateQuaternion(temp0, temp1);
      }
    else
      {
      op->vtkQuaternionInterpolator::InterpolateQuaternion(temp0, temp1);
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
PyvtkQuaternionInterpolator_SetInterpolationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationType(temp0);
      }
    else
      {
      op->vtkQuaternionInterpolator::SetInterpolationType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_GetInterpolationTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInterpolationTypeMinValue();
      }
    else
      {
      tempr = op->vtkQuaternionInterpolator::GetInterpolationTypeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_GetInterpolationTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInterpolationTypeMaxValue();
      }
    else
      {
      tempr = op->vtkQuaternionInterpolator::GetInterpolationTypeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_GetInterpolationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInterpolationType();
      }
    else
      {
      tempr = op->vtkQuaternionInterpolator::GetInterpolationType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_SetInterpolationTypeToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationTypeToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationTypeToLinear();
      }
    else
      {
      op->vtkQuaternionInterpolator::SetInterpolationTypeToLinear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_SetInterpolationTypeToSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationTypeToSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationTypeToSpline();
      }
    else
      {
      op->vtkQuaternionInterpolator::SetInterpolationTypeToSpline();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkQuaternionInterpolator_Methods[] = {
  {(char*)"GetClassName", PyvtkQuaternionInterpolator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkQuaternionInterpolator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkQuaternionInterpolator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkQuaternionInterpolator\nC++: vtkQuaternionInterpolator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkQuaternionInterpolator_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkQuaternionInterpolator\nC++: vtkQuaternionInterpolator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetNumberOfQuaternions", PyvtkQuaternionInterpolator_GetNumberOfQuaternions, 1,
   (char*)"V.GetNumberOfQuaternions() -> int\nC++: int GetNumberOfQuaternions()\n\nReturn the number of quaternions in the list of quaternions to be\ninterpolated.\n"},
  {(char*)"GetMinimumT", PyvtkQuaternionInterpolator_GetMinimumT, 1,
   (char*)"V.GetMinimumT() -> float\nC++: double GetMinimumT()\n\nObtain some information about the interpolation range. The\nnumbers returned (corresponding to parameter t, usually thought\nof as time) are undefined if the list of transforms is empty.\nThis is a convenience method for interpolation.\n"},
  {(char*)"GetMaximumT", PyvtkQuaternionInterpolator_GetMaximumT, 1,
   (char*)"V.GetMaximumT() -> float\nC++: double GetMaximumT()\n\nObtain some information about the interpolation range. The\nnumbers returned (corresponding to parameter t, usually thought\nof as time) are undefined if the list of transforms is empty.\nThis is a convenience method for interpolation.\n"},
  {(char*)"Initialize", PyvtkQuaternionInterpolator_Initialize, 1,
   (char*)"V.Initialize()\nC++: void Initialize()\n\nReset the class so that it contains no data; i.e., the array of\n(t,q[4]) information is discarded.\n"},
  {(char*)"AddQuaternion", PyvtkQuaternionInterpolator_AddQuaternion, 1,
   (char*)"V.AddQuaternion(float, [float, float, float, float])\nC++: void AddQuaternion(double t, double q[4])\n\nAdd another quaternion to the list of quaternions to be\ninterpolated. Note that using the same time t value more than\nonce replaces the previous quaternion at t.  At least one\nquaternions must be added to define an interpolation functios.\n"},
  {(char*)"RemoveQuaternion", PyvtkQuaternionInterpolator_RemoveQuaternion, 1,
   (char*)"V.RemoveQuaternion(float)\nC++: void RemoveQuaternion(double t)\n\nDelete the quaternion at a particular parameter t. If there is no\nquaternion tuple defined at t, then the method does nothing.\n"},
  {(char*)"InterpolateQuaternion", PyvtkQuaternionInterpolator_InterpolateQuaternion, 1,
   (char*)"V.InterpolateQuaternion(float, [float, float, float, float])\nC++: void InterpolateQuaternion(double t, double q[4])\n\nInterpolate the list of quaternions and determine a new\nquaternion (i.e., fill in the quaternion provided). If t is\noutside the range of (min,max) values, then t is clamped to lie\nwithin the range.\n"},
  {(char*)"SetInterpolationType", PyvtkQuaternionInterpolator_SetInterpolationType, 1,
   (char*)"V.SetInterpolationType(int)\nC++: void SetInterpolationType(int)\n\nSpecify which type of function to use for interpolation. By\ndefault (SetInterpolationFunctionToSpline()), cubic spline\ninterpolation using a modifed Kochanek basis is employed.\nOtherwise, if SetInterpolationFunctionToLinear() is invoked,\nlinear spherical interpolation is used between each pair of\nquaternions.\n"},
  {(char*)"GetInterpolationTypeMinValue", PyvtkQuaternionInterpolator_GetInterpolationTypeMinValue, 1,
   (char*)"V.GetInterpolationTypeMinValue() -> int\nC++: int GetInterpolationTypeMinValue()\n\nSpecify which type of function to use for interpolation. By\ndefault (SetInterpolationFunctionToSpline()), cubic spline\ninterpolation using a modifed Kochanek basis is employed.\nOtherwise, if SetInterpolationFunctionToLinear() is invoked,\nlinear spherical interpolation is used between each pair of\nquaternions.\n"},
  {(char*)"GetInterpolationTypeMaxValue", PyvtkQuaternionInterpolator_GetInterpolationTypeMaxValue, 1,
   (char*)"V.GetInterpolationTypeMaxValue() -> int\nC++: int GetInterpolationTypeMaxValue()\n\nSpecify which type of function to use for interpolation. By\ndefault (SetInterpolationFunctionToSpline()), cubic spline\ninterpolation using a modifed Kochanek basis is employed.\nOtherwise, if SetInterpolationFunctionToLinear() is invoked,\nlinear spherical interpolation is used between each pair of\nquaternions.\n"},
  {(char*)"GetInterpolationType", PyvtkQuaternionInterpolator_GetInterpolationType, 1,
   (char*)"V.GetInterpolationType() -> int\nC++: int GetInterpolationType()\n\nSpecify which type of function to use for interpolation. By\ndefault (SetInterpolationFunctionToSpline()), cubic spline\ninterpolation using a modifed Kochanek basis is employed.\nOtherwise, if SetInterpolationFunctionToLinear() is invoked,\nlinear spherical interpolation is used between each pair of\nquaternions.\n"},
  {(char*)"SetInterpolationTypeToLinear", PyvtkQuaternionInterpolator_SetInterpolationTypeToLinear, 1,
   (char*)"V.SetInterpolationTypeToLinear()\nC++: void SetInterpolationTypeToLinear()\n\nSpecify which type of function to use for interpolation. By\ndefault (SetInterpolationFunctionToSpline()), cubic spline\ninterpolation using a modifed Kochanek basis is employed.\nOtherwise, if SetInterpolationFunctionToLinear() is invoked,\nlinear spherical interpolation is used between each pair of\nquaternions.\n"},
  {(char*)"SetInterpolationTypeToSpline", PyvtkQuaternionInterpolator_SetInterpolationTypeToSpline, 1,
   (char*)"V.SetInterpolationTypeToSpline()\nC++: void SetInterpolationTypeToSpline()\n\nSpecify which type of function to use for interpolation. By\ndefault (SetInterpolationFunctionToSpline()), cubic spline\ninterpolation using a modifed Kochanek basis is employed.\nOtherwise, if SetInterpolationFunctionToLinear() is invoked,\nlinear spherical interpolation is used between each pair of\nquaternions.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkQuaternionInterpolator_StaticNew()
{
  return vtkQuaternionInterpolator::New();
}

PyObject *PyVTKClass_vtkQuaternionInterpolatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkQuaternionInterpolator_StaticNew,
    PyvtkQuaternionInterpolator_Methods,
    "vtkQuaternionInterpolator", modulename,
    NULL, NULL,
    PyvtkQuaternionInterpolator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"INTERPOLATION_TYPE_LINEAR", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"INTERPOLATION_TYPE_SPLINE", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkQuaternionInterpolator_Doc()
{
  static const char *docstring[] = {
    "vtkQuaternionInterpolator - interpolate a quaternion\n\n",
    "Superclass: vtkObject\n\n",
    "This class is used to interpolate a series of quaternions\nrepresenting the rotations of a 3D object.  The interpolation may be\nlinear in form (using spherical linear interpolation SLERP), or via\nspline interpolation (using SQUAD). In either case the interpolation\nis specialized to quaternions since the interpolation occurs on the\nsurface of the unit quaternion sphere.\n\nTo use this class, specify a",
    "t least two pairs of (t,q[4]) with the\nAddQuaternion() method.  Next interpolate the tuples with the\nInterpolateQuaternion(t,q[4]) method, where \"t\" must be in the range\nof (t_min,t_max) parameter values specified by the AddQuaternion()\nmethod (t is clamped otherwise), and q[4] is filled in by the method.\n\nThere are several important background references. Ken Shoemake\ndescribed the practical appl",
    "ication of quaternions for the\ninterpolation of rotation (K. Shoemake, \"Animating rotation with quaternion\ncurves\", Computer Graphics (Siggraph '85) 19(3):245--254, 1985).\nAnother fine reference (available on-line) is E. B. Dam, M. Koch, and\nM. Lillholm, Technical Report DIKU-TR-98/5, Dept. of Computer\nScience, University of Copenhagen, Denmark.\n\nCaveats:\n\nNote that for two or less quaternions, Sl",
    "erp (linear) interpolation\nis performed even if spline interpolation is requested. Also, the\ntangents to the first and last segments of spline interpolation are\n(arbitrarily) defined by repeating the first and last quaternions.\n\nThere are several methods particular to quaternions (norms, products,\netc.) implemented interior to this class. These may be moved to a\nseparate quaternion class at some p",
    "oint.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkQuaternionInterpolator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkQuaternionInterpolatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkQuaternionInterpolator", o) != 0)
    {
    Py_DECREF(o);
    }

}

