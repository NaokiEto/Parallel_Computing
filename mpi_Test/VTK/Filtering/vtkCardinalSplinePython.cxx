// python wrapper for vtkCardinalSpline
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
#include "vtkCardinalSpline.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCardinalSpline(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCardinalSpline(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCardinalSplineNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCardinalSplineNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkSplineNew
extern "C" { PyObject *PyVTKClass_vtkSplineNew(const char *); }
#define DECLARED_PyVTKClass_vtkSplineNew
#endif

static const char **PyvtkCardinalSpline_Doc();


static PyObject *
PyvtkCardinalSpline_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCardinalSpline *op = static_cast<vtkCardinalSpline *>(vp);

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
      tempr = op->vtkCardinalSpline::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCardinalSpline_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCardinalSpline *op = static_cast<vtkCardinalSpline *>(vp);

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
      tempr = op->vtkCardinalSpline::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCardinalSpline_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCardinalSpline *op = static_cast<vtkCardinalSpline *>(vp);

  vtkCardinalSpline *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCardinalSpline::NewInstance();
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
PyvtkCardinalSpline_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCardinalSpline *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCardinalSpline::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCardinalSpline_Compute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Compute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCardinalSpline *op = static_cast<vtkCardinalSpline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Compute();
      }
    else
      {
      op->vtkCardinalSpline::Compute();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCardinalSpline_Evaluate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Evaluate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCardinalSpline *op = static_cast<vtkCardinalSpline *>(vp);

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
      tempr = op->vtkCardinalSpline::Evaluate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCardinalSpline_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCardinalSpline *op = static_cast<vtkCardinalSpline *>(vp);

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
      op->vtkCardinalSpline::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCardinalSpline_Methods[] = {
  {(char*)"GetClassName", PyvtkCardinalSpline_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCardinalSpline_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCardinalSpline_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCardinalSpline\nC++: vtkCardinalSpline *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCardinalSpline_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCardinalSpline\nC++: vtkCardinalSpline *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Compute", PyvtkCardinalSpline_Compute, 1,
   (char*)"V.Compute()\nC++: void Compute()\n\n"},
  {(char*)"Evaluate", PyvtkCardinalSpline_Evaluate, 1,
   (char*)"V.Evaluate(float) -> float\nC++: virtual double Evaluate(double t)\n\nEvaluate a 1D cardinal spline.\n"},
  {(char*)"DeepCopy", PyvtkCardinalSpline_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkSpline)\nC++: virtual void DeepCopy(vtkSpline *s)\n\nDeep copy of cardinal spline data.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCardinalSpline_StaticNew()
{
  return vtkCardinalSpline::New();
}

PyObject *PyVTKClass_vtkCardinalSplineNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCardinalSpline_StaticNew,
    PyvtkCardinalSpline_Methods,
    "vtkCardinalSpline", modulename,
    NULL, NULL,
    PyvtkCardinalSpline_Doc(),
    PyVTKClass_vtkSplineNew(modulename));
  return cls;
}

const char **PyvtkCardinalSpline_Doc()
{
  static const char *docstring[] = {
    "vtkCardinalSpline - computes an interpolating spline using a\n\n",
    "Superclass: vtkSpline\n\n",
    "vtkCardinalSpline is a concrete implementation of vtkSpline using a\nCardinal basis.\n\nSee Also:\n\nvtkSpline vtkKochanekSpline\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCardinalSpline(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCardinalSplineNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCardinalSpline", o) != 0)
    {
    Py_DECREF(o);
    }

}

