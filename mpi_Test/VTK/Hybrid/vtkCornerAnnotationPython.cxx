// python wrapper for vtkCornerAnnotation
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
#include "vtkCornerAnnotation.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCornerAnnotation(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCornerAnnotation(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCornerAnnotationNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCornerAnnotationNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkActor2DNew
extern "C" { PyObject *PyVTKClass_vtkActor2DNew(const char *); }
#define DECLARED_PyVTKClass_vtkActor2DNew
#endif

static const char **PyvtkCornerAnnotation_Doc();


static PyObject *
PyvtkCornerAnnotation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

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
      tempr = op->vtkCornerAnnotation::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

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
      tempr = op->vtkCornerAnnotation::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  vtkCornerAnnotation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCornerAnnotation::NewInstance();
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
PyvtkCornerAnnotation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCornerAnnotation *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCornerAnnotation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

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
      tempr = op->vtkCornerAnnotation::RenderOpaqueGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

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
      tempr = op->vtkCornerAnnotation::RenderTranslucentPolygonalGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

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
      tempr = op->vtkCornerAnnotation::RenderOverlay(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

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
      tempr = op->vtkCornerAnnotation::HasTranslucentPolygonalGeometry();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SetMaximumLineHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumLineHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumLineHeight(temp0);
      }
    else
      {
      op->vtkCornerAnnotation::SetMaximumLineHeight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetMaximumLineHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLineHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumLineHeight();
      }
    else
      {
      tempr = op->vtkCornerAnnotation::GetMaximumLineHeight();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SetMinimumFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinimumFontSize(temp0);
      }
    else
      {
      op->vtkCornerAnnotation::SetMinimumFontSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetMinimumFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinimumFontSize();
      }
    else
      {
      tempr = op->vtkCornerAnnotation::GetMinimumFontSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SetMaximumFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumFontSize(temp0);
      }
    else
      {
      op->vtkCornerAnnotation::SetMaximumFontSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetMaximumFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumFontSize();
      }
    else
      {
      tempr = op->vtkCornerAnnotation::GetMaximumFontSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SetLinearFontScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLinearFontScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLinearFontScaleFactor(temp0);
      }
    else
      {
      op->vtkCornerAnnotation::SetLinearFontScaleFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetLinearFontScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinearFontScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLinearFontScaleFactor();
      }
    else
      {
      tempr = op->vtkCornerAnnotation::GetLinearFontScaleFactor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SetNonlinearFontScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNonlinearFontScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNonlinearFontScaleFactor(temp0);
      }
    else
      {
      op->vtkCornerAnnotation::SetNonlinearFontScaleFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetNonlinearFontScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonlinearFontScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNonlinearFontScaleFactor();
      }
    else
      {
      tempr = op->vtkCornerAnnotation::GetNonlinearFontScaleFactor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

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
      op->vtkCornerAnnotation::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SetText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  int temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetText(temp0, temp1);
      }
    else
      {
      op->vtkCornerAnnotation::SetText(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetText(temp0);
      }
    else
      {
      tempr = op->vtkCornerAnnotation::GetText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_ClearAllTexts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearAllTexts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearAllTexts();
      }
    else
      {
      op->vtkCornerAnnotation::ClearAllTexts();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_CopyAllTextsFrom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAllTextsFrom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  vtkCornerAnnotation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCornerAnnotation"))
    {
    if (ap.IsBound())
      {
      op->CopyAllTextsFrom(temp0);
      }
    else
      {
      op->vtkCornerAnnotation::CopyAllTextsFrom(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SetImageActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  vtkImageActor *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageActor"))
    {
    if (ap.IsBound())
      {
      op->SetImageActor(temp0);
      }
    else
      {
      op->vtkCornerAnnotation::SetImageActor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetImageActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  vtkImageActor *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetImageActor();
      }
    else
      {
      tempr = op->vtkCornerAnnotation::GetImageActor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SetWindowLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  vtkImageMapToWindowLevelColors *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageMapToWindowLevelColors"))
    {
    if (ap.IsBound())
      {
      op->SetWindowLevel(temp0);
      }
    else
      {
      op->vtkCornerAnnotation::SetWindowLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetWindowLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  vtkImageMapToWindowLevelColors *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWindowLevel();
      }
    else
      {
      tempr = op->vtkCornerAnnotation::GetWindowLevel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SetLevelShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLevelShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLevelShift(temp0);
      }
    else
      {
      op->vtkCornerAnnotation::SetLevelShift(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetLevelShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevelShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLevelShift();
      }
    else
      {
      tempr = op->vtkCornerAnnotation::GetLevelShift();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SetLevelScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLevelScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLevelScale(temp0);
      }
    else
      {
      op->vtkCornerAnnotation::SetLevelScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetLevelScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevelScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLevelScale();
      }
    else
      {
      tempr = op->vtkCornerAnnotation::GetLevelScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->SetTextProperty(temp0);
      }
    else
      {
      op->vtkCornerAnnotation::SetTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  vtkTextProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextProperty();
      }
    else
      {
      tempr = op->vtkCornerAnnotation::GetTextProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_ShowSliceAndImageOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowSliceAndImageOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShowSliceAndImageOn();
      }
    else
      {
      op->vtkCornerAnnotation::ShowSliceAndImageOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_ShowSliceAndImageOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowSliceAndImageOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShowSliceAndImageOff();
      }
    else
      {
      op->vtkCornerAnnotation::ShowSliceAndImageOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SetShowSliceAndImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowSliceAndImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShowSliceAndImage(temp0);
      }
    else
      {
      op->vtkCornerAnnotation::SetShowSliceAndImage(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetShowSliceAndImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowSliceAndImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShowSliceAndImage();
      }
    else
      {
      tempr = op->vtkCornerAnnotation::GetShowSliceAndImage();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCornerAnnotation_Methods[] = {
  {(char*)"GetClassName", PyvtkCornerAnnotation_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCornerAnnotation_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCornerAnnotation_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCornerAnnotation\nC++: vtkCornerAnnotation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCornerAnnotation_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCornerAnnotation\nC++: vtkCornerAnnotation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkCornerAnnotation_RenderOpaqueGeometry, 1,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport)\n\nDraw the scalar bar and annotation text to the screen.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkCornerAnnotation_RenderTranslucentPolygonalGeometry, 1,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(vtkViewport *)\n\nDraw the scalar bar and annotation text to the screen.\n"},
  {(char*)"RenderOverlay", PyvtkCornerAnnotation_RenderOverlay, 1,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport)\n\nDraw the scalar bar and annotation text to the screen.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkCornerAnnotation_HasTranslucentPolygonalGeometry, 1,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {(char*)"SetMaximumLineHeight", PyvtkCornerAnnotation_SetMaximumLineHeight, 1,
   (char*)"V.SetMaximumLineHeight(float)\nC++: void SetMaximumLineHeight(double a)\n\nSet/Get the maximum height of a line of text as a percentage of\nthe vertical area allocated to this scaled text actor. Defaults\nto 1.0\n"},
  {(char*)"GetMaximumLineHeight", PyvtkCornerAnnotation_GetMaximumLineHeight, 1,
   (char*)"V.GetMaximumLineHeight() -> float\nC++: double GetMaximumLineHeight()\n\nSet/Get the maximum height of a line of text as a percentage of\nthe vertical area allocated to this scaled text actor. Defaults\nto 1.0\n"},
  {(char*)"SetMinimumFontSize", PyvtkCornerAnnotation_SetMinimumFontSize, 1,
   (char*)"V.SetMinimumFontSize(int)\nC++: void SetMinimumFontSize(int a)\n\nSet/Get the minimum/maximum size font that will be shown. If the\nfont drops below the minimum size it will not be rendered.\n"},
  {(char*)"GetMinimumFontSize", PyvtkCornerAnnotation_GetMinimumFontSize, 1,
   (char*)"V.GetMinimumFontSize() -> int\nC++: int GetMinimumFontSize()\n\nSet/Get the minimum/maximum size font that will be shown. If the\nfont drops below the minimum size it will not be rendered.\n"},
  {(char*)"SetMaximumFontSize", PyvtkCornerAnnotation_SetMaximumFontSize, 1,
   (char*)"V.SetMaximumFontSize(int)\nC++: void SetMaximumFontSize(int a)\n\nSet/Get the minimum/maximum size font that will be shown. If the\nfont drops below the minimum size it will not be rendered.\n"},
  {(char*)"GetMaximumFontSize", PyvtkCornerAnnotation_GetMaximumFontSize, 1,
   (char*)"V.GetMaximumFontSize() -> int\nC++: int GetMaximumFontSize()\n\nSet/Get the minimum/maximum size font that will be shown. If the\nfont drops below the minimum size it will not be rendered.\n"},
  {(char*)"SetLinearFontScaleFactor", PyvtkCornerAnnotation_SetLinearFontScaleFactor, 1,
   (char*)"V.SetLinearFontScaleFactor(float)\nC++: void SetLinearFontScaleFactor(double a)\n\nSet/Get font scaling factors The font size, f, is calculated as\nthe largest possible value such that the annotations for the\ngiven viewport do not overlap. This font size is scaled\nnon-linearly with the viewport size, to maintain an acceptable\nreadable size at larger viewport sizes, without being too big. f'\n= linearScale * pow(f,nonlinearScale)\n"},
  {(char*)"GetLinearFontScaleFactor", PyvtkCornerAnnotation_GetLinearFontScaleFactor, 1,
   (char*)"V.GetLinearFontScaleFactor() -> float\nC++: double GetLinearFontScaleFactor()\n\nSet/Get font scaling factors The font size, f, is calculated as\nthe largest possible value such that the annotations for the\ngiven viewport do not overlap. This font size is scaled\nnon-linearly with the viewport size, to maintain an acceptable\nreadable size at larger viewport sizes, without being too big. f'\n= linearScale * pow(f,nonlinearScale)\n"},
  {(char*)"SetNonlinearFontScaleFactor", PyvtkCornerAnnotation_SetNonlinearFontScaleFactor, 1,
   (char*)"V.SetNonlinearFontScaleFactor(float)\nC++: void SetNonlinearFontScaleFactor(double a)\n\nSet/Get font scaling factors The font size, f, is calculated as\nthe largest possible value such that the annotations for the\ngiven viewport do not overlap. This font size is scaled\nnon-linearly with the viewport size, to maintain an acceptable\nreadable size at larger viewport sizes, without being too big. f'\n= linearScale * pow(f,nonlinearScale)\n"},
  {(char*)"GetNonlinearFontScaleFactor", PyvtkCornerAnnotation_GetNonlinearFontScaleFactor, 1,
   (char*)"V.GetNonlinearFontScaleFactor() -> float\nC++: double GetNonlinearFontScaleFactor()\n\nSet/Get font scaling factors The font size, f, is calculated as\nthe largest possible value such that the annotations for the\ngiven viewport do not overlap. This font size is scaled\nnon-linearly with the viewport size, to maintain an acceptable\nreadable size at larger viewport sizes, without being too big. f'\n= linearScale * pow(f,nonlinearScale)\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkCornerAnnotation_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {(char*)"SetText", PyvtkCornerAnnotation_SetText, 1,
   (char*)"V.SetText(int, string)\nC++: void SetText(int i, const char *text)\n\nSet/Get the text to be displayed for each corner\n"},
  {(char*)"GetText", PyvtkCornerAnnotation_GetText, 1,
   (char*)"V.GetText(int) -> string\nC++: const char *GetText(int i)\n\nSet/Get the text to be displayed for each corner\n"},
  {(char*)"ClearAllTexts", PyvtkCornerAnnotation_ClearAllTexts, 1,
   (char*)"V.ClearAllTexts()\nC++: void ClearAllTexts()\n\nSet/Get the text to be displayed for each corner\n"},
  {(char*)"CopyAllTextsFrom", PyvtkCornerAnnotation_CopyAllTextsFrom, 1,
   (char*)"V.CopyAllTextsFrom(vtkCornerAnnotation)\nC++: void CopyAllTextsFrom(vtkCornerAnnotation *ca)\n\nSet/Get the text to be displayed for each corner\n"},
  {(char*)"SetImageActor", PyvtkCornerAnnotation_SetImageActor, 1,
   (char*)"V.SetImageActor(vtkImageActor)\nC++: void SetImageActor(vtkImageActor *)\n\nSet an image actor to look at for slice information\n"},
  {(char*)"GetImageActor", PyvtkCornerAnnotation_GetImageActor, 1,
   (char*)"V.GetImageActor() -> vtkImageActor\nC++: vtkImageActor *GetImageActor()\n\nSet an image actor to look at for slice information\n"},
  {(char*)"SetWindowLevel", PyvtkCornerAnnotation_SetWindowLevel, 1,
   (char*)"V.SetWindowLevel(vtkImageMapToWindowLevelColors)\nC++: void SetWindowLevel(vtkImageMapToWindowLevelColors *)\n\nSet an instance of vtkImageMapToWindowLevelColors to use for\nlooking at window level changes\n"},
  {(char*)"GetWindowLevel", PyvtkCornerAnnotation_GetWindowLevel, 1,
   (char*)"V.GetWindowLevel() -> vtkImageMapToWindowLevelColors\nC++: vtkImageMapToWindowLevelColors *GetWindowLevel()\n\nSet an instance of vtkImageMapToWindowLevelColors to use for\nlooking at window level changes\n"},
  {(char*)"SetLevelShift", PyvtkCornerAnnotation_SetLevelShift, 1,
   (char*)"V.SetLevelShift(float)\nC++: void SetLevelShift(double a)\n\nSet the value to shift the level by.\n"},
  {(char*)"GetLevelShift", PyvtkCornerAnnotation_GetLevelShift, 1,
   (char*)"V.GetLevelShift() -> float\nC++: double GetLevelShift()\n\nSet the value to shift the level by.\n"},
  {(char*)"SetLevelScale", PyvtkCornerAnnotation_SetLevelScale, 1,
   (char*)"V.SetLevelScale(float)\nC++: void SetLevelScale(double a)\n\nSet the value to scale the level by.\n"},
  {(char*)"GetLevelScale", PyvtkCornerAnnotation_GetLevelScale, 1,
   (char*)"V.GetLevelScale() -> float\nC++: double GetLevelScale()\n\nSet the value to scale the level by.\n"},
  {(char*)"SetTextProperty", PyvtkCornerAnnotation_SetTextProperty, 1,
   (char*)"V.SetTextProperty(vtkTextProperty)\nC++: virtual void SetTextProperty(vtkTextProperty *p)\n\nSet/Get the text property of all corners.\n"},
  {(char*)"GetTextProperty", PyvtkCornerAnnotation_GetTextProperty, 1,
   (char*)"V.GetTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetTextProperty()\n\nSet/Get the text property of all corners.\n"},
  {(char*)"ShowSliceAndImageOn", PyvtkCornerAnnotation_ShowSliceAndImageOn, 1,
   (char*)"V.ShowSliceAndImageOn()\nC++: void ShowSliceAndImageOn()\n\nEven if there is an image actor, should `slice' and `image' be\ndisplayed?\n"},
  {(char*)"ShowSliceAndImageOff", PyvtkCornerAnnotation_ShowSliceAndImageOff, 1,
   (char*)"V.ShowSliceAndImageOff()\nC++: void ShowSliceAndImageOff()\n\nEven if there is an image actor, should `slice' and `image' be\ndisplayed?\n"},
  {(char*)"SetShowSliceAndImage", PyvtkCornerAnnotation_SetShowSliceAndImage, 1,
   (char*)"V.SetShowSliceAndImage(int)\nC++: void SetShowSliceAndImage(int a)\n\nEven if there is an image actor, should `slice' and `image' be\ndisplayed?\n"},
  {(char*)"GetShowSliceAndImage", PyvtkCornerAnnotation_GetShowSliceAndImage, 1,
   (char*)"V.GetShowSliceAndImage() -> int\nC++: int GetShowSliceAndImage()\n\nEven if there is an image actor, should `slice' and `image' be\ndisplayed?\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCornerAnnotation_StaticNew()
{
  return vtkCornerAnnotation::New();
}

PyObject *PyVTKClass_vtkCornerAnnotationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCornerAnnotation_StaticNew,
    PyvtkCornerAnnotation_Methods,
    "vtkCornerAnnotation", modulename,
    NULL, NULL,
    PyvtkCornerAnnotation_Doc(),
    PyVTKClass_vtkActor2DNew(modulename));
  return cls;
}

const char **PyvtkCornerAnnotation_Doc()
{
  static const char *docstring[] = {
    "vtkCornerAnnotation - text annotation in four corners\n\n",
    "Superclass: vtkActor2D\n\n",
    "This is an annotation object that manages four text actors / mappers\nto provide annotation in the four corners of a viewport\n\nSee Also:\n\nvtkActor2D vtkTextMapper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCornerAnnotation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCornerAnnotationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCornerAnnotation", o) != 0)
    {
    Py_DECREF(o);
    }

}

