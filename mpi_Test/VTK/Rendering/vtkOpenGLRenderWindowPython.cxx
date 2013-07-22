// python wrapper for vtkOpenGLRenderWindow
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
#include "vtkOpenGLRenderWindow.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkOpenGLRenderWindow(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkOpenGLRenderWindow(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkOpenGLRenderWindowNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkOpenGLRenderWindowNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkRenderWindowNew
extern "C" { PyObject *PyVTKClass_vtkRenderWindowNew(const char *); }
#define DECLARED_PyVTKClass_vtkRenderWindowNew
#endif

static const char **PyvtkOpenGLRenderWindow_Doc();


static PyObject *
PyvtkOpenGLRenderWindow_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

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
      tempr = op->vtkOpenGLRenderWindow::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

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
      tempr = op->vtkOpenGLRenderWindow::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  vtkOpenGLRenderWindow *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkOpenGLRenderWindow::NewInstance();
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
PyvtkOpenGLRenderWindow_SetGlobalMaximumNumberOfMultiSamples(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetGlobalMaximumNumberOfMultiSamples");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkOpenGLRenderWindow::SetGlobalMaximumNumberOfMultiSamples(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetGlobalMaximumNumberOfMultiSamples(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalMaximumNumberOfMultiSamples");

  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkOpenGLRenderWindow::GetGlobalMaximumNumberOfMultiSamples();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_StereoUpdate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StereoUpdate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StereoUpdate();
      }
    else
      {
      op->vtkOpenGLRenderWindow::StereoUpdate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetPixelData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  vtkUnsignedCharArray *temp5 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetVTKObject(temp5, "vtkUnsignedCharArray"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPixelData(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      tempr = op->vtkOpenGLRenderWindow::GetPixelData(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_SetPixelData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkUnsignedCharArray *temp4 = NULL;
  int temp5;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkUnsignedCharArray") &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      tempr = op->SetPixelData(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      tempr = op->vtkOpenGLRenderWindow::SetPixelData(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetRGBAPixelData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRGBAPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  vtkFloatArray *temp5 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetVTKObject(temp5, "vtkFloatArray"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRGBAPixelData(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      tempr = op->vtkOpenGLRenderWindow::GetRGBAPixelData(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_SetRGBAPixelData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRGBAPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkFloatArray *temp4 = NULL;
  int temp5;
  int temp6 = 0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6, 7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkFloatArray") &&
      ap.GetValue(temp5) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)))
    {
    if (ap.IsBound())
      {
      tempr = op->SetRGBAPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
      }
    else
      {
      tempr = op->vtkOpenGLRenderWindow::SetRGBAPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetRGBACharPixelData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRGBACharPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  vtkUnsignedCharArray *temp5 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetVTKObject(temp5, "vtkUnsignedCharArray"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRGBACharPixelData(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      tempr = op->vtkOpenGLRenderWindow::GetRGBACharPixelData(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_SetRGBACharPixelData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRGBACharPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkUnsignedCharArray *temp4 = NULL;
  int temp5;
  int temp6 = 0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6, 7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkUnsignedCharArray") &&
      ap.GetValue(temp5) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)))
    {
    if (ap.IsBound())
      {
      tempr = op->SetRGBACharPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
      }
    else
      {
      tempr = op->vtkOpenGLRenderWindow::SetRGBACharPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetZbufferData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZbufferData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkFloatArray *temp4 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkFloatArray"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetZbufferData(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      tempr = op->vtkOpenGLRenderWindow::GetZbufferData(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_SetZbufferData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZbufferData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkFloatArray *temp4 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkFloatArray"))
    {
    if (ap.IsBound())
      {
      tempr = op->SetZbufferData(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      tempr = op->vtkOpenGLRenderWindow::SetZbufferData(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetDepthBufferSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthBufferSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDepthBufferSize();
      }
    else
      {
      tempr = op->vtkOpenGLRenderWindow::GetDepthBufferSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_OpenGLInit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OpenGLInit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OpenGLInit();
      }
    else
      {
      op->vtkOpenGLRenderWindow::OpenGLInit();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetBackLeftBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackLeftBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  unsigned int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBackLeftBuffer();
      }
    else
      {
      tempr = op->vtkOpenGLRenderWindow::GetBackLeftBuffer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetBackRightBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackRightBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  unsigned int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBackRightBuffer();
      }
    else
      {
      tempr = op->vtkOpenGLRenderWindow::GetBackRightBuffer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetFrontLeftBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrontLeftBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  unsigned int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFrontLeftBuffer();
      }
    else
      {
      tempr = op->vtkOpenGLRenderWindow::GetFrontLeftBuffer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetFrontRightBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrontRightBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  unsigned int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFrontRightBuffer();
      }
    else
      {
      tempr = op->vtkOpenGLRenderWindow::GetFrontRightBuffer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetBackBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  unsigned int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBackBuffer();
      }
    else
      {
      tempr = op->vtkOpenGLRenderWindow::GetBackBuffer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetFrontBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrontBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  unsigned int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFrontBuffer();
      }
    else
      {
      tempr = op->vtkOpenGLRenderWindow::GetFrontBuffer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_CheckGraphicError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckGraphicError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CheckGraphicError();
      }
    else
      {
      op->vtkOpenGLRenderWindow::CheckGraphicError();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_HasGraphicError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasGraphicError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->HasGraphicError();
      }
    else
      {
      tempr = op->vtkOpenGLRenderWindow::HasGraphicError();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetLastGraphicErrorString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastGraphicErrorString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLastGraphicErrorString();
      }
    else
      {
      tempr = op->vtkOpenGLRenderWindow::GetLastGraphicErrorString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetContextCreationTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContextCreationTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  vtkTimeStamp tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetContextCreationTime();
      }
    else
      {
      tempr = op->vtkOpenGLRenderWindow::GetContextCreationTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkTimeStamp");
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetExtensionManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtensionManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  vtkOpenGLExtensionManager *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetExtensionManager();
      }
    else
      {
      tempr = op->vtkOpenGLRenderWindow::GetExtensionManager();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetHardwareSupport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHardwareSupport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  vtkOpenGLHardwareSupport *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHardwareSupport();
      }
    else
      {
      tempr = op->vtkOpenGLRenderWindow::GetHardwareSupport();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetTextureUnitManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureUnitManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  vtkTextureUnitManager *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextureUnitManager();
      }
    else
      {
      tempr = op->vtkOpenGLRenderWindow::GetTextureUnitManager();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_WaitForCompletion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WaitForCompletion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WaitForCompletion();
      }
    else
      {
      op->vtkOpenGLRenderWindow::WaitForCompletion();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLRenderWindow_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLRenderWindow_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLRenderWindow_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLRenderWindow_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkOpenGLRenderWindow\nC++: vtkOpenGLRenderWindow *NewInstance()\n\n"},
  {(char*)"SetGlobalMaximumNumberOfMultiSamples", PyvtkOpenGLRenderWindow_SetGlobalMaximumNumberOfMultiSamples, 1,
   (char*)"V.SetGlobalMaximumNumberOfMultiSamples(int)\nC++: static void SetGlobalMaximumNumberOfMultiSamples(int val)\n\nSet/Get the maximum number of multisamples\n"},
  {(char*)"GetGlobalMaximumNumberOfMultiSamples", PyvtkOpenGLRenderWindow_GetGlobalMaximumNumberOfMultiSamples, 1,
   (char*)"V.GetGlobalMaximumNumberOfMultiSamples() -> int\nC++: static int GetGlobalMaximumNumberOfMultiSamples()\n\nSet/Get the maximum number of multisamples\n"},
  {(char*)"StereoUpdate", PyvtkOpenGLRenderWindow_StereoUpdate, 1,
   (char*)"V.StereoUpdate()\nC++: virtual void StereoUpdate()\n\nUpdate system if needed due to stereo rendering.\n"},
  {(char*)"GetPixelData", PyvtkOpenGLRenderWindow_GetPixelData, 1,
   (char*)"V.GetPixelData(int, int, int, int, int, vtkUnsignedCharArray)\n    -> int\nC++: virtual int GetPixelData(int x, int y, int x2, int y2,\n    int front, vtkUnsignedCharArray *data)\n\nSet/Get the pixel data of an image, transmitted as RGBRGB...\n"},
  {(char*)"SetPixelData", PyvtkOpenGLRenderWindow_SetPixelData, 1,
   (char*)"V.SetPixelData(int, int, int, int, vtkUnsignedCharArray, int)\n    -> int\nC++: virtual int SetPixelData(int x, int y, int x2, int y2,\n    vtkUnsignedCharArray *data, int front)\n\nSet/Get the pixel data of an image, transmitted as RGBRGB...\n"},
  {(char*)"GetRGBAPixelData", PyvtkOpenGLRenderWindow_GetRGBAPixelData, 1,
   (char*)"V.GetRGBAPixelData(int, int, int, int, int, vtkFloatArray) -> int\nC++: virtual int GetRGBAPixelData(int x, int y, int x2, int y2,\n    int front, vtkFloatArray *data)\n\nSet/Get the pixel data of an image, transmitted as RGBARGBA...\n"},
  {(char*)"SetRGBAPixelData", PyvtkOpenGLRenderWindow_SetRGBAPixelData, 1,
   (char*)"V.SetRGBAPixelData(int, int, int, int, vtkFloatArray, int, int)\n    -> int\nC++: virtual int SetRGBAPixelData(int x, int y, int x2, int y2,\n    vtkFloatArray *data, int front, int blend=0)\n\nSet/Get the pixel data of an image, transmitted as RGBARGBA...\n"},
  {(char*)"GetRGBACharPixelData", PyvtkOpenGLRenderWindow_GetRGBACharPixelData, 1,
   (char*)"V.GetRGBACharPixelData(int, int, int, int, int,\n    vtkUnsignedCharArray) -> int\nC++: virtual int GetRGBACharPixelData(int x, int y, int x2,\n    int y2, int front, vtkUnsignedCharArray *data)\n\nSet/Get the pixel data of an image, transmitted as RGBARGBA...\n"},
  {(char*)"SetRGBACharPixelData", PyvtkOpenGLRenderWindow_SetRGBACharPixelData, 1,
   (char*)"V.SetRGBACharPixelData(int, int, int, int, vtkUnsignedCharArray,\n    int, int) -> int\nC++: virtual int SetRGBACharPixelData(int x, int y, int x2,\n    int y2, vtkUnsignedCharArray *data, int front, int blend=0)\n\nSet/Get the pixel data of an image, transmitted as RGBARGBA...\n"},
  {(char*)"GetZbufferData", PyvtkOpenGLRenderWindow_GetZbufferData, 1,
   (char*)"V.GetZbufferData(int, int, int, int, vtkFloatArray) -> int\nC++: virtual int GetZbufferData(int x1, int y1, int x2, int y2,\n    vtkFloatArray *z)\n\nSet/Get the zbuffer data from an image\n"},
  {(char*)"SetZbufferData", PyvtkOpenGLRenderWindow_SetZbufferData, 1,
   (char*)"V.SetZbufferData(int, int, int, int, vtkFloatArray) -> int\nC++: virtual int SetZbufferData(int x1, int y1, int x2, int y2,\n    vtkFloatArray *buffer)\n\nSet/Get the zbuffer data from an image\n"},
  {(char*)"GetDepthBufferSize", PyvtkOpenGLRenderWindow_GetDepthBufferSize, 1,
   (char*)"V.GetDepthBufferSize() -> int\nC++: int GetDepthBufferSize()\n\nGet the size of the depth buffer.\n"},
  {(char*)"OpenGLInit", PyvtkOpenGLRenderWindow_OpenGLInit, 1,
   (char*)"V.OpenGLInit()\nC++: virtual void OpenGLInit()\n\nInitialize OpenGL for this window.\n"},
  {(char*)"GetBackLeftBuffer", PyvtkOpenGLRenderWindow_GetBackLeftBuffer, 1,
   (char*)"V.GetBackLeftBuffer() -> int\nC++: unsigned int GetBackLeftBuffer()\n\nReturn the OpenGL name of the back left buffer. It is\nGL_BACK_LEFT if GL is bound to the window-system-provided\nframebuffer. It is vtkgl::COLOR_ATTACHMENT0_EXT if GL is bound to\nan application-created framebuffer object (GPU-based offscreen\nrendering) It is used by vtkOpenGLCamera.\n"},
  {(char*)"GetBackRightBuffer", PyvtkOpenGLRenderWindow_GetBackRightBuffer, 1,
   (char*)"V.GetBackRightBuffer() -> int\nC++: unsigned int GetBackRightBuffer()\n\nReturn the OpenGL name of the back right buffer. It is\nGL_BACK_RIGHT if GL is bound to the window-system-provided\nframebuffer. It is vtkgl::COLOR_ATTACHMENT0_EXT+1 if GL is bound\nto an application-created framebuffer object (GPU-based offscreen\nrendering) It is used by vtkOpenGLCamera.\n"},
  {(char*)"GetFrontLeftBuffer", PyvtkOpenGLRenderWindow_GetFrontLeftBuffer, 1,
   (char*)"V.GetFrontLeftBuffer() -> int\nC++: unsigned int GetFrontLeftBuffer()\n\nReturn the OpenGL name of the front left buffer. It is\nGL_FRONT_LEFT if GL is bound to the window-system-provided\nframebuffer. It is vtkgl::COLOR_ATTACHMENT0_EXT if GL is bound to\nan application-created framebuffer object (GPU-based offscreen\nrendering) It is used by vtkOpenGLCamera.\n"},
  {(char*)"GetFrontRightBuffer", PyvtkOpenGLRenderWindow_GetFrontRightBuffer, 1,
   (char*)"V.GetFrontRightBuffer() -> int\nC++: unsigned int GetFrontRightBuffer()\n\nReturn the OpenGL name of the front right buffer. It is\nGL_FRONT_RIGHT if GL is bound to the window-system-provided\nframebuffer. It is vtkgl::COLOR_ATTACHMENT0_EXT+1 if GL is bound\nto an application-created framebuffer object (GPU-based offscreen\nrendering) It is used by vtkOpenGLCamera.\n"},
  {(char*)"GetBackBuffer", PyvtkOpenGLRenderWindow_GetBackBuffer, 1,
   (char*)"V.GetBackBuffer() -> int\nC++: unsigned int GetBackBuffer()\n\nReturn the OpenGL name of the back left buffer. It is GL_BACK if\nGL is bound to the window-system-provided framebuffer. It is\nvtkgl::COLOR_ATTACHMENT0_EXT if GL is bound to an\napplication-created framebuffer object (GPU-based offscreen\nrendering) It is used by vtkOpenGLCamera.\n"},
  {(char*)"GetFrontBuffer", PyvtkOpenGLRenderWindow_GetFrontBuffer, 1,
   (char*)"V.GetFrontBuffer() -> int\nC++: unsigned int GetFrontBuffer()\n\nReturn the OpenGL name of the front left buffer. It is GL_FRONT\nif GL is bound to the window-system-provided framebuffer. It is\nvtkgl::COLOR_ATTACHMENT0_EXT if GL is bound to an\napplication-created framebuffer object (GPU-based offscreen\nrendering) It is used by vtkOpenGLCamera.\n"},
  {(char*)"CheckGraphicError", PyvtkOpenGLRenderWindow_CheckGraphicError, 1,
   (char*)"V.CheckGraphicError()\nC++: virtual void CheckGraphicError()\n\nUpdate graphic error status, regardless of ReportGraphicErrors\nflag. It means this method can be used in any context and is not\nrestricted to debug mode.\n"},
  {(char*)"HasGraphicError", PyvtkOpenGLRenderWindow_HasGraphicError, 1,
   (char*)"V.HasGraphicError() -> int\nC++: virtual int HasGraphicError()\n\nReturn the last graphic error status. Initial value is false.\n"},
  {(char*)"GetLastGraphicErrorString", PyvtkOpenGLRenderWindow_GetLastGraphicErrorString, 1,
   (char*)"V.GetLastGraphicErrorString() -> string\nC++: virtual const char *GetLastGraphicErrorString()\n\nReturn a string matching the last graphic error status.\n"},
  {(char*)"GetContextCreationTime", PyvtkOpenGLRenderWindow_GetContextCreationTime, 1,
   (char*)"V.GetContextCreationTime() -> vtkTimeStamp\nC++: vtkTimeStamp GetContextCreationTime()\n\nGet the time when the OpenGL context was created.\n"},
  {(char*)"GetExtensionManager", PyvtkOpenGLRenderWindow_GetExtensionManager, 1,
   (char*)"V.GetExtensionManager() -> vtkOpenGLExtensionManager\nC++: vtkOpenGLExtensionManager *GetExtensionManager()\n\nReturns the extension manager. A new one will be created if one\nhasn't already been set up.\n"},
  {(char*)"GetHardwareSupport", PyvtkOpenGLRenderWindow_GetHardwareSupport, 1,
   (char*)"V.GetHardwareSupport() -> vtkOpenGLHardwareSupport\nC++: vtkOpenGLHardwareSupport *GetHardwareSupport()\n\nReturns an Hardware Support object. A new one will be created if\none hasn't already been set up.\n"},
  {(char*)"GetTextureUnitManager", PyvtkOpenGLRenderWindow_GetTextureUnitManager, 1,
   (char*)"V.GetTextureUnitManager() -> vtkTextureUnitManager\nC++: vtkTextureUnitManager *GetTextureUnitManager()\n\nReturns its texture unit manager object. A new one will be\ncreated if one hasn't already been set up.\n"},
  {(char*)"WaitForCompletion", PyvtkOpenGLRenderWindow_WaitForCompletion, 1,
   (char*)"V.WaitForCompletion()\nC++: virtual void WaitForCompletion()\n\nBlock the thread until the actual rendering is finished(). Useful\nfor measurement only.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkOpenGLRenderWindowNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkOpenGLRenderWindow_Methods,
    "vtkOpenGLRenderWindow", modulename,
    NULL, NULL,
    PyvtkOpenGLRenderWindow_Doc(),
    PyVTKClass_vtkRenderWindowNew(modulename));
  return cls;
}

const char **PyvtkOpenGLRenderWindow_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLRenderWindow - OpenGL rendering window\n\n",
    "Superclass: vtkRenderWindow\n\n",
    "vtkOpenGLRenderWindow is a concrete implementation of the abstract\nclass vtkRenderWindow. vtkOpenGLRenderer interfaces to the OpenGL\ngraphics library. Application programmers should normally use\nvtkRenderWindow instead of the OpenGL specific version.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLRenderWindow(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLRenderWindowNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLRenderWindow", o) != 0)
    {
    Py_DECREF(o);
    }

}

