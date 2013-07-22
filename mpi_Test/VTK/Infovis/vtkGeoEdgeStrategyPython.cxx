// python wrapper for vtkGeoEdgeStrategy
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
#include "vtkGeoEdgeStrategy.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGeoEdgeStrategy(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGeoEdgeStrategy(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGeoEdgeStrategyNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGeoEdgeStrategyNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkEdgeLayoutStrategyNew
extern "C" { PyObject *PyVTKClass_vtkEdgeLayoutStrategyNew(const char *); }
#define DECLARED_PyVTKClass_vtkEdgeLayoutStrategyNew
#endif

static const char **PyvtkGeoEdgeStrategy_Doc();


static PyObject *
PyvtkGeoEdgeStrategy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoEdgeStrategy *op = static_cast<vtkGeoEdgeStrategy *>(vp);

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
      tempr = op->vtkGeoEdgeStrategy::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoEdgeStrategy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoEdgeStrategy *op = static_cast<vtkGeoEdgeStrategy *>(vp);

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
      tempr = op->vtkGeoEdgeStrategy::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoEdgeStrategy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoEdgeStrategy *op = static_cast<vtkGeoEdgeStrategy *>(vp);

  vtkGeoEdgeStrategy *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGeoEdgeStrategy::NewInstance();
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
PyvtkGeoEdgeStrategy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGeoEdgeStrategy *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGeoEdgeStrategy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoEdgeStrategy_SetGlobeRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlobeRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoEdgeStrategy *op = static_cast<vtkGeoEdgeStrategy *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGlobeRadius(temp0);
      }
    else
      {
      op->vtkGeoEdgeStrategy::SetGlobeRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoEdgeStrategy_GetGlobeRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobeRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoEdgeStrategy *op = static_cast<vtkGeoEdgeStrategy *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGlobeRadius();
      }
    else
      {
      tempr = op->vtkGeoEdgeStrategy::GetGlobeRadius();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoEdgeStrategy_SetExplodeFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExplodeFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoEdgeStrategy *op = static_cast<vtkGeoEdgeStrategy *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetExplodeFactor(temp0);
      }
    else
      {
      op->vtkGeoEdgeStrategy::SetExplodeFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoEdgeStrategy_GetExplodeFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExplodeFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoEdgeStrategy *op = static_cast<vtkGeoEdgeStrategy *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetExplodeFactor();
      }
    else
      {
      tempr = op->vtkGeoEdgeStrategy::GetExplodeFactor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoEdgeStrategy_SetNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoEdgeStrategy *op = static_cast<vtkGeoEdgeStrategy *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfSubdivisions(temp0);
      }
    else
      {
      op->vtkGeoEdgeStrategy::SetNumberOfSubdivisions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoEdgeStrategy_GetNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoEdgeStrategy *op = static_cast<vtkGeoEdgeStrategy *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfSubdivisions();
      }
    else
      {
      tempr = op->vtkGeoEdgeStrategy::GetNumberOfSubdivisions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoEdgeStrategy_Layout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Layout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoEdgeStrategy *op = static_cast<vtkGeoEdgeStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Layout();
      }
    else
      {
      op->vtkGeoEdgeStrategy::Layout();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGeoEdgeStrategy_Methods[] = {
  {(char*)"GetClassName", PyvtkGeoEdgeStrategy_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGeoEdgeStrategy_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGeoEdgeStrategy_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGeoEdgeStrategy\nC++: vtkGeoEdgeStrategy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGeoEdgeStrategy_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGeoEdgeStrategy\nC++: vtkGeoEdgeStrategy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetGlobeRadius", PyvtkGeoEdgeStrategy_SetGlobeRadius, 1,
   (char*)"V.SetGlobeRadius(float)\nC++: void SetGlobeRadius(double a)\n\nThe base radius used to determine the earth's surface. Default is\nthe earth's radius in meters. TODO: Change this to take in a\nvtkGeoTerrain to get altitude.\n"},
  {(char*)"GetGlobeRadius", PyvtkGeoEdgeStrategy_GetGlobeRadius, 1,
   (char*)"V.GetGlobeRadius() -> float\nC++: double GetGlobeRadius()\n\nThe base radius used to determine the earth's surface. Default is\nthe earth's radius in meters. TODO: Change this to take in a\nvtkGeoTerrain to get altitude.\n"},
  {(char*)"SetExplodeFactor", PyvtkGeoEdgeStrategy_SetExplodeFactor, 1,
   (char*)"V.SetExplodeFactor(float)\nC++: void SetExplodeFactor(double a)\n\nFactor on which to \"explode\" the arcs away from the surface. A\nvalue of 0.0 keeps the values on the surface. Values larger than\n0.0 push the arcs away from the surface by a distance\nproportional to the distance between the points. The default is\n0.2.\n"},
  {(char*)"GetExplodeFactor", PyvtkGeoEdgeStrategy_GetExplodeFactor, 1,
   (char*)"V.GetExplodeFactor() -> float\nC++: double GetExplodeFactor()\n\nFactor on which to \"explode\" the arcs away from the surface. A\nvalue of 0.0 keeps the values on the surface. Values larger than\n0.0 push the arcs away from the surface by a distance\nproportional to the distance between the points. The default is\n0.2.\n"},
  {(char*)"SetNumberOfSubdivisions", PyvtkGeoEdgeStrategy_SetNumberOfSubdivisions, 1,
   (char*)"V.SetNumberOfSubdivisions(int)\nC++: void SetNumberOfSubdivisions(int a)\n\nThe number of subdivisions in the arc. The default is 20.\n"},
  {(char*)"GetNumberOfSubdivisions", PyvtkGeoEdgeStrategy_GetNumberOfSubdivisions, 1,
   (char*)"V.GetNumberOfSubdivisions() -> int\nC++: int GetNumberOfSubdivisions()\n\nThe number of subdivisions in the arc. The default is 20.\n"},
  {(char*)"Layout", PyvtkGeoEdgeStrategy_Layout, 1,
   (char*)"V.Layout()\nC++: virtual void Layout()\n\nPerform the layout.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGeoEdgeStrategy_StaticNew()
{
  return vtkGeoEdgeStrategy::New();
}

PyObject *PyVTKClass_vtkGeoEdgeStrategyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGeoEdgeStrategy_StaticNew,
    PyvtkGeoEdgeStrategy_Methods,
    "vtkGeoEdgeStrategy", modulename,
    NULL, NULL,
    PyvtkGeoEdgeStrategy_Doc(),
    PyVTKClass_vtkEdgeLayoutStrategyNew(modulename));
  return cls;
}

const char **PyvtkGeoEdgeStrategy_Doc()
{
  static const char *docstring[] = {
    "vtkGeoEdgeStrategy - Layout graph edges on a globe as arcs.\n\n",
    "Superclass: vtkEdgeLayoutStrategy\n\n",
    "vtkGeoEdgeStrategy produces arcs for each edge in the input graph.\nThis is useful for viewing lines on a sphere (e.g. the earth). The\narcs may \"jump\" above the sphere's surface using ExplodeFactor.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGeoEdgeStrategy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGeoEdgeStrategyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGeoEdgeStrategy", o) != 0)
    {
    Py_DECREF(o);
    }

}

