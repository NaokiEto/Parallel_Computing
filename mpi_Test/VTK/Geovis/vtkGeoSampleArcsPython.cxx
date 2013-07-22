// python wrapper for vtkGeoSampleArcs
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
#include "vtkGeoSampleArcs.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGeoSampleArcs(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGeoSampleArcs(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGeoSampleArcsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGeoSampleArcsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkGeoSampleArcs_Doc();


static PyObject *
PyvtkGeoSampleArcs_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoSampleArcs *op = static_cast<vtkGeoSampleArcs *>(vp);

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
      tempr = op->vtkGeoSampleArcs::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoSampleArcs_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoSampleArcs *op = static_cast<vtkGeoSampleArcs *>(vp);

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
      tempr = op->vtkGeoSampleArcs::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoSampleArcs_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoSampleArcs *op = static_cast<vtkGeoSampleArcs *>(vp);

  vtkGeoSampleArcs *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGeoSampleArcs::NewInstance();
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
PyvtkGeoSampleArcs_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGeoSampleArcs *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGeoSampleArcs::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoSampleArcs_SetGlobeRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlobeRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoSampleArcs *op = static_cast<vtkGeoSampleArcs *>(vp);

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
      op->vtkGeoSampleArcs::SetGlobeRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoSampleArcs_GetGlobeRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobeRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoSampleArcs *op = static_cast<vtkGeoSampleArcs *>(vp);

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
      tempr = op->vtkGeoSampleArcs::GetGlobeRadius();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoSampleArcs_SetMaximumDistanceMeters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumDistanceMeters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoSampleArcs *op = static_cast<vtkGeoSampleArcs *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumDistanceMeters(temp0);
      }
    else
      {
      op->vtkGeoSampleArcs::SetMaximumDistanceMeters(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoSampleArcs_GetMaximumDistanceMeters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumDistanceMeters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoSampleArcs *op = static_cast<vtkGeoSampleArcs *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumDistanceMeters();
      }
    else
      {
      tempr = op->vtkGeoSampleArcs::GetMaximumDistanceMeters();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoSampleArcs_SetInputCoordinateSystem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputCoordinateSystem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoSampleArcs *op = static_cast<vtkGeoSampleArcs *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInputCoordinateSystem(temp0);
      }
    else
      {
      op->vtkGeoSampleArcs::SetInputCoordinateSystem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoSampleArcs_GetInputCoordinateSystem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputCoordinateSystem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoSampleArcs *op = static_cast<vtkGeoSampleArcs *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInputCoordinateSystem();
      }
    else
      {
      tempr = op->vtkGeoSampleArcs::GetInputCoordinateSystem();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoSampleArcs_SetInputCoordinateSystemToRectangular(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputCoordinateSystemToRectangular");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoSampleArcs *op = static_cast<vtkGeoSampleArcs *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInputCoordinateSystemToRectangular();
      }
    else
      {
      op->vtkGeoSampleArcs::SetInputCoordinateSystemToRectangular();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoSampleArcs_SetInputCoordinateSystemToSpherical(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputCoordinateSystemToSpherical");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoSampleArcs *op = static_cast<vtkGeoSampleArcs *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInputCoordinateSystemToSpherical();
      }
    else
      {
      op->vtkGeoSampleArcs::SetInputCoordinateSystemToSpherical();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoSampleArcs_SetOutputCoordinateSystem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputCoordinateSystem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoSampleArcs *op = static_cast<vtkGeoSampleArcs *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputCoordinateSystem(temp0);
      }
    else
      {
      op->vtkGeoSampleArcs::SetOutputCoordinateSystem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoSampleArcs_GetOutputCoordinateSystem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputCoordinateSystem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoSampleArcs *op = static_cast<vtkGeoSampleArcs *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputCoordinateSystem();
      }
    else
      {
      tempr = op->vtkGeoSampleArcs::GetOutputCoordinateSystem();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoSampleArcs_SetOutputCoordinateSystemToRectangular(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputCoordinateSystemToRectangular");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoSampleArcs *op = static_cast<vtkGeoSampleArcs *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputCoordinateSystemToRectangular();
      }
    else
      {
      op->vtkGeoSampleArcs::SetOutputCoordinateSystemToRectangular();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoSampleArcs_SetOutputCoordinateSystemToSpherical(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputCoordinateSystemToSpherical");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoSampleArcs *op = static_cast<vtkGeoSampleArcs *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputCoordinateSystemToSpherical();
      }
    else
      {
      op->vtkGeoSampleArcs::SetOutputCoordinateSystemToSpherical();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGeoSampleArcs_Methods[] = {
  {(char*)"GetClassName", PyvtkGeoSampleArcs_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGeoSampleArcs_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGeoSampleArcs_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGeoSampleArcs\nC++: vtkGeoSampleArcs *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGeoSampleArcs_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGeoSampleArcs\nC++: vtkGeoSampleArcs *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetGlobeRadius", PyvtkGeoSampleArcs_SetGlobeRadius, 1,
   (char*)"V.SetGlobeRadius(float)\nC++: void SetGlobeRadius(double a)\n\nThe base radius used to determine the earth's surface. Default is\nthe earth's radius in meters. TODO: Change this to take in a\nvtkGeoTerrain to get altitude.\n"},
  {(char*)"GetGlobeRadius", PyvtkGeoSampleArcs_GetGlobeRadius, 1,
   (char*)"V.GetGlobeRadius() -> float\nC++: double GetGlobeRadius()\n\nThe base radius used to determine the earth's surface. Default is\nthe earth's radius in meters. TODO: Change this to take in a\nvtkGeoTerrain to get altitude.\n"},
  {(char*)"SetMaximumDistanceMeters", PyvtkGeoSampleArcs_SetMaximumDistanceMeters, 1,
   (char*)"V.SetMaximumDistanceMeters(float)\nC++: void SetMaximumDistanceMeters(double a)\n\nThe maximum distance, in meters, between adjacent points.\n"},
  {(char*)"GetMaximumDistanceMeters", PyvtkGeoSampleArcs_GetMaximumDistanceMeters, 1,
   (char*)"V.GetMaximumDistanceMeters() -> float\nC++: double GetMaximumDistanceMeters()\n\nThe maximum distance, in meters, between adjacent points.\n"},
  {(char*)"SetInputCoordinateSystem", PyvtkGeoSampleArcs_SetInputCoordinateSystem, 1,
   (char*)"V.SetInputCoordinateSystem(int)\nC++: void SetInputCoordinateSystem(int a)\n\nThe input coordinate system. RECTANGULAR is x,y,z meters relative\nthe the earth center. SPHERICAL is longitude,latitude,altitude.\n"},
  {(char*)"GetInputCoordinateSystem", PyvtkGeoSampleArcs_GetInputCoordinateSystem, 1,
   (char*)"V.GetInputCoordinateSystem() -> int\nC++: int GetInputCoordinateSystem()\n\nThe input coordinate system. RECTANGULAR is x,y,z meters relative\nthe the earth center. SPHERICAL is longitude,latitude,altitude.\n"},
  {(char*)"SetInputCoordinateSystemToRectangular", PyvtkGeoSampleArcs_SetInputCoordinateSystemToRectangular, 1,
   (char*)"V.SetInputCoordinateSystemToRectangular()\nC++: virtual void SetInputCoordinateSystemToRectangular()\n\nThe input coordinate system. RECTANGULAR is x,y,z meters relative\nthe the earth center. SPHERICAL is longitude,latitude,altitude.\n"},
  {(char*)"SetInputCoordinateSystemToSpherical", PyvtkGeoSampleArcs_SetInputCoordinateSystemToSpherical, 1,
   (char*)"V.SetInputCoordinateSystemToSpherical()\nC++: virtual void SetInputCoordinateSystemToSpherical()\n\nThe input coordinate system. RECTANGULAR is x,y,z meters relative\nthe the earth center. SPHERICAL is longitude,latitude,altitude.\n"},
  {(char*)"SetOutputCoordinateSystem", PyvtkGeoSampleArcs_SetOutputCoordinateSystem, 1,
   (char*)"V.SetOutputCoordinateSystem(int)\nC++: void SetOutputCoordinateSystem(int a)\n\nThe desired output coordinate system. RECTANGULAR is x,y,z meters\nrelative the the earth center. SPHERICAL is\nlongitude,latitude,altitude.\n"},
  {(char*)"GetOutputCoordinateSystem", PyvtkGeoSampleArcs_GetOutputCoordinateSystem, 1,
   (char*)"V.GetOutputCoordinateSystem() -> int\nC++: int GetOutputCoordinateSystem()\n\nThe desired output coordinate system. RECTANGULAR is x,y,z meters\nrelative the the earth center. SPHERICAL is\nlongitude,latitude,altitude.\n"},
  {(char*)"SetOutputCoordinateSystemToRectangular", PyvtkGeoSampleArcs_SetOutputCoordinateSystemToRectangular, 1,
   (char*)"V.SetOutputCoordinateSystemToRectangular()\nC++: virtual void SetOutputCoordinateSystemToRectangular()\n\nThe desired output coordinate system. RECTANGULAR is x,y,z meters\nrelative the the earth center. SPHERICAL is\nlongitude,latitude,altitude.\n"},
  {(char*)"SetOutputCoordinateSystemToSpherical", PyvtkGeoSampleArcs_SetOutputCoordinateSystemToSpherical, 1,
   (char*)"V.SetOutputCoordinateSystemToSpherical()\nC++: virtual void SetOutputCoordinateSystemToSpherical()\n\nThe desired output coordinate system. RECTANGULAR is x,y,z meters\nrelative the the earth center. SPHERICAL is\nlongitude,latitude,altitude.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGeoSampleArcs_StaticNew()
{
  return vtkGeoSampleArcs::New();
}

PyObject *PyVTKClass_vtkGeoSampleArcsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGeoSampleArcs_StaticNew,
    PyvtkGeoSampleArcs_Methods,
    "vtkGeoSampleArcs", modulename,
    NULL, NULL,
    PyvtkGeoSampleArcs_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"RECTANGULAR", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"SPHERICAL", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkGeoSampleArcs_Doc()
{
  static const char *docstring[] = {
    "vtkGeoSampleArcs - Samples geospatial lines at regular intervals.\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkGeoSampleArcs refines lines in the input polygonal data so that\nthe distance between adjacent points is no more than a threshold\ndistance. Points are interpolated along the surface of the globe.\nThis is useful in order to keep lines such as political boundaries\nfrom intersecting the globe and becoming invisible.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGeoSampleArcs(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGeoSampleArcsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGeoSampleArcs", o) != 0)
    {
    Py_DECREF(o);
    }

}

