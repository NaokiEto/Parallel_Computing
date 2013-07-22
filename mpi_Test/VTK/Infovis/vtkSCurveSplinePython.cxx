// python wrapper for vtkSCurveSpline
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
#include "vtkSCurveSpline.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSCurveSpline(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSCurveSpline(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSCurveSplineNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSCurveSplineNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkSplineNew
extern "C" { PyObject *PyVTKClass_vtkSplineNew(const char *); }
#define DECLARED_PyVTKClass_vtkSplineNew
#endif

static const char **PyvtkSCurveSpline_Doc();


static PyObject *
PyvtkSCurveSpline_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSCurveSpline *op = static_cast<vtkSCurveSpline *>(vp);

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
      tempr = op->vtkSCurveSpline::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSCurveSpline_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSCurveSpline *op = static_cast<vtkSCurveSpline *>(vp);

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
      tempr = op->vtkSCurveSpline::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSCurveSpline_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSCurveSpline *op = static_cast<vtkSCurveSpline *>(vp);

  vtkSCurveSpline *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSCurveSpline::NewInstance();
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
PyvtkSCurveSpline_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSCurveSpline *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSCurveSpline::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSCurveSpline_Compute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Compute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSCurveSpline *op = static_cast<vtkSCurveSpline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Compute();
      }
    else
      {
      op->vtkSCurveSpline::Compute();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSCurveSpline_Evaluate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Evaluate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSCurveSpline *op = static_cast<vtkSCurveSpline *>(vp);

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
      tempr = op->vtkSCurveSpline::Evaluate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSCurveSpline_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSCurveSpline *op = static_cast<vtkSCurveSpline *>(vp);

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
      op->vtkSCurveSpline::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSCurveSpline_SetNodeWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNodeWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSCurveSpline *op = static_cast<vtkSCurveSpline *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNodeWeight(temp0);
      }
    else
      {
      op->vtkSCurveSpline::SetNodeWeight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSCurveSpline_GetNodeWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSCurveSpline *op = static_cast<vtkSCurveSpline *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNodeWeight();
      }
    else
      {
      tempr = op->vtkSCurveSpline::GetNodeWeight();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSCurveSpline_Methods[] = {
  {(char*)"GetClassName", PyvtkSCurveSpline_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSCurveSpline_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSCurveSpline_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSCurveSpline\nC++: vtkSCurveSpline *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSCurveSpline_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSCurveSpline\nC++: vtkSCurveSpline *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Compute", PyvtkSCurveSpline_Compute, 1,
   (char*)"V.Compute()\nC++: void Compute()\n\n"},
  {(char*)"Evaluate", PyvtkSCurveSpline_Evaluate, 1,
   (char*)"V.Evaluate(float) -> float\nC++: virtual double Evaluate(double t)\n\nEvaluate a 1D SCurve spline.\n"},
  {(char*)"DeepCopy", PyvtkSCurveSpline_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkSpline)\nC++: virtual void DeepCopy(vtkSpline *s)\n\nDeep copy of SCurve spline data.\n"},
  {(char*)"SetNodeWeight", PyvtkSCurveSpline_SetNodeWeight, 1,
   (char*)"V.SetNodeWeight(float)\nC++: void SetNodeWeight(double a)\n\n"},
  {(char*)"GetNodeWeight", PyvtkSCurveSpline_GetNodeWeight, 1,
   (char*)"V.GetNodeWeight() -> float\nC++: double GetNodeWeight()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSCurveSpline_StaticNew()
{
  return vtkSCurveSpline::New();
}

PyObject *PyVTKClass_vtkSCurveSplineNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSCurveSpline_StaticNew,
    PyvtkSCurveSpline_Methods,
    "vtkSCurveSpline", modulename,
    NULL, NULL,
    PyvtkSCurveSpline_Doc(),
    PyVTKClass_vtkSplineNew(modulename));
  return cls;
}

const char **PyvtkSCurveSpline_Doc()
{
  static const char *docstring[] = {
    "vtkSCurveSpline - computes an interpolating spline using a\n\n",
    "Superclass: vtkSpline\n\n",
    "vtkSCurveSpline is a concrete implementation of vtkSpline using a\nSCurve basis.\n\nSee Also:\n\nvtkSpline vtkKochanekSpline\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSCurveSpline(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSCurveSplineNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSCurveSpline", o) != 0)
    {
    Py_DECREF(o);
    }

}

