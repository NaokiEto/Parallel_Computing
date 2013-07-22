// python wrapper for vtkGeometryFilter
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
#include "vtkGeometryFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGeometryFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGeometryFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGeometryFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGeometryFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkGeometryFilter_Doc();


static PyObject *
PyvtkGeometryFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

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
      tempr = op->vtkGeometryFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

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
      tempr = op->vtkGeometryFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  vtkGeometryFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGeometryFilter::NewInstance();
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
PyvtkGeometryFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGeometryFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGeometryFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryFilter_SetPointClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPointClipping(temp0);
      }
    else
      {
      op->vtkGeometryFilter::SetPointClipping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetPointClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointClipping();
      }
    else
      {
      tempr = op->vtkGeometryFilter::GetPointClipping();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryFilter_PointClippingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointClippingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PointClippingOn();
      }
    else
      {
      op->vtkGeometryFilter::PointClippingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryFilter_PointClippingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointClippingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PointClippingOff();
      }
    else
      {
      op->vtkGeometryFilter::PointClippingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryFilter_SetCellClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCellClipping(temp0);
      }
    else
      {
      op->vtkGeometryFilter::SetCellClipping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetCellClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellClipping();
      }
    else
      {
      tempr = op->vtkGeometryFilter::GetCellClipping();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryFilter_CellClippingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellClippingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CellClippingOn();
      }
    else
      {
      op->vtkGeometryFilter::CellClippingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryFilter_CellClippingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellClippingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CellClippingOff();
      }
    else
      {
      op->vtkGeometryFilter::CellClippingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryFilter_SetExtentClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetExtentClipping(temp0);
      }
    else
      {
      op->vtkGeometryFilter::SetExtentClipping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetExtentClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtentClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetExtentClipping();
      }
    else
      {
      tempr = op->vtkGeometryFilter::GetExtentClipping();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryFilter_ExtentClippingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtentClippingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExtentClippingOn();
      }
    else
      {
      op->vtkGeometryFilter::ExtentClippingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryFilter_ExtentClippingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtentClippingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExtentClippingOff();
      }
    else
      {
      op->vtkGeometryFilter::ExtentClippingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryFilter_SetPointMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPointMinimum(temp0);
      }
    else
      {
      op->vtkGeometryFilter::SetPointMinimum(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetPointMinimumMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMinimumMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointMinimumMinValue();
      }
    else
      {
      tempr = op->vtkGeometryFilter::GetPointMinimumMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetPointMinimumMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMinimumMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointMinimumMaxValue();
      }
    else
      {
      tempr = op->vtkGeometryFilter::GetPointMinimumMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetPointMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointMinimum();
      }
    else
      {
      tempr = op->vtkGeometryFilter::GetPointMinimum();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryFilter_SetPointMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPointMaximum(temp0);
      }
    else
      {
      op->vtkGeometryFilter::SetPointMaximum(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetPointMaximumMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMaximumMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointMaximumMinValue();
      }
    else
      {
      tempr = op->vtkGeometryFilter::GetPointMaximumMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetPointMaximumMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMaximumMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointMaximumMaxValue();
      }
    else
      {
      tempr = op->vtkGeometryFilter::GetPointMaximumMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetPointMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointMaximum();
      }
    else
      {
      tempr = op->vtkGeometryFilter::GetPointMaximum();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryFilter_SetCellMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCellMinimum(temp0);
      }
    else
      {
      op->vtkGeometryFilter::SetCellMinimum(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetCellMinimumMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMinimumMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellMinimumMinValue();
      }
    else
      {
      tempr = op->vtkGeometryFilter::GetCellMinimumMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetCellMinimumMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMinimumMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellMinimumMaxValue();
      }
    else
      {
      tempr = op->vtkGeometryFilter::GetCellMinimumMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetCellMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellMinimum();
      }
    else
      {
      tempr = op->vtkGeometryFilter::GetCellMinimum();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryFilter_SetCellMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCellMaximum(temp0);
      }
    else
      {
      op->vtkGeometryFilter::SetCellMaximum(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetCellMaximumMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMaximumMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellMaximumMinValue();
      }
    else
      {
      tempr = op->vtkGeometryFilter::GetCellMaximumMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetCellMaximumMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMaximumMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellMaximumMaxValue();
      }
    else
      {
      tempr = op->vtkGeometryFilter::GetCellMaximumMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetCellMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellMaximum();
      }
    else
      {
      tempr = op->vtkGeometryFilter::GetCellMaximum();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryFilter_SetExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
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
      op->SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkGeometryFilter::SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGeometryFilter_SetExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetExtent(temp0);
      }
    else
      {
      op->vtkGeometryFilter::SetExtent(temp0);
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
PyvtkGeometryFilter_SetExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkGeometryFilter_SetExtent_s1(self, args);
    case 1:
      return PyvtkGeometryFilter_SetExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetExtent");
  return NULL;
}



static PyObject *
PyvtkGeometryFilter_GetExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  double *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetExtent();
      }
    else
      {
      tempr = op->vtkGeometryFilter::GetExtent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryFilter_SetMerging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMerging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMerging(temp0);
      }
    else
      {
      op->vtkGeometryFilter::SetMerging(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetMerging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMerging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMerging();
      }
    else
      {
      tempr = op->vtkGeometryFilter::GetMerging();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryFilter_MergingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MergingOn();
      }
    else
      {
      op->vtkGeometryFilter::MergingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryFilter_MergingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MergingOff();
      }
    else
      {
      op->vtkGeometryFilter::MergingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryFilter_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  vtkIncrementalPointLocator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIncrementalPointLocator"))
    {
    if (ap.IsBound())
      {
      op->SetLocator(temp0);
      }
    else
      {
      op->vtkGeometryFilter::SetLocator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  vtkIncrementalPointLocator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLocator();
      }
    else
      {
      tempr = op->vtkGeometryFilter::GetLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryFilter_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultLocator();
      }
    else
      {
      op->vtkGeometryFilter::CreateDefaultLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

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
      tempr = op->vtkGeometryFilter::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGeometryFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkGeometryFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGeometryFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGeometryFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGeometryFilter\nC++: vtkGeometryFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGeometryFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGeometryFilter\nC++: vtkGeometryFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPointClipping", PyvtkGeometryFilter_SetPointClipping, 1,
   (char*)"V.SetPointClipping(int)\nC++: void SetPointClipping(int a)\n\nTurn on/off selection of geometry by point id.\n"},
  {(char*)"GetPointClipping", PyvtkGeometryFilter_GetPointClipping, 1,
   (char*)"V.GetPointClipping() -> int\nC++: int GetPointClipping()\n\nTurn on/off selection of geometry by point id.\n"},
  {(char*)"PointClippingOn", PyvtkGeometryFilter_PointClippingOn, 1,
   (char*)"V.PointClippingOn()\nC++: void PointClippingOn()\n\nTurn on/off selection of geometry by point id.\n"},
  {(char*)"PointClippingOff", PyvtkGeometryFilter_PointClippingOff, 1,
   (char*)"V.PointClippingOff()\nC++: void PointClippingOff()\n\nTurn on/off selection of geometry by point id.\n"},
  {(char*)"SetCellClipping", PyvtkGeometryFilter_SetCellClipping, 1,
   (char*)"V.SetCellClipping(int)\nC++: void SetCellClipping(int a)\n\nTurn on/off selection of geometry by cell id.\n"},
  {(char*)"GetCellClipping", PyvtkGeometryFilter_GetCellClipping, 1,
   (char*)"V.GetCellClipping() -> int\nC++: int GetCellClipping()\n\nTurn on/off selection of geometry by cell id.\n"},
  {(char*)"CellClippingOn", PyvtkGeometryFilter_CellClippingOn, 1,
   (char*)"V.CellClippingOn()\nC++: void CellClippingOn()\n\nTurn on/off selection of geometry by cell id.\n"},
  {(char*)"CellClippingOff", PyvtkGeometryFilter_CellClippingOff, 1,
   (char*)"V.CellClippingOff()\nC++: void CellClippingOff()\n\nTurn on/off selection of geometry by cell id.\n"},
  {(char*)"SetExtentClipping", PyvtkGeometryFilter_SetExtentClipping, 1,
   (char*)"V.SetExtentClipping(int)\nC++: void SetExtentClipping(int a)\n\nTurn on/off selection of geometry via bounding box.\n"},
  {(char*)"GetExtentClipping", PyvtkGeometryFilter_GetExtentClipping, 1,
   (char*)"V.GetExtentClipping() -> int\nC++: int GetExtentClipping()\n\nTurn on/off selection of geometry via bounding box.\n"},
  {(char*)"ExtentClippingOn", PyvtkGeometryFilter_ExtentClippingOn, 1,
   (char*)"V.ExtentClippingOn()\nC++: void ExtentClippingOn()\n\nTurn on/off selection of geometry via bounding box.\n"},
  {(char*)"ExtentClippingOff", PyvtkGeometryFilter_ExtentClippingOff, 1,
   (char*)"V.ExtentClippingOff()\nC++: void ExtentClippingOff()\n\nTurn on/off selection of geometry via bounding box.\n"},
  {(char*)"SetPointMinimum", PyvtkGeometryFilter_SetPointMinimum, 1,
   (char*)"V.SetPointMinimum(int)\nC++: void SetPointMinimum(vtkIdType)\n\nSpecify the minimum point id for point id selection.\n"},
  {(char*)"GetPointMinimumMinValue", PyvtkGeometryFilter_GetPointMinimumMinValue, 1,
   (char*)"V.GetPointMinimumMinValue() -> int\nC++: vtkIdType GetPointMinimumMinValue()\n\nSpecify the minimum point id for point id selection.\n"},
  {(char*)"GetPointMinimumMaxValue", PyvtkGeometryFilter_GetPointMinimumMaxValue, 1,
   (char*)"V.GetPointMinimumMaxValue() -> int\nC++: vtkIdType GetPointMinimumMaxValue()\n\nSpecify the minimum point id for point id selection.\n"},
  {(char*)"GetPointMinimum", PyvtkGeometryFilter_GetPointMinimum, 1,
   (char*)"V.GetPointMinimum() -> int\nC++: vtkIdType GetPointMinimum()\n\nSpecify the minimum point id for point id selection.\n"},
  {(char*)"SetPointMaximum", PyvtkGeometryFilter_SetPointMaximum, 1,
   (char*)"V.SetPointMaximum(int)\nC++: void SetPointMaximum(vtkIdType)\n\nSpecify the maximum point id for point id selection.\n"},
  {(char*)"GetPointMaximumMinValue", PyvtkGeometryFilter_GetPointMaximumMinValue, 1,
   (char*)"V.GetPointMaximumMinValue() -> int\nC++: vtkIdType GetPointMaximumMinValue()\n\nSpecify the maximum point id for point id selection.\n"},
  {(char*)"GetPointMaximumMaxValue", PyvtkGeometryFilter_GetPointMaximumMaxValue, 1,
   (char*)"V.GetPointMaximumMaxValue() -> int\nC++: vtkIdType GetPointMaximumMaxValue()\n\nSpecify the maximum point id for point id selection.\n"},
  {(char*)"GetPointMaximum", PyvtkGeometryFilter_GetPointMaximum, 1,
   (char*)"V.GetPointMaximum() -> int\nC++: vtkIdType GetPointMaximum()\n\nSpecify the maximum point id for point id selection.\n"},
  {(char*)"SetCellMinimum", PyvtkGeometryFilter_SetCellMinimum, 1,
   (char*)"V.SetCellMinimum(int)\nC++: void SetCellMinimum(vtkIdType)\n\nSpecify the minimum cell id for point id selection.\n"},
  {(char*)"GetCellMinimumMinValue", PyvtkGeometryFilter_GetCellMinimumMinValue, 1,
   (char*)"V.GetCellMinimumMinValue() -> int\nC++: vtkIdType GetCellMinimumMinValue()\n\nSpecify the minimum cell id for point id selection.\n"},
  {(char*)"GetCellMinimumMaxValue", PyvtkGeometryFilter_GetCellMinimumMaxValue, 1,
   (char*)"V.GetCellMinimumMaxValue() -> int\nC++: vtkIdType GetCellMinimumMaxValue()\n\nSpecify the minimum cell id for point id selection.\n"},
  {(char*)"GetCellMinimum", PyvtkGeometryFilter_GetCellMinimum, 1,
   (char*)"V.GetCellMinimum() -> int\nC++: vtkIdType GetCellMinimum()\n\nSpecify the minimum cell id for point id selection.\n"},
  {(char*)"SetCellMaximum", PyvtkGeometryFilter_SetCellMaximum, 1,
   (char*)"V.SetCellMaximum(int)\nC++: void SetCellMaximum(vtkIdType)\n\nSpecify the maximum cell id for point id selection.\n"},
  {(char*)"GetCellMaximumMinValue", PyvtkGeometryFilter_GetCellMaximumMinValue, 1,
   (char*)"V.GetCellMaximumMinValue() -> int\nC++: vtkIdType GetCellMaximumMinValue()\n\nSpecify the maximum cell id for point id selection.\n"},
  {(char*)"GetCellMaximumMaxValue", PyvtkGeometryFilter_GetCellMaximumMaxValue, 1,
   (char*)"V.GetCellMaximumMaxValue() -> int\nC++: vtkIdType GetCellMaximumMaxValue()\n\nSpecify the maximum cell id for point id selection.\n"},
  {(char*)"GetCellMaximum", PyvtkGeometryFilter_GetCellMaximum, 1,
   (char*)"V.GetCellMaximum() -> int\nC++: vtkIdType GetCellMaximum()\n\nSpecify the maximum cell id for point id selection.\n"},
  {(char*)"SetExtent", PyvtkGeometryFilter_SetExtent, 1,
   (char*)"V.SetExtent(float, float, float, float, float, float)\nC++: void SetExtent(double xMin, double xMax, double yMin,\n    double yMax, double zMin, double zMax)\nV.SetExtent([float, float, float, float, float, float])\nC++: void SetExtent(double extent[6])\n\nSpecify a (xmin,xmax, ymin,ymax, zmin,zmax) bounding box to clip\ndata.\n"},
  {(char*)"GetExtent", PyvtkGeometryFilter_GetExtent, 1,
   (char*)"V.GetExtent() -> (float, float, float, float, float, float)\nC++: double *GetExtent()\n\nSet / get a (xmin,xmax, ymin,ymax, zmin,zmax) bounding box to\nclip data.\n"},
  {(char*)"SetMerging", PyvtkGeometryFilter_SetMerging, 1,
   (char*)"V.SetMerging(int)\nC++: void SetMerging(int a)\n\nTurn on/off merging of coincident points. Note that is merging is\non, points with different point attributes (e.g., normals) are\nmerged, which may cause rendering artifacts.\n"},
  {(char*)"GetMerging", PyvtkGeometryFilter_GetMerging, 1,
   (char*)"V.GetMerging() -> int\nC++: int GetMerging()\n\nTurn on/off merging of coincident points. Note that is merging is\non, points with different point attributes (e.g., normals) are\nmerged, which may cause rendering artifacts.\n"},
  {(char*)"MergingOn", PyvtkGeometryFilter_MergingOn, 1,
   (char*)"V.MergingOn()\nC++: void MergingOn()\n\nTurn on/off merging of coincident points. Note that is merging is\non, points with different point attributes (e.g., normals) are\nmerged, which may cause rendering artifacts.\n"},
  {(char*)"MergingOff", PyvtkGeometryFilter_MergingOff, 1,
   (char*)"V.MergingOff()\nC++: void MergingOff()\n\nTurn on/off merging of coincident points. Note that is merging is\non, points with different point attributes (e.g., normals) are\nmerged, which may cause rendering artifacts.\n"},
  {(char*)"SetLocator", PyvtkGeometryFilter_SetLocator, 1,
   (char*)"V.SetLocator(vtkIncrementalPointLocator)\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSet / get a spatial locator for merging points. By default an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"GetLocator", PyvtkGeometryFilter_GetLocator, 1,
   (char*)"V.GetLocator() -> vtkIncrementalPointLocator\nC++: vtkIncrementalPointLocator *GetLocator()\n\nSet / get a spatial locator for merging points. By default an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"CreateDefaultLocator", PyvtkGeometryFilter_CreateDefaultLocator, 1,
   (char*)"V.CreateDefaultLocator()\nC++: void CreateDefaultLocator()\n\nCreate default locator. Used to create one when none is\nspecified.\n"},
  {(char*)"GetMTime", PyvtkGeometryFilter_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nReturn the MTime also considering the locator.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGeometryFilter_StaticNew()
{
  return vtkGeometryFilter::New();
}

PyObject *PyVTKClass_vtkGeometryFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGeometryFilter_StaticNew,
    PyvtkGeometryFilter_Methods,
    "vtkGeometryFilter", modulename,
    NULL, NULL,
    PyvtkGeometryFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkGeometryFilter_Doc()
{
  static const char *docstring[] = {
    "vtkGeometryFilter - extract geometry from data (or convert data to\npolygonal type)\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkGeometryFilter is a general-purpose filter to extract geometry\n(and associated data) from any type of dataset. Geometry is obtained\nas follows: all 0D, 1D, and 2D cells are extracted. All 2D faces that\nare used by only one 3D cell (i.e., boundary faces) are extracted. It\nalso is possible to specify conditions on point ids, cell ids, and on\nbounding box (referred to as \"Extent\") to control the e",
    "xtraction\nprocess.\n\nThis filter also may be used to convert any type of data to polygonal\ntype. The conversion process may be less than satisfactory for some\n3D datasets. For example, this filter will extract the outer surface\nof a volume or structured grid dataset. (For structured data you may\nwant to use vtkImageDataGeometryFilter,\nvtkStructuredGridGeometryFilter, vtkExtractUnstructuredGrid,\nvtk",
    "RectilinearGridGeometryFilter, or vtkExtractVOI.)\n\nCaveats:\n\nWhen vtkGeometryFilter extracts cells (or boundaries of cells) it\nwill (by default) merge duplicate vertices. This may cause problems\nin some cases. For example, if you've run vtkPolyDataNormals to\ngenerate normals, which may split meshes and create duplicate\nvertices, vtkGeometryFilter will merge these points back together.\nTurn merging",
    " off to prevent this from occurring.\n\nSee Also:\n\nvtkImageDataGeometryFilter vtkStructuredGridGeometryFilter\nvtkExtractGeometry vtkExtractVOI\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGeometryFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGeometryFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGeometryFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

