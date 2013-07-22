// python wrapper for vtkAxesTransformRepresentation
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
#include "vtkAxesTransformRepresentation.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkAxesTransformRepresentation(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkAxesTransformRepresentation(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkAxesTransformRepresentationNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkAxesTransformRepresentationNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkWidgetRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkWidgetRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkWidgetRepresentationNew
#endif

static const char **PyvtkAxesTransformRepresentation_Doc();


static PyObject *
PyvtkAxesTransformRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

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
      tempr = op->vtkAxesTransformRepresentation::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesTransformRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

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
      tempr = op->vtkAxesTransformRepresentation::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesTransformRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

  vtkAxesTransformRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkAxesTransformRepresentation::NewInstance();
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
PyvtkAxesTransformRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkAxesTransformRepresentation *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkAxesTransformRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesTransformRepresentation_GetOriginRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

  vtkHandleRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOriginRepresentation();
      }
    else
      {
      tempr = op->vtkAxesTransformRepresentation::GetOriginRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesTransformRepresentation_GetSelectionRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

  vtkHandleRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectionRepresentation();
      }
    else
      {
      tempr = op->vtkAxesTransformRepresentation::GetSelectionRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesTransformRepresentation_GetOriginWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetOriginWorldPosition(temp0);
      }
    else
      {
      op->vtkAxesTransformRepresentation::GetOriginWorldPosition(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxesTransformRepresentation_SetOriginWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetOriginWorldPosition(temp0);
      }
    else
      {
      op->vtkAxesTransformRepresentation::SetOriginWorldPosition(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxesTransformRepresentation_SetOriginDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetOriginDisplayPosition(temp0);
      }
    else
      {
      op->vtkAxesTransformRepresentation::SetOriginDisplayPosition(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxesTransformRepresentation_GetOriginDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetOriginDisplayPosition(temp0);
      }
    else
      {
      op->vtkAxesTransformRepresentation::GetOriginDisplayPosition(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxesTransformRepresentation_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTolerance(temp0);
      }
    else
      {
      op->vtkAxesTransformRepresentation::SetTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxesTransformRepresentation_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetToleranceMinValue();
      }
    else
      {
      tempr = op->vtkAxesTransformRepresentation::GetToleranceMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesTransformRepresentation_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetToleranceMaxValue();
      }
    else
      {
      tempr = op->vtkAxesTransformRepresentation::GetToleranceMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesTransformRepresentation_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTolerance();
      }
    else
      {
      tempr = op->vtkAxesTransformRepresentation::GetTolerance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesTransformRepresentation_SetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

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
      op->vtkAxesTransformRepresentation::SetLabelFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxesTransformRepresentation_GetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

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
      tempr = op->vtkAxesTransformRepresentation::GetLabelFormat();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesTransformRepresentation_SetInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInteractionState(temp0);
      }
    else
      {
      op->vtkAxesTransformRepresentation::SetInteractionState(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxesTransformRepresentation_GetInteractionStateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionStateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInteractionStateMinValue();
      }
    else
      {
      tempr = op->vtkAxesTransformRepresentation::GetInteractionStateMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesTransformRepresentation_GetInteractionStateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionStateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInteractionStateMaxValue();
      }
    else
      {
      tempr = op->vtkAxesTransformRepresentation::GetInteractionStateMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesTransformRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkAxesTransformRepresentation::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxesTransformRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2 = 0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    if (ap.IsBound())
      {
      tempr = op->ComputeInteractionState(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkAxesTransformRepresentation::ComputeInteractionState(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesTransformRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->StartWidgetInteraction(temp0);
      }
    else
      {
      op->vtkAxesTransformRepresentation::StartWidgetInteraction(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxesTransformRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->WidgetInteraction(temp0);
      }
    else
      {
      op->vtkAxesTransformRepresentation::WidgetInteraction(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxesTransformRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

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
      op->vtkAxesTransformRepresentation::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxesTransformRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

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
      tempr = op->vtkAxesTransformRepresentation::RenderOpaqueGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesTransformRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

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
      tempr = op->vtkAxesTransformRepresentation::RenderTranslucentPolygonalGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesTransformRepresentation_SetLabelScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

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
      op->SetLabelScale(temp0, temp1, temp2);
      }
    else
      {
      op->vtkAxesTransformRepresentation::SetLabelScale(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAxesTransformRepresentation_SetLabelScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetLabelScale(temp0);
      }
    else
      {
      op->vtkAxesTransformRepresentation::SetLabelScale(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAxesTransformRepresentation_SetLabelScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkAxesTransformRepresentation_SetLabelScale_s1(self, args);
    case 1:
      return PyvtkAxesTransformRepresentation_SetLabelScale_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetLabelScale");
  return NULL;
}



static PyObject *
PyvtkAxesTransformRepresentation_GetLabelProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

  vtkProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLabelProperty();
      }
    else
      {
      tempr = op->vtkAxesTransformRepresentation::GetLabelProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAxesTransformRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkAxesTransformRepresentation_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK methods.\n"},
  {(char*)"IsA", PyvtkAxesTransformRepresentation_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK methods.\n"},
  {(char*)"NewInstance", PyvtkAxesTransformRepresentation_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkAxesTransformRepresentation\nC++: vtkAxesTransformRepresentation *NewInstance()\n\nStandard VTK methods.\n"},
  {(char*)"SafeDownCast", PyvtkAxesTransformRepresentation_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAxesTransformRepresentation\nC++: vtkAxesTransformRepresentation *SafeDownCast(vtkObject* o)\n\nStandard VTK methods.\n"},
  {(char*)"GetOriginRepresentation", PyvtkAxesTransformRepresentation_GetOriginRepresentation, 1,
   (char*)"V.GetOriginRepresentation() -> vtkHandleRepresentation\nC++: vtkHandleRepresentation *GetOriginRepresentation()\n\nSet/Get the two handle representations used for the\nvtkAxesTransformWidget. (Note: properties can be set by grabbing\nthese representations and setting the properties appropriately.)\n"},
  {(char*)"GetSelectionRepresentation", PyvtkAxesTransformRepresentation_GetSelectionRepresentation, 1,
   (char*)"V.GetSelectionRepresentation() -> vtkHandleRepresentation\nC++: vtkHandleRepresentation *GetSelectionRepresentation()\n\nSet/Get the two handle representations used for the\nvtkAxesTransformWidget. (Note: properties can be set by grabbing\nthese representations and setting the properties appropriately.)\n"},
  {(char*)"GetOriginWorldPosition", PyvtkAxesTransformRepresentation_GetOriginWorldPosition, 1,
   (char*)"V.GetOriginWorldPosition([float, float, float])\nC++: void GetOriginWorldPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"SetOriginWorldPosition", PyvtkAxesTransformRepresentation_SetOriginWorldPosition, 1,
   (char*)"V.SetOriginWorldPosition([float, float, float])\nC++: void SetOriginWorldPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"SetOriginDisplayPosition", PyvtkAxesTransformRepresentation_SetOriginDisplayPosition, 1,
   (char*)"V.SetOriginDisplayPosition([float, float, float])\nC++: void SetOriginDisplayPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"GetOriginDisplayPosition", PyvtkAxesTransformRepresentation_GetOriginDisplayPosition, 1,
   (char*)"V.GetOriginDisplayPosition([float, float, float])\nC++: void GetOriginDisplayPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"SetTolerance", PyvtkAxesTransformRepresentation_SetTolerance, 1,
   (char*)"V.SetTolerance(int)\nC++: void SetTolerance(int)\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the end points\nof the widget to be active.\n"},
  {(char*)"GetToleranceMinValue", PyvtkAxesTransformRepresentation_GetToleranceMinValue, 1,
   (char*)"V.GetToleranceMinValue() -> int\nC++: int GetToleranceMinValue()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the end points\nof the widget to be active.\n"},
  {(char*)"GetToleranceMaxValue", PyvtkAxesTransformRepresentation_GetToleranceMaxValue, 1,
   (char*)"V.GetToleranceMaxValue() -> int\nC++: int GetToleranceMaxValue()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the end points\nof the widget to be active.\n"},
  {(char*)"GetTolerance", PyvtkAxesTransformRepresentation_GetTolerance, 1,
   (char*)"V.GetTolerance() -> int\nC++: int GetTolerance()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the end points\nof the widget to be active.\n"},
  {(char*)"SetLabelFormat", PyvtkAxesTransformRepresentation_SetLabelFormat, 1,
   (char*)"V.SetLabelFormat(string)\nC++: void SetLabelFormat(char *)\n\nSpecify the format to use for labelling information during\ntransformation. Note that an empty string results in no label, or\na format string without a \"%\" character will not print numeric\nvalues.\n"},
  {(char*)"GetLabelFormat", PyvtkAxesTransformRepresentation_GetLabelFormat, 1,
   (char*)"V.GetLabelFormat() -> string\nC++: char *GetLabelFormat()\n\nSpecify the format to use for labelling information during\ntransformation. Note that an empty string results in no label, or\na format string without a \"%\" character will not print numeric\nvalues.\n"},
  {(char*)"SetInteractionState", PyvtkAxesTransformRepresentation_SetInteractionState, 1,
   (char*)"V.SetInteractionState(int)\nC++: void SetInteractionState(int)\n\nThe interaction state may be set from a widget (e.g.,\nvtkLineWidget2) or other object. This controls how the\ninteraction with the widget proceeds. Normally this method is\nused as part of a handshaking process with the widget: First\nComputeInteractionState() is invoked that returns a state based\non geometric considerations (i.e., cursor near a widget feature),\nthen based on events, the widget may modify this further.\n"},
  {(char*)"GetInteractionStateMinValue", PyvtkAxesTransformRepresentation_GetInteractionStateMinValue, 1,
   (char*)"V.GetInteractionStateMinValue() -> int\nC++: int GetInteractionStateMinValue()\n\nThe interaction state may be set from a widget (e.g.,\nvtkLineWidget2) or other object. This controls how the\ninteraction with the widget proceeds. Normally this method is\nused as part of a handshaking process with the widget: First\nComputeInteractionState() is invoked that returns a state based\non geometric considerations (i.e., cursor near a widget feature),\nthen based on events, the widget may modify this further.\n"},
  {(char*)"GetInteractionStateMaxValue", PyvtkAxesTransformRepresentation_GetInteractionStateMaxValue, 1,
   (char*)"V.GetInteractionStateMaxValue() -> int\nC++: int GetInteractionStateMaxValue()\n\nThe interaction state may be set from a widget (e.g.,\nvtkLineWidget2) or other object. This controls how the\ninteraction with the widget proceeds. Normally this method is\nused as part of a handshaking process with the widget: First\nComputeInteractionState() is invoked that returns a state based\non geometric considerations (i.e., cursor near a widget feature),\nthen based on events, the widget may modify this further.\n"},
  {(char*)"BuildRepresentation", PyvtkAxesTransformRepresentation_BuildRepresentation, 1,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nMethod to satisfy superclasses' API.\n"},
  {(char*)"ComputeInteractionState", PyvtkAxesTransformRepresentation_ComputeInteractionState, 1,
   (char*)"V.ComputeInteractionState(int, int, int) -> int\nC++: virtual int ComputeInteractionState(int X, int Y,\n    int modify=0)\n\nMethod to satisfy superclasses' API.\n"},
  {(char*)"StartWidgetInteraction", PyvtkAxesTransformRepresentation_StartWidgetInteraction, 1,
   (char*)"V.StartWidgetInteraction([float, float])\nC++: virtual void StartWidgetInteraction(double e[2])\n\nMethod to satisfy superclasses' API.\n"},
  {(char*)"WidgetInteraction", PyvtkAxesTransformRepresentation_WidgetInteraction, 1,
   (char*)"V.WidgetInteraction([float, float])\nC++: virtual void WidgetInteraction(double e[2])\n\nMethod to satisfy superclasses' API.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkAxesTransformRepresentation_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *w)\n\nMethods required by vtkProp superclass.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkAxesTransformRepresentation_RenderOpaqueGeometry, 1,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *viewport)\n\nMethods required by vtkProp superclass.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkAxesTransformRepresentation_RenderTranslucentPolygonalGeometry, 1,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(\n    vtkViewport *viewport)\n\nMethods required by vtkProp superclass.\n"},
  {(char*)"SetLabelScale", PyvtkAxesTransformRepresentation_SetLabelScale, 1,
   (char*)"V.SetLabelScale(float, float, float)\nC++: void SetLabelScale(double x, double y, double z)\nV.SetLabelScale([float, float, float])\nC++: virtual void SetLabelScale(double scale[3])\n\nScale text (font size along each dimension). This helps control\nthe appearance of the 3D text.\n"},
  {(char*)"GetLabelProperty", PyvtkAxesTransformRepresentation_GetLabelProperty, 1,
   (char*)"V.GetLabelProperty() -> vtkProperty\nC++: virtual vtkProperty *GetLabelProperty()\n\nGet the distance annotation property\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAxesTransformRepresentation_StaticNew()
{
  return vtkAxesTransformRepresentation::New();
}

PyObject *PyVTKClass_vtkAxesTransformRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAxesTransformRepresentation_StaticNew,
    PyvtkAxesTransformRepresentation_Methods,
    "vtkAxesTransformRepresentation", modulename,
    NULL, NULL,
    PyvtkAxesTransformRepresentation_Doc(),
    PyVTKClass_vtkWidgetRepresentationNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"Outside", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"OnOrigin", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"OnX", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"OnY", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"OnZ", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(5);
    if (o && PyDict_SetItemString(d, (char *)"OnXEnd", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(6);
    if (o && PyDict_SetItemString(d, (char *)"OnYEnd", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(7);
    if (o && PyDict_SetItemString(d, (char *)"OnZEnd", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkAxesTransformRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkAxesTransformRepresentation - represent the vtkAxesTransformWidget\n\n",
    "Superclass: vtkWidgetRepresentation\n\n",
    "The vtkAxesTransformRepresentation is a representation for the\nvtkAxesTransformWidget. This representation consists of a origin\nsphere with three tubed axes with cones at the end of the axes. In\naddition an optional lable provides delta values of motion. Note that\nthis particular widget draws its representation in 3D space, so the\nwidget can be occluded.\n\nSee Also:\n\nvtkDistanceWidget vtkDistanceRe",
    "presentation\nvtkDistanceRepresentation2D\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAxesTransformRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAxesTransformRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAxesTransformRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

