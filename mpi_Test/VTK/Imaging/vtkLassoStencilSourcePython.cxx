// python wrapper for vtkLassoStencilSource
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
#include "vtkLassoStencilSource.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkLassoStencilSource(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkLassoStencilSource(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkLassoStencilSourceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkLassoStencilSourceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageStencilSourceNew
extern "C" { PyObject *PyVTKClass_vtkImageStencilSourceNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageStencilSourceNew
#endif

static const char **PyvtkLassoStencilSource_Doc();


static PyObject *
PyvtkLassoStencilSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLassoStencilSource *op = static_cast<vtkLassoStencilSource *>(vp);

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
      tempr = op->vtkLassoStencilSource::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLassoStencilSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLassoStencilSource *op = static_cast<vtkLassoStencilSource *>(vp);

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
      tempr = op->vtkLassoStencilSource::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLassoStencilSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLassoStencilSource *op = static_cast<vtkLassoStencilSource *>(vp);

  vtkLassoStencilSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkLassoStencilSource::NewInstance();
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
PyvtkLassoStencilSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkLassoStencilSource *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkLassoStencilSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLassoStencilSource_GetShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLassoStencilSource *op = static_cast<vtkLassoStencilSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShape();
      }
    else
      {
      tempr = op->vtkLassoStencilSource::GetShape();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLassoStencilSource_SetShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLassoStencilSource *op = static_cast<vtkLassoStencilSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShape(temp0);
      }
    else
      {
      op->vtkLassoStencilSource::SetShape(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLassoStencilSource_GetShapeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShapeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLassoStencilSource *op = static_cast<vtkLassoStencilSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShapeMinValue();
      }
    else
      {
      tempr = op->vtkLassoStencilSource::GetShapeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLassoStencilSource_GetShapeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShapeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLassoStencilSource *op = static_cast<vtkLassoStencilSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShapeMaxValue();
      }
    else
      {
      tempr = op->vtkLassoStencilSource::GetShapeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLassoStencilSource_SetShapeToPolygon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShapeToPolygon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLassoStencilSource *op = static_cast<vtkLassoStencilSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetShapeToPolygon();
      }
    else
      {
      op->vtkLassoStencilSource::SetShapeToPolygon();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLassoStencilSource_SetShapeToSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShapeToSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLassoStencilSource *op = static_cast<vtkLassoStencilSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetShapeToSpline();
      }
    else
      {
      op->vtkLassoStencilSource::SetShapeToSpline();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLassoStencilSource_GetShapeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShapeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLassoStencilSource *op = static_cast<vtkLassoStencilSource *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShapeAsString();
      }
    else
      {
      tempr = op->vtkLassoStencilSource::GetShapeAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLassoStencilSource_SetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLassoStencilSource *op = static_cast<vtkLassoStencilSource *>(vp);

  vtkPoints *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
    {
    if (ap.IsBound())
      {
      op->SetPoints(temp0);
      }
    else
      {
      op->vtkLassoStencilSource::SetPoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLassoStencilSource_GetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLassoStencilSource *op = static_cast<vtkLassoStencilSource *>(vp);

  vtkPoints *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPoints();
      }
    else
      {
      tempr = op->vtkLassoStencilSource::GetPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLassoStencilSource_GetSliceOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLassoStencilSource *op = static_cast<vtkLassoStencilSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSliceOrientation();
      }
    else
      {
      tempr = op->vtkLassoStencilSource::GetSliceOrientation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLassoStencilSource_SetSliceOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLassoStencilSource *op = static_cast<vtkLassoStencilSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSliceOrientation(temp0);
      }
    else
      {
      op->vtkLassoStencilSource::SetSliceOrientation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLassoStencilSource_GetSliceOrientationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceOrientationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLassoStencilSource *op = static_cast<vtkLassoStencilSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSliceOrientationMinValue();
      }
    else
      {
      tempr = op->vtkLassoStencilSource::GetSliceOrientationMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLassoStencilSource_GetSliceOrientationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceOrientationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLassoStencilSource *op = static_cast<vtkLassoStencilSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSliceOrientationMaxValue();
      }
    else
      {
      tempr = op->vtkLassoStencilSource::GetSliceOrientationMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLassoStencilSource_SetSlicePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlicePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLassoStencilSource *op = static_cast<vtkLassoStencilSource *>(vp);

  int temp0;
  vtkPoints *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPoints"))
    {
    if (ap.IsBound())
      {
      op->SetSlicePoints(temp0, temp1);
      }
    else
      {
      op->vtkLassoStencilSource::SetSlicePoints(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLassoStencilSource_GetSlicePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlicePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLassoStencilSource *op = static_cast<vtkLassoStencilSource *>(vp);

  int temp0;
  vtkPoints *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSlicePoints(temp0);
      }
    else
      {
      tempr = op->vtkLassoStencilSource::GetSlicePoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLassoStencilSource_RemoveAllSlicePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllSlicePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLassoStencilSource *op = static_cast<vtkLassoStencilSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllSlicePoints();
      }
    else
      {
      op->vtkLassoStencilSource::RemoveAllSlicePoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLassoStencilSource_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLassoStencilSource *op = static_cast<vtkLassoStencilSource *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMTime();
      }
    else
      {
      tempr = op->vtkLassoStencilSource::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLassoStencilSource_Methods[] = {
  {(char*)"GetClassName", PyvtkLassoStencilSource_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkLassoStencilSource_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkLassoStencilSource_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkLassoStencilSource\nC++: vtkLassoStencilSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkLassoStencilSource_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLassoStencilSource\nC++: vtkLassoStencilSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetShape", PyvtkLassoStencilSource_GetShape, 1,
   (char*)"V.GetShape() -> int\nC++: int GetShape()\n\nThe shape to use, default is \"Polygon\".  The spline is a cardinal\nspline.  Bezier splines are not yet supported.\n"},
  {(char*)"SetShape", PyvtkLassoStencilSource_SetShape, 1,
   (char*)"V.SetShape(int)\nC++: void SetShape(int)\n\nThe shape to use, default is \"Polygon\".  The spline is a cardinal\nspline.  Bezier splines are not yet supported.\n"},
  {(char*)"GetShapeMinValue", PyvtkLassoStencilSource_GetShapeMinValue, 1,
   (char*)"V.GetShapeMinValue() -> int\nC++: int GetShapeMinValue()\n\nThe shape to use, default is \"Polygon\".  The spline is a cardinal\nspline.  Bezier splines are not yet supported.\n"},
  {(char*)"GetShapeMaxValue", PyvtkLassoStencilSource_GetShapeMaxValue, 1,
   (char*)"V.GetShapeMaxValue() -> int\nC++: int GetShapeMaxValue()\n\nThe shape to use, default is \"Polygon\".  The spline is a cardinal\nspline.  Bezier splines are not yet supported.\n"},
  {(char*)"SetShapeToPolygon", PyvtkLassoStencilSource_SetShapeToPolygon, 1,
   (char*)"V.SetShapeToPolygon()\nC++: void SetShapeToPolygon()\n\nThe shape to use, default is \"Polygon\".  The spline is a cardinal\nspline.  Bezier splines are not yet supported.\n"},
  {(char*)"SetShapeToSpline", PyvtkLassoStencilSource_SetShapeToSpline, 1,
   (char*)"V.SetShapeToSpline()\nC++: void SetShapeToSpline()\n\nThe shape to use, default is \"Polygon\".  The spline is a cardinal\nspline.  Bezier splines are not yet supported.\n"},
  {(char*)"GetShapeAsString", PyvtkLassoStencilSource_GetShapeAsString, 1,
   (char*)"V.GetShapeAsString() -> string\nC++: virtual const char *GetShapeAsString()\n\nThe shape to use, default is \"Polygon\".  The spline is a cardinal\nspline.  Bezier splines are not yet supported.\n"},
  {(char*)"SetPoints", PyvtkLassoStencilSource_SetPoints, 1,
   (char*)"V.SetPoints(vtkPoints)\nC++: virtual void SetPoints(vtkPoints *points)\n\nThe points that make up the lassoo.  The loop does not have to be\nclosed, the last point will automatically be connected to the\nfirst point by a straight line segment.\n"},
  {(char*)"GetPoints", PyvtkLassoStencilSource_GetPoints, 1,
   (char*)"V.GetPoints() -> vtkPoints\nC++: vtkPoints *GetPoints()\n\nThe points that make up the lassoo.  The loop does not have to be\nclosed, the last point will automatically be connected to the\nfirst point by a straight line segment.\n"},
  {(char*)"GetSliceOrientation", PyvtkLassoStencilSource_GetSliceOrientation, 1,
   (char*)"V.GetSliceOrientation() -> int\nC++: int GetSliceOrientation()\n\nThe slice orientation.  The default is 2, which is XY. Other\nvalues are 0, which is YZ, and 1, which is XZ.\n"},
  {(char*)"SetSliceOrientation", PyvtkLassoStencilSource_SetSliceOrientation, 1,
   (char*)"V.SetSliceOrientation(int)\nC++: void SetSliceOrientation(int)\n\nThe slice orientation.  The default is 2, which is XY. Other\nvalues are 0, which is YZ, and 1, which is XZ.\n"},
  {(char*)"GetSliceOrientationMinValue", PyvtkLassoStencilSource_GetSliceOrientationMinValue, 1,
   (char*)"V.GetSliceOrientationMinValue() -> int\nC++: int GetSliceOrientationMinValue()\n\nThe slice orientation.  The default is 2, which is XY. Other\nvalues are 0, which is YZ, and 1, which is XZ.\n"},
  {(char*)"GetSliceOrientationMaxValue", PyvtkLassoStencilSource_GetSliceOrientationMaxValue, 1,
   (char*)"V.GetSliceOrientationMaxValue() -> int\nC++: int GetSliceOrientationMaxValue()\n\nThe slice orientation.  The default is 2, which is XY. Other\nvalues are 0, which is YZ, and 1, which is XZ.\n"},
  {(char*)"SetSlicePoints", PyvtkLassoStencilSource_SetSlicePoints, 1,
   (char*)"V.SetSlicePoints(int, vtkPoints)\nC++: virtual void SetSlicePoints(int i, vtkPoints *points)\n\nThe points for a particular slice.  This will override the points\nthat were set by calling SetPoints() for the slice. To clear the\nsetting, call SetSlicePoints(slice, NULL).\n"},
  {(char*)"GetSlicePoints", PyvtkLassoStencilSource_GetSlicePoints, 1,
   (char*)"V.GetSlicePoints(int) -> vtkPoints\nC++: virtual vtkPoints *GetSlicePoints(int i)\n\nThe points for a particular slice.  This will override the points\nthat were set by calling SetPoints() for the slice. To clear the\nsetting, call SetSlicePoints(slice, NULL).\n"},
  {(char*)"RemoveAllSlicePoints", PyvtkLassoStencilSource_RemoveAllSlicePoints, 1,
   (char*)"V.RemoveAllSlicePoints()\nC++: virtual void RemoveAllSlicePoints()\n\nRemove points from all slices.\n"},
  {(char*)"GetMTime", PyvtkLassoStencilSource_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nOverload GetMTime() to include the timestamp on the points.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLassoStencilSource_StaticNew()
{
  return vtkLassoStencilSource::New();
}

PyObject *PyVTKClass_vtkLassoStencilSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLassoStencilSource_StaticNew,
    PyvtkLassoStencilSource_Methods,
    "vtkLassoStencilSource", modulename,
    NULL, NULL,
    PyvtkLassoStencilSource_Doc(),
    PyVTKClass_vtkImageStencilSourceNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"POLYGON", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"SPLINE", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkLassoStencilSource_Doc()
{
  static const char *docstring[] = {
    "vtkLassoStencilSource - Create a stencil from a contour\n\n",
    "Superclass: vtkImageStencilSource\n\n",
    "vtkLassoStencilSource will create an image stencil from a set of\npoints that define a contour.  Its output can be used with\nvtkImageStecil or other vtk classes that apply a stencil to an image.\n\nSee Also:\n\nvtkROIStencilSource vtkPolyDataToImageStencil\n\nThanks:\n\nThanks to David Gobbi for contributing this class to VTK.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLassoStencilSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLassoStencilSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLassoStencilSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

