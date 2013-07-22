// python wrapper for vtkSplineFilter
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
#include "vtkSplineFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSplineFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSplineFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSplineFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSplineFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkSplineFilter_Doc();


static PyObject *
PyvtkSplineFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

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
      tempr = op->vtkSplineFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

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
      tempr = op->vtkSplineFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  vtkSplineFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSplineFilter::NewInstance();
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
PyvtkSplineFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSplineFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSplineFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetMaximumNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumNumberOfSubdivisions(temp0);
      }
    else
      {
      op->vtkSplineFilter::SetMaximumNumberOfSubdivisions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetMaximumNumberOfSubdivisionsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfSubdivisionsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumNumberOfSubdivisionsMinValue();
      }
    else
      {
      tempr = op->vtkSplineFilter::GetMaximumNumberOfSubdivisionsMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetMaximumNumberOfSubdivisionsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfSubdivisionsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumNumberOfSubdivisionsMaxValue();
      }
    else
      {
      tempr = op->vtkSplineFilter::GetMaximumNumberOfSubdivisionsMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetMaximumNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumNumberOfSubdivisions();
      }
    else
      {
      tempr = op->vtkSplineFilter::GetMaximumNumberOfSubdivisions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetSubdivide(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubdivide");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSubdivide(temp0);
      }
    else
      {
      op->vtkSplineFilter::SetSubdivide(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetSubdivideMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubdivideMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSubdivideMinValue();
      }
    else
      {
      tempr = op->vtkSplineFilter::GetSubdivideMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetSubdivideMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubdivideMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSubdivideMaxValue();
      }
    else
      {
      tempr = op->vtkSplineFilter::GetSubdivideMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetSubdivide(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubdivide");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSubdivide();
      }
    else
      {
      tempr = op->vtkSplineFilter::GetSubdivide();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetSubdivideToSpecified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubdivideToSpecified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSubdivideToSpecified();
      }
    else
      {
      op->vtkSplineFilter::SetSubdivideToSpecified();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetSubdivideToLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubdivideToLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSubdivideToLength();
      }
    else
      {
      op->vtkSplineFilter::SetSubdivideToLength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetSubdivideAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubdivideAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSubdivideAsString();
      }
    else
      {
      tempr = op->vtkSplineFilter::GetSubdivideAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfSubdivisions(temp0);
      }
    else
      {
      op->vtkSplineFilter::SetNumberOfSubdivisions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetNumberOfSubdivisionsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSubdivisionsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfSubdivisionsMinValue();
      }
    else
      {
      tempr = op->vtkSplineFilter::GetNumberOfSubdivisionsMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetNumberOfSubdivisionsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSubdivisionsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfSubdivisionsMaxValue();
      }
    else
      {
      tempr = op->vtkSplineFilter::GetNumberOfSubdivisionsMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfSubdivisions();
      }
    else
      {
      tempr = op->vtkSplineFilter::GetNumberOfSubdivisions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLength(temp0);
      }
    else
      {
      op->vtkSplineFilter::SetLength(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLengthMinValue();
      }
    else
      {
      tempr = op->vtkSplineFilter::GetLengthMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLengthMaxValue();
      }
    else
      {
      tempr = op->vtkSplineFilter::GetLengthMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLength();
      }
    else
      {
      tempr = op->vtkSplineFilter::GetLength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  vtkSpline *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSpline"))
    {
    if (ap.IsBound())
      {
      op->SetSpline(temp0);
      }
    else
      {
      op->vtkSplineFilter::SetSpline(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  vtkSpline *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSpline();
      }
    else
      {
      tempr = op->vtkSplineFilter::GetSpline();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetGenerateTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateTCoords(temp0);
      }
    else
      {
      op->vtkSplineFilter::SetGenerateTCoords(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetGenerateTCoordsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTCoordsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenerateTCoordsMinValue();
      }
    else
      {
      tempr = op->vtkSplineFilter::GetGenerateTCoordsMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetGenerateTCoordsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTCoordsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenerateTCoordsMaxValue();
      }
    else
      {
      tempr = op->vtkSplineFilter::GetGenerateTCoordsMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetGenerateTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenerateTCoords();
      }
    else
      {
      tempr = op->vtkSplineFilter::GetGenerateTCoords();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetGenerateTCoordsToOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoordsToOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateTCoordsToOff();
      }
    else
      {
      op->vtkSplineFilter::SetGenerateTCoordsToOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetGenerateTCoordsToNormalizedLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoordsToNormalizedLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateTCoordsToNormalizedLength();
      }
    else
      {
      op->vtkSplineFilter::SetGenerateTCoordsToNormalizedLength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetGenerateTCoordsToUseLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoordsToUseLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateTCoordsToUseLength();
      }
    else
      {
      op->vtkSplineFilter::SetGenerateTCoordsToUseLength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetGenerateTCoordsToUseScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoordsToUseScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateTCoordsToUseScalars();
      }
    else
      {
      op->vtkSplineFilter::SetGenerateTCoordsToUseScalars();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetGenerateTCoordsAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTCoordsAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenerateTCoordsAsString();
      }
    else
      {
      tempr = op->vtkSplineFilter::GetGenerateTCoordsAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetTextureLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTextureLength(temp0);
      }
    else
      {
      op->vtkSplineFilter::SetTextureLength(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetTextureLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextureLengthMinValue();
      }
    else
      {
      tempr = op->vtkSplineFilter::GetTextureLengthMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetTextureLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextureLengthMaxValue();
      }
    else
      {
      tempr = op->vtkSplineFilter::GetTextureLengthMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetTextureLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextureLength();
      }
    else
      {
      tempr = op->vtkSplineFilter::GetTextureLength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSplineFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkSplineFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSplineFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSplineFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSplineFilter\nC++: vtkSplineFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSplineFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSplineFilter\nC++: vtkSplineFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetMaximumNumberOfSubdivisions", PyvtkSplineFilter_SetMaximumNumberOfSubdivisions, 1,
   (char*)"V.SetMaximumNumberOfSubdivisions(int)\nC++: void SetMaximumNumberOfSubdivisions(int)\n\nSet the maximum number of subdivisions that are created for each\npolyline.\n"},
  {(char*)"GetMaximumNumberOfSubdivisionsMinValue", PyvtkSplineFilter_GetMaximumNumberOfSubdivisionsMinValue, 1,
   (char*)"V.GetMaximumNumberOfSubdivisionsMinValue() -> int\nC++: int GetMaximumNumberOfSubdivisionsMinValue()\n\nSet the maximum number of subdivisions that are created for each\npolyline.\n"},
  {(char*)"GetMaximumNumberOfSubdivisionsMaxValue", PyvtkSplineFilter_GetMaximumNumberOfSubdivisionsMaxValue, 1,
   (char*)"V.GetMaximumNumberOfSubdivisionsMaxValue() -> int\nC++: int GetMaximumNumberOfSubdivisionsMaxValue()\n\nSet the maximum number of subdivisions that are created for each\npolyline.\n"},
  {(char*)"GetMaximumNumberOfSubdivisions", PyvtkSplineFilter_GetMaximumNumberOfSubdivisions, 1,
   (char*)"V.GetMaximumNumberOfSubdivisions() -> int\nC++: int GetMaximumNumberOfSubdivisions()\n\nSet the maximum number of subdivisions that are created for each\npolyline.\n"},
  {(char*)"SetSubdivide", PyvtkSplineFilter_SetSubdivide, 1,
   (char*)"V.SetSubdivide(int)\nC++: void SetSubdivide(int)\n\nSpecify how the number of subdivisions is determined.\n"},
  {(char*)"GetSubdivideMinValue", PyvtkSplineFilter_GetSubdivideMinValue, 1,
   (char*)"V.GetSubdivideMinValue() -> int\nC++: int GetSubdivideMinValue()\n\nSpecify how the number of subdivisions is determined.\n"},
  {(char*)"GetSubdivideMaxValue", PyvtkSplineFilter_GetSubdivideMaxValue, 1,
   (char*)"V.GetSubdivideMaxValue() -> int\nC++: int GetSubdivideMaxValue()\n\nSpecify how the number of subdivisions is determined.\n"},
  {(char*)"GetSubdivide", PyvtkSplineFilter_GetSubdivide, 1,
   (char*)"V.GetSubdivide() -> int\nC++: int GetSubdivide()\n\nSpecify how the number of subdivisions is determined.\n"},
  {(char*)"SetSubdivideToSpecified", PyvtkSplineFilter_SetSubdivideToSpecified, 1,
   (char*)"V.SetSubdivideToSpecified()\nC++: void SetSubdivideToSpecified()\n\nSpecify how the number of subdivisions is determined.\n"},
  {(char*)"SetSubdivideToLength", PyvtkSplineFilter_SetSubdivideToLength, 1,
   (char*)"V.SetSubdivideToLength()\nC++: void SetSubdivideToLength()\n\nSpecify how the number of subdivisions is determined.\n"},
  {(char*)"GetSubdivideAsString", PyvtkSplineFilter_GetSubdivideAsString, 1,
   (char*)"V.GetSubdivideAsString() -> string\nC++: const char *GetSubdivideAsString()\n\nSpecify how the number of subdivisions is determined.\n"},
  {(char*)"SetNumberOfSubdivisions", PyvtkSplineFilter_SetNumberOfSubdivisions, 1,
   (char*)"V.SetNumberOfSubdivisions(int)\nC++: void SetNumberOfSubdivisions(int)\n\nSet the number of subdivisions that are created for the polyline.\nThis method only has effect if Subdivisions is set to\nSetSubdivisionsToSpecify().\n"},
  {(char*)"GetNumberOfSubdivisionsMinValue", PyvtkSplineFilter_GetNumberOfSubdivisionsMinValue, 1,
   (char*)"V.GetNumberOfSubdivisionsMinValue() -> int\nC++: int GetNumberOfSubdivisionsMinValue()\n\nSet the number of subdivisions that are created for the polyline.\nThis method only has effect if Subdivisions is set to\nSetSubdivisionsToSpecify().\n"},
  {(char*)"GetNumberOfSubdivisionsMaxValue", PyvtkSplineFilter_GetNumberOfSubdivisionsMaxValue, 1,
   (char*)"V.GetNumberOfSubdivisionsMaxValue() -> int\nC++: int GetNumberOfSubdivisionsMaxValue()\n\nSet the number of subdivisions that are created for the polyline.\nThis method only has effect if Subdivisions is set to\nSetSubdivisionsToSpecify().\n"},
  {(char*)"GetNumberOfSubdivisions", PyvtkSplineFilter_GetNumberOfSubdivisions, 1,
   (char*)"V.GetNumberOfSubdivisions() -> int\nC++: int GetNumberOfSubdivisions()\n\nSet the number of subdivisions that are created for the polyline.\nThis method only has effect if Subdivisions is set to\nSetSubdivisionsToSpecify().\n"},
  {(char*)"SetLength", PyvtkSplineFilter_SetLength, 1,
   (char*)"V.SetLength(float)\nC++: void SetLength(double)\n\nControl the number of subdivisions that are created for the\npolyline based on an absolute length. The length of the spline is\ndivided by this length to determine the number of subdivisions.\n"},
  {(char*)"GetLengthMinValue", PyvtkSplineFilter_GetLengthMinValue, 1,
   (char*)"V.GetLengthMinValue() -> float\nC++: double GetLengthMinValue()\n\nControl the number of subdivisions that are created for the\npolyline based on an absolute length. The length of the spline is\ndivided by this length to determine the number of subdivisions.\n"},
  {(char*)"GetLengthMaxValue", PyvtkSplineFilter_GetLengthMaxValue, 1,
   (char*)"V.GetLengthMaxValue() -> float\nC++: double GetLengthMaxValue()\n\nControl the number of subdivisions that are created for the\npolyline based on an absolute length. The length of the spline is\ndivided by this length to determine the number of subdivisions.\n"},
  {(char*)"GetLength", PyvtkSplineFilter_GetLength, 1,
   (char*)"V.GetLength() -> float\nC++: double GetLength()\n\nControl the number of subdivisions that are created for the\npolyline based on an absolute length. The length of the spline is\ndivided by this length to determine the number of subdivisions.\n"},
  {(char*)"SetSpline", PyvtkSplineFilter_SetSpline, 1,
   (char*)"V.SetSpline(vtkSpline)\nC++: virtual void SetSpline(vtkSpline *)\n\nSpecify an instance of vtkSpline to use to perform the\ninterpolation.\n"},
  {(char*)"GetSpline", PyvtkSplineFilter_GetSpline, 1,
   (char*)"V.GetSpline() -> vtkSpline\nC++: vtkSpline *GetSpline()\n\nSpecify an instance of vtkSpline to use to perform the\ninterpolation.\n"},
  {(char*)"SetGenerateTCoords", PyvtkSplineFilter_SetGenerateTCoords, 1,
   (char*)"V.SetGenerateTCoords(int)\nC++: void SetGenerateTCoords(int)\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the output polyline. The texture coordinates\ncan be generated in three ways: a normalized (0,1) generation;\nbased on the length (divided by the texture length); and by using\nthe input scalar values.\n"},
  {(char*)"GetGenerateTCoordsMinValue", PyvtkSplineFilter_GetGenerateTCoordsMinValue, 1,
   (char*)"V.GetGenerateTCoordsMinValue() -> int\nC++: int GetGenerateTCoordsMinValue()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the output polyline. The texture coordinates\ncan be generated in three ways: a normalized (0,1) generation;\nbased on the length (divided by the texture length); and by using\nthe input scalar values.\n"},
  {(char*)"GetGenerateTCoordsMaxValue", PyvtkSplineFilter_GetGenerateTCoordsMaxValue, 1,
   (char*)"V.GetGenerateTCoordsMaxValue() -> int\nC++: int GetGenerateTCoordsMaxValue()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the output polyline. The texture coordinates\ncan be generated in three ways: a normalized (0,1) generation;\nbased on the length (divided by the texture length); and by using\nthe input scalar values.\n"},
  {(char*)"GetGenerateTCoords", PyvtkSplineFilter_GetGenerateTCoords, 1,
   (char*)"V.GetGenerateTCoords() -> int\nC++: int GetGenerateTCoords()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the output polyline. The texture coordinates\ncan be generated in three ways: a normalized (0,1) generation;\nbased on the length (divided by the texture length); and by using\nthe input scalar values.\n"},
  {(char*)"SetGenerateTCoordsToOff", PyvtkSplineFilter_SetGenerateTCoordsToOff, 1,
   (char*)"V.SetGenerateTCoordsToOff()\nC++: void SetGenerateTCoordsToOff()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the output polyline. The texture coordinates\ncan be generated in three ways: a normalized (0,1) generation;\nbased on the length (divided by the texture length); and by using\nthe input scalar values.\n"},
  {(char*)"SetGenerateTCoordsToNormalizedLength", PyvtkSplineFilter_SetGenerateTCoordsToNormalizedLength, 1,
   (char*)"V.SetGenerateTCoordsToNormalizedLength()\nC++: void SetGenerateTCoordsToNormalizedLength()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the output polyline. The texture coordinates\ncan be generated in three ways: a normalized (0,1) generation;\nbased on the length (divided by the texture length); and by using\nthe input scalar values.\n"},
  {(char*)"SetGenerateTCoordsToUseLength", PyvtkSplineFilter_SetGenerateTCoordsToUseLength, 1,
   (char*)"V.SetGenerateTCoordsToUseLength()\nC++: void SetGenerateTCoordsToUseLength()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the output polyline. The texture coordinates\ncan be generated in three ways: a normalized (0,1) generation;\nbased on the length (divided by the texture length); and by using\nthe input scalar values.\n"},
  {(char*)"SetGenerateTCoordsToUseScalars", PyvtkSplineFilter_SetGenerateTCoordsToUseScalars, 1,
   (char*)"V.SetGenerateTCoordsToUseScalars()\nC++: void SetGenerateTCoordsToUseScalars()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the output polyline. The texture coordinates\ncan be generated in three ways: a normalized (0,1) generation;\nbased on the length (divided by the texture length); and by using\nthe input scalar values.\n"},
  {(char*)"GetGenerateTCoordsAsString", PyvtkSplineFilter_GetGenerateTCoordsAsString, 1,
   (char*)"V.GetGenerateTCoordsAsString() -> string\nC++: const char *GetGenerateTCoordsAsString()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the output polyline. The texture coordinates\ncan be generated in three ways: a normalized (0,1) generation;\nbased on the length (divided by the texture length); and by using\nthe input scalar values.\n"},
  {(char*)"SetTextureLength", PyvtkSplineFilter_SetTextureLength, 1,
   (char*)"V.SetTextureLength(float)\nC++: void SetTextureLength(double)\n\nControl the conversion of units during the texture coordinates\ncalculation. The TextureLength indicates what length (whether\ncalculated from scalars or length) is mapped to the [0,1) texture\nspace.\n"},
  {(char*)"GetTextureLengthMinValue", PyvtkSplineFilter_GetTextureLengthMinValue, 1,
   (char*)"V.GetTextureLengthMinValue() -> float\nC++: double GetTextureLengthMinValue()\n\nControl the conversion of units during the texture coordinates\ncalculation. The TextureLength indicates what length (whether\ncalculated from scalars or length) is mapped to the [0,1) texture\nspace.\n"},
  {(char*)"GetTextureLengthMaxValue", PyvtkSplineFilter_GetTextureLengthMaxValue, 1,
   (char*)"V.GetTextureLengthMaxValue() -> float\nC++: double GetTextureLengthMaxValue()\n\nControl the conversion of units during the texture coordinates\ncalculation. The TextureLength indicates what length (whether\ncalculated from scalars or length) is mapped to the [0,1) texture\nspace.\n"},
  {(char*)"GetTextureLength", PyvtkSplineFilter_GetTextureLength, 1,
   (char*)"V.GetTextureLength() -> float\nC++: double GetTextureLength()\n\nControl the conversion of units during the texture coordinates\ncalculation. The TextureLength indicates what length (whether\ncalculated from scalars or length) is mapped to the [0,1) texture\nspace.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSplineFilter_StaticNew()
{
  return vtkSplineFilter::New();
}

PyObject *PyVTKClass_vtkSplineFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSplineFilter_StaticNew,
    PyvtkSplineFilter_Methods,
    "vtkSplineFilter", modulename,
    NULL, NULL,
    PyvtkSplineFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkSplineFilter_Doc()
{
  static const char *docstring[] = {
    "vtkSplineFilter - generate uniformly subdivided polylines from a set\nof input polyline using a vtkSpline\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkSplineFilter is a filter that generates an output polylines from\nan input set of polylines. The polylines are uniformly subdivided and\nproduced with the help of a vtkSpline class that the user can specify\n(by default a vtkCardinalSpline is used). The number of subdivisions\nof the line can be controlled in several ways. The user can either\nspecify the number of subdivisions or a length of each s",
    "ubdivision\ncan be provided (and the class will figure out how many subdivisions\nis required over the whole polyline). The maximum number of\nsubdivisions can also be set.\n\nThe output of this filter is a polyline per input polyline (or line).\nNew points and texture coordinates are created. Point data is\ninterpolated and cell data passed on. Any polylines with less than\ntwo points, or who have coinci",
    "dent points, are ignored.\n\nSee Also:\n\nvtkRibbonFilter vtkTubeFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSplineFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSplineFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSplineFilter", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SUBDIVIDE_SPECIFIED", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SUBDIVIDE_LENGTH", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_TCOORDS_OFF", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_TCOORDS_FROM_NORMALIZED_LENGTH", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_TCOORDS_FROM_LENGTH", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(3);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_TCOORDS_FROM_SCALARS", o) != 0)
    {
    Py_DECREF(o);
    }

}

