// python wrapper for vtkStreamTracer
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
#include "vtkStreamTracer.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkStreamTracer(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkStreamTracer(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkStreamTracerNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkStreamTracerNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkStreamTracer_Doc();


static PyObject *
PyvtkStreamTracer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

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
      tempr = op->vtkStreamTracer::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

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
      tempr = op->vtkStreamTracer::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  vtkStreamTracer *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkStreamTracer::NewInstance();
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
PyvtkStreamTracer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkStreamTracer *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkStreamTracer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetStartPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

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
      op->SetStartPosition(temp0, temp1, temp2);
      }
    else
      {
      op->vtkStreamTracer::SetStartPosition(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkStreamTracer_SetStartPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetStartPosition(temp0);
      }
    else
      {
      op->vtkStreamTracer::SetStartPosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkStreamTracer_SetStartPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkStreamTracer_SetStartPosition_s1(self, args);
    case 1:
      return PyvtkStreamTracer_SetStartPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetStartPosition");
  return NULL;
}



static PyObject *
PyvtkStreamTracer_GetStartPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStartPosition();
      }
    else
      {
      tempr = op->vtkStreamTracer::GetStartPosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->SetSource(temp0);
      }
    else
      {
      op->vtkStreamTracer::SetSource(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  vtkDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSource();
      }
    else
      {
      tempr = op->vtkStreamTracer::GetSource();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetSourceConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetSourceConnection(temp0);
      }
    else
      {
      op->vtkStreamTracer::SetSourceConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetIntegrator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  vtkInitialValueProblemSolver *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInitialValueProblemSolver"))
    {
    if (ap.IsBound())
      {
      op->SetIntegrator(temp0);
      }
    else
      {
      op->vtkStreamTracer::SetIntegrator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetIntegrator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  vtkInitialValueProblemSolver *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIntegrator();
      }
    else
      {
      tempr = op->vtkStreamTracer::GetIntegrator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetIntegratorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegratorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIntegratorType(temp0);
      }
    else
      {
      op->vtkStreamTracer::SetIntegratorType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetIntegratorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegratorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIntegratorType();
      }
    else
      {
      tempr = op->vtkStreamTracer::GetIntegratorType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetIntegratorTypeToRungeKutta2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegratorTypeToRungeKutta2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIntegratorTypeToRungeKutta2();
      }
    else
      {
      op->vtkStreamTracer::SetIntegratorTypeToRungeKutta2();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetIntegratorTypeToRungeKutta4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegratorTypeToRungeKutta4");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIntegratorTypeToRungeKutta4();
      }
    else
      {
      op->vtkStreamTracer::SetIntegratorTypeToRungeKutta4();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetIntegratorTypeToRungeKutta45(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegratorTypeToRungeKutta45");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIntegratorTypeToRungeKutta45();
      }
    else
      {
      op->vtkStreamTracer::SetIntegratorTypeToRungeKutta45();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetInterpolatorTypeToDataSetPointLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolatorTypeToDataSetPointLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolatorTypeToDataSetPointLocator();
      }
    else
      {
      op->vtkStreamTracer::SetInterpolatorTypeToDataSetPointLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetInterpolatorTypeToCellLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolatorTypeToCellLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolatorTypeToCellLocator();
      }
    else
      {
      op->vtkStreamTracer::SetInterpolatorTypeToCellLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetMaximumPropagation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumPropagation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumPropagation(temp0);
      }
    else
      {
      op->vtkStreamTracer::SetMaximumPropagation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetMaximumPropagation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumPropagation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumPropagation();
      }
    else
      {
      tempr = op->vtkStreamTracer::GetMaximumPropagation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetIntegrationStepUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationStepUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIntegrationStepUnit(temp0);
      }
    else
      {
      op->vtkStreamTracer::SetIntegrationStepUnit(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetIntegrationStepUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationStepUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIntegrationStepUnit();
      }
    else
      {
      tempr = op->vtkStreamTracer::GetIntegrationStepUnit();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetInitialIntegrationStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInitialIntegrationStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInitialIntegrationStep(temp0);
      }
    else
      {
      op->vtkStreamTracer::SetInitialIntegrationStep(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetInitialIntegrationStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInitialIntegrationStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInitialIntegrationStep();
      }
    else
      {
      tempr = op->vtkStreamTracer::GetInitialIntegrationStep();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetMinimumIntegrationStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumIntegrationStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinimumIntegrationStep(temp0);
      }
    else
      {
      op->vtkStreamTracer::SetMinimumIntegrationStep(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetMinimumIntegrationStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumIntegrationStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinimumIntegrationStep();
      }
    else
      {
      tempr = op->vtkStreamTracer::GetMinimumIntegrationStep();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetMaximumIntegrationStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumIntegrationStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumIntegrationStep(temp0);
      }
    else
      {
      op->vtkStreamTracer::SetMaximumIntegrationStep(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetMaximumIntegrationStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumIntegrationStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumIntegrationStep();
      }
    else
      {
      tempr = op->vtkStreamTracer::GetMaximumIntegrationStep();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetMaximumError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

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
      op->vtkStreamTracer::SetMaximumError(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetMaximumError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

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
      tempr = op->vtkStreamTracer::GetMaximumError();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetMaximumNumberOfSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumNumberOfSteps(temp0);
      }
    else
      {
      op->vtkStreamTracer::SetMaximumNumberOfSteps(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetMaximumNumberOfSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumNumberOfSteps();
      }
    else
      {
      tempr = op->vtkStreamTracer::GetMaximumNumberOfSteps();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetTerminalSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTerminalSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTerminalSpeed(temp0);
      }
    else
      {
      op->vtkStreamTracer::SetTerminalSpeed(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetTerminalSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTerminalSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTerminalSpeed();
      }
    else
      {
      tempr = op->vtkStreamTracer::GetTerminalSpeed();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetIntegrationDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIntegrationDirection(temp0);
      }
    else
      {
      op->vtkStreamTracer::SetIntegrationDirection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetIntegrationDirectionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationDirectionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIntegrationDirectionMinValue();
      }
    else
      {
      tempr = op->vtkStreamTracer::GetIntegrationDirectionMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetIntegrationDirectionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationDirectionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIntegrationDirectionMaxValue();
      }
    else
      {
      tempr = op->vtkStreamTracer::GetIntegrationDirectionMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetIntegrationDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIntegrationDirection();
      }
    else
      {
      tempr = op->vtkStreamTracer::GetIntegrationDirection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetIntegrationDirectionToForward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationDirectionToForward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIntegrationDirectionToForward();
      }
    else
      {
      op->vtkStreamTracer::SetIntegrationDirectionToForward();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetIntegrationDirectionToBackward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationDirectionToBackward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIntegrationDirectionToBackward();
      }
    else
      {
      op->vtkStreamTracer::SetIntegrationDirectionToBackward();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetIntegrationDirectionToBoth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationDirectionToBoth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIntegrationDirectionToBoth();
      }
    else
      {
      op->vtkStreamTracer::SetIntegrationDirectionToBoth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetComputeVorticity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeVorticity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComputeVorticity(temp0);
      }
    else
      {
      op->vtkStreamTracer::SetComputeVorticity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetComputeVorticity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeVorticity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComputeVorticity();
      }
    else
      {
      tempr = op->vtkStreamTracer::GetComputeVorticity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetRotationScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRotationScale(temp0);
      }
    else
      {
      op->vtkStreamTracer::SetRotationScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetRotationScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRotationScale();
      }
    else
      {
      tempr = op->vtkStreamTracer::GetRotationScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetInterpolatorPrototype(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolatorPrototype");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  vtkAbstractInterpolatedVelocityField *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractInterpolatedVelocityField"))
    {
    if (ap.IsBound())
      {
      op->SetInterpolatorPrototype(temp0);
      }
    else
      {
      op->vtkStreamTracer::SetInterpolatorPrototype(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetInterpolatorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolatorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolatorType(temp0);
      }
    else
      {
      op->vtkStreamTracer::SetInterpolatorType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkStreamTracer_Methods[] = {
  {(char*)"GetClassName", PyvtkStreamTracer_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStreamTracer_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStreamTracer_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkStreamTracer\nC++: vtkStreamTracer *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStreamTracer_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStreamTracer\nC++: vtkStreamTracer *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetStartPosition", PyvtkStreamTracer_SetStartPosition, 1,
   (char*)"V.SetStartPosition(float, float, float)\nC++: void SetStartPosition(double, double, double)\nV.SetStartPosition((float, float, float))\nC++: void SetStartPosition(double a[3])\n\n"},
  {(char*)"GetStartPosition", PyvtkStreamTracer_GetStartPosition, 1,
   (char*)"V.GetStartPosition() -> (float, float, float)\nC++: double *GetStartPosition()\n\n"},
  {(char*)"SetSource", PyvtkStreamTracer_SetSource, 1,
   (char*)"V.SetSource(vtkDataSet)\nC++: void SetSource(vtkDataSet *source)\n\nSpecify the source object used to generate starting points\n(seeds). Old style. Do not use.\n"},
  {(char*)"GetSource", PyvtkStreamTracer_GetSource, 1,
   (char*)"V.GetSource() -> vtkDataSet\nC++: vtkDataSet *GetSource()\n\nSpecify the source object used to generate starting points\n(seeds). Old style. Do not use.\n"},
  {(char*)"SetSourceConnection", PyvtkStreamTracer_SetSourceConnection, 1,
   (char*)"V.SetSourceConnection(vtkAlgorithmOutput)\nC++: void SetSourceConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify the source object used to generate starting points\n(seeds). New style.\n"},
  {(char*)"SetIntegrator", PyvtkStreamTracer_SetIntegrator, 1,
   (char*)"V.SetIntegrator(vtkInitialValueProblemSolver)\nC++: void SetIntegrator(vtkInitialValueProblemSolver *)\n\nSet/get the integrator type to be used for streamline generation.\nThe object passed is not actually used but is cloned with\nNewInstance in the process of integration  (prototype pattern).\nThe default is Runge-Kutta2. The integrator can also be changed\nusing SetIntegratorType. The recognized solvers are: RUNGE_KUTTA2\n = 0 RUNGE_KUTTA4  = 1 RUNGE_KUTTA45 = 2\n"},
  {(char*)"GetIntegrator", PyvtkStreamTracer_GetIntegrator, 1,
   (char*)"V.GetIntegrator() -> vtkInitialValueProblemSolver\nC++: vtkInitialValueProblemSolver *GetIntegrator()\n\nSet/get the integrator type to be used for streamline generation.\nThe object passed is not actually used but is cloned with\nNewInstance in the process of integration  (prototype pattern).\nThe default is Runge-Kutta2. The integrator can also be changed\nusing SetIntegratorType. The recognized solvers are: RUNGE_KUTTA2\n = 0 RUNGE_KUTTA4  = 1 RUNGE_KUTTA45 = 2\n"},
  {(char*)"SetIntegratorType", PyvtkStreamTracer_SetIntegratorType, 1,
   (char*)"V.SetIntegratorType(int)\nC++: void SetIntegratorType(int type)\n\nSet/get the integrator type to be used for streamline generation.\nThe object passed is not actually used but is cloned with\nNewInstance in the process of integration  (prototype pattern).\nThe default is Runge-Kutta2. The integrator can also be changed\nusing SetIntegratorType. The recognized solvers are: RUNGE_KUTTA2\n = 0 RUNGE_KUTTA4  = 1 RUNGE_KUTTA45 = 2\n"},
  {(char*)"GetIntegratorType", PyvtkStreamTracer_GetIntegratorType, 1,
   (char*)"V.GetIntegratorType() -> int\nC++: int GetIntegratorType()\n\nSet/get the integrator type to be used for streamline generation.\nThe object passed is not actually used but is cloned with\nNewInstance in the process of integration  (prototype pattern).\nThe default is Runge-Kutta2. The integrator can also be changed\nusing SetIntegratorType. The recognized solvers are: RUNGE_KUTTA2\n = 0 RUNGE_KUTTA4  = 1 RUNGE_KUTTA45 = 2\n"},
  {(char*)"SetIntegratorTypeToRungeKutta2", PyvtkStreamTracer_SetIntegratorTypeToRungeKutta2, 1,
   (char*)"V.SetIntegratorTypeToRungeKutta2()\nC++: void SetIntegratorTypeToRungeKutta2()\n\nSet/get the integrator type to be used for streamline generation.\nThe object passed is not actually used but is cloned with\nNewInstance in the process of integration  (prototype pattern).\nThe default is Runge-Kutta2. The integrator can also be changed\nusing SetIntegratorType. The recognized solvers are: RUNGE_KUTTA2\n = 0 RUNGE_KUTTA4  = 1 RUNGE_KUTTA45 = 2\n"},
  {(char*)"SetIntegratorTypeToRungeKutta4", PyvtkStreamTracer_SetIntegratorTypeToRungeKutta4, 1,
   (char*)"V.SetIntegratorTypeToRungeKutta4()\nC++: void SetIntegratorTypeToRungeKutta4()\n\nSet/get the integrator type to be used for streamline generation.\nThe object passed is not actually used but is cloned with\nNewInstance in the process of integration  (prototype pattern).\nThe default is Runge-Kutta2. The integrator can also be changed\nusing SetIntegratorType. The recognized solvers are: RUNGE_KUTTA2\n = 0 RUNGE_KUTTA4  = 1 RUNGE_KUTTA45 = 2\n"},
  {(char*)"SetIntegratorTypeToRungeKutta45", PyvtkStreamTracer_SetIntegratorTypeToRungeKutta45, 1,
   (char*)"V.SetIntegratorTypeToRungeKutta45()\nC++: void SetIntegratorTypeToRungeKutta45()\n\nSet/get the integrator type to be used for streamline generation.\nThe object passed is not actually used but is cloned with\nNewInstance in the process of integration  (prototype pattern).\nThe default is Runge-Kutta2. The integrator can also be changed\nusing SetIntegratorType. The recognized solvers are: RUNGE_KUTTA2\n = 0 RUNGE_KUTTA4  = 1 RUNGE_KUTTA45 = 2\n"},
  {(char*)"SetInterpolatorTypeToDataSetPointLocator", PyvtkStreamTracer_SetInterpolatorTypeToDataSetPointLocator, 1,
   (char*)"V.SetInterpolatorTypeToDataSetPointLocator()\nC++: void SetInterpolatorTypeToDataSetPointLocator()\n\nSet the velocity field interpolator type to the one involving a\ndataset point locator.\n"},
  {(char*)"SetInterpolatorTypeToCellLocator", PyvtkStreamTracer_SetInterpolatorTypeToCellLocator, 1,
   (char*)"V.SetInterpolatorTypeToCellLocator()\nC++: void SetInterpolatorTypeToCellLocator()\n\nSet the velocity field interpolator type to the one involving a\ncell locator.\n"},
  {(char*)"SetMaximumPropagation", PyvtkStreamTracer_SetMaximumPropagation, 1,
   (char*)"V.SetMaximumPropagation(float)\nC++: void SetMaximumPropagation(double a)\n\nSpecify the maximum length of a streamline expressed in\nLENGTH_UNIT.\n"},
  {(char*)"GetMaximumPropagation", PyvtkStreamTracer_GetMaximumPropagation, 1,
   (char*)"V.GetMaximumPropagation() -> float\nC++: double GetMaximumPropagation()\n\nSpecify the maximum length of a streamline expressed in\nLENGTH_UNIT.\n"},
  {(char*)"SetIntegrationStepUnit", PyvtkStreamTracer_SetIntegrationStepUnit, 1,
   (char*)"V.SetIntegrationStepUnit(int)\nC++: void SetIntegrationStepUnit(int unit)\n\nSpecify a uniform integration step unit for\nMinimumIntegrationStep, InitialIntegrationStep, and\nMaximumIntegrationStep. NOTE: The valid unit is now limited to\nonly LENGTH_UNIT (1) and CELL_LENGTH_UNIT (2), EXCLUDING the\npreviously-supported TIME_UNIT.\n"},
  {(char*)"GetIntegrationStepUnit", PyvtkStreamTracer_GetIntegrationStepUnit, 1,
   (char*)"V.GetIntegrationStepUnit() -> int\nC++: int GetIntegrationStepUnit()\n\nSpecify a uniform integration step unit for\nMinimumIntegrationStep, InitialIntegrationStep, and\nMaximumIntegrationStep. NOTE: The valid unit is now limited to\nonly LENGTH_UNIT (1) and CELL_LENGTH_UNIT (2), EXCLUDING the\npreviously-supported TIME_UNIT.\n"},
  {(char*)"SetInitialIntegrationStep", PyvtkStreamTracer_SetInitialIntegrationStep, 1,
   (char*)"V.SetInitialIntegrationStep(float)\nC++: void SetInitialIntegrationStep(double a)\n\nSpecify the Initial step size used for line integration,\nexpressed in: LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2 (either\nthe starting size for an adaptive integrator, e.g., RK45, or the\nconstant / fixed size for non-adaptive ones, i.e., RK2 and RK4)\n"},
  {(char*)"GetInitialIntegrationStep", PyvtkStreamTracer_GetInitialIntegrationStep, 1,
   (char*)"V.GetInitialIntegrationStep() -> float\nC++: double GetInitialIntegrationStep()\n\nSpecify the Initial step size used for line integration,\nexpressed in: LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2 (either\nthe starting size for an adaptive integrator, e.g., RK45, or the\nconstant / fixed size for non-adaptive ones, i.e., RK2 and RK4)\n"},
  {(char*)"SetMinimumIntegrationStep", PyvtkStreamTracer_SetMinimumIntegrationStep, 1,
   (char*)"V.SetMinimumIntegrationStep(float)\nC++: void SetMinimumIntegrationStep(double a)\n\nSpecify the Minimum step size used for line integration,\nexpressed in: LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2 (Only\nvalid for an adaptive integrator, e.g., RK45)\n"},
  {(char*)"GetMinimumIntegrationStep", PyvtkStreamTracer_GetMinimumIntegrationStep, 1,
   (char*)"V.GetMinimumIntegrationStep() -> float\nC++: double GetMinimumIntegrationStep()\n\nSpecify the Minimum step size used for line integration,\nexpressed in: LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2 (Only\nvalid for an adaptive integrator, e.g., RK45)\n"},
  {(char*)"SetMaximumIntegrationStep", PyvtkStreamTracer_SetMaximumIntegrationStep, 1,
   (char*)"V.SetMaximumIntegrationStep(float)\nC++: void SetMaximumIntegrationStep(double a)\n\nSpecify the Maximum step size used for line integration,\nexpressed in: LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2 (Only\nvalid for an adaptive integrator, e.g., RK45)\n"},
  {(char*)"GetMaximumIntegrationStep", PyvtkStreamTracer_GetMaximumIntegrationStep, 1,
   (char*)"V.GetMaximumIntegrationStep() -> float\nC++: double GetMaximumIntegrationStep()\n\nSpecify the Maximum step size used for line integration,\nexpressed in: LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2 (Only\nvalid for an adaptive integrator, e.g., RK45)\n"},
  {(char*)"SetMaximumError", PyvtkStreamTracer_SetMaximumError, 1,
   (char*)"V.SetMaximumError(float)\nC++: void SetMaximumError(double a)\n\n"},
  {(char*)"GetMaximumError", PyvtkStreamTracer_GetMaximumError, 1,
   (char*)"V.GetMaximumError() -> float\nC++: double GetMaximumError()\n\n"},
  {(char*)"SetMaximumNumberOfSteps", PyvtkStreamTracer_SetMaximumNumberOfSteps, 1,
   (char*)"V.SetMaximumNumberOfSteps(int)\nC++: void SetMaximumNumberOfSteps(vtkIdType a)\n\n"},
  {(char*)"GetMaximumNumberOfSteps", PyvtkStreamTracer_GetMaximumNumberOfSteps, 1,
   (char*)"V.GetMaximumNumberOfSteps() -> int\nC++: vtkIdType GetMaximumNumberOfSteps()\n\n"},
  {(char*)"SetTerminalSpeed", PyvtkStreamTracer_SetTerminalSpeed, 1,
   (char*)"V.SetTerminalSpeed(float)\nC++: void SetTerminalSpeed(double a)\n\n"},
  {(char*)"GetTerminalSpeed", PyvtkStreamTracer_GetTerminalSpeed, 1,
   (char*)"V.GetTerminalSpeed() -> float\nC++: double GetTerminalSpeed()\n\n"},
  {(char*)"SetIntegrationDirection", PyvtkStreamTracer_SetIntegrationDirection, 1,
   (char*)"V.SetIntegrationDirection(int)\nC++: void SetIntegrationDirection(int)\n\nSpecify whether the streamline is integrated in the upstream or\ndownstream direction.\n"},
  {(char*)"GetIntegrationDirectionMinValue", PyvtkStreamTracer_GetIntegrationDirectionMinValue, 1,
   (char*)"V.GetIntegrationDirectionMinValue() -> int\nC++: int GetIntegrationDirectionMinValue()\n\nSpecify whether the streamline is integrated in the upstream or\ndownstream direction.\n"},
  {(char*)"GetIntegrationDirectionMaxValue", PyvtkStreamTracer_GetIntegrationDirectionMaxValue, 1,
   (char*)"V.GetIntegrationDirectionMaxValue() -> int\nC++: int GetIntegrationDirectionMaxValue()\n\nSpecify whether the streamline is integrated in the upstream or\ndownstream direction.\n"},
  {(char*)"GetIntegrationDirection", PyvtkStreamTracer_GetIntegrationDirection, 1,
   (char*)"V.GetIntegrationDirection() -> int\nC++: int GetIntegrationDirection()\n\nSpecify whether the streamline is integrated in the upstream or\ndownstream direction.\n"},
  {(char*)"SetIntegrationDirectionToForward", PyvtkStreamTracer_SetIntegrationDirectionToForward, 1,
   (char*)"V.SetIntegrationDirectionToForward()\nC++: void SetIntegrationDirectionToForward()\n\nSpecify whether the streamline is integrated in the upstream or\ndownstream direction.\n"},
  {(char*)"SetIntegrationDirectionToBackward", PyvtkStreamTracer_SetIntegrationDirectionToBackward, 1,
   (char*)"V.SetIntegrationDirectionToBackward()\nC++: void SetIntegrationDirectionToBackward()\n\nSpecify whether the streamline is integrated in the upstream or\ndownstream direction.\n"},
  {(char*)"SetIntegrationDirectionToBoth", PyvtkStreamTracer_SetIntegrationDirectionToBoth, 1,
   (char*)"V.SetIntegrationDirectionToBoth()\nC++: void SetIntegrationDirectionToBoth()\n\nSpecify whether the streamline is integrated in the upstream or\ndownstream direction.\n"},
  {(char*)"SetComputeVorticity", PyvtkStreamTracer_SetComputeVorticity, 1,
   (char*)"V.SetComputeVorticity(bool)\nC++: void SetComputeVorticity(bool a)\n\n"},
  {(char*)"GetComputeVorticity", PyvtkStreamTracer_GetComputeVorticity, 1,
   (char*)"V.GetComputeVorticity() -> bool\nC++: bool GetComputeVorticity()\n\n"},
  {(char*)"SetRotationScale", PyvtkStreamTracer_SetRotationScale, 1,
   (char*)"V.SetRotationScale(float)\nC++: void SetRotationScale(double a)\n\n"},
  {(char*)"GetRotationScale", PyvtkStreamTracer_GetRotationScale, 1,
   (char*)"V.GetRotationScale() -> float\nC++: double GetRotationScale()\n\n"},
  {(char*)"SetInterpolatorPrototype", PyvtkStreamTracer_SetInterpolatorPrototype, 1,
   (char*)"V.SetInterpolatorPrototype(vtkAbstractInterpolatedVelocityField)\nC++: void SetInterpolatorPrototype(\n    vtkAbstractInterpolatedVelocityField *ivf)\n\nThe object used to interpolate the velocity field during\nintegration is of the same class as this prototype.\n"},
  {(char*)"SetInterpolatorType", PyvtkStreamTracer_SetInterpolatorType, 1,
   (char*)"V.SetInterpolatorType(int)\nC++: void SetInterpolatorType(int interpType)\n\nSet the type of the velocity field interpolator to determine\nwhether vtkInterpolatedVelocityField\n(INTERPOLATOR_WITH_DATASET_POINT_LOCATOR) or\nvtkCellLocatorInterpolatedVelocityField\n(INTERPOLATOR_WITH_CELL_LOCATOR) is employed for locating cells\nduring streamline integration. The latter (adopting\nvtkAbstractCellLocator sub-classes such as vtkCellLocator and\nvtkModifiedBSPTree) is more robust then the former (through\nvtkDataSet / vtkPointSet::FindCell() coupled with\nvtkPointLocator).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkStreamTracer_StaticNew()
{
  return vtkStreamTracer::New();
}

PyObject *PyVTKClass_vtkStreamTracerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkStreamTracer_StaticNew,
    PyvtkStreamTracer_Methods,
    "vtkStreamTracer", modulename,
    NULL, NULL,
    PyvtkStreamTracer_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"LENGTH_UNIT", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"CELL_LENGTH_UNIT", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"RUNGE_KUTTA2", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"RUNGE_KUTTA4", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"RUNGE_KUTTA45", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"NONE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"UNKNOWN", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(vtkInitialValueProblemSolver::OUT_OF_DOMAIN);
    if (o && PyDict_SetItemString(d, (char *)"OUT_OF_DOMAIN", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(vtkInitialValueProblemSolver::NOT_INITIALIZED);
    if (o && PyDict_SetItemString(d, (char *)"NOT_INITIALIZED", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(vtkInitialValueProblemSolver::UNEXPECTED_VALUE);
    if (o && PyDict_SetItemString(d, (char *)"UNEXPECTED_VALUE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"OUT_OF_LENGTH", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(5);
    if (o && PyDict_SetItemString(d, (char *)"OUT_OF_STEPS", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(6);
    if (o && PyDict_SetItemString(d, (char *)"STAGNATION", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"FORWARD", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"BACKWARD", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"BOTH", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"INTERPOLATOR_WITH_DATASET_POINT_LOCATOR", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"INTERPOLATOR_WITH_CELL_LOCATOR", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkStreamTracer_Doc()
{
  static const char *docstring[] = {
    "vtkStreamTracer - Streamline generator\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkStreamTracer is a filter that integrates a vector field to\ngenerate streamlines. The integration is performed using a specified\nintegrator, by default Runge-Kutta2.\n\nvtkStreamTracer produces polylines as the output, with each cell\n(i.e., polyline) representing a streamline. The attribute values\nassociated with each streamline are stored in the cell data, whereas\nthose associated with streamline",
    "-points are stored in the point data.\n\nvtkStreamTracer supports forward (the default), backward, and\ncombined (i.e., BOTH) integration. The length of a streamline is\ngoverned by specifying a maximum value either in physical arc length\nor in (local) cell length. Otherwise, the integration terminates upon\nexiting the flow field domain, or if the particle speed is reduced to\na value less than a speci",
    "fied terminal speed, or when a maximum\nnumber of steps is completed. The specific reason for the termination\nis stored in a cell array named ReasonForTermination.\n\nNote that normalized vectors are adopted in streamline integration,\nwhich achieves high numerical accuracy/smoothness of flow lines that\nis particularly guranteed for Runge-Kutta45 with adaptive step size\nand error control). In support ",
    "of this feature, the underlying step\nsize is ALWAYS in arc length unit (LENGTH_UNIT) while the 'real' time\ninterval (virtual for steady flows) that a particle actually takes to\ntrave in a single step is obtained by dividing the arc length by the\nLOCAL speed. The overall elapsed time (i.e., the life span) of the\nparticle is the sum of those individual step-wise time intervals.\n\nThe quality of strea",
    "mline integration can be controlled by setting\nthe initial integration step (InitialIntegrationStep), particularly\nfor Runge-Kutta2 and Runge-Kutta4 (with a fixed step size), and in\nthe case of Runge-Kutta45 (with an adaptive step size and error\ncontrol) the minimum integration step, the maximum integration step,\nand the maximum error. These steps are in either LENGTH_UNIT or\nCELL_LENGTH_UNIT whil",
    "e the error is in physical arc length. For the\nformer two integrators, there is a trade-off between integration\nspeed and streamline quality.\n\nThe integration time, vorticity, rotation and angular velocity are\nstored in point data arrays named \"IntegrationTime\", \"Vorticity\",\n\"Rotation\" and \"AngularVelocity\", respectively (vorticity, rotation\nand angular velocity are computed only when ComputeVorti",
    "city is on).\nAll point data attributes in the source dataset are interpolated on\nthe new streamline points.\n\nvtkStreamTracer supports integration through any type of dataset.\nThus if the dataset contains 2D cells like polygons or triangles, the\nintegration is constrained to lie on the surface defined by 2D cells.\n\nThe starting point, or the so-called 'seed', of a streamline may be\nset in two diffe",
    "rent ways. Starting from global x-y-z \"position\"\nallows you to start a single trace at a specified x-y-z coordinate.\nIf you specify a source object, traces will be generated from each\npoint in the source that is inside the dataset.\n\nSee Also:\n\nvtkRibbonFilter vtkRuledSurfaceFilter vtkInitialValueProblemSolver\nvtkRungeKutta2 vtkRungeKutta4 vtkRungeKutta45 vtkTemporalStreamTracer\nvtkAbstractInterpol",
    "atedVelocityField vtkInterpolatedVelocityField\nvtkCellLocatorInterpolatedVelocityField\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStreamTracer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStreamTracerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStreamTracer", o) != 0)
    {
    Py_DECREF(o);
    }

}

