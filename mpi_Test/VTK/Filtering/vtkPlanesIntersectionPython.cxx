// python wrapper for vtkPlanesIntersection
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
#include "vtkPlanesIntersection.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPlanesIntersection(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPlanesIntersection(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPlanesIntersectionNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPlanesIntersectionNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPlanesNew
extern "C" { PyObject *PyVTKClass_vtkPlanesNew(const char *); }
#define DECLARED_PyVTKClass_vtkPlanesNew
#endif

static const char **PyvtkPlanesIntersection_Doc();


static PyObject *
PyvtkPlanesIntersection_SetRegionVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRegionVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanesIntersection *op = static_cast<vtkPlanesIntersection *>(vp);

  vtkPoints *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
    {
    if (ap.IsBound())
      {
      op->SetRegionVertices(temp0);
      }
    else
      {
      op->vtkPlanesIntersection::SetRegionVertices(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlanesIntersection_GetNumRegionVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumRegionVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanesIntersection *op = static_cast<vtkPlanesIntersection *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumRegionVertices();
      }
    else
      {
      tempr = op->vtkPlanesIntersection::GetNumRegionVertices();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlanesIntersection_IntersectsRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectsRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanesIntersection *op = static_cast<vtkPlanesIntersection *>(vp);

  vtkPoints *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
    {
    if (ap.IsBound())
      {
      tempr = op->IntersectsRegion(temp0);
      }
    else
      {
      tempr = op->vtkPlanesIntersection::IntersectsRegion(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlanesIntersection_PolygonIntersectsBBox(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PolygonIntersectsBBox");

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  vtkPoints *temp1 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkPoints"))
    {
    ap.SaveArray(temp0, save0, size0);

    tempr = vtkPlanesIntersection::PolygonIntersectsBBox(temp0, temp1);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlanesIntersection_Convert3DCell(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Convert3DCell");

  vtkCell *temp0 = NULL;
  vtkPlanesIntersection *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkPlanesIntersection::Convert3DCell(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPlanesIntersection_Methods[] = {
  {(char*)"SetRegionVertices", PyvtkPlanesIntersection_SetRegionVertices, 1,
   (char*)"V.SetRegionVertices(vtkPoints)\nC++: void SetRegionVertices(vtkPoints *pts)\n\nIt helps if you know the vertices of the convex region.\n  If you don't, we will calculate them.  Region vertices\n  are 3-tuples.\n"},
  {(char*)"GetNumRegionVertices", PyvtkPlanesIntersection_GetNumRegionVertices, 1,
   (char*)"V.GetNumRegionVertices() -> int\nC++: int GetNumRegionVertices()\n\nIt helps if you know the vertices of the convex region.\n  If you don't, we will calculate them.  Region vertices\n  are 3-tuples.\n"},
  {(char*)"IntersectsRegion", PyvtkPlanesIntersection_IntersectsRegion, 1,
   (char*)"V.IntersectsRegion(vtkPoints) -> int\nC++: int IntersectsRegion(vtkPoints *R)\n\nReturn 1 if the axis aligned box defined by R intersects\n  the region defined by the planes, or 0 otherwise.\n"},
  {(char*)"PolygonIntersectsBBox", PyvtkPlanesIntersection_PolygonIntersectsBBox, 1,
   (char*)"V.PolygonIntersectsBBox([float, float, float, float, float,\n    float], vtkPoints) -> int\nC++: static int PolygonIntersectsBBox(double bounds[6],\n    vtkPoints *pts)\n\nA convenience function provided by this class, returns\n  1 if the polygon defined in pts intersects the bounding\n  box defined in bounds, 0 otherwise.\n\n\n  The points must define a planar polygon.\n"},
  {(char*)"Convert3DCell", PyvtkPlanesIntersection_Convert3DCell, 1,
   (char*)"V.Convert3DCell(vtkCell) -> vtkPlanesIntersection\nC++: static vtkPlanesIntersection *Convert3DCell(vtkCell *cell)\n\nAnother convenience function provided by this class, returns\n  the vtkPlanesIntersection object representing a 3D\n  cell.  The point IDs for each face must be given in\n  counter-clockwise order from the outside of the cell.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPlanesIntersection_StaticNew()
{
  return vtkPlanesIntersection::New();
}

PyObject *PyVTKClass_vtkPlanesIntersectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPlanesIntersection_StaticNew,
    PyvtkPlanesIntersection_Methods,
    "vtkPlanesIntersection", modulename,
    NULL, NULL,
    PyvtkPlanesIntersection_Doc(),
    PyVTKClass_vtkPlanesNew(modulename));
  return cls;
}

const char **PyvtkPlanesIntersection_Doc()
{
  static const char *docstring[] = {
    "vtkPlanesIntersection - A vtkPlanesIntersection object is a\n\n",
    "Superclass: vtkPlanes\n\n",
    "A subclass of vtkPlanes, this class determines whether it\n   intersects an axis aligned box.   This is motivated by the\n   need to intersect the axis aligned region of a spacial\n   decomposition of volume data with various other regions.\n   It uses the algorithm from Graphics Gems IV, page 81.\n\nCaveat:\n\n\n   An instance of vtkPlanes can be redefined by changing the planes,\n   but this subclass then",
    " will not know if the region vertices are\n   up to date.  (Region vertices can be specified in\nSetRegionVertices\n   or computed by the subclass.)  So Delete and recreate if you want\n   to change the set of planes.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPlanesIntersection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPlanesIntersectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPlanesIntersection", o) != 0)
    {
    Py_DECREF(o);
    }

}

