// python wrapper for vtkWindow
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
#include "vtkWindow.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkWindow(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkWindow(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkWindowNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkWindowNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkWindow_Doc();


static PyObject *
PyvtkWindow_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

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
      tempr = op->vtkWindow::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindow_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

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
      tempr = op->vtkWindow::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindow_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  vtkWindow *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkWindow::NewInstance();
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
PyvtkWindow_SetDisplayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

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
PyvtkWindow_SetWindowId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

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
PyvtkWindow_SetParentId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParentId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

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
PyvtkWindow_GetGenericDisplayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericDisplayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

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
PyvtkWindow_GetGenericWindowId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericWindowId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

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
PyvtkWindow_GetGenericParentId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericParentId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

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
PyvtkWindow_GetGenericContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

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
PyvtkWindow_GetGenericDrawable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericDrawable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

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
PyvtkWindow_SetWindowInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

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
PyvtkWindow_SetParentInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParentInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

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
PyvtkWindow_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPosition();
      }
    else
      {
      tempr = op->vtkWindow::GetPosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkWindow_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

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
      op->vtkWindow::SetPosition(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkWindow_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

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
      op->vtkWindow::SetPosition(temp0);
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
PyvtkWindow_SetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkWindow_SetPosition_s1(self, args);
    case 1:
      return PyvtkWindow_SetPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return NULL;
}



static PyObject *
PyvtkWindow_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSize();
      }
    else
      {
      tempr = op->vtkWindow::GetSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkWindow_SetSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

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
      op->vtkWindow::SetSize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkWindow_SetSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

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
      op->vtkWindow::SetSize(temp0);
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
PyvtkWindow_SetSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkWindow_SetSize_s1(self, args);
    case 1:
      return PyvtkWindow_SetSize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSize");
  return NULL;
}



static PyObject *
PyvtkWindow_SetMapped(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMapped");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMapped(temp0);
      }
    else
      {
      op->vtkWindow::SetMapped(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindow_GetMapped(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMapped");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMapped();
      }
    else
      {
      tempr = op->vtkWindow::GetMapped();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindow_MappedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MappedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MappedOn();
      }
    else
      {
      op->vtkWindow::MappedOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindow_MappedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MappedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MappedOff();
      }
    else
      {
      op->vtkWindow::MappedOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindow_SetErase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetErase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetErase(temp0);
      }
    else
      {
      op->vtkWindow::SetErase(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindow_GetErase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetErase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetErase();
      }
    else
      {
      tempr = op->vtkWindow::GetErase();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindow_EraseOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EraseOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EraseOn();
      }
    else
      {
      op->vtkWindow::EraseOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindow_EraseOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EraseOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EraseOff();
      }
    else
      {
      op->vtkWindow::EraseOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindow_SetDoubleBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDoubleBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDoubleBuffer(temp0);
      }
    else
      {
      op->vtkWindow::SetDoubleBuffer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindow_GetDoubleBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDoubleBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDoubleBuffer();
      }
    else
      {
      tempr = op->vtkWindow::GetDoubleBuffer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindow_DoubleBufferOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DoubleBufferOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DoubleBufferOn();
      }
    else
      {
      op->vtkWindow::DoubleBufferOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindow_DoubleBufferOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DoubleBufferOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DoubleBufferOff();
      }
    else
      {
      op->vtkWindow::DoubleBufferOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindow_GetWindowName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWindowName();
      }
    else
      {
      tempr = op->vtkWindow::GetWindowName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindow_SetWindowName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

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
      op->vtkWindow::SetWindowName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindow_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->Render();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindow_GetPixelData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

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
    tempr = op->GetPixelData(temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindow_GetDPI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDPI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDPI();
      }
    else
      {
      tempr = op->vtkWindow::GetDPI();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindow_SetDPI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDPI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDPI(temp0);
      }
    else
      {
      op->vtkWindow::SetDPI(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindow_GetDPIMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDPIMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDPIMinValue();
      }
    else
      {
      tempr = op->vtkWindow::GetDPIMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindow_GetDPIMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDPIMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDPIMaxValue();
      }
    else
      {
      tempr = op->vtkWindow::GetDPIMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindow_SetOffScreenRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffScreenRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

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
      op->vtkWindow::SetOffScreenRendering(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindow_GetOffScreenRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffScreenRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOffScreenRendering();
      }
    else
      {
      tempr = op->vtkWindow::GetOffScreenRendering();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindow_OffScreenRenderingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OffScreenRenderingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OffScreenRenderingOn();
      }
    else
      {
      op->vtkWindow::OffScreenRenderingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindow_OffScreenRenderingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OffScreenRenderingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OffScreenRenderingOff();
      }
    else
      {
      op->vtkWindow::OffScreenRenderingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindow_MakeCurrent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeCurrent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MakeCurrent();
      }
    else
      {
      op->vtkWindow::MakeCurrent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindow_SetTileScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetTileScale(temp0, temp1);
      }
    else
      {
      op->vtkWindow::SetTileScale(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkWindow_SetTileScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetTileScale(temp0);
      }
    else
      {
      op->vtkWindow::SetTileScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkWindow_SetTileScale_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTileScale(temp0);
      }
    else
      {
      op->vtkWindow::SetTileScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkWindow_SetTileScale_Methods[] = {
  {NULL, PyvtkWindow_SetTileScale_s2, 1,
   (char*)"@O *i"},
  {NULL, PyvtkWindow_SetTileScale_s3, 1,
   (char*)"@i"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkWindow_SetTileScale(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkWindow_SetTileScale_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkWindow_SetTileScale_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTileScale");
  return NULL;
}



static PyObject *
PyvtkWindow_GetTileScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTileScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTileScale();
      }
    else
      {
      tempr = op->vtkWindow::GetTileScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkWindow_SetTileViewport_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetTileViewport(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkWindow::SetTileViewport(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkWindow_SetTileViewport_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  double temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetTileViewport(temp0);
      }
    else
      {
      op->vtkWindow::SetTileViewport(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkWindow_SetTileViewport(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkWindow_SetTileViewport_s1(self, args);
    case 1:
      return PyvtkWindow_SetTileViewport_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTileViewport");
  return NULL;
}



static PyObject *
PyvtkWindow_GetTileViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTileViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  double *tempr;
  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTileViewport();
      }
    else
      {
      tempr = op->vtkWindow::GetTileViewport();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkWindow_Methods[] = {
  {(char*)"GetClassName", PyvtkWindow_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkWindow_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkWindow_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkWindow\nC++: vtkWindow *NewInstance()\n\n"},
  {(char*)"SetDisplayId", PyvtkWindow_SetDisplayId, 1,
   (char*)"V.SetDisplayId()\nC++: virtual void SetDisplayId(void *)\n\nThese are window system independent methods that are used to help\ninterface vtkWindow to native windowing systems.\n"},
  {(char*)"SetWindowId", PyvtkWindow_SetWindowId, 1,
   (char*)"V.SetWindowId()\nC++: virtual void SetWindowId(void *)\n\nThese are window system independent methods that are used to help\ninterface vtkWindow to native windowing systems.\n"},
  {(char*)"SetParentId", PyvtkWindow_SetParentId, 1,
   (char*)"V.SetParentId()\nC++: virtual void SetParentId(void *)\n\nThese are window system independent methods that are used to help\ninterface vtkWindow to native windowing systems.\n"},
  {(char*)"GetGenericDisplayId", PyvtkWindow_GetGenericDisplayId, 1,
   (char*)"V.GetGenericDisplayId() ->\nC++: virtual void *GetGenericDisplayId()\n\nThese are window system independent methods that are used to help\ninterface vtkWindow to native windowing systems.\n"},
  {(char*)"GetGenericWindowId", PyvtkWindow_GetGenericWindowId, 1,
   (char*)"V.GetGenericWindowId() ->\nC++: virtual void *GetGenericWindowId()\n\nThese are window system independent methods that are used to help\ninterface vtkWindow to native windowing systems.\n"},
  {(char*)"GetGenericParentId", PyvtkWindow_GetGenericParentId, 1,
   (char*)"V.GetGenericParentId() ->\nC++: virtual void *GetGenericParentId()\n\nThese are window system independent methods that are used to help\ninterface vtkWindow to native windowing systems.\n"},
  {(char*)"GetGenericContext", PyvtkWindow_GetGenericContext, 1,
   (char*)"V.GetGenericContext() ->\nC++: virtual void *GetGenericContext()\n\nThese are window system independent methods that are used to help\ninterface vtkWindow to native windowing systems.\n"},
  {(char*)"GetGenericDrawable", PyvtkWindow_GetGenericDrawable, 1,
   (char*)"V.GetGenericDrawable() ->\nC++: virtual void *GetGenericDrawable()\n\nThese are window system independent methods that are used to help\ninterface vtkWindow to native windowing systems.\n"},
  {(char*)"SetWindowInfo", PyvtkWindow_SetWindowInfo, 1,
   (char*)"V.SetWindowInfo(string)\nC++: virtual void SetWindowInfo(char *)\n\nThese are window system independent methods that are used to help\ninterface vtkWindow to native windowing systems.\n"},
  {(char*)"SetParentInfo", PyvtkWindow_SetParentInfo, 1,
   (char*)"V.SetParentInfo(string)\nC++: virtual void SetParentInfo(char *)\n\nThese are window system independent methods that are used to help\ninterface vtkWindow to native windowing systems.\n"},
  {(char*)"GetPosition", PyvtkWindow_GetPosition, 1,
   (char*)"V.GetPosition() -> (int, int)\nC++: virtual int *GetPosition()\n\nSet/Get the position in screen coordinates of the rendering\nwindow.\n"},
  {(char*)"SetPosition", PyvtkWindow_SetPosition, 1,
   (char*)"V.SetPosition(int, int)\nC++: virtual void SetPosition(int, int)\nV.SetPosition([int, int])\nC++: virtual void SetPosition(int a[2])\n\nSet/Get the position in screen coordinates of the rendering\nwindow.\n"},
  {(char*)"GetSize", PyvtkWindow_GetSize, 1,
   (char*)"V.GetSize() -> (int, int)\nC++: virtual int *GetSize()\n\nSet/Get the size of the window in screen coordinates in pixels.\n"},
  {(char*)"SetSize", PyvtkWindow_SetSize, 1,
   (char*)"V.SetSize(int, int)\nC++: virtual void SetSize(int, int)\nV.SetSize([int, int])\nC++: virtual void SetSize(int a[2])\n\nSet/Get the size of the window in screen coordinates in pixels.\n"},
  {(char*)"SetMapped", PyvtkWindow_SetMapped, 1,
   (char*)"V.SetMapped(int)\nC++: void SetMapped(int a)\n\nKeep track of whether the rendering window has been mapped to\nscreen.\n"},
  {(char*)"GetMapped", PyvtkWindow_GetMapped, 1,
   (char*)"V.GetMapped() -> int\nC++: int GetMapped()\n\nKeep track of whether the rendering window has been mapped to\nscreen.\n"},
  {(char*)"MappedOn", PyvtkWindow_MappedOn, 1,
   (char*)"V.MappedOn()\nC++: void MappedOn()\n\nKeep track of whether the rendering window has been mapped to\nscreen.\n"},
  {(char*)"MappedOff", PyvtkWindow_MappedOff, 1,
   (char*)"V.MappedOff()\nC++: void MappedOff()\n\nKeep track of whether the rendering window has been mapped to\nscreen.\n"},
  {(char*)"SetErase", PyvtkWindow_SetErase, 1,
   (char*)"V.SetErase(int)\nC++: void SetErase(int a)\n\nTurn on/off erasing the screen between images. This allows\nmultiple exposure sequences if turned on. You will need to turn\ndouble buffering off or make use of the SwapBuffers methods to\nprevent you from swapping buffers between exposures.\n"},
  {(char*)"GetErase", PyvtkWindow_GetErase, 1,
   (char*)"V.GetErase() -> int\nC++: int GetErase()\n\nTurn on/off erasing the screen between images. This allows\nmultiple exposure sequences if turned on. You will need to turn\ndouble buffering off or make use of the SwapBuffers methods to\nprevent you from swapping buffers between exposures.\n"},
  {(char*)"EraseOn", PyvtkWindow_EraseOn, 1,
   (char*)"V.EraseOn()\nC++: void EraseOn()\n\nTurn on/off erasing the screen between images. This allows\nmultiple exposure sequences if turned on. You will need to turn\ndouble buffering off or make use of the SwapBuffers methods to\nprevent you from swapping buffers between exposures.\n"},
  {(char*)"EraseOff", PyvtkWindow_EraseOff, 1,
   (char*)"V.EraseOff()\nC++: void EraseOff()\n\nTurn on/off erasing the screen between images. This allows\nmultiple exposure sequences if turned on. You will need to turn\ndouble buffering off or make use of the SwapBuffers methods to\nprevent you from swapping buffers between exposures.\n"},
  {(char*)"SetDoubleBuffer", PyvtkWindow_SetDoubleBuffer, 1,
   (char*)"V.SetDoubleBuffer(int)\nC++: void SetDoubleBuffer(int a)\n\nKeep track of whether double buffering is on or off\n"},
  {(char*)"GetDoubleBuffer", PyvtkWindow_GetDoubleBuffer, 1,
   (char*)"V.GetDoubleBuffer() -> int\nC++: int GetDoubleBuffer()\n\nKeep track of whether double buffering is on or off\n"},
  {(char*)"DoubleBufferOn", PyvtkWindow_DoubleBufferOn, 1,
   (char*)"V.DoubleBufferOn()\nC++: void DoubleBufferOn()\n\nKeep track of whether double buffering is on or off\n"},
  {(char*)"DoubleBufferOff", PyvtkWindow_DoubleBufferOff, 1,
   (char*)"V.DoubleBufferOff()\nC++: void DoubleBufferOff()\n\nKeep track of whether double buffering is on or off\n"},
  {(char*)"GetWindowName", PyvtkWindow_GetWindowName, 1,
   (char*)"V.GetWindowName() -> string\nC++: char *GetWindowName()\n\nGet name of rendering window\n"},
  {(char*)"SetWindowName", PyvtkWindow_SetWindowName, 1,
   (char*)"V.SetWindowName(string)\nC++: void SetWindowName(char *)\n\nGet name of rendering window\n"},
  {(char*)"Render", PyvtkWindow_Render, 1,
   (char*)"V.Render()\nC++: virtual void Render()\n\nAsk each viewport owned by this Window to render its image and\nsynchronize this process.\n"},
  {(char*)"GetPixelData", PyvtkWindow_GetPixelData, 1,
   (char*)"V.GetPixelData(int, int, int, int, int, vtkUnsignedCharArray)\n    -> int\nC++: virtual int GetPixelData(int x, int y, int x2, int y2,\n    int front, vtkUnsignedCharArray *data)\n\nGet the pixel data of an image, transmitted as RGBRGBRGB. The\nfront argument indicates if the front buffer should be used or\nthe back buffer. It is the caller's responsibility to delete the\nresulting array. It is very important to realize that the memory\nin this array is organized from the bottom of the window to the\ntop. The origin of the screen is in the lower left corner. The y\naxis increases as you go up the screen. So the storage of pixels\nis from left to right and from bottom to top. (x,y) is any corner\nof the rectangle. (x2,y2) is its opposite corner on the diagonal.\n"},
  {(char*)"GetDPI", PyvtkWindow_GetDPI, 1,
   (char*)"V.GetDPI() -> int\nC++: int GetDPI()\n\nReturn a best estimate to the dots per inch of the display device\nbeing rendered (or printed).\n"},
  {(char*)"SetDPI", PyvtkWindow_SetDPI, 1,
   (char*)"V.SetDPI(int)\nC++: void SetDPI(int)\n\nReturn a best estimate to the dots per inch of the display device\nbeing rendered (or printed).\n"},
  {(char*)"GetDPIMinValue", PyvtkWindow_GetDPIMinValue, 1,
   (char*)"V.GetDPIMinValue() -> int\nC++: int GetDPIMinValue()\n\nReturn a best estimate to the dots per inch of the display device\nbeing rendered (or printed).\n"},
  {(char*)"GetDPIMaxValue", PyvtkWindow_GetDPIMaxValue, 1,
   (char*)"V.GetDPIMaxValue() -> int\nC++: int GetDPIMaxValue()\n\nReturn a best estimate to the dots per inch of the display device\nbeing rendered (or printed).\n"},
  {(char*)"SetOffScreenRendering", PyvtkWindow_SetOffScreenRendering, 1,
   (char*)"V.SetOffScreenRendering(int)\nC++: void SetOffScreenRendering(int a)\n\nCreate a window in memory instead of on the screen. This may not\nbe supported for every type of window and on some windows you may\nneed to invoke this prior to the first render.\n"},
  {(char*)"GetOffScreenRendering", PyvtkWindow_GetOffScreenRendering, 1,
   (char*)"V.GetOffScreenRendering() -> int\nC++: int GetOffScreenRendering()\n\nCreate a window in memory instead of on the screen. This may not\nbe supported for every type of window and on some windows you may\nneed to invoke this prior to the first render.\n"},
  {(char*)"OffScreenRenderingOn", PyvtkWindow_OffScreenRenderingOn, 1,
   (char*)"V.OffScreenRenderingOn()\nC++: void OffScreenRenderingOn()\n\nCreate a window in memory instead of on the screen. This may not\nbe supported for every type of window and on some windows you may\nneed to invoke this prior to the first render.\n"},
  {(char*)"OffScreenRenderingOff", PyvtkWindow_OffScreenRenderingOff, 1,
   (char*)"V.OffScreenRenderingOff()\nC++: void OffScreenRenderingOff()\n\nCreate a window in memory instead of on the screen. This may not\nbe supported for every type of window and on some windows you may\nneed to invoke this prior to the first render.\n"},
  {(char*)"MakeCurrent", PyvtkWindow_MakeCurrent, 1,
   (char*)"V.MakeCurrent()\nC++: virtual void MakeCurrent()\n\nMake the window current. May be overridden in subclasses to do\nfor example a glXMakeCurrent or a wglMakeCurrent.\n"},
  {(char*)"SetTileScale", PyvtkWindow_SetTileScale, 1,
   (char*)"V.SetTileScale(int, int)\nC++: void SetTileScale(int, int)\nV.SetTileScale((int, int))\nC++: void SetTileScale(int a[2])\nV.SetTileScale(int)\nC++: void SetTileScale(int s)\n\n"},
  {(char*)"GetTileScale", PyvtkWindow_GetTileScale, 1,
   (char*)"V.GetTileScale() -> (int, int)\nC++: int *GetTileScale()\n\n"},
  {(char*)"SetTileViewport", PyvtkWindow_SetTileViewport, 1,
   (char*)"V.SetTileViewport(float, float, float, float)\nC++: void SetTileViewport(double, double, double, double)\nV.SetTileViewport((float, float, float, float))\nC++: void SetTileViewport(double a[4])\n\n"},
  {(char*)"GetTileViewport", PyvtkWindow_GetTileViewport, 1,
   (char*)"V.GetTileViewport() -> (float, float, float, float)\nC++: double *GetTileViewport()\n\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkWindowNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkWindow_Methods,
    "vtkWindow", modulename,
    NULL, NULL,
    PyvtkWindow_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkWindow_Doc()
{
  static const char *docstring[] = {
    "vtkWindow - window superclass for vtkRenderWindow\n\n",
    "Superclass: vtkObject\n\n",
    "vtkWindow is an abstract object to specify the behavior of a\nrendering window.  It contains vtkViewports.\n\nSee Also:\n\nvtkRenderWindow vtkViewport\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkWindow(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkWindowNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkWindow", o) != 0)
    {
    Py_DECREF(o);
    }

}

