// python wrapper for vtkUnstructuredGridGeometryFilter
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
#include "vtkUnstructuredGridGeometryFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkUnstructuredGridGeometryFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkUnstructuredGridGeometryFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkUnstructuredGridGeometryFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridGeometryFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkUnstructuredGridGeometryFilter_Doc();


static PyObject *
PyvtkUnstructuredGridGeometryFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

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
      tempr = op->vtkUnstructuredGridGeometryFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

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
      tempr = op->vtkUnstructuredGridGeometryFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  vtkUnstructuredGridGeometryFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkUnstructuredGridGeometryFilter::NewInstance();
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
PyvtkUnstructuredGridGeometryFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkUnstructuredGridGeometryFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkUnstructuredGridGeometryFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_SetPointClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

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
      op->vtkUnstructuredGridGeometryFilter::SetPointClipping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_GetPointClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

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
      tempr = op->vtkUnstructuredGridGeometryFilter::GetPointClipping();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_PointClippingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointClippingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PointClippingOn();
      }
    else
      {
      op->vtkUnstructuredGridGeometryFilter::PointClippingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_PointClippingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointClippingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PointClippingOff();
      }
    else
      {
      op->vtkUnstructuredGridGeometryFilter::PointClippingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_SetCellClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

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
      op->vtkUnstructuredGridGeometryFilter::SetCellClipping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_GetCellClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

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
      tempr = op->vtkUnstructuredGridGeometryFilter::GetCellClipping();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_CellClippingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellClippingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CellClippingOn();
      }
    else
      {
      op->vtkUnstructuredGridGeometryFilter::CellClippingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_CellClippingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellClippingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CellClippingOff();
      }
    else
      {
      op->vtkUnstructuredGridGeometryFilter::CellClippingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_SetExtentClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

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
      op->vtkUnstructuredGridGeometryFilter::SetExtentClipping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_GetExtentClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtentClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

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
      tempr = op->vtkUnstructuredGridGeometryFilter::GetExtentClipping();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_ExtentClippingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtentClippingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExtentClippingOn();
      }
    else
      {
      op->vtkUnstructuredGridGeometryFilter::ExtentClippingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_ExtentClippingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtentClippingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExtentClippingOff();
      }
    else
      {
      op->vtkUnstructuredGridGeometryFilter::ExtentClippingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_SetPointMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

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
      op->vtkUnstructuredGridGeometryFilter::SetPointMinimum(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_GetPointMinimumMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMinimumMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

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
      tempr = op->vtkUnstructuredGridGeometryFilter::GetPointMinimumMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_GetPointMinimumMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMinimumMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

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
      tempr = op->vtkUnstructuredGridGeometryFilter::GetPointMinimumMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_GetPointMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

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
      tempr = op->vtkUnstructuredGridGeometryFilter::GetPointMinimum();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_SetPointMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

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
      op->vtkUnstructuredGridGeometryFilter::SetPointMaximum(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_GetPointMaximumMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMaximumMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

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
      tempr = op->vtkUnstructuredGridGeometryFilter::GetPointMaximumMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_GetPointMaximumMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMaximumMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

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
      tempr = op->vtkUnstructuredGridGeometryFilter::GetPointMaximumMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_GetPointMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

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
      tempr = op->vtkUnstructuredGridGeometryFilter::GetPointMaximum();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_SetCellMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

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
      op->vtkUnstructuredGridGeometryFilter::SetCellMinimum(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_GetCellMinimumMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMinimumMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

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
      tempr = op->vtkUnstructuredGridGeometryFilter::GetCellMinimumMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_GetCellMinimumMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMinimumMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

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
      tempr = op->vtkUnstructuredGridGeometryFilter::GetCellMinimumMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_GetCellMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

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
      tempr = op->vtkUnstructuredGridGeometryFilter::GetCellMinimum();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_SetCellMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

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
      op->vtkUnstructuredGridGeometryFilter::SetCellMaximum(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_GetCellMaximumMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMaximumMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

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
      tempr = op->vtkUnstructuredGridGeometryFilter::GetCellMaximumMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_GetCellMaximumMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMaximumMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

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
      tempr = op->vtkUnstructuredGridGeometryFilter::GetCellMaximumMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_GetCellMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

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
      tempr = op->vtkUnstructuredGridGeometryFilter::GetCellMaximum();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_SetExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

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
      op->vtkUnstructuredGridGeometryFilter::SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkUnstructuredGridGeometryFilter_SetExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

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
      op->vtkUnstructuredGridGeometryFilter::SetExtent(temp0);
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
PyvtkUnstructuredGridGeometryFilter_SetExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkUnstructuredGridGeometryFilter_SetExtent_s1(self, args);
    case 1:
      return PyvtkUnstructuredGridGeometryFilter_SetExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetExtent");
  return NULL;
}



static PyObject *
PyvtkUnstructuredGridGeometryFilter_SetMerging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMerging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

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
      op->vtkUnstructuredGridGeometryFilter::SetMerging(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_GetMerging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMerging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

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
      tempr = op->vtkUnstructuredGridGeometryFilter::GetMerging();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_MergingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MergingOn();
      }
    else
      {
      op->vtkUnstructuredGridGeometryFilter::MergingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_MergingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MergingOff();
      }
    else
      {
      op->vtkUnstructuredGridGeometryFilter::MergingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_SetPassThroughCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassThroughCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPassThroughCellIds(temp0);
      }
    else
      {
      op->vtkUnstructuredGridGeometryFilter::SetPassThroughCellIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_GetPassThroughCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassThroughCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPassThroughCellIds();
      }
    else
      {
      tempr = op->vtkUnstructuredGridGeometryFilter::GetPassThroughCellIds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_PassThroughCellIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughCellIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassThroughCellIdsOn();
      }
    else
      {
      op->vtkUnstructuredGridGeometryFilter::PassThroughCellIdsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_PassThroughCellIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughCellIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassThroughCellIdsOff();
      }
    else
      {
      op->vtkUnstructuredGridGeometryFilter::PassThroughCellIdsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_SetPassThroughPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassThroughPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPassThroughPointIds(temp0);
      }
    else
      {
      op->vtkUnstructuredGridGeometryFilter::SetPassThroughPointIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_GetPassThroughPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassThroughPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPassThroughPointIds();
      }
    else
      {
      tempr = op->vtkUnstructuredGridGeometryFilter::GetPassThroughPointIds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_PassThroughPointIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughPointIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassThroughPointIdsOn();
      }
    else
      {
      op->vtkUnstructuredGridGeometryFilter::PassThroughPointIdsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_PassThroughPointIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughPointIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassThroughPointIdsOff();
      }
    else
      {
      op->vtkUnstructuredGridGeometryFilter::PassThroughPointIdsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_SetOriginalCellIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginalCellIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOriginalCellIdsName(temp0);
      }
    else
      {
      op->vtkUnstructuredGridGeometryFilter::SetOriginalCellIdsName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_GetOriginalCellIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginalCellIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOriginalCellIdsName();
      }
    else
      {
      tempr = op->vtkUnstructuredGridGeometryFilter::GetOriginalCellIdsName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_SetOriginalPointIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginalPointIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOriginalPointIdsName(temp0);
      }
    else
      {
      op->vtkUnstructuredGridGeometryFilter::SetOriginalPointIdsName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_GetOriginalPointIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginalPointIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOriginalPointIdsName();
      }
    else
      {
      tempr = op->vtkUnstructuredGridGeometryFilter::GetOriginalPointIdsName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

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
      op->vtkUnstructuredGridGeometryFilter::SetLocator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

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
      tempr = op->vtkUnstructuredGridGeometryFilter::GetLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultLocator();
      }
    else
      {
      op->vtkUnstructuredGridGeometryFilter::CreateDefaultLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

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
      tempr = op->vtkUnstructuredGridGeometryFilter::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkUnstructuredGridGeometryFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkUnstructuredGridGeometryFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkUnstructuredGridGeometryFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkUnstructuredGridGeometryFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkUnstructuredGridGeometryFilter\nC++: vtkUnstructuredGridGeometryFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkUnstructuredGridGeometryFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkUnstructuredGridGeometryFilter\nC++: vtkUnstructuredGridGeometryFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPointClipping", PyvtkUnstructuredGridGeometryFilter_SetPointClipping, 1,
   (char*)"V.SetPointClipping(int)\nC++: void SetPointClipping(int a)\n\nTurn on/off selection of geometry by point id.\n"},
  {(char*)"GetPointClipping", PyvtkUnstructuredGridGeometryFilter_GetPointClipping, 1,
   (char*)"V.GetPointClipping() -> int\nC++: int GetPointClipping()\n\nTurn on/off selection of geometry by point id.\n"},
  {(char*)"PointClippingOn", PyvtkUnstructuredGridGeometryFilter_PointClippingOn, 1,
   (char*)"V.PointClippingOn()\nC++: void PointClippingOn()\n\nTurn on/off selection of geometry by point id.\n"},
  {(char*)"PointClippingOff", PyvtkUnstructuredGridGeometryFilter_PointClippingOff, 1,
   (char*)"V.PointClippingOff()\nC++: void PointClippingOff()\n\nTurn on/off selection of geometry by point id.\n"},
  {(char*)"SetCellClipping", PyvtkUnstructuredGridGeometryFilter_SetCellClipping, 1,
   (char*)"V.SetCellClipping(int)\nC++: void SetCellClipping(int a)\n\nTurn on/off selection of geometry by cell id.\n"},
  {(char*)"GetCellClipping", PyvtkUnstructuredGridGeometryFilter_GetCellClipping, 1,
   (char*)"V.GetCellClipping() -> int\nC++: int GetCellClipping()\n\nTurn on/off selection of geometry by cell id.\n"},
  {(char*)"CellClippingOn", PyvtkUnstructuredGridGeometryFilter_CellClippingOn, 1,
   (char*)"V.CellClippingOn()\nC++: void CellClippingOn()\n\nTurn on/off selection of geometry by cell id.\n"},
  {(char*)"CellClippingOff", PyvtkUnstructuredGridGeometryFilter_CellClippingOff, 1,
   (char*)"V.CellClippingOff()\nC++: void CellClippingOff()\n\nTurn on/off selection of geometry by cell id.\n"},
  {(char*)"SetExtentClipping", PyvtkUnstructuredGridGeometryFilter_SetExtentClipping, 1,
   (char*)"V.SetExtentClipping(int)\nC++: void SetExtentClipping(int a)\n\nTurn on/off selection of geometry via bounding box.\n"},
  {(char*)"GetExtentClipping", PyvtkUnstructuredGridGeometryFilter_GetExtentClipping, 1,
   (char*)"V.GetExtentClipping() -> int\nC++: int GetExtentClipping()\n\nTurn on/off selection of geometry via bounding box.\n"},
  {(char*)"ExtentClippingOn", PyvtkUnstructuredGridGeometryFilter_ExtentClippingOn, 1,
   (char*)"V.ExtentClippingOn()\nC++: void ExtentClippingOn()\n\nTurn on/off selection of geometry via bounding box.\n"},
  {(char*)"ExtentClippingOff", PyvtkUnstructuredGridGeometryFilter_ExtentClippingOff, 1,
   (char*)"V.ExtentClippingOff()\nC++: void ExtentClippingOff()\n\nTurn on/off selection of geometry via bounding box.\n"},
  {(char*)"SetPointMinimum", PyvtkUnstructuredGridGeometryFilter_SetPointMinimum, 1,
   (char*)"V.SetPointMinimum(int)\nC++: void SetPointMinimum(vtkIdType)\n\nSpecify the minimum point id for point id selection.\n"},
  {(char*)"GetPointMinimumMinValue", PyvtkUnstructuredGridGeometryFilter_GetPointMinimumMinValue, 1,
   (char*)"V.GetPointMinimumMinValue() -> int\nC++: vtkIdType GetPointMinimumMinValue()\n\nSpecify the minimum point id for point id selection.\n"},
  {(char*)"GetPointMinimumMaxValue", PyvtkUnstructuredGridGeometryFilter_GetPointMinimumMaxValue, 1,
   (char*)"V.GetPointMinimumMaxValue() -> int\nC++: vtkIdType GetPointMinimumMaxValue()\n\nSpecify the minimum point id for point id selection.\n"},
  {(char*)"GetPointMinimum", PyvtkUnstructuredGridGeometryFilter_GetPointMinimum, 1,
   (char*)"V.GetPointMinimum() -> int\nC++: vtkIdType GetPointMinimum()\n\nSpecify the minimum point id for point id selection.\n"},
  {(char*)"SetPointMaximum", PyvtkUnstructuredGridGeometryFilter_SetPointMaximum, 1,
   (char*)"V.SetPointMaximum(int)\nC++: void SetPointMaximum(vtkIdType)\n\nSpecify the maximum point id for point id selection.\n"},
  {(char*)"GetPointMaximumMinValue", PyvtkUnstructuredGridGeometryFilter_GetPointMaximumMinValue, 1,
   (char*)"V.GetPointMaximumMinValue() -> int\nC++: vtkIdType GetPointMaximumMinValue()\n\nSpecify the maximum point id for point id selection.\n"},
  {(char*)"GetPointMaximumMaxValue", PyvtkUnstructuredGridGeometryFilter_GetPointMaximumMaxValue, 1,
   (char*)"V.GetPointMaximumMaxValue() -> int\nC++: vtkIdType GetPointMaximumMaxValue()\n\nSpecify the maximum point id for point id selection.\n"},
  {(char*)"GetPointMaximum", PyvtkUnstructuredGridGeometryFilter_GetPointMaximum, 1,
   (char*)"V.GetPointMaximum() -> int\nC++: vtkIdType GetPointMaximum()\n\nSpecify the maximum point id for point id selection.\n"},
  {(char*)"SetCellMinimum", PyvtkUnstructuredGridGeometryFilter_SetCellMinimum, 1,
   (char*)"V.SetCellMinimum(int)\nC++: void SetCellMinimum(vtkIdType)\n\nSpecify the minimum cell id for point id selection.\n"},
  {(char*)"GetCellMinimumMinValue", PyvtkUnstructuredGridGeometryFilter_GetCellMinimumMinValue, 1,
   (char*)"V.GetCellMinimumMinValue() -> int\nC++: vtkIdType GetCellMinimumMinValue()\n\nSpecify the minimum cell id for point id selection.\n"},
  {(char*)"GetCellMinimumMaxValue", PyvtkUnstructuredGridGeometryFilter_GetCellMinimumMaxValue, 1,
   (char*)"V.GetCellMinimumMaxValue() -> int\nC++: vtkIdType GetCellMinimumMaxValue()\n\nSpecify the minimum cell id for point id selection.\n"},
  {(char*)"GetCellMinimum", PyvtkUnstructuredGridGeometryFilter_GetCellMinimum, 1,
   (char*)"V.GetCellMinimum() -> int\nC++: vtkIdType GetCellMinimum()\n\nSpecify the minimum cell id for point id selection.\n"},
  {(char*)"SetCellMaximum", PyvtkUnstructuredGridGeometryFilter_SetCellMaximum, 1,
   (char*)"V.SetCellMaximum(int)\nC++: void SetCellMaximum(vtkIdType)\n\nSpecify the maximum cell id for point id selection.\n"},
  {(char*)"GetCellMaximumMinValue", PyvtkUnstructuredGridGeometryFilter_GetCellMaximumMinValue, 1,
   (char*)"V.GetCellMaximumMinValue() -> int\nC++: vtkIdType GetCellMaximumMinValue()\n\nSpecify the maximum cell id for point id selection.\n"},
  {(char*)"GetCellMaximumMaxValue", PyvtkUnstructuredGridGeometryFilter_GetCellMaximumMaxValue, 1,
   (char*)"V.GetCellMaximumMaxValue() -> int\nC++: vtkIdType GetCellMaximumMaxValue()\n\nSpecify the maximum cell id for point id selection.\n"},
  {(char*)"GetCellMaximum", PyvtkUnstructuredGridGeometryFilter_GetCellMaximum, 1,
   (char*)"V.GetCellMaximum() -> int\nC++: vtkIdType GetCellMaximum()\n\nSpecify the maximum cell id for point id selection.\n"},
  {(char*)"SetExtent", PyvtkUnstructuredGridGeometryFilter_SetExtent, 1,
   (char*)"V.SetExtent(float, float, float, float, float, float)\nC++: void SetExtent(double xMin, double xMax, double yMin,\n    double yMax, double zMin, double zMax)\nV.SetExtent([float, float, float, float, float, float])\nC++: void SetExtent(double extent[6])\n\nSpecify a (xmin,xmax, ymin,ymax, zmin,zmax) bounding box to clip\ndata.\n"},
  {(char*)"SetMerging", PyvtkUnstructuredGridGeometryFilter_SetMerging, 1,
   (char*)"V.SetMerging(int)\nC++: void SetMerging(int a)\n\nTurn on/off merging of coincident points. Note that is merging is\non, points with different point attributes (e.g., normals) are\nmerged, which may cause rendering artifacts.\n"},
  {(char*)"GetMerging", PyvtkUnstructuredGridGeometryFilter_GetMerging, 1,
   (char*)"V.GetMerging() -> int\nC++: int GetMerging()\n\nTurn on/off merging of coincident points. Note that is merging is\non, points with different point attributes (e.g., normals) are\nmerged, which may cause rendering artifacts.\n"},
  {(char*)"MergingOn", PyvtkUnstructuredGridGeometryFilter_MergingOn, 1,
   (char*)"V.MergingOn()\nC++: void MergingOn()\n\nTurn on/off merging of coincident points. Note that is merging is\non, points with different point attributes (e.g., normals) are\nmerged, which may cause rendering artifacts.\n"},
  {(char*)"MergingOff", PyvtkUnstructuredGridGeometryFilter_MergingOff, 1,
   (char*)"V.MergingOff()\nC++: void MergingOff()\n\nTurn on/off merging of coincident points. Note that is merging is\non, points with different point attributes (e.g., normals) are\nmerged, which may cause rendering artifacts.\n"},
  {(char*)"SetPassThroughCellIds", PyvtkUnstructuredGridGeometryFilter_SetPassThroughCellIds, 1,
   (char*)"V.SetPassThroughCellIds(int)\nC++: void SetPassThroughCellIds(int a)\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for cell picking. The default is\noff to conserve memory. Note that PassThroughCellIds will be\nignored if UseStrips is on, since in that case each tringle strip\ncan represent more than on of the input cells.\n"},
  {(char*)"GetPassThroughCellIds", PyvtkUnstructuredGridGeometryFilter_GetPassThroughCellIds, 1,
   (char*)"V.GetPassThroughCellIds() -> int\nC++: int GetPassThroughCellIds()\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for cell picking. The default is\noff to conserve memory. Note that PassThroughCellIds will be\nignored if UseStrips is on, since in that case each tringle strip\ncan represent more than on of the input cells.\n"},
  {(char*)"PassThroughCellIdsOn", PyvtkUnstructuredGridGeometryFilter_PassThroughCellIdsOn, 1,
   (char*)"V.PassThroughCellIdsOn()\nC++: void PassThroughCellIdsOn()\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for cell picking. The default is\noff to conserve memory. Note that PassThroughCellIds will be\nignored if UseStrips is on, since in that case each tringle strip\ncan represent more than on of the input cells.\n"},
  {(char*)"PassThroughCellIdsOff", PyvtkUnstructuredGridGeometryFilter_PassThroughCellIdsOff, 1,
   (char*)"V.PassThroughCellIdsOff()\nC++: void PassThroughCellIdsOff()\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for cell picking. The default is\noff to conserve memory. Note that PassThroughCellIds will be\nignored if UseStrips is on, since in that case each tringle strip\ncan represent more than on of the input cells.\n"},
  {(char*)"SetPassThroughPointIds", PyvtkUnstructuredGridGeometryFilter_SetPassThroughPointIds, 1,
   (char*)"V.SetPassThroughPointIds(int)\nC++: void SetPassThroughPointIds(int a)\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for cell picking. The default is\noff to conserve memory. Note that PassThroughCellIds will be\nignored if UseStrips is on, since in that case each tringle strip\ncan represent more than on of the input cells.\n"},
  {(char*)"GetPassThroughPointIds", PyvtkUnstructuredGridGeometryFilter_GetPassThroughPointIds, 1,
   (char*)"V.GetPassThroughPointIds() -> int\nC++: int GetPassThroughPointIds()\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for cell picking. The default is\noff to conserve memory. Note that PassThroughCellIds will be\nignored if UseStrips is on, since in that case each tringle strip\ncan represent more than on of the input cells.\n"},
  {(char*)"PassThroughPointIdsOn", PyvtkUnstructuredGridGeometryFilter_PassThroughPointIdsOn, 1,
   (char*)"V.PassThroughPointIdsOn()\nC++: void PassThroughPointIdsOn()\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for cell picking. The default is\noff to conserve memory. Note that PassThroughCellIds will be\nignored if UseStrips is on, since in that case each tringle strip\ncan represent more than on of the input cells.\n"},
  {(char*)"PassThroughPointIdsOff", PyvtkUnstructuredGridGeometryFilter_PassThroughPointIdsOff, 1,
   (char*)"V.PassThroughPointIdsOff()\nC++: void PassThroughPointIdsOff()\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for cell picking. The default is\noff to conserve memory. Note that PassThroughCellIds will be\nignored if UseStrips is on, since in that case each tringle strip\ncan represent more than on of the input cells.\n"},
  {(char*)"SetOriginalCellIdsName", PyvtkUnstructuredGridGeometryFilter_SetOriginalCellIdsName, 1,
   (char*)"V.SetOriginalCellIdsName(string)\nC++: void SetOriginalCellIdsName(char *)\n\nIf PassThroughCellIds or PassThroughPointIds is on, then these\nivars control the name given to the field in which the ids are\nwritten into.  If set to NULL, then vtkOriginalCellIds or\nvtkOriginalPointIds (the default) is used, respectively.\n"},
  {(char*)"GetOriginalCellIdsName", PyvtkUnstructuredGridGeometryFilter_GetOriginalCellIdsName, 1,
   (char*)"V.GetOriginalCellIdsName() -> string\nC++: virtual const char *GetOriginalCellIdsName()\n\nIf PassThroughCellIds or PassThroughPointIds is on, then these\nivars control the name given to the field in which the ids are\nwritten into.  If set to NULL, then vtkOriginalCellIds or\nvtkOriginalPointIds (the default) is used, respectively.\n"},
  {(char*)"SetOriginalPointIdsName", PyvtkUnstructuredGridGeometryFilter_SetOriginalPointIdsName, 1,
   (char*)"V.SetOriginalPointIdsName(string)\nC++: void SetOriginalPointIdsName(char *)\n\nIf PassThroughCellIds or PassThroughPointIds is on, then these\nivars control the name given to the field in which the ids are\nwritten into.  If set to NULL, then vtkOriginalCellIds or\nvtkOriginalPointIds (the default) is used, respectively.\n"},
  {(char*)"GetOriginalPointIdsName", PyvtkUnstructuredGridGeometryFilter_GetOriginalPointIdsName, 1,
   (char*)"V.GetOriginalPointIdsName() -> string\nC++: virtual const char *GetOriginalPointIdsName()\n\nIf PassThroughCellIds or PassThroughPointIds is on, then these\nivars control the name given to the field in which the ids are\nwritten into.  If set to NULL, then vtkOriginalCellIds or\nvtkOriginalPointIds (the default) is used, respectively.\n"},
  {(char*)"SetLocator", PyvtkUnstructuredGridGeometryFilter_SetLocator, 1,
   (char*)"V.SetLocator(vtkIncrementalPointLocator)\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSet / get a spatial locator for merging points. By default an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"GetLocator", PyvtkUnstructuredGridGeometryFilter_GetLocator, 1,
   (char*)"V.GetLocator() -> vtkIncrementalPointLocator\nC++: vtkIncrementalPointLocator *GetLocator()\n\nSet / get a spatial locator for merging points. By default an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"CreateDefaultLocator", PyvtkUnstructuredGridGeometryFilter_CreateDefaultLocator, 1,
   (char*)"V.CreateDefaultLocator()\nC++: void CreateDefaultLocator()\n\nCreate default locator. Used to create one when none is\nspecified.\n"},
  {(char*)"GetMTime", PyvtkUnstructuredGridGeometryFilter_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nReturn the MTime also considering the locator.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkUnstructuredGridGeometryFilter_StaticNew()
{
  return vtkUnstructuredGridGeometryFilter::New();
}

PyObject *PyVTKClass_vtkUnstructuredGridGeometryFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkUnstructuredGridGeometryFilter_StaticNew,
    PyvtkUnstructuredGridGeometryFilter_Methods,
    "vtkUnstructuredGridGeometryFilter", modulename,
    NULL, NULL,
    PyvtkUnstructuredGridGeometryFilter_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkUnstructuredGridGeometryFilter_Doc()
{
  static const char *docstring[] = {
    "vtkUnstructuredGridGeometryFilter - extract geometry from an\nunstructured grid\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "vtkUnstructuredGridGeometryFilter is a filter that extracts geometry\n(and associated data) from an unstructured grid. It differs from\nvtkGeometryFilter by not tessellating higher order faces: 2D faces of\nquadratic 3D cells will be quadratic. A quadratic edge is extracted\nas a quadratic edge. For that purpose, the output of this filter is\nan unstructured grid, not a polydata. Also, the face of a vo",
    "xel is a\npixel, not a quad. Geometry is obtained as follows: all 0D, 1D, and\n2D cells are extracted. All 2D faces that are used by only one 3D\ncell (i.e., boundary faces) are extracted. It also is possible to\nspecify conditions on point ids, cell ids, and on bounding box\n(referred to as \"Extent\") to control the extraction process.\n\nCaveats:\n\nWhen vtkUnstructuredGridGeometryFilter extracts cells (o",
    "r boundaries\nof cells) it will (by default) merge duplicate vertices. This may\ncause problems in some cases. Turn merging off to prevent this from\noccurring.\n\nSee Also:\n\nvtkGeometryFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkUnstructuredGridGeometryFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkUnstructuredGridGeometryFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkUnstructuredGridGeometryFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

