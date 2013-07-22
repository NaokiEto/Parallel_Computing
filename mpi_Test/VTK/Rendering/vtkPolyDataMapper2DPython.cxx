// python wrapper for vtkPolyDataMapper2D
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
#include "vtkPolyDataMapper2D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPolyDataMapper2D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPolyDataMapper2D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPolyDataMapper2DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPolyDataMapper2DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkMapper2DNew
extern "C" { PyObject *PyVTKClass_vtkMapper2DNew(const char *); }
#define DECLARED_PyVTKClass_vtkMapper2DNew
#endif

static const char **PyvtkPolyDataMapper2D_Doc();


static PyObject *
PyvtkPolyDataMapper2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

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
      tempr = op->vtkPolyDataMapper2D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

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
      tempr = op->vtkPolyDataMapper2D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  vtkPolyDataMapper2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPolyDataMapper2D::NewInstance();
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
PyvtkPolyDataMapper2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPolyDataMapper2D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPolyDataMapper2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkPolyDataMapper2D::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  vtkPolyData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkPolyDataMapper2D::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  vtkScalarsToColors *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
    {
    if (ap.IsBound())
      {
      op->SetLookupTable(temp0);
      }
    else
      {
      op->vtkPolyDataMapper2D::SetLookupTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  vtkScalarsToColors *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLookupTable();
      }
    else
      {
      tempr = op->vtkPolyDataMapper2D::GetLookupTable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_CreateDefaultLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultLookupTable();
      }
    else
      {
      op->vtkPolyDataMapper2D::CreateDefaultLookupTable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_SetScalarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalarVisibility(temp0);
      }
    else
      {
      op->vtkPolyDataMapper2D::SetScalarVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_GetScalarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarVisibility();
      }
    else
      {
      tempr = op->vtkPolyDataMapper2D::GetScalarVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_ScalarVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalarVisibilityOn();
      }
    else
      {
      op->vtkPolyDataMapper2D::ScalarVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_ScalarVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalarVisibilityOff();
      }
    else
      {
      op->vtkPolyDataMapper2D::ScalarVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_SetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColorMode(temp0);
      }
    else
      {
      op->vtkPolyDataMapper2D::SetColorMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_GetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColorMode();
      }
    else
      {
      tempr = op->vtkPolyDataMapper2D::GetColorMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_SetColorModeToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetColorModeToDefault();
      }
    else
      {
      op->vtkPolyDataMapper2D::SetColorModeToDefault();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_SetColorModeToMapScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToMapScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetColorModeToMapScalars();
      }
    else
      {
      op->vtkPolyDataMapper2D::SetColorModeToMapScalars();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_GetColorModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColorModeAsString();
      }
    else
      {
      tempr = op->vtkPolyDataMapper2D::GetColorModeAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_SetUseLookupTableScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseLookupTableScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseLookupTableScalarRange(temp0);
      }
    else
      {
      op->vtkPolyDataMapper2D::SetUseLookupTableScalarRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_GetUseLookupTableScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseLookupTableScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseLookupTableScalarRange();
      }
    else
      {
      tempr = op->vtkPolyDataMapper2D::GetUseLookupTableScalarRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_UseLookupTableScalarRangeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseLookupTableScalarRangeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseLookupTableScalarRangeOn();
      }
    else
      {
      op->vtkPolyDataMapper2D::UseLookupTableScalarRangeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_UseLookupTableScalarRangeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseLookupTableScalarRangeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseLookupTableScalarRangeOff();
      }
    else
      {
      op->vtkPolyDataMapper2D::UseLookupTableScalarRangeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_SetScalarRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetScalarRange(temp0, temp1);
      }
    else
      {
      op->vtkPolyDataMapper2D::SetScalarRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPolyDataMapper2D_SetScalarRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetScalarRange(temp0);
      }
    else
      {
      op->vtkPolyDataMapper2D::SetScalarRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPolyDataMapper2D_SetScalarRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkPolyDataMapper2D_SetScalarRange_s1(self, args);
    case 1:
      return PyvtkPolyDataMapper2D_SetScalarRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetScalarRange");
  return NULL;
}



static PyObject *
PyvtkPolyDataMapper2D_GetScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarRange();
      }
    else
      {
      tempr = op->vtkPolyDataMapper2D::GetScalarRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_SetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalarMode(temp0);
      }
    else
      {
      op->vtkPolyDataMapper2D::SetScalarMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_GetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarMode();
      }
    else
      {
      tempr = op->vtkPolyDataMapper2D::GetScalarMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_SetScalarModeToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToDefault();
      }
    else
      {
      op->vtkPolyDataMapper2D::SetScalarModeToDefault();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_SetScalarModeToUsePointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToUsePointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToUsePointData();
      }
    else
      {
      op->vtkPolyDataMapper2D::SetScalarModeToUsePointData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_SetScalarModeToUseCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToUseCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToUseCellData();
      }
    else
      {
      op->vtkPolyDataMapper2D::SetScalarModeToUseCellData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_SetScalarModeToUsePointFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToUsePointFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToUsePointFieldData();
      }
    else
      {
      op->vtkPolyDataMapper2D::SetScalarModeToUsePointFieldData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_SetScalarModeToUseCellFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToUseCellFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToUseCellFieldData();
      }
    else
      {
      op->vtkPolyDataMapper2D::SetScalarModeToUseCellFieldData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_ColorByArrayComponent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorByArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->ColorByArrayComponent(temp0, temp1);
      }
    else
      {
      op->vtkPolyDataMapper2D::ColorByArrayComponent(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPolyDataMapper2D_ColorByArrayComponent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorByArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->ColorByArrayComponent(temp0, temp1);
      }
    else
      {
      op->vtkPolyDataMapper2D::ColorByArrayComponent(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPolyDataMapper2D_ColorByArrayComponent_Methods[] = {
  {NULL, PyvtkPolyDataMapper2D_ColorByArrayComponent_s1, 1,
   (char*)"@ii"},
  {NULL, PyvtkPolyDataMapper2D_ColorByArrayComponent_s2, 1,
   (char*)"@zi"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPolyDataMapper2D_ColorByArrayComponent(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPolyDataMapper2D_ColorByArrayComponent_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ColorByArrayComponent");
  return NULL;
}



static PyObject *
PyvtkPolyDataMapper2D_GetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetArrayName();
      }
    else
      {
      tempr = op->vtkPolyDataMapper2D::GetArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_GetArrayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetArrayId();
      }
    else
      {
      tempr = op->vtkPolyDataMapper2D::GetArrayId();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_GetArrayAccessMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayAccessMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetArrayAccessMode();
      }
    else
      {
      tempr = op->vtkPolyDataMapper2D::GetArrayAccessMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_GetArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetArrayComponent();
      }
    else
      {
      tempr = op->vtkPolyDataMapper2D::GetArrayComponent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMTime();
      }
    else
      {
      tempr = op->vtkPolyDataMapper2D::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_SetTransformCoordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransformCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  vtkCoordinate *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCoordinate"))
    {
    if (ap.IsBound())
      {
      op->SetTransformCoordinate(temp0);
      }
    else
      {
      op->vtkPolyDataMapper2D::SetTransformCoordinate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_GetTransformCoordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  vtkCoordinate *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTransformCoordinate();
      }
    else
      {
      tempr = op->vtkPolyDataMapper2D::GetTransformCoordinate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_MapScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  double temp0;
  vtkUnsignedCharArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->MapScalars(temp0);
      }
    else
      {
      tempr = op->vtkPolyDataMapper2D::MapScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  vtkAbstractMapper *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractMapper"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkPolyDataMapper2D::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPolyDataMapper2D_Methods[] = {
  {(char*)"GetClassName", PyvtkPolyDataMapper2D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPolyDataMapper2D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPolyDataMapper2D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPolyDataMapper2D\nC++: vtkPolyDataMapper2D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPolyDataMapper2D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPolyDataMapper2D\nC++: vtkPolyDataMapper2D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetInput", PyvtkPolyDataMapper2D_SetInput, 1,
   (char*)"V.SetInput(vtkPolyData)\nC++: void SetInput(vtkPolyData *in)\n\nSet the input to the mapper.\n"},
  {(char*)"GetInput", PyvtkPolyDataMapper2D_GetInput, 1,
   (char*)"V.GetInput() -> vtkPolyData\nC++: vtkPolyData *GetInput()\n\nSet the input to the mapper.\n"},
  {(char*)"SetLookupTable", PyvtkPolyDataMapper2D_SetLookupTable, 1,
   (char*)"V.SetLookupTable(vtkScalarsToColors)\nC++: void SetLookupTable(vtkScalarsToColors *lut)\n\nSpecify a lookup table for the mapper to use.\n"},
  {(char*)"GetLookupTable", PyvtkPolyDataMapper2D_GetLookupTable, 1,
   (char*)"V.GetLookupTable() -> vtkScalarsToColors\nC++: vtkScalarsToColors *GetLookupTable()\n\nSpecify a lookup table for the mapper to use.\n"},
  {(char*)"CreateDefaultLookupTable", PyvtkPolyDataMapper2D_CreateDefaultLookupTable, 1,
   (char*)"V.CreateDefaultLookupTable()\nC++: virtual void CreateDefaultLookupTable()\n\nCreate default lookup table. Generally used to create one when\nnone is available with the scalar data.\n"},
  {(char*)"SetScalarVisibility", PyvtkPolyDataMapper2D_SetScalarVisibility, 1,
   (char*)"V.SetScalarVisibility(int)\nC++: void SetScalarVisibility(int a)\n\nTurn on/off flag to control whether scalar data is used to color\nobjects.\n"},
  {(char*)"GetScalarVisibility", PyvtkPolyDataMapper2D_GetScalarVisibility, 1,
   (char*)"V.GetScalarVisibility() -> int\nC++: int GetScalarVisibility()\n\nTurn on/off flag to control whether scalar data is used to color\nobjects.\n"},
  {(char*)"ScalarVisibilityOn", PyvtkPolyDataMapper2D_ScalarVisibilityOn, 1,
   (char*)"V.ScalarVisibilityOn()\nC++: void ScalarVisibilityOn()\n\nTurn on/off flag to control whether scalar data is used to color\nobjects.\n"},
  {(char*)"ScalarVisibilityOff", PyvtkPolyDataMapper2D_ScalarVisibilityOff, 1,
   (char*)"V.ScalarVisibilityOff()\nC++: void ScalarVisibilityOff()\n\nTurn on/off flag to control whether scalar data is used to color\nobjects.\n"},
  {(char*)"SetColorMode", PyvtkPolyDataMapper2D_SetColorMode, 1,
   (char*)"V.SetColorMode(int)\nC++: void SetColorMode(int a)\n\nControl how the scalar data is mapped to colors.  By default\n(ColorModeToDefault), unsigned char scalars are treated as\ncolors, and NOT mapped through the lookup table, while everything\nelse is. Setting ColorModeToMapScalars means that all scalar data\nwill be mapped through the lookup table.  (Note that for\nmulti-component scalars, the particular component to use for\nmapping can be specified using the ColorByArrayComponent()\nmethod.)\n"},
  {(char*)"GetColorMode", PyvtkPolyDataMapper2D_GetColorMode, 1,
   (char*)"V.GetColorMode() -> int\nC++: int GetColorMode()\n\nControl how the scalar data is mapped to colors.  By default\n(ColorModeToDefault), unsigned char scalars are treated as\ncolors, and NOT mapped through the lookup table, while everything\nelse is. Setting ColorModeToMapScalars means that all scalar data\nwill be mapped through the lookup table.  (Note that for\nmulti-component scalars, the particular component to use for\nmapping can be specified using the ColorByArrayComponent()\nmethod.)\n"},
  {(char*)"SetColorModeToDefault", PyvtkPolyDataMapper2D_SetColorModeToDefault, 1,
   (char*)"V.SetColorModeToDefault()\nC++: void SetColorModeToDefault()\n\nControl how the scalar data is mapped to colors.  By default\n(ColorModeToDefault), unsigned char scalars are treated as\ncolors, and NOT mapped through the lookup table, while everything\nelse is. Setting ColorModeToMapScalars means that all scalar data\nwill be mapped through the lookup table.  (Note that for\nmulti-component scalars, the particular component to use for\nmapping can be specified using the ColorByArrayComponent()\nmethod.)\n"},
  {(char*)"SetColorModeToMapScalars", PyvtkPolyDataMapper2D_SetColorModeToMapScalars, 1,
   (char*)"V.SetColorModeToMapScalars()\nC++: void SetColorModeToMapScalars()\n\nControl how the scalar data is mapped to colors.  By default\n(ColorModeToDefault), unsigned char scalars are treated as\ncolors, and NOT mapped through the lookup table, while everything\nelse is. Setting ColorModeToMapScalars means that all scalar data\nwill be mapped through the lookup table.  (Note that for\nmulti-component scalars, the particular component to use for\nmapping can be specified using the ColorByArrayComponent()\nmethod.)\n"},
  {(char*)"GetColorModeAsString", PyvtkPolyDataMapper2D_GetColorModeAsString, 1,
   (char*)"V.GetColorModeAsString() -> string\nC++: const char *GetColorModeAsString()\n\nReturn the method of coloring scalar data.\n"},
  {(char*)"SetUseLookupTableScalarRange", PyvtkPolyDataMapper2D_SetUseLookupTableScalarRange, 1,
   (char*)"V.SetUseLookupTableScalarRange(int)\nC++: void SetUseLookupTableScalarRange(int a)\n\nControl whether the mapper sets the lookuptable range based on\nits own ScalarRange, or whether it will use the LookupTable\nScalarRange regardless of it's own setting. By default the Mapper\nis allowed to set the LookupTable range, but users who are\nsharing LookupTables between mappers/actors will probably wish to\nforce the mapper to use the LookupTable unchanged.\n"},
  {(char*)"GetUseLookupTableScalarRange", PyvtkPolyDataMapper2D_GetUseLookupTableScalarRange, 1,
   (char*)"V.GetUseLookupTableScalarRange() -> int\nC++: int GetUseLookupTableScalarRange()\n\nControl whether the mapper sets the lookuptable range based on\nits own ScalarRange, or whether it will use the LookupTable\nScalarRange regardless of it's own setting. By default the Mapper\nis allowed to set the LookupTable range, but users who are\nsharing LookupTables between mappers/actors will probably wish to\nforce the mapper to use the LookupTable unchanged.\n"},
  {(char*)"UseLookupTableScalarRangeOn", PyvtkPolyDataMapper2D_UseLookupTableScalarRangeOn, 1,
   (char*)"V.UseLookupTableScalarRangeOn()\nC++: void UseLookupTableScalarRangeOn()\n\nControl whether the mapper sets the lookuptable range based on\nits own ScalarRange, or whether it will use the LookupTable\nScalarRange regardless of it's own setting. By default the Mapper\nis allowed to set the LookupTable range, but users who are\nsharing LookupTables between mappers/actors will probably wish to\nforce the mapper to use the LookupTable unchanged.\n"},
  {(char*)"UseLookupTableScalarRangeOff", PyvtkPolyDataMapper2D_UseLookupTableScalarRangeOff, 1,
   (char*)"V.UseLookupTableScalarRangeOff()\nC++: void UseLookupTableScalarRangeOff()\n\nControl whether the mapper sets the lookuptable range based on\nits own ScalarRange, or whether it will use the LookupTable\nScalarRange regardless of it's own setting. By default the Mapper\nis allowed to set the LookupTable range, but users who are\nsharing LookupTables between mappers/actors will probably wish to\nforce the mapper to use the LookupTable unchanged.\n"},
  {(char*)"SetScalarRange", PyvtkPolyDataMapper2D_SetScalarRange, 1,
   (char*)"V.SetScalarRange(float, float)\nC++: void SetScalarRange(double, double)\nV.SetScalarRange((float, float))\nC++: void SetScalarRange(double a[2])\n\n"},
  {(char*)"GetScalarRange", PyvtkPolyDataMapper2D_GetScalarRange, 1,
   (char*)"V.GetScalarRange() -> (float, float)\nC++: double *GetScalarRange()\n\nSpecify range in terms of scalar minimum and maximum (smin,smax).\nThese values are used to map scalars into lookup table. Has no\neffect when UseLookupTableScalarRange is true.\n"},
  {(char*)"SetScalarMode", PyvtkPolyDataMapper2D_SetScalarMode, 1,
   (char*)"V.SetScalarMode(int)\nC++: void SetScalarMode(int a)\n\nControl how the filter works with scalar point data and cell\nattribute data.  By default (ScalarModeToDefault), the filter\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the filter to\nuse point data (ScalarModeToUsePointData) or cell data\n(ScalarModeToUseCellData). You can also choose to get the scalars\nfrom an array in point field data (ScalarModeToUsePointFieldData)\nor cell field data (ScalarModeToUseCellFieldData).  If scalars\nare coming from a field data array, you must call\nColorByArrayComponent before you call GetColors.\n"},
  {(char*)"GetScalarMode", PyvtkPolyDataMapper2D_GetScalarMode, 1,
   (char*)"V.GetScalarMode() -> int\nC++: int GetScalarMode()\n\nControl how the filter works with scalar point data and cell\nattribute data.  By default (ScalarModeToDefault), the filter\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the filter to\nuse point data (ScalarModeToUsePointData) or cell data\n(ScalarModeToUseCellData). You can also choose to get the scalars\nfrom an array in point field data (ScalarModeToUsePointFieldData)\nor cell field data (ScalarModeToUseCellFieldData).  If scalars\nare coming from a field data array, you must call\nColorByArrayComponent before you call GetColors.\n"},
  {(char*)"SetScalarModeToDefault", PyvtkPolyDataMapper2D_SetScalarModeToDefault, 1,
   (char*)"V.SetScalarModeToDefault()\nC++: void SetScalarModeToDefault()\n\nControl how the filter works with scalar point data and cell\nattribute data.  By default (ScalarModeToDefault), the filter\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the filter to\nuse point data (ScalarModeToUsePointData) or cell data\n(ScalarModeToUseCellData). You can also choose to get the scalars\nfrom an array in point field data (ScalarModeToUsePointFieldData)\nor cell field data (ScalarModeToUseCellFieldData).  If scalars\nare coming from a field data array, you must call\nColorByArrayComponent before you call GetColors.\n"},
  {(char*)"SetScalarModeToUsePointData", PyvtkPolyDataMapper2D_SetScalarModeToUsePointData, 1,
   (char*)"V.SetScalarModeToUsePointData()\nC++: void SetScalarModeToUsePointData()\n\nControl how the filter works with scalar point data and cell\nattribute data.  By default (ScalarModeToDefault), the filter\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the filter to\nuse point data (ScalarModeToUsePointData) or cell data\n(ScalarModeToUseCellData). You can also choose to get the scalars\nfrom an array in point field data (ScalarModeToUsePointFieldData)\nor cell field data (ScalarModeToUseCellFieldData).  If scalars\nare coming from a field data array, you must call\nColorByArrayComponent before you call GetColors.\n"},
  {(char*)"SetScalarModeToUseCellData", PyvtkPolyDataMapper2D_SetScalarModeToUseCellData, 1,
   (char*)"V.SetScalarModeToUseCellData()\nC++: void SetScalarModeToUseCellData()\n\nControl how the filter works with scalar point data and cell\nattribute data.  By default (ScalarModeToDefault), the filter\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the filter to\nuse point data (ScalarModeToUsePointData) or cell data\n(ScalarModeToUseCellData). You can also choose to get the scalars\nfrom an array in point field data (ScalarModeToUsePointFieldData)\nor cell field data (ScalarModeToUseCellFieldData).  If scalars\nare coming from a field data array, you must call\nColorByArrayComponent before you call GetColors.\n"},
  {(char*)"SetScalarModeToUsePointFieldData", PyvtkPolyDataMapper2D_SetScalarModeToUsePointFieldData, 1,
   (char*)"V.SetScalarModeToUsePointFieldData()\nC++: void SetScalarModeToUsePointFieldData()\n\nControl how the filter works with scalar point data and cell\nattribute data.  By default (ScalarModeToDefault), the filter\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the filter to\nuse point data (ScalarModeToUsePointData) or cell data\n(ScalarModeToUseCellData). You can also choose to get the scalars\nfrom an array in point field data (ScalarModeToUsePointFieldData)\nor cell field data (ScalarModeToUseCellFieldData).  If scalars\nare coming from a field data array, you must call\nColorByArrayComponent before you call GetColors.\n"},
  {(char*)"SetScalarModeToUseCellFieldData", PyvtkPolyDataMapper2D_SetScalarModeToUseCellFieldData, 1,
   (char*)"V.SetScalarModeToUseCellFieldData()\nC++: void SetScalarModeToUseCellFieldData()\n\nControl how the filter works with scalar point data and cell\nattribute data.  By default (ScalarModeToDefault), the filter\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the filter to\nuse point data (ScalarModeToUsePointData) or cell data\n(ScalarModeToUseCellData). You can also choose to get the scalars\nfrom an array in point field data (ScalarModeToUsePointFieldData)\nor cell field data (ScalarModeToUseCellFieldData).  If scalars\nare coming from a field data array, you must call\nColorByArrayComponent before you call GetColors.\n"},
  {(char*)"ColorByArrayComponent", PyvtkPolyDataMapper2D_ColorByArrayComponent, 1,
   (char*)"V.ColorByArrayComponent(int, int)\nC++: void ColorByArrayComponent(int arrayNum, int component)\nV.ColorByArrayComponent(string, int)\nC++: void ColorByArrayComponent(char *arrayName, int component)\n\nChoose which component of which field data array to color by.\n"},
  {(char*)"GetArrayName", PyvtkPolyDataMapper2D_GetArrayName, 1,
   (char*)"V.GetArrayName() -> string\nC++: char *GetArrayName()\n\nGet the array name or number and component to color by.\n"},
  {(char*)"GetArrayId", PyvtkPolyDataMapper2D_GetArrayId, 1,
   (char*)"V.GetArrayId() -> int\nC++: int GetArrayId()\n\nGet the array name or number and component to color by.\n"},
  {(char*)"GetArrayAccessMode", PyvtkPolyDataMapper2D_GetArrayAccessMode, 1,
   (char*)"V.GetArrayAccessMode() -> int\nC++: int GetArrayAccessMode()\n\nGet the array name or number and component to color by.\n"},
  {(char*)"GetArrayComponent", PyvtkPolyDataMapper2D_GetArrayComponent, 1,
   (char*)"V.GetArrayComponent() -> int\nC++: int GetArrayComponent()\n\nGet the array name or number and component to color by.\n"},
  {(char*)"GetMTime", PyvtkPolyDataMapper2D_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long GetMTime()\n\nOverload standard modified time function. If lookup table is\nmodified, then this object is modified as well.\n"},
  {(char*)"SetTransformCoordinate", PyvtkPolyDataMapper2D_SetTransformCoordinate, 1,
   (char*)"V.SetTransformCoordinate(vtkCoordinate)\nC++: virtual void SetTransformCoordinate(vtkCoordinate *)\n\nSpecify a vtkCoordinate object to be used to transform the\nvtkPolyData point coordinates. By default (no vtkCoordinate\nspecified), the point coordinates are taken as local display\ncoordinates.\n"},
  {(char*)"GetTransformCoordinate", PyvtkPolyDataMapper2D_GetTransformCoordinate, 1,
   (char*)"V.GetTransformCoordinate() -> vtkCoordinate\nC++: vtkCoordinate *GetTransformCoordinate()\n\nSpecify a vtkCoordinate object to be used to transform the\nvtkPolyData point coordinates. By default (no vtkCoordinate\nspecified), the point coordinates are taken as local display\ncoordinates.\n"},
  {(char*)"MapScalars", PyvtkPolyDataMapper2D_MapScalars, 1,
   (char*)"V.MapScalars(float) -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *MapScalars(double alpha)\n\nMap the scalars (if there are any scalars and ScalarVisibility is\non) through the lookup table, returning an unsigned char RGBA\narray. This is typically done as part of the rendering process.\nThe alpha parameter allows the blending of the scalars with an\nadditional alpha (typically which comes from a vtkActor, etc.)\n"},
  {(char*)"ShallowCopy", PyvtkPolyDataMapper2D_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkAbstractMapper)\nC++: void ShallowCopy(vtkAbstractMapper *m)\n\nMake a shallow copy of this mapper.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPolyDataMapper2D_StaticNew()
{
  return vtkPolyDataMapper2D::New();
}

PyObject *PyVTKClass_vtkPolyDataMapper2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPolyDataMapper2D_StaticNew,
    PyvtkPolyDataMapper2D_Methods,
    "vtkPolyDataMapper2D", modulename,
    NULL, NULL,
    PyvtkPolyDataMapper2D_Doc(),
    PyVTKClass_vtkMapper2DNew(modulename));
  return cls;
}

const char **PyvtkPolyDataMapper2D_Doc()
{
  static const char *docstring[] = {
    "vtkPolyDataMapper2D - draw vtkPolyData onto the image plane\n\n",
    "Superclass: vtkMapper2D\n\n",
    "vtkPolyDataMapper2D is a mapper that renders 3D polygonal data\n(vtkPolyData) onto the 2D image plane (i.e., the renderer's\nviewport). By default, the 3D data is transformed into 2D data by\nignoring the z-coordinate of the 3D points in vtkPolyData, and taking\nthe x-y values as local display values (i.e., pixel coordinates).\nAlternatively, you can provide a vtkCoordinate object that will\ntransform t",
    "he data into local display coordinates (use the\nvtkCoordinate::SetCoordinateSystem() methods to indicate which\ncoordinate system you are transforming the data from).\n\nSee Also:\n\nvtkMapper2D vtkActor2D\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPolyDataMapper2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPolyDataMapper2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPolyDataMapper2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

