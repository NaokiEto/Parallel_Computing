// python wrapper for vtkGeoInteractorStyle
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
#include "vtkGeoInteractorStyle.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGeoInteractorStyle(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGeoInteractorStyle(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGeoInteractorStyleNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGeoInteractorStyleNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkInteractorStyleTrackballCameraNew
extern "C" { PyObject *PyVTKClass_vtkInteractorStyleTrackballCameraNew(const char *); }
#define DECLARED_PyVTKClass_vtkInteractorStyleTrackballCameraNew
#endif

static const char **PyvtkGeoInteractorStyle_Doc();


static PyObject *
PyvtkGeoInteractorStyle_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoInteractorStyle *op = static_cast<vtkGeoInteractorStyle *>(vp);

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
      tempr = op->vtkGeoInteractorStyle::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoInteractorStyle_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoInteractorStyle *op = static_cast<vtkGeoInteractorStyle *>(vp);

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
      tempr = op->vtkGeoInteractorStyle::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoInteractorStyle_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoInteractorStyle *op = static_cast<vtkGeoInteractorStyle *>(vp);

  vtkGeoInteractorStyle *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGeoInteractorStyle::NewInstance();
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
PyvtkGeoInteractorStyle_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGeoInteractorStyle *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGeoInteractorStyle::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoInteractorStyle_OnEnter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnEnter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoInteractorStyle *op = static_cast<vtkGeoInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnEnter();
      }
    else
      {
      op->vtkGeoInteractorStyle::OnEnter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoInteractorStyle_OnLeave(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeave");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoInteractorStyle *op = static_cast<vtkGeoInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeave();
      }
    else
      {
      op->vtkGeoInteractorStyle::OnLeave();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoInteractorStyle_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoInteractorStyle *op = static_cast<vtkGeoInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMouseMove();
      }
    else
      {
      op->vtkGeoInteractorStyle::OnMouseMove();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoInteractorStyle_OnLeftButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoInteractorStyle *op = static_cast<vtkGeoInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonUp();
      }
    else
      {
      op->vtkGeoInteractorStyle::OnLeftButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoInteractorStyle_OnMiddleButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoInteractorStyle *op = static_cast<vtkGeoInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMiddleButtonUp();
      }
    else
      {
      op->vtkGeoInteractorStyle::OnMiddleButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoInteractorStyle_OnRightButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoInteractorStyle *op = static_cast<vtkGeoInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnRightButtonUp();
      }
    else
      {
      op->vtkGeoInteractorStyle::OnRightButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoInteractorStyle_OnLeftButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoInteractorStyle *op = static_cast<vtkGeoInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonDown();
      }
    else
      {
      op->vtkGeoInteractorStyle::OnLeftButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoInteractorStyle_OnMiddleButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoInteractorStyle *op = static_cast<vtkGeoInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMiddleButtonDown();
      }
    else
      {
      op->vtkGeoInteractorStyle::OnMiddleButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoInteractorStyle_OnRightButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoInteractorStyle *op = static_cast<vtkGeoInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnRightButtonDown();
      }
    else
      {
      op->vtkGeoInteractorStyle::OnRightButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoInteractorStyle_OnChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoInteractorStyle *op = static_cast<vtkGeoInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnChar();
      }
    else
      {
      op->vtkGeoInteractorStyle::OnChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoInteractorStyle_RubberBandZoom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RubberBandZoom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoInteractorStyle *op = static_cast<vtkGeoInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RubberBandZoom();
      }
    else
      {
      op->vtkGeoInteractorStyle::RubberBandZoom();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoInteractorStyle_Pan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoInteractorStyle *op = static_cast<vtkGeoInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Pan();
      }
    else
      {
      op->vtkGeoInteractorStyle::Pan();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoInteractorStyle_Dolly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Dolly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoInteractorStyle *op = static_cast<vtkGeoInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Dolly();
      }
    else
      {
      op->vtkGeoInteractorStyle::Dolly();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoInteractorStyle_RedrawRectangle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RedrawRectangle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoInteractorStyle *op = static_cast<vtkGeoInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RedrawRectangle();
      }
    else
      {
      op->vtkGeoInteractorStyle::RedrawRectangle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoInteractorStyle_StartState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoInteractorStyle *op = static_cast<vtkGeoInteractorStyle *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->StartState(temp0);
      }
    else
      {
      op->vtkGeoInteractorStyle::StartState(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoInteractorStyle_GetGeoCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeoCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoInteractorStyle *op = static_cast<vtkGeoInteractorStyle *>(vp);

  vtkGeoCamera *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGeoCamera();
      }
    else
      {
      tempr = op->vtkGeoInteractorStyle::GetGeoCamera();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoInteractorStyle_ResetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoInteractorStyle *op = static_cast<vtkGeoInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetCamera();
      }
    else
      {
      op->vtkGeoInteractorStyle::ResetCamera();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoInteractorStyle_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoInteractorStyle *op = static_cast<vtkGeoInteractorStyle *>(vp);

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    if (ap.IsBound())
      {
      op->WidgetInteraction(temp0);
      }
    else
      {
      op->vtkGeoInteractorStyle::WidgetInteraction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoInteractorStyle_SetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoInteractorStyle *op = static_cast<vtkGeoInteractorStyle *>(vp);

  vtkRenderWindowInteractor *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor"))
    {
    if (ap.IsBound())
      {
      op->SetInteractor(temp0);
      }
    else
      {
      op->vtkGeoInteractorStyle::SetInteractor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoInteractorStyle_ViewportToWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ViewportToWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoInteractorStyle *op = static_cast<vtkGeoInteractorStyle *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      tempr = op->ViewportToWorld(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      tempr = op->vtkGeoInteractorStyle::ViewportToWorld(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(3, temp3);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(4, temp4);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoInteractorStyle_WorldToLongLat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WorldToLongLat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoInteractorStyle *op = static_cast<vtkGeoInteractorStyle *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      op->WorldToLongLat(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkGeoInteractorStyle::WorldToLongLat(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(3, temp3);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(4, temp4);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoInteractorStyle_ViewportToLongLat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ViewportToLongLat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoInteractorStyle *op = static_cast<vtkGeoInteractorStyle *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->ViewportToLongLat(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkGeoInteractorStyle::ViewportToLongLat(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(3, temp3);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoInteractorStyle_GetRayIntersection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRayIntersection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoInteractorStyle *op = static_cast<vtkGeoInteractorStyle *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      tempr = op->GetRayIntersection(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkGeoInteractorStyle::GetRayIntersection(temp0, temp1, temp2);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoInteractorStyle_SetCurrentRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoInteractorStyle *op = static_cast<vtkGeoInteractorStyle *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->SetCurrentRenderer(temp0);
      }
    else
      {
      op->vtkGeoInteractorStyle::SetCurrentRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoInteractorStyle_GetLockHeading(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLockHeading");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoInteractorStyle *op = static_cast<vtkGeoInteractorStyle *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLockHeading();
      }
    else
      {
      tempr = op->vtkGeoInteractorStyle::GetLockHeading();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoInteractorStyle_SetLockHeading(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLockHeading");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoInteractorStyle *op = static_cast<vtkGeoInteractorStyle *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLockHeading(temp0);
      }
    else
      {
      op->vtkGeoInteractorStyle::SetLockHeading(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoInteractorStyle_LockHeadingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LockHeadingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoInteractorStyle *op = static_cast<vtkGeoInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LockHeadingOn();
      }
    else
      {
      op->vtkGeoInteractorStyle::LockHeadingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoInteractorStyle_LockHeadingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LockHeadingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoInteractorStyle *op = static_cast<vtkGeoInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LockHeadingOff();
      }
    else
      {
      op->vtkGeoInteractorStyle::LockHeadingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoInteractorStyle_ResetCameraClippingRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCameraClippingRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoInteractorStyle *op = static_cast<vtkGeoInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetCameraClippingRange();
      }
    else
      {
      op->vtkGeoInteractorStyle::ResetCameraClippingRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGeoInteractorStyle_Methods[] = {
  {(char*)"GetClassName", PyvtkGeoInteractorStyle_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGeoInteractorStyle_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGeoInteractorStyle_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGeoInteractorStyle\nC++: vtkGeoInteractorStyle *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGeoInteractorStyle_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGeoInteractorStyle\nC++: vtkGeoInteractorStyle *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"OnEnter", PyvtkGeoInteractorStyle_OnEnter, 1,
   (char*)"V.OnEnter()\nC++: virtual void OnEnter()\n\nEvent bindings\n"},
  {(char*)"OnLeave", PyvtkGeoInteractorStyle_OnLeave, 1,
   (char*)"V.OnLeave()\nC++: virtual void OnLeave()\n\nEvent bindings\n"},
  {(char*)"OnMouseMove", PyvtkGeoInteractorStyle_OnMouseMove, 1,
   (char*)"V.OnMouseMove()\nC++: virtual void OnMouseMove()\n\nEvent bindings\n"},
  {(char*)"OnLeftButtonUp", PyvtkGeoInteractorStyle_OnLeftButtonUp, 1,
   (char*)"V.OnLeftButtonUp()\nC++: virtual void OnLeftButtonUp()\n\nEvent bindings\n"},
  {(char*)"OnMiddleButtonUp", PyvtkGeoInteractorStyle_OnMiddleButtonUp, 1,
   (char*)"V.OnMiddleButtonUp()\nC++: virtual void OnMiddleButtonUp()\n\nEvent bindings\n"},
  {(char*)"OnRightButtonUp", PyvtkGeoInteractorStyle_OnRightButtonUp, 1,
   (char*)"V.OnRightButtonUp()\nC++: virtual void OnRightButtonUp()\n\nEvent bindings\n"},
  {(char*)"OnLeftButtonDown", PyvtkGeoInteractorStyle_OnLeftButtonDown, 1,
   (char*)"V.OnLeftButtonDown()\nC++: virtual void OnLeftButtonDown()\n\nEvent bindings\n"},
  {(char*)"OnMiddleButtonDown", PyvtkGeoInteractorStyle_OnMiddleButtonDown, 1,
   (char*)"V.OnMiddleButtonDown()\nC++: virtual void OnMiddleButtonDown()\n\nEvent bindings\n"},
  {(char*)"OnRightButtonDown", PyvtkGeoInteractorStyle_OnRightButtonDown, 1,
   (char*)"V.OnRightButtonDown()\nC++: virtual void OnRightButtonDown()\n\nEvent bindings\n"},
  {(char*)"OnChar", PyvtkGeoInteractorStyle_OnChar, 1,
   (char*)"V.OnChar()\nC++: virtual void OnChar()\n\nEvent bindings\n"},
  {(char*)"RubberBandZoom", PyvtkGeoInteractorStyle_RubberBandZoom, 1,
   (char*)"V.RubberBandZoom()\nC++: virtual void RubberBandZoom()\n\n"},
  {(char*)"Pan", PyvtkGeoInteractorStyle_Pan, 1,
   (char*)"V.Pan()\nC++: virtual void Pan()\n\n"},
  {(char*)"Dolly", PyvtkGeoInteractorStyle_Dolly, 1,
   (char*)"V.Dolly()\nC++: virtual void Dolly()\n\n"},
  {(char*)"RedrawRectangle", PyvtkGeoInteractorStyle_RedrawRectangle, 1,
   (char*)"V.RedrawRectangle()\nC++: void RedrawRectangle()\n\n"},
  {(char*)"StartState", PyvtkGeoInteractorStyle_StartState, 1,
   (char*)"V.StartState(int)\nC++: void StartState(int newstate)\n\n"},
  {(char*)"GetGeoCamera", PyvtkGeoInteractorStyle_GetGeoCamera, 1,
   (char*)"V.GetGeoCamera() -> vtkGeoCamera\nC++: vtkGeoCamera *GetGeoCamera()\n\n"},
  {(char*)"ResetCamera", PyvtkGeoInteractorStyle_ResetCamera, 1,
   (char*)"V.ResetCamera()\nC++: void ResetCamera()\n\nThis can be used to set the camera to the standard view of the\nearth.\n"},
  {(char*)"WidgetInteraction", PyvtkGeoInteractorStyle_WidgetInteraction, 1,
   (char*)"V.WidgetInteraction(vtkObject)\nC++: void WidgetInteraction(vtkObject *caller)\n\n"},
  {(char*)"SetInteractor", PyvtkGeoInteractorStyle_SetInteractor, 1,
   (char*)"V.SetInteractor(vtkRenderWindowInteractor)\nC++: virtual void SetInteractor(\n    vtkRenderWindowInteractor *interactor)\n\nSet/Get the Interactor wrapper being controlled by this object.\n(Satisfy superclass API.)\n"},
  {(char*)"ViewportToWorld", PyvtkGeoInteractorStyle_ViewportToWorld, 1,
   (char*)"V.ViewportToWorld(float, float, float, float, float) -> int\nC++: int ViewportToWorld(double x, double y, double &wx,\n    double &wy, double &wz)\n\n"},
  {(char*)"WorldToLongLat", PyvtkGeoInteractorStyle_WorldToLongLat, 1,
   (char*)"V.WorldToLongLat(float, float, float, float, float)\nC++: void WorldToLongLat(double wx, double wy, double wz,\n    double &lon, double &lat)\n\n"},
  {(char*)"ViewportToLongLat", PyvtkGeoInteractorStyle_ViewportToLongLat, 1,
   (char*)"V.ViewportToLongLat(float, float, float, float)\nC++: void ViewportToLongLat(double x, double y, double &lon,\n    double &lat)\n\n"},
  {(char*)"GetRayIntersection", PyvtkGeoInteractorStyle_GetRayIntersection, 1,
   (char*)"V.GetRayIntersection([float, float, float], [float, float, float],\n     [float, float, float]) -> int\nC++: int GetRayIntersection(double origin[3], double direction[3],\n     double intersection[3])\n\n"},
  {(char*)"SetCurrentRenderer", PyvtkGeoInteractorStyle_SetCurrentRenderer, 1,
   (char*)"V.SetCurrentRenderer(vtkRenderer)\nC++: virtual void SetCurrentRenderer(vtkRenderer *)\n\nOverride to make the renderer use this camera subclass\n"},
  {(char*)"GetLockHeading", PyvtkGeoInteractorStyle_GetLockHeading, 1,
   (char*)"V.GetLockHeading() -> bool\nC++: bool GetLockHeading()\n\nWhether to lock the heading a particular value during pan.\n"},
  {(char*)"SetLockHeading", PyvtkGeoInteractorStyle_SetLockHeading, 1,
   (char*)"V.SetLockHeading(bool)\nC++: void SetLockHeading(bool a)\n\nWhether to lock the heading a particular value during pan.\n"},
  {(char*)"LockHeadingOn", PyvtkGeoInteractorStyle_LockHeadingOn, 1,
   (char*)"V.LockHeadingOn()\nC++: void LockHeadingOn()\n\nWhether to lock the heading a particular value during pan.\n"},
  {(char*)"LockHeadingOff", PyvtkGeoInteractorStyle_LockHeadingOff, 1,
   (char*)"V.LockHeadingOff()\nC++: void LockHeadingOff()\n\nWhether to lock the heading a particular value during pan.\n"},
  {(char*)"ResetCameraClippingRange", PyvtkGeoInteractorStyle_ResetCameraClippingRange, 1,
   (char*)"V.ResetCameraClippingRange()\nC++: void ResetCameraClippingRange()\n\nCalled after camera properties are modified\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGeoInteractorStyle_StaticNew()
{
  return vtkGeoInteractorStyle::New();
}

PyObject *PyVTKClass_vtkGeoInteractorStyleNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGeoInteractorStyle_StaticNew,
    PyvtkGeoInteractorStyle_Methods,
    "vtkGeoInteractorStyle", modulename,
    NULL, NULL,
    PyvtkGeoInteractorStyle_Doc(),
    PyVTKClass_vtkInteractorStyleTrackballCameraNew(modulename));
  return cls;
}

const char **PyvtkGeoInteractorStyle_Doc()
{
  static const char *docstring[] = {
    "vtkGeoInteractorStyle - Interaction for a globe\n\n",
    "Superclass: vtkInteractorStyleTrackballCamera\n\n",
    "vtkGeoInteractorStyle contains interaction capabilities for a\ngeographic view including orbit, zoom, and tilt. It also includes a\ncompass widget for changing view parameters.\n\nSee Also:\n\nvtkCompassWidget vtkInteractorStyle\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGeoInteractorStyle(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGeoInteractorStyleNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGeoInteractorStyle", o) != 0)
    {
    Py_DECREF(o);
    }

}

