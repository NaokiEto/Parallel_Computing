// python wrapper for vtkImageViewer2
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
#include "vtkImageViewer2.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageViewer2(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageViewer2(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageViewer2New(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageViewer2New(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkImageViewer2_Doc();


static PyObject *
PyvtkImageViewer2_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

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
      tempr = op->vtkImageViewer2::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

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
      tempr = op->vtkImageViewer2::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  vtkImageViewer2 *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageViewer2::NewInstance();
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
PyvtkImageViewer2_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageViewer2 *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageViewer2::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_GetWindowName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWindowName();
      }
    else
      {
      tempr = op->vtkImageViewer2::GetWindowName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Render();
      }
    else
      {
      op->vtkImageViewer2::Render();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkImageViewer2::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  vtkImageData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkImageViewer2::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetInputConnection(temp0);
      }
    else
      {
      op->vtkImageViewer2::SetInputConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_GetSliceOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSliceOrientation();
      }
    else
      {
      tempr = op->vtkImageViewer2::GetSliceOrientation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetSliceOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSliceOrientation(temp0);
      }
    else
      {
      op->vtkImageViewer2::SetSliceOrientation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetSliceOrientationToXY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceOrientationToXY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSliceOrientationToXY();
      }
    else
      {
      op->vtkImageViewer2::SetSliceOrientationToXY();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetSliceOrientationToYZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceOrientationToYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSliceOrientationToYZ();
      }
    else
      {
      op->vtkImageViewer2::SetSliceOrientationToYZ();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetSliceOrientationToXZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceOrientationToXZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSliceOrientationToXZ();
      }
    else
      {
      op->vtkImageViewer2::SetSliceOrientationToXZ();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_GetSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSlice();
      }
    else
      {
      tempr = op->vtkImageViewer2::GetSlice();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSlice(temp0);
      }
    else
      {
      op->vtkImageViewer2::SetSlice(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_UpdateDisplayExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateDisplayExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdateDisplayExtent();
      }
    else
      {
      op->vtkImageViewer2::UpdateDisplayExtent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_GetSliceMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSliceMin();
      }
    else
      {
      tempr = op->vtkImageViewer2::GetSliceMin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_GetSliceMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSliceMax();
      }
    else
      {
      tempr = op->vtkImageViewer2::GetSliceMax();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_GetSliceRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

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
      op->GetSliceRange(temp0);
      }
    else
      {
      op->vtkImageViewer2::GetSliceRange(temp0);
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
PyvtkImageViewer2_GetSliceRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->GetSliceRange(temp0, temp1);
      }
    else
      {
      op->vtkImageViewer2::GetSliceRange(temp0, temp1);
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
PyvtkImageViewer2_GetSliceRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImageViewer2_GetSliceRange_s1(self, args);
    case 2:
      return PyvtkImageViewer2_GetSliceRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetSliceRange");
  return NULL;
}



static PyObject *
PyvtkImageViewer2_GetColorWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColorWindow();
      }
    else
      {
      tempr = op->vtkImageViewer2::GetColorWindow();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_GetColorLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColorLevel();
      }
    else
      {
      tempr = op->vtkImageViewer2::GetColorLevel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetColorWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColorWindow(temp0);
      }
    else
      {
      op->vtkImageViewer2::SetColorWindow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetColorLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColorLevel(temp0);
      }
    else
      {
      op->vtkImageViewer2::SetColorLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetDisplayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

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
      op->vtkImageViewer2::SetDisplayId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetWindowId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

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
      op->vtkImageViewer2::SetWindowId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetParentId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParentId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

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
      op->vtkImageViewer2::SetParentId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

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
      op->vtkImageViewer2::SetPosition(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageViewer2_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

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
      op->vtkImageViewer2::SetPosition(temp0);
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
PyvtkImageViewer2_SetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkImageViewer2_SetPosition_s1(self, args);
    case 1:
      return PyvtkImageViewer2_SetPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return NULL;
}



static PyObject *
PyvtkImageViewer2_SetSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

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
      op->vtkImageViewer2::SetSize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageViewer2_SetSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

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
      op->vtkImageViewer2::SetSize(temp0);
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
PyvtkImageViewer2_SetSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkImageViewer2_SetSize_s1(self, args);
    case 1:
      return PyvtkImageViewer2_SetSize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSize");
  return NULL;
}



static PyObject *
PyvtkImageViewer2_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  vtkRenderWindow *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRenderWindow();
      }
    else
      {
      tempr = op->vtkImageViewer2::GetRenderWindow();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  vtkRenderer *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRenderer();
      }
    else
      {
      tempr = op->vtkImageViewer2::GetRenderer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_GetImageActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  vtkImageActor *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetImageActor();
      }
    else
      {
      tempr = op->vtkImageViewer2::GetImageActor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_GetWindowLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  vtkImageMapToWindowLevelColors *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWindowLevel();
      }
    else
      {
      tempr = op->vtkImageViewer2::GetWindowLevel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_GetInteractorStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractorStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  vtkInteractorStyleImage *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInteractorStyle();
      }
    else
      {
      tempr = op->vtkImageViewer2::GetInteractorStyle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

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
      op->vtkImageViewer2::SetRenderWindow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->SetRenderer(temp0);
      }
    else
      {
      op->vtkImageViewer2::SetRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetupInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetupInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  vtkRenderWindowInteractor *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor"))
    {
    if (ap.IsBound())
      {
      op->SetupInteractor(temp0);
      }
    else
      {
      op->vtkImageViewer2::SetupInteractor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetOffScreenRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffScreenRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

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
      op->vtkImageViewer2::SetOffScreenRendering(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_GetOffScreenRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffScreenRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

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
      tempr = op->vtkImageViewer2::GetOffScreenRendering();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_OffScreenRenderingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OffScreenRenderingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OffScreenRenderingOn();
      }
    else
      {
      op->vtkImageViewer2::OffScreenRenderingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer2_OffScreenRenderingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OffScreenRenderingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OffScreenRenderingOff();
      }
    else
      {
      op->vtkImageViewer2::OffScreenRenderingOff();
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
PyvtkImageViewer2_GetWholeZMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeZMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWholeZMin();
      }
    else
      {
      tempr = op->vtkImageViewer2::GetWholeZMin();
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
PyvtkImageViewer2_GetWholeZMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeZMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWholeZMax();
      }
    else
      {
      tempr = op->vtkImageViewer2::GetWholeZMax();
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
PyvtkImageViewer2_GetZSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetZSlice();
      }
    else
      {
      tempr = op->vtkImageViewer2::GetZSlice();
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
PyvtkImageViewer2_SetZSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZSlice(temp0);
      }
    else
      {
      op->vtkImageViewer2::SetZSlice(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}
#endif

static PyMethodDef PyvtkImageViewer2_Methods[] = {
  {(char*)"GetClassName", PyvtkImageViewer2_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageViewer2_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageViewer2_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageViewer2\nC++: vtkImageViewer2 *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageViewer2_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageViewer2\nC++: vtkImageViewer2 *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetWindowName", PyvtkImageViewer2_GetWindowName, 1,
   (char*)"V.GetWindowName() -> string\nC++: virtual const char *GetWindowName()\n\nGet the name of rendering window.\n"},
  {(char*)"Render", PyvtkImageViewer2_Render, 1,
   (char*)"V.Render()\nC++: virtual void Render(void)\n\nRender the resulting image.\n"},
  {(char*)"SetInput", PyvtkImageViewer2_SetInput, 1,
   (char*)"V.SetInput(vtkImageData)\nC++: virtual void SetInput(vtkImageData *in)\n\nSet/Get the input image to the viewer.\n"},
  {(char*)"GetInput", PyvtkImageViewer2_GetInput, 1,
   (char*)"V.GetInput() -> vtkImageData\nC++: virtual vtkImageData *GetInput()\n\nSet/Get the input image to the viewer.\n"},
  {(char*)"SetInputConnection", PyvtkImageViewer2_SetInputConnection, 1,
   (char*)"V.SetInputConnection(vtkAlgorithmOutput)\nC++: virtual void SetInputConnection(vtkAlgorithmOutput *input)\n\nSet/Get the input image to the viewer.\n"},
  {(char*)"GetSliceOrientation", PyvtkImageViewer2_GetSliceOrientation, 1,
   (char*)"V.GetSliceOrientation() -> int\nC++: int GetSliceOrientation()\n\nSet/get the slice orientation\n"},
  {(char*)"SetSliceOrientation", PyvtkImageViewer2_SetSliceOrientation, 1,
   (char*)"V.SetSliceOrientation(int)\nC++: virtual void SetSliceOrientation(int orientation)\n\nSet/get the slice orientation\n"},
  {(char*)"SetSliceOrientationToXY", PyvtkImageViewer2_SetSliceOrientationToXY, 1,
   (char*)"V.SetSliceOrientationToXY()\nC++: virtual void SetSliceOrientationToXY()\n\nSet/get the slice orientation\n"},
  {(char*)"SetSliceOrientationToYZ", PyvtkImageViewer2_SetSliceOrientationToYZ, 1,
   (char*)"V.SetSliceOrientationToYZ()\nC++: virtual void SetSliceOrientationToYZ()\n\nSet/get the slice orientation\n"},
  {(char*)"SetSliceOrientationToXZ", PyvtkImageViewer2_SetSliceOrientationToXZ, 1,
   (char*)"V.SetSliceOrientationToXZ()\nC++: virtual void SetSliceOrientationToXZ()\n\nSet/get the slice orientation\n"},
  {(char*)"GetSlice", PyvtkImageViewer2_GetSlice, 1,
   (char*)"V.GetSlice() -> int\nC++: int GetSlice()\n\nSet/Get the current slice to display (depending on the\norientation this can be in X, Y or Z).\n"},
  {(char*)"SetSlice", PyvtkImageViewer2_SetSlice, 1,
   (char*)"V.SetSlice(int)\nC++: virtual void SetSlice(int s)\n\nSet/Get the current slice to display (depending on the\norientation this can be in X, Y or Z).\n"},
  {(char*)"UpdateDisplayExtent", PyvtkImageViewer2_UpdateDisplayExtent, 1,
   (char*)"V.UpdateDisplayExtent()\nC++: virtual void UpdateDisplayExtent()\n\nUpdate the display extent manually so that the proper slice for\nthe given orientation is displayed. It will also try to set a\nreasonable camera clipping range. This method is called\nautomatically when the Input is changed, but most of the time the\ninput of this class is likely to remain the same, i.e. connected\nto the output of a filter, or an image reader. When the input of\nthis filter or reader itself is changed, an error message might\nbe displayed since the current display extent is probably outside\nthe new whole extent. Calling this method will ensure that the\ndisplay extent is reset properly.\n"},
  {(char*)"GetSliceMin", PyvtkImageViewer2_GetSliceMin, 1,
   (char*)"V.GetSliceMin() -> int\nC++: virtual int GetSliceMin()\n\nReturn the minimum and maximum slice values (depending on the\norientation this can be in X, Y or Z).\n"},
  {(char*)"GetSliceMax", PyvtkImageViewer2_GetSliceMax, 1,
   (char*)"V.GetSliceMax() -> int\nC++: virtual int GetSliceMax()\n\nReturn the minimum and maximum slice values (depending on the\norientation this can be in X, Y or Z).\n"},
  {(char*)"GetSliceRange", PyvtkImageViewer2_GetSliceRange, 1,
   (char*)"V.GetSliceRange([int, int])\nC++: virtual void GetSliceRange(int range[2])\nV.GetSliceRange(int, int)\nC++: virtual void GetSliceRange(int &min, int &max)\n\nReturn the minimum and maximum slice values (depending on the\norientation this can be in X, Y or Z).\n"},
  {(char*)"GetColorWindow", PyvtkImageViewer2_GetColorWindow, 1,
   (char*)"V.GetColorWindow() -> float\nC++: virtual double GetColorWindow()\n\nSet window and level for mapping pixels to colors.\n"},
  {(char*)"GetColorLevel", PyvtkImageViewer2_GetColorLevel, 1,
   (char*)"V.GetColorLevel() -> float\nC++: virtual double GetColorLevel()\n\nSet window and level for mapping pixels to colors.\n"},
  {(char*)"SetColorWindow", PyvtkImageViewer2_SetColorWindow, 1,
   (char*)"V.SetColorWindow(float)\nC++: virtual void SetColorWindow(double s)\n\nSet window and level for mapping pixels to colors.\n"},
  {(char*)"SetColorLevel", PyvtkImageViewer2_SetColorLevel, 1,
   (char*)"V.SetColorLevel(float)\nC++: virtual void SetColorLevel(double s)\n\nSet window and level for mapping pixels to colors.\n"},
  {(char*)"SetDisplayId", PyvtkImageViewer2_SetDisplayId, 1,
   (char*)"V.SetDisplayId()\nC++: virtual void SetDisplayId(void *a)\n\nThese are here when using a Tk window.\n"},
  {(char*)"SetWindowId", PyvtkImageViewer2_SetWindowId, 1,
   (char*)"V.SetWindowId()\nC++: virtual void SetWindowId(void *a)\n\nThese are here when using a Tk window.\n"},
  {(char*)"SetParentId", PyvtkImageViewer2_SetParentId, 1,
   (char*)"V.SetParentId()\nC++: virtual void SetParentId(void *a)\n\nThese are here when using a Tk window.\n"},
  {(char*)"SetPosition", PyvtkImageViewer2_SetPosition, 1,
   (char*)"V.SetPosition(int, int)\nC++: virtual void SetPosition(int a, int b)\nV.SetPosition([int, int])\nC++: virtual void SetPosition(int a[2])\n\nSet/Get the position in screen coordinates of the rendering\nwindow.\n"},
  {(char*)"SetSize", PyvtkImageViewer2_SetSize, 1,
   (char*)"V.SetSize(int, int)\nC++: virtual void SetSize(int a, int b)\nV.SetSize([int, int])\nC++: virtual void SetSize(int a[2])\n\nSet/Get the size of the window in screen coordinates in pixels.\n"},
  {(char*)"GetRenderWindow", PyvtkImageViewer2_GetRenderWindow, 1,
   (char*)"V.GetRenderWindow() -> vtkRenderWindow\nC++: vtkRenderWindow *GetRenderWindow()\n\nGet the internal render window, renderer, image actor, and image\nmap instances.\n"},
  {(char*)"GetRenderer", PyvtkImageViewer2_GetRenderer, 1,
   (char*)"V.GetRenderer() -> vtkRenderer\nC++: vtkRenderer *GetRenderer()\n\nGet the internal render window, renderer, image actor, and image\nmap instances.\n"},
  {(char*)"GetImageActor", PyvtkImageViewer2_GetImageActor, 1,
   (char*)"V.GetImageActor() -> vtkImageActor\nC++: vtkImageActor *GetImageActor()\n\nGet the internal render window, renderer, image actor, and image\nmap instances.\n"},
  {(char*)"GetWindowLevel", PyvtkImageViewer2_GetWindowLevel, 1,
   (char*)"V.GetWindowLevel() -> vtkImageMapToWindowLevelColors\nC++: vtkImageMapToWindowLevelColors *GetWindowLevel()\n\nGet the internal render window, renderer, image actor, and image\nmap instances.\n"},
  {(char*)"GetInteractorStyle", PyvtkImageViewer2_GetInteractorStyle, 1,
   (char*)"V.GetInteractorStyle() -> vtkInteractorStyleImage\nC++: vtkInteractorStyleImage *GetInteractorStyle()\n\nGet the internal render window, renderer, image actor, and image\nmap instances.\n"},
  {(char*)"SetRenderWindow", PyvtkImageViewer2_SetRenderWindow, 1,
   (char*)"V.SetRenderWindow(vtkRenderWindow)\nC++: virtual void SetRenderWindow(vtkRenderWindow *arg)\n\nSet your own renderwindow and renderer\n"},
  {(char*)"SetRenderer", PyvtkImageViewer2_SetRenderer, 1,
   (char*)"V.SetRenderer(vtkRenderer)\nC++: virtual void SetRenderer(vtkRenderer *arg)\n\nSet your own renderwindow and renderer\n"},
  {(char*)"SetupInteractor", PyvtkImageViewer2_SetupInteractor, 1,
   (char*)"V.SetupInteractor(vtkRenderWindowInteractor)\nC++: virtual void SetupInteractor(vtkRenderWindowInteractor *)\n\nAttach an interactor for the internal render window.\n"},
  {(char*)"SetOffScreenRendering", PyvtkImageViewer2_SetOffScreenRendering, 1,
   (char*)"V.SetOffScreenRendering(int)\nC++: virtual void SetOffScreenRendering(int)\n\nCreate a window in memory instead of on the screen. This may not\nbe supported for every type of window and on some windows you may\nneed to invoke this prior to the first render.\n"},
  {(char*)"GetOffScreenRendering", PyvtkImageViewer2_GetOffScreenRendering, 1,
   (char*)"V.GetOffScreenRendering() -> int\nC++: virtual int GetOffScreenRendering()\n\nCreate a window in memory instead of on the screen. This may not\nbe supported for every type of window and on some windows you may\nneed to invoke this prior to the first render.\n"},
  {(char*)"OffScreenRenderingOn", PyvtkImageViewer2_OffScreenRenderingOn, 1,
   (char*)"V.OffScreenRenderingOn()\nC++: void OffScreenRenderingOn()\n\nCreate a window in memory instead of on the screen. This may not\nbe supported for every type of window and on some windows you may\nneed to invoke this prior to the first render.\n"},
  {(char*)"OffScreenRenderingOff", PyvtkImageViewer2_OffScreenRenderingOff, 1,
   (char*)"V.OffScreenRenderingOff()\nC++: void OffScreenRenderingOff()\n\nCreate a window in memory instead of on the screen. This may not\nbe supported for every type of window and on some windows you may\nneed to invoke this prior to the first render.\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"GetWholeZMin", PyvtkImageViewer2_GetWholeZMin, 1,
   (char*)"V.GetWholeZMin() -> int\nC++: int GetWholeZMin()\n\n@deprecated Replaced by vtkImageViewer2::GetSliceMin() as of VTK\n5.0.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"GetWholeZMax", PyvtkImageViewer2_GetWholeZMax, 1,
   (char*)"V.GetWholeZMax() -> int\nC++: int GetWholeZMax()\n\n@deprecated Replaced by vtkImageViewer2::GetSliceMax() as of VTK\n5.0.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"GetZSlice", PyvtkImageViewer2_GetZSlice, 1,
   (char*)"V.GetZSlice() -> int\nC++: int GetZSlice()\n\n@deprecated Replaced by vtkImageViewer2::GetSlice() as of VTK\n5.0.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"SetZSlice", PyvtkImageViewer2_SetZSlice, 1,
   (char*)"V.SetZSlice(int)\nC++: void SetZSlice(int)\n\n@deprecated Replaced by vtkImageViewer2::SetSlice() as of VTK\n5.0.\n"},
#endif
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageViewer2_StaticNew()
{
  return vtkImageViewer2::New();
}

PyObject *PyVTKClass_vtkImageViewer2New(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageViewer2_StaticNew,
    PyvtkImageViewer2_Methods,
    "vtkImageViewer2", modulename,
    NULL, NULL,
    PyvtkImageViewer2_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"SLICE_ORIENTATION_YZ", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"SLICE_ORIENTATION_XZ", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"SLICE_ORIENTATION_XY", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkImageViewer2_Doc()
{
  static const char *docstring[] = {
    "vtkImageViewer2 - Display a 2D image.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkImageViewer2 is a convenience class for displaying a 2D image.  It\npackages up the functionality found in vtkRenderWindow, vtkRenderer,\nvtkImageActor and vtkImageMapToWindowLevelColors into a single easy\nto use class.  This class also creates an image interactor style\n(vtkInteractorStyleImage) that allows zooming and panning of images,\nand supports interactive window/level operations on the ima",
    "ge. Note\nthat vtkImageViewer2 is simply a wrapper around these classes.\n\nvtkImageViewer2 uses the 3D rendering and texture mapping engine to\ndraw an image on a plane.  This allows for rapid rendering, zooming,\nand panning. The image is placed in the 3D scene at a depth based on\nthe z-coordinate of the particular image slice. Each call to\nSetSlice() changes the image data (slice) displayed AND chan",
    "ges the\ndepth of the displayed slice in the 3D scene. This can be controlled\nby the AutoAdjustCameraClippingRange ivar of the InteractorStyle\nmember.\n\nIt is possible to mix images and geometry, using the methods:\n\nviewer->SetInput( myImage ); viewer->GetRenderer()->AddActor( myActor\n);\n\nThis can be used to annotate an image with a PolyData of \"edges\" or\nor highlight sections of an image or display",
    " a 3D isosurface with a\nslice from the volume, etc. Any portions of your geometry that are in\nfront of the displayed slice will be visible; any portions of your\ngeometry that are behind the displayed slice will be obscured. A more\ngeneral framework (with respect to viewing direction) for achieving\nthis effect is provided by the vtkImagePlaneWidget .\n\nNote that pressing 'r' will reset the window/le",
    "vel and pressing\nshift+'r' or control+'r' will reset the camera.\n\nSee Also:\n\nvtkRenderWindow vtkRenderer vtkImageActor\nvtkImageMapToWindowLevelColors\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageViewer2(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageViewer2New(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageViewer2", o) != 0)
    {
    Py_DECREF(o);
    }

}

