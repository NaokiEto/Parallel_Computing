// python wrapper for vtkBrownianPoints
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
#include "vtkBrownianPoints.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkBrownianPoints(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkBrownianPoints(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkBrownianPointsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkBrownianPointsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkBrownianPoints_Doc();


static PyObject *
PyvtkBrownianPoints_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrownianPoints *op = static_cast<vtkBrownianPoints *>(vp);

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
      tempr = op->vtkBrownianPoints::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBrownianPoints_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrownianPoints *op = static_cast<vtkBrownianPoints *>(vp);

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
      tempr = op->vtkBrownianPoints::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBrownianPoints_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrownianPoints *op = static_cast<vtkBrownianPoints *>(vp);

  vtkBrownianPoints *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkBrownianPoints::NewInstance();
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
PyvtkBrownianPoints_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkBrownianPoints *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkBrownianPoints::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBrownianPoints_SetMinimumSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrownianPoints *op = static_cast<vtkBrownianPoints *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinimumSpeed(temp0);
      }
    else
      {
      op->vtkBrownianPoints::SetMinimumSpeed(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBrownianPoints_GetMinimumSpeedMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumSpeedMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrownianPoints *op = static_cast<vtkBrownianPoints *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinimumSpeedMinValue();
      }
    else
      {
      tempr = op->vtkBrownianPoints::GetMinimumSpeedMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBrownianPoints_GetMinimumSpeedMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumSpeedMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrownianPoints *op = static_cast<vtkBrownianPoints *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinimumSpeedMaxValue();
      }
    else
      {
      tempr = op->vtkBrownianPoints::GetMinimumSpeedMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBrownianPoints_GetMinimumSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrownianPoints *op = static_cast<vtkBrownianPoints *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinimumSpeed();
      }
    else
      {
      tempr = op->vtkBrownianPoints::GetMinimumSpeed();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBrownianPoints_SetMaximumSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrownianPoints *op = static_cast<vtkBrownianPoints *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumSpeed(temp0);
      }
    else
      {
      op->vtkBrownianPoints::SetMaximumSpeed(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBrownianPoints_GetMaximumSpeedMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumSpeedMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrownianPoints *op = static_cast<vtkBrownianPoints *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumSpeedMinValue();
      }
    else
      {
      tempr = op->vtkBrownianPoints::GetMaximumSpeedMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBrownianPoints_GetMaximumSpeedMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumSpeedMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrownianPoints *op = static_cast<vtkBrownianPoints *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumSpeedMaxValue();
      }
    else
      {
      tempr = op->vtkBrownianPoints::GetMaximumSpeedMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBrownianPoints_GetMaximumSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrownianPoints *op = static_cast<vtkBrownianPoints *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumSpeed();
      }
    else
      {
      tempr = op->vtkBrownianPoints::GetMaximumSpeed();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkBrownianPoints_Methods[] = {
  {(char*)"GetClassName", PyvtkBrownianPoints_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBrownianPoints_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBrownianPoints_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkBrownianPoints\nC++: vtkBrownianPoints *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkBrownianPoints_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBrownianPoints\nC++: vtkBrownianPoints *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetMinimumSpeed", PyvtkBrownianPoints_SetMinimumSpeed, 1,
   (char*)"V.SetMinimumSpeed(float)\nC++: void SetMinimumSpeed(double)\n\nSet the minimum speed value.\n"},
  {(char*)"GetMinimumSpeedMinValue", PyvtkBrownianPoints_GetMinimumSpeedMinValue, 1,
   (char*)"V.GetMinimumSpeedMinValue() -> float\nC++: double GetMinimumSpeedMinValue()\n\nSet the minimum speed value.\n"},
  {(char*)"GetMinimumSpeedMaxValue", PyvtkBrownianPoints_GetMinimumSpeedMaxValue, 1,
   (char*)"V.GetMinimumSpeedMaxValue() -> float\nC++: double GetMinimumSpeedMaxValue()\n\nSet the minimum speed value.\n"},
  {(char*)"GetMinimumSpeed", PyvtkBrownianPoints_GetMinimumSpeed, 1,
   (char*)"V.GetMinimumSpeed() -> float\nC++: double GetMinimumSpeed()\n\nSet the minimum speed value.\n"},
  {(char*)"SetMaximumSpeed", PyvtkBrownianPoints_SetMaximumSpeed, 1,
   (char*)"V.SetMaximumSpeed(float)\nC++: void SetMaximumSpeed(double)\n\nSet the maximum speed value.\n"},
  {(char*)"GetMaximumSpeedMinValue", PyvtkBrownianPoints_GetMaximumSpeedMinValue, 1,
   (char*)"V.GetMaximumSpeedMinValue() -> float\nC++: double GetMaximumSpeedMinValue()\n\nSet the maximum speed value.\n"},
  {(char*)"GetMaximumSpeedMaxValue", PyvtkBrownianPoints_GetMaximumSpeedMaxValue, 1,
   (char*)"V.GetMaximumSpeedMaxValue() -> float\nC++: double GetMaximumSpeedMaxValue()\n\nSet the maximum speed value.\n"},
  {(char*)"GetMaximumSpeed", PyvtkBrownianPoints_GetMaximumSpeed, 1,
   (char*)"V.GetMaximumSpeed() -> float\nC++: double GetMaximumSpeed()\n\nSet the maximum speed value.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBrownianPoints_StaticNew()
{
  return vtkBrownianPoints::New();
}

PyObject *PyVTKClass_vtkBrownianPointsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBrownianPoints_StaticNew,
    PyvtkBrownianPoints_Methods,
    "vtkBrownianPoints", modulename,
    NULL, NULL,
    PyvtkBrownianPoints_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkBrownianPoints_Doc()
{
  static const char *docstring[] = {
    "vtkBrownianPoints - assign random vector to points\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkBrownianPoints is a filter object that assigns a random vector\n(i.e., magnitude and direction) to each point. The minimum and\nmaximum speed values can be controlled by the user.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBrownianPoints(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBrownianPointsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBrownianPoints", o) != 0)
    {
    Py_DECREF(o);
    }

}

