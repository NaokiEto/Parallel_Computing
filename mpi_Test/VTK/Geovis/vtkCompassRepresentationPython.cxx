// python wrapper for vtkCompassRepresentation
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
#include "vtkCompassRepresentation.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCompassRepresentation(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCompassRepresentation(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCompassRepresentationNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCompassRepresentationNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkContinuousValueWidgetRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkContinuousValueWidgetRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkContinuousValueWidgetRepresentationNew
#endif

static const char **PyvtkCompassRepresentation_Doc();


static PyObject *
PyvtkCompassRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

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
      tempr = op->vtkCompassRepresentation::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

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
      tempr = op->vtkCompassRepresentation::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  vtkCompassRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCompassRepresentation::NewInstance();
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
PyvtkCompassRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCompassRepresentation *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCompassRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_GetPoint1Coordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1Coordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  vtkCoordinate *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPoint1Coordinate();
      }
    else
      {
      tempr = op->vtkCompassRepresentation::GetPoint1Coordinate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_GetPoint2Coordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2Coordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  vtkCoordinate *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPoint2Coordinate();
      }
    else
      {
      tempr = op->vtkCompassRepresentation::GetPoint2Coordinate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_GetRingProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRingProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  vtkProperty2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRingProperty();
      }
    else
      {
      tempr = op->vtkCompassRepresentation::GetRingProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_GetSelectedProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  vtkProperty2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectedProperty();
      }
    else
      {
      tempr = op->vtkCompassRepresentation::GetSelectedProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_GetLabelProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  vtkTextProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLabelProperty();
      }
    else
      {
      tempr = op->vtkCompassRepresentation::GetLabelProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_PlaceWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->PlaceWidget(temp0);
      }
    else
      {
      op->vtkCompassRepresentation::PlaceWidget(temp0);
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
PyvtkCompassRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkCompassRepresentation::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

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
      op->vtkCompassRepresentation::StartWidgetInteraction(temp0);
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
PyvtkCompassRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

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
      op->vtkCompassRepresentation::WidgetInteraction(temp0);
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
PyvtkCompassRepresentation_TiltWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TiltWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

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
      op->TiltWidgetInteraction(temp0);
      }
    else
      {
      op->vtkCompassRepresentation::TiltWidgetInteraction(temp0);
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
PyvtkCompassRepresentation_DistanceWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DistanceWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

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
      op->DistanceWidgetInteraction(temp0);
      }
    else
      {
      op->vtkCompassRepresentation::DistanceWidgetInteraction(temp0);
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
PyvtkCompassRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

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
      tempr = op->vtkCompassRepresentation::ComputeInteractionState(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_Highlight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Highlight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Highlight(temp0);
      }
    else
      {
      op->vtkCompassRepresentation::Highlight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  vtkPropCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
    {
    if (ap.IsBound())
      {
      op->GetActors(temp0);
      }
    else
      {
      op->vtkCompassRepresentation::GetActors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

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
      op->vtkCompassRepresentation::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

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
      tempr = op->vtkCompassRepresentation::RenderOverlay(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

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
      tempr = op->vtkCompassRepresentation::RenderOpaqueGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_SetHeading(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeading");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHeading(temp0);
      }
    else
      {
      op->vtkCompassRepresentation::SetHeading(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_GetHeading(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeading");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHeading();
      }
    else
      {
      tempr = op->vtkCompassRepresentation::GetHeading();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_SetTilt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTilt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTilt(temp0);
      }
    else
      {
      op->vtkCompassRepresentation::SetTilt(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_GetTilt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTilt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTilt();
      }
    else
      {
      tempr = op->vtkCompassRepresentation::GetTilt();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_UpdateTilt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateTilt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->UpdateTilt(temp0);
      }
    else
      {
      op->vtkCompassRepresentation::UpdateTilt(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_EndTilt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndTilt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EndTilt();
      }
    else
      {
      op->vtkCompassRepresentation::EndTilt();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_SetDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDistance(temp0);
      }
    else
      {
      op->vtkCompassRepresentation::SetDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_GetDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDistance();
      }
    else
      {
      tempr = op->vtkCompassRepresentation::GetDistance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_UpdateDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->UpdateDistance(temp0);
      }
    else
      {
      op->vtkCompassRepresentation::UpdateDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_EndDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EndDistance();
      }
    else
      {
      op->vtkCompassRepresentation::EndDistance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->SetRenderer(temp0);
      }
    else
      {
      op->vtkCompassRepresentation::SetRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCompassRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkCompassRepresentation_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for the class.\n"},
  {(char*)"IsA", PyvtkCompassRepresentation_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for the class.\n"},
  {(char*)"NewInstance", PyvtkCompassRepresentation_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCompassRepresentation\nC++: vtkCompassRepresentation *NewInstance()\n\nStandard methods for the class.\n"},
  {(char*)"SafeDownCast", PyvtkCompassRepresentation_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCompassRepresentation\nC++: vtkCompassRepresentation *SafeDownCast(vtkObject* o)\n\nStandard methods for the class.\n"},
  {(char*)"GetPoint1Coordinate", PyvtkCompassRepresentation_GetPoint1Coordinate, 1,
   (char*)"V.GetPoint1Coordinate() -> vtkCoordinate\nC++: vtkCoordinate *GetPoint1Coordinate()\n\nPosition the first end point of the slider. Note that this point\nis an instance of vtkCoordinate, meaning that Point 1 can be\nspecified in a variety of coordinate systems, and can even be\nrelative to another point. To set the point, you'll want to get\nthe Point1Coordinate and then invoke the necessary methods to put\nit into the correct coordinate system and set the correct initial\nvalue.\n"},
  {(char*)"GetPoint2Coordinate", PyvtkCompassRepresentation_GetPoint2Coordinate, 1,
   (char*)"V.GetPoint2Coordinate() -> vtkCoordinate\nC++: vtkCoordinate *GetPoint2Coordinate()\n\nPosition the second end point of the slider. Note that this point\nis an instance of vtkCoordinate, meaning that Point 1 can be\nspecified in a variety of coordinate systems, and can even be\nrelative to another point. To set the point, you'll want to get\nthe Point2Coordinate and then invoke the necessary methods to put\nit into the correct coordinate system and set the correct initial\nvalue.\n"},
  {(char*)"GetRingProperty", PyvtkCompassRepresentation_GetRingProperty, 1,
   (char*)"V.GetRingProperty() -> vtkProperty2D\nC++: vtkProperty2D *GetRingProperty()\n\nGet the slider properties. The properties of the slider when\nselected and unselected can be manipulated.\n"},
  {(char*)"GetSelectedProperty", PyvtkCompassRepresentation_GetSelectedProperty, 1,
   (char*)"V.GetSelectedProperty() -> vtkProperty2D\nC++: vtkProperty2D *GetSelectedProperty()\n\nGet the selection property. This property is used to modify the\nappearance of selected objects (e.g., the slider).\n"},
  {(char*)"GetLabelProperty", PyvtkCompassRepresentation_GetLabelProperty, 1,
   (char*)"V.GetLabelProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetLabelProperty()\n\nSet/Get the properties for the label and title text.\n"},
  {(char*)"PlaceWidget", PyvtkCompassRepresentation_PlaceWidget, 1,
   (char*)"V.PlaceWidget([float, float, float, float, float, float])\nC++: virtual void PlaceWidget(double bounds[6])\n\nMethods to interface with the vtkSliderWidget. The PlaceWidget()\nmethod assumes that the parameter bounds[6] specifies the\nlocation in display space where the widget should be placed.\n"},
  {(char*)"BuildRepresentation", PyvtkCompassRepresentation_BuildRepresentation, 1,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nMethods to interface with the vtkSliderWidget. The PlaceWidget()\nmethod assumes that the parameter bounds[6] specifies the\nlocation in display space where the widget should be placed.\n"},
  {(char*)"StartWidgetInteraction", PyvtkCompassRepresentation_StartWidgetInteraction, 1,
   (char*)"V.StartWidgetInteraction([float, float])\nC++: virtual void StartWidgetInteraction(double eventPos[2])\n\nMethods to interface with the vtkSliderWidget. The PlaceWidget()\nmethod assumes that the parameter bounds[6] specifies the\nlocation in display space where the widget should be placed.\n"},
  {(char*)"WidgetInteraction", PyvtkCompassRepresentation_WidgetInteraction, 1,
   (char*)"V.WidgetInteraction([float, float])\nC++: virtual void WidgetInteraction(double eventPos[2])\n\nMethods to interface with the vtkSliderWidget. The PlaceWidget()\nmethod assumes that the parameter bounds[6] specifies the\nlocation in display space where the widget should be placed.\n"},
  {(char*)"TiltWidgetInteraction", PyvtkCompassRepresentation_TiltWidgetInteraction, 1,
   (char*)"V.TiltWidgetInteraction([float, float])\nC++: virtual void TiltWidgetInteraction(double eventPos[2])\n\nMethods to interface with the vtkSliderWidget. The PlaceWidget()\nmethod assumes that the parameter bounds[6] specifies the\nlocation in display space where the widget should be placed.\n"},
  {(char*)"DistanceWidgetInteraction", PyvtkCompassRepresentation_DistanceWidgetInteraction, 1,
   (char*)"V.DistanceWidgetInteraction([float, float])\nC++: virtual void DistanceWidgetInteraction(double eventPos[2])\n\nMethods to interface with the vtkSliderWidget. The PlaceWidget()\nmethod assumes that the parameter bounds[6] specifies the\nlocation in display space where the widget should be placed.\n"},
  {(char*)"ComputeInteractionState", PyvtkCompassRepresentation_ComputeInteractionState, 1,
   (char*)"V.ComputeInteractionState(int, int, int) -> int\nC++: virtual int ComputeInteractionState(int X, int Y,\n    int modify=0)\n\nMethods to interface with the vtkSliderWidget. The PlaceWidget()\nmethod assumes that the parameter bounds[6] specifies the\nlocation in display space where the widget should be placed.\n"},
  {(char*)"Highlight", PyvtkCompassRepresentation_Highlight, 1,
   (char*)"V.Highlight(int)\nC++: virtual void Highlight(int)\n\nMethods to interface with the vtkSliderWidget. The PlaceWidget()\nmethod assumes that the parameter bounds[6] specifies the\nlocation in display space where the widget should be placed.\n"},
  {(char*)"GetActors", PyvtkCompassRepresentation_GetActors, 1,
   (char*)"V.GetActors(vtkPropCollection)\nC++: virtual void GetActors(vtkPropCollection *)\n\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkCompassRepresentation_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\n"},
  {(char*)"RenderOverlay", PyvtkCompassRepresentation_RenderOverlay, 1,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: virtual int RenderOverlay(vtkViewport *)\n\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkCompassRepresentation_RenderOpaqueGeometry, 1,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *)\n\n"},
  {(char*)"SetHeading", PyvtkCompassRepresentation_SetHeading, 1,
   (char*)"V.SetHeading(float)\nC++: virtual void SetHeading(double value)\n\n"},
  {(char*)"GetHeading", PyvtkCompassRepresentation_GetHeading, 1,
   (char*)"V.GetHeading() -> float\nC++: virtual double GetHeading()\n\n"},
  {(char*)"SetTilt", PyvtkCompassRepresentation_SetTilt, 1,
   (char*)"V.SetTilt(float)\nC++: virtual void SetTilt(double value)\n\n"},
  {(char*)"GetTilt", PyvtkCompassRepresentation_GetTilt, 1,
   (char*)"V.GetTilt() -> float\nC++: virtual double GetTilt()\n\n"},
  {(char*)"UpdateTilt", PyvtkCompassRepresentation_UpdateTilt, 1,
   (char*)"V.UpdateTilt(float)\nC++: virtual void UpdateTilt(double time)\n\n"},
  {(char*)"EndTilt", PyvtkCompassRepresentation_EndTilt, 1,
   (char*)"V.EndTilt()\nC++: virtual void EndTilt()\n\n"},
  {(char*)"SetDistance", PyvtkCompassRepresentation_SetDistance, 1,
   (char*)"V.SetDistance(float)\nC++: virtual void SetDistance(double value)\n\n"},
  {(char*)"GetDistance", PyvtkCompassRepresentation_GetDistance, 1,
   (char*)"V.GetDistance() -> float\nC++: virtual double GetDistance()\n\n"},
  {(char*)"UpdateDistance", PyvtkCompassRepresentation_UpdateDistance, 1,
   (char*)"V.UpdateDistance(float)\nC++: virtual void UpdateDistance(double time)\n\n"},
  {(char*)"EndDistance", PyvtkCompassRepresentation_EndDistance, 1,
   (char*)"V.EndDistance()\nC++: virtual void EndDistance()\n\n"},
  {(char*)"SetRenderer", PyvtkCompassRepresentation_SetRenderer, 1,
   (char*)"V.SetRenderer(vtkRenderer)\nC++: virtual void SetRenderer(vtkRenderer *ren)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCompassRepresentation_StaticNew()
{
  return vtkCompassRepresentation::New();
}

PyObject *PyVTKClass_vtkCompassRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCompassRepresentation_StaticNew,
    PyvtkCompassRepresentation_Methods,
    "vtkCompassRepresentation", modulename,
    NULL, NULL,
    PyvtkCompassRepresentation_Doc(),
    PyVTKClass_vtkContinuousValueWidgetRepresentationNew(modulename));

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
    if (o && PyDict_SetItemString(d, (char *)"Inside", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"Adjusting", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"TiltDown", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"TiltUp", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(5);
    if (o && PyDict_SetItemString(d, (char *)"TiltAdjusting", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(6);
    if (o && PyDict_SetItemString(d, (char *)"DistanceOut", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(7);
    if (o && PyDict_SetItemString(d, (char *)"DistanceIn", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(8);
    if (o && PyDict_SetItemString(d, (char *)"DistanceAdjusting", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkCompassRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkCompassRepresentation - provide a compass\n\n",
    "Superclass: vtkContinuousValueWidgetRepresentation\n\n",
    "This class is used to represent and render a compass.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCompassRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCompassRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCompassRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

