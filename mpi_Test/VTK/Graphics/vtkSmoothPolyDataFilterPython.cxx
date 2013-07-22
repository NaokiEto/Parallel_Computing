// python wrapper for vtkSmoothPolyDataFilter
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
#include "vtkSmoothPolyDataFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSmoothPolyDataFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSmoothPolyDataFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSmoothPolyDataFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSmoothPolyDataFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkSmoothPolyDataFilter_Doc();


static PyObject *
PyvtkSmoothPolyDataFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

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
      tempr = op->vtkSmoothPolyDataFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

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
      tempr = op->vtkSmoothPolyDataFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  vtkSmoothPolyDataFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSmoothPolyDataFilter::NewInstance();
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
PyvtkSmoothPolyDataFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSmoothPolyDataFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSmoothPolyDataFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_SetConvergence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConvergence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetConvergence(temp0);
      }
    else
      {
      op->vtkSmoothPolyDataFilter::SetConvergence(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetConvergenceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvergenceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetConvergenceMinValue();
      }
    else
      {
      tempr = op->vtkSmoothPolyDataFilter::GetConvergenceMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetConvergenceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvergenceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetConvergenceMaxValue();
      }
    else
      {
      tempr = op->vtkSmoothPolyDataFilter::GetConvergenceMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetConvergence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvergence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetConvergence();
      }
    else
      {
      tempr = op->vtkSmoothPolyDataFilter::GetConvergence();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_SetNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfIterations(temp0);
      }
    else
      {
      op->vtkSmoothPolyDataFilter::SetNumberOfIterations(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetNumberOfIterationsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIterationsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfIterationsMinValue();
      }
    else
      {
      tempr = op->vtkSmoothPolyDataFilter::GetNumberOfIterationsMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetNumberOfIterationsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIterationsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfIterationsMaxValue();
      }
    else
      {
      tempr = op->vtkSmoothPolyDataFilter::GetNumberOfIterationsMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfIterations();
      }
    else
      {
      tempr = op->vtkSmoothPolyDataFilter::GetNumberOfIterations();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_SetRelaxationFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRelaxationFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRelaxationFactor(temp0);
      }
    else
      {
      op->vtkSmoothPolyDataFilter::SetRelaxationFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetRelaxationFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRelaxationFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRelaxationFactor();
      }
    else
      {
      tempr = op->vtkSmoothPolyDataFilter::GetRelaxationFactor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_SetFeatureEdgeSmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFeatureEdgeSmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFeatureEdgeSmoothing(temp0);
      }
    else
      {
      op->vtkSmoothPolyDataFilter::SetFeatureEdgeSmoothing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetFeatureEdgeSmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureEdgeSmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFeatureEdgeSmoothing();
      }
    else
      {
      tempr = op->vtkSmoothPolyDataFilter::GetFeatureEdgeSmoothing();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_FeatureEdgeSmoothingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FeatureEdgeSmoothingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FeatureEdgeSmoothingOn();
      }
    else
      {
      op->vtkSmoothPolyDataFilter::FeatureEdgeSmoothingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_FeatureEdgeSmoothingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FeatureEdgeSmoothingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FeatureEdgeSmoothingOff();
      }
    else
      {
      op->vtkSmoothPolyDataFilter::FeatureEdgeSmoothingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_SetFeatureAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFeatureAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

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
      op->vtkSmoothPolyDataFilter::SetFeatureAngle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetFeatureAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

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
      tempr = op->vtkSmoothPolyDataFilter::GetFeatureAngleMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetFeatureAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

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
      tempr = op->vtkSmoothPolyDataFilter::GetFeatureAngleMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetFeatureAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

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
      tempr = op->vtkSmoothPolyDataFilter::GetFeatureAngle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_SetEdgeAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdgeAngle(temp0);
      }
    else
      {
      op->vtkSmoothPolyDataFilter::SetEdgeAngle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetEdgeAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgeAngleMinValue();
      }
    else
      {
      tempr = op->vtkSmoothPolyDataFilter::GetEdgeAngleMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetEdgeAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgeAngleMaxValue();
      }
    else
      {
      tempr = op->vtkSmoothPolyDataFilter::GetEdgeAngleMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetEdgeAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgeAngle();
      }
    else
      {
      tempr = op->vtkSmoothPolyDataFilter::GetEdgeAngle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_SetBoundarySmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundarySmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBoundarySmoothing(temp0);
      }
    else
      {
      op->vtkSmoothPolyDataFilter::SetBoundarySmoothing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetBoundarySmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundarySmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBoundarySmoothing();
      }
    else
      {
      tempr = op->vtkSmoothPolyDataFilter::GetBoundarySmoothing();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_BoundarySmoothingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoundarySmoothingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BoundarySmoothingOn();
      }
    else
      {
      op->vtkSmoothPolyDataFilter::BoundarySmoothingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_BoundarySmoothingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoundarySmoothingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BoundarySmoothingOff();
      }
    else
      {
      op->vtkSmoothPolyDataFilter::BoundarySmoothingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_SetGenerateErrorScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateErrorScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateErrorScalars(temp0);
      }
    else
      {
      op->vtkSmoothPolyDataFilter::SetGenerateErrorScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetGenerateErrorScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateErrorScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenerateErrorScalars();
      }
    else
      {
      tempr = op->vtkSmoothPolyDataFilter::GetGenerateErrorScalars();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GenerateErrorScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateErrorScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateErrorScalarsOn();
      }
    else
      {
      op->vtkSmoothPolyDataFilter::GenerateErrorScalarsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GenerateErrorScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateErrorScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateErrorScalarsOff();
      }
    else
      {
      op->vtkSmoothPolyDataFilter::GenerateErrorScalarsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_SetGenerateErrorVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateErrorVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateErrorVectors(temp0);
      }
    else
      {
      op->vtkSmoothPolyDataFilter::SetGenerateErrorVectors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetGenerateErrorVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateErrorVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenerateErrorVectors();
      }
    else
      {
      tempr = op->vtkSmoothPolyDataFilter::GetGenerateErrorVectors();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GenerateErrorVectorsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateErrorVectorsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateErrorVectorsOn();
      }
    else
      {
      op->vtkSmoothPolyDataFilter::GenerateErrorVectorsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GenerateErrorVectorsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateErrorVectorsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateErrorVectorsOff();
      }
    else
      {
      op->vtkSmoothPolyDataFilter::GenerateErrorVectorsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_SetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->SetSource(temp0);
      }
    else
      {
      op->vtkSmoothPolyDataFilter::SetSource(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  vtkPolyData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSource();
      }
    else
      {
      tempr = op->vtkSmoothPolyDataFilter::GetSource();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSmoothPolyDataFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkSmoothPolyDataFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSmoothPolyDataFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSmoothPolyDataFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSmoothPolyDataFilter\nC++: vtkSmoothPolyDataFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSmoothPolyDataFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSmoothPolyDataFilter\nC++: vtkSmoothPolyDataFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetConvergence", PyvtkSmoothPolyDataFilter_SetConvergence, 1,
   (char*)"V.SetConvergence(float)\nC++: void SetConvergence(double)\n\nSpecify a convergence criterion for the iteration process.\nSmaller numbers result in more smoothing iterations.\n"},
  {(char*)"GetConvergenceMinValue", PyvtkSmoothPolyDataFilter_GetConvergenceMinValue, 1,
   (char*)"V.GetConvergenceMinValue() -> float\nC++: double GetConvergenceMinValue()\n\nSpecify a convergence criterion for the iteration process.\nSmaller numbers result in more smoothing iterations.\n"},
  {(char*)"GetConvergenceMaxValue", PyvtkSmoothPolyDataFilter_GetConvergenceMaxValue, 1,
   (char*)"V.GetConvergenceMaxValue() -> float\nC++: double GetConvergenceMaxValue()\n\nSpecify a convergence criterion for the iteration process.\nSmaller numbers result in more smoothing iterations.\n"},
  {(char*)"GetConvergence", PyvtkSmoothPolyDataFilter_GetConvergence, 1,
   (char*)"V.GetConvergence() -> float\nC++: double GetConvergence()\n\nSpecify a convergence criterion for the iteration process.\nSmaller numbers result in more smoothing iterations.\n"},
  {(char*)"SetNumberOfIterations", PyvtkSmoothPolyDataFilter_SetNumberOfIterations, 1,
   (char*)"V.SetNumberOfIterations(int)\nC++: void SetNumberOfIterations(int)\n\nSpecify the number of iterations for Laplacian smoothing,\n"},
  {(char*)"GetNumberOfIterationsMinValue", PyvtkSmoothPolyDataFilter_GetNumberOfIterationsMinValue, 1,
   (char*)"V.GetNumberOfIterationsMinValue() -> int\nC++: int GetNumberOfIterationsMinValue()\n\nSpecify the number of iterations for Laplacian smoothing,\n"},
  {(char*)"GetNumberOfIterationsMaxValue", PyvtkSmoothPolyDataFilter_GetNumberOfIterationsMaxValue, 1,
   (char*)"V.GetNumberOfIterationsMaxValue() -> int\nC++: int GetNumberOfIterationsMaxValue()\n\nSpecify the number of iterations for Laplacian smoothing,\n"},
  {(char*)"GetNumberOfIterations", PyvtkSmoothPolyDataFilter_GetNumberOfIterations, 1,
   (char*)"V.GetNumberOfIterations() -> int\nC++: int GetNumberOfIterations()\n\nSpecify the number of iterations for Laplacian smoothing,\n"},
  {(char*)"SetRelaxationFactor", PyvtkSmoothPolyDataFilter_SetRelaxationFactor, 1,
   (char*)"V.SetRelaxationFactor(float)\nC++: void SetRelaxationFactor(double a)\n\nSpecify the relaxation factor for Laplacian smoothing. As in all\niterative methods, the stability of the process is sensitive to\nthis parameter. In general, small relaxation factors and large\nnumbers of iterations are more stable than larger relaxation\nfactors and smaller numbers of iterations.\n"},
  {(char*)"GetRelaxationFactor", PyvtkSmoothPolyDataFilter_GetRelaxationFactor, 1,
   (char*)"V.GetRelaxationFactor() -> float\nC++: double GetRelaxationFactor()\n\nSpecify the relaxation factor for Laplacian smoothing. As in all\niterative methods, the stability of the process is sensitive to\nthis parameter. In general, small relaxation factors and large\nnumbers of iterations are more stable than larger relaxation\nfactors and smaller numbers of iterations.\n"},
  {(char*)"SetFeatureEdgeSmoothing", PyvtkSmoothPolyDataFilter_SetFeatureEdgeSmoothing, 1,
   (char*)"V.SetFeatureEdgeSmoothing(int)\nC++: void SetFeatureEdgeSmoothing(int a)\n\nTurn on/off smoothing along sharp interior edges.\n"},
  {(char*)"GetFeatureEdgeSmoothing", PyvtkSmoothPolyDataFilter_GetFeatureEdgeSmoothing, 1,
   (char*)"V.GetFeatureEdgeSmoothing() -> int\nC++: int GetFeatureEdgeSmoothing()\n\nTurn on/off smoothing along sharp interior edges.\n"},
  {(char*)"FeatureEdgeSmoothingOn", PyvtkSmoothPolyDataFilter_FeatureEdgeSmoothingOn, 1,
   (char*)"V.FeatureEdgeSmoothingOn()\nC++: void FeatureEdgeSmoothingOn()\n\nTurn on/off smoothing along sharp interior edges.\n"},
  {(char*)"FeatureEdgeSmoothingOff", PyvtkSmoothPolyDataFilter_FeatureEdgeSmoothingOff, 1,
   (char*)"V.FeatureEdgeSmoothingOff()\nC++: void FeatureEdgeSmoothingOff()\n\nTurn on/off smoothing along sharp interior edges.\n"},
  {(char*)"SetFeatureAngle", PyvtkSmoothPolyDataFilter_SetFeatureAngle, 1,
   (char*)"V.SetFeatureAngle(float)\nC++: void SetFeatureAngle(double)\n\nSpecify the feature angle for sharp edge identification.\n"},
  {(char*)"GetFeatureAngleMinValue", PyvtkSmoothPolyDataFilter_GetFeatureAngleMinValue, 1,
   (char*)"V.GetFeatureAngleMinValue() -> float\nC++: double GetFeatureAngleMinValue()\n\nSpecify the feature angle for sharp edge identification.\n"},
  {(char*)"GetFeatureAngleMaxValue", PyvtkSmoothPolyDataFilter_GetFeatureAngleMaxValue, 1,
   (char*)"V.GetFeatureAngleMaxValue() -> float\nC++: double GetFeatureAngleMaxValue()\n\nSpecify the feature angle for sharp edge identification.\n"},
  {(char*)"GetFeatureAngle", PyvtkSmoothPolyDataFilter_GetFeatureAngle, 1,
   (char*)"V.GetFeatureAngle() -> float\nC++: double GetFeatureAngle()\n\nSpecify the feature angle for sharp edge identification.\n"},
  {(char*)"SetEdgeAngle", PyvtkSmoothPolyDataFilter_SetEdgeAngle, 1,
   (char*)"V.SetEdgeAngle(float)\nC++: void SetEdgeAngle(double)\n\nSpecify the edge angle to control smoothing along edges (either\ninterior or boundary).\n"},
  {(char*)"GetEdgeAngleMinValue", PyvtkSmoothPolyDataFilter_GetEdgeAngleMinValue, 1,
   (char*)"V.GetEdgeAngleMinValue() -> float\nC++: double GetEdgeAngleMinValue()\n\nSpecify the edge angle to control smoothing along edges (either\ninterior or boundary).\n"},
  {(char*)"GetEdgeAngleMaxValue", PyvtkSmoothPolyDataFilter_GetEdgeAngleMaxValue, 1,
   (char*)"V.GetEdgeAngleMaxValue() -> float\nC++: double GetEdgeAngleMaxValue()\n\nSpecify the edge angle to control smoothing along edges (either\ninterior or boundary).\n"},
  {(char*)"GetEdgeAngle", PyvtkSmoothPolyDataFilter_GetEdgeAngle, 1,
   (char*)"V.GetEdgeAngle() -> float\nC++: double GetEdgeAngle()\n\nSpecify the edge angle to control smoothing along edges (either\ninterior or boundary).\n"},
  {(char*)"SetBoundarySmoothing", PyvtkSmoothPolyDataFilter_SetBoundarySmoothing, 1,
   (char*)"V.SetBoundarySmoothing(int)\nC++: void SetBoundarySmoothing(int a)\n\nTurn on/off the smoothing of vertices on the boundary of the\nmesh.\n"},
  {(char*)"GetBoundarySmoothing", PyvtkSmoothPolyDataFilter_GetBoundarySmoothing, 1,
   (char*)"V.GetBoundarySmoothing() -> int\nC++: int GetBoundarySmoothing()\n\nTurn on/off the smoothing of vertices on the boundary of the\nmesh.\n"},
  {(char*)"BoundarySmoothingOn", PyvtkSmoothPolyDataFilter_BoundarySmoothingOn, 1,
   (char*)"V.BoundarySmoothingOn()\nC++: void BoundarySmoothingOn()\n\nTurn on/off the smoothing of vertices on the boundary of the\nmesh.\n"},
  {(char*)"BoundarySmoothingOff", PyvtkSmoothPolyDataFilter_BoundarySmoothingOff, 1,
   (char*)"V.BoundarySmoothingOff()\nC++: void BoundarySmoothingOff()\n\nTurn on/off the smoothing of vertices on the boundary of the\nmesh.\n"},
  {(char*)"SetGenerateErrorScalars", PyvtkSmoothPolyDataFilter_SetGenerateErrorScalars, 1,
   (char*)"V.SetGenerateErrorScalars(int)\nC++: void SetGenerateErrorScalars(int a)\n\nTurn on/off the generation of scalar distance values.\n"},
  {(char*)"GetGenerateErrorScalars", PyvtkSmoothPolyDataFilter_GetGenerateErrorScalars, 1,
   (char*)"V.GetGenerateErrorScalars() -> int\nC++: int GetGenerateErrorScalars()\n\nTurn on/off the generation of scalar distance values.\n"},
  {(char*)"GenerateErrorScalarsOn", PyvtkSmoothPolyDataFilter_GenerateErrorScalarsOn, 1,
   (char*)"V.GenerateErrorScalarsOn()\nC++: void GenerateErrorScalarsOn()\n\nTurn on/off the generation of scalar distance values.\n"},
  {(char*)"GenerateErrorScalarsOff", PyvtkSmoothPolyDataFilter_GenerateErrorScalarsOff, 1,
   (char*)"V.GenerateErrorScalarsOff()\nC++: void GenerateErrorScalarsOff()\n\nTurn on/off the generation of scalar distance values.\n"},
  {(char*)"SetGenerateErrorVectors", PyvtkSmoothPolyDataFilter_SetGenerateErrorVectors, 1,
   (char*)"V.SetGenerateErrorVectors(int)\nC++: void SetGenerateErrorVectors(int a)\n\nTurn on/off the generation of error vectors.\n"},
  {(char*)"GetGenerateErrorVectors", PyvtkSmoothPolyDataFilter_GetGenerateErrorVectors, 1,
   (char*)"V.GetGenerateErrorVectors() -> int\nC++: int GetGenerateErrorVectors()\n\nTurn on/off the generation of error vectors.\n"},
  {(char*)"GenerateErrorVectorsOn", PyvtkSmoothPolyDataFilter_GenerateErrorVectorsOn, 1,
   (char*)"V.GenerateErrorVectorsOn()\nC++: void GenerateErrorVectorsOn()\n\nTurn on/off the generation of error vectors.\n"},
  {(char*)"GenerateErrorVectorsOff", PyvtkSmoothPolyDataFilter_GenerateErrorVectorsOff, 1,
   (char*)"V.GenerateErrorVectorsOff()\nC++: void GenerateErrorVectorsOff()\n\nTurn on/off the generation of error vectors.\n"},
  {(char*)"SetSource", PyvtkSmoothPolyDataFilter_SetSource, 1,
   (char*)"V.SetSource(vtkPolyData)\nC++: void SetSource(vtkPolyData *source)\n\nSpecify the source object which is used to constrain smoothing.\nThe source defines a surface that the input (as it is smoothed)\nis constrained to lie upon.\n"},
  {(char*)"GetSource", PyvtkSmoothPolyDataFilter_GetSource, 1,
   (char*)"V.GetSource() -> vtkPolyData\nC++: vtkPolyData *GetSource()\n\nSpecify the source object which is used to constrain smoothing.\nThe source defines a surface that the input (as it is smoothed)\nis constrained to lie upon.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSmoothPolyDataFilter_StaticNew()
{
  return vtkSmoothPolyDataFilter::New();
}

PyObject *PyVTKClass_vtkSmoothPolyDataFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSmoothPolyDataFilter_StaticNew,
    PyvtkSmoothPolyDataFilter_Methods,
    "vtkSmoothPolyDataFilter", modulename,
    NULL, NULL,
    PyvtkSmoothPolyDataFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkSmoothPolyDataFilter_Doc()
{
  static const char *docstring[] = {
    "vtkSmoothPolyDataFilter - adjust point positions using Laplacian\nsmoothing\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkSmoothPolyDataFilter is a filter that adjusts point coordinates\nusing Laplacian smoothing. The effect is to \"relax\" the mesh, making\nthe cells better shaped and the vertices more evenly distributed.\nNote that this filter operates on the lines, polygons, and triangle\nstrips composing an instance of vtkPolyData. Vertex or poly-vertex\ncells are never modified.\n\nThe algorithm proceeds as follows. F",
    "or each vertex v, a topological\nand geometric analysis is performed to determine which vertices are\nconnected to v, and which cells are connected to v. Then, a\nconnectivity array is constructed for each vertex. (The connectivity\narray is a list of lists of vertices that directly attach to each\nvertex.) Next, an iteration phase begins over all vertices. For each\nvertex v, the coordinates of v are m",
    "odified according to an average\nof the connected vertices.  (A relaxation factor is available to\ncontrol the amount of displacement of v).  The process repeats for\neach vertex. This pass over the list of vertices is a single\niteration. Many iterations (generally around 20 or so) are repeated\nuntil the desired result is obtained.\n\nThere are some special instance variables used to control the\nexecut",
    "ion of this filter. (These ivars basically control what\nvertices can be smoothed, and the creation of the connectivity\narray.) The BoundarySmoothing ivar enables/disables the smoothing\noperation on vertices that are on the \"boundary\" of the mesh. A\nboundary vertex is one that is surrounded by a semi-cycle of polygons\n(or used by a single line).\n\nAnother important ivar is FeatureEdgeSmoothing. If t",
    "his ivar is\nenabled, then interior vertices are classified as either \"simple\", \"interior\nedge\", or \"fixed\", and smoothed differently. (Interior vertices are\nmanifold vertices surrounded by a cycle of polygons; or used by two\nline cells.) The classification is based on the number of feature\nedges attached to v. A feature edge occurs when the angle between the\ntwo surface normals of a polygon sharin",
    "g an edge is greater than the\nFeatureAngle ivar. Then, vertices used by no feature edges are\nclassified \"simple\", vertices used by exactly two feature edges are\nclassified \"interior edge\", and all others are \"fixed\" vertices.\n\nOnce the classification is known, the vertices are smoothed\ndifferently. Corner (i.e., fixed) vertices are not smoothed at all.\nSimple vertices are smoothed as before (i.e.,",
    " average of connected\nvertex coordinates). Interior edge vertices are smoothed only along\ntheir two connected edges, and only if the angle between the edges is\nless than the EdgeAngle ivar.\n\nThe total smoothing can be controlled by using two ivars. The\nNumberOfIterations is a cap on the maximum number of smoothing\npasses. The Convergence ivar is a limit on the maximum point motion.\nIf the maximum ",
    "motion during an iteration is less than Convergence,\nthen the smoothing process terminates. (Convergence is expressed as a\nfraction of the diagonal of the bounding box.)\n\nThere are two instance variables that control the generation of error\ndata. If the ivar GenerateErrorScalars is on, then a scalar value\nindicating the distance of each vertex from its original position is\ncomputed. If the ivar Ge",
    "nerateErrorVectors is on, then a vector\nrepresenting change in position is computed.\n\nOptionally you can further control the smoothing process by defining\na second input: the Source. If defined, the input mesh is constrained\nto lie on the surface defined by the Source ivar.\n\nCaveats:\n\nThe Laplacian operation reduces high frequency information in the\ngeometry of the mesh. With excessive smoothing i",
    "mportant details may\nbe lost, and the surface may shrink towards the centroid. Enabling\nFeatureEdgeSmoothing helps reduce this effect, but cannot entirely\neliminate it. You may also wish to try vtkWindowedSincPolyDataFilter.\nIt does a better job of minimizing shrinkage.\n\nSee Also:\n\nvtkWindowedSincPolyDataFilter vtkDecimate vtkDecimatePro\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSmoothPolyDataFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSmoothPolyDataFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSmoothPolyDataFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

