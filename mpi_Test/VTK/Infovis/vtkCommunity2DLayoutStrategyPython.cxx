// python wrapper for vtkCommunity2DLayoutStrategy
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
#include "vtkCommunity2DLayoutStrategy.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCommunity2DLayoutStrategy(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCommunity2DLayoutStrategy(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCommunity2DLayoutStrategyNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCommunity2DLayoutStrategyNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkGraphLayoutStrategyNew
extern "C" { PyObject *PyVTKClass_vtkGraphLayoutStrategyNew(const char *); }
#define DECLARED_PyVTKClass_vtkGraphLayoutStrategyNew
#endif

static const char **PyvtkCommunity2DLayoutStrategy_Doc();


static PyObject *
PyvtkCommunity2DLayoutStrategy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunity2DLayoutStrategy *op = static_cast<vtkCommunity2DLayoutStrategy *>(vp);

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
      tempr = op->vtkCommunity2DLayoutStrategy::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunity2DLayoutStrategy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunity2DLayoutStrategy *op = static_cast<vtkCommunity2DLayoutStrategy *>(vp);

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
      tempr = op->vtkCommunity2DLayoutStrategy::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunity2DLayoutStrategy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunity2DLayoutStrategy *op = static_cast<vtkCommunity2DLayoutStrategy *>(vp);

  vtkCommunity2DLayoutStrategy *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCommunity2DLayoutStrategy::NewInstance();
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
PyvtkCommunity2DLayoutStrategy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCommunity2DLayoutStrategy *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCommunity2DLayoutStrategy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunity2DLayoutStrategy_SetRandomSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRandomSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunity2DLayoutStrategy *op = static_cast<vtkCommunity2DLayoutStrategy *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRandomSeed(temp0);
      }
    else
      {
      op->vtkCommunity2DLayoutStrategy::SetRandomSeed(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCommunity2DLayoutStrategy_GetRandomSeedMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRandomSeedMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunity2DLayoutStrategy *op = static_cast<vtkCommunity2DLayoutStrategy *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRandomSeedMinValue();
      }
    else
      {
      tempr = op->vtkCommunity2DLayoutStrategy::GetRandomSeedMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunity2DLayoutStrategy_GetRandomSeedMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRandomSeedMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunity2DLayoutStrategy *op = static_cast<vtkCommunity2DLayoutStrategy *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRandomSeedMaxValue();
      }
    else
      {
      tempr = op->vtkCommunity2DLayoutStrategy::GetRandomSeedMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunity2DLayoutStrategy_GetRandomSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRandomSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunity2DLayoutStrategy *op = static_cast<vtkCommunity2DLayoutStrategy *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRandomSeed();
      }
    else
      {
      tempr = op->vtkCommunity2DLayoutStrategy::GetRandomSeed();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunity2DLayoutStrategy_SetMaxNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunity2DLayoutStrategy *op = static_cast<vtkCommunity2DLayoutStrategy *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaxNumberOfIterations(temp0);
      }
    else
      {
      op->vtkCommunity2DLayoutStrategy::SetMaxNumberOfIterations(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCommunity2DLayoutStrategy_GetMaxNumberOfIterationsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumberOfIterationsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunity2DLayoutStrategy *op = static_cast<vtkCommunity2DLayoutStrategy *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaxNumberOfIterationsMinValue();
      }
    else
      {
      tempr = op->vtkCommunity2DLayoutStrategy::GetMaxNumberOfIterationsMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunity2DLayoutStrategy_GetMaxNumberOfIterationsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumberOfIterationsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunity2DLayoutStrategy *op = static_cast<vtkCommunity2DLayoutStrategy *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaxNumberOfIterationsMaxValue();
      }
    else
      {
      tempr = op->vtkCommunity2DLayoutStrategy::GetMaxNumberOfIterationsMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunity2DLayoutStrategy_GetMaxNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunity2DLayoutStrategy *op = static_cast<vtkCommunity2DLayoutStrategy *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaxNumberOfIterations();
      }
    else
      {
      tempr = op->vtkCommunity2DLayoutStrategy::GetMaxNumberOfIterations();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunity2DLayoutStrategy_SetIterationsPerLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIterationsPerLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunity2DLayoutStrategy *op = static_cast<vtkCommunity2DLayoutStrategy *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIterationsPerLayout(temp0);
      }
    else
      {
      op->vtkCommunity2DLayoutStrategy::SetIterationsPerLayout(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCommunity2DLayoutStrategy_GetIterationsPerLayoutMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIterationsPerLayoutMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunity2DLayoutStrategy *op = static_cast<vtkCommunity2DLayoutStrategy *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIterationsPerLayoutMinValue();
      }
    else
      {
      tempr = op->vtkCommunity2DLayoutStrategy::GetIterationsPerLayoutMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunity2DLayoutStrategy_GetIterationsPerLayoutMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIterationsPerLayoutMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunity2DLayoutStrategy *op = static_cast<vtkCommunity2DLayoutStrategy *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIterationsPerLayoutMaxValue();
      }
    else
      {
      tempr = op->vtkCommunity2DLayoutStrategy::GetIterationsPerLayoutMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunity2DLayoutStrategy_GetIterationsPerLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIterationsPerLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunity2DLayoutStrategy *op = static_cast<vtkCommunity2DLayoutStrategy *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIterationsPerLayout();
      }
    else
      {
      tempr = op->vtkCommunity2DLayoutStrategy::GetIterationsPerLayout();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunity2DLayoutStrategy_SetInitialTemperature(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInitialTemperature");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunity2DLayoutStrategy *op = static_cast<vtkCommunity2DLayoutStrategy *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInitialTemperature(temp0);
      }
    else
      {
      op->vtkCommunity2DLayoutStrategy::SetInitialTemperature(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCommunity2DLayoutStrategy_GetInitialTemperatureMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInitialTemperatureMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunity2DLayoutStrategy *op = static_cast<vtkCommunity2DLayoutStrategy *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInitialTemperatureMinValue();
      }
    else
      {
      tempr = op->vtkCommunity2DLayoutStrategy::GetInitialTemperatureMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunity2DLayoutStrategy_GetInitialTemperatureMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInitialTemperatureMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunity2DLayoutStrategy *op = static_cast<vtkCommunity2DLayoutStrategy *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInitialTemperatureMaxValue();
      }
    else
      {
      tempr = op->vtkCommunity2DLayoutStrategy::GetInitialTemperatureMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunity2DLayoutStrategy_GetInitialTemperature(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInitialTemperature");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunity2DLayoutStrategy *op = static_cast<vtkCommunity2DLayoutStrategy *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInitialTemperature();
      }
    else
      {
      tempr = op->vtkCommunity2DLayoutStrategy::GetInitialTemperature();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunity2DLayoutStrategy_SetCoolDownRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoolDownRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunity2DLayoutStrategy *op = static_cast<vtkCommunity2DLayoutStrategy *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCoolDownRate(temp0);
      }
    else
      {
      op->vtkCommunity2DLayoutStrategy::SetCoolDownRate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCommunity2DLayoutStrategy_GetCoolDownRateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoolDownRateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunity2DLayoutStrategy *op = static_cast<vtkCommunity2DLayoutStrategy *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCoolDownRateMinValue();
      }
    else
      {
      tempr = op->vtkCommunity2DLayoutStrategy::GetCoolDownRateMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunity2DLayoutStrategy_GetCoolDownRateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoolDownRateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunity2DLayoutStrategy *op = static_cast<vtkCommunity2DLayoutStrategy *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCoolDownRateMaxValue();
      }
    else
      {
      tempr = op->vtkCommunity2DLayoutStrategy::GetCoolDownRateMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunity2DLayoutStrategy_GetCoolDownRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoolDownRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunity2DLayoutStrategy *op = static_cast<vtkCommunity2DLayoutStrategy *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCoolDownRate();
      }
    else
      {
      tempr = op->vtkCommunity2DLayoutStrategy::GetCoolDownRate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunity2DLayoutStrategy_SetRestDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRestDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunity2DLayoutStrategy *op = static_cast<vtkCommunity2DLayoutStrategy *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRestDistance(temp0);
      }
    else
      {
      op->vtkCommunity2DLayoutStrategy::SetRestDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCommunity2DLayoutStrategy_GetRestDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRestDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunity2DLayoutStrategy *op = static_cast<vtkCommunity2DLayoutStrategy *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRestDistance();
      }
    else
      {
      tempr = op->vtkCommunity2DLayoutStrategy::GetRestDistance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunity2DLayoutStrategy_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunity2DLayoutStrategy *op = static_cast<vtkCommunity2DLayoutStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkCommunity2DLayoutStrategy::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCommunity2DLayoutStrategy_Layout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Layout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunity2DLayoutStrategy *op = static_cast<vtkCommunity2DLayoutStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Layout();
      }
    else
      {
      op->vtkCommunity2DLayoutStrategy::Layout();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCommunity2DLayoutStrategy_IsLayoutComplete(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsLayoutComplete");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunity2DLayoutStrategy *op = static_cast<vtkCommunity2DLayoutStrategy *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsLayoutComplete();
      }
    else
      {
      tempr = op->vtkCommunity2DLayoutStrategy::IsLayoutComplete();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunity2DLayoutStrategy_GetCommunityArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCommunityArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunity2DLayoutStrategy *op = static_cast<vtkCommunity2DLayoutStrategy *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCommunityArrayName();
      }
    else
      {
      tempr = op->vtkCommunity2DLayoutStrategy::GetCommunityArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunity2DLayoutStrategy_SetCommunityArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCommunityArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunity2DLayoutStrategy *op = static_cast<vtkCommunity2DLayoutStrategy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCommunityArrayName(temp0);
      }
    else
      {
      op->vtkCommunity2DLayoutStrategy::SetCommunityArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCommunity2DLayoutStrategy_SetCommunityStrength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCommunityStrength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunity2DLayoutStrategy *op = static_cast<vtkCommunity2DLayoutStrategy *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCommunityStrength(temp0);
      }
    else
      {
      op->vtkCommunity2DLayoutStrategy::SetCommunityStrength(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCommunity2DLayoutStrategy_GetCommunityStrengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCommunityStrengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunity2DLayoutStrategy *op = static_cast<vtkCommunity2DLayoutStrategy *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCommunityStrengthMinValue();
      }
    else
      {
      tempr = op->vtkCommunity2DLayoutStrategy::GetCommunityStrengthMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunity2DLayoutStrategy_GetCommunityStrengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCommunityStrengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunity2DLayoutStrategy *op = static_cast<vtkCommunity2DLayoutStrategy *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCommunityStrengthMaxValue();
      }
    else
      {
      tempr = op->vtkCommunity2DLayoutStrategy::GetCommunityStrengthMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunity2DLayoutStrategy_GetCommunityStrength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCommunityStrength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunity2DLayoutStrategy *op = static_cast<vtkCommunity2DLayoutStrategy *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCommunityStrength();
      }
    else
      {
      tempr = op->vtkCommunity2DLayoutStrategy::GetCommunityStrength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCommunity2DLayoutStrategy_Methods[] = {
  {(char*)"GetClassName", PyvtkCommunity2DLayoutStrategy_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCommunity2DLayoutStrategy_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCommunity2DLayoutStrategy_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCommunity2DLayoutStrategy\nC++: vtkCommunity2DLayoutStrategy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCommunity2DLayoutStrategy_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCommunity2DLayoutStrategy\nC++: vtkCommunity2DLayoutStrategy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetRandomSeed", PyvtkCommunity2DLayoutStrategy_SetRandomSeed, 1,
   (char*)"V.SetRandomSeed(int)\nC++: void SetRandomSeed(int)\n\nSeed the random number generator used to jitter point positions.\nThis has a significant effect on their final positions when the\nlayout is complete.\n"},
  {(char*)"GetRandomSeedMinValue", PyvtkCommunity2DLayoutStrategy_GetRandomSeedMinValue, 1,
   (char*)"V.GetRandomSeedMinValue() -> int\nC++: int GetRandomSeedMinValue()\n\nSeed the random number generator used to jitter point positions.\nThis has a significant effect on their final positions when the\nlayout is complete.\n"},
  {(char*)"GetRandomSeedMaxValue", PyvtkCommunity2DLayoutStrategy_GetRandomSeedMaxValue, 1,
   (char*)"V.GetRandomSeedMaxValue() -> int\nC++: int GetRandomSeedMaxValue()\n\nSeed the random number generator used to jitter point positions.\nThis has a significant effect on their final positions when the\nlayout is complete.\n"},
  {(char*)"GetRandomSeed", PyvtkCommunity2DLayoutStrategy_GetRandomSeed, 1,
   (char*)"V.GetRandomSeed() -> int\nC++: int GetRandomSeed()\n\nSeed the random number generator used to jitter point positions.\nThis has a significant effect on their final positions when the\nlayout is complete.\n"},
  {(char*)"SetMaxNumberOfIterations", PyvtkCommunity2DLayoutStrategy_SetMaxNumberOfIterations, 1,
   (char*)"V.SetMaxNumberOfIterations(int)\nC++: void SetMaxNumberOfIterations(int)\n\nSet/Get the maximum number of iterations to be used. The higher\nthis number, the more iterations through the algorithm is\npossible, and thus, the more the graph gets modified. The default\nis '100' for no particular reason Note: The strong recommendation\nis that you do not change this parameter. :)\n"},
  {(char*)"GetMaxNumberOfIterationsMinValue", PyvtkCommunity2DLayoutStrategy_GetMaxNumberOfIterationsMinValue, 1,
   (char*)"V.GetMaxNumberOfIterationsMinValue() -> int\nC++: int GetMaxNumberOfIterationsMinValue()\n\nSet/Get the maximum number of iterations to be used. The higher\nthis number, the more iterations through the algorithm is\npossible, and thus, the more the graph gets modified. The default\nis '100' for no particular reason Note: The strong recommendation\nis that you do not change this parameter. :)\n"},
  {(char*)"GetMaxNumberOfIterationsMaxValue", PyvtkCommunity2DLayoutStrategy_GetMaxNumberOfIterationsMaxValue, 1,
   (char*)"V.GetMaxNumberOfIterationsMaxValue() -> int\nC++: int GetMaxNumberOfIterationsMaxValue()\n\nSet/Get the maximum number of iterations to be used. The higher\nthis number, the more iterations through the algorithm is\npossible, and thus, the more the graph gets modified. The default\nis '100' for no particular reason Note: The strong recommendation\nis that you do not change this parameter. :)\n"},
  {(char*)"GetMaxNumberOfIterations", PyvtkCommunity2DLayoutStrategy_GetMaxNumberOfIterations, 1,
   (char*)"V.GetMaxNumberOfIterations() -> int\nC++: int GetMaxNumberOfIterations()\n\nSet/Get the maximum number of iterations to be used. The higher\nthis number, the more iterations through the algorithm is\npossible, and thus, the more the graph gets modified. The default\nis '100' for no particular reason Note: The strong recommendation\nis that you do not change this parameter. :)\n"},
  {(char*)"SetIterationsPerLayout", PyvtkCommunity2DLayoutStrategy_SetIterationsPerLayout, 1,
   (char*)"V.SetIterationsPerLayout(int)\nC++: void SetIterationsPerLayout(int)\n\nSet/Get the number of iterations per layout. The only use for\nthis ivar is for the application to do visualizations of the\nlayout before it's complete. The default is '100' to match the\ndefault 'MaxNumberOfIterations' Note: Changing this parameter is\njust fine :)\n"},
  {(char*)"GetIterationsPerLayoutMinValue", PyvtkCommunity2DLayoutStrategy_GetIterationsPerLayoutMinValue, 1,
   (char*)"V.GetIterationsPerLayoutMinValue() -> int\nC++: int GetIterationsPerLayoutMinValue()\n\nSet/Get the number of iterations per layout. The only use for\nthis ivar is for the application to do visualizations of the\nlayout before it's complete. The default is '100' to match the\ndefault 'MaxNumberOfIterations' Note: Changing this parameter is\njust fine :)\n"},
  {(char*)"GetIterationsPerLayoutMaxValue", PyvtkCommunity2DLayoutStrategy_GetIterationsPerLayoutMaxValue, 1,
   (char*)"V.GetIterationsPerLayoutMaxValue() -> int\nC++: int GetIterationsPerLayoutMaxValue()\n\nSet/Get the number of iterations per layout. The only use for\nthis ivar is for the application to do visualizations of the\nlayout before it's complete. The default is '100' to match the\ndefault 'MaxNumberOfIterations' Note: Changing this parameter is\njust fine :)\n"},
  {(char*)"GetIterationsPerLayout", PyvtkCommunity2DLayoutStrategy_GetIterationsPerLayout, 1,
   (char*)"V.GetIterationsPerLayout() -> int\nC++: int GetIterationsPerLayout()\n\nSet/Get the number of iterations per layout. The only use for\nthis ivar is for the application to do visualizations of the\nlayout before it's complete. The default is '100' to match the\ndefault 'MaxNumberOfIterations' Note: Changing this parameter is\njust fine :)\n"},
  {(char*)"SetInitialTemperature", PyvtkCommunity2DLayoutStrategy_SetInitialTemperature, 1,
   (char*)"V.SetInitialTemperature(float)\nC++: void SetInitialTemperature(float)\n\nSet the initial temperature.  The temperature default is '5' for\nno particular reason Note: The strong recommendation is that you\ndo not change this parameter. :)\n"},
  {(char*)"GetInitialTemperatureMinValue", PyvtkCommunity2DLayoutStrategy_GetInitialTemperatureMinValue, 1,
   (char*)"V.GetInitialTemperatureMinValue() -> float\nC++: float GetInitialTemperatureMinValue()\n\nSet the initial temperature.  The temperature default is '5' for\nno particular reason Note: The strong recommendation is that you\ndo not change this parameter. :)\n"},
  {(char*)"GetInitialTemperatureMaxValue", PyvtkCommunity2DLayoutStrategy_GetInitialTemperatureMaxValue, 1,
   (char*)"V.GetInitialTemperatureMaxValue() -> float\nC++: float GetInitialTemperatureMaxValue()\n\nSet the initial temperature.  The temperature default is '5' for\nno particular reason Note: The strong recommendation is that you\ndo not change this parameter. :)\n"},
  {(char*)"GetInitialTemperature", PyvtkCommunity2DLayoutStrategy_GetInitialTemperature, 1,
   (char*)"V.GetInitialTemperature() -> float\nC++: float GetInitialTemperature()\n\nSet the initial temperature.  The temperature default is '5' for\nno particular reason Note: The strong recommendation is that you\ndo not change this parameter. :)\n"},
  {(char*)"SetCoolDownRate", PyvtkCommunity2DLayoutStrategy_SetCoolDownRate, 1,
   (char*)"V.SetCoolDownRate(float)\nC++: void SetCoolDownRate(double)\n\nSet/Get the Cool-down rate. The higher this number is, the longer\nit will take to \"cool-down\", and thus, the more the graph will be\nmodified. The default is '10' for no particular reason. Note: The\nstrong recommendation is that you do not change this parameter.\n:)\n"},
  {(char*)"GetCoolDownRateMinValue", PyvtkCommunity2DLayoutStrategy_GetCoolDownRateMinValue, 1,
   (char*)"V.GetCoolDownRateMinValue() -> float\nC++: double GetCoolDownRateMinValue()\n\nSet/Get the Cool-down rate. The higher this number is, the longer\nit will take to \"cool-down\", and thus, the more the graph will be\nmodified. The default is '10' for no particular reason. Note: The\nstrong recommendation is that you do not change this parameter.\n:)\n"},
  {(char*)"GetCoolDownRateMaxValue", PyvtkCommunity2DLayoutStrategy_GetCoolDownRateMaxValue, 1,
   (char*)"V.GetCoolDownRateMaxValue() -> float\nC++: double GetCoolDownRateMaxValue()\n\nSet/Get the Cool-down rate. The higher this number is, the longer\nit will take to \"cool-down\", and thus, the more the graph will be\nmodified. The default is '10' for no particular reason. Note: The\nstrong recommendation is that you do not change this parameter.\n:)\n"},
  {(char*)"GetCoolDownRate", PyvtkCommunity2DLayoutStrategy_GetCoolDownRate, 1,
   (char*)"V.GetCoolDownRate() -> float\nC++: double GetCoolDownRate()\n\nSet/Get the Cool-down rate. The higher this number is, the longer\nit will take to \"cool-down\", and thus, the more the graph will be\nmodified. The default is '10' for no particular reason. Note: The\nstrong recommendation is that you do not change this parameter.\n:)\n"},
  {(char*)"SetRestDistance", PyvtkCommunity2DLayoutStrategy_SetRestDistance, 1,
   (char*)"V.SetRestDistance(float)\nC++: void SetRestDistance(float a)\n\nManually set the resting distance. Otherwise the distance is\ncomputed automatically.\n"},
  {(char*)"GetRestDistance", PyvtkCommunity2DLayoutStrategy_GetRestDistance, 1,
   (char*)"V.GetRestDistance() -> float\nC++: float GetRestDistance()\n\nManually set the resting distance. Otherwise the distance is\ncomputed automatically.\n"},
  {(char*)"Initialize", PyvtkCommunity2DLayoutStrategy_Initialize, 1,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nThis strategy sets up some data structures for faster processing\nof each Layout() call\n"},
  {(char*)"Layout", PyvtkCommunity2DLayoutStrategy_Layout, 1,
   (char*)"V.Layout()\nC++: virtual void Layout()\n\nThis is the layout method where the graph that was set in\nSetGraph() is laid out. The method can either entirely layout the\ngraph or iteratively lay out the graph. If you have an iterative\nlayout please implement the IsLayoutComplete() method.\n"},
  {(char*)"IsLayoutComplete", PyvtkCommunity2DLayoutStrategy_IsLayoutComplete, 1,
   (char*)"V.IsLayoutComplete() -> int\nC++: virtual int IsLayoutComplete()\n\nI'm an iterative layout so this method lets the caller know if\nI'm done laying out the graph\n"},
  {(char*)"GetCommunityArrayName", PyvtkCommunity2DLayoutStrategy_GetCommunityArrayName, 1,
   (char*)"V.GetCommunityArrayName() -> string\nC++: char *GetCommunityArrayName()\n\nGet/Set the community array name\n"},
  {(char*)"SetCommunityArrayName", PyvtkCommunity2DLayoutStrategy_SetCommunityArrayName, 1,
   (char*)"V.SetCommunityArrayName(string)\nC++: void SetCommunityArrayName(char *)\n\nGet/Set the community array name\n"},
  {(char*)"SetCommunityStrength", PyvtkCommunity2DLayoutStrategy_SetCommunityStrength, 1,
   (char*)"V.SetCommunityStrength(float)\nC++: void SetCommunityStrength(float)\n\nSet the community 'strength'.  The default is '1' which means\nvertices in the same community will be placed close together,\nvalues closer to .1 (minimum) will mean a layout closer to\ntraditional force directed.\n"},
  {(char*)"GetCommunityStrengthMinValue", PyvtkCommunity2DLayoutStrategy_GetCommunityStrengthMinValue, 1,
   (char*)"V.GetCommunityStrengthMinValue() -> float\nC++: float GetCommunityStrengthMinValue()\n\nSet the community 'strength'.  The default is '1' which means\nvertices in the same community will be placed close together,\nvalues closer to .1 (minimum) will mean a layout closer to\ntraditional force directed.\n"},
  {(char*)"GetCommunityStrengthMaxValue", PyvtkCommunity2DLayoutStrategy_GetCommunityStrengthMaxValue, 1,
   (char*)"V.GetCommunityStrengthMaxValue() -> float\nC++: float GetCommunityStrengthMaxValue()\n\nSet the community 'strength'.  The default is '1' which means\nvertices in the same community will be placed close together,\nvalues closer to .1 (minimum) will mean a layout closer to\ntraditional force directed.\n"},
  {(char*)"GetCommunityStrength", PyvtkCommunity2DLayoutStrategy_GetCommunityStrength, 1,
   (char*)"V.GetCommunityStrength() -> float\nC++: float GetCommunityStrength()\n\nSet the community 'strength'.  The default is '1' which means\nvertices in the same community will be placed close together,\nvalues closer to .1 (minimum) will mean a layout closer to\ntraditional force directed.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCommunity2DLayoutStrategy_StaticNew()
{
  return vtkCommunity2DLayoutStrategy::New();
}

PyObject *PyVTKClass_vtkCommunity2DLayoutStrategyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCommunity2DLayoutStrategy_StaticNew,
    PyvtkCommunity2DLayoutStrategy_Methods,
    "vtkCommunity2DLayoutStrategy", modulename,
    NULL, NULL,
    PyvtkCommunity2DLayoutStrategy_Doc(),
    PyVTKClass_vtkGraphLayoutStrategyNew(modulename));
  return cls;
}

const char **PyvtkCommunity2DLayoutStrategy_Doc()
{
  static const char *docstring[] = {
    "vtkCommunity2DLayoutStrategy - a simple fast 2D graph layout\n\n",
    "Superclass: vtkGraphLayoutStrategy\n\n",
    "This class is a density grid based force directed layout strategy.\nAlso please note that 'fast' is relative to quite slow. :) The layout\nrunning time is O(V+E) with an extremely high constant.\n\nThanks:\n\nThanks to Godzilla for not eating my computer so that this class\ncould be written.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCommunity2DLayoutStrategy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCommunity2DLayoutStrategyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCommunity2DLayoutStrategy", o) != 0)
    {
    Py_DECREF(o);
    }

}

