// python wrapper for vtkGeoMath
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
#include "vtkGeoMath.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGeoMath(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGeoMath(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGeoMathNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGeoMathNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkGeoMath_Doc();


static PyObject *
PyvtkGeoMath_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoMath *op = static_cast<vtkGeoMath *>(vp);

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
      tempr = op->vtkGeoMath::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoMath_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoMath *op = static_cast<vtkGeoMath *>(vp);

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
      tempr = op->vtkGeoMath::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoMath_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoMath *op = static_cast<vtkGeoMath *>(vp);

  vtkGeoMath *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGeoMath::NewInstance();
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
PyvtkGeoMath_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGeoMath *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGeoMath::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoMath_EarthRadiusMeters(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "EarthRadiusMeters");

  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkGeoMath::EarthRadiusMeters();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoMath_DistanceSquared(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DistanceSquared");

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    tempr = vtkGeoMath::DistanceSquared(temp0, temp1);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoMath_LongLatAltToRect(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "LongLatAltToRect");

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    vtkGeoMath::LongLatAltToRect(temp0, temp1);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGeoMath_Methods[] = {
  {(char*)"GetClassName", PyvtkGeoMath_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGeoMath_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGeoMath_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGeoMath\nC++: vtkGeoMath *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGeoMath_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGeoMath\nC++: vtkGeoMath *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"EarthRadiusMeters", PyvtkGeoMath_EarthRadiusMeters, 1,
   (char*)"V.EarthRadiusMeters() -> float\nC++: static double EarthRadiusMeters()\n\nReturns the average radius of the earth in meters.\n"},
  {(char*)"DistanceSquared", PyvtkGeoMath_DistanceSquared, 1,
   (char*)"V.DistanceSquared([float, float, float], [float, float, float])\n    -> float\nC++: static double DistanceSquared(double pt0[3], double pt1[3])\n\nReturns the squared distance between two points.\n"},
  {(char*)"LongLatAltToRect", PyvtkGeoMath_LongLatAltToRect, 1,
   (char*)"V.LongLatAltToRect([float, float, float], [float, float, float])\nC++: static void LongLatAltToRect(double lla[3], double rect[3])\n\nConverts a (longitude, latitude, altitude) triple to world\ncoordinates where the center of the earth is at the origin. Units\nare in meters. Note that having altitude realtive to sea level\ncauses issues.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGeoMath_StaticNew()
{
  return vtkGeoMath::New();
}

PyObject *PyVTKClass_vtkGeoMathNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGeoMath_StaticNew,
    PyvtkGeoMath_Methods,
    "vtkGeoMath", modulename,
    NULL, NULL,
    PyvtkGeoMath_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkGeoMath_Doc()
{
  static const char *docstring[] = {
    "vtkGeoMath - Useful geographic calculations\n\n",
    "Superclass: vtkObject\n\n",
    "vtkGeoMath provides some useful geographic calculations.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGeoMath(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGeoMathNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGeoMath", o) != 0)
    {
    Py_DECREF(o);
    }

}

