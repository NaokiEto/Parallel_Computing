// python wrapper for vtkTextActor
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
#include "vtkTextActor.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTextActor(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTextActor(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTextActorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTextActorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkActor2DNew
extern "C" { PyObject *PyVTKClass_vtkActor2DNew(const char *); }
#define DECLARED_PyVTKClass_vtkActor2DNew
#endif

static const char **PyvtkTextActor_Doc();


static PyObject *
PyvtkTextActor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

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
      tempr = op->vtkTextActor::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

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
      tempr = op->vtkTextActor::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  vtkTextActor *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTextActor::NewInstance();
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
PyvtkTextActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTextActor *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTextActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkTextActor::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_SetMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  vtkPolyDataMapper2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyDataMapper2D"))
    {
    if (ap.IsBound())
      {
      op->SetMapper(temp0);
      }
    else
      {
      op->vtkTextActor::SetMapper(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkTextActor::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkTextActor::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_SetMinimumSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetMinimumSize(temp0, temp1);
      }
    else
      {
      op->vtkTextActor::SetMinimumSize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTextActor_SetMinimumSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetMinimumSize(temp0);
      }
    else
      {
      op->vtkTextActor::SetMinimumSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTextActor_SetMinimumSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkTextActor_SetMinimumSize_s1(self, args);
    case 1:
      return PyvtkTextActor_SetMinimumSize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetMinimumSize");
  return NULL;
}



static PyObject *
PyvtkTextActor_GetMinimumSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinimumSize();
      }
    else
      {
      tempr = op->vtkTextActor::GetMinimumSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_SetMaximumLineHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumLineHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumLineHeight(temp0);
      }
    else
      {
      op->vtkTextActor::SetMaximumLineHeight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_GetMaximumLineHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLineHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumLineHeight();
      }
    else
      {
      tempr = op->vtkTextActor::GetMaximumLineHeight();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_SetTextScaleMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextScaleMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTextScaleMode(temp0);
      }
    else
      {
      op->vtkTextActor::SetTextScaleMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_GetTextScaleModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextScaleModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextScaleModeMinValue();
      }
    else
      {
      tempr = op->vtkTextActor::GetTextScaleModeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_GetTextScaleModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextScaleModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextScaleModeMaxValue();
      }
    else
      {
      tempr = op->vtkTextActor::GetTextScaleModeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_GetTextScaleMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextScaleMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextScaleMode();
      }
    else
      {
      tempr = op->vtkTextActor::GetTextScaleMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_SetTextScaleModeToNone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextScaleModeToNone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTextScaleModeToNone();
      }
    else
      {
      op->vtkTextActor::SetTextScaleModeToNone();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_SetTextScaleModeToProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextScaleModeToProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTextScaleModeToProp();
      }
    else
      {
      op->vtkTextActor::SetTextScaleModeToProp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_SetTextScaleModeToViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextScaleModeToViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTextScaleModeToViewport();
      }
    else
      {
      op->vtkTextActor::SetTextScaleModeToViewport();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkTextActor_SetScaledText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaledText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScaledText(temp0);
      }
    else
      {
      op->vtkTextActor::SetScaledText(temp0);
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
PyvtkTextActor_GetScaledText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaledText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScaledText();
      }
    else
      {
      tempr = op->vtkTextActor::GetScaledText();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkTextActor_ScaledTextOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaledTextOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScaledTextOn();
      }
    else
      {
      op->vtkTextActor::ScaledTextOn();
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
PyvtkTextActor_ScaledTextOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaledTextOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScaledTextOff();
      }
    else
      {
      op->vtkTextActor::ScaledTextOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}
#endif


static PyObject *
PyvtkTextActor_SetUseBorderAlign(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseBorderAlign");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseBorderAlign(temp0);
      }
    else
      {
      op->vtkTextActor::SetUseBorderAlign(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_GetUseBorderAlign(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseBorderAlign");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseBorderAlign();
      }
    else
      {
      tempr = op->vtkTextActor::GetUseBorderAlign();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_UseBorderAlignOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseBorderAlignOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseBorderAlignOn();
      }
    else
      {
      op->vtkTextActor::UseBorderAlignOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_UseBorderAlignOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseBorderAlignOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseBorderAlignOff();
      }
    else
      {
      op->vtkTextActor::UseBorderAlignOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_SetAlignmentPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlignmentPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAlignmentPoint(temp0);
      }
    else
      {
      op->vtkTextActor::SetAlignmentPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_GetAlignmentPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlignmentPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAlignmentPoint();
      }
    else
      {
      tempr = op->vtkTextActor::GetAlignmentPoint();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOrientation(temp0);
      }
    else
      {
      op->vtkTextActor::SetOrientation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_GetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOrientation();
      }
    else
      {
      tempr = op->vtkTextActor::GetOrientation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_SetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->SetTextProperty(temp0);
      }
    else
      {
      op->vtkTextActor::SetTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_GetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  vtkTextProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextProperty();
      }
    else
      {
      tempr = op->vtkTextActor::GetTextProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_SetNonLinearFontScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNonLinearFontScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  double temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetNonLinearFontScale(temp0, temp1);
      }
    else
      {
      op->vtkTextActor::SetNonLinearFontScale(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_ComputeScaledFont(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeScaledFont");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      op->ComputeScaledFont(temp0);
      }
    else
      {
      op->vtkTextActor::ComputeScaledFont(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_GetScaledTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaledTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  vtkTextProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScaledTextProperty();
      }
    else
      {
      tempr = op->vtkTextActor::GetScaledTextProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_GetFontScale(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetFontScale");

  vtkViewport *temp0 = NULL;
  float tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    tempr = vtkTextActor::GetFontScale(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

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
      op->vtkTextActor::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

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
      tempr = op->vtkTextActor::RenderOpaqueGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  vtkViewport *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      tempr = op->RenderTranslucentPolygonalGeometry(temp0);
      }
    else
      {
      tempr = op->vtkTextActor::RenderTranslucentPolygonalGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

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
      tempr = op->vtkTextActor::RenderOverlay(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextActor_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->HasTranslucentPolygonalGeometry();
      }
    else
      {
      tempr = op->vtkTextActor::HasTranslucentPolygonalGeometry();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTextActor_Methods[] = {
  {(char*)"GetClassName", PyvtkTextActor_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTextActor_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTextActor_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTextActor\nC++: vtkTextActor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTextActor_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTextActor\nC++: vtkTextActor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ShallowCopy", PyvtkTextActor_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop)\n\nShallow copy of this text actor. Overloads the virtual vtkProp\nmethod.\n"},
  {(char*)"SetMapper", PyvtkTextActor_SetMapper, 1,
   (char*)"V.SetMapper(vtkPolyDataMapper2D)\nC++: void SetMapper(vtkPolyDataMapper2D *mapper)\n\nOverride the vtkPolyDataMapper2D that defines the text to be\ndrawn. One will be created by default if none is supplied\n"},
  {(char*)"SetInput", PyvtkTextActor_SetInput, 1,
   (char*)"V.SetInput(string)\nC++: void SetInput(const char *inputString)\n\nSet the text string to be displayed. \"\\n\" is recognized as a\ncarriage return/linefeed (line separator). The characters must be\nin the ISO-8859-1 encoding. Convenience method to the underlying\nmapper\n"},
  {(char*)"GetInput", PyvtkTextActor_GetInput, 1,
   (char*)"V.GetInput() -> string\nC++: char *GetInput()\n\nSet the text string to be displayed. \"\\n\" is recognized as a\ncarriage return/linefeed (line separator). The characters must be\nin the ISO-8859-1 encoding. Convenience method to the underlying\nmapper\n"},
  {(char*)"SetMinimumSize", PyvtkTextActor_SetMinimumSize, 1,
   (char*)"V.SetMinimumSize(int, int)\nC++: void SetMinimumSize(int, int)\nV.SetMinimumSize((int, int))\nC++: void SetMinimumSize(int a[2])\n\n"},
  {(char*)"GetMinimumSize", PyvtkTextActor_GetMinimumSize, 1,
   (char*)"V.GetMinimumSize() -> (int, int)\nC++: int *GetMinimumSize()\n\n"},
  {(char*)"SetMaximumLineHeight", PyvtkTextActor_SetMaximumLineHeight, 1,
   (char*)"V.SetMaximumLineHeight(float)\nC++: void SetMaximumLineHeight(float a)\n\nSet/Get the maximum height of a line of text as a percentage of\nthe vertical area allocated to this scaled text actor. Defaults\nto 1.0. Only valid when TextScaleMode is PROP.\n"},
  {(char*)"GetMaximumLineHeight", PyvtkTextActor_GetMaximumLineHeight, 1,
   (char*)"V.GetMaximumLineHeight() -> float\nC++: float GetMaximumLineHeight()\n\nSet/Get the maximum height of a line of text as a percentage of\nthe vertical area allocated to this scaled text actor. Defaults\nto 1.0. Only valid when TextScaleMode is PROP.\n"},
  {(char*)"SetTextScaleMode", PyvtkTextActor_SetTextScaleMode, 1,
   (char*)"V.SetTextScaleMode(int)\nC++: void SetTextScaleMode(int)\n\nSet how text should be scaled.  If set to\nvtkTextActor::TEXT_SCALE_MODE_NONE, the the font size will be\nfixed by the size given in TextProperty.  If set to\nvtkTextActor::TEXT_SCALE_MODE_PROP, the text will be scaled to\nfit exactly in the prop as specified by the position 1 & 2\ncoordinates.  If set to vtkTextActor::TEXT_SCALE_MODE_VIEWPORT,\nthe text will be scaled based on the size of the viewport it is\ndisplayed in.\n"},
  {(char*)"GetTextScaleModeMinValue", PyvtkTextActor_GetTextScaleModeMinValue, 1,
   (char*)"V.GetTextScaleModeMinValue() -> int\nC++: int GetTextScaleModeMinValue()\n\nSet how text should be scaled.  If set to\nvtkTextActor::TEXT_SCALE_MODE_NONE, the the font size will be\nfixed by the size given in TextProperty.  If set to\nvtkTextActor::TEXT_SCALE_MODE_PROP, the text will be scaled to\nfit exactly in the prop as specified by the position 1 & 2\ncoordinates.  If set to vtkTextActor::TEXT_SCALE_MODE_VIEWPORT,\nthe text will be scaled based on the size of the viewport it is\ndisplayed in.\n"},
  {(char*)"GetTextScaleModeMaxValue", PyvtkTextActor_GetTextScaleModeMaxValue, 1,
   (char*)"V.GetTextScaleModeMaxValue() -> int\nC++: int GetTextScaleModeMaxValue()\n\nSet how text should be scaled.  If set to\nvtkTextActor::TEXT_SCALE_MODE_NONE, the the font size will be\nfixed by the size given in TextProperty.  If set to\nvtkTextActor::TEXT_SCALE_MODE_PROP, the text will be scaled to\nfit exactly in the prop as specified by the position 1 & 2\ncoordinates.  If set to vtkTextActor::TEXT_SCALE_MODE_VIEWPORT,\nthe text will be scaled based on the size of the viewport it is\ndisplayed in.\n"},
  {(char*)"GetTextScaleMode", PyvtkTextActor_GetTextScaleMode, 1,
   (char*)"V.GetTextScaleMode() -> int\nC++: int GetTextScaleMode()\n\nSet how text should be scaled.  If set to\nvtkTextActor::TEXT_SCALE_MODE_NONE, the the font size will be\nfixed by the size given in TextProperty.  If set to\nvtkTextActor::TEXT_SCALE_MODE_PROP, the text will be scaled to\nfit exactly in the prop as specified by the position 1 & 2\ncoordinates.  If set to vtkTextActor::TEXT_SCALE_MODE_VIEWPORT,\nthe text will be scaled based on the size of the viewport it is\ndisplayed in.\n"},
  {(char*)"SetTextScaleModeToNone", PyvtkTextActor_SetTextScaleModeToNone, 1,
   (char*)"V.SetTextScaleModeToNone()\nC++: void SetTextScaleModeToNone()\n\nSet how text should be scaled.  If set to\nvtkTextActor::TEXT_SCALE_MODE_NONE, the the font size will be\nfixed by the size given in TextProperty.  If set to\nvtkTextActor::TEXT_SCALE_MODE_PROP, the text will be scaled to\nfit exactly in the prop as specified by the position 1 & 2\ncoordinates.  If set to vtkTextActor::TEXT_SCALE_MODE_VIEWPORT,\nthe text will be scaled based on the size of the viewport it is\ndisplayed in.\n"},
  {(char*)"SetTextScaleModeToProp", PyvtkTextActor_SetTextScaleModeToProp, 1,
   (char*)"V.SetTextScaleModeToProp()\nC++: void SetTextScaleModeToProp()\n\nSet how text should be scaled.  If set to\nvtkTextActor::TEXT_SCALE_MODE_NONE, the the font size will be\nfixed by the size given in TextProperty.  If set to\nvtkTextActor::TEXT_SCALE_MODE_PROP, the text will be scaled to\nfit exactly in the prop as specified by the position 1 & 2\ncoordinates.  If set to vtkTextActor::TEXT_SCALE_MODE_VIEWPORT,\nthe text will be scaled based on the size of the viewport it is\ndisplayed in.\n"},
  {(char*)"SetTextScaleModeToViewport", PyvtkTextActor_SetTextScaleModeToViewport, 1,
   (char*)"V.SetTextScaleModeToViewport()\nC++: void SetTextScaleModeToViewport()\n\nSet how text should be scaled.  If set to\nvtkTextActor::TEXT_SCALE_MODE_NONE, the the font size will be\nfixed by the size given in TextProperty.  If set to\nvtkTextActor::TEXT_SCALE_MODE_PROP, the text will be scaled to\nfit exactly in the prop as specified by the position 1 & 2\ncoordinates.  If set to vtkTextActor::TEXT_SCALE_MODE_VIEWPORT,\nthe text will be scaled based on the size of the viewport it is\ndisplayed in.\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"SetScaledText", PyvtkTextActor_SetScaledText, 1,
   (char*)"V.SetScaledText(int)\nC++: void SetScaledText(int)\n\nDO NOT CALL.  Deprecated in VTK 5.4.  Use SetTextScaleMode or\nGetTextScaleMode instead.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"GetScaledText", PyvtkTextActor_GetScaledText, 1,
   (char*)"V.GetScaledText() -> int\nC++: int GetScaledText()\n\nDO NOT CALL.  Deprecated in VTK 5.4.  Use SetTextScaleMode or\nGetTextScaleMode instead.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"ScaledTextOn", PyvtkTextActor_ScaledTextOn, 1,
   (char*)"V.ScaledTextOn()\nC++: void ScaledTextOn()\n\nDO NOT CALL.  Deprecated in VTK 5.4.  Use SetTextScaleMode or\nGetTextScaleMode instead.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"ScaledTextOff", PyvtkTextActor_ScaledTextOff, 1,
   (char*)"V.ScaledTextOff()\nC++: void ScaledTextOff()\n\nDO NOT CALL.  Deprecated in VTK 5.4.  Use SetTextScaleMode or\nGetTextScaleMode instead.\n"},
#endif
  {(char*)"SetUseBorderAlign", PyvtkTextActor_SetUseBorderAlign, 1,
   (char*)"V.SetUseBorderAlign(int)\nC++: void SetUseBorderAlign(int a)\n\nTurn on or off the UseBorderAlign option. When UseBorderAlign is\non, the bounding rectangle is used to align the text, which is\nthe proper behavior when using vtkTextRepresentation\n"},
  {(char*)"GetUseBorderAlign", PyvtkTextActor_GetUseBorderAlign, 1,
   (char*)"V.GetUseBorderAlign() -> int\nC++: int GetUseBorderAlign()\n\nTurn on or off the UseBorderAlign option. When UseBorderAlign is\non, the bounding rectangle is used to align the text, which is\nthe proper behavior when using vtkTextRepresentation\n"},
  {(char*)"UseBorderAlignOn", PyvtkTextActor_UseBorderAlignOn, 1,
   (char*)"V.UseBorderAlignOn()\nC++: void UseBorderAlignOn()\n\nTurn on or off the UseBorderAlign option. When UseBorderAlign is\non, the bounding rectangle is used to align the text, which is\nthe proper behavior when using vtkTextRepresentation\n"},
  {(char*)"UseBorderAlignOff", PyvtkTextActor_UseBorderAlignOff, 1,
   (char*)"V.UseBorderAlignOff()\nC++: void UseBorderAlignOff()\n\nTurn on or off the UseBorderAlign option. When UseBorderAlign is\non, the bounding rectangle is used to align the text, which is\nthe proper behavior when using vtkTextRepresentation\n"},
  {(char*)"SetAlignmentPoint", PyvtkTextActor_SetAlignmentPoint, 1,
   (char*)"V.SetAlignmentPoint(int)\nC++: void SetAlignmentPoint(int point)\n\nThis method is being depricated.  Use SetJustification and\nSetVerticalJustification in text property instead. Set/Get the\nAlignment point if zero (default), the text aligns itself to the\nbottom left corner (which is defined by the PositionCoordinate)\notherwise the text aligns itself to corner/midpoint or centre\n      6   7   8\n      3   4   5\n      0   1   2\n  This is the same as setting the TextProperty's justification.\nCurrently TextActor is not oriented around its AlignmentPoint.\n"},
  {(char*)"GetAlignmentPoint", PyvtkTextActor_GetAlignmentPoint, 1,
   (char*)"V.GetAlignmentPoint() -> int\nC++: int GetAlignmentPoint()\n\nThis method is being depricated.  Use SetJustification and\nSetVerticalJustification in text property instead. Set/Get the\nAlignment point if zero (default), the text aligns itself to the\nbottom left corner (which is defined by the PositionCoordinate)\notherwise the text aligns itself to corner/midpoint or centre\n      6   7   8\n      3   4   5\n      0   1   2\n  This is the same as setting the TextProperty's justification.\nCurrently TextActor is not oriented around its AlignmentPoint.\n"},
  {(char*)"SetOrientation", PyvtkTextActor_SetOrientation, 1,
   (char*)"V.SetOrientation(float)\nC++: void SetOrientation(float orientation)\n\nCounterclockwise rotation around the Alignment point. Units are\nin degrees and defaults to 0. The orientation in the text\nproperty rotates the text in the texture map.  It will proba ly\nnot give you the effect you desire.\n"},
  {(char*)"GetOrientation", PyvtkTextActor_GetOrientation, 1,
   (char*)"V.GetOrientation() -> float\nC++: float GetOrientation()\n\nCounterclockwise rotation around the Alignment point. Units are\nin degrees and defaults to 0. The orientation in the text\nproperty rotates the text in the texture map.  It will proba ly\nnot give you the effect you desire.\n"},
  {(char*)"SetTextProperty", PyvtkTextActor_SetTextProperty, 1,
   (char*)"V.SetTextProperty(vtkTextProperty)\nC++: virtual void SetTextProperty(vtkTextProperty *p)\n\nSet/Get the text property.\n"},
  {(char*)"GetTextProperty", PyvtkTextActor_GetTextProperty, 1,
   (char*)"V.GetTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetTextProperty()\n\nSet/Get the text property.\n"},
  {(char*)"SetNonLinearFontScale", PyvtkTextActor_SetNonLinearFontScale, 1,
   (char*)"V.SetNonLinearFontScale(float, int)\nC++: virtual void SetNonLinearFontScale(double exponent,\n    int target)\n\nEnable non-linear scaling of font sizes. This is useful in\ncombination with scaled text. With small windows you want to use\nthe entire scaled text area. With larger windows you want to\nreduce the font size some so that the entire area is not used.\nThese values modify the computed font size as follows:\n  newFontSize = pow(FontSize,exponent)*pow(target,1.0 - exponent)\ntypically exponent should be around 0.7 and target should be\naround 10\n"},
  {(char*)"ComputeScaledFont", PyvtkTextActor_ComputeScaledFont, 1,
   (char*)"V.ComputeScaledFont(vtkViewport)\nC++: virtual void ComputeScaledFont(vtkViewport *viewport)\n\nCompute the scale the font should be given the viewport.  The\nresult is placed in the ScaledTextProperty ivar.\n"},
  {(char*)"GetScaledTextProperty", PyvtkTextActor_GetScaledTextProperty, 1,
   (char*)"V.GetScaledTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetScaledTextProperty()\n\nGet the scaled font.  Use ComputeScaledFont to set the scale for\na given viewport.\n"},
  {(char*)"GetFontScale", PyvtkTextActor_GetFontScale, 1,
   (char*)"V.GetFontScale(vtkViewport) -> float\nC++: static float GetFontScale(vtkViewport *viewport)\n\nProvide a font scaling based on a viewport.  This is the scaling\nfactor used when the TextScaleMode is set to VIEWPORT and has\nbeen made public for other components to use.  This scaling\nassumes that the long dimension of the viewport is meant to be 6\ninches (a typical width of text in a paper) and then resizes\nbased on if that long dimension was 72 DPI.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkTextActor_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS. Release any\ngraphics resources that are being consumed by this actor. The\nparameter window could be used to determine which graphic\nresources to release.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkTextActor_RenderOpaqueGeometry, 1,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *viewport)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS. Draw the text\nactor to the screen.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkTextActor_RenderTranslucentPolygonalGeometry, 1,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(vtkViewport *)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS. Draw the text\nactor to the screen.\n"},
  {(char*)"RenderOverlay", PyvtkTextActor_RenderOverlay, 1,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: virtual int RenderOverlay(vtkViewport *viewport)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS. Draw the text\nactor to the screen.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkTextActor_HasTranslucentPolygonalGeometry, 1,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTextActor_StaticNew()
{
  return vtkTextActor::New();
}

PyObject *PyVTKClass_vtkTextActorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTextActor_StaticNew,
    PyvtkTextActor_Methods,
    "vtkTextActor", modulename,
    NULL, NULL,
    PyvtkTextActor_Doc(),
    PyVTKClass_vtkActor2DNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"TEXT_SCALE_MODE_NONE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"TEXT_SCALE_MODE_PROP", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"TEXT_SCALE_MODE_VIEWPORT", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkTextActor_Doc()
{
  static const char *docstring[] = {
    "vtkTextActor - An actor that displays text. Scaled or unscaled\n\n",
    "Superclass: vtkActor2D\n\n",
    "vtkTextActor can be used to place text annotation into a window. When\nTextScaleMode is NONE, the text is fixed font and operation is the\nsame as a vtkPolyDataMapper2D/vtkActor2D pair. When TextScaleMode is\nVIEWPORT, the font resizes such that it maintains a consistent size\nrelative to the viewport in which it is rendered. When TextScaleMode\nis PROP, the font resizes such that the text fits inside ",
    "the box\ndefined by the position 1 & 2 coordinates. This class replaces the\ndeprecated vtkScaledTextActor and acts as a convenient wrapper for a\nvtkTextMapper/vtkActor2D pair. Set the text property/attributes\nthrough the vtkTextProperty associated to this actor.\n\nSee Also:\n\nvtkActor2D vtkPolyDataMapper vtkTextProperty vtkFreeTypeUtilities\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTextActor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTextActorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTextActor", o) != 0)
    {
    Py_DECREF(o);
    }

}

