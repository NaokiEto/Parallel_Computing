// python wrapper for vtkScalarBarActor
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
#include "vtkScalarBarActor.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkScalarBarActor(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkScalarBarActor(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkScalarBarActorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkScalarBarActorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkActor2DNew
extern "C" { PyObject *PyVTKClass_vtkActor2DNew(const char *); }
#define DECLARED_PyVTKClass_vtkActor2DNew
#endif

static const char **PyvtkScalarBarActor_Doc();


static PyObject *
PyvtkScalarBarActor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

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
      tempr = op->vtkScalarBarActor::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

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
      tempr = op->vtkScalarBarActor::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  vtkScalarBarActor *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkScalarBarActor::NewInstance();
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
PyvtkScalarBarActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkScalarBarActor *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkScalarBarActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  vtkViewport *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      tempr = op->RenderOpaqueGeometry(temp0);
      }
    else
      {
      tempr = op->vtkScalarBarActor::RenderOpaqueGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  vtkViewport *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      tempr = op->RenderTranslucentPolygonalGeometry(temp0);
      }
    else
      {
      tempr = op->vtkScalarBarActor::RenderTranslucentPolygonalGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  vtkViewport *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      tempr = op->RenderOverlay(temp0);
      }
    else
      {
      tempr = op->vtkScalarBarActor::RenderOverlay(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->HasTranslucentPolygonalGeometry();
      }
    else
      {
      tempr = op->vtkScalarBarActor::HasTranslucentPolygonalGeometry();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  vtkWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
    {
    if (ap.IsBound())
      {
      op->ReleaseGraphicsResources(temp0);
      }
    else
      {
      op->vtkScalarBarActor::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

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
      op->vtkScalarBarActor::SetLookupTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

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
      tempr = op->vtkScalarBarActor::GetLookupTable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetUseOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseOpacity(temp0);
      }
    else
      {
      op->vtkScalarBarActor::SetUseOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetUseOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseOpacity();
      }
    else
      {
      tempr = op->vtkScalarBarActor::GetUseOpacity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_UseOpacityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseOpacityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseOpacityOn();
      }
    else
      {
      op->vtkScalarBarActor::UseOpacityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_UseOpacityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseOpacityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseOpacityOff();
      }
    else
      {
      op->vtkScalarBarActor::UseOpacityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetMaximumNumberOfColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumNumberOfColors(temp0);
      }
    else
      {
      op->vtkScalarBarActor::SetMaximumNumberOfColors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetMaximumNumberOfColorsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfColorsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumNumberOfColorsMinValue();
      }
    else
      {
      tempr = op->vtkScalarBarActor::GetMaximumNumberOfColorsMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetMaximumNumberOfColorsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfColorsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumNumberOfColorsMaxValue();
      }
    else
      {
      tempr = op->vtkScalarBarActor::GetMaximumNumberOfColorsMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetMaximumNumberOfColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumNumberOfColors();
      }
    else
      {
      tempr = op->vtkScalarBarActor::GetMaximumNumberOfColors();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetNumberOfLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfLabels(temp0);
      }
    else
      {
      op->vtkScalarBarActor::SetNumberOfLabels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetNumberOfLabelsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLabelsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfLabelsMinValue();
      }
    else
      {
      tempr = op->vtkScalarBarActor::GetNumberOfLabelsMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetNumberOfLabelsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLabelsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfLabelsMaxValue();
      }
    else
      {
      tempr = op->vtkScalarBarActor::GetNumberOfLabelsMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetNumberOfLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfLabels();
      }
    else
      {
      tempr = op->vtkScalarBarActor::GetNumberOfLabels();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOrientation(temp0);
      }
    else
      {
      op->vtkScalarBarActor::SetOrientation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetOrientationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOrientationMinValue();
      }
    else
      {
      tempr = op->vtkScalarBarActor::GetOrientationMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetOrientationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOrientationMaxValue();
      }
    else
      {
      tempr = op->vtkScalarBarActor::GetOrientationMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOrientation();
      }
    else
      {
      tempr = op->vtkScalarBarActor::GetOrientation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetOrientationToHorizontal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationToHorizontal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOrientationToHorizontal();
      }
    else
      {
      op->vtkScalarBarActor::SetOrientationToHorizontal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetOrientationToVertical(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationToVertical");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOrientationToVertical();
      }
    else
      {
      op->vtkScalarBarActor::SetOrientationToVertical();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->SetTitleTextProperty(temp0);
      }
    else
      {
      op->vtkScalarBarActor::SetTitleTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  vtkTextProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTitleTextProperty();
      }
    else
      {
      tempr = op->vtkScalarBarActor::GetTitleTextProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->SetLabelTextProperty(temp0);
      }
    else
      {
      op->vtkScalarBarActor::SetLabelTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  vtkTextProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLabelTextProperty();
      }
    else
      {
      tempr = op->vtkScalarBarActor::GetLabelTextProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabelFormat(temp0);
      }
    else
      {
      op->vtkScalarBarActor::SetLabelFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLabelFormat();
      }
    else
      {
      tempr = op->vtkScalarBarActor::GetLabelFormat();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTitle(temp0);
      }
    else
      {
      op->vtkScalarBarActor::SetTitle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTitle();
      }
    else
      {
      tempr = op->vtkScalarBarActor::GetTitle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetComponentTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComponentTitle(temp0);
      }
    else
      {
      op->vtkScalarBarActor::SetComponentTitle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetComponentTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComponentTitle();
      }
    else
      {
      tempr = op->vtkScalarBarActor::GetComponentTitle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkScalarBarActor::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetTextureGridWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureGridWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTextureGridWidth(temp0);
      }
    else
      {
      op->vtkScalarBarActor::SetTextureGridWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetTextureGridWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureGridWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextureGridWidth();
      }
    else
      {
      tempr = op->vtkScalarBarActor::GetTextureGridWidth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetTextureActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  vtkActor2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextureActor();
      }
    else
      {
      tempr = op->vtkScalarBarActor::GetTextureActor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetTextPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTextPosition(temp0);
      }
    else
      {
      op->vtkScalarBarActor::SetTextPosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetTextPositionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextPositionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextPositionMinValue();
      }
    else
      {
      tempr = op->vtkScalarBarActor::GetTextPositionMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetTextPositionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextPositionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextPositionMaxValue();
      }
    else
      {
      tempr = op->vtkScalarBarActor::GetTextPositionMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetTextPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextPosition();
      }
    else
      {
      tempr = op->vtkScalarBarActor::GetTextPosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetTextPositionToPrecedeScalarBar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextPositionToPrecedeScalarBar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTextPositionToPrecedeScalarBar();
      }
    else
      {
      op->vtkScalarBarActor::SetTextPositionToPrecedeScalarBar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetTextPositionToSucceedScalarBar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextPositionToSucceedScalarBar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTextPositionToSucceedScalarBar();
      }
    else
      {
      op->vtkScalarBarActor::SetTextPositionToSucceedScalarBar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetMaximumWidthInPixels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumWidthInPixels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumWidthInPixels(temp0);
      }
    else
      {
      op->vtkScalarBarActor::SetMaximumWidthInPixels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetMaximumWidthInPixels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumWidthInPixels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumWidthInPixels();
      }
    else
      {
      tempr = op->vtkScalarBarActor::GetMaximumWidthInPixels();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetMaximumHeightInPixels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumHeightInPixels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumHeightInPixels(temp0);
      }
    else
      {
      op->vtkScalarBarActor::SetMaximumHeightInPixels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetMaximumHeightInPixels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumHeightInPixels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumHeightInPixels();
      }
    else
      {
      tempr = op->vtkScalarBarActor::GetMaximumHeightInPixels();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkScalarBarActor_Methods[] = {
  {(char*)"GetClassName", PyvtkScalarBarActor_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkScalarBarActor_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkScalarBarActor_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkScalarBarActor\nC++: vtkScalarBarActor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkScalarBarActor_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkScalarBarActor\nC++: vtkScalarBarActor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkScalarBarActor_RenderOpaqueGeometry, 1,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport)\n\nDraw the scalar bar and annotation text to the screen.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkScalarBarActor_RenderTranslucentPolygonalGeometry, 1,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(vtkViewport *)\n\nDraw the scalar bar and annotation text to the screen.\n"},
  {(char*)"RenderOverlay", PyvtkScalarBarActor_RenderOverlay, 1,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport)\n\nDraw the scalar bar and annotation text to the screen.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkScalarBarActor_HasTranslucentPolygonalGeometry, 1,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkScalarBarActor_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {(char*)"SetLookupTable", PyvtkScalarBarActor_SetLookupTable, 1,
   (char*)"V.SetLookupTable(vtkScalarsToColors)\nC++: virtual void SetLookupTable(vtkScalarsToColors *)\n\nSet/Get the vtkLookupTable to use. The lookup table specifies the\nnumber of colors to use in the table (if not overridden), as well\nas the scalar range.\n"},
  {(char*)"GetLookupTable", PyvtkScalarBarActor_GetLookupTable, 1,
   (char*)"V.GetLookupTable() -> vtkScalarsToColors\nC++: vtkScalarsToColors *GetLookupTable()\n\nSet/Get the vtkLookupTable to use. The lookup table specifies the\nnumber of colors to use in the table (if not overridden), as well\nas the scalar range.\n"},
  {(char*)"SetUseOpacity", PyvtkScalarBarActor_SetUseOpacity, 1,
   (char*)"V.SetUseOpacity(int)\nC++: void SetUseOpacity(int a)\n\nShould be display the opacity as well. This is displayed by\nchanging the opacity of the scalar bar in accordance with the\nopacity of the given color. For clarity, a texture grid is placed\nin the background if Opacity is ON. You might also want to play\nwith SetTextureGridWith in that case. [Default: off]\n"},
  {(char*)"GetUseOpacity", PyvtkScalarBarActor_GetUseOpacity, 1,
   (char*)"V.GetUseOpacity() -> int\nC++: int GetUseOpacity()\n\nShould be display the opacity as well. This is displayed by\nchanging the opacity of the scalar bar in accordance with the\nopacity of the given color. For clarity, a texture grid is placed\nin the background if Opacity is ON. You might also want to play\nwith SetTextureGridWith in that case. [Default: off]\n"},
  {(char*)"UseOpacityOn", PyvtkScalarBarActor_UseOpacityOn, 1,
   (char*)"V.UseOpacityOn()\nC++: void UseOpacityOn()\n\nShould be display the opacity as well. This is displayed by\nchanging the opacity of the scalar bar in accordance with the\nopacity of the given color. For clarity, a texture grid is placed\nin the background if Opacity is ON. You might also want to play\nwith SetTextureGridWith in that case. [Default: off]\n"},
  {(char*)"UseOpacityOff", PyvtkScalarBarActor_UseOpacityOff, 1,
   (char*)"V.UseOpacityOff()\nC++: void UseOpacityOff()\n\nShould be display the opacity as well. This is displayed by\nchanging the opacity of the scalar bar in accordance with the\nopacity of the given color. For clarity, a texture grid is placed\nin the background if Opacity is ON. You might also want to play\nwith SetTextureGridWith in that case. [Default: off]\n"},
  {(char*)"SetMaximumNumberOfColors", PyvtkScalarBarActor_SetMaximumNumberOfColors, 1,
   (char*)"V.SetMaximumNumberOfColors(int)\nC++: void SetMaximumNumberOfColors(int)\n\nSet/Get the maximum number of scalar bar segments to show. This\nmay differ from the number of colors in the lookup table, in\nwhich case the colors are samples from the lookup table.\n"},
  {(char*)"GetMaximumNumberOfColorsMinValue", PyvtkScalarBarActor_GetMaximumNumberOfColorsMinValue, 1,
   (char*)"V.GetMaximumNumberOfColorsMinValue() -> int\nC++: int GetMaximumNumberOfColorsMinValue()\n\nSet/Get the maximum number of scalar bar segments to show. This\nmay differ from the number of colors in the lookup table, in\nwhich case the colors are samples from the lookup table.\n"},
  {(char*)"GetMaximumNumberOfColorsMaxValue", PyvtkScalarBarActor_GetMaximumNumberOfColorsMaxValue, 1,
   (char*)"V.GetMaximumNumberOfColorsMaxValue() -> int\nC++: int GetMaximumNumberOfColorsMaxValue()\n\nSet/Get the maximum number of scalar bar segments to show. This\nmay differ from the number of colors in the lookup table, in\nwhich case the colors are samples from the lookup table.\n"},
  {(char*)"GetMaximumNumberOfColors", PyvtkScalarBarActor_GetMaximumNumberOfColors, 1,
   (char*)"V.GetMaximumNumberOfColors() -> int\nC++: int GetMaximumNumberOfColors()\n\nSet/Get the maximum number of scalar bar segments to show. This\nmay differ from the number of colors in the lookup table, in\nwhich case the colors are samples from the lookup table.\n"},
  {(char*)"SetNumberOfLabels", PyvtkScalarBarActor_SetNumberOfLabels, 1,
   (char*)"V.SetNumberOfLabels(int)\nC++: void SetNumberOfLabels(int)\n\nSet/Get the number of annotation labels to show.\n"},
  {(char*)"GetNumberOfLabelsMinValue", PyvtkScalarBarActor_GetNumberOfLabelsMinValue, 1,
   (char*)"V.GetNumberOfLabelsMinValue() -> int\nC++: int GetNumberOfLabelsMinValue()\n\nSet/Get the number of annotation labels to show.\n"},
  {(char*)"GetNumberOfLabelsMaxValue", PyvtkScalarBarActor_GetNumberOfLabelsMaxValue, 1,
   (char*)"V.GetNumberOfLabelsMaxValue() -> int\nC++: int GetNumberOfLabelsMaxValue()\n\nSet/Get the number of annotation labels to show.\n"},
  {(char*)"GetNumberOfLabels", PyvtkScalarBarActor_GetNumberOfLabels, 1,
   (char*)"V.GetNumberOfLabels() -> int\nC++: int GetNumberOfLabels()\n\nSet/Get the number of annotation labels to show.\n"},
  {(char*)"SetOrientation", PyvtkScalarBarActor_SetOrientation, 1,
   (char*)"V.SetOrientation(int)\nC++: void SetOrientation(int)\n\nControl the orientation of the scalar bar.\n"},
  {(char*)"GetOrientationMinValue", PyvtkScalarBarActor_GetOrientationMinValue, 1,
   (char*)"V.GetOrientationMinValue() -> int\nC++: int GetOrientationMinValue()\n\nControl the orientation of the scalar bar.\n"},
  {(char*)"GetOrientationMaxValue", PyvtkScalarBarActor_GetOrientationMaxValue, 1,
   (char*)"V.GetOrientationMaxValue() -> int\nC++: int GetOrientationMaxValue()\n\nControl the orientation of the scalar bar.\n"},
  {(char*)"GetOrientation", PyvtkScalarBarActor_GetOrientation, 1,
   (char*)"V.GetOrientation() -> int\nC++: int GetOrientation()\n\nControl the orientation of the scalar bar.\n"},
  {(char*)"SetOrientationToHorizontal", PyvtkScalarBarActor_SetOrientationToHorizontal, 1,
   (char*)"V.SetOrientationToHorizontal()\nC++: void SetOrientationToHorizontal()\n\nControl the orientation of the scalar bar.\n"},
  {(char*)"SetOrientationToVertical", PyvtkScalarBarActor_SetOrientationToVertical, 1,
   (char*)"V.SetOrientationToVertical()\nC++: void SetOrientationToVertical()\n\nControl the orientation of the scalar bar.\n"},
  {(char*)"SetTitleTextProperty", PyvtkScalarBarActor_SetTitleTextProperty, 1,
   (char*)"V.SetTitleTextProperty(vtkTextProperty)\nC++: virtual void SetTitleTextProperty(vtkTextProperty *p)\n\nSet/Get the title text property.\n"},
  {(char*)"GetTitleTextProperty", PyvtkScalarBarActor_GetTitleTextProperty, 1,
   (char*)"V.GetTitleTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetTitleTextProperty()\n\nSet/Get the title text property.\n"},
  {(char*)"SetLabelTextProperty", PyvtkScalarBarActor_SetLabelTextProperty, 1,
   (char*)"V.SetLabelTextProperty(vtkTextProperty)\nC++: virtual void SetLabelTextProperty(vtkTextProperty *p)\n\nSet/Get the labels text property.\n"},
  {(char*)"GetLabelTextProperty", PyvtkScalarBarActor_GetLabelTextProperty, 1,
   (char*)"V.GetLabelTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetLabelTextProperty()\n\nSet/Get the labels text property.\n"},
  {(char*)"SetLabelFormat", PyvtkScalarBarActor_SetLabelFormat, 1,
   (char*)"V.SetLabelFormat(string)\nC++: void SetLabelFormat(char *)\n\nSet/Get the format with which to print the labels on the scalar\nbar.\n"},
  {(char*)"GetLabelFormat", PyvtkScalarBarActor_GetLabelFormat, 1,
   (char*)"V.GetLabelFormat() -> string\nC++: char *GetLabelFormat()\n\nSet/Get the format with which to print the labels on the scalar\nbar.\n"},
  {(char*)"SetTitle", PyvtkScalarBarActor_SetTitle, 1,
   (char*)"V.SetTitle(string)\nC++: void SetTitle(char *)\n\nSet/Get the title of the scalar bar actor,\n"},
  {(char*)"GetTitle", PyvtkScalarBarActor_GetTitle, 1,
   (char*)"V.GetTitle() -> string\nC++: char *GetTitle()\n\nSet/Get the title of the scalar bar actor,\n"},
  {(char*)"SetComponentTitle", PyvtkScalarBarActor_SetComponentTitle, 1,
   (char*)"V.SetComponentTitle(string)\nC++: void SetComponentTitle(char *)\n\nSet/Get the title for the component that is selected,\n"},
  {(char*)"GetComponentTitle", PyvtkScalarBarActor_GetComponentTitle, 1,
   (char*)"V.GetComponentTitle() -> string\nC++: char *GetComponentTitle()\n\nSet/Get the title for the component that is selected,\n"},
  {(char*)"ShallowCopy", PyvtkScalarBarActor_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop)\n\nShallow copy of a scalar bar actor. Overloads the virtual vtkProp\nmethod.\n"},
  {(char*)"SetTextureGridWidth", PyvtkScalarBarActor_SetTextureGridWidth, 1,
   (char*)"V.SetTextureGridWidth(float)\nC++: void SetTextureGridWidth(double a)\n\nSet the width of the texture grid. Used only if UseOpacity is ON.\n"},
  {(char*)"GetTextureGridWidth", PyvtkScalarBarActor_GetTextureGridWidth, 1,
   (char*)"V.GetTextureGridWidth() -> float\nC++: double GetTextureGridWidth()\n\nSet the width of the texture grid. Used only if UseOpacity is ON.\n"},
  {(char*)"GetTextureActor", PyvtkScalarBarActor_GetTextureActor, 1,
   (char*)"V.GetTextureActor() -> vtkActor2D\nC++: vtkActor2D *GetTextureActor()\n\nGet the texture actor.. you may want to change some properties on\nit\n"},
  {(char*)"SetTextPosition", PyvtkScalarBarActor_SetTextPosition, 1,
   (char*)"V.SetTextPosition(int)\nC++: void SetTextPosition(int)\n\nHave the text preceding the scalar bar or suceeding it ? Succeed\nimplies the that the text is Above scalar bar if orientation is\nhorizontal or Right of scalar bar if orientation is vertical.\nPrecede is the opposite\n"},
  {(char*)"GetTextPositionMinValue", PyvtkScalarBarActor_GetTextPositionMinValue, 1,
   (char*)"V.GetTextPositionMinValue() -> int\nC++: int GetTextPositionMinValue()\n\nHave the text preceding the scalar bar or suceeding it ? Succeed\nimplies the that the text is Above scalar bar if orientation is\nhorizontal or Right of scalar bar if orientation is vertical.\nPrecede is the opposite\n"},
  {(char*)"GetTextPositionMaxValue", PyvtkScalarBarActor_GetTextPositionMaxValue, 1,
   (char*)"V.GetTextPositionMaxValue() -> int\nC++: int GetTextPositionMaxValue()\n\nHave the text preceding the scalar bar or suceeding it ? Succeed\nimplies the that the text is Above scalar bar if orientation is\nhorizontal or Right of scalar bar if orientation is vertical.\nPrecede is the opposite\n"},
  {(char*)"GetTextPosition", PyvtkScalarBarActor_GetTextPosition, 1,
   (char*)"V.GetTextPosition() -> int\nC++: int GetTextPosition()\n\nHave the text preceding the scalar bar or suceeding it ? Succeed\nimplies the that the text is Above scalar bar if orientation is\nhorizontal or Right of scalar bar if orientation is vertical.\nPrecede is the opposite\n"},
  {(char*)"SetTextPositionToPrecedeScalarBar", PyvtkScalarBarActor_SetTextPositionToPrecedeScalarBar, 1,
   (char*)"V.SetTextPositionToPrecedeScalarBar()\nC++: virtual void SetTextPositionToPrecedeScalarBar()\n\nHave the text preceding the scalar bar or suceeding it ? Succeed\nimplies the that the text is Above scalar bar if orientation is\nhorizontal or Right of scalar bar if orientation is vertical.\nPrecede is the opposite\n"},
  {(char*)"SetTextPositionToSucceedScalarBar", PyvtkScalarBarActor_SetTextPositionToSucceedScalarBar, 1,
   (char*)"V.SetTextPositionToSucceedScalarBar()\nC++: virtual void SetTextPositionToSucceedScalarBar()\n\nHave the text preceding the scalar bar or suceeding it ? Succeed\nimplies the that the text is Above scalar bar if orientation is\nhorizontal or Right of scalar bar if orientation is vertical.\nPrecede is the opposite\n"},
  {(char*)"SetMaximumWidthInPixels", PyvtkScalarBarActor_SetMaximumWidthInPixels, 1,
   (char*)"V.SetMaximumWidthInPixels(int)\nC++: void SetMaximumWidthInPixels(int a)\n\nSet/Get the maximum width and height in pixels. Specifying the\nsize as a relative fraction of the viewport can sometimes\nundersirably strech the size of the actor too much. These methods\nallow the user to set bounds on the maximum size of the scalar\nbar in pixels along any direction. Defaults to unbounded.\n"},
  {(char*)"GetMaximumWidthInPixels", PyvtkScalarBarActor_GetMaximumWidthInPixels, 1,
   (char*)"V.GetMaximumWidthInPixels() -> int\nC++: int GetMaximumWidthInPixels()\n\nSet/Get the maximum width and height in pixels. Specifying the\nsize as a relative fraction of the viewport can sometimes\nundersirably strech the size of the actor too much. These methods\nallow the user to set bounds on the maximum size of the scalar\nbar in pixels along any direction. Defaults to unbounded.\n"},
  {(char*)"SetMaximumHeightInPixels", PyvtkScalarBarActor_SetMaximumHeightInPixels, 1,
   (char*)"V.SetMaximumHeightInPixels(int)\nC++: void SetMaximumHeightInPixels(int a)\n\nSet/Get the maximum width and height in pixels. Specifying the\nsize as a relative fraction of the viewport can sometimes\nundersirably strech the size of the actor too much. These methods\nallow the user to set bounds on the maximum size of the scalar\nbar in pixels along any direction. Defaults to unbounded.\n"},
  {(char*)"GetMaximumHeightInPixels", PyvtkScalarBarActor_GetMaximumHeightInPixels, 1,
   (char*)"V.GetMaximumHeightInPixels() -> int\nC++: int GetMaximumHeightInPixels()\n\nSet/Get the maximum width and height in pixels. Specifying the\nsize as a relative fraction of the viewport can sometimes\nundersirably strech the size of the actor too much. These methods\nallow the user to set bounds on the maximum size of the scalar\nbar in pixels along any direction. Defaults to unbounded.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkScalarBarActor_StaticNew()
{
  return vtkScalarBarActor::New();
}

PyObject *PyVTKClass_vtkScalarBarActorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkScalarBarActor_StaticNew,
    PyvtkScalarBarActor_Methods,
    "vtkScalarBarActor", modulename,
    NULL, NULL,
    PyvtkScalarBarActor_Doc(),
    PyVTKClass_vtkActor2DNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"PrecedeScalarBar", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"SucceedScalarBar", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkScalarBarActor_Doc()
{
  static const char *docstring[] = {
    "vtkScalarBarActor - Create a scalar bar with labels\n\n",
    "Superclass: vtkActor2D\n\n",
    "vtkScalarBarActor creates a scalar bar with annotation text. A scalar\nbar is a legend that indicates to the viewer the correspondence\nbetween color value and data value. The legend consists of a\nrectangular bar made of rectangular pieces each colored a constant\nvalue. Since vtkScalarBarActor is a subclass of vtkActor2D, it is\ndrawn in the image plane (i.e., in the renderer's viewport) on top of\nth",
    "e 3D graphics window.\n\nTo use vtkScalarBarActor you must associate a vtkScalarsToColors (or\nsubclass) with it. The lookup table defines the colors and the range\nof scalar values used to map scalar data.  Typically, the number of\ncolors shown in the scalar bar is not equal to the number of colors\nin the lookup table, in which case sampling of the lookup table is\nperformed.\n\nOther optional capabilit",
    "ies include specifying the fraction of the\nviewport size (both x and y directions) which will control the size\nof the scalar bar and the number of annotation labels. The actual\nposition of the scalar bar on the screen is controlled by using the\nvtkActor2D::SetPosition() method (by default the scalar bar is\ncentered in the viewport).  Other features include the ability to\norient the scalar bar hori",
    "zontally of vertically and controlling the\nformat (printf style) with which to print the labels on the scalar\nbar. Also, the vtkScalarBarActor's property is applied to the scalar\nbar and annotation (including layer, and compositing operator).\n\nSet the text property/attributes of the title and the labels through\nthe vtkTextProperty objects associated to this actor.\n\nCaveats:\n\nIf a vtkLogLookupTable",
    " is specified as the lookup table to use, then\nthe labels are created using a logarithmic scale.\n\nSee Also:\n\nvtkActor2D vtkTextProperty vtkTextMapper vtkPolyDataMapper2D\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkScalarBarActor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkScalarBarActorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkScalarBarActor", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_ORIENT_HORIZONTAL", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_ORIENT_VERTICAL", o) != 0)
    {
    Py_DECREF(o);
    }

}

