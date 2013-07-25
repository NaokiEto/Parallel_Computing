// python wrapper for vtkPolygonalSurfaceContourLineInterpolator
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
#include "vtkPolygonalSurfaceContourLineInterpolator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPolygonalSurfaceContourLineInterpolator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPolygonalSurfaceContourLineInterpolator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPolygonalSurfaceContourLineInterpolatorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPolygonalSurfaceContourLineInterpolatorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataContourLineInterpolatorNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataContourLineInterpolatorNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataContourLineInterpolatorNew
#endif

static const char **PyvtkPolygonalSurfaceContourLineInterpolator_Doc();


static PyObject *
PyvtkPolygonalSurfaceContourLineInterpolator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfaceContourLineInterpolator *op = static_cast<vtkPolygonalSurfaceContourLineInterpolator *>(vp);

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
      tempr = op->vtkPolygonalSurfaceContourLineInterpolator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolygonalSurfaceContourLineInterpolator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfaceContourLineInterpolator *op = static_cast<vtkPolygonalSurfaceContourLineInterpolator *>(vp);

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
      tempr = op->vtkPolygonalSurfaceContourLineInterpolator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolygonalSurfaceContourLineInterpolator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfaceContourLineInterpolator *op = static_cast<vtkPolygonalSurfaceContourLineInterpolator *>(vp);

  vtkPolygonalSurfaceContourLineInterpolator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPolygonalSurfaceContourLineInterpolator::NewInstance();
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
PyvtkPolygonalSurfaceContourLineInterpolator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPolygonalSurfaceContourLineInterpolator *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPolygonalSurfaceContourLineInterpolator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolygonalSurfaceContourLineInterpolator_InterpolateLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfaceContourLineInterpolator *op = static_cast<vtkPolygonalSurfaceContourLineInterpolator *>(vp);

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
      tempr = op->vtkPolygonalSurfaceContourLineInterpolator::InterpolateLine(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolygonalSurfaceContourLineInterpolator_SetDistanceOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfaceContourLineInterpolator *op = static_cast<vtkPolygonalSurfaceContourLineInterpolator *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDistanceOffset(temp0);
      }
    else
      {
      op->vtkPolygonalSurfaceContourLineInterpolator::SetDistanceOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolygonalSurfaceContourLineInterpolator_GetDistanceOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfaceContourLineInterpolator *op = static_cast<vtkPolygonalSurfaceContourLineInterpolator *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDistanceOffset();
      }
    else
      {
      tempr = op->vtkPolygonalSurfaceContourLineInterpolator::GetDistanceOffset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPolygonalSurfaceContourLineInterpolator_Methods[] = {
  {(char*)"GetClassName", PyvtkPolygonalSurfaceContourLineInterpolator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for instances of this class.\n"},
  {(char*)"IsA", PyvtkPolygonalSurfaceContourLineInterpolator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for instances of this class.\n"},
  {(char*)"NewInstance", PyvtkPolygonalSurfaceContourLineInterpolator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPolygonalSurfaceContourLineInterpolator\nC++: vtkPolygonalSurfaceContourLineInterpolator *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {(char*)"SafeDownCast", PyvtkPolygonalSurfaceContourLineInterpolator_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject)\n    -> vtkPolygonalSurfaceContourLineInterpolator\nC++: vtkPolygonalSurfaceContourLineInterpolator *SafeDownCast(\n    vtkObject* o)\n\nStandard methods for instances of this class.\n"},
  {(char*)"InterpolateLine", PyvtkPolygonalSurfaceContourLineInterpolator_InterpolateLine, 1,
   (char*)"V.InterpolateLine(vtkRenderer, vtkContourRepresentation, int, int)\n     -> int\nC++: virtual int InterpolateLine(vtkRenderer *ren,\n    vtkContourRepresentation *rep, int idx1, int idx2)\n\nSubclasses that wish to interpolate a line segment must implement\nthis. For instance vtkBezierContourLineInterpolator adds nodes\nbetween idx1 and idx2, that allow the contour to adhere to a\nbezier curve.\n"},
  {(char*)"SetDistanceOffset", PyvtkPolygonalSurfaceContourLineInterpolator_SetDistanceOffset, 1,
   (char*)"V.SetDistanceOffset(float)\nC++: void SetDistanceOffset(double a)\n\nHeight offset at which points may be placed on the polygonal\nsurface. If you specify a non-zero value here, be sure to have\ncomputed vertex normals on your input polygonal data. (easily\ndone with vtkPolyDataNormals).\n"},
  {(char*)"GetDistanceOffset", PyvtkPolygonalSurfaceContourLineInterpolator_GetDistanceOffset, 1,
   (char*)"V.GetDistanceOffset() -> float\nC++: double GetDistanceOffset()\n\nHeight offset at which points may be placed on the polygonal\nsurface. If you specify a non-zero value here, be sure to have\ncomputed vertex normals on your input polygonal data. (easily\ndone with vtkPolyDataNormals).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPolygonalSurfaceContourLineInterpolator_StaticNew()
{
  return vtkPolygonalSurfaceContourLineInterpolator::New();
}

PyObject *PyVTKClass_vtkPolygonalSurfaceContourLineInterpolatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPolygonalSurfaceContourLineInterpolator_StaticNew,
    PyvtkPolygonalSurfaceContourLineInterpolator_Methods,
    "vtkPolygonalSurfaceContourLineInterpolator", modulename,
    NULL, NULL,
    PyvtkPolygonalSurfaceContourLineInterpolator_Doc(),
    PyVTKClass_vtkPolyDataContourLineInterpolatorNew(modulename));
  return cls;
}

const char **PyvtkPolygonalSurfaceContourLineInterpolator_Doc()
{
  static const char *docstring[] = {
    "vtkPolygonalSurfaceContourLineInterpolator - Contour interpolator for\nto place points on polygonal surfaces.\n\n",
    "Superclass: vtkPolyDataContourLineInterpolator\n\n",
    "vtkPolygonalSurfaceContourLineInterpolator interpolates and places\ncontour points on polygonal surfaces. The class interpolates nodes by\ncomputing a graph geodesic lying on the polygonal data. By  graph\nGeodesic, we mean that the line interpolating the two end points\ntraverses along on the mesh edges so as to form the shortest path. A\nDijkstra algorithm is used to compute the path. See\nvtkDijkstra",
    "GraphGeodesicPath.\n\nThe class is mean to be used in conjunction with\nvtkPolygonalSurfacePointPlacer. The reason for this weak coupling is\na performance issue, both classes need to perform a cell pick, and\ncoupling avoids multiple cell picks (cell picks are slow).\n\nCaveats:\n\nYou should have computed cell normals for the input polydata.\n\nSee Also:\n\nvtkDijkstraGraphGeodesicPath, vtkPolyDataNormals\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPolygonalSurfaceContourLineInterpolator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPolygonalSurfaceContourLineInterpolatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPolygonalSurfaceContourLineInterpolator", o) != 0)
    {
    Py_DECREF(o);
    }

}
