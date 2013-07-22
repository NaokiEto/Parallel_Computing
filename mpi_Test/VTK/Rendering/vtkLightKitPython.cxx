// python wrapper for vtkLightKit
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
#include "vtkLightKit.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkLightKit(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkLightKit(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkLightKitNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkLightKitNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkLightKit_Doc();


static PyObject *
PyvtkLightKit_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

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
      tempr = op->vtkLightKit::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

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
      tempr = op->vtkLightKit::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  vtkLightKit *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkLightKit::NewInstance();
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
PyvtkLightKit_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkLightKit *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkLightKit::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_SetKeyLightIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyLightIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetKeyLightIntensity(temp0);
      }
    else
      {
      op->vtkLightKit::SetKeyLightIntensity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetKeyLightIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyLightIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetKeyLightIntensity();
      }
    else
      {
      tempr = op->vtkLightKit::GetKeyLightIntensity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_SetKeyToFillRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyToFillRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetKeyToFillRatio(temp0);
      }
    else
      {
      op->vtkLightKit::SetKeyToFillRatio(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetKeyToFillRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyToFillRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetKeyToFillRatioMinValue();
      }
    else
      {
      tempr = op->vtkLightKit::GetKeyToFillRatioMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetKeyToFillRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyToFillRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetKeyToFillRatioMaxValue();
      }
    else
      {
      tempr = op->vtkLightKit::GetKeyToFillRatioMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetKeyToFillRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyToFillRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetKeyToFillRatio();
      }
    else
      {
      tempr = op->vtkLightKit::GetKeyToFillRatio();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_SetKeyToHeadRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyToHeadRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetKeyToHeadRatio(temp0);
      }
    else
      {
      op->vtkLightKit::SetKeyToHeadRatio(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetKeyToHeadRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyToHeadRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetKeyToHeadRatioMinValue();
      }
    else
      {
      tempr = op->vtkLightKit::GetKeyToHeadRatioMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetKeyToHeadRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyToHeadRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetKeyToHeadRatioMaxValue();
      }
    else
      {
      tempr = op->vtkLightKit::GetKeyToHeadRatioMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetKeyToHeadRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyToHeadRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetKeyToHeadRatio();
      }
    else
      {
      tempr = op->vtkLightKit::GetKeyToHeadRatio();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_SetKeyToBackRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyToBackRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetKeyToBackRatio(temp0);
      }
    else
      {
      op->vtkLightKit::SetKeyToBackRatio(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetKeyToBackRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyToBackRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetKeyToBackRatioMinValue();
      }
    else
      {
      tempr = op->vtkLightKit::GetKeyToBackRatioMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetKeyToBackRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyToBackRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetKeyToBackRatioMaxValue();
      }
    else
      {
      tempr = op->vtkLightKit::GetKeyToBackRatioMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetKeyToBackRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyToBackRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetKeyToBackRatio();
      }
    else
      {
      tempr = op->vtkLightKit::GetKeyToBackRatio();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_SetKeyLightWarmth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyLightWarmth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetKeyLightWarmth(temp0);
      }
    else
      {
      op->vtkLightKit::SetKeyLightWarmth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetKeyLightWarmth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyLightWarmth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetKeyLightWarmth();
      }
    else
      {
      tempr = op->vtkLightKit::GetKeyLightWarmth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_SetFillLightWarmth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFillLightWarmth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFillLightWarmth(temp0);
      }
    else
      {
      op->vtkLightKit::SetFillLightWarmth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetFillLightWarmth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFillLightWarmth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFillLightWarmth();
      }
    else
      {
      tempr = op->vtkLightKit::GetFillLightWarmth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_SetHeadLightWarmth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeadLightWarmth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHeadLightWarmth(temp0);
      }
    else
      {
      op->vtkLightKit::SetHeadLightWarmth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetHeadLightWarmth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeadLightWarmth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHeadLightWarmth();
      }
    else
      {
      tempr = op->vtkLightKit::GetHeadLightWarmth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_SetBackLightWarmth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackLightWarmth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBackLightWarmth(temp0);
      }
    else
      {
      op->vtkLightKit::SetBackLightWarmth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetBackLightWarmth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackLightWarmth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBackLightWarmth();
      }
    else
      {
      tempr = op->vtkLightKit::GetBackLightWarmth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetKeyLightColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyLightColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetKeyLightColor();
      }
    else
      {
      tempr = op->vtkLightKit::GetKeyLightColor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetFillLightColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFillLightColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFillLightColor();
      }
    else
      {
      tempr = op->vtkLightKit::GetFillLightColor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetHeadLightColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeadLightColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHeadLightColor();
      }
    else
      {
      tempr = op->vtkLightKit::GetHeadLightColor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetBackLightColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackLightColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBackLightColor();
      }
    else
      {
      tempr = op->vtkLightKit::GetBackLightColor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkLightKit_SetHeadlightWarmth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeadlightWarmth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHeadlightWarmth(temp0);
      }
    else
      {
      op->vtkLightKit::SetHeadlightWarmth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkLightKit_GetHeadlightWarmth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeadlightWarmth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHeadlightWarmth();
      }
    else
      {
      tempr = op->vtkLightKit::GetHeadlightWarmth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}
#endif


static PyObject *
PyvtkLightKit_MaintainLuminanceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MaintainLuminanceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MaintainLuminanceOn();
      }
    else
      {
      op->vtkLightKit::MaintainLuminanceOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_MaintainLuminanceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MaintainLuminanceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MaintainLuminanceOff();
      }
    else
      {
      op->vtkLightKit::MaintainLuminanceOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetMaintainLuminance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaintainLuminance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaintainLuminance();
      }
    else
      {
      tempr = op->vtkLightKit::GetMaintainLuminance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_SetMaintainLuminance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaintainLuminance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaintainLuminance(temp0);
      }
    else
      {
      op->vtkLightKit::SetMaintainLuminance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_SetKeyLightAngle_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyLightAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetKeyLightAngle(temp0, temp1);
      }
    else
      {
      op->vtkLightKit::SetKeyLightAngle(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLightKit_SetKeyLightAngle_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyLightAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetKeyLightAngle(temp0);
      }
    else
      {
      op->vtkLightKit::SetKeyLightAngle(temp0);
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
PyvtkLightKit_SetKeyLightAngle(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkLightKit_SetKeyLightAngle_s1(self, args);
    case 1:
      return PyvtkLightKit_SetKeyLightAngle_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetKeyLightAngle");
  return NULL;
}



static PyObject *
PyvtkLightKit_SetKeyLightElevation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyLightElevation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetKeyLightElevation(temp0);
      }
    else
      {
      op->vtkLightKit::SetKeyLightElevation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_SetKeyLightAzimuth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyLightAzimuth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetKeyLightAzimuth(temp0);
      }
    else
      {
      op->vtkLightKit::SetKeyLightAzimuth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetKeyLightAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyLightAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetKeyLightAngle();
      }
    else
      {
      tempr = op->vtkLightKit::GetKeyLightAngle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetKeyLightElevation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyLightElevation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetKeyLightElevation();
      }
    else
      {
      tempr = op->vtkLightKit::GetKeyLightElevation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetKeyLightAzimuth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyLightAzimuth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetKeyLightAzimuth();
      }
    else
      {
      tempr = op->vtkLightKit::GetKeyLightAzimuth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_SetFillLightAngle_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFillLightAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetFillLightAngle(temp0, temp1);
      }
    else
      {
      op->vtkLightKit::SetFillLightAngle(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLightKit_SetFillLightAngle_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFillLightAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetFillLightAngle(temp0);
      }
    else
      {
      op->vtkLightKit::SetFillLightAngle(temp0);
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
PyvtkLightKit_SetFillLightAngle(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkLightKit_SetFillLightAngle_s1(self, args);
    case 1:
      return PyvtkLightKit_SetFillLightAngle_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetFillLightAngle");
  return NULL;
}



static PyObject *
PyvtkLightKit_SetFillLightElevation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFillLightElevation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFillLightElevation(temp0);
      }
    else
      {
      op->vtkLightKit::SetFillLightElevation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_SetFillLightAzimuth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFillLightAzimuth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFillLightAzimuth(temp0);
      }
    else
      {
      op->vtkLightKit::SetFillLightAzimuth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetFillLightAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFillLightAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFillLightAngle();
      }
    else
      {
      tempr = op->vtkLightKit::GetFillLightAngle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetFillLightElevation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFillLightElevation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFillLightElevation();
      }
    else
      {
      tempr = op->vtkLightKit::GetFillLightElevation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetFillLightAzimuth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFillLightAzimuth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFillLightAzimuth();
      }
    else
      {
      tempr = op->vtkLightKit::GetFillLightAzimuth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_SetBackLightAngle_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackLightAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetBackLightAngle(temp0, temp1);
      }
    else
      {
      op->vtkLightKit::SetBackLightAngle(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLightKit_SetBackLightAngle_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackLightAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetBackLightAngle(temp0);
      }
    else
      {
      op->vtkLightKit::SetBackLightAngle(temp0);
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
PyvtkLightKit_SetBackLightAngle(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkLightKit_SetBackLightAngle_s1(self, args);
    case 1:
      return PyvtkLightKit_SetBackLightAngle_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBackLightAngle");
  return NULL;
}



static PyObject *
PyvtkLightKit_SetBackLightElevation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackLightElevation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBackLightElevation(temp0);
      }
    else
      {
      op->vtkLightKit::SetBackLightElevation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_SetBackLightAzimuth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackLightAzimuth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBackLightAzimuth(temp0);
      }
    else
      {
      op->vtkLightKit::SetBackLightAzimuth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetBackLightAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackLightAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBackLightAngle();
      }
    else
      {
      tempr = op->vtkLightKit::GetBackLightAngle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetBackLightElevation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackLightElevation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBackLightElevation();
      }
    else
      {
      tempr = op->vtkLightKit::GetBackLightElevation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetBackLightAzimuth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackLightAzimuth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBackLightAzimuth();
      }
    else
      {
      tempr = op->vtkLightKit::GetBackLightAzimuth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_AddLightsToRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLightsToRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->AddLightsToRenderer(temp0);
      }
    else
      {
      op->vtkLightKit::AddLightsToRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_RemoveLightsFromRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveLightsFromRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->RemoveLightsFromRenderer(temp0);
      }
    else
      {
      op->vtkLightKit::RemoveLightsFromRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  vtkLightKit *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLightKit"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkLightKit::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_Modified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Modified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Modified();
      }
    else
      {
      op->vtkLightKit::Modified();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkLightKit::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetStringFromType(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetStringFromType");

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkLightKit::GetStringFromType(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetStringFromSubType(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetStringFromSubType");

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkLightKit::GetStringFromSubType(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetShortStringFromSubType(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetShortStringFromSubType");

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkLightKit::GetShortStringFromSubType(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLightKit_Methods[] = {
  {(char*)"GetClassName", PyvtkLightKit_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkLightKit_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkLightKit_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkLightKit\nC++: vtkLightKit *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkLightKit_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLightKit\nC++: vtkLightKit *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetKeyLightIntensity", PyvtkLightKit_SetKeyLightIntensity, 1,
   (char*)"V.SetKeyLightIntensity(float)\nC++: void SetKeyLightIntensity(double a)\n\nSet/Get the intensity of the key light.  The key light is the\nbrightest light in the scene.  The intensities of the other two\nlights are ratios of the key light's intensity.\n"},
  {(char*)"GetKeyLightIntensity", PyvtkLightKit_GetKeyLightIntensity, 1,
   (char*)"V.GetKeyLightIntensity() -> float\nC++: double GetKeyLightIntensity()\n\nSet/Get the intensity of the key light.  The key light is the\nbrightest light in the scene.  The intensities of the other two\nlights are ratios of the key light's intensity.\n"},
  {(char*)"SetKeyToFillRatio", PyvtkLightKit_SetKeyToFillRatio, 1,
   (char*)"V.SetKeyToFillRatio(float)\nC++: void SetKeyToFillRatio(double)\n\nSet/Get the key-to-fill ratio.  This ratio controls how bright\nthe fill light is compared to the key light: larger values\ncorrespond to a dimmer fill light.  The purpose of the fill light\nis to light parts of the object not lit by the key light, while\nstill maintaining constrast.  This type of lighting may\ncorrespond to indirect illumination from the key light, bounced\noff a wall, floor, or other object.  The fill light should never\nbe brighter than the key light:  a good range for the key-to-fill\nratio is between 2 and 10.\n"},
  {(char*)"GetKeyToFillRatioMinValue", PyvtkLightKit_GetKeyToFillRatioMinValue, 1,
   (char*)"V.GetKeyToFillRatioMinValue() -> float\nC++: double GetKeyToFillRatioMinValue()\n\nSet/Get the key-to-fill ratio.  This ratio controls how bright\nthe fill light is compared to the key light: larger values\ncorrespond to a dimmer fill light.  The purpose of the fill light\nis to light parts of the object not lit by the key light, while\nstill maintaining constrast.  This type of lighting may\ncorrespond to indirect illumination from the key light, bounced\noff a wall, floor, or other object.  The fill light should never\nbe brighter than the key light:  a good range for the key-to-fill\nratio is between 2 and 10.\n"},
  {(char*)"GetKeyToFillRatioMaxValue", PyvtkLightKit_GetKeyToFillRatioMaxValue, 1,
   (char*)"V.GetKeyToFillRatioMaxValue() -> float\nC++: double GetKeyToFillRatioMaxValue()\n\nSet/Get the key-to-fill ratio.  This ratio controls how bright\nthe fill light is compared to the key light: larger values\ncorrespond to a dimmer fill light.  The purpose of the fill light\nis to light parts of the object not lit by the key light, while\nstill maintaining constrast.  This type of lighting may\ncorrespond to indirect illumination from the key light, bounced\noff a wall, floor, or other object.  The fill light should never\nbe brighter than the key light:  a good range for the key-to-fill\nratio is between 2 and 10.\n"},
  {(char*)"GetKeyToFillRatio", PyvtkLightKit_GetKeyToFillRatio, 1,
   (char*)"V.GetKeyToFillRatio() -> float\nC++: double GetKeyToFillRatio()\n\nSet/Get the key-to-fill ratio.  This ratio controls how bright\nthe fill light is compared to the key light: larger values\ncorrespond to a dimmer fill light.  The purpose of the fill light\nis to light parts of the object not lit by the key light, while\nstill maintaining constrast.  This type of lighting may\ncorrespond to indirect illumination from the key light, bounced\noff a wall, floor, or other object.  The fill light should never\nbe brighter than the key light:  a good range for the key-to-fill\nratio is between 2 and 10.\n"},
  {(char*)"SetKeyToHeadRatio", PyvtkLightKit_SetKeyToHeadRatio, 1,
   (char*)"V.SetKeyToHeadRatio(float)\nC++: void SetKeyToHeadRatio(double)\n\nSet/Get the key-to-headlight ratio.  Similar to the key-to-fill\nratio, this ratio controls how bright the headlight light is\ncompared to the key light: larger values correspond to a dimmer\nheadlight light.  The headlight is special kind of fill light,\nlighting only the parts of the object that the camera can see. As\nsuch, a headlight tends to reduce the contrast of a scene.  It\ncan be used to fill in \"shadows\" of the object missed by the key\nand fill lights.  The headlight should always be significantly\ndimmer than the key light:  ratios of 2 to 15 are typical.\n"},
  {(char*)"GetKeyToHeadRatioMinValue", PyvtkLightKit_GetKeyToHeadRatioMinValue, 1,
   (char*)"V.GetKeyToHeadRatioMinValue() -> float\nC++: double GetKeyToHeadRatioMinValue()\n\nSet/Get the key-to-headlight ratio.  Similar to the key-to-fill\nratio, this ratio controls how bright the headlight light is\ncompared to the key light: larger values correspond to a dimmer\nheadlight light.  The headlight is special kind of fill light,\nlighting only the parts of the object that the camera can see. As\nsuch, a headlight tends to reduce the contrast of a scene.  It\ncan be used to fill in \"shadows\" of the object missed by the key\nand fill lights.  The headlight should always be significantly\ndimmer than the key light:  ratios of 2 to 15 are typical.\n"},
  {(char*)"GetKeyToHeadRatioMaxValue", PyvtkLightKit_GetKeyToHeadRatioMaxValue, 1,
   (char*)"V.GetKeyToHeadRatioMaxValue() -> float\nC++: double GetKeyToHeadRatioMaxValue()\n\nSet/Get the key-to-headlight ratio.  Similar to the key-to-fill\nratio, this ratio controls how bright the headlight light is\ncompared to the key light: larger values correspond to a dimmer\nheadlight light.  The headlight is special kind of fill light,\nlighting only the parts of the object that the camera can see. As\nsuch, a headlight tends to reduce the contrast of a scene.  It\ncan be used to fill in \"shadows\" of the object missed by the key\nand fill lights.  The headlight should always be significantly\ndimmer than the key light:  ratios of 2 to 15 are typical.\n"},
  {(char*)"GetKeyToHeadRatio", PyvtkLightKit_GetKeyToHeadRatio, 1,
   (char*)"V.GetKeyToHeadRatio() -> float\nC++: double GetKeyToHeadRatio()\n\nSet/Get the key-to-headlight ratio.  Similar to the key-to-fill\nratio, this ratio controls how bright the headlight light is\ncompared to the key light: larger values correspond to a dimmer\nheadlight light.  The headlight is special kind of fill light,\nlighting only the parts of the object that the camera can see. As\nsuch, a headlight tends to reduce the contrast of a scene.  It\ncan be used to fill in \"shadows\" of the object missed by the key\nand fill lights.  The headlight should always be significantly\ndimmer than the key light:  ratios of 2 to 15 are typical.\n"},
  {(char*)"SetKeyToBackRatio", PyvtkLightKit_SetKeyToBackRatio, 1,
   (char*)"V.SetKeyToBackRatio(float)\nC++: void SetKeyToBackRatio(double)\n\nSet/Get the key-to-back light ratio.  This ratio controls how\nbright the back lights are compared to the key light: larger\nvalues correspond to dimmer back lights.  The back lights fill in\nthe remaining high-contrast regions behind the object. Values\nbetween 2 and 10 are good.\n"},
  {(char*)"GetKeyToBackRatioMinValue", PyvtkLightKit_GetKeyToBackRatioMinValue, 1,
   (char*)"V.GetKeyToBackRatioMinValue() -> float\nC++: double GetKeyToBackRatioMinValue()\n\nSet/Get the key-to-back light ratio.  This ratio controls how\nbright the back lights are compared to the key light: larger\nvalues correspond to dimmer back lights.  The back lights fill in\nthe remaining high-contrast regions behind the object. Values\nbetween 2 and 10 are good.\n"},
  {(char*)"GetKeyToBackRatioMaxValue", PyvtkLightKit_GetKeyToBackRatioMaxValue, 1,
   (char*)"V.GetKeyToBackRatioMaxValue() -> float\nC++: double GetKeyToBackRatioMaxValue()\n\nSet/Get the key-to-back light ratio.  This ratio controls how\nbright the back lights are compared to the key light: larger\nvalues correspond to dimmer back lights.  The back lights fill in\nthe remaining high-contrast regions behind the object. Values\nbetween 2 and 10 are good.\n"},
  {(char*)"GetKeyToBackRatio", PyvtkLightKit_GetKeyToBackRatio, 1,
   (char*)"V.GetKeyToBackRatio() -> float\nC++: double GetKeyToBackRatio()\n\nSet/Get the key-to-back light ratio.  This ratio controls how\nbright the back lights are compared to the key light: larger\nvalues correspond to dimmer back lights.  The back lights fill in\nthe remaining high-contrast regions behind the object. Values\nbetween 2 and 10 are good.\n"},
  {(char*)"SetKeyLightWarmth", PyvtkLightKit_SetKeyLightWarmth, 1,
   (char*)"V.SetKeyLightWarmth(float)\nC++: void SetKeyLightWarmth(double a)\n\nSet the warmth of each the lights.  Warmth is a parameter that\nvaries from 0 to 1, where 0 is \"cold\" (looks icy or lit by a very\nblue sky), 1 is \"warm\" (the red of a very red sunset, or the\nembers of a campfire), and 0.5 is a neutral white.  The warmth\nscale is non-linear. Warmth values close to 0.5 are subtly\n\"warmer\" or \"cooler,\" much like a warmer tungsten incandescent\nbulb, a cooler halogen, or daylight (cooler still).  Moving\nfurther away from 0.5, colors become more quickly varying towards\nblues and reds.  With regards to aesthetics, extremes of warmth\nshould be used sparingly.\n"},
  {(char*)"GetKeyLightWarmth", PyvtkLightKit_GetKeyLightWarmth, 1,
   (char*)"V.GetKeyLightWarmth() -> float\nC++: double GetKeyLightWarmth()\n\nSet the warmth of each the lights.  Warmth is a parameter that\nvaries from 0 to 1, where 0 is \"cold\" (looks icy or lit by a very\nblue sky), 1 is \"warm\" (the red of a very red sunset, or the\nembers of a campfire), and 0.5 is a neutral white.  The warmth\nscale is non-linear. Warmth values close to 0.5 are subtly\n\"warmer\" or \"cooler,\" much like a warmer tungsten incandescent\nbulb, a cooler halogen, or daylight (cooler still).  Moving\nfurther away from 0.5, colors become more quickly varying towards\nblues and reds.  With regards to aesthetics, extremes of warmth\nshould be used sparingly.\n"},
  {(char*)"SetFillLightWarmth", PyvtkLightKit_SetFillLightWarmth, 1,
   (char*)"V.SetFillLightWarmth(float)\nC++: void SetFillLightWarmth(double a)\n\n"},
  {(char*)"GetFillLightWarmth", PyvtkLightKit_GetFillLightWarmth, 1,
   (char*)"V.GetFillLightWarmth() -> float\nC++: double GetFillLightWarmth()\n\n"},
  {(char*)"SetHeadLightWarmth", PyvtkLightKit_SetHeadLightWarmth, 1,
   (char*)"V.SetHeadLightWarmth(float)\nC++: void SetHeadLightWarmth(double a)\n\n"},
  {(char*)"GetHeadLightWarmth", PyvtkLightKit_GetHeadLightWarmth, 1,
   (char*)"V.GetHeadLightWarmth() -> float\nC++: double GetHeadLightWarmth()\n\n"},
  {(char*)"SetBackLightWarmth", PyvtkLightKit_SetBackLightWarmth, 1,
   (char*)"V.SetBackLightWarmth(float)\nC++: void SetBackLightWarmth(double a)\n\n"},
  {(char*)"GetBackLightWarmth", PyvtkLightKit_GetBackLightWarmth, 1,
   (char*)"V.GetBackLightWarmth() -> float\nC++: double GetBackLightWarmth()\n\n"},
  {(char*)"GetKeyLightColor", PyvtkLightKit_GetKeyLightColor, 1,
   (char*)"V.GetKeyLightColor() -> (float, float, float)\nC++: double *GetKeyLightColor()\n\nReturns the floating-point RGB values of each of the light's\ncolor.\n"},
  {(char*)"GetFillLightColor", PyvtkLightKit_GetFillLightColor, 1,
   (char*)"V.GetFillLightColor() -> (float, float, float)\nC++: double *GetFillLightColor()\n\nReturns the floating-point RGB values of each of the light's\ncolor.\n"},
  {(char*)"GetHeadLightColor", PyvtkLightKit_GetHeadLightColor, 1,
   (char*)"V.GetHeadLightColor() -> (float, float, float)\nC++: double *GetHeadLightColor()\n\nReturns the floating-point RGB values of each of the light's\ncolor.\n"},
  {(char*)"GetBackLightColor", PyvtkLightKit_GetBackLightColor, 1,
   (char*)"V.GetBackLightColor() -> (float, float, float)\nC++: double *GetBackLightColor()\n\nReturns the floating-point RGB values of each of the light's\ncolor.\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"SetHeadlightWarmth", PyvtkLightKit_SetHeadlightWarmth, 1,
   (char*)"V.SetHeadlightWarmth(float)\nC++: void SetHeadlightWarmth(double v)\n\nTo maintain a deprecation API:\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"GetHeadlightWarmth", PyvtkLightKit_GetHeadlightWarmth, 1,
   (char*)"V.GetHeadlightWarmth() -> float\nC++: double GetHeadlightWarmth()\n\nTo maintain a deprecation API:\n"},
#endif
  {(char*)"MaintainLuminanceOn", PyvtkLightKit_MaintainLuminanceOn, 1,
   (char*)"V.MaintainLuminanceOn()\nC++: void MaintainLuminanceOn()\n\nIf MaintainLuminance is set, the LightKit will attempt to\nmaintain the apparent intensity of lights based on their\nperceptual brightnesses. By default, MaintainLuminance is off.\n"},
  {(char*)"MaintainLuminanceOff", PyvtkLightKit_MaintainLuminanceOff, 1,
   (char*)"V.MaintainLuminanceOff()\nC++: void MaintainLuminanceOff()\n\nIf MaintainLuminance is set, the LightKit will attempt to\nmaintain the apparent intensity of lights based on their\nperceptual brightnesses. By default, MaintainLuminance is off.\n"},
  {(char*)"GetMaintainLuminance", PyvtkLightKit_GetMaintainLuminance, 1,
   (char*)"V.GetMaintainLuminance() -> int\nC++: int GetMaintainLuminance()\n\nIf MaintainLuminance is set, the LightKit will attempt to\nmaintain the apparent intensity of lights based on their\nperceptual brightnesses. By default, MaintainLuminance is off.\n"},
  {(char*)"SetMaintainLuminance", PyvtkLightKit_SetMaintainLuminance, 1,
   (char*)"V.SetMaintainLuminance(int)\nC++: void SetMaintainLuminance(int a)\n\nIf MaintainLuminance is set, the LightKit will attempt to\nmaintain the apparent intensity of lights based on their\nperceptual brightnesses. By default, MaintainLuminance is off.\n"},
  {(char*)"SetKeyLightAngle", PyvtkLightKit_SetKeyLightAngle, 1,
   (char*)"V.SetKeyLightAngle(float, float)\nC++: void SetKeyLightAngle(double elevation, double azimuth)\nV.SetKeyLightAngle([float, float])\nC++: void SetKeyLightAngle(double angle[2])\n\nGet/Set the position of the key, fill, and back lights using\nangular methods.  Elevation corresponds to latitude, azimuth to\nlongitude.  It is recommended that the key light always be on the\nviewer's side of the object and above the object, while the fill\nlight generally lights the part of the object not lit by the fill\nlight.  The headlight, which is always located at the viewer, can\nthen be used to reduce the contrast in the image. There are a\npair of back lights.  They are located at the same elevation and\nat opposing azimuths (ie, one to the left, and one to the right).\n They are generally set at the equator (elevation = 0), and at\napproximately 120 degrees (lighting from each side and behind).\n"},
  {(char*)"SetKeyLightElevation", PyvtkLightKit_SetKeyLightElevation, 1,
   (char*)"V.SetKeyLightElevation(float)\nC++: void SetKeyLightElevation(double x)\n\n"},
  {(char*)"SetKeyLightAzimuth", PyvtkLightKit_SetKeyLightAzimuth, 1,
   (char*)"V.SetKeyLightAzimuth(float)\nC++: void SetKeyLightAzimuth(double x)\n\n"},
  {(char*)"GetKeyLightAngle", PyvtkLightKit_GetKeyLightAngle, 1,
   (char*)"V.GetKeyLightAngle() -> (float, float)\nC++: double *GetKeyLightAngle()\n\n"},
  {(char*)"GetKeyLightElevation", PyvtkLightKit_GetKeyLightElevation, 1,
   (char*)"V.GetKeyLightElevation() -> float\nC++: double GetKeyLightElevation()\n\n"},
  {(char*)"GetKeyLightAzimuth", PyvtkLightKit_GetKeyLightAzimuth, 1,
   (char*)"V.GetKeyLightAzimuth() -> float\nC++: double GetKeyLightAzimuth()\n\n"},
  {(char*)"SetFillLightAngle", PyvtkLightKit_SetFillLightAngle, 1,
   (char*)"V.SetFillLightAngle(float, float)\nC++: void SetFillLightAngle(double elevation, double azimuth)\nV.SetFillLightAngle([float, float])\nC++: void SetFillLightAngle(double angle[2])\n\n"},
  {(char*)"SetFillLightElevation", PyvtkLightKit_SetFillLightElevation, 1,
   (char*)"V.SetFillLightElevation(float)\nC++: void SetFillLightElevation(double x)\n\n"},
  {(char*)"SetFillLightAzimuth", PyvtkLightKit_SetFillLightAzimuth, 1,
   (char*)"V.SetFillLightAzimuth(float)\nC++: void SetFillLightAzimuth(double x)\n\n"},
  {(char*)"GetFillLightAngle", PyvtkLightKit_GetFillLightAngle, 1,
   (char*)"V.GetFillLightAngle() -> (float, float)\nC++: double *GetFillLightAngle()\n\n"},
  {(char*)"GetFillLightElevation", PyvtkLightKit_GetFillLightElevation, 1,
   (char*)"V.GetFillLightElevation() -> float\nC++: double GetFillLightElevation()\n\n"},
  {(char*)"GetFillLightAzimuth", PyvtkLightKit_GetFillLightAzimuth, 1,
   (char*)"V.GetFillLightAzimuth() -> float\nC++: double GetFillLightAzimuth()\n\n"},
  {(char*)"SetBackLightAngle", PyvtkLightKit_SetBackLightAngle, 1,
   (char*)"V.SetBackLightAngle(float, float)\nC++: void SetBackLightAngle(double elevation, double azimuth)\nV.SetBackLightAngle([float, float])\nC++: void SetBackLightAngle(double angle[2])\n\n"},
  {(char*)"SetBackLightElevation", PyvtkLightKit_SetBackLightElevation, 1,
   (char*)"V.SetBackLightElevation(float)\nC++: void SetBackLightElevation(double x)\n\n"},
  {(char*)"SetBackLightAzimuth", PyvtkLightKit_SetBackLightAzimuth, 1,
   (char*)"V.SetBackLightAzimuth(float)\nC++: void SetBackLightAzimuth(double x)\n\n"},
  {(char*)"GetBackLightAngle", PyvtkLightKit_GetBackLightAngle, 1,
   (char*)"V.GetBackLightAngle() -> (float, float)\nC++: double *GetBackLightAngle()\n\n"},
  {(char*)"GetBackLightElevation", PyvtkLightKit_GetBackLightElevation, 1,
   (char*)"V.GetBackLightElevation() -> float\nC++: double GetBackLightElevation()\n\n"},
  {(char*)"GetBackLightAzimuth", PyvtkLightKit_GetBackLightAzimuth, 1,
   (char*)"V.GetBackLightAzimuth() -> float\nC++: double GetBackLightAzimuth()\n\n"},
  {(char*)"AddLightsToRenderer", PyvtkLightKit_AddLightsToRenderer, 1,
   (char*)"V.AddLightsToRenderer(vtkRenderer)\nC++: void AddLightsToRenderer(vtkRenderer *renderer)\n\nAdd lights to, or remove lights from, a renderer. Lights may be\nadded to more than one renderer, if desired.\n"},
  {(char*)"RemoveLightsFromRenderer", PyvtkLightKit_RemoveLightsFromRenderer, 1,
   (char*)"V.RemoveLightsFromRenderer(vtkRenderer)\nC++: void RemoveLightsFromRenderer(vtkRenderer *renderer)\n\nAdd lights to, or remove lights from, a renderer. Lights may be\nadded to more than one renderer, if desired.\n"},
  {(char*)"DeepCopy", PyvtkLightKit_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkLightKit)\nC++: void DeepCopy(vtkLightKit *kit)\n\n"},
  {(char*)"Modified", PyvtkLightKit_Modified, 1,
   (char*)"V.Modified()\nC++: void Modified()\n\n"},
  {(char*)"Update", PyvtkLightKit_Update, 1,
   (char*)"V.Update()\nC++: void Update()\n\n"},
  {(char*)"GetStringFromType", PyvtkLightKit_GetStringFromType, 1,
   (char*)"V.GetStringFromType(int) -> string\nC++: static const char *GetStringFromType(int type)\n\nHelper method to go from a enum type to a string type\n"},
  {(char*)"GetStringFromSubType", PyvtkLightKit_GetStringFromSubType, 1,
   (char*)"V.GetStringFromSubType(int) -> string\nC++: static const char *GetStringFromSubType(int type)\n\nHelper method to go from a enum subtype to a string subtype\n"},
  {(char*)"GetShortStringFromSubType", PyvtkLightKit_GetShortStringFromSubType, 1,
   (char*)"V.GetShortStringFromSubType(int) -> string\nC++: static const char *GetShortStringFromSubType(int subtype)\n\nHelper method to go from a enum subtype to a string subtype The\ndifference from GetStringFromSubType is that it returns a shorter\nstrings (useful for GUI with minimun space)\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLightKit_StaticNew()
{
  return vtkLightKit::New();
}

PyObject *PyVTKClass_vtkLightKitNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLightKit_StaticNew,
    PyvtkLightKit_Methods,
    "vtkLightKit", modulename,
    NULL, NULL,
    PyvtkLightKit_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"TKeyLight", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"TFillLight", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"TBackLight", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"THeadLight", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"Warmth", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"Intensity", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"Elevation", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"Azimuth", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"KFRatio", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(5);
    if (o && PyDict_SetItemString(d, (char *)"KBRatio", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(6);
    if (o && PyDict_SetItemString(d, (char *)"KHRatio", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkLightKit_Doc()
{
  static const char *docstring[] = {
    "vtkLightKit - a simple but quality lighting kit\n\n",
    "Superclass: vtkObject\n\n",
    "vtkLightKit is designed to make general purpose lighting of vtk\nscenes simple, flexible, and attractive (or at least not horribly\nugly without significant effort).  Use a LightKit when you want more\ncontrol over your lighting than you can get with the default vtk\nlight, which is a headlight located at the camera. (HeadLights are\nvery simple to use, but they don't show the shape of objects very\nwel",
    "l, don't give a good sense of \"up\" and \"down\", and don't evenly\nlight the object.)\n\nA LightKit consists of three lights, a key light, a fill light, and a\nheadlight.  The main light is the key light.  It is usually\npositioned so that it appears like an overhead light (like the sun,\nor a ceiling light).  It is generally positioned to shine down on the\nscene from about a 45 degree angle vertically an",
    "d at least a little\noffset side to side.  The key light usually at least about twice as\nbright as the total of all other lights in the scene to provide good\nmodeling of object features.\n\nThe other lights in the kit (the fill light, headlight, and a pair of\nback lights) are weaker sources that provide extra illumination to\nfill in the spots that the key light misses.  The fill light is\nusually posi",
    "tioned across from or opposite from the key light (though\nstill on the same side of the object as the camera) in order to\nsimulate diffuse reflections from other objects in the scene.  The\nheadlight, always located at the position of the camera, reduces the\ncontrast between areas lit by the key and fill light. The two back\nlights, one on the left of the object as seen from the observer and\none on ",
    "the right, fill on the high-contrast areas behind the object. \nTo enforce the relationship between the different lights, the\nintensity of the fill, back and headlights are set as a ratio to the\nkey light brightness.  Thus, the brightness of all the lights in the\nscene can be changed by changing the key light intensity.\n\nAll lights are directional lights (infinitely far away with no\nfalloff).  Ligh",
    "ts move with the camera.\n\nFor simplicity, the position of lights in the LightKit can only be\nspecified using angles: the elevation (latitude) and azimuth\n(longitude) of each light with respect to the camera, expressed in\ndegrees.  (Lights always shine on the camera's lookat point.) For\nexample, a light at (elevation=0, azimuth=0) is located at the camera\n(a headlight).  A light at (elevation=90, a",
    "zimuth=0) is above the\nlookat point, shining down.  Negative azimuth values move the lights\nclockwise as seen above, positive values counter-clockwise.  So, a\nlight at (elevation=45, azimuth=-20) is above and in front of the\nobject and shining slightly from the left side.\n\nvtkLightKit limits the colors that can be assigned to any light to\nthose of incandescent sources such as light bulbs and sunli",
    "ght.  It\ndefines a special color spectrum called \"warmth\" from which light\ncolors can be chosen, where 0 is cold blue, 0.5 is neutral white, and\n1 is deep sunset red.  Colors close to 0.5 are \"cool whites\" and \"warm\nwhites,\" respectively.\n\nSince colors far from white on the warmth scale appear less bright,\nkey-to-fill and key-to-headlight ratios are skewed by key, fill, and\nheadlight colors.  If t",
    "he flag MaintainLuminance is set, vtkLightKit\nwill attempt to compensate for these perceptual differences by\nincreasing the brightness of more saturated colors.\n\nA LightKit is not explicitly part of the vtk pipeline.  Rather, it is\na composite object that controls the behavior of lights using a\nunified user interface.  Every time a parameter of vtkLightKit is\nadjusted, the properties of its lights",
    " are modified.\n\nCredits:\n\nvtkLightKit was originally written and contributed to vtk by Michael\nHalle (mhalle@bwh.harvard.edu) at the Surgical Planning Lab, Brigham\nand Women's Hospital.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLightKit(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLightKitNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLightKit", o) != 0)
    {
    Py_DECREF(o);
    }

}

