// python wrapper for vtkGenericStreamTracer
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
#include "vtkGenericStreamTracer.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGenericStreamTracer(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGenericStreamTracer(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGenericStreamTracerNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGenericStreamTracerNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkGenericStreamTracer_Doc();


static PyObject *
PyvtkGenericStreamTracer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

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
      tempr = op->vtkGenericStreamTracer::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

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
      tempr = op->vtkGenericStreamTracer::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  vtkGenericStreamTracer *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGenericStreamTracer::NewInstance();
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
PyvtkGenericStreamTracer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGenericStreamTracer *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGenericStreamTracer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetStartPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

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
      op->vtkGenericStreamTracer::SetStartPosition(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGenericStreamTracer_SetStartPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

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
      op->vtkGenericStreamTracer::SetStartPosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGenericStreamTracer_SetStartPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkGenericStreamTracer_SetStartPosition_s1(self, args);
    case 1:
      return PyvtkGenericStreamTracer_SetStartPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetStartPosition");
  return NULL;
}



static PyObject *
PyvtkGenericStreamTracer_GetStartPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

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
      tempr = op->vtkGenericStreamTracer::GetStartPosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

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
      op->vtkGenericStreamTracer::SetSource(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

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
      tempr = op->vtkGenericStreamTracer::GetSource();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_FillInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  int temp0;
  vtkInformation *temp1 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      tempr = op->FillInputPortInformation(temp0, temp1);
      }
    else
      {
      tempr = op->vtkGenericStreamTracer::FillInputPortInformation(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetIntegrator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

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
      op->vtkGenericStreamTracer::SetIntegrator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_GetIntegrator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

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
      tempr = op->vtkGenericStreamTracer::GetIntegrator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetIntegratorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegratorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

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
      op->vtkGenericStreamTracer::SetIntegratorType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_GetIntegratorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegratorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

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
      tempr = op->vtkGenericStreamTracer::GetIntegratorType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetIntegratorTypeToRungeKutta2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegratorTypeToRungeKutta2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIntegratorTypeToRungeKutta2();
      }
    else
      {
      op->vtkGenericStreamTracer::SetIntegratorTypeToRungeKutta2();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetIntegratorTypeToRungeKutta4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegratorTypeToRungeKutta4");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIntegratorTypeToRungeKutta4();
      }
    else
      {
      op->vtkGenericStreamTracer::SetIntegratorTypeToRungeKutta4();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetIntegratorTypeToRungeKutta45(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegratorTypeToRungeKutta45");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIntegratorTypeToRungeKutta45();
      }
    else
      {
      op->vtkGenericStreamTracer::SetIntegratorTypeToRungeKutta45();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetMaximumPropagation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumPropagation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  int temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetMaximumPropagation(temp0, temp1);
      }
    else
      {
      op->vtkGenericStreamTracer::SetMaximumPropagation(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGenericStreamTracer_SetMaximumPropagation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumPropagation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

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
      op->vtkGenericStreamTracer::SetMaximumPropagation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGenericStreamTracer_SetMaximumPropagation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkGenericStreamTracer_SetMaximumPropagation_s1(self, args);
    case 1:
      return PyvtkGenericStreamTracer_SetMaximumPropagation_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetMaximumPropagation");
  return NULL;
}



static PyObject *
PyvtkGenericStreamTracer_SetMaximumPropagationUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumPropagationUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumPropagationUnit(temp0);
      }
    else
      {
      op->vtkGenericStreamTracer::SetMaximumPropagationUnit(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_GetMaximumPropagationUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumPropagationUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumPropagationUnit();
      }
    else
      {
      tempr = op->vtkGenericStreamTracer::GetMaximumPropagationUnit();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_GetMaximumPropagation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumPropagation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

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
      tempr = op->vtkGenericStreamTracer::GetMaximumPropagation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetMaximumPropagationUnitToTimeUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumPropagationUnitToTimeUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumPropagationUnitToTimeUnit();
      }
    else
      {
      op->vtkGenericStreamTracer::SetMaximumPropagationUnitToTimeUnit();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetMaximumPropagationUnitToLengthUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumPropagationUnitToLengthUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumPropagationUnitToLengthUnit();
      }
    else
      {
      op->vtkGenericStreamTracer::SetMaximumPropagationUnitToLengthUnit();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetMaximumPropagationUnitToCellLengthUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumPropagationUnitToCellLengthUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumPropagationUnitToCellLengthUnit();
      }
    else
      {
      op->vtkGenericStreamTracer::SetMaximumPropagationUnitToCellLengthUnit();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetMinimumIntegrationStep_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumIntegrationStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  int temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetMinimumIntegrationStep(temp0, temp1);
      }
    else
      {
      op->vtkGenericStreamTracer::SetMinimumIntegrationStep(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGenericStreamTracer_SetMinimumIntegrationStep_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumIntegrationStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

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
      op->vtkGenericStreamTracer::SetMinimumIntegrationStep(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGenericStreamTracer_SetMinimumIntegrationStep(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkGenericStreamTracer_SetMinimumIntegrationStep_s1(self, args);
    case 1:
      return PyvtkGenericStreamTracer_SetMinimumIntegrationStep_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetMinimumIntegrationStep");
  return NULL;
}



static PyObject *
PyvtkGenericStreamTracer_SetMinimumIntegrationStepUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumIntegrationStepUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinimumIntegrationStepUnit(temp0);
      }
    else
      {
      op->vtkGenericStreamTracer::SetMinimumIntegrationStepUnit(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_GetMinimumIntegrationStepUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumIntegrationStepUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinimumIntegrationStepUnit();
      }
    else
      {
      tempr = op->vtkGenericStreamTracer::GetMinimumIntegrationStepUnit();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_GetMinimumIntegrationStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumIntegrationStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

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
      tempr = op->vtkGenericStreamTracer::GetMinimumIntegrationStep();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetMinimumIntegrationStepUnitToTimeUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumIntegrationStepUnitToTimeUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetMinimumIntegrationStepUnitToTimeUnit();
      }
    else
      {
      op->vtkGenericStreamTracer::SetMinimumIntegrationStepUnitToTimeUnit();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetMinimumIntegrationStepUnitToLengthUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumIntegrationStepUnitToLengthUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetMinimumIntegrationStepUnitToLengthUnit();
      }
    else
      {
      op->vtkGenericStreamTracer::SetMinimumIntegrationStepUnitToLengthUnit();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetMinimumIntegrationStepUnitToCellLengthUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumIntegrationStepUnitToCellLengthUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetMinimumIntegrationStepUnitToCellLengthUnit();
      }
    else
      {
      op->vtkGenericStreamTracer::SetMinimumIntegrationStepUnitToCellLengthUnit();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetMaximumIntegrationStep_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumIntegrationStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  int temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetMaximumIntegrationStep(temp0, temp1);
      }
    else
      {
      op->vtkGenericStreamTracer::SetMaximumIntegrationStep(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGenericStreamTracer_SetMaximumIntegrationStep_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumIntegrationStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

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
      op->vtkGenericStreamTracer::SetMaximumIntegrationStep(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGenericStreamTracer_SetMaximumIntegrationStep(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkGenericStreamTracer_SetMaximumIntegrationStep_s1(self, args);
    case 1:
      return PyvtkGenericStreamTracer_SetMaximumIntegrationStep_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetMaximumIntegrationStep");
  return NULL;
}



static PyObject *
PyvtkGenericStreamTracer_SetMaximumIntegrationStepUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumIntegrationStepUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumIntegrationStepUnit(temp0);
      }
    else
      {
      op->vtkGenericStreamTracer::SetMaximumIntegrationStepUnit(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_GetMaximumIntegrationStepUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumIntegrationStepUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumIntegrationStepUnit();
      }
    else
      {
      tempr = op->vtkGenericStreamTracer::GetMaximumIntegrationStepUnit();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_GetMaximumIntegrationStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumIntegrationStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

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
      tempr = op->vtkGenericStreamTracer::GetMaximumIntegrationStep();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetMaximumIntegrationStepUnitToTimeUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumIntegrationStepUnitToTimeUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumIntegrationStepUnitToTimeUnit();
      }
    else
      {
      op->vtkGenericStreamTracer::SetMaximumIntegrationStepUnitToTimeUnit();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetMaximumIntegrationStepUnitToLengthUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumIntegrationStepUnitToLengthUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumIntegrationStepUnitToLengthUnit();
      }
    else
      {
      op->vtkGenericStreamTracer::SetMaximumIntegrationStepUnitToLengthUnit();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetMaximumIntegrationStepUnitToCellLengthUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumIntegrationStepUnitToCellLengthUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumIntegrationStepUnitToCellLengthUnit();
      }
    else
      {
      op->vtkGenericStreamTracer::SetMaximumIntegrationStepUnitToCellLengthUnit();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetInitialIntegrationStep_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInitialIntegrationStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  int temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetInitialIntegrationStep(temp0, temp1);
      }
    else
      {
      op->vtkGenericStreamTracer::SetInitialIntegrationStep(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGenericStreamTracer_SetInitialIntegrationStep_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInitialIntegrationStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

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
      op->vtkGenericStreamTracer::SetInitialIntegrationStep(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGenericStreamTracer_SetInitialIntegrationStep(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkGenericStreamTracer_SetInitialIntegrationStep_s1(self, args);
    case 1:
      return PyvtkGenericStreamTracer_SetInitialIntegrationStep_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInitialIntegrationStep");
  return NULL;
}



static PyObject *
PyvtkGenericStreamTracer_SetInitialIntegrationStepUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInitialIntegrationStepUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInitialIntegrationStepUnit(temp0);
      }
    else
      {
      op->vtkGenericStreamTracer::SetInitialIntegrationStepUnit(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_GetInitialIntegrationStepUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInitialIntegrationStepUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInitialIntegrationStepUnit();
      }
    else
      {
      tempr = op->vtkGenericStreamTracer::GetInitialIntegrationStepUnit();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_GetInitialIntegrationStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInitialIntegrationStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

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
      tempr = op->vtkGenericStreamTracer::GetInitialIntegrationStep();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetInitialIntegrationStepUnitToTimeUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInitialIntegrationStepUnitToTimeUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInitialIntegrationStepUnitToTimeUnit();
      }
    else
      {
      op->vtkGenericStreamTracer::SetInitialIntegrationStepUnitToTimeUnit();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetInitialIntegrationStepUnitToLengthUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInitialIntegrationStepUnitToLengthUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInitialIntegrationStepUnitToLengthUnit();
      }
    else
      {
      op->vtkGenericStreamTracer::SetInitialIntegrationStepUnitToLengthUnit();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetInitialIntegrationStepUnitToCellLengthUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInitialIntegrationStepUnitToCellLengthUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInitialIntegrationStepUnitToCellLengthUnit();
      }
    else
      {
      op->vtkGenericStreamTracer::SetInitialIntegrationStepUnitToCellLengthUnit();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetMaximumError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

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
      op->vtkGenericStreamTracer::SetMaximumError(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_GetMaximumError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

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
      tempr = op->vtkGenericStreamTracer::GetMaximumError();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetMaximumNumberOfSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

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
      op->vtkGenericStreamTracer::SetMaximumNumberOfSteps(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_GetMaximumNumberOfSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

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
      tempr = op->vtkGenericStreamTracer::GetMaximumNumberOfSteps();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetTerminalSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTerminalSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

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
      op->vtkGenericStreamTracer::SetTerminalSpeed(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_GetTerminalSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTerminalSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

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
      tempr = op->vtkGenericStreamTracer::GetTerminalSpeed();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetIntegrationDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

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
      op->vtkGenericStreamTracer::SetIntegrationDirection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_GetIntegrationDirectionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationDirectionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

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
      tempr = op->vtkGenericStreamTracer::GetIntegrationDirectionMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_GetIntegrationDirectionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationDirectionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

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
      tempr = op->vtkGenericStreamTracer::GetIntegrationDirectionMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_GetIntegrationDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

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
      tempr = op->vtkGenericStreamTracer::GetIntegrationDirection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetIntegrationDirectionToForward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationDirectionToForward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIntegrationDirectionToForward();
      }
    else
      {
      op->vtkGenericStreamTracer::SetIntegrationDirectionToForward();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetIntegrationDirectionToBackward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationDirectionToBackward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIntegrationDirectionToBackward();
      }
    else
      {
      op->vtkGenericStreamTracer::SetIntegrationDirectionToBackward();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetIntegrationDirectionToBoth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationDirectionToBoth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIntegrationDirectionToBoth();
      }
    else
      {
      op->vtkGenericStreamTracer::SetIntegrationDirectionToBoth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetComputeVorticity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeVorticity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  int temp0;
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
      op->vtkGenericStreamTracer::SetComputeVorticity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_GetComputeVorticity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeVorticity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComputeVorticity();
      }
    else
      {
      tempr = op->vtkGenericStreamTracer::GetComputeVorticity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_ComputeVorticityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeVorticityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeVorticityOn();
      }
    else
      {
      op->vtkGenericStreamTracer::ComputeVorticityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_ComputeVorticityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeVorticityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeVorticityOff();
      }
    else
      {
      op->vtkGenericStreamTracer::ComputeVorticityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetRotationScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

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
      op->vtkGenericStreamTracer::SetRotationScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_GetRotationScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

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
      tempr = op->vtkGenericStreamTracer::GetRotationScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_GetInputVectorsSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputVectorsSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInputVectorsSelection();
      }
    else
      {
      tempr = op->vtkGenericStreamTracer::GetInputVectorsSelection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SelectInputVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectInputVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SelectInputVectors(temp0);
      }
    else
      {
      op->vtkGenericStreamTracer::SelectInputVectors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_AddInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  vtkGenericDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericDataSet"))
    {
    if (ap.IsBound())
      {
      op->AddInput(temp0);
      }
    else
      {
      op->vtkGenericStreamTracer::AddInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetInterpolatorPrototype(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolatorPrototype");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  vtkGenericInterpolatedVelocityField *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericInterpolatedVelocityField"))
    {
    if (ap.IsBound())
      {
      op->SetInterpolatorPrototype(temp0);
      }
    else
      {
      op->vtkGenericStreamTracer::SetInterpolatorPrototype(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGenericStreamTracer_Methods[] = {
  {(char*)"GetClassName", PyvtkGenericStreamTracer_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGenericStreamTracer_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGenericStreamTracer_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGenericStreamTracer\nC++: vtkGenericStreamTracer *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGenericStreamTracer_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGenericStreamTracer\nC++: vtkGenericStreamTracer *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetStartPosition", PyvtkGenericStreamTracer_SetStartPosition, 1,
   (char*)"V.SetStartPosition(float, float, float)\nC++: void SetStartPosition(double, double, double)\nV.SetStartPosition((float, float, float))\nC++: void SetStartPosition(double a[3])\n\n"},
  {(char*)"GetStartPosition", PyvtkGenericStreamTracer_GetStartPosition, 1,
   (char*)"V.GetStartPosition() -> (float, float, float)\nC++: double *GetStartPosition()\n\n"},
  {(char*)"SetSource", PyvtkGenericStreamTracer_SetSource, 1,
   (char*)"V.SetSource(vtkDataSet)\nC++: void SetSource(vtkDataSet *source)\n\nSpecify the source object used to generate starting points.\n"},
  {(char*)"GetSource", PyvtkGenericStreamTracer_GetSource, 1,
   (char*)"V.GetSource() -> vtkDataSet\nC++: vtkDataSet *GetSource()\n\nSpecify the source object used to generate starting points.\n"},
  {(char*)"FillInputPortInformation", PyvtkGenericStreamTracer_FillInputPortInformation, 1,
   (char*)"V.FillInputPortInformation(int, vtkInformation) -> int\nC++: int FillInputPortInformation(int port, vtkInformation *info)\n\n"},
  {(char*)"SetIntegrator", PyvtkGenericStreamTracer_SetIntegrator, 1,
   (char*)"V.SetIntegrator(vtkInitialValueProblemSolver)\nC++: void SetIntegrator(vtkInitialValueProblemSolver *)\n\nSet/get the integrator type to be used in the stream line\ncalculation. The object passed is not actually used but is cloned\nwith NewInstance in the process of integration (prototype\npattern). The default is 2nd order Runge Kutta. The integrator\ncan also be changed using SetIntegratorType. The recognized\nsolvers are: RUNGE_KUTTA2  = 0 RUNGE_KUTTA4  = 1 RUNGE_KUTTA45 =\n2\n"},
  {(char*)"GetIntegrator", PyvtkGenericStreamTracer_GetIntegrator, 1,
   (char*)"V.GetIntegrator() -> vtkInitialValueProblemSolver\nC++: vtkInitialValueProblemSolver *GetIntegrator()\n\nSet/get the integrator type to be used in the stream line\ncalculation. The object passed is not actually used but is cloned\nwith NewInstance in the process of integration (prototype\npattern). The default is 2nd order Runge Kutta. The integrator\ncan also be changed using SetIntegratorType. The recognized\nsolvers are: RUNGE_KUTTA2  = 0 RUNGE_KUTTA4  = 1 RUNGE_KUTTA45 =\n2\n"},
  {(char*)"SetIntegratorType", PyvtkGenericStreamTracer_SetIntegratorType, 1,
   (char*)"V.SetIntegratorType(int)\nC++: void SetIntegratorType(int type)\n\nSet/get the integrator type to be used in the stream line\ncalculation. The object passed is not actually used but is cloned\nwith NewInstance in the process of integration (prototype\npattern). The default is 2nd order Runge Kutta. The integrator\ncan also be changed using SetIntegratorType. The recognized\nsolvers are: RUNGE_KUTTA2  = 0 RUNGE_KUTTA4  = 1 RUNGE_KUTTA45 =\n2\n"},
  {(char*)"GetIntegratorType", PyvtkGenericStreamTracer_GetIntegratorType, 1,
   (char*)"V.GetIntegratorType() -> int\nC++: int GetIntegratorType()\n\nSet/get the integrator type to be used in the stream line\ncalculation. The object passed is not actually used but is cloned\nwith NewInstance in the process of integration (prototype\npattern). The default is 2nd order Runge Kutta. The integrator\ncan also be changed using SetIntegratorType. The recognized\nsolvers are: RUNGE_KUTTA2  = 0 RUNGE_KUTTA4  = 1 RUNGE_KUTTA45 =\n2\n"},
  {(char*)"SetIntegratorTypeToRungeKutta2", PyvtkGenericStreamTracer_SetIntegratorTypeToRungeKutta2, 1,
   (char*)"V.SetIntegratorTypeToRungeKutta2()\nC++: void SetIntegratorTypeToRungeKutta2()\n\nSet/get the integrator type to be used in the stream line\ncalculation. The object passed is not actually used but is cloned\nwith NewInstance in the process of integration (prototype\npattern). The default is 2nd order Runge Kutta. The integrator\ncan also be changed using SetIntegratorType. The recognized\nsolvers are: RUNGE_KUTTA2  = 0 RUNGE_KUTTA4  = 1 RUNGE_KUTTA45 =\n2\n"},
  {(char*)"SetIntegratorTypeToRungeKutta4", PyvtkGenericStreamTracer_SetIntegratorTypeToRungeKutta4, 1,
   (char*)"V.SetIntegratorTypeToRungeKutta4()\nC++: void SetIntegratorTypeToRungeKutta4()\n\nSet/get the integrator type to be used in the stream line\ncalculation. The object passed is not actually used but is cloned\nwith NewInstance in the process of integration (prototype\npattern). The default is 2nd order Runge Kutta. The integrator\ncan also be changed using SetIntegratorType. The recognized\nsolvers are: RUNGE_KUTTA2  = 0 RUNGE_KUTTA4  = 1 RUNGE_KUTTA45 =\n2\n"},
  {(char*)"SetIntegratorTypeToRungeKutta45", PyvtkGenericStreamTracer_SetIntegratorTypeToRungeKutta45, 1,
   (char*)"V.SetIntegratorTypeToRungeKutta45()\nC++: void SetIntegratorTypeToRungeKutta45()\n\nSet/get the integrator type to be used in the stream line\ncalculation. The object passed is not actually used but is cloned\nwith NewInstance in the process of integration (prototype\npattern). The default is 2nd order Runge Kutta. The integrator\ncan also be changed using SetIntegratorType. The recognized\nsolvers are: RUNGE_KUTTA2  = 0 RUNGE_KUTTA4  = 1 RUNGE_KUTTA45 =\n2\n"},
  {(char*)"SetMaximumPropagation", PyvtkGenericStreamTracer_SetMaximumPropagation, 1,
   (char*)"V.SetMaximumPropagation(int, float)\nC++: void SetMaximumPropagation(int unit, double max)\nV.SetMaximumPropagation(float)\nC++: void SetMaximumPropagation(double max)\n\nSpecify the maximum length of the streamlines expressed in one of\nthe: TIME_UNIT        = 0 LENGTH_UNIT      = 1 CELL_LENGTH_UNIT =\n2\n"},
  {(char*)"SetMaximumPropagationUnit", PyvtkGenericStreamTracer_SetMaximumPropagationUnit, 1,
   (char*)"V.SetMaximumPropagationUnit(int)\nC++: void SetMaximumPropagationUnit(int unit)\n\nSpecify the maximum length of the streamlines expressed in one of\nthe: TIME_UNIT        = 0 LENGTH_UNIT      = 1 CELL_LENGTH_UNIT =\n2\n"},
  {(char*)"GetMaximumPropagationUnit", PyvtkGenericStreamTracer_GetMaximumPropagationUnit, 1,
   (char*)"V.GetMaximumPropagationUnit() -> int\nC++: int GetMaximumPropagationUnit()\n\nSpecify the maximum length of the streamlines expressed in one of\nthe: TIME_UNIT        = 0 LENGTH_UNIT      = 1 CELL_LENGTH_UNIT =\n2\n"},
  {(char*)"GetMaximumPropagation", PyvtkGenericStreamTracer_GetMaximumPropagation, 1,
   (char*)"V.GetMaximumPropagation() -> float\nC++: double GetMaximumPropagation()\n\nSpecify the maximum length of the streamlines expressed in one of\nthe: TIME_UNIT        = 0 LENGTH_UNIT      = 1 CELL_LENGTH_UNIT =\n2\n"},
  {(char*)"SetMaximumPropagationUnitToTimeUnit", PyvtkGenericStreamTracer_SetMaximumPropagationUnitToTimeUnit, 1,
   (char*)"V.SetMaximumPropagationUnitToTimeUnit()\nC++: void SetMaximumPropagationUnitToTimeUnit()\n\nSpecify the maximum length of the streamlines expressed in one of\nthe: TIME_UNIT        = 0 LENGTH_UNIT      = 1 CELL_LENGTH_UNIT =\n2\n"},
  {(char*)"SetMaximumPropagationUnitToLengthUnit", PyvtkGenericStreamTracer_SetMaximumPropagationUnitToLengthUnit, 1,
   (char*)"V.SetMaximumPropagationUnitToLengthUnit()\nC++: void SetMaximumPropagationUnitToLengthUnit()\n\nSpecify the maximum length of the streamlines expressed in one of\nthe: TIME_UNIT        = 0 LENGTH_UNIT      = 1 CELL_LENGTH_UNIT =\n2\n"},
  {(char*)"SetMaximumPropagationUnitToCellLengthUnit", PyvtkGenericStreamTracer_SetMaximumPropagationUnitToCellLengthUnit, 1,
   (char*)"V.SetMaximumPropagationUnitToCellLengthUnit()\nC++: void SetMaximumPropagationUnitToCellLengthUnit()\n\nSpecify the maximum length of the streamlines expressed in one of\nthe: TIME_UNIT        = 0 LENGTH_UNIT      = 1 CELL_LENGTH_UNIT =\n2\n"},
  {(char*)"SetMinimumIntegrationStep", PyvtkGenericStreamTracer_SetMinimumIntegrationStep, 1,
   (char*)"V.SetMinimumIntegrationStep(int, float)\nC++: void SetMinimumIntegrationStep(int unit, double step)\nV.SetMinimumIntegrationStep(float)\nC++: void SetMinimumIntegrationStep(double step)\n\nSpecify the minimum step used in the integration expressed in one\nof the: TIME_UNIT        = 0 LENGTH_UNIT      = 1\nCELL_LENGTH_UNIT = 2 Only valid when using adaptive integrators.\n"},
  {(char*)"SetMinimumIntegrationStepUnit", PyvtkGenericStreamTracer_SetMinimumIntegrationStepUnit, 1,
   (char*)"V.SetMinimumIntegrationStepUnit(int)\nC++: void SetMinimumIntegrationStepUnit(int unit)\n\nSpecify the minimum step used in the integration expressed in one\nof the: TIME_UNIT        = 0 LENGTH_UNIT      = 1\nCELL_LENGTH_UNIT = 2 Only valid when using adaptive integrators.\n"},
  {(char*)"GetMinimumIntegrationStepUnit", PyvtkGenericStreamTracer_GetMinimumIntegrationStepUnit, 1,
   (char*)"V.GetMinimumIntegrationStepUnit() -> int\nC++: int GetMinimumIntegrationStepUnit()\n\nSpecify the minimum step used in the integration expressed in one\nof the: TIME_UNIT        = 0 LENGTH_UNIT      = 1\nCELL_LENGTH_UNIT = 2 Only valid when using adaptive integrators.\n"},
  {(char*)"GetMinimumIntegrationStep", PyvtkGenericStreamTracer_GetMinimumIntegrationStep, 1,
   (char*)"V.GetMinimumIntegrationStep() -> float\nC++: double GetMinimumIntegrationStep()\n\nSpecify the minimum step used in the integration expressed in one\nof the: TIME_UNIT        = 0 LENGTH_UNIT      = 1\nCELL_LENGTH_UNIT = 2 Only valid when using adaptive integrators.\n"},
  {(char*)"SetMinimumIntegrationStepUnitToTimeUnit", PyvtkGenericStreamTracer_SetMinimumIntegrationStepUnitToTimeUnit, 1,
   (char*)"V.SetMinimumIntegrationStepUnitToTimeUnit()\nC++: void SetMinimumIntegrationStepUnitToTimeUnit()\n\nSpecify the minimum step used in the integration expressed in one\nof the: TIME_UNIT        = 0 LENGTH_UNIT      = 1\nCELL_LENGTH_UNIT = 2 Only valid when using adaptive integrators.\n"},
  {(char*)"SetMinimumIntegrationStepUnitToLengthUnit", PyvtkGenericStreamTracer_SetMinimumIntegrationStepUnitToLengthUnit, 1,
   (char*)"V.SetMinimumIntegrationStepUnitToLengthUnit()\nC++: void SetMinimumIntegrationStepUnitToLengthUnit()\n\nSpecify the minimum step used in the integration expressed in one\nof the: TIME_UNIT        = 0 LENGTH_UNIT      = 1\nCELL_LENGTH_UNIT = 2 Only valid when using adaptive integrators.\n"},
  {(char*)"SetMinimumIntegrationStepUnitToCellLengthUnit", PyvtkGenericStreamTracer_SetMinimumIntegrationStepUnitToCellLengthUnit, 1,
   (char*)"V.SetMinimumIntegrationStepUnitToCellLengthUnit()\nC++: void SetMinimumIntegrationStepUnitToCellLengthUnit()\n\nSpecify the minimum step used in the integration expressed in one\nof the: TIME_UNIT        = 0 LENGTH_UNIT      = 1\nCELL_LENGTH_UNIT = 2 Only valid when using adaptive integrators.\n"},
  {(char*)"SetMaximumIntegrationStep", PyvtkGenericStreamTracer_SetMaximumIntegrationStep, 1,
   (char*)"V.SetMaximumIntegrationStep(int, float)\nC++: void SetMaximumIntegrationStep(int unit, double step)\nV.SetMaximumIntegrationStep(float)\nC++: void SetMaximumIntegrationStep(double step)\n\nSpecify the maximum step used in the integration expressed in one\nof the: TIME_UNIT        = 0 LENGTH_UNIT      = 1\nCELL_LENGTH_UNIT = 2 Only valid when using adaptive integrators.\n"},
  {(char*)"SetMaximumIntegrationStepUnit", PyvtkGenericStreamTracer_SetMaximumIntegrationStepUnit, 1,
   (char*)"V.SetMaximumIntegrationStepUnit(int)\nC++: void SetMaximumIntegrationStepUnit(int unit)\n\nSpecify the maximum step used in the integration expressed in one\nof the: TIME_UNIT        = 0 LENGTH_UNIT      = 1\nCELL_LENGTH_UNIT = 2 Only valid when using adaptive integrators.\n"},
  {(char*)"GetMaximumIntegrationStepUnit", PyvtkGenericStreamTracer_GetMaximumIntegrationStepUnit, 1,
   (char*)"V.GetMaximumIntegrationStepUnit() -> int\nC++: int GetMaximumIntegrationStepUnit()\n\nSpecify the maximum step used in the integration expressed in one\nof the: TIME_UNIT        = 0 LENGTH_UNIT      = 1\nCELL_LENGTH_UNIT = 2 Only valid when using adaptive integrators.\n"},
  {(char*)"GetMaximumIntegrationStep", PyvtkGenericStreamTracer_GetMaximumIntegrationStep, 1,
   (char*)"V.GetMaximumIntegrationStep() -> float\nC++: double GetMaximumIntegrationStep()\n\nSpecify the maximum step used in the integration expressed in one\nof the: TIME_UNIT        = 0 LENGTH_UNIT      = 1\nCELL_LENGTH_UNIT = 2 Only valid when using adaptive integrators.\n"},
  {(char*)"SetMaximumIntegrationStepUnitToTimeUnit", PyvtkGenericStreamTracer_SetMaximumIntegrationStepUnitToTimeUnit, 1,
   (char*)"V.SetMaximumIntegrationStepUnitToTimeUnit()\nC++: void SetMaximumIntegrationStepUnitToTimeUnit()\n\nSpecify the maximum step used in the integration expressed in one\nof the: TIME_UNIT        = 0 LENGTH_UNIT      = 1\nCELL_LENGTH_UNIT = 2 Only valid when using adaptive integrators.\n"},
  {(char*)"SetMaximumIntegrationStepUnitToLengthUnit", PyvtkGenericStreamTracer_SetMaximumIntegrationStepUnitToLengthUnit, 1,
   (char*)"V.SetMaximumIntegrationStepUnitToLengthUnit()\nC++: void SetMaximumIntegrationStepUnitToLengthUnit()\n\nSpecify the maximum step used in the integration expressed in one\nof the: TIME_UNIT        = 0 LENGTH_UNIT      = 1\nCELL_LENGTH_UNIT = 2 Only valid when using adaptive integrators.\n"},
  {(char*)"SetMaximumIntegrationStepUnitToCellLengthUnit", PyvtkGenericStreamTracer_SetMaximumIntegrationStepUnitToCellLengthUnit, 1,
   (char*)"V.SetMaximumIntegrationStepUnitToCellLengthUnit()\nC++: void SetMaximumIntegrationStepUnitToCellLengthUnit()\n\nSpecify the maximum step used in the integration expressed in one\nof the: TIME_UNIT        = 0 LENGTH_UNIT      = 1\nCELL_LENGTH_UNIT = 2 Only valid when using adaptive integrators.\n"},
  {(char*)"SetInitialIntegrationStep", PyvtkGenericStreamTracer_SetInitialIntegrationStep, 1,
   (char*)"V.SetInitialIntegrationStep(int, float)\nC++: void SetInitialIntegrationStep(int unit, double step)\nV.SetInitialIntegrationStep(float)\nC++: void SetInitialIntegrationStep(double step)\n\nSpecify the initial step used in the integration expressed in one\nof the: TIME_UNIT        = 0 LENGTH_UNIT      = 1\nCELL_LENGTH_UNIT = 2 If the integrator is not adaptive, this is\nthe actual step used.\n"},
  {(char*)"SetInitialIntegrationStepUnit", PyvtkGenericStreamTracer_SetInitialIntegrationStepUnit, 1,
   (char*)"V.SetInitialIntegrationStepUnit(int)\nC++: void SetInitialIntegrationStepUnit(int unit)\n\nSpecify the initial step used in the integration expressed in one\nof the: TIME_UNIT        = 0 LENGTH_UNIT      = 1\nCELL_LENGTH_UNIT = 2 If the integrator is not adaptive, this is\nthe actual step used.\n"},
  {(char*)"GetInitialIntegrationStepUnit", PyvtkGenericStreamTracer_GetInitialIntegrationStepUnit, 1,
   (char*)"V.GetInitialIntegrationStepUnit() -> int\nC++: int GetInitialIntegrationStepUnit()\n\nSpecify the initial step used in the integration expressed in one\nof the: TIME_UNIT        = 0 LENGTH_UNIT      = 1\nCELL_LENGTH_UNIT = 2 If the integrator is not adaptive, this is\nthe actual step used.\n"},
  {(char*)"GetInitialIntegrationStep", PyvtkGenericStreamTracer_GetInitialIntegrationStep, 1,
   (char*)"V.GetInitialIntegrationStep() -> float\nC++: double GetInitialIntegrationStep()\n\nSpecify the initial step used in the integration expressed in one\nof the: TIME_UNIT        = 0 LENGTH_UNIT      = 1\nCELL_LENGTH_UNIT = 2 If the integrator is not adaptive, this is\nthe actual step used.\n"},
  {(char*)"SetInitialIntegrationStepUnitToTimeUnit", PyvtkGenericStreamTracer_SetInitialIntegrationStepUnitToTimeUnit, 1,
   (char*)"V.SetInitialIntegrationStepUnitToTimeUnit()\nC++: void SetInitialIntegrationStepUnitToTimeUnit()\n\nSpecify the initial step used in the integration expressed in one\nof the: TIME_UNIT        = 0 LENGTH_UNIT      = 1\nCELL_LENGTH_UNIT = 2 If the integrator is not adaptive, this is\nthe actual step used.\n"},
  {(char*)"SetInitialIntegrationStepUnitToLengthUnit", PyvtkGenericStreamTracer_SetInitialIntegrationStepUnitToLengthUnit, 1,
   (char*)"V.SetInitialIntegrationStepUnitToLengthUnit()\nC++: void SetInitialIntegrationStepUnitToLengthUnit()\n\nSpecify the initial step used in the integration expressed in one\nof the: TIME_UNIT        = 0 LENGTH_UNIT      = 1\nCELL_LENGTH_UNIT = 2 If the integrator is not adaptive, this is\nthe actual step used.\n"},
  {(char*)"SetInitialIntegrationStepUnitToCellLengthUnit", PyvtkGenericStreamTracer_SetInitialIntegrationStepUnitToCellLengthUnit, 1,
   (char*)"V.SetInitialIntegrationStepUnitToCellLengthUnit()\nC++: void SetInitialIntegrationStepUnitToCellLengthUnit()\n\nSpecify the initial step used in the integration expressed in one\nof the: TIME_UNIT        = 0 LENGTH_UNIT      = 1\nCELL_LENGTH_UNIT = 2 If the integrator is not adaptive, this is\nthe actual step used.\n"},
  {(char*)"SetMaximumError", PyvtkGenericStreamTracer_SetMaximumError, 1,
   (char*)"V.SetMaximumError(float)\nC++: void SetMaximumError(double a)\n\n"},
  {(char*)"GetMaximumError", PyvtkGenericStreamTracer_GetMaximumError, 1,
   (char*)"V.GetMaximumError() -> float\nC++: double GetMaximumError()\n\n"},
  {(char*)"SetMaximumNumberOfSteps", PyvtkGenericStreamTracer_SetMaximumNumberOfSteps, 1,
   (char*)"V.SetMaximumNumberOfSteps(int)\nC++: void SetMaximumNumberOfSteps(vtkIdType a)\n\n"},
  {(char*)"GetMaximumNumberOfSteps", PyvtkGenericStreamTracer_GetMaximumNumberOfSteps, 1,
   (char*)"V.GetMaximumNumberOfSteps() -> int\nC++: vtkIdType GetMaximumNumberOfSteps()\n\n"},
  {(char*)"SetTerminalSpeed", PyvtkGenericStreamTracer_SetTerminalSpeed, 1,
   (char*)"V.SetTerminalSpeed(float)\nC++: void SetTerminalSpeed(double a)\n\n"},
  {(char*)"GetTerminalSpeed", PyvtkGenericStreamTracer_GetTerminalSpeed, 1,
   (char*)"V.GetTerminalSpeed() -> float\nC++: double GetTerminalSpeed()\n\n"},
  {(char*)"SetIntegrationDirection", PyvtkGenericStreamTracer_SetIntegrationDirection, 1,
   (char*)"V.SetIntegrationDirection(int)\nC++: void SetIntegrationDirection(int)\n\nSpecify whether the streamtrace will be generated in the upstream\nor downstream direction.\n"},
  {(char*)"GetIntegrationDirectionMinValue", PyvtkGenericStreamTracer_GetIntegrationDirectionMinValue, 1,
   (char*)"V.GetIntegrationDirectionMinValue() -> int\nC++: int GetIntegrationDirectionMinValue()\n\nSpecify whether the streamtrace will be generated in the upstream\nor downstream direction.\n"},
  {(char*)"GetIntegrationDirectionMaxValue", PyvtkGenericStreamTracer_GetIntegrationDirectionMaxValue, 1,
   (char*)"V.GetIntegrationDirectionMaxValue() -> int\nC++: int GetIntegrationDirectionMaxValue()\n\nSpecify whether the streamtrace will be generated in the upstream\nor downstream direction.\n"},
  {(char*)"GetIntegrationDirection", PyvtkGenericStreamTracer_GetIntegrationDirection, 1,
   (char*)"V.GetIntegrationDirection() -> int\nC++: int GetIntegrationDirection()\n\nSpecify whether the streamtrace will be generated in the upstream\nor downstream direction.\n"},
  {(char*)"SetIntegrationDirectionToForward", PyvtkGenericStreamTracer_SetIntegrationDirectionToForward, 1,
   (char*)"V.SetIntegrationDirectionToForward()\nC++: void SetIntegrationDirectionToForward()\n\nSpecify whether the streamtrace will be generated in the upstream\nor downstream direction.\n"},
  {(char*)"SetIntegrationDirectionToBackward", PyvtkGenericStreamTracer_SetIntegrationDirectionToBackward, 1,
   (char*)"V.SetIntegrationDirectionToBackward()\nC++: void SetIntegrationDirectionToBackward()\n\nSpecify whether the streamtrace will be generated in the upstream\nor downstream direction.\n"},
  {(char*)"SetIntegrationDirectionToBoth", PyvtkGenericStreamTracer_SetIntegrationDirectionToBoth, 1,
   (char*)"V.SetIntegrationDirectionToBoth()\nC++: void SetIntegrationDirectionToBoth()\n\nSpecify whether the streamtrace will be generated in the upstream\nor downstream direction.\n"},
  {(char*)"SetComputeVorticity", PyvtkGenericStreamTracer_SetComputeVorticity, 1,
   (char*)"V.SetComputeVorticity(int)\nC++: void SetComputeVorticity(int a)\n\n"},
  {(char*)"GetComputeVorticity", PyvtkGenericStreamTracer_GetComputeVorticity, 1,
   (char*)"V.GetComputeVorticity() -> int\nC++: int GetComputeVorticity()\n\n"},
  {(char*)"ComputeVorticityOn", PyvtkGenericStreamTracer_ComputeVorticityOn, 1,
   (char*)"V.ComputeVorticityOn()\nC++: void ComputeVorticityOn()\n\n"},
  {(char*)"ComputeVorticityOff", PyvtkGenericStreamTracer_ComputeVorticityOff, 1,
   (char*)"V.ComputeVorticityOff()\nC++: void ComputeVorticityOff()\n\n"},
  {(char*)"SetRotationScale", PyvtkGenericStreamTracer_SetRotationScale, 1,
   (char*)"V.SetRotationScale(float)\nC++: void SetRotationScale(double a)\n\n"},
  {(char*)"GetRotationScale", PyvtkGenericStreamTracer_GetRotationScale, 1,
   (char*)"V.GetRotationScale() -> float\nC++: double GetRotationScale()\n\n"},
  {(char*)"GetInputVectorsSelection", PyvtkGenericStreamTracer_GetInputVectorsSelection, 1,
   (char*)"V.GetInputVectorsSelection() -> string\nC++: char *GetInputVectorsSelection()\n\nIf you want to generate traces using an arbitrary vector array,\nthen set its name here. By default this in NULL and the filter\nwill use the active vector array.\n"},
  {(char*)"SelectInputVectors", PyvtkGenericStreamTracer_SelectInputVectors, 1,
   (char*)"V.SelectInputVectors(string)\nC++: void SelectInputVectors(const char *fieldName)\n\nIf you want to generate traces using an arbitrary vector array,\nthen set its name here. By default this in NULL and the filter\nwill use the active vector array.\n"},
  {(char*)"AddInput", PyvtkGenericStreamTracer_AddInput, 1,
   (char*)"V.AddInput(vtkGenericDataSet)\nC++: void AddInput(vtkGenericDataSet *in)\n\nAdd a dataset to the list inputs\n"},
  {(char*)"SetInterpolatorPrototype", PyvtkGenericStreamTracer_SetInterpolatorPrototype, 1,
   (char*)"V.SetInterpolatorPrototype(vtkGenericInterpolatedVelocityField)\nC++: void SetInterpolatorPrototype(\n    vtkGenericInterpolatedVelocityField *ivf)\n\nThe object used to interpolate the velocity field during\nintegration is of the same class as this prototype.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGenericStreamTracer_StaticNew()
{
  return vtkGenericStreamTracer::New();
}

PyObject *PyVTKClass_vtkGenericStreamTracerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGenericStreamTracer_StaticNew,
    PyvtkGenericStreamTracer_Methods,
    "vtkGenericStreamTracer", modulename,
    NULL, NULL,
    PyvtkGenericStreamTracer_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"TIME_UNIT", o) != 0)
      {
      Py_DECREF(o);
      }

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
    if (o && PyDict_SetItemString(d, (char *)"OUT_OF_TIME", o) != 0)
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

    }

  return cls;
}

const char **PyvtkGenericStreamTracer_Doc()
{
  static const char *docstring[] = {
    "vtkGenericStreamTracer - Streamline generator\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkGenericStreamTracer is a filter that integrates a vector field to\ngenerate streamlines. The integration is performed using the provided\nintegrator. The default is second order Runge-Kutta.\n\nvtkGenericStreamTracer generate polylines as output. Each cell\n(polyline) corresponds to one streamline. The values associated with\neach streamline are stored in the cell data whereas the values\nassociated w",
    "ith points are stored in point data.\n\nNote that vtkGenericStreamTracer can integrate both forward and\nbackward. The length of the streamline is controlled by specifying\neither a maximum value in the units of length, cell length or elapsed\ntime (the elapsed time is the time each particle would have traveled\nif flow were steady). Otherwise, the integration terminates after\nexiting the dataset or if ",
    "the particle speed is reduced to a value\nless than the terminal speed or when a maximum number of steps is\nreached. The reason for the termination is stored in a cell array\nnamed ReasonForTermination.\n\nThe quality of integration can be controlled by setting integration\nstep (InitialIntegrationStep) and in the case of adaptive solvers the\nmaximum error, the minimum integration step and the maximum\n",
    "integration step. All of these can have units of length, cell length\nor elapsed time.\n\nThe integration time, vorticity, rotation and angular velocity are\nstored in point arrays named \"IntegrationTime\", \"Vorticity\",\n\"Rotation\" and \"AngularVelocity\" respectively (vorticity, rotation\nand angular velocity are computed only when ComputeVorticity is on).\nAll point attributes in the source data set are i",
    "nterpolated on the\nnew streamline points.\n\nvtkGenericStreamTracer integrates through any type of dataset. As a\nresult, if the dataset contains 2D cells such as polygons or\ntriangles, the integration is constrained to lie on the surface\ndefined by the 2D cells.\n\nThe starting point of traces may be defined in two different ways.\nStarting from global x-y-z \"position\" allows you to start a single\ntrac",
    "e at a specified x-y-z coordinate. If you specify a source\nobject, a trace will be generated for each point in the source that\nis inside the dataset.\n\nSee Also:\n\nvtkRibbonFilter vtkRuledSurfaceFilter vtkInitialValueProblemSolver\nvtkRungeKutta2 vtkRungeKutta4 vtkRungeKutta45\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGenericStreamTracer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGenericStreamTracerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGenericStreamTracer", o) != 0)
    {
    Py_DECREF(o);
    }

}

