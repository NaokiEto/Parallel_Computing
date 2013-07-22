// python wrapper for vtkSmoothErrorMetric
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
#include "vtkSmoothErrorMetric.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSmoothErrorMetric(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSmoothErrorMetric(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSmoothErrorMetricNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSmoothErrorMetricNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkGenericSubdivisionErrorMetricNew
extern "C" { PyObject *PyVTKClass_vtkGenericSubdivisionErrorMetricNew(const char *); }
#define DECLARED_PyVTKClass_vtkGenericSubdivisionErrorMetricNew
#endif

static const char **PyvtkSmoothErrorMetric_Doc();


static PyObject *
PyvtkSmoothErrorMetric_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothErrorMetric *op = static_cast<vtkSmoothErrorMetric *>(vp);

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
      tempr = op->vtkSmoothErrorMetric::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSmoothErrorMetric_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothErrorMetric *op = static_cast<vtkSmoothErrorMetric *>(vp);

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
      tempr = op->vtkSmoothErrorMetric::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSmoothErrorMetric_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothErrorMetric *op = static_cast<vtkSmoothErrorMetric *>(vp);

  vtkSmoothErrorMetric *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSmoothErrorMetric::NewInstance();
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
PyvtkSmoothErrorMetric_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSmoothErrorMetric *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSmoothErrorMetric::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSmoothErrorMetric_GetAngleTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngleTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothErrorMetric *op = static_cast<vtkSmoothErrorMetric *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAngleTolerance();
      }
    else
      {
      tempr = op->vtkSmoothErrorMetric::GetAngleTolerance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSmoothErrorMetric_SetAngleTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAngleTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothErrorMetric *op = static_cast<vtkSmoothErrorMetric *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAngleTolerance(temp0);
      }
    else
      {
      op->vtkSmoothErrorMetric::SetAngleTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSmoothErrorMetric_Methods[] = {
  {(char*)"GetClassName", PyvtkSmoothErrorMetric_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK type and error macros.\n"},
  {(char*)"IsA", PyvtkSmoothErrorMetric_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK type and error macros.\n"},
  {(char*)"NewInstance", PyvtkSmoothErrorMetric_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSmoothErrorMetric\nC++: vtkSmoothErrorMetric *NewInstance()\n\nStandard VTK type and error macros.\n"},
  {(char*)"SafeDownCast", PyvtkSmoothErrorMetric_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSmoothErrorMetric\nC++: vtkSmoothErrorMetric *SafeDownCast(vtkObject* o)\n\nStandard VTK type and error macros.\n"},
  {(char*)"GetAngleTolerance", PyvtkSmoothErrorMetric_GetAngleTolerance, 1,
   (char*)"V.GetAngleTolerance() -> float\nC++: double GetAngleTolerance()\n\nReturn the flatness threshold.\n\\post positive_result: result>90 && result<180\n"},
  {(char*)"SetAngleTolerance", PyvtkSmoothErrorMetric_SetAngleTolerance, 1,
   (char*)"V.SetAngleTolerance(float)\nC++: void SetAngleTolerance(double value)\n\nSet the flatness threshold with an angle in degrees. Internally\ncompute the cosine. value is supposed to be in ]90,180[, if not\nit is clamped in [90.1,179.9]. For instance 178  will give better\nresult than 150.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSmoothErrorMetric_StaticNew()
{
  return vtkSmoothErrorMetric::New();
}

PyObject *PyVTKClass_vtkSmoothErrorMetricNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSmoothErrorMetric_StaticNew,
    PyvtkSmoothErrorMetric_Methods,
    "vtkSmoothErrorMetric", modulename,
    NULL, NULL,
    PyvtkSmoothErrorMetric_Doc(),
    PyVTKClass_vtkGenericSubdivisionErrorMetricNew(modulename));
  return cls;
}

const char **PyvtkSmoothErrorMetric_Doc()
{
  static const char *docstring[] = {
    "vtkSmoothErrorMetric - Objects that compute\n\n",
    "Superclass: vtkGenericSubdivisionErrorMetric\n\n",
    "It is a concrete error metric, based on a geometric criterium: a max\nangle between the chord passing through the midpoint and one of the\nendpoints and the other chord passing through the midpoint and the\nother endpoint of the edge. It is related to the flatness of an edge.\n\nSee Also:\n\nvtkGenericCellTessellator vtkGenericSubdivisionErrorMetric\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSmoothErrorMetric(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSmoothErrorMetricNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSmoothErrorMetric", o) != 0)
    {
    Py_DECREF(o);
    }

}

