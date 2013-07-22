// python wrapper for vtkXOpenGLRenderWindow
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
#include "vtkXOpenGLRenderWindow.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXOpenGLRenderWindow(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXOpenGLRenderWindow(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXOpenGLRenderWindowNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXOpenGLRenderWindowNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkOpenGLRenderWindowNew
extern "C" { PyObject *PyVTKClass_vtkOpenGLRenderWindowNew(const char *); }
#define DECLARED_PyVTKClass_vtkOpenGLRenderWindowNew
#endif

static const char **PyvtkXOpenGLRenderWindow_Doc();


static PyObject *
PyvtkXOpenGLRenderWindow_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

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
      tempr = op->vtkXOpenGLRenderWindow::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

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
      tempr = op->vtkXOpenGLRenderWindow::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  vtkXOpenGLRenderWindow *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXOpenGLRenderWindow::NewInstance();
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
PyvtkXOpenGLRenderWindow_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkXOpenGLRenderWindow *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkXOpenGLRenderWindow::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_Start(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Start");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Start();
      }
    else
      {
      op->vtkXOpenGLRenderWindow::Start();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_Frame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Frame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Frame();
      }
    else
      {
      op->vtkXOpenGLRenderWindow::Frame();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_WindowInitialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WindowInitialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WindowInitialize();
      }
    else
      {
      op->vtkXOpenGLRenderWindow::WindowInitialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkXOpenGLRenderWindow::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_Finalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Finalize();
      }
    else
      {
      op->vtkXOpenGLRenderWindow::Finalize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_SetFullScreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFullScreen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

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
      op->vtkXOpenGLRenderWindow::SetFullScreen(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_WindowRemap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WindowRemap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WindowRemap();
      }
    else
      {
      op->vtkXOpenGLRenderWindow::WindowRemap();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_PrefFullScreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrefFullScreen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PrefFullScreen();
      }
    else
      {
      op->vtkXOpenGLRenderWindow::PrefFullScreen();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_SetSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetSize(temp0, temp1);
      }
    else
      {
      op->vtkXOpenGLRenderWindow::SetSize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXOpenGLRenderWindow_SetSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  int temp0[2];
  int save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetSize(temp0);
      }
    else
      {
      op->vtkXOpenGLRenderWindow::SetSize(temp0);
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
PyvtkXOpenGLRenderWindow_SetSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkXOpenGLRenderWindow_SetSize_s1(self, args);
    case 1:
      return PyvtkXOpenGLRenderWindow_SetSize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSize");
  return NULL;
}



static PyObject *
PyvtkXOpenGLRenderWindow_GetDesiredDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDesiredDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDesiredDepth();
      }
    else
      {
      tempr = op->vtkXOpenGLRenderWindow::GetDesiredDepth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_SetStereoCapableWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoCapableWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

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
      op->vtkXOpenGLRenderWindow::SetStereoCapableWindow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_MakeCurrent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeCurrent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MakeCurrent();
      }
    else
      {
      op->vtkXOpenGLRenderWindow::MakeCurrent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_IsCurrent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsCurrent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

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
      tempr = op->vtkXOpenGLRenderWindow::IsCurrent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_SetForceMakeCurrent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceMakeCurrent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetForceMakeCurrent();
      }
    else
      {
      op->vtkXOpenGLRenderWindow::SetForceMakeCurrent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_ReportCapabilities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReportCapabilities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

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
      tempr = op->vtkXOpenGLRenderWindow::ReportCapabilities();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_SupportsOpenGL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SupportsOpenGL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

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
      tempr = op->vtkXOpenGLRenderWindow::SupportsOpenGL();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_IsDirect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDirect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

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
      tempr = op->vtkXOpenGLRenderWindow::IsDirect();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_GetGenericDisplayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericDisplayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

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
      tempr = op->vtkXOpenGLRenderWindow::GetGenericDisplayId();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_GetGenericWindowId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericWindowId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

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
      tempr = op->vtkXOpenGLRenderWindow::GetGenericWindowId();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_GetGenericParentId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericParentId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

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
      tempr = op->vtkXOpenGLRenderWindow::GetGenericParentId();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_GetGenericContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

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
      tempr = op->vtkXOpenGLRenderWindow::GetGenericContext();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_GetGenericDrawable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericDrawable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

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
      tempr = op->vtkXOpenGLRenderWindow::GetGenericDrawable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_SetDisplayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

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
      op->vtkXOpenGLRenderWindow::SetDisplayId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_SetParentId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParentId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

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
      op->vtkXOpenGLRenderWindow::SetParentId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_SetWindowId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

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
      op->vtkXOpenGLRenderWindow::SetWindowId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_SetNextWindowId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNextWindowId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

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
      op->vtkXOpenGLRenderWindow::SetNextWindowId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_SetWindowName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWindowName(temp0);
      }
    else
      {
      op->vtkXOpenGLRenderWindow::SetWindowName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPosition(temp0, temp1);
      }
    else
      {
      op->vtkXOpenGLRenderWindow::SetPosition(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXOpenGLRenderWindow_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  int temp0[2];
  int save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetPosition(temp0);
      }
    else
      {
      op->vtkXOpenGLRenderWindow::SetPosition(temp0);
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
PyvtkXOpenGLRenderWindow_SetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkXOpenGLRenderWindow_SetPosition_s1(self, args);
    case 1:
      return PyvtkXOpenGLRenderWindow_SetPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return NULL;
}



static PyObject *
PyvtkXOpenGLRenderWindow_HideCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HideCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HideCursor();
      }
    else
      {
      op->vtkXOpenGLRenderWindow::HideCursor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_ShowCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShowCursor();
      }
    else
      {
      op->vtkXOpenGLRenderWindow::ShowCursor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_SetCurrentCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

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
      op->vtkXOpenGLRenderWindow::SetCurrentCursor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_GetEventPending(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEventPending");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

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
      tempr = op->vtkXOpenGLRenderWindow::GetEventPending();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_SetWindowInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

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
      op->vtkXOpenGLRenderWindow::SetWindowInfo(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_SetNextWindowInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNextWindowInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

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
      op->vtkXOpenGLRenderWindow::SetNextWindowInfo(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_SetParentInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParentInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

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
      op->vtkXOpenGLRenderWindow::SetParentInfo(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Render();
      }
    else
      {
      op->vtkXOpenGLRenderWindow::Render();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_SetOffScreenRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffScreenRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOffScreenRendering(temp0);
      }
    else
      {
      op->vtkXOpenGLRenderWindow::SetOffScreenRendering(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkXOpenGLRenderWindow_Methods[] = {
  {(char*)"GetClassName", PyvtkXOpenGLRenderWindow_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXOpenGLRenderWindow_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXOpenGLRenderWindow_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXOpenGLRenderWindow\nC++: vtkXOpenGLRenderWindow *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXOpenGLRenderWindow_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXOpenGLRenderWindow\nC++: vtkXOpenGLRenderWindow *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Start", PyvtkXOpenGLRenderWindow_Start, 1,
   (char*)"V.Start()\nC++: virtual void Start(void)\n\nBegin the rendering process.\n"},
  {(char*)"Frame", PyvtkXOpenGLRenderWindow_Frame, 1,
   (char*)"V.Frame()\nC++: virtual void Frame(void)\n\nEnd the rendering process and display the image.\n"},
  {(char*)"WindowInitialize", PyvtkXOpenGLRenderWindow_WindowInitialize, 1,
   (char*)"V.WindowInitialize()\nC++: virtual void WindowInitialize(void)\n\nInitialize the window for rendering.\n"},
  {(char*)"Initialize", PyvtkXOpenGLRenderWindow_Initialize, 1,
   (char*)"V.Initialize()\nC++: virtual void Initialize(void)\n\nInitialize the rendering window.  This will setup all\nsystem-specific resources.  This method and Finalize() must be\nsymmetric and it should be possible to call them multiple times,\neven changing WindowId in-between.  This is what WindowRemap\ndoes.\n"},
  {(char*)"Finalize", PyvtkXOpenGLRenderWindow_Finalize, 1,
   (char*)"V.Finalize()\nC++: virtual void Finalize(void)\n\n\"Deinitialize\" the rendering window.  This will shutdown all\nsystem-specific resources.  After having called this, it should\nbe possible to destroy a window that was used for a SetWindowId()\ncall without any ill effects.\n"},
  {(char*)"SetFullScreen", PyvtkXOpenGLRenderWindow_SetFullScreen, 1,
   (char*)"V.SetFullScreen(int)\nC++: virtual void SetFullScreen(int)\n\nChange the window to fill the entire screen.\n"},
  {(char*)"WindowRemap", PyvtkXOpenGLRenderWindow_WindowRemap, 1,
   (char*)"V.WindowRemap()\nC++: virtual void WindowRemap(void)\n\nResize the window.\n"},
  {(char*)"PrefFullScreen", PyvtkXOpenGLRenderWindow_PrefFullScreen, 1,
   (char*)"V.PrefFullScreen()\nC++: virtual void PrefFullScreen(void)\n\nSet the preferred window size to full screen.\n"},
  {(char*)"SetSize", PyvtkXOpenGLRenderWindow_SetSize, 1,
   (char*)"V.SetSize(int, int)\nC++: virtual void SetSize(int, int)\nV.SetSize([int, int])\nC++: virtual void SetSize(int a[2])\n\nSpecify the size of the rendering window in pixels.\n"},
  {(char*)"GetDesiredDepth", PyvtkXOpenGLRenderWindow_GetDesiredDepth, 1,
   (char*)"V.GetDesiredDepth() -> int\nC++: virtual int GetDesiredDepth()\n\nGet the X properties of an ideal rendering window.\n"},
  {(char*)"SetStereoCapableWindow", PyvtkXOpenGLRenderWindow_SetStereoCapableWindow, 1,
   (char*)"V.SetStereoCapableWindow(int)\nC++: virtual void SetStereoCapableWindow(int capable)\n\nPrescribe that the window be created in a stereo-capable mode.\nThis method must be called before the window is realized. This\nmethod overrides the superclass method since this class can\nactually check whether the window has been realized yet.\n"},
  {(char*)"MakeCurrent", PyvtkXOpenGLRenderWindow_MakeCurrent, 1,
   (char*)"V.MakeCurrent()\nC++: void MakeCurrent()\n\nMake this window the current OpenGL context.\n"},
  {(char*)"IsCurrent", PyvtkXOpenGLRenderWindow_IsCurrent, 1,
   (char*)"V.IsCurrent() -> bool\nC++: virtual bool IsCurrent()\n\nTells if this window is the current OpenGL context for the\ncalling thread.\n"},
  {(char*)"SetForceMakeCurrent", PyvtkXOpenGLRenderWindow_SetForceMakeCurrent, 1,
   (char*)"V.SetForceMakeCurrent()\nC++: void SetForceMakeCurrent()\n\nIf called, allow MakeCurrent() to skip cache-check when called.\nMakeCurrent() reverts to original behavior of cache-checking on\nthe next render.\n"},
  {(char*)"ReportCapabilities", PyvtkXOpenGLRenderWindow_ReportCapabilities, 1,
   (char*)"V.ReportCapabilities() -> string\nC++: const char *ReportCapabilities()\n\nGet report of capabilities for the render window\n"},
  {(char*)"SupportsOpenGL", PyvtkXOpenGLRenderWindow_SupportsOpenGL, 1,
   (char*)"V.SupportsOpenGL() -> int\nC++: int SupportsOpenGL()\n\nDoes this render window support OpenGL? 0-false, 1-true\n"},
  {(char*)"IsDirect", PyvtkXOpenGLRenderWindow_IsDirect, 1,
   (char*)"V.IsDirect() -> int\nC++: int IsDirect()\n\nIs this render window using hardware acceleration? 0-false,\n1-true\n"},
  {(char*)"GetGenericDisplayId", PyvtkXOpenGLRenderWindow_GetGenericDisplayId, 1,
   (char*)"V.GetGenericDisplayId() ->\nC++: virtual void *GetGenericDisplayId()\n\nXwindow get set functions\n"},
  {(char*)"GetGenericWindowId", PyvtkXOpenGLRenderWindow_GetGenericWindowId, 1,
   (char*)"V.GetGenericWindowId() ->\nC++: virtual void *GetGenericWindowId()\n\n"},
  {(char*)"GetGenericParentId", PyvtkXOpenGLRenderWindow_GetGenericParentId, 1,
   (char*)"V.GetGenericParentId() ->\nC++: virtual void *GetGenericParentId()\n\n"},
  {(char*)"GetGenericContext", PyvtkXOpenGLRenderWindow_GetGenericContext, 1,
   (char*)"V.GetGenericContext() ->\nC++: virtual void *GetGenericContext()\n\n"},
  {(char*)"GetGenericDrawable", PyvtkXOpenGLRenderWindow_GetGenericDrawable, 1,
   (char*)"V.GetGenericDrawable() ->\nC++: virtual void *GetGenericDrawable()\n\n"},
  {(char*)"SetDisplayId", PyvtkXOpenGLRenderWindow_SetDisplayId, 1,
   (char*)"V.SetDisplayId()\nC++: void SetDisplayId(void *)\n\nSet the X display id for this RenderWindow to use to a\npre-existing X display id.\n"},
  {(char*)"SetParentId", PyvtkXOpenGLRenderWindow_SetParentId, 1,
   (char*)"V.SetParentId()\nC++: void SetParentId(void *)\n\nSets the parent of the window that WILL BE created.\n"},
  {(char*)"SetWindowId", PyvtkXOpenGLRenderWindow_SetWindowId, 1,
   (char*)"V.SetWindowId()\nC++: void SetWindowId(void *)\n\nSet this RenderWindow's X window id to a pre-existing window.\n"},
  {(char*)"SetNextWindowId", PyvtkXOpenGLRenderWindow_SetNextWindowId, 1,
   (char*)"V.SetNextWindowId()\nC++: void SetNextWindowId(void *)\n\nSet the window id of the new window once a WindowRemap is done.\nThis is the generic prototype as required by the vtkRenderWindow\nparent.\n"},
  {(char*)"SetWindowName", PyvtkXOpenGLRenderWindow_SetWindowName, 1,
   (char*)"V.SetWindowName(string)\nC++: void SetWindowName(const char *)\n\n"},
  {(char*)"SetPosition", PyvtkXOpenGLRenderWindow_SetPosition, 1,
   (char*)"V.SetPosition(int, int)\nC++: void SetPosition(int, int)\nV.SetPosition([int, int])\nC++: void SetPosition(int a[2])\n\nMove the window to a new position on the display.\n"},
  {(char*)"HideCursor", PyvtkXOpenGLRenderWindow_HideCursor, 1,
   (char*)"V.HideCursor()\nC++: void HideCursor()\n\nHide or Show the mouse cursor, it is nice to be able to hide the\ndefault cursor if you want VTK to display a 3D cursor instead.\n"},
  {(char*)"ShowCursor", PyvtkXOpenGLRenderWindow_ShowCursor, 1,
   (char*)"V.ShowCursor()\nC++: void ShowCursor()\n\nHide or Show the mouse cursor, it is nice to be able to hide the\ndefault cursor if you want VTK to display a 3D cursor instead.\n"},
  {(char*)"SetCurrentCursor", PyvtkXOpenGLRenderWindow_SetCurrentCursor, 1,
   (char*)"V.SetCurrentCursor(int)\nC++: virtual void SetCurrentCursor(int)\n\nChange the shape of the cursor\n"},
  {(char*)"GetEventPending", PyvtkXOpenGLRenderWindow_GetEventPending, 1,
   (char*)"V.GetEventPending() -> int\nC++: virtual int GetEventPending()\n\nCheck to see if a mouse button has been pressed. All other events\nare ignored by this method. This is a useful check to abort a\nlong render.\n"},
  {(char*)"SetWindowInfo", PyvtkXOpenGLRenderWindow_SetWindowInfo, 1,
   (char*)"V.SetWindowInfo(string)\nC++: void SetWindowInfo(char *info)\n\nSet this RenderWindow's X window id to a pre-existing window.\n"},
  {(char*)"SetNextWindowInfo", PyvtkXOpenGLRenderWindow_SetNextWindowInfo, 1,
   (char*)"V.SetNextWindowInfo(string)\nC++: void SetNextWindowInfo(char *info)\n\nSet the window info that will be used after WindowRemap()\n"},
  {(char*)"SetParentInfo", PyvtkXOpenGLRenderWindow_SetParentInfo, 1,
   (char*)"V.SetParentInfo(string)\nC++: void SetParentInfo(char *info)\n\nSets the X window id of the window that WILL BE created.\n"},
  {(char*)"Render", PyvtkXOpenGLRenderWindow_Render, 1,
   (char*)"V.Render()\nC++: void Render()\n\nThis computes the size of the render window before calling the\nsupper classes render\n"},
  {(char*)"SetOffScreenRendering", PyvtkXOpenGLRenderWindow_SetOffScreenRendering, 1,
   (char*)"V.SetOffScreenRendering(int)\nC++: void SetOffScreenRendering(int i)\n\nRender without displaying the window.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXOpenGLRenderWindow_StaticNew()
{
  return vtkXOpenGLRenderWindow::New();
}

PyObject *PyVTKClass_vtkXOpenGLRenderWindowNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXOpenGLRenderWindow_StaticNew,
    PyvtkXOpenGLRenderWindow_Methods,
    "vtkXOpenGLRenderWindow", modulename,
    NULL, NULL,
    PyvtkXOpenGLRenderWindow_Doc(),
    PyVTKClass_vtkOpenGLRenderWindowNew(modulename));
  return cls;
}

const char **PyvtkXOpenGLRenderWindow_Doc()
{
  static const char *docstring[] = {
    "vtkXOpenGLRenderWindow - OpenGL rendering window\n\n",
    "Superclass: vtkOpenGLRenderWindow\n\n",
    "vtkXOpenGLRenderWindow is a concrete implementation of the abstract\nclass vtkRenderWindow. vtkOpenGLRenderer interfaces to the OpenGL\ngraphics library. Application programmers should normally use\nvtkRenderWindow instead of the OpenGL specific version.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXOpenGLRenderWindow(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXOpenGLRenderWindowNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXOpenGLRenderWindow", o) != 0)
    {
    Py_DECREF(o);
    }

}

