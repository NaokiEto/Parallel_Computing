// python wrapper for vtkExtractHistogram2D
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
#include "vtkExtractHistogram2D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkExtractHistogram2D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkExtractHistogram2D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkExtractHistogram2DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkExtractHistogram2DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkBivariateStatisticsAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkBivariateStatisticsAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkBivariateStatisticsAlgorithmNew
#endif

static const char **PyvtkExtractHistogram2D_Doc();


static PyObject *
PyvtkExtractHistogram2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

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
      tempr = op->vtkExtractHistogram2D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

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
      tempr = op->vtkExtractHistogram2D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  vtkExtractHistogram2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkExtractHistogram2D::NewInstance();
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
PyvtkExtractHistogram2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkExtractHistogram2D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkExtractHistogram2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_SetNumberOfBins_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfBins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfBins(temp0, temp1);
      }
    else
      {
      op->vtkExtractHistogram2D::SetNumberOfBins(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExtractHistogram2D_SetNumberOfBins_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfBins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfBins(temp0);
      }
    else
      {
      op->vtkExtractHistogram2D::SetNumberOfBins(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExtractHistogram2D_SetNumberOfBins(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkExtractHistogram2D_SetNumberOfBins_s1(self, args);
    case 1:
      return PyvtkExtractHistogram2D_SetNumberOfBins_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetNumberOfBins");
  return NULL;
}



static PyObject *
PyvtkExtractHistogram2D_GetNumberOfBins(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfBins();
      }
    else
      {
      tempr = op->vtkExtractHistogram2D::GetNumberOfBins();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_SetComponentsToProcess_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentsToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetComponentsToProcess(temp0, temp1);
      }
    else
      {
      op->vtkExtractHistogram2D::SetComponentsToProcess(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExtractHistogram2D_SetComponentsToProcess_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentsToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetComponentsToProcess(temp0);
      }
    else
      {
      op->vtkExtractHistogram2D::SetComponentsToProcess(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExtractHistogram2D_SetComponentsToProcess(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkExtractHistogram2D_SetComponentsToProcess_s1(self, args);
    case 1:
      return PyvtkExtractHistogram2D_SetComponentsToProcess_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetComponentsToProcess");
  return NULL;
}



static PyObject *
PyvtkExtractHistogram2D_GetComponentsToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentsToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComponentsToProcess();
      }
    else
      {
      tempr = op->vtkExtractHistogram2D::GetComponentsToProcess();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_SetCustomHistogramExtents_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomHistogramExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

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
      op->SetCustomHistogramExtents(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkExtractHistogram2D::SetCustomHistogramExtents(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExtractHistogram2D_SetCustomHistogramExtents_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomHistogramExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  double temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetCustomHistogramExtents(temp0);
      }
    else
      {
      op->vtkExtractHistogram2D::SetCustomHistogramExtents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExtractHistogram2D_SetCustomHistogramExtents(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkExtractHistogram2D_SetCustomHistogramExtents_s1(self, args);
    case 1:
      return PyvtkExtractHistogram2D_SetCustomHistogramExtents_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCustomHistogramExtents");
  return NULL;
}



static PyObject *
PyvtkExtractHistogram2D_GetCustomHistogramExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCustomHistogramExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  double *tempr;
  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCustomHistogramExtents();
      }
    else
      {
      tempr = op->vtkExtractHistogram2D::GetCustomHistogramExtents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_SetUseCustomHistogramExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseCustomHistogramExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseCustomHistogramExtents(temp0);
      }
    else
      {
      op->vtkExtractHistogram2D::SetUseCustomHistogramExtents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_GetUseCustomHistogramExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseCustomHistogramExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseCustomHistogramExtents();
      }
    else
      {
      tempr = op->vtkExtractHistogram2D::GetUseCustomHistogramExtents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_UseCustomHistogramExtentsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCustomHistogramExtentsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseCustomHistogramExtentsOn();
      }
    else
      {
      op->vtkExtractHistogram2D::UseCustomHistogramExtentsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_UseCustomHistogramExtentsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCustomHistogramExtentsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseCustomHistogramExtentsOff();
      }
    else
      {
      op->vtkExtractHistogram2D::UseCustomHistogramExtentsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_SetScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalarType(temp0);
      }
    else
      {
      op->vtkExtractHistogram2D::SetScalarType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_SetScalarTypeToUnsignedInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToUnsignedInt();
      }
    else
      {
      op->vtkExtractHistogram2D::SetScalarTypeToUnsignedInt();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_SetScalarTypeToUnsignedLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToUnsignedLong();
      }
    else
      {
      op->vtkExtractHistogram2D::SetScalarTypeToUnsignedLong();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_SetScalarTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToUnsignedShort();
      }
    else
      {
      op->vtkExtractHistogram2D::SetScalarTypeToUnsignedShort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_SetScalarTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToUnsignedChar();
      }
    else
      {
      op->vtkExtractHistogram2D::SetScalarTypeToUnsignedChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_SetScalarTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToFloat();
      }
    else
      {
      op->vtkExtractHistogram2D::SetScalarTypeToFloat();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_SetScalarTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToDouble();
      }
    else
      {
      op->vtkExtractHistogram2D::SetScalarTypeToDouble();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_GetScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarType();
      }
    else
      {
      tempr = op->vtkExtractHistogram2D::GetScalarType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_GetMaximumBinCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumBinCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumBinCount();
      }
    else
      {
      tempr = op->vtkExtractHistogram2D::GetMaximumBinCount();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_GetBinRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  double temp2[4];
  double save2[4];
  const int size2 = 4;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      tempr = op->GetBinRange(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkExtractHistogram2D::GetBinRange(temp0, temp1, temp2);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExtractHistogram2D_GetBinRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  vtkIdType temp0;
  double temp1[4];
  double save1[4];
  const int size1 = 4;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      tempr = op->GetBinRange(temp0, temp1);
      }
    else
      {
      tempr = op->vtkExtractHistogram2D::GetBinRange(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExtractHistogram2D_GetBinRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkExtractHistogram2D_GetBinRange_s1(self, args);
    case 2:
      return PyvtkExtractHistogram2D_GetBinRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBinRange");
  return NULL;
}



static PyObject *
PyvtkExtractHistogram2D_GetBinWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetBinWidth(temp0);
      }
    else
      {
      op->vtkExtractHistogram2D::GetBinWidth(temp0);
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
PyvtkExtractHistogram2D_GetOutputHistogramImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputHistogramImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  vtkImageData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputHistogramImage();
      }
    else
      {
      tempr = op->vtkExtractHistogram2D::GetOutputHistogramImage();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_SetSwapColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSwapColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSwapColumns(temp0);
      }
    else
      {
      op->vtkExtractHistogram2D::SetSwapColumns(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_GetSwapColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSwapColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSwapColumns();
      }
    else
      {
      tempr = op->vtkExtractHistogram2D::GetSwapColumns();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_SwapColumnsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SwapColumnsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SwapColumnsOn();
      }
    else
      {
      op->vtkExtractHistogram2D::SwapColumnsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_SwapColumnsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SwapColumnsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SwapColumnsOff();
      }
    else
      {
      op->vtkExtractHistogram2D::SwapColumnsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_SetRowMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRowMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  vtkDataArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
    {
    if (ap.IsBound())
      {
      op->SetRowMask(temp0);
      }
    else
      {
      op->vtkExtractHistogram2D::SetRowMask(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_GetRowMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRowMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  vtkDataArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRowMask();
      }
    else
      {
      tempr = op->vtkExtractHistogram2D::GetRowMask();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_Aggregate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Aggregate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  vtkDataObjectCollection *temp0 = NULL;
  vtkMultiBlockDataSet *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObjectCollection") &&
      ap.GetVTKObject(temp1, "vtkMultiBlockDataSet"))
    {
    if (ap.IsBound())
      {
      op->Aggregate(temp0, temp1);
      }
    else
      {
      op->vtkExtractHistogram2D::Aggregate(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExtractHistogram2D_Methods[] = {
  {(char*)"GetClassName", PyvtkExtractHistogram2D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtractHistogram2D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtractHistogram2D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkExtractHistogram2D\nC++: vtkExtractHistogram2D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtractHistogram2D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtractHistogram2D\nC++: vtkExtractHistogram2D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetNumberOfBins", PyvtkExtractHistogram2D_SetNumberOfBins, 1,
   (char*)"V.SetNumberOfBins(int, int)\nC++: void SetNumberOfBins(int, int)\nV.SetNumberOfBins((int, int))\nC++: void SetNumberOfBins(int a[2])\n\n"},
  {(char*)"GetNumberOfBins", PyvtkExtractHistogram2D_GetNumberOfBins, 1,
   (char*)"V.GetNumberOfBins() -> (int, int)\nC++: int *GetNumberOfBins()\n\n"},
  {(char*)"SetComponentsToProcess", PyvtkExtractHistogram2D_SetComponentsToProcess, 1,
   (char*)"V.SetComponentsToProcess(int, int)\nC++: void SetComponentsToProcess(int, int)\nV.SetComponentsToProcess((int, int))\nC++: void SetComponentsToProcess(int a[2])\n\n"},
  {(char*)"GetComponentsToProcess", PyvtkExtractHistogram2D_GetComponentsToProcess, 1,
   (char*)"V.GetComponentsToProcess() -> (int, int)\nC++: int *GetComponentsToProcess()\n\n"},
  {(char*)"SetCustomHistogramExtents", PyvtkExtractHistogram2D_SetCustomHistogramExtents, 1,
   (char*)"V.SetCustomHistogramExtents(float, float, float, float)\nC++: void SetCustomHistogramExtents(double, double, double,\n    double)\nV.SetCustomHistogramExtents((float, float, float, float))\nC++: void SetCustomHistogramExtents(double a[4])\n\n"},
  {(char*)"GetCustomHistogramExtents", PyvtkExtractHistogram2D_GetCustomHistogramExtents, 1,
   (char*)"V.GetCustomHistogramExtents() -> (float, float, float, float)\nC++: double *GetCustomHistogramExtents()\n\n"},
  {(char*)"SetUseCustomHistogramExtents", PyvtkExtractHistogram2D_SetUseCustomHistogramExtents, 1,
   (char*)"V.SetUseCustomHistogramExtents(int)\nC++: void SetUseCustomHistogramExtents(int a)\n\nUse the extents in CustomHistogramExtents when computing the\nhistogram, rather than the simple range of the input columns.\n"},
  {(char*)"GetUseCustomHistogramExtents", PyvtkExtractHistogram2D_GetUseCustomHistogramExtents, 1,
   (char*)"V.GetUseCustomHistogramExtents() -> int\nC++: int GetUseCustomHistogramExtents()\n\nUse the extents in CustomHistogramExtents when computing the\nhistogram, rather than the simple range of the input columns.\n"},
  {(char*)"UseCustomHistogramExtentsOn", PyvtkExtractHistogram2D_UseCustomHistogramExtentsOn, 1,
   (char*)"V.UseCustomHistogramExtentsOn()\nC++: void UseCustomHistogramExtentsOn()\n\nUse the extents in CustomHistogramExtents when computing the\nhistogram, rather than the simple range of the input columns.\n"},
  {(char*)"UseCustomHistogramExtentsOff", PyvtkExtractHistogram2D_UseCustomHistogramExtentsOff, 1,
   (char*)"V.UseCustomHistogramExtentsOff()\nC++: void UseCustomHistogramExtentsOff()\n\nUse the extents in CustomHistogramExtents when computing the\nhistogram, rather than the simple range of the input columns.\n"},
  {(char*)"SetScalarType", PyvtkExtractHistogram2D_SetScalarType, 1,
   (char*)"V.SetScalarType(int)\nC++: void SetScalarType(int a)\n\nControl the scalar type of the output histogram.  If the input is\nrelatively small, you can save space by using a smaller data\ntype.  Defaults to unsigned integer.\n"},
  {(char*)"SetScalarTypeToUnsignedInt", PyvtkExtractHistogram2D_SetScalarTypeToUnsignedInt, 1,
   (char*)"V.SetScalarTypeToUnsignedInt()\nC++: void SetScalarTypeToUnsignedInt()\n\nControl the scalar type of the output histogram.  If the input is\nrelatively small, you can save space by using a smaller data\ntype.  Defaults to unsigned integer.\n"},
  {(char*)"SetScalarTypeToUnsignedLong", PyvtkExtractHistogram2D_SetScalarTypeToUnsignedLong, 1,
   (char*)"V.SetScalarTypeToUnsignedLong()\nC++: void SetScalarTypeToUnsignedLong()\n\nControl the scalar type of the output histogram.  If the input is\nrelatively small, you can save space by using a smaller data\ntype.  Defaults to unsigned integer.\n"},
  {(char*)"SetScalarTypeToUnsignedShort", PyvtkExtractHistogram2D_SetScalarTypeToUnsignedShort, 1,
   (char*)"V.SetScalarTypeToUnsignedShort()\nC++: void SetScalarTypeToUnsignedShort()\n\nControl the scalar type of the output histogram.  If the input is\nrelatively small, you can save space by using a smaller data\ntype.  Defaults to unsigned integer.\n"},
  {(char*)"SetScalarTypeToUnsignedChar", PyvtkExtractHistogram2D_SetScalarTypeToUnsignedChar, 1,
   (char*)"V.SetScalarTypeToUnsignedChar()\nC++: void SetScalarTypeToUnsignedChar()\n\nControl the scalar type of the output histogram.  If the input is\nrelatively small, you can save space by using a smaller data\ntype.  Defaults to unsigned integer.\n"},
  {(char*)"SetScalarTypeToFloat", PyvtkExtractHistogram2D_SetScalarTypeToFloat, 1,
   (char*)"V.SetScalarTypeToFloat()\nC++: void SetScalarTypeToFloat()\n\nControl the scalar type of the output histogram.  If the input is\nrelatively small, you can save space by using a smaller data\ntype.  Defaults to unsigned integer.\n"},
  {(char*)"SetScalarTypeToDouble", PyvtkExtractHistogram2D_SetScalarTypeToDouble, 1,
   (char*)"V.SetScalarTypeToDouble()\nC++: void SetScalarTypeToDouble()\n\nControl the scalar type of the output histogram.  If the input is\nrelatively small, you can save space by using a smaller data\ntype.  Defaults to unsigned integer.\n"},
  {(char*)"GetScalarType", PyvtkExtractHistogram2D_GetScalarType, 1,
   (char*)"V.GetScalarType() -> int\nC++: int GetScalarType()\n\nControl the scalar type of the output histogram.  If the input is\nrelatively small, you can save space by using a smaller data\ntype.  Defaults to unsigned integer.\n"},
  {(char*)"GetMaximumBinCount", PyvtkExtractHistogram2D_GetMaximumBinCount, 1,
   (char*)"V.GetMaximumBinCount() -> float\nC++: double GetMaximumBinCount()\n\nAccess the count of the histogram bin containing the largest\nnumber of input rows.\n"},
  {(char*)"GetBinRange", PyvtkExtractHistogram2D_GetBinRange, 1,
   (char*)"V.GetBinRange(int, int, [float, float, float, float]) -> int\nC++: int GetBinRange(vtkIdType binX, vtkIdType binY,\n    double range[4])\nV.GetBinRange(int, [float, float, float, float]) -> int\nC++: int GetBinRange(vtkIdType bin, double range[4])\n\nCompute the range of the bin located at position (binX,binY) in\nthe 2D histogram.\n"},
  {(char*)"GetBinWidth", PyvtkExtractHistogram2D_GetBinWidth, 1,
   (char*)"V.GetBinWidth([float, float])\nC++: void GetBinWidth(double bw[2])\n\nGet the width of all of the bins. Also stored in the spacing ivar\nof the histogram image output.\n"},
  {(char*)"GetOutputHistogramImage", PyvtkExtractHistogram2D_GetOutputHistogramImage, 1,
   (char*)"V.GetOutputHistogramImage() -> vtkImageData\nC++: vtkImageData *GetOutputHistogramImage()\n\nGets the data object at the histogram image output port and casts\nit to a vtkImageData.\n"},
  {(char*)"SetSwapColumns", PyvtkExtractHistogram2D_SetSwapColumns, 1,
   (char*)"V.SetSwapColumns(int)\nC++: void SetSwapColumns(int a)\n\n"},
  {(char*)"GetSwapColumns", PyvtkExtractHistogram2D_GetSwapColumns, 1,
   (char*)"V.GetSwapColumns() -> int\nC++: int GetSwapColumns()\n\n"},
  {(char*)"SwapColumnsOn", PyvtkExtractHistogram2D_SwapColumnsOn, 1,
   (char*)"V.SwapColumnsOn()\nC++: void SwapColumnsOn()\n\n"},
  {(char*)"SwapColumnsOff", PyvtkExtractHistogram2D_SwapColumnsOff, 1,
   (char*)"V.SwapColumnsOff()\nC++: void SwapColumnsOff()\n\n"},
  {(char*)"SetRowMask", PyvtkExtractHistogram2D_SetRowMask, 1,
   (char*)"V.SetRowMask(vtkDataArray)\nC++: virtual void SetRowMask(vtkDataArray *)\n\nGet/Set an optional mask that can ignore rows of the table\n"},
  {(char*)"GetRowMask", PyvtkExtractHistogram2D_GetRowMask, 1,
   (char*)"V.GetRowMask() -> vtkDataArray\nC++: vtkDataArray *GetRowMask()\n\nGet/Set an optional mask that can ignore rows of the table\n"},
  {(char*)"Aggregate", PyvtkExtractHistogram2D_Aggregate, 1,
   (char*)"V.Aggregate(vtkDataObjectCollection, vtkMultiBlockDataSet)\nC++: virtual void Aggregate(vtkDataObjectCollection *,\n    vtkMultiBlockDataSet *)\n\nGiven a collection of models, calculate aggregate model. Not\nused.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtractHistogram2D_StaticNew()
{
  return vtkExtractHistogram2D::New();
}

PyObject *PyVTKClass_vtkExtractHistogram2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtractHistogram2D_StaticNew,
    PyvtkExtractHistogram2D_Methods,
    "vtkExtractHistogram2D", modulename,
    NULL, NULL,
    PyvtkExtractHistogram2D_Doc(),
    PyVTKClass_vtkBivariateStatisticsAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"HISTOGRAM_IMAGE", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkExtractHistogram2D_Doc()
{
  static const char *docstring[] = {
    "vtkExtractHistogram2D - compute a 2D histogram between two columns\n\n",
    "Superclass: vtkBivariateStatisticsAlgorithm\n\n",
    "This class computes a 2D histogram between two columns of an input\n vtkTable. Just as with a 1D histogram, a 2D histogram breaks\n up the input domain into bins, and each pair of values (row in\n the table) fits into a single bin and increments a row counter\n for that bin.\n\n\n To use this class, set the input with a table and call\nAddColumnPair(nameX,nameY),\n where nameX and nameY are the names of th",
    "e two columns to be used.\n\n\n In addition to the number of bins (in X and Y), the domain of\n the histogram can be customized by toggling the\nUseCustomHistogramExtents\n flag and setting the CustomHistogramExtents variable to the\n desired value.\n\nSee Also:\n\n\n vtkPExtractHistogram2D\n\nThanks:\n\n\n Developed by David Feng and Philippe Pebay at Sandia National\nLaboratories\n---------------------------------",
    "-------------------------------------\n    --------\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtractHistogram2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtractHistogram2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtractHistogram2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

