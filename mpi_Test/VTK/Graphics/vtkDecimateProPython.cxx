// python wrapper for vtkDecimatePro
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
#include "vtkDecimatePro.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDecimatePro(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDecimatePro(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDecimateProNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDecimateProNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkDecimatePro_Doc();


static PyObject *
PyvtkDecimatePro_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

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
      tempr = op->vtkDecimatePro::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

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
      tempr = op->vtkDecimatePro::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  vtkDecimatePro *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDecimatePro::NewInstance();
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
PyvtkDecimatePro_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDecimatePro *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDecimatePro::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_SetTargetReduction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTargetReduction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTargetReduction(temp0);
      }
    else
      {
      op->vtkDecimatePro::SetTargetReduction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetTargetReductionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetReductionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTargetReductionMinValue();
      }
    else
      {
      tempr = op->vtkDecimatePro::GetTargetReductionMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetTargetReductionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetReductionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTargetReductionMaxValue();
      }
    else
      {
      tempr = op->vtkDecimatePro::GetTargetReductionMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetTargetReduction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetReduction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTargetReduction();
      }
    else
      {
      tempr = op->vtkDecimatePro::GetTargetReduction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_SetPreserveTopology(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreserveTopology");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPreserveTopology(temp0);
      }
    else
      {
      op->vtkDecimatePro::SetPreserveTopology(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetPreserveTopology(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreserveTopology");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPreserveTopology();
      }
    else
      {
      tempr = op->vtkDecimatePro::GetPreserveTopology();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_PreserveTopologyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreserveTopologyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PreserveTopologyOn();
      }
    else
      {
      op->vtkDecimatePro::PreserveTopologyOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_PreserveTopologyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreserveTopologyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PreserveTopologyOff();
      }
    else
      {
      op->vtkDecimatePro::PreserveTopologyOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_SetFeatureAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFeatureAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFeatureAngle(temp0);
      }
    else
      {
      op->vtkDecimatePro::SetFeatureAngle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetFeatureAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFeatureAngleMinValue();
      }
    else
      {
      tempr = op->vtkDecimatePro::GetFeatureAngleMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetFeatureAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFeatureAngleMaxValue();
      }
    else
      {
      tempr = op->vtkDecimatePro::GetFeatureAngleMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetFeatureAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFeatureAngle();
      }
    else
      {
      tempr = op->vtkDecimatePro::GetFeatureAngle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_SetSplitting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSplitting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSplitting(temp0);
      }
    else
      {
      op->vtkDecimatePro::SetSplitting(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetSplitting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplitting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSplitting();
      }
    else
      {
      tempr = op->vtkDecimatePro::GetSplitting();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_SplittingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SplittingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SplittingOn();
      }
    else
      {
      op->vtkDecimatePro::SplittingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_SplittingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SplittingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SplittingOff();
      }
    else
      {
      op->vtkDecimatePro::SplittingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_SetSplitAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSplitAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSplitAngle(temp0);
      }
    else
      {
      op->vtkDecimatePro::SetSplitAngle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetSplitAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplitAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSplitAngleMinValue();
      }
    else
      {
      tempr = op->vtkDecimatePro::GetSplitAngleMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetSplitAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplitAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSplitAngleMaxValue();
      }
    else
      {
      tempr = op->vtkDecimatePro::GetSplitAngleMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetSplitAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplitAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSplitAngle();
      }
    else
      {
      tempr = op->vtkDecimatePro::GetSplitAngle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_SetPreSplitMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreSplitMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPreSplitMesh(temp0);
      }
    else
      {
      op->vtkDecimatePro::SetPreSplitMesh(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetPreSplitMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreSplitMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPreSplitMesh();
      }
    else
      {
      tempr = op->vtkDecimatePro::GetPreSplitMesh();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_PreSplitMeshOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreSplitMeshOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PreSplitMeshOn();
      }
    else
      {
      op->vtkDecimatePro::PreSplitMeshOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_PreSplitMeshOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreSplitMeshOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PreSplitMeshOff();
      }
    else
      {
      op->vtkDecimatePro::PreSplitMeshOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_SetMaximumError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumError(temp0);
      }
    else
      {
      op->vtkDecimatePro::SetMaximumError(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetMaximumErrorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumErrorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumErrorMinValue();
      }
    else
      {
      tempr = op->vtkDecimatePro::GetMaximumErrorMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetMaximumErrorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumErrorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumErrorMaxValue();
      }
    else
      {
      tempr = op->vtkDecimatePro::GetMaximumErrorMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetMaximumError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumError();
      }
    else
      {
      tempr = op->vtkDecimatePro::GetMaximumError();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_SetAccumulateError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAccumulateError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAccumulateError(temp0);
      }
    else
      {
      op->vtkDecimatePro::SetAccumulateError(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetAccumulateError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAccumulateError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAccumulateError();
      }
    else
      {
      tempr = op->vtkDecimatePro::GetAccumulateError();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_AccumulateErrorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AccumulateErrorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AccumulateErrorOn();
      }
    else
      {
      op->vtkDecimatePro::AccumulateErrorOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_AccumulateErrorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AccumulateErrorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AccumulateErrorOff();
      }
    else
      {
      op->vtkDecimatePro::AccumulateErrorOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_SetErrorIsAbsolute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetErrorIsAbsolute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetErrorIsAbsolute(temp0);
      }
    else
      {
      op->vtkDecimatePro::SetErrorIsAbsolute(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetErrorIsAbsolute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetErrorIsAbsolute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetErrorIsAbsolute();
      }
    else
      {
      tempr = op->vtkDecimatePro::GetErrorIsAbsolute();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_SetAbsoluteError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbsoluteError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAbsoluteError(temp0);
      }
    else
      {
      op->vtkDecimatePro::SetAbsoluteError(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetAbsoluteErrorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbsoluteErrorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAbsoluteErrorMinValue();
      }
    else
      {
      tempr = op->vtkDecimatePro::GetAbsoluteErrorMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetAbsoluteErrorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbsoluteErrorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAbsoluteErrorMaxValue();
      }
    else
      {
      tempr = op->vtkDecimatePro::GetAbsoluteErrorMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetAbsoluteError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbsoluteError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAbsoluteError();
      }
    else
      {
      tempr = op->vtkDecimatePro::GetAbsoluteError();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_SetBoundaryVertexDeletion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundaryVertexDeletion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBoundaryVertexDeletion(temp0);
      }
    else
      {
      op->vtkDecimatePro::SetBoundaryVertexDeletion(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetBoundaryVertexDeletion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundaryVertexDeletion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBoundaryVertexDeletion();
      }
    else
      {
      tempr = op->vtkDecimatePro::GetBoundaryVertexDeletion();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_BoundaryVertexDeletionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoundaryVertexDeletionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BoundaryVertexDeletionOn();
      }
    else
      {
      op->vtkDecimatePro::BoundaryVertexDeletionOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_BoundaryVertexDeletionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoundaryVertexDeletionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BoundaryVertexDeletionOff();
      }
    else
      {
      op->vtkDecimatePro::BoundaryVertexDeletionOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_SetDegree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDegree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDegree(temp0);
      }
    else
      {
      op->vtkDecimatePro::SetDegree(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetDegreeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDegreeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDegreeMinValue();
      }
    else
      {
      tempr = op->vtkDecimatePro::GetDegreeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetDegreeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDegreeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDegreeMaxValue();
      }
    else
      {
      tempr = op->vtkDecimatePro::GetDegreeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetDegree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDegree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDegree();
      }
    else
      {
      tempr = op->vtkDecimatePro::GetDegree();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_SetInflectionPointRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInflectionPointRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInflectionPointRatio(temp0);
      }
    else
      {
      op->vtkDecimatePro::SetInflectionPointRatio(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetInflectionPointRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInflectionPointRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInflectionPointRatioMinValue();
      }
    else
      {
      tempr = op->vtkDecimatePro::GetInflectionPointRatioMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetInflectionPointRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInflectionPointRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInflectionPointRatioMaxValue();
      }
    else
      {
      tempr = op->vtkDecimatePro::GetInflectionPointRatioMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetInflectionPointRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInflectionPointRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInflectionPointRatio();
      }
    else
      {
      tempr = op->vtkDecimatePro::GetInflectionPointRatio();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetNumberOfInflectionPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfInflectionPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfInflectionPoints();
      }
    else
      {
      tempr = op->vtkDecimatePro::GetNumberOfInflectionPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDecimatePro_Methods[] = {
  {(char*)"GetClassName", PyvtkDecimatePro_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDecimatePro_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDecimatePro_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDecimatePro\nC++: vtkDecimatePro *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDecimatePro_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDecimatePro\nC++: vtkDecimatePro *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetTargetReduction", PyvtkDecimatePro_SetTargetReduction, 1,
   (char*)"V.SetTargetReduction(float)\nC++: void SetTargetReduction(double)\n\nSpecify the desired reduction in the total number of polygons\n(e.g., if TargetReduction is set to 0.9, this filter will try to\nreduce the data set to 10% of its original size). Because of\nvarious constraints, this level of reduction may not be realized.\nIf you want to guarantee a particular reduction, you must turn\noff PreserveTopology, turn on SplitEdges and\nBoundaryVertexDeletion, and set the MaximumError to\nVTK_DOUBLE_MAX (these ivars are initialized this way when the\nobject is instantiated).\n"},
  {(char*)"GetTargetReductionMinValue", PyvtkDecimatePro_GetTargetReductionMinValue, 1,
   (char*)"V.GetTargetReductionMinValue() -> float\nC++: double GetTargetReductionMinValue()\n\nSpecify the desired reduction in the total number of polygons\n(e.g., if TargetReduction is set to 0.9, this filter will try to\nreduce the data set to 10% of its original size). Because of\nvarious constraints, this level of reduction may not be realized.\nIf you want to guarantee a particular reduction, you must turn\noff PreserveTopology, turn on SplitEdges and\nBoundaryVertexDeletion, and set the MaximumError to\nVTK_DOUBLE_MAX (these ivars are initialized this way when the\nobject is instantiated).\n"},
  {(char*)"GetTargetReductionMaxValue", PyvtkDecimatePro_GetTargetReductionMaxValue, 1,
   (char*)"V.GetTargetReductionMaxValue() -> float\nC++: double GetTargetReductionMaxValue()\n\nSpecify the desired reduction in the total number of polygons\n(e.g., if TargetReduction is set to 0.9, this filter will try to\nreduce the data set to 10% of its original size). Because of\nvarious constraints, this level of reduction may not be realized.\nIf you want to guarantee a particular reduction, you must turn\noff PreserveTopology, turn on SplitEdges and\nBoundaryVertexDeletion, and set the MaximumError to\nVTK_DOUBLE_MAX (these ivars are initialized this way when the\nobject is instantiated).\n"},
  {(char*)"GetTargetReduction", PyvtkDecimatePro_GetTargetReduction, 1,
   (char*)"V.GetTargetReduction() -> float\nC++: double GetTargetReduction()\n\nSpecify the desired reduction in the total number of polygons\n(e.g., if TargetReduction is set to 0.9, this filter will try to\nreduce the data set to 10% of its original size). Because of\nvarious constraints, this level of reduction may not be realized.\nIf you want to guarantee a particular reduction, you must turn\noff PreserveTopology, turn on SplitEdges and\nBoundaryVertexDeletion, and set the MaximumError to\nVTK_DOUBLE_MAX (these ivars are initialized this way when the\nobject is instantiated).\n"},
  {(char*)"SetPreserveTopology", PyvtkDecimatePro_SetPreserveTopology, 1,
   (char*)"V.SetPreserveTopology(int)\nC++: void SetPreserveTopology(int a)\n\nTurn on/off whether to preserve the topology of the original\nmesh. If on, mesh splitting and hole elimination will not occur.\nThis may limit the maximum reduction that may be achieved.\n"},
  {(char*)"GetPreserveTopology", PyvtkDecimatePro_GetPreserveTopology, 1,
   (char*)"V.GetPreserveTopology() -> int\nC++: int GetPreserveTopology()\n\nTurn on/off whether to preserve the topology of the original\nmesh. If on, mesh splitting and hole elimination will not occur.\nThis may limit the maximum reduction that may be achieved.\n"},
  {(char*)"PreserveTopologyOn", PyvtkDecimatePro_PreserveTopologyOn, 1,
   (char*)"V.PreserveTopologyOn()\nC++: void PreserveTopologyOn()\n\nTurn on/off whether to preserve the topology of the original\nmesh. If on, mesh splitting and hole elimination will not occur.\nThis may limit the maximum reduction that may be achieved.\n"},
  {(char*)"PreserveTopologyOff", PyvtkDecimatePro_PreserveTopologyOff, 1,
   (char*)"V.PreserveTopologyOff()\nC++: void PreserveTopologyOff()\n\nTurn on/off whether to preserve the topology of the original\nmesh. If on, mesh splitting and hole elimination will not occur.\nThis may limit the maximum reduction that may be achieved.\n"},
  {(char*)"SetFeatureAngle", PyvtkDecimatePro_SetFeatureAngle, 1,
   (char*)"V.SetFeatureAngle(float)\nC++: void SetFeatureAngle(double)\n\nSpecify the mesh feature angle. This angle is used to define what\nan edge is (i.e., if the surface normal between two adjacent\ntriangles is >= FeatureAngle, an edge exists).\n"},
  {(char*)"GetFeatureAngleMinValue", PyvtkDecimatePro_GetFeatureAngleMinValue, 1,
   (char*)"V.GetFeatureAngleMinValue() -> float\nC++: double GetFeatureAngleMinValue()\n\nSpecify the mesh feature angle. This angle is used to define what\nan edge is (i.e., if the surface normal between two adjacent\ntriangles is >= FeatureAngle, an edge exists).\n"},
  {(char*)"GetFeatureAngleMaxValue", PyvtkDecimatePro_GetFeatureAngleMaxValue, 1,
   (char*)"V.GetFeatureAngleMaxValue() -> float\nC++: double GetFeatureAngleMaxValue()\n\nSpecify the mesh feature angle. This angle is used to define what\nan edge is (i.e., if the surface normal between two adjacent\ntriangles is >= FeatureAngle, an edge exists).\n"},
  {(char*)"GetFeatureAngle", PyvtkDecimatePro_GetFeatureAngle, 1,
   (char*)"V.GetFeatureAngle() -> float\nC++: double GetFeatureAngle()\n\nSpecify the mesh feature angle. This angle is used to define what\nan edge is (i.e., if the surface normal between two adjacent\ntriangles is >= FeatureAngle, an edge exists).\n"},
  {(char*)"SetSplitting", PyvtkDecimatePro_SetSplitting, 1,
   (char*)"V.SetSplitting(int)\nC++: void SetSplitting(int a)\n\nTurn on/off the splitting of the mesh at corners, along edges, at\nnon-manifold points, or anywhere else a split is required.\nTurning splitting off will better preserve the original topology\nof the mesh, but you may not obtain the requested reduction.\n"},
  {(char*)"GetSplitting", PyvtkDecimatePro_GetSplitting, 1,
   (char*)"V.GetSplitting() -> int\nC++: int GetSplitting()\n\nTurn on/off the splitting of the mesh at corners, along edges, at\nnon-manifold points, or anywhere else a split is required.\nTurning splitting off will better preserve the original topology\nof the mesh, but you may not obtain the requested reduction.\n"},
  {(char*)"SplittingOn", PyvtkDecimatePro_SplittingOn, 1,
   (char*)"V.SplittingOn()\nC++: void SplittingOn()\n\nTurn on/off the splitting of the mesh at corners, along edges, at\nnon-manifold points, or anywhere else a split is required.\nTurning splitting off will better preserve the original topology\nof the mesh, but you may not obtain the requested reduction.\n"},
  {(char*)"SplittingOff", PyvtkDecimatePro_SplittingOff, 1,
   (char*)"V.SplittingOff()\nC++: void SplittingOff()\n\nTurn on/off the splitting of the mesh at corners, along edges, at\nnon-manifold points, or anywhere else a split is required.\nTurning splitting off will better preserve the original topology\nof the mesh, but you may not obtain the requested reduction.\n"},
  {(char*)"SetSplitAngle", PyvtkDecimatePro_SetSplitAngle, 1,
   (char*)"V.SetSplitAngle(float)\nC++: void SetSplitAngle(double)\n\nSpecify the mesh split angle. This angle is used to control the\nsplitting of the mesh. A split line exists when the surface\nnormals between two edge connected triangles are >= SplitAngle.\n"},
  {(char*)"GetSplitAngleMinValue", PyvtkDecimatePro_GetSplitAngleMinValue, 1,
   (char*)"V.GetSplitAngleMinValue() -> float\nC++: double GetSplitAngleMinValue()\n\nSpecify the mesh split angle. This angle is used to control the\nsplitting of the mesh. A split line exists when the surface\nnormals between two edge connected triangles are >= SplitAngle.\n"},
  {(char*)"GetSplitAngleMaxValue", PyvtkDecimatePro_GetSplitAngleMaxValue, 1,
   (char*)"V.GetSplitAngleMaxValue() -> float\nC++: double GetSplitAngleMaxValue()\n\nSpecify the mesh split angle. This angle is used to control the\nsplitting of the mesh. A split line exists when the surface\nnormals between two edge connected triangles are >= SplitAngle.\n"},
  {(char*)"GetSplitAngle", PyvtkDecimatePro_GetSplitAngle, 1,
   (char*)"V.GetSplitAngle() -> float\nC++: double GetSplitAngle()\n\nSpecify the mesh split angle. This angle is used to control the\nsplitting of the mesh. A split line exists when the surface\nnormals between two edge connected triangles are >= SplitAngle.\n"},
  {(char*)"SetPreSplitMesh", PyvtkDecimatePro_SetPreSplitMesh, 1,
   (char*)"V.SetPreSplitMesh(int)\nC++: void SetPreSplitMesh(int a)\n\nIn some cases you may wish to split the mesh prior to algorithm\nexecution. This separates the mesh into semi-planar patches,\nwhich are disconnected from each other. This can give superior\nresults in some cases. If the ivar PreSplitMesh ivar is enabled,\nthe mesh is split with the specified SplitAngle. Otherwise mesh\nsplitting is deferred as long as possible.\n"},
  {(char*)"GetPreSplitMesh", PyvtkDecimatePro_GetPreSplitMesh, 1,
   (char*)"V.GetPreSplitMesh() -> int\nC++: int GetPreSplitMesh()\n\nIn some cases you may wish to split the mesh prior to algorithm\nexecution. This separates the mesh into semi-planar patches,\nwhich are disconnected from each other. This can give superior\nresults in some cases. If the ivar PreSplitMesh ivar is enabled,\nthe mesh is split with the specified SplitAngle. Otherwise mesh\nsplitting is deferred as long as possible.\n"},
  {(char*)"PreSplitMeshOn", PyvtkDecimatePro_PreSplitMeshOn, 1,
   (char*)"V.PreSplitMeshOn()\nC++: void PreSplitMeshOn()\n\nIn some cases you may wish to split the mesh prior to algorithm\nexecution. This separates the mesh into semi-planar patches,\nwhich are disconnected from each other. This can give superior\nresults in some cases. If the ivar PreSplitMesh ivar is enabled,\nthe mesh is split with the specified SplitAngle. Otherwise mesh\nsplitting is deferred as long as possible.\n"},
  {(char*)"PreSplitMeshOff", PyvtkDecimatePro_PreSplitMeshOff, 1,
   (char*)"V.PreSplitMeshOff()\nC++: void PreSplitMeshOff()\n\nIn some cases you may wish to split the mesh prior to algorithm\nexecution. This separates the mesh into semi-planar patches,\nwhich are disconnected from each other. This can give superior\nresults in some cases. If the ivar PreSplitMesh ivar is enabled,\nthe mesh is split with the specified SplitAngle. Otherwise mesh\nsplitting is deferred as long as possible.\n"},
  {(char*)"SetMaximumError", PyvtkDecimatePro_SetMaximumError, 1,
   (char*)"V.SetMaximumError(float)\nC++: void SetMaximumError(double)\n\nSet the largest decimation error that is allowed during the\ndecimation process. This may limit the maximum reduction that may\nbe achieved. The maximum error is specified as a fraction of the\nmaximum length of the input data bounding box.\n"},
  {(char*)"GetMaximumErrorMinValue", PyvtkDecimatePro_GetMaximumErrorMinValue, 1,
   (char*)"V.GetMaximumErrorMinValue() -> float\nC++: double GetMaximumErrorMinValue()\n\nSet the largest decimation error that is allowed during the\ndecimation process. This may limit the maximum reduction that may\nbe achieved. The maximum error is specified as a fraction of the\nmaximum length of the input data bounding box.\n"},
  {(char*)"GetMaximumErrorMaxValue", PyvtkDecimatePro_GetMaximumErrorMaxValue, 1,
   (char*)"V.GetMaximumErrorMaxValue() -> float\nC++: double GetMaximumErrorMaxValue()\n\nSet the largest decimation error that is allowed during the\ndecimation process. This may limit the maximum reduction that may\nbe achieved. The maximum error is specified as a fraction of the\nmaximum length of the input data bounding box.\n"},
  {(char*)"GetMaximumError", PyvtkDecimatePro_GetMaximumError, 1,
   (char*)"V.GetMaximumError() -> float\nC++: double GetMaximumError()\n\nSet the largest decimation error that is allowed during the\ndecimation process. This may limit the maximum reduction that may\nbe achieved. The maximum error is specified as a fraction of the\nmaximum length of the input data bounding box.\n"},
  {(char*)"SetAccumulateError", PyvtkDecimatePro_SetAccumulateError, 1,
   (char*)"V.SetAccumulateError(int)\nC++: void SetAccumulateError(int a)\n\nThe computed error can either be computed directly from the mesh\nor the error may be accumulated as the mesh is modified. If the\nerror is accumulated, then it represents a global error bounds,\nand the ivar MaximumError becomes a global bounds on mesh error.\nAccumulating the error requires extra memory proportional to the\nnumber of vertices in the mesh. If AccumulateError is off, then\nthe error is not accumulated.\n"},
  {(char*)"GetAccumulateError", PyvtkDecimatePro_GetAccumulateError, 1,
   (char*)"V.GetAccumulateError() -> int\nC++: int GetAccumulateError()\n\nThe computed error can either be computed directly from the mesh\nor the error may be accumulated as the mesh is modified. If the\nerror is accumulated, then it represents a global error bounds,\nand the ivar MaximumError becomes a global bounds on mesh error.\nAccumulating the error requires extra memory proportional to the\nnumber of vertices in the mesh. If AccumulateError is off, then\nthe error is not accumulated.\n"},
  {(char*)"AccumulateErrorOn", PyvtkDecimatePro_AccumulateErrorOn, 1,
   (char*)"V.AccumulateErrorOn()\nC++: void AccumulateErrorOn()\n\nThe computed error can either be computed directly from the mesh\nor the error may be accumulated as the mesh is modified. If the\nerror is accumulated, then it represents a global error bounds,\nand the ivar MaximumError becomes a global bounds on mesh error.\nAccumulating the error requires extra memory proportional to the\nnumber of vertices in the mesh. If AccumulateError is off, then\nthe error is not accumulated.\n"},
  {(char*)"AccumulateErrorOff", PyvtkDecimatePro_AccumulateErrorOff, 1,
   (char*)"V.AccumulateErrorOff()\nC++: void AccumulateErrorOff()\n\nThe computed error can either be computed directly from the mesh\nor the error may be accumulated as the mesh is modified. If the\nerror is accumulated, then it represents a global error bounds,\nand the ivar MaximumError becomes a global bounds on mesh error.\nAccumulating the error requires extra memory proportional to the\nnumber of vertices in the mesh. If AccumulateError is off, then\nthe error is not accumulated.\n"},
  {(char*)"SetErrorIsAbsolute", PyvtkDecimatePro_SetErrorIsAbsolute, 1,
   (char*)"V.SetErrorIsAbsolute(int)\nC++: void SetErrorIsAbsolute(int a)\n\nThe MaximumError is normally defined as a fraction of the dataset\nbounding diagonal. By setting ErrorIsAbsolute to 1, the error is\ninstead defined as that specified by AbsoluteError. By default\nErrorIsAbsolute=0.\n"},
  {(char*)"GetErrorIsAbsolute", PyvtkDecimatePro_GetErrorIsAbsolute, 1,
   (char*)"V.GetErrorIsAbsolute() -> int\nC++: int GetErrorIsAbsolute()\n\nThe MaximumError is normally defined as a fraction of the dataset\nbounding diagonal. By setting ErrorIsAbsolute to 1, the error is\ninstead defined as that specified by AbsoluteError. By default\nErrorIsAbsolute=0.\n"},
  {(char*)"SetAbsoluteError", PyvtkDecimatePro_SetAbsoluteError, 1,
   (char*)"V.SetAbsoluteError(float)\nC++: void SetAbsoluteError(double)\n\nSame as MaximumError, but to be used when ErrorIsAbsolute is 1\n"},
  {(char*)"GetAbsoluteErrorMinValue", PyvtkDecimatePro_GetAbsoluteErrorMinValue, 1,
   (char*)"V.GetAbsoluteErrorMinValue() -> float\nC++: double GetAbsoluteErrorMinValue()\n\nSame as MaximumError, but to be used when ErrorIsAbsolute is 1\n"},
  {(char*)"GetAbsoluteErrorMaxValue", PyvtkDecimatePro_GetAbsoluteErrorMaxValue, 1,
   (char*)"V.GetAbsoluteErrorMaxValue() -> float\nC++: double GetAbsoluteErrorMaxValue()\n\nSame as MaximumError, but to be used when ErrorIsAbsolute is 1\n"},
  {(char*)"GetAbsoluteError", PyvtkDecimatePro_GetAbsoluteError, 1,
   (char*)"V.GetAbsoluteError() -> float\nC++: double GetAbsoluteError()\n\nSame as MaximumError, but to be used when ErrorIsAbsolute is 1\n"},
  {(char*)"SetBoundaryVertexDeletion", PyvtkDecimatePro_SetBoundaryVertexDeletion, 1,
   (char*)"V.SetBoundaryVertexDeletion(int)\nC++: void SetBoundaryVertexDeletion(int a)\n\nTurn on/off the deletion of vertices on the boundary of a mesh.\nThis may limit the maximum reduction that may be achieved.\n"},
  {(char*)"GetBoundaryVertexDeletion", PyvtkDecimatePro_GetBoundaryVertexDeletion, 1,
   (char*)"V.GetBoundaryVertexDeletion() -> int\nC++: int GetBoundaryVertexDeletion()\n\nTurn on/off the deletion of vertices on the boundary of a mesh.\nThis may limit the maximum reduction that may be achieved.\n"},
  {(char*)"BoundaryVertexDeletionOn", PyvtkDecimatePro_BoundaryVertexDeletionOn, 1,
   (char*)"V.BoundaryVertexDeletionOn()\nC++: void BoundaryVertexDeletionOn()\n\nTurn on/off the deletion of vertices on the boundary of a mesh.\nThis may limit the maximum reduction that may be achieved.\n"},
  {(char*)"BoundaryVertexDeletionOff", PyvtkDecimatePro_BoundaryVertexDeletionOff, 1,
   (char*)"V.BoundaryVertexDeletionOff()\nC++: void BoundaryVertexDeletionOff()\n\nTurn on/off the deletion of vertices on the boundary of a mesh.\nThis may limit the maximum reduction that may be achieved.\n"},
  {(char*)"SetDegree", PyvtkDecimatePro_SetDegree, 1,
   (char*)"V.SetDegree(int)\nC++: void SetDegree(int)\n\nIf the number of triangles connected to a vertex exceeds\n\"Degree\", then the vertex will be split. (NOTE: the complexity of\nthe triangulation algorithm is proportional to Degree^2. Setting\ndegree small can improve the performance of the algorithm.)\n"},
  {(char*)"GetDegreeMinValue", PyvtkDecimatePro_GetDegreeMinValue, 1,
   (char*)"V.GetDegreeMinValue() -> int\nC++: int GetDegreeMinValue()\n\nIf the number of triangles connected to a vertex exceeds\n\"Degree\", then the vertex will be split. (NOTE: the complexity of\nthe triangulation algorithm is proportional to Degree^2. Setting\ndegree small can improve the performance of the algorithm.)\n"},
  {(char*)"GetDegreeMaxValue", PyvtkDecimatePro_GetDegreeMaxValue, 1,
   (char*)"V.GetDegreeMaxValue() -> int\nC++: int GetDegreeMaxValue()\n\nIf the number of triangles connected to a vertex exceeds\n\"Degree\", then the vertex will be split. (NOTE: the complexity of\nthe triangulation algorithm is proportional to Degree^2. Setting\ndegree small can improve the performance of the algorithm.)\n"},
  {(char*)"GetDegree", PyvtkDecimatePro_GetDegree, 1,
   (char*)"V.GetDegree() -> int\nC++: int GetDegree()\n\nIf the number of triangles connected to a vertex exceeds\n\"Degree\", then the vertex will be split. (NOTE: the complexity of\nthe triangulation algorithm is proportional to Degree^2. Setting\ndegree small can improve the performance of the algorithm.)\n"},
  {(char*)"SetInflectionPointRatio", PyvtkDecimatePro_SetInflectionPointRatio, 1,
   (char*)"V.SetInflectionPointRatio(float)\nC++: void SetInflectionPointRatio(double)\n\nSpecify the inflection point ratio. An inflection point occurs\nwhen the ratio of reduction error between two iterations is\ngreater than or equal to the InflectionPointRatio.\n"},
  {(char*)"GetInflectionPointRatioMinValue", PyvtkDecimatePro_GetInflectionPointRatioMinValue, 1,
   (char*)"V.GetInflectionPointRatioMinValue() -> float\nC++: double GetInflectionPointRatioMinValue()\n\nSpecify the inflection point ratio. An inflection point occurs\nwhen the ratio of reduction error between two iterations is\ngreater than or equal to the InflectionPointRatio.\n"},
  {(char*)"GetInflectionPointRatioMaxValue", PyvtkDecimatePro_GetInflectionPointRatioMaxValue, 1,
   (char*)"V.GetInflectionPointRatioMaxValue() -> float\nC++: double GetInflectionPointRatioMaxValue()\n\nSpecify the inflection point ratio. An inflection point occurs\nwhen the ratio of reduction error between two iterations is\ngreater than or equal to the InflectionPointRatio.\n"},
  {(char*)"GetInflectionPointRatio", PyvtkDecimatePro_GetInflectionPointRatio, 1,
   (char*)"V.GetInflectionPointRatio() -> float\nC++: double GetInflectionPointRatio()\n\nSpecify the inflection point ratio. An inflection point occurs\nwhen the ratio of reduction error between two iterations is\ngreater than or equal to the InflectionPointRatio.\n"},
  {(char*)"GetNumberOfInflectionPoints", PyvtkDecimatePro_GetNumberOfInflectionPoints, 1,
   (char*)"V.GetNumberOfInflectionPoints() -> int\nC++: vtkIdType GetNumberOfInflectionPoints()\n\nGet the number of inflection points. Only returns a valid value\nafter the filter has executed.  The values in the list are mesh\nreduction values at each inflection point. Note: the first\ninflection point always occurs right before non-planar triangles\nare decimated (i.e., as the error becomes non-zero).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDecimatePro_StaticNew()
{
  return vtkDecimatePro::New();
}

PyObject *PyVTKClass_vtkDecimateProNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDecimatePro_StaticNew,
    PyvtkDecimatePro_Methods,
    "vtkDecimatePro", modulename,
    NULL, NULL,
    PyvtkDecimatePro_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkDecimatePro_Doc()
{
  static const char *docstring[] = {
    "vtkDecimatePro - reduce the number of triangles in a mesh\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkDecimatePro is a filter to reduce the number of triangles in a\ntriangle mesh, forming a good approximation to the original geometry.\nThe input to vtkDecimatePro is a vtkPolyData object, and only\ntriangles are treated. If you desire to decimate polygonal meshes,\nfirst triangulate the polygons with vtkTriangleFilter object.\n\nThe implementation of vtkDecimatePro is similar to the algorithm\norigina",
    "lly described in \"Decimation of Triangle Meshes\", Proc\nSiggraph `92, with three major differences. First, this algorithm\ndoes not necessarily preserve the topology of the mesh. Second, it is\nguaranteed to give the a mesh reduction factor specified by the user\n(as long as certain constraints are not set - see Caveats). Third, it\nis set up generate progressive meshes, that is a stream of operations\n",
    "that can be easily transmitted and incrementally updated (see Hugues\nHoppe's Siggraph '96 paper on progressive meshes).\n\nThe algorithm proceeds as follows. Each vertex in the mesh is\nclassified and inserted into a priority queue. The priority is based\non the error to delete the vertex and retriangulate the hole.\nVertices that cannot be deleted or triangulated (at this point in the\nalgorithm) are s",
    "kipped. Then, each vertex in the priority queue is\nprocessed (i.e., deleted followed by hole triangulation using edge\ncollapse). This continues until the priority queue is empty. Next,\nall remaining vertices are processed, and the mesh is split into\nseparate pieces along sharp edges or at non-manifold attachment\npoints and reinserted into the priority queue. Again, the priority\nqueue is processed ",
    "until empty. If the desired reduction is still not\nachieved, the remaining vertices are split as necessary (in a\nrecursive fashion) so that it is possible to eliminate every triangle\nas necessary.\n\nTo use this object, at a minimum you need to specify the ivar\nTargetReduction. The algorithm is guaranteed to generate a reduced\nmesh at this level as long as the following four conditions are met:\n1) t",
    "opology modification is allowed (i.e., the ivar PreserveTopology\nis off);\n2) mesh splitting is enabled (i.e., the ivar Splitting is on); 3) the\n   algorithm is allowed to modify the boundary of the mesh (i.e., the\nivar BoundaryVertexDeletion is on); and 4) the maximum allowable\n   error (i.e., the ivar MaximumError) is set to VTK_DOUBLE_MAX. \n   Other important parameters to adjust include the Fea",
    "tureAngle and\n   SplitAngle ivars, since these can impact the quality of the final\n   mesh. Also, you can set the ivar AccumulateError to force\n   incremental error update and distribution to surrounding vertices\n   as each vertex is deleted. The accumulated error is a conservative\nglobal error bounds and decimation error, but requires additional\n   memory and time to compute.\n\nCaveats:\n\nTo guaran",
    "tee a given level of reduction, the ivar PreserveTopology\nmust be off; the ivar Splitting is on; the ivar\nBoundaryVertexDeletion is on; and the ivar MaximumError is set to\nVTK_DOUBLE_MAX.\n\nIf PreserveTopology is off, and SplitEdges is off; the mesh topology\nmay be modified by closing holes.\n\nOnce mesh splitting begins, the feature angle is set to the split\nangle.\n\nSee Also:\n\nvtkDecimate vtkQuadric",
    "Clustering vtkQuadricDecimation\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDecimatePro(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDecimateProNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDecimatePro", o) != 0)
    {
    Py_DECREF(o);
    }

}
