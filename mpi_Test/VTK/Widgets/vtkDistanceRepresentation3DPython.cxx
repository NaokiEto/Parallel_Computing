// python wrapper for vtkDistanceRepresentation3D
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
#include "vtkDistanceRepresentation3D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDistanceRepresentation3D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDistanceRepresentation3D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDistanceRepresentation3DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDistanceRepresentation3DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDistanceRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkDistanceRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkDistanceRepresentationNew
#endif

static const char **PyvtkDistanceRepresentation3D_Doc();


static PyObject *
PyvtkDistanceRepresentation3D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

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
      tempr = op->vtkDistanceRepresentation3D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

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
      tempr = op->vtkDistanceRepresentation3D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

  vtkDistanceRepresentation3D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDistanceRepresentation3D::NewInstance();
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
PyvtkDistanceRepresentation3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDistanceRepresentation3D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDistanceRepresentation3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation3D_GetDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

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
      tempr = op->vtkDistanceRepresentation3D::GetDistance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation3D_SetGlyphScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGlyphScale(temp0);
      }
    else
      {
      op->vtkDistanceRepresentation3D::SetGlyphScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation3D_GetGlyphScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGlyphScale();
      }
    else
      {
      tempr = op->vtkDistanceRepresentation3D::GetGlyphScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation3D_GetLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

  vtkProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLineProperty();
      }
    else
      {
      tempr = op->vtkDistanceRepresentation3D::GetLineProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation3D_SetLabelPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabelPosition(temp0);
      }
    else
      {
      op->vtkDistanceRepresentation3D::SetLabelPosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation3D_GetLabelPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLabelPosition();
      }
    else
      {
      tempr = op->vtkDistanceRepresentation3D::GetLabelPosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation3D_SetMaximumNumberOfRulerTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfRulerTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumNumberOfRulerTicks(temp0);
      }
    else
      {
      op->vtkDistanceRepresentation3D::SetMaximumNumberOfRulerTicks(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation3D_GetMaximumNumberOfRulerTicksMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfRulerTicksMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumNumberOfRulerTicksMinValue();
      }
    else
      {
      tempr = op->vtkDistanceRepresentation3D::GetMaximumNumberOfRulerTicksMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation3D_GetMaximumNumberOfRulerTicksMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfRulerTicksMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumNumberOfRulerTicksMaxValue();
      }
    else
      {
      tempr = op->vtkDistanceRepresentation3D::GetMaximumNumberOfRulerTicksMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation3D_GetMaximumNumberOfRulerTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfRulerTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumNumberOfRulerTicks();
      }
    else
      {
      tempr = op->vtkDistanceRepresentation3D::GetMaximumNumberOfRulerTicks();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation3D_GetGlyphActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

  vtkActor *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGlyphActor();
      }
    else
      {
      tempr = op->vtkDistanceRepresentation3D::GetGlyphActor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation3D_GetLabelActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

  vtkFollower *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLabelActor();
      }
    else
      {
      tempr = op->vtkDistanceRepresentation3D::GetLabelActor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation3D_GetPoint1WorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

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
      op->GetPoint1WorldPosition(temp0);
      }
    else
      {
      op->vtkDistanceRepresentation3D::GetPoint1WorldPosition(temp0);
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
PyvtkDistanceRepresentation3D_GetPoint2WorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

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
      op->GetPoint2WorldPosition(temp0);
      }
    else
      {
      op->vtkDistanceRepresentation3D::GetPoint2WorldPosition(temp0);
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
PyvtkDistanceRepresentation3D_SetPoint1WorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

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
      op->SetPoint1WorldPosition(temp0);
      }
    else
      {
      op->vtkDistanceRepresentation3D::SetPoint1WorldPosition(temp0);
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
PyvtkDistanceRepresentation3D_SetPoint2WorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

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
      op->SetPoint2WorldPosition(temp0);
      }
    else
      {
      op->vtkDistanceRepresentation3D::SetPoint2WorldPosition(temp0);
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
PyvtkDistanceRepresentation3D_SetPoint1DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

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
      op->SetPoint1DisplayPosition(temp0);
      }
    else
      {
      op->vtkDistanceRepresentation3D::SetPoint1DisplayPosition(temp0);
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
PyvtkDistanceRepresentation3D_SetPoint2DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

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
      op->SetPoint2DisplayPosition(temp0);
      }
    else
      {
      op->vtkDistanceRepresentation3D::SetPoint2DisplayPosition(temp0);
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
PyvtkDistanceRepresentation3D_GetPoint1DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

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
      op->GetPoint1DisplayPosition(temp0);
      }
    else
      {
      op->vtkDistanceRepresentation3D::GetPoint1DisplayPosition(temp0);
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
PyvtkDistanceRepresentation3D_GetPoint2DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

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
      op->GetPoint2DisplayPosition(temp0);
      }
    else
      {
      op->vtkDistanceRepresentation3D::GetPoint2DisplayPosition(temp0);
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
PyvtkDistanceRepresentation3D_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkDistanceRepresentation3D::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation3D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

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
      op->vtkDistanceRepresentation3D::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation3D_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

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
      tempr = op->vtkDistanceRepresentation3D::RenderOpaqueGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation3D_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

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
      tempr = op->vtkDistanceRepresentation3D::RenderTranslucentPolygonalGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation3D_SetLabelScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

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
      op->vtkDistanceRepresentation3D::SetLabelScale(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDistanceRepresentation3D_SetLabelScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

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
      op->vtkDistanceRepresentation3D::SetLabelScale(temp0);
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
PyvtkDistanceRepresentation3D_SetLabelScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkDistanceRepresentation3D_SetLabelScale_s1(self, args);
    case 1:
      return PyvtkDistanceRepresentation3D_SetLabelScale_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetLabelScale");
  return NULL;
}



static PyObject *
PyvtkDistanceRepresentation3D_GetLabelProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

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
      tempr = op->vtkDistanceRepresentation3D::GetLabelProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDistanceRepresentation3D_Methods[] = {
  {(char*)"GetClassName", PyvtkDistanceRepresentation3D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK methods.\n"},
  {(char*)"IsA", PyvtkDistanceRepresentation3D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK methods.\n"},
  {(char*)"NewInstance", PyvtkDistanceRepresentation3D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDistanceRepresentation3D\nC++: vtkDistanceRepresentation3D *NewInstance()\n\nStandard VTK methods.\n"},
  {(char*)"SafeDownCast", PyvtkDistanceRepresentation3D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDistanceRepresentation3D\nC++: vtkDistanceRepresentation3D *SafeDownCast(vtkObject* o)\n\nStandard VTK methods.\n"},
  {(char*)"GetDistance", PyvtkDistanceRepresentation3D_GetDistance, 1,
   (char*)"V.GetDistance() -> float\nC++: virtual double GetDistance()\n\nSatisfy the superclasses API.\n"},
  {(char*)"SetGlyphScale", PyvtkDistanceRepresentation3D_SetGlyphScale, 1,
   (char*)"V.SetGlyphScale(float)\nC++: void SetGlyphScale(double scale)\n\nScale the glyphs used as tick marks. By default it is 1/40th of\nthe length.\n"},
  {(char*)"GetGlyphScale", PyvtkDistanceRepresentation3D_GetGlyphScale, 1,
   (char*)"V.GetGlyphScale() -> float\nC++: double GetGlyphScale()\n\nScale the glyphs used as tick marks. By default it is 1/40th of\nthe length.\n"},
  {(char*)"GetLineProperty", PyvtkDistanceRepresentation3D_GetLineProperty, 1,
   (char*)"V.GetLineProperty() -> vtkProperty\nC++: virtual vtkProperty *GetLineProperty()\n\nConvenience method to get the line actor property.\n"},
  {(char*)"SetLabelPosition", PyvtkDistanceRepresentation3D_SetLabelPosition, 1,
   (char*)"V.SetLabelPosition(float)\nC++: void SetLabelPosition(double labelPosition)\n\nSet/Get position of the label title in normalized coordinates\n[0,1]. 0 is at the start of the line whereas 1 is at the end.\n"},
  {(char*)"GetLabelPosition", PyvtkDistanceRepresentation3D_GetLabelPosition, 1,
   (char*)"V.GetLabelPosition() -> float\nC++: double GetLabelPosition()\n\nSet/Get position of the label title in normalized coordinates\n[0,1]. 0 is at the start of the line whereas 1 is at the end.\n"},
  {(char*)"SetMaximumNumberOfRulerTicks", PyvtkDistanceRepresentation3D_SetMaximumNumberOfRulerTicks, 1,
   (char*)"V.SetMaximumNumberOfRulerTicks(int)\nC++: void SetMaximumNumberOfRulerTicks(int)\n\nSet/Get the maximum number of ticks in ruler mode.\n"},
  {(char*)"GetMaximumNumberOfRulerTicksMinValue", PyvtkDistanceRepresentation3D_GetMaximumNumberOfRulerTicksMinValue, 1,
   (char*)"V.GetMaximumNumberOfRulerTicksMinValue() -> int\nC++: int GetMaximumNumberOfRulerTicksMinValue()\n\nSet/Get the maximum number of ticks in ruler mode.\n"},
  {(char*)"GetMaximumNumberOfRulerTicksMaxValue", PyvtkDistanceRepresentation3D_GetMaximumNumberOfRulerTicksMaxValue, 1,
   (char*)"V.GetMaximumNumberOfRulerTicksMaxValue() -> int\nC++: int GetMaximumNumberOfRulerTicksMaxValue()\n\nSet/Get the maximum number of ticks in ruler mode.\n"},
  {(char*)"GetMaximumNumberOfRulerTicks", PyvtkDistanceRepresentation3D_GetMaximumNumberOfRulerTicks, 1,
   (char*)"V.GetMaximumNumberOfRulerTicks() -> int\nC++: int GetMaximumNumberOfRulerTicks()\n\nSet/Get the maximum number of ticks in ruler mode.\n"},
  {(char*)"GetGlyphActor", PyvtkDistanceRepresentation3D_GetGlyphActor, 1,
   (char*)"V.GetGlyphActor() -> vtkActor\nC++: vtkActor *GetGlyphActor()\n\nConvenience method to get the glyph actor. Using this it is\npossible to control the appearance of the glyphs.\n"},
  {(char*)"GetLabelActor", PyvtkDistanceRepresentation3D_GetLabelActor, 1,
   (char*)"V.GetLabelActor() -> vtkFollower\nC++: vtkFollower *GetLabelActor()\n\nConvenience method Get the label actor. It is possible to control\nthe appearance of the label.\n"},
  {(char*)"GetPoint1WorldPosition", PyvtkDistanceRepresentation3D_GetPoint1WorldPosition, 1,
   (char*)"V.GetPoint1WorldPosition([float, float, float])\nC++: void GetPoint1WorldPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"GetPoint2WorldPosition", PyvtkDistanceRepresentation3D_GetPoint2WorldPosition, 1,
   (char*)"V.GetPoint2WorldPosition([float, float, float])\nC++: void GetPoint2WorldPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"SetPoint1WorldPosition", PyvtkDistanceRepresentation3D_SetPoint1WorldPosition, 1,
   (char*)"V.SetPoint1WorldPosition([float, float, float])\nC++: void SetPoint1WorldPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"SetPoint2WorldPosition", PyvtkDistanceRepresentation3D_SetPoint2WorldPosition, 1,
   (char*)"V.SetPoint2WorldPosition([float, float, float])\nC++: void SetPoint2WorldPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"SetPoint1DisplayPosition", PyvtkDistanceRepresentation3D_SetPoint1DisplayPosition, 1,
   (char*)"V.SetPoint1DisplayPosition([float, float, float])\nC++: void SetPoint1DisplayPosition(double pos[3])\n\n"},
  {(char*)"SetPoint2DisplayPosition", PyvtkDistanceRepresentation3D_SetPoint2DisplayPosition, 1,
   (char*)"V.SetPoint2DisplayPosition([float, float, float])\nC++: void SetPoint2DisplayPosition(double pos[3])\n\n"},
  {(char*)"GetPoint1DisplayPosition", PyvtkDistanceRepresentation3D_GetPoint1DisplayPosition, 1,
   (char*)"V.GetPoint1DisplayPosition([float, float, float])\nC++: void GetPoint1DisplayPosition(double pos[3])\n\n"},
  {(char*)"GetPoint2DisplayPosition", PyvtkDistanceRepresentation3D_GetPoint2DisplayPosition, 1,
   (char*)"V.GetPoint2DisplayPosition([float, float, float])\nC++: void GetPoint2DisplayPosition(double pos[3])\n\n"},
  {(char*)"BuildRepresentation", PyvtkDistanceRepresentation3D_BuildRepresentation, 1,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nMethod to satisfy superclasses' API.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkDistanceRepresentation3D_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *w)\n\nMethods required by vtkProp superclass.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkDistanceRepresentation3D_RenderOpaqueGeometry, 1,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *viewport)\n\nMethods required by vtkProp superclass.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkDistanceRepresentation3D_RenderTranslucentPolygonalGeometry, 1,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(\n    vtkViewport *viewport)\n\nMethods required by vtkProp superclass.\n"},
  {(char*)"SetLabelScale", PyvtkDistanceRepresentation3D_SetLabelScale, 1,
   (char*)"V.SetLabelScale(float, float, float)\nC++: void SetLabelScale(double x, double y, double z)\nV.SetLabelScale([float, float, float])\nC++: virtual void SetLabelScale(double scale[3])\n\nScale text (font size along each dimension). This helps control\nthe appearance of the 3D text.\n"},
  {(char*)"GetLabelProperty", PyvtkDistanceRepresentation3D_GetLabelProperty, 1,
   (char*)"V.GetLabelProperty() -> vtkProperty\nC++: virtual vtkProperty *GetLabelProperty()\n\nGet the distance annotation property\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDistanceRepresentation3D_StaticNew()
{
  return vtkDistanceRepresentation3D::New();
}

PyObject *PyVTKClass_vtkDistanceRepresentation3DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDistanceRepresentation3D_StaticNew,
    PyvtkDistanceRepresentation3D_Methods,
    "vtkDistanceRepresentation3D", modulename,
    NULL, NULL,
    PyvtkDistanceRepresentation3D_Doc(),
    PyVTKClass_vtkDistanceRepresentationNew(modulename));
  return cls;
}

const char **PyvtkDistanceRepresentation3D_Doc()
{
  static const char *docstring[] = {
    "vtkDistanceRepresentation3D - represent the vtkDistanceWidget\n\n",
    "Superclass: vtkDistanceRepresentation\n\n",
    "The vtkDistanceRepresentation3D is a representation for the\nvtkDistanceWidget. This representation consists of a measuring line\n(axis) and two vtkHandleWidgets to place the end points of the line.\nNote that this particular widget draws its representation in 3D\nspace, so the widget can be occluded.\n\nSee Also:\n\nvtkDistanceWidget vtkDistanceRepresentation\nvtkDistanceRepresentation2D\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDistanceRepresentation3D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDistanceRepresentation3DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDistanceRepresentation3D", o) != 0)
    {
    Py_DECREF(o);
    }

}

