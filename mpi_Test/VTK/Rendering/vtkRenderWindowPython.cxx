// python wrapper for vtkRenderWindow
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
#include "vtkRenderWindow.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkRenderWindow(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkRenderWindow(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkRenderWindowNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkRenderWindowNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkWindowNew
extern "C" { PyObject *PyVTKClass_vtkWindowNew(const char *); }
#define DECLARED_PyVTKClass_vtkWindowNew
#endif

static const char **PyvtkRenderWindow_Doc();


static PyObject *
PyvtkRenderWindow_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

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
      tempr = op->vtkRenderWindow::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

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
      tempr = op->vtkRenderWindow::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  vtkRenderWindow *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkRenderWindow::NewInstance();
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
PyvtkRenderWindow_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkRenderWindow *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkRenderWindow::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_AddRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->AddRenderer(temp0);
      }
    else
      {
      op->vtkRenderWindow::AddRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_RemoveRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->RemoveRenderer(temp0);
      }
    else
      {
      op->vtkRenderWindow::RemoveRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_HasRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  vtkRenderer *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      tempr = op->HasRenderer(temp0);
      }
    else
      {
      tempr = op->vtkRenderWindow::HasRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetRenderLibrary(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetRenderLibrary");

  const char *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkRenderWindow::GetRenderLibrary();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetRenderers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  vtkRendererCollection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRenderers();
      }
    else
      {
      tempr = op->vtkRenderWindow::GetRenderers();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Render();
      }
    else
      {
      op->vtkRenderWindow::Render();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_Start(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Start");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->Start();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_Finalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->Finalize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_Frame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Frame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->Frame();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_WaitForCompletion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WaitForCompletion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->WaitForCompletion();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_CopyResultFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyResultFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CopyResultFrame();
      }
    else
      {
      op->vtkRenderWindow::CopyResultFrame();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_MakeRenderWindowInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeRenderWindowInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  vtkRenderWindowInteractor *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->MakeRenderWindowInteractor();
      }
    else
      {
      tempr = op->vtkRenderWindow::MakeRenderWindowInteractor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_HideCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HideCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->HideCursor();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_ShowCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->ShowCursor();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetCursorPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCursorPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetCursorPosition(temp0, temp1);
      }
    else
      {
      op->vtkRenderWindow::SetCursorPosition(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetCurrentCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCurrentCursor(temp0);
      }
    else
      {
      op->vtkRenderWindow::SetCurrentCursor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetCurrentCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCurrentCursor();
      }
    else
      {
      tempr = op->vtkRenderWindow::GetCurrentCursor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetFullScreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFullScreen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetFullScreen(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetFullScreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFullScreen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFullScreen();
      }
    else
      {
      tempr = op->vtkRenderWindow::GetFullScreen();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_FullScreenOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FullScreenOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FullScreenOn();
      }
    else
      {
      op->vtkRenderWindow::FullScreenOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_FullScreenOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FullScreenOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FullScreenOff();
      }
    else
      {
      op->vtkRenderWindow::FullScreenOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetBorders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBorders(temp0);
      }
    else
      {
      op->vtkRenderWindow::SetBorders(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetBorders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBorders();
      }
    else
      {
      tempr = op->vtkRenderWindow::GetBorders();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_BordersOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BordersOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BordersOn();
      }
    else
      {
      op->vtkRenderWindow::BordersOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_BordersOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BordersOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BordersOff();
      }
    else
      {
      op->vtkRenderWindow::BordersOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetStereoCapableWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStereoCapableWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStereoCapableWindow();
      }
    else
      {
      tempr = op->vtkRenderWindow::GetStereoCapableWindow();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_StereoCapableWindowOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StereoCapableWindowOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StereoCapableWindowOn();
      }
    else
      {
      op->vtkRenderWindow::StereoCapableWindowOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_StereoCapableWindowOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StereoCapableWindowOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StereoCapableWindowOff();
      }
    else
      {
      op->vtkRenderWindow::StereoCapableWindowOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetStereoCapableWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoCapableWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStereoCapableWindow(temp0);
      }
    else
      {
      op->vtkRenderWindow::SetStereoCapableWindow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetStereoRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStereoRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStereoRender();
      }
    else
      {
      tempr = op->vtkRenderWindow::GetStereoRender();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetStereoRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStereoRender(temp0);
      }
    else
      {
      op->vtkRenderWindow::SetStereoRender(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_StereoRenderOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StereoRenderOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StereoRenderOn();
      }
    else
      {
      op->vtkRenderWindow::StereoRenderOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_StereoRenderOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StereoRenderOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StereoRenderOff();
      }
    else
      {
      op->vtkRenderWindow::StereoRenderOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetAlphaBitPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlphaBitPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAlphaBitPlanes(temp0);
      }
    else
      {
      op->vtkRenderWindow::SetAlphaBitPlanes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetAlphaBitPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlphaBitPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAlphaBitPlanes();
      }
    else
      {
      tempr = op->vtkRenderWindow::GetAlphaBitPlanes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_AlphaBitPlanesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AlphaBitPlanesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AlphaBitPlanesOn();
      }
    else
      {
      op->vtkRenderWindow::AlphaBitPlanesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_AlphaBitPlanesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AlphaBitPlanesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AlphaBitPlanesOff();
      }
    else
      {
      op->vtkRenderWindow::AlphaBitPlanesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetPointSmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointSmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPointSmoothing(temp0);
      }
    else
      {
      op->vtkRenderWindow::SetPointSmoothing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetPointSmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointSmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointSmoothing();
      }
    else
      {
      tempr = op->vtkRenderWindow::GetPointSmoothing();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_PointSmoothingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointSmoothingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PointSmoothingOn();
      }
    else
      {
      op->vtkRenderWindow::PointSmoothingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_PointSmoothingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointSmoothingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PointSmoothingOff();
      }
    else
      {
      op->vtkRenderWindow::PointSmoothingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetLineSmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineSmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLineSmoothing(temp0);
      }
    else
      {
      op->vtkRenderWindow::SetLineSmoothing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetLineSmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineSmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLineSmoothing();
      }
    else
      {
      tempr = op->vtkRenderWindow::GetLineSmoothing();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_LineSmoothingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LineSmoothingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LineSmoothingOn();
      }
    else
      {
      op->vtkRenderWindow::LineSmoothingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_LineSmoothingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LineSmoothingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LineSmoothingOff();
      }
    else
      {
      op->vtkRenderWindow::LineSmoothingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetPolygonSmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolygonSmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPolygonSmoothing(temp0);
      }
    else
      {
      op->vtkRenderWindow::SetPolygonSmoothing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetPolygonSmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolygonSmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPolygonSmoothing();
      }
    else
      {
      tempr = op->vtkRenderWindow::GetPolygonSmoothing();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_PolygonSmoothingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PolygonSmoothingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PolygonSmoothingOn();
      }
    else
      {
      op->vtkRenderWindow::PolygonSmoothingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_PolygonSmoothingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PolygonSmoothingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PolygonSmoothingOff();
      }
    else
      {
      op->vtkRenderWindow::PolygonSmoothingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetStereoType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStereoType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStereoType();
      }
    else
      {
      tempr = op->vtkRenderWindow::GetStereoType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetStereoType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStereoType(temp0);
      }
    else
      {
      op->vtkRenderWindow::SetStereoType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetStereoTypeToCrystalEyes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoTypeToCrystalEyes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetStereoTypeToCrystalEyes();
      }
    else
      {
      op->vtkRenderWindow::SetStereoTypeToCrystalEyes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetStereoTypeToRedBlue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoTypeToRedBlue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetStereoTypeToRedBlue();
      }
    else
      {
      op->vtkRenderWindow::SetStereoTypeToRedBlue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetStereoTypeToInterlaced(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoTypeToInterlaced");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetStereoTypeToInterlaced();
      }
    else
      {
      op->vtkRenderWindow::SetStereoTypeToInterlaced();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetStereoTypeToLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoTypeToLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetStereoTypeToLeft();
      }
    else
      {
      op->vtkRenderWindow::SetStereoTypeToLeft();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetStereoTypeToRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoTypeToRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetStereoTypeToRight();
      }
    else
      {
      op->vtkRenderWindow::SetStereoTypeToRight();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetStereoTypeToDresden(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoTypeToDresden");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetStereoTypeToDresden();
      }
    else
      {
      op->vtkRenderWindow::SetStereoTypeToDresden();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetStereoTypeToAnaglyph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoTypeToAnaglyph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetStereoTypeToAnaglyph();
      }
    else
      {
      op->vtkRenderWindow::SetStereoTypeToAnaglyph();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetStereoTypeToCheckerboard(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoTypeToCheckerboard");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetStereoTypeToCheckerboard();
      }
    else
      {
      op->vtkRenderWindow::SetStereoTypeToCheckerboard();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetStereoTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStereoTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStereoTypeAsString();
      }
    else
      {
      tempr = op->vtkRenderWindow::GetStereoTypeAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_StereoUpdate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StereoUpdate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StereoUpdate();
      }
    else
      {
      op->vtkRenderWindow::StereoUpdate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_StereoMidpoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StereoMidpoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StereoMidpoint();
      }
    else
      {
      op->vtkRenderWindow::StereoMidpoint();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_StereoRenderComplete(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StereoRenderComplete");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StereoRenderComplete();
      }
    else
      {
      op->vtkRenderWindow::StereoRenderComplete();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetAnaglyphColorSaturation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnaglyphColorSaturation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAnaglyphColorSaturation(temp0);
      }
    else
      {
      op->vtkRenderWindow::SetAnaglyphColorSaturation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetAnaglyphColorSaturationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnaglyphColorSaturationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAnaglyphColorSaturationMinValue();
      }
    else
      {
      tempr = op->vtkRenderWindow::GetAnaglyphColorSaturationMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetAnaglyphColorSaturationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnaglyphColorSaturationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAnaglyphColorSaturationMaxValue();
      }
    else
      {
      tempr = op->vtkRenderWindow::GetAnaglyphColorSaturationMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetAnaglyphColorSaturation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnaglyphColorSaturation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAnaglyphColorSaturation();
      }
    else
      {
      tempr = op->vtkRenderWindow::GetAnaglyphColorSaturation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetAnaglyphColorMask_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnaglyphColorMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetAnaglyphColorMask(temp0, temp1);
      }
    else
      {
      op->vtkRenderWindow::SetAnaglyphColorMask(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderWindow_SetAnaglyphColorMask_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnaglyphColorMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetAnaglyphColorMask(temp0);
      }
    else
      {
      op->vtkRenderWindow::SetAnaglyphColorMask(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderWindow_SetAnaglyphColorMask(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkRenderWindow_SetAnaglyphColorMask_s1(self, args);
    case 1:
      return PyvtkRenderWindow_SetAnaglyphColorMask_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetAnaglyphColorMask");
  return NULL;
}



static PyObject *
PyvtkRenderWindow_GetAnaglyphColorMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnaglyphColorMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAnaglyphColorMask();
      }
    else
      {
      tempr = op->vtkRenderWindow::GetAnaglyphColorMask();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_WindowRemap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WindowRemap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->WindowRemap();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetSwapBuffers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSwapBuffers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSwapBuffers(temp0);
      }
    else
      {
      op->vtkRenderWindow::SetSwapBuffers(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetSwapBuffers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSwapBuffers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSwapBuffers();
      }
    else
      {
      tempr = op->vtkRenderWindow::GetSwapBuffers();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SwapBuffersOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SwapBuffersOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SwapBuffersOn();
      }
    else
      {
      op->vtkRenderWindow::SwapBuffersOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SwapBuffersOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SwapBuffersOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SwapBuffersOff();
      }
    else
      {
      op->vtkRenderWindow::SwapBuffersOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetPixelData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkUnsignedCharArray *temp4 = NULL;
  int temp5;
  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkUnsignedCharArray") &&
      ap.GetValue(temp5))
    {
    tempr = op->SetPixelData(temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetRGBAPixelData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRGBAPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  vtkFloatArray *temp5 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetVTKObject(temp5, "vtkFloatArray"))
    {
    tempr = op->GetRGBAPixelData(temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetRGBAPixelData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRGBAPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkFloatArray *temp4 = NULL;
  int temp5;
  int temp6 = 0;
  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(6, 7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkFloatArray") &&
      ap.GetValue(temp5) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)))
    {
    tempr = op->SetRGBAPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetRGBACharPixelData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRGBACharPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  vtkUnsignedCharArray *temp5 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetVTKObject(temp5, "vtkUnsignedCharArray"))
    {
    tempr = op->GetRGBACharPixelData(temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetRGBACharPixelData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRGBACharPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkUnsignedCharArray *temp4 = NULL;
  int temp5;
  int temp6 = 0;
  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(6, 7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkUnsignedCharArray") &&
      ap.GetValue(temp5) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)))
    {
    tempr = op->SetRGBACharPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetZbufferData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZbufferData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkFloatArray *temp4 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkFloatArray"))
    {
    tempr = op->GetZbufferData(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetZbufferData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZbufferData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkFloatArray *temp4 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkFloatArray"))
    {
    tempr = op->SetZbufferData(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetZbufferDataAtPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZbufferDataAtPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  int temp1;
  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetZbufferDataAtPoint(temp0, temp1);
      }
    else
      {
      tempr = op->vtkRenderWindow::GetZbufferDataAtPoint(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetAAFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAAFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAAFrames();
      }
    else
      {
      tempr = op->vtkRenderWindow::GetAAFrames();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetAAFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAAFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAAFrames(temp0);
      }
    else
      {
      op->vtkRenderWindow::SetAAFrames(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetFDFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFDFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFDFrames();
      }
    else
      {
      tempr = op->vtkRenderWindow::GetFDFrames();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetFDFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFDFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFDFrames(temp0);
      }
    else
      {
      op->vtkRenderWindow::SetFDFrames(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetSubFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSubFrames();
      }
    else
      {
      tempr = op->vtkRenderWindow::GetSubFrames();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetSubFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSubFrames(temp0);
      }
    else
      {
      op->vtkRenderWindow::SetSubFrames(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetNeverRendered(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNeverRendered");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNeverRendered();
      }
    else
      {
      tempr = op->vtkRenderWindow::GetNeverRendered();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetAbortRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbortRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAbortRender();
      }
    else
      {
      tempr = op->vtkRenderWindow::GetAbortRender();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetAbortRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbortRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAbortRender(temp0);
      }
    else
      {
      op->vtkRenderWindow::SetAbortRender(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetInAbortCheck(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInAbortCheck");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInAbortCheck();
      }
    else
      {
      tempr = op->vtkRenderWindow::GetInAbortCheck();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetInAbortCheck(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInAbortCheck");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInAbortCheck(temp0);
      }
    else
      {
      op->vtkRenderWindow::SetInAbortCheck(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_CheckAbortStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckAbortStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->CheckAbortStatus();
      }
    else
      {
      tempr = op->vtkRenderWindow::CheckAbortStatus();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetIsPicking(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsPicking");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIsPicking();
      }
    else
      {
      tempr = op->vtkRenderWindow::GetIsPicking();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetIsPicking(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIsPicking");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIsPicking(temp0);
      }
    else
      {
      op->vtkRenderWindow::SetIsPicking(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_IsPickingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPickingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IsPickingOn();
      }
    else
      {
      op->vtkRenderWindow::IsPickingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_IsPickingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPickingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IsPickingOff();
      }
    else
      {
      op->vtkRenderWindow::IsPickingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetEventPending(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEventPending");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetEventPending();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_CheckInRenderStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckInRenderStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->CheckInRenderStatus();
      }
    else
      {
      tempr = op->vtkRenderWindow::CheckInRenderStatus();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_ClearInRenderStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearInRenderStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearInRenderStatus();
      }
    else
      {
      op->vtkRenderWindow::ClearInRenderStatus();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetDesiredUpdateRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDesiredUpdateRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDesiredUpdateRate(temp0);
      }
    else
      {
      op->vtkRenderWindow::SetDesiredUpdateRate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetDesiredUpdateRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDesiredUpdateRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDesiredUpdateRate();
      }
    else
      {
      tempr = op->vtkRenderWindow::GetDesiredUpdateRate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetNumberOfLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfLayers();
      }
    else
      {
      tempr = op->vtkRenderWindow::GetNumberOfLayers();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetNumberOfLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfLayers(temp0);
      }
    else
      {
      op->vtkRenderWindow::SetNumberOfLayers(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetNumberOfLayersMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLayersMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfLayersMinValue();
      }
    else
      {
      tempr = op->vtkRenderWindow::GetNumberOfLayersMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetNumberOfLayersMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLayersMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfLayersMaxValue();
      }
    else
      {
      tempr = op->vtkRenderWindow::GetNumberOfLayersMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  vtkRenderWindowInteractor *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInteractor();
      }
    else
      {
      tempr = op->vtkRenderWindow::GetInteractor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

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
      op->vtkRenderWindow::SetInteractor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetDisplayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  void  *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetDisplayId(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetWindowId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  void  *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetWindowId(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetNextWindowId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNextWindowId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  void  *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetNextWindowId(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetParentId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParentId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  void  *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetParentId(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetGenericDisplayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericDisplayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  void  *tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetGenericDisplayId();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetGenericWindowId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericWindowId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  void  *tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetGenericWindowId();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetGenericParentId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericParentId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  void  *tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetGenericParentId();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetGenericContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  void  *tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetGenericContext();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetGenericDrawable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericDrawable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  void  *tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetGenericDrawable();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetWindowInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetWindowInfo(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetNextWindowInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNextWindowInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetNextWindowInfo(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetParentInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParentInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetParentInfo(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_MakeCurrent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeCurrent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->MakeCurrent();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_IsCurrent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsCurrent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->IsCurrent();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetForceMakeCurrent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceMakeCurrent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetForceMakeCurrent();
      }
    else
      {
      op->vtkRenderWindow::SetForceMakeCurrent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_ReportCapabilities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReportCapabilities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->ReportCapabilities();
      }
    else
      {
      tempr = op->vtkRenderWindow::ReportCapabilities();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SupportsOpenGL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SupportsOpenGL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->SupportsOpenGL();
      }
    else
      {
      tempr = op->vtkRenderWindow::SupportsOpenGL();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_IsDirect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDirect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsDirect();
      }
    else
      {
      tempr = op->vtkRenderWindow::IsDirect();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetDepthBufferSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthBufferSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetDepthBufferSize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetPainterDeviceAdapter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPainterDeviceAdapter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  vtkPainterDeviceAdapter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPainterDeviceAdapter();
      }
    else
      {
      tempr = op->vtkRenderWindow::GetPainterDeviceAdapter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetMultiSamples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMultiSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMultiSamples(temp0);
      }
    else
      {
      op->vtkRenderWindow::SetMultiSamples(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetMultiSamples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMultiSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMultiSamples();
      }
    else
      {
      tempr = op->vtkRenderWindow::GetMultiSamples();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetStencilCapable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStencilCapable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStencilCapable(temp0);
      }
    else
      {
      op->vtkRenderWindow::SetStencilCapable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetStencilCapable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStencilCapable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStencilCapable();
      }
    else
      {
      tempr = op->vtkRenderWindow::GetStencilCapable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_StencilCapableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StencilCapableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StencilCapableOn();
      }
    else
      {
      op->vtkRenderWindow::StencilCapableOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_StencilCapableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StencilCapableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StencilCapableOff();
      }
    else
      {
      op->vtkRenderWindow::StencilCapableOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetReportGraphicErrors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReportGraphicErrors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReportGraphicErrors(temp0);
      }
    else
      {
      op->vtkRenderWindow::SetReportGraphicErrors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetReportGraphicErrors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReportGraphicErrors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetReportGraphicErrors();
      }
    else
      {
      tempr = op->vtkRenderWindow::GetReportGraphicErrors();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_ReportGraphicErrorsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReportGraphicErrorsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReportGraphicErrorsOn();
      }
    else
      {
      op->vtkRenderWindow::ReportGraphicErrorsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_ReportGraphicErrorsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReportGraphicErrorsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReportGraphicErrorsOff();
      }
    else
      {
      op->vtkRenderWindow::ReportGraphicErrorsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_CheckGraphicError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckGraphicError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->CheckGraphicError();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_HasGraphicError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasGraphicError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->HasGraphicError();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetLastGraphicErrorString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastGraphicErrorString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetLastGraphicErrorString();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkRenderWindow_Methods[] = {
  {(char*)"GetClassName", PyvtkRenderWindow_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRenderWindow_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRenderWindow_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkRenderWindow\nC++: vtkRenderWindow *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRenderWindow_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRenderWindow\nC++: vtkRenderWindow *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddRenderer", PyvtkRenderWindow_AddRenderer, 1,
   (char*)"V.AddRenderer(vtkRenderer)\nC++: virtual void AddRenderer(vtkRenderer *)\n\nAdd a renderer to the list of renderers.\n"},
  {(char*)"RemoveRenderer", PyvtkRenderWindow_RemoveRenderer, 1,
   (char*)"V.RemoveRenderer(vtkRenderer)\nC++: void RemoveRenderer(vtkRenderer *)\n\nRemove a renderer from the list of renderers.\n"},
  {(char*)"HasRenderer", PyvtkRenderWindow_HasRenderer, 1,
   (char*)"V.HasRenderer(vtkRenderer) -> int\nC++: int HasRenderer(vtkRenderer *)\n\nQuery if a renderer is in the list of renderers.\n"},
  {(char*)"GetRenderLibrary", PyvtkRenderWindow_GetRenderLibrary, 1,
   (char*)"V.GetRenderLibrary() -> string\nC++: static const char *GetRenderLibrary()\n\nWhat rendering library has the user requested\n"},
  {(char*)"GetRenderers", PyvtkRenderWindow_GetRenderers, 1,
   (char*)"V.GetRenderers() -> vtkRendererCollection\nC++: vtkRendererCollection *GetRenderers()\n\nReturn the collection of renderers in the render window.\n"},
  {(char*)"Render", PyvtkRenderWindow_Render, 1,
   (char*)"V.Render()\nC++: virtual void Render()\n\nAsk each renderer owned by this RenderWindow to render its image\nand synchronize this process.\n"},
  {(char*)"Start", PyvtkRenderWindow_Start, 1,
   (char*)"V.Start()\nC++: virtual void Start()\n\nInitialize the rendering process.\n"},
  {(char*)"Finalize", PyvtkRenderWindow_Finalize, 1,
   (char*)"V.Finalize()\nC++: virtual void Finalize()\n\nFinalize the rendering process.\n"},
  {(char*)"Frame", PyvtkRenderWindow_Frame, 1,
   (char*)"V.Frame()\nC++: virtual void Frame()\n\nA termination method performed at the end of the rendering\nprocess to do things like swapping buffers (if necessary) or\nsimilar actions.\n"},
  {(char*)"WaitForCompletion", PyvtkRenderWindow_WaitForCompletion, 1,
   (char*)"V.WaitForCompletion()\nC++: virtual void WaitForCompletion()\n\nBlock the thread until the actual rendering is finished(). Useful\nfor measurement only.\n"},
  {(char*)"CopyResultFrame", PyvtkRenderWindow_CopyResultFrame, 1,
   (char*)"V.CopyResultFrame()\nC++: virtual void CopyResultFrame()\n\nPerformed at the end of the rendering process to generate image.\nThis is typically done right before swapping buffers.\n"},
  {(char*)"MakeRenderWindowInteractor", PyvtkRenderWindow_MakeRenderWindowInteractor, 1,
   (char*)"V.MakeRenderWindowInteractor() -> vtkRenderWindowInteractor\nC++: virtual vtkRenderWindowInteractor *MakeRenderWindowInteractor(\n    )\n\nCreate an interactor to control renderers in this window. We need\nto know what type of interactor to create, because we might be in\nX Windows or MS Windows.\n"},
  {(char*)"HideCursor", PyvtkRenderWindow_HideCursor, 1,
   (char*)"V.HideCursor()\nC++: virtual void HideCursor()\n\nHide or Show the mouse cursor, it is nice to be able to hide the\ndefault cursor if you want VTK to display a 3D cursor instead.\nSet cursor position in window (note that (0,0) is the lower left\ncorner).\n"},
  {(char*)"ShowCursor", PyvtkRenderWindow_ShowCursor, 1,
   (char*)"V.ShowCursor()\nC++: virtual void ShowCursor()\n\nHide or Show the mouse cursor, it is nice to be able to hide the\ndefault cursor if you want VTK to display a 3D cursor instead.\nSet cursor position in window (note that (0,0) is the lower left\ncorner).\n"},
  {(char*)"SetCursorPosition", PyvtkRenderWindow_SetCursorPosition, 1,
   (char*)"V.SetCursorPosition(int, int)\nC++: virtual void SetCursorPosition(int, int)\n\nHide or Show the mouse cursor, it is nice to be able to hide the\ndefault cursor if you want VTK to display a 3D cursor instead.\nSet cursor position in window (note that (0,0) is the lower left\ncorner).\n"},
  {(char*)"SetCurrentCursor", PyvtkRenderWindow_SetCurrentCursor, 1,
   (char*)"V.SetCurrentCursor(int)\nC++: void SetCurrentCursor(int a)\n\nChange the shape of the cursor.\n"},
  {(char*)"GetCurrentCursor", PyvtkRenderWindow_GetCurrentCursor, 1,
   (char*)"V.GetCurrentCursor() -> int\nC++: int GetCurrentCursor()\n\nChange the shape of the cursor.\n"},
  {(char*)"SetFullScreen", PyvtkRenderWindow_SetFullScreen, 1,
   (char*)"V.SetFullScreen(int)\nC++: virtual void SetFullScreen(int)\n\nTurn on/off rendering full screen window size.\n"},
  {(char*)"GetFullScreen", PyvtkRenderWindow_GetFullScreen, 1,
   (char*)"V.GetFullScreen() -> int\nC++: int GetFullScreen()\n\nTurn on/off rendering full screen window size.\n"},
  {(char*)"FullScreenOn", PyvtkRenderWindow_FullScreenOn, 1,
   (char*)"V.FullScreenOn()\nC++: void FullScreenOn()\n\nTurn on/off rendering full screen window size.\n"},
  {(char*)"FullScreenOff", PyvtkRenderWindow_FullScreenOff, 1,
   (char*)"V.FullScreenOff()\nC++: void FullScreenOff()\n\nTurn on/off rendering full screen window size.\n"},
  {(char*)"SetBorders", PyvtkRenderWindow_SetBorders, 1,
   (char*)"V.SetBorders(int)\nC++: void SetBorders(int a)\n\nTurn on/off window manager borders. Typically, you shouldn't turn\nthe borders off, because that bypasses the window manager and can\ncause undesirable behavior.\n"},
  {(char*)"GetBorders", PyvtkRenderWindow_GetBorders, 1,
   (char*)"V.GetBorders() -> int\nC++: int GetBorders()\n\nTurn on/off window manager borders. Typically, you shouldn't turn\nthe borders off, because that bypasses the window manager and can\ncause undesirable behavior.\n"},
  {(char*)"BordersOn", PyvtkRenderWindow_BordersOn, 1,
   (char*)"V.BordersOn()\nC++: void BordersOn()\n\nTurn on/off window manager borders. Typically, you shouldn't turn\nthe borders off, because that bypasses the window manager and can\ncause undesirable behavior.\n"},
  {(char*)"BordersOff", PyvtkRenderWindow_BordersOff, 1,
   (char*)"V.BordersOff()\nC++: void BordersOff()\n\nTurn on/off window manager borders. Typically, you shouldn't turn\nthe borders off, because that bypasses the window manager and can\ncause undesirable behavior.\n"},
  {(char*)"GetStereoCapableWindow", PyvtkRenderWindow_GetStereoCapableWindow, 1,
   (char*)"V.GetStereoCapableWindow() -> int\nC++: int GetStereoCapableWindow()\n\nPrescribe that the window be created in a stereo-capable mode.\nThis method must be called before the window is realized. Default\nis off.\n"},
  {(char*)"StereoCapableWindowOn", PyvtkRenderWindow_StereoCapableWindowOn, 1,
   (char*)"V.StereoCapableWindowOn()\nC++: void StereoCapableWindowOn()\n\nPrescribe that the window be created in a stereo-capable mode.\nThis method must be called before the window is realized. Default\nis off.\n"},
  {(char*)"StereoCapableWindowOff", PyvtkRenderWindow_StereoCapableWindowOff, 1,
   (char*)"V.StereoCapableWindowOff()\nC++: void StereoCapableWindowOff()\n\nPrescribe that the window be created in a stereo-capable mode.\nThis method must be called before the window is realized. Default\nis off.\n"},
  {(char*)"SetStereoCapableWindow", PyvtkRenderWindow_SetStereoCapableWindow, 1,
   (char*)"V.SetStereoCapableWindow(int)\nC++: virtual void SetStereoCapableWindow(int capable)\n\nPrescribe that the window be created in a stereo-capable mode.\nThis method must be called before the window is realized. Default\nis off.\n"},
  {(char*)"GetStereoRender", PyvtkRenderWindow_GetStereoRender, 1,
   (char*)"V.GetStereoRender() -> int\nC++: int GetStereoRender()\n\nTurn on/off stereo rendering.\n"},
  {(char*)"SetStereoRender", PyvtkRenderWindow_SetStereoRender, 1,
   (char*)"V.SetStereoRender(int)\nC++: void SetStereoRender(int stereo)\n\nTurn on/off stereo rendering.\n"},
  {(char*)"StereoRenderOn", PyvtkRenderWindow_StereoRenderOn, 1,
   (char*)"V.StereoRenderOn()\nC++: void StereoRenderOn()\n\nTurn on/off stereo rendering.\n"},
  {(char*)"StereoRenderOff", PyvtkRenderWindow_StereoRenderOff, 1,
   (char*)"V.StereoRenderOff()\nC++: void StereoRenderOff()\n\nTurn on/off stereo rendering.\n"},
  {(char*)"SetAlphaBitPlanes", PyvtkRenderWindow_SetAlphaBitPlanes, 1,
   (char*)"V.SetAlphaBitPlanes(int)\nC++: void SetAlphaBitPlanes(int a)\n\nTurn on/off the use of alpha bitplanes.\n"},
  {(char*)"GetAlphaBitPlanes", PyvtkRenderWindow_GetAlphaBitPlanes, 1,
   (char*)"V.GetAlphaBitPlanes() -> int\nC++: int GetAlphaBitPlanes()\n\nTurn on/off the use of alpha bitplanes.\n"},
  {(char*)"AlphaBitPlanesOn", PyvtkRenderWindow_AlphaBitPlanesOn, 1,
   (char*)"V.AlphaBitPlanesOn()\nC++: void AlphaBitPlanesOn()\n\nTurn on/off the use of alpha bitplanes.\n"},
  {(char*)"AlphaBitPlanesOff", PyvtkRenderWindow_AlphaBitPlanesOff, 1,
   (char*)"V.AlphaBitPlanesOff()\nC++: void AlphaBitPlanesOff()\n\nTurn on/off the use of alpha bitplanes.\n"},
  {(char*)"SetPointSmoothing", PyvtkRenderWindow_SetPointSmoothing, 1,
   (char*)"V.SetPointSmoothing(int)\nC++: void SetPointSmoothing(int a)\n\nTurn on/off point smoothing. Default is off. This must be applied\nbefore the first Render.\n"},
  {(char*)"GetPointSmoothing", PyvtkRenderWindow_GetPointSmoothing, 1,
   (char*)"V.GetPointSmoothing() -> int\nC++: int GetPointSmoothing()\n\nTurn on/off point smoothing. Default is off. This must be applied\nbefore the first Render.\n"},
  {(char*)"PointSmoothingOn", PyvtkRenderWindow_PointSmoothingOn, 1,
   (char*)"V.PointSmoothingOn()\nC++: void PointSmoothingOn()\n\nTurn on/off point smoothing. Default is off. This must be applied\nbefore the first Render.\n"},
  {(char*)"PointSmoothingOff", PyvtkRenderWindow_PointSmoothingOff, 1,
   (char*)"V.PointSmoothingOff()\nC++: void PointSmoothingOff()\n\nTurn on/off point smoothing. Default is off. This must be applied\nbefore the first Render.\n"},
  {(char*)"SetLineSmoothing", PyvtkRenderWindow_SetLineSmoothing, 1,
   (char*)"V.SetLineSmoothing(int)\nC++: void SetLineSmoothing(int a)\n\nTurn on/off line smoothing. Default is off. This must be applied\nbefore the first Render.\n"},
  {(char*)"GetLineSmoothing", PyvtkRenderWindow_GetLineSmoothing, 1,
   (char*)"V.GetLineSmoothing() -> int\nC++: int GetLineSmoothing()\n\nTurn on/off line smoothing. Default is off. This must be applied\nbefore the first Render.\n"},
  {(char*)"LineSmoothingOn", PyvtkRenderWindow_LineSmoothingOn, 1,
   (char*)"V.LineSmoothingOn()\nC++: void LineSmoothingOn()\n\nTurn on/off line smoothing. Default is off. This must be applied\nbefore the first Render.\n"},
  {(char*)"LineSmoothingOff", PyvtkRenderWindow_LineSmoothingOff, 1,
   (char*)"V.LineSmoothingOff()\nC++: void LineSmoothingOff()\n\nTurn on/off line smoothing. Default is off. This must be applied\nbefore the first Render.\n"},
  {(char*)"SetPolygonSmoothing", PyvtkRenderWindow_SetPolygonSmoothing, 1,
   (char*)"V.SetPolygonSmoothing(int)\nC++: void SetPolygonSmoothing(int a)\n\nTurn on/off polygon smoothing. Default is off. This must be\napplied before the first Render.\n"},
  {(char*)"GetPolygonSmoothing", PyvtkRenderWindow_GetPolygonSmoothing, 1,
   (char*)"V.GetPolygonSmoothing() -> int\nC++: int GetPolygonSmoothing()\n\nTurn on/off polygon smoothing. Default is off. This must be\napplied before the first Render.\n"},
  {(char*)"PolygonSmoothingOn", PyvtkRenderWindow_PolygonSmoothingOn, 1,
   (char*)"V.PolygonSmoothingOn()\nC++: void PolygonSmoothingOn()\n\nTurn on/off polygon smoothing. Default is off. This must be\napplied before the first Render.\n"},
  {(char*)"PolygonSmoothingOff", PyvtkRenderWindow_PolygonSmoothingOff, 1,
   (char*)"V.PolygonSmoothingOff()\nC++: void PolygonSmoothingOff()\n\nTurn on/off polygon smoothing. Default is off. This must be\napplied before the first Render.\n"},
  {(char*)"GetStereoType", PyvtkRenderWindow_GetStereoType, 1,
   (char*)"V.GetStereoType() -> int\nC++: int GetStereoType()\n\nSet/Get what type of stereo rendering to use.  CrystalEyes mode\nuses frame-sequential capabilities available in OpenGL to drive\nLCD shutter glasses and stereo projectors.  RedBlue mode is a\nsimple type of stereo for use with red-blue glasses. Anaglyph\nmode is a superset of RedBlue mode, but the color output channels\ncan be configured using the AnaglyphColorMask and the color of\nthe original image can be (somewhat) maintained using\nAnaglyphColorSaturation;  the default colors for Anaglyph mode is\nred-cyan.  Interlaced stereo mode produces a composite image\nwhere horizontal lines alternate between left and right views. \nStereoLeft and StereoRight modes choose one or the other stereo\nview.  Dresden mode is yet another stereoscopic interleaving.\n"},
  {(char*)"SetStereoType", PyvtkRenderWindow_SetStereoType, 1,
   (char*)"V.SetStereoType(int)\nC++: void SetStereoType(int a)\n\nSet/Get what type of stereo rendering to use.  CrystalEyes mode\nuses frame-sequential capabilities available in OpenGL to drive\nLCD shutter glasses and stereo projectors.  RedBlue mode is a\nsimple type of stereo for use with red-blue glasses. Anaglyph\nmode is a superset of RedBlue mode, but the color output channels\ncan be configured using the AnaglyphColorMask and the color of\nthe original image can be (somewhat) maintained using\nAnaglyphColorSaturation;  the default colors for Anaglyph mode is\nred-cyan.  Interlaced stereo mode produces a composite image\nwhere horizontal lines alternate between left and right views. \nStereoLeft and StereoRight modes choose one or the other stereo\nview.  Dresden mode is yet another stereoscopic interleaving.\n"},
  {(char*)"SetStereoTypeToCrystalEyes", PyvtkRenderWindow_SetStereoTypeToCrystalEyes, 1,
   (char*)"V.SetStereoTypeToCrystalEyes()\nC++: void SetStereoTypeToCrystalEyes()\n\nSet/Get what type of stereo rendering to use.  CrystalEyes mode\nuses frame-sequential capabilities available in OpenGL to drive\nLCD shutter glasses and stereo projectors.  RedBlue mode is a\nsimple type of stereo for use with red-blue glasses. Anaglyph\nmode is a superset of RedBlue mode, but the color output channels\ncan be configured using the AnaglyphColorMask and the color of\nthe original image can be (somewhat) maintained using\nAnaglyphColorSaturation;  the default colors for Anaglyph mode is\nred-cyan.  Interlaced stereo mode produces a composite image\nwhere horizontal lines alternate between left and right views. \nStereoLeft and StereoRight modes choose one or the other stereo\nview.  Dresden mode is yet another stereoscopic interleaving.\n"},
  {(char*)"SetStereoTypeToRedBlue", PyvtkRenderWindow_SetStereoTypeToRedBlue, 1,
   (char*)"V.SetStereoTypeToRedBlue()\nC++: void SetStereoTypeToRedBlue()\n\nSet/Get what type of stereo rendering to use.  CrystalEyes mode\nuses frame-sequential capabilities available in OpenGL to drive\nLCD shutter glasses and stereo projectors.  RedBlue mode is a\nsimple type of stereo for use with red-blue glasses. Anaglyph\nmode is a superset of RedBlue mode, but the color output channels\ncan be configured using the AnaglyphColorMask and the color of\nthe original image can be (somewhat) maintained using\nAnaglyphColorSaturation;  the default colors for Anaglyph mode is\nred-cyan.  Interlaced stereo mode produces a composite image\nwhere horizontal lines alternate between left and right views. \nStereoLeft and StereoRight modes choose one or the other stereo\nview.  Dresden mode is yet another stereoscopic interleaving.\n"},
  {(char*)"SetStereoTypeToInterlaced", PyvtkRenderWindow_SetStereoTypeToInterlaced, 1,
   (char*)"V.SetStereoTypeToInterlaced()\nC++: void SetStereoTypeToInterlaced()\n\nSet/Get what type of stereo rendering to use.  CrystalEyes mode\nuses frame-sequential capabilities available in OpenGL to drive\nLCD shutter glasses and stereo projectors.  RedBlue mode is a\nsimple type of stereo for use with red-blue glasses. Anaglyph\nmode is a superset of RedBlue mode, but the color output channels\ncan be configured using the AnaglyphColorMask and the color of\nthe original image can be (somewhat) maintained using\nAnaglyphColorSaturation;  the default colors for Anaglyph mode is\nred-cyan.  Interlaced stereo mode produces a composite image\nwhere horizontal lines alternate between left and right views. \nStereoLeft and StereoRight modes choose one or the other stereo\nview.  Dresden mode is yet another stereoscopic interleaving.\n"},
  {(char*)"SetStereoTypeToLeft", PyvtkRenderWindow_SetStereoTypeToLeft, 1,
   (char*)"V.SetStereoTypeToLeft()\nC++: void SetStereoTypeToLeft()\n\nSet/Get what type of stereo rendering to use.  CrystalEyes mode\nuses frame-sequential capabilities available in OpenGL to drive\nLCD shutter glasses and stereo projectors.  RedBlue mode is a\nsimple type of stereo for use with red-blue glasses. Anaglyph\nmode is a superset of RedBlue mode, but the color output channels\ncan be configured using the AnaglyphColorMask and the color of\nthe original image can be (somewhat) maintained using\nAnaglyphColorSaturation;  the default colors for Anaglyph mode is\nred-cyan.  Interlaced stereo mode produces a composite image\nwhere horizontal lines alternate between left and right views. \nStereoLeft and StereoRight modes choose one or the other stereo\nview.  Dresden mode is yet another stereoscopic interleaving.\n"},
  {(char*)"SetStereoTypeToRight", PyvtkRenderWindow_SetStereoTypeToRight, 1,
   (char*)"V.SetStereoTypeToRight()\nC++: void SetStereoTypeToRight()\n\nSet/Get what type of stereo rendering to use.  CrystalEyes mode\nuses frame-sequential capabilities available in OpenGL to drive\nLCD shutter glasses and stereo projectors.  RedBlue mode is a\nsimple type of stereo for use with red-blue glasses. Anaglyph\nmode is a superset of RedBlue mode, but the color output channels\ncan be configured using the AnaglyphColorMask and the color of\nthe original image can be (somewhat) maintained using\nAnaglyphColorSaturation;  the default colors for Anaglyph mode is\nred-cyan.  Interlaced stereo mode produces a composite image\nwhere horizontal lines alternate between left and right views. \nStereoLeft and StereoRight modes choose one or the other stereo\nview.  Dresden mode is yet another stereoscopic interleaving.\n"},
  {(char*)"SetStereoTypeToDresden", PyvtkRenderWindow_SetStereoTypeToDresden, 1,
   (char*)"V.SetStereoTypeToDresden()\nC++: void SetStereoTypeToDresden()\n\nSet/Get what type of stereo rendering to use.  CrystalEyes mode\nuses frame-sequential capabilities available in OpenGL to drive\nLCD shutter glasses and stereo projectors.  RedBlue mode is a\nsimple type of stereo for use with red-blue glasses. Anaglyph\nmode is a superset of RedBlue mode, but the color output channels\ncan be configured using the AnaglyphColorMask and the color of\nthe original image can be (somewhat) maintained using\nAnaglyphColorSaturation;  the default colors for Anaglyph mode is\nred-cyan.  Interlaced stereo mode produces a composite image\nwhere horizontal lines alternate between left and right views. \nStereoLeft and StereoRight modes choose one or the other stereo\nview.  Dresden mode is yet another stereoscopic interleaving.\n"},
  {(char*)"SetStereoTypeToAnaglyph", PyvtkRenderWindow_SetStereoTypeToAnaglyph, 1,
   (char*)"V.SetStereoTypeToAnaglyph()\nC++: void SetStereoTypeToAnaglyph()\n\nSet/Get what type of stereo rendering to use.  CrystalEyes mode\nuses frame-sequential capabilities available in OpenGL to drive\nLCD shutter glasses and stereo projectors.  RedBlue mode is a\nsimple type of stereo for use with red-blue glasses. Anaglyph\nmode is a superset of RedBlue mode, but the color output channels\ncan be configured using the AnaglyphColorMask and the color of\nthe original image can be (somewhat) maintained using\nAnaglyphColorSaturation;  the default colors for Anaglyph mode is\nred-cyan.  Interlaced stereo mode produces a composite image\nwhere horizontal lines alternate between left and right views. \nStereoLeft and StereoRight modes choose one or the other stereo\nview.  Dresden mode is yet another stereoscopic interleaving.\n"},
  {(char*)"SetStereoTypeToCheckerboard", PyvtkRenderWindow_SetStereoTypeToCheckerboard, 1,
   (char*)"V.SetStereoTypeToCheckerboard()\nC++: void SetStereoTypeToCheckerboard()\n\nSet/Get what type of stereo rendering to use.  CrystalEyes mode\nuses frame-sequential capabilities available in OpenGL to drive\nLCD shutter glasses and stereo projectors.  RedBlue mode is a\nsimple type of stereo for use with red-blue glasses. Anaglyph\nmode is a superset of RedBlue mode, but the color output channels\ncan be configured using the AnaglyphColorMask and the color of\nthe original image can be (somewhat) maintained using\nAnaglyphColorSaturation;  the default colors for Anaglyph mode is\nred-cyan.  Interlaced stereo mode produces a composite image\nwhere horizontal lines alternate between left and right views. \nStereoLeft and StereoRight modes choose one or the other stereo\nview.  Dresden mode is yet another stereoscopic interleaving.\n"},
  {(char*)"GetStereoTypeAsString", PyvtkRenderWindow_GetStereoTypeAsString, 1,
   (char*)"V.GetStereoTypeAsString() -> string\nC++: const char *GetStereoTypeAsString()\n\n"},
  {(char*)"StereoUpdate", PyvtkRenderWindow_StereoUpdate, 1,
   (char*)"V.StereoUpdate()\nC++: virtual void StereoUpdate()\n\nUpdate the system, if needed, due to stereo rendering. For some\nstereo methods, subclasses might need to switch some hardware\nsettings here.\n"},
  {(char*)"StereoMidpoint", PyvtkRenderWindow_StereoMidpoint, 1,
   (char*)"V.StereoMidpoint()\nC++: virtual void StereoMidpoint()\n\nIntermediate method performs operations required between the\nrendering of the left and right eye.\n"},
  {(char*)"StereoRenderComplete", PyvtkRenderWindow_StereoRenderComplete, 1,
   (char*)"V.StereoRenderComplete()\nC++: virtual void StereoRenderComplete()\n\nHandles work required once both views have been rendered when\nusing stereo rendering.\n"},
  {(char*)"SetAnaglyphColorSaturation", PyvtkRenderWindow_SetAnaglyphColorSaturation, 1,
   (char*)"V.SetAnaglyphColorSaturation(float)\nC++: void SetAnaglyphColorSaturation(float)\n\n"},
  {(char*)"GetAnaglyphColorSaturationMinValue", PyvtkRenderWindow_GetAnaglyphColorSaturationMinValue, 1,
   (char*)"V.GetAnaglyphColorSaturationMinValue() -> float\nC++: float GetAnaglyphColorSaturationMinValue()\n\n"},
  {(char*)"GetAnaglyphColorSaturationMaxValue", PyvtkRenderWindow_GetAnaglyphColorSaturationMaxValue, 1,
   (char*)"V.GetAnaglyphColorSaturationMaxValue() -> float\nC++: float GetAnaglyphColorSaturationMaxValue()\n\n"},
  {(char*)"GetAnaglyphColorSaturation", PyvtkRenderWindow_GetAnaglyphColorSaturation, 1,
   (char*)"V.GetAnaglyphColorSaturation() -> float\nC++: float GetAnaglyphColorSaturation()\n\n"},
  {(char*)"SetAnaglyphColorMask", PyvtkRenderWindow_SetAnaglyphColorMask, 1,
   (char*)"V.SetAnaglyphColorMask(int, int)\nC++: void SetAnaglyphColorMask(int, int)\nV.SetAnaglyphColorMask((int, int))\nC++: void SetAnaglyphColorMask(int a[2])\n\n"},
  {(char*)"GetAnaglyphColorMask", PyvtkRenderWindow_GetAnaglyphColorMask, 1,
   (char*)"V.GetAnaglyphColorMask() -> (int, int)\nC++: int *GetAnaglyphColorMask()\n\n"},
  {(char*)"WindowRemap", PyvtkRenderWindow_WindowRemap, 1,
   (char*)"V.WindowRemap()\nC++: virtual void WindowRemap()\n\nRemap the rendering window. This probably only works on UNIX\nright now. It is useful for changing properties that can't\nnormally be changed once the window is up.\n"},
  {(char*)"SetSwapBuffers", PyvtkRenderWindow_SetSwapBuffers, 1,
   (char*)"V.SetSwapBuffers(int)\nC++: void SetSwapBuffers(int a)\n\nTurn on/off buffer swapping between images.\n"},
  {(char*)"GetSwapBuffers", PyvtkRenderWindow_GetSwapBuffers, 1,
   (char*)"V.GetSwapBuffers() -> int\nC++: int GetSwapBuffers()\n\nTurn on/off buffer swapping between images.\n"},
  {(char*)"SwapBuffersOn", PyvtkRenderWindow_SwapBuffersOn, 1,
   (char*)"V.SwapBuffersOn()\nC++: void SwapBuffersOn()\n\nTurn on/off buffer swapping between images.\n"},
  {(char*)"SwapBuffersOff", PyvtkRenderWindow_SwapBuffersOff, 1,
   (char*)"V.SwapBuffersOff()\nC++: void SwapBuffersOff()\n\nTurn on/off buffer swapping between images.\n"},
  {(char*)"SetPixelData", PyvtkRenderWindow_SetPixelData, 1,
   (char*)"V.SetPixelData(int, int, int, int, vtkUnsignedCharArray, int)\n    -> int\nC++: virtual int SetPixelData(int x, int y, int x2, int y2,\n    vtkUnsignedCharArray *data, int front)\n\nSet/Get the pixel data of an image, transmitted as RGBRGBRGB. The\nfront argument indicates if the front buffer should be used or\nthe back buffer. It is the caller's responsibility to delete the\nresulting array. It is very important to realize that the memory\nin this array is organized from the bottom of the window to the\ntop. The origin of the screen is in the lower left corner. The y\naxis increases as you go up the screen. So the storage of pixels\nis from left to right and from bottom to top. (x,y) is any corner\nof the rectangle. (x2,y2) is its opposite corner on the diagonal.\n"},
  {(char*)"GetRGBAPixelData", PyvtkRenderWindow_GetRGBAPixelData, 1,
   (char*)"V.GetRGBAPixelData(int, int, int, int, int, vtkFloatArray) -> int\nC++: virtual int GetRGBAPixelData(int x, int y, int x2, int y2,\n    int front, vtkFloatArray *data)\n\nSame as Get/SetPixelData except that the image also contains an\nalpha component. The image is transmitted as RGBARGBARGBA... each\nof which is a float value. The \"blend\" parameter controls whether\nthe SetRGBAPixelData method blends the data with the previous\ncontents of the frame buffer or completely replaces the frame\nbuffer data.\n"},
  {(char*)"SetRGBAPixelData", PyvtkRenderWindow_SetRGBAPixelData, 1,
   (char*)"V.SetRGBAPixelData(int, int, int, int, vtkFloatArray, int, int)\n    -> int\nC++: virtual int SetRGBAPixelData(int, int, int, int,\n    vtkFloatArray *, int, int blend=0)\n\nSame as Get/SetPixelData except that the image also contains an\nalpha component. The image is transmitted as RGBARGBARGBA... each\nof which is a float value. The \"blend\" parameter controls whether\nthe SetRGBAPixelData method blends the data with the previous\ncontents of the frame buffer or completely replaces the frame\nbuffer data.\n"},
  {(char*)"GetRGBACharPixelData", PyvtkRenderWindow_GetRGBACharPixelData, 1,
   (char*)"V.GetRGBACharPixelData(int, int, int, int, int,\n    vtkUnsignedCharArray) -> int\nC++: virtual int GetRGBACharPixelData(int x, int y, int x2,\n    int y2, int front, vtkUnsignedCharArray *data)\n\nSame as Get/SetPixelData except that the image also contains an\nalpha component. The image is transmitted as RGBARGBARGBA... each\nof which is a float value. The \"blend\" parameter controls whether\nthe SetRGBAPixelData method blends the data with the previous\ncontents of the frame buffer or completely replaces the frame\nbuffer data.\n"},
  {(char*)"SetRGBACharPixelData", PyvtkRenderWindow_SetRGBACharPixelData, 1,
   (char*)"V.SetRGBACharPixelData(int, int, int, int, vtkUnsignedCharArray,\n    int, int) -> int\nC++: virtual int SetRGBACharPixelData(int x, int y, int x2,\n    int y2, vtkUnsignedCharArray *data, int front, int blend=0)\n\nSame as Get/SetPixelData except that the image also contains an\nalpha component. The image is transmitted as RGBARGBARGBA... each\nof which is a float value. The \"blend\" parameter controls whether\nthe SetRGBAPixelData method blends the data with the previous\ncontents of the frame buffer or completely replaces the frame\nbuffer data.\n"},
  {(char*)"GetZbufferData", PyvtkRenderWindow_GetZbufferData, 1,
   (char*)"V.GetZbufferData(int, int, int, int, vtkFloatArray) -> int\nC++: virtual int GetZbufferData(int x, int y, int x2, int y2,\n    vtkFloatArray *z)\n\nSet/Get the zbuffer data from the frame buffer. (x,y) is any\ncorner of the rectangle. (x2,y2) is its opposite corner on the\ndiagonal.\n"},
  {(char*)"SetZbufferData", PyvtkRenderWindow_SetZbufferData, 1,
   (char*)"V.SetZbufferData(int, int, int, int, vtkFloatArray) -> int\nC++: virtual int SetZbufferData(int x, int y, int x2, int y2,\n    vtkFloatArray *z)\n\nSet/Get the zbuffer data from the frame buffer. (x,y) is any\ncorner of the rectangle. (x2,y2) is its opposite corner on the\ndiagonal.\n"},
  {(char*)"GetZbufferDataAtPoint", PyvtkRenderWindow_GetZbufferDataAtPoint, 1,
   (char*)"V.GetZbufferDataAtPoint(int, int) -> float\nC++: float GetZbufferDataAtPoint(int x, int y)\n\nSet/Get the zbuffer data from the frame buffer. (x,y) is any\ncorner of the rectangle. (x2,y2) is its opposite corner on the\ndiagonal.\n"},
  {(char*)"GetAAFrames", PyvtkRenderWindow_GetAAFrames, 1,
   (char*)"V.GetAAFrames() -> int\nC++: int GetAAFrames()\n\nSet the number of frames for doing antialiasing. The default is\nzero. Typically five or six will yield reasonable results without\ntaking too long.\n"},
  {(char*)"SetAAFrames", PyvtkRenderWindow_SetAAFrames, 1,
   (char*)"V.SetAAFrames(int)\nC++: void SetAAFrames(int a)\n\nSet the number of frames for doing antialiasing. The default is\nzero. Typically five or six will yield reasonable results without\ntaking too long.\n"},
  {(char*)"GetFDFrames", PyvtkRenderWindow_GetFDFrames, 1,
   (char*)"V.GetFDFrames() -> int\nC++: int GetFDFrames()\n\nSet the number of frames for doing focal depth. The default is\nzero. Depending on how your scene is organized you can get away\nwith as few as four frames for focal depth or you might need\nthirty. One thing to note is that if you are using focal depth\nframes, then you will not need many (if any) frames for\nantialiasing.\n"},
  {(char*)"SetFDFrames", PyvtkRenderWindow_SetFDFrames, 1,
   (char*)"V.SetFDFrames(int)\nC++: void SetFDFrames(int a)\n\nSet the number of frames for doing focal depth. The default is\nzero. Depending on how your scene is organized you can get away\nwith as few as four frames for focal depth or you might need\nthirty. One thing to note is that if you are using focal depth\nframes, then you will not need many (if any) frames for\nantialiasing.\n"},
  {(char*)"GetSubFrames", PyvtkRenderWindow_GetSubFrames, 1,
   (char*)"V.GetSubFrames() -> int\nC++: int GetSubFrames()\n\nSet the number of sub frames for doing motion blur. The default\nis zero. Once this is set greater than one, you will no longer\nsee a new frame for every Render().  If you set this to five, you\nwill need to do five Render() invocations before seeing the\nresult. This isn't very impressive unless something is changing\nbetween the Renders. Changing this value may reset the current\nsubframe count.\n"},
  {(char*)"SetSubFrames", PyvtkRenderWindow_SetSubFrames, 1,
   (char*)"V.SetSubFrames(int)\nC++: virtual void SetSubFrames(int subFrames)\n\nSet the number of sub frames for doing motion blur. The default\nis zero. Once this is set greater than one, you will no longer\nsee a new frame for every Render().  If you set this to five, you\nwill need to do five Render() invocations before seeing the\nresult. This isn't very impressive unless something is changing\nbetween the Renders. Changing this value may reset the current\nsubframe count.\n"},
  {(char*)"GetNeverRendered", PyvtkRenderWindow_GetNeverRendered, 1,
   (char*)"V.GetNeverRendered() -> int\nC++: int GetNeverRendered()\n\nThis flag is set if the window hasn't rendered since it was\ncreated\n"},
  {(char*)"GetAbortRender", PyvtkRenderWindow_GetAbortRender, 1,
   (char*)"V.GetAbortRender() -> int\nC++: int GetAbortRender()\n\nThis is a flag that can be set to interrupt a rendering that is\nin progress.\n"},
  {(char*)"SetAbortRender", PyvtkRenderWindow_SetAbortRender, 1,
   (char*)"V.SetAbortRender(int)\nC++: void SetAbortRender(int a)\n\nThis is a flag that can be set to interrupt a rendering that is\nin progress.\n"},
  {(char*)"GetInAbortCheck", PyvtkRenderWindow_GetInAbortCheck, 1,
   (char*)"V.GetInAbortCheck() -> int\nC++: int GetInAbortCheck()\n\nThis is a flag that can be set to interrupt a rendering that is\nin progress.\n"},
  {(char*)"SetInAbortCheck", PyvtkRenderWindow_SetInAbortCheck, 1,
   (char*)"V.SetInAbortCheck(int)\nC++: void SetInAbortCheck(int a)\n\nThis is a flag that can be set to interrupt a rendering that is\nin progress.\n"},
  {(char*)"CheckAbortStatus", PyvtkRenderWindow_CheckAbortStatus, 1,
   (char*)"V.CheckAbortStatus() -> int\nC++: virtual int CheckAbortStatus()\n\nThis is a flag that can be set to interrupt a rendering that is\nin progress.\n"},
  {(char*)"GetIsPicking", PyvtkRenderWindow_GetIsPicking, 1,
   (char*)"V.GetIsPicking() -> int\nC++: int GetIsPicking()\n\n"},
  {(char*)"SetIsPicking", PyvtkRenderWindow_SetIsPicking, 1,
   (char*)"V.SetIsPicking(int)\nC++: void SetIsPicking(int a)\n\n"},
  {(char*)"IsPickingOn", PyvtkRenderWindow_IsPickingOn, 1,
   (char*)"V.IsPickingOn()\nC++: void IsPickingOn()\n\n"},
  {(char*)"IsPickingOff", PyvtkRenderWindow_IsPickingOff, 1,
   (char*)"V.IsPickingOff()\nC++: void IsPickingOff()\n\n"},
  {(char*)"GetEventPending", PyvtkRenderWindow_GetEventPending, 1,
   (char*)"V.GetEventPending() -> int\nC++: virtual int GetEventPending()\n\nCheck to see if a mouse button has been pressed.  All other\nevents are ignored by this method.  Ideally, you want to abort\nthe render on any event which causes the DesiredUpdateRate to\nswitch from a high-quality rate to a more interactive rate.\n"},
  {(char*)"CheckInRenderStatus", PyvtkRenderWindow_CheckInRenderStatus, 1,
   (char*)"V.CheckInRenderStatus() -> int\nC++: virtual int CheckInRenderStatus()\n\nAre we rendering at the moment\n"},
  {(char*)"ClearInRenderStatus", PyvtkRenderWindow_ClearInRenderStatus, 1,
   (char*)"V.ClearInRenderStatus()\nC++: virtual void ClearInRenderStatus()\n\nClear status (after an exception was thrown for example)\n"},
  {(char*)"SetDesiredUpdateRate", PyvtkRenderWindow_SetDesiredUpdateRate, 1,
   (char*)"V.SetDesiredUpdateRate(float)\nC++: virtual void SetDesiredUpdateRate(double)\n\nSet/Get the desired update rate. This is used with the\nvtkLODActor class. When using level of detail actors you need to\nspecify what update rate you require. The LODActors then will\npick the correct resolution to meet your desired update rate in\nframes per second. A value of zero indicates that they can use\nall the time they want to.\n"},
  {(char*)"GetDesiredUpdateRate", PyvtkRenderWindow_GetDesiredUpdateRate, 1,
   (char*)"V.GetDesiredUpdateRate() -> float\nC++: double GetDesiredUpdateRate()\n\nSet/Get the desired update rate. This is used with the\nvtkLODActor class. When using level of detail actors you need to\nspecify what update rate you require. The LODActors then will\npick the correct resolution to meet your desired update rate in\nframes per second. A value of zero indicates that they can use\nall the time they want to.\n"},
  {(char*)"GetNumberOfLayers", PyvtkRenderWindow_GetNumberOfLayers, 1,
   (char*)"V.GetNumberOfLayers() -> int\nC++: int GetNumberOfLayers()\n\nGet the number of layers for renderers.  Each renderer should\nhave its layer set individually.  Some algorithms iterate through\nall layers, so it is not wise to set the number of layers to be\nexorbitantly large (say bigger than 100).\n"},
  {(char*)"SetNumberOfLayers", PyvtkRenderWindow_SetNumberOfLayers, 1,
   (char*)"V.SetNumberOfLayers(int)\nC++: void SetNumberOfLayers(int)\n\nGet the number of layers for renderers.  Each renderer should\nhave its layer set individually.  Some algorithms iterate through\nall layers, so it is not wise to set the number of layers to be\nexorbitantly large (say bigger than 100).\n"},
  {(char*)"GetNumberOfLayersMinValue", PyvtkRenderWindow_GetNumberOfLayersMinValue, 1,
   (char*)"V.GetNumberOfLayersMinValue() -> int\nC++: int GetNumberOfLayersMinValue()\n\nGet the number of layers for renderers.  Each renderer should\nhave its layer set individually.  Some algorithms iterate through\nall layers, so it is not wise to set the number of layers to be\nexorbitantly large (say bigger than 100).\n"},
  {(char*)"GetNumberOfLayersMaxValue", PyvtkRenderWindow_GetNumberOfLayersMaxValue, 1,
   (char*)"V.GetNumberOfLayersMaxValue() -> int\nC++: int GetNumberOfLayersMaxValue()\n\nGet the number of layers for renderers.  Each renderer should\nhave its layer set individually.  Some algorithms iterate through\nall layers, so it is not wise to set the number of layers to be\nexorbitantly large (say bigger than 100).\n"},
  {(char*)"GetInteractor", PyvtkRenderWindow_GetInteractor, 1,
   (char*)"V.GetInteractor() -> vtkRenderWindowInteractor\nC++: vtkRenderWindowInteractor *GetInteractor()\n\nGet the interactor associated with this render window\n"},
  {(char*)"SetInteractor", PyvtkRenderWindow_SetInteractor, 1,
   (char*)"V.SetInteractor(vtkRenderWindowInteractor)\nC++: void SetInteractor(vtkRenderWindowInteractor *)\n\nSet the interactor to the render window\n"},
  {(char*)"SetDisplayId", PyvtkRenderWindow_SetDisplayId, 1,
   (char*)"V.SetDisplayId()\nC++: virtual void SetDisplayId(void *)\n\nDummy stubs for vtkWindow API.\n"},
  {(char*)"SetWindowId", PyvtkRenderWindow_SetWindowId, 1,
   (char*)"V.SetWindowId()\nC++: virtual void SetWindowId(void *)\n\nDummy stubs for vtkWindow API.\n"},
  {(char*)"SetNextWindowId", PyvtkRenderWindow_SetNextWindowId, 1,
   (char*)"V.SetNextWindowId()\nC++: virtual void SetNextWindowId(void *)\n\nDummy stubs for vtkWindow API.\n"},
  {(char*)"SetParentId", PyvtkRenderWindow_SetParentId, 1,
   (char*)"V.SetParentId()\nC++: virtual void SetParentId(void *)\n\nDummy stubs for vtkWindow API.\n"},
  {(char*)"GetGenericDisplayId", PyvtkRenderWindow_GetGenericDisplayId, 1,
   (char*)"V.GetGenericDisplayId() ->\nC++: virtual void *GetGenericDisplayId()\n\nDummy stubs for vtkWindow API.\n"},
  {(char*)"GetGenericWindowId", PyvtkRenderWindow_GetGenericWindowId, 1,
   (char*)"V.GetGenericWindowId() ->\nC++: virtual void *GetGenericWindowId()\n\nDummy stubs for vtkWindow API.\n"},
  {(char*)"GetGenericParentId", PyvtkRenderWindow_GetGenericParentId, 1,
   (char*)"V.GetGenericParentId() ->\nC++: virtual void *GetGenericParentId()\n\nDummy stubs for vtkWindow API.\n"},
  {(char*)"GetGenericContext", PyvtkRenderWindow_GetGenericContext, 1,
   (char*)"V.GetGenericContext() ->\nC++: virtual void *GetGenericContext()\n\nDummy stubs for vtkWindow API.\n"},
  {(char*)"GetGenericDrawable", PyvtkRenderWindow_GetGenericDrawable, 1,
   (char*)"V.GetGenericDrawable() ->\nC++: virtual void *GetGenericDrawable()\n\nDummy stubs for vtkWindow API.\n"},
  {(char*)"SetWindowInfo", PyvtkRenderWindow_SetWindowInfo, 1,
   (char*)"V.SetWindowInfo(string)\nC++: virtual void SetWindowInfo(char *)\n\nDummy stubs for vtkWindow API.\n"},
  {(char*)"SetNextWindowInfo", PyvtkRenderWindow_SetNextWindowInfo, 1,
   (char*)"V.SetNextWindowInfo(string)\nC++: virtual void SetNextWindowInfo(char *)\n\nDummy stubs for vtkWindow API.\n"},
  {(char*)"SetParentInfo", PyvtkRenderWindow_SetParentInfo, 1,
   (char*)"V.SetParentInfo(string)\nC++: virtual void SetParentInfo(char *)\n\nDummy stubs for vtkWindow API.\n"},
  {(char*)"MakeCurrent", PyvtkRenderWindow_MakeCurrent, 1,
   (char*)"V.MakeCurrent()\nC++: virtual void MakeCurrent()\n\nAttempt to make this window the current graphics context for the\ncalling thread.\n"},
  {(char*)"IsCurrent", PyvtkRenderWindow_IsCurrent, 1,
   (char*)"V.IsCurrent() -> bool\nC++: virtual bool IsCurrent()\n\nTells if this window is the current graphics context for the\ncalling thread.\n"},
  {(char*)"SetForceMakeCurrent", PyvtkRenderWindow_SetForceMakeCurrent, 1,
   (char*)"V.SetForceMakeCurrent()\nC++: virtual void SetForceMakeCurrent()\n\nIf called, allow MakeCurrent() to skip cache-check when called.\nMakeCurrent() reverts to original behavior of cache-checking on\nthe next render.\n"},
  {(char*)"ReportCapabilities", PyvtkRenderWindow_ReportCapabilities, 1,
   (char*)"V.ReportCapabilities() -> string\nC++: virtual const char *ReportCapabilities()\n\nGet report of capabilities for the render window\n"},
  {(char*)"SupportsOpenGL", PyvtkRenderWindow_SupportsOpenGL, 1,
   (char*)"V.SupportsOpenGL() -> int\nC++: virtual int SupportsOpenGL()\n\nDoes this render window support OpenGL? 0-false, 1-true\n"},
  {(char*)"IsDirect", PyvtkRenderWindow_IsDirect, 1,
   (char*)"V.IsDirect() -> int\nC++: virtual int IsDirect()\n\nIs this render window using hardware acceleration? 0-false,\n1-true\n"},
  {(char*)"GetDepthBufferSize", PyvtkRenderWindow_GetDepthBufferSize, 1,
   (char*)"V.GetDepthBufferSize() -> int\nC++: virtual int GetDepthBufferSize()\n\nThis method should be defined by the subclass. How many bits of\nprecision are there in the zbuffer?\n"},
  {(char*)"GetPainterDeviceAdapter", PyvtkRenderWindow_GetPainterDeviceAdapter, 1,
   (char*)"V.GetPainterDeviceAdapter() -> vtkPainterDeviceAdapter\nC++: vtkPainterDeviceAdapter *GetPainterDeviceAdapter()\n\nGet the vtkPainterDeviceAdapter which can be used to paint on\nthis render window.\n"},
  {(char*)"SetMultiSamples", PyvtkRenderWindow_SetMultiSamples, 1,
   (char*)"V.SetMultiSamples(int)\nC++: void SetMultiSamples(int a)\n\nSet / Get the number of multisamples to use for hardware\nantialiasing.\n"},
  {(char*)"GetMultiSamples", PyvtkRenderWindow_GetMultiSamples, 1,
   (char*)"V.GetMultiSamples() -> int\nC++: int GetMultiSamples()\n\nSet / Get the number of multisamples to use for hardware\nantialiasing.\n"},
  {(char*)"SetStencilCapable", PyvtkRenderWindow_SetStencilCapable, 1,
   (char*)"V.SetStencilCapable(int)\nC++: void SetStencilCapable(int a)\n\nSet / Get the availability of the stencil buffer.\n"},
  {(char*)"GetStencilCapable", PyvtkRenderWindow_GetStencilCapable, 1,
   (char*)"V.GetStencilCapable() -> int\nC++: int GetStencilCapable()\n\nSet / Get the availability of the stencil buffer.\n"},
  {(char*)"StencilCapableOn", PyvtkRenderWindow_StencilCapableOn, 1,
   (char*)"V.StencilCapableOn()\nC++: void StencilCapableOn()\n\nSet / Get the availability of the stencil buffer.\n"},
  {(char*)"StencilCapableOff", PyvtkRenderWindow_StencilCapableOff, 1,
   (char*)"V.StencilCapableOff()\nC++: void StencilCapableOff()\n\nSet / Get the availability of the stencil buffer.\n"},
  {(char*)"SetReportGraphicErrors", PyvtkRenderWindow_SetReportGraphicErrors, 1,
   (char*)"V.SetReportGraphicErrors(int)\nC++: void SetReportGraphicErrors(int a)\n\nTurn on/off report of graphic errors. Initial value is false\n(off). This flag is used by vtkGraphicErrorMacro.\n"},
  {(char*)"GetReportGraphicErrors", PyvtkRenderWindow_GetReportGraphicErrors, 1,
   (char*)"V.GetReportGraphicErrors() -> int\nC++: int GetReportGraphicErrors()\n\nTurn on/off report of graphic errors. Initial value is false\n(off). This flag is used by vtkGraphicErrorMacro.\n"},
  {(char*)"ReportGraphicErrorsOn", PyvtkRenderWindow_ReportGraphicErrorsOn, 1,
   (char*)"V.ReportGraphicErrorsOn()\nC++: void ReportGraphicErrorsOn()\n\nTurn on/off report of graphic errors. Initial value is false\n(off). This flag is used by vtkGraphicErrorMacro.\n"},
  {(char*)"ReportGraphicErrorsOff", PyvtkRenderWindow_ReportGraphicErrorsOff, 1,
   (char*)"V.ReportGraphicErrorsOff()\nC++: void ReportGraphicErrorsOff()\n\nTurn on/off report of graphic errors. Initial value is false\n(off). This flag is used by vtkGraphicErrorMacro.\n"},
  {(char*)"CheckGraphicError", PyvtkRenderWindow_CheckGraphicError, 1,
   (char*)"V.CheckGraphicError()\nC++: virtual void CheckGraphicError()\n\nUpdate graphic error status, regardless of ReportGraphicErrors\nflag. It means this method can be used in any context and is not\nrestricted to debug mode.\n"},
  {(char*)"HasGraphicError", PyvtkRenderWindow_HasGraphicError, 1,
   (char*)"V.HasGraphicError() -> int\nC++: virtual int HasGraphicError()\n\nReturn the last graphic error status. Initial value is false.\n"},
  {(char*)"GetLastGraphicErrorString", PyvtkRenderWindow_GetLastGraphicErrorString, 1,
   (char*)"V.GetLastGraphicErrorString() -> string\nC++: virtual const char *GetLastGraphicErrorString()\n\nReturn a string matching the last graphic error status.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRenderWindow_StaticNew()
{
  return vtkRenderWindow::New();
}

PyObject *PyVTKClass_vtkRenderWindowNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRenderWindow_StaticNew,
    PyvtkRenderWindow_Methods,
    "vtkRenderWindow", modulename,
    NULL, NULL,
    PyvtkRenderWindow_Doc(),
    PyVTKClass_vtkWindowNew(modulename));
  return cls;
}

const char **PyvtkRenderWindow_Doc()
{
  static const char *docstring[] = {
    "vtkRenderWindow - create a window for renderers to draw into\n\n",
    "Superclass: vtkWindow\n\n",
    "vtkRenderWindow is an abstract object to specify the behavior of a\nrendering window. A rendering window is a window in a graphical user\ninterface where renderers draw their images. Methods are provided to\nsynchronize the rendering process, set window size, and control\ndouble buffering.  The window also allows rendering in stereo.  The\ninterlaced render stereo type is for output to a VRex stereo\npr",
    "ojector.  All of the odd horizontal lines are from the left eye,\nand the even lines are from the right eye.  The user has to make the\nrender window aligned with the VRex projector, or the eye will be\nswapped.\n\nCaveats:\n\nIn VTK versions 4 and later, the vtkWindowToImageFilter class is part\nof the canonical way to output an image of a window to a file\n(replacing the obsolete SaveImageAsPPM method fo",
    "r vtkRenderWindows\nthat existed in 3.2 and earlier).  Connect one of these filters to\nthe output of the window, and filter's output to a writer such as\nvtkPNGWriter.\n\nSee Also:\n\nvtkRenderer vtkRenderWindowInteractor vtkWindowToImageFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRenderWindow(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRenderWindowNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRenderWindow", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_STEREO_CRYSTAL_EYES", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_STEREO_RED_BLUE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(3);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_STEREO_INTERLACED", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(4);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_STEREO_LEFT", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(5);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_STEREO_RIGHT", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(6);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_STEREO_DRESDEN", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(7);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_STEREO_ANAGLYPH", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(8);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_STEREO_CHECKERBOARD", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_CURSOR_DEFAULT", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_CURSOR_ARROW", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_CURSOR_SIZENE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(3);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_CURSOR_SIZENW", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(4);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_CURSOR_SIZESW", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(5);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_CURSOR_SIZESE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(6);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_CURSOR_SIZENS", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(7);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_CURSOR_SIZEWE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(8);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_CURSOR_SIZEALL", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(9);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_CURSOR_HAND", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(10);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_CURSOR_CROSSHAIR", o) != 0)
    {
    Py_DECREF(o);
    }

}

