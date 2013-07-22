// python wrapper for vtkMPASReader
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
#include "vtkMPASReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMPASReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMPASReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMPASReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMPASReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkMPASReader_Doc();


static PyObject *
PyvtkMPASReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

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
      tempr = op->vtkMPASReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

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
      tempr = op->vtkMPASReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  vtkMPASReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMPASReader::NewInstance();
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
PyvtkMPASReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkMPASReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkMPASReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileName(temp0);
      }
    else
      {
      op->vtkMPASReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFileName();
      }
    else
      {
      tempr = op->vtkMPASReader::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_GetmaxCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetmaxCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetmaxCells();
      }
    else
      {
      tempr = op->vtkMPASReader::GetmaxCells();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_GetmaxPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetmaxPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetmaxPoints();
      }
    else
      {
      tempr = op->vtkMPASReader::GetmaxPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_GetnumCellVars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetnumCellVars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetnumCellVars();
      }
    else
      {
      tempr = op->vtkMPASReader::GetnumCellVars();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_GetnumPointVars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetnumPointVars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetnumPointVars();
      }
    else
      {
      tempr = op->vtkMPASReader::GetnumPointVars();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  vtkUnstructuredGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput();
      }
    else
      {
      tempr = op->vtkMPASReader::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMPASReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  int temp0;
  vtkUnstructuredGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput(temp0);
      }
    else
      {
      tempr = op->vtkMPASReader::GetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMPASReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkMPASReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkMPASReader_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}



static PyObject *
PyvtkMPASReader_GetNumberOfPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfPointArrays();
      }
    else
      {
      tempr = op->vtkMPASReader::GetNumberOfPointArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_GetPointArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointArrayName(temp0);
      }
    else
      {
      tempr = op->vtkMPASReader::GetPointArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_GetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkMPASReader::GetPointArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_SetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPointArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkMPASReader::SetPointArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_DisableAllPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DisableAllPointArrays();
      }
    else
      {
      op->vtkMPASReader::DisableAllPointArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_EnableAllPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableAllPointArrays();
      }
    else
      {
      op->vtkMPASReader::EnableAllPointArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_GetNumberOfCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfCellArrays();
      }
    else
      {
      tempr = op->vtkMPASReader::GetNumberOfCellArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_GetCellArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellArrayName(temp0);
      }
    else
      {
      tempr = op->vtkMPASReader::GetCellArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_GetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkMPASReader::GetCellArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_SetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetCellArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkMPASReader::SetCellArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_DisableAllCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DisableAllCellArrays();
      }
    else
      {
      op->vtkMPASReader::DisableAllCellArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_EnableAllCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableAllCellArrays();
      }
    else
      {
      op->vtkMPASReader::EnableAllCellArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_SetVerticalLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVerticalLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVerticalLevel(temp0);
      }
    else
      {
      op->vtkMPASReader::SetVerticalLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_GetVerticalLevelRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerticalLevelRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVerticalLevelRange();
      }
    else
      {
      tempr = op->vtkMPASReader::GetVerticalLevelRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_SetLayerThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayerThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLayerThickness(temp0);
      }
    else
      {
      op->vtkMPASReader::SetLayerThickness(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_GetLayerThicknessRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayerThicknessRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLayerThicknessRange();
      }
    else
      {
      tempr = op->vtkMPASReader::GetLayerThicknessRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_SetCenterLon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterLon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCenterLon(temp0);
      }
    else
      {
      op->vtkMPASReader::SetCenterLon(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_GetCenterLonRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterLonRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCenterLonRange();
      }
    else
      {
      tempr = op->vtkMPASReader::GetCenterLonRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_SetProjectLatLon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectLatLon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProjectLatLon(temp0);
      }
    else
      {
      op->vtkMPASReader::SetProjectLatLon(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_GetProjectLatLon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectLatLon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProjectLatLon();
      }
    else
      {
      tempr = op->vtkMPASReader::GetProjectLatLon();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_SetIsAtmosphere(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIsAtmosphere");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIsAtmosphere(temp0);
      }
    else
      {
      op->vtkMPASReader::SetIsAtmosphere(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_GetIsAtmosphere(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsAtmosphere");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIsAtmosphere();
      }
    else
      {
      tempr = op->vtkMPASReader::GetIsAtmosphere();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_SetIsZeroCentered(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIsZeroCentered");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIsZeroCentered(temp0);
      }
    else
      {
      op->vtkMPASReader::SetIsZeroCentered(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_GetIsZeroCentered(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsZeroCentered");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIsZeroCentered();
      }
    else
      {
      tempr = op->vtkMPASReader::GetIsZeroCentered();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_SetShowMultilayerView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowMultilayerView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShowMultilayerView(temp0);
      }
    else
      {
      op->vtkMPASReader::SetShowMultilayerView(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_GetShowMultilayerView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowMultilayerView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShowMultilayerView();
      }
    else
      {
      tempr = op->vtkMPASReader::GetShowMultilayerView();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_CanReadFile(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CanReadFile");

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkMPASReader::CanReadFile(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMPASReader_Methods[] = {
  {(char*)"GetClassName", PyvtkMPASReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMPASReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMPASReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMPASReader\nC++: vtkMPASReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMPASReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMPASReader\nC++: vtkMPASReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkMPASReader_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSpecify file name of MPAS data file to read.\n"},
  {(char*)"GetFileName", PyvtkMPASReader_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSpecify file name of MPAS data file to read.\n"},
  {(char*)"GetmaxCells", PyvtkMPASReader_GetmaxCells, 1,
   (char*)"V.GetmaxCells() -> int\nC++: int GetmaxCells()\n\nGet the number of data cells\n"},
  {(char*)"GetmaxPoints", PyvtkMPASReader_GetmaxPoints, 1,
   (char*)"V.GetmaxPoints() -> int\nC++: int GetmaxPoints()\n\nGet the number of points\n"},
  {(char*)"GetnumCellVars", PyvtkMPASReader_GetnumCellVars, 1,
   (char*)"V.GetnumCellVars() -> int\nC++: int GetnumCellVars()\n\nGet the number of data variables at the cell centers and points\n"},
  {(char*)"GetnumPointVars", PyvtkMPASReader_GetnumPointVars, 1,
   (char*)"V.GetnumPointVars() -> int\nC++: int GetnumPointVars()\n\nGet the number of data variables at the cell centers and points\n"},
  {(char*)"GetOutput", PyvtkMPASReader_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetOutput()\nV.GetOutput(int) -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetOutput(int index)\n\nGet the reader's output\n"},
  {(char*)"GetNumberOfPointArrays", PyvtkMPASReader_GetNumberOfPointArrays, 1,
   (char*)"V.GetNumberOfPointArrays() -> int\nC++: int GetNumberOfPointArrays()\n\nThe following methods allow selective reading of solutions\nfields. By default, ALL data fields on the nodes are read, but\nthis can be modified.\n"},
  {(char*)"GetPointArrayName", PyvtkMPASReader_GetPointArrayName, 1,
   (char*)"V.GetPointArrayName(int) -> string\nC++: const char *GetPointArrayName(int index)\n\nThe following methods allow selective reading of solutions\nfields. By default, ALL data fields on the nodes are read, but\nthis can be modified.\n"},
  {(char*)"GetPointArrayStatus", PyvtkMPASReader_GetPointArrayStatus, 1,
   (char*)"V.GetPointArrayStatus(string) -> int\nC++: int GetPointArrayStatus(const char *name)\n\nThe following methods allow selective reading of solutions\nfields. By default, ALL data fields on the nodes are read, but\nthis can be modified.\n"},
  {(char*)"SetPointArrayStatus", PyvtkMPASReader_SetPointArrayStatus, 1,
   (char*)"V.SetPointArrayStatus(string, int)\nC++: void SetPointArrayStatus(const char *name, int status)\n\nThe following methods allow selective reading of solutions\nfields. By default, ALL data fields on the nodes are read, but\nthis can be modified.\n"},
  {(char*)"DisableAllPointArrays", PyvtkMPASReader_DisableAllPointArrays, 1,
   (char*)"V.DisableAllPointArrays()\nC++: void DisableAllPointArrays()\n\nThe following methods allow selective reading of solutions\nfields. By default, ALL data fields on the nodes are read, but\nthis can be modified.\n"},
  {(char*)"EnableAllPointArrays", PyvtkMPASReader_EnableAllPointArrays, 1,
   (char*)"V.EnableAllPointArrays()\nC++: void EnableAllPointArrays()\n\nThe following methods allow selective reading of solutions\nfields. By default, ALL data fields on the nodes are read, but\nthis can be modified.\n"},
  {(char*)"GetNumberOfCellArrays", PyvtkMPASReader_GetNumberOfCellArrays, 1,
   (char*)"V.GetNumberOfCellArrays() -> int\nC++: int GetNumberOfCellArrays()\n\n"},
  {(char*)"GetCellArrayName", PyvtkMPASReader_GetCellArrayName, 1,
   (char*)"V.GetCellArrayName(int) -> string\nC++: const char *GetCellArrayName(int index)\n\n"},
  {(char*)"GetCellArrayStatus", PyvtkMPASReader_GetCellArrayStatus, 1,
   (char*)"V.GetCellArrayStatus(string) -> int\nC++: int GetCellArrayStatus(const char *name)\n\n"},
  {(char*)"SetCellArrayStatus", PyvtkMPASReader_SetCellArrayStatus, 1,
   (char*)"V.SetCellArrayStatus(string, int)\nC++: void SetCellArrayStatus(const char *name, int status)\n\n"},
  {(char*)"DisableAllCellArrays", PyvtkMPASReader_DisableAllCellArrays, 1,
   (char*)"V.DisableAllCellArrays()\nC++: void DisableAllCellArrays()\n\n"},
  {(char*)"EnableAllCellArrays", PyvtkMPASReader_EnableAllCellArrays, 1,
   (char*)"V.EnableAllCellArrays()\nC++: void EnableAllCellArrays()\n\n"},
  {(char*)"SetVerticalLevel", PyvtkMPASReader_SetVerticalLevel, 1,
   (char*)"V.SetVerticalLevel(int)\nC++: void SetVerticalLevel(int level)\n\n"},
  {(char*)"GetVerticalLevelRange", PyvtkMPASReader_GetVerticalLevelRange, 1,
   (char*)"V.GetVerticalLevelRange() -> (int, int)\nC++: int *GetVerticalLevelRange()\n\n"},
  {(char*)"SetLayerThickness", PyvtkMPASReader_SetLayerThickness, 1,
   (char*)"V.SetLayerThickness(int)\nC++: void SetLayerThickness(int val)\n\n"},
  {(char*)"GetLayerThicknessRange", PyvtkMPASReader_GetLayerThicknessRange, 1,
   (char*)"V.GetLayerThicknessRange() -> (int, int)\nC++: int *GetLayerThicknessRange()\n\n"},
  {(char*)"SetCenterLon", PyvtkMPASReader_SetCenterLon, 1,
   (char*)"V.SetCenterLon(int)\nC++: void SetCenterLon(int val)\n\n"},
  {(char*)"GetCenterLonRange", PyvtkMPASReader_GetCenterLonRange, 1,
   (char*)"V.GetCenterLonRange() -> (int, int)\nC++: int *GetCenterLonRange()\n\n"},
  {(char*)"SetProjectLatLon", PyvtkMPASReader_SetProjectLatLon, 1,
   (char*)"V.SetProjectLatLon(bool)\nC++: void SetProjectLatLon(bool val)\n\n"},
  {(char*)"GetProjectLatLon", PyvtkMPASReader_GetProjectLatLon, 1,
   (char*)"V.GetProjectLatLon() -> bool\nC++: bool GetProjectLatLon()\n\n"},
  {(char*)"SetIsAtmosphere", PyvtkMPASReader_SetIsAtmosphere, 1,
   (char*)"V.SetIsAtmosphere(bool)\nC++: void SetIsAtmosphere(bool val)\n\n"},
  {(char*)"GetIsAtmosphere", PyvtkMPASReader_GetIsAtmosphere, 1,
   (char*)"V.GetIsAtmosphere() -> bool\nC++: bool GetIsAtmosphere()\n\n"},
  {(char*)"SetIsZeroCentered", PyvtkMPASReader_SetIsZeroCentered, 1,
   (char*)"V.SetIsZeroCentered(bool)\nC++: void SetIsZeroCentered(bool val)\n\n"},
  {(char*)"GetIsZeroCentered", PyvtkMPASReader_GetIsZeroCentered, 1,
   (char*)"V.GetIsZeroCentered() -> bool\nC++: bool GetIsZeroCentered()\n\n"},
  {(char*)"SetShowMultilayerView", PyvtkMPASReader_SetShowMultilayerView, 1,
   (char*)"V.SetShowMultilayerView(bool)\nC++: void SetShowMultilayerView(bool val)\n\n"},
  {(char*)"GetShowMultilayerView", PyvtkMPASReader_GetShowMultilayerView, 1,
   (char*)"V.GetShowMultilayerView() -> bool\nC++: bool GetShowMultilayerView()\n\n"},
  {(char*)"CanReadFile", PyvtkMPASReader_CanReadFile, 1,
   (char*)"V.CanReadFile(string) -> int\nC++: static int CanReadFile(const char *filename)\n\nReturns true if the given file can be read.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMPASReader_StaticNew()
{
  return vtkMPASReader::New();
}

PyObject *PyVTKClass_vtkMPASReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMPASReader_StaticNew,
    PyvtkMPASReader_Methods,
    "vtkMPASReader", modulename,
    NULL, NULL,
    PyvtkMPASReader_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkMPASReader_Doc()
{
  static const char *docstring[] = {
    "vtkMPASReader - Read an MPAS netCDF file\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "This program reads an MPAS netCDF data file to allow paraview to\ndisplay a dual-grid sphere or latlon projection.  Also allows display\nof primal-grid sphere. The variables that have time dim are available\nto ParaView.\n\nAssume all variables are of interest if they have dims (Time,\nnCells|nVertices, nVertLevels, [nTracers]) Assume no more than 100\nvars each for cell and point data Does not deal with",
    " edge data.\n\nWhen using this reader, it is important that you remember to do the\nfollowing:\n1.  When changing a selected variable, remember to select it also in\n   the drop down box to \"color by\".  It doesn't color by that\n   variable automatically.\n2.  When selecting multilayer sphere view, make layer thickness\n   around 100,000.\n3.  When selecting multilayer lat/lon view, make layer thickness\n  ",
    " around 10.\n4.  Always click the -Z orientation after making a switch from\n   lat/lon to sphere, from single to multilayer or changing\n   thickness.\n5.  Be conservative on the number of changes you make before hitting\n   Apply, since there may be bugs in this reader.  Just make one\n   change and then hit Apply.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMPASReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMPASReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMPASReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

