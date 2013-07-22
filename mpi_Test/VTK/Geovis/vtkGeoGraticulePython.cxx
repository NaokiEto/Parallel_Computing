// python wrapper for vtkGeoGraticule
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
#include "vtkGeoGraticule.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGeoGraticule(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGeoGraticule(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGeoGraticuleNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGeoGraticuleNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkGeoGraticule_Doc();


static PyObject *
PyvtkGeoGraticule_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoGraticule *op = static_cast<vtkGeoGraticule *>(vp);

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
      tempr = op->vtkGeoGraticule::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoGraticule_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoGraticule *op = static_cast<vtkGeoGraticule *>(vp);

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
      tempr = op->vtkGeoGraticule::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoGraticule_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoGraticule *op = static_cast<vtkGeoGraticule *>(vp);

  vtkGeoGraticule *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGeoGraticule::NewInstance();
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
PyvtkGeoGraticule_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGeoGraticule *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGeoGraticule::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoGraticule_SetLatitudeBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLatitudeBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoGraticule *op = static_cast<vtkGeoGraticule *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetLatitudeBounds(temp0, temp1);
      }
    else
      {
      op->vtkGeoGraticule::SetLatitudeBounds(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGeoGraticule_SetLatitudeBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLatitudeBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoGraticule *op = static_cast<vtkGeoGraticule *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetLatitudeBounds(temp0);
      }
    else
      {
      op->vtkGeoGraticule::SetLatitudeBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGeoGraticule_SetLatitudeBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkGeoGraticule_SetLatitudeBounds_s1(self, args);
    case 1:
      return PyvtkGeoGraticule_SetLatitudeBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetLatitudeBounds");
  return NULL;
}



static PyObject *
PyvtkGeoGraticule_GetLatitudeBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLatitudeBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoGraticule *op = static_cast<vtkGeoGraticule *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLatitudeBounds();
      }
    else
      {
      tempr = op->vtkGeoGraticule::GetLatitudeBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoGraticule_SetLongitudeBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLongitudeBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoGraticule *op = static_cast<vtkGeoGraticule *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetLongitudeBounds(temp0, temp1);
      }
    else
      {
      op->vtkGeoGraticule::SetLongitudeBounds(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGeoGraticule_SetLongitudeBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLongitudeBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoGraticule *op = static_cast<vtkGeoGraticule *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetLongitudeBounds(temp0);
      }
    else
      {
      op->vtkGeoGraticule::SetLongitudeBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGeoGraticule_SetLongitudeBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkGeoGraticule_SetLongitudeBounds_s1(self, args);
    case 1:
      return PyvtkGeoGraticule_SetLongitudeBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetLongitudeBounds");
  return NULL;
}



static PyObject *
PyvtkGeoGraticule_GetLongitudeBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLongitudeBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoGraticule *op = static_cast<vtkGeoGraticule *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLongitudeBounds();
      }
    else
      {
      tempr = op->vtkGeoGraticule::GetLongitudeBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoGraticule_SetLatitudeLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLatitudeLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoGraticule *op = static_cast<vtkGeoGraticule *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLatitudeLevel(temp0);
      }
    else
      {
      op->vtkGeoGraticule::SetLatitudeLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoGraticule_GetLatitudeLevelMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLatitudeLevelMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoGraticule *op = static_cast<vtkGeoGraticule *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLatitudeLevelMinValue();
      }
    else
      {
      tempr = op->vtkGeoGraticule::GetLatitudeLevelMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoGraticule_GetLatitudeLevelMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLatitudeLevelMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoGraticule *op = static_cast<vtkGeoGraticule *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLatitudeLevelMaxValue();
      }
    else
      {
      tempr = op->vtkGeoGraticule::GetLatitudeLevelMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoGraticule_GetLatitudeLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLatitudeLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoGraticule *op = static_cast<vtkGeoGraticule *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLatitudeLevel();
      }
    else
      {
      tempr = op->vtkGeoGraticule::GetLatitudeLevel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoGraticule_SetLongitudeLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLongitudeLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoGraticule *op = static_cast<vtkGeoGraticule *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLongitudeLevel(temp0);
      }
    else
      {
      op->vtkGeoGraticule::SetLongitudeLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoGraticule_GetLongitudeLevelMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLongitudeLevelMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoGraticule *op = static_cast<vtkGeoGraticule *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLongitudeLevelMinValue();
      }
    else
      {
      tempr = op->vtkGeoGraticule::GetLongitudeLevelMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoGraticule_GetLongitudeLevelMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLongitudeLevelMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoGraticule *op = static_cast<vtkGeoGraticule *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLongitudeLevelMaxValue();
      }
    else
      {
      tempr = op->vtkGeoGraticule::GetLongitudeLevelMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoGraticule_GetLongitudeLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLongitudeLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoGraticule *op = static_cast<vtkGeoGraticule *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLongitudeLevel();
      }
    else
      {
      tempr = op->vtkGeoGraticule::GetLongitudeLevel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoGraticule_GetLatitudeDelta(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetLatitudeDelta");

  int temp0;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkGeoGraticule::GetLatitudeDelta(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoGraticule_GetLongitudeDelta(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetLongitudeDelta");

  int temp0;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkGeoGraticule::GetLongitudeDelta(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoGraticule_SetGeometryType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeometryType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoGraticule *op = static_cast<vtkGeoGraticule *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGeometryType(temp0);
      }
    else
      {
      op->vtkGeoGraticule::SetGeometryType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoGraticule_GetGeometryType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeometryType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoGraticule *op = static_cast<vtkGeoGraticule *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGeometryType();
      }
    else
      {
      tempr = op->vtkGeoGraticule::GetGeometryType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGeoGraticule_Methods[] = {
  {(char*)"GetClassName", PyvtkGeoGraticule_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGeoGraticule_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGeoGraticule_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGeoGraticule\nC++: vtkGeoGraticule *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGeoGraticule_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGeoGraticule\nC++: vtkGeoGraticule *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetLatitudeBounds", PyvtkGeoGraticule_SetLatitudeBounds, 1,
   (char*)"V.SetLatitudeBounds(float, float)\nC++: void SetLatitudeBounds(double, double)\nV.SetLatitudeBounds((float, float))\nC++: void SetLatitudeBounds(double a[2])\n\n"},
  {(char*)"GetLatitudeBounds", PyvtkGeoGraticule_GetLatitudeBounds, 1,
   (char*)"V.GetLatitudeBounds() -> (float, float)\nC++: double *GetLatitudeBounds()\n\n"},
  {(char*)"SetLongitudeBounds", PyvtkGeoGraticule_SetLongitudeBounds, 1,
   (char*)"V.SetLongitudeBounds(float, float)\nC++: void SetLongitudeBounds(double, double)\nV.SetLongitudeBounds((float, float))\nC++: void SetLongitudeBounds(double a[2])\n\n"},
  {(char*)"GetLongitudeBounds", PyvtkGeoGraticule_GetLongitudeBounds, 1,
   (char*)"V.GetLongitudeBounds() -> (float, float)\nC++: double *GetLongitudeBounds()\n\n"},
  {(char*)"SetLatitudeLevel", PyvtkGeoGraticule_SetLatitudeLevel, 1,
   (char*)"V.SetLatitudeLevel(int)\nC++: void SetLatitudeLevel(int)\n\nThe frequency level of latitude lines.\n"},
  {(char*)"GetLatitudeLevelMinValue", PyvtkGeoGraticule_GetLatitudeLevelMinValue, 1,
   (char*)"V.GetLatitudeLevelMinValue() -> int\nC++: int GetLatitudeLevelMinValue()\n\nThe frequency level of latitude lines.\n"},
  {(char*)"GetLatitudeLevelMaxValue", PyvtkGeoGraticule_GetLatitudeLevelMaxValue, 1,
   (char*)"V.GetLatitudeLevelMaxValue() -> int\nC++: int GetLatitudeLevelMaxValue()\n\nThe frequency level of latitude lines.\n"},
  {(char*)"GetLatitudeLevel", PyvtkGeoGraticule_GetLatitudeLevel, 1,
   (char*)"V.GetLatitudeLevel() -> int\nC++: int GetLatitudeLevel()\n\nThe frequency level of latitude lines.\n"},
  {(char*)"SetLongitudeLevel", PyvtkGeoGraticule_SetLongitudeLevel, 1,
   (char*)"V.SetLongitudeLevel(int)\nC++: void SetLongitudeLevel(int)\n\nThe frequency level of longitude lines.\n"},
  {(char*)"GetLongitudeLevelMinValue", PyvtkGeoGraticule_GetLongitudeLevelMinValue, 1,
   (char*)"V.GetLongitudeLevelMinValue() -> int\nC++: int GetLongitudeLevelMinValue()\n\nThe frequency level of longitude lines.\n"},
  {(char*)"GetLongitudeLevelMaxValue", PyvtkGeoGraticule_GetLongitudeLevelMaxValue, 1,
   (char*)"V.GetLongitudeLevelMaxValue() -> int\nC++: int GetLongitudeLevelMaxValue()\n\nThe frequency level of longitude lines.\n"},
  {(char*)"GetLongitudeLevel", PyvtkGeoGraticule_GetLongitudeLevel, 1,
   (char*)"V.GetLongitudeLevel() -> int\nC++: int GetLongitudeLevel()\n\nThe frequency level of longitude lines.\n"},
  {(char*)"GetLatitudeDelta", PyvtkGeoGraticule_GetLatitudeDelta, 1,
   (char*)"V.GetLatitudeDelta(int) -> float\nC++: static double GetLatitudeDelta(int level)\n\nThe latitude delta at a certain frequency level.\n"},
  {(char*)"GetLongitudeDelta", PyvtkGeoGraticule_GetLongitudeDelta, 1,
   (char*)"V.GetLongitudeDelta(int) -> float\nC++: static double GetLongitudeDelta(int level)\n\nThe longitude delta at a certain frequency level.\n"},
  {(char*)"SetGeometryType", PyvtkGeoGraticule_SetGeometryType, 1,
   (char*)"V.SetGeometryType(int)\nC++: void SetGeometryType(int a)\n\nSet//get the type(s) of cells that will be output by the filter.\nBy default, polylines are output. You may also request\nquadrilaterals. This is a bit vector of GeometryType enums.\n"},
  {(char*)"GetGeometryType", PyvtkGeoGraticule_GetGeometryType, 1,
   (char*)"V.GetGeometryType() -> int\nC++: int GetGeometryType()\n\nSet//get the type(s) of cells that will be output by the filter.\nBy default, polylines are output. You may also request\nquadrilaterals. This is a bit vector of GeometryType enums.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGeoGraticule_StaticNew()
{
  return vtkGeoGraticule::New();
}

PyObject *PyVTKClass_vtkGeoGraticuleNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGeoGraticule_StaticNew,
    PyvtkGeoGraticule_Methods,
    "vtkGeoGraticule", modulename,
    NULL, NULL,
    PyvtkGeoGraticule_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"LEVEL_MIN", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(11);
    if (o && PyDict_SetItemString(d, (char *)"LEVEL_MAX", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong((vtkGeoGraticule::LEVEL_MAX - vtkGeoGraticule::LEVEL_MIN + 1));
    if (o && PyDict_SetItemString(d, (char *)"NUMBER_OF_LEVELS", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0x1);
    if (o && PyDict_SetItemString(d, (char *)"POLYLINES", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0x2);
    if (o && PyDict_SetItemString(d, (char *)"QUADRILATERALS", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkGeoGraticule_Doc()
{
  static const char *docstring[] = {
    "vtkGeoGraticule - Create a polygonal lat-long grid\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "This filter generates polydata to illustrate the distortions\nintroduced by a map projection. The level parameter specifies the\nnumber of lines to be drawn. Poles are treated differently than other\nregions; hence the use of a Level parameter instead of a\nNumberOfLines parameter. The latitude and longitude are specified as\nhalf-open intervals with units of degrees. By default the latitude\nbounds are",
    " [-90,90[ and the longitude bounds are [0,180[.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGeoGraticule(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGeoGraticuleNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGeoGraticule", o) != 0)
    {
    Py_DECREF(o);
    }

}

