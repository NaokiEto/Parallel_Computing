// python wrapper for vtkForceDirectedLayoutStrategy
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
#include "vtkForceDirectedLayoutStrategy.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkForceDirectedLayoutStrategy(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkForceDirectedLayoutStrategy(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkForceDirectedLayoutStrategyNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkForceDirectedLayoutStrategyNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkGraphLayoutStrategyNew
extern "C" { PyObject *PyVTKClass_vtkGraphLayoutStrategyNew(const char *); }
#define DECLARED_PyVTKClass_vtkGraphLayoutStrategyNew
#endif

static const char **PyvtkForceDirectedLayoutStrategy_Doc();


static PyObject *
PyvtkForceDirectedLayoutStrategy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

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
      tempr = op->vtkForceDirectedLayoutStrategy::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

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
      tempr = op->vtkForceDirectedLayoutStrategy::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  vtkForceDirectedLayoutStrategy *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkForceDirectedLayoutStrategy::NewInstance();
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
PyvtkForceDirectedLayoutStrategy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkForceDirectedLayoutStrategy *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkForceDirectedLayoutStrategy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_SetRandomSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRandomSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

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
      op->vtkForceDirectedLayoutStrategy::SetRandomSeed(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_GetRandomSeedMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRandomSeedMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

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
      tempr = op->vtkForceDirectedLayoutStrategy::GetRandomSeedMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_GetRandomSeedMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRandomSeedMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

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
      tempr = op->vtkForceDirectedLayoutStrategy::GetRandomSeedMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_GetRandomSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRandomSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

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
      tempr = op->vtkForceDirectedLayoutStrategy::GetRandomSeed();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_SetGraphBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetGraphBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkForceDirectedLayoutStrategy::SetGraphBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkForceDirectedLayoutStrategy_SetGraphBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  double temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetGraphBounds(temp0);
      }
    else
      {
      op->vtkForceDirectedLayoutStrategy::SetGraphBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkForceDirectedLayoutStrategy_SetGraphBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkForceDirectedLayoutStrategy_SetGraphBounds_s1(self, args);
    case 1:
      return PyvtkForceDirectedLayoutStrategy_SetGraphBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetGraphBounds");
  return NULL;
}



static PyObject *
PyvtkForceDirectedLayoutStrategy_GetGraphBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  double *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGraphBounds();
      }
    else
      {
      tempr = op->vtkForceDirectedLayoutStrategy::GetGraphBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_SetAutomaticBoundsComputation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutomaticBoundsComputation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAutomaticBoundsComputation(temp0);
      }
    else
      {
      op->vtkForceDirectedLayoutStrategy::SetAutomaticBoundsComputation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_GetAutomaticBoundsComputation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutomaticBoundsComputation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAutomaticBoundsComputation();
      }
    else
      {
      tempr = op->vtkForceDirectedLayoutStrategy::GetAutomaticBoundsComputation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_AutomaticBoundsComputationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticBoundsComputationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutomaticBoundsComputationOn();
      }
    else
      {
      op->vtkForceDirectedLayoutStrategy::AutomaticBoundsComputationOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_AutomaticBoundsComputationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticBoundsComputationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutomaticBoundsComputationOff();
      }
    else
      {
      op->vtkForceDirectedLayoutStrategy::AutomaticBoundsComputationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_SetMaxNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

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
      op->vtkForceDirectedLayoutStrategy::SetMaxNumberOfIterations(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_GetMaxNumberOfIterationsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumberOfIterationsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

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
      tempr = op->vtkForceDirectedLayoutStrategy::GetMaxNumberOfIterationsMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_GetMaxNumberOfIterationsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumberOfIterationsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

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
      tempr = op->vtkForceDirectedLayoutStrategy::GetMaxNumberOfIterationsMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_GetMaxNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

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
      tempr = op->vtkForceDirectedLayoutStrategy::GetMaxNumberOfIterations();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_SetIterationsPerLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIterationsPerLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

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
      op->vtkForceDirectedLayoutStrategy::SetIterationsPerLayout(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_GetIterationsPerLayoutMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIterationsPerLayoutMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

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
      tempr = op->vtkForceDirectedLayoutStrategy::GetIterationsPerLayoutMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_GetIterationsPerLayoutMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIterationsPerLayoutMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

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
      tempr = op->vtkForceDirectedLayoutStrategy::GetIterationsPerLayoutMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_GetIterationsPerLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIterationsPerLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

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
      tempr = op->vtkForceDirectedLayoutStrategy::GetIterationsPerLayout();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_SetCoolDownRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoolDownRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

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
      op->vtkForceDirectedLayoutStrategy::SetCoolDownRate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_GetCoolDownRateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoolDownRateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

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
      tempr = op->vtkForceDirectedLayoutStrategy::GetCoolDownRateMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_GetCoolDownRateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoolDownRateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

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
      tempr = op->vtkForceDirectedLayoutStrategy::GetCoolDownRateMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_GetCoolDownRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoolDownRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

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
      tempr = op->vtkForceDirectedLayoutStrategy::GetCoolDownRate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_SetThreeDimensionalLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThreeDimensionalLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetThreeDimensionalLayout(temp0);
      }
    else
      {
      op->vtkForceDirectedLayoutStrategy::SetThreeDimensionalLayout(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_GetThreeDimensionalLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThreeDimensionalLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetThreeDimensionalLayout();
      }
    else
      {
      tempr = op->vtkForceDirectedLayoutStrategy::GetThreeDimensionalLayout();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_ThreeDimensionalLayoutOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThreeDimensionalLayoutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ThreeDimensionalLayoutOn();
      }
    else
      {
      op->vtkForceDirectedLayoutStrategy::ThreeDimensionalLayoutOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_ThreeDimensionalLayoutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThreeDimensionalLayoutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ThreeDimensionalLayoutOff();
      }
    else
      {
      op->vtkForceDirectedLayoutStrategy::ThreeDimensionalLayoutOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_SetRandomInitialPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRandomInitialPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRandomInitialPoints(temp0);
      }
    else
      {
      op->vtkForceDirectedLayoutStrategy::SetRandomInitialPoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_GetRandomInitialPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRandomInitialPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRandomInitialPoints();
      }
    else
      {
      tempr = op->vtkForceDirectedLayoutStrategy::GetRandomInitialPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_RandomInitialPointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RandomInitialPointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RandomInitialPointsOn();
      }
    else
      {
      op->vtkForceDirectedLayoutStrategy::RandomInitialPointsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_RandomInitialPointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RandomInitialPointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RandomInitialPointsOff();
      }
    else
      {
      op->vtkForceDirectedLayoutStrategy::RandomInitialPointsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_SetInitialTemperature(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInitialTemperature");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

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
      op->vtkForceDirectedLayoutStrategy::SetInitialTemperature(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_GetInitialTemperatureMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInitialTemperatureMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

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
      tempr = op->vtkForceDirectedLayoutStrategy::GetInitialTemperatureMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_GetInitialTemperatureMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInitialTemperatureMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

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
      tempr = op->vtkForceDirectedLayoutStrategy::GetInitialTemperatureMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_GetInitialTemperature(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInitialTemperature");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

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
      tempr = op->vtkForceDirectedLayoutStrategy::GetInitialTemperature();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkForceDirectedLayoutStrategy::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_Layout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Layout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Layout();
      }
    else
      {
      op->vtkForceDirectedLayoutStrategy::Layout();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_IsLayoutComplete(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsLayoutComplete");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

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
      tempr = op->vtkForceDirectedLayoutStrategy::IsLayoutComplete();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkForceDirectedLayoutStrategy_Methods[] = {
  {(char*)"GetClassName", PyvtkForceDirectedLayoutStrategy_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkForceDirectedLayoutStrategy_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkForceDirectedLayoutStrategy_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkForceDirectedLayoutStrategy\nC++: vtkForceDirectedLayoutStrategy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkForceDirectedLayoutStrategy_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkForceDirectedLayoutStrategy\nC++: vtkForceDirectedLayoutStrategy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetRandomSeed", PyvtkForceDirectedLayoutStrategy_SetRandomSeed, 1,
   (char*)"V.SetRandomSeed(int)\nC++: void SetRandomSeed(int)\n\nSeed the random number generator used to jitter point positions.\nThis has a significant effect on their final positions when the\nlayout is complete.\n"},
  {(char*)"GetRandomSeedMinValue", PyvtkForceDirectedLayoutStrategy_GetRandomSeedMinValue, 1,
   (char*)"V.GetRandomSeedMinValue() -> int\nC++: int GetRandomSeedMinValue()\n\nSeed the random number generator used to jitter point positions.\nThis has a significant effect on their final positions when the\nlayout is complete.\n"},
  {(char*)"GetRandomSeedMaxValue", PyvtkForceDirectedLayoutStrategy_GetRandomSeedMaxValue, 1,
   (char*)"V.GetRandomSeedMaxValue() -> int\nC++: int GetRandomSeedMaxValue()\n\nSeed the random number generator used to jitter point positions.\nThis has a significant effect on their final positions when the\nlayout is complete.\n"},
  {(char*)"GetRandomSeed", PyvtkForceDirectedLayoutStrategy_GetRandomSeed, 1,
   (char*)"V.GetRandomSeed() -> int\nC++: int GetRandomSeed()\n\nSeed the random number generator used to jitter point positions.\nThis has a significant effect on their final positions when the\nlayout is complete.\n"},
  {(char*)"SetGraphBounds", PyvtkForceDirectedLayoutStrategy_SetGraphBounds, 1,
   (char*)"V.SetGraphBounds(float, float, float, float, float, float)\nC++: void SetGraphBounds(double, double, double, double, double,\n    double)\nV.SetGraphBounds((float, float, float, float, float, float))\nC++: void SetGraphBounds(double a[6])\n\n"},
  {(char*)"GetGraphBounds", PyvtkForceDirectedLayoutStrategy_GetGraphBounds, 1,
   (char*)"V.GetGraphBounds() -> (float, float, float, float, float, float)\nC++: double *GetGraphBounds()\n\nSet / get the region in space in which to place the final graph.\nThe GraphBounds only affects the results if\nAutomaticBoundsComputation is off.\n"},
  {(char*)"SetAutomaticBoundsComputation", PyvtkForceDirectedLayoutStrategy_SetAutomaticBoundsComputation, 1,
   (char*)"V.SetAutomaticBoundsComputation(int)\nC++: void SetAutomaticBoundsComputation(int a)\n\nTurn on/off automatic graph bounds calculation. If this boolean\nis off, then the manually specified GraphBounds is used. If on,\nthen the input's bounds us used as the graph bounds.\n"},
  {(char*)"GetAutomaticBoundsComputation", PyvtkForceDirectedLayoutStrategy_GetAutomaticBoundsComputation, 1,
   (char*)"V.GetAutomaticBoundsComputation() -> int\nC++: int GetAutomaticBoundsComputation()\n\nTurn on/off automatic graph bounds calculation. If this boolean\nis off, then the manually specified GraphBounds is used. If on,\nthen the input's bounds us used as the graph bounds.\n"},
  {(char*)"AutomaticBoundsComputationOn", PyvtkForceDirectedLayoutStrategy_AutomaticBoundsComputationOn, 1,
   (char*)"V.AutomaticBoundsComputationOn()\nC++: void AutomaticBoundsComputationOn()\n\nTurn on/off automatic graph bounds calculation. If this boolean\nis off, then the manually specified GraphBounds is used. If on,\nthen the input's bounds us used as the graph bounds.\n"},
  {(char*)"AutomaticBoundsComputationOff", PyvtkForceDirectedLayoutStrategy_AutomaticBoundsComputationOff, 1,
   (char*)"V.AutomaticBoundsComputationOff()\nC++: void AutomaticBoundsComputationOff()\n\nTurn on/off automatic graph bounds calculation. If this boolean\nis off, then the manually specified GraphBounds is used. If on,\nthen the input's bounds us used as the graph bounds.\n"},
  {(char*)"SetMaxNumberOfIterations", PyvtkForceDirectedLayoutStrategy_SetMaxNumberOfIterations, 1,
   (char*)"V.SetMaxNumberOfIterations(int)\nC++: void SetMaxNumberOfIterations(int)\n\nSet/Get the maximum number of iterations to be used. The higher\nthis number, the more iterations through the algorithm is\npossible, and thus, the more the graph gets modified. The default\nis '50' for no particular reason\n"},
  {(char*)"GetMaxNumberOfIterationsMinValue", PyvtkForceDirectedLayoutStrategy_GetMaxNumberOfIterationsMinValue, 1,
   (char*)"V.GetMaxNumberOfIterationsMinValue() -> int\nC++: int GetMaxNumberOfIterationsMinValue()\n\nSet/Get the maximum number of iterations to be used. The higher\nthis number, the more iterations through the algorithm is\npossible, and thus, the more the graph gets modified. The default\nis '50' for no particular reason\n"},
  {(char*)"GetMaxNumberOfIterationsMaxValue", PyvtkForceDirectedLayoutStrategy_GetMaxNumberOfIterationsMaxValue, 1,
   (char*)"V.GetMaxNumberOfIterationsMaxValue() -> int\nC++: int GetMaxNumberOfIterationsMaxValue()\n\nSet/Get the maximum number of iterations to be used. The higher\nthis number, the more iterations through the algorithm is\npossible, and thus, the more the graph gets modified. The default\nis '50' for no particular reason\n"},
  {(char*)"GetMaxNumberOfIterations", PyvtkForceDirectedLayoutStrategy_GetMaxNumberOfIterations, 1,
   (char*)"V.GetMaxNumberOfIterations() -> int\nC++: int GetMaxNumberOfIterations()\n\nSet/Get the maximum number of iterations to be used. The higher\nthis number, the more iterations through the algorithm is\npossible, and thus, the more the graph gets modified. The default\nis '50' for no particular reason\n"},
  {(char*)"SetIterationsPerLayout", PyvtkForceDirectedLayoutStrategy_SetIterationsPerLayout, 1,
   (char*)"V.SetIterationsPerLayout(int)\nC++: void SetIterationsPerLayout(int)\n\nSet/Get the number of iterations per layout. The only use for\nthis ivar is for the application to do visualizations of the\nlayout before it's complete. The default is '50' to match the\ndefault 'MaxNumberOfIterations'\n"},
  {(char*)"GetIterationsPerLayoutMinValue", PyvtkForceDirectedLayoutStrategy_GetIterationsPerLayoutMinValue, 1,
   (char*)"V.GetIterationsPerLayoutMinValue() -> int\nC++: int GetIterationsPerLayoutMinValue()\n\nSet/Get the number of iterations per layout. The only use for\nthis ivar is for the application to do visualizations of the\nlayout before it's complete. The default is '50' to match the\ndefault 'MaxNumberOfIterations'\n"},
  {(char*)"GetIterationsPerLayoutMaxValue", PyvtkForceDirectedLayoutStrategy_GetIterationsPerLayoutMaxValue, 1,
   (char*)"V.GetIterationsPerLayoutMaxValue() -> int\nC++: int GetIterationsPerLayoutMaxValue()\n\nSet/Get the number of iterations per layout. The only use for\nthis ivar is for the application to do visualizations of the\nlayout before it's complete. The default is '50' to match the\ndefault 'MaxNumberOfIterations'\n"},
  {(char*)"GetIterationsPerLayout", PyvtkForceDirectedLayoutStrategy_GetIterationsPerLayout, 1,
   (char*)"V.GetIterationsPerLayout() -> int\nC++: int GetIterationsPerLayout()\n\nSet/Get the number of iterations per layout. The only use for\nthis ivar is for the application to do visualizations of the\nlayout before it's complete. The default is '50' to match the\ndefault 'MaxNumberOfIterations'\n"},
  {(char*)"SetCoolDownRate", PyvtkForceDirectedLayoutStrategy_SetCoolDownRate, 1,
   (char*)"V.SetCoolDownRate(float)\nC++: void SetCoolDownRate(double)\n\nSet/Get the Cool-down rate. The higher this number is, the longer\nit will take to \"cool-down\", and thus, the more the graph will be\nmodified.\n"},
  {(char*)"GetCoolDownRateMinValue", PyvtkForceDirectedLayoutStrategy_GetCoolDownRateMinValue, 1,
   (char*)"V.GetCoolDownRateMinValue() -> float\nC++: double GetCoolDownRateMinValue()\n\nSet/Get the Cool-down rate. The higher this number is, the longer\nit will take to \"cool-down\", and thus, the more the graph will be\nmodified.\n"},
  {(char*)"GetCoolDownRateMaxValue", PyvtkForceDirectedLayoutStrategy_GetCoolDownRateMaxValue, 1,
   (char*)"V.GetCoolDownRateMaxValue() -> float\nC++: double GetCoolDownRateMaxValue()\n\nSet/Get the Cool-down rate. The higher this number is, the longer\nit will take to \"cool-down\", and thus, the more the graph will be\nmodified.\n"},
  {(char*)"GetCoolDownRate", PyvtkForceDirectedLayoutStrategy_GetCoolDownRate, 1,
   (char*)"V.GetCoolDownRate() -> float\nC++: double GetCoolDownRate()\n\nSet/Get the Cool-down rate. The higher this number is, the longer\nit will take to \"cool-down\", and thus, the more the graph will be\nmodified.\n"},
  {(char*)"SetThreeDimensionalLayout", PyvtkForceDirectedLayoutStrategy_SetThreeDimensionalLayout, 1,
   (char*)"V.SetThreeDimensionalLayout(int)\nC++: void SetThreeDimensionalLayout(int a)\n\nTurn on/off layout of graph in three dimensions. If off, graph\nlayout occurs in two dimensions. By default, three dimensional\nlayout is off.\n"},
  {(char*)"GetThreeDimensionalLayout", PyvtkForceDirectedLayoutStrategy_GetThreeDimensionalLayout, 1,
   (char*)"V.GetThreeDimensionalLayout() -> int\nC++: int GetThreeDimensionalLayout()\n\nTurn on/off layout of graph in three dimensions. If off, graph\nlayout occurs in two dimensions. By default, three dimensional\nlayout is off.\n"},
  {(char*)"ThreeDimensionalLayoutOn", PyvtkForceDirectedLayoutStrategy_ThreeDimensionalLayoutOn, 1,
   (char*)"V.ThreeDimensionalLayoutOn()\nC++: void ThreeDimensionalLayoutOn()\n\nTurn on/off layout of graph in three dimensions. If off, graph\nlayout occurs in two dimensions. By default, three dimensional\nlayout is off.\n"},
  {(char*)"ThreeDimensionalLayoutOff", PyvtkForceDirectedLayoutStrategy_ThreeDimensionalLayoutOff, 1,
   (char*)"V.ThreeDimensionalLayoutOff()\nC++: void ThreeDimensionalLayoutOff()\n\nTurn on/off layout of graph in three dimensions. If off, graph\nlayout occurs in two dimensions. By default, three dimensional\nlayout is off.\n"},
  {(char*)"SetRandomInitialPoints", PyvtkForceDirectedLayoutStrategy_SetRandomInitialPoints, 1,
   (char*)"V.SetRandomInitialPoints(int)\nC++: void SetRandomInitialPoints(int a)\n\nTurn on/off use of random positions within the graph bounds as\ninitial points.\n"},
  {(char*)"GetRandomInitialPoints", PyvtkForceDirectedLayoutStrategy_GetRandomInitialPoints, 1,
   (char*)"V.GetRandomInitialPoints() -> int\nC++: int GetRandomInitialPoints()\n\nTurn on/off use of random positions within the graph bounds as\ninitial points.\n"},
  {(char*)"RandomInitialPointsOn", PyvtkForceDirectedLayoutStrategy_RandomInitialPointsOn, 1,
   (char*)"V.RandomInitialPointsOn()\nC++: void RandomInitialPointsOn()\n\nTurn on/off use of random positions within the graph bounds as\ninitial points.\n"},
  {(char*)"RandomInitialPointsOff", PyvtkForceDirectedLayoutStrategy_RandomInitialPointsOff, 1,
   (char*)"V.RandomInitialPointsOff()\nC++: void RandomInitialPointsOff()\n\nTurn on/off use of random positions within the graph bounds as\ninitial points.\n"},
  {(char*)"SetInitialTemperature", PyvtkForceDirectedLayoutStrategy_SetInitialTemperature, 1,
   (char*)"V.SetInitialTemperature(float)\nC++: void SetInitialTemperature(float)\n\nSet the initial temperature.  If zero (the default) , the initial\ntemperature will be computed automatically.\n"},
  {(char*)"GetInitialTemperatureMinValue", PyvtkForceDirectedLayoutStrategy_GetInitialTemperatureMinValue, 1,
   (char*)"V.GetInitialTemperatureMinValue() -> float\nC++: float GetInitialTemperatureMinValue()\n\nSet the initial temperature.  If zero (the default) , the initial\ntemperature will be computed automatically.\n"},
  {(char*)"GetInitialTemperatureMaxValue", PyvtkForceDirectedLayoutStrategy_GetInitialTemperatureMaxValue, 1,
   (char*)"V.GetInitialTemperatureMaxValue() -> float\nC++: float GetInitialTemperatureMaxValue()\n\nSet the initial temperature.  If zero (the default) , the initial\ntemperature will be computed automatically.\n"},
  {(char*)"GetInitialTemperature", PyvtkForceDirectedLayoutStrategy_GetInitialTemperature, 1,
   (char*)"V.GetInitialTemperature() -> float\nC++: float GetInitialTemperature()\n\nSet the initial temperature.  If zero (the default) , the initial\ntemperature will be computed automatically.\n"},
  {(char*)"Initialize", PyvtkForceDirectedLayoutStrategy_Initialize, 1,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nThis strategy sets up some data structures for faster processing\nof each Layout() call\n"},
  {(char*)"Layout", PyvtkForceDirectedLayoutStrategy_Layout, 1,
   (char*)"V.Layout()\nC++: virtual void Layout()\n\nThis is the layout method where the graph that was set in\nSetGraph() is laid out. The method can either entirely layout the\ngraph or iteratively lay out the graph. If you have an iterative\nlayout please implement the IsLayoutComplete() method.\n"},
  {(char*)"IsLayoutComplete", PyvtkForceDirectedLayoutStrategy_IsLayoutComplete, 1,
   (char*)"V.IsLayoutComplete() -> int\nC++: virtual int IsLayoutComplete()\n\nI'm an iterative layout so this method lets the caller know if\nI'm done laying out the graph\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkForceDirectedLayoutStrategy_StaticNew()
{
  return vtkForceDirectedLayoutStrategy::New();
}

PyObject *PyVTKClass_vtkForceDirectedLayoutStrategyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkForceDirectedLayoutStrategy_StaticNew,
    PyvtkForceDirectedLayoutStrategy_Methods,
    "vtkForceDirectedLayoutStrategy", modulename,
    NULL, NULL,
    PyvtkForceDirectedLayoutStrategy_Doc(),
    PyVTKClass_vtkGraphLayoutStrategyNew(modulename));
  return cls;
}

const char **PyvtkForceDirectedLayoutStrategy_Doc()
{
  static const char *docstring[] = {
    "vtkForceDirectedLayoutStrategy - a force directed graph layout\nalgorithm\n\n",
    "Superclass: vtkGraphLayoutStrategy\n\n",
    "Lays out a graph in 2D or 3D using a force-directed algorithm. The\nuser may specify whether to layout the graph randomly initially, the\nbounds, the number of dimensions (2 or 3), and the cool-down rate.\n\nThanks:\n\nThanks to Brian Wylie for adding functionality for allowing this\nlayout to be incremental.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkForceDirectedLayoutStrategy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkForceDirectedLayoutStrategyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkForceDirectedLayoutStrategy", o) != 0)
    {
    Py_DECREF(o);
    }

}

