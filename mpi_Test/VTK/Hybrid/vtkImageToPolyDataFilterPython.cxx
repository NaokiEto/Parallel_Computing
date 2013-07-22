// python wrapper for vtkImageToPolyDataFilter
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
#include "vtkImageToPolyDataFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageToPolyDataFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageToPolyDataFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageToPolyDataFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageToPolyDataFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkImageToPolyDataFilter_Doc();


static PyObject *
PyvtkImageToPolyDataFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

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
      tempr = op->vtkImageToPolyDataFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

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
      tempr = op->vtkImageToPolyDataFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  vtkImageToPolyDataFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageToPolyDataFilter::NewInstance();
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
PyvtkImageToPolyDataFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageToPolyDataFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageToPolyDataFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_SetOutputStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputStyle(temp0);
      }
    else
      {
      op->vtkImageToPolyDataFilter::SetOutputStyle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_GetOutputStyleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputStyleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputStyleMinValue();
      }
    else
      {
      tempr = op->vtkImageToPolyDataFilter::GetOutputStyleMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_GetOutputStyleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputStyleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputStyleMaxValue();
      }
    else
      {
      tempr = op->vtkImageToPolyDataFilter::GetOutputStyleMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_GetOutputStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputStyle();
      }
    else
      {
      tempr = op->vtkImageToPolyDataFilter::GetOutputStyle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_SetOutputStyleToPixelize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputStyleToPixelize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputStyleToPixelize();
      }
    else
      {
      op->vtkImageToPolyDataFilter::SetOutputStyleToPixelize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_SetOutputStyleToPolygonalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputStyleToPolygonalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputStyleToPolygonalize();
      }
    else
      {
      op->vtkImageToPolyDataFilter::SetOutputStyleToPolygonalize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_SetOutputStyleToRunLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputStyleToRunLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputStyleToRunLength();
      }
    else
      {
      op->vtkImageToPolyDataFilter::SetOutputStyleToRunLength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_SetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColorMode(temp0);
      }
    else
      {
      op->vtkImageToPolyDataFilter::SetColorMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_GetColorModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColorModeMinValue();
      }
    else
      {
      tempr = op->vtkImageToPolyDataFilter::GetColorModeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_GetColorModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColorModeMaxValue();
      }
    else
      {
      tempr = op->vtkImageToPolyDataFilter::GetColorModeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_GetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColorMode();
      }
    else
      {
      tempr = op->vtkImageToPolyDataFilter::GetColorMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_SetColorModeToLUT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToLUT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetColorModeToLUT();
      }
    else
      {
      op->vtkImageToPolyDataFilter::SetColorModeToLUT();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_SetColorModeToLinear256(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToLinear256");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetColorModeToLinear256();
      }
    else
      {
      op->vtkImageToPolyDataFilter::SetColorModeToLinear256();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  vtkScalarsToColors *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
    {
    if (ap.IsBound())
      {
      op->SetLookupTable(temp0);
      }
    else
      {
      op->vtkImageToPolyDataFilter::SetLookupTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  vtkScalarsToColors *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLookupTable();
      }
    else
      {
      tempr = op->vtkImageToPolyDataFilter::GetLookupTable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_SetSmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSmoothing(temp0);
      }
    else
      {
      op->vtkImageToPolyDataFilter::SetSmoothing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_GetSmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSmoothing();
      }
    else
      {
      tempr = op->vtkImageToPolyDataFilter::GetSmoothing();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_SmoothingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SmoothingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SmoothingOn();
      }
    else
      {
      op->vtkImageToPolyDataFilter::SmoothingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_SmoothingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SmoothingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SmoothingOff();
      }
    else
      {
      op->vtkImageToPolyDataFilter::SmoothingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_SetNumberOfSmoothingIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSmoothingIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfSmoothingIterations(temp0);
      }
    else
      {
      op->vtkImageToPolyDataFilter::SetNumberOfSmoothingIterations(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_GetNumberOfSmoothingIterationsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSmoothingIterationsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfSmoothingIterationsMinValue();
      }
    else
      {
      tempr = op->vtkImageToPolyDataFilter::GetNumberOfSmoothingIterationsMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_GetNumberOfSmoothingIterationsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSmoothingIterationsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfSmoothingIterationsMaxValue();
      }
    else
      {
      tempr = op->vtkImageToPolyDataFilter::GetNumberOfSmoothingIterationsMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_GetNumberOfSmoothingIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSmoothingIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfSmoothingIterations();
      }
    else
      {
      tempr = op->vtkImageToPolyDataFilter::GetNumberOfSmoothingIterations();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_SetDecimation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDecimation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDecimation(temp0);
      }
    else
      {
      op->vtkImageToPolyDataFilter::SetDecimation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_GetDecimation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDecimation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDecimation();
      }
    else
      {
      tempr = op->vtkImageToPolyDataFilter::GetDecimation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_DecimationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DecimationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DecimationOn();
      }
    else
      {
      op->vtkImageToPolyDataFilter::DecimationOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_DecimationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DecimationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DecimationOff();
      }
    else
      {
      op->vtkImageToPolyDataFilter::DecimationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_SetDecimationError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDecimationError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDecimationError(temp0);
      }
    else
      {
      op->vtkImageToPolyDataFilter::SetDecimationError(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_GetDecimationErrorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDecimationErrorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDecimationErrorMinValue();
      }
    else
      {
      tempr = op->vtkImageToPolyDataFilter::GetDecimationErrorMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_GetDecimationErrorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDecimationErrorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDecimationErrorMaxValue();
      }
    else
      {
      tempr = op->vtkImageToPolyDataFilter::GetDecimationErrorMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_GetDecimationError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDecimationError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDecimationError();
      }
    else
      {
      tempr = op->vtkImageToPolyDataFilter::GetDecimationError();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_SetError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetError(temp0);
      }
    else
      {
      op->vtkImageToPolyDataFilter::SetError(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_GetErrorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetErrorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetErrorMinValue();
      }
    else
      {
      tempr = op->vtkImageToPolyDataFilter::GetErrorMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_GetErrorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetErrorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetErrorMaxValue();
      }
    else
      {
      tempr = op->vtkImageToPolyDataFilter::GetErrorMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_GetError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetError();
      }
    else
      {
      tempr = op->vtkImageToPolyDataFilter::GetError();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_SetSubImageSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubImageSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSubImageSize(temp0);
      }
    else
      {
      op->vtkImageToPolyDataFilter::SetSubImageSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_GetSubImageSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubImageSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSubImageSizeMinValue();
      }
    else
      {
      tempr = op->vtkImageToPolyDataFilter::GetSubImageSizeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_GetSubImageSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubImageSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSubImageSizeMaxValue();
      }
    else
      {
      tempr = op->vtkImageToPolyDataFilter::GetSubImageSizeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_GetSubImageSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubImageSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSubImageSize();
      }
    else
      {
      tempr = op->vtkImageToPolyDataFilter::GetSubImageSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageToPolyDataFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkImageToPolyDataFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageToPolyDataFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageToPolyDataFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageToPolyDataFilter\nC++: vtkImageToPolyDataFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageToPolyDataFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageToPolyDataFilter\nC++: vtkImageToPolyDataFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetOutputStyle", PyvtkImageToPolyDataFilter_SetOutputStyle, 1,
   (char*)"V.SetOutputStyle(int)\nC++: void SetOutputStyle(int)\n\nSpecify how to create the output. Pixelize means converting the\nimage to quad polygons with a constant color per quad.\nPolygonalize means merging colors together into polygonal\nregions, and then smoothing the regions (if smoothing is turned\non). RunLength means creating quad polygons that may encompass\nseveral pixels on a scan line. The default behavior is\nPolygonalize.\n"},
  {(char*)"GetOutputStyleMinValue", PyvtkImageToPolyDataFilter_GetOutputStyleMinValue, 1,
   (char*)"V.GetOutputStyleMinValue() -> int\nC++: int GetOutputStyleMinValue()\n\nSpecify how to create the output. Pixelize means converting the\nimage to quad polygons with a constant color per quad.\nPolygonalize means merging colors together into polygonal\nregions, and then smoothing the regions (if smoothing is turned\non). RunLength means creating quad polygons that may encompass\nseveral pixels on a scan line. The default behavior is\nPolygonalize.\n"},
  {(char*)"GetOutputStyleMaxValue", PyvtkImageToPolyDataFilter_GetOutputStyleMaxValue, 1,
   (char*)"V.GetOutputStyleMaxValue() -> int\nC++: int GetOutputStyleMaxValue()\n\nSpecify how to create the output. Pixelize means converting the\nimage to quad polygons with a constant color per quad.\nPolygonalize means merging colors together into polygonal\nregions, and then smoothing the regions (if smoothing is turned\non). RunLength means creating quad polygons that may encompass\nseveral pixels on a scan line. The default behavior is\nPolygonalize.\n"},
  {(char*)"GetOutputStyle", PyvtkImageToPolyDataFilter_GetOutputStyle, 1,
   (char*)"V.GetOutputStyle() -> int\nC++: int GetOutputStyle()\n\nSpecify how to create the output. Pixelize means converting the\nimage to quad polygons with a constant color per quad.\nPolygonalize means merging colors together into polygonal\nregions, and then smoothing the regions (if smoothing is turned\non). RunLength means creating quad polygons that may encompass\nseveral pixels on a scan line. The default behavior is\nPolygonalize.\n"},
  {(char*)"SetOutputStyleToPixelize", PyvtkImageToPolyDataFilter_SetOutputStyleToPixelize, 1,
   (char*)"V.SetOutputStyleToPixelize()\nC++: void SetOutputStyleToPixelize()\n\nSpecify how to create the output. Pixelize means converting the\nimage to quad polygons with a constant color per quad.\nPolygonalize means merging colors together into polygonal\nregions, and then smoothing the regions (if smoothing is turned\non). RunLength means creating quad polygons that may encompass\nseveral pixels on a scan line. The default behavior is\nPolygonalize.\n"},
  {(char*)"SetOutputStyleToPolygonalize", PyvtkImageToPolyDataFilter_SetOutputStyleToPolygonalize, 1,
   (char*)"V.SetOutputStyleToPolygonalize()\nC++: void SetOutputStyleToPolygonalize()\n\nSpecify how to create the output. Pixelize means converting the\nimage to quad polygons with a constant color per quad.\nPolygonalize means merging colors together into polygonal\nregions, and then smoothing the regions (if smoothing is turned\non). RunLength means creating quad polygons that may encompass\nseveral pixels on a scan line. The default behavior is\nPolygonalize.\n"},
  {(char*)"SetOutputStyleToRunLength", PyvtkImageToPolyDataFilter_SetOutputStyleToRunLength, 1,
   (char*)"V.SetOutputStyleToRunLength()\nC++: void SetOutputStyleToRunLength()\n\nSpecify how to create the output. Pixelize means converting the\nimage to quad polygons with a constant color per quad.\nPolygonalize means merging colors together into polygonal\nregions, and then smoothing the regions (if smoothing is turned\non). RunLength means creating quad polygons that may encompass\nseveral pixels on a scan line. The default behavior is\nPolygonalize.\n"},
  {(char*)"SetColorMode", PyvtkImageToPolyDataFilter_SetColorMode, 1,
   (char*)"V.SetColorMode(int)\nC++: void SetColorMode(int)\n\nSpecify how to quantize color.\n"},
  {(char*)"GetColorModeMinValue", PyvtkImageToPolyDataFilter_GetColorModeMinValue, 1,
   (char*)"V.GetColorModeMinValue() -> int\nC++: int GetColorModeMinValue()\n\nSpecify how to quantize color.\n"},
  {(char*)"GetColorModeMaxValue", PyvtkImageToPolyDataFilter_GetColorModeMaxValue, 1,
   (char*)"V.GetColorModeMaxValue() -> int\nC++: int GetColorModeMaxValue()\n\nSpecify how to quantize color.\n"},
  {(char*)"GetColorMode", PyvtkImageToPolyDataFilter_GetColorMode, 1,
   (char*)"V.GetColorMode() -> int\nC++: int GetColorMode()\n\nSpecify how to quantize color.\n"},
  {(char*)"SetColorModeToLUT", PyvtkImageToPolyDataFilter_SetColorModeToLUT, 1,
   (char*)"V.SetColorModeToLUT()\nC++: void SetColorModeToLUT()\n\nSpecify how to quantize color.\n"},
  {(char*)"SetColorModeToLinear256", PyvtkImageToPolyDataFilter_SetColorModeToLinear256, 1,
   (char*)"V.SetColorModeToLinear256()\nC++: void SetColorModeToLinear256()\n\nSpecify how to quantize color.\n"},
  {(char*)"SetLookupTable", PyvtkImageToPolyDataFilter_SetLookupTable, 1,
   (char*)"V.SetLookupTable(vtkScalarsToColors)\nC++: virtual void SetLookupTable(vtkScalarsToColors *)\n\nSet/Get the vtkLookupTable to use. The lookup table is used when\nthe color mode is set to LUT and a single component scalar is\ninput.\n"},
  {(char*)"GetLookupTable", PyvtkImageToPolyDataFilter_GetLookupTable, 1,
   (char*)"V.GetLookupTable() -> vtkScalarsToColors\nC++: vtkScalarsToColors *GetLookupTable()\n\nSet/Get the vtkLookupTable to use. The lookup table is used when\nthe color mode is set to LUT and a single component scalar is\ninput.\n"},
  {(char*)"SetSmoothing", PyvtkImageToPolyDataFilter_SetSmoothing, 1,
   (char*)"V.SetSmoothing(int)\nC++: void SetSmoothing(int a)\n\nIf the output style is set to polygonalize, then you can control\nwhether to smooth boundaries.\n"},
  {(char*)"GetSmoothing", PyvtkImageToPolyDataFilter_GetSmoothing, 1,
   (char*)"V.GetSmoothing() -> int\nC++: int GetSmoothing()\n\nIf the output style is set to polygonalize, then you can control\nwhether to smooth boundaries.\n"},
  {(char*)"SmoothingOn", PyvtkImageToPolyDataFilter_SmoothingOn, 1,
   (char*)"V.SmoothingOn()\nC++: void SmoothingOn()\n\nIf the output style is set to polygonalize, then you can control\nwhether to smooth boundaries.\n"},
  {(char*)"SmoothingOff", PyvtkImageToPolyDataFilter_SmoothingOff, 1,
   (char*)"V.SmoothingOff()\nC++: void SmoothingOff()\n\nIf the output style is set to polygonalize, then you can control\nwhether to smooth boundaries.\n"},
  {(char*)"SetNumberOfSmoothingIterations", PyvtkImageToPolyDataFilter_SetNumberOfSmoothingIterations, 1,
   (char*)"V.SetNumberOfSmoothingIterations(int)\nC++: void SetNumberOfSmoothingIterations(int)\n\nSpecify the number of smoothing iterations to smooth polygons.\n(Only in effect if output style is Polygonalize and smoothing is\non.)\n"},
  {(char*)"GetNumberOfSmoothingIterationsMinValue", PyvtkImageToPolyDataFilter_GetNumberOfSmoothingIterationsMinValue, 1,
   (char*)"V.GetNumberOfSmoothingIterationsMinValue() -> int\nC++: int GetNumberOfSmoothingIterationsMinValue()\n\nSpecify the number of smoothing iterations to smooth polygons.\n(Only in effect if output style is Polygonalize and smoothing is\non.)\n"},
  {(char*)"GetNumberOfSmoothingIterationsMaxValue", PyvtkImageToPolyDataFilter_GetNumberOfSmoothingIterationsMaxValue, 1,
   (char*)"V.GetNumberOfSmoothingIterationsMaxValue() -> int\nC++: int GetNumberOfSmoothingIterationsMaxValue()\n\nSpecify the number of smoothing iterations to smooth polygons.\n(Only in effect if output style is Polygonalize and smoothing is\non.)\n"},
  {(char*)"GetNumberOfSmoothingIterations", PyvtkImageToPolyDataFilter_GetNumberOfSmoothingIterations, 1,
   (char*)"V.GetNumberOfSmoothingIterations() -> int\nC++: int GetNumberOfSmoothingIterations()\n\nSpecify the number of smoothing iterations to smooth polygons.\n(Only in effect if output style is Polygonalize and smoothing is\non.)\n"},
  {(char*)"SetDecimation", PyvtkImageToPolyDataFilter_SetDecimation, 1,
   (char*)"V.SetDecimation(int)\nC++: void SetDecimation(int a)\n\nTurn on/off whether the final polygons should be decimated.\nwhether to smooth boundaries.\n"},
  {(char*)"GetDecimation", PyvtkImageToPolyDataFilter_GetDecimation, 1,
   (char*)"V.GetDecimation() -> int\nC++: int GetDecimation()\n\nTurn on/off whether the final polygons should be decimated.\nwhether to smooth boundaries.\n"},
  {(char*)"DecimationOn", PyvtkImageToPolyDataFilter_DecimationOn, 1,
   (char*)"V.DecimationOn()\nC++: void DecimationOn()\n\nTurn on/off whether the final polygons should be decimated.\nwhether to smooth boundaries.\n"},
  {(char*)"DecimationOff", PyvtkImageToPolyDataFilter_DecimationOff, 1,
   (char*)"V.DecimationOff()\nC++: void DecimationOff()\n\nTurn on/off whether the final polygons should be decimated.\nwhether to smooth boundaries.\n"},
  {(char*)"SetDecimationError", PyvtkImageToPolyDataFilter_SetDecimationError, 1,
   (char*)"V.SetDecimationError(float)\nC++: void SetDecimationError(double)\n\nSpecify the error to use for decimation (if decimation is on).\nThe error is an absolute number--the image spacing and dimensions\nare used to create points so the error should be consistent with\nthe image size.\n"},
  {(char*)"GetDecimationErrorMinValue", PyvtkImageToPolyDataFilter_GetDecimationErrorMinValue, 1,
   (char*)"V.GetDecimationErrorMinValue() -> float\nC++: double GetDecimationErrorMinValue()\n\nSpecify the error to use for decimation (if decimation is on).\nThe error is an absolute number--the image spacing and dimensions\nare used to create points so the error should be consistent with\nthe image size.\n"},
  {(char*)"GetDecimationErrorMaxValue", PyvtkImageToPolyDataFilter_GetDecimationErrorMaxValue, 1,
   (char*)"V.GetDecimationErrorMaxValue() -> float\nC++: double GetDecimationErrorMaxValue()\n\nSpecify the error to use for decimation (if decimation is on).\nThe error is an absolute number--the image spacing and dimensions\nare used to create points so the error should be consistent with\nthe image size.\n"},
  {(char*)"GetDecimationError", PyvtkImageToPolyDataFilter_GetDecimationError, 1,
   (char*)"V.GetDecimationError() -> float\nC++: double GetDecimationError()\n\nSpecify the error to use for decimation (if decimation is on).\nThe error is an absolute number--the image spacing and dimensions\nare used to create points so the error should be consistent with\nthe image size.\n"},
  {(char*)"SetError", PyvtkImageToPolyDataFilter_SetError, 1,
   (char*)"V.SetError(int)\nC++: void SetError(int)\n\nSpecify the error value between two colors where the colors are\nconsidered the same. Only use this if the color mode uses the\ndefault 256 table.\n"},
  {(char*)"GetErrorMinValue", PyvtkImageToPolyDataFilter_GetErrorMinValue, 1,
   (char*)"V.GetErrorMinValue() -> int\nC++: int GetErrorMinValue()\n\nSpecify the error value between two colors where the colors are\nconsidered the same. Only use this if the color mode uses the\ndefault 256 table.\n"},
  {(char*)"GetErrorMaxValue", PyvtkImageToPolyDataFilter_GetErrorMaxValue, 1,
   (char*)"V.GetErrorMaxValue() -> int\nC++: int GetErrorMaxValue()\n\nSpecify the error value between two colors where the colors are\nconsidered the same. Only use this if the color mode uses the\ndefault 256 table.\n"},
  {(char*)"GetError", PyvtkImageToPolyDataFilter_GetError, 1,
   (char*)"V.GetError() -> int\nC++: int GetError()\n\nSpecify the error value between two colors where the colors are\nconsidered the same. Only use this if the color mode uses the\ndefault 256 table.\n"},
  {(char*)"SetSubImageSize", PyvtkImageToPolyDataFilter_SetSubImageSize, 1,
   (char*)"V.SetSubImageSize(int)\nC++: void SetSubImageSize(int)\n\nSpecify the size (n by n pixels) of the largest region to\npolygonalize. When the OutputStyle is set to\nVTK_STYLE_POLYGONALIZE, large amounts of memory are used. In\norder to process large images, the image is broken into pieces\nthat are at most Size pixels in width and height.\n"},
  {(char*)"GetSubImageSizeMinValue", PyvtkImageToPolyDataFilter_GetSubImageSizeMinValue, 1,
   (char*)"V.GetSubImageSizeMinValue() -> int\nC++: int GetSubImageSizeMinValue()\n\nSpecify the size (n by n pixels) of the largest region to\npolygonalize. When the OutputStyle is set to\nVTK_STYLE_POLYGONALIZE, large amounts of memory are used. In\norder to process large images, the image is broken into pieces\nthat are at most Size pixels in width and height.\n"},
  {(char*)"GetSubImageSizeMaxValue", PyvtkImageToPolyDataFilter_GetSubImageSizeMaxValue, 1,
   (char*)"V.GetSubImageSizeMaxValue() -> int\nC++: int GetSubImageSizeMaxValue()\n\nSpecify the size (n by n pixels) of the largest region to\npolygonalize. When the OutputStyle is set to\nVTK_STYLE_POLYGONALIZE, large amounts of memory are used. In\norder to process large images, the image is broken into pieces\nthat are at most Size pixels in width and height.\n"},
  {(char*)"GetSubImageSize", PyvtkImageToPolyDataFilter_GetSubImageSize, 1,
   (char*)"V.GetSubImageSize() -> int\nC++: int GetSubImageSize()\n\nSpecify the size (n by n pixels) of the largest region to\npolygonalize. When the OutputStyle is set to\nVTK_STYLE_POLYGONALIZE, large amounts of memory are used. In\norder to process large images, the image is broken into pieces\nthat are at most Size pixels in width and height.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageToPolyDataFilter_StaticNew()
{
  return vtkImageToPolyDataFilter::New();
}

PyObject *PyVTKClass_vtkImageToPolyDataFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageToPolyDataFilter_StaticNew,
    PyvtkImageToPolyDataFilter_Methods,
    "vtkImageToPolyDataFilter", modulename,
    NULL, NULL,
    PyvtkImageToPolyDataFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageToPolyDataFilter_Doc()
{
  static const char *docstring[] = {
    "vtkImageToPolyDataFilter - generate linear primitives (vtkPolyData)\nfrom an image\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkImageToPolyDataFilter converts raster data (i.e., an image) into\npolygonal data (i.e., quads or n-sided polygons), with each polygon\nassigned a constant color. This is useful for writers that generate\nvector formats (i.e., CGM or PostScript). To use this filter, you\nspecify how to quantize the color (or whether to use an image with a\nlookup table), and what style the output should be. The outpu",
    "t is\nalways polygons, but the choice is n x m quads (where n and m define\nthe input image dimensions) \"Pixelize\" option; arbitrary polygons\n\"Polygonalize\" option; or variable number of quads of constant color\ngenerated along scan lines \"RunLength\" option.\n\nThe algorithm quantizes color in order to create coherent regions\nthat the polygons can represent with good compression. By default,\nthe input ",
    "image is quantized to 256 colors using a 3-3-2 bits for\nred-green-blue. However, you can also supply a single component image\nand a lookup table, with the single component assumed to be an index\ninto the table.  (Note: a quantized image can be generated with the\nfilter vtkImageQuantizeRGBToIndex.) The number of colors on output is\nequal to the number of colors in the input lookup table (or 256 if\n",
    "the built in linear ramp is used).\n\nThe output of the filter is polygons with a single color per polygon\ncell. If the output style is set to \"Polygonalize\", the polygons may\nhave an large number of points (bounded by something like 2*(n+m));\nand the polygon may not be convex which may cause rendering problems\non some systems (use vtkTriangleFilter). Otherwise, each polygon will\nhave four vertices.",
    " The output also contains scalar data defining RGB\ncolor in unsigned char form.\n\nCaveats:\n\nThe input linear lookup table must be of the form of 3-component\nunsigned char.\n\nThis filter defines constant cell colors. If you have a plotting\ndevice that supports Gouraud shading (linear interpolation of color),\nthen superior algorithms are available for generating polygons from\nimages.\n\nNote that many p",
    "lotting devices/formats support only a limited number\nof colors.\n\nSee Also:\n\nvtkCGMWriter vtkImageQuantizeRGBToIndex vtkTriangleFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageToPolyDataFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageToPolyDataFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageToPolyDataFilter", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_STYLE_PIXELIZE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_STYLE_POLYGONALIZE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_STYLE_RUN_LENGTH", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_COLOR_MODE_LUT", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_COLOR_MODE_LINEAR_256", o) != 0)
    {
    Py_DECREF(o);
    }

}

