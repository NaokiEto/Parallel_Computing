// python wrapper for vtkRibbonFilter
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
#include "vtkRibbonFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkRibbonFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkRibbonFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkRibbonFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkRibbonFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkRibbonFilter_Doc();


static PyObject *
PyvtkRibbonFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

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
      tempr = op->vtkRibbonFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

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
      tempr = op->vtkRibbonFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  vtkRibbonFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkRibbonFilter::NewInstance();
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
PyvtkRibbonFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkRibbonFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkRibbonFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_SetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWidth(temp0);
      }
    else
      {
      op->vtkRibbonFilter::SetWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_GetWidthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWidthMinValue();
      }
    else
      {
      tempr = op->vtkRibbonFilter::GetWidthMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_GetWidthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWidthMaxValue();
      }
    else
      {
      tempr = op->vtkRibbonFilter::GetWidthMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_GetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWidth();
      }
    else
      {
      tempr = op->vtkRibbonFilter::GetWidth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_SetAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAngle(temp0);
      }
    else
      {
      op->vtkRibbonFilter::SetAngle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_GetAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAngleMinValue();
      }
    else
      {
      tempr = op->vtkRibbonFilter::GetAngleMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_GetAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAngleMaxValue();
      }
    else
      {
      tempr = op->vtkRibbonFilter::GetAngleMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_GetAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAngle();
      }
    else
      {
      tempr = op->vtkRibbonFilter::GetAngle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_SetVaryWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVaryWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVaryWidth(temp0);
      }
    else
      {
      op->vtkRibbonFilter::SetVaryWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_GetVaryWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVaryWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVaryWidth();
      }
    else
      {
      tempr = op->vtkRibbonFilter::GetVaryWidth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_VaryWidthOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VaryWidthOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->VaryWidthOn();
      }
    else
      {
      op->vtkRibbonFilter::VaryWidthOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_VaryWidthOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VaryWidthOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->VaryWidthOff();
      }
    else
      {
      op->vtkRibbonFilter::VaryWidthOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_SetWidthFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidthFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWidthFactor(temp0);
      }
    else
      {
      op->vtkRibbonFilter::SetWidthFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_GetWidthFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidthFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWidthFactor();
      }
    else
      {
      tempr = op->vtkRibbonFilter::GetWidthFactor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_SetDefaultNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

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
      op->SetDefaultNormal(temp0, temp1, temp2);
      }
    else
      {
      op->vtkRibbonFilter::SetDefaultNormal(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRibbonFilter_SetDefaultNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetDefaultNormal(temp0);
      }
    else
      {
      op->vtkRibbonFilter::SetDefaultNormal(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRibbonFilter_SetDefaultNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkRibbonFilter_SetDefaultNormal_s1(self, args);
    case 1:
      return PyvtkRibbonFilter_SetDefaultNormal_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDefaultNormal");
  return NULL;
}



static PyObject *
PyvtkRibbonFilter_GetDefaultNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDefaultNormal();
      }
    else
      {
      tempr = op->vtkRibbonFilter::GetDefaultNormal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_SetUseDefaultNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseDefaultNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseDefaultNormal(temp0);
      }
    else
      {
      op->vtkRibbonFilter::SetUseDefaultNormal(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_GetUseDefaultNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDefaultNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseDefaultNormal();
      }
    else
      {
      tempr = op->vtkRibbonFilter::GetUseDefaultNormal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_UseDefaultNormalOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDefaultNormalOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseDefaultNormalOn();
      }
    else
      {
      op->vtkRibbonFilter::UseDefaultNormalOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_UseDefaultNormalOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDefaultNormalOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseDefaultNormalOff();
      }
    else
      {
      op->vtkRibbonFilter::UseDefaultNormalOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_SetGenerateTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateTCoords(temp0);
      }
    else
      {
      op->vtkRibbonFilter::SetGenerateTCoords(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_GetGenerateTCoordsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTCoordsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenerateTCoordsMinValue();
      }
    else
      {
      tempr = op->vtkRibbonFilter::GetGenerateTCoordsMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_GetGenerateTCoordsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTCoordsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenerateTCoordsMaxValue();
      }
    else
      {
      tempr = op->vtkRibbonFilter::GetGenerateTCoordsMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_GetGenerateTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenerateTCoords();
      }
    else
      {
      tempr = op->vtkRibbonFilter::GetGenerateTCoords();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_SetGenerateTCoordsToOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoordsToOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateTCoordsToOff();
      }
    else
      {
      op->vtkRibbonFilter::SetGenerateTCoordsToOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_SetGenerateTCoordsToNormalizedLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoordsToNormalizedLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateTCoordsToNormalizedLength();
      }
    else
      {
      op->vtkRibbonFilter::SetGenerateTCoordsToNormalizedLength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_SetGenerateTCoordsToUseLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoordsToUseLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateTCoordsToUseLength();
      }
    else
      {
      op->vtkRibbonFilter::SetGenerateTCoordsToUseLength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_SetGenerateTCoordsToUseScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoordsToUseScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateTCoordsToUseScalars();
      }
    else
      {
      op->vtkRibbonFilter::SetGenerateTCoordsToUseScalars();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_GetGenerateTCoordsAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTCoordsAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenerateTCoordsAsString();
      }
    else
      {
      tempr = op->vtkRibbonFilter::GetGenerateTCoordsAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_SetTextureLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTextureLength(temp0);
      }
    else
      {
      op->vtkRibbonFilter::SetTextureLength(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_GetTextureLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextureLengthMinValue();
      }
    else
      {
      tempr = op->vtkRibbonFilter::GetTextureLengthMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_GetTextureLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextureLengthMaxValue();
      }
    else
      {
      tempr = op->vtkRibbonFilter::GetTextureLengthMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRibbonFilter_GetTextureLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextureLength();
      }
    else
      {
      tempr = op->vtkRibbonFilter::GetTextureLength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkRibbonFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkRibbonFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRibbonFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRibbonFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkRibbonFilter\nC++: vtkRibbonFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRibbonFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRibbonFilter\nC++: vtkRibbonFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetWidth", PyvtkRibbonFilter_SetWidth, 1,
   (char*)"V.SetWidth(float)\nC++: void SetWidth(double)\n\nSet the \"half\" width of the ribbon. If the width is allowed to\nvary, this is the minimum width. The default is 0.5\n"},
  {(char*)"GetWidthMinValue", PyvtkRibbonFilter_GetWidthMinValue, 1,
   (char*)"V.GetWidthMinValue() -> float\nC++: double GetWidthMinValue()\n\nSet the \"half\" width of the ribbon. If the width is allowed to\nvary, this is the minimum width. The default is 0.5\n"},
  {(char*)"GetWidthMaxValue", PyvtkRibbonFilter_GetWidthMaxValue, 1,
   (char*)"V.GetWidthMaxValue() -> float\nC++: double GetWidthMaxValue()\n\nSet the \"half\" width of the ribbon. If the width is allowed to\nvary, this is the minimum width. The default is 0.5\n"},
  {(char*)"GetWidth", PyvtkRibbonFilter_GetWidth, 1,
   (char*)"V.GetWidth() -> float\nC++: double GetWidth()\n\nSet the \"half\" width of the ribbon. If the width is allowed to\nvary, this is the minimum width. The default is 0.5\n"},
  {(char*)"SetAngle", PyvtkRibbonFilter_SetAngle, 1,
   (char*)"V.SetAngle(float)\nC++: void SetAngle(double)\n\nSet the offset angle of the ribbon from the line normal. (The\nangle is expressed in degrees.) The default is 0.0\n"},
  {(char*)"GetAngleMinValue", PyvtkRibbonFilter_GetAngleMinValue, 1,
   (char*)"V.GetAngleMinValue() -> float\nC++: double GetAngleMinValue()\n\nSet the offset angle of the ribbon from the line normal. (The\nangle is expressed in degrees.) The default is 0.0\n"},
  {(char*)"GetAngleMaxValue", PyvtkRibbonFilter_GetAngleMaxValue, 1,
   (char*)"V.GetAngleMaxValue() -> float\nC++: double GetAngleMaxValue()\n\nSet the offset angle of the ribbon from the line normal. (The\nangle is expressed in degrees.) The default is 0.0\n"},
  {(char*)"GetAngle", PyvtkRibbonFilter_GetAngle, 1,
   (char*)"V.GetAngle() -> float\nC++: double GetAngle()\n\nSet the offset angle of the ribbon from the line normal. (The\nangle is expressed in degrees.) The default is 0.0\n"},
  {(char*)"SetVaryWidth", PyvtkRibbonFilter_SetVaryWidth, 1,
   (char*)"V.SetVaryWidth(int)\nC++: void SetVaryWidth(int a)\n\nTurn on/off the variation of ribbon width with scalar value. The\ndefault is Off\n"},
  {(char*)"GetVaryWidth", PyvtkRibbonFilter_GetVaryWidth, 1,
   (char*)"V.GetVaryWidth() -> int\nC++: int GetVaryWidth()\n\nTurn on/off the variation of ribbon width with scalar value. The\ndefault is Off\n"},
  {(char*)"VaryWidthOn", PyvtkRibbonFilter_VaryWidthOn, 1,
   (char*)"V.VaryWidthOn()\nC++: void VaryWidthOn()\n\nTurn on/off the variation of ribbon width with scalar value. The\ndefault is Off\n"},
  {(char*)"VaryWidthOff", PyvtkRibbonFilter_VaryWidthOff, 1,
   (char*)"V.VaryWidthOff()\nC++: void VaryWidthOff()\n\nTurn on/off the variation of ribbon width with scalar value. The\ndefault is Off\n"},
  {(char*)"SetWidthFactor", PyvtkRibbonFilter_SetWidthFactor, 1,
   (char*)"V.SetWidthFactor(float)\nC++: void SetWidthFactor(double a)\n\nSet the maximum ribbon width in terms of a multiple of the\nminimum width. The default is 2.0\n"},
  {(char*)"GetWidthFactor", PyvtkRibbonFilter_GetWidthFactor, 1,
   (char*)"V.GetWidthFactor() -> float\nC++: double GetWidthFactor()\n\nSet the maximum ribbon width in terms of a multiple of the\nminimum width. The default is 2.0\n"},
  {(char*)"SetDefaultNormal", PyvtkRibbonFilter_SetDefaultNormal, 1,
   (char*)"V.SetDefaultNormal(float, float, float)\nC++: void SetDefaultNormal(double, double, double)\nV.SetDefaultNormal((float, float, float))\nC++: void SetDefaultNormal(double a[3])\n\n"},
  {(char*)"GetDefaultNormal", PyvtkRibbonFilter_GetDefaultNormal, 1,
   (char*)"V.GetDefaultNormal() -> (float, float, float)\nC++: double *GetDefaultNormal()\n\nSet the default normal to use if no normals are supplied, and\nDefaultNormalOn is set. The default is (0,0,1)\n"},
  {(char*)"SetUseDefaultNormal", PyvtkRibbonFilter_SetUseDefaultNormal, 1,
   (char*)"V.SetUseDefaultNormal(int)\nC++: void SetUseDefaultNormal(int a)\n\nSet a boolean to control whether to use default normals. The\ndefault is Off\n"},
  {(char*)"GetUseDefaultNormal", PyvtkRibbonFilter_GetUseDefaultNormal, 1,
   (char*)"V.GetUseDefaultNormal() -> int\nC++: int GetUseDefaultNormal()\n\nSet a boolean to control whether to use default normals. The\ndefault is Off\n"},
  {(char*)"UseDefaultNormalOn", PyvtkRibbonFilter_UseDefaultNormalOn, 1,
   (char*)"V.UseDefaultNormalOn()\nC++: void UseDefaultNormalOn()\n\nSet a boolean to control whether to use default normals. The\ndefault is Off\n"},
  {(char*)"UseDefaultNormalOff", PyvtkRibbonFilter_UseDefaultNormalOff, 1,
   (char*)"V.UseDefaultNormalOff()\nC++: void UseDefaultNormalOff()\n\nSet a boolean to control whether to use default normals. The\ndefault is Off\n"},
  {(char*)"SetGenerateTCoords", PyvtkRibbonFilter_SetGenerateTCoords, 1,
   (char*)"V.SetGenerateTCoords(int)\nC++: void SetGenerateTCoords(int)\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the ribbon with time textures, etc.\n"},
  {(char*)"GetGenerateTCoordsMinValue", PyvtkRibbonFilter_GetGenerateTCoordsMinValue, 1,
   (char*)"V.GetGenerateTCoordsMinValue() -> int\nC++: int GetGenerateTCoordsMinValue()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the ribbon with time textures, etc.\n"},
  {(char*)"GetGenerateTCoordsMaxValue", PyvtkRibbonFilter_GetGenerateTCoordsMaxValue, 1,
   (char*)"V.GetGenerateTCoordsMaxValue() -> int\nC++: int GetGenerateTCoordsMaxValue()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the ribbon with time textures, etc.\n"},
  {(char*)"GetGenerateTCoords", PyvtkRibbonFilter_GetGenerateTCoords, 1,
   (char*)"V.GetGenerateTCoords() -> int\nC++: int GetGenerateTCoords()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the ribbon with time textures, etc.\n"},
  {(char*)"SetGenerateTCoordsToOff", PyvtkRibbonFilter_SetGenerateTCoordsToOff, 1,
   (char*)"V.SetGenerateTCoordsToOff()\nC++: void SetGenerateTCoordsToOff()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the ribbon with time textures, etc.\n"},
  {(char*)"SetGenerateTCoordsToNormalizedLength", PyvtkRibbonFilter_SetGenerateTCoordsToNormalizedLength, 1,
   (char*)"V.SetGenerateTCoordsToNormalizedLength()\nC++: void SetGenerateTCoordsToNormalizedLength()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the ribbon with time textures, etc.\n"},
  {(char*)"SetGenerateTCoordsToUseLength", PyvtkRibbonFilter_SetGenerateTCoordsToUseLength, 1,
   (char*)"V.SetGenerateTCoordsToUseLength()\nC++: void SetGenerateTCoordsToUseLength()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the ribbon with time textures, etc.\n"},
  {(char*)"SetGenerateTCoordsToUseScalars", PyvtkRibbonFilter_SetGenerateTCoordsToUseScalars, 1,
   (char*)"V.SetGenerateTCoordsToUseScalars()\nC++: void SetGenerateTCoordsToUseScalars()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the ribbon with time textures, etc.\n"},
  {(char*)"GetGenerateTCoordsAsString", PyvtkRibbonFilter_GetGenerateTCoordsAsString, 1,
   (char*)"V.GetGenerateTCoordsAsString() -> string\nC++: const char *GetGenerateTCoordsAsString()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the ribbon with time textures, etc.\n"},
  {(char*)"SetTextureLength", PyvtkRibbonFilter_SetTextureLength, 1,
   (char*)"V.SetTextureLength(float)\nC++: void SetTextureLength(double)\n\nControl the conversion of units during the texture coordinates\ncalculation. The TextureLength indicates what length (whether\ncalculated from scalars or length) is mapped to the [0,1) texture\nspace. The default is 1.0\n"},
  {(char*)"GetTextureLengthMinValue", PyvtkRibbonFilter_GetTextureLengthMinValue, 1,
   (char*)"V.GetTextureLengthMinValue() -> float\nC++: double GetTextureLengthMinValue()\n\nControl the conversion of units during the texture coordinates\ncalculation. The TextureLength indicates what length (whether\ncalculated from scalars or length) is mapped to the [0,1) texture\nspace. The default is 1.0\n"},
  {(char*)"GetTextureLengthMaxValue", PyvtkRibbonFilter_GetTextureLengthMaxValue, 1,
   (char*)"V.GetTextureLengthMaxValue() -> float\nC++: double GetTextureLengthMaxValue()\n\nControl the conversion of units during the texture coordinates\ncalculation. The TextureLength indicates what length (whether\ncalculated from scalars or length) is mapped to the [0,1) texture\nspace. The default is 1.0\n"},
  {(char*)"GetTextureLength", PyvtkRibbonFilter_GetTextureLength, 1,
   (char*)"V.GetTextureLength() -> float\nC++: double GetTextureLength()\n\nControl the conversion of units during the texture coordinates\ncalculation. The TextureLength indicates what length (whether\ncalculated from scalars or length) is mapped to the [0,1) texture\nspace. The default is 1.0\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRibbonFilter_StaticNew()
{
  return vtkRibbonFilter::New();
}

PyObject *PyVTKClass_vtkRibbonFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRibbonFilter_StaticNew,
    PyvtkRibbonFilter_Methods,
    "vtkRibbonFilter", modulename,
    NULL, NULL,
    PyvtkRibbonFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkRibbonFilter_Doc()
{
  static const char *docstring[] = {
    "vtkRibbonFilter - create oriented ribbons from lines defined in\npolygonal dataset\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkRibbonFilter is a filter to create oriented ribbons from lines\ndefined in polygonal dataset. The orientation of the ribbon is along\nthe line segments and perpendicular to \"projected\" line normals.\nProjected line normals are the original line normals projected to be\nperpendicular to the local line segment. An offset angle can be\nspecified to rotate the ribbon with respect to the normal.\n\nCaveats",
    ":\n\nThe input line must not have duplicate points, or normals at points\nthat are parallel to the incoming/outgoing line segments. (Duplicate\npoints can be removed with vtkCleanPolyData.) If a line does not meet\nthis criteria, then that line is not tubed.\n\nSee Also:\n\nvtkTubeFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRibbonFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRibbonFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRibbonFilter", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_TCOORDS_OFF", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_TCOORDS_FROM_NORMALIZED_LENGTH", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_TCOORDS_FROM_LENGTH", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(3);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_TCOORDS_FROM_SCALARS", o) != 0)
    {
    Py_DECREF(o);
    }

}

