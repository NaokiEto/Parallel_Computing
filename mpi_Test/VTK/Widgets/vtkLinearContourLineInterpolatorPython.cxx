// python wrapper for vtkLinearContourLineInterpolator
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
#include "vtkLinearContourLineInterpolator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkLinearContourLineInterpolator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkLinearContourLineInterpolator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkLinearContourLineInterpolatorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkLinearContourLineInterpolatorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkContourLineInterpolatorNew
extern "C" { PyObject *PyVTKClass_vtkContourLineInterpolatorNew(const char *); }
#define DECLARED_PyVTKClass_vtkContourLineInterpolatorNew
#endif

static const char **PyvtkLinearContourLineInterpolator_Doc();


static PyObject *
PyvtkLinearContourLineInterpolator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearContourLineInterpolator *op = static_cast<vtkLinearContourLineInterpolator *>(vp);

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
      tempr = op->vtkLinearContourLineInterpolator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLinearContourLineInterpolator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearContourLineInterpolator *op = static_cast<vtkLinearContourLineInterpolator *>(vp);

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
      tempr = op->vtkLinearContourLineInterpolator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLinearContourLineInterpolator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearContourLineInterpolator *op = static_cast<vtkLinearContourLineInterpolator *>(vp);

  vtkLinearContourLineInterpolator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkLinearContourLineInterpolator::NewInstance();
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
PyvtkLinearContourLineInterpolator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkLinearContourLineInterpolator *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkLinearContourLineInterpolator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLinearContourLineInterpolator_InterpolateLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearContourLineInterpolator *op = static_cast<vtkLinearContourLineInterpolator *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkContourRepresentation *temp1 = NULL;
  int temp2;
  int temp3;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkContourRepresentation") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      tempr = op->InterpolateLine(temp0, temp1, temp2, temp3);
      }
    else
      {
      tempr = op->vtkLinearContourLineInterpolator::InterpolateLine(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLinearContourLineInterpolator_Methods[] = {
  {(char*)"GetClassName", PyvtkLinearContourLineInterpolator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for instances of this class.\n"},
  {(char*)"IsA", PyvtkLinearContourLineInterpolator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for instances of this class.\n"},
  {(char*)"NewInstance", PyvtkLinearContourLineInterpolator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkLinearContourLineInterpolator\nC++: vtkLinearContourLineInterpolator *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {(char*)"SafeDownCast", PyvtkLinearContourLineInterpolator_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLinearContourLineInterpolator\nC++: vtkLinearContourLineInterpolator *SafeDownCast(vtkObject* o)\n\nStandard methods for instances of this class.\n"},
  {(char*)"InterpolateLine", PyvtkLinearContourLineInterpolator_InterpolateLine, 1,
   (char*)"V.InterpolateLine(vtkRenderer, vtkContourRepresentation, int, int)\n     -> int\nC++: virtual int InterpolateLine(vtkRenderer *ren,\n    vtkContourRepresentation *rep, int idx1, int idx2)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLinearContourLineInterpolator_StaticNew()
{
  return vtkLinearContourLineInterpolator::New();
}

PyObject *PyVTKClass_vtkLinearContourLineInterpolatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLinearContourLineInterpolator_StaticNew,
    PyvtkLinearContourLineInterpolator_Methods,
    "vtkLinearContourLineInterpolator", modulename,
    NULL, NULL,
    PyvtkLinearContourLineInterpolator_Doc(),
    PyVTKClass_vtkContourLineInterpolatorNew(modulename));
  return cls;
}

const char **PyvtkLinearContourLineInterpolator_Doc()
{
  static const char *docstring[] = {
    "vtkLinearContourLineInterpolator - Interpolates supplied nodes with\nline segments\n\n",
    "Superclass: vtkContourLineInterpolator\n\n",
    "The line interpolator interpolates supplied nodes (see\nInterpolateLine) with line segments. The finess of the curve may be\ncontrolled using SetMaximumCurveError and\nSetMaximumNumberOfLineSegments.\n\nSee Also:\n\nvtkContourLineInterpolator\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLinearContourLineInterpolator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLinearContourLineInterpolatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLinearContourLineInterpolator", o) != 0)
    {
    Py_DECREF(o);
    }

}
