// python wrapper for vtkVolumeMapper
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
#include "vtkVolumeMapper.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkVolumeMapper(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkVolumeMapper(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkVolumeMapperNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkVolumeMapperNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAbstractVolumeMapperNew
extern "C" { PyObject *PyVTKClass_vtkAbstractVolumeMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractVolumeMapperNew
#endif

static const char **PyvtkVolumeMapper_Doc();


static PyObject *
PyvtkVolumeMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

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
      tempr = op->vtkVolumeMapper::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

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
      tempr = op->vtkVolumeMapper::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  vtkVolumeMapper *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkVolumeMapper::NewInstance();
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
PyvtkVolumeMapper_SetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkVolumeMapper::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeMapper_SetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkVolumeMapper::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkVolumeMapper_SetInput_Methods[] = {
  {NULL, PyvtkVolumeMapper_SetInput_s1, 1,
   (char*)"@O *vtkImageData"},
  {NULL, PyvtkVolumeMapper_SetInput_s2, 1,
   (char*)"@O *vtkDataSet"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkVolumeMapper_SetInput(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVolumeMapper_SetInput_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInput");
  return NULL;
}



static PyObject *
PyvtkVolumeMapper_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  vtkImageData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkVolumeMapper::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeMapper_SetBlendMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlendMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBlendMode(temp0);
      }
    else
      {
      op->vtkVolumeMapper::SetBlendMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeMapper_SetBlendModeToComposite(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlendModeToComposite");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBlendModeToComposite();
      }
    else
      {
      op->vtkVolumeMapper::SetBlendModeToComposite();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeMapper_SetBlendModeToMaximumIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlendModeToMaximumIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBlendModeToMaximumIntensity();
      }
    else
      {
      op->vtkVolumeMapper::SetBlendModeToMaximumIntensity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeMapper_SetBlendModeToMinimumIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlendModeToMinimumIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBlendModeToMinimumIntensity();
      }
    else
      {
      op->vtkVolumeMapper::SetBlendModeToMinimumIntensity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeMapper_SetBlendModeToAdditive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlendModeToAdditive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBlendModeToAdditive();
      }
    else
      {
      op->vtkVolumeMapper::SetBlendModeToAdditive();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeMapper_GetBlendMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlendMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBlendMode();
      }
    else
      {
      tempr = op->vtkVolumeMapper::GetBlendMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeMapper_SetCropping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCropping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCropping(temp0);
      }
    else
      {
      op->vtkVolumeMapper::SetCropping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeMapper_GetCroppingMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCroppingMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCroppingMinValue();
      }
    else
      {
      tempr = op->vtkVolumeMapper::GetCroppingMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeMapper_GetCroppingMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCroppingMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCroppingMaxValue();
      }
    else
      {
      tempr = op->vtkVolumeMapper::GetCroppingMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeMapper_GetCropping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCropping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCropping();
      }
    else
      {
      tempr = op->vtkVolumeMapper::GetCropping();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeMapper_CroppingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CroppingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CroppingOn();
      }
    else
      {
      op->vtkVolumeMapper::CroppingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeMapper_CroppingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CroppingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CroppingOff();
      }
    else
      {
      op->vtkVolumeMapper::CroppingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeMapper_SetCroppingRegionPlanes_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCroppingRegionPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetCroppingRegionPlanes(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkVolumeMapper::SetCroppingRegionPlanes(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeMapper_SetCroppingRegionPlanes_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCroppingRegionPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  double temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetCroppingRegionPlanes(temp0);
      }
    else
      {
      op->vtkVolumeMapper::SetCroppingRegionPlanes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeMapper_SetCroppingRegionPlanes(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkVolumeMapper_SetCroppingRegionPlanes_s1(self, args);
    case 1:
      return PyvtkVolumeMapper_SetCroppingRegionPlanes_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCroppingRegionPlanes");
  return NULL;
}



static PyObject *
PyvtkVolumeMapper_GetCroppingRegionPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCroppingRegionPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  double *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCroppingRegionPlanes();
      }
    else
      {
      tempr = op->vtkVolumeMapper::GetCroppingRegionPlanes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeMapper_GetVoxelCroppingRegionPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVoxelCroppingRegionPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  double *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVoxelCroppingRegionPlanes();
      }
    else
      {
      tempr = op->vtkVolumeMapper::GetVoxelCroppingRegionPlanes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeMapper_SetCroppingRegionFlags(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCroppingRegionFlags");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCroppingRegionFlags(temp0);
      }
    else
      {
      op->vtkVolumeMapper::SetCroppingRegionFlags(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeMapper_GetCroppingRegionFlagsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCroppingRegionFlagsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCroppingRegionFlagsMinValue();
      }
    else
      {
      tempr = op->vtkVolumeMapper::GetCroppingRegionFlagsMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeMapper_GetCroppingRegionFlagsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCroppingRegionFlagsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCroppingRegionFlagsMaxValue();
      }
    else
      {
      tempr = op->vtkVolumeMapper::GetCroppingRegionFlagsMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeMapper_GetCroppingRegionFlags(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCroppingRegionFlags");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCroppingRegionFlags();
      }
    else
      {
      tempr = op->vtkVolumeMapper::GetCroppingRegionFlags();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeMapper_SetCroppingRegionFlagsToSubVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCroppingRegionFlagsToSubVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCroppingRegionFlagsToSubVolume();
      }
    else
      {
      op->vtkVolumeMapper::SetCroppingRegionFlagsToSubVolume();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeMapper_SetCroppingRegionFlagsToFence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCroppingRegionFlagsToFence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCroppingRegionFlagsToFence();
      }
    else
      {
      op->vtkVolumeMapper::SetCroppingRegionFlagsToFence();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeMapper_SetCroppingRegionFlagsToInvertedFence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCroppingRegionFlagsToInvertedFence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCroppingRegionFlagsToInvertedFence();
      }
    else
      {
      op->vtkVolumeMapper::SetCroppingRegionFlagsToInvertedFence();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeMapper_SetCroppingRegionFlagsToCross(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCroppingRegionFlagsToCross");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCroppingRegionFlagsToCross();
      }
    else
      {
      op->vtkVolumeMapper::SetCroppingRegionFlagsToCross();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeMapper_SetCroppingRegionFlagsToInvertedCross(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCroppingRegionFlagsToInvertedCross");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCroppingRegionFlagsToInvertedCross();
      }
    else
      {
      op->vtkVolumeMapper::SetCroppingRegionFlagsToInvertedCross();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkVolume *temp1 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume"))
    {
    op->Render(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  vtkWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
    {
    if (ap.IsBound())
      {
      op->ReleaseGraphicsResources(temp0);
      }
    else
      {
      op->vtkVolumeMapper::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkVolumeMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkVolumeMapper_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVolumeMapper_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVolumeMapper_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkVolumeMapper\nC++: vtkVolumeMapper *NewInstance()\n\n"},
  {(char*)"SetInput", PyvtkVolumeMapper_SetInput, 1,
   (char*)"V.SetInput(vtkImageData)\nC++: virtual void SetInput(vtkImageData *)\nV.SetInput(vtkDataSet)\nC++: virtual void SetInput(vtkDataSet *)\n\nSet/Get the input data\n"},
  {(char*)"GetInput", PyvtkVolumeMapper_GetInput, 1,
   (char*)"V.GetInput() -> vtkImageData\nC++: vtkImageData *GetInput()\n\nSet/Get the input data\n"},
  {(char*)"SetBlendMode", PyvtkVolumeMapper_SetBlendMode, 1,
   (char*)"V.SetBlendMode(int)\nC++: void SetBlendMode(int a)\n\nSet/Get the blend mode. Currently this is only supported by the\nvtkFixedPointVolumeRayCastMapper - other mappers have different\nways to set this (supplying a function to a\nvtkVolumeRayCastMapper) or don't have any options\n(vtkVolumeTextureMapper2D supports only compositing). Additive\nblend mode adds scalars along the ray and multiply them by their\nopacity mapping value.\n"},
  {(char*)"SetBlendModeToComposite", PyvtkVolumeMapper_SetBlendModeToComposite, 1,
   (char*)"V.SetBlendModeToComposite()\nC++: void SetBlendModeToComposite()\n\nSet/Get the blend mode. Currently this is only supported by the\nvtkFixedPointVolumeRayCastMapper - other mappers have different\nways to set this (supplying a function to a\nvtkVolumeRayCastMapper) or don't have any options\n(vtkVolumeTextureMapper2D supports only compositing). Additive\nblend mode adds scalars along the ray and multiply them by their\nopacity mapping value.\n"},
  {(char*)"SetBlendModeToMaximumIntensity", PyvtkVolumeMapper_SetBlendModeToMaximumIntensity, 1,
   (char*)"V.SetBlendModeToMaximumIntensity()\nC++: void SetBlendModeToMaximumIntensity()\n\nSet/Get the blend mode. Currently this is only supported by the\nvtkFixedPointVolumeRayCastMapper - other mappers have different\nways to set this (supplying a function to a\nvtkVolumeRayCastMapper) or don't have any options\n(vtkVolumeTextureMapper2D supports only compositing). Additive\nblend mode adds scalars along the ray and multiply them by their\nopacity mapping value.\n"},
  {(char*)"SetBlendModeToMinimumIntensity", PyvtkVolumeMapper_SetBlendModeToMinimumIntensity, 1,
   (char*)"V.SetBlendModeToMinimumIntensity()\nC++: void SetBlendModeToMinimumIntensity()\n\nSet/Get the blend mode. Currently this is only supported by the\nvtkFixedPointVolumeRayCastMapper - other mappers have different\nways to set this (supplying a function to a\nvtkVolumeRayCastMapper) or don't have any options\n(vtkVolumeTextureMapper2D supports only compositing). Additive\nblend mode adds scalars along the ray and multiply them by their\nopacity mapping value.\n"},
  {(char*)"SetBlendModeToAdditive", PyvtkVolumeMapper_SetBlendModeToAdditive, 1,
   (char*)"V.SetBlendModeToAdditive()\nC++: void SetBlendModeToAdditive()\n\nSet/Get the blend mode. Currently this is only supported by the\nvtkFixedPointVolumeRayCastMapper - other mappers have different\nways to set this (supplying a function to a\nvtkVolumeRayCastMapper) or don't have any options\n(vtkVolumeTextureMapper2D supports only compositing). Additive\nblend mode adds scalars along the ray and multiply them by their\nopacity mapping value.\n"},
  {(char*)"GetBlendMode", PyvtkVolumeMapper_GetBlendMode, 1,
   (char*)"V.GetBlendMode() -> int\nC++: int GetBlendMode()\n\nSet/Get the blend mode. Currently this is only supported by the\nvtkFixedPointVolumeRayCastMapper - other mappers have different\nways to set this (supplying a function to a\nvtkVolumeRayCastMapper) or don't have any options\n(vtkVolumeTextureMapper2D supports only compositing). Additive\nblend mode adds scalars along the ray and multiply them by their\nopacity mapping value.\n"},
  {(char*)"SetCropping", PyvtkVolumeMapper_SetCropping, 1,
   (char*)"V.SetCropping(int)\nC++: void SetCropping(int)\n\nTurn On/Off orthogonal cropping. (Clipping planes are\nperpendicular to the coordinate axes.)\n"},
  {(char*)"GetCroppingMinValue", PyvtkVolumeMapper_GetCroppingMinValue, 1,
   (char*)"V.GetCroppingMinValue() -> int\nC++: int GetCroppingMinValue()\n\nTurn On/Off orthogonal cropping. (Clipping planes are\nperpendicular to the coordinate axes.)\n"},
  {(char*)"GetCroppingMaxValue", PyvtkVolumeMapper_GetCroppingMaxValue, 1,
   (char*)"V.GetCroppingMaxValue() -> int\nC++: int GetCroppingMaxValue()\n\nTurn On/Off orthogonal cropping. (Clipping planes are\nperpendicular to the coordinate axes.)\n"},
  {(char*)"GetCropping", PyvtkVolumeMapper_GetCropping, 1,
   (char*)"V.GetCropping() -> int\nC++: int GetCropping()\n\nTurn On/Off orthogonal cropping. (Clipping planes are\nperpendicular to the coordinate axes.)\n"},
  {(char*)"CroppingOn", PyvtkVolumeMapper_CroppingOn, 1,
   (char*)"V.CroppingOn()\nC++: void CroppingOn()\n\nTurn On/Off orthogonal cropping. (Clipping planes are\nperpendicular to the coordinate axes.)\n"},
  {(char*)"CroppingOff", PyvtkVolumeMapper_CroppingOff, 1,
   (char*)"V.CroppingOff()\nC++: void CroppingOff()\n\nTurn On/Off orthogonal cropping. (Clipping planes are\nperpendicular to the coordinate axes.)\n"},
  {(char*)"SetCroppingRegionPlanes", PyvtkVolumeMapper_SetCroppingRegionPlanes, 1,
   (char*)"V.SetCroppingRegionPlanes(float, float, float, float, float,\n    float)\nC++: void SetCroppingRegionPlanes(double, double, double, double,\n    double, double)\nV.SetCroppingRegionPlanes((float, float, float, float, float,\n    float))\nC++: void SetCroppingRegionPlanes(double a[6])\n\n"},
  {(char*)"GetCroppingRegionPlanes", PyvtkVolumeMapper_GetCroppingRegionPlanes, 1,
   (char*)"V.GetCroppingRegionPlanes() -> (float, float, float, float, float,\n     float)\nC++: double *GetCroppingRegionPlanes()\n\nSet/Get the Cropping Region Planes ( xmin, xmax, ymin, ymax,\nzmin, zmax ) These planes are defined in volume coordinates -\nspacing and origin are considered.\n"},
  {(char*)"GetVoxelCroppingRegionPlanes", PyvtkVolumeMapper_GetVoxelCroppingRegionPlanes, 1,
   (char*)"V.GetVoxelCroppingRegionPlanes() -> (float, float, float, float,\n    float, float)\nC++: double *GetVoxelCroppingRegionPlanes()\n\nGet the cropping region planes in voxels. Only valid during the\nrendering process\n"},
  {(char*)"SetCroppingRegionFlags", PyvtkVolumeMapper_SetCroppingRegionFlags, 1,
   (char*)"V.SetCroppingRegionFlags(int)\nC++: void SetCroppingRegionFlags(int)\n\nSet the flags for the cropping regions. The clipping planes\ndivide the volume into 27 regions - there is one bit for each\nregion. The regions start from the one containing voxel (0,0,0),\nmoving along the x axis fastest, the y axis next, and the z axis\nslowest. These are represented from the lowest bit to bit number\n27 in the integer containing the flags. There are several\nconvenience functions to set some common configurations -\nsubvolume (the default), fence (between any of the clip plane\npairs), inverted fence, cross (between any two of the clip plane\npairs) and inverted cross.\n"},
  {(char*)"GetCroppingRegionFlagsMinValue", PyvtkVolumeMapper_GetCroppingRegionFlagsMinValue, 1,
   (char*)"V.GetCroppingRegionFlagsMinValue() -> int\nC++: int GetCroppingRegionFlagsMinValue()\n\nSet the flags for the cropping regions. The clipping planes\ndivide the volume into 27 regions - there is one bit for each\nregion. The regions start from the one containing voxel (0,0,0),\nmoving along the x axis fastest, the y axis next, and the z axis\nslowest. These are represented from the lowest bit to bit number\n27 in the integer containing the flags. There are several\nconvenience functions to set some common configurations -\nsubvolume (the default), fence (between any of the clip plane\npairs), inverted fence, cross (between any two of the clip plane\npairs) and inverted cross.\n"},
  {(char*)"GetCroppingRegionFlagsMaxValue", PyvtkVolumeMapper_GetCroppingRegionFlagsMaxValue, 1,
   (char*)"V.GetCroppingRegionFlagsMaxValue() -> int\nC++: int GetCroppingRegionFlagsMaxValue()\n\nSet the flags for the cropping regions. The clipping planes\ndivide the volume into 27 regions - there is one bit for each\nregion. The regions start from the one containing voxel (0,0,0),\nmoving along the x axis fastest, the y axis next, and the z axis\nslowest. These are represented from the lowest bit to bit number\n27 in the integer containing the flags. There are several\nconvenience functions to set some common configurations -\nsubvolume (the default), fence (between any of the clip plane\npairs), inverted fence, cross (between any two of the clip plane\npairs) and inverted cross.\n"},
  {(char*)"GetCroppingRegionFlags", PyvtkVolumeMapper_GetCroppingRegionFlags, 1,
   (char*)"V.GetCroppingRegionFlags() -> int\nC++: int GetCroppingRegionFlags()\n\nSet the flags for the cropping regions. The clipping planes\ndivide the volume into 27 regions - there is one bit for each\nregion. The regions start from the one containing voxel (0,0,0),\nmoving along the x axis fastest, the y axis next, and the z axis\nslowest. These are represented from the lowest bit to bit number\n27 in the integer containing the flags. There are several\nconvenience functions to set some common configurations -\nsubvolume (the default), fence (between any of the clip plane\npairs), inverted fence, cross (between any two of the clip plane\npairs) and inverted cross.\n"},
  {(char*)"SetCroppingRegionFlagsToSubVolume", PyvtkVolumeMapper_SetCroppingRegionFlagsToSubVolume, 1,
   (char*)"V.SetCroppingRegionFlagsToSubVolume()\nC++: void SetCroppingRegionFlagsToSubVolume()\n\nSet the flags for the cropping regions. The clipping planes\ndivide the volume into 27 regions - there is one bit for each\nregion. The regions start from the one containing voxel (0,0,0),\nmoving along the x axis fastest, the y axis next, and the z axis\nslowest. These are represented from the lowest bit to bit number\n27 in the integer containing the flags. There are several\nconvenience functions to set some common configurations -\nsubvolume (the default), fence (between any of the clip plane\npairs), inverted fence, cross (between any two of the clip plane\npairs) and inverted cross.\n"},
  {(char*)"SetCroppingRegionFlagsToFence", PyvtkVolumeMapper_SetCroppingRegionFlagsToFence, 1,
   (char*)"V.SetCroppingRegionFlagsToFence()\nC++: void SetCroppingRegionFlagsToFence()\n\nSet the flags for the cropping regions. The clipping planes\ndivide the volume into 27 regions - there is one bit for each\nregion. The regions start from the one containing voxel (0,0,0),\nmoving along the x axis fastest, the y axis next, and the z axis\nslowest. These are represented from the lowest bit to bit number\n27 in the integer containing the flags. There are several\nconvenience functions to set some common configurations -\nsubvolume (the default), fence (between any of the clip plane\npairs), inverted fence, cross (between any two of the clip plane\npairs) and inverted cross.\n"},
  {(char*)"SetCroppingRegionFlagsToInvertedFence", PyvtkVolumeMapper_SetCroppingRegionFlagsToInvertedFence, 1,
   (char*)"V.SetCroppingRegionFlagsToInvertedFence()\nC++: void SetCroppingRegionFlagsToInvertedFence()\n\nSet the flags for the cropping regions. The clipping planes\ndivide the volume into 27 regions - there is one bit for each\nregion. The regions start from the one containing voxel (0,0,0),\nmoving along the x axis fastest, the y axis next, and the z axis\nslowest. These are represented from the lowest bit to bit number\n27 in the integer containing the flags. There are several\nconvenience functions to set some common configurations -\nsubvolume (the default), fence (between any of the clip plane\npairs), inverted fence, cross (between any two of the clip plane\npairs) and inverted cross.\n"},
  {(char*)"SetCroppingRegionFlagsToCross", PyvtkVolumeMapper_SetCroppingRegionFlagsToCross, 1,
   (char*)"V.SetCroppingRegionFlagsToCross()\nC++: void SetCroppingRegionFlagsToCross()\n\nSet the flags for the cropping regions. The clipping planes\ndivide the volume into 27 regions - there is one bit for each\nregion. The regions start from the one containing voxel (0,0,0),\nmoving along the x axis fastest, the y axis next, and the z axis\nslowest. These are represented from the lowest bit to bit number\n27 in the integer containing the flags. There are several\nconvenience functions to set some common configurations -\nsubvolume (the default), fence (between any of the clip plane\npairs), inverted fence, cross (between any two of the clip plane\npairs) and inverted cross.\n"},
  {(char*)"SetCroppingRegionFlagsToInvertedCross", PyvtkVolumeMapper_SetCroppingRegionFlagsToInvertedCross, 1,
   (char*)"V.SetCroppingRegionFlagsToInvertedCross()\nC++: void SetCroppingRegionFlagsToInvertedCross()\n\nSet the flags for the cropping regions. The clipping planes\ndivide the volume into 27 regions - there is one bit for each\nregion. The regions start from the one containing voxel (0,0,0),\nmoving along the x axis fastest, the y axis next, and the z axis\nslowest. These are represented from the lowest bit to bit number\n27 in the integer containing the flags. There are several\nconvenience functions to set some common configurations -\nsubvolume (the default), fence (between any of the clip plane\npairs), inverted fence, cross (between any two of the clip plane\npairs) and inverted cross.\n"},
  {(char*)"Render", PyvtkVolumeMapper_Render, 1,
   (char*)"V.Render(vtkRenderer, vtkVolume)\nC++: virtual void Render(vtkRenderer *ren, vtkVolume *vol)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS Render the\nvolume\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkVolumeMapper_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this mapper.\nThe parameter window could be used to determine which graphic\nresources to release.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkVolumeMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkVolumeMapper_Methods,
    "vtkVolumeMapper", modulename,
    NULL, NULL,
    PyvtkVolumeMapper_Doc(),
    PyVTKClass_vtkAbstractVolumeMapperNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"COMPOSITE_BLEND", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"MAXIMUM_INTENSITY_BLEND", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"MINIMUM_INTENSITY_BLEND", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"ADDITIVE_BLEND", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkVolumeMapper_Doc()
{
  static const char *docstring[] = {
    "vtkVolumeMapper - Abstract class for a volume mapper\n\n",
    "Superclass: vtkAbstractVolumeMapper\n\n",
    "vtkVolumeMapper is the abstract definition of a volume mapper for\nregular rectilinear data (vtkImageData).  Several  basic types of\nvolume mappers are supported.\n\nSee Also:\n\nvtkVolumeRayCastMapper vtkVolumeTextureMapper2D\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVolumeMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVolumeMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVolumeMapper", o) != 0)
    {
    Py_DECREF(o);
    }

#if VTK_SIZEOF_INT < VTK_SIZEOF_LONG
  o = PyInt_FromLong(0x0002000);
#else
  o = PyLong_FromUnsignedLong(0x0002000);
#endif
  if (o && PyDict_SetItemString(dict, (char *)"VTK_CROP_SUBVOLUME", o) != 0)
    {
    Py_DECREF(o);
    }

#if VTK_SIZEOF_INT < VTK_SIZEOF_LONG
  o = PyInt_FromLong(0x2ebfeba);
#else
  o = PyLong_FromUnsignedLong(0x2ebfeba);
#endif
  if (o && PyDict_SetItemString(dict, (char *)"VTK_CROP_FENCE", o) != 0)
    {
    Py_DECREF(o);
    }

#if VTK_SIZEOF_INT < VTK_SIZEOF_LONG
  o = PyInt_FromLong(0x5140145);
#else
  o = PyLong_FromUnsignedLong(0x5140145);
#endif
  if (o && PyDict_SetItemString(dict, (char *)"VTK_CROP_INVERTED_FENCE", o) != 0)
    {
    Py_DECREF(o);
    }

#if VTK_SIZEOF_INT < VTK_SIZEOF_LONG
  o = PyInt_FromLong(0x0417410);
#else
  o = PyLong_FromUnsignedLong(0x0417410);
#endif
  if (o && PyDict_SetItemString(dict, (char *)"VTK_CROP_CROSS", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyFloat_FromDouble(0x7be8bef);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_CROP_INVERTED_CROSS", o) != 0)
    {
    Py_DECREF(o);
    }

}

