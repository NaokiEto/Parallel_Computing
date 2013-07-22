// python wrapper for vtkStatisticsAlgorithm
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
#include "vtkStdString.h"
#include "vtkVariant.h"
#include "vtkStatisticsAlgorithm.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkStatisticsAlgorithm(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkStatisticsAlgorithm(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkStatisticsAlgorithmNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkStatisticsAlgorithmNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkTableAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTableAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableAlgorithmNew
#endif

static const char **PyvtkStatisticsAlgorithm_Doc();


static PyObject *
PyvtkStatisticsAlgorithm_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

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
      tempr = op->vtkStatisticsAlgorithm::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

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
      tempr = op->vtkStatisticsAlgorithm::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  vtkStatisticsAlgorithm *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkStatisticsAlgorithm::NewInstance();
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
PyvtkStatisticsAlgorithm_SetLearnOptionParameterConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLearnOptionParameterConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetLearnOptionParameterConnection(temp0);
      }
    else
      {
      op->vtkStatisticsAlgorithm::SetLearnOptionParameterConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_SetLearnOptionParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLearnOptionParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetLearnOptionParameters(temp0);
      }
    else
      {
      op->vtkStatisticsAlgorithm::SetLearnOptionParameters(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_SetInputModelConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputModelConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetInputModelConnection(temp0);
      }
    else
      {
      op->vtkStatisticsAlgorithm::SetInputModelConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_SetInputModel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputModel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInputModel(temp0);
      }
    else
      {
      op->vtkStatisticsAlgorithm::SetInputModel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_SetLearnOption(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLearnOption");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLearnOption(temp0);
      }
    else
      {
      op->vtkStatisticsAlgorithm::SetLearnOption(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_GetLearnOption(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLearnOption");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLearnOption();
      }
    else
      {
      tempr = op->vtkStatisticsAlgorithm::GetLearnOption();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_SetDeriveOption(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeriveOption");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDeriveOption(temp0);
      }
    else
      {
      op->vtkStatisticsAlgorithm::SetDeriveOption(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_GetDeriveOption(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeriveOption");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDeriveOption();
      }
    else
      {
      tempr = op->vtkStatisticsAlgorithm::GetDeriveOption();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_SetAssessOption(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAssessOption");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAssessOption(temp0);
      }
    else
      {
      op->vtkStatisticsAlgorithm::SetAssessOption(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_GetAssessOption(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAssessOption");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAssessOption();
      }
    else
      {
      tempr = op->vtkStatisticsAlgorithm::GetAssessOption();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_SetTestOption(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTestOption");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTestOption(temp0);
      }
    else
      {
      op->vtkStatisticsAlgorithm::SetTestOption(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_GetTestOption(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTestOption");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTestOption();
      }
    else
      {
      tempr = op->vtkStatisticsAlgorithm::GetTestOption();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_SetNumberOfPrimaryTables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPrimaryTables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfPrimaryTables(temp0);
      }
    else
      {
      op->vtkStatisticsAlgorithm::SetNumberOfPrimaryTables(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_GetNumberOfPrimaryTables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPrimaryTables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfPrimaryTables();
      }
    else
      {
      tempr = op->vtkStatisticsAlgorithm::GetNumberOfPrimaryTables();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_SetAssessParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAssessParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  vtkStringArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringArray"))
    {
    if (ap.IsBound())
      {
      op->SetAssessParameters(temp0);
      }
    else
      {
      op->vtkStatisticsAlgorithm::SetAssessParameters(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_GetAssessParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAssessParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  vtkStringArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAssessParameters();
      }
    else
      {
      tempr = op->vtkStatisticsAlgorithm::GetAssessParameters();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_SetAssessNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAssessNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  vtkStringArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringArray"))
    {
    if (ap.IsBound())
      {
      op->SetAssessNames(temp0);
      }
    else
      {
      op->vtkStatisticsAlgorithm::SetAssessNames(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_GetAssessNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAssessNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  vtkStringArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAssessNames();
      }
    else
      {
      tempr = op->vtkStatisticsAlgorithm::GetAssessNames();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_SetAssessOptionParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAssessOptionParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  vtkIdType temp0;
  vtkStdString temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetAssessOptionParameter(temp0, temp1);
      }
    else
      {
      op->vtkStatisticsAlgorithm::SetAssessOptionParameter(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_GetAssessParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAssessParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  vtkIdType temp0;
  vtkStdString tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAssessParameter(temp0);
      }
    else
      {
      tempr = op->vtkStatisticsAlgorithm::GetAssessParameter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_SetColumnStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColumnStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetColumnStatus(temp0, temp1);
      }
    else
      {
      op->vtkStatisticsAlgorithm::SetColumnStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_ResetAllColumnStates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetAllColumnStates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetAllColumnStates();
      }
    else
      {
      op->vtkStatisticsAlgorithm::ResetAllColumnStates();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_RequestSelectedColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequestSelectedColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->RequestSelectedColumns();
      }
    else
      {
      tempr = op->vtkStatisticsAlgorithm::RequestSelectedColumns();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_ResetRequests(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetRequests");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetRequests();
      }
    else
      {
      op->vtkStatisticsAlgorithm::ResetRequests();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_GetNumberOfRequests(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRequests");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfRequests();
      }
    else
      {
      tempr = op->vtkStatisticsAlgorithm::GetNumberOfRequests();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_GetNumberOfColumnsForRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfColumnsForRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  vtkIdType temp0;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfColumnsForRequest(temp0);
      }
    else
      {
      tempr = op->vtkStatisticsAlgorithm::GetNumberOfColumnsForRequest(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_GetColumnForRequest_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnForRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColumnForRequest(temp0, temp1);
      }
    else
      {
      tempr = op->vtkStatisticsAlgorithm::GetColumnForRequest(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkStatisticsAlgorithm_GetColumnForRequest_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnForRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkStdString temp2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColumnForRequest(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkStatisticsAlgorithm::GetColumnForRequest(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkStatisticsAlgorithm_GetColumnForRequest(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkStatisticsAlgorithm_GetColumnForRequest_s1(self, args);
    case 3:
      return PyvtkStatisticsAlgorithm_GetColumnForRequest_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetColumnForRequest");
  return NULL;
}



static PyObject *
PyvtkStatisticsAlgorithm_SetParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  char *temp0 = NULL;
  int temp1;
  vtkVariant *temp2 = NULL;
  PyObject *pobj2 = NULL;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkVariant"))
    {
    if (ap.IsBound())
      {
      tempr = op->SetParameter(temp0, temp1, *temp2);
      }
    else
      {
      tempr = op->vtkStatisticsAlgorithm::SetParameter(temp0, temp1, *temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj2);

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_Aggregate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Aggregate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  vtkDataObjectCollection *temp0 = NULL;
  vtkMultiBlockDataSet *temp1 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObjectCollection") &&
      ap.GetVTKObject(temp1, "vtkMultiBlockDataSet"))
    {
    op->Aggregate(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkStatisticsAlgorithm_Methods[] = {
  {(char*)"GetClassName", PyvtkStatisticsAlgorithm_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStatisticsAlgorithm_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStatisticsAlgorithm_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkStatisticsAlgorithm\nC++: vtkStatisticsAlgorithm *NewInstance()\n\n"},
  {(char*)"SetLearnOptionParameterConnection", PyvtkStatisticsAlgorithm_SetLearnOptionParameterConnection, 1,
   (char*)"V.SetLearnOptionParameterConnection(vtkAlgorithmOutput)\nC++: virtual void SetLearnOptionParameterConnection(\n    vtkAlgorithmOutput *params)\n\nA convenience method for setting learn input parameters (if one\nis expected or allowed). It is equivalent to calling\nSetInputConnection( 1, params );\n"},
  {(char*)"SetLearnOptionParameters", PyvtkStatisticsAlgorithm_SetLearnOptionParameters, 1,
   (char*)"V.SetLearnOptionParameters(vtkDataObject)\nC++: virtual void SetLearnOptionParameters(vtkDataObject *params)\n\nA convenience method for setting learn input parameters (if one\nis expected or allowed). It is equivalent to calling SetInput( 1,\nparams );\n"},
  {(char*)"SetInputModelConnection", PyvtkStatisticsAlgorithm_SetInputModelConnection, 1,
   (char*)"V.SetInputModelConnection(vtkAlgorithmOutput)\nC++: virtual void SetInputModelConnection(\n    vtkAlgorithmOutput *model)\n\nA convenience method for setting the input model connection (if\none is expected or allowed). It is equivalent to calling\nSetInputConnection( 2, model );\n"},
  {(char*)"SetInputModel", PyvtkStatisticsAlgorithm_SetInputModel, 1,
   (char*)"V.SetInputModel(vtkDataObject)\nC++: virtual void SetInputModel(vtkDataObject *model)\n\nA convenience method for setting the input model (if one is\nexpected or allowed). It is equivalent to calling SetInput( 2,\nmodel );\n"},
  {(char*)"SetLearnOption", PyvtkStatisticsAlgorithm_SetLearnOption, 1,
   (char*)"V.SetLearnOption(bool)\nC++: void SetLearnOption(bool a)\n\nSet/Get the Learn option.\n"},
  {(char*)"GetLearnOption", PyvtkStatisticsAlgorithm_GetLearnOption, 1,
   (char*)"V.GetLearnOption() -> bool\nC++: bool GetLearnOption()\n\nSet/Get the Learn option.\n"},
  {(char*)"SetDeriveOption", PyvtkStatisticsAlgorithm_SetDeriveOption, 1,
   (char*)"V.SetDeriveOption(bool)\nC++: void SetDeriveOption(bool a)\n\nSet/Get the Derive option.\n"},
  {(char*)"GetDeriveOption", PyvtkStatisticsAlgorithm_GetDeriveOption, 1,
   (char*)"V.GetDeriveOption() -> bool\nC++: bool GetDeriveOption()\n\nSet/Get the Derive option.\n"},
  {(char*)"SetAssessOption", PyvtkStatisticsAlgorithm_SetAssessOption, 1,
   (char*)"V.SetAssessOption(bool)\nC++: void SetAssessOption(bool a)\n\nSet/Get the Assess option.\n"},
  {(char*)"GetAssessOption", PyvtkStatisticsAlgorithm_GetAssessOption, 1,
   (char*)"V.GetAssessOption() -> bool\nC++: bool GetAssessOption()\n\nSet/Get the Assess option.\n"},
  {(char*)"SetTestOption", PyvtkStatisticsAlgorithm_SetTestOption, 1,
   (char*)"V.SetTestOption(bool)\nC++: void SetTestOption(bool a)\n\nSet/Get the Test option.\n"},
  {(char*)"GetTestOption", PyvtkStatisticsAlgorithm_GetTestOption, 1,
   (char*)"V.GetTestOption() -> bool\nC++: bool GetTestOption()\n\nSet/Get the Test option.\n"},
  {(char*)"SetNumberOfPrimaryTables", PyvtkStatisticsAlgorithm_SetNumberOfPrimaryTables, 1,
   (char*)"V.SetNumberOfPrimaryTables(int)\nC++: void SetNumberOfPrimaryTables(vtkIdType a)\n\nSet/Get the number of tables in the primary model.\n"},
  {(char*)"GetNumberOfPrimaryTables", PyvtkStatisticsAlgorithm_GetNumberOfPrimaryTables, 1,
   (char*)"V.GetNumberOfPrimaryTables() -> int\nC++: vtkIdType GetNumberOfPrimaryTables()\n\nSet/Get the number of tables in the primary model.\n"},
  {(char*)"SetAssessParameters", PyvtkStatisticsAlgorithm_SetAssessParameters, 1,
   (char*)"V.SetAssessParameters(vtkStringArray)\nC++: virtual void SetAssessParameters(vtkStringArray *)\n\nSet/get assessment parameters.\n"},
  {(char*)"GetAssessParameters", PyvtkStatisticsAlgorithm_GetAssessParameters, 1,
   (char*)"V.GetAssessParameters() -> vtkStringArray\nC++: vtkStringArray *GetAssessParameters()\n\nSet/get assessment parameters.\n"},
  {(char*)"SetAssessNames", PyvtkStatisticsAlgorithm_SetAssessNames, 1,
   (char*)"V.SetAssessNames(vtkStringArray)\nC++: virtual void SetAssessNames(vtkStringArray *)\n\nSet/get assessment names.\n"},
  {(char*)"GetAssessNames", PyvtkStatisticsAlgorithm_GetAssessNames, 1,
   (char*)"V.GetAssessNames() -> vtkStringArray\nC++: vtkStringArray *GetAssessNames()\n\nSet/get assessment names.\n"},
  {(char*)"SetAssessOptionParameter", PyvtkStatisticsAlgorithm_SetAssessOptionParameter, 1,
   (char*)"V.SetAssessOptionParameter(int, string)\nC++: void SetAssessOptionParameter(vtkIdType id,\n    vtkStdString name)\n\nSet the name of a parameter of the Assess option\n"},
  {(char*)"GetAssessParameter", PyvtkStatisticsAlgorithm_GetAssessParameter, 1,
   (char*)"V.GetAssessParameter(int) -> string\nC++: vtkStdString GetAssessParameter(vtkIdType id)\n\nGet the name of a parameter of the Assess option\n"},
  {(char*)"SetColumnStatus", PyvtkStatisticsAlgorithm_SetColumnStatus, 1,
   (char*)"V.SetColumnStatus(string, int)\nC++: virtual void SetColumnStatus(const char *namCol, int status)\n\nAdd or remove a column from the current analysis request. Once\nall the column status values are set, call\nRequestSelectedColumns() before selecting another set of columns\nfor a different analysis request. The way that columns selections\nare used varies from algorithm to algorithm.\n\nNote: the set of selected columns is maintained in\nvtkStatisticsAlgorithmPrivate::Buffer until\nRequestSelectedColumns() is called, at which point the set is\nappended to vtkStatisticsAlgorithmPrivate::Requests. If there are\nany columns in vtkStatisticsAlgorithmPrivate::Buffer at the time\nRequestData() is called, RequestSelectedColumns() will be called\nand the selection added to the list of requests.\n"},
  {(char*)"ResetAllColumnStates", PyvtkStatisticsAlgorithm_ResetAllColumnStates, 1,
   (char*)"V.ResetAllColumnStates()\nC++: virtual void ResetAllColumnStates()\n\nSet the the status of each and every column in the current\nrequest to OFF (0).\n"},
  {(char*)"RequestSelectedColumns", PyvtkStatisticsAlgorithm_RequestSelectedColumns, 1,
   (char*)"V.RequestSelectedColumns() -> int\nC++: virtual int RequestSelectedColumns()\n\nUse the current column status values to produce a new request for\nstatistics to be produced when RequestData() is called. See\nSetColumnStatus() for more information.\n"},
  {(char*)"ResetRequests", PyvtkStatisticsAlgorithm_ResetRequests, 1,
   (char*)"V.ResetRequests()\nC++: virtual void ResetRequests()\n\nEmpty the list of current requests.\n"},
  {(char*)"GetNumberOfRequests", PyvtkStatisticsAlgorithm_GetNumberOfRequests, 1,
   (char*)"V.GetNumberOfRequests() -> int\nC++: virtual vtkIdType GetNumberOfRequests()\n\nReturn the number of requests. This does not include any request\nthat is in the column-status buffer but for which\nRequestSelectedColumns() has not yet been called (even though it\nis possible this request will be honored when the filter is run\n-- see SetColumnStatus() for more information).\n"},
  {(char*)"GetNumberOfColumnsForRequest", PyvtkStatisticsAlgorithm_GetNumberOfColumnsForRequest, 1,
   (char*)"V.GetNumberOfColumnsForRequest(int) -> int\nC++: virtual vtkIdType GetNumberOfColumnsForRequest(\n    vtkIdType request)\n\nReturn the number of columns for a given request.\n"},
  {(char*)"GetColumnForRequest", PyvtkStatisticsAlgorithm_GetColumnForRequest, 1,
   (char*)"V.GetColumnForRequest(int, int) -> string\nC++: virtual const char *GetColumnForRequest(vtkIdType r,\n    vtkIdType c)\nV.GetColumnForRequest(int, int, string) -> int\nC++: virtual int GetColumnForRequest(vtkIdType r, vtkIdType c,\n    vtkStdString &columnName)\n\nProvide the name of the c-th column for the r-th request.\n\nFor the version of this routine that returns an integer, if the\nrequest or column does not exist because r or c is out of bounds,\nthis routine returns 0 and the value of columnName is\nunspecified. Otherwise, it returns 1 and the value of columnName\nis set.\n\nFor the version of this routine that returns const char*, if the\nrequest or column does not exist because r or c is out of bounds,\nthe routine returns NULL. Otherwise it returns the column name.\nThis version is not thread-safe.\n"},
  {(char*)"SetParameter", PyvtkStatisticsAlgorithm_SetParameter, 1,
   (char*)"V.SetParameter(string, int, vtkVariant) -> bool\nC++: virtual bool SetParameter(const char *parameter, int index,\n    vtkVariant value)\n\nA convenience method (in particular for access from other\napplications) to set parameter values of Learn mode. Return true\nif setting of requested parameter name was excuted, false\notherwise. NB: default method (which is sufficient for most\nstatistics algorithms) does not have any Learn parameters to set\nand always returns false.\n"},
  {(char*)"Aggregate", PyvtkStatisticsAlgorithm_Aggregate, 1,
   (char*)"V.Aggregate(vtkDataObjectCollection, vtkMultiBlockDataSet)\nC++: virtual void Aggregate(vtkDataObjectCollection *,\n    vtkMultiBlockDataSet *)\n\nGiven a collection of models, calculate aggregate model\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkStatisticsAlgorithmNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkStatisticsAlgorithm_Methods,
    "vtkStatisticsAlgorithm", modulename,
    NULL, NULL,
    PyvtkStatisticsAlgorithm_Doc(),
    PyVTKClass_vtkTableAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"INPUT_DATA", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"LEARN_PARAMETERS", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"INPUT_MODEL", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"OUTPUT_DATA", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"OUTPUT_MODEL", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"ASSESSMENT", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"OUTPUT_TEST", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkStatisticsAlgorithm_Doc()
{
  static const char *docstring[] = {
    "vtkStatisticsAlgorithm - Base class for statistics algorithms\n\n",
    "Superclass: vtkTableAlgorithm\n\n",
    "All statistics algorithms can conceptually be operated with several\noptions:\n* Learn: given an input data set, calculate a minimal statistical\n  model (e.g., sums, raw moments, joint probabilities).\n* Derive: given an input minimal statistical model, derive the full\n  model (e.g., descriptive statistics, quantiles, correlations,\n  conditional probabilities). NB: It may be, or not be, a problem\n  t",
    "hat a full model was not derived. For instance, when doing\n  parallel calculations, one only wants to derive the full model\n  after all partial calculations have completed. On the other hand,\n  one can also directly provide a full model, that was previously\n  calculated or guessed, and not derive a new one.\n* Assess: given an input data set, input statistics, and some form of\n  threshold, assess a",
    " subset of the data set.\n* Test: perform at least one statistical test. Therefore, a\n  vtkStatisticsAlgorithm has the following vtkTable ports\n* 3 input ports:\n* Data (mandatory)\n* Parameters to the learn phase (optional)\n* Input model (optional)\n* 3 output port (called Output):\n* Data (annotated with assessments when the Assess option is ON).\n* Output model (identical to the the input model when ",
    "Learn option is\nOFF).\n* Output of statistical tests. Some engines do not offer such tests\n  yet, in which case this output will always be empty even when the\n  Test option is ON.\n\nThanks:\n\nThanks to Philippe Pebay and David Thompson from Sandia National\nLaboratories for implementing this class.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStatisticsAlgorithm(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStatisticsAlgorithmNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStatisticsAlgorithm", o) != 0)
    {
    Py_DECREF(o);
    }

}

