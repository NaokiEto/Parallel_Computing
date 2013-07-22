// python wrapper for vtkGenericOpenGLRenderWindow
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
#include "vtkGenericOpenGLRenderWindow.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGenericOpenGLRenderWindow(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGenericOpenGLRenderWindow(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGenericOpenGLRenderWindowNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGenericOpenGLRenderWindowNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkOpenGLRenderWindowNew
extern "C" { PyObject *PyVTKClass_vtkOpenGLRenderWindowNew(const char *); }
#define DECLARED_PyVTKClass_vtkOpenGLRenderWindowNew
#endif

static const char **PyvtkGenericOpenGLRenderWindow_Doc();


static PyObject *
PyvtkGenericOpenGLRenderWindow_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

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
      tempr = op->vtkGenericOpenGLRenderWindow::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

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
      tempr = op->vtkGenericOpenGLRenderWindow::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  vtkGenericOpenGLRenderWindow *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGenericOpenGLRenderWindow::NewInstance();
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
PyvtkGenericOpenGLRenderWindow_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGenericOpenGLRenderWindow *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGenericOpenGLRenderWindow::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_Finalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Finalize();
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::Finalize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_Frame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Frame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Frame();
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::Frame();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_MakeCurrent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeCurrent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MakeCurrent();
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::MakeCurrent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_IsCurrent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsCurrent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsCurrent();
      }
    else
      {
      tempr = op->vtkGenericOpenGLRenderWindow::IsCurrent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SupportsOpenGL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SupportsOpenGL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

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
      tempr = op->vtkGenericOpenGLRenderWindow::SupportsOpenGL();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_IsDirect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDirect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

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
      tempr = op->vtkGenericOpenGLRenderWindow::IsDirect();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetFrontBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrontBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFrontBuffer(temp0);
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::SetFrontBuffer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetFrontLeftBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrontLeftBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFrontLeftBuffer(temp0);
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::SetFrontLeftBuffer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetFrontRightBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrontRightBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFrontRightBuffer(temp0);
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::SetFrontRightBuffer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetBackBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBackBuffer(temp0);
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::SetBackBuffer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetBackLeftBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackLeftBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBackLeftBuffer(temp0);
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::SetBackLeftBuffer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetBackRightBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackRightBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBackRightBuffer(temp0);
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::SetBackRightBuffer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_PushState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PushState();
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::PushState();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_PopState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PopState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PopState();
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::PopState();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetWindowId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  void  *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWindowId(temp0);
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::SetWindowId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_GetGenericWindowId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericWindowId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  void  *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenericWindowId();
      }
    else
      {
      tempr = op->vtkGenericOpenGLRenderWindow::GetGenericWindowId();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetDisplayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  void  *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDisplayId(temp0);
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::SetDisplayId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetParentId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParentId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  void  *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetParentId(temp0);
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::SetParentId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_GetGenericDisplayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericDisplayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  void  *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenericDisplayId();
      }
    else
      {
      tempr = op->vtkGenericOpenGLRenderWindow::GetGenericDisplayId();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_GetGenericParentId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericParentId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  void  *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenericParentId();
      }
    else
      {
      tempr = op->vtkGenericOpenGLRenderWindow::GetGenericParentId();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_GetGenericContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  void  *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenericContext();
      }
    else
      {
      tempr = op->vtkGenericOpenGLRenderWindow::GetGenericContext();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_GetGenericDrawable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericDrawable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  void  *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenericDrawable();
      }
    else
      {
      tempr = op->vtkGenericOpenGLRenderWindow::GetGenericDrawable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetWindowInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWindowInfo(temp0);
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::SetWindowInfo(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetParentInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParentInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetParentInfo(temp0);
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::SetParentInfo(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_Start(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Start");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Start();
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::Start();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_HideCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HideCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HideCursor();
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::HideCursor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_ShowCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShowCursor();
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::ShowCursor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetFullScreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFullScreen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFullScreen(temp0);
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::SetFullScreen(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_WindowRemap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WindowRemap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WindowRemap();
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::WindowRemap();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_GetEventPending(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEventPending");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEventPending();
      }
    else
      {
      tempr = op->vtkGenericOpenGLRenderWindow::GetEventPending();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetNextWindowId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNextWindowId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  void  *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNextWindowId(temp0);
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::SetNextWindowId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetNextWindowInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNextWindowInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNextWindowInfo(temp0);
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::SetNextWindowInfo(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_CreateAWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateAWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateAWindow();
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::CreateAWindow();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_DestroyWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DestroyWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DestroyWindow();
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::DestroyWindow();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGenericOpenGLRenderWindow_Methods[] = {
  {(char*)"GetClassName", PyvtkGenericOpenGLRenderWindow_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGenericOpenGLRenderWindow_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGenericOpenGLRenderWindow_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGenericOpenGLRenderWindow\nC++: vtkGenericOpenGLRenderWindow *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGenericOpenGLRenderWindow_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGenericOpenGLRenderWindow\nC++: vtkGenericOpenGLRenderWindow *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Finalize", PyvtkGenericOpenGLRenderWindow_Finalize, 1,
   (char*)"V.Finalize()\nC++: void Finalize()\n\n"},
  {(char*)"Frame", PyvtkGenericOpenGLRenderWindow_Frame, 1,
   (char*)"V.Frame()\nC++: void Frame()\n\n"},
  {(char*)"MakeCurrent", PyvtkGenericOpenGLRenderWindow_MakeCurrent, 1,
   (char*)"V.MakeCurrent()\nC++: void MakeCurrent()\n\n"},
  {(char*)"IsCurrent", PyvtkGenericOpenGLRenderWindow_IsCurrent, 1,
   (char*)"V.IsCurrent() -> bool\nC++: bool IsCurrent()\n\n"},
  {(char*)"SupportsOpenGL", PyvtkGenericOpenGLRenderWindow_SupportsOpenGL, 1,
   (char*)"V.SupportsOpenGL() -> int\nC++: int SupportsOpenGL()\n\n"},
  {(char*)"IsDirect", PyvtkGenericOpenGLRenderWindow_IsDirect, 1,
   (char*)"V.IsDirect() -> int\nC++: int IsDirect()\n\n"},
  {(char*)"SetFrontBuffer", PyvtkGenericOpenGLRenderWindow_SetFrontBuffer, 1,
   (char*)"V.SetFrontBuffer(int)\nC++: void SetFrontBuffer(unsigned int)\n\n"},
  {(char*)"SetFrontLeftBuffer", PyvtkGenericOpenGLRenderWindow_SetFrontLeftBuffer, 1,
   (char*)"V.SetFrontLeftBuffer(int)\nC++: void SetFrontLeftBuffer(unsigned int)\n\n"},
  {(char*)"SetFrontRightBuffer", PyvtkGenericOpenGLRenderWindow_SetFrontRightBuffer, 1,
   (char*)"V.SetFrontRightBuffer(int)\nC++: void SetFrontRightBuffer(unsigned int)\n\n"},
  {(char*)"SetBackBuffer", PyvtkGenericOpenGLRenderWindow_SetBackBuffer, 1,
   (char*)"V.SetBackBuffer(int)\nC++: void SetBackBuffer(unsigned int)\n\n"},
  {(char*)"SetBackLeftBuffer", PyvtkGenericOpenGLRenderWindow_SetBackLeftBuffer, 1,
   (char*)"V.SetBackLeftBuffer(int)\nC++: void SetBackLeftBuffer(unsigned int)\n\n"},
  {(char*)"SetBackRightBuffer", PyvtkGenericOpenGLRenderWindow_SetBackRightBuffer, 1,
   (char*)"V.SetBackRightBuffer(int)\nC++: void SetBackRightBuffer(unsigned int)\n\n"},
  {(char*)"PushState", PyvtkGenericOpenGLRenderWindow_PushState, 1,
   (char*)"V.PushState()\nC++: void PushState()\n\n"},
  {(char*)"PopState", PyvtkGenericOpenGLRenderWindow_PopState, 1,
   (char*)"V.PopState()\nC++: void PopState()\n\n"},
  {(char*)"SetWindowId", PyvtkGenericOpenGLRenderWindow_SetWindowId, 1,
   (char*)"V.SetWindowId()\nC++: void SetWindowId(void *)\n\n"},
  {(char*)"GetGenericWindowId", PyvtkGenericOpenGLRenderWindow_GetGenericWindowId, 1,
   (char*)"V.GetGenericWindowId() ->\nC++: void *GetGenericWindowId()\n\n"},
  {(char*)"SetDisplayId", PyvtkGenericOpenGLRenderWindow_SetDisplayId, 1,
   (char*)"V.SetDisplayId()\nC++: void SetDisplayId(void *)\n\n"},
  {(char*)"SetParentId", PyvtkGenericOpenGLRenderWindow_SetParentId, 1,
   (char*)"V.SetParentId()\nC++: void SetParentId(void *)\n\n"},
  {(char*)"GetGenericDisplayId", PyvtkGenericOpenGLRenderWindow_GetGenericDisplayId, 1,
   (char*)"V.GetGenericDisplayId() ->\nC++: void *GetGenericDisplayId()\n\n"},
  {(char*)"GetGenericParentId", PyvtkGenericOpenGLRenderWindow_GetGenericParentId, 1,
   (char*)"V.GetGenericParentId() ->\nC++: void *GetGenericParentId()\n\n"},
  {(char*)"GetGenericContext", PyvtkGenericOpenGLRenderWindow_GetGenericContext, 1,
   (char*)"V.GetGenericContext() ->\nC++: void *GetGenericContext()\n\n"},
  {(char*)"GetGenericDrawable", PyvtkGenericOpenGLRenderWindow_GetGenericDrawable, 1,
   (char*)"V.GetGenericDrawable() ->\nC++: void *GetGenericDrawable()\n\n"},
  {(char*)"SetWindowInfo", PyvtkGenericOpenGLRenderWindow_SetWindowInfo, 1,
   (char*)"V.SetWindowInfo(string)\nC++: void SetWindowInfo(char *)\n\n"},
  {(char*)"SetParentInfo", PyvtkGenericOpenGLRenderWindow_SetParentInfo, 1,
   (char*)"V.SetParentInfo(string)\nC++: void SetParentInfo(char *)\n\n"},
  {(char*)"Start", PyvtkGenericOpenGLRenderWindow_Start, 1,
   (char*)"V.Start()\nC++: void Start()\n\n"},
  {(char*)"HideCursor", PyvtkGenericOpenGLRenderWindow_HideCursor, 1,
   (char*)"V.HideCursor()\nC++: void HideCursor()\n\n"},
  {(char*)"ShowCursor", PyvtkGenericOpenGLRenderWindow_ShowCursor, 1,
   (char*)"V.ShowCursor()\nC++: void ShowCursor()\n\n"},
  {(char*)"SetFullScreen", PyvtkGenericOpenGLRenderWindow_SetFullScreen, 1,
   (char*)"V.SetFullScreen(int)\nC++: void SetFullScreen(int)\n\n"},
  {(char*)"WindowRemap", PyvtkGenericOpenGLRenderWindow_WindowRemap, 1,
   (char*)"V.WindowRemap()\nC++: void WindowRemap()\n\n"},
  {(char*)"GetEventPending", PyvtkGenericOpenGLRenderWindow_GetEventPending, 1,
   (char*)"V.GetEventPending() -> int\nC++: int GetEventPending()\n\n"},
  {(char*)"SetNextWindowId", PyvtkGenericOpenGLRenderWindow_SetNextWindowId, 1,
   (char*)"V.SetNextWindowId()\nC++: void SetNextWindowId(void *)\n\n"},
  {(char*)"SetNextWindowInfo", PyvtkGenericOpenGLRenderWindow_SetNextWindowInfo, 1,
   (char*)"V.SetNextWindowInfo(string)\nC++: void SetNextWindowInfo(char *)\n\n"},
  {(char*)"CreateAWindow", PyvtkGenericOpenGLRenderWindow_CreateAWindow, 1,
   (char*)"V.CreateAWindow()\nC++: void CreateAWindow()\n\n"},
  {(char*)"DestroyWindow", PyvtkGenericOpenGLRenderWindow_DestroyWindow, 1,
   (char*)"V.DestroyWindow()\nC++: void DestroyWindow()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGenericOpenGLRenderWindow_StaticNew()
{
  return vtkGenericOpenGLRenderWindow::New();
}

PyObject *PyVTKClass_vtkGenericOpenGLRenderWindowNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGenericOpenGLRenderWindow_StaticNew,
    PyvtkGenericOpenGLRenderWindow_Methods,
    "vtkGenericOpenGLRenderWindow", modulename,
    NULL, NULL,
    PyvtkGenericOpenGLRenderWindow_Doc(),
    PyVTKClass_vtkOpenGLRenderWindowNew(modulename));
  return cls;
}

const char **PyvtkGenericOpenGLRenderWindow_Doc()
{
  static const char *docstring[] = {
    "vtkGenericOpenGLRenderWindow - platform independent render window\n\n",
    "Superclass: vtkOpenGLRenderWindow\n\n",
    "vtkGenericOpenGLRenderWindow provides a skeleton for implementing a\nrender window using one's own OpenGL context and drawable. To be\neffective, one must register an observer for WindowMakeCurrentEvent,\nWindowIsCurrentEvent and WindowFrameEvent.  When this class sends a\nWindowIsCurrentEvent, the call data is an bool* which one can use to\nreturn whether the context is current.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGenericOpenGLRenderWindow(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGenericOpenGLRenderWindowNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGenericOpenGLRenderWindow", o) != 0)
    {
    Py_DECREF(o);
    }

}

