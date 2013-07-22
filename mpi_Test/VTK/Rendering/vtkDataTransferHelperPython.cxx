// python wrapper for vtkDataTransferHelper
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
#include "vtkDataTransferHelper.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDataTransferHelper(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDataTransferHelper(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDataTransferHelperNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDataTransferHelperNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkDataTransferHelper_Doc();


static PyObject *
PyvtkDataTransferHelper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

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
      tempr = op->vtkDataTransferHelper::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

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
      tempr = op->vtkDataTransferHelper::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  vtkDataTransferHelper *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDataTransferHelper::NewInstance();
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
PyvtkDataTransferHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDataTransferHelper *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDataTransferHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_SetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  vtkRenderWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
    {
    if (ap.IsBound())
      {
      op->SetContext(temp0);
      }
    else
      {
      op->vtkDataTransferHelper::SetContext(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_GetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  vtkRenderWindow *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetContext();
      }
    else
      {
      tempr = op->vtkDataTransferHelper::GetContext();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_SetCPUExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCPUExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetCPUExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkDataTransferHelper::SetCPUExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataTransferHelper_SetCPUExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCPUExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  int temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetCPUExtent(temp0);
      }
    else
      {
      op->vtkDataTransferHelper::SetCPUExtent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataTransferHelper_SetCPUExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkDataTransferHelper_SetCPUExtent_s1(self, args);
    case 1:
      return PyvtkDataTransferHelper_SetCPUExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCPUExtent");
  return NULL;
}



static PyObject *
PyvtkDataTransferHelper_GetCPUExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCPUExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  int *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCPUExtent();
      }
    else
      {
      tempr = op->vtkDataTransferHelper::GetCPUExtent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_SetGPUExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGPUExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetGPUExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkDataTransferHelper::SetGPUExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataTransferHelper_SetGPUExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGPUExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  int temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetGPUExtent(temp0);
      }
    else
      {
      op->vtkDataTransferHelper::SetGPUExtent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataTransferHelper_SetGPUExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkDataTransferHelper_SetGPUExtent_s1(self, args);
    case 1:
      return PyvtkDataTransferHelper_SetGPUExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetGPUExtent");
  return NULL;
}



static PyObject *
PyvtkDataTransferHelper_GetGPUExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGPUExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  int *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGPUExtent();
      }
    else
      {
      tempr = op->vtkDataTransferHelper::GetGPUExtent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_SetTextureExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetTextureExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkDataTransferHelper::SetTextureExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataTransferHelper_SetTextureExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  int temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetTextureExtent(temp0);
      }
    else
      {
      op->vtkDataTransferHelper::SetTextureExtent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataTransferHelper_SetTextureExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkDataTransferHelper_SetTextureExtent_s1(self, args);
    case 1:
      return PyvtkDataTransferHelper_SetTextureExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTextureExtent");
  return NULL;
}



static PyObject *
PyvtkDataTransferHelper_GetTextureExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  int *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextureExtent();
      }
    else
      {
      tempr = op->vtkDataTransferHelper::GetTextureExtent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_GetCPUExtentIsValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCPUExtentIsValid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCPUExtentIsValid();
      }
    else
      {
      tempr = op->vtkDataTransferHelper::GetCPUExtentIsValid();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_GetGPUExtentIsValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGPUExtentIsValid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGPUExtentIsValid();
      }
    else
      {
      tempr = op->vtkDataTransferHelper::GetGPUExtentIsValid();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_GetTextureExtentIsValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureExtentIsValid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextureExtentIsValid();
      }
    else
      {
      tempr = op->vtkDataTransferHelper::GetTextureExtentIsValid();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_SetMinTextureDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinTextureDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinTextureDimension(temp0);
      }
    else
      {
      op->vtkDataTransferHelper::SetMinTextureDimension(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_GetMinTextureDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinTextureDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinTextureDimension();
      }
    else
      {
      tempr = op->vtkDataTransferHelper::GetMinTextureDimension();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_GetArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  vtkDataArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetArray();
      }
    else
      {
      tempr = op->vtkDataTransferHelper::GetArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_SetArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  vtkDataArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
    {
    if (ap.IsBound())
      {
      op->SetArray(temp0);
      }
    else
      {
      op->vtkDataTransferHelper::SetArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_GetTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  vtkTextureObject *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTexture();
      }
    else
      {
      tempr = op->vtkDataTransferHelper::GetTexture();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_SetTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  vtkTextureObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextureObject"))
    {
    if (ap.IsBound())
      {
      op->SetTexture(temp0);
      }
    else
      {
      op->vtkDataTransferHelper::SetTexture(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_Download(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Download");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->Download();
      }
    else
      {
      tempr = op->vtkDataTransferHelper::Download();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_DownloadAsync1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DownloadAsync1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->DownloadAsync1();
      }
    else
      {
      tempr = op->vtkDataTransferHelper::DownloadAsync1();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_DownloadAsync2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DownloadAsync2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->DownloadAsync2();
      }
    else
      {
      tempr = op->vtkDataTransferHelper::DownloadAsync2();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_GetShaderSupportsTextureInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaderSupportsTextureInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShaderSupportsTextureInt();
      }
    else
      {
      tempr = op->vtkDataTransferHelper::GetShaderSupportsTextureInt();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_SetShaderSupportsTextureInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShaderSupportsTextureInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShaderSupportsTextureInt(temp0);
      }
    else
      {
      op->vtkDataTransferHelper::SetShaderSupportsTextureInt(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_IsSupported(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsSupported");

  vtkRenderWindow *temp0 = NULL;
  bool tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
    {
    tempr = vtkDataTransferHelper::IsSupported(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDataTransferHelper_Methods[] = {
  {(char*)"GetClassName", PyvtkDataTransferHelper_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataTransferHelper_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataTransferHelper_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDataTransferHelper\nC++: vtkDataTransferHelper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDataTransferHelper_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDataTransferHelper\nC++: vtkDataTransferHelper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetContext", PyvtkDataTransferHelper_SetContext, 1,
   (char*)"V.SetContext(vtkRenderWindow)\nC++: void SetContext(vtkRenderWindow *context)\n\nGet/Set the context. Context must be a vtkOpenGLRenderWindow.\nThis does not increase the reference count of the context to\navoid reference loops. SetContext() may raise an error is the\nOpenGL context does not support the required OpenGL extensions.\n"},
  {(char*)"GetContext", PyvtkDataTransferHelper_GetContext, 1,
   (char*)"V.GetContext() -> vtkRenderWindow\nC++: vtkRenderWindow *GetContext()\n\nGet/Set the context. Context must be a vtkOpenGLRenderWindow.\nThis does not increase the reference count of the context to\navoid reference loops. SetContext() may raise an error is the\nOpenGL context does not support the required OpenGL extensions.\n"},
  {(char*)"SetCPUExtent", PyvtkDataTransferHelper_SetCPUExtent, 1,
   (char*)"V.SetCPUExtent(int, int, int, int, int, int)\nC++: void SetCPUExtent(int, int, int, int, int, int)\nV.SetCPUExtent((int, int, int, int, int, int))\nC++: void SetCPUExtent(int a[6])\n\n"},
  {(char*)"GetCPUExtent", PyvtkDataTransferHelper_GetCPUExtent, 1,
   (char*)"V.GetCPUExtent() -> (int, int, int, int, int, int)\nC++: int *GetCPUExtent()\n\n"},
  {(char*)"SetGPUExtent", PyvtkDataTransferHelper_SetGPUExtent, 1,
   (char*)"V.SetGPUExtent(int, int, int, int, int, int)\nC++: void SetGPUExtent(int, int, int, int, int, int)\nV.SetGPUExtent((int, int, int, int, int, int))\nC++: void SetGPUExtent(int a[6])\n\n"},
  {(char*)"GetGPUExtent", PyvtkDataTransferHelper_GetGPUExtent, 1,
   (char*)"V.GetGPUExtent() -> (int, int, int, int, int, int)\nC++: int *GetGPUExtent()\n\n"},
  {(char*)"SetTextureExtent", PyvtkDataTransferHelper_SetTextureExtent, 1,
   (char*)"V.SetTextureExtent(int, int, int, int, int, int)\nC++: void SetTextureExtent(int, int, int, int, int, int)\nV.SetTextureExtent((int, int, int, int, int, int))\nC++: void SetTextureExtent(int a[6])\n\n"},
  {(char*)"GetTextureExtent", PyvtkDataTransferHelper_GetTextureExtent, 1,
   (char*)"V.GetTextureExtent() -> (int, int, int, int, int, int)\nC++: int *GetTextureExtent()\n\n"},
  {(char*)"GetCPUExtentIsValid", PyvtkDataTransferHelper_GetCPUExtentIsValid, 1,
   (char*)"V.GetCPUExtentIsValid() -> bool\nC++: bool GetCPUExtentIsValid()\n\nTells if CPUExtent is valid. True if min extent<=max extent.\n"},
  {(char*)"GetGPUExtentIsValid", PyvtkDataTransferHelper_GetGPUExtentIsValid, 1,
   (char*)"V.GetGPUExtentIsValid() -> bool\nC++: bool GetGPUExtentIsValid()\n\nTells if GPUExtent is valid. True if min extent<=max extent.\n"},
  {(char*)"GetTextureExtentIsValid", PyvtkDataTransferHelper_GetTextureExtentIsValid, 1,
   (char*)"V.GetTextureExtentIsValid() -> bool\nC++: bool GetTextureExtentIsValid()\n\nTells if TextureExtent is valid. True if min extent<=max extent.\n"},
  {(char*)"SetMinTextureDimension", PyvtkDataTransferHelper_SetMinTextureDimension, 1,
   (char*)"V.SetMinTextureDimension(int)\nC++: void SetMinTextureDimension(int a)\n\nDefine the minimal dimension of the texture regardless of the\ndimensions of the TextureExtent. Initial value is 1. A texture\nextent can have a given dimension 0D (one value), 1D, 2D or 3D.\nBy default 0D and 1D are translated into a 1D texture, 2D is\ntranslated into a 2D texture, 3D is translated into a 3D texture.\nTo make life easier when writting GLSL code and use only one type\nof sampler (ex: sampler2d), the default behavior can be changed\nby forcing a type of texture with this ivar. 1: default behavior.\nInitial value. 2: force 0D and 1D to be in a 2D texture 3: force\n0D, 1D and 2D texture to be in a 3D texture.\n"},
  {(char*)"GetMinTextureDimension", PyvtkDataTransferHelper_GetMinTextureDimension, 1,
   (char*)"V.GetMinTextureDimension() -> int\nC++: int GetMinTextureDimension()\n\nDefine the minimal dimension of the texture regardless of the\ndimensions of the TextureExtent. Initial value is 1. A texture\nextent can have a given dimension 0D (one value), 1D, 2D or 3D.\nBy default 0D and 1D are translated into a 1D texture, 2D is\ntranslated into a 2D texture, 3D is translated into a 3D texture.\nTo make life easier when writting GLSL code and use only one type\nof sampler (ex: sampler2d), the default behavior can be changed\nby forcing a type of texture with this ivar. 1: default behavior.\nInitial value. 2: force 0D and 1D to be in a 2D texture 3: force\n0D, 1D and 2D texture to be in a 3D texture.\n"},
  {(char*)"GetArray", PyvtkDataTransferHelper_GetArray, 1,
   (char*)"V.GetArray() -> vtkDataArray\nC++: vtkDataArray *GetArray()\n\nGet/Set the CPU data buffer. Initial value is 0.\n"},
  {(char*)"SetArray", PyvtkDataTransferHelper_SetArray, 1,
   (char*)"V.SetArray(vtkDataArray)\nC++: void SetArray(vtkDataArray *array)\n\nGet/Set the CPU data buffer. Initial value is 0.\n"},
  {(char*)"GetTexture", PyvtkDataTransferHelper_GetTexture, 1,
   (char*)"V.GetTexture() -> vtkTextureObject\nC++: vtkTextureObject *GetTexture()\n\nGet/Set the GPU data buffer. Initial value is 0.\n"},
  {(char*)"SetTexture", PyvtkDataTransferHelper_SetTexture, 1,
   (char*)"V.SetTexture(vtkTextureObject)\nC++: void SetTexture(vtkTextureObject *texture)\n\nGet/Set the GPU data buffer. Initial value is 0.\n"},
  {(char*)"Download", PyvtkDataTransferHelper_Download, 1,
   (char*)"V.Download() -> bool\nC++: bool Download()\n\nold comment: Download Extent from GPU data buffer to CPU. GPU\ndata size must exactly match Extent. CPU data buffer will be\nresized to match WholeExtent in which only the Extent will be\nfilled with the GPU data. new comment: Download GPUExtent from\nGPU texture to CPU vtkDataArray. If Array is not provided, it\nwill be created with the size of CPUExtent. But only the tuples\ncovered by GPUExtent will be download. In this case, if GPUExtent\ndoes not cover all GPUExtent, some of the vtkDataArray will be\nuninitialized. Reminder: A=>B <=> !A||B\n\\pre texture_exists: texture!=0\n\\pre array_not_empty: array==0 || array->GetNumberOfTuples()>0\n\\pre valid_cpu_extent: this->GetCPUExtentIsValid()\n\\pre valid_cpu_extent_size: array==0 ||\n    (CPUExtent[1]-CPUExtent[0]+1)*(CPUExtent[3]-CPUExtent[2]+1)*(C\n    PUExtent[5]-CPUExtent[4]+1)==array->GetNumberOfTuples()\n\\pre valid_gpu_extent: this->GetGPUExtentIsValid()\n\\pre gpu_extent_in_cpu_extent: CPUExtent[0]<=GPUExtent[0] &&\n    GPUExtent[1]<=CPUExtent[1] && CPUExtent[2]<=GPUExtent[2] &&\n    GPUExtent[3]<=CPUExtent[3] && CPUExtent[4]<=GPUExtent[4] &&\n    GPUExtent[5]<=CPUExtent[5]\n\\pre gpu_texture_size: !this->GetTextureExtentIsValid() ||\n    (GPUExtent[1]-GPUExtent[0]+1)*(GPUExtent[3]-GPUExtent[2]+1)*(G\n    PUExtent[5]-GPUExtent[4]+1)==(TextureExtent[1]-TextureExtent[0\n    ]+1)*(TextureExtent[3]-TextureExtent[2]+1)*(TextureExtent[5]-T\n    extureExtent[4]+1)\n\\pre valid_components: array==0 ||\n    array->GetNumberOfComponents()<=4\n\\pre components_match: array==0 ||\n    (texture->GetComponents()==array->GetNumberOfComponents())\n"},
  {(char*)"DownloadAsync1", PyvtkDataTransferHelper_DownloadAsync1, 1,
   (char*)"V.DownloadAsync1() -> bool\nC++: bool DownloadAsync1()\n\nSplits the download in two operations\n* Asynchronously download from texture memory to PBO\n  (DownloadAsync1()).\n* Copy from pbo to user array (DownloadAsync2()).\n"},
  {(char*)"DownloadAsync2", PyvtkDataTransferHelper_DownloadAsync2, 1,
   (char*)"V.DownloadAsync2() -> bool\nC++: bool DownloadAsync2()\n\nSplits the download in two operations\n* Asynchronously download from texture memory to PBO\n  (DownloadAsync1()).\n* Copy from pbo to user array (DownloadAsync2()).\n"},
  {(char*)"GetShaderSupportsTextureInt", PyvtkDataTransferHelper_GetShaderSupportsTextureInt, 1,
   (char*)"V.GetShaderSupportsTextureInt() -> bool\nC++: bool GetShaderSupportsTextureInt()\n\n"},
  {(char*)"SetShaderSupportsTextureInt", PyvtkDataTransferHelper_SetShaderSupportsTextureInt, 1,
   (char*)"V.SetShaderSupportsTextureInt(bool)\nC++: void SetShaderSupportsTextureInt(bool value)\n\n"},
  {(char*)"IsSupported", PyvtkDataTransferHelper_IsSupported, 1,
   (char*)"V.IsSupported(vtkRenderWindow) -> bool\nC++: static bool IsSupported(vtkRenderWindow *renWin)\n\nReturns if the context supports the required extensions.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDataTransferHelper_StaticNew()
{
  return vtkDataTransferHelper::New();
}

PyObject *PyVTKClass_vtkDataTransferHelperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDataTransferHelper_StaticNew,
    PyvtkDataTransferHelper_Methods,
    "vtkDataTransferHelper", modulename,
    NULL, NULL,
    PyvtkDataTransferHelper_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkDataTransferHelper_Doc()
{
  static const char *docstring[] = {
    "vtkDataTransferHelper - is a helper class that aids in transferring\n\n",
    "Superclass: vtkObject\n\n",
    "vtkDataTransferHelper is a helper class that aids in transferring\ndata\n between the CPU memory and the GPU memory. The data in GPU memory is\n stored as textures which that in CPU memory is stored as\nvtkDataArray.\n vtkDataTransferHelper provides API to transfer only a sub-extent of\nCPU\n structured data to/from the GPU.\n\nSee Also:\n\n\n vtkPixelBufferObject vtkTextureObject vtkOpenGLExtensionManager\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataTransferHelper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataTransferHelperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataTransferHelper", o) != 0)
    {
    Py_DECREF(o);
    }

}

