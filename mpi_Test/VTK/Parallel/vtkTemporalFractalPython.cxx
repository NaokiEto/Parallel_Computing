// python wrapper for vtkTemporalFractal
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
#include "vtkTemporalFractal.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTemporalFractal(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTemporalFractal(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTemporalFractalNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTemporalFractalNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkTemporalDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTemporalDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTemporalDataSetAlgorithmNew
#endif

static const char **PyvtkTemporalFractal_Doc();


static PyObject *
PyvtkTemporalFractal_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

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
      tempr = op->vtkTemporalFractal::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

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
      tempr = op->vtkTemporalFractal::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  vtkTemporalFractal *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTemporalFractal::NewInstance();
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
PyvtkTemporalFractal_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTemporalFractal *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTemporalFractal::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_SetFractalValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFractalValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFractalValue(temp0);
      }
    else
      {
      op->vtkTemporalFractal::SetFractalValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_GetFractalValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFractalValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFractalValue();
      }
    else
      {
      tempr = op->vtkTemporalFractal::GetFractalValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_SetMaximumLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumLevel(temp0);
      }
    else
      {
      op->vtkTemporalFractal::SetMaximumLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_GetMaximumLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumLevel();
      }
    else
      {
      tempr = op->vtkTemporalFractal::GetMaximumLevel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_SetDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDimensions(temp0);
      }
    else
      {
      op->vtkTemporalFractal::SetDimensions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_GetDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDimensions();
      }
    else
      {
      tempr = op->vtkTemporalFractal::GetDimensions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_SetGhostLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGhostLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGhostLevels(temp0);
      }
    else
      {
      op->vtkTemporalFractal::SetGhostLevels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_GetGhostLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGhostLevels();
      }
    else
      {
      tempr = op->vtkTemporalFractal::GetGhostLevels();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_GhostLevelsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GhostLevelsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GhostLevelsOn();
      }
    else
      {
      op->vtkTemporalFractal::GhostLevelsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_GhostLevelsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GhostLevelsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GhostLevelsOff();
      }
    else
      {
      op->vtkTemporalFractal::GhostLevelsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_SetGenerateRectilinearGrids(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateRectilinearGrids");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateRectilinearGrids(temp0);
      }
    else
      {
      op->vtkTemporalFractal::SetGenerateRectilinearGrids(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_GetGenerateRectilinearGrids(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateRectilinearGrids");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenerateRectilinearGrids();
      }
    else
      {
      tempr = op->vtkTemporalFractal::GetGenerateRectilinearGrids();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_GenerateRectilinearGridsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateRectilinearGridsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateRectilinearGridsOn();
      }
    else
      {
      op->vtkTemporalFractal::GenerateRectilinearGridsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_GenerateRectilinearGridsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateRectilinearGridsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateRectilinearGridsOff();
      }
    else
      {
      op->vtkTemporalFractal::GenerateRectilinearGridsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_SetDiscreteTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiscreteTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDiscreteTimeSteps(temp0);
      }
    else
      {
      op->vtkTemporalFractal::SetDiscreteTimeSteps(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_GetDiscreteTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiscreteTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDiscreteTimeSteps();
      }
    else
      {
      tempr = op->vtkTemporalFractal::GetDiscreteTimeSteps();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_DiscreteTimeStepsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DiscreteTimeStepsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DiscreteTimeStepsOn();
      }
    else
      {
      op->vtkTemporalFractal::DiscreteTimeStepsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_DiscreteTimeStepsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DiscreteTimeStepsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DiscreteTimeStepsOff();
      }
    else
      {
      op->vtkTemporalFractal::DiscreteTimeStepsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_SetTwoDimensional(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTwoDimensional");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTwoDimensional(temp0);
      }
    else
      {
      op->vtkTemporalFractal::SetTwoDimensional(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_GetTwoDimensional(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTwoDimensional");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTwoDimensional();
      }
    else
      {
      tempr = op->vtkTemporalFractal::GetTwoDimensional();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_TwoDimensionalOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TwoDimensionalOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TwoDimensionalOn();
      }
    else
      {
      op->vtkTemporalFractal::TwoDimensionalOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_TwoDimensionalOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TwoDimensionalOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TwoDimensionalOff();
      }
    else
      {
      op->vtkTemporalFractal::TwoDimensionalOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_SetAsymetric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAsymetric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAsymetric(temp0);
      }
    else
      {
      op->vtkTemporalFractal::SetAsymetric(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_GetAsymetric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAsymetric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAsymetric();
      }
    else
      {
      tempr = op->vtkTemporalFractal::GetAsymetric();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_SetAdaptiveSubdivision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAdaptiveSubdivision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAdaptiveSubdivision(temp0);
      }
    else
      {
      op->vtkTemporalFractal::SetAdaptiveSubdivision(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_GetAdaptiveSubdivision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAdaptiveSubdivision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAdaptiveSubdivision();
      }
    else
      {
      tempr = op->vtkTemporalFractal::GetAdaptiveSubdivision();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_AdaptiveSubdivisionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdaptiveSubdivisionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AdaptiveSubdivisionOn();
      }
    else
      {
      op->vtkTemporalFractal::AdaptiveSubdivisionOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalFractal_AdaptiveSubdivisionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdaptiveSubdivisionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AdaptiveSubdivisionOff();
      }
    else
      {
      op->vtkTemporalFractal::AdaptiveSubdivisionOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTemporalFractal_Methods[] = {
  {(char*)"GetClassName", PyvtkTemporalFractal_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTemporalFractal_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTemporalFractal_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTemporalFractal\nC++: vtkTemporalFractal *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTemporalFractal_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTemporalFractal\nC++: vtkTemporalFractal *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFractalValue", PyvtkTemporalFractal_SetFractalValue, 1,
   (char*)"V.SetFractalValue(float)\nC++: void SetFractalValue(float a)\n\nEssentially the iso surface value. The fractal array is scaled to\nmap this value to 0.5 for use as a volume fraction.\n"},
  {(char*)"GetFractalValue", PyvtkTemporalFractal_GetFractalValue, 1,
   (char*)"V.GetFractalValue() -> float\nC++: float GetFractalValue()\n\nEssentially the iso surface value. The fractal array is scaled to\nmap this value to 0.5 for use as a volume fraction.\n"},
  {(char*)"SetMaximumLevel", PyvtkTemporalFractal_SetMaximumLevel, 1,
   (char*)"V.SetMaximumLevel(int)\nC++: void SetMaximumLevel(int a)\n\nAny blocks touching a predefined line will be subdivided to this\nlevel. Other blocks are subdivided so that neighboring blocks\nonly differ by one level.\n"},
  {(char*)"GetMaximumLevel", PyvtkTemporalFractal_GetMaximumLevel, 1,
   (char*)"V.GetMaximumLevel() -> int\nC++: int GetMaximumLevel()\n\nAny blocks touching a predefined line will be subdivided to this\nlevel. Other blocks are subdivided so that neighboring blocks\nonly differ by one level.\n"},
  {(char*)"SetDimensions", PyvtkTemporalFractal_SetDimensions, 1,
   (char*)"V.SetDimensions(int)\nC++: void SetDimensions(int a)\n\nXYZ dimensions of cells.\n"},
  {(char*)"GetDimensions", PyvtkTemporalFractal_GetDimensions, 1,
   (char*)"V.GetDimensions() -> int\nC++: int GetDimensions()\n\nXYZ dimensions of cells.\n"},
  {(char*)"SetGhostLevels", PyvtkTemporalFractal_SetGhostLevels, 1,
   (char*)"V.SetGhostLevels(int)\nC++: void SetGhostLevels(int a)\n\nFor testing ghost levels.\n"},
  {(char*)"GetGhostLevels", PyvtkTemporalFractal_GetGhostLevels, 1,
   (char*)"V.GetGhostLevels() -> int\nC++: int GetGhostLevels()\n\nFor testing ghost levels.\n"},
  {(char*)"GhostLevelsOn", PyvtkTemporalFractal_GhostLevelsOn, 1,
   (char*)"V.GhostLevelsOn()\nC++: void GhostLevelsOn()\n\nFor testing ghost levels.\n"},
  {(char*)"GhostLevelsOff", PyvtkTemporalFractal_GhostLevelsOff, 1,
   (char*)"V.GhostLevelsOff()\nC++: void GhostLevelsOff()\n\nFor testing ghost levels.\n"},
  {(char*)"SetGenerateRectilinearGrids", PyvtkTemporalFractal_SetGenerateRectilinearGrids, 1,
   (char*)"V.SetGenerateRectilinearGrids(int)\nC++: void SetGenerateRectilinearGrids(int a)\n\nGenerate either rectilinear grids either uniform grids. Default\nis false.\n"},
  {(char*)"GetGenerateRectilinearGrids", PyvtkTemporalFractal_GetGenerateRectilinearGrids, 1,
   (char*)"V.GetGenerateRectilinearGrids() -> int\nC++: int GetGenerateRectilinearGrids()\n\nGenerate either rectilinear grids either uniform grids. Default\nis false.\n"},
  {(char*)"GenerateRectilinearGridsOn", PyvtkTemporalFractal_GenerateRectilinearGridsOn, 1,
   (char*)"V.GenerateRectilinearGridsOn()\nC++: void GenerateRectilinearGridsOn()\n\nGenerate either rectilinear grids either uniform grids. Default\nis false.\n"},
  {(char*)"GenerateRectilinearGridsOff", PyvtkTemporalFractal_GenerateRectilinearGridsOff, 1,
   (char*)"V.GenerateRectilinearGridsOff()\nC++: void GenerateRectilinearGridsOff()\n\nGenerate either rectilinear grids either uniform grids. Default\nis false.\n"},
  {(char*)"SetDiscreteTimeSteps", PyvtkTemporalFractal_SetDiscreteTimeSteps, 1,
   (char*)"V.SetDiscreteTimeSteps(int)\nC++: void SetDiscreteTimeSteps(int a)\n\nLimit this source to discrete integer time steps Default is off\n(continuous)\n"},
  {(char*)"GetDiscreteTimeSteps", PyvtkTemporalFractal_GetDiscreteTimeSteps, 1,
   (char*)"V.GetDiscreteTimeSteps() -> int\nC++: int GetDiscreteTimeSteps()\n\nLimit this source to discrete integer time steps Default is off\n(continuous)\n"},
  {(char*)"DiscreteTimeStepsOn", PyvtkTemporalFractal_DiscreteTimeStepsOn, 1,
   (char*)"V.DiscreteTimeStepsOn()\nC++: void DiscreteTimeStepsOn()\n\nLimit this source to discrete integer time steps Default is off\n(continuous)\n"},
  {(char*)"DiscreteTimeStepsOff", PyvtkTemporalFractal_DiscreteTimeStepsOff, 1,
   (char*)"V.DiscreteTimeStepsOff()\nC++: void DiscreteTimeStepsOff()\n\nLimit this source to discrete integer time steps Default is off\n(continuous)\n"},
  {(char*)"SetTwoDimensional", PyvtkTemporalFractal_SetTwoDimensional, 1,
   (char*)"V.SetTwoDimensional(int)\nC++: void SetTwoDimensional(int a)\n\nMake a 2D data set to test.\n"},
  {(char*)"GetTwoDimensional", PyvtkTemporalFractal_GetTwoDimensional, 1,
   (char*)"V.GetTwoDimensional() -> int\nC++: int GetTwoDimensional()\n\nMake a 2D data set to test.\n"},
  {(char*)"TwoDimensionalOn", PyvtkTemporalFractal_TwoDimensionalOn, 1,
   (char*)"V.TwoDimensionalOn()\nC++: void TwoDimensionalOn()\n\nMake a 2D data set to test.\n"},
  {(char*)"TwoDimensionalOff", PyvtkTemporalFractal_TwoDimensionalOff, 1,
   (char*)"V.TwoDimensionalOff()\nC++: void TwoDimensionalOff()\n\nMake a 2D data set to test.\n"},
  {(char*)"SetAsymetric", PyvtkTemporalFractal_SetAsymetric, 1,
   (char*)"V.SetAsymetric(int)\nC++: void SetAsymetric(int a)\n\nTest the case when the blocks do not have the same sizes. Adds 2\nto the x extent of the far x blocks (level 1).\n"},
  {(char*)"GetAsymetric", PyvtkTemporalFractal_GetAsymetric, 1,
   (char*)"V.GetAsymetric() -> int\nC++: int GetAsymetric()\n\nTest the case when the blocks do not have the same sizes. Adds 2\nto the x extent of the far x blocks (level 1).\n"},
  {(char*)"SetAdaptiveSubdivision", PyvtkTemporalFractal_SetAdaptiveSubdivision, 1,
   (char*)"V.SetAdaptiveSubdivision(int)\nC++: void SetAdaptiveSubdivision(int a)\n\nMake the division adaptive or not, defaults to Adaptive\n"},
  {(char*)"GetAdaptiveSubdivision", PyvtkTemporalFractal_GetAdaptiveSubdivision, 1,
   (char*)"V.GetAdaptiveSubdivision() -> int\nC++: int GetAdaptiveSubdivision()\n\nMake the division adaptive or not, defaults to Adaptive\n"},
  {(char*)"AdaptiveSubdivisionOn", PyvtkTemporalFractal_AdaptiveSubdivisionOn, 1,
   (char*)"V.AdaptiveSubdivisionOn()\nC++: void AdaptiveSubdivisionOn()\n\nMake the division adaptive or not, defaults to Adaptive\n"},
  {(char*)"AdaptiveSubdivisionOff", PyvtkTemporalFractal_AdaptiveSubdivisionOff, 1,
   (char*)"V.AdaptiveSubdivisionOff()\nC++: void AdaptiveSubdivisionOff()\n\nMake the division adaptive or not, defaults to Adaptive\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTemporalFractal_StaticNew()
{
  return vtkTemporalFractal::New();
}

PyObject *PyVTKClass_vtkTemporalFractalNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTemporalFractal_StaticNew,
    PyvtkTemporalFractal_Methods,
    "vtkTemporalFractal", modulename,
    NULL, NULL,
    PyvtkTemporalFractal_Doc(),
    PyVTKClass_vtkTemporalDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTemporalFractal_Doc()
{
  static const char *docstring[] = {
    "vtkTemporalFractal - A source to test AMR data object.\n\n",
    "Superclass: vtkTemporalDataSetAlgorithm\n\n",
    "vtkTemporalFractal is a collection of uniform grids.  All have the\nsame dimensions. Each block has a different origin and spacing.  It\nuses mandelbrot to create cell data. I scale the fractal array to\nlook like a volme fraction. I may also add block id and level as\nextra cell arrays. This source produces a vtkHierarchicalBoxDataSet\nwhen GenerateRectilinearGrids is off, otherwise produces a\nvtkMult",
    "iBlockDataSet.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTemporalFractal(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTemporalFractalNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTemporalFractal", o) != 0)
    {
    Py_DECREF(o);
    }

}

