// python wrapper for vtkGeoCamera
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
#include "vtkGeoCamera.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGeoCamera(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGeoCamera(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGeoCameraNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGeoCameraNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkGeoCamera_Doc();


static PyObject *
PyvtkGeoCamera_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoCamera *op = static_cast<vtkGeoCamera *>(vp);

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
      tempr = op->vtkGeoCamera::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoCamera_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoCamera *op = static_cast<vtkGeoCamera *>(vp);

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
      tempr = op->vtkGeoCamera::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoCamera_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoCamera *op = static_cast<vtkGeoCamera *>(vp);

  vtkGeoCamera *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGeoCamera::NewInstance();
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
PyvtkGeoCamera_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGeoCamera *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGeoCamera::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoCamera_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoCamera *op = static_cast<vtkGeoCamera *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPosition();
      }
    else
      {
      tempr = op->vtkGeoCamera::GetPosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoCamera_SetLongitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLongitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoCamera *op = static_cast<vtkGeoCamera *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLongitude(temp0);
      }
    else
      {
      op->vtkGeoCamera::SetLongitude(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoCamera_GetLongitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLongitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoCamera *op = static_cast<vtkGeoCamera *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLongitude();
      }
    else
      {
      tempr = op->vtkGeoCamera::GetLongitude();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoCamera_SetLatitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLatitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoCamera *op = static_cast<vtkGeoCamera *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLatitude(temp0);
      }
    else
      {
      op->vtkGeoCamera::SetLatitude(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoCamera_GetLatitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLatitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoCamera *op = static_cast<vtkGeoCamera *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLatitude();
      }
    else
      {
      tempr = op->vtkGeoCamera::GetLatitude();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoCamera_SetDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoCamera *op = static_cast<vtkGeoCamera *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDistance(temp0);
      }
    else
      {
      op->vtkGeoCamera::SetDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoCamera_GetDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoCamera *op = static_cast<vtkGeoCamera *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDistance();
      }
    else
      {
      tempr = op->vtkGeoCamera::GetDistance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoCamera_SetHeading(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeading");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoCamera *op = static_cast<vtkGeoCamera *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHeading(temp0);
      }
    else
      {
      op->vtkGeoCamera::SetHeading(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoCamera_GetHeading(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeading");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoCamera *op = static_cast<vtkGeoCamera *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHeading();
      }
    else
      {
      tempr = op->vtkGeoCamera::GetHeading();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoCamera_SetTilt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTilt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoCamera *op = static_cast<vtkGeoCamera *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTilt(temp0);
      }
    else
      {
      op->vtkGeoCamera::SetTilt(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoCamera_GetTilt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTilt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoCamera *op = static_cast<vtkGeoCamera *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTilt();
      }
    else
      {
      tempr = op->vtkGeoCamera::GetTilt();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoCamera_GetVTKCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVTKCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoCamera *op = static_cast<vtkGeoCamera *>(vp);

  vtkCamera *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVTKCamera();
      }
    else
      {
      tempr = op->vtkGeoCamera::GetVTKCamera();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoCamera_InitializeNodeAnalysis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeNodeAnalysis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoCamera *op = static_cast<vtkGeoCamera *>(vp);

  int temp0[2];
  int save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->InitializeNodeAnalysis(temp0);
      }
    else
      {
      op->vtkGeoCamera::InitializeNodeAnalysis(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoCamera_GetNodeCoverage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeCoverage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoCamera *op = static_cast<vtkGeoCamera *>(vp);

  vtkGeoTerrainNode *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGeoTerrainNode"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNodeCoverage(temp0);
      }
    else
      {
      tempr = op->vtkGeoCamera::GetNodeCoverage(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoCamera_GetLockHeading(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLockHeading");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoCamera *op = static_cast<vtkGeoCamera *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLockHeading();
      }
    else
      {
      tempr = op->vtkGeoCamera::GetLockHeading();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoCamera_SetLockHeading(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLockHeading");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoCamera *op = static_cast<vtkGeoCamera *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLockHeading(temp0);
      }
    else
      {
      op->vtkGeoCamera::SetLockHeading(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoCamera_LockHeadingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LockHeadingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoCamera *op = static_cast<vtkGeoCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LockHeadingOn();
      }
    else
      {
      op->vtkGeoCamera::LockHeadingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoCamera_LockHeadingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LockHeadingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoCamera *op = static_cast<vtkGeoCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LockHeadingOff();
      }
    else
      {
      op->vtkGeoCamera::LockHeadingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoCamera_SetOriginLatitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginLatitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoCamera *op = static_cast<vtkGeoCamera *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOriginLatitude(temp0);
      }
    else
      {
      op->vtkGeoCamera::SetOriginLatitude(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoCamera_GetOriginLatitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginLatitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoCamera *op = static_cast<vtkGeoCamera *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOriginLatitude();
      }
    else
      {
      tempr = op->vtkGeoCamera::GetOriginLatitude();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoCamera_SetOriginLongitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginLongitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoCamera *op = static_cast<vtkGeoCamera *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOriginLongitude(temp0);
      }
    else
      {
      op->vtkGeoCamera::SetOriginLongitude(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoCamera_GetOriginLongitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginLongitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoCamera *op = static_cast<vtkGeoCamera *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOriginLongitude();
      }
    else
      {
      tempr = op->vtkGeoCamera::GetOriginLongitude();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoCamera_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoCamera *op = static_cast<vtkGeoCamera *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOrigin();
      }
    else
      {
      tempr = op->vtkGeoCamera::GetOrigin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoCamera_SetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoCamera *op = static_cast<vtkGeoCamera *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetOrigin(temp0, temp1, temp2);
      }
    else
      {
      op->vtkGeoCamera::SetOrigin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGeoCamera_Methods[] = {
  {(char*)"GetClassName", PyvtkGeoCamera_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGeoCamera_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGeoCamera_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGeoCamera\nC++: vtkGeoCamera *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGeoCamera_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGeoCamera\nC++: vtkGeoCamera *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetPosition", PyvtkGeoCamera_GetPosition, 1,
   (char*)"V.GetPosition() -> (float, float, float)\nC++: double *GetPosition()\n\n"},
  {(char*)"SetLongitude", PyvtkGeoCamera_SetLongitude, 1,
   (char*)"V.SetLongitude(float)\nC++: void SetLongitude(double longitude)\n\nLongitude is in degrees: (-180->180)\n  Relative to absolute coordinates.\n Rotate Longitude  around z axis (earth axis),\n"},
  {(char*)"GetLongitude", PyvtkGeoCamera_GetLongitude, 1,
   (char*)"V.GetLongitude() -> float\nC++: double GetLongitude()\n\nLongitude is in degrees: (-180->180)\n  Relative to absolute coordinates.\n Rotate Longitude  around z axis (earth axis),\n"},
  {(char*)"SetLatitude", PyvtkGeoCamera_SetLatitude, 1,
   (char*)"V.SetLatitude(float)\nC++: void SetLatitude(double latitude)\n\nLatitude is in degrees: (-90->90)\n   Relative to Longitude.\n Rotate Latitude   around x axis by Latitude,\n"},
  {(char*)"GetLatitude", PyvtkGeoCamera_GetLatitude, 1,
   (char*)"V.GetLatitude() -> float\nC++: double GetLatitude()\n\nLatitude is in degrees: (-90->90)\n   Relative to Longitude.\n Rotate Latitude   around x axis by Latitude,\n"},
  {(char*)"SetDistance", PyvtkGeoCamera_SetDistance, 1,
   (char*)"V.SetDistance(float)\nC++: void SetDistance(double Distance)\n\nDistance is in Meters\n  Relative to Longitude and Latitude.\n  above sea level   ???? should we make this from center of earth\n????\n                   ???? what about equatorial bulge ????\n"},
  {(char*)"GetDistance", PyvtkGeoCamera_GetDistance, 1,
   (char*)"V.GetDistance() -> float\nC++: double GetDistance()\n\nDistance is in Meters\n  Relative to Longitude and Latitude.\n  above sea level   ???? should we make this from center of earth\n????\n                   ???? what about equatorial bulge ????\n"},
  {(char*)"SetHeading", PyvtkGeoCamera_SetHeading, 1,
   (char*)"V.SetHeading(float)\nC++: void SetHeading(double heading)\n\nHeading is in degrees:  (-180->180)\n  Relative to Logitude and Latitude.\n  0 is north.\n  90 is east.       ???? what is the standard ????\n  180 is south.\n-90 is west. Rotate Heading    around -y axis Center,\n"},
  {(char*)"GetHeading", PyvtkGeoCamera_GetHeading, 1,
   (char*)"V.GetHeading() -> float\nC++: double GetHeading()\n\nHeading is in degrees:  (-180->180)\n  Relative to Logitude and Latitude.\n  0 is north.\n  90 is east.       ???? what is the standard ????\n  180 is south.\n-90 is west. Rotate Heading    around -y axis Center,\n"},
  {(char*)"SetTilt", PyvtkGeoCamera_SetTilt, 1,
   (char*)"V.SetTilt(float)\nC++: void SetTilt(double tilt)\n\nTilt is also know as pitch. Tilt is in degrees: (0->90)\n  Relative to Longitude, Latitude, and Heading. Rotate Tilt      \naround x axis,\n"},
  {(char*)"GetTilt", PyvtkGeoCamera_GetTilt, 1,
   (char*)"V.GetTilt() -> float\nC++: double GetTilt()\n\nTilt is also know as pitch. Tilt is in degrees: (0->90)\n  Relative to Longitude, Latitude, and Heading. Rotate Tilt      \naround x axis,\n"},
  {(char*)"GetVTKCamera", PyvtkGeoCamera_GetVTKCamera, 1,
   (char*)"V.GetVTKCamera() -> vtkCamera\nC++: vtkCamera *GetVTKCamera()\n\nThis vtk camera is updated to match this geo cameras state. It\nshould be treated as a const and should not be modified.\n"},
  {(char*)"InitializeNodeAnalysis", PyvtkGeoCamera_InitializeNodeAnalysis, 1,
   (char*)"V.InitializeNodeAnalysis([int, int])\nC++: void InitializeNodeAnalysis(int rendererSize[2])\n\nWe precompute some values to speed up update of the terrain.\nUnfortunately, they have to be manually/explicitly updated when\nthe camera or renderer size changes.\n"},
  {(char*)"GetNodeCoverage", PyvtkGeoCamera_GetNodeCoverage, 1,
   (char*)"V.GetNodeCoverage(vtkGeoTerrainNode) -> float\nC++: double GetNodeCoverage(vtkGeoTerrainNode *node)\n\nThis method estimates how much of the view is covered by the\nsphere. Returns a value from 0 to 1.\n"},
  {(char*)"GetLockHeading", PyvtkGeoCamera_GetLockHeading, 1,
   (char*)"V.GetLockHeading() -> bool\nC++: bool GetLockHeading()\n\nWhether to lock the heading a particular value, or to let the\nheading \"roam free\" when performing latitude and longitude\nchanges.\n"},
  {(char*)"SetLockHeading", PyvtkGeoCamera_SetLockHeading, 1,
   (char*)"V.SetLockHeading(bool)\nC++: void SetLockHeading(bool a)\n\nWhether to lock the heading a particular value, or to let the\nheading \"roam free\" when performing latitude and longitude\nchanges.\n"},
  {(char*)"LockHeadingOn", PyvtkGeoCamera_LockHeadingOn, 1,
   (char*)"V.LockHeadingOn()\nC++: void LockHeadingOn()\n\nWhether to lock the heading a particular value, or to let the\nheading \"roam free\" when performing latitude and longitude\nchanges.\n"},
  {(char*)"LockHeadingOff", PyvtkGeoCamera_LockHeadingOff, 1,
   (char*)"V.LockHeadingOff()\nC++: void LockHeadingOff()\n\nWhether to lock the heading a particular value, or to let the\nheading \"roam free\" when performing latitude and longitude\nchanges.\n"},
  {(char*)"SetOriginLatitude", PyvtkGeoCamera_SetOriginLatitude, 1,
   (char*)"V.SetOriginLatitude(float)\nC++: void SetOriginLatitude(double oLat)\n\nThis point is shifted to 0,0,0 to avoid openGL issues.\n"},
  {(char*)"GetOriginLatitude", PyvtkGeoCamera_GetOriginLatitude, 1,
   (char*)"V.GetOriginLatitude() -> float\nC++: double GetOriginLatitude()\n\nThis point is shifted to 0,0,0 to avoid openGL issues.\n"},
  {(char*)"SetOriginLongitude", PyvtkGeoCamera_SetOriginLongitude, 1,
   (char*)"V.SetOriginLongitude(float)\nC++: void SetOriginLongitude(double oLat)\n\nThis point is shifted to 0,0,0 to avoid openGL issues.\n"},
  {(char*)"GetOriginLongitude", PyvtkGeoCamera_GetOriginLongitude, 1,
   (char*)"V.GetOriginLongitude() -> float\nC++: double GetOriginLongitude()\n\nThis point is shifted to 0,0,0 to avoid openGL issues.\n"},
  {(char*)"GetOrigin", PyvtkGeoCamera_GetOrigin, 1,
   (char*)"V.GetOrigin() -> (float, float, float)\nC++: double *GetOrigin()\n\n"},
  {(char*)"SetOrigin", PyvtkGeoCamera_SetOrigin, 1,
   (char*)"V.SetOrigin(float, float, float)\nC++: void SetOrigin(double ox, double oy, double oz)\n\nGet the rectilinear cooridinate location of the origin. This is\nused to shift the terrain points.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGeoCamera_StaticNew()
{
  return vtkGeoCamera::New();
}

PyObject *PyVTKClass_vtkGeoCameraNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGeoCamera_StaticNew,
    PyvtkGeoCamera_Methods,
    "vtkGeoCamera", modulename,
    NULL, NULL,
    PyvtkGeoCamera_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkGeoCamera_Doc()
{
  static const char *docstring[] = {
    "vtkGeoCamera - Geo interface to a camera.\n\n",
    "Superclass: vtkObject\n\n",
    "I wanted to hide the normal vtkCamera API so I did not make this a\nsubclass.  The camera is a helper object. You can get a pointer to\nthe camera, but it should be treated like a const.\n\nSee Also:\n\nvtkGeoInteractorStyle vtkCamera\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGeoCamera(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGeoCameraNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGeoCamera", o) != 0)
    {
    Py_DECREF(o);
    }

}

