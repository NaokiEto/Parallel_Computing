// python wrapper for vtkEllipticalButtonSource
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
#include "vtkEllipticalButtonSource.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkEllipticalButtonSource(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkEllipticalButtonSource(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkEllipticalButtonSourceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkEllipticalButtonSourceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkButtonSourceNew
extern "C" { PyObject *PyVTKClass_vtkButtonSourceNew(const char *); }
#define DECLARED_PyVTKClass_vtkButtonSourceNew
#endif

static const char **PyvtkEllipticalButtonSource_Doc();


static PyObject *
PyvtkEllipticalButtonSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

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
      tempr = op->vtkEllipticalButtonSource::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

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
      tempr = op->vtkEllipticalButtonSource::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  vtkEllipticalButtonSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkEllipticalButtonSource::NewInstance();
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
PyvtkEllipticalButtonSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkEllipticalButtonSource *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkEllipticalButtonSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_SetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWidth(temp0);
      }
    else
      {
      op->vtkEllipticalButtonSource::SetWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetWidthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWidthMinValue();
      }
    else
      {
      tempr = op->vtkEllipticalButtonSource::GetWidthMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetWidthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWidthMaxValue();
      }
    else
      {
      tempr = op->vtkEllipticalButtonSource::GetWidthMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWidth();
      }
    else
      {
      tempr = op->vtkEllipticalButtonSource::GetWidth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_SetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHeight(temp0);
      }
    else
      {
      op->vtkEllipticalButtonSource::SetHeight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetHeightMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeightMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHeightMinValue();
      }
    else
      {
      tempr = op->vtkEllipticalButtonSource::GetHeightMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetHeightMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeightMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHeightMaxValue();
      }
    else
      {
      tempr = op->vtkEllipticalButtonSource::GetHeightMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHeight();
      }
    else
      {
      tempr = op->vtkEllipticalButtonSource::GetHeight();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_SetDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDepth(temp0);
      }
    else
      {
      op->vtkEllipticalButtonSource::SetDepth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetDepthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDepthMinValue();
      }
    else
      {
      tempr = op->vtkEllipticalButtonSource::GetDepthMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetDepthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDepthMaxValue();
      }
    else
      {
      tempr = op->vtkEllipticalButtonSource::GetDepthMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDepth();
      }
    else
      {
      tempr = op->vtkEllipticalButtonSource::GetDepth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_SetCircumferentialResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCircumferentialResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCircumferentialResolution(temp0);
      }
    else
      {
      op->vtkEllipticalButtonSource::SetCircumferentialResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetCircumferentialResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCircumferentialResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCircumferentialResolutionMinValue();
      }
    else
      {
      tempr = op->vtkEllipticalButtonSource::GetCircumferentialResolutionMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetCircumferentialResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCircumferentialResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCircumferentialResolutionMaxValue();
      }
    else
      {
      tempr = op->vtkEllipticalButtonSource::GetCircumferentialResolutionMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetCircumferentialResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCircumferentialResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCircumferentialResolution();
      }
    else
      {
      tempr = op->vtkEllipticalButtonSource::GetCircumferentialResolution();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_SetTextureResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTextureResolution(temp0);
      }
    else
      {
      op->vtkEllipticalButtonSource::SetTextureResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetTextureResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextureResolutionMinValue();
      }
    else
      {
      tempr = op->vtkEllipticalButtonSource::GetTextureResolutionMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetTextureResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextureResolutionMaxValue();
      }
    else
      {
      tempr = op->vtkEllipticalButtonSource::GetTextureResolutionMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetTextureResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextureResolution();
      }
    else
      {
      tempr = op->vtkEllipticalButtonSource::GetTextureResolution();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_SetShoulderResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShoulderResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShoulderResolution(temp0);
      }
    else
      {
      op->vtkEllipticalButtonSource::SetShoulderResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetShoulderResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShoulderResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShoulderResolutionMinValue();
      }
    else
      {
      tempr = op->vtkEllipticalButtonSource::GetShoulderResolutionMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetShoulderResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShoulderResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShoulderResolutionMaxValue();
      }
    else
      {
      tempr = op->vtkEllipticalButtonSource::GetShoulderResolutionMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetShoulderResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShoulderResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShoulderResolution();
      }
    else
      {
      tempr = op->vtkEllipticalButtonSource::GetShoulderResolution();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_SetRadialRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadialRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRadialRatio(temp0);
      }
    else
      {
      op->vtkEllipticalButtonSource::SetRadialRatio(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetRadialRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadialRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRadialRatioMinValue();
      }
    else
      {
      tempr = op->vtkEllipticalButtonSource::GetRadialRatioMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetRadialRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadialRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRadialRatioMaxValue();
      }
    else
      {
      tempr = op->vtkEllipticalButtonSource::GetRadialRatioMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetRadialRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadialRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRadialRatio();
      }
    else
      {
      tempr = op->vtkEllipticalButtonSource::GetRadialRatio();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkEllipticalButtonSource_Methods[] = {
  {(char*)"GetClassName", PyvtkEllipticalButtonSource_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkEllipticalButtonSource_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkEllipticalButtonSource_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkEllipticalButtonSource\nC++: vtkEllipticalButtonSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkEllipticalButtonSource_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkEllipticalButtonSource\nC++: vtkEllipticalButtonSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetWidth", PyvtkEllipticalButtonSource_SetWidth, 1,
   (char*)"V.SetWidth(float)\nC++: void SetWidth(double)\n\nSet/Get the width of the button (the x-ellipsoid axis length *\n2).\n"},
  {(char*)"GetWidthMinValue", PyvtkEllipticalButtonSource_GetWidthMinValue, 1,
   (char*)"V.GetWidthMinValue() -> float\nC++: double GetWidthMinValue()\n\nSet/Get the width of the button (the x-ellipsoid axis length *\n2).\n"},
  {(char*)"GetWidthMaxValue", PyvtkEllipticalButtonSource_GetWidthMaxValue, 1,
   (char*)"V.GetWidthMaxValue() -> float\nC++: double GetWidthMaxValue()\n\nSet/Get the width of the button (the x-ellipsoid axis length *\n2).\n"},
  {(char*)"GetWidth", PyvtkEllipticalButtonSource_GetWidth, 1,
   (char*)"V.GetWidth() -> float\nC++: double GetWidth()\n\nSet/Get the width of the button (the x-ellipsoid axis length *\n2).\n"},
  {(char*)"SetHeight", PyvtkEllipticalButtonSource_SetHeight, 1,
   (char*)"V.SetHeight(float)\nC++: void SetHeight(double)\n\nSet/Get the height of the button (the y-ellipsoid axis length *\n2).\n"},
  {(char*)"GetHeightMinValue", PyvtkEllipticalButtonSource_GetHeightMinValue, 1,
   (char*)"V.GetHeightMinValue() -> float\nC++: double GetHeightMinValue()\n\nSet/Get the height of the button (the y-ellipsoid axis length *\n2).\n"},
  {(char*)"GetHeightMaxValue", PyvtkEllipticalButtonSource_GetHeightMaxValue, 1,
   (char*)"V.GetHeightMaxValue() -> float\nC++: double GetHeightMaxValue()\n\nSet/Get the height of the button (the y-ellipsoid axis length *\n2).\n"},
  {(char*)"GetHeight", PyvtkEllipticalButtonSource_GetHeight, 1,
   (char*)"V.GetHeight() -> float\nC++: double GetHeight()\n\nSet/Get the height of the button (the y-ellipsoid axis length *\n2).\n"},
  {(char*)"SetDepth", PyvtkEllipticalButtonSource_SetDepth, 1,
   (char*)"V.SetDepth(float)\nC++: void SetDepth(double)\n\nSet/Get the depth of the button (the z-eliipsoid axis length).\n"},
  {(char*)"GetDepthMinValue", PyvtkEllipticalButtonSource_GetDepthMinValue, 1,
   (char*)"V.GetDepthMinValue() -> float\nC++: double GetDepthMinValue()\n\nSet/Get the depth of the button (the z-eliipsoid axis length).\n"},
  {(char*)"GetDepthMaxValue", PyvtkEllipticalButtonSource_GetDepthMaxValue, 1,
   (char*)"V.GetDepthMaxValue() -> float\nC++: double GetDepthMaxValue()\n\nSet/Get the depth of the button (the z-eliipsoid axis length).\n"},
  {(char*)"GetDepth", PyvtkEllipticalButtonSource_GetDepth, 1,
   (char*)"V.GetDepth() -> float\nC++: double GetDepth()\n\nSet/Get the depth of the button (the z-eliipsoid axis length).\n"},
  {(char*)"SetCircumferentialResolution", PyvtkEllipticalButtonSource_SetCircumferentialResolution, 1,
   (char*)"V.SetCircumferentialResolution(int)\nC++: void SetCircumferentialResolution(int)\n\nSpecify the resolution of the button in the circumferential\ndirection.\n"},
  {(char*)"GetCircumferentialResolutionMinValue", PyvtkEllipticalButtonSource_GetCircumferentialResolutionMinValue, 1,
   (char*)"V.GetCircumferentialResolutionMinValue() -> int\nC++: int GetCircumferentialResolutionMinValue()\n\nSpecify the resolution of the button in the circumferential\ndirection.\n"},
  {(char*)"GetCircumferentialResolutionMaxValue", PyvtkEllipticalButtonSource_GetCircumferentialResolutionMaxValue, 1,
   (char*)"V.GetCircumferentialResolutionMaxValue() -> int\nC++: int GetCircumferentialResolutionMaxValue()\n\nSpecify the resolution of the button in the circumferential\ndirection.\n"},
  {(char*)"GetCircumferentialResolution", PyvtkEllipticalButtonSource_GetCircumferentialResolution, 1,
   (char*)"V.GetCircumferentialResolution() -> int\nC++: int GetCircumferentialResolution()\n\nSpecify the resolution of the button in the circumferential\ndirection.\n"},
  {(char*)"SetTextureResolution", PyvtkEllipticalButtonSource_SetTextureResolution, 1,
   (char*)"V.SetTextureResolution(int)\nC++: void SetTextureResolution(int)\n\nSpecify the resolution of the texture in the radial direction in\nthe texture region.\n"},
  {(char*)"GetTextureResolutionMinValue", PyvtkEllipticalButtonSource_GetTextureResolutionMinValue, 1,
   (char*)"V.GetTextureResolutionMinValue() -> int\nC++: int GetTextureResolutionMinValue()\n\nSpecify the resolution of the texture in the radial direction in\nthe texture region.\n"},
  {(char*)"GetTextureResolutionMaxValue", PyvtkEllipticalButtonSource_GetTextureResolutionMaxValue, 1,
   (char*)"V.GetTextureResolutionMaxValue() -> int\nC++: int GetTextureResolutionMaxValue()\n\nSpecify the resolution of the texture in the radial direction in\nthe texture region.\n"},
  {(char*)"GetTextureResolution", PyvtkEllipticalButtonSource_GetTextureResolution, 1,
   (char*)"V.GetTextureResolution() -> int\nC++: int GetTextureResolution()\n\nSpecify the resolution of the texture in the radial direction in\nthe texture region.\n"},
  {(char*)"SetShoulderResolution", PyvtkEllipticalButtonSource_SetShoulderResolution, 1,
   (char*)"V.SetShoulderResolution(int)\nC++: void SetShoulderResolution(int)\n\nSpecify the resolution of the texture in the radial direction in\nthe shoulder region.\n"},
  {(char*)"GetShoulderResolutionMinValue", PyvtkEllipticalButtonSource_GetShoulderResolutionMinValue, 1,
   (char*)"V.GetShoulderResolutionMinValue() -> int\nC++: int GetShoulderResolutionMinValue()\n\nSpecify the resolution of the texture in the radial direction in\nthe shoulder region.\n"},
  {(char*)"GetShoulderResolutionMaxValue", PyvtkEllipticalButtonSource_GetShoulderResolutionMaxValue, 1,
   (char*)"V.GetShoulderResolutionMaxValue() -> int\nC++: int GetShoulderResolutionMaxValue()\n\nSpecify the resolution of the texture in the radial direction in\nthe shoulder region.\n"},
  {(char*)"GetShoulderResolution", PyvtkEllipticalButtonSource_GetShoulderResolution, 1,
   (char*)"V.GetShoulderResolution() -> int\nC++: int GetShoulderResolution()\n\nSpecify the resolution of the texture in the radial direction in\nthe shoulder region.\n"},
  {(char*)"SetRadialRatio", PyvtkEllipticalButtonSource_SetRadialRatio, 1,
   (char*)"V.SetRadialRatio(float)\nC++: void SetRadialRatio(double)\n\nSet/Get the radial ratio. This is the measure of the radius of\nthe outer ellipsoid to the inner ellipsoid of the button. The\nouter ellipsoid is the boundary of the button defined by the\nheight and width. The inner ellipsoid circumscribes the texture\nregion. Larger RadialRatio's cause the button to be more rounded\n(and the texture region to be smaller); smaller ratios produce\nsharply curved shoulders with a larger texture region.\n"},
  {(char*)"GetRadialRatioMinValue", PyvtkEllipticalButtonSource_GetRadialRatioMinValue, 1,
   (char*)"V.GetRadialRatioMinValue() -> float\nC++: double GetRadialRatioMinValue()\n\nSet/Get the radial ratio. This is the measure of the radius of\nthe outer ellipsoid to the inner ellipsoid of the button. The\nouter ellipsoid is the boundary of the button defined by the\nheight and width. The inner ellipsoid circumscribes the texture\nregion. Larger RadialRatio's cause the button to be more rounded\n(and the texture region to be smaller); smaller ratios produce\nsharply curved shoulders with a larger texture region.\n"},
  {(char*)"GetRadialRatioMaxValue", PyvtkEllipticalButtonSource_GetRadialRatioMaxValue, 1,
   (char*)"V.GetRadialRatioMaxValue() -> float\nC++: double GetRadialRatioMaxValue()\n\nSet/Get the radial ratio. This is the measure of the radius of\nthe outer ellipsoid to the inner ellipsoid of the button. The\nouter ellipsoid is the boundary of the button defined by the\nheight and width. The inner ellipsoid circumscribes the texture\nregion. Larger RadialRatio's cause the button to be more rounded\n(and the texture region to be smaller); smaller ratios produce\nsharply curved shoulders with a larger texture region.\n"},
  {(char*)"GetRadialRatio", PyvtkEllipticalButtonSource_GetRadialRatio, 1,
   (char*)"V.GetRadialRatio() -> float\nC++: double GetRadialRatio()\n\nSet/Get the radial ratio. This is the measure of the radius of\nthe outer ellipsoid to the inner ellipsoid of the button. The\nouter ellipsoid is the boundary of the button defined by the\nheight and width. The inner ellipsoid circumscribes the texture\nregion. Larger RadialRatio's cause the button to be more rounded\n(and the texture region to be smaller); smaller ratios produce\nsharply curved shoulders with a larger texture region.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkEllipticalButtonSource_StaticNew()
{
  return vtkEllipticalButtonSource::New();
}

PyObject *PyVTKClass_vtkEllipticalButtonSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkEllipticalButtonSource_StaticNew,
    PyvtkEllipticalButtonSource_Methods,
    "vtkEllipticalButtonSource", modulename,
    NULL, NULL,
    PyvtkEllipticalButtonSource_Doc(),
    PyVTKClass_vtkButtonSourceNew(modulename));
  return cls;
}

const char **PyvtkEllipticalButtonSource_Doc()
{
  static const char *docstring[] = {
    "vtkEllipticalButtonSource - create a ellipsoidal-shaped button\n\n",
    "Superclass: vtkButtonSource\n\n",
    "vtkEllipticalButtonSource creates a ellipsoidal shaped button with\ntexture coordinates suitable for application of a texture map. This\nprovides a way to make nice looking 3D buttons. The buttons are\nrepresented as vtkPolyData that includes texture coordinates and\nnormals. The button lies in the x-y plane.\n\nTo use this class you must define the major and minor axes lengths of\nan ellipsoid (expresse",
    "d as width (x), height (y) and depth (z)). The\nbutton has a rectangular mesh region in the center with texture\ncoordinates that range smoothly from (0,1). (This flat region is\ncalled the texture region.) The outer, curved portion of the button\n(called the shoulder) has texture coordinates set to a user specified\nvalue (by default (0,0). (This results in coloring the button curve\nthe same color as ",
    "the (s,t) location of the texture map.) The\nresolution in the radial direction, the texture region, and the\nshoulder region must also be set. The button can be moved by\nspecifying an origin.\n\nSee Also:\n\nvtkButtonSource vtkRectangularButtonSource\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkEllipticalButtonSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkEllipticalButtonSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkEllipticalButtonSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

