// python wrapper for vtkViewDependentErrorMetric
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
#include "vtkViewDependentErrorMetric.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkViewDependentErrorMetric(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkViewDependentErrorMetric(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkViewDependentErrorMetricNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkViewDependentErrorMetricNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkGenericSubdivisionErrorMetricNew
extern "C" { PyObject *PyVTKClass_vtkGenericSubdivisionErrorMetricNew(const char *); }
#define DECLARED_PyVTKClass_vtkGenericSubdivisionErrorMetricNew
#endif

static const char **PyvtkViewDependentErrorMetric_Doc();


static PyObject *
PyvtkViewDependentErrorMetric_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewDependentErrorMetric *op = static_cast<vtkViewDependentErrorMetric *>(vp);

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
      tempr = op->vtkViewDependentErrorMetric::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewDependentErrorMetric_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewDependentErrorMetric *op = static_cast<vtkViewDependentErrorMetric *>(vp);

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
      tempr = op->vtkViewDependentErrorMetric::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewDependentErrorMetric_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewDependentErrorMetric *op = static_cast<vtkViewDependentErrorMetric *>(vp);

  vtkViewDependentErrorMetric *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkViewDependentErrorMetric::NewInstance();
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
PyvtkViewDependentErrorMetric_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkViewDependentErrorMetric *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkViewDependentErrorMetric::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewDependentErrorMetric_GetPixelTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewDependentErrorMetric *op = static_cast<vtkViewDependentErrorMetric *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPixelTolerance();
      }
    else
      {
      tempr = op->vtkViewDependentErrorMetric::GetPixelTolerance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewDependentErrorMetric_SetPixelTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPixelTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewDependentErrorMetric *op = static_cast<vtkViewDependentErrorMetric *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPixelTolerance(temp0);
      }
    else
      {
      op->vtkViewDependentErrorMetric::SetPixelTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkViewDependentErrorMetric_GetViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewDependentErrorMetric *op = static_cast<vtkViewDependentErrorMetric *>(vp);

  vtkViewport *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetViewport();
      }
    else
      {
      tempr = op->vtkViewDependentErrorMetric::GetViewport();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewDependentErrorMetric_SetViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewDependentErrorMetric *op = static_cast<vtkViewDependentErrorMetric *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      op->SetViewport(temp0);
      }
    else
      {
      op->vtkViewDependentErrorMetric::SetViewport(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkViewDependentErrorMetric_Methods[] = {
  {(char*)"GetClassName", PyvtkViewDependentErrorMetric_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK type and error macros.\n"},
  {(char*)"IsA", PyvtkViewDependentErrorMetric_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK type and error macros.\n"},
  {(char*)"NewInstance", PyvtkViewDependentErrorMetric_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkViewDependentErrorMetric\nC++: vtkViewDependentErrorMetric *NewInstance()\n\nStandard VTK type and error macros.\n"},
  {(char*)"SafeDownCast", PyvtkViewDependentErrorMetric_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkViewDependentErrorMetric\nC++: vtkViewDependentErrorMetric *SafeDownCast(vtkObject* o)\n\nStandard VTK type and error macros.\n"},
  {(char*)"GetPixelTolerance", PyvtkViewDependentErrorMetric_GetPixelTolerance, 1,
   (char*)"V.GetPixelTolerance() -> float\nC++: double GetPixelTolerance()\n\nReturn the squared screen-based geometric accurary measured in\npixels. An accuracy less or equal to 0.25 (0.5^2) ensures that\nthe screen-space interpolation of a mid-point matchs exactly with\nthe projection of the mid-point (a value less than 1 but greater\nthan 0.25 is not enough, because of 8-neighbors). Maybe it is\nuseful for lower accuracy in case of anti-aliasing?\n\\post positive_result: result>0\n"},
  {(char*)"SetPixelTolerance", PyvtkViewDependentErrorMetric_SetPixelTolerance, 1,
   (char*)"V.SetPixelTolerance(float)\nC++: void SetPixelTolerance(double value)\n\nSet the squared screen-based geometric accuracy measured in\npixels. Subdivision will be required if the square distance\nbetween the projection of the real point and the straight line\npassing through the projection of the vertices of the edge is\ngreater than `value'. For instance, 0.25 will give better result\nthan 1.\n\\pre positive_value: value>0\n"},
  {(char*)"GetViewport", PyvtkViewDependentErrorMetric_GetViewport, 1,
   (char*)"V.GetViewport() -> vtkViewport\nC++: vtkViewport *GetViewport()\n\nSet/Get the renderer with `renderer' on which the error metric is\nbased. The error metric use the active camera of the renderer.\n"},
  {(char*)"SetViewport", PyvtkViewDependentErrorMetric_SetViewport, 1,
   (char*)"V.SetViewport(vtkViewport)\nC++: void SetViewport(vtkViewport *viewport)\n\nSet/Get the renderer with `renderer' on which the error metric is\nbased. The error metric use the active camera of the renderer.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkViewDependentErrorMetric_StaticNew()
{
  return vtkViewDependentErrorMetric::New();
}

PyObject *PyVTKClass_vtkViewDependentErrorMetricNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkViewDependentErrorMetric_StaticNew,
    PyvtkViewDependentErrorMetric_Methods,
    "vtkViewDependentErrorMetric", modulename,
    NULL, NULL,
    PyvtkViewDependentErrorMetric_Doc(),
    PyVTKClass_vtkGenericSubdivisionErrorMetricNew(modulename));
  return cls;
}

const char **PyvtkViewDependentErrorMetric_Doc()
{
  static const char *docstring[] = {
    "vtkViewDependentErrorMetric - Objects that compute a\n\n",
    "Superclass: vtkGenericSubdivisionErrorMetric\n\n",
    "It is a concrete error metric, based on a geometric criterium in the\nscreen space: the variation of the projected edge from a projected\nstraight line\n\nSee Also:\n\nvtkGenericCellTessellator vtkGenericSubdivisionErrorMetric\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkViewDependentErrorMetric(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkViewDependentErrorMetricNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkViewDependentErrorMetric", o) != 0)
    {
    Py_DECREF(o);
    }

}

