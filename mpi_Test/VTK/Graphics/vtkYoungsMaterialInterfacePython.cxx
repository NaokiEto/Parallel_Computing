// python wrapper for vtkYoungsMaterialInterface
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
#include "vtkYoungsMaterialInterface.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkYoungsMaterialInterface(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkYoungsMaterialInterface(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkYoungsMaterialInterfaceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkYoungsMaterialInterfaceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
#endif

static const char **PyvtkYoungsMaterialInterface_Doc();


static PyObject *
PyvtkYoungsMaterialInterface_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

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
      tempr = op->vtkYoungsMaterialInterface::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

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
      tempr = op->vtkYoungsMaterialInterface::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  vtkYoungsMaterialInterface *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkYoungsMaterialInterface::NewInstance();
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
PyvtkYoungsMaterialInterface_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkYoungsMaterialInterface *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkYoungsMaterialInterface::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_SetInverseNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInverseNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInverseNormal(temp0);
      }
    else
      {
      op->vtkYoungsMaterialInterface::SetInverseNormal(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_GetInverseNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInverseNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInverseNormal();
      }
    else
      {
      tempr = op->vtkYoungsMaterialInterface::GetInverseNormal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_InverseNormalOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InverseNormalOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InverseNormalOn();
      }
    else
      {
      op->vtkYoungsMaterialInterface::InverseNormalOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_InverseNormalOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InverseNormalOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InverseNormalOff();
      }
    else
      {
      op->vtkYoungsMaterialInterface::InverseNormalOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_SetReverseMaterialOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReverseMaterialOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReverseMaterialOrder(temp0);
      }
    else
      {
      op->vtkYoungsMaterialInterface::SetReverseMaterialOrder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_GetReverseMaterialOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReverseMaterialOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetReverseMaterialOrder();
      }
    else
      {
      tempr = op->vtkYoungsMaterialInterface::GetReverseMaterialOrder();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_ReverseMaterialOrderOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseMaterialOrderOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReverseMaterialOrderOn();
      }
    else
      {
      op->vtkYoungsMaterialInterface::ReverseMaterialOrderOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_ReverseMaterialOrderOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseMaterialOrderOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReverseMaterialOrderOff();
      }
    else
      {
      op->vtkYoungsMaterialInterface::ReverseMaterialOrderOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_SetOnionPeel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOnionPeel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOnionPeel(temp0);
      }
    else
      {
      op->vtkYoungsMaterialInterface::SetOnionPeel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_GetOnionPeel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOnionPeel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOnionPeel();
      }
    else
      {
      tempr = op->vtkYoungsMaterialInterface::GetOnionPeel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_OnionPeelOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnionPeelOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnionPeelOn();
      }
    else
      {
      op->vtkYoungsMaterialInterface::OnionPeelOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_OnionPeelOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnionPeelOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnionPeelOff();
      }
    else
      {
      op->vtkYoungsMaterialInterface::OnionPeelOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_SetAxisSymetric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisSymetric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAxisSymetric(temp0);
      }
    else
      {
      op->vtkYoungsMaterialInterface::SetAxisSymetric(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_GetAxisSymetric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisSymetric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAxisSymetric();
      }
    else
      {
      tempr = op->vtkYoungsMaterialInterface::GetAxisSymetric();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_AxisSymetricOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AxisSymetricOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AxisSymetricOn();
      }
    else
      {
      op->vtkYoungsMaterialInterface::AxisSymetricOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_AxisSymetricOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AxisSymetricOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AxisSymetricOff();
      }
    else
      {
      op->vtkYoungsMaterialInterface::AxisSymetricOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_SetUseFractionAsDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseFractionAsDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseFractionAsDistance(temp0);
      }
    else
      {
      op->vtkYoungsMaterialInterface::SetUseFractionAsDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_GetUseFractionAsDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseFractionAsDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseFractionAsDistance();
      }
    else
      {
      tempr = op->vtkYoungsMaterialInterface::GetUseFractionAsDistance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_UseFractionAsDistanceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseFractionAsDistanceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseFractionAsDistanceOn();
      }
    else
      {
      op->vtkYoungsMaterialInterface::UseFractionAsDistanceOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_UseFractionAsDistanceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseFractionAsDistanceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseFractionAsDistanceOff();
      }
    else
      {
      op->vtkYoungsMaterialInterface::UseFractionAsDistanceOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_SetFillMaterial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFillMaterial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFillMaterial(temp0);
      }
    else
      {
      op->vtkYoungsMaterialInterface::SetFillMaterial(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_GetFillMaterial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFillMaterial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFillMaterial();
      }
    else
      {
      tempr = op->vtkYoungsMaterialInterface::GetFillMaterial();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_FillMaterialOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillMaterialOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FillMaterialOn();
      }
    else
      {
      op->vtkYoungsMaterialInterface::FillMaterialOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_FillMaterialOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillMaterialOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FillMaterialOff();
      }
    else
      {
      op->vtkYoungsMaterialInterface::FillMaterialOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_SetTwoMaterialsOptimization(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTwoMaterialsOptimization");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTwoMaterialsOptimization(temp0);
      }
    else
      {
      op->vtkYoungsMaterialInterface::SetTwoMaterialsOptimization(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_GetTwoMaterialsOptimization(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTwoMaterialsOptimization");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTwoMaterialsOptimization();
      }
    else
      {
      tempr = op->vtkYoungsMaterialInterface::GetTwoMaterialsOptimization();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_TwoMaterialsOptimizationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TwoMaterialsOptimizationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TwoMaterialsOptimizationOn();
      }
    else
      {
      op->vtkYoungsMaterialInterface::TwoMaterialsOptimizationOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_TwoMaterialsOptimizationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TwoMaterialsOptimizationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TwoMaterialsOptimizationOff();
      }
    else
      {
      op->vtkYoungsMaterialInterface::TwoMaterialsOptimizationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_SetVolumeFractionRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumeFractionRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetVolumeFractionRange(temp0, temp1);
      }
    else
      {
      op->vtkYoungsMaterialInterface::SetVolumeFractionRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkYoungsMaterialInterface_SetVolumeFractionRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumeFractionRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetVolumeFractionRange(temp0);
      }
    else
      {
      op->vtkYoungsMaterialInterface::SetVolumeFractionRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkYoungsMaterialInterface_SetVolumeFractionRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkYoungsMaterialInterface_SetVolumeFractionRange_s1(self, args);
    case 1:
      return PyvtkYoungsMaterialInterface_SetVolumeFractionRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetVolumeFractionRange");
  return NULL;
}



static PyObject *
PyvtkYoungsMaterialInterface_GetVolumeFractionRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeFractionRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVolumeFractionRange();
      }
    else
      {
      tempr = op->vtkYoungsMaterialInterface::GetVolumeFractionRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_SetNumberOfMaterials(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfMaterials");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfMaterials(temp0);
      }
    else
      {
      op->vtkYoungsMaterialInterface::SetNumberOfMaterials(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_GetNumberOfMaterials(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfMaterials");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfMaterials();
      }
    else
      {
      tempr = op->vtkYoungsMaterialInterface::GetNumberOfMaterials();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_SetMaterialArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  int temp0;
  char *temp1 = NULL;
  char *temp2 = NULL;
  char *temp3 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetMaterialArrays(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkYoungsMaterialInterface::SetMaterialArrays(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_SetMaterialVolumeFractionArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialVolumeFractionArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  int temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetMaterialVolumeFractionArray(temp0, temp1);
      }
    else
      {
      op->vtkYoungsMaterialInterface::SetMaterialVolumeFractionArray(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_SetMaterialNormalArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialNormalArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  int temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetMaterialNormalArray(temp0, temp1);
      }
    else
      {
      op->vtkYoungsMaterialInterface::SetMaterialNormalArray(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_SetMaterialOrderingArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialOrderingArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  int temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetMaterialOrderingArray(temp0, temp1);
      }
    else
      {
      op->vtkYoungsMaterialInterface::SetMaterialOrderingArray(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_RemoveAllMaterials(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllMaterials");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllMaterials();
      }
    else
      {
      op->vtkYoungsMaterialInterface::RemoveAllMaterials();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkYoungsMaterialInterface_Methods[] = {
  {(char*)"GetClassName", PyvtkYoungsMaterialInterface_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkYoungsMaterialInterface_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkYoungsMaterialInterface_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkYoungsMaterialInterface\nC++: vtkYoungsMaterialInterface *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkYoungsMaterialInterface_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkYoungsMaterialInterface\nC++: vtkYoungsMaterialInterface *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetInverseNormal", PyvtkYoungsMaterialInterface_SetInverseNormal, 1,
   (char*)"V.SetInverseNormal(int)\nC++: void SetInverseNormal(int a)\n\nSet/Get wether the normal vector has to be flipped.\n"},
  {(char*)"GetInverseNormal", PyvtkYoungsMaterialInterface_GetInverseNormal, 1,
   (char*)"V.GetInverseNormal() -> int\nC++: int GetInverseNormal()\n\nSet/Get wether the normal vector has to be flipped.\n"},
  {(char*)"InverseNormalOn", PyvtkYoungsMaterialInterface_InverseNormalOn, 1,
   (char*)"V.InverseNormalOn()\nC++: void InverseNormalOn()\n\nSet/Get wether the normal vector has to be flipped.\n"},
  {(char*)"InverseNormalOff", PyvtkYoungsMaterialInterface_InverseNormalOff, 1,
   (char*)"V.InverseNormalOff()\nC++: void InverseNormalOff()\n\nSet/Get wether the normal vector has to be flipped.\n"},
  {(char*)"SetReverseMaterialOrder", PyvtkYoungsMaterialInterface_SetReverseMaterialOrder, 1,
   (char*)"V.SetReverseMaterialOrder(int)\nC++: void SetReverseMaterialOrder(int a)\n\nIf this flag is on, material order in reversed. Otherwise,\nmaterials are sorted in ascending order depending on the given\nordering array.\n"},
  {(char*)"GetReverseMaterialOrder", PyvtkYoungsMaterialInterface_GetReverseMaterialOrder, 1,
   (char*)"V.GetReverseMaterialOrder() -> int\nC++: int GetReverseMaterialOrder()\n\nIf this flag is on, material order in reversed. Otherwise,\nmaterials are sorted in ascending order depending on the given\nordering array.\n"},
  {(char*)"ReverseMaterialOrderOn", PyvtkYoungsMaterialInterface_ReverseMaterialOrderOn, 1,
   (char*)"V.ReverseMaterialOrderOn()\nC++: void ReverseMaterialOrderOn()\n\nIf this flag is on, material order in reversed. Otherwise,\nmaterials are sorted in ascending order depending on the given\nordering array.\n"},
  {(char*)"ReverseMaterialOrderOff", PyvtkYoungsMaterialInterface_ReverseMaterialOrderOff, 1,
   (char*)"V.ReverseMaterialOrderOff()\nC++: void ReverseMaterialOrderOff()\n\nIf this flag is on, material order in reversed. Otherwise,\nmaterials are sorted in ascending order depending on the given\nordering array.\n"},
  {(char*)"SetOnionPeel", PyvtkYoungsMaterialInterface_SetOnionPeel, 1,
   (char*)"V.SetOnionPeel(int)\nC++: void SetOnionPeel(int a)\n\nSet/Get OnionPeel flag. if this flag is on, the normal vector of\nthe first material (which depends on material ordering) is used\nfor all materials.\n"},
  {(char*)"GetOnionPeel", PyvtkYoungsMaterialInterface_GetOnionPeel, 1,
   (char*)"V.GetOnionPeel() -> int\nC++: int GetOnionPeel()\n\nSet/Get OnionPeel flag. if this flag is on, the normal vector of\nthe first material (which depends on material ordering) is used\nfor all materials.\n"},
  {(char*)"OnionPeelOn", PyvtkYoungsMaterialInterface_OnionPeelOn, 1,
   (char*)"V.OnionPeelOn()\nC++: void OnionPeelOn()\n\nSet/Get OnionPeel flag. if this flag is on, the normal vector of\nthe first material (which depends on material ordering) is used\nfor all materials.\n"},
  {(char*)"OnionPeelOff", PyvtkYoungsMaterialInterface_OnionPeelOff, 1,
   (char*)"V.OnionPeelOff()\nC++: void OnionPeelOff()\n\nSet/Get OnionPeel flag. if this flag is on, the normal vector of\nthe first material (which depends on material ordering) is used\nfor all materials.\n"},
  {(char*)"SetAxisSymetric", PyvtkYoungsMaterialInterface_SetAxisSymetric, 1,
   (char*)"V.SetAxisSymetric(int)\nC++: void SetAxisSymetric(int a)\n\nTurns on/off AxisSymetric computation of 2D interfaces. in axis\nsymetric mode, 2D meshes are understood as volumes of revolution.\n"},
  {(char*)"GetAxisSymetric", PyvtkYoungsMaterialInterface_GetAxisSymetric, 1,
   (char*)"V.GetAxisSymetric() -> int\nC++: int GetAxisSymetric()\n\nTurns on/off AxisSymetric computation of 2D interfaces. in axis\nsymetric mode, 2D meshes are understood as volumes of revolution.\n"},
  {(char*)"AxisSymetricOn", PyvtkYoungsMaterialInterface_AxisSymetricOn, 1,
   (char*)"V.AxisSymetricOn()\nC++: void AxisSymetricOn()\n\nTurns on/off AxisSymetric computation of 2D interfaces. in axis\nsymetric mode, 2D meshes are understood as volumes of revolution.\n"},
  {(char*)"AxisSymetricOff", PyvtkYoungsMaterialInterface_AxisSymetricOff, 1,
   (char*)"V.AxisSymetricOff()\nC++: void AxisSymetricOff()\n\nTurns on/off AxisSymetric computation of 2D interfaces. in axis\nsymetric mode, 2D meshes are understood as volumes of revolution.\n"},
  {(char*)"SetUseFractionAsDistance", PyvtkYoungsMaterialInterface_SetUseFractionAsDistance, 1,
   (char*)"V.SetUseFractionAsDistance(int)\nC++: void SetUseFractionAsDistance(int a)\n\nwhen UseFractionAsDistance is true, the volume fraction is\ninterpreted as the distance of the cutting plane from the origin.\nin axis symetric mode, 2D meshes are understood as volumes of\nrevolution.\n"},
  {(char*)"GetUseFractionAsDistance", PyvtkYoungsMaterialInterface_GetUseFractionAsDistance, 1,
   (char*)"V.GetUseFractionAsDistance() -> int\nC++: int GetUseFractionAsDistance()\n\nwhen UseFractionAsDistance is true, the volume fraction is\ninterpreted as the distance of the cutting plane from the origin.\nin axis symetric mode, 2D meshes are understood as volumes of\nrevolution.\n"},
  {(char*)"UseFractionAsDistanceOn", PyvtkYoungsMaterialInterface_UseFractionAsDistanceOn, 1,
   (char*)"V.UseFractionAsDistanceOn()\nC++: void UseFractionAsDistanceOn()\n\nwhen UseFractionAsDistance is true, the volume fraction is\ninterpreted as the distance of the cutting plane from the origin.\nin axis symetric mode, 2D meshes are understood as volumes of\nrevolution.\n"},
  {(char*)"UseFractionAsDistanceOff", PyvtkYoungsMaterialInterface_UseFractionAsDistanceOff, 1,
   (char*)"V.UseFractionAsDistanceOff()\nC++: void UseFractionAsDistanceOff()\n\nwhen UseFractionAsDistance is true, the volume fraction is\ninterpreted as the distance of the cutting plane from the origin.\nin axis symetric mode, 2D meshes are understood as volumes of\nrevolution.\n"},
  {(char*)"SetFillMaterial", PyvtkYoungsMaterialInterface_SetFillMaterial, 1,
   (char*)"V.SetFillMaterial(int)\nC++: void SetFillMaterial(int a)\n\nWhen FillMaterial is set to 1, the volume containing material is\noutput and not only the interface surface.\n"},
  {(char*)"GetFillMaterial", PyvtkYoungsMaterialInterface_GetFillMaterial, 1,
   (char*)"V.GetFillMaterial() -> int\nC++: int GetFillMaterial()\n\nWhen FillMaterial is set to 1, the volume containing material is\noutput and not only the interface surface.\n"},
  {(char*)"FillMaterialOn", PyvtkYoungsMaterialInterface_FillMaterialOn, 1,
   (char*)"V.FillMaterialOn()\nC++: void FillMaterialOn()\n\nWhen FillMaterial is set to 1, the volume containing material is\noutput and not only the interface surface.\n"},
  {(char*)"FillMaterialOff", PyvtkYoungsMaterialInterface_FillMaterialOff, 1,
   (char*)"V.FillMaterialOff()\nC++: void FillMaterialOff()\n\nWhen FillMaterial is set to 1, the volume containing material is\noutput and not only the interface surface.\n"},
  {(char*)"SetTwoMaterialsOptimization", PyvtkYoungsMaterialInterface_SetTwoMaterialsOptimization, 1,
   (char*)"V.SetTwoMaterialsOptimization(int)\nC++: void SetTwoMaterialsOptimization(int a)\n\nTriggers some additional optimizations for cells containing only\ntwo materials. This option might produce different result than\nexpected if the sum of volume fractions is not 1.\n"},
  {(char*)"GetTwoMaterialsOptimization", PyvtkYoungsMaterialInterface_GetTwoMaterialsOptimization, 1,
   (char*)"V.GetTwoMaterialsOptimization() -> int\nC++: int GetTwoMaterialsOptimization()\n\nTriggers some additional optimizations for cells containing only\ntwo materials. This option might produce different result than\nexpected if the sum of volume fractions is not 1.\n"},
  {(char*)"TwoMaterialsOptimizationOn", PyvtkYoungsMaterialInterface_TwoMaterialsOptimizationOn, 1,
   (char*)"V.TwoMaterialsOptimizationOn()\nC++: void TwoMaterialsOptimizationOn()\n\nTriggers some additional optimizations for cells containing only\ntwo materials. This option might produce different result than\nexpected if the sum of volume fractions is not 1.\n"},
  {(char*)"TwoMaterialsOptimizationOff", PyvtkYoungsMaterialInterface_TwoMaterialsOptimizationOff, 1,
   (char*)"V.TwoMaterialsOptimizationOff()\nC++: void TwoMaterialsOptimizationOff()\n\nTriggers some additional optimizations for cells containing only\ntwo materials. This option might produce different result than\nexpected if the sum of volume fractions is not 1.\n"},
  {(char*)"SetVolumeFractionRange", PyvtkYoungsMaterialInterface_SetVolumeFractionRange, 1,
   (char*)"V.SetVolumeFractionRange(float, float)\nC++: void SetVolumeFractionRange(double, double)\nV.SetVolumeFractionRange((float, float))\nC++: void SetVolumeFractionRange(double a[2])\n\n"},
  {(char*)"GetVolumeFractionRange", PyvtkYoungsMaterialInterface_GetVolumeFractionRange, 1,
   (char*)"V.GetVolumeFractionRange() -> (float, float)\nC++: double *GetVolumeFractionRange()\n\nSet/Get minimum and maximum volume fraction value. if a material\nfills a volume above the minimum value, the material is\nconsidered to be void. if a material fills a volume fraction\nbeyond the maximum value it is considered as filling the whole\nvolume.\n"},
  {(char*)"SetNumberOfMaterials", PyvtkYoungsMaterialInterface_SetNumberOfMaterials, 1,
   (char*)"V.SetNumberOfMaterials(int)\nC++: virtual void SetNumberOfMaterials(int n)\n\nSets/Gets the number of materials.\n"},
  {(char*)"GetNumberOfMaterials", PyvtkYoungsMaterialInterface_GetNumberOfMaterials, 1,
   (char*)"V.GetNumberOfMaterials() -> int\nC++: virtual int GetNumberOfMaterials()\n\nSets/Gets the number of materials.\n"},
  {(char*)"SetMaterialArrays", PyvtkYoungsMaterialInterface_SetMaterialArrays, 1,
   (char*)"V.SetMaterialArrays(int, string, string, string)\nC++: virtual void SetMaterialArrays(int i,\n    const char *volumeFraction, const char *interfaceNormal,\n    const char *materialOrdering)\n\nSet ith Material arrays to be used as volume fraction, interface\nnormal and material ordering. Each parameter name a cell array.\n"},
  {(char*)"SetMaterialVolumeFractionArray", PyvtkYoungsMaterialInterface_SetMaterialVolumeFractionArray, 1,
   (char*)"V.SetMaterialVolumeFractionArray(int, string)\nC++: virtual void SetMaterialVolumeFractionArray(int i,\n    const char *volume)\n\nSet ith Material arrays to be used as volume fraction, interface\nnormal and material ordering. Each parameter name a cell array.\n"},
  {(char*)"SetMaterialNormalArray", PyvtkYoungsMaterialInterface_SetMaterialNormalArray, 1,
   (char*)"V.SetMaterialNormalArray(int, string)\nC++: virtual void SetMaterialNormalArray(int i,\n    const char *normal)\n\nSet ith Material arrays to be used as volume fraction, interface\nnormal and material ordering. Each parameter name a cell array.\n"},
  {(char*)"SetMaterialOrderingArray", PyvtkYoungsMaterialInterface_SetMaterialOrderingArray, 1,
   (char*)"V.SetMaterialOrderingArray(int, string)\nC++: virtual void SetMaterialOrderingArray(int i,\n    const char *ordering)\n\nSet ith Material arrays to be used as volume fraction, interface\nnormal and material ordering. Each parameter name a cell array.\n"},
  {(char*)"RemoveAllMaterials", PyvtkYoungsMaterialInterface_RemoveAllMaterials, 1,
   (char*)"V.RemoveAllMaterials()\nC++: virtual void RemoveAllMaterials()\n\nRemoves all meterials previously added.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkYoungsMaterialInterface_StaticNew()
{
  return vtkYoungsMaterialInterface::New();
}

PyObject *PyVTKClass_vtkYoungsMaterialInterfaceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkYoungsMaterialInterface_StaticNew,
    PyvtkYoungsMaterialInterface_Methods,
    "vtkYoungsMaterialInterface", modulename,
    NULL, NULL,
    PyvtkYoungsMaterialInterface_Doc(),
    PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(256);
    if (o && PyDict_SetItemString(d, (char *)"MAX_CELL_POINTS", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkYoungsMaterialInterface_Doc()
{
  static const char *docstring[] = {
    "vtkYoungsMaterialInterface - reconstructs material interfaces\n\n",
    "Superclass: vtkMultiBlockDataSetAlgorithm\n\n",
    "Reconstructs material interfaces from a mesh containing mixed cells\n(where several materials are mixed) this implementation is based on\nthe youngs algorithm, generalized to arbitrary cell types and works\non both 2D and 3D meshes. the main advantage of the youngs algorithm\nis it guarantees the material volume correctness. for 2D meshes, the\nAxisSymetric flag allows to switch between a pure 2D (plan",
    "nar)\nalgorithm and an axis symetric 2D algorithm handling volumes of\nrevolution.\n\nThanks:\n\nThis file is part of the generalized Youngs material interface\nreconstruction algorithm contributed by\n\nCEA/DIF - Commissariat a l'Energie Atomique, Centre DAM Ile-De-France\n\nBP12, F-91297 Arpajon, France.\n\nImplementation by Thierry Carrard (thierry.carrard@cea.fr)\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkYoungsMaterialInterface(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkYoungsMaterialInterfaceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkYoungsMaterialInterface", o) != 0)
    {
    Py_DECREF(o);
    }

}

