// python wrapper for vtkTemporalStreamTracer
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
#include "vtkTemporalStreamTracer.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTemporalStreamTracer(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTemporalStreamTracer(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTemporalStreamTracerNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTemporalStreamTracerNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkStreamTracerNew
extern "C" { PyObject *PyVTKClass_vtkStreamTracerNew(const char *); }
#define DECLARED_PyVTKClass_vtkStreamTracerNew
#endif

static const char **PyvtkTemporalStreamTracer_Doc();


static PyObject *
PyvtkTemporalStreamTracer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

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
      tempr = op->vtkTemporalStreamTracer::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

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
      tempr = op->vtkTemporalStreamTracer::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  vtkTemporalStreamTracer *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTemporalStreamTracer::NewInstance();
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
PyvtkTemporalStreamTracer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTemporalStreamTracer *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTemporalStreamTracer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_SetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTimeStep(temp0);
      }
    else
      {
      op->vtkTemporalStreamTracer::SetTimeStep(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_GetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  unsigned int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTimeStep();
      }
    else
      {
      tempr = op->vtkTemporalStreamTracer::GetTimeStep();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_SetIgnorePipelineTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIgnorePipelineTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIgnorePipelineTime(temp0);
      }
    else
      {
      op->vtkTemporalStreamTracer::SetIgnorePipelineTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_GetIgnorePipelineTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIgnorePipelineTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIgnorePipelineTime();
      }
    else
      {
      tempr = op->vtkTemporalStreamTracer::GetIgnorePipelineTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_IgnorePipelineTimeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IgnorePipelineTimeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IgnorePipelineTimeOn();
      }
    else
      {
      op->vtkTemporalStreamTracer::IgnorePipelineTimeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_IgnorePipelineTimeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IgnorePipelineTimeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IgnorePipelineTimeOff();
      }
    else
      {
      op->vtkTemporalStreamTracer::IgnorePipelineTimeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_SetTimeStepResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStepResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTimeStepResolution(temp0);
      }
    else
      {
      op->vtkTemporalStreamTracer::SetTimeStepResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_GetTimeStepResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTimeStepResolution();
      }
    else
      {
      tempr = op->vtkTemporalStreamTracer::GetTimeStepResolution();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_SetForceReinjectionEveryNSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceReinjectionEveryNSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetForceReinjectionEveryNSteps(temp0);
      }
    else
      {
      op->vtkTemporalStreamTracer::SetForceReinjectionEveryNSteps(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_GetForceReinjectionEveryNSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceReinjectionEveryNSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetForceReinjectionEveryNSteps();
      }
    else
      {
      tempr = op->vtkTemporalStreamTracer::GetForceReinjectionEveryNSteps();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_SetTerminationTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTerminationTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTerminationTime(temp0);
      }
    else
      {
      op->vtkTemporalStreamTracer::SetTerminationTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_GetTerminationTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTerminationTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTerminationTime();
      }
    else
      {
      tempr = op->vtkTemporalStreamTracer::GetTerminationTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_SetTerminationTimeUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTerminationTimeUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTerminationTimeUnit(temp0);
      }
    else
      {
      op->vtkTemporalStreamTracer::SetTerminationTimeUnit(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_GetTerminationTimeUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTerminationTimeUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTerminationTimeUnit();
      }
    else
      {
      tempr = op->vtkTemporalStreamTracer::GetTerminationTimeUnit();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_SetTerminationTimeUnitToTimeUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTerminationTimeUnitToTimeUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTerminationTimeUnitToTimeUnit();
      }
    else
      {
      op->vtkTemporalStreamTracer::SetTerminationTimeUnitToTimeUnit();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_SetTerminationTimeUnitToStepUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTerminationTimeUnitToStepUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTerminationTimeUnitToStepUnit();
      }
    else
      {
      op->vtkTemporalStreamTracer::SetTerminationTimeUnitToStepUnit();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_SetStaticSeeds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStaticSeeds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStaticSeeds(temp0);
      }
    else
      {
      op->vtkTemporalStreamTracer::SetStaticSeeds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_GetStaticSeeds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStaticSeeds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStaticSeeds();
      }
    else
      {
      tempr = op->vtkTemporalStreamTracer::GetStaticSeeds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_StaticSeedsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StaticSeedsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StaticSeedsOn();
      }
    else
      {
      op->vtkTemporalStreamTracer::StaticSeedsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_StaticSeedsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StaticSeedsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StaticSeedsOff();
      }
    else
      {
      op->vtkTemporalStreamTracer::StaticSeedsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_SetStaticMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStaticMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStaticMesh(temp0);
      }
    else
      {
      op->vtkTemporalStreamTracer::SetStaticMesh(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_GetStaticMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStaticMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStaticMesh();
      }
    else
      {
      tempr = op->vtkTemporalStreamTracer::GetStaticMesh();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_StaticMeshOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StaticMeshOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StaticMeshOn();
      }
    else
      {
      op->vtkTemporalStreamTracer::StaticMeshOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_StaticMeshOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StaticMeshOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StaticMeshOff();
      }
    else
      {
      op->vtkTemporalStreamTracer::StaticMeshOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->SetController(temp0);
      }
    else
      {
      op->vtkTemporalStreamTracer::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  vtkMultiProcessController *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetController();
      }
    else
      {
      tempr = op->vtkTemporalStreamTracer::GetController();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_SetParticleWriter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParticleWriter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  vtkAbstractParticleWriter *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractParticleWriter"))
    {
    if (ap.IsBound())
      {
      op->SetParticleWriter(temp0);
      }
    else
      {
      op->vtkTemporalStreamTracer::SetParticleWriter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_GetParticleWriter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParticleWriter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  vtkAbstractParticleWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetParticleWriter();
      }
    else
      {
      tempr = op->vtkTemporalStreamTracer::GetParticleWriter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_SetParticleFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParticleFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetParticleFileName(temp0);
      }
    else
      {
      op->vtkTemporalStreamTracer::SetParticleFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_GetParticleFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParticleFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetParticleFileName();
      }
    else
      {
      tempr = op->vtkTemporalStreamTracer::GetParticleFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_SetEnableParticleWriting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableParticleWriting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnableParticleWriting(temp0);
      }
    else
      {
      op->vtkTemporalStreamTracer::SetEnableParticleWriting(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_GetEnableParticleWriting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableParticleWriting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEnableParticleWriting();
      }
    else
      {
      tempr = op->vtkTemporalStreamTracer::GetEnableParticleWriting();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_EnableParticleWritingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableParticleWritingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableParticleWritingOn();
      }
    else
      {
      op->vtkTemporalStreamTracer::EnableParticleWritingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_EnableParticleWritingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableParticleWritingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableParticleWritingOff();
      }
    else
      {
      op->vtkTemporalStreamTracer::EnableParticleWritingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_AddSourceConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->AddSourceConnection(temp0);
      }
    else
      {
      op->vtkTemporalStreamTracer::AddSourceConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_RemoveAllSources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllSources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllSources();
      }
    else
      {
      op->vtkTemporalStreamTracer::RemoveAllSources();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTemporalStreamTracer_Methods[] = {
  {(char*)"GetClassName", PyvtkTemporalStreamTracer_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTemporalStreamTracer_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTemporalStreamTracer_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTemporalStreamTracer\nC++: vtkTemporalStreamTracer *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTemporalStreamTracer_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTemporalStreamTracer\nC++: vtkTemporalStreamTracer *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetTimeStep", PyvtkTemporalStreamTracer_SetTimeStep, 1,
   (char*)"V.SetTimeStep(int)\nC++: void SetTimeStep(unsigned int a)\n\nSet/Get the TimeStep. This is the primary means of advancing the\nparticles. The TimeStep should be animated and this will drive\nthe pipeline forcing timesteps to be fetched from upstream.\n"},
  {(char*)"GetTimeStep", PyvtkTemporalStreamTracer_GetTimeStep, 1,
   (char*)"V.GetTimeStep() -> int\nC++: unsigned int GetTimeStep()\n\nSet/Get the TimeStep. This is the primary means of advancing the\nparticles. The TimeStep should be animated and this will drive\nthe pipeline forcing timesteps to be fetched from upstream.\n"},
  {(char*)"SetIgnorePipelineTime", PyvtkTemporalStreamTracer_SetIgnorePipelineTime, 1,
   (char*)"V.SetIgnorePipelineTime(int)\nC++: void SetIgnorePipelineTime(int a)\n\nTo get around problems with the Paraview Animation controls we\ncan just animate the time step and ignore the TIME_ requests\n"},
  {(char*)"GetIgnorePipelineTime", PyvtkTemporalStreamTracer_GetIgnorePipelineTime, 1,
   (char*)"V.GetIgnorePipelineTime() -> int\nC++: int GetIgnorePipelineTime()\n\nTo get around problems with the Paraview Animation controls we\ncan just animate the time step and ignore the TIME_ requests\n"},
  {(char*)"IgnorePipelineTimeOn", PyvtkTemporalStreamTracer_IgnorePipelineTimeOn, 1,
   (char*)"V.IgnorePipelineTimeOn()\nC++: void IgnorePipelineTimeOn()\n\nTo get around problems with the Paraview Animation controls we\ncan just animate the time step and ignore the TIME_ requests\n"},
  {(char*)"IgnorePipelineTimeOff", PyvtkTemporalStreamTracer_IgnorePipelineTimeOff, 1,
   (char*)"V.IgnorePipelineTimeOff()\nC++: void IgnorePipelineTimeOff()\n\nTo get around problems with the Paraview Animation controls we\ncan just animate the time step and ignore the TIME_ requests\n"},
  {(char*)"SetTimeStepResolution", PyvtkTemporalStreamTracer_SetTimeStepResolution, 1,
   (char*)"V.SetTimeStepResolution(float)\nC++: void SetTimeStepResolution(double a)\n\nIf the data source does not have the correct time values present\non each time step - setting this value to non unity can be used\nto adjust the time step size from 1s pre step to\n1x_TimeStepResolution : Not functional in this version. Broke it\n@todo, put back time scaling\n"},
  {(char*)"GetTimeStepResolution", PyvtkTemporalStreamTracer_GetTimeStepResolution, 1,
   (char*)"V.GetTimeStepResolution() -> float\nC++: double GetTimeStepResolution()\n\nIf the data source does not have the correct time values present\non each time step - setting this value to non unity can be used\nto adjust the time step size from 1s pre step to\n1x_TimeStepResolution : Not functional in this version. Broke it\n@todo, put back time scaling\n"},
  {(char*)"SetForceReinjectionEveryNSteps", PyvtkTemporalStreamTracer_SetForceReinjectionEveryNSteps, 1,
   (char*)"V.SetForceReinjectionEveryNSteps(int)\nC++: void SetForceReinjectionEveryNSteps(int a)\n\nWhen animating particles, it is nice to inject new ones every Nth\nstep to produce a continuous flow. Setting\nForceReinjectionEveryNSteps to a non zero value will cause the\nparticle source to reinject particles every Nth step even if it\nis otherwise unchanged. Note that if the particle source is also\nanimated, this flag will be redundant as the particles will be\nreinjected whenever the source changes anyway\n"},
  {(char*)"GetForceReinjectionEveryNSteps", PyvtkTemporalStreamTracer_GetForceReinjectionEveryNSteps, 1,
   (char*)"V.GetForceReinjectionEveryNSteps() -> int\nC++: int GetForceReinjectionEveryNSteps()\n\nWhen animating particles, it is nice to inject new ones every Nth\nstep to produce a continuous flow. Setting\nForceReinjectionEveryNSteps to a non zero value will cause the\nparticle source to reinject particles every Nth step even if it\nis otherwise unchanged. Note that if the particle source is also\nanimated, this flag will be redundant as the particles will be\nreinjected whenever the source changes anyway\n"},
  {(char*)"SetTerminationTime", PyvtkTemporalStreamTracer_SetTerminationTime, 1,
   (char*)"V.SetTerminationTime(float)\nC++: void SetTerminationTime(double a)\n\nSetting TerminationTime to a positive value will cause particles\nto terminate when the time is reached. Use a vlue of zero to\ndiable termination. The units of time should be consistent with\nthe primary time variable.\n"},
  {(char*)"GetTerminationTime", PyvtkTemporalStreamTracer_GetTerminationTime, 1,
   (char*)"V.GetTerminationTime() -> float\nC++: double GetTerminationTime()\n\nSetting TerminationTime to a positive value will cause particles\nto terminate when the time is reached. Use a vlue of zero to\ndiable termination. The units of time should be consistent with\nthe primary time variable.\n"},
  {(char*)"SetTerminationTimeUnit", PyvtkTemporalStreamTracer_SetTerminationTimeUnit, 1,
   (char*)"V.SetTerminationTimeUnit(int)\nC++: void SetTerminationTimeUnit(int a)\n\nThe units of TerminationTime may be actual 'Time' units as\ndescribed by the data, or just TimeSteps of iteration.\n"},
  {(char*)"GetTerminationTimeUnit", PyvtkTemporalStreamTracer_GetTerminationTimeUnit, 1,
   (char*)"V.GetTerminationTimeUnit() -> int\nC++: int GetTerminationTimeUnit()\n\nThe units of TerminationTime may be actual 'Time' units as\ndescribed by the data, or just TimeSteps of iteration.\n"},
  {(char*)"SetTerminationTimeUnitToTimeUnit", PyvtkTemporalStreamTracer_SetTerminationTimeUnitToTimeUnit, 1,
   (char*)"V.SetTerminationTimeUnitToTimeUnit()\nC++: void SetTerminationTimeUnitToTimeUnit()\n\nThe units of TerminationTime may be actual 'Time' units as\ndescribed by the data, or just TimeSteps of iteration.\n"},
  {(char*)"SetTerminationTimeUnitToStepUnit", PyvtkTemporalStreamTracer_SetTerminationTimeUnitToStepUnit, 1,
   (char*)"V.SetTerminationTimeUnitToStepUnit()\nC++: void SetTerminationTimeUnitToStepUnit()\n\nThe units of TerminationTime may be actual 'Time' units as\ndescribed by the data, or just TimeSteps of iteration.\n"},
  {(char*)"SetStaticSeeds", PyvtkTemporalStreamTracer_SetStaticSeeds, 1,
   (char*)"V.SetStaticSeeds(int)\nC++: void SetStaticSeeds(int a)\n\nif StaticSeeds is set and the mesh is static, then every time\nparticles are injected we can re-use the same injection\ninformation. We classify particles according to processor just\nonce before start. If StaticSeeds is set and a moving seed source\nis specified the motion will be ignored and results will not be\nas expected.\n"},
  {(char*)"GetStaticSeeds", PyvtkTemporalStreamTracer_GetStaticSeeds, 1,
   (char*)"V.GetStaticSeeds() -> int\nC++: int GetStaticSeeds()\n\nif StaticSeeds is set and the mesh is static, then every time\nparticles are injected we can re-use the same injection\ninformation. We classify particles according to processor just\nonce before start. If StaticSeeds is set and a moving seed source\nis specified the motion will be ignored and results will not be\nas expected.\n"},
  {(char*)"StaticSeedsOn", PyvtkTemporalStreamTracer_StaticSeedsOn, 1,
   (char*)"V.StaticSeedsOn()\nC++: void StaticSeedsOn()\n\nif StaticSeeds is set and the mesh is static, then every time\nparticles are injected we can re-use the same injection\ninformation. We classify particles according to processor just\nonce before start. If StaticSeeds is set and a moving seed source\nis specified the motion will be ignored and results will not be\nas expected.\n"},
  {(char*)"StaticSeedsOff", PyvtkTemporalStreamTracer_StaticSeedsOff, 1,
   (char*)"V.StaticSeedsOff()\nC++: void StaticSeedsOff()\n\nif StaticSeeds is set and the mesh is static, then every time\nparticles are injected we can re-use the same injection\ninformation. We classify particles according to processor just\nonce before start. If StaticSeeds is set and a moving seed source\nis specified the motion will be ignored and results will not be\nas expected.\n"},
  {(char*)"SetStaticMesh", PyvtkTemporalStreamTracer_SetStaticMesh, 1,
   (char*)"V.SetStaticMesh(int)\nC++: void SetStaticMesh(int a)\n\nif StaticMesh is set, many optimizations for cell caching can be\nassumed. if StaticMesh is not set, the algorithm will attempt to\nfind out if optimizations can be used, but setting it to true\nwill force all optimizations. Do not Set StaticMesh to true if a\ndynamic mesh is being used as this will invalidate all results.\n"},
  {(char*)"GetStaticMesh", PyvtkTemporalStreamTracer_GetStaticMesh, 1,
   (char*)"V.GetStaticMesh() -> int\nC++: int GetStaticMesh()\n\nif StaticMesh is set, many optimizations for cell caching can be\nassumed. if StaticMesh is not set, the algorithm will attempt to\nfind out if optimizations can be used, but setting it to true\nwill force all optimizations. Do not Set StaticMesh to true if a\ndynamic mesh is being used as this will invalidate all results.\n"},
  {(char*)"StaticMeshOn", PyvtkTemporalStreamTracer_StaticMeshOn, 1,
   (char*)"V.StaticMeshOn()\nC++: void StaticMeshOn()\n\nif StaticMesh is set, many optimizations for cell caching can be\nassumed. if StaticMesh is not set, the algorithm will attempt to\nfind out if optimizations can be used, but setting it to true\nwill force all optimizations. Do not Set StaticMesh to true if a\ndynamic mesh is being used as this will invalidate all results.\n"},
  {(char*)"StaticMeshOff", PyvtkTemporalStreamTracer_StaticMeshOff, 1,
   (char*)"V.StaticMeshOff()\nC++: void StaticMeshOff()\n\nif StaticMesh is set, many optimizations for cell caching can be\nassumed. if StaticMesh is not set, the algorithm will attempt to\nfind out if optimizations can be used, but setting it to true\nwill force all optimizations. Do not Set StaticMesh to true if a\ndynamic mesh is being used as this will invalidate all results.\n"},
  {(char*)"SetController", PyvtkTemporalStreamTracer_SetController, 1,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(\n    vtkMultiProcessController *controller)\n\nSet/Get the controller used when sending particles between\nprocesses The controller must be an instance of vtkMPIController.\nIf VTK was compiled without VTK_USE_MPI on, then the Controller\nis simply ignored.\n"},
  {(char*)"GetController", PyvtkTemporalStreamTracer_GetController, 1,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nSet/Get the controller used when sending particles between\nprocesses The controller must be an instance of vtkMPIController.\nIf VTK was compiled without VTK_USE_MPI on, then the Controller\nis simply ignored.\n"},
  {(char*)"SetParticleWriter", PyvtkTemporalStreamTracer_SetParticleWriter, 1,
   (char*)"V.SetParticleWriter(vtkAbstractParticleWriter)\nC++: virtual void SetParticleWriter(vtkAbstractParticleWriter *pw)\n\nSet/Get the Writer associated with this Particle Tracer Ideally a\nparallel IO capable vtkH5PartWriter should be used which will\ncollect particles from all parallel processes and write them to a\nsingle HDF5 file.\n"},
  {(char*)"GetParticleWriter", PyvtkTemporalStreamTracer_GetParticleWriter, 1,
   (char*)"V.GetParticleWriter() -> vtkAbstractParticleWriter\nC++: vtkAbstractParticleWriter *GetParticleWriter()\n\nSet/Get the Writer associated with this Particle Tracer Ideally a\nparallel IO capable vtkH5PartWriter should be used which will\ncollect particles from all parallel processes and write them to a\nsingle HDF5 file.\n"},
  {(char*)"SetParticleFileName", PyvtkTemporalStreamTracer_SetParticleFileName, 1,
   (char*)"V.SetParticleFileName(string)\nC++: void SetParticleFileName(char *)\n\nSet/Get the filename to be used with the particle writer when\ndumping particles to disk\n"},
  {(char*)"GetParticleFileName", PyvtkTemporalStreamTracer_GetParticleFileName, 1,
   (char*)"V.GetParticleFileName() -> string\nC++: char *GetParticleFileName()\n\nSet/Get the filename to be used with the particle writer when\ndumping particles to disk\n"},
  {(char*)"SetEnableParticleWriting", PyvtkTemporalStreamTracer_SetEnableParticleWriting, 1,
   (char*)"V.SetEnableParticleWriting(int)\nC++: void SetEnableParticleWriting(int a)\n\nSet/Get the filename to be used with the particle writer when\ndumping particles to disk\n"},
  {(char*)"GetEnableParticleWriting", PyvtkTemporalStreamTracer_GetEnableParticleWriting, 1,
   (char*)"V.GetEnableParticleWriting() -> int\nC++: int GetEnableParticleWriting()\n\nSet/Get the filename to be used with the particle writer when\ndumping particles to disk\n"},
  {(char*)"EnableParticleWritingOn", PyvtkTemporalStreamTracer_EnableParticleWritingOn, 1,
   (char*)"V.EnableParticleWritingOn()\nC++: void EnableParticleWritingOn()\n\nSet/Get the filename to be used with the particle writer when\ndumping particles to disk\n"},
  {(char*)"EnableParticleWritingOff", PyvtkTemporalStreamTracer_EnableParticleWritingOff, 1,
   (char*)"V.EnableParticleWritingOff()\nC++: void EnableParticleWritingOff()\n\nSet/Get the filename to be used with the particle writer when\ndumping particles to disk\n"},
  {(char*)"AddSourceConnection", PyvtkTemporalStreamTracer_AddSourceConnection, 1,
   (char*)"V.AddSourceConnection(vtkAlgorithmOutput)\nC++: void AddSourceConnection(vtkAlgorithmOutput *input)\n\nProvide support for multiple see sources\n"},
  {(char*)"RemoveAllSources", PyvtkTemporalStreamTracer_RemoveAllSources, 1,
   (char*)"V.RemoveAllSources()\nC++: void RemoveAllSources()\n\nProvide support for multiple see sources\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTemporalStreamTracer_StaticNew()
{
  return vtkTemporalStreamTracer::New();
}

PyObject *PyVTKClass_vtkTemporalStreamTracerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTemporalStreamTracer_StaticNew,
    PyvtkTemporalStreamTracer_Methods,
    "vtkTemporalStreamTracer", modulename,
    NULL, NULL,
    PyvtkTemporalStreamTracer_Doc(),
    PyVTKClass_vtkStreamTracerNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"TERMINATION_TIME_UNIT", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"TERMINATION_STEP_UNIT", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkTemporalStreamTracer_Doc()
{
  static const char *docstring[] = {
    "vtkTemporalStreamTracer - A Parallel Particle tracer for unsteady\nvector fields\n\n",
    "Superclass: vtkStreamTracer\n\n",
    "vtkTemporalStreamTracer is a filter that integrates a vector field to\ngenerate\n\nSee Also:\n\nvtkRibbonFilter vtkRuledSurfaceFilter vtkInitialValueProblemSolver\nvtkRungeKutta2 vtkRungeKutta4 vtkRungeKutta45 vtkStreamTracer\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTemporalStreamTracer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTemporalStreamTracerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTemporalStreamTracer", o) != 0)
    {
    Py_DECREF(o);
    }

}

