// python wrapper for vtkArrayCalculator
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
#include "vtkArrayCalculator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkArrayCalculator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkArrayCalculator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkArrayCalculatorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkArrayCalculatorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkArrayCalculator_Doc();


static PyObject *
PyvtkArrayCalculator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

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
      tempr = op->vtkArrayCalculator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayCalculator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

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
      tempr = op->vtkArrayCalculator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayCalculator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  vtkArrayCalculator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkArrayCalculator::NewInstance();
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
PyvtkArrayCalculator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkArrayCalculator *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkArrayCalculator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayCalculator_SetFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFunction(temp0);
      }
    else
      {
      op->vtkArrayCalculator::SetFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFunction();
      }
    else
      {
      tempr = op->vtkArrayCalculator::GetFunction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayCalculator_AddScalarArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddScalarArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  char *temp0 = NULL;
  int temp1 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    if (ap.IsBound())
      {
      op->AddScalarArrayName(temp0, temp1);
      }
    else
      {
      op->vtkArrayCalculator::AddScalarArrayName(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayCalculator_AddVectorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddVectorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  char *temp0 = NULL;
  int temp1 = 0;
  int temp2 = 1;
  int temp3 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 4) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
    {
    if (ap.IsBound())
      {
      op->AddVectorArrayName(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkArrayCalculator::AddVectorArrayName(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayCalculator_AddScalarVariable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddScalarVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  int temp2 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    if (ap.IsBound())
      {
      op->AddScalarVariable(temp0, temp1, temp2);
      }
    else
      {
      op->vtkArrayCalculator::AddScalarVariable(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayCalculator_AddVectorVariable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddVectorVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  int temp2 = 0;
  int temp3 = 1;
  int temp4 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
    {
    if (ap.IsBound())
      {
      op->AddVectorVariable(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkArrayCalculator::AddVectorVariable(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayCalculator_AddCoordinateScalarVariable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCoordinateScalarVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  char *temp0 = NULL;
  int temp1 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    if (ap.IsBound())
      {
      op->AddCoordinateScalarVariable(temp0, temp1);
      }
    else
      {
      op->vtkArrayCalculator::AddCoordinateScalarVariable(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayCalculator_AddCoordinateVectorVariable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCoordinateVectorVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  char *temp0 = NULL;
  int temp1 = 0;
  int temp2 = 1;
  int temp3 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 4) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
    {
    if (ap.IsBound())
      {
      op->AddCoordinateVectorVariable(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkArrayCalculator::AddCoordinateVectorVariable(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayCalculator_SetResultArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResultArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetResultArrayName(temp0);
      }
    else
      {
      op->vtkArrayCalculator::SetResultArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetResultArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResultArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetResultArrayName();
      }
    else
      {
      tempr = op->vtkArrayCalculator::GetResultArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetResultArrayType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResultArrayType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetResultArrayType();
      }
    else
      {
      tempr = op->vtkArrayCalculator::GetResultArrayType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayCalculator_SetResultArrayType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResultArrayType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetResultArrayType(temp0);
      }
    else
      {
      op->vtkArrayCalculator::SetResultArrayType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetCoordinateResults(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateResults");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCoordinateResults();
      }
    else
      {
      tempr = op->vtkArrayCalculator::GetCoordinateResults();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayCalculator_SetCoordinateResults(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordinateResults");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCoordinateResults(temp0);
      }
    else
      {
      op->vtkArrayCalculator::SetCoordinateResults(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayCalculator_CoordinateResultsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CoordinateResultsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CoordinateResultsOn();
      }
    else
      {
      op->vtkArrayCalculator::CoordinateResultsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayCalculator_CoordinateResultsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CoordinateResultsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CoordinateResultsOff();
      }
    else
      {
      op->vtkArrayCalculator::CoordinateResultsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayCalculator_SetAttributeMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAttributeMode(temp0);
      }
    else
      {
      op->vtkArrayCalculator::SetAttributeMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetAttributeMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAttributeMode();
      }
    else
      {
      tempr = op->vtkArrayCalculator::GetAttributeMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayCalculator_SetAttributeModeToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeModeToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAttributeModeToDefault();
      }
    else
      {
      op->vtkArrayCalculator::SetAttributeModeToDefault();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayCalculator_SetAttributeModeToUsePointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeModeToUsePointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAttributeModeToUsePointData();
      }
    else
      {
      op->vtkArrayCalculator::SetAttributeModeToUsePointData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayCalculator_SetAttributeModeToUseCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeModeToUseCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAttributeModeToUseCellData();
      }
    else
      {
      op->vtkArrayCalculator::SetAttributeModeToUseCellData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayCalculator_SetAttributeModeToUseVertexData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeModeToUseVertexData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAttributeModeToUseVertexData();
      }
    else
      {
      op->vtkArrayCalculator::SetAttributeModeToUseVertexData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayCalculator_SetAttributeModeToUseEdgeData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeModeToUseEdgeData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAttributeModeToUseEdgeData();
      }
    else
      {
      op->vtkArrayCalculator::SetAttributeModeToUseEdgeData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetAttributeModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAttributeModeAsString();
      }
    else
      {
      tempr = op->vtkArrayCalculator::GetAttributeModeAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayCalculator_RemoveAllVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllVariables();
      }
    else
      {
      op->vtkArrayCalculator::RemoveAllVariables();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayCalculator_RemoveScalarVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveScalarVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveScalarVariables();
      }
    else
      {
      op->vtkArrayCalculator::RemoveScalarVariables();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayCalculator_RemoveVectorVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveVectorVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveVectorVariables();
      }
    else
      {
      op->vtkArrayCalculator::RemoveVectorVariables();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayCalculator_RemoveCoordinateScalarVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveCoordinateScalarVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveCoordinateScalarVariables();
      }
    else
      {
      op->vtkArrayCalculator::RemoveCoordinateScalarVariables();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayCalculator_RemoveCoordinateVectorVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveCoordinateVectorVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveCoordinateVectorVariables();
      }
    else
      {
      op->vtkArrayCalculator::RemoveCoordinateVectorVariables();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetScalarArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  int temp0;
  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarArrayName(temp0);
      }
    else
      {
      tempr = op->vtkArrayCalculator::GetScalarArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetVectorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  int temp0;
  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVectorArrayName(temp0);
      }
    else
      {
      tempr = op->vtkArrayCalculator::GetVectorArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetScalarVariableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarVariableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  int temp0;
  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarVariableName(temp0);
      }
    else
      {
      tempr = op->vtkArrayCalculator::GetScalarVariableName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetVectorVariableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorVariableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  int temp0;
  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVectorVariableName(temp0);
      }
    else
      {
      tempr = op->vtkArrayCalculator::GetVectorVariableName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetSelectedScalarComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedScalarComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectedScalarComponent(temp0);
      }
    else
      {
      tempr = op->vtkArrayCalculator::GetSelectedScalarComponent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetNumberOfScalarArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfScalarArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfScalarArrays();
      }
    else
      {
      tempr = op->vtkArrayCalculator::GetNumberOfScalarArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetNumberOfVectorArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVectorArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfVectorArrays();
      }
    else
      {
      tempr = op->vtkArrayCalculator::GetNumberOfVectorArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayCalculator_SetReplaceInvalidValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReplaceInvalidValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReplaceInvalidValues(temp0);
      }
    else
      {
      op->vtkArrayCalculator::SetReplaceInvalidValues(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetReplaceInvalidValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReplaceInvalidValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetReplaceInvalidValues();
      }
    else
      {
      tempr = op->vtkArrayCalculator::GetReplaceInvalidValues();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayCalculator_ReplaceInvalidValuesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceInvalidValuesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReplaceInvalidValuesOn();
      }
    else
      {
      op->vtkArrayCalculator::ReplaceInvalidValuesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayCalculator_ReplaceInvalidValuesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceInvalidValuesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReplaceInvalidValuesOff();
      }
    else
      {
      op->vtkArrayCalculator::ReplaceInvalidValuesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayCalculator_SetReplacementValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReplacementValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReplacementValue(temp0);
      }
    else
      {
      op->vtkArrayCalculator::SetReplacementValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetReplacementValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReplacementValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetReplacementValue();
      }
    else
      {
      tempr = op->vtkArrayCalculator::GetReplacementValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkArrayCalculator_Methods[] = {
  {(char*)"GetClassName", PyvtkArrayCalculator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkArrayCalculator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkArrayCalculator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkArrayCalculator\nC++: vtkArrayCalculator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkArrayCalculator_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkArrayCalculator\nC++: vtkArrayCalculator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFunction", PyvtkArrayCalculator_SetFunction, 1,
   (char*)"V.SetFunction(string)\nC++: virtual void SetFunction(const char *function)\n\nSet/Get the function to be evaluated.\n"},
  {(char*)"GetFunction", PyvtkArrayCalculator_GetFunction, 1,
   (char*)"V.GetFunction() -> string\nC++: char *GetFunction()\n\nSet/Get the function to be evaluated.\n"},
  {(char*)"AddScalarArrayName", PyvtkArrayCalculator_AddScalarArrayName, 1,
   (char*)"V.AddScalarArrayName(string, int)\nC++: void AddScalarArrayName(const char *arrayName,\n    int component=0)\n\nAdd an array name to the list of arrays used in the function and\nspecify which components of the array to use in evaluating the\nfunction.  The array name must match the name in the function. \nUse AddScalarVariable or AddVectorVariable to use a variable name\ndifferent from the array name.\n"},
  {(char*)"AddVectorArrayName", PyvtkArrayCalculator_AddVectorArrayName, 1,
   (char*)"V.AddVectorArrayName(string, int, int, int)\nC++: void AddVectorArrayName(const char *arrayName,\n    int component0=0, int component1=1, int component2=2)\n\nAdd an array name to the list of arrays used in the function and\nspecify which components of the array to use in evaluating the\nfunction.  The array name must match the name in the function. \nUse AddScalarVariable or AddVectorVariable to use a variable name\ndifferent from the array name.\n"},
  {(char*)"AddScalarVariable", PyvtkArrayCalculator_AddScalarVariable, 1,
   (char*)"V.AddScalarVariable(string, string, int)\nC++: void AddScalarVariable(const char *variableName,\n    const char *arrayName, int component=0)\n\nAdd a variable name, a corresponding array name, and which\ncomponents of the array to use.\n"},
  {(char*)"AddVectorVariable", PyvtkArrayCalculator_AddVectorVariable, 1,
   (char*)"V.AddVectorVariable(string, string, int, int, int)\nC++: void AddVectorVariable(const char *variableName,\n    const char *arrayName, int component0=0, int component1=1,\n    int component2=2)\n\nAdd a variable name, a corresponding array name, and which\ncomponents of the array to use.\n"},
  {(char*)"AddCoordinateScalarVariable", PyvtkArrayCalculator_AddCoordinateScalarVariable, 1,
   (char*)"V.AddCoordinateScalarVariable(string, int)\nC++: void AddCoordinateScalarVariable(const char *variableName,\n    int component=0)\n\nAdd a variable name, a corresponding array name, and which\ncomponents of the array to use.\n"},
  {(char*)"AddCoordinateVectorVariable", PyvtkArrayCalculator_AddCoordinateVectorVariable, 1,
   (char*)"V.AddCoordinateVectorVariable(string, int, int, int)\nC++: void AddCoordinateVectorVariable(const char *variableName,\n    int component0=0, int component1=1, int component2=2)\n\nAdd a variable name, a corresponding array name, and which\ncomponents of the array to use.\n"},
  {(char*)"SetResultArrayName", PyvtkArrayCalculator_SetResultArrayName, 1,
   (char*)"V.SetResultArrayName(string)\nC++: void SetResultArrayName(const char *name)\n\nSet the name of the array in which to store the result of\nevaluating this function.  If this is the name of an existing\narray, that array will be overwritten.  Otherwise a new array\nwill be created with the specified name.\n"},
  {(char*)"GetResultArrayName", PyvtkArrayCalculator_GetResultArrayName, 1,
   (char*)"V.GetResultArrayName() -> string\nC++: char *GetResultArrayName()\n\nSet the name of the array in which to store the result of\nevaluating this function.  If this is the name of an existing\narray, that array will be overwritten.  Otherwise a new array\nwill be created with the specified name.\n"},
  {(char*)"GetResultArrayType", PyvtkArrayCalculator_GetResultArrayType, 1,
   (char*)"V.GetResultArrayType() -> int\nC++: int GetResultArrayType()\n\nType of the result array. It is ignored if CoordinateResults is\ntrue. Initial value is VTK_DOUBLE.\n"},
  {(char*)"SetResultArrayType", PyvtkArrayCalculator_SetResultArrayType, 1,
   (char*)"V.SetResultArrayType(int)\nC++: void SetResultArrayType(int a)\n\nType of the result array. It is ignored if CoordinateResults is\ntrue. Initial value is VTK_DOUBLE.\n"},
  {(char*)"GetCoordinateResults", PyvtkArrayCalculator_GetCoordinateResults, 1,
   (char*)"V.GetCoordinateResults() -> int\nC++: int GetCoordinateResults()\n\nSet whether to output results as coordinates.  ResultArrayName\nwill be ignored.  Outputing as coordinates is only valid with\nvector results and if the AttributeMode is\nAttributeModeToUsePointData. If a valid output can't be made, an\nerror will occur.\n"},
  {(char*)"SetCoordinateResults", PyvtkArrayCalculator_SetCoordinateResults, 1,
   (char*)"V.SetCoordinateResults(int)\nC++: void SetCoordinateResults(int a)\n\nSet whether to output results as coordinates.  ResultArrayName\nwill be ignored.  Outputing as coordinates is only valid with\nvector results and if the AttributeMode is\nAttributeModeToUsePointData. If a valid output can't be made, an\nerror will occur.\n"},
  {(char*)"CoordinateResultsOn", PyvtkArrayCalculator_CoordinateResultsOn, 1,
   (char*)"V.CoordinateResultsOn()\nC++: void CoordinateResultsOn()\n\nSet whether to output results as coordinates.  ResultArrayName\nwill be ignored.  Outputing as coordinates is only valid with\nvector results and if the AttributeMode is\nAttributeModeToUsePointData. If a valid output can't be made, an\nerror will occur.\n"},
  {(char*)"CoordinateResultsOff", PyvtkArrayCalculator_CoordinateResultsOff, 1,
   (char*)"V.CoordinateResultsOff()\nC++: void CoordinateResultsOff()\n\nSet whether to output results as coordinates.  ResultArrayName\nwill be ignored.  Outputing as coordinates is only valid with\nvector results and if the AttributeMode is\nAttributeModeToUsePointData. If a valid output can't be made, an\nerror will occur.\n"},
  {(char*)"SetAttributeMode", PyvtkArrayCalculator_SetAttributeMode, 1,
   (char*)"V.SetAttributeMode(int)\nC++: void SetAttributeMode(int a)\n\nControl whether the filter operates on point data or cell data.\nBy default (AttributeModeToDefault), the filter uses point data.\nAlternatively you can explicitly set the filter to use point data\n(AttributeModeToUsePointData) or cell data\n(AttributeModeToUseCellData). For graphs you can set the filter\nto use vertex data (AttributeModeToUseVertexData) or edge data\n(AttributeModeToUseEdgeData).\n"},
  {(char*)"GetAttributeMode", PyvtkArrayCalculator_GetAttributeMode, 1,
   (char*)"V.GetAttributeMode() -> int\nC++: int GetAttributeMode()\n\nControl whether the filter operates on point data or cell data.\nBy default (AttributeModeToDefault), the filter uses point data.\nAlternatively you can explicitly set the filter to use point data\n(AttributeModeToUsePointData) or cell data\n(AttributeModeToUseCellData). For graphs you can set the filter\nto use vertex data (AttributeModeToUseVertexData) or edge data\n(AttributeModeToUseEdgeData).\n"},
  {(char*)"SetAttributeModeToDefault", PyvtkArrayCalculator_SetAttributeModeToDefault, 1,
   (char*)"V.SetAttributeModeToDefault()\nC++: void SetAttributeModeToDefault()\n\nControl whether the filter operates on point data or cell data.\nBy default (AttributeModeToDefault), the filter uses point data.\nAlternatively you can explicitly set the filter to use point data\n(AttributeModeToUsePointData) or cell data\n(AttributeModeToUseCellData). For graphs you can set the filter\nto use vertex data (AttributeModeToUseVertexData) or edge data\n(AttributeModeToUseEdgeData).\n"},
  {(char*)"SetAttributeModeToUsePointData", PyvtkArrayCalculator_SetAttributeModeToUsePointData, 1,
   (char*)"V.SetAttributeModeToUsePointData()\nC++: void SetAttributeModeToUsePointData()\n\nControl whether the filter operates on point data or cell data.\nBy default (AttributeModeToDefault), the filter uses point data.\nAlternatively you can explicitly set the filter to use point data\n(AttributeModeToUsePointData) or cell data\n(AttributeModeToUseCellData). For graphs you can set the filter\nto use vertex data (AttributeModeToUseVertexData) or edge data\n(AttributeModeToUseEdgeData).\n"},
  {(char*)"SetAttributeModeToUseCellData", PyvtkArrayCalculator_SetAttributeModeToUseCellData, 1,
   (char*)"V.SetAttributeModeToUseCellData()\nC++: void SetAttributeModeToUseCellData()\n\nControl whether the filter operates on point data or cell data.\nBy default (AttributeModeToDefault), the filter uses point data.\nAlternatively you can explicitly set the filter to use point data\n(AttributeModeToUsePointData) or cell data\n(AttributeModeToUseCellData). For graphs you can set the filter\nto use vertex data (AttributeModeToUseVertexData) or edge data\n(AttributeModeToUseEdgeData).\n"},
  {(char*)"SetAttributeModeToUseVertexData", PyvtkArrayCalculator_SetAttributeModeToUseVertexData, 1,
   (char*)"V.SetAttributeModeToUseVertexData()\nC++: void SetAttributeModeToUseVertexData()\n\nControl whether the filter operates on point data or cell data.\nBy default (AttributeModeToDefault), the filter uses point data.\nAlternatively you can explicitly set the filter to use point data\n(AttributeModeToUsePointData) or cell data\n(AttributeModeToUseCellData). For graphs you can set the filter\nto use vertex data (AttributeModeToUseVertexData) or edge data\n(AttributeModeToUseEdgeData).\n"},
  {(char*)"SetAttributeModeToUseEdgeData", PyvtkArrayCalculator_SetAttributeModeToUseEdgeData, 1,
   (char*)"V.SetAttributeModeToUseEdgeData()\nC++: void SetAttributeModeToUseEdgeData()\n\nControl whether the filter operates on point data or cell data.\nBy default (AttributeModeToDefault), the filter uses point data.\nAlternatively you can explicitly set the filter to use point data\n(AttributeModeToUsePointData) or cell data\n(AttributeModeToUseCellData). For graphs you can set the filter\nto use vertex data (AttributeModeToUseVertexData) or edge data\n(AttributeModeToUseEdgeData).\n"},
  {(char*)"GetAttributeModeAsString", PyvtkArrayCalculator_GetAttributeModeAsString, 1,
   (char*)"V.GetAttributeModeAsString() -> string\nC++: const char *GetAttributeModeAsString()\n\nControl whether the filter operates on point data or cell data.\nBy default (AttributeModeToDefault), the filter uses point data.\nAlternatively you can explicitly set the filter to use point data\n(AttributeModeToUsePointData) or cell data\n(AttributeModeToUseCellData). For graphs you can set the filter\nto use vertex data (AttributeModeToUseVertexData) or edge data\n(AttributeModeToUseEdgeData).\n"},
  {(char*)"RemoveAllVariables", PyvtkArrayCalculator_RemoveAllVariables, 1,
   (char*)"V.RemoveAllVariables()\nC++: void RemoveAllVariables()\n\nRemove all the variable names and their associated array names.\n"},
  {(char*)"RemoveScalarVariables", PyvtkArrayCalculator_RemoveScalarVariables, 1,
   (char*)"V.RemoveScalarVariables()\nC++: virtual void RemoveScalarVariables()\n\nRemove all the scalar variable names and their associated array\nnames.\n"},
  {(char*)"RemoveVectorVariables", PyvtkArrayCalculator_RemoveVectorVariables, 1,
   (char*)"V.RemoveVectorVariables()\nC++: virtual void RemoveVectorVariables()\n\nRemove all the scalar variable names and their associated array\nnames.\n"},
  {(char*)"RemoveCoordinateScalarVariables", PyvtkArrayCalculator_RemoveCoordinateScalarVariables, 1,
   (char*)"V.RemoveCoordinateScalarVariables()\nC++: virtual void RemoveCoordinateScalarVariables()\n\nRemove all the coordinate variables.\n"},
  {(char*)"RemoveCoordinateVectorVariables", PyvtkArrayCalculator_RemoveCoordinateVectorVariables, 1,
   (char*)"V.RemoveCoordinateVectorVariables()\nC++: virtual void RemoveCoordinateVectorVariables()\n\nRemove all the coordinate variables.\n"},
  {(char*)"GetScalarArrayName", PyvtkArrayCalculator_GetScalarArrayName, 1,
   (char*)"V.GetScalarArrayName(int) -> string\nC++: char *GetScalarArrayName(int i)\n\nMethods to get information about the current variables.\n"},
  {(char*)"GetVectorArrayName", PyvtkArrayCalculator_GetVectorArrayName, 1,
   (char*)"V.GetVectorArrayName(int) -> string\nC++: char *GetVectorArrayName(int i)\n\nMethods to get information about the current variables.\n"},
  {(char*)"GetScalarVariableName", PyvtkArrayCalculator_GetScalarVariableName, 1,
   (char*)"V.GetScalarVariableName(int) -> string\nC++: char *GetScalarVariableName(int i)\n\nMethods to get information about the current variables.\n"},
  {(char*)"GetVectorVariableName", PyvtkArrayCalculator_GetVectorVariableName, 1,
   (char*)"V.GetVectorVariableName(int) -> string\nC++: char *GetVectorVariableName(int i)\n\nMethods to get information about the current variables.\n"},
  {(char*)"GetSelectedScalarComponent", PyvtkArrayCalculator_GetSelectedScalarComponent, 1,
   (char*)"V.GetSelectedScalarComponent(int) -> int\nC++: int GetSelectedScalarComponent(int i)\n\nMethods to get information about the current variables.\n"},
  {(char*)"GetNumberOfScalarArrays", PyvtkArrayCalculator_GetNumberOfScalarArrays, 1,
   (char*)"V.GetNumberOfScalarArrays() -> int\nC++: int GetNumberOfScalarArrays()\n\nMethods to get information about the current variables.\n"},
  {(char*)"GetNumberOfVectorArrays", PyvtkArrayCalculator_GetNumberOfVectorArrays, 1,
   (char*)"V.GetNumberOfVectorArrays() -> int\nC++: int GetNumberOfVectorArrays()\n\nMethods to get information about the current variables.\n"},
  {(char*)"SetReplaceInvalidValues", PyvtkArrayCalculator_SetReplaceInvalidValues, 1,
   (char*)"V.SetReplaceInvalidValues(int)\nC++: void SetReplaceInvalidValues(int a)\n\nWhen ReplaceInvalidValues is on, all invalid values (such as\nsqrt(-2), note that function parser does not handle complex\nnumbers) will be replaced by ReplacementValue. Otherwise an error\nwill be reported\n"},
  {(char*)"GetReplaceInvalidValues", PyvtkArrayCalculator_GetReplaceInvalidValues, 1,
   (char*)"V.GetReplaceInvalidValues() -> int\nC++: int GetReplaceInvalidValues()\n\nWhen ReplaceInvalidValues is on, all invalid values (such as\nsqrt(-2), note that function parser does not handle complex\nnumbers) will be replaced by ReplacementValue. Otherwise an error\nwill be reported\n"},
  {(char*)"ReplaceInvalidValuesOn", PyvtkArrayCalculator_ReplaceInvalidValuesOn, 1,
   (char*)"V.ReplaceInvalidValuesOn()\nC++: void ReplaceInvalidValuesOn()\n\nWhen ReplaceInvalidValues is on, all invalid values (such as\nsqrt(-2), note that function parser does not handle complex\nnumbers) will be replaced by ReplacementValue. Otherwise an error\nwill be reported\n"},
  {(char*)"ReplaceInvalidValuesOff", PyvtkArrayCalculator_ReplaceInvalidValuesOff, 1,
   (char*)"V.ReplaceInvalidValuesOff()\nC++: void ReplaceInvalidValuesOff()\n\nWhen ReplaceInvalidValues is on, all invalid values (such as\nsqrt(-2), note that function parser does not handle complex\nnumbers) will be replaced by ReplacementValue. Otherwise an error\nwill be reported\n"},
  {(char*)"SetReplacementValue", PyvtkArrayCalculator_SetReplacementValue, 1,
   (char*)"V.SetReplacementValue(float)\nC++: void SetReplacementValue(double a)\n\nWhen ReplaceInvalidValues is on, all invalid values (such as\nsqrt(-2), note that function parser does not handle complex\nnumbers) will be replaced by ReplacementValue. Otherwise an error\nwill be reported\n"},
  {(char*)"GetReplacementValue", PyvtkArrayCalculator_GetReplacementValue, 1,
   (char*)"V.GetReplacementValue() -> float\nC++: double GetReplacementValue()\n\nWhen ReplaceInvalidValues is on, all invalid values (such as\nsqrt(-2), note that function parser does not handle complex\nnumbers) will be replaced by ReplacementValue. Otherwise an error\nwill be reported\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkArrayCalculator_StaticNew()
{
  return vtkArrayCalculator::New();
}

PyObject *PyVTKClass_vtkArrayCalculatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkArrayCalculator_StaticNew,
    PyvtkArrayCalculator_Methods,
    "vtkArrayCalculator", modulename,
    NULL, NULL,
    PyvtkArrayCalculator_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkArrayCalculator_Doc()
{
  static const char *docstring[] = {
    "vtkArrayCalculator - perform mathematical operations on data in field\ndata arrays\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkArrayCalculator performs operations on vectors or scalars in field\ndata arrays.  It uses vtkFunctionParser to do the parsing and to\nevaluate the function for each entry in the input arrays.  The arrays\nused in a given function must be all in point data or all in cell\ndata. The resulting array will be stored as a field data array.  The\nresult array can either be stored in a new array or it can o",
    "verwrite\nan existing array.\n\nThe functions that this array calculator understands is:\n\nstandard operations: + - * / ^ . build unit vectors: iHat, jHat, kHat\n(ie (1,0,0), (0,1,0), (0,0,1)) abs acos asin atan ceil cos cosh exp\nfloor log mag min max norm sign sin sinh sqrt tan tanh  Note that\nsome of these operations work on scalars, some on vectors, and some\non both (e.g., you can multiply a scalar ",
    "times a vector). The\noperations are performed tuple-wise (i.e., tuple-by-tuple). The user\nmust specify which arrays to use as vectors and/or scalars, and the\nname of the output data array.\n\nSee Also:\n\nvtkFunctionParser\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkArrayCalculator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkArrayCalculatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkArrayCalculator", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_ATTRIBUTE_MODE_DEFAULT", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_ATTRIBUTE_MODE_USE_POINT_DATA", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_ATTRIBUTE_MODE_USE_CELL_DATA", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(3);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_ATTRIBUTE_MODE_USE_VERTEX_DATA", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(4);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_ATTRIBUTE_MODE_USE_EDGE_DATA", o) != 0)
    {
    Py_DECREF(o);
    }

}

