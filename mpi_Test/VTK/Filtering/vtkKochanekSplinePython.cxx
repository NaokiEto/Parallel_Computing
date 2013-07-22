// python wrapper for vtkKochanekSpline
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
#include "vtkKochanekSpline.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkKochanekSpline(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkKochanekSpline(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkKochanekSplineNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkKochanekSplineNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkSplineNew
extern "C" { PyObject *PyVTKClass_vtkSplineNew(const char *); }
#define DECLARED_PyVTKClass_vtkSplineNew
#endif

static const char **PyvtkKochanekSpline_Doc();


static PyObject *
PyvtkKochanekSpline_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKochanekSpline *op = static_cast<vtkKochanekSpline *>(vp);

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
      tempr = op->vtkKochanekSpline::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKochanekSpline_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKochanekSpline *op = static_cast<vtkKochanekSpline *>(vp);

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
      tempr = op->vtkKochanekSpline::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKochanekSpline_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKochanekSpline *op = static_cast<vtkKochanekSpline *>(vp);

  vtkKochanekSpline *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkKochanekSpline::NewInstance();
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
PyvtkKochanekSpline_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkKochanekSpline *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkKochanekSpline::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKochanekSpline_Compute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Compute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKochanekSpline *op = static_cast<vtkKochanekSpline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Compute();
      }
    else
      {
      op->vtkKochanekSpline::Compute();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKochanekSpline_Evaluate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Evaluate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKochanekSpline *op = static_cast<vtkKochanekSpline *>(vp);

  double temp0;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->Evaluate(temp0);
      }
    else
      {
      tempr = op->vtkKochanekSpline::Evaluate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKochanekSpline_SetDefaultBias(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultBias");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKochanekSpline *op = static_cast<vtkKochanekSpline *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDefaultBias(temp0);
      }
    else
      {
      op->vtkKochanekSpline::SetDefaultBias(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKochanekSpline_GetDefaultBias(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultBias");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKochanekSpline *op = static_cast<vtkKochanekSpline *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDefaultBias();
      }
    else
      {
      tempr = op->vtkKochanekSpline::GetDefaultBias();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKochanekSpline_SetDefaultTension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultTension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKochanekSpline *op = static_cast<vtkKochanekSpline *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDefaultTension(temp0);
      }
    else
      {
      op->vtkKochanekSpline::SetDefaultTension(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKochanekSpline_GetDefaultTension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultTension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKochanekSpline *op = static_cast<vtkKochanekSpline *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDefaultTension();
      }
    else
      {
      tempr = op->vtkKochanekSpline::GetDefaultTension();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKochanekSpline_SetDefaultContinuity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultContinuity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKochanekSpline *op = static_cast<vtkKochanekSpline *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDefaultContinuity(temp0);
      }
    else
      {
      op->vtkKochanekSpline::SetDefaultContinuity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKochanekSpline_GetDefaultContinuity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultContinuity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKochanekSpline *op = static_cast<vtkKochanekSpline *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDefaultContinuity();
      }
    else
      {
      tempr = op->vtkKochanekSpline::GetDefaultContinuity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKochanekSpline_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKochanekSpline *op = static_cast<vtkKochanekSpline *>(vp);

  vtkSpline *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSpline"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkKochanekSpline::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkKochanekSpline_Methods[] = {
  {(char*)"GetClassName", PyvtkKochanekSpline_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkKochanekSpline_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkKochanekSpline_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkKochanekSpline\nC++: vtkKochanekSpline *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkKochanekSpline_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkKochanekSpline\nC++: vtkKochanekSpline *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Compute", PyvtkKochanekSpline_Compute, 1,
   (char*)"V.Compute()\nC++: void Compute()\n\nCompute Kochanek Spline coefficients.\n"},
  {(char*)"Evaluate", PyvtkKochanekSpline_Evaluate, 1,
   (char*)"V.Evaluate(float) -> float\nC++: double Evaluate(double t)\n\nEvaluate a 1D Kochanek spline.\n"},
  {(char*)"SetDefaultBias", PyvtkKochanekSpline_SetDefaultBias, 1,
   (char*)"V.SetDefaultBias(float)\nC++: void SetDefaultBias(double a)\n\nSet the bias for all points. Default is 0.\n"},
  {(char*)"GetDefaultBias", PyvtkKochanekSpline_GetDefaultBias, 1,
   (char*)"V.GetDefaultBias() -> float\nC++: double GetDefaultBias()\n\nSet the bias for all points. Default is 0.\n"},
  {(char*)"SetDefaultTension", PyvtkKochanekSpline_SetDefaultTension, 1,
   (char*)"V.SetDefaultTension(float)\nC++: void SetDefaultTension(double a)\n\nSet the tension for all points. Default is 0.\n"},
  {(char*)"GetDefaultTension", PyvtkKochanekSpline_GetDefaultTension, 1,
   (char*)"V.GetDefaultTension() -> float\nC++: double GetDefaultTension()\n\nSet the tension for all points. Default is 0.\n"},
  {(char*)"SetDefaultContinuity", PyvtkKochanekSpline_SetDefaultContinuity, 1,
   (char*)"V.SetDefaultContinuity(float)\nC++: void SetDefaultContinuity(double a)\n\nSet the continuity for all points. Default is 0.\n"},
  {(char*)"GetDefaultContinuity", PyvtkKochanekSpline_GetDefaultContinuity, 1,
   (char*)"V.GetDefaultContinuity() -> float\nC++: double GetDefaultContinuity()\n\nSet the continuity for all points. Default is 0.\n"},
  {(char*)"DeepCopy", PyvtkKochanekSpline_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkSpline)\nC++: virtual void DeepCopy(vtkSpline *s)\n\nDeep copy of cardinal spline data.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkKochanekSpline_StaticNew()
{
  return vtkKochanekSpline::New();
}

PyObject *PyVTKClass_vtkKochanekSplineNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkKochanekSpline_StaticNew,
    PyvtkKochanekSpline_Methods,
    "vtkKochanekSpline", modulename,
    NULL, NULL,
    PyvtkKochanekSpline_Doc(),
    PyVTKClass_vtkSplineNew(modulename));
  return cls;
}

const char **PyvtkKochanekSpline_Doc()
{
  static const char *docstring[] = {
    "vtkKochanekSpline - computes an interpolating spline using a Kochanek\nbasis.\n\n",
    "Superclass: vtkSpline\n\n",
    "Implements the Kochenek interpolating spline described in: Kochanek,\nD., Bartels, R., \"Interpolating Splines with Local Tension,\nContinuity, and Bias Control,\" Computer Graphics, vol. 18, no. 3, pp.\n33-41, July 1984. These splines give the user more control over the\nshape of the curve than the cardinal splines implemented in\nvtkCardinalSpline. Three parameters can be specified. All have a\nrange fr",
    "om -1 to 1.\n\nTension controls how sharply the curve bends at an input point. A\nvalue of -1 produces more slack in the curve. A value of 1 tightens\nthe curve.\n\nContinuity controls the continuity of the first derivative at input\npoints.\n\nBias controls the direction of the curve at it passes through an\ninput point. A value of -1 undershoots the point while a value of 1\novershoots the point.\n\nThese th",
    "ree parameters give the user broad control over the shape of\nthe interpolating spline. The original Kochanek paper describes the\neffects nicely and is recommended reading.\n\nSee Also:\n\nvtkSpline vtkCardinalSpline\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkKochanekSpline(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkKochanekSplineNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkKochanekSpline", o) != 0)
    {
    Py_DECREF(o);
    }

}

