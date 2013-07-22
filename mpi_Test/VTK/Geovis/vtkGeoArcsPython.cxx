// python wrapper for vtkGeoArcs
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
#include "vtkGeoArcs.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGeoArcs(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGeoArcs(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGeoArcsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGeoArcsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkGeoArcs_Doc();


static PyObject *
PyvtkGeoArcs_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoArcs *op = static_cast<vtkGeoArcs *>(vp);

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
      tempr = op->vtkGeoArcs::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoArcs_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoArcs *op = static_cast<vtkGeoArcs *>(vp);

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
      tempr = op->vtkGeoArcs::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoArcs_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoArcs *op = static_cast<vtkGeoArcs *>(vp);

  vtkGeoArcs *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGeoArcs::NewInstance();
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
PyvtkGeoArcs_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGeoArcs *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGeoArcs::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoArcs_SetGlobeRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlobeRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoArcs *op = static_cast<vtkGeoArcs *>(vp);

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
      op->vtkGeoArcs::SetGlobeRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoArcs_GetGlobeRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobeRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoArcs *op = static_cast<vtkGeoArcs *>(vp);

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
      tempr = op->vtkGeoArcs::GetGlobeRadius();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoArcs_SetExplodeFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExplodeFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoArcs *op = static_cast<vtkGeoArcs *>(vp);

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
      op->vtkGeoArcs::SetExplodeFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoArcs_GetExplodeFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExplodeFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoArcs *op = static_cast<vtkGeoArcs *>(vp);

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
      tempr = op->vtkGeoArcs::GetExplodeFactor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoArcs_SetNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoArcs *op = static_cast<vtkGeoArcs *>(vp);

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
      op->vtkGeoArcs::SetNumberOfSubdivisions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoArcs_GetNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoArcs *op = static_cast<vtkGeoArcs *>(vp);

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
      tempr = op->vtkGeoArcs::GetNumberOfSubdivisions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGeoArcs_Methods[] = {
  {(char*)"GetClassName", PyvtkGeoArcs_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGeoArcs_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGeoArcs_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGeoArcs\nC++: vtkGeoArcs *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGeoArcs_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGeoArcs\nC++: vtkGeoArcs *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetGlobeRadius", PyvtkGeoArcs_SetGlobeRadius, 1,
   (char*)"V.SetGlobeRadius(float)\nC++: void SetGlobeRadius(double a)\n\nThe base radius used to determine the earth's surface. Default is\nthe earth's radius in meters.\n"},
  {(char*)"GetGlobeRadius", PyvtkGeoArcs_GetGlobeRadius, 1,
   (char*)"V.GetGlobeRadius() -> float\nC++: double GetGlobeRadius()\n\nThe base radius used to determine the earth's surface. Default is\nthe earth's radius in meters.\n"},
  {(char*)"SetExplodeFactor", PyvtkGeoArcs_SetExplodeFactor, 1,
   (char*)"V.SetExplodeFactor(float)\nC++: void SetExplodeFactor(double a)\n\nFactor on which to \"explode\" the arcs away from the surface. A\nvalue of 0.0 keeps the values on the surface. Values larger than\n0.0 push the arcs away from the surface by a distance\nproportional to the distance between the points. The default is\n0.2.\n"},
  {(char*)"GetExplodeFactor", PyvtkGeoArcs_GetExplodeFactor, 1,
   (char*)"V.GetExplodeFactor() -> float\nC++: double GetExplodeFactor()\n\nFactor on which to \"explode\" the arcs away from the surface. A\nvalue of 0.0 keeps the values on the surface. Values larger than\n0.0 push the arcs away from the surface by a distance\nproportional to the distance between the points. The default is\n0.2.\n"},
  {(char*)"SetNumberOfSubdivisions", PyvtkGeoArcs_SetNumberOfSubdivisions, 1,
   (char*)"V.SetNumberOfSubdivisions(int)\nC++: void SetNumberOfSubdivisions(int a)\n\nThe number of subdivisions in the arc. The default is 20.\n"},
  {(char*)"GetNumberOfSubdivisions", PyvtkGeoArcs_GetNumberOfSubdivisions, 1,
   (char*)"V.GetNumberOfSubdivisions() -> int\nC++: int GetNumberOfSubdivisions()\n\nThe number of subdivisions in the arc. The default is 20.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGeoArcs_StaticNew()
{
  return vtkGeoArcs::New();
}

PyObject *PyVTKClass_vtkGeoArcsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGeoArcs_StaticNew,
    PyvtkGeoArcs_Methods,
    "vtkGeoArcs", modulename,
    NULL, NULL,
    PyvtkGeoArcs_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkGeoArcs_Doc()
{
  static const char *docstring[] = {
    "vtkGeoArcs - Layout graph edges on a globe as arcs.\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkGeoArcs produces arcs for each line in the input polydata. This is\nuseful for viewing lines on a sphere (e.g. the earth). The arcs may\n\"jump\" above the sphere's surface using ExplodeFactor.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGeoArcs(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGeoArcsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGeoArcs", o) != 0)
    {
    Py_DECREF(o);
    }

}

