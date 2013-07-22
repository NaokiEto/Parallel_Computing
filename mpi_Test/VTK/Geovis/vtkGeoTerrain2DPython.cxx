// python wrapper for vtkGeoTerrain2D
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
#include "vtkGeoTerrain2D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGeoTerrain2D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGeoTerrain2D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGeoTerrain2DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGeoTerrain2DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkGeoTerrainNew
extern "C" { PyObject *PyVTKClass_vtkGeoTerrainNew(const char *); }
#define DECLARED_PyVTKClass_vtkGeoTerrainNew
#endif

static const char **PyvtkGeoTerrain2D_Doc();


static PyObject *
PyvtkGeoTerrain2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrain2D *op = static_cast<vtkGeoTerrain2D *>(vp);

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
      tempr = op->vtkGeoTerrain2D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTerrain2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrain2D *op = static_cast<vtkGeoTerrain2D *>(vp);

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
      tempr = op->vtkGeoTerrain2D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTerrain2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrain2D *op = static_cast<vtkGeoTerrain2D *>(vp);

  vtkGeoTerrain2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGeoTerrain2D::NewInstance();
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
PyvtkGeoTerrain2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGeoTerrain2D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGeoTerrain2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTerrain2D_SetTextureTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrain2D *op = static_cast<vtkGeoTerrain2D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTextureTolerance(temp0);
      }
    else
      {
      op->vtkGeoTerrain2D::SetTextureTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTerrain2D_GetTextureTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrain2D *op = static_cast<vtkGeoTerrain2D *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextureTolerance();
      }
    else
      {
      tempr = op->vtkGeoTerrain2D::GetTextureTolerance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTerrain2D_SetLocationTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocationTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrain2D *op = static_cast<vtkGeoTerrain2D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLocationTolerance(temp0);
      }
    else
      {
      op->vtkGeoTerrain2D::SetLocationTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTerrain2D_GetLocationTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocationTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrain2D *op = static_cast<vtkGeoTerrain2D *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLocationTolerance();
      }
    else
      {
      tempr = op->vtkGeoTerrain2D::GetLocationTolerance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTerrain2D_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrain2D *op = static_cast<vtkGeoTerrain2D *>(vp);

  vtkAbstractTransform *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTransform();
      }
    else
      {
      tempr = op->vtkGeoTerrain2D::GetTransform();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGeoTerrain2D_Methods[] = {
  {(char*)"GetClassName", PyvtkGeoTerrain2D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGeoTerrain2D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGeoTerrain2D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGeoTerrain2D\nC++: vtkGeoTerrain2D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGeoTerrain2D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGeoTerrain2D\nC++: vtkGeoTerrain2D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetTextureTolerance", PyvtkGeoTerrain2D_SetTextureTolerance, 1,
   (char*)"V.SetTextureTolerance(float)\nC++: void SetTextureTolerance(double a)\n\nThe maximum size of a single texel in pixels. Images will be\nrefined if a texel becomes larger than the tolerance.\n"},
  {(char*)"GetTextureTolerance", PyvtkGeoTerrain2D_GetTextureTolerance, 1,
   (char*)"V.GetTextureTolerance() -> float\nC++: double GetTextureTolerance()\n\nThe maximum size of a single texel in pixels. Images will be\nrefined if a texel becomes larger than the tolerance.\n"},
  {(char*)"SetLocationTolerance", PyvtkGeoTerrain2D_SetLocationTolerance, 1,
   (char*)"V.SetLocationTolerance(float)\nC++: void SetLocationTolerance(double a)\n\nThe maximum allowed deviation of geometry in pixels. Geometry\nwill be refined if the deviation is larger than the tolerance.\n"},
  {(char*)"GetLocationTolerance", PyvtkGeoTerrain2D_GetLocationTolerance, 1,
   (char*)"V.GetLocationTolerance() -> float\nC++: double GetLocationTolerance()\n\nThe maximum allowed deviation of geometry in pixels. Geometry\nwill be refined if the deviation is larger than the tolerance.\n"},
  {(char*)"GetTransform", PyvtkGeoTerrain2D_GetTransform, 1,
   (char*)"V.GetTransform() -> vtkAbstractTransform\nC++: virtual vtkAbstractTransform *GetTransform()\n\nReturn the projection transformation used by this 2D terrain.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGeoTerrain2D_StaticNew()
{
  return vtkGeoTerrain2D::New();
}

PyObject *PyVTKClass_vtkGeoTerrain2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGeoTerrain2D_StaticNew,
    PyvtkGeoTerrain2D_Methods,
    "vtkGeoTerrain2D", modulename,
    NULL, NULL,
    PyvtkGeoTerrain2D_Doc(),
    PyVTKClass_vtkGeoTerrainNew(modulename));
  return cls;
}

const char **PyvtkGeoTerrain2D_Doc()
{
  static const char *docstring[] = {
    "vtkGeoTerrain2D - A 2D terrain model for the globe.\n\n",
    "Superclass: vtkGeoTerrain\n\n",
    "vtkGeoTerrain2D contains a multi-resolution tree of geometry\nrepresenting the globe. It uses a vtkGeoSource subclass to generate\nthe terrain, such as vtkGeoProjectionSource. This source must be set\nbefore using the terrain in a vtkGeoView2D. The terrain also contains\nan AddActors() method which updates the set of actors representing\nthe globe given the current camera position.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGeoTerrain2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGeoTerrain2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGeoTerrain2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

