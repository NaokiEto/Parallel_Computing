// python wrapper for vtkThreshold
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
#include "vtkThreshold.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkThreshold(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkThreshold(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkThresholdNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkThresholdNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkThreshold_Doc();


static PyObject *
PyvtkThreshold_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

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
      tempr = op->vtkThreshold::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

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
      tempr = op->vtkThreshold::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  vtkThreshold *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkThreshold::NewInstance();
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
PyvtkThreshold_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkThreshold *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkThreshold::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_ThresholdByLower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdByLower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ThresholdByLower(temp0);
      }
    else
      {
      op->vtkThreshold::ThresholdByLower(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_ThresholdByUpper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdByUpper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ThresholdByUpper(temp0);
      }
    else
      {
      op->vtkThreshold::ThresholdByUpper(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_ThresholdBetween(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdBetween");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->ThresholdBetween(temp0, temp1);
      }
    else
      {
      op->vtkThreshold::ThresholdBetween(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_GetUpperThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpperThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUpperThreshold();
      }
    else
      {
      tempr = op->vtkThreshold::GetUpperThreshold();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_GetLowerThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowerThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLowerThreshold();
      }
    else
      {
      tempr = op->vtkThreshold::GetLowerThreshold();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_SetAttributeMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

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
      op->vtkThreshold::SetAttributeMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_GetAttributeMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

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
      tempr = op->vtkThreshold::GetAttributeMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_SetAttributeModeToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeModeToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAttributeModeToDefault();
      }
    else
      {
      op->vtkThreshold::SetAttributeModeToDefault();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_SetAttributeModeToUsePointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeModeToUsePointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAttributeModeToUsePointData();
      }
    else
      {
      op->vtkThreshold::SetAttributeModeToUsePointData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_SetAttributeModeToUseCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeModeToUseCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAttributeModeToUseCellData();
      }
    else
      {
      op->vtkThreshold::SetAttributeModeToUseCellData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_GetAttributeModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

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
      tempr = op->vtkThreshold::GetAttributeModeAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_SetComponentMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComponentMode(temp0);
      }
    else
      {
      op->vtkThreshold::SetComponentMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_GetComponentModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComponentModeMinValue();
      }
    else
      {
      tempr = op->vtkThreshold::GetComponentModeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_GetComponentModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComponentModeMaxValue();
      }
    else
      {
      tempr = op->vtkThreshold::GetComponentModeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_GetComponentMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComponentMode();
      }
    else
      {
      tempr = op->vtkThreshold::GetComponentMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_SetComponentModeToUseSelected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentModeToUseSelected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetComponentModeToUseSelected();
      }
    else
      {
      op->vtkThreshold::SetComponentModeToUseSelected();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_SetComponentModeToUseAll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentModeToUseAll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetComponentModeToUseAll();
      }
    else
      {
      op->vtkThreshold::SetComponentModeToUseAll();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_SetComponentModeToUseAny(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentModeToUseAny");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetComponentModeToUseAny();
      }
    else
      {
      op->vtkThreshold::SetComponentModeToUseAny();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_GetComponentModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComponentModeAsString();
      }
    else
      {
      tempr = op->vtkThreshold::GetComponentModeAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_SetSelectedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSelectedComponent(temp0);
      }
    else
      {
      op->vtkThreshold::SetSelectedComponent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_GetSelectedComponentMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedComponentMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectedComponentMinValue();
      }
    else
      {
      tempr = op->vtkThreshold::GetSelectedComponentMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_GetSelectedComponentMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedComponentMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectedComponentMaxValue();
      }
    else
      {
      tempr = op->vtkThreshold::GetSelectedComponentMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_GetSelectedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectedComponent();
      }
    else
      {
      tempr = op->vtkThreshold::GetSelectedComponent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_SetAllScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAllScalars(temp0);
      }
    else
      {
      op->vtkThreshold::SetAllScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_GetAllScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAllScalars();
      }
    else
      {
      tempr = op->vtkThreshold::GetAllScalars();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_AllScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllScalarsOn();
      }
    else
      {
      op->vtkThreshold::AllScalarsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_AllScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllScalarsOff();
      }
    else
      {
      op->vtkThreshold::AllScalarsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_SetPointsDataTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointsDataTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetPointsDataTypeToDouble();
      }
    else
      {
      op->vtkThreshold::SetPointsDataTypeToDouble();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_SetPointsDataTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointsDataTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetPointsDataTypeToFloat();
      }
    else
      {
      op->vtkThreshold::SetPointsDataTypeToFloat();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_SetPointsDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointsDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPointsDataType(temp0);
      }
    else
      {
      op->vtkThreshold::SetPointsDataType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_GetPointsDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointsDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointsDataType();
      }
    else
      {
      tempr = op->vtkThreshold::GetPointsDataType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkThreshold_Methods[] = {
  {(char*)"GetClassName", PyvtkThreshold_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkThreshold_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkThreshold_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkThreshold\nC++: vtkThreshold *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkThreshold_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkThreshold\nC++: vtkThreshold *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ThresholdByLower", PyvtkThreshold_ThresholdByLower, 1,
   (char*)"V.ThresholdByLower(float)\nC++: void ThresholdByLower(double lower)\n\nCriterion is cells whose scalars are less or equal to lower\nthreshold.\n"},
  {(char*)"ThresholdByUpper", PyvtkThreshold_ThresholdByUpper, 1,
   (char*)"V.ThresholdByUpper(float)\nC++: void ThresholdByUpper(double upper)\n\nCriterion is cells whose scalars are greater or equal to upper\nthreshold.\n"},
  {(char*)"ThresholdBetween", PyvtkThreshold_ThresholdBetween, 1,
   (char*)"V.ThresholdBetween(float, float)\nC++: void ThresholdBetween(double lower, double upper)\n\nCriterion is cells whose scalars are between lower and upper\nthresholds (inclusive of the end values).\n"},
  {(char*)"GetUpperThreshold", PyvtkThreshold_GetUpperThreshold, 1,
   (char*)"V.GetUpperThreshold() -> float\nC++: double GetUpperThreshold()\n\nGet the Upper and Lower thresholds.\n"},
  {(char*)"GetLowerThreshold", PyvtkThreshold_GetLowerThreshold, 1,
   (char*)"V.GetLowerThreshold() -> float\nC++: double GetLowerThreshold()\n\nGet the Upper and Lower thresholds.\n"},
  {(char*)"SetAttributeMode", PyvtkThreshold_SetAttributeMode, 1,
   (char*)"V.SetAttributeMode(int)\nC++: void SetAttributeMode(int a)\n\nControl how the filter works with scalar point data and cell\nattribute data.  By default (AttributeModeToDefault), the filter\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the filter to\nuse point data (AttributeModeToUsePointData) or cell data\n(AttributeModeToUseCellData).\n"},
  {(char*)"GetAttributeMode", PyvtkThreshold_GetAttributeMode, 1,
   (char*)"V.GetAttributeMode() -> int\nC++: int GetAttributeMode()\n\nControl how the filter works with scalar point data and cell\nattribute data.  By default (AttributeModeToDefault), the filter\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the filter to\nuse point data (AttributeModeToUsePointData) or cell data\n(AttributeModeToUseCellData).\n"},
  {(char*)"SetAttributeModeToDefault", PyvtkThreshold_SetAttributeModeToDefault, 1,
   (char*)"V.SetAttributeModeToDefault()\nC++: void SetAttributeModeToDefault()\n\nControl how the filter works with scalar point data and cell\nattribute data.  By default (AttributeModeToDefault), the filter\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the filter to\nuse point data (AttributeModeToUsePointData) or cell data\n(AttributeModeToUseCellData).\n"},
  {(char*)"SetAttributeModeToUsePointData", PyvtkThreshold_SetAttributeModeToUsePointData, 1,
   (char*)"V.SetAttributeModeToUsePointData()\nC++: void SetAttributeModeToUsePointData()\n\nControl how the filter works with scalar point data and cell\nattribute data.  By default (AttributeModeToDefault), the filter\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the filter to\nuse point data (AttributeModeToUsePointData) or cell data\n(AttributeModeToUseCellData).\n"},
  {(char*)"SetAttributeModeToUseCellData", PyvtkThreshold_SetAttributeModeToUseCellData, 1,
   (char*)"V.SetAttributeModeToUseCellData()\nC++: void SetAttributeModeToUseCellData()\n\nControl how the filter works with scalar point data and cell\nattribute data.  By default (AttributeModeToDefault), the filter\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the filter to\nuse point data (AttributeModeToUsePointData) or cell data\n(AttributeModeToUseCellData).\n"},
  {(char*)"GetAttributeModeAsString", PyvtkThreshold_GetAttributeModeAsString, 1,
   (char*)"V.GetAttributeModeAsString() -> string\nC++: const char *GetAttributeModeAsString()\n\nControl how the filter works with scalar point data and cell\nattribute data.  By default (AttributeModeToDefault), the filter\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the filter to\nuse point data (AttributeModeToUsePointData) or cell data\n(AttributeModeToUseCellData).\n"},
  {(char*)"SetComponentMode", PyvtkThreshold_SetComponentMode, 1,
   (char*)"V.SetComponentMode(int)\nC++: void SetComponentMode(int)\n\nControl how the decision of in / out is made with multi-component\ndata. The choices are to use the selected component (specified in\nthe SelectedComponent ivar), or to look at all components. When\nlooking at all components, the evaluation can pass if all the\ncomponents satisfy the rule (UseAll) or if any satisfy is\n(UseAny). The default value is UseSelected.\n"},
  {(char*)"GetComponentModeMinValue", PyvtkThreshold_GetComponentModeMinValue, 1,
   (char*)"V.GetComponentModeMinValue() -> int\nC++: int GetComponentModeMinValue()\n\nControl how the decision of in / out is made with multi-component\ndata. The choices are to use the selected component (specified in\nthe SelectedComponent ivar), or to look at all components. When\nlooking at all components, the evaluation can pass if all the\ncomponents satisfy the rule (UseAll) or if any satisfy is\n(UseAny). The default value is UseSelected.\n"},
  {(char*)"GetComponentModeMaxValue", PyvtkThreshold_GetComponentModeMaxValue, 1,
   (char*)"V.GetComponentModeMaxValue() -> int\nC++: int GetComponentModeMaxValue()\n\nControl how the decision of in / out is made with multi-component\ndata. The choices are to use the selected component (specified in\nthe SelectedComponent ivar), or to look at all components. When\nlooking at all components, the evaluation can pass if all the\ncomponents satisfy the rule (UseAll) or if any satisfy is\n(UseAny). The default value is UseSelected.\n"},
  {(char*)"GetComponentMode", PyvtkThreshold_GetComponentMode, 1,
   (char*)"V.GetComponentMode() -> int\nC++: int GetComponentMode()\n\nControl how the decision of in / out is made with multi-component\ndata. The choices are to use the selected component (specified in\nthe SelectedComponent ivar), or to look at all components. When\nlooking at all components, the evaluation can pass if all the\ncomponents satisfy the rule (UseAll) or if any satisfy is\n(UseAny). The default value is UseSelected.\n"},
  {(char*)"SetComponentModeToUseSelected", PyvtkThreshold_SetComponentModeToUseSelected, 1,
   (char*)"V.SetComponentModeToUseSelected()\nC++: void SetComponentModeToUseSelected()\n\nControl how the decision of in / out is made with multi-component\ndata. The choices are to use the selected component (specified in\nthe SelectedComponent ivar), or to look at all components. When\nlooking at all components, the evaluation can pass if all the\ncomponents satisfy the rule (UseAll) or if any satisfy is\n(UseAny). The default value is UseSelected.\n"},
  {(char*)"SetComponentModeToUseAll", PyvtkThreshold_SetComponentModeToUseAll, 1,
   (char*)"V.SetComponentModeToUseAll()\nC++: void SetComponentModeToUseAll()\n\nControl how the decision of in / out is made with multi-component\ndata. The choices are to use the selected component (specified in\nthe SelectedComponent ivar), or to look at all components. When\nlooking at all components, the evaluation can pass if all the\ncomponents satisfy the rule (UseAll) or if any satisfy is\n(UseAny). The default value is UseSelected.\n"},
  {(char*)"SetComponentModeToUseAny", PyvtkThreshold_SetComponentModeToUseAny, 1,
   (char*)"V.SetComponentModeToUseAny()\nC++: void SetComponentModeToUseAny()\n\nControl how the decision of in / out is made with multi-component\ndata. The choices are to use the selected component (specified in\nthe SelectedComponent ivar), or to look at all components. When\nlooking at all components, the evaluation can pass if all the\ncomponents satisfy the rule (UseAll) or if any satisfy is\n(UseAny). The default value is UseSelected.\n"},
  {(char*)"GetComponentModeAsString", PyvtkThreshold_GetComponentModeAsString, 1,
   (char*)"V.GetComponentModeAsString() -> string\nC++: const char *GetComponentModeAsString()\n\nControl how the decision of in / out is made with multi-component\ndata. The choices are to use the selected component (specified in\nthe SelectedComponent ivar), or to look at all components. When\nlooking at all components, the evaluation can pass if all the\ncomponents satisfy the rule (UseAll) or if any satisfy is\n(UseAny). The default value is UseSelected.\n"},
  {(char*)"SetSelectedComponent", PyvtkThreshold_SetSelectedComponent, 1,
   (char*)"V.SetSelectedComponent(int)\nC++: void SetSelectedComponent(int)\n\nWhen the component mode is UseSelected, this ivar indicated the\nselected component. The default value is 0.\n"},
  {(char*)"GetSelectedComponentMinValue", PyvtkThreshold_GetSelectedComponentMinValue, 1,
   (char*)"V.GetSelectedComponentMinValue() -> int\nC++: int GetSelectedComponentMinValue()\n\nWhen the component mode is UseSelected, this ivar indicated the\nselected component. The default value is 0.\n"},
  {(char*)"GetSelectedComponentMaxValue", PyvtkThreshold_GetSelectedComponentMaxValue, 1,
   (char*)"V.GetSelectedComponentMaxValue() -> int\nC++: int GetSelectedComponentMaxValue()\n\nWhen the component mode is UseSelected, this ivar indicated the\nselected component. The default value is 0.\n"},
  {(char*)"GetSelectedComponent", PyvtkThreshold_GetSelectedComponent, 1,
   (char*)"V.GetSelectedComponent() -> int\nC++: int GetSelectedComponent()\n\nWhen the component mode is UseSelected, this ivar indicated the\nselected component. The default value is 0.\n"},
  {(char*)"SetAllScalars", PyvtkThreshold_SetAllScalars, 1,
   (char*)"V.SetAllScalars(int)\nC++: void SetAllScalars(int a)\n\nIf using scalars from point data, all scalars for all points in a\ncell must satisfy the threshold criterion if AllScalars is set.\nOtherwise, just a single scalar value satisfying the threshold\ncriterion enables will extract the cell.\n"},
  {(char*)"GetAllScalars", PyvtkThreshold_GetAllScalars, 1,
   (char*)"V.GetAllScalars() -> int\nC++: int GetAllScalars()\n\nIf using scalars from point data, all scalars for all points in a\ncell must satisfy the threshold criterion if AllScalars is set.\nOtherwise, just a single scalar value satisfying the threshold\ncriterion enables will extract the cell.\n"},
  {(char*)"AllScalarsOn", PyvtkThreshold_AllScalarsOn, 1,
   (char*)"V.AllScalarsOn()\nC++: void AllScalarsOn()\n\nIf using scalars from point data, all scalars for all points in a\ncell must satisfy the threshold criterion if AllScalars is set.\nOtherwise, just a single scalar value satisfying the threshold\ncriterion enables will extract the cell.\n"},
  {(char*)"AllScalarsOff", PyvtkThreshold_AllScalarsOff, 1,
   (char*)"V.AllScalarsOff()\nC++: void AllScalarsOff()\n\nIf using scalars from point data, all scalars for all points in a\ncell must satisfy the threshold criterion if AllScalars is set.\nOtherwise, just a single scalar value satisfying the threshold\ncriterion enables will extract the cell.\n"},
  {(char*)"SetPointsDataTypeToDouble", PyvtkThreshold_SetPointsDataTypeToDouble, 1,
   (char*)"V.SetPointsDataTypeToDouble()\nC++: void SetPointsDataTypeToDouble()\n\nSet the data type of the output points (See the data types\ndefined in vtkType.h). The default data type is float.\n"},
  {(char*)"SetPointsDataTypeToFloat", PyvtkThreshold_SetPointsDataTypeToFloat, 1,
   (char*)"V.SetPointsDataTypeToFloat()\nC++: void SetPointsDataTypeToFloat()\n\nSet the data type of the output points (See the data types\ndefined in vtkType.h). The default data type is float.\n"},
  {(char*)"SetPointsDataType", PyvtkThreshold_SetPointsDataType, 1,
   (char*)"V.SetPointsDataType(int)\nC++: void SetPointsDataType(int a)\n\nSet the data type of the output points (See the data types\ndefined in vtkType.h). The default data type is float.\n"},
  {(char*)"GetPointsDataType", PyvtkThreshold_GetPointsDataType, 1,
   (char*)"V.GetPointsDataType() -> int\nC++: int GetPointsDataType()\n\nSet the data type of the output points (See the data types\ndefined in vtkType.h). The default data type is float.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkThreshold_StaticNew()
{
  return vtkThreshold::New();
}

PyObject *PyVTKClass_vtkThresholdNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkThreshold_StaticNew,
    PyvtkThreshold_Methods,
    "vtkThreshold", modulename,
    NULL, NULL,
    PyvtkThreshold_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkThreshold_Doc()
{
  static const char *docstring[] = {
    "vtkThreshold - extracts cells where scalar value in cell satisfies\nthreshold criterion\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "vtkThreshold is a filter that extracts cells from any dataset type\nthat satisfy a threshold criterion. A cell satisfies the criterion if\nthe scalar value of (every or any) point satisfies the criterion. The\ncriterion can take three forms: 1) greater than a particular value;\n2) less than a particular value; or 3) between two values. The output\nof this filter is an unstructured grid.\n\nNote that scal",
    "ar values are available from the point and cell\nattribute data.  By default, point data is used to obtain scalars,\nbut you can control this behavior. See the AttributeMode ivar below.\n\nBy default only the first scalar value is used in the decision. Use\nthe ComponentMode and SelectedComponent ivars to control this\nbehavior.\n\nSee Also:\n\nvtkThresholdPoints vtkThresholdTextureCoords\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkThreshold(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkThresholdNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkThreshold", o) != 0)
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

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_COMPONENT_MODE_USE_SELECTED", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_COMPONENT_MODE_USE_ALL", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_COMPONENT_MODE_USE_ANY", o) != 0)
    {
    Py_DECREF(o);
    }

}

