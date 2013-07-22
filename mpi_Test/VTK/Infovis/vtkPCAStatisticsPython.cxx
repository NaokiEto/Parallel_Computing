// python wrapper for vtkPCAStatistics
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
#include "vtkVariant.h"
#include "vtkPCAStatistics.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPCAStatistics(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPCAStatistics(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPCAStatisticsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPCAStatisticsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkMultiCorrelativeStatisticsNew
extern "C" { PyObject *PyVTKClass_vtkMultiCorrelativeStatisticsNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiCorrelativeStatisticsNew
#endif

static const char **PyvtkPCAStatistics_Doc();


static PyObject *
PyvtkPCAStatistics_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

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
      tempr = op->vtkPCAStatistics::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCAStatistics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

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
      tempr = op->vtkPCAStatistics::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCAStatistics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  vtkPCAStatistics *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPCAStatistics::NewInstance();
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
PyvtkPCAStatistics_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPCAStatistics *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPCAStatistics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCAStatistics_SetNormalizationScheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalizationScheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNormalizationScheme(temp0);
      }
    else
      {
      op->vtkPCAStatistics::SetNormalizationScheme(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPCAStatistics_GetNormalizationScheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalizationScheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNormalizationScheme();
      }
    else
      {
      tempr = op->vtkPCAStatistics::GetNormalizationScheme();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCAStatistics_SetNormalizationSchemeByName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalizationSchemeByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNormalizationSchemeByName(temp0);
      }
    else
      {
      op->vtkPCAStatistics::SetNormalizationSchemeByName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPCAStatistics_GetNormalizationSchemeName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalizationSchemeName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNormalizationSchemeName(temp0);
      }
    else
      {
      tempr = op->vtkPCAStatistics::GetNormalizationSchemeName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCAStatistics_GetSpecifiedNormalization(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpecifiedNormalization");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  vtkTable *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSpecifiedNormalization();
      }
    else
      {
      tempr = op->vtkPCAStatistics::GetSpecifiedNormalization();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCAStatistics_SetSpecifiedNormalization(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecifiedNormalization");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  vtkTable *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTable"))
    {
    if (ap.IsBound())
      {
      op->SetSpecifiedNormalization(temp0);
      }
    else
      {
      op->vtkPCAStatistics::SetSpecifiedNormalization(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPCAStatistics_GetEigenvalues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEigenvalues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  int temp0;
  vtkDoubleArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDoubleArray"))
    {
    if (ap.IsBound())
      {
      op->GetEigenvalues(temp0, temp1);
      }
    else
      {
      op->vtkPCAStatistics::GetEigenvalues(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPCAStatistics_GetEigenvalues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEigenvalues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  vtkDoubleArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDoubleArray"))
    {
    if (ap.IsBound())
      {
      op->GetEigenvalues(temp0);
      }
    else
      {
      op->vtkPCAStatistics::GetEigenvalues(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPCAStatistics_GetEigenvalues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkPCAStatistics_GetEigenvalues_s1(self, args);
    case 1:
      return PyvtkPCAStatistics_GetEigenvalues_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetEigenvalues");
  return NULL;
}



static PyObject *
PyvtkPCAStatistics_GetEigenvalue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEigenvalue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  int temp0;
  int temp1;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEigenvalue(temp0, temp1);
      }
    else
      {
      tempr = op->vtkPCAStatistics::GetEigenvalue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPCAStatistics_GetEigenvalue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEigenvalue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  int temp0;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEigenvalue(temp0);
      }
    else
      {
      tempr = op->vtkPCAStatistics::GetEigenvalue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPCAStatistics_GetEigenvalue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkPCAStatistics_GetEigenvalue_s1(self, args);
    case 1:
      return PyvtkPCAStatistics_GetEigenvalue_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetEigenvalue");
  return NULL;
}



static PyObject *
PyvtkPCAStatistics_GetEigenvectors_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEigenvectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  int temp0;
  vtkDoubleArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDoubleArray"))
    {
    if (ap.IsBound())
      {
      op->GetEigenvectors(temp0, temp1);
      }
    else
      {
      op->vtkPCAStatistics::GetEigenvectors(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPCAStatistics_GetEigenvectors_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEigenvectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  vtkDoubleArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDoubleArray"))
    {
    if (ap.IsBound())
      {
      op->GetEigenvectors(temp0);
      }
    else
      {
      op->vtkPCAStatistics::GetEigenvectors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPCAStatistics_GetEigenvectors(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkPCAStatistics_GetEigenvectors_s1(self, args);
    case 1:
      return PyvtkPCAStatistics_GetEigenvectors_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetEigenvectors");
  return NULL;
}



static PyObject *
PyvtkPCAStatistics_GetEigenvector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEigenvector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  int temp0;
  vtkDoubleArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDoubleArray"))
    {
    if (ap.IsBound())
      {
      op->GetEigenvector(temp0, temp1);
      }
    else
      {
      op->vtkPCAStatistics::GetEigenvector(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPCAStatistics_GetEigenvector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEigenvector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  int temp0;
  int temp1;
  vtkDoubleArray *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkDoubleArray"))
    {
    if (ap.IsBound())
      {
      op->GetEigenvector(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPCAStatistics::GetEigenvector(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPCAStatistics_GetEigenvector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkPCAStatistics_GetEigenvector_s1(self, args);
    case 3:
      return PyvtkPCAStatistics_GetEigenvector_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetEigenvector");
  return NULL;
}



static PyObject *
PyvtkPCAStatistics_SetBasisScheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBasisScheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBasisScheme(temp0);
      }
    else
      {
      op->vtkPCAStatistics::SetBasisScheme(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPCAStatistics_GetBasisScheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBasisScheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBasisScheme();
      }
    else
      {
      tempr = op->vtkPCAStatistics::GetBasisScheme();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCAStatistics_GetBasisSchemeName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBasisSchemeName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBasisSchemeName(temp0);
      }
    else
      {
      tempr = op->vtkPCAStatistics::GetBasisSchemeName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCAStatistics_SetBasisSchemeByName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBasisSchemeByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBasisSchemeByName(temp0);
      }
    else
      {
      op->vtkPCAStatistics::SetBasisSchemeByName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPCAStatistics_SetFixedBasisSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFixedBasisSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFixedBasisSize(temp0);
      }
    else
      {
      op->vtkPCAStatistics::SetFixedBasisSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPCAStatistics_GetFixedBasisSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFixedBasisSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFixedBasisSize();
      }
    else
      {
      tempr = op->vtkPCAStatistics::GetFixedBasisSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCAStatistics_SetFixedBasisEnergy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFixedBasisEnergy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFixedBasisEnergy(temp0);
      }
    else
      {
      op->vtkPCAStatistics::SetFixedBasisEnergy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPCAStatistics_GetFixedBasisEnergyMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFixedBasisEnergyMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFixedBasisEnergyMinValue();
      }
    else
      {
      tempr = op->vtkPCAStatistics::GetFixedBasisEnergyMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCAStatistics_GetFixedBasisEnergyMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFixedBasisEnergyMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFixedBasisEnergyMaxValue();
      }
    else
      {
      tempr = op->vtkPCAStatistics::GetFixedBasisEnergyMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCAStatistics_GetFixedBasisEnergy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFixedBasisEnergy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFixedBasisEnergy();
      }
    else
      {
      tempr = op->vtkPCAStatistics::GetFixedBasisEnergy();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCAStatistics_SetParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

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
      tempr = op->vtkPCAStatistics::SetParameter(temp0, temp1, *temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj2);

  return result;
}

static PyMethodDef PyvtkPCAStatistics_Methods[] = {
  {(char*)"GetClassName", PyvtkPCAStatistics_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPCAStatistics_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPCAStatistics_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPCAStatistics\nC++: vtkPCAStatistics *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPCAStatistics_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPCAStatistics\nC++: vtkPCAStatistics *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetNormalizationScheme", PyvtkPCAStatistics_SetNormalizationScheme, 1,
   (char*)"V.SetNormalizationScheme(int)\nC++: void SetNormalizationScheme(int a)\n\nThis determines how (or if) the covariance matrix cov is\nnormalized before PCA.\n\nWhen set to NONE, no normalization is performed. This is the\ndefault.\n\nWhen set to TRIANGLE_SPECIFIED, each entry cov(i,j) is divided by\nV(i,j). The list V of normalization factors must be set using the\nSetNormalization method before the filter is executed.\n\nWhen set to DIAGONAL_SPECIFIED, each entry cov(i,j) is divided by\nsqrt(V(i)*V(j)). The list V of normalization factors must be set\nusing the SetNormalization method before the filter is executed.\n\nWhen set to DIAGONAL_VARIANCE, each entry cov(i,j) is divided by\nsqrt(cov(i,i)*cov(j,j)). Warning: Although this is accepted\npractice in some fields, some people think you should not turn\nthis option on unless there is a good physically-based reason for\ndoing so. Much better instead to determine how component\nmagnitudes should be compared using physical reasoning and use\nDIAGONAL_SPECIFIED, TRIANGLE_SPECIFIED, or perform some\npre-processing to shift and scale input data columns\nappropriately than to expect magical results from a shady\nnormalization hack.\n"},
  {(char*)"GetNormalizationScheme", PyvtkPCAStatistics_GetNormalizationScheme, 1,
   (char*)"V.GetNormalizationScheme() -> int\nC++: int GetNormalizationScheme()\n\nThis determines how (or if) the covariance matrix cov is\nnormalized before PCA.\n\nWhen set to NONE, no normalization is performed. This is the\ndefault.\n\nWhen set to TRIANGLE_SPECIFIED, each entry cov(i,j) is divided by\nV(i,j). The list V of normalization factors must be set using the\nSetNormalization method before the filter is executed.\n\nWhen set to DIAGONAL_SPECIFIED, each entry cov(i,j) is divided by\nsqrt(V(i)*V(j)). The list V of normalization factors must be set\nusing the SetNormalization method before the filter is executed.\n\nWhen set to DIAGONAL_VARIANCE, each entry cov(i,j) is divided by\nsqrt(cov(i,i)*cov(j,j)). Warning: Although this is accepted\npractice in some fields, some people think you should not turn\nthis option on unless there is a good physically-based reason for\ndoing so. Much better instead to determine how component\nmagnitudes should be compared using physical reasoning and use\nDIAGONAL_SPECIFIED, TRIANGLE_SPECIFIED, or perform some\npre-processing to shift and scale input data columns\nappropriately than to expect magical results from a shady\nnormalization hack.\n"},
  {(char*)"SetNormalizationSchemeByName", PyvtkPCAStatistics_SetNormalizationSchemeByName, 1,
   (char*)"V.SetNormalizationSchemeByName(string)\nC++: virtual void SetNormalizationSchemeByName(const char *sname)\n\nThis determines how (or if) the covariance matrix cov is\nnormalized before PCA.\n\nWhen set to NONE, no normalization is performed. This is the\ndefault.\n\nWhen set to TRIANGLE_SPECIFIED, each entry cov(i,j) is divided by\nV(i,j). The list V of normalization factors must be set using the\nSetNormalization method before the filter is executed.\n\nWhen set to DIAGONAL_SPECIFIED, each entry cov(i,j) is divided by\nsqrt(V(i)*V(j)). The list V of normalization factors must be set\nusing the SetNormalization method before the filter is executed.\n\nWhen set to DIAGONAL_VARIANCE, each entry cov(i,j) is divided by\nsqrt(cov(i,i)*cov(j,j)). Warning: Although this is accepted\npractice in some fields, some people think you should not turn\nthis option on unless there is a good physically-based reason for\ndoing so. Much better instead to determine how component\nmagnitudes should be compared using physical reasoning and use\nDIAGONAL_SPECIFIED, TRIANGLE_SPECIFIED, or perform some\npre-processing to shift and scale input data columns\nappropriately than to expect magical results from a shady\nnormalization hack.\n"},
  {(char*)"GetNormalizationSchemeName", PyvtkPCAStatistics_GetNormalizationSchemeName, 1,
   (char*)"V.GetNormalizationSchemeName(int) -> string\nC++: virtual const char *GetNormalizationSchemeName(int scheme)\n\nThis determines how (or if) the covariance matrix cov is\nnormalized before PCA.\n\nWhen set to NONE, no normalization is performed. This is the\ndefault.\n\nWhen set to TRIANGLE_SPECIFIED, each entry cov(i,j) is divided by\nV(i,j). The list V of normalization factors must be set using the\nSetNormalization method before the filter is executed.\n\nWhen set to DIAGONAL_SPECIFIED, each entry cov(i,j) is divided by\nsqrt(V(i)*V(j)). The list V of normalization factors must be set\nusing the SetNormalization method before the filter is executed.\n\nWhen set to DIAGONAL_VARIANCE, each entry cov(i,j) is divided by\nsqrt(cov(i,i)*cov(j,j)). Warning: Although this is accepted\npractice in some fields, some people think you should not turn\nthis option on unless there is a good physically-based reason for\ndoing so. Much better instead to determine how component\nmagnitudes should be compared using physical reasoning and use\nDIAGONAL_SPECIFIED, TRIANGLE_SPECIFIED, or perform some\npre-processing to shift and scale input data columns\nappropriately than to expect magical results from a shady\nnormalization hack.\n"},
  {(char*)"GetSpecifiedNormalization", PyvtkPCAStatistics_GetSpecifiedNormalization, 1,
   (char*)"V.GetSpecifiedNormalization() -> vtkTable\nC++: virtual vtkTable *GetSpecifiedNormalization()\n\nThese methods allow you to set/get values used to normalize the\ncovariance matrix before PCA. The normalization values apply to\nall requests, so you do not specify a single vector but a\n3-column table.\n\nThe first two columns contain the names of columns from input 0\nand the third column contains the value to normalize the\ncorresponding entry in the covariance matrix. The table must\nalways have 3 columns even when the NormalizationScheme is\nDIAGONAL_SPECIFIED. When only diagonal entries are to be used,\nonly table rows where the first two columns are identical to one\nanother will be employed. If there are multiple rows specifying\ndifferent values for the same pair of columns, the entry nearest\nthe bottom of the table takes precedence.\n\nThese functions are actually convenience methods that set/get the\nthird input of the filter. Because the table is the third input,\nyou may use other filters to produce a table of normalizations\nand have the pipeline take care of updates.\n\nAny missing entries will be set to 1.0 and a warning issued. An\nerror will occur if the third input to the filter is not set and\nthe NormalizationScheme is DIAGONAL_SPECIFIED or\nTRIANGLE_SPECIFIED.\n"},
  {(char*)"SetSpecifiedNormalization", PyvtkPCAStatistics_SetSpecifiedNormalization, 1,
   (char*)"V.SetSpecifiedNormalization(vtkTable)\nC++: virtual void SetSpecifiedNormalization(vtkTable *)\n\nThese methods allow you to set/get values used to normalize the\ncovariance matrix before PCA. The normalization values apply to\nall requests, so you do not specify a single vector but a\n3-column table.\n\nThe first two columns contain the names of columns from input 0\nand the third column contains the value to normalize the\ncorresponding entry in the covariance matrix. The table must\nalways have 3 columns even when the NormalizationScheme is\nDIAGONAL_SPECIFIED. When only diagonal entries are to be used,\nonly table rows where the first two columns are identical to one\nanother will be employed. If there are multiple rows specifying\ndifferent values for the same pair of columns, the entry nearest\nthe bottom of the table takes precedence.\n\nThese functions are actually convenience methods that set/get the\nthird input of the filter. Because the table is the third input,\nyou may use other filters to produce a table of normalizations\nand have the pipeline take care of updates.\n\nAny missing entries will be set to 1.0 and a warning issued. An\nerror will occur if the third input to the filter is not set and\nthe NormalizationScheme is DIAGONAL_SPECIFIED or\nTRIANGLE_SPECIFIED.\n"},
  {(char*)"GetEigenvalues", PyvtkPCAStatistics_GetEigenvalues, 1,
   (char*)"V.GetEigenvalues(int, vtkDoubleArray)\nC++: void GetEigenvalues(int request, vtkDoubleArray *)\nV.GetEigenvalues(vtkDoubleArray)\nC++: void GetEigenvalues(vtkDoubleArray *)\n\nGet the eigenvalues. This function: void GetEigenvalues(int\nrequest, int i, vtkDoubleArray*); does all of the work. The other\nfunctions simply call this function with the appropriate\nparameters. These functions are not valid unless Update() has\nbeen called and the Derive option is turned on.\n"},
  {(char*)"GetEigenvalue", PyvtkPCAStatistics_GetEigenvalue, 1,
   (char*)"V.GetEigenvalue(int, int) -> float\nC++: double GetEigenvalue(int request, int i)\nV.GetEigenvalue(int) -> float\nC++: double GetEigenvalue(int i)\n\nGet the eigenvalues. This function: void GetEigenvalues(int\nrequest, int i, vtkDoubleArray*); does all of the work. The other\nfunctions simply call this function with the appropriate\nparameters. These functions are not valid unless Update() has\nbeen called and the Derive option is turned on.\n"},
  {(char*)"GetEigenvectors", PyvtkPCAStatistics_GetEigenvectors, 1,
   (char*)"V.GetEigenvectors(int, vtkDoubleArray)\nC++: void GetEigenvectors(int request,\n    vtkDoubleArray *eigenvectors)\nV.GetEigenvectors(vtkDoubleArray)\nC++: void GetEigenvectors(vtkDoubleArray *eigenvectors)\n\nGet the eigenvectors. This function: void GetEigenvectors(int\nrequest, vtkDoubleArray* eigenvectors) does all of the work. The\nother functions are convenience functions that call this function\nwith default arguments. These functions are not valid unless\nUpdate() has been called and the Derive option is turned on.\n"},
  {(char*)"GetEigenvector", PyvtkPCAStatistics_GetEigenvector, 1,
   (char*)"V.GetEigenvector(int, vtkDoubleArray)\nC++: void GetEigenvector(int i, vtkDoubleArray *eigenvector)\nV.GetEigenvector(int, int, vtkDoubleArray)\nC++: void GetEigenvector(int request, int i,\n    vtkDoubleArray *eigenvector)\n\nGet the eigenvectors. This function: void GetEigenvectors(int\nrequest, vtkDoubleArray* eigenvectors) does all of the work. The\nother functions are convenience functions that call this function\nwith default arguments. These functions are not valid unless\nUpdate() has been called and the Derive option is turned on.\n"},
  {(char*)"SetBasisScheme", PyvtkPCAStatistics_SetBasisScheme, 1,
   (char*)"V.SetBasisScheme(int)\nC++: void SetBasisScheme(int a)\n\nThis variable controls the dimensionality of output tuples in\nAssess mode. Consider the case where you have requested a PCA on\nD columns.\n\nWhen set to vtkPCAStatistics::FULL_BASIS, the entire set of basis\nvectors is used to derive new coordinates for each tuple being\nassessed. In this mode, you are guaranteed to have output tuples\nof the same dimension as the input tuples. (That dimension is D,\nso there will be D additional columns added to the table for the\nrequest.)\n\nWhen set to vtkPCAStatistics::FIXED_BASIS_SIZE, only the first N\nbasis vectors are used to derive new coordinates for each tuple\nbeing assessed. In this mode, you are guaranteed to have output\ntuples of dimension min(N,D). You must set N prior to assessing\ndata using the SetFixedBasisSize() method. When N < D, this turns\nthe PCA into a projection (instead of change of basis).\n\nWhen set to vtkPCAStatistics::FIXED_BASIS_ENERGY, the number of\nbasis vectors used to derive new coordinates for each tuple will\nbe the minimum number of columns N that satisfy\\[ \n\\frac{\\sum_{i=1}^{N} \\lambda_i}{\\sum_{i=1}^{D} \\lambda_i} < T\\]\nYou must set T prior to assessing data using the\nSetFixedBasisEnergy() method. When T < 1, this turns the PCA into\na projection (instead of change of basis).\n\nBy default BasisScheme is set to vtkPCAStatistics::FULL_BASIS.\n"},
  {(char*)"GetBasisScheme", PyvtkPCAStatistics_GetBasisScheme, 1,
   (char*)"V.GetBasisScheme() -> int\nC++: int GetBasisScheme()\n\nThis variable controls the dimensionality of output tuples in\nAssess mode. Consider the case where you have requested a PCA on\nD columns.\n\nWhen set to vtkPCAStatistics::FULL_BASIS, the entire set of basis\nvectors is used to derive new coordinates for each tuple being\nassessed. In this mode, you are guaranteed to have output tuples\nof the same dimension as the input tuples. (That dimension is D,\nso there will be D additional columns added to the table for the\nrequest.)\n\nWhen set to vtkPCAStatistics::FIXED_BASIS_SIZE, only the first N\nbasis vectors are used to derive new coordinates for each tuple\nbeing assessed. In this mode, you are guaranteed to have output\ntuples of dimension min(N,D). You must set N prior to assessing\ndata using the SetFixedBasisSize() method. When N < D, this turns\nthe PCA into a projection (instead of change of basis).\n\nWhen set to vtkPCAStatistics::FIXED_BASIS_ENERGY, the number of\nbasis vectors used to derive new coordinates for each tuple will\nbe the minimum number of columns N that satisfy\\[ \n\\frac{\\sum_{i=1}^{N} \\lambda_i}{\\sum_{i=1}^{D} \\lambda_i} < T\\]\nYou must set T prior to assessing data using the\nSetFixedBasisEnergy() method. When T < 1, this turns the PCA into\na projection (instead of change of basis).\n\nBy default BasisScheme is set to vtkPCAStatistics::FULL_BASIS.\n"},
  {(char*)"GetBasisSchemeName", PyvtkPCAStatistics_GetBasisSchemeName, 1,
   (char*)"V.GetBasisSchemeName(int) -> string\nC++: virtual const char *GetBasisSchemeName(int schemeIndex)\n\nThis variable controls the dimensionality of output tuples in\nAssess mode. Consider the case where you have requested a PCA on\nD columns.\n\nWhen set to vtkPCAStatistics::FULL_BASIS, the entire set of basis\nvectors is used to derive new coordinates for each tuple being\nassessed. In this mode, you are guaranteed to have output tuples\nof the same dimension as the input tuples. (That dimension is D,\nso there will be D additional columns added to the table for the\nrequest.)\n\nWhen set to vtkPCAStatistics::FIXED_BASIS_SIZE, only the first N\nbasis vectors are used to derive new coordinates for each tuple\nbeing assessed. In this mode, you are guaranteed to have output\ntuples of dimension min(N,D). You must set N prior to assessing\ndata using the SetFixedBasisSize() method. When N < D, this turns\nthe PCA into a projection (instead of change of basis).\n\nWhen set to vtkPCAStatistics::FIXED_BASIS_ENERGY, the number of\nbasis vectors used to derive new coordinates for each tuple will\nbe the minimum number of columns N that satisfy\\[ \n\\frac{\\sum_{i=1}^{N} \\lambda_i}{\\sum_{i=1}^{D} \\lambda_i} < T\\]\nYou must set T prior to assessing data using the\nSetFixedBasisEnergy() method. When T < 1, this turns the PCA into\na projection (instead of change of basis).\n\nBy default BasisScheme is set to vtkPCAStatistics::FULL_BASIS.\n"},
  {(char*)"SetBasisSchemeByName", PyvtkPCAStatistics_SetBasisSchemeByName, 1,
   (char*)"V.SetBasisSchemeByName(string)\nC++: virtual void SetBasisSchemeByName(const char *schemeName)\n\nThis variable controls the dimensionality of output tuples in\nAssess mode. Consider the case where you have requested a PCA on\nD columns.\n\nWhen set to vtkPCAStatistics::FULL_BASIS, the entire set of basis\nvectors is used to derive new coordinates for each tuple being\nassessed. In this mode, you are guaranteed to have output tuples\nof the same dimension as the input tuples. (That dimension is D,\nso there will be D additional columns added to the table for the\nrequest.)\n\nWhen set to vtkPCAStatistics::FIXED_BASIS_SIZE, only the first N\nbasis vectors are used to derive new coordinates for each tuple\nbeing assessed. In this mode, you are guaranteed to have output\ntuples of dimension min(N,D). You must set N prior to assessing\ndata using the SetFixedBasisSize() method. When N < D, this turns\nthe PCA into a projection (instead of change of basis).\n\nWhen set to vtkPCAStatistics::FIXED_BASIS_ENERGY, the number of\nbasis vectors used to derive new coordinates for each tuple will\nbe the minimum number of columns N that satisfy\\[ \n\\frac{\\sum_{i=1}^{N} \\lambda_i}{\\sum_{i=1}^{D} \\lambda_i} < T\\]\nYou must set T prior to assessing data using the\nSetFixedBasisEnergy() method. When T < 1, this turns the PCA into\na projection (instead of change of basis).\n\nBy default BasisScheme is set to vtkPCAStatistics::FULL_BASIS.\n"},
  {(char*)"SetFixedBasisSize", PyvtkPCAStatistics_SetFixedBasisSize, 1,
   (char*)"V.SetFixedBasisSize(int)\nC++: void SetFixedBasisSize(int a)\n\nThe number of basis vectors to use. See SetBasisScheme() for more\ninformation. When FixedBasisSize <= 0 (the default), the fixed\nbasis size scheme is equivalent to the full basis scheme.\n"},
  {(char*)"GetFixedBasisSize", PyvtkPCAStatistics_GetFixedBasisSize, 1,
   (char*)"V.GetFixedBasisSize() -> int\nC++: int GetFixedBasisSize()\n\nThe number of basis vectors to use. See SetBasisScheme() for more\ninformation. When FixedBasisSize <= 0 (the default), the fixed\nbasis size scheme is equivalent to the full basis scheme.\n"},
  {(char*)"SetFixedBasisEnergy", PyvtkPCAStatistics_SetFixedBasisEnergy, 1,
   (char*)"V.SetFixedBasisEnergy(float)\nC++: void SetFixedBasisEnergy(double)\n\nThe minimum energy the new basis should use, as a fraction. See\nSetBasisScheme() for more information. When FixedBasisEnergy >= 1\n(the default), the fixed basis energy scheme is equivalent to the\nfull basis scheme.\n"},
  {(char*)"GetFixedBasisEnergyMinValue", PyvtkPCAStatistics_GetFixedBasisEnergyMinValue, 1,
   (char*)"V.GetFixedBasisEnergyMinValue() -> float\nC++: double GetFixedBasisEnergyMinValue()\n\nThe minimum energy the new basis should use, as a fraction. See\nSetBasisScheme() for more information. When FixedBasisEnergy >= 1\n(the default), the fixed basis energy scheme is equivalent to the\nfull basis scheme.\n"},
  {(char*)"GetFixedBasisEnergyMaxValue", PyvtkPCAStatistics_GetFixedBasisEnergyMaxValue, 1,
   (char*)"V.GetFixedBasisEnergyMaxValue() -> float\nC++: double GetFixedBasisEnergyMaxValue()\n\nThe minimum energy the new basis should use, as a fraction. See\nSetBasisScheme() for more information. When FixedBasisEnergy >= 1\n(the default), the fixed basis energy scheme is equivalent to the\nfull basis scheme.\n"},
  {(char*)"GetFixedBasisEnergy", PyvtkPCAStatistics_GetFixedBasisEnergy, 1,
   (char*)"V.GetFixedBasisEnergy() -> float\nC++: double GetFixedBasisEnergy()\n\nThe minimum energy the new basis should use, as a fraction. See\nSetBasisScheme() for more information. When FixedBasisEnergy >= 1\n(the default), the fixed basis energy scheme is equivalent to the\nfull basis scheme.\n"},
  {(char*)"SetParameter", PyvtkPCAStatistics_SetParameter, 1,
   (char*)"V.SetParameter(string, int, vtkVariant) -> bool\nC++: virtual bool SetParameter(const char *parameter, int index,\n    vtkVariant value)\n\nA convenience method (in particular for access from other\napplications) to set parameter values. Return true if setting of\nrequested parameter name was excuted, false otherwise.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPCAStatistics_StaticNew()
{
  return vtkPCAStatistics::New();
}

PyObject *PyVTKClass_vtkPCAStatisticsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPCAStatistics_StaticNew,
    PyvtkPCAStatistics_Methods,
    "vtkPCAStatistics", modulename,
    NULL, NULL,
    PyvtkPCAStatistics_Doc(),
    PyVTKClass_vtkMultiCorrelativeStatisticsNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"NONE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"TRIANGLE_SPECIFIED", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"DIAGONAL_SPECIFIED", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"DIAGONAL_VARIANCE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"NUM_NORMALIZATION_SCHEMES", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"FULL_BASIS", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"FIXED_BASIS_SIZE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"FIXED_BASIS_ENERGY", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"NUM_BASIS_SCHEMES", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkPCAStatistics_Doc()
{
  static const char *docstring[] = {
    "vtkPCAStatistics - A class for principal component analysis\n\n",
    "Superclass: vtkMultiCorrelativeStatistics\n\n",
    "This class derives from the multi-correlative statistics algorithm\nand uses the covariance matrix and Cholesky decomposition computed by\nit. However, when it finalizes the statistics in Learn mode, the PCA\nclass computes the SVD of the covariance matrix in order to obtain\nits eigenvectors.\n\nIn the assess mode, the input data are\n- projected into the basis defined by the eigenvectors,\n- the energy ",
    "associated with each datum is computed,\n- or some combination thereof. Additionally, the user may specify\n  some threshold energy or eigenvector entry below which the basis is\ntruncated. This allows projection into a lower-dimensional state\n  while minimizing (in a least squares sense) the projection error.\n\nThanks:\n\nThanks to David Thompson, Philippe Pebay and Jackson Mayo from Sandia\nNational La",
    "boratories for implementing this class.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPCAStatistics(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPCAStatisticsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPCAStatistics", o) != 0)
    {
    Py_DECREF(o);
    }

}

