// python wrapper for vtkGeometricErrorMetric
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
#include "vtkGeometricErrorMetric.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGeometricErrorMetric(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGeometricErrorMetric(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGeometricErrorMetricNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGeometricErrorMetricNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkGenericSubdivisionErrorMetricNew
extern "C" { PyObject *PyVTKClass_vtkGenericSubdivisionErrorMetricNew(const char *); }
#define DECLARED_PyVTKClass_vtkGenericSubdivisionErrorMetricNew
#endif

static const char **PyvtkGeometricErrorMetric_Doc();


static PyObject *
PyvtkGeometricErrorMetric_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometricErrorMetric *op = static_cast<vtkGeometricErrorMetric *>(vp);

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
      tempr = op->vtkGeometricErrorMetric::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometricErrorMetric_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometricErrorMetric *op = static_cast<vtkGeometricErrorMetric *>(vp);

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
      tempr = op->vtkGeometricErrorMetric::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometricErrorMetric_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometricErrorMetric *op = static_cast<vtkGeometricErrorMetric *>(vp);

  vtkGeometricErrorMetric *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGeometricErrorMetric::NewInstance();
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
PyvtkGeometricErrorMetric_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGeometricErrorMetric *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGeometricErrorMetric::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometricErrorMetric_GetAbsoluteGeometricTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbsoluteGeometricTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometricErrorMetric *op = static_cast<vtkGeometricErrorMetric *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAbsoluteGeometricTolerance();
      }
    else
      {
      tempr = op->vtkGeometricErrorMetric::GetAbsoluteGeometricTolerance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometricErrorMetric_SetAbsoluteGeometricTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbsoluteGeometricTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometricErrorMetric *op = static_cast<vtkGeometricErrorMetric *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAbsoluteGeometricTolerance(temp0);
      }
    else
      {
      op->vtkGeometricErrorMetric::SetAbsoluteGeometricTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometricErrorMetric_SetRelativeGeometricTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRelativeGeometricTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometricErrorMetric *op = static_cast<vtkGeometricErrorMetric *>(vp);

  double temp0;
  vtkGenericDataSet *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkGenericDataSet"))
    {
    if (ap.IsBound())
      {
      op->SetRelativeGeometricTolerance(temp0, temp1);
      }
    else
      {
      op->vtkGeometricErrorMetric::SetRelativeGeometricTolerance(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometricErrorMetric_GetRelative(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRelative");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometricErrorMetric *op = static_cast<vtkGeometricErrorMetric *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRelative();
      }
    else
      {
      tempr = op->vtkGeometricErrorMetric::GetRelative();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGeometricErrorMetric_Methods[] = {
  {(char*)"GetClassName", PyvtkGeometricErrorMetric_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK type and error macros.\n"},
  {(char*)"IsA", PyvtkGeometricErrorMetric_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK type and error macros.\n"},
  {(char*)"NewInstance", PyvtkGeometricErrorMetric_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGeometricErrorMetric\nC++: vtkGeometricErrorMetric *NewInstance()\n\nStandard VTK type and error macros.\n"},
  {(char*)"SafeDownCast", PyvtkGeometricErrorMetric_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGeometricErrorMetric\nC++: vtkGeometricErrorMetric *SafeDownCast(vtkObject* o)\n\nStandard VTK type and error macros.\n"},
  {(char*)"GetAbsoluteGeometricTolerance", PyvtkGeometricErrorMetric_GetAbsoluteGeometricTolerance, 1,
   (char*)"V.GetAbsoluteGeometricTolerance() -> float\nC++: double GetAbsoluteGeometricTolerance()\n\nReturn the squared absolute geometric accuracy. See\nSetAbsoluteGeometricTolerance() for details.\n\\post positive_result: result>0\n"},
  {(char*)"SetAbsoluteGeometricTolerance", PyvtkGeometricErrorMetric_SetAbsoluteGeometricTolerance, 1,
   (char*)"V.SetAbsoluteGeometricTolerance(float)\nC++: void SetAbsoluteGeometricTolerance(double value)\n\nSet the geometric accuracy with a squared absolute value. This is\nthe geometric object-based accuracy. Subdivision will be required\nif the square distance between the real point and the straight\nline passing through the vertices of the edge is greater than\n`value'. For instance 0.01 will give better result than 0.1.\n\\pre positive_value: value>0\n"},
  {(char*)"SetRelativeGeometricTolerance", PyvtkGeometricErrorMetric_SetRelativeGeometricTolerance, 1,
   (char*)"V.SetRelativeGeometricTolerance(float, vtkGenericDataSet)\nC++: void SetRelativeGeometricTolerance(double value,\n    vtkGenericDataSet *ds)\n\nSet the geometric accuracy with a value relative to the length of\nthe bounding box of the dataset. Internally compute the absolute\ntolerance. For instance 0.01 will give better result than 0.1.\n\\pre valid_range_value: value>0 && value<1\n\\pre ds_exists: ds!=0\n"},
  {(char*)"GetRelative", PyvtkGeometricErrorMetric_GetRelative, 1,
   (char*)"V.GetRelative() -> int\nC++: int GetRelative()\n\nReturn the type of output of GetError()\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGeometricErrorMetric_StaticNew()
{
  return vtkGeometricErrorMetric::New();
}

PyObject *PyVTKClass_vtkGeometricErrorMetricNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGeometricErrorMetric_StaticNew,
    PyvtkGeometricErrorMetric_Methods,
    "vtkGeometricErrorMetric", modulename,
    NULL, NULL,
    PyvtkGeometricErrorMetric_Doc(),
    PyVTKClass_vtkGenericSubdivisionErrorMetricNew(modulename));
  return cls;
}

const char **PyvtkGeometricErrorMetric_Doc()
{
  static const char *docstring[] = {
    "vtkGeometricErrorMetric - Objects that compute\n\n",
    "Superclass: vtkGenericSubdivisionErrorMetric\n\n",
    "It is a concrete error metric, based on a geometric criterium: the\nvariation of the edge from a straight line.\n\nSee Also:\n\nvtkGenericCellTessellator vtkGenericSubdivisionErrorMetric\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGeometricErrorMetric(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGeometricErrorMetricNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGeometricErrorMetric", o) != 0)
    {
    Py_DECREF(o);
    }

}

