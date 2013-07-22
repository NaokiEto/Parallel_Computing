// python wrapper for vtkLegendScaleActor
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
#include "vtkLegendScaleActor.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkLegendScaleActor(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkLegendScaleActor(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkLegendScaleActorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkLegendScaleActorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPropNew
extern "C" { PyObject *PyVTKClass_vtkPropNew(const char *); }
#define DECLARED_PyVTKClass_vtkPropNew
#endif

static const char **PyvtkLegendScaleActor_Doc();


static PyObject *
PyvtkLegendScaleActor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

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
      tempr = op->vtkLegendScaleActor::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

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
      tempr = op->vtkLegendScaleActor::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  vtkLegendScaleActor *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkLegendScaleActor::NewInstance();
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
PyvtkLegendScaleActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkLegendScaleActor *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkLegendScaleActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetLabelMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabelMode(temp0);
      }
    else
      {
      op->vtkLegendScaleActor::SetLabelMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetLabelModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLabelModeMinValue();
      }
    else
      {
      tempr = op->vtkLegendScaleActor::GetLabelModeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetLabelModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLabelModeMaxValue();
      }
    else
      {
      tempr = op->vtkLegendScaleActor::GetLabelModeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetLabelMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLabelMode();
      }
    else
      {
      tempr = op->vtkLegendScaleActor::GetLabelMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetLabelModeToDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelModeToDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLabelModeToDistance();
      }
    else
      {
      op->vtkLegendScaleActor::SetLabelModeToDistance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetLabelModeToXYCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelModeToXYCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLabelModeToXYCoordinates();
      }
    else
      {
      op->vtkLegendScaleActor::SetLabelModeToXYCoordinates();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetRightAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRightAxisVisibility(temp0);
      }
    else
      {
      op->vtkLegendScaleActor::SetRightAxisVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetRightAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRightAxisVisibility();
      }
    else
      {
      tempr = op->vtkLegendScaleActor::GetRightAxisVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_RightAxisVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RightAxisVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RightAxisVisibilityOn();
      }
    else
      {
      op->vtkLegendScaleActor::RightAxisVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_RightAxisVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RightAxisVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RightAxisVisibilityOff();
      }
    else
      {
      op->vtkLegendScaleActor::RightAxisVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetTopAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTopAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTopAxisVisibility(temp0);
      }
    else
      {
      op->vtkLegendScaleActor::SetTopAxisVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetTopAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTopAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTopAxisVisibility();
      }
    else
      {
      tempr = op->vtkLegendScaleActor::GetTopAxisVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_TopAxisVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TopAxisVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TopAxisVisibilityOn();
      }
    else
      {
      op->vtkLegendScaleActor::TopAxisVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_TopAxisVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TopAxisVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TopAxisVisibilityOff();
      }
    else
      {
      op->vtkLegendScaleActor::TopAxisVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetLeftAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLeftAxisVisibility(temp0);
      }
    else
      {
      op->vtkLegendScaleActor::SetLeftAxisVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetLeftAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLeftAxisVisibility();
      }
    else
      {
      tempr = op->vtkLegendScaleActor::GetLeftAxisVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_LeftAxisVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LeftAxisVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LeftAxisVisibilityOn();
      }
    else
      {
      op->vtkLegendScaleActor::LeftAxisVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_LeftAxisVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LeftAxisVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LeftAxisVisibilityOff();
      }
    else
      {
      op->vtkLegendScaleActor::LeftAxisVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetBottomAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBottomAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBottomAxisVisibility(temp0);
      }
    else
      {
      op->vtkLegendScaleActor::SetBottomAxisVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetBottomAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBottomAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBottomAxisVisibility();
      }
    else
      {
      tempr = op->vtkLegendScaleActor::GetBottomAxisVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_BottomAxisVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BottomAxisVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BottomAxisVisibilityOn();
      }
    else
      {
      op->vtkLegendScaleActor::BottomAxisVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_BottomAxisVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BottomAxisVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BottomAxisVisibilityOff();
      }
    else
      {
      op->vtkLegendScaleActor::BottomAxisVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetLegendVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLegendVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLegendVisibility(temp0);
      }
    else
      {
      op->vtkLegendScaleActor::SetLegendVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetLegendVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLegendVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLegendVisibility();
      }
    else
      {
      tempr = op->vtkLegendScaleActor::GetLegendVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_LegendVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LegendVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LegendVisibilityOn();
      }
    else
      {
      op->vtkLegendScaleActor::LegendVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_LegendVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LegendVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LegendVisibilityOff();
      }
    else
      {
      op->vtkLegendScaleActor::LegendVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_AllAxesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllAxesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllAxesOn();
      }
    else
      {
      op->vtkLegendScaleActor::AllAxesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_AllAxesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllAxesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllAxesOff();
      }
    else
      {
      op->vtkLegendScaleActor::AllAxesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_AllAnnotationsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllAnnotationsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllAnnotationsOn();
      }
    else
      {
      op->vtkLegendScaleActor::AllAnnotationsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_AllAnnotationsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllAnnotationsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllAnnotationsOff();
      }
    else
      {
      op->vtkLegendScaleActor::AllAnnotationsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetRightBorderOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightBorderOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRightBorderOffset(temp0);
      }
    else
      {
      op->vtkLegendScaleActor::SetRightBorderOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetRightBorderOffsetMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightBorderOffsetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRightBorderOffsetMinValue();
      }
    else
      {
      tempr = op->vtkLegendScaleActor::GetRightBorderOffsetMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetRightBorderOffsetMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightBorderOffsetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRightBorderOffsetMaxValue();
      }
    else
      {
      tempr = op->vtkLegendScaleActor::GetRightBorderOffsetMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetRightBorderOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightBorderOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRightBorderOffset();
      }
    else
      {
      tempr = op->vtkLegendScaleActor::GetRightBorderOffset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetTopBorderOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTopBorderOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTopBorderOffset(temp0);
      }
    else
      {
      op->vtkLegendScaleActor::SetTopBorderOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetTopBorderOffsetMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTopBorderOffsetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTopBorderOffsetMinValue();
      }
    else
      {
      tempr = op->vtkLegendScaleActor::GetTopBorderOffsetMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetTopBorderOffsetMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTopBorderOffsetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTopBorderOffsetMaxValue();
      }
    else
      {
      tempr = op->vtkLegendScaleActor::GetTopBorderOffsetMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetTopBorderOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTopBorderOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTopBorderOffset();
      }
    else
      {
      tempr = op->vtkLegendScaleActor::GetTopBorderOffset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetLeftBorderOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftBorderOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLeftBorderOffset(temp0);
      }
    else
      {
      op->vtkLegendScaleActor::SetLeftBorderOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetLeftBorderOffsetMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftBorderOffsetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLeftBorderOffsetMinValue();
      }
    else
      {
      tempr = op->vtkLegendScaleActor::GetLeftBorderOffsetMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetLeftBorderOffsetMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftBorderOffsetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLeftBorderOffsetMaxValue();
      }
    else
      {
      tempr = op->vtkLegendScaleActor::GetLeftBorderOffsetMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetLeftBorderOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftBorderOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLeftBorderOffset();
      }
    else
      {
      tempr = op->vtkLegendScaleActor::GetLeftBorderOffset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetBottomBorderOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBottomBorderOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBottomBorderOffset(temp0);
      }
    else
      {
      op->vtkLegendScaleActor::SetBottomBorderOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetBottomBorderOffsetMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBottomBorderOffsetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBottomBorderOffsetMinValue();
      }
    else
      {
      tempr = op->vtkLegendScaleActor::GetBottomBorderOffsetMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetBottomBorderOffsetMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBottomBorderOffsetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBottomBorderOffsetMaxValue();
      }
    else
      {
      tempr = op->vtkLegendScaleActor::GetBottomBorderOffsetMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetBottomBorderOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBottomBorderOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBottomBorderOffset();
      }
    else
      {
      tempr = op->vtkLegendScaleActor::GetBottomBorderOffset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetCornerOffsetFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCornerOffsetFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCornerOffsetFactor(temp0);
      }
    else
      {
      op->vtkLegendScaleActor::SetCornerOffsetFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetCornerOffsetFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerOffsetFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCornerOffsetFactorMinValue();
      }
    else
      {
      tempr = op->vtkLegendScaleActor::GetCornerOffsetFactorMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetCornerOffsetFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerOffsetFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCornerOffsetFactorMaxValue();
      }
    else
      {
      tempr = op->vtkLegendScaleActor::GetCornerOffsetFactorMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetCornerOffsetFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerOffsetFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCornerOffsetFactor();
      }
    else
      {
      tempr = op->vtkLegendScaleActor::GetCornerOffsetFactor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetLegendTitleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLegendTitleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  vtkTextProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLegendTitleProperty();
      }
    else
      {
      tempr = op->vtkLegendScaleActor::GetLegendTitleProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetLegendLabelProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLegendLabelProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  vtkTextProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLegendLabelProperty();
      }
    else
      {
      tempr = op->vtkLegendScaleActor::GetLegendLabelProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetRightAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  vtkAxisActor2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRightAxis();
      }
    else
      {
      tempr = op->vtkLegendScaleActor::GetRightAxis();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetTopAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTopAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  vtkAxisActor2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTopAxis();
      }
    else
      {
      tempr = op->vtkLegendScaleActor::GetTopAxis();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetLeftAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  vtkAxisActor2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLeftAxis();
      }
    else
      {
      tempr = op->vtkLegendScaleActor::GetLeftAxis();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetBottomAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBottomAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  vtkAxisActor2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBottomAxis();
      }
    else
      {
      tempr = op->vtkLegendScaleActor::GetBottomAxis();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation(temp0);
      }
    else
      {
      op->vtkLegendScaleActor::BuildRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetActors2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  vtkPropCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
    {
    if (ap.IsBound())
      {
      op->GetActors2D(temp0);
      }
    else
      {
      op->vtkLegendScaleActor::GetActors2D(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

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
      op->vtkLegendScaleActor::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  vtkViewport *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      tempr = op->RenderOverlay(temp0);
      }
    else
      {
      tempr = op->vtkLegendScaleActor::RenderOverlay(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  vtkViewport *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      tempr = op->RenderOpaqueGeometry(temp0);
      }
    else
      {
      tempr = op->vtkLegendScaleActor::RenderOpaqueGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLegendScaleActor_Methods[] = {
  {(char*)"GetClassName", PyvtkLegendScaleActor_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for the class.\n"},
  {(char*)"IsA", PyvtkLegendScaleActor_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for the class.\n"},
  {(char*)"NewInstance", PyvtkLegendScaleActor_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkLegendScaleActor\nC++: vtkLegendScaleActor *NewInstance()\n\nStandard methods for the class.\n"},
  {(char*)"SafeDownCast", PyvtkLegendScaleActor_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLegendScaleActor\nC++: vtkLegendScaleActor *SafeDownCast(vtkObject* o)\n\nStandard methods for the class.\n"},
  {(char*)"SetLabelMode", PyvtkLegendScaleActor_SetLabelMode, 1,
   (char*)"V.SetLabelMode(int)\nC++: void SetLabelMode(int)\n\nSpecify the mode for labeling the scale axes. By default, the\naxes are labeled with the distance between points (centered at a\ndistance of 0.0). Alternatively if you know that the view is down\nthe z-axis; the axes can be labeled with x-y coordinate values.\n"},
  {(char*)"GetLabelModeMinValue", PyvtkLegendScaleActor_GetLabelModeMinValue, 1,
   (char*)"V.GetLabelModeMinValue() -> int\nC++: int GetLabelModeMinValue()\n\nSpecify the mode for labeling the scale axes. By default, the\naxes are labeled with the distance between points (centered at a\ndistance of 0.0). Alternatively if you know that the view is down\nthe z-axis; the axes can be labeled with x-y coordinate values.\n"},
  {(char*)"GetLabelModeMaxValue", PyvtkLegendScaleActor_GetLabelModeMaxValue, 1,
   (char*)"V.GetLabelModeMaxValue() -> int\nC++: int GetLabelModeMaxValue()\n\nSpecify the mode for labeling the scale axes. By default, the\naxes are labeled with the distance between points (centered at a\ndistance of 0.0). Alternatively if you know that the view is down\nthe z-axis; the axes can be labeled with x-y coordinate values.\n"},
  {(char*)"GetLabelMode", PyvtkLegendScaleActor_GetLabelMode, 1,
   (char*)"V.GetLabelMode() -> int\nC++: int GetLabelMode()\n\nSpecify the mode for labeling the scale axes. By default, the\naxes are labeled with the distance between points (centered at a\ndistance of 0.0). Alternatively if you know that the view is down\nthe z-axis; the axes can be labeled with x-y coordinate values.\n"},
  {(char*)"SetLabelModeToDistance", PyvtkLegendScaleActor_SetLabelModeToDistance, 1,
   (char*)"V.SetLabelModeToDistance()\nC++: void SetLabelModeToDistance()\n\nSpecify the mode for labeling the scale axes. By default, the\naxes are labeled with the distance between points (centered at a\ndistance of 0.0). Alternatively if you know that the view is down\nthe z-axis; the axes can be labeled with x-y coordinate values.\n"},
  {(char*)"SetLabelModeToXYCoordinates", PyvtkLegendScaleActor_SetLabelModeToXYCoordinates, 1,
   (char*)"V.SetLabelModeToXYCoordinates()\nC++: void SetLabelModeToXYCoordinates()\n\nSpecify the mode for labeling the scale axes. By default, the\naxes are labeled with the distance between points (centered at a\ndistance of 0.0). Alternatively if you know that the view is down\nthe z-axis; the axes can be labeled with x-y coordinate values.\n"},
  {(char*)"SetRightAxisVisibility", PyvtkLegendScaleActor_SetRightAxisVisibility, 1,
   (char*)"V.SetRightAxisVisibility(int)\nC++: void SetRightAxisVisibility(int a)\n\nSet/Get the flags that control which of the four axes to display\n(top, bottom, left and right). By default, all the axes are\ndisplayed.\n"},
  {(char*)"GetRightAxisVisibility", PyvtkLegendScaleActor_GetRightAxisVisibility, 1,
   (char*)"V.GetRightAxisVisibility() -> int\nC++: int GetRightAxisVisibility()\n\nSet/Get the flags that control which of the four axes to display\n(top, bottom, left and right). By default, all the axes are\ndisplayed.\n"},
  {(char*)"RightAxisVisibilityOn", PyvtkLegendScaleActor_RightAxisVisibilityOn, 1,
   (char*)"V.RightAxisVisibilityOn()\nC++: void RightAxisVisibilityOn()\n\nSet/Get the flags that control which of the four axes to display\n(top, bottom, left and right). By default, all the axes are\ndisplayed.\n"},
  {(char*)"RightAxisVisibilityOff", PyvtkLegendScaleActor_RightAxisVisibilityOff, 1,
   (char*)"V.RightAxisVisibilityOff()\nC++: void RightAxisVisibilityOff()\n\nSet/Get the flags that control which of the four axes to display\n(top, bottom, left and right). By default, all the axes are\ndisplayed.\n"},
  {(char*)"SetTopAxisVisibility", PyvtkLegendScaleActor_SetTopAxisVisibility, 1,
   (char*)"V.SetTopAxisVisibility(int)\nC++: void SetTopAxisVisibility(int a)\n\nSet/Get the flags that control which of the four axes to display\n(top, bottom, left and right). By default, all the axes are\ndisplayed.\n"},
  {(char*)"GetTopAxisVisibility", PyvtkLegendScaleActor_GetTopAxisVisibility, 1,
   (char*)"V.GetTopAxisVisibility() -> int\nC++: int GetTopAxisVisibility()\n\nSet/Get the flags that control which of the four axes to display\n(top, bottom, left and right). By default, all the axes are\ndisplayed.\n"},
  {(char*)"TopAxisVisibilityOn", PyvtkLegendScaleActor_TopAxisVisibilityOn, 1,
   (char*)"V.TopAxisVisibilityOn()\nC++: void TopAxisVisibilityOn()\n\nSet/Get the flags that control which of the four axes to display\n(top, bottom, left and right). By default, all the axes are\ndisplayed.\n"},
  {(char*)"TopAxisVisibilityOff", PyvtkLegendScaleActor_TopAxisVisibilityOff, 1,
   (char*)"V.TopAxisVisibilityOff()\nC++: void TopAxisVisibilityOff()\n\nSet/Get the flags that control which of the four axes to display\n(top, bottom, left and right). By default, all the axes are\ndisplayed.\n"},
  {(char*)"SetLeftAxisVisibility", PyvtkLegendScaleActor_SetLeftAxisVisibility, 1,
   (char*)"V.SetLeftAxisVisibility(int)\nC++: void SetLeftAxisVisibility(int a)\n\nSet/Get the flags that control which of the four axes to display\n(top, bottom, left and right). By default, all the axes are\ndisplayed.\n"},
  {(char*)"GetLeftAxisVisibility", PyvtkLegendScaleActor_GetLeftAxisVisibility, 1,
   (char*)"V.GetLeftAxisVisibility() -> int\nC++: int GetLeftAxisVisibility()\n\nSet/Get the flags that control which of the four axes to display\n(top, bottom, left and right). By default, all the axes are\ndisplayed.\n"},
  {(char*)"LeftAxisVisibilityOn", PyvtkLegendScaleActor_LeftAxisVisibilityOn, 1,
   (char*)"V.LeftAxisVisibilityOn()\nC++: void LeftAxisVisibilityOn()\n\nSet/Get the flags that control which of the four axes to display\n(top, bottom, left and right). By default, all the axes are\ndisplayed.\n"},
  {(char*)"LeftAxisVisibilityOff", PyvtkLegendScaleActor_LeftAxisVisibilityOff, 1,
   (char*)"V.LeftAxisVisibilityOff()\nC++: void LeftAxisVisibilityOff()\n\nSet/Get the flags that control which of the four axes to display\n(top, bottom, left and right). By default, all the axes are\ndisplayed.\n"},
  {(char*)"SetBottomAxisVisibility", PyvtkLegendScaleActor_SetBottomAxisVisibility, 1,
   (char*)"V.SetBottomAxisVisibility(int)\nC++: void SetBottomAxisVisibility(int a)\n\nSet/Get the flags that control which of the four axes to display\n(top, bottom, left and right). By default, all the axes are\ndisplayed.\n"},
  {(char*)"GetBottomAxisVisibility", PyvtkLegendScaleActor_GetBottomAxisVisibility, 1,
   (char*)"V.GetBottomAxisVisibility() -> int\nC++: int GetBottomAxisVisibility()\n\nSet/Get the flags that control which of the four axes to display\n(top, bottom, left and right). By default, all the axes are\ndisplayed.\n"},
  {(char*)"BottomAxisVisibilityOn", PyvtkLegendScaleActor_BottomAxisVisibilityOn, 1,
   (char*)"V.BottomAxisVisibilityOn()\nC++: void BottomAxisVisibilityOn()\n\nSet/Get the flags that control which of the four axes to display\n(top, bottom, left and right). By default, all the axes are\ndisplayed.\n"},
  {(char*)"BottomAxisVisibilityOff", PyvtkLegendScaleActor_BottomAxisVisibilityOff, 1,
   (char*)"V.BottomAxisVisibilityOff()\nC++: void BottomAxisVisibilityOff()\n\nSet/Get the flags that control which of the four axes to display\n(top, bottom, left and right). By default, all the axes are\ndisplayed.\n"},
  {(char*)"SetLegendVisibility", PyvtkLegendScaleActor_SetLegendVisibility, 1,
   (char*)"V.SetLegendVisibility(int)\nC++: void SetLegendVisibility(int a)\n\nIndicate whether the legend scale should be displayed or not. The\ndefault is On.\n"},
  {(char*)"GetLegendVisibility", PyvtkLegendScaleActor_GetLegendVisibility, 1,
   (char*)"V.GetLegendVisibility() -> int\nC++: int GetLegendVisibility()\n\nIndicate whether the legend scale should be displayed or not. The\ndefault is On.\n"},
  {(char*)"LegendVisibilityOn", PyvtkLegendScaleActor_LegendVisibilityOn, 1,
   (char*)"V.LegendVisibilityOn()\nC++: void LegendVisibilityOn()\n\nIndicate whether the legend scale should be displayed or not. The\ndefault is On.\n"},
  {(char*)"LegendVisibilityOff", PyvtkLegendScaleActor_LegendVisibilityOff, 1,
   (char*)"V.LegendVisibilityOff()\nC++: void LegendVisibilityOff()\n\nIndicate whether the legend scale should be displayed or not. The\ndefault is On.\n"},
  {(char*)"AllAxesOn", PyvtkLegendScaleActor_AllAxesOn, 1,
   (char*)"V.AllAxesOn()\nC++: void AllAxesOn()\n\nConvenience method that turns all the axes either on or off.\n"},
  {(char*)"AllAxesOff", PyvtkLegendScaleActor_AllAxesOff, 1,
   (char*)"V.AllAxesOff()\nC++: void AllAxesOff()\n\nConvenience method that turns all the axes either on or off.\n"},
  {(char*)"AllAnnotationsOn", PyvtkLegendScaleActor_AllAnnotationsOn, 1,
   (char*)"V.AllAnnotationsOn()\nC++: void AllAnnotationsOn()\n\nConvenience method that turns all the axes and the legend scale.\n"},
  {(char*)"AllAnnotationsOff", PyvtkLegendScaleActor_AllAnnotationsOff, 1,
   (char*)"V.AllAnnotationsOff()\nC++: void AllAnnotationsOff()\n\nConvenience method that turns all the axes and the legend scale.\n"},
  {(char*)"SetRightBorderOffset", PyvtkLegendScaleActor_SetRightBorderOffset, 1,
   (char*)"V.SetRightBorderOffset(int)\nC++: void SetRightBorderOffset(int)\n\nSet/Get the offset of the right axis from the border. This number\nis expressed in pixels, and represents the approximate distance\nof the axes from the sides of the renderer. The default is 50.\n"},
  {(char*)"GetRightBorderOffsetMinValue", PyvtkLegendScaleActor_GetRightBorderOffsetMinValue, 1,
   (char*)"V.GetRightBorderOffsetMinValue() -> int\nC++: int GetRightBorderOffsetMinValue()\n\nSet/Get the offset of the right axis from the border. This number\nis expressed in pixels, and represents the approximate distance\nof the axes from the sides of the renderer. The default is 50.\n"},
  {(char*)"GetRightBorderOffsetMaxValue", PyvtkLegendScaleActor_GetRightBorderOffsetMaxValue, 1,
   (char*)"V.GetRightBorderOffsetMaxValue() -> int\nC++: int GetRightBorderOffsetMaxValue()\n\nSet/Get the offset of the right axis from the border. This number\nis expressed in pixels, and represents the approximate distance\nof the axes from the sides of the renderer. The default is 50.\n"},
  {(char*)"GetRightBorderOffset", PyvtkLegendScaleActor_GetRightBorderOffset, 1,
   (char*)"V.GetRightBorderOffset() -> int\nC++: int GetRightBorderOffset()\n\nSet/Get the offset of the right axis from the border. This number\nis expressed in pixels, and represents the approximate distance\nof the axes from the sides of the renderer. The default is 50.\n"},
  {(char*)"SetTopBorderOffset", PyvtkLegendScaleActor_SetTopBorderOffset, 1,
   (char*)"V.SetTopBorderOffset(int)\nC++: void SetTopBorderOffset(int)\n\nSet/Get the offset of the top axis from the border. This number\nis expressed in pixels, and represents the approximate distance\nof the axes from the sides of the renderer. The default is 30.\n"},
  {(char*)"GetTopBorderOffsetMinValue", PyvtkLegendScaleActor_GetTopBorderOffsetMinValue, 1,
   (char*)"V.GetTopBorderOffsetMinValue() -> int\nC++: int GetTopBorderOffsetMinValue()\n\nSet/Get the offset of the top axis from the border. This number\nis expressed in pixels, and represents the approximate distance\nof the axes from the sides of the renderer. The default is 30.\n"},
  {(char*)"GetTopBorderOffsetMaxValue", PyvtkLegendScaleActor_GetTopBorderOffsetMaxValue, 1,
   (char*)"V.GetTopBorderOffsetMaxValue() -> int\nC++: int GetTopBorderOffsetMaxValue()\n\nSet/Get the offset of the top axis from the border. This number\nis expressed in pixels, and represents the approximate distance\nof the axes from the sides of the renderer. The default is 30.\n"},
  {(char*)"GetTopBorderOffset", PyvtkLegendScaleActor_GetTopBorderOffset, 1,
   (char*)"V.GetTopBorderOffset() -> int\nC++: int GetTopBorderOffset()\n\nSet/Get the offset of the top axis from the border. This number\nis expressed in pixels, and represents the approximate distance\nof the axes from the sides of the renderer. The default is 30.\n"},
  {(char*)"SetLeftBorderOffset", PyvtkLegendScaleActor_SetLeftBorderOffset, 1,
   (char*)"V.SetLeftBorderOffset(int)\nC++: void SetLeftBorderOffset(int)\n\nSet/Get the offset of the left axis from the border. This number\nis expressed in pixels, and represents the approximate distance\nof the axes from the sides of the renderer. The default is 50.\n"},
  {(char*)"GetLeftBorderOffsetMinValue", PyvtkLegendScaleActor_GetLeftBorderOffsetMinValue, 1,
   (char*)"V.GetLeftBorderOffsetMinValue() -> int\nC++: int GetLeftBorderOffsetMinValue()\n\nSet/Get the offset of the left axis from the border. This number\nis expressed in pixels, and represents the approximate distance\nof the axes from the sides of the renderer. The default is 50.\n"},
  {(char*)"GetLeftBorderOffsetMaxValue", PyvtkLegendScaleActor_GetLeftBorderOffsetMaxValue, 1,
   (char*)"V.GetLeftBorderOffsetMaxValue() -> int\nC++: int GetLeftBorderOffsetMaxValue()\n\nSet/Get the offset of the left axis from the border. This number\nis expressed in pixels, and represents the approximate distance\nof the axes from the sides of the renderer. The default is 50.\n"},
  {(char*)"GetLeftBorderOffset", PyvtkLegendScaleActor_GetLeftBorderOffset, 1,
   (char*)"V.GetLeftBorderOffset() -> int\nC++: int GetLeftBorderOffset()\n\nSet/Get the offset of the left axis from the border. This number\nis expressed in pixels, and represents the approximate distance\nof the axes from the sides of the renderer. The default is 50.\n"},
  {(char*)"SetBottomBorderOffset", PyvtkLegendScaleActor_SetBottomBorderOffset, 1,
   (char*)"V.SetBottomBorderOffset(int)\nC++: void SetBottomBorderOffset(int)\n\nSet/Get the offset of the bottom axis from the border. This\nnumber is expressed in pixels, and represents the approximate\ndistance of the axes from the sides of the renderer. The default\nis 30.\n"},
  {(char*)"GetBottomBorderOffsetMinValue", PyvtkLegendScaleActor_GetBottomBorderOffsetMinValue, 1,
   (char*)"V.GetBottomBorderOffsetMinValue() -> int\nC++: int GetBottomBorderOffsetMinValue()\n\nSet/Get the offset of the bottom axis from the border. This\nnumber is expressed in pixels, and represents the approximate\ndistance of the axes from the sides of the renderer. The default\nis 30.\n"},
  {(char*)"GetBottomBorderOffsetMaxValue", PyvtkLegendScaleActor_GetBottomBorderOffsetMaxValue, 1,
   (char*)"V.GetBottomBorderOffsetMaxValue() -> int\nC++: int GetBottomBorderOffsetMaxValue()\n\nSet/Get the offset of the bottom axis from the border. This\nnumber is expressed in pixels, and represents the approximate\ndistance of the axes from the sides of the renderer. The default\nis 30.\n"},
  {(char*)"GetBottomBorderOffset", PyvtkLegendScaleActor_GetBottomBorderOffset, 1,
   (char*)"V.GetBottomBorderOffset() -> int\nC++: int GetBottomBorderOffset()\n\nSet/Get the offset of the bottom axis from the border. This\nnumber is expressed in pixels, and represents the approximate\ndistance of the axes from the sides of the renderer. The default\nis 30.\n"},
  {(char*)"SetCornerOffsetFactor", PyvtkLegendScaleActor_SetCornerOffsetFactor, 1,
   (char*)"V.SetCornerOffsetFactor(float)\nC++: void SetCornerOffsetFactor(double)\n\nGet/Set the corner offset. This is the offset factor used to\noffset the axes at the corners. Default value is 2.0.\n"},
  {(char*)"GetCornerOffsetFactorMinValue", PyvtkLegendScaleActor_GetCornerOffsetFactorMinValue, 1,
   (char*)"V.GetCornerOffsetFactorMinValue() -> float\nC++: double GetCornerOffsetFactorMinValue()\n\nGet/Set the corner offset. This is the offset factor used to\noffset the axes at the corners. Default value is 2.0.\n"},
  {(char*)"GetCornerOffsetFactorMaxValue", PyvtkLegendScaleActor_GetCornerOffsetFactorMaxValue, 1,
   (char*)"V.GetCornerOffsetFactorMaxValue() -> float\nC++: double GetCornerOffsetFactorMaxValue()\n\nGet/Set the corner offset. This is the offset factor used to\noffset the axes at the corners. Default value is 2.0.\n"},
  {(char*)"GetCornerOffsetFactor", PyvtkLegendScaleActor_GetCornerOffsetFactor, 1,
   (char*)"V.GetCornerOffsetFactor() -> float\nC++: double GetCornerOffsetFactor()\n\nGet/Set the corner offset. This is the offset factor used to\noffset the axes at the corners. Default value is 2.0.\n"},
  {(char*)"GetLegendTitleProperty", PyvtkLegendScaleActor_GetLegendTitleProperty, 1,
   (char*)"V.GetLegendTitleProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetLegendTitleProperty()\n\nSet/Get the labels text properties for the legend title and\nlabels.\n"},
  {(char*)"GetLegendLabelProperty", PyvtkLegendScaleActor_GetLegendLabelProperty, 1,
   (char*)"V.GetLegendLabelProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetLegendLabelProperty()\n\nSet/Get the labels text properties for the legend title and\nlabels.\n"},
  {(char*)"GetRightAxis", PyvtkLegendScaleActor_GetRightAxis, 1,
   (char*)"V.GetRightAxis() -> vtkAxisActor2D\nC++: vtkAxisActor2D *GetRightAxis()\n\nThese are methods to retrieve the vtkAxisActors used to represent\nthe four axes that form this representation. Users may retrieve\nand then modify these axes to control their appearance.\n"},
  {(char*)"GetTopAxis", PyvtkLegendScaleActor_GetTopAxis, 1,
   (char*)"V.GetTopAxis() -> vtkAxisActor2D\nC++: vtkAxisActor2D *GetTopAxis()\n\nThese are methods to retrieve the vtkAxisActors used to represent\nthe four axes that form this representation. Users may retrieve\nand then modify these axes to control their appearance.\n"},
  {(char*)"GetLeftAxis", PyvtkLegendScaleActor_GetLeftAxis, 1,
   (char*)"V.GetLeftAxis() -> vtkAxisActor2D\nC++: vtkAxisActor2D *GetLeftAxis()\n\nThese are methods to retrieve the vtkAxisActors used to represent\nthe four axes that form this representation. Users may retrieve\nand then modify these axes to control their appearance.\n"},
  {(char*)"GetBottomAxis", PyvtkLegendScaleActor_GetBottomAxis, 1,
   (char*)"V.GetBottomAxis() -> vtkAxisActor2D\nC++: vtkAxisActor2D *GetBottomAxis()\n\nThese are methods to retrieve the vtkAxisActors used to represent\nthe four axes that form this representation. Users may retrieve\nand then modify these axes to control their appearance.\n"},
  {(char*)"BuildRepresentation", PyvtkLegendScaleActor_BuildRepresentation, 1,
   (char*)"V.BuildRepresentation(vtkViewport)\nC++: virtual void BuildRepresentation(vtkViewport *viewport)\n\n"},
  {(char*)"GetActors2D", PyvtkLegendScaleActor_GetActors2D, 1,
   (char*)"V.GetActors2D(vtkPropCollection)\nC++: virtual void GetActors2D(vtkPropCollection *)\n\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkLegendScaleActor_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\n"},
  {(char*)"RenderOverlay", PyvtkLegendScaleActor_RenderOverlay, 1,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: virtual int RenderOverlay(vtkViewport *)\n\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkLegendScaleActor_RenderOpaqueGeometry, 1,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLegendScaleActor_StaticNew()
{
  return vtkLegendScaleActor::New();
}

PyObject *PyVTKClass_vtkLegendScaleActorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLegendScaleActor_StaticNew,
    PyvtkLegendScaleActor_Methods,
    "vtkLegendScaleActor", modulename,
    NULL, NULL,
    PyvtkLegendScaleActor_Doc(),
    PyVTKClass_vtkPropNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"DISTANCE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"XY_COORDINATES", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkLegendScaleActor_Doc()
{
  static const char *docstring[] = {
    "vtkLegendScaleActor - annotate the render window with scale and\ndistance information\n\n",
    "Superclass: vtkProp\n\n",
    "This class is used to annotate the render window. Its basic goal is\nto provide an indication of the scale of the scene. Four axes\nsurrounding the render window indicate (in a variety of ways) the\nscale of what the camera is viewing. An option also exists for\ndisplaying a scale legend.\n\nThe axes can be programmed either to display distance scales or x-y\ncoordinate values. By default, the scales dis",
    "play a distance.\nHowever, if you know that the view is down the z-axis, the scales can\nbe programmed to display x-y coordinate values.\n\nCaveats:\n\nPlease be aware that the axes and scale values are subject to\nperspective effects. The distances are computed in the focal plane of\nthe camera. When there are large view angles (i.e., perspective\nprojection), the computed distances may provide users the ",
    "wrong sense\nof scale. These effects are not present when parallel projection is\nenabled.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLegendScaleActor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLegendScaleActorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLegendScaleActor", o) != 0)
    {
    Py_DECREF(o);
    }

}

