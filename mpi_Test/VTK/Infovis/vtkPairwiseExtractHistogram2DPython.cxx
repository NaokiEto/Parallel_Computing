// python wrapper for vtkPairwiseExtractHistogram2D
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
#include "vtkPairwiseExtractHistogram2D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPairwiseExtractHistogram2D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPairwiseExtractHistogram2D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPairwiseExtractHistogram2DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPairwiseExtractHistogram2DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkStatisticsAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkStatisticsAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkStatisticsAlgorithmNew
#endif

static const char **PyvtkPairwiseExtractHistogram2D_Doc();


static PyObject *
PyvtkPairwiseExtractHistogram2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

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
      tempr = op->vtkPairwiseExtractHistogram2D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

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
      tempr = op->vtkPairwiseExtractHistogram2D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  vtkPairwiseExtractHistogram2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPairwiseExtractHistogram2D::NewInstance();
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
PyvtkPairwiseExtractHistogram2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPairwiseExtractHistogram2D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPairwiseExtractHistogram2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_SetNumberOfBins_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfBins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

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
      op->vtkPairwiseExtractHistogram2D::SetNumberOfBins(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPairwiseExtractHistogram2D_SetNumberOfBins_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfBins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

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
      op->vtkPairwiseExtractHistogram2D::SetNumberOfBins(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPairwiseExtractHistogram2D_SetNumberOfBins(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkPairwiseExtractHistogram2D_SetNumberOfBins_s1(self, args);
    case 1:
      return PyvtkPairwiseExtractHistogram2D_SetNumberOfBins_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetNumberOfBins");
  return NULL;
}



static PyObject *
PyvtkPairwiseExtractHistogram2D_GetNumberOfBins(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

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
      tempr = op->vtkPairwiseExtractHistogram2D::GetNumberOfBins();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_SetCustomColumnRangeIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomColumnRangeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCustomColumnRangeIndex(temp0);
      }
    else
      {
      op->vtkPairwiseExtractHistogram2D::SetCustomColumnRangeIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_SetCustomColumnRangeByIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomColumnRangeByIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetCustomColumnRangeByIndex(temp0, temp1);
      }
    else
      {
      op->vtkPairwiseExtractHistogram2D::SetCustomColumnRangeByIndex(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_SetCustomColumnRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomColumnRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  int temp0;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->SetCustomColumnRange(temp0, temp1);
      }
    else
      {
      op->vtkPairwiseExtractHistogram2D::SetCustomColumnRange(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPairwiseExtractHistogram2D_SetCustomColumnRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomColumnRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  int temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetCustomColumnRange(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPairwiseExtractHistogram2D::SetCustomColumnRange(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPairwiseExtractHistogram2D_SetCustomColumnRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkPairwiseExtractHistogram2D_SetCustomColumnRange_s1(self, args);
    case 3:
      return PyvtkPairwiseExtractHistogram2D_SetCustomColumnRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCustomColumnRange");
  return NULL;
}



static PyObject *
PyvtkPairwiseExtractHistogram2D_SetScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

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
      op->vtkPairwiseExtractHistogram2D::SetScalarType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_SetScalarTypeToUnsignedInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToUnsignedInt();
      }
    else
      {
      op->vtkPairwiseExtractHistogram2D::SetScalarTypeToUnsignedInt();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_SetScalarTypeToUnsignedLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToUnsignedLong();
      }
    else
      {
      op->vtkPairwiseExtractHistogram2D::SetScalarTypeToUnsignedLong();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_SetScalarTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToUnsignedShort();
      }
    else
      {
      op->vtkPairwiseExtractHistogram2D::SetScalarTypeToUnsignedShort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_SetScalarTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToUnsignedChar();
      }
    else
      {
      op->vtkPairwiseExtractHistogram2D::SetScalarTypeToUnsignedChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_GetScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

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
      tempr = op->vtkPairwiseExtractHistogram2D::GetScalarType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_GetMaximumBinCount_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumBinCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  int temp0;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumBinCount(temp0);
      }
    else
      {
      tempr = op->vtkPairwiseExtractHistogram2D::GetMaximumBinCount(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPairwiseExtractHistogram2D_GetMaximumBinCount_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumBinCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

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
      tempr = op->vtkPairwiseExtractHistogram2D::GetMaximumBinCount();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPairwiseExtractHistogram2D_GetMaximumBinCount(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPairwiseExtractHistogram2D_GetMaximumBinCount_s1(self, args);
    case 0:
      return PyvtkPairwiseExtractHistogram2D_GetMaximumBinCount_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetMaximumBinCount");
  return NULL;
}



static PyObject *
PyvtkPairwiseExtractHistogram2D_GetBinRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  int temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  double temp3[4];
  double save3[4];
  const int size3 = 4;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp3, save3, size3);

    if (ap.IsBound())
      {
      tempr = op->GetBinRange(temp0, temp1, temp2, temp3);
      }
    else
      {
      tempr = op->vtkPairwiseExtractHistogram2D::GetBinRange(temp0, temp1, temp2, temp3);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPairwiseExtractHistogram2D_GetBinRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  int temp0;
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
      tempr = op->vtkPairwiseExtractHistogram2D::GetBinRange(temp0, temp1, temp2);
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
PyvtkPairwiseExtractHistogram2D_GetBinRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkPairwiseExtractHistogram2D_GetBinRange_s1(self, args);
    case 3:
      return PyvtkPairwiseExtractHistogram2D_GetBinRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBinRange");
  return NULL;
}



static PyObject *
PyvtkPairwiseExtractHistogram2D_GetBinWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  int temp0;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetBinWidth(temp0, temp1);
      }
    else
      {
      op->vtkPairwiseExtractHistogram2D::GetBinWidth(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_GetOutputHistogramImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputHistogramImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  int temp0;
  vtkImageData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputHistogramImage(temp0);
      }
    else
      {
      tempr = op->vtkPairwiseExtractHistogram2D::GetOutputHistogramImage(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_GetHistogramFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHistogramFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  int temp0;
  vtkExtractHistogram2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHistogramFilter(temp0);
      }
    else
      {
      tempr = op->vtkPairwiseExtractHistogram2D::GetHistogramFilter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_Aggregate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Aggregate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

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
      op->vtkPairwiseExtractHistogram2D::Aggregate(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPairwiseExtractHistogram2D_Methods[] = {
  {(char*)"GetClassName", PyvtkPairwiseExtractHistogram2D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPairwiseExtractHistogram2D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPairwiseExtractHistogram2D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPairwiseExtractHistogram2D\nC++: vtkPairwiseExtractHistogram2D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPairwiseExtractHistogram2D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPairwiseExtractHistogram2D\nC++: vtkPairwiseExtractHistogram2D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetNumberOfBins", PyvtkPairwiseExtractHistogram2D_SetNumberOfBins, 1,
   (char*)"V.SetNumberOfBins(int, int)\nC++: void SetNumberOfBins(int, int)\nV.SetNumberOfBins((int, int))\nC++: void SetNumberOfBins(int a[2])\n\n"},
  {(char*)"GetNumberOfBins", PyvtkPairwiseExtractHistogram2D_GetNumberOfBins, 1,
   (char*)"V.GetNumberOfBins() -> (int, int)\nC++: int *GetNumberOfBins()\n\n"},
  {(char*)"SetCustomColumnRangeIndex", PyvtkPairwiseExtractHistogram2D_SetCustomColumnRangeIndex, 1,
   (char*)"V.SetCustomColumnRangeIndex(int)\nC++: void SetCustomColumnRangeIndex(int a)\n\nStrange method for setting an index to be used for setting custom\ncolumn range. This was (probably) necessary to get this class to\ninteract with the ParaView client/server message passing\ninterface.\n"},
  {(char*)"SetCustomColumnRangeByIndex", PyvtkPairwiseExtractHistogram2D_SetCustomColumnRangeByIndex, 1,
   (char*)"V.SetCustomColumnRangeByIndex(float, float)\nC++: void SetCustomColumnRangeByIndex(double, double)\n\nStrange method for setting an index to be used for setting custom\ncolumn range. This was (probably) necessary to get this class to\ninteract with the ParaView client/server message passing\ninterface.\n"},
  {(char*)"SetCustomColumnRange", PyvtkPairwiseExtractHistogram2D_SetCustomColumnRange, 1,
   (char*)"V.SetCustomColumnRange(int, [float, float])\nC++: void SetCustomColumnRange(int col, double range[2])\nV.SetCustomColumnRange(int, float, float)\nC++: void SetCustomColumnRange(int col, double rmin, double rmax)\n\nMore standard way to set the custom range for a particular\ncolumn. This makes sure that only the affected histograms know\nthat they need to be updated.\n"},
  {(char*)"SetScalarType", PyvtkPairwiseExtractHistogram2D_SetScalarType, 1,
   (char*)"V.SetScalarType(int)\nC++: void SetScalarType(int a)\n\nSet the scalar type for each of the computed histograms.\n"},
  {(char*)"SetScalarTypeToUnsignedInt", PyvtkPairwiseExtractHistogram2D_SetScalarTypeToUnsignedInt, 1,
   (char*)"V.SetScalarTypeToUnsignedInt()\nC++: void SetScalarTypeToUnsignedInt()\n\nSet the scalar type for each of the computed histograms.\n"},
  {(char*)"SetScalarTypeToUnsignedLong", PyvtkPairwiseExtractHistogram2D_SetScalarTypeToUnsignedLong, 1,
   (char*)"V.SetScalarTypeToUnsignedLong()\nC++: void SetScalarTypeToUnsignedLong()\n\nSet the scalar type for each of the computed histograms.\n"},
  {(char*)"SetScalarTypeToUnsignedShort", PyvtkPairwiseExtractHistogram2D_SetScalarTypeToUnsignedShort, 1,
   (char*)"V.SetScalarTypeToUnsignedShort()\nC++: void SetScalarTypeToUnsignedShort()\n\nSet the scalar type for each of the computed histograms.\n"},
  {(char*)"SetScalarTypeToUnsignedChar", PyvtkPairwiseExtractHistogram2D_SetScalarTypeToUnsignedChar, 1,
   (char*)"V.SetScalarTypeToUnsignedChar()\nC++: void SetScalarTypeToUnsignedChar()\n\nSet the scalar type for each of the computed histograms.\n"},
  {(char*)"GetScalarType", PyvtkPairwiseExtractHistogram2D_GetScalarType, 1,
   (char*)"V.GetScalarType() -> int\nC++: int GetScalarType()\n\nSet the scalar type for each of the computed histograms.\n"},
  {(char*)"GetMaximumBinCount", PyvtkPairwiseExtractHistogram2D_GetMaximumBinCount, 1,
   (char*)"V.GetMaximumBinCount(int) -> float\nC++: double GetMaximumBinCount(int idx)\nV.GetMaximumBinCount() -> float\nC++: double GetMaximumBinCount()\n\nGet the maximum bin count for a single histogram\n"},
  {(char*)"GetBinRange", PyvtkPairwiseExtractHistogram2D_GetBinRange, 1,
   (char*)"V.GetBinRange(int, int, int, [float, float, float, float]) -> int\nC++: int GetBinRange(int idx, vtkIdType binX, vtkIdType binY,\n    double range[4])\nV.GetBinRange(int, int, [float, float, float, float]) -> int\nC++: int GetBinRange(int idx, vtkIdType bin, double range[4])\n\nCompute the range of the bin located at position (binX,binY) in\nthe 2D histogram at idx.\n"},
  {(char*)"GetBinWidth", PyvtkPairwiseExtractHistogram2D_GetBinWidth, 1,
   (char*)"V.GetBinWidth(int, [float, float])\nC++: void GetBinWidth(int idx, double bw[2])\n\nGet the width of all of the bins. Also stored in the spacing ivar\nof the histogram image output at idx.\n"},
  {(char*)"GetOutputHistogramImage", PyvtkPairwiseExtractHistogram2D_GetOutputHistogramImage, 1,
   (char*)"V.GetOutputHistogramImage(int) -> vtkImageData\nC++: vtkImageData *GetOutputHistogramImage(int idx)\n\nGet the vtkImageData output of the idx'th histogram filter\n"},
  {(char*)"GetHistogramFilter", PyvtkPairwiseExtractHistogram2D_GetHistogramFilter, 1,
   (char*)"V.GetHistogramFilter(int) -> vtkExtractHistogram2D\nC++: vtkExtractHistogram2D *GetHistogramFilter(int idx)\n\nGet a pointer to the idx'th histogram filter.\n"},
  {(char*)"Aggregate", PyvtkPairwiseExtractHistogram2D_Aggregate, 1,
   (char*)"V.Aggregate(vtkDataObjectCollection, vtkMultiBlockDataSet)\nC++: virtual void Aggregate(vtkDataObjectCollection *,\n    vtkMultiBlockDataSet *)\n\nGiven a collection of models, calculate aggregate model.  Not\nused\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPairwiseExtractHistogram2D_StaticNew()
{
  return vtkPairwiseExtractHistogram2D::New();
}

PyObject *PyVTKClass_vtkPairwiseExtractHistogram2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPairwiseExtractHistogram2D_StaticNew,
    PyvtkPairwiseExtractHistogram2D_Methods,
    "vtkPairwiseExtractHistogram2D", modulename,
    NULL, NULL,
    PyvtkPairwiseExtractHistogram2D_Doc(),
    PyVTKClass_vtkStatisticsAlgorithmNew(modulename));

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

const char **PyvtkPairwiseExtractHistogram2D_Doc()
{
  static const char *docstring[] = {
    "vtkPairwiseExtractHistogram2D - compute a 2D histogram between \n\n",
    "Superclass: vtkStatisticsAlgorithm\n\n",
    "This class computes a 2D histogram between all adjacent pairs of\ncolumns\n of an input vtkTable. Internally it creates multiple\nvtkExtractHistogram2D\n instances (one for each pair of adjacent table columns).  It also\n manages updating histogram computations intelligently, only\nrecomputing\n those histograms for whom a relevant property has been altered.\n\n\n Note that there are two different outputs f",
    "rom this filter.  One is\na\n table for which each column contains a flattened 2D histogram array.\n The other is a vtkMultiBlockDataSet for which each block is a\n vtkImageData representation of the 2D histogram.\n\nSee Also:\n\n\n vtkExtractHistogram2D vtkPPairwiseExtractHistogram2D\n\nThanks:\n\n\n Developed by David Feng and Philippe Pebay at Sandia National\nLaboratories\n------------------------------------",
    "----------------------------------\n    --------\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPairwiseExtractHistogram2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPairwiseExtractHistogram2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPairwiseExtractHistogram2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

