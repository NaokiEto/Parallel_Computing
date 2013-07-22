// python wrapper for vtkGlobeSource
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
#include "vtkGlobeSource.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGlobeSource(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGlobeSource(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGlobeSourceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGlobeSourceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkGlobeSource_Doc();


static PyObject *
PyvtkGlobeSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobeSource *op = static_cast<vtkGlobeSource *>(vp);

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
      tempr = op->vtkGlobeSource::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlobeSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobeSource *op = static_cast<vtkGlobeSource *>(vp);

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
      tempr = op->vtkGlobeSource::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlobeSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobeSource *op = static_cast<vtkGlobeSource *>(vp);

  vtkGlobeSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGlobeSource::NewInstance();
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
PyvtkGlobeSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGlobeSource *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGlobeSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlobeSource_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobeSource *op = static_cast<vtkGlobeSource *>(vp);

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
      op->vtkGlobeSource::SetOrigin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGlobeSource_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobeSource *op = static_cast<vtkGlobeSource *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOrigin(temp0);
      }
    else
      {
      op->vtkGlobeSource::SetOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGlobeSource_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkGlobeSource_SetOrigin_s1(self, args);
    case 1:
      return PyvtkGlobeSource_SetOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return NULL;
}



static PyObject *
PyvtkGlobeSource_SetStartLongitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartLongitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobeSource *op = static_cast<vtkGlobeSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStartLongitude(temp0);
      }
    else
      {
      op->vtkGlobeSource::SetStartLongitude(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlobeSource_GetStartLongitudeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartLongitudeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobeSource *op = static_cast<vtkGlobeSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStartLongitudeMinValue();
      }
    else
      {
      tempr = op->vtkGlobeSource::GetStartLongitudeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlobeSource_GetStartLongitudeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartLongitudeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobeSource *op = static_cast<vtkGlobeSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStartLongitudeMaxValue();
      }
    else
      {
      tempr = op->vtkGlobeSource::GetStartLongitudeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlobeSource_SetEndLongitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEndLongitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobeSource *op = static_cast<vtkGlobeSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEndLongitude(temp0);
      }
    else
      {
      op->vtkGlobeSource::SetEndLongitude(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlobeSource_GetEndLongitudeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndLongitudeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobeSource *op = static_cast<vtkGlobeSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEndLongitudeMinValue();
      }
    else
      {
      tempr = op->vtkGlobeSource::GetEndLongitudeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlobeSource_GetEndLongitudeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndLongitudeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobeSource *op = static_cast<vtkGlobeSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEndLongitudeMaxValue();
      }
    else
      {
      tempr = op->vtkGlobeSource::GetEndLongitudeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlobeSource_SetStartLatitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartLatitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobeSource *op = static_cast<vtkGlobeSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStartLatitude(temp0);
      }
    else
      {
      op->vtkGlobeSource::SetStartLatitude(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlobeSource_GetStartLatitudeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartLatitudeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobeSource *op = static_cast<vtkGlobeSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStartLatitudeMinValue();
      }
    else
      {
      tempr = op->vtkGlobeSource::GetStartLatitudeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlobeSource_GetStartLatitudeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartLatitudeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobeSource *op = static_cast<vtkGlobeSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStartLatitudeMaxValue();
      }
    else
      {
      tempr = op->vtkGlobeSource::GetStartLatitudeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlobeSource_SetEndLatitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEndLatitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobeSource *op = static_cast<vtkGlobeSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEndLatitude(temp0);
      }
    else
      {
      op->vtkGlobeSource::SetEndLatitude(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlobeSource_GetEndLatitudeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndLatitudeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobeSource *op = static_cast<vtkGlobeSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEndLatitudeMinValue();
      }
    else
      {
      tempr = op->vtkGlobeSource::GetEndLatitudeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlobeSource_GetEndLatitudeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndLatitudeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobeSource *op = static_cast<vtkGlobeSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEndLatitudeMaxValue();
      }
    else
      {
      tempr = op->vtkGlobeSource::GetEndLatitudeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlobeSource_SetLongitudeResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLongitudeResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobeSource *op = static_cast<vtkGlobeSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLongitudeResolution(temp0);
      }
    else
      {
      op->vtkGlobeSource::SetLongitudeResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlobeSource_GetLongitudeResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLongitudeResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobeSource *op = static_cast<vtkGlobeSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLongitudeResolutionMinValue();
      }
    else
      {
      tempr = op->vtkGlobeSource::GetLongitudeResolutionMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlobeSource_GetLongitudeResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLongitudeResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobeSource *op = static_cast<vtkGlobeSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLongitudeResolutionMaxValue();
      }
    else
      {
      tempr = op->vtkGlobeSource::GetLongitudeResolutionMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlobeSource_GetLongitudeResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLongitudeResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobeSource *op = static_cast<vtkGlobeSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLongitudeResolution();
      }
    else
      {
      tempr = op->vtkGlobeSource::GetLongitudeResolution();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlobeSource_SetLatitudeResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLatitudeResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobeSource *op = static_cast<vtkGlobeSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLatitudeResolution(temp0);
      }
    else
      {
      op->vtkGlobeSource::SetLatitudeResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlobeSource_GetLatitudeResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLatitudeResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobeSource *op = static_cast<vtkGlobeSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLatitudeResolutionMinValue();
      }
    else
      {
      tempr = op->vtkGlobeSource::GetLatitudeResolutionMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlobeSource_GetLatitudeResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLatitudeResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobeSource *op = static_cast<vtkGlobeSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLatitudeResolutionMaxValue();
      }
    else
      {
      tempr = op->vtkGlobeSource::GetLatitudeResolutionMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlobeSource_GetLatitudeResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLatitudeResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobeSource *op = static_cast<vtkGlobeSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLatitudeResolution();
      }
    else
      {
      tempr = op->vtkGlobeSource::GetLatitudeResolution();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlobeSource_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobeSource *op = static_cast<vtkGlobeSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRadius(temp0);
      }
    else
      {
      op->vtkGlobeSource::SetRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlobeSource_GetRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobeSource *op = static_cast<vtkGlobeSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRadiusMinValue();
      }
    else
      {
      tempr = op->vtkGlobeSource::GetRadiusMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlobeSource_GetRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobeSource *op = static_cast<vtkGlobeSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRadiusMaxValue();
      }
    else
      {
      tempr = op->vtkGlobeSource::GetRadiusMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlobeSource_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobeSource *op = static_cast<vtkGlobeSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRadius();
      }
    else
      {
      tempr = op->vtkGlobeSource::GetRadius();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlobeSource_SetAutoCalculateCurtainHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoCalculateCurtainHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobeSource *op = static_cast<vtkGlobeSource *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAutoCalculateCurtainHeight(temp0);
      }
    else
      {
      op->vtkGlobeSource::SetAutoCalculateCurtainHeight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlobeSource_GetAutoCalculateCurtainHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoCalculateCurtainHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobeSource *op = static_cast<vtkGlobeSource *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAutoCalculateCurtainHeight();
      }
    else
      {
      tempr = op->vtkGlobeSource::GetAutoCalculateCurtainHeight();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlobeSource_AutoCalculateCurtainHeightOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoCalculateCurtainHeightOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobeSource *op = static_cast<vtkGlobeSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutoCalculateCurtainHeightOn();
      }
    else
      {
      op->vtkGlobeSource::AutoCalculateCurtainHeightOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlobeSource_AutoCalculateCurtainHeightOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoCalculateCurtainHeightOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobeSource *op = static_cast<vtkGlobeSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutoCalculateCurtainHeightOff();
      }
    else
      {
      op->vtkGlobeSource::AutoCalculateCurtainHeightOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlobeSource_SetCurtainHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurtainHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobeSource *op = static_cast<vtkGlobeSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCurtainHeight(temp0);
      }
    else
      {
      op->vtkGlobeSource::SetCurtainHeight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlobeSource_GetCurtainHeightMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurtainHeightMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobeSource *op = static_cast<vtkGlobeSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCurtainHeightMinValue();
      }
    else
      {
      tempr = op->vtkGlobeSource::GetCurtainHeightMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlobeSource_GetCurtainHeightMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurtainHeightMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobeSource *op = static_cast<vtkGlobeSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCurtainHeightMaxValue();
      }
    else
      {
      tempr = op->vtkGlobeSource::GetCurtainHeightMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlobeSource_GetCurtainHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurtainHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobeSource *op = static_cast<vtkGlobeSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCurtainHeight();
      }
    else
      {
      tempr = op->vtkGlobeSource::GetCurtainHeight();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlobeSource_SetQuadrilateralTessellation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadrilateralTessellation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobeSource *op = static_cast<vtkGlobeSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetQuadrilateralTessellation(temp0);
      }
    else
      {
      op->vtkGlobeSource::SetQuadrilateralTessellation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlobeSource_GetQuadrilateralTessellation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuadrilateralTessellation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobeSource *op = static_cast<vtkGlobeSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetQuadrilateralTessellation();
      }
    else
      {
      tempr = op->vtkGlobeSource::GetQuadrilateralTessellation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlobeSource_QuadrilateralTessellationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "QuadrilateralTessellationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobeSource *op = static_cast<vtkGlobeSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->QuadrilateralTessellationOn();
      }
    else
      {
      op->vtkGlobeSource::QuadrilateralTessellationOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlobeSource_QuadrilateralTessellationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "QuadrilateralTessellationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobeSource *op = static_cast<vtkGlobeSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->QuadrilateralTessellationOff();
      }
    else
      {
      op->vtkGlobeSource::QuadrilateralTessellationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGlobeSource_Methods[] = {
  {(char*)"GetClassName", PyvtkGlobeSource_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGlobeSource_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGlobeSource_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGlobeSource\nC++: vtkGlobeSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGlobeSource_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGlobeSource\nC++: vtkGlobeSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetOrigin", PyvtkGlobeSource_SetOrigin, 1,
   (char*)"V.SetOrigin(float, float, float)\nC++: void SetOrigin(double, double, double)\nV.SetOrigin((float, float, float))\nC++: void SetOrigin(double a[3])\n\n"},
  {(char*)"SetStartLongitude", PyvtkGlobeSource_SetStartLongitude, 1,
   (char*)"V.SetStartLongitude(float)\nC++: void SetStartLongitude(double)\n\nLongitude Latitude clamps.\n"},
  {(char*)"GetStartLongitudeMinValue", PyvtkGlobeSource_GetStartLongitudeMinValue, 1,
   (char*)"V.GetStartLongitudeMinValue() -> float\nC++: double GetStartLongitudeMinValue()\n\nLongitude Latitude clamps.\n"},
  {(char*)"GetStartLongitudeMaxValue", PyvtkGlobeSource_GetStartLongitudeMaxValue, 1,
   (char*)"V.GetStartLongitudeMaxValue() -> float\nC++: double GetStartLongitudeMaxValue()\n\nLongitude Latitude clamps.\n"},
  {(char*)"SetEndLongitude", PyvtkGlobeSource_SetEndLongitude, 1,
   (char*)"V.SetEndLongitude(float)\nC++: void SetEndLongitude(double)\n\nLongitude Latitude clamps.\n"},
  {(char*)"GetEndLongitudeMinValue", PyvtkGlobeSource_GetEndLongitudeMinValue, 1,
   (char*)"V.GetEndLongitudeMinValue() -> float\nC++: double GetEndLongitudeMinValue()\n\nLongitude Latitude clamps.\n"},
  {(char*)"GetEndLongitudeMaxValue", PyvtkGlobeSource_GetEndLongitudeMaxValue, 1,
   (char*)"V.GetEndLongitudeMaxValue() -> float\nC++: double GetEndLongitudeMaxValue()\n\nLongitude Latitude clamps.\n"},
  {(char*)"SetStartLatitude", PyvtkGlobeSource_SetStartLatitude, 1,
   (char*)"V.SetStartLatitude(float)\nC++: void SetStartLatitude(double)\n\nLongitude Latitude clamps.\n"},
  {(char*)"GetStartLatitudeMinValue", PyvtkGlobeSource_GetStartLatitudeMinValue, 1,
   (char*)"V.GetStartLatitudeMinValue() -> float\nC++: double GetStartLatitudeMinValue()\n\nLongitude Latitude clamps.\n"},
  {(char*)"GetStartLatitudeMaxValue", PyvtkGlobeSource_GetStartLatitudeMaxValue, 1,
   (char*)"V.GetStartLatitudeMaxValue() -> float\nC++: double GetStartLatitudeMaxValue()\n\nLongitude Latitude clamps.\n"},
  {(char*)"SetEndLatitude", PyvtkGlobeSource_SetEndLatitude, 1,
   (char*)"V.SetEndLatitude(float)\nC++: void SetEndLatitude(double)\n\nLongitude Latitude clamps.\n"},
  {(char*)"GetEndLatitudeMinValue", PyvtkGlobeSource_GetEndLatitudeMinValue, 1,
   (char*)"V.GetEndLatitudeMinValue() -> float\nC++: double GetEndLatitudeMinValue()\n\nLongitude Latitude clamps.\n"},
  {(char*)"GetEndLatitudeMaxValue", PyvtkGlobeSource_GetEndLatitudeMaxValue, 1,
   (char*)"V.GetEndLatitudeMaxValue() -> float\nC++: double GetEndLatitudeMaxValue()\n\nLongitude Latitude clamps.\n"},
  {(char*)"SetLongitudeResolution", PyvtkGlobeSource_SetLongitudeResolution, 1,
   (char*)"V.SetLongitudeResolution(int)\nC++: void SetLongitudeResolution(int)\n\nSet the number of points in the longitude direction (ranging from\nStartLongitude to EndLongitude).\n"},
  {(char*)"GetLongitudeResolutionMinValue", PyvtkGlobeSource_GetLongitudeResolutionMinValue, 1,
   (char*)"V.GetLongitudeResolutionMinValue() -> int\nC++: int GetLongitudeResolutionMinValue()\n\nSet the number of points in the longitude direction (ranging from\nStartLongitude to EndLongitude).\n"},
  {(char*)"GetLongitudeResolutionMaxValue", PyvtkGlobeSource_GetLongitudeResolutionMaxValue, 1,
   (char*)"V.GetLongitudeResolutionMaxValue() -> int\nC++: int GetLongitudeResolutionMaxValue()\n\nSet the number of points in the longitude direction (ranging from\nStartLongitude to EndLongitude).\n"},
  {(char*)"GetLongitudeResolution", PyvtkGlobeSource_GetLongitudeResolution, 1,
   (char*)"V.GetLongitudeResolution() -> int\nC++: int GetLongitudeResolution()\n\nSet the number of points in the longitude direction (ranging from\nStartLongitude to EndLongitude).\n"},
  {(char*)"SetLatitudeResolution", PyvtkGlobeSource_SetLatitudeResolution, 1,
   (char*)"V.SetLatitudeResolution(int)\nC++: void SetLatitudeResolution(int)\n\nSet the number of points in the latitude direction (ranging from\nStartLatitude to EndLatitude).\n"},
  {(char*)"GetLatitudeResolutionMinValue", PyvtkGlobeSource_GetLatitudeResolutionMinValue, 1,
   (char*)"V.GetLatitudeResolutionMinValue() -> int\nC++: int GetLatitudeResolutionMinValue()\n\nSet the number of points in the latitude direction (ranging from\nStartLatitude to EndLatitude).\n"},
  {(char*)"GetLatitudeResolutionMaxValue", PyvtkGlobeSource_GetLatitudeResolutionMaxValue, 1,
   (char*)"V.GetLatitudeResolutionMaxValue() -> int\nC++: int GetLatitudeResolutionMaxValue()\n\nSet the number of points in the latitude direction (ranging from\nStartLatitude to EndLatitude).\n"},
  {(char*)"GetLatitudeResolution", PyvtkGlobeSource_GetLatitudeResolution, 1,
   (char*)"V.GetLatitudeResolution() -> int\nC++: int GetLatitudeResolution()\n\nSet the number of points in the latitude direction (ranging from\nStartLatitude to EndLatitude).\n"},
  {(char*)"SetRadius", PyvtkGlobeSource_SetRadius, 1,
   (char*)"V.SetRadius(float)\nC++: void SetRadius(double)\n\nSet radius of sphere. Default is 6356750.0\n"},
  {(char*)"GetRadiusMinValue", PyvtkGlobeSource_GetRadiusMinValue, 1,
   (char*)"V.GetRadiusMinValue() -> float\nC++: double GetRadiusMinValue()\n\nSet radius of sphere. Default is 6356750.0\n"},
  {(char*)"GetRadiusMaxValue", PyvtkGlobeSource_GetRadiusMaxValue, 1,
   (char*)"V.GetRadiusMaxValue() -> float\nC++: double GetRadiusMaxValue()\n\nSet radius of sphere. Default is 6356750.0\n"},
  {(char*)"GetRadius", PyvtkGlobeSource_GetRadius, 1,
   (char*)"V.GetRadius() -> float\nC++: double GetRadius()\n\nSet radius of sphere. Default is 6356750.0\n"},
  {(char*)"SetAutoCalculateCurtainHeight", PyvtkGlobeSource_SetAutoCalculateCurtainHeight, 1,
   (char*)"V.SetAutoCalculateCurtainHeight(bool)\nC++: void SetAutoCalculateCurtainHeight(bool a)\n\n\n"},
  {(char*)"GetAutoCalculateCurtainHeight", PyvtkGlobeSource_GetAutoCalculateCurtainHeight, 1,
   (char*)"V.GetAutoCalculateCurtainHeight() -> bool\nC++: bool GetAutoCalculateCurtainHeight()\n\n\n"},
  {(char*)"AutoCalculateCurtainHeightOn", PyvtkGlobeSource_AutoCalculateCurtainHeightOn, 1,
   (char*)"V.AutoCalculateCurtainHeightOn()\nC++: void AutoCalculateCurtainHeightOn()\n\n\n"},
  {(char*)"AutoCalculateCurtainHeightOff", PyvtkGlobeSource_AutoCalculateCurtainHeightOff, 1,
   (char*)"V.AutoCalculateCurtainHeightOff()\nC++: void AutoCalculateCurtainHeightOff()\n\n\n"},
  {(char*)"SetCurtainHeight", PyvtkGlobeSource_SetCurtainHeight, 1,
   (char*)"V.SetCurtainHeight(float)\nC++: void SetCurtainHeight(double)\n\nSet/Get curtain height.\n"},
  {(char*)"GetCurtainHeightMinValue", PyvtkGlobeSource_GetCurtainHeightMinValue, 1,
   (char*)"V.GetCurtainHeightMinValue() -> float\nC++: double GetCurtainHeightMinValue()\n\nSet/Get curtain height.\n"},
  {(char*)"GetCurtainHeightMaxValue", PyvtkGlobeSource_GetCurtainHeightMaxValue, 1,
   (char*)"V.GetCurtainHeightMaxValue() -> float\nC++: double GetCurtainHeightMaxValue()\n\nSet/Get curtain height.\n"},
  {(char*)"GetCurtainHeight", PyvtkGlobeSource_GetCurtainHeight, 1,
   (char*)"V.GetCurtainHeight() -> float\nC++: double GetCurtainHeight()\n\nSet/Get curtain height.\n"},
  {(char*)"SetQuadrilateralTessellation", PyvtkGlobeSource_SetQuadrilateralTessellation, 1,
   (char*)"V.SetQuadrilateralTessellation(int)\nC++: void SetQuadrilateralTessellation(int a)\n\nCause the sphere to be tessellated with edges along the latitude\nand longitude lines. If off, triangles are generated at non-polar\nregions, which results in edges that are not parallel to latitude\nand longitude lines. If on, quadrilaterals are generated\neverywhere except at the poles. This can be useful for generating\na wireframe sphere with natural latitude and longitude lines.\n"},
  {(char*)"GetQuadrilateralTessellation", PyvtkGlobeSource_GetQuadrilateralTessellation, 1,
   (char*)"V.GetQuadrilateralTessellation() -> int\nC++: int GetQuadrilateralTessellation()\n\nCause the sphere to be tessellated with edges along the latitude\nand longitude lines. If off, triangles are generated at non-polar\nregions, which results in edges that are not parallel to latitude\nand longitude lines. If on, quadrilaterals are generated\neverywhere except at the poles. This can be useful for generating\na wireframe sphere with natural latitude and longitude lines.\n"},
  {(char*)"QuadrilateralTessellationOn", PyvtkGlobeSource_QuadrilateralTessellationOn, 1,
   (char*)"V.QuadrilateralTessellationOn()\nC++: void QuadrilateralTessellationOn()\n\nCause the sphere to be tessellated with edges along the latitude\nand longitude lines. If off, triangles are generated at non-polar\nregions, which results in edges that are not parallel to latitude\nand longitude lines. If on, quadrilaterals are generated\neverywhere except at the poles. This can be useful for generating\na wireframe sphere with natural latitude and longitude lines.\n"},
  {(char*)"QuadrilateralTessellationOff", PyvtkGlobeSource_QuadrilateralTessellationOff, 1,
   (char*)"V.QuadrilateralTessellationOff()\nC++: void QuadrilateralTessellationOff()\n\nCause the sphere to be tessellated with edges along the latitude\nand longitude lines. If off, triangles are generated at non-polar\nregions, which results in edges that are not parallel to latitude\nand longitude lines. If on, quadrilaterals are generated\neverywhere except at the poles. This can be useful for generating\na wireframe sphere with natural latitude and longitude lines.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGlobeSource_StaticNew()
{
  return vtkGlobeSource::New();
}

PyObject *PyVTKClass_vtkGlobeSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGlobeSource_StaticNew,
    PyvtkGlobeSource_Methods,
    "vtkGlobeSource", modulename,
    NULL, NULL,
    PyvtkGlobeSource_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkGlobeSource_Doc()
{
  static const char *docstring[] = {
    "vtkGlobeSource - Sphere patch with Lat/Long scalar array.\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkGlobeSource will generate any \"rectangular\" patch of the globe\ngiven its Longitude-Latitude extent.  It adds two point scalar arrays\nLongitude and Latitude to the output.  These arrays can be\ntransformed to generate texture coordinates for any texture map. \nThis source is imperfect near the poles as implmented.  It should\nreally reduce the longitude resolution as the triangles become\nslivers.\n\n",
    "\\image html vtkGlobeSourceSphericalToCartesianFigure.png\\image latex\nvtkGlobeSourceSphericalToCartesianFigure.eps\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGlobeSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGlobeSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGlobeSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

