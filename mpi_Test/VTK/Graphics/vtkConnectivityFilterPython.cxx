// python wrapper for vtkConnectivityFilter
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
#include "vtkConnectivityFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkConnectivityFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkConnectivityFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkConnectivityFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkConnectivityFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkConnectivityFilter_Doc();


static PyObject *
PyvtkConnectivityFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

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
      tempr = op->vtkConnectivityFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

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
      tempr = op->vtkConnectivityFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  vtkConnectivityFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkConnectivityFilter::NewInstance();
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
PyvtkConnectivityFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkConnectivityFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkConnectivityFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_SetScalarConnectivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalarConnectivity(temp0);
      }
    else
      {
      op->vtkConnectivityFilter::SetScalarConnectivity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_GetScalarConnectivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarConnectivity();
      }
    else
      {
      tempr = op->vtkConnectivityFilter::GetScalarConnectivity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_ScalarConnectivityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarConnectivityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalarConnectivityOn();
      }
    else
      {
      op->vtkConnectivityFilter::ScalarConnectivityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_ScalarConnectivityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarConnectivityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalarConnectivityOff();
      }
    else
      {
      op->vtkConnectivityFilter::ScalarConnectivityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_SetScalarRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

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
      op->vtkConnectivityFilter::SetScalarRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkConnectivityFilter_SetScalarRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

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
      op->vtkConnectivityFilter::SetScalarRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkConnectivityFilter_SetScalarRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkConnectivityFilter_SetScalarRange_s1(self, args);
    case 1:
      return PyvtkConnectivityFilter_SetScalarRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetScalarRange");
  return NULL;
}



static PyObject *
PyvtkConnectivityFilter_GetScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

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
      tempr = op->vtkConnectivityFilter::GetScalarRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_SetExtractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetExtractionMode(temp0);
      }
    else
      {
      op->vtkConnectivityFilter::SetExtractionMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_GetExtractionModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractionModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetExtractionModeMinValue();
      }
    else
      {
      tempr = op->vtkConnectivityFilter::GetExtractionModeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_GetExtractionModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractionModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetExtractionModeMaxValue();
      }
    else
      {
      tempr = op->vtkConnectivityFilter::GetExtractionModeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_GetExtractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetExtractionMode();
      }
    else
      {
      tempr = op->vtkConnectivityFilter::GetExtractionMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_SetExtractionModeToPointSeededRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToPointSeededRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetExtractionModeToPointSeededRegions();
      }
    else
      {
      op->vtkConnectivityFilter::SetExtractionModeToPointSeededRegions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_SetExtractionModeToCellSeededRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToCellSeededRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetExtractionModeToCellSeededRegions();
      }
    else
      {
      op->vtkConnectivityFilter::SetExtractionModeToCellSeededRegions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_SetExtractionModeToLargestRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToLargestRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetExtractionModeToLargestRegion();
      }
    else
      {
      op->vtkConnectivityFilter::SetExtractionModeToLargestRegion();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_SetExtractionModeToSpecifiedRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToSpecifiedRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetExtractionModeToSpecifiedRegions();
      }
    else
      {
      op->vtkConnectivityFilter::SetExtractionModeToSpecifiedRegions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_SetExtractionModeToClosestPointRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToClosestPointRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetExtractionModeToClosestPointRegion();
      }
    else
      {
      op->vtkConnectivityFilter::SetExtractionModeToClosestPointRegion();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_SetExtractionModeToAllRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToAllRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetExtractionModeToAllRegions();
      }
    else
      {
      op->vtkConnectivityFilter::SetExtractionModeToAllRegions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_GetExtractionModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractionModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetExtractionModeAsString();
      }
    else
      {
      tempr = op->vtkConnectivityFilter::GetExtractionModeAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_InitializeSeedList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeSeedList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InitializeSeedList();
      }
    else
      {
      op->vtkConnectivityFilter::InitializeSeedList();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_AddSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddSeed(temp0);
      }
    else
      {
      op->vtkConnectivityFilter::AddSeed(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_DeleteSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->DeleteSeed(temp0);
      }
    else
      {
      op->vtkConnectivityFilter::DeleteSeed(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_InitializeSpecifiedRegionList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeSpecifiedRegionList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InitializeSpecifiedRegionList();
      }
    else
      {
      op->vtkConnectivityFilter::InitializeSpecifiedRegionList();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_AddSpecifiedRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSpecifiedRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddSpecifiedRegion(temp0);
      }
    else
      {
      op->vtkConnectivityFilter::AddSpecifiedRegion(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_DeleteSpecifiedRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteSpecifiedRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->DeleteSpecifiedRegion(temp0);
      }
    else
      {
      op->vtkConnectivityFilter::DeleteSpecifiedRegion(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_SetClosestPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  double temp0;
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
      op->SetClosestPoint(temp0, temp1, temp2);
      }
    else
      {
      op->vtkConnectivityFilter::SetClosestPoint(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkConnectivityFilter_SetClosestPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetClosestPoint(temp0);
      }
    else
      {
      op->vtkConnectivityFilter::SetClosestPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkConnectivityFilter_SetClosestPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkConnectivityFilter_SetClosestPoint_s1(self, args);
    case 1:
      return PyvtkConnectivityFilter_SetClosestPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetClosestPoint");
  return NULL;
}



static PyObject *
PyvtkConnectivityFilter_GetClosestPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetClosestPoint();
      }
    else
      {
      tempr = op->vtkConnectivityFilter::GetClosestPoint();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_GetNumberOfExtractedRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfExtractedRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfExtractedRegions();
      }
    else
      {
      tempr = op->vtkConnectivityFilter::GetNumberOfExtractedRegions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_SetColorRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColorRegions(temp0);
      }
    else
      {
      op->vtkConnectivityFilter::SetColorRegions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_GetColorRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColorRegions();
      }
    else
      {
      tempr = op->vtkConnectivityFilter::GetColorRegions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_ColorRegionsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorRegionsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ColorRegionsOn();
      }
    else
      {
      op->vtkConnectivityFilter::ColorRegionsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_ColorRegionsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorRegionsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ColorRegionsOff();
      }
    else
      {
      op->vtkConnectivityFilter::ColorRegionsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkConnectivityFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkConnectivityFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkConnectivityFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkConnectivityFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkConnectivityFilter\nC++: vtkConnectivityFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkConnectivityFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkConnectivityFilter\nC++: vtkConnectivityFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetScalarConnectivity", PyvtkConnectivityFilter_SetScalarConnectivity, 1,
   (char*)"V.SetScalarConnectivity(int)\nC++: void SetScalarConnectivity(int a)\n\nTurn on/off connectivity based on scalar value. If on, cells are\nconnected only if they share points AND one of the cells scalar\nvalues falls in the scalar range specified.\n"},
  {(char*)"GetScalarConnectivity", PyvtkConnectivityFilter_GetScalarConnectivity, 1,
   (char*)"V.GetScalarConnectivity() -> int\nC++: int GetScalarConnectivity()\n\nTurn on/off connectivity based on scalar value. If on, cells are\nconnected only if they share points AND one of the cells scalar\nvalues falls in the scalar range specified.\n"},
  {(char*)"ScalarConnectivityOn", PyvtkConnectivityFilter_ScalarConnectivityOn, 1,
   (char*)"V.ScalarConnectivityOn()\nC++: void ScalarConnectivityOn()\n\nTurn on/off connectivity based on scalar value. If on, cells are\nconnected only if they share points AND one of the cells scalar\nvalues falls in the scalar range specified.\n"},
  {(char*)"ScalarConnectivityOff", PyvtkConnectivityFilter_ScalarConnectivityOff, 1,
   (char*)"V.ScalarConnectivityOff()\nC++: void ScalarConnectivityOff()\n\nTurn on/off connectivity based on scalar value. If on, cells are\nconnected only if they share points AND one of the cells scalar\nvalues falls in the scalar range specified.\n"},
  {(char*)"SetScalarRange", PyvtkConnectivityFilter_SetScalarRange, 1,
   (char*)"V.SetScalarRange(float, float)\nC++: void SetScalarRange(double, double)\nV.SetScalarRange((float, float))\nC++: void SetScalarRange(double a[2])\n\n"},
  {(char*)"GetScalarRange", PyvtkConnectivityFilter_GetScalarRange, 1,
   (char*)"V.GetScalarRange() -> (float, float)\nC++: double *GetScalarRange()\n\n"},
  {(char*)"SetExtractionMode", PyvtkConnectivityFilter_SetExtractionMode, 1,
   (char*)"V.SetExtractionMode(int)\nC++: void SetExtractionMode(int)\n\nControl the extraction of connected surfaces.\n"},
  {(char*)"GetExtractionModeMinValue", PyvtkConnectivityFilter_GetExtractionModeMinValue, 1,
   (char*)"V.GetExtractionModeMinValue() -> int\nC++: int GetExtractionModeMinValue()\n\nControl the extraction of connected surfaces.\n"},
  {(char*)"GetExtractionModeMaxValue", PyvtkConnectivityFilter_GetExtractionModeMaxValue, 1,
   (char*)"V.GetExtractionModeMaxValue() -> int\nC++: int GetExtractionModeMaxValue()\n\nControl the extraction of connected surfaces.\n"},
  {(char*)"GetExtractionMode", PyvtkConnectivityFilter_GetExtractionMode, 1,
   (char*)"V.GetExtractionMode() -> int\nC++: int GetExtractionMode()\n\nControl the extraction of connected surfaces.\n"},
  {(char*)"SetExtractionModeToPointSeededRegions", PyvtkConnectivityFilter_SetExtractionModeToPointSeededRegions, 1,
   (char*)"V.SetExtractionModeToPointSeededRegions()\nC++: void SetExtractionModeToPointSeededRegions()\n\nControl the extraction of connected surfaces.\n"},
  {(char*)"SetExtractionModeToCellSeededRegions", PyvtkConnectivityFilter_SetExtractionModeToCellSeededRegions, 1,
   (char*)"V.SetExtractionModeToCellSeededRegions()\nC++: void SetExtractionModeToCellSeededRegions()\n\nControl the extraction of connected surfaces.\n"},
  {(char*)"SetExtractionModeToLargestRegion", PyvtkConnectivityFilter_SetExtractionModeToLargestRegion, 1,
   (char*)"V.SetExtractionModeToLargestRegion()\nC++: void SetExtractionModeToLargestRegion()\n\nControl the extraction of connected surfaces.\n"},
  {(char*)"SetExtractionModeToSpecifiedRegions", PyvtkConnectivityFilter_SetExtractionModeToSpecifiedRegions, 1,
   (char*)"V.SetExtractionModeToSpecifiedRegions()\nC++: void SetExtractionModeToSpecifiedRegions()\n\nControl the extraction of connected surfaces.\n"},
  {(char*)"SetExtractionModeToClosestPointRegion", PyvtkConnectivityFilter_SetExtractionModeToClosestPointRegion, 1,
   (char*)"V.SetExtractionModeToClosestPointRegion()\nC++: void SetExtractionModeToClosestPointRegion()\n\nControl the extraction of connected surfaces.\n"},
  {(char*)"SetExtractionModeToAllRegions", PyvtkConnectivityFilter_SetExtractionModeToAllRegions, 1,
   (char*)"V.SetExtractionModeToAllRegions()\nC++: void SetExtractionModeToAllRegions()\n\nControl the extraction of connected surfaces.\n"},
  {(char*)"GetExtractionModeAsString", PyvtkConnectivityFilter_GetExtractionModeAsString, 1,
   (char*)"V.GetExtractionModeAsString() -> string\nC++: const char *GetExtractionModeAsString()\n\nControl the extraction of connected surfaces.\n"},
  {(char*)"InitializeSeedList", PyvtkConnectivityFilter_InitializeSeedList, 1,
   (char*)"V.InitializeSeedList()\nC++: void InitializeSeedList()\n\nInitialize list of point ids/cell ids used to seed regions.\n"},
  {(char*)"AddSeed", PyvtkConnectivityFilter_AddSeed, 1,
   (char*)"V.AddSeed(int)\nC++: void AddSeed(vtkIdType id)\n\nAdd a seed id (point or cell id). Note: ids are 0-offset.\n"},
  {(char*)"DeleteSeed", PyvtkConnectivityFilter_DeleteSeed, 1,
   (char*)"V.DeleteSeed(int)\nC++: void DeleteSeed(vtkIdType id)\n\nDelete a seed id (point or cell id). Note: ids are 0-offset.\n"},
  {(char*)"InitializeSpecifiedRegionList", PyvtkConnectivityFilter_InitializeSpecifiedRegionList, 1,
   (char*)"V.InitializeSpecifiedRegionList()\nC++: void InitializeSpecifiedRegionList()\n\nInitialize list of region ids to extract.\n"},
  {(char*)"AddSpecifiedRegion", PyvtkConnectivityFilter_AddSpecifiedRegion, 1,
   (char*)"V.AddSpecifiedRegion(int)\nC++: void AddSpecifiedRegion(int id)\n\nAdd a region id to extract. Note: ids are 0-offset.\n"},
  {(char*)"DeleteSpecifiedRegion", PyvtkConnectivityFilter_DeleteSpecifiedRegion, 1,
   (char*)"V.DeleteSpecifiedRegion(int)\nC++: void DeleteSpecifiedRegion(int id)\n\nDelete a region id to extract. Note: ids are 0-offset.\n"},
  {(char*)"SetClosestPoint", PyvtkConnectivityFilter_SetClosestPoint, 1,
   (char*)"V.SetClosestPoint(float, float, float)\nC++: void SetClosestPoint(double, double, double)\nV.SetClosestPoint((float, float, float))\nC++: void SetClosestPoint(double a[3])\n\n"},
  {(char*)"GetClosestPoint", PyvtkConnectivityFilter_GetClosestPoint, 1,
   (char*)"V.GetClosestPoint() -> (float, float, float)\nC++: double *GetClosestPoint()\n\nUse to specify x-y-z point coordinates when extracting the region\nclosest to a specified point.\n"},
  {(char*)"GetNumberOfExtractedRegions", PyvtkConnectivityFilter_GetNumberOfExtractedRegions, 1,
   (char*)"V.GetNumberOfExtractedRegions() -> int\nC++: int GetNumberOfExtractedRegions()\n\nObtain the number of connected regions.\n"},
  {(char*)"SetColorRegions", PyvtkConnectivityFilter_SetColorRegions, 1,
   (char*)"V.SetColorRegions(int)\nC++: void SetColorRegions(int a)\n\nTurn on/off the coloring of connected regions.\n"},
  {(char*)"GetColorRegions", PyvtkConnectivityFilter_GetColorRegions, 1,
   (char*)"V.GetColorRegions() -> int\nC++: int GetColorRegions()\n\nTurn on/off the coloring of connected regions.\n"},
  {(char*)"ColorRegionsOn", PyvtkConnectivityFilter_ColorRegionsOn, 1,
   (char*)"V.ColorRegionsOn()\nC++: void ColorRegionsOn()\n\nTurn on/off the coloring of connected regions.\n"},
  {(char*)"ColorRegionsOff", PyvtkConnectivityFilter_ColorRegionsOff, 1,
   (char*)"V.ColorRegionsOff()\nC++: void ColorRegionsOff()\n\nTurn on/off the coloring of connected regions.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkConnectivityFilter_StaticNew()
{
  return vtkConnectivityFilter::New();
}

PyObject *PyVTKClass_vtkConnectivityFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkConnectivityFilter_StaticNew,
    PyvtkConnectivityFilter_Methods,
    "vtkConnectivityFilter", modulename,
    NULL, NULL,
    PyvtkConnectivityFilter_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkConnectivityFilter_Doc()
{
  static const char *docstring[] = {
    "vtkConnectivityFilter - extract data based on geometric connectivity\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "vtkConnectivityFilter is a filter that extracts cells that share\ncommon points and/or meet other connectivity criterion. (Cells that\nshare vertices and meet other connectivity criterion such as scalar\nrange are known as a region.)  The filter works in one of six ways:\n1) extract the largest connected region in the dataset; 2) extract\nspecified region numbers; 3) extract all regions sharing specifi",
    "ed\npoint ids; 4) extract all regions sharing specified cell ids; 5)\nextract the region closest to the specified point; or 6) extract all\nregions (used to color the data by region).\n\nvtkConnectivityFilter is generalized to handle any type of input\ndataset. It generates output data of type vtkUnstructuredGrid. If you\nknow that your input type is vtkPolyData, you may wish to use\nvtkPolyDataConnectivi",
    "tyFilter.\n\nThe behavior of vtkConnectivityFilter can be modified by turning on\nthe boolean ivar ScalarConnectivity. If this flag is on, the\nconnectivity algorithm is modified so that cells are considered\nconnected only if 1) they are geometrically connected (share a point)\nand 2) the scalar values of one of the cell's points falls in the\nscalar range specified. This use of ScalarConnectivity is\npa",
    "rticularly useful for volume datasets: it can be used as a simple \"connected\nsegmentation\" algorithm. For example, by using a seed voxel (i.e.,\ncell) on a known anatomical structure, connectivity will pull out all\nvoxels \"containing\" the anatomical structure. These voxels can then\nbe contoured or processed by other visualization filters.\n\nSee Also:\n\nvtkPolyDataConnectivityFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkConnectivityFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkConnectivityFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkConnectivityFilter", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_EXTRACT_POINT_SEEDED_REGIONS", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_EXTRACT_CELL_SEEDED_REGIONS", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(3);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_EXTRACT_SPECIFIED_REGIONS", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(4);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_EXTRACT_LARGEST_REGION", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(5);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_EXTRACT_ALL_REGIONS", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(6);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_EXTRACT_CLOSEST_POINT_REGION", o) != 0)
    {
    Py_DECREF(o);
    }

}

