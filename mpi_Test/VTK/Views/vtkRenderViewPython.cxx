// python wrapper for vtkRenderView
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
#include "vtkRenderView.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkRenderView(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkRenderView(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkRenderViewNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkRenderViewNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkRenderViewBaseNew
extern "C" { PyObject *PyVTKClass_vtkRenderViewBaseNew(const char *); }
#define DECLARED_PyVTKClass_vtkRenderViewBaseNew
#endif

static const char **PyvtkRenderView_Doc();


static PyObject *
PyvtkRenderView_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

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
      tempr = op->vtkRenderView::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderView_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

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
      tempr = op->vtkRenderView::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderView_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  vtkRenderView *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkRenderView::NewInstance();
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
PyvtkRenderView_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkRenderView *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkRenderView::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderView_SetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  vtkRenderWindowInteractor *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor"))
    {
    if (ap.IsBound())
      {
      op->SetInteractor(temp0);
      }
    else
      {
      op->vtkRenderView::SetInteractor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderView_SetInteractorStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractorStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  vtkInteractorObserver *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInteractorObserver"))
    {
    if (ap.IsBound())
      {
      op->SetInteractorStyle(temp0);
      }
    else
      {
      op->vtkRenderView::SetInteractorStyle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderView_GetInteractorStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractorStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  vtkInteractorObserver *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInteractorStyle();
      }
    else
      {
      tempr = op->vtkRenderView::GetInteractorStyle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderView_SetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  vtkRenderWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
    {
    if (ap.IsBound())
      {
      op->SetRenderWindow(temp0);
      }
    else
      {
      op->vtkRenderView::SetRenderWindow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderView_SetInteractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInteractionMode(temp0);
      }
    else
      {
      op->vtkRenderView::SetInteractionMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderView_GetInteractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInteractionMode();
      }
    else
      {
      tempr = op->vtkRenderView::GetInteractionMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderView_SetInteractionModeTo2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionModeTo2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInteractionModeTo2D();
      }
    else
      {
      op->vtkRenderView::SetInteractionModeTo2D();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderView_SetInteractionModeTo3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionModeTo3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInteractionModeTo3D();
      }
    else
      {
      op->vtkRenderView::SetInteractionModeTo3D();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderView_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Render();
      }
    else
      {
      op->vtkRenderView::Render();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderView_ApplyViewTheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyViewTheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  vtkViewTheme *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewTheme"))
    {
    if (ap.IsBound())
      {
      op->ApplyViewTheme(temp0);
      }
    else
      {
      op->vtkRenderView::ApplyViewTheme(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderView_SetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  vtkAbstractTransform *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
    {
    if (ap.IsBound())
      {
      op->SetTransform(temp0);
      }
    else
      {
      op->vtkRenderView::SetTransform(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderView_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  vtkAbstractTransform *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTransform();
      }
    else
      {
      tempr = op->vtkRenderView::GetTransform();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderView_SetDisplayHoverText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayHoverText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDisplayHoverText(temp0);
      }
    else
      {
      op->vtkRenderView::SetDisplayHoverText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderView_GetDisplayHoverText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayHoverText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDisplayHoverText();
      }
    else
      {
      tempr = op->vtkRenderView::GetDisplayHoverText();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderView_DisplayHoverTextOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayHoverTextOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DisplayHoverTextOn();
      }
    else
      {
      op->vtkRenderView::DisplayHoverTextOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderView_DisplayHoverTextOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayHoverTextOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DisplayHoverTextOff();
      }
    else
      {
      op->vtkRenderView::DisplayHoverTextOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderView_SetSelectionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSelectionMode(temp0);
      }
    else
      {
      op->vtkRenderView::SetSelectionMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderView_GetSelectionModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectionModeMinValue();
      }
    else
      {
      tempr = op->vtkRenderView::GetSelectionModeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderView_GetSelectionModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectionModeMaxValue();
      }
    else
      {
      tempr = op->vtkRenderView::GetSelectionModeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderView_GetSelectionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectionMode();
      }
    else
      {
      tempr = op->vtkRenderView::GetSelectionMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderView_SetSelectionModeToSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionModeToSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSelectionModeToSurface();
      }
    else
      {
      op->vtkRenderView::SetSelectionModeToSurface();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderView_SetSelectionModeToFrustum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionModeToFrustum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSelectionModeToFrustum();
      }
    else
      {
      op->vtkRenderView::SetSelectionModeToFrustum();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderView_AddLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->AddLabels(temp0);
      }
    else
      {
      op->vtkRenderView::AddLabels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderView_RemoveLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->RemoveLabels(temp0);
      }
    else
      {
      op->vtkRenderView::RemoveLabels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderView_SetIconTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  vtkTexture *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTexture"))
    {
    if (ap.IsBound())
      {
      op->SetIconTexture(temp0);
      }
    else
      {
      op->vtkRenderView::SetIconTexture(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderView_GetIconTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIconTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  vtkTexture *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIconTexture();
      }
    else
      {
      tempr = op->vtkRenderView::GetIconTexture();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderView_SetIconSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetIconSize(temp0, temp1);
      }
    else
      {
      op->vtkRenderView::SetIconSize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderView_SetIconSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetIconSize(temp0);
      }
    else
      {
      op->vtkRenderView::SetIconSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderView_SetIconSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkRenderView_SetIconSize_s1(self, args);
    case 1:
      return PyvtkRenderView_SetIconSize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetIconSize");
  return NULL;
}



static PyObject *
PyvtkRenderView_GetIconSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIconSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIconSize();
      }
    else
      {
      tempr = op->vtkRenderView::GetIconSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderView_SetDisplaySize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplaySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetDisplaySize(temp0, temp1);
      }
    else
      {
      op->vtkRenderView::SetDisplaySize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderView_SetDisplaySize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplaySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetDisplaySize(temp0);
      }
    else
      {
      op->vtkRenderView::SetDisplaySize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderView_SetDisplaySize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkRenderView_SetDisplaySize_s1(self, args);
    case 1:
      return PyvtkRenderView_SetDisplaySize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDisplaySize");
  return NULL;
}



static PyObject *
PyvtkRenderView_GetDisplaySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplaySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->GetDisplaySize(temp0, temp1);
      }
    else
      {
      op->vtkRenderView::GetDisplaySize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderView_SetLabelPlacementMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelPlacementMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabelPlacementMode(temp0);
      }
    else
      {
      op->vtkRenderView::SetLabelPlacementMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderView_GetLabelPlacementMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelPlacementMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLabelPlacementMode();
      }
    else
      {
      tempr = op->vtkRenderView::GetLabelPlacementMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderView_SetLabelPlacementModeToNoOverlap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelPlacementModeToNoOverlap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLabelPlacementModeToNoOverlap();
      }
    else
      {
      op->vtkRenderView::SetLabelPlacementModeToNoOverlap();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderView_SetLabelPlacementModeToAll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelPlacementModeToAll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLabelPlacementModeToAll();
      }
    else
      {
      op->vtkRenderView::SetLabelPlacementModeToAll();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderView_SetLabelRenderMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelRenderMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabelRenderMode(temp0);
      }
    else
      {
      op->vtkRenderView::SetLabelRenderMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderView_GetLabelRenderMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelRenderMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLabelRenderMode();
      }
    else
      {
      tempr = op->vtkRenderView::GetLabelRenderMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderView_SetLabelRenderModeToFreetype(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelRenderModeToFreetype");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLabelRenderModeToFreetype();
      }
    else
      {
      op->vtkRenderView::SetLabelRenderModeToFreetype();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderView_SetLabelRenderModeToQt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelRenderModeToQt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLabelRenderModeToQt();
      }
    else
      {
      op->vtkRenderView::SetLabelRenderModeToQt();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderView_SetRenderOnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderOnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRenderOnMouseMove(temp0);
      }
    else
      {
      op->vtkRenderView::SetRenderOnMouseMove(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderView_GetRenderOnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderOnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRenderOnMouseMove();
      }
    else
      {
      tempr = op->vtkRenderView::GetRenderOnMouseMove();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderView_RenderOnMouseMoveOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOnMouseMoveOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RenderOnMouseMoveOn();
      }
    else
      {
      op->vtkRenderView::RenderOnMouseMoveOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderView_RenderOnMouseMoveOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOnMouseMoveOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RenderOnMouseMoveOff();
      }
    else
      {
      op->vtkRenderView::RenderOnMouseMoveOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkRenderView_Methods[] = {
  {(char*)"GetClassName", PyvtkRenderView_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRenderView_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRenderView_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkRenderView\nC++: vtkRenderView *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRenderView_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRenderView\nC++: vtkRenderView *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetInteractor", PyvtkRenderView_SetInteractor, 1,
   (char*)"V.SetInteractor(vtkRenderWindowInteractor)\nC++: virtual void SetInteractor(\n    vtkRenderWindowInteractor *interactor)\n\nThe render window interactor. Note that this requires special\nhandling in order to do correctly - see the notes in the detailed\ndescription of vtkRenderViewBase.\n"},
  {(char*)"SetInteractorStyle", PyvtkRenderView_SetInteractorStyle, 1,
   (char*)"V.SetInteractorStyle(vtkInteractorObserver)\nC++: virtual void SetInteractorStyle(vtkInteractorObserver *style)\n\nThe interactor style associated with the render view.\n"},
  {(char*)"GetInteractorStyle", PyvtkRenderView_GetInteractorStyle, 1,
   (char*)"V.GetInteractorStyle() -> vtkInteractorObserver\nC++: virtual vtkInteractorObserver *GetInteractorStyle()\n\nGet the interactor style associated with the render view.\n"},
  {(char*)"SetRenderWindow", PyvtkRenderView_SetRenderWindow, 1,
   (char*)"V.SetRenderWindow(vtkRenderWindow)\nC++: virtual void SetRenderWindow(vtkRenderWindow *win)\n\nSet the render window for this view. Note that this requires\nspecial handling in order to do correctly - see the notes in the\ndetailed description of vtkRenderViewBase.\n"},
  {(char*)"SetInteractionMode", PyvtkRenderView_SetInteractionMode, 1,
   (char*)"V.SetInteractionMode(int)\nC++: void SetInteractionMode(int mode)\n\n"},
  {(char*)"GetInteractionMode", PyvtkRenderView_GetInteractionMode, 1,
   (char*)"V.GetInteractionMode() -> int\nC++: int GetInteractionMode()\n\n"},
  {(char*)"SetInteractionModeTo2D", PyvtkRenderView_SetInteractionModeTo2D, 1,
   (char*)"V.SetInteractionModeTo2D()\nC++: virtual void SetInteractionModeTo2D()\n\nSet the interaction mode for the view. Choices are:\nvtkRenderView::INTERACTION_MODE_2D - 2D interactor\nvtkRenderView::INTERACTION_MODE_3D - 3D interactor\n"},
  {(char*)"SetInteractionModeTo3D", PyvtkRenderView_SetInteractionModeTo3D, 1,
   (char*)"V.SetInteractionModeTo3D()\nC++: virtual void SetInteractionModeTo3D()\n\nSet the interaction mode for the view. Choices are:\nvtkRenderView::INTERACTION_MODE_2D - 2D interactor\nvtkRenderView::INTERACTION_MODE_3D - 3D interactor\n"},
  {(char*)"Render", PyvtkRenderView_Render, 1,
   (char*)"V.Render()\nC++: virtual void Render()\n\nUpdates the representations, then calls Render() on the render\nwindow associated with this view.\n"},
  {(char*)"ApplyViewTheme", PyvtkRenderView_ApplyViewTheme, 1,
   (char*)"V.ApplyViewTheme(vtkViewTheme)\nC++: virtual void ApplyViewTheme(vtkViewTheme *theme)\n\nApplies a view theme to this view.\n"},
  {(char*)"SetTransform", PyvtkRenderView_SetTransform, 1,
   (char*)"V.SetTransform(vtkAbstractTransform)\nC++: virtual void SetTransform(vtkAbstractTransform *transform)\n\nSet the view's transform. All vtkRenderedRepresentations added to\nthis view should use this transform.\n"},
  {(char*)"GetTransform", PyvtkRenderView_GetTransform, 1,
   (char*)"V.GetTransform() -> vtkAbstractTransform\nC++: vtkAbstractTransform *GetTransform()\n\nSet the view's transform. All vtkRenderedRepresentations added to\nthis view should use this transform.\n"},
  {(char*)"SetDisplayHoverText", PyvtkRenderView_SetDisplayHoverText, 1,
   (char*)"V.SetDisplayHoverText(bool)\nC++: virtual void SetDisplayHoverText(bool b)\n\nWhether the view should display hover text.\n"},
  {(char*)"GetDisplayHoverText", PyvtkRenderView_GetDisplayHoverText, 1,
   (char*)"V.GetDisplayHoverText() -> bool\nC++: bool GetDisplayHoverText()\n\nWhether the view should display hover text.\n"},
  {(char*)"DisplayHoverTextOn", PyvtkRenderView_DisplayHoverTextOn, 1,
   (char*)"V.DisplayHoverTextOn()\nC++: void DisplayHoverTextOn()\n\nWhether the view should display hover text.\n"},
  {(char*)"DisplayHoverTextOff", PyvtkRenderView_DisplayHoverTextOff, 1,
   (char*)"V.DisplayHoverTextOff()\nC++: void DisplayHoverTextOff()\n\nWhether the view should display hover text.\n"},
  {(char*)"SetSelectionMode", PyvtkRenderView_SetSelectionMode, 1,
   (char*)"V.SetSelectionMode(int)\nC++: void SetSelectionMode(int)\n\nSets the selection mode for the render view. SURFACE selection\nuses vtkHardwareSelector to perform a selection of visible cells.\nFRUSTUM selection just creates a view frustum selection, which\nwill select everything in the frustum.\n"},
  {(char*)"GetSelectionModeMinValue", PyvtkRenderView_GetSelectionModeMinValue, 1,
   (char*)"V.GetSelectionModeMinValue() -> int\nC++: int GetSelectionModeMinValue()\n\nSets the selection mode for the render view. SURFACE selection\nuses vtkHardwareSelector to perform a selection of visible cells.\nFRUSTUM selection just creates a view frustum selection, which\nwill select everything in the frustum.\n"},
  {(char*)"GetSelectionModeMaxValue", PyvtkRenderView_GetSelectionModeMaxValue, 1,
   (char*)"V.GetSelectionModeMaxValue() -> int\nC++: int GetSelectionModeMaxValue()\n\nSets the selection mode for the render view. SURFACE selection\nuses vtkHardwareSelector to perform a selection of visible cells.\nFRUSTUM selection just creates a view frustum selection, which\nwill select everything in the frustum.\n"},
  {(char*)"GetSelectionMode", PyvtkRenderView_GetSelectionMode, 1,
   (char*)"V.GetSelectionMode() -> int\nC++: int GetSelectionMode()\n\nSets the selection mode for the render view. SURFACE selection\nuses vtkHardwareSelector to perform a selection of visible cells.\nFRUSTUM selection just creates a view frustum selection, which\nwill select everything in the frustum.\n"},
  {(char*)"SetSelectionModeToSurface", PyvtkRenderView_SetSelectionModeToSurface, 1,
   (char*)"V.SetSelectionModeToSurface()\nC++: void SetSelectionModeToSurface()\n\nSets the selection mode for the render view. SURFACE selection\nuses vtkHardwareSelector to perform a selection of visible cells.\nFRUSTUM selection just creates a view frustum selection, which\nwill select everything in the frustum.\n"},
  {(char*)"SetSelectionModeToFrustum", PyvtkRenderView_SetSelectionModeToFrustum, 1,
   (char*)"V.SetSelectionModeToFrustum()\nC++: void SetSelectionModeToFrustum()\n\nSets the selection mode for the render view. SURFACE selection\nuses vtkHardwareSelector to perform a selection of visible cells.\nFRUSTUM selection just creates a view frustum selection, which\nwill select everything in the frustum.\n"},
  {(char*)"AddLabels", PyvtkRenderView_AddLabels, 1,
   (char*)"V.AddLabels(vtkAlgorithmOutput)\nC++: virtual void AddLabels(vtkAlgorithmOutput *conn)\n\nAdd labels from an input connection with an associated text\nproperty. The output must be a vtkLabelHierarchy (normally the\noutput of vtkPointSetToLabelHierarchy).\n"},
  {(char*)"RemoveLabels", PyvtkRenderView_RemoveLabels, 1,
   (char*)"V.RemoveLabels(vtkAlgorithmOutput)\nC++: virtual void RemoveLabels(vtkAlgorithmOutput *conn)\n\nRemove labels from an input connection.\n"},
  {(char*)"SetIconTexture", PyvtkRenderView_SetIconTexture, 1,
   (char*)"V.SetIconTexture(vtkTexture)\nC++: virtual void SetIconTexture(vtkTexture *texture)\n\nSet the icon sheet to use for rendering icons.\n"},
  {(char*)"GetIconTexture", PyvtkRenderView_GetIconTexture, 1,
   (char*)"V.GetIconTexture() -> vtkTexture\nC++: vtkTexture *GetIconTexture()\n\nSet the icon sheet to use for rendering icons.\n"},
  {(char*)"SetIconSize", PyvtkRenderView_SetIconSize, 1,
   (char*)"V.SetIconSize(int, int)\nC++: void SetIconSize(int, int)\nV.SetIconSize((int, int))\nC++: void SetIconSize(int a[2])\n\n"},
  {(char*)"GetIconSize", PyvtkRenderView_GetIconSize, 1,
   (char*)"V.GetIconSize() -> (int, int)\nC++: int *GetIconSize()\n\n"},
  {(char*)"SetDisplaySize", PyvtkRenderView_SetDisplaySize, 1,
   (char*)"V.SetDisplaySize(int, int)\nC++: void SetDisplaySize(int, int)\nV.SetDisplaySize((int, int))\nC++: void SetDisplaySize(int a[2])\n\n"},
  {(char*)"GetDisplaySize", PyvtkRenderView_GetDisplaySize, 1,
   (char*)"V.GetDisplaySize(int, int)\nC++: void GetDisplaySize(int &dsx, int &dsy)\n\nSet the display size of the icon (which may be different from the\nicon size). By default, if this value is not set, the the\nIconSize is used.\n"},
  {(char*)"SetLabelPlacementMode", PyvtkRenderView_SetLabelPlacementMode, 1,
   (char*)"V.SetLabelPlacementMode(int)\nC++: virtual void SetLabelPlacementMode(int mode)\n\nLabel placement mode. NO_OVERLAP uses vtkLabelPlacementMapper,\nwhich has a faster startup time and works with 2D or 3D labels.\nALL displays all labels (Warning: This may cause incredibly slow\nrender times on datasets with more than a few hundred labels).\n"},
  {(char*)"GetLabelPlacementMode", PyvtkRenderView_GetLabelPlacementMode, 1,
   (char*)"V.GetLabelPlacementMode() -> int\nC++: virtual int GetLabelPlacementMode()\n\nLabel placement mode. NO_OVERLAP uses vtkLabelPlacementMapper,\nwhich has a faster startup time and works with 2D or 3D labels.\nALL displays all labels (Warning: This may cause incredibly slow\nrender times on datasets with more than a few hundred labels).\n"},
  {(char*)"SetLabelPlacementModeToNoOverlap", PyvtkRenderView_SetLabelPlacementModeToNoOverlap, 1,
   (char*)"V.SetLabelPlacementModeToNoOverlap()\nC++: virtual void SetLabelPlacementModeToNoOverlap()\n\nLabel placement mode. NO_OVERLAP uses vtkLabelPlacementMapper,\nwhich has a faster startup time and works with 2D or 3D labels.\nALL displays all labels (Warning: This may cause incredibly slow\nrender times on datasets with more than a few hundred labels).\n"},
  {(char*)"SetLabelPlacementModeToAll", PyvtkRenderView_SetLabelPlacementModeToAll, 1,
   (char*)"V.SetLabelPlacementModeToAll()\nC++: virtual void SetLabelPlacementModeToAll()\n\nLabel placement mode. NO_OVERLAP uses vtkLabelPlacementMapper,\nwhich has a faster startup time and works with 2D or 3D labels.\nALL displays all labels (Warning: This may cause incredibly slow\nrender times on datasets with more than a few hundred labels).\n"},
  {(char*)"SetLabelRenderMode", PyvtkRenderView_SetLabelRenderMode, 1,
   (char*)"V.SetLabelRenderMode(int)\nC++: virtual void SetLabelRenderMode(int mode)\n\nLabel render mode. FREETYPE uses the freetype label rendering. QT\nuses more advanced Qt-based label rendering.\n"},
  {(char*)"GetLabelRenderMode", PyvtkRenderView_GetLabelRenderMode, 1,
   (char*)"V.GetLabelRenderMode() -> int\nC++: virtual int GetLabelRenderMode()\n\nLabel render mode. FREETYPE uses the freetype label rendering. QT\nuses more advanced Qt-based label rendering.\n"},
  {(char*)"SetLabelRenderModeToFreetype", PyvtkRenderView_SetLabelRenderModeToFreetype, 1,
   (char*)"V.SetLabelRenderModeToFreetype()\nC++: virtual void SetLabelRenderModeToFreetype()\n\nLabel render mode. FREETYPE uses the freetype label rendering. QT\nuses more advanced Qt-based label rendering.\n"},
  {(char*)"SetLabelRenderModeToQt", PyvtkRenderView_SetLabelRenderModeToQt, 1,
   (char*)"V.SetLabelRenderModeToQt()\nC++: virtual void SetLabelRenderModeToQt()\n\nLabel render mode. FREETYPE uses the freetype label rendering. QT\nuses more advanced Qt-based label rendering.\n"},
  {(char*)"SetRenderOnMouseMove", PyvtkRenderView_SetRenderOnMouseMove, 1,
   (char*)"V.SetRenderOnMouseMove(bool)\nC++: void SetRenderOnMouseMove(bool b)\n\nWhether to render on every mouse move.\n"},
  {(char*)"GetRenderOnMouseMove", PyvtkRenderView_GetRenderOnMouseMove, 1,
   (char*)"V.GetRenderOnMouseMove() -> bool\nC++: bool GetRenderOnMouseMove()\n\nWhether to render on every mouse move.\n"},
  {(char*)"RenderOnMouseMoveOn", PyvtkRenderView_RenderOnMouseMoveOn, 1,
   (char*)"V.RenderOnMouseMoveOn()\nC++: void RenderOnMouseMoveOn()\n\nWhether to render on every mouse move.\n"},
  {(char*)"RenderOnMouseMoveOff", PyvtkRenderView_RenderOnMouseMoveOff, 1,
   (char*)"V.RenderOnMouseMoveOff()\nC++: void RenderOnMouseMoveOff()\n\nWhether to render on every mouse move.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRenderView_StaticNew()
{
  return vtkRenderView::New();
}

PyObject *PyVTKClass_vtkRenderViewNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRenderView_StaticNew,
    PyvtkRenderView_Methods,
    "vtkRenderView", modulename,
    NULL, NULL,
    PyvtkRenderView_Doc(),
    PyVTKClass_vtkRenderViewBaseNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"INTERACTION_MODE_2D", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"INTERACTION_MODE_3D", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"INTERACTION_MODE_UNKNOWN", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"SURFACE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"FRUSTUM", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"NO_OVERLAP", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"ALL", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"FREETYPE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"QT", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkRenderView_Doc()
{
  static const char *docstring[] = {
    "vtkRenderView - A view containing a renderer.\n\n",
    "Superclass: vtkRenderViewBase\n\n",
    "vtkRenderView is a view which contains a vtkRenderer.  You may add\nvtkActors directly to the renderer, or add certain\nvtkDataRepresentation subclasses to the renderer.  The render view\nsupports drag selection with the mouse to select cells.\n\nThis class is also the parent class for any more specialized view\nwhich uses a renderer.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRenderView(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRenderViewNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRenderView", o) != 0)
    {
    Py_DECREF(o);
    }

}

