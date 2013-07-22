// python wrapper for vtkPolyDataContourLineInterpolator
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
#include "vtkPolyDataContourLineInterpolator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPolyDataContourLineInterpolator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPolyDataContourLineInterpolator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPolyDataContourLineInterpolatorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPolyDataContourLineInterpolatorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkContourLineInterpolatorNew
extern "C" { PyObject *PyVTKClass_vtkContourLineInterpolatorNew(const char *); }
#define DECLARED_PyVTKClass_vtkContourLineInterpolatorNew
#endif

static const char **PyvtkPolyDataContourLineInterpolator_Doc();


static PyObject *
PyvtkPolyDataContourLineInterpolator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataContourLineInterpolator *op = static_cast<vtkPolyDataContourLineInterpolator *>(vp);

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
      tempr = op->vtkPolyDataContourLineInterpolator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataContourLineInterpolator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataContourLineInterpolator *op = static_cast<vtkPolyDataContourLineInterpolator *>(vp);

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
      tempr = op->vtkPolyDataContourLineInterpolator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataContourLineInterpolator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataContourLineInterpolator *op = static_cast<vtkPolyDataContourLineInterpolator *>(vp);

  vtkPolyDataContourLineInterpolator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPolyDataContourLineInterpolator::NewInstance();
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
PyvtkPolyDataContourLineInterpolator_InterpolateLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataContourLineInterpolator *op = static_cast<vtkPolyDataContourLineInterpolator *>(vp);

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
PyvtkPolyDataContourLineInterpolator_GetPolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataContourLineInterpolator *op = static_cast<vtkPolyDataContourLineInterpolator *>(vp);

  vtkPolyDataCollection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPolys();
      }
    else
      {
      tempr = op->vtkPolyDataContourLineInterpolator::GetPolys();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPolyDataContourLineInterpolator_Methods[] = {
  {(char*)"GetClassName", PyvtkPolyDataContourLineInterpolator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for instances of this class.\n"},
  {(char*)"IsA", PyvtkPolyDataContourLineInterpolator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for instances of this class.\n"},
  {(char*)"NewInstance", PyvtkPolyDataContourLineInterpolator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPolyDataContourLineInterpolator\nC++: vtkPolyDataContourLineInterpolator *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {(char*)"InterpolateLine", PyvtkPolyDataContourLineInterpolator_InterpolateLine, 1,
   (char*)"V.InterpolateLine(vtkRenderer, vtkContourRepresentation, int, int)\n     -> int\nC++: virtual int InterpolateLine(vtkRenderer *ren,\n    vtkContourRepresentation *rep, int idx1, int idx2)\n\nSubclasses that wish to interpolate a line segment must implement\nthis. For instance vtkBezierContourLineInterpolator adds nodes\nbetween idx1 and idx2, that allow the contour to adhere to a\nbezier curve.\n"},
  {(char*)"GetPolys", PyvtkPolyDataContourLineInterpolator_GetPolys, 1,
   (char*)"V.GetPolys() -> vtkPolyDataCollection\nC++: vtkPolyDataCollection *GetPolys()\n\nBe sure to add polydata on which you wish to place points to this\nlist or they will not be considered for placement.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkPolyDataContourLineInterpolatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkPolyDataContourLineInterpolator_Methods,
    "vtkPolyDataContourLineInterpolator", modulename,
    NULL, NULL,
    PyvtkPolyDataContourLineInterpolator_Doc(),
    PyVTKClass_vtkContourLineInterpolatorNew(modulename));
  return cls;
}

const char **PyvtkPolyDataContourLineInterpolator_Doc()
{
  static const char *docstring[] = {
    "vtkPolyDataContourLineInterpolator - Contour interpolator for\npolygonal data\n\n",
    "Superclass: vtkContourLineInterpolator\n\n",
    "vtkPolyDataContourLineInterpolator is an abstract base class for\ncontour line interpolators that interpolate on polygonal data.\n\nSee Also:\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPolyDataContourLineInterpolator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPolyDataContourLineInterpolatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPolyDataContourLineInterpolator", o) != 0)
    {
    Py_DECREF(o);
    }

}

