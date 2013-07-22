// python wrapper for vtkVolumeProperty
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
#include "vtkTimeStamp.h"
#include "vtkVolumeProperty.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkVolumeProperty(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkVolumeProperty(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkVolumePropertyNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkVolumePropertyNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkVolumeProperty_Doc();


static PyObject *
PyvtkVolumeProperty_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

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
      tempr = op->vtkVolumeProperty::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

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
      tempr = op->vtkVolumeProperty::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  vtkVolumeProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkVolumeProperty::NewInstance();
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
PyvtkVolumeProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkVolumeProperty *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkVolumeProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProperty_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  vtkVolumeProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolumeProperty"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkVolumeProperty::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProperty_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMTime();
      }
    else
      {
      tempr = op->vtkVolumeProperty::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProperty_SetIndependentComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndependentComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIndependentComponents(temp0);
      }
    else
      {
      op->vtkVolumeProperty::SetIndependentComponents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProperty_GetIndependentComponentsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndependentComponentsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIndependentComponentsMinValue();
      }
    else
      {
      tempr = op->vtkVolumeProperty::GetIndependentComponentsMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProperty_GetIndependentComponentsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndependentComponentsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIndependentComponentsMaxValue();
      }
    else
      {
      tempr = op->vtkVolumeProperty::GetIndependentComponentsMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProperty_GetIndependentComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndependentComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIndependentComponents();
      }
    else
      {
      tempr = op->vtkVolumeProperty::GetIndependentComponents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProperty_IndependentComponentsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IndependentComponentsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IndependentComponentsOn();
      }
    else
      {
      op->vtkVolumeProperty::IndependentComponentsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProperty_IndependentComponentsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IndependentComponentsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IndependentComponentsOff();
      }
    else
      {
      op->vtkVolumeProperty::IndependentComponentsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProperty_SetInterpolationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationType(temp0);
      }
    else
      {
      op->vtkVolumeProperty::SetInterpolationType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProperty_GetInterpolationTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInterpolationTypeMinValue();
      }
    else
      {
      tempr = op->vtkVolumeProperty::GetInterpolationTypeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProperty_GetInterpolationTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInterpolationTypeMaxValue();
      }
    else
      {
      tempr = op->vtkVolumeProperty::GetInterpolationTypeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProperty_GetInterpolationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInterpolationType();
      }
    else
      {
      tempr = op->vtkVolumeProperty::GetInterpolationType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProperty_SetInterpolationTypeToNearest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationTypeToNearest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationTypeToNearest();
      }
    else
      {
      op->vtkVolumeProperty::SetInterpolationTypeToNearest();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProperty_SetInterpolationTypeToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationTypeToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationTypeToLinear();
      }
    else
      {
      op->vtkVolumeProperty::SetInterpolationTypeToLinear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProperty_GetInterpolationTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInterpolationTypeAsString();
      }
    else
      {
      tempr = op->vtkVolumeProperty::GetInterpolationTypeAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProperty_SetComponentWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetComponentWeight(temp0, temp1);
      }
    else
      {
      op->vtkVolumeProperty::SetComponentWeight(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProperty_GetComponentWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComponentWeight(temp0);
      }
    else
      {
      tempr = op->vtkVolumeProperty::GetComponentWeight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProperty_SetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  vtkPiecewiseFunction *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPiecewiseFunction"))
    {
    if (ap.IsBound())
      {
      op->SetColor(temp0, temp1);
      }
    else
      {
      op->vtkVolumeProperty::SetColor(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_SetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  vtkPiecewiseFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPiecewiseFunction"))
    {
    if (ap.IsBound())
      {
      op->SetColor(temp0);
      }
    else
      {
      op->vtkVolumeProperty::SetColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_SetColor_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  vtkColorTransferFunction *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkColorTransferFunction"))
    {
    if (ap.IsBound())
      {
      op->SetColor(temp0, temp1);
      }
    else
      {
      op->vtkVolumeProperty::SetColor(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_SetColor_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  vtkColorTransferFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkColorTransferFunction"))
    {
    if (ap.IsBound())
      {
      op->SetColor(temp0);
      }
    else
      {
      op->vtkVolumeProperty::SetColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkVolumeProperty_SetColor_Methods[] = {
  {NULL, PyvtkVolumeProperty_SetColor_s1, 1,
   (char*)"@iO *vtkPiecewiseFunction"},
  {NULL, PyvtkVolumeProperty_SetColor_s2, 1,
   (char*)"@O *vtkPiecewiseFunction"},
  {NULL, PyvtkVolumeProperty_SetColor_s3, 1,
   (char*)"@iO *vtkColorTransferFunction"},
  {NULL, PyvtkVolumeProperty_SetColor_s4, 1,
   (char*)"@O *vtkColorTransferFunction"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkVolumeProperty_SetColor(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVolumeProperty_SetColor_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetColor");
  return NULL;
}



static PyObject *
PyvtkVolumeProperty_GetColorChannels_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorChannels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColorChannels(temp0);
      }
    else
      {
      tempr = op->vtkVolumeProperty::GetColorChannels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetColorChannels_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorChannels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColorChannels();
      }
    else
      {
      tempr = op->vtkVolumeProperty::GetColorChannels();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetColorChannels(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkVolumeProperty_GetColorChannels_s1(self, args);
    case 0:
      return PyvtkVolumeProperty_GetColorChannels_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetColorChannels");
  return NULL;
}



static PyObject *
PyvtkVolumeProperty_GetGrayTransferFunction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGrayTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  vtkPiecewiseFunction *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGrayTransferFunction(temp0);
      }
    else
      {
      tempr = op->vtkVolumeProperty::GetGrayTransferFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetGrayTransferFunction_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGrayTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  vtkPiecewiseFunction *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGrayTransferFunction();
      }
    else
      {
      tempr = op->vtkVolumeProperty::GetGrayTransferFunction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetGrayTransferFunction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkVolumeProperty_GetGrayTransferFunction_s1(self, args);
    case 0:
      return PyvtkVolumeProperty_GetGrayTransferFunction_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetGrayTransferFunction");
  return NULL;
}



static PyObject *
PyvtkVolumeProperty_GetRGBTransferFunction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRGBTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  vtkColorTransferFunction *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRGBTransferFunction(temp0);
      }
    else
      {
      tempr = op->vtkVolumeProperty::GetRGBTransferFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetRGBTransferFunction_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRGBTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  vtkColorTransferFunction *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRGBTransferFunction();
      }
    else
      {
      tempr = op->vtkVolumeProperty::GetRGBTransferFunction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetRGBTransferFunction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkVolumeProperty_GetRGBTransferFunction_s1(self, args);
    case 0:
      return PyvtkVolumeProperty_GetRGBTransferFunction_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetRGBTransferFunction");
  return NULL;
}



static PyObject *
PyvtkVolumeProperty_SetScalarOpacity_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  vtkPiecewiseFunction *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPiecewiseFunction"))
    {
    if (ap.IsBound())
      {
      op->SetScalarOpacity(temp0, temp1);
      }
    else
      {
      op->vtkVolumeProperty::SetScalarOpacity(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_SetScalarOpacity_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  vtkPiecewiseFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPiecewiseFunction"))
    {
    if (ap.IsBound())
      {
      op->SetScalarOpacity(temp0);
      }
    else
      {
      op->vtkVolumeProperty::SetScalarOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_SetScalarOpacity(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkVolumeProperty_SetScalarOpacity_s1(self, args);
    case 1:
      return PyvtkVolumeProperty_SetScalarOpacity_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetScalarOpacity");
  return NULL;
}



static PyObject *
PyvtkVolumeProperty_GetScalarOpacity_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  vtkPiecewiseFunction *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarOpacity(temp0);
      }
    else
      {
      tempr = op->vtkVolumeProperty::GetScalarOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetScalarOpacity_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  vtkPiecewiseFunction *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarOpacity();
      }
    else
      {
      tempr = op->vtkVolumeProperty::GetScalarOpacity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetScalarOpacity(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkVolumeProperty_GetScalarOpacity_s1(self, args);
    case 0:
      return PyvtkVolumeProperty_GetScalarOpacity_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetScalarOpacity");
  return NULL;
}



static PyObject *
PyvtkVolumeProperty_SetScalarOpacityUnitDistance_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarOpacityUnitDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetScalarOpacityUnitDistance(temp0, temp1);
      }
    else
      {
      op->vtkVolumeProperty::SetScalarOpacityUnitDistance(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_SetScalarOpacityUnitDistance_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarOpacityUnitDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalarOpacityUnitDistance(temp0);
      }
    else
      {
      op->vtkVolumeProperty::SetScalarOpacityUnitDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_SetScalarOpacityUnitDistance(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkVolumeProperty_SetScalarOpacityUnitDistance_s1(self, args);
    case 1:
      return PyvtkVolumeProperty_SetScalarOpacityUnitDistance_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetScalarOpacityUnitDistance");
  return NULL;
}



static PyObject *
PyvtkVolumeProperty_GetScalarOpacityUnitDistance_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarOpacityUnitDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarOpacityUnitDistance(temp0);
      }
    else
      {
      tempr = op->vtkVolumeProperty::GetScalarOpacityUnitDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetScalarOpacityUnitDistance_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarOpacityUnitDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarOpacityUnitDistance();
      }
    else
      {
      tempr = op->vtkVolumeProperty::GetScalarOpacityUnitDistance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetScalarOpacityUnitDistance(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkVolumeProperty_GetScalarOpacityUnitDistance_s1(self, args);
    case 0:
      return PyvtkVolumeProperty_GetScalarOpacityUnitDistance_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetScalarOpacityUnitDistance");
  return NULL;
}



static PyObject *
PyvtkVolumeProperty_SetGradientOpacity_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGradientOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  vtkPiecewiseFunction *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPiecewiseFunction"))
    {
    if (ap.IsBound())
      {
      op->SetGradientOpacity(temp0, temp1);
      }
    else
      {
      op->vtkVolumeProperty::SetGradientOpacity(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_SetGradientOpacity_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGradientOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  vtkPiecewiseFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPiecewiseFunction"))
    {
    if (ap.IsBound())
      {
      op->SetGradientOpacity(temp0);
      }
    else
      {
      op->vtkVolumeProperty::SetGradientOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_SetGradientOpacity(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkVolumeProperty_SetGradientOpacity_s1(self, args);
    case 1:
      return PyvtkVolumeProperty_SetGradientOpacity_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetGradientOpacity");
  return NULL;
}



static PyObject *
PyvtkVolumeProperty_GetGradientOpacity_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  vtkPiecewiseFunction *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGradientOpacity(temp0);
      }
    else
      {
      tempr = op->vtkVolumeProperty::GetGradientOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetGradientOpacity_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  vtkPiecewiseFunction *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGradientOpacity();
      }
    else
      {
      tempr = op->vtkVolumeProperty::GetGradientOpacity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetGradientOpacity(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkVolumeProperty_GetGradientOpacity_s1(self, args);
    case 0:
      return PyvtkVolumeProperty_GetGradientOpacity_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetGradientOpacity");
  return NULL;
}



static PyObject *
PyvtkVolumeProperty_SetDisableGradientOpacity_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisableGradientOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetDisableGradientOpacity(temp0, temp1);
      }
    else
      {
      op->vtkVolumeProperty::SetDisableGradientOpacity(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_SetDisableGradientOpacity_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisableGradientOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDisableGradientOpacity(temp0);
      }
    else
      {
      op->vtkVolumeProperty::SetDisableGradientOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_SetDisableGradientOpacity(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkVolumeProperty_SetDisableGradientOpacity_s1(self, args);
    case 1:
      return PyvtkVolumeProperty_SetDisableGradientOpacity_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDisableGradientOpacity");
  return NULL;
}



static PyObject *
PyvtkVolumeProperty_DisableGradientOpacityOn_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableGradientOpacityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->DisableGradientOpacityOn(temp0);
      }
    else
      {
      op->vtkVolumeProperty::DisableGradientOpacityOn(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_DisableGradientOpacityOn_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableGradientOpacityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DisableGradientOpacityOn();
      }
    else
      {
      op->vtkVolumeProperty::DisableGradientOpacityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_DisableGradientOpacityOn(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkVolumeProperty_DisableGradientOpacityOn_s1(self, args);
    case 0:
      return PyvtkVolumeProperty_DisableGradientOpacityOn_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "DisableGradientOpacityOn");
  return NULL;
}



static PyObject *
PyvtkVolumeProperty_DisableGradientOpacityOff_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableGradientOpacityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->DisableGradientOpacityOff(temp0);
      }
    else
      {
      op->vtkVolumeProperty::DisableGradientOpacityOff(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_DisableGradientOpacityOff_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableGradientOpacityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DisableGradientOpacityOff();
      }
    else
      {
      op->vtkVolumeProperty::DisableGradientOpacityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_DisableGradientOpacityOff(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkVolumeProperty_DisableGradientOpacityOff_s1(self, args);
    case 0:
      return PyvtkVolumeProperty_DisableGradientOpacityOff_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "DisableGradientOpacityOff");
  return NULL;
}



static PyObject *
PyvtkVolumeProperty_GetDisableGradientOpacity_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisableGradientOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDisableGradientOpacity(temp0);
      }
    else
      {
      tempr = op->vtkVolumeProperty::GetDisableGradientOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetDisableGradientOpacity_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisableGradientOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDisableGradientOpacity();
      }
    else
      {
      tempr = op->vtkVolumeProperty::GetDisableGradientOpacity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetDisableGradientOpacity(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkVolumeProperty_GetDisableGradientOpacity_s1(self, args);
    case 0:
      return PyvtkVolumeProperty_GetDisableGradientOpacity_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetDisableGradientOpacity");
  return NULL;
}



static PyObject *
PyvtkVolumeProperty_GetStoredGradientOpacity_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStoredGradientOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  vtkPiecewiseFunction *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStoredGradientOpacity(temp0);
      }
    else
      {
      tempr = op->vtkVolumeProperty::GetStoredGradientOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetStoredGradientOpacity_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStoredGradientOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  vtkPiecewiseFunction *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStoredGradientOpacity();
      }
    else
      {
      tempr = op->vtkVolumeProperty::GetStoredGradientOpacity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetStoredGradientOpacity(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkVolumeProperty_GetStoredGradientOpacity_s1(self, args);
    case 0:
      return PyvtkVolumeProperty_GetStoredGradientOpacity_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetStoredGradientOpacity");
  return NULL;
}



static PyObject *
PyvtkVolumeProperty_SetShade_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShade");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetShade(temp0, temp1);
      }
    else
      {
      op->vtkVolumeProperty::SetShade(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_SetShade_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShade");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShade(temp0);
      }
    else
      {
      op->vtkVolumeProperty::SetShade(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_SetShade(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkVolumeProperty_SetShade_s1(self, args);
    case 1:
      return PyvtkVolumeProperty_SetShade_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetShade");
  return NULL;
}



static PyObject *
PyvtkVolumeProperty_GetShade_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShade");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShade(temp0);
      }
    else
      {
      tempr = op->vtkVolumeProperty::GetShade(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetShade_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShade");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShade();
      }
    else
      {
      tempr = op->vtkVolumeProperty::GetShade();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetShade(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkVolumeProperty_GetShade_s1(self, args);
    case 0:
      return PyvtkVolumeProperty_GetShade_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetShade");
  return NULL;
}



static PyObject *
PyvtkVolumeProperty_ShadeOn_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShadeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ShadeOn(temp0);
      }
    else
      {
      op->vtkVolumeProperty::ShadeOn(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_ShadeOn_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShadeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShadeOn();
      }
    else
      {
      op->vtkVolumeProperty::ShadeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_ShadeOn(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkVolumeProperty_ShadeOn_s1(self, args);
    case 0:
      return PyvtkVolumeProperty_ShadeOn_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ShadeOn");
  return NULL;
}



static PyObject *
PyvtkVolumeProperty_ShadeOff_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShadeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ShadeOff(temp0);
      }
    else
      {
      op->vtkVolumeProperty::ShadeOff(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_ShadeOff_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShadeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShadeOff();
      }
    else
      {
      op->vtkVolumeProperty::ShadeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_ShadeOff(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkVolumeProperty_ShadeOff_s1(self, args);
    case 0:
      return PyvtkVolumeProperty_ShadeOff_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ShadeOff");
  return NULL;
}



static PyObject *
PyvtkVolumeProperty_SetAmbient_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAmbient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetAmbient(temp0, temp1);
      }
    else
      {
      op->vtkVolumeProperty::SetAmbient(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_SetAmbient_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAmbient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAmbient(temp0);
      }
    else
      {
      op->vtkVolumeProperty::SetAmbient(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_SetAmbient(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkVolumeProperty_SetAmbient_s1(self, args);
    case 1:
      return PyvtkVolumeProperty_SetAmbient_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetAmbient");
  return NULL;
}



static PyObject *
PyvtkVolumeProperty_GetAmbient_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAmbient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAmbient(temp0);
      }
    else
      {
      tempr = op->vtkVolumeProperty::GetAmbient(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetAmbient_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAmbient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAmbient();
      }
    else
      {
      tempr = op->vtkVolumeProperty::GetAmbient();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetAmbient(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkVolumeProperty_GetAmbient_s1(self, args);
    case 0:
      return PyvtkVolumeProperty_GetAmbient_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetAmbient");
  return NULL;
}



static PyObject *
PyvtkVolumeProperty_SetDiffuse_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiffuse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetDiffuse(temp0, temp1);
      }
    else
      {
      op->vtkVolumeProperty::SetDiffuse(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_SetDiffuse_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiffuse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDiffuse(temp0);
      }
    else
      {
      op->vtkVolumeProperty::SetDiffuse(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_SetDiffuse(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkVolumeProperty_SetDiffuse_s1(self, args);
    case 1:
      return PyvtkVolumeProperty_SetDiffuse_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDiffuse");
  return NULL;
}



static PyObject *
PyvtkVolumeProperty_GetDiffuse_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffuse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDiffuse(temp0);
      }
    else
      {
      tempr = op->vtkVolumeProperty::GetDiffuse(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetDiffuse_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffuse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDiffuse();
      }
    else
      {
      tempr = op->vtkVolumeProperty::GetDiffuse();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetDiffuse(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkVolumeProperty_GetDiffuse_s1(self, args);
    case 0:
      return PyvtkVolumeProperty_GetDiffuse_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetDiffuse");
  return NULL;
}



static PyObject *
PyvtkVolumeProperty_SetSpecular_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecular");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetSpecular(temp0, temp1);
      }
    else
      {
      op->vtkVolumeProperty::SetSpecular(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_SetSpecular_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecular");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSpecular(temp0);
      }
    else
      {
      op->vtkVolumeProperty::SetSpecular(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_SetSpecular(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkVolumeProperty_SetSpecular_s1(self, args);
    case 1:
      return PyvtkVolumeProperty_SetSpecular_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSpecular");
  return NULL;
}



static PyObject *
PyvtkVolumeProperty_GetSpecular_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpecular");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSpecular(temp0);
      }
    else
      {
      tempr = op->vtkVolumeProperty::GetSpecular(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetSpecular_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpecular");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSpecular();
      }
    else
      {
      tempr = op->vtkVolumeProperty::GetSpecular();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetSpecular(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkVolumeProperty_GetSpecular_s1(self, args);
    case 0:
      return PyvtkVolumeProperty_GetSpecular_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetSpecular");
  return NULL;
}



static PyObject *
PyvtkVolumeProperty_SetSpecularPower_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecularPower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetSpecularPower(temp0, temp1);
      }
    else
      {
      op->vtkVolumeProperty::SetSpecularPower(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_SetSpecularPower_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecularPower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSpecularPower(temp0);
      }
    else
      {
      op->vtkVolumeProperty::SetSpecularPower(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_SetSpecularPower(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkVolumeProperty_SetSpecularPower_s1(self, args);
    case 1:
      return PyvtkVolumeProperty_SetSpecularPower_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSpecularPower");
  return NULL;
}



static PyObject *
PyvtkVolumeProperty_GetSpecularPower_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpecularPower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSpecularPower(temp0);
      }
    else
      {
      tempr = op->vtkVolumeProperty::GetSpecularPower(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetSpecularPower_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpecularPower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSpecularPower();
      }
    else
      {
      tempr = op->vtkVolumeProperty::GetSpecularPower();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetSpecularPower(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkVolumeProperty_GetSpecularPower_s1(self, args);
    case 0:
      return PyvtkVolumeProperty_GetSpecularPower_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetSpecularPower");
  return NULL;
}



static PyObject *
PyvtkVolumeProperty_UpdateMTimes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateMTimes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdateMTimes();
      }
    else
      {
      op->vtkVolumeProperty::UpdateMTimes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProperty_GetGradientOpacityMTime_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientOpacityMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  vtkTimeStamp tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGradientOpacityMTime(temp0);
      }
    else
      {
      tempr = op->vtkVolumeProperty::GetGradientOpacityMTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkTimeStamp");
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetGradientOpacityMTime_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientOpacityMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  vtkTimeStamp tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGradientOpacityMTime();
      }
    else
      {
      tempr = op->vtkVolumeProperty::GetGradientOpacityMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkTimeStamp");
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetGradientOpacityMTime(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkVolumeProperty_GetGradientOpacityMTime_s1(self, args);
    case 0:
      return PyvtkVolumeProperty_GetGradientOpacityMTime_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetGradientOpacityMTime");
  return NULL;
}



static PyObject *
PyvtkVolumeProperty_GetScalarOpacityMTime_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarOpacityMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  vtkTimeStamp tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarOpacityMTime(temp0);
      }
    else
      {
      tempr = op->vtkVolumeProperty::GetScalarOpacityMTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkTimeStamp");
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetScalarOpacityMTime_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarOpacityMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  vtkTimeStamp tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarOpacityMTime();
      }
    else
      {
      tempr = op->vtkVolumeProperty::GetScalarOpacityMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkTimeStamp");
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetScalarOpacityMTime(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkVolumeProperty_GetScalarOpacityMTime_s1(self, args);
    case 0:
      return PyvtkVolumeProperty_GetScalarOpacityMTime_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetScalarOpacityMTime");
  return NULL;
}



static PyObject *
PyvtkVolumeProperty_GetRGBTransferFunctionMTime_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRGBTransferFunctionMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  vtkTimeStamp tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRGBTransferFunctionMTime(temp0);
      }
    else
      {
      tempr = op->vtkVolumeProperty::GetRGBTransferFunctionMTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkTimeStamp");
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetRGBTransferFunctionMTime_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRGBTransferFunctionMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  vtkTimeStamp tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRGBTransferFunctionMTime();
      }
    else
      {
      tempr = op->vtkVolumeProperty::GetRGBTransferFunctionMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkTimeStamp");
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetRGBTransferFunctionMTime(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkVolumeProperty_GetRGBTransferFunctionMTime_s1(self, args);
    case 0:
      return PyvtkVolumeProperty_GetRGBTransferFunctionMTime_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetRGBTransferFunctionMTime");
  return NULL;
}



static PyObject *
PyvtkVolumeProperty_GetGrayTransferFunctionMTime_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGrayTransferFunctionMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  vtkTimeStamp tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGrayTransferFunctionMTime(temp0);
      }
    else
      {
      tempr = op->vtkVolumeProperty::GetGrayTransferFunctionMTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkTimeStamp");
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetGrayTransferFunctionMTime_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGrayTransferFunctionMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  vtkTimeStamp tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGrayTransferFunctionMTime();
      }
    else
      {
      tempr = op->vtkVolumeProperty::GetGrayTransferFunctionMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkTimeStamp");
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetGrayTransferFunctionMTime(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkVolumeProperty_GetGrayTransferFunctionMTime_s1(self, args);
    case 0:
      return PyvtkVolumeProperty_GetGrayTransferFunctionMTime_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetGrayTransferFunctionMTime");
  return NULL;
}


static PyMethodDef PyvtkVolumeProperty_Methods[] = {
  {(char*)"GetClassName", PyvtkVolumeProperty_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVolumeProperty_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVolumeProperty_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkVolumeProperty\nC++: vtkVolumeProperty *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkVolumeProperty_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkVolumeProperty\nC++: vtkVolumeProperty *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"DeepCopy", PyvtkVolumeProperty_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkVolumeProperty)\nC++: void DeepCopy(vtkVolumeProperty *p)\n\n"},
  {(char*)"GetMTime", PyvtkVolumeProperty_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nGet the modified time for this object (or the properties\nregistered with this object).\n"},
  {(char*)"SetIndependentComponents", PyvtkVolumeProperty_SetIndependentComponents, 1,
   (char*)"V.SetIndependentComponents(int)\nC++: void SetIndependentComponents(int)\n\nDoes the data have independent components, or do some define\ncolor only? If IndependentComponents is On (the default) then\neach component will be independently passed through a lookup\ntable to determine RGBA, shaded. Some volume Mappers can handle 1\nto 4 component unsigned char or unsigned short data (see each\nmapper header file to determine functionality). If\nIndependentComponents is Off, then you must have either 2 or 4\ncomponent data. For 2 component data, the first is passed through\nthe first color transfer function and the second component is\npassed through the first opacity transfer function. Normals will\nbe generated off of the second component. For 4 component data,\nthe first three will directly represent RGB (no lookup table).\nThe fourth component will be passed through the first scalar\nopacity transfer function for opacity. Normals will be generated\nfrom the fourth component.\n"},
  {(char*)"GetIndependentComponentsMinValue", PyvtkVolumeProperty_GetIndependentComponentsMinValue, 1,
   (char*)"V.GetIndependentComponentsMinValue() -> int\nC++: int GetIndependentComponentsMinValue()\n\nDoes the data have independent components, or do some define\ncolor only? If IndependentComponents is On (the default) then\neach component will be independently passed through a lookup\ntable to determine RGBA, shaded. Some volume Mappers can handle 1\nto 4 component unsigned char or unsigned short data (see each\nmapper header file to determine functionality). If\nIndependentComponents is Off, then you must have either 2 or 4\ncomponent data. For 2 component data, the first is passed through\nthe first color transfer function and the second component is\npassed through the first opacity transfer function. Normals will\nbe generated off of the second component. For 4 component data,\nthe first three will directly represent RGB (no lookup table).\nThe fourth component will be passed through the first scalar\nopacity transfer function for opacity. Normals will be generated\nfrom the fourth component.\n"},
  {(char*)"GetIndependentComponentsMaxValue", PyvtkVolumeProperty_GetIndependentComponentsMaxValue, 1,
   (char*)"V.GetIndependentComponentsMaxValue() -> int\nC++: int GetIndependentComponentsMaxValue()\n\nDoes the data have independent components, or do some define\ncolor only? If IndependentComponents is On (the default) then\neach component will be independently passed through a lookup\ntable to determine RGBA, shaded. Some volume Mappers can handle 1\nto 4 component unsigned char or unsigned short data (see each\nmapper header file to determine functionality). If\nIndependentComponents is Off, then you must have either 2 or 4\ncomponent data. For 2 component data, the first is passed through\nthe first color transfer function and the second component is\npassed through the first opacity transfer function. Normals will\nbe generated off of the second component. For 4 component data,\nthe first three will directly represent RGB (no lookup table).\nThe fourth component will be passed through the first scalar\nopacity transfer function for opacity. Normals will be generated\nfrom the fourth component.\n"},
  {(char*)"GetIndependentComponents", PyvtkVolumeProperty_GetIndependentComponents, 1,
   (char*)"V.GetIndependentComponents() -> int\nC++: int GetIndependentComponents()\n\nDoes the data have independent components, or do some define\ncolor only? If IndependentComponents is On (the default) then\neach component will be independently passed through a lookup\ntable to determine RGBA, shaded. Some volume Mappers can handle 1\nto 4 component unsigned char or unsigned short data (see each\nmapper header file to determine functionality). If\nIndependentComponents is Off, then you must have either 2 or 4\ncomponent data. For 2 component data, the first is passed through\nthe first color transfer function and the second component is\npassed through the first opacity transfer function. Normals will\nbe generated off of the second component. For 4 component data,\nthe first three will directly represent RGB (no lookup table).\nThe fourth component will be passed through the first scalar\nopacity transfer function for opacity. Normals will be generated\nfrom the fourth component.\n"},
  {(char*)"IndependentComponentsOn", PyvtkVolumeProperty_IndependentComponentsOn, 1,
   (char*)"V.IndependentComponentsOn()\nC++: void IndependentComponentsOn()\n\nDoes the data have independent components, or do some define\ncolor only? If IndependentComponents is On (the default) then\neach component will be independently passed through a lookup\ntable to determine RGBA, shaded. Some volume Mappers can handle 1\nto 4 component unsigned char or unsigned short data (see each\nmapper header file to determine functionality). If\nIndependentComponents is Off, then you must have either 2 or 4\ncomponent data. For 2 component data, the first is passed through\nthe first color transfer function and the second component is\npassed through the first opacity transfer function. Normals will\nbe generated off of the second component. For 4 component data,\nthe first three will directly represent RGB (no lookup table).\nThe fourth component will be passed through the first scalar\nopacity transfer function for opacity. Normals will be generated\nfrom the fourth component.\n"},
  {(char*)"IndependentComponentsOff", PyvtkVolumeProperty_IndependentComponentsOff, 1,
   (char*)"V.IndependentComponentsOff()\nC++: void IndependentComponentsOff()\n\nDoes the data have independent components, or do some define\ncolor only? If IndependentComponents is On (the default) then\neach component will be independently passed through a lookup\ntable to determine RGBA, shaded. Some volume Mappers can handle 1\nto 4 component unsigned char or unsigned short data (see each\nmapper header file to determine functionality). If\nIndependentComponents is Off, then you must have either 2 or 4\ncomponent data. For 2 component data, the first is passed through\nthe first color transfer function and the second component is\npassed through the first opacity transfer function. Normals will\nbe generated off of the second component. For 4 component data,\nthe first three will directly represent RGB (no lookup table).\nThe fourth component will be passed through the first scalar\nopacity transfer function for opacity. Normals will be generated\nfrom the fourth component.\n"},
  {(char*)"SetInterpolationType", PyvtkVolumeProperty_SetInterpolationType, 1,
   (char*)"V.SetInterpolationType(int)\nC++: void SetInterpolationType(int)\n\nSet the interpolation type for sampling a volume. Initial value\nis VTK_NEAREST_INTERPOLATION.\n"},
  {(char*)"GetInterpolationTypeMinValue", PyvtkVolumeProperty_GetInterpolationTypeMinValue, 1,
   (char*)"V.GetInterpolationTypeMinValue() -> int\nC++: int GetInterpolationTypeMinValue()\n\nSet the interpolation type for sampling a volume. Initial value\nis VTK_NEAREST_INTERPOLATION.\n"},
  {(char*)"GetInterpolationTypeMaxValue", PyvtkVolumeProperty_GetInterpolationTypeMaxValue, 1,
   (char*)"V.GetInterpolationTypeMaxValue() -> int\nC++: int GetInterpolationTypeMaxValue()\n\nSet the interpolation type for sampling a volume. Initial value\nis VTK_NEAREST_INTERPOLATION.\n"},
  {(char*)"GetInterpolationType", PyvtkVolumeProperty_GetInterpolationType, 1,
   (char*)"V.GetInterpolationType() -> int\nC++: int GetInterpolationType()\n\nSet the interpolation type for sampling a volume. Initial value\nis VTK_NEAREST_INTERPOLATION.\n"},
  {(char*)"SetInterpolationTypeToNearest", PyvtkVolumeProperty_SetInterpolationTypeToNearest, 1,
   (char*)"V.SetInterpolationTypeToNearest()\nC++: void SetInterpolationTypeToNearest()\n\nSet the interpolation type for sampling a volume. Initial value\nis VTK_NEAREST_INTERPOLATION.\n"},
  {(char*)"SetInterpolationTypeToLinear", PyvtkVolumeProperty_SetInterpolationTypeToLinear, 1,
   (char*)"V.SetInterpolationTypeToLinear()\nC++: void SetInterpolationTypeToLinear()\n\nSet the interpolation type for sampling a volume. Initial value\nis VTK_NEAREST_INTERPOLATION.\n"},
  {(char*)"GetInterpolationTypeAsString", PyvtkVolumeProperty_GetInterpolationTypeAsString, 1,
   (char*)"V.GetInterpolationTypeAsString() -> string\nC++: const char *GetInterpolationTypeAsString(void)\n\nSet the interpolation type for sampling a volume. Initial value\nis VTK_NEAREST_INTERPOLATION.\n"},
  {(char*)"SetComponentWeight", PyvtkVolumeProperty_SetComponentWeight, 1,
   (char*)"V.SetComponentWeight(int, float)\nC++: virtual void SetComponentWeight(int index, double value)\n\nSet/Get the scalar component weights\n"},
  {(char*)"GetComponentWeight", PyvtkVolumeProperty_GetComponentWeight, 1,
   (char*)"V.GetComponentWeight(int) -> float\nC++: virtual double GetComponentWeight(int index)\n\nSet/Get the scalar component weights\n"},
  {(char*)"SetColor", PyvtkVolumeProperty_SetColor, 1,
   (char*)"V.SetColor(int, vtkPiecewiseFunction)\nC++: void SetColor(int index, vtkPiecewiseFunction *function)\nV.SetColor(vtkPiecewiseFunction)\nC++: void SetColor(vtkPiecewiseFunction *f)\nV.SetColor(int, vtkColorTransferFunction)\nC++: void SetColor(int index, vtkColorTransferFunction *function)\nV.SetColor(vtkColorTransferFunction)\nC++: void SetColor(vtkColorTransferFunction *f)\n\nSet the color of a volume to a gray level transfer function for\nthe component indicated by index. This will set the color\nchannels for this component to 1.\n"},
  {(char*)"GetColorChannels", PyvtkVolumeProperty_GetColorChannels, 1,
   (char*)"V.GetColorChannels(int) -> int\nC++: int GetColorChannels(int index)\nV.GetColorChannels() -> int\nC++: int GetColorChannels()\n\nGet the number of color channels in the transfer function for the\ngiven component.\n"},
  {(char*)"GetGrayTransferFunction", PyvtkVolumeProperty_GetGrayTransferFunction, 1,
   (char*)"V.GetGrayTransferFunction(int) -> vtkPiecewiseFunction\nC++: vtkPiecewiseFunction *GetGrayTransferFunction(int index)\nV.GetGrayTransferFunction() -> vtkPiecewiseFunction\nC++: vtkPiecewiseFunction *GetGrayTransferFunction()\n\nGet the gray transfer function. If no transfer function has been\nset for this component, a default one is created and returned.\n"},
  {(char*)"GetRGBTransferFunction", PyvtkVolumeProperty_GetRGBTransferFunction, 1,
   (char*)"V.GetRGBTransferFunction(int) -> vtkColorTransferFunction\nC++: vtkColorTransferFunction *GetRGBTransferFunction(int index)\nV.GetRGBTransferFunction() -> vtkColorTransferFunction\nC++: vtkColorTransferFunction *GetRGBTransferFunction()\n\nGet the RGB transfer function for the given component. If no\ntransfer function has been set for this component, a default one\nis created and returned.\n"},
  {(char*)"SetScalarOpacity", PyvtkVolumeProperty_SetScalarOpacity, 1,
   (char*)"V.SetScalarOpacity(int, vtkPiecewiseFunction)\nC++: void SetScalarOpacity(int index,\n    vtkPiecewiseFunction *function)\nV.SetScalarOpacity(vtkPiecewiseFunction)\nC++: void SetScalarOpacity(vtkPiecewiseFunction *f)\n\nSet the opacity of a volume to an opacity transfer function based\non scalar value for the component indicated by index.\n"},
  {(char*)"GetScalarOpacity", PyvtkVolumeProperty_GetScalarOpacity, 1,
   (char*)"V.GetScalarOpacity(int) -> vtkPiecewiseFunction\nC++: vtkPiecewiseFunction *GetScalarOpacity(int index)\nV.GetScalarOpacity() -> vtkPiecewiseFunction\nC++: vtkPiecewiseFunction *GetScalarOpacity()\n\nGet the scalar opacity transfer function for the given component.\nIf no transfer function has been set for this component, a\ndefault one is created and returned.\n"},
  {(char*)"SetScalarOpacityUnitDistance", PyvtkVolumeProperty_SetScalarOpacityUnitDistance, 1,
   (char*)"V.SetScalarOpacityUnitDistance(int, float)\nC++: void SetScalarOpacityUnitDistance(int index, double distance)\nV.SetScalarOpacityUnitDistance(float)\nC++: void SetScalarOpacityUnitDistance(double distance)\n\nSet/Get the unit distance on which the scalar opacity transfer\nfunction is defined. By default this is 1.0, meaning that over a\ndistance of 1.0 units, a given opacity (from the transfer\nfunction) is accumulated. This is adjusted for the actual\nsampling distance during rendering.\n"},
  {(char*)"GetScalarOpacityUnitDistance", PyvtkVolumeProperty_GetScalarOpacityUnitDistance, 1,
   (char*)"V.GetScalarOpacityUnitDistance(int) -> float\nC++: double GetScalarOpacityUnitDistance(int index)\nV.GetScalarOpacityUnitDistance() -> float\nC++: double GetScalarOpacityUnitDistance()\n\nSet/Get the unit distance on which the scalar opacity transfer\nfunction is defined. By default this is 1.0, meaning that over a\ndistance of 1.0 units, a given opacity (from the transfer\nfunction) is accumulated. This is adjusted for the actual\nsampling distance during rendering.\n"},
  {(char*)"SetGradientOpacity", PyvtkVolumeProperty_SetGradientOpacity, 1,
   (char*)"V.SetGradientOpacity(int, vtkPiecewiseFunction)\nC++: void SetGradientOpacity(int index,\n    vtkPiecewiseFunction *function)\nV.SetGradientOpacity(vtkPiecewiseFunction)\nC++: void SetGradientOpacity(vtkPiecewiseFunction *function)\n\nSet the opacity of a volume to an opacity transfer function based\non gradient magnitude for the given component.\n"},
  {(char*)"GetGradientOpacity", PyvtkVolumeProperty_GetGradientOpacity, 1,
   (char*)"V.GetGradientOpacity(int) -> vtkPiecewiseFunction\nC++: vtkPiecewiseFunction *GetGradientOpacity(int index)\nV.GetGradientOpacity() -> vtkPiecewiseFunction\nC++: vtkPiecewiseFunction *GetGradientOpacity()\n\nGet the gradient magnitude opacity transfer function for the\ngiven component. If no transfer function has been set for this\ncomponent, a default one is created and returned. This default\nfunction is always returned if DisableGradientOpacity is On for\nthat component.\n"},
  {(char*)"SetDisableGradientOpacity", PyvtkVolumeProperty_SetDisableGradientOpacity, 1,
   (char*)"V.SetDisableGradientOpacity(int, int)\nC++: virtual void SetDisableGradientOpacity(int index, int value)\nV.SetDisableGradientOpacity(int)\nC++: virtual void SetDisableGradientOpacity(int value)\n\nEnable/Disable the gradient opacity function for the given\ncomponent. If set to true, any call to GetGradientOpacity() will\nreturn a default function for this component. Note that the\ngradient opacity function is still stored, it is not set or reset\nand can be retrieved using GetStoredGradientOpacity().\n"},
  {(char*)"DisableGradientOpacityOn", PyvtkVolumeProperty_DisableGradientOpacityOn, 1,
   (char*)"V.DisableGradientOpacityOn(int)\nC++: virtual void DisableGradientOpacityOn(int index)\nV.DisableGradientOpacityOn()\nC++: virtual void DisableGradientOpacityOn()\n\nEnable/Disable the gradient opacity function for the given\ncomponent. If set to true, any call to GetGradientOpacity() will\nreturn a default function for this component. Note that the\ngradient opacity function is still stored, it is not set or reset\nand can be retrieved using GetStoredGradientOpacity().\n"},
  {(char*)"DisableGradientOpacityOff", PyvtkVolumeProperty_DisableGradientOpacityOff, 1,
   (char*)"V.DisableGradientOpacityOff(int)\nC++: virtual void DisableGradientOpacityOff(int index)\nV.DisableGradientOpacityOff()\nC++: virtual void DisableGradientOpacityOff()\n\nEnable/Disable the gradient opacity function for the given\ncomponent. If set to true, any call to GetGradientOpacity() will\nreturn a default function for this component. Note that the\ngradient opacity function is still stored, it is not set or reset\nand can be retrieved using GetStoredGradientOpacity().\n"},
  {(char*)"GetDisableGradientOpacity", PyvtkVolumeProperty_GetDisableGradientOpacity, 1,
   (char*)"V.GetDisableGradientOpacity(int) -> int\nC++: virtual int GetDisableGradientOpacity(int index)\nV.GetDisableGradientOpacity() -> int\nC++: virtual int GetDisableGradientOpacity()\n\nEnable/Disable the gradient opacity function for the given\ncomponent. If set to true, any call to GetGradientOpacity() will\nreturn a default function for this component. Note that the\ngradient opacity function is still stored, it is not set or reset\nand can be retrieved using GetStoredGradientOpacity().\n"},
  {(char*)"GetStoredGradientOpacity", PyvtkVolumeProperty_GetStoredGradientOpacity, 1,
   (char*)"V.GetStoredGradientOpacity(int) -> vtkPiecewiseFunction\nC++: vtkPiecewiseFunction *GetStoredGradientOpacity(int index)\nV.GetStoredGradientOpacity() -> vtkPiecewiseFunction\nC++: vtkPiecewiseFunction *GetStoredGradientOpacity()\n\nEnable/Disable the gradient opacity function for the given\ncomponent. If set to true, any call to GetGradientOpacity() will\nreturn a default function for this component. Note that the\ngradient opacity function is still stored, it is not set or reset\nand can be retrieved using GetStoredGradientOpacity().\n"},
  {(char*)"SetShade", PyvtkVolumeProperty_SetShade, 1,
   (char*)"V.SetShade(int, int)\nC++: void SetShade(int index, int value)\nV.SetShade(int)\nC++: void SetShade(int value)\n\nSet/Get the shading of a volume. If shading is turned off, then\nthe mapper for the volume will not perform shading calculations.\nIf shading is turned on, the mapper may perform shading\ncalculations - in some cases shading does not apply (for example,\nin a maximum intensity projection) and therefore shading will not\nbe performed even if this flag is on. For a compositing type of\nmapper, turning shading off is generally the same as setting\nambient=1, diffuse=0, specular=0. Shading can be independently\nturned on/off per component.\n"},
  {(char*)"GetShade", PyvtkVolumeProperty_GetShade, 1,
   (char*)"V.GetShade(int) -> int\nC++: int GetShade(int index)\nV.GetShade() -> int\nC++: int GetShade()\n\nSet/Get the shading of a volume. If shading is turned off, then\nthe mapper for the volume will not perform shading calculations.\nIf shading is turned on, the mapper may perform shading\ncalculations - in some cases shading does not apply (for example,\nin a maximum intensity projection) and therefore shading will not\nbe performed even if this flag is on. For a compositing type of\nmapper, turning shading off is generally the same as setting\nambient=1, diffuse=0, specular=0. Shading can be independently\nturned on/off per component.\n"},
  {(char*)"ShadeOn", PyvtkVolumeProperty_ShadeOn, 1,
   (char*)"V.ShadeOn(int)\nC++: void ShadeOn(int index)\nV.ShadeOn()\nC++: void ShadeOn()\n\nSet/Get the shading of a volume. If shading is turned off, then\nthe mapper for the volume will not perform shading calculations.\nIf shading is turned on, the mapper may perform shading\ncalculations - in some cases shading does not apply (for example,\nin a maximum intensity projection) and therefore shading will not\nbe performed even if this flag is on. For a compositing type of\nmapper, turning shading off is generally the same as setting\nambient=1, diffuse=0, specular=0. Shading can be independently\nturned on/off per component.\n"},
  {(char*)"ShadeOff", PyvtkVolumeProperty_ShadeOff, 1,
   (char*)"V.ShadeOff(int)\nC++: void ShadeOff(int index)\nV.ShadeOff()\nC++: void ShadeOff()\n\nSet/Get the shading of a volume. If shading is turned off, then\nthe mapper for the volume will not perform shading calculations.\nIf shading is turned on, the mapper may perform shading\ncalculations - in some cases shading does not apply (for example,\nin a maximum intensity projection) and therefore shading will not\nbe performed even if this flag is on. For a compositing type of\nmapper, turning shading off is generally the same as setting\nambient=1, diffuse=0, specular=0. Shading can be independently\nturned on/off per component.\n"},
  {(char*)"SetAmbient", PyvtkVolumeProperty_SetAmbient, 1,
   (char*)"V.SetAmbient(int, float)\nC++: void SetAmbient(int index, double value)\nV.SetAmbient(float)\nC++: void SetAmbient(double value)\n\nSet/Get the ambient lighting coefficient.\n"},
  {(char*)"GetAmbient", PyvtkVolumeProperty_GetAmbient, 1,
   (char*)"V.GetAmbient(int) -> float\nC++: double GetAmbient(int index)\nV.GetAmbient() -> float\nC++: double GetAmbient()\n\nSet/Get the ambient lighting coefficient.\n"},
  {(char*)"SetDiffuse", PyvtkVolumeProperty_SetDiffuse, 1,
   (char*)"V.SetDiffuse(int, float)\nC++: void SetDiffuse(int index, double value)\nV.SetDiffuse(float)\nC++: void SetDiffuse(double value)\n\nSet/Get the diffuse lighting coefficient.\n"},
  {(char*)"GetDiffuse", PyvtkVolumeProperty_GetDiffuse, 1,
   (char*)"V.GetDiffuse(int) -> float\nC++: double GetDiffuse(int index)\nV.GetDiffuse() -> float\nC++: double GetDiffuse()\n\nSet/Get the diffuse lighting coefficient.\n"},
  {(char*)"SetSpecular", PyvtkVolumeProperty_SetSpecular, 1,
   (char*)"V.SetSpecular(int, float)\nC++: void SetSpecular(int index, double value)\nV.SetSpecular(float)\nC++: void SetSpecular(double value)\n\nSet/Get the specular lighting coefficient.\n"},
  {(char*)"GetSpecular", PyvtkVolumeProperty_GetSpecular, 1,
   (char*)"V.GetSpecular(int) -> float\nC++: double GetSpecular(int index)\nV.GetSpecular() -> float\nC++: double GetSpecular()\n\nSet/Get the specular lighting coefficient.\n"},
  {(char*)"SetSpecularPower", PyvtkVolumeProperty_SetSpecularPower, 1,
   (char*)"V.SetSpecularPower(int, float)\nC++: void SetSpecularPower(int index, double value)\nV.SetSpecularPower(float)\nC++: void SetSpecularPower(double value)\n\nSet/Get the specular power.\n"},
  {(char*)"GetSpecularPower", PyvtkVolumeProperty_GetSpecularPower, 1,
   (char*)"V.GetSpecularPower(int) -> float\nC++: double GetSpecularPower(int index)\nV.GetSpecularPower() -> float\nC++: double GetSpecularPower()\n\nSet/Get the specular power.\n"},
  {(char*)"UpdateMTimes", PyvtkVolumeProperty_UpdateMTimes, 1,
   (char*)"V.UpdateMTimes()\nC++: void UpdateMTimes()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE\nUpdateMTimes performs a Modified() on all TimeStamps. This is\nused by vtkVolume when the property is set, so that any other\nobject that might have been caching information for the property\nwill rebuild.\n"},
  {(char*)"GetGradientOpacityMTime", PyvtkVolumeProperty_GetGradientOpacityMTime, 1,
   (char*)"V.GetGradientOpacityMTime(int) -> vtkTimeStamp\nC++: vtkTimeStamp GetGradientOpacityMTime(int index)\nV.GetGradientOpacityMTime() -> vtkTimeStamp\nC++: vtkTimeStamp GetGradientOpacityMTime()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Get the\ntime that the gradient opacity transfer function was set\n"},
  {(char*)"GetScalarOpacityMTime", PyvtkVolumeProperty_GetScalarOpacityMTime, 1,
   (char*)"V.GetScalarOpacityMTime(int) -> vtkTimeStamp\nC++: vtkTimeStamp GetScalarOpacityMTime(int index)\nV.GetScalarOpacityMTime() -> vtkTimeStamp\nC++: vtkTimeStamp GetScalarOpacityMTime()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Get the\ntime that the scalar opacity transfer function was set.\n"},
  {(char*)"GetRGBTransferFunctionMTime", PyvtkVolumeProperty_GetRGBTransferFunctionMTime, 1,
   (char*)"V.GetRGBTransferFunctionMTime(int) -> vtkTimeStamp\nC++: vtkTimeStamp GetRGBTransferFunctionMTime(int index)\nV.GetRGBTransferFunctionMTime() -> vtkTimeStamp\nC++: vtkTimeStamp GetRGBTransferFunctionMTime()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Get the\ntime that the RGBTransferFunction was set\n"},
  {(char*)"GetGrayTransferFunctionMTime", PyvtkVolumeProperty_GetGrayTransferFunctionMTime, 1,
   (char*)"V.GetGrayTransferFunctionMTime(int) -> vtkTimeStamp\nC++: vtkTimeStamp GetGrayTransferFunctionMTime(int index)\nV.GetGrayTransferFunctionMTime() -> vtkTimeStamp\nC++: vtkTimeStamp GetGrayTransferFunctionMTime()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Get the\ntime that the GrayTransferFunction was set\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkVolumeProperty_StaticNew()
{
  return vtkVolumeProperty::New();
}

PyObject *PyVTKClass_vtkVolumePropertyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkVolumeProperty_StaticNew,
    PyvtkVolumeProperty_Methods,
    "vtkVolumeProperty", modulename,
    NULL, NULL,
    PyvtkVolumeProperty_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkVolumeProperty_Doc()
{
  static const char *docstring[] = {
    "vtkVolumeProperty - represents the common properties for rendering a\nvolume.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkVolumeProperty is used to represent common properties associated\nwith volume rendering. This includes properties for determining the\ntype of interpolation to use when sampling a volume, the color of a\nvolume, the scalar opacity of a volume, the gradient opacity of a\nvolume, and the shading parameters of a volume.\n\nWhen the scalar opacity or the gradient opacity of a volume is not\nset, then the ",
    "function is defined to be a constant value of 1.0. When\na scalar and gradient opacity are both set simultaneously, then the\nopacity is defined to be the product of the scalar opacity and\ngradient opacity transfer functions.\n\nMost properties can be set per \"component\" for volume mappers that\nsupport multiple independent components. If you are using 2 component\ndata as LV or 4 component data as RGBV",
    " (as specified in the mapper)\nonly the first scalar opacity and gradient opacity transfer functions\nwill be used (and all color functions will be ignored). Omitting the\nindex parameter on the Set/Get methods will access index = 0.\n\nSee Also:\n\nvtkPiecewiseFunction vtkColorTransferFunction\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVolumeProperty(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVolumePropertyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVolumeProperty", o) != 0)
    {
    Py_DECREF(o);
    }

}

