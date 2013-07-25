// python wrapper for vtkActor2D
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
#include "vtkActor2D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkActor2D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkActor2D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkActor2DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkActor2DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPropNew
extern "C" { PyObject *PyVTKClass_vtkPropNew(const char *); }
#define DECLARED_PyVTKClass_vtkPropNew
#endif

static const char **PyvtkActor2D_Doc();


static PyObject *
PyvtkActor2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

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
      tempr = op->vtkActor2D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkActor2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

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
      tempr = op->vtkActor2D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkActor2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  vtkActor2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkActor2D::NewInstance();
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
PyvtkActor2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkActor2D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkActor2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkActor2D_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

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
      tempr = op->vtkActor2D::RenderOverlay(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkActor2D_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

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
      tempr = op->vtkActor2D::RenderOpaqueGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkActor2D_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

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
      tempr = op->vtkActor2D::RenderTranslucentPolygonalGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkActor2D_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

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
      tempr = op->vtkActor2D::HasTranslucentPolygonalGeometry();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkActor2D_SetMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  vtkMapper2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMapper2D"))
    {
    if (ap.IsBound())
      {
      op->SetMapper(temp0);
      }
    else
      {
      op->vtkActor2D::SetMapper(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkActor2D_GetMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  vtkMapper2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMapper();
      }
    else
      {
      tempr = op->vtkActor2D::GetMapper();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkActor2D_SetLayerNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayerNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLayerNumber(temp0);
      }
    else
      {
      op->vtkActor2D::SetLayerNumber(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkActor2D_GetLayerNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayerNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLayerNumber();
      }
    else
      {
      tempr = op->vtkActor2D::GetLayerNumber();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkActor2D_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  vtkProperty2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProperty();
      }
    else
      {
      tempr = op->vtkActor2D::GetProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkActor2D_SetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  vtkProperty2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty2D"))
    {
    if (ap.IsBound())
      {
      op->SetProperty(temp0);
      }
    else
      {
      op->vtkActor2D::SetProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkActor2D_GetPositionCoordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  vtkCoordinate *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPositionCoordinate();
      }
    else
      {
      tempr = op->vtkActor2D::GetPositionCoordinate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkActor2D_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPosition(temp0, temp1);
      }
    else
      {
      op->vtkActor2D::SetPosition(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkActor2D_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

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
      op->SetPosition(temp0);
      }
    else
      {
      op->vtkActor2D::SetPosition(temp0);
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
PyvtkActor2D_SetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkActor2D_SetPosition_s1(self, args);
    case 1:
      return PyvtkActor2D_SetPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return NULL;
}



static PyObject *
PyvtkActor2D_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPosition();
      }
    else
      {
      tempr = op->vtkActor2D::GetPosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkActor2D_SetDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetDisplayPosition(temp0, temp1);
      }
    else
      {
      op->vtkActor2D::SetDisplayPosition(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkActor2D_GetPosition2Coordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition2Coordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  vtkCoordinate *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPosition2Coordinate();
      }
    else
      {
      tempr = op->vtkActor2D::GetPosition2Coordinate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkActor2D_SetPosition2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPosition2(temp0, temp1);
      }
    else
      {
      op->vtkActor2D::SetPosition2(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkActor2D_SetPosition2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

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
      op->SetPosition2(temp0);
      }
    else
      {
      op->vtkActor2D::SetPosition2(temp0);
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
PyvtkActor2D_SetPosition2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkActor2D_SetPosition2_s1(self, args);
    case 1:
      return PyvtkActor2D_SetPosition2_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition2");
  return NULL;
}



static PyObject *
PyvtkActor2D_GetPosition2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPosition2();
      }
    else
      {
      tempr = op->vtkActor2D::GetPosition2();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkActor2D_SetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

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
      op->vtkActor2D::SetWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkActor2D_GetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

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
      tempr = op->vtkActor2D::GetWidth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkActor2D_SetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

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
      op->vtkActor2D::SetHeight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkActor2D_GetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

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
      tempr = op->vtkActor2D::GetHeight();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkActor2D_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMTime();
      }
    else
      {
      tempr = op->vtkActor2D::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkActor2D_GetActors2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  vtkPropCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
    {
    if (ap.IsBound())
      {
      op->GetActors2D(temp0);
      }
    else
      {
      op->vtkActor2D::GetActors2D(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkActor2D_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

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
      op->vtkActor2D::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkActor2D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

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
      op->vtkActor2D::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkActor2D_GetActualPositionCoordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualPositionCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  vtkCoordinate *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetActualPositionCoordinate();
      }
    else
      {
      tempr = op->vtkActor2D::GetActualPositionCoordinate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkActor2D_GetActualPosition2Coordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualPosition2Coordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  vtkCoordinate *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetActualPosition2Coordinate();
      }
    else
      {
      tempr = op->vtkActor2D::GetActualPosition2Coordinate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkActor2D_Methods[] = {
  {(char*)"GetClassName", PyvtkActor2D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkActor2D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkActor2D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkActor2D\nC++: vtkActor2D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkActor2D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkActor2D\nC++: vtkActor2D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"RenderOverlay", PyvtkActor2D_RenderOverlay, 1,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: virtual int RenderOverlay(vtkViewport *viewport)\n\nSupport the standard render methods.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkActor2D_RenderOpaqueGeometry, 1,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *viewport)\n\nSupport the standard render methods.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkActor2D_RenderTranslucentPolygonalGeometry, 1,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(\n    vtkViewport *viewport)\n\nSupport the standard render methods.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkActor2D_HasTranslucentPolygonalGeometry, 1,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {(char*)"SetMapper", PyvtkActor2D_SetMapper, 1,
   (char*)"V.SetMapper(vtkMapper2D)\nC++: virtual void SetMapper(vtkMapper2D *mapper)\n\nSet/Get the vtkMapper2D which defines the data to be drawn.\n"},
  {(char*)"GetMapper", PyvtkActor2D_GetMapper, 1,
   (char*)"V.GetMapper() -> vtkMapper2D\nC++: vtkMapper2D *GetMapper()\n\nSet/Get the vtkMapper2D which defines the data to be drawn.\n"},
  {(char*)"SetLayerNumber", PyvtkActor2D_SetLayerNumber, 1,
   (char*)"V.SetLayerNumber(int)\nC++: void SetLayerNumber(int a)\n\nSet/Get the layer number in the overlay planes into which to\nrender.\n"},
  {(char*)"GetLayerNumber", PyvtkActor2D_GetLayerNumber, 1,
   (char*)"V.GetLayerNumber() -> int\nC++: int GetLayerNumber()\n\nSet/Get the layer number in the overlay planes into which to\nrender.\n"},
  {(char*)"GetProperty", PyvtkActor2D_GetProperty, 1,
   (char*)"V.GetProperty() -> vtkProperty2D\nC++: vtkProperty2D *GetProperty()\n\nReturns this actor's vtkProperty2D.  Creates a property if one\ndoesn't already exist.\n"},
  {(char*)"SetProperty", PyvtkActor2D_SetProperty, 1,
   (char*)"V.SetProperty(vtkProperty2D)\nC++: virtual void SetProperty(vtkProperty2D *)\n\nSet this vtkProp's vtkProperty2D.\n"},
  {(char*)"GetPositionCoordinate", PyvtkActor2D_GetPositionCoordinate, 1,
   (char*)"V.GetPositionCoordinate() -> vtkCoordinate\nC++: vtkCoordinate *GetPositionCoordinate()\n\nGet the PositionCoordinate instance of vtkCoordinate. This is\nused for for complicated or relative positioning. The position\nvariable controls the lower left corner of the Actor2D\n"},
  {(char*)"SetPosition", PyvtkActor2D_SetPosition, 1,
   (char*)"V.SetPosition(float, float)\nC++: void SetPosition(double, double)\nV.SetPosition([float, float])\nC++: void SetPosition(double a[2])\n\nGet the PositionCoordinate instance of vtkCoordinate. This is\nused for for complicated or relative positioning. The position\nvariable controls the lower left corner of the Actor2D\n"},
  {(char*)"GetPosition", PyvtkActor2D_GetPosition, 1,
   (char*)"V.GetPosition() -> (float, float)\nC++: double *GetPosition()\n\nGet the PositionCoordinate instance of vtkCoordinate. This is\nused for for complicated or relative positioning. The position\nvariable controls the lower left corner of the Actor2D\n"},
  {(char*)"SetDisplayPosition", PyvtkActor2D_SetDisplayPosition, 1,
   (char*)"V.SetDisplayPosition(int, int)\nC++: void SetDisplayPosition(int, int)\n\nSet the Prop2D's position in display coordinates.\n"},
  {(char*)"GetPosition2Coordinate", PyvtkActor2D_GetPosition2Coordinate, 1,
   (char*)"V.GetPosition2Coordinate() -> vtkCoordinate\nC++: vtkCoordinate *GetPosition2Coordinate()\n\nAccess the Position2 instance variable. This variable controls\nthe upper right corner of the Actor2D. It is by default relative\nto Position and in normalized viewport coordinates. Some 2D actor\nsubclasses ignore the position2 variable\n"},
  {(char*)"SetPosition2", PyvtkActor2D_SetPosition2, 1,
   (char*)"V.SetPosition2(float, float)\nC++: void SetPosition2(double, double)\nV.SetPosition2([float, float])\nC++: void SetPosition2(double a[2])\n\nAccess the Position2 instance variable. This variable controls\nthe upper right corner of the Actor2D. It is by default relative\nto Position and in normalized viewport coordinates. Some 2D actor\nsubclasses ignore the position2 variable\n"},
  {(char*)"GetPosition2", PyvtkActor2D_GetPosition2, 1,
   (char*)"V.GetPosition2() -> (float, float)\nC++: double *GetPosition2()\n\nAccess the Position2 instance variable. This variable controls\nthe upper right corner of the Actor2D. It is by default relative\nto Position and in normalized viewport coordinates. Some 2D actor\nsubclasses ignore the position2 variable\n"},
  {(char*)"SetWidth", PyvtkActor2D_SetWidth, 1,
   (char*)"V.SetWidth(float)\nC++: void SetWidth(double w)\n\nSet/Get the height and width of the Actor2D. The value is\nexpressed as a fraction of the viewport. This really is just\nanother way of setting the Position2 instance variable.\n"},
  {(char*)"GetWidth", PyvtkActor2D_GetWidth, 1,
   (char*)"V.GetWidth() -> float\nC++: double GetWidth()\n\nSet/Get the height and width of the Actor2D. The value is\nexpressed as a fraction of the viewport. This really is just\nanother way of setting the Position2 instance variable.\n"},
  {(char*)"SetHeight", PyvtkActor2D_SetHeight, 1,
   (char*)"V.SetHeight(float)\nC++: void SetHeight(double h)\n\nSet/Get the height and width of the Actor2D. The value is\nexpressed as a fraction of the viewport. This really is just\nanother way of setting the Position2 instance variable.\n"},
  {(char*)"GetHeight", PyvtkActor2D_GetHeight, 1,
   (char*)"V.GetHeight() -> float\nC++: double GetHeight()\n\nSet/Get the height and width of the Actor2D. The value is\nexpressed as a fraction of the viewport. This really is just\nanother way of setting the Position2 instance variable.\n"},
  {(char*)"GetMTime", PyvtkActor2D_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long GetMTime()\n\nReturn this objects MTime.\n"},
  {(char*)"GetActors2D", PyvtkActor2D_GetActors2D, 1,
   (char*)"V.GetActors2D(vtkPropCollection)\nC++: virtual void GetActors2D(vtkPropCollection *pc)\n\nFor some exporters and other other operations we must be able to\ncollect all the actors or volumes. These methods are used in that\nprocess.\n"},
  {(char*)"ShallowCopy", PyvtkActor2D_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkProp)\nC++: virtual void ShallowCopy(vtkProp *prop)\n\nShallow copy of this vtkActor2D. Overloads the virtual vtkProp\nmethod.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkActor2D_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {(char*)"GetActualPositionCoordinate", PyvtkActor2D_GetActualPositionCoordinate, 1,
   (char*)"V.GetActualPositionCoordinate() -> vtkCoordinate\nC++: virtual vtkCoordinate *GetActualPositionCoordinate(void)\n\nReturn the actual vtkCoordinate reference that the mapper should\nuse to position the actor. This is used internally by the mappers\nand should be overridden in specialized subclasses and otherwise\nignored.\n"},
  {(char*)"GetActualPosition2Coordinate", PyvtkActor2D_GetActualPosition2Coordinate, 1,
   (char*)"V.GetActualPosition2Coordinate() -> vtkCoordinate\nC++: virtual vtkCoordinate *GetActualPosition2Coordinate(void)\n\nReturn the actual vtkCoordinate reference that the mapper should\nuse to position the actor. This is used internally by the mappers\nand should be overridden in specialized subclasses and otherwise\nignored.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkActor2D_StaticNew()
{
  return vtkActor2D::New();
}

PyObject *PyVTKClass_vtkActor2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkActor2D_StaticNew,
    PyvtkActor2D_Methods,
    "vtkActor2D", modulename,
    NULL, NULL,
    PyvtkActor2D_Doc(),
    PyVTKClass_vtkPropNew(modulename));
  return cls;
}

const char **PyvtkActor2D_Doc()
{
  static const char *docstring[] = {
    "vtkActor2D - a actor that draws 2D data\n\n",
    "Superclass: vtkProp\n\n",
    "vtkActor2D is similar to vtkActor, but it is made to be used with two\ndimensional images and annotation.  vtkActor2D has a position but\ndoes not use a transformation matrix like vtkActor (see the\nsuperclass vtkProp for information on positioning vtkActor2D). \nvtkActor2D has a reference to a vtkMapper2D object which does the\nrendering.\n\nSee Also:\n\nvtkProp  vtkMapper2D vtkProperty2D\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkActor2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkActor2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkActor2D", o) != 0)
    {
    Py_DECREF(o);
    }

}
