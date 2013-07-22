// python wrapper for vtkGeoAssignCoordinates
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
#include "vtkGeoAssignCoordinates.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGeoAssignCoordinates(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGeoAssignCoordinates(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGeoAssignCoordinatesNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGeoAssignCoordinatesNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPassInputTypeAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPassInputTypeAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPassInputTypeAlgorithmNew
#endif

static const char **PyvtkGeoAssignCoordinates_Doc();


static PyObject *
PyvtkGeoAssignCoordinates_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAssignCoordinates *op = static_cast<vtkGeoAssignCoordinates *>(vp);

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
      tempr = op->vtkGeoAssignCoordinates::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoAssignCoordinates_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAssignCoordinates *op = static_cast<vtkGeoAssignCoordinates *>(vp);

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
      tempr = op->vtkGeoAssignCoordinates::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoAssignCoordinates_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAssignCoordinates *op = static_cast<vtkGeoAssignCoordinates *>(vp);

  vtkGeoAssignCoordinates *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGeoAssignCoordinates::NewInstance();
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
PyvtkGeoAssignCoordinates_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGeoAssignCoordinates *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGeoAssignCoordinates::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoAssignCoordinates_SetLongitudeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLongitudeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAssignCoordinates *op = static_cast<vtkGeoAssignCoordinates *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLongitudeArrayName(temp0);
      }
    else
      {
      op->vtkGeoAssignCoordinates::SetLongitudeArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoAssignCoordinates_GetLongitudeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLongitudeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAssignCoordinates *op = static_cast<vtkGeoAssignCoordinates *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLongitudeArrayName();
      }
    else
      {
      tempr = op->vtkGeoAssignCoordinates::GetLongitudeArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoAssignCoordinates_SetLatitudeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLatitudeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAssignCoordinates *op = static_cast<vtkGeoAssignCoordinates *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLatitudeArrayName(temp0);
      }
    else
      {
      op->vtkGeoAssignCoordinates::SetLatitudeArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoAssignCoordinates_GetLatitudeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLatitudeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAssignCoordinates *op = static_cast<vtkGeoAssignCoordinates *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLatitudeArrayName();
      }
    else
      {
      tempr = op->vtkGeoAssignCoordinates::GetLatitudeArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoAssignCoordinates_SetGlobeRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlobeRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAssignCoordinates *op = static_cast<vtkGeoAssignCoordinates *>(vp);

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
      op->vtkGeoAssignCoordinates::SetGlobeRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoAssignCoordinates_GetGlobeRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobeRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAssignCoordinates *op = static_cast<vtkGeoAssignCoordinates *>(vp);

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
      tempr = op->vtkGeoAssignCoordinates::GetGlobeRadius();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoAssignCoordinates_SetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAssignCoordinates *op = static_cast<vtkGeoAssignCoordinates *>(vp);

  vtkAbstractTransform *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
    {
    if (ap.IsBound())
      {
      op->SetTransform(temp0);
      }
    else
      {
      op->vtkGeoAssignCoordinates::SetTransform(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoAssignCoordinates_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAssignCoordinates *op = static_cast<vtkGeoAssignCoordinates *>(vp);

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
      tempr = op->vtkGeoAssignCoordinates::GetTransform();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoAssignCoordinates_SetCoordinatesInArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordinatesInArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAssignCoordinates *op = static_cast<vtkGeoAssignCoordinates *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCoordinatesInArrays(temp0);
      }
    else
      {
      op->vtkGeoAssignCoordinates::SetCoordinatesInArrays(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoAssignCoordinates_GetCoordinatesInArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesInArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAssignCoordinates *op = static_cast<vtkGeoAssignCoordinates *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCoordinatesInArrays();
      }
    else
      {
      tempr = op->vtkGeoAssignCoordinates::GetCoordinatesInArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoAssignCoordinates_CoordinatesInArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CoordinatesInArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAssignCoordinates *op = static_cast<vtkGeoAssignCoordinates *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CoordinatesInArraysOn();
      }
    else
      {
      op->vtkGeoAssignCoordinates::CoordinatesInArraysOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoAssignCoordinates_CoordinatesInArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CoordinatesInArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAssignCoordinates *op = static_cast<vtkGeoAssignCoordinates *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CoordinatesInArraysOff();
      }
    else
      {
      op->vtkGeoAssignCoordinates::CoordinatesInArraysOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGeoAssignCoordinates_Methods[] = {
  {(char*)"GetClassName", PyvtkGeoAssignCoordinates_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGeoAssignCoordinates_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGeoAssignCoordinates_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGeoAssignCoordinates\nC++: vtkGeoAssignCoordinates *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGeoAssignCoordinates_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGeoAssignCoordinates\nC++: vtkGeoAssignCoordinates *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetLongitudeArrayName", PyvtkGeoAssignCoordinates_SetLongitudeArrayName, 1,
   (char*)"V.SetLongitudeArrayName(string)\nC++: void SetLongitudeArrayName(char *)\n\nSet the longitude coordinate array name.\n"},
  {(char*)"GetLongitudeArrayName", PyvtkGeoAssignCoordinates_GetLongitudeArrayName, 1,
   (char*)"V.GetLongitudeArrayName() -> string\nC++: char *GetLongitudeArrayName()\n\nSet the longitude coordinate array name.\n"},
  {(char*)"SetLatitudeArrayName", PyvtkGeoAssignCoordinates_SetLatitudeArrayName, 1,
   (char*)"V.SetLatitudeArrayName(string)\nC++: void SetLatitudeArrayName(char *)\n\nSet the latitude coordinate array name.\n"},
  {(char*)"GetLatitudeArrayName", PyvtkGeoAssignCoordinates_GetLatitudeArrayName, 1,
   (char*)"V.GetLatitudeArrayName() -> string\nC++: char *GetLatitudeArrayName()\n\nSet the latitude coordinate array name.\n"},
  {(char*)"SetGlobeRadius", PyvtkGeoAssignCoordinates_SetGlobeRadius, 1,
   (char*)"V.SetGlobeRadius(float)\nC++: void SetGlobeRadius(double a)\n\nThe base radius to use in GLOBAL mode. Default is the earth's\nradius.\n"},
  {(char*)"GetGlobeRadius", PyvtkGeoAssignCoordinates_GetGlobeRadius, 1,
   (char*)"V.GetGlobeRadius() -> float\nC++: double GetGlobeRadius()\n\nThe base radius to use in GLOBAL mode. Default is the earth's\nradius.\n"},
  {(char*)"SetTransform", PyvtkGeoAssignCoordinates_SetTransform, 1,
   (char*)"V.SetTransform(vtkAbstractTransform)\nC++: virtual void SetTransform(vtkAbstractTransform *trans)\n\nThe transform to use to convert coordinates of the form (lat,\nlong, 0) to (x, y z). If this is NULL (the default), use\nGlobeRadius to perform a spherical embedding.\n"},
  {(char*)"GetTransform", PyvtkGeoAssignCoordinates_GetTransform, 1,
   (char*)"V.GetTransform() -> vtkAbstractTransform\nC++: vtkAbstractTransform *GetTransform()\n\nThe transform to use to convert coordinates of the form (lat,\nlong, 0) to (x, y z). If this is NULL (the default), use\nGlobeRadius to perform a spherical embedding.\n"},
  {(char*)"SetCoordinatesInArrays", PyvtkGeoAssignCoordinates_SetCoordinatesInArrays, 1,
   (char*)"V.SetCoordinatesInArrays(bool)\nC++: void SetCoordinatesInArrays(bool a)\n\nIf on, uses LatitudeArrayName and LongitudeArrayName to move\nvalues in data arrays into the points of the data set. Turn off\nif the lattitude and longitude are already in the points.\n"},
  {(char*)"GetCoordinatesInArrays", PyvtkGeoAssignCoordinates_GetCoordinatesInArrays, 1,
   (char*)"V.GetCoordinatesInArrays() -> bool\nC++: bool GetCoordinatesInArrays()\n\nIf on, uses LatitudeArrayName and LongitudeArrayName to move\nvalues in data arrays into the points of the data set. Turn off\nif the lattitude and longitude are already in the points.\n"},
  {(char*)"CoordinatesInArraysOn", PyvtkGeoAssignCoordinates_CoordinatesInArraysOn, 1,
   (char*)"V.CoordinatesInArraysOn()\nC++: void CoordinatesInArraysOn()\n\nIf on, uses LatitudeArrayName and LongitudeArrayName to move\nvalues in data arrays into the points of the data set. Turn off\nif the lattitude and longitude are already in the points.\n"},
  {(char*)"CoordinatesInArraysOff", PyvtkGeoAssignCoordinates_CoordinatesInArraysOff, 1,
   (char*)"V.CoordinatesInArraysOff()\nC++: void CoordinatesInArraysOff()\n\nIf on, uses LatitudeArrayName and LongitudeArrayName to move\nvalues in data arrays into the points of the data set. Turn off\nif the lattitude and longitude are already in the points.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGeoAssignCoordinates_StaticNew()
{
  return vtkGeoAssignCoordinates::New();
}

PyObject *PyVTKClass_vtkGeoAssignCoordinatesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGeoAssignCoordinates_StaticNew,
    PyvtkGeoAssignCoordinates_Methods,
    "vtkGeoAssignCoordinates", modulename,
    NULL, NULL,
    PyvtkGeoAssignCoordinates_Doc(),
    PyVTKClass_vtkPassInputTypeAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkGeoAssignCoordinates_Doc()
{
  static const char *docstring[] = {
    "vtkGeoAssignCoordinates - Given latitude and longitude arrays, \n\n",
    "Superclass: vtkPassInputTypeAlgorithm\n\n",
    "Givem latitude and longitude arrays, take the values in those arrays\nand convert them to x,y,z world coordinates. Uses a spherical model\nof the earth to do the conversion. The position is in meters relative\nto the center of the earth.\n\nIf a transform is given, use the transform to convert latitude and\nlongitude to the world coordinate.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGeoAssignCoordinates(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGeoAssignCoordinatesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGeoAssignCoordinates", o) != 0)
    {
    Py_DECREF(o);
    }

}

