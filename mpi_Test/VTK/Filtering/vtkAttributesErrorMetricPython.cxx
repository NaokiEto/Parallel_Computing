// python wrapper for vtkAttributesErrorMetric
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
#include "vtkAttributesErrorMetric.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkAttributesErrorMetric(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkAttributesErrorMetric(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkAttributesErrorMetricNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkAttributesErrorMetricNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkGenericSubdivisionErrorMetricNew
extern "C" { PyObject *PyVTKClass_vtkGenericSubdivisionErrorMetricNew(const char *); }
#define DECLARED_PyVTKClass_vtkGenericSubdivisionErrorMetricNew
#endif

static const char **PyvtkAttributesErrorMetric_Doc();


static PyObject *
PyvtkAttributesErrorMetric_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributesErrorMetric *op = static_cast<vtkAttributesErrorMetric *>(vp);

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
      tempr = op->vtkAttributesErrorMetric::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAttributesErrorMetric_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributesErrorMetric *op = static_cast<vtkAttributesErrorMetric *>(vp);

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
      tempr = op->vtkAttributesErrorMetric::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAttributesErrorMetric_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributesErrorMetric *op = static_cast<vtkAttributesErrorMetric *>(vp);

  vtkAttributesErrorMetric *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkAttributesErrorMetric::NewInstance();
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
PyvtkAttributesErrorMetric_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkAttributesErrorMetric *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkAttributesErrorMetric::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAttributesErrorMetric_GetAbsoluteAttributeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbsoluteAttributeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributesErrorMetric *op = static_cast<vtkAttributesErrorMetric *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAbsoluteAttributeTolerance();
      }
    else
      {
      tempr = op->vtkAttributesErrorMetric::GetAbsoluteAttributeTolerance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAttributesErrorMetric_SetAbsoluteAttributeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbsoluteAttributeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributesErrorMetric *op = static_cast<vtkAttributesErrorMetric *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAbsoluteAttributeTolerance(temp0);
      }
    else
      {
      op->vtkAttributesErrorMetric::SetAbsoluteAttributeTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAttributesErrorMetric_GetAttributeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributesErrorMetric *op = static_cast<vtkAttributesErrorMetric *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAttributeTolerance();
      }
    else
      {
      tempr = op->vtkAttributesErrorMetric::GetAttributeTolerance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAttributesErrorMetric_SetAttributeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributesErrorMetric *op = static_cast<vtkAttributesErrorMetric *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAttributeTolerance(temp0);
      }
    else
      {
      op->vtkAttributesErrorMetric::SetAttributeTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAttributesErrorMetric_Methods[] = {
  {(char*)"GetClassName", PyvtkAttributesErrorMetric_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK type and error macros.\n"},
  {(char*)"IsA", PyvtkAttributesErrorMetric_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK type and error macros.\n"},
  {(char*)"NewInstance", PyvtkAttributesErrorMetric_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkAttributesErrorMetric\nC++: vtkAttributesErrorMetric *NewInstance()\n\nStandard VTK type and error macros.\n"},
  {(char*)"SafeDownCast", PyvtkAttributesErrorMetric_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAttributesErrorMetric\nC++: vtkAttributesErrorMetric *SafeDownCast(vtkObject* o)\n\nStandard VTK type and error macros.\n"},
  {(char*)"GetAbsoluteAttributeTolerance", PyvtkAttributesErrorMetric_GetAbsoluteAttributeTolerance, 1,
   (char*)"V.GetAbsoluteAttributeTolerance() -> float\nC++: double GetAbsoluteAttributeTolerance()\n\nAbsolute tolerance of the active scalar (attribute+component).\nSubdivision is required if the square distance between the real\nattribute at the mid point on the edge and the interpolated\nattribute is greater than AbsoluteAttributeTolerance. This is the\nattribute accuracy. 0.01 will give better result than 0.1.\n"},
  {(char*)"SetAbsoluteAttributeTolerance", PyvtkAttributesErrorMetric_SetAbsoluteAttributeTolerance, 1,
   (char*)"V.SetAbsoluteAttributeTolerance(float)\nC++: void SetAbsoluteAttributeTolerance(double value)\n\nSet the absolute attribute accuracy to `value'. See\nGetAbsoluteAttributeTolerance() for details. It is particularly\nuseful when some concrete implementation of vtkGenericAttribute\ndoes not support GetRange() request, called internally in\nSetAttributeTolerance(). It may happen when the implementation\nsupport higher order attributes but cannot compute the range.\n\\pre valid_range_value: value>0\n"},
  {(char*)"GetAttributeTolerance", PyvtkAttributesErrorMetric_GetAttributeTolerance, 1,
   (char*)"V.GetAttributeTolerance() -> float\nC++: double GetAttributeTolerance()\n\nRelative tolerance of the active scalar (attribute+component).\nSubdivision is required if the square distance between the real\nattribute at the mid point on the edge and the interpolated\nattribute is greater than AttributeTolerance. This is the\nattribute accuracy. 0.01 will give better result than 0.1.\n"},
  {(char*)"SetAttributeTolerance", PyvtkAttributesErrorMetric_SetAttributeTolerance, 1,
   (char*)"V.SetAttributeTolerance(float)\nC++: void SetAttributeTolerance(double value)\n\nSet the relative attribute accuracy to `value'. See\nGetAttributeTolerance() for details.\n\\pre valid_range_value: value>0 && value<1\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAttributesErrorMetric_StaticNew()
{
  return vtkAttributesErrorMetric::New();
}

PyObject *PyVTKClass_vtkAttributesErrorMetricNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAttributesErrorMetric_StaticNew,
    PyvtkAttributesErrorMetric_Methods,
    "vtkAttributesErrorMetric", modulename,
    NULL, NULL,
    PyvtkAttributesErrorMetric_Doc(),
    PyVTKClass_vtkGenericSubdivisionErrorMetricNew(modulename));
  return cls;
}

const char **PyvtkAttributesErrorMetric_Doc()
{
  static const char *docstring[] = {
    "vtkAttributesErrorMetric -  Objects that compute\n\n",
    "Superclass: vtkGenericSubdivisionErrorMetric\n\n",
    "It is a concrete error metric, based on an attribute criterium: the\nvariation of the active attribute/component value from a linear ramp\n\nSee Also:\n\nvtkGenericCellTessellator vtkGenericSubdivisionErrorMetric\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAttributesErrorMetric(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAttributesErrorMetricNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAttributesErrorMetric", o) != 0)
    {
    Py_DECREF(o);
    }

}

