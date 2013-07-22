// python wrapper for vtkTupleInterpolator
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
#include "vtkTupleInterpolator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTupleInterpolator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTupleInterpolator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTupleInterpolatorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTupleInterpolatorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkTupleInterpolator_Doc();


static PyObject *
PyvtkTupleInterpolator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTupleInterpolator *op = static_cast<vtkTupleInterpolator *>(vp);

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
      tempr = op->vtkTupleInterpolator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTupleInterpolator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTupleInterpolator *op = static_cast<vtkTupleInterpolator *>(vp);

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
      tempr = op->vtkTupleInterpolator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTupleInterpolator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTupleInterpolator *op = static_cast<vtkTupleInterpolator *>(vp);

  vtkTupleInterpolator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTupleInterpolator::NewInstance();
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
PyvtkTupleInterpolator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTupleInterpolator *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTupleInterpolator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTupleInterpolator_SetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTupleInterpolator *op = static_cast<vtkTupleInterpolator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfComponents(temp0);
      }
    else
      {
      op->vtkTupleInterpolator::SetNumberOfComponents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTupleInterpolator_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTupleInterpolator *op = static_cast<vtkTupleInterpolator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfComponents();
      }
    else
      {
      tempr = op->vtkTupleInterpolator::GetNumberOfComponents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTupleInterpolator_GetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTupleInterpolator *op = static_cast<vtkTupleInterpolator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfTuples();
      }
    else
      {
      tempr = op->vtkTupleInterpolator::GetNumberOfTuples();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTupleInterpolator_GetMinimumT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTupleInterpolator *op = static_cast<vtkTupleInterpolator *>(vp);

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
      tempr = op->vtkTupleInterpolator::GetMinimumT();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTupleInterpolator_GetMaximumT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTupleInterpolator *op = static_cast<vtkTupleInterpolator *>(vp);

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
      tempr = op->vtkTupleInterpolator::GetMaximumT();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTupleInterpolator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTupleInterpolator *op = static_cast<vtkTupleInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkTupleInterpolator::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTupleInterpolator_RemoveTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTupleInterpolator *op = static_cast<vtkTupleInterpolator *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveTuple(temp0);
      }
    else
      {
      op->vtkTupleInterpolator::RemoveTuple(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTupleInterpolator_SetInterpolationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTupleInterpolator *op = static_cast<vtkTupleInterpolator *>(vp);

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
      op->vtkTupleInterpolator::SetInterpolationType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTupleInterpolator_GetInterpolationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTupleInterpolator *op = static_cast<vtkTupleInterpolator *>(vp);

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
      tempr = op->vtkTupleInterpolator::GetInterpolationType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTupleInterpolator_SetInterpolationTypeToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationTypeToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTupleInterpolator *op = static_cast<vtkTupleInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationTypeToLinear();
      }
    else
      {
      op->vtkTupleInterpolator::SetInterpolationTypeToLinear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTupleInterpolator_SetInterpolationTypeToSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationTypeToSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTupleInterpolator *op = static_cast<vtkTupleInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationTypeToSpline();
      }
    else
      {
      op->vtkTupleInterpolator::SetInterpolationTypeToSpline();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTupleInterpolator_SetInterpolatingSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolatingSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTupleInterpolator *op = static_cast<vtkTupleInterpolator *>(vp);

  vtkSpline *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSpline"))
    {
    if (ap.IsBound())
      {
      op->SetInterpolatingSpline(temp0);
      }
    else
      {
      op->vtkTupleInterpolator::SetInterpolatingSpline(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTupleInterpolator_GetInterpolatingSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolatingSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTupleInterpolator *op = static_cast<vtkTupleInterpolator *>(vp);

  vtkSpline *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInterpolatingSpline();
      }
    else
      {
      tempr = op->vtkTupleInterpolator::GetInterpolatingSpline();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTupleInterpolator_Methods[] = {
  {(char*)"GetClassName", PyvtkTupleInterpolator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTupleInterpolator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTupleInterpolator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTupleInterpolator\nC++: vtkTupleInterpolator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTupleInterpolator_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTupleInterpolator\nC++: vtkTupleInterpolator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetNumberOfComponents", PyvtkTupleInterpolator_SetNumberOfComponents, 1,
   (char*)"V.SetNumberOfComponents(int)\nC++: void SetNumberOfComponents(int numComp)\n\nSpecify the number of tuple components to interpolate. Note that\nsetting this value discards any previously inserted data.\n"},
  {(char*)"GetNumberOfComponents", PyvtkTupleInterpolator_GetNumberOfComponents, 1,
   (char*)"V.GetNumberOfComponents() -> int\nC++: int GetNumberOfComponents()\n\nSpecify the number of tuple components to interpolate. Note that\nsetting this value discards any previously inserted data.\n"},
  {(char*)"GetNumberOfTuples", PyvtkTupleInterpolator_GetNumberOfTuples, 1,
   (char*)"V.GetNumberOfTuples() -> int\nC++: int GetNumberOfTuples()\n\nReturn the number of tuples in the list of tuples to be\ninterpolated.\n"},
  {(char*)"GetMinimumT", PyvtkTupleInterpolator_GetMinimumT, 1,
   (char*)"V.GetMinimumT() -> float\nC++: double GetMinimumT()\n\nObtain some information about the interpolation range. The\nnumbers returned (corresponding to parameter t, usually thought\nof as time) are undefined if the list of transforms is empty.\nThis is a convenience method for interpolation.\n"},
  {(char*)"GetMaximumT", PyvtkTupleInterpolator_GetMaximumT, 1,
   (char*)"V.GetMaximumT() -> float\nC++: double GetMaximumT()\n\nObtain some information about the interpolation range. The\nnumbers returned (corresponding to parameter t, usually thought\nof as time) are undefined if the list of transforms is empty.\nThis is a convenience method for interpolation.\n"},
  {(char*)"Initialize", PyvtkTupleInterpolator_Initialize, 1,
   (char*)"V.Initialize()\nC++: void Initialize()\n\nReset the class so that it contains no (t,tuple) information.\n"},
  {(char*)"RemoveTuple", PyvtkTupleInterpolator_RemoveTuple, 1,
   (char*)"V.RemoveTuple(float)\nC++: void RemoveTuple(double t)\n\nDelete the tuple at a particular parameter t. If there is no\ntuple defined at t, then the method does nothing.\n"},
  {(char*)"SetInterpolationType", PyvtkTupleInterpolator_SetInterpolationType, 1,
   (char*)"V.SetInterpolationType(int)\nC++: void SetInterpolationType(int type)\n\nSpecify which type of function to use for interpolation. By\ndefault spline interpolation (SetInterpolationFunctionToSpline())\nis used (i.e., a Kochanek spline) and the InterpolatingSpline\ninstance variable is used to birth the actual interpolation\nsplines via a combination of NewInstance() and DeepCopy(). You\nmay also choose to use linear interpolation by invoking\nSetInterpolationFunctionToLinear(). Note that changing the type\nof interpolation causes previously inserted data to be discarded.\n"},
  {(char*)"GetInterpolationType", PyvtkTupleInterpolator_GetInterpolationType, 1,
   (char*)"V.GetInterpolationType() -> int\nC++: int GetInterpolationType()\n\nSpecify which type of function to use for interpolation. By\ndefault spline interpolation (SetInterpolationFunctionToSpline())\nis used (i.e., a Kochanek spline) and the InterpolatingSpline\ninstance variable is used to birth the actual interpolation\nsplines via a combination of NewInstance() and DeepCopy(). You\nmay also choose to use linear interpolation by invoking\nSetInterpolationFunctionToLinear(). Note that changing the type\nof interpolation causes previously inserted data to be discarded.\n"},
  {(char*)"SetInterpolationTypeToLinear", PyvtkTupleInterpolator_SetInterpolationTypeToLinear, 1,
   (char*)"V.SetInterpolationTypeToLinear()\nC++: void SetInterpolationTypeToLinear()\n\nSpecify which type of function to use for interpolation. By\ndefault spline interpolation (SetInterpolationFunctionToSpline())\nis used (i.e., a Kochanek spline) and the InterpolatingSpline\ninstance variable is used to birth the actual interpolation\nsplines via a combination of NewInstance() and DeepCopy(). You\nmay also choose to use linear interpolation by invoking\nSetInterpolationFunctionToLinear(). Note that changing the type\nof interpolation causes previously inserted data to be discarded.\n"},
  {(char*)"SetInterpolationTypeToSpline", PyvtkTupleInterpolator_SetInterpolationTypeToSpline, 1,
   (char*)"V.SetInterpolationTypeToSpline()\nC++: void SetInterpolationTypeToSpline()\n\nSpecify which type of function to use for interpolation. By\ndefault spline interpolation (SetInterpolationFunctionToSpline())\nis used (i.e., a Kochanek spline) and the InterpolatingSpline\ninstance variable is used to birth the actual interpolation\nsplines via a combination of NewInstance() and DeepCopy(). You\nmay also choose to use linear interpolation by invoking\nSetInterpolationFunctionToLinear(). Note that changing the type\nof interpolation causes previously inserted data to be discarded.\n"},
  {(char*)"SetInterpolatingSpline", PyvtkTupleInterpolator_SetInterpolatingSpline, 1,
   (char*)"V.SetInterpolatingSpline(vtkSpline)\nC++: void SetInterpolatingSpline(vtkSpline *)\n\nIf the InterpolationType is set to spline, then this method\napplies. By default Kochanek interpolation is used, but you can\nspecify any instance of vtkSpline to use. Note that the actual\ninterpolating splines are created by invoking NewInstance()\nfollowed by DeepCopy() on the interpolating spline specified\nhere, for each tuple component to interpolate.\n"},
  {(char*)"GetInterpolatingSpline", PyvtkTupleInterpolator_GetInterpolatingSpline, 1,
   (char*)"V.GetInterpolatingSpline() -> vtkSpline\nC++: vtkSpline *GetInterpolatingSpline()\n\nIf the InterpolationType is set to spline, then this method\napplies. By default Kochanek interpolation is used, but you can\nspecify any instance of vtkSpline to use. Note that the actual\ninterpolating splines are created by invoking NewInstance()\nfollowed by DeepCopy() on the interpolating spline specified\nhere, for each tuple component to interpolate.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTupleInterpolator_StaticNew()
{
  return vtkTupleInterpolator::New();
}

PyObject *PyVTKClass_vtkTupleInterpolatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTupleInterpolator_StaticNew,
    PyvtkTupleInterpolator_Methods,
    "vtkTupleInterpolator", modulename,
    NULL, NULL,
    PyvtkTupleInterpolator_Doc(),
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

const char **PyvtkTupleInterpolator_Doc()
{
  static const char *docstring[] = {
    "vtkTupleInterpolator - interpolate a tuple of arbitray size\n\n",
    "Superclass: vtkObject\n\n",
    "This class is used to interpolate a tuple which may have an arbitrary\nnumber of components (but at least one component). The interpolation\nmay be linear in form, or via a subclasses of vtkSpline.\n\nTo use this class, begin by specifying the number of components of\nthe tuple and the interpolation function to use. Then specify at\nleast one pair of (t,tuple) with the AddTuple() method.  Next\ninterpola",
    "te the tuples with the InterpolateTuple(t,tuple) method,\nwhere \"t\" must be in the range of (t_min,t_max) parameter values\nspecified by the AddTuple() method (if not then t is clamped), and\ntuple[] is filled in by the method (make sure that tuple [] is long\nenough to hold the interpolated data).\n\nYou can control the type of interpolation to use. By default, the\ninterpolation is based on a Kochanek ",
    "spline. However, other types of\nsplines can be specified. You can also set the interpolation method\nto linear, in which case the specified spline has no effect on the\ninterpolation.\n\nCaveats:\n\nSetting the number of components or changing the type of\ninterpolation causes the list of tuples to be reset, so any data\ninserted up to that point is lost. Bisection methods are used to\nspeed up the search ",
    "for the interpolation interval.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTupleInterpolator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTupleInterpolatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTupleInterpolator", o) != 0)
    {
    Py_DECREF(o);
    }

}

