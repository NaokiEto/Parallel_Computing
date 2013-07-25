// python wrapper for vtkContourLineInterpolator
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
#include "vtkContourLineInterpolator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkContourLineInterpolator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkContourLineInterpolator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkContourLineInterpolatorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkContourLineInterpolatorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkContourLineInterpolator_Doc();


static PyObject *
PyvtkContourLineInterpolator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLineInterpolator *op = static_cast<vtkContourLineInterpolator *>(vp);

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
      tempr = op->vtkContourLineInterpolator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourLineInterpolator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLineInterpolator *op = static_cast<vtkContourLineInterpolator *>(vp);

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
      tempr = op->vtkContourLineInterpolator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourLineInterpolator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLineInterpolator *op = static_cast<vtkContourLineInterpolator *>(vp);

  vtkContourLineInterpolator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkContourLineInterpolator::NewInstance();
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
PyvtkContourLineInterpolator_InterpolateLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLineInterpolator *op = static_cast<vtkContourLineInterpolator *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkContourRepresentation *temp1 = NULL;
  int temp2;
  int temp3;
  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkContourRepresentation") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    tempr = op->InterpolateLine(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourLineInterpolator_GetSpan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLineInterpolator *op = static_cast<vtkContourLineInterpolator *>(vp);

  int temp0;
  vtkIntArray *temp1 = NULL;
  vtkContourRepresentation *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIntArray") &&
      ap.GetVTKObject(temp2, "vtkContourRepresentation"))
    {
    if (ap.IsBound())
      {
      op->GetSpan(temp0, temp1, temp2);
      }
    else
      {
      op->vtkContourLineInterpolator::GetSpan(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkContourLineInterpolator_Methods[] = {
  {(char*)"GetClassName", PyvtkContourLineInterpolator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for instances of this class.\n"},
  {(char*)"IsA", PyvtkContourLineInterpolator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for instances of this class.\n"},
  {(char*)"NewInstance", PyvtkContourLineInterpolator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkContourLineInterpolator\nC++: vtkContourLineInterpolator *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {(char*)"InterpolateLine", PyvtkContourLineInterpolator_InterpolateLine, 1,
   (char*)"V.InterpolateLine(vtkRenderer, vtkContourRepresentation, int, int)\n     -> int\nC++: virtual int InterpolateLine(vtkRenderer *ren,\n    vtkContourRepresentation *rep, int idx1, int idx2)\n\nSubclasses that wish to interpolate a line segment must implement\nthis. For instance vtkBezierContourLineInterpolator adds nodes\nbetween idx1 and idx2, that allow the contour to adhere to a\nbezier curve.\n"},
  {(char*)"GetSpan", PyvtkContourLineInterpolator_GetSpan, 1,
   (char*)"V.GetSpan(int, vtkIntArray, vtkContourRepresentation)\nC++: virtual void GetSpan(int nodeIndex, vtkIntArray *nodeIndices,\n     vtkContourRepresentation *rep)\n\nSpan of the interpolator. ie. the number of control points its\nsupposed to interpolate given a node.\n\nThe first argument is the current nodeIndex. ie, you'd be trying\nto interpolate between nodes \"nodeIndex\" and \"nodeIndex-1\",\nunless you're closing the contour in which case, you're trying to\ninterpolate \"nodeIndex\" and \"Node=0\".\n\nThe node span is returned in a vtkIntArray. The default node span\nis 1 (ie. nodeIndices is a 2 tuple (nodeIndex, nodeIndex-1)).\nHowever, it need not always be 1. For instance, cubic spline\ninterpolators, which have a span of 3 control points, it can be\nlarger. See vtkBezierContourLineInterpolator for instance.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkContourLineInterpolatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkContourLineInterpolator_Methods,
    "vtkContourLineInterpolator", modulename,
    NULL, NULL,
    PyvtkContourLineInterpolator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkContourLineInterpolator_Doc()
{
  static const char *docstring[] = {
    "vtkContourLineInterpolator - Defines API for interpolating/modifying\nnodes from a vtkContourRepresentation\n\n",
    "Superclass: vtkObject\n\n",
    "vtkContourLineInterpolator is an abstract base class for\ninterpolators that work are used by the contour representation class\nto interpolate and/or modify nodes in a contour. Subclasses must\noverride the virtual method: InterpolateLine. This is used by the\ncontour representation to give the interpolator a chance to define an\ninterpolation scheme between nodes. See\nvtkBezierContourLineInterpolator ",
    "for a concrete implementation.\nSubclasses may also override, UpdateNode. This provides a way for the\nrepresentation to give the interpolator a chance to modify the nodes,\nas the user constructs the contours. For instance a sticky contour\nwidget may be implemented that moves nodes to nearby regions of high\ngradient, to be used in contour guided segmentation.\n\nSee Also:\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkContourLineInterpolator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkContourLineInterpolatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkContourLineInterpolator", o) != 0)
    {
    Py_DECREF(o);
    }

}
