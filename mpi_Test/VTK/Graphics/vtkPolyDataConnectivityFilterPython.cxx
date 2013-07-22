// python wrapper for vtkPolyDataConnectivityFilter
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
#include "vtkPolyDataConnectivityFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPolyDataConnectivityFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPolyDataConnectivityFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPolyDataConnectivityFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPolyDataConnectivityFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkPolyDataConnectivityFilter_Doc();


static PyObject *
PyvtkPolyDataConnectivityFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

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
      tempr = op->vtkPolyDataConnectivityFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

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
      tempr = op->vtkPolyDataConnectivityFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  vtkPolyDataConnectivityFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPolyDataConnectivityFilter::NewInstance();
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
PyvtkPolyDataConnectivityFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPolyDataConnectivityFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPolyDataConnectivityFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_SetScalarConnectivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

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
      op->vtkPolyDataConnectivityFilter::SetScalarConnectivity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_GetScalarConnectivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

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
      tempr = op->vtkPolyDataConnectivityFilter::GetScalarConnectivity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_ScalarConnectivityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarConnectivityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalarConnectivityOn();
      }
    else
      {
      op->vtkPolyDataConnectivityFilter::ScalarConnectivityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_ScalarConnectivityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarConnectivityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalarConnectivityOff();
      }
    else
      {
      op->vtkPolyDataConnectivityFilter::ScalarConnectivityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_SetScalarRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

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
      op->vtkPolyDataConnectivityFilter::SetScalarRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPolyDataConnectivityFilter_SetScalarRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

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
      op->vtkPolyDataConnectivityFilter::SetScalarRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPolyDataConnectivityFilter_SetScalarRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkPolyDataConnectivityFilter_SetScalarRange_s1(self, args);
    case 1:
      return PyvtkPolyDataConnectivityFilter_SetScalarRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetScalarRange");
  return NULL;
}



static PyObject *
PyvtkPolyDataConnectivityFilter_GetScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

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
      tempr = op->vtkPolyDataConnectivityFilter::GetScalarRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_SetExtractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

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
      op->vtkPolyDataConnectivityFilter::SetExtractionMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_GetExtractionModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractionModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

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
      tempr = op->vtkPolyDataConnectivityFilter::GetExtractionModeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_GetExtractionModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractionModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

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
      tempr = op->vtkPolyDataConnectivityFilter::GetExtractionModeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_GetExtractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

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
      tempr = op->vtkPolyDataConnectivityFilter::GetExtractionMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_SetExtractionModeToPointSeededRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToPointSeededRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetExtractionModeToPointSeededRegions();
      }
    else
      {
      op->vtkPolyDataConnectivityFilter::SetExtractionModeToPointSeededRegions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_SetExtractionModeToCellSeededRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToCellSeededRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetExtractionModeToCellSeededRegions();
      }
    else
      {
      op->vtkPolyDataConnectivityFilter::SetExtractionModeToCellSeededRegions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_SetExtractionModeToLargestRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToLargestRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetExtractionModeToLargestRegion();
      }
    else
      {
      op->vtkPolyDataConnectivityFilter::SetExtractionModeToLargestRegion();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_SetExtractionModeToSpecifiedRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToSpecifiedRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetExtractionModeToSpecifiedRegions();
      }
    else
      {
      op->vtkPolyDataConnectivityFilter::SetExtractionModeToSpecifiedRegions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_SetExtractionModeToClosestPointRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToClosestPointRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetExtractionModeToClosestPointRegion();
      }
    else
      {
      op->vtkPolyDataConnectivityFilter::SetExtractionModeToClosestPointRegion();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_SetExtractionModeToAllRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToAllRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetExtractionModeToAllRegions();
      }
    else
      {
      op->vtkPolyDataConnectivityFilter::SetExtractionModeToAllRegions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_GetExtractionModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractionModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

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
      tempr = op->vtkPolyDataConnectivityFilter::GetExtractionModeAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_InitializeSeedList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeSeedList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InitializeSeedList();
      }
    else
      {
      op->vtkPolyDataConnectivityFilter::InitializeSeedList();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_AddSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  int temp0;
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
      op->vtkPolyDataConnectivityFilter::AddSeed(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_DeleteSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  int temp0;
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
      op->vtkPolyDataConnectivityFilter::DeleteSeed(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_InitializeSpecifiedRegionList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeSpecifiedRegionList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InitializeSpecifiedRegionList();
      }
    else
      {
      op->vtkPolyDataConnectivityFilter::InitializeSpecifiedRegionList();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_AddSpecifiedRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSpecifiedRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

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
      op->vtkPolyDataConnectivityFilter::AddSpecifiedRegion(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_DeleteSpecifiedRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteSpecifiedRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

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
      op->vtkPolyDataConnectivityFilter::DeleteSpecifiedRegion(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_SetClosestPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

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
      op->vtkPolyDataConnectivityFilter::SetClosestPoint(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPolyDataConnectivityFilter_SetClosestPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

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
      op->vtkPolyDataConnectivityFilter::SetClosestPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPolyDataConnectivityFilter_SetClosestPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPolyDataConnectivityFilter_SetClosestPoint_s1(self, args);
    case 1:
      return PyvtkPolyDataConnectivityFilter_SetClosestPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetClosestPoint");
  return NULL;
}



static PyObject *
PyvtkPolyDataConnectivityFilter_GetClosestPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

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
      tempr = op->vtkPolyDataConnectivityFilter::GetClosestPoint();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_GetNumberOfExtractedRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfExtractedRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

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
      tempr = op->vtkPolyDataConnectivityFilter::GetNumberOfExtractedRegions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_SetColorRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

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
      op->vtkPolyDataConnectivityFilter::SetColorRegions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_GetColorRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

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
      tempr = op->vtkPolyDataConnectivityFilter::GetColorRegions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_ColorRegionsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorRegionsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ColorRegionsOn();
      }
    else
      {
      op->vtkPolyDataConnectivityFilter::ColorRegionsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_ColorRegionsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorRegionsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ColorRegionsOff();
      }
    else
      {
      op->vtkPolyDataConnectivityFilter::ColorRegionsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPolyDataConnectivityFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkPolyDataConnectivityFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPolyDataConnectivityFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPolyDataConnectivityFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPolyDataConnectivityFilter\nC++: vtkPolyDataConnectivityFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPolyDataConnectivityFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPolyDataConnectivityFilter\nC++: vtkPolyDataConnectivityFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetScalarConnectivity", PyvtkPolyDataConnectivityFilter_SetScalarConnectivity, 1,
   (char*)"V.SetScalarConnectivity(int)\nC++: void SetScalarConnectivity(int a)\n\nTurn on/off connectivity based on scalar value. If on, cells are\nconnected only if they share points AND one of the cells scalar\nvalues falls in the scalar range specified.\n"},
  {(char*)"GetScalarConnectivity", PyvtkPolyDataConnectivityFilter_GetScalarConnectivity, 1,
   (char*)"V.GetScalarConnectivity() -> int\nC++: int GetScalarConnectivity()\n\nTurn on/off connectivity based on scalar value. If on, cells are\nconnected only if they share points AND one of the cells scalar\nvalues falls in the scalar range specified.\n"},
  {(char*)"ScalarConnectivityOn", PyvtkPolyDataConnectivityFilter_ScalarConnectivityOn, 1,
   (char*)"V.ScalarConnectivityOn()\nC++: void ScalarConnectivityOn()\n\nTurn on/off connectivity based on scalar value. If on, cells are\nconnected only if they share points AND one of the cells scalar\nvalues falls in the scalar range specified.\n"},
  {(char*)"ScalarConnectivityOff", PyvtkPolyDataConnectivityFilter_ScalarConnectivityOff, 1,
   (char*)"V.ScalarConnectivityOff()\nC++: void ScalarConnectivityOff()\n\nTurn on/off connectivity based on scalar value. If on, cells are\nconnected only if they share points AND one of the cells scalar\nvalues falls in the scalar range specified.\n"},
  {(char*)"SetScalarRange", PyvtkPolyDataConnectivityFilter_SetScalarRange, 1,
   (char*)"V.SetScalarRange(float, float)\nC++: void SetScalarRange(double, double)\nV.SetScalarRange((float, float))\nC++: void SetScalarRange(double a[2])\n\n"},
  {(char*)"GetScalarRange", PyvtkPolyDataConnectivityFilter_GetScalarRange, 1,
   (char*)"V.GetScalarRange() -> (float, float)\nC++: double *GetScalarRange()\n\n"},
  {(char*)"SetExtractionMode", PyvtkPolyDataConnectivityFilter_SetExtractionMode, 1,
   (char*)"V.SetExtractionMode(int)\nC++: void SetExtractionMode(int)\n\nControl the extraction of connected surfaces.\n"},
  {(char*)"GetExtractionModeMinValue", PyvtkPolyDataConnectivityFilter_GetExtractionModeMinValue, 1,
   (char*)"V.GetExtractionModeMinValue() -> int\nC++: int GetExtractionModeMinValue()\n\nControl the extraction of connected surfaces.\n"},
  {(char*)"GetExtractionModeMaxValue", PyvtkPolyDataConnectivityFilter_GetExtractionModeMaxValue, 1,
   (char*)"V.GetExtractionModeMaxValue() -> int\nC++: int GetExtractionModeMaxValue()\n\nControl the extraction of connected surfaces.\n"},
  {(char*)"GetExtractionMode", PyvtkPolyDataConnectivityFilter_GetExtractionMode, 1,
   (char*)"V.GetExtractionMode() -> int\nC++: int GetExtractionMode()\n\nControl the extraction of connected surfaces.\n"},
  {(char*)"SetExtractionModeToPointSeededRegions", PyvtkPolyDataConnectivityFilter_SetExtractionModeToPointSeededRegions, 1,
   (char*)"V.SetExtractionModeToPointSeededRegions()\nC++: void SetExtractionModeToPointSeededRegions()\n\nControl the extraction of connected surfaces.\n"},
  {(char*)"SetExtractionModeToCellSeededRegions", PyvtkPolyDataConnectivityFilter_SetExtractionModeToCellSeededRegions, 1,
   (char*)"V.SetExtractionModeToCellSeededRegions()\nC++: void SetExtractionModeToCellSeededRegions()\n\nControl the extraction of connected surfaces.\n"},
  {(char*)"SetExtractionModeToLargestRegion", PyvtkPolyDataConnectivityFilter_SetExtractionModeToLargestRegion, 1,
   (char*)"V.SetExtractionModeToLargestRegion()\nC++: void SetExtractionModeToLargestRegion()\n\nControl the extraction of connected surfaces.\n"},
  {(char*)"SetExtractionModeToSpecifiedRegions", PyvtkPolyDataConnectivityFilter_SetExtractionModeToSpecifiedRegions, 1,
   (char*)"V.SetExtractionModeToSpecifiedRegions()\nC++: void SetExtractionModeToSpecifiedRegions()\n\nControl the extraction of connected surfaces.\n"},
  {(char*)"SetExtractionModeToClosestPointRegion", PyvtkPolyDataConnectivityFilter_SetExtractionModeToClosestPointRegion, 1,
   (char*)"V.SetExtractionModeToClosestPointRegion()\nC++: void SetExtractionModeToClosestPointRegion()\n\nControl the extraction of connected surfaces.\n"},
  {(char*)"SetExtractionModeToAllRegions", PyvtkPolyDataConnectivityFilter_SetExtractionModeToAllRegions, 1,
   (char*)"V.SetExtractionModeToAllRegions()\nC++: void SetExtractionModeToAllRegions()\n\nControl the extraction of connected surfaces.\n"},
  {(char*)"GetExtractionModeAsString", PyvtkPolyDataConnectivityFilter_GetExtractionModeAsString, 1,
   (char*)"V.GetExtractionModeAsString() -> string\nC++: const char *GetExtractionModeAsString()\n\nControl the extraction of connected surfaces.\n"},
  {(char*)"InitializeSeedList", PyvtkPolyDataConnectivityFilter_InitializeSeedList, 1,
   (char*)"V.InitializeSeedList()\nC++: void InitializeSeedList()\n\nInitialize list of point ids/cell ids used to seed regions.\n"},
  {(char*)"AddSeed", PyvtkPolyDataConnectivityFilter_AddSeed, 1,
   (char*)"V.AddSeed(int)\nC++: void AddSeed(int id)\n\nAdd a seed id (point or cell id). Note: ids are 0-offset.\n"},
  {(char*)"DeleteSeed", PyvtkPolyDataConnectivityFilter_DeleteSeed, 1,
   (char*)"V.DeleteSeed(int)\nC++: void DeleteSeed(int id)\n\nDelete a seed id (point or cell id). Note: ids are 0-offset.\n"},
  {(char*)"InitializeSpecifiedRegionList", PyvtkPolyDataConnectivityFilter_InitializeSpecifiedRegionList, 1,
   (char*)"V.InitializeSpecifiedRegionList()\nC++: void InitializeSpecifiedRegionList()\n\nInitialize list of region ids to extract.\n"},
  {(char*)"AddSpecifiedRegion", PyvtkPolyDataConnectivityFilter_AddSpecifiedRegion, 1,
   (char*)"V.AddSpecifiedRegion(int)\nC++: void AddSpecifiedRegion(int id)\n\nAdd a region id to extract. Note: ids are 0-offset.\n"},
  {(char*)"DeleteSpecifiedRegion", PyvtkPolyDataConnectivityFilter_DeleteSpecifiedRegion, 1,
   (char*)"V.DeleteSpecifiedRegion(int)\nC++: void DeleteSpecifiedRegion(int id)\n\nDelete a region id to extract. Note: ids are 0-offset.\n"},
  {(char*)"SetClosestPoint", PyvtkPolyDataConnectivityFilter_SetClosestPoint, 1,
   (char*)"V.SetClosestPoint(float, float, float)\nC++: void SetClosestPoint(double, double, double)\nV.SetClosestPoint((float, float, float))\nC++: void SetClosestPoint(double a[3])\n\n"},
  {(char*)"GetClosestPoint", PyvtkPolyDataConnectivityFilter_GetClosestPoint, 1,
   (char*)"V.GetClosestPoint() -> (float, float, float)\nC++: double *GetClosestPoint()\n\nUse to specify x-y-z point coordinates when extracting the region\nclosest to a specified point.\n"},
  {(char*)"GetNumberOfExtractedRegions", PyvtkPolyDataConnectivityFilter_GetNumberOfExtractedRegions, 1,
   (char*)"V.GetNumberOfExtractedRegions() -> int\nC++: int GetNumberOfExtractedRegions()\n\nObtain the number of connected regions.\n"},
  {(char*)"SetColorRegions", PyvtkPolyDataConnectivityFilter_SetColorRegions, 1,
   (char*)"V.SetColorRegions(int)\nC++: void SetColorRegions(int a)\n\nTurn on/off the coloring of connected regions.\n"},
  {(char*)"GetColorRegions", PyvtkPolyDataConnectivityFilter_GetColorRegions, 1,
   (char*)"V.GetColorRegions() -> int\nC++: int GetColorRegions()\n\nTurn on/off the coloring of connected regions.\n"},
  {(char*)"ColorRegionsOn", PyvtkPolyDataConnectivityFilter_ColorRegionsOn, 1,
   (char*)"V.ColorRegionsOn()\nC++: void ColorRegionsOn()\n\nTurn on/off the coloring of connected regions.\n"},
  {(char*)"ColorRegionsOff", PyvtkPolyDataConnectivityFilter_ColorRegionsOff, 1,
   (char*)"V.ColorRegionsOff()\nC++: void ColorRegionsOff()\n\nTurn on/off the coloring of connected regions.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPolyDataConnectivityFilter_StaticNew()
{
  return vtkPolyDataConnectivityFilter::New();
}

PyObject *PyVTKClass_vtkPolyDataConnectivityFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPolyDataConnectivityFilter_StaticNew,
    PyvtkPolyDataConnectivityFilter_Methods,
    "vtkPolyDataConnectivityFilter", modulename,
    NULL, NULL,
    PyvtkPolyDataConnectivityFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPolyDataConnectivityFilter_Doc()
{
  static const char *docstring[] = {
    "vtkPolyDataConnectivityFilter - extract polygonal data based on\ngeometric connectivity\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkPolyDataConnectivityFilter is a filter that extracts cells that\nshare common points and/or satisfy a scalar threshold criterion.\n(Such a group of cells is called a region.) The filter works in one\nof six ways: 1) extract the largest (most points) connected region in\nthe dataset; 2) extract specified region numbers; 3) extract all\nregions sharing specified point ids; 4) extract all regions shari",
    "ng\nspecified cell ids; 5) extract the region closest to the specified\npoint; or 6) extract all regions (used to color regions).\n\nThis filter is specialized for polygonal data. This means it runs a\nbit faster and is easier to construct visualization networks that\nprocess polygonal data.\n\nThe behavior of vtkPolyDataConnectivityFilter can be modified by\nturning on the boolean ivar ScalarConnectivity.",
    " If this flag is on,\nthe connectivity algorithm is modified so that cells are considered\nconnected only if 1) they are geometrically connected (share a point)\nand 2) the scalar values of one of the cell's points falls in the\nscalar range specified. This use of ScalarConnectivity is\nparticularly useful for selecting cells for later processing.\n\nSee Also:\n\nvtkConnectivityFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPolyDataConnectivityFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPolyDataConnectivityFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPolyDataConnectivityFilter", o) != 0)
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

