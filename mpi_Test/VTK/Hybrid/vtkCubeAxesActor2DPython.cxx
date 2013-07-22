// python wrapper for vtkCubeAxesActor2D
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
#include "vtkCubeAxesActor2D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCubeAxesActor2D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCubeAxesActor2D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCubeAxesActor2DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCubeAxesActor2DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkActor2DNew
extern "C" { PyObject *PyVTKClass_vtkActor2DNew(const char *); }
#define DECLARED_PyVTKClass_vtkActor2DNew
#endif

static const char **PyvtkCubeAxesActor2D_Doc();


static PyObject *
PyvtkCubeAxesActor2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

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
      tempr = op->vtkCubeAxesActor2D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

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
      tempr = op->vtkCubeAxesActor2D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  vtkCubeAxesActor2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCubeAxesActor2D::NewInstance();
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
PyvtkCubeAxesActor2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCubeAxesActor2D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCubeAxesActor2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

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
      tempr = op->vtkCubeAxesActor2D::RenderOverlay(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

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
      tempr = op->vtkCubeAxesActor2D::RenderOpaqueGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

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
      tempr = op->vtkCubeAxesActor2D::RenderTranslucentPolygonalGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

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
      tempr = op->vtkCubeAxesActor2D::HasTranslucentPolygonalGeometry();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  vtkDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkCubeAxesActor2D::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetViewProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->SetViewProp(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetViewProp(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetViewProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  vtkProp *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetViewProp();
      }
    else
      {
      tempr = op->vtkCubeAxesActor2D::GetViewProp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesActor2D_SetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  double temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetBounds(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesActor2D_SetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkCubeAxesActor2D_SetBounds_s1(self, args);
    case 1:
      return PyvtkCubeAxesActor2D_SetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBounds");
  return NULL;
}



static PyObject *
PyvtkCubeAxesActor2D_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  double *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBounds();
      }
    else
      {
      tempr = op->vtkCubeAxesActor2D::GetBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesActor2D_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->GetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkCubeAxesActor2D::GetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
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
      ap.SetArgValue(5, temp5);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesActor2D_GetBounds_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

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
      op->GetBounds(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::GetBounds(temp0);
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
PyvtkCubeAxesActor2D_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkCubeAxesActor2D_GetBounds_s1(self, args);
    case 6:
      return PyvtkCubeAxesActor2D_GetBounds_s2(self, args);
    case 1:
      return PyvtkCubeAxesActor2D_GetBounds_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return NULL;
}



static PyObject *
PyvtkCubeAxesActor2D_SetRanges_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetRanges(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetRanges(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesActor2D_SetRanges_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  double temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetRanges(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetRanges(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesActor2D_SetRanges(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkCubeAxesActor2D_SetRanges_s1(self, args);
    case 1:
      return PyvtkCubeAxesActor2D_SetRanges_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetRanges");
  return NULL;
}



static PyObject *
PyvtkCubeAxesActor2D_GetRanges_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  double *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRanges();
      }
    else
      {
      tempr = op->vtkCubeAxesActor2D::GetRanges();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesActor2D_GetRanges_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->GetRanges(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkCubeAxesActor2D::GetRanges(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
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
      ap.SetArgValue(5, temp5);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesActor2D_GetRanges_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

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
      op->GetRanges(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::GetRanges(temp0);
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
PyvtkCubeAxesActor2D_GetRanges(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkCubeAxesActor2D_GetRanges_s1(self, args);
    case 6:
      return PyvtkCubeAxesActor2D_GetRanges_s2(self, args);
    case 1:
      return PyvtkCubeAxesActor2D_GetRanges_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetRanges");
  return NULL;
}



static PyObject *
PyvtkCubeAxesActor2D_SetXOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXOrigin(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetXOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetYOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYOrigin(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetYOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetZOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZOrigin(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetZOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetUseRanges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseRanges(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetUseRanges(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetUseRanges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseRanges();
      }
    else
      {
      tempr = op->vtkCubeAxesActor2D::GetUseRanges();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_UseRangesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseRangesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseRangesOn();
      }
    else
      {
      op->vtkCubeAxesActor2D::UseRangesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_UseRangesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseRangesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseRangesOff();
      }
    else
      {
      op->vtkCubeAxesActor2D::UseRangesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  vtkCamera *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCamera"))
    {
    if (ap.IsBound())
      {
      op->SetCamera(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetCamera(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  vtkCamera *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCamera();
      }
    else
      {
      tempr = op->vtkCubeAxesActor2D::GetCamera();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetFlyMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlyMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFlyMode(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetFlyMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetFlyModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlyModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFlyModeMinValue();
      }
    else
      {
      tempr = op->vtkCubeAxesActor2D::GetFlyModeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetFlyModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlyModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFlyModeMaxValue();
      }
    else
      {
      tempr = op->vtkCubeAxesActor2D::GetFlyModeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetFlyMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlyMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFlyMode();
      }
    else
      {
      tempr = op->vtkCubeAxesActor2D::GetFlyMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetFlyModeToOuterEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlyModeToOuterEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetFlyModeToOuterEdges();
      }
    else
      {
      op->vtkCubeAxesActor2D::SetFlyModeToOuterEdges();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetFlyModeToClosestTriad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlyModeToClosestTriad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetFlyModeToClosestTriad();
      }
    else
      {
      op->vtkCubeAxesActor2D::SetFlyModeToClosestTriad();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetFlyModeToNone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlyModeToNone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetFlyModeToNone();
      }
    else
      {
      op->vtkCubeAxesActor2D::SetFlyModeToNone();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScaling(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetScaling(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScaling();
      }
    else
      {
      tempr = op->vtkCubeAxesActor2D::GetScaling();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_ScalingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalingOn();
      }
    else
      {
      op->vtkCubeAxesActor2D::ScalingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_ScalingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalingOff();
      }
    else
      {
      op->vtkCubeAxesActor2D::ScalingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetNumberOfLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

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
      op->vtkCubeAxesActor2D::SetNumberOfLabels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetNumberOfLabelsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLabelsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

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
      tempr = op->vtkCubeAxesActor2D::GetNumberOfLabelsMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetNumberOfLabelsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLabelsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

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
      tempr = op->vtkCubeAxesActor2D::GetNumberOfLabelsMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetNumberOfLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

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
      tempr = op->vtkCubeAxesActor2D::GetNumberOfLabels();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetXLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXLabel(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetXLabel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetXLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXLabel();
      }
    else
      {
      tempr = op->vtkCubeAxesActor2D::GetXLabel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetYLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYLabel(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetYLabel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetYLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetYLabel();
      }
    else
      {
      tempr = op->vtkCubeAxesActor2D::GetYLabel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetZLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZLabel(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetZLabel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetZLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetZLabel();
      }
    else
      {
      tempr = op->vtkCubeAxesActor2D::GetZLabel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetXAxisActor2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisActor2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  vtkAxisActor2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXAxisActor2D();
      }
    else
      {
      tempr = op->vtkCubeAxesActor2D::GetXAxisActor2D();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetYAxisActor2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisActor2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  vtkAxisActor2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetYAxisActor2D();
      }
    else
      {
      tempr = op->vtkCubeAxesActor2D::GetYAxisActor2D();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetZAxisActor2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisActor2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  vtkAxisActor2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetZAxisActor2D();
      }
    else
      {
      tempr = op->vtkCubeAxesActor2D::GetZAxisActor2D();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetAxisTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->SetAxisTitleTextProperty(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetAxisTitleTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetAxisTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  vtkTextProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAxisTitleTextProperty();
      }
    else
      {
      tempr = op->vtkCubeAxesActor2D::GetAxisTitleTextProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetAxisLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->SetAxisLabelTextProperty(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetAxisLabelTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetAxisLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  vtkTextProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAxisLabelTextProperty();
      }
    else
      {
      tempr = op->vtkCubeAxesActor2D::GetAxisLabelTextProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

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
      op->vtkCubeAxesActor2D::SetLabelFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

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
      tempr = op->vtkCubeAxesActor2D::GetLabelFormat();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetFontFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFontFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFontFactor(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetFontFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetFontFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFontFactorMinValue();
      }
    else
      {
      tempr = op->vtkCubeAxesActor2D::GetFontFactorMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetFontFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFontFactorMaxValue();
      }
    else
      {
      tempr = op->vtkCubeAxesActor2D::GetFontFactorMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetFontFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFontFactor();
      }
    else
      {
      tempr = op->vtkCubeAxesActor2D::GetFontFactor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetInertia(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInertia");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInertia(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetInertia(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetInertiaMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInertiaMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInertiaMinValue();
      }
    else
      {
      tempr = op->vtkCubeAxesActor2D::GetInertiaMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetInertiaMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInertiaMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInertiaMaxValue();
      }
    else
      {
      tempr = op->vtkCubeAxesActor2D::GetInertiaMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetInertia(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInertia");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInertia();
      }
    else
      {
      tempr = op->vtkCubeAxesActor2D::GetInertia();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetShowActualBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowActualBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShowActualBounds(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetShowActualBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetShowActualBoundsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowActualBoundsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShowActualBoundsMinValue();
      }
    else
      {
      tempr = op->vtkCubeAxesActor2D::GetShowActualBoundsMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetShowActualBoundsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowActualBoundsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShowActualBoundsMaxValue();
      }
    else
      {
      tempr = op->vtkCubeAxesActor2D::GetShowActualBoundsMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetShowActualBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowActualBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShowActualBounds();
      }
    else
      {
      tempr = op->vtkCubeAxesActor2D::GetShowActualBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetCornerOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCornerOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCornerOffset(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetCornerOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetCornerOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCornerOffset();
      }
    else
      {
      tempr = op->vtkCubeAxesActor2D::GetCornerOffset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

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
      op->vtkCubeAxesActor2D::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetXAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXAxisVisibility(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetXAxisVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetXAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXAxisVisibility();
      }
    else
      {
      tempr = op->vtkCubeAxesActor2D::GetXAxisVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_XAxisVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XAxisVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->XAxisVisibilityOn();
      }
    else
      {
      op->vtkCubeAxesActor2D::XAxisVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_XAxisVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XAxisVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->XAxisVisibilityOff();
      }
    else
      {
      op->vtkCubeAxesActor2D::XAxisVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetYAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYAxisVisibility(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetYAxisVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetYAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetYAxisVisibility();
      }
    else
      {
      tempr = op->vtkCubeAxesActor2D::GetYAxisVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_YAxisVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YAxisVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->YAxisVisibilityOn();
      }
    else
      {
      op->vtkCubeAxesActor2D::YAxisVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_YAxisVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YAxisVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->YAxisVisibilityOff();
      }
    else
      {
      op->vtkCubeAxesActor2D::YAxisVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetZAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZAxisVisibility(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetZAxisVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetZAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetZAxisVisibility();
      }
    else
      {
      tempr = op->vtkCubeAxesActor2D::GetZAxisVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_ZAxisVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZAxisVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ZAxisVisibilityOn();
      }
    else
      {
      op->vtkCubeAxesActor2D::ZAxisVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_ZAxisVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZAxisVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ZAxisVisibilityOff();
      }
    else
      {
      op->vtkCubeAxesActor2D::ZAxisVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  vtkCubeAxesActor2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCubeAxesActor2D"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkCubeAxesActor2D_SetProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->SetProp(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetProp(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkCubeAxesActor2D_GetProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  vtkProp *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProp();
      }
    else
      {
      tempr = op->vtkCubeAxesActor2D::GetProp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}
#endif

static PyMethodDef PyvtkCubeAxesActor2D_Methods[] = {
  {(char*)"GetClassName", PyvtkCubeAxesActor2D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCubeAxesActor2D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCubeAxesActor2D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCubeAxesActor2D\nC++: vtkCubeAxesActor2D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCubeAxesActor2D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCubeAxesActor2D\nC++: vtkCubeAxesActor2D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"RenderOverlay", PyvtkCubeAxesActor2D_RenderOverlay, 1,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *)\n\nDraw the axes as per the vtkProp superclass' API.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkCubeAxesActor2D_RenderOpaqueGeometry, 1,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *)\n\nDraw the axes as per the vtkProp superclass' API.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkCubeAxesActor2D_RenderTranslucentPolygonalGeometry, 1,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(vtkViewport *)\n\nDraw the axes as per the vtkProp superclass' API.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkCubeAxesActor2D_HasTranslucentPolygonalGeometry, 1,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {(char*)"SetInput", PyvtkCubeAxesActor2D_SetInput, 1,
   (char*)"V.SetInput(vtkDataSet)\nC++: virtual void SetInput(vtkDataSet *)\n\nUse the bounding box of this input dataset to draw the cube axes.\nIf this is not specified, then the class will attempt to\ndetermine the bounds from the defined Prop or Bounds.\n"},
  {(char*)"GetInput", PyvtkCubeAxesActor2D_GetInput, 1,
   (char*)"V.GetInput() -> vtkDataSet\nC++: vtkDataSet *GetInput()\n\nUse the bounding box of this input dataset to draw the cube axes.\nIf this is not specified, then the class will attempt to\ndetermine the bounds from the defined Prop or Bounds.\n"},
  {(char*)"SetViewProp", PyvtkCubeAxesActor2D_SetViewProp, 1,
   (char*)"V.SetViewProp(vtkProp)\nC++: void SetViewProp(vtkProp *prop)\n\nUse the bounding box of this prop to draw the cube axes. The\nViewProp is used to determine the bounds only if the Input is not\ndefined.\n"},
  {(char*)"GetViewProp", PyvtkCubeAxesActor2D_GetViewProp, 1,
   (char*)"V.GetViewProp() -> vtkProp\nC++: vtkProp *GetViewProp()\n\nUse the bounding box of this prop to draw the cube axes. The\nViewProp is used to determine the bounds only if the Input is not\ndefined.\n"},
  {(char*)"SetBounds", PyvtkCubeAxesActor2D_SetBounds, 1,
   (char*)"V.SetBounds(float, float, float, float, float, float)\nC++: void SetBounds(double, double, double, double, double,\n    double)\nV.SetBounds((float, float, float, float, float, float))\nC++: void SetBounds(double a[6])\n\n"},
  {(char*)"GetBounds", PyvtkCubeAxesActor2D_GetBounds, 1,
   (char*)"V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds()\nV.GetBounds(float, float, float, float, float, float)\nC++: void GetBounds(double &xmin, double &xmax, double &ymin,\n    double &ymax, double &zmin, double &zmax)\nV.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6])\n\nExplicitly specify the region in space around which to draw the\nbounds. The bounds is used only when no Input or Prop is\nspecified. The bounds are specified according to (xmin,xmax,\nymin,ymax, zmin,zmax), making sure that the min's are less than the\nmax's.\n"},
  {(char*)"SetRanges", PyvtkCubeAxesActor2D_SetRanges, 1,
   (char*)"V.SetRanges(float, float, float, float, float, float)\nC++: void SetRanges(double, double, double, double, double,\n    double)\nV.SetRanges((float, float, float, float, float, float))\nC++: void SetRanges(double a[6])\n\n"},
  {(char*)"GetRanges", PyvtkCubeAxesActor2D_GetRanges, 1,
   (char*)"V.GetRanges() -> (float, float, float, float, float, float)\nC++: double *GetRanges()\nV.GetRanges(float, float, float, float, float, float)\nC++: void GetRanges(double &xmin, double &xmax, double &ymin,\n    double &ymax, double &zmin, double &zmax)\nV.GetRanges([float, float, float, float, float, float])\nC++: void GetRanges(double ranges[6])\n\nExplicitly specify the range of values used on the bounds. The\nranges are specified according to (xmin,xmax, ymin,ymax,\nzmin,zmax), making sure that the min's are less than the max's.\n"},
  {(char*)"SetXOrigin", PyvtkCubeAxesActor2D_SetXOrigin, 1,
   (char*)"V.SetXOrigin(float)\nC++: void SetXOrigin(double a)\n\nExplicitly specify an origin for the axes. These usually\nintersect at one of the corners of the bounding box, however\nusers have the option to override this if necessary\n"},
  {(char*)"SetYOrigin", PyvtkCubeAxesActor2D_SetYOrigin, 1,
   (char*)"V.SetYOrigin(float)\nC++: void SetYOrigin(double a)\n\nExplicitly specify an origin for the axes. These usually\nintersect at one of the corners of the bounding box, however\nusers have the option to override this if necessary\n"},
  {(char*)"SetZOrigin", PyvtkCubeAxesActor2D_SetZOrigin, 1,
   (char*)"V.SetZOrigin(float)\nC++: void SetZOrigin(double a)\n\nExplicitly specify an origin for the axes. These usually\nintersect at one of the corners of the bounding box, however\nusers have the option to override this if necessary\n"},
  {(char*)"SetUseRanges", PyvtkCubeAxesActor2D_SetUseRanges, 1,
   (char*)"V.SetUseRanges(int)\nC++: void SetUseRanges(int a)\n\nSet/Get a flag that controls whether the axes use the data ranges\nor the ranges set by SetRanges. By default the axes use the data\nranges.\n"},
  {(char*)"GetUseRanges", PyvtkCubeAxesActor2D_GetUseRanges, 1,
   (char*)"V.GetUseRanges() -> int\nC++: int GetUseRanges()\n\nSet/Get a flag that controls whether the axes use the data ranges\nor the ranges set by SetRanges. By default the axes use the data\nranges.\n"},
  {(char*)"UseRangesOn", PyvtkCubeAxesActor2D_UseRangesOn, 1,
   (char*)"V.UseRangesOn()\nC++: void UseRangesOn()\n\nSet/Get a flag that controls whether the axes use the data ranges\nor the ranges set by SetRanges. By default the axes use the data\nranges.\n"},
  {(char*)"UseRangesOff", PyvtkCubeAxesActor2D_UseRangesOff, 1,
   (char*)"V.UseRangesOff()\nC++: void UseRangesOff()\n\nSet/Get a flag that controls whether the axes use the data ranges\nor the ranges set by SetRanges. By default the axes use the data\nranges.\n"},
  {(char*)"SetCamera", PyvtkCubeAxesActor2D_SetCamera, 1,
   (char*)"V.SetCamera(vtkCamera)\nC++: virtual void SetCamera(vtkCamera *)\n\nSet/Get the camera to perform scaling and translation of the\nvtkCubeAxesActor2D.\n"},
  {(char*)"GetCamera", PyvtkCubeAxesActor2D_GetCamera, 1,
   (char*)"V.GetCamera() -> vtkCamera\nC++: vtkCamera *GetCamera()\n\nSet/Get the camera to perform scaling and translation of the\nvtkCubeAxesActor2D.\n"},
  {(char*)"SetFlyMode", PyvtkCubeAxesActor2D_SetFlyMode, 1,
   (char*)"V.SetFlyMode(int)\nC++: void SetFlyMode(int)\n\nSpecify a mode to control how the axes are drawn: either outer\nedges or closest triad to the camera position, or you may also\ndisable flying of the axes.\n"},
  {(char*)"GetFlyModeMinValue", PyvtkCubeAxesActor2D_GetFlyModeMinValue, 1,
   (char*)"V.GetFlyModeMinValue() -> int\nC++: int GetFlyModeMinValue()\n\nSpecify a mode to control how the axes are drawn: either outer\nedges or closest triad to the camera position, or you may also\ndisable flying of the axes.\n"},
  {(char*)"GetFlyModeMaxValue", PyvtkCubeAxesActor2D_GetFlyModeMaxValue, 1,
   (char*)"V.GetFlyModeMaxValue() -> int\nC++: int GetFlyModeMaxValue()\n\nSpecify a mode to control how the axes are drawn: either outer\nedges or closest triad to the camera position, or you may also\ndisable flying of the axes.\n"},
  {(char*)"GetFlyMode", PyvtkCubeAxesActor2D_GetFlyMode, 1,
   (char*)"V.GetFlyMode() -> int\nC++: int GetFlyMode()\n\nSpecify a mode to control how the axes are drawn: either outer\nedges or closest triad to the camera position, or you may also\ndisable flying of the axes.\n"},
  {(char*)"SetFlyModeToOuterEdges", PyvtkCubeAxesActor2D_SetFlyModeToOuterEdges, 1,
   (char*)"V.SetFlyModeToOuterEdges()\nC++: void SetFlyModeToOuterEdges()\n\nSpecify a mode to control how the axes are drawn: either outer\nedges or closest triad to the camera position, or you may also\ndisable flying of the axes.\n"},
  {(char*)"SetFlyModeToClosestTriad", PyvtkCubeAxesActor2D_SetFlyModeToClosestTriad, 1,
   (char*)"V.SetFlyModeToClosestTriad()\nC++: void SetFlyModeToClosestTriad()\n\nSpecify a mode to control how the axes are drawn: either outer\nedges or closest triad to the camera position, or you may also\ndisable flying of the axes.\n"},
  {(char*)"SetFlyModeToNone", PyvtkCubeAxesActor2D_SetFlyModeToNone, 1,
   (char*)"V.SetFlyModeToNone()\nC++: void SetFlyModeToNone()\n\nSpecify a mode to control how the axes are drawn: either outer\nedges or closest triad to the camera position, or you may also\ndisable flying of the axes.\n"},
  {(char*)"SetScaling", PyvtkCubeAxesActor2D_SetScaling, 1,
   (char*)"V.SetScaling(int)\nC++: void SetScaling(int a)\n\nSet/Get a flag that controls whether the axes are scaled to fit\nin the viewport. If off, the axes size remains constant (i.e.,\nstay the size of the bounding box). By default scaling is on so\nthe axes are scaled to fit inside the viewport.\n"},
  {(char*)"GetScaling", PyvtkCubeAxesActor2D_GetScaling, 1,
   (char*)"V.GetScaling() -> int\nC++: int GetScaling()\n\nSet/Get a flag that controls whether the axes are scaled to fit\nin the viewport. If off, the axes size remains constant (i.e.,\nstay the size of the bounding box). By default scaling is on so\nthe axes are scaled to fit inside the viewport.\n"},
  {(char*)"ScalingOn", PyvtkCubeAxesActor2D_ScalingOn, 1,
   (char*)"V.ScalingOn()\nC++: void ScalingOn()\n\nSet/Get a flag that controls whether the axes are scaled to fit\nin the viewport. If off, the axes size remains constant (i.e.,\nstay the size of the bounding box). By default scaling is on so\nthe axes are scaled to fit inside the viewport.\n"},
  {(char*)"ScalingOff", PyvtkCubeAxesActor2D_ScalingOff, 1,
   (char*)"V.ScalingOff()\nC++: void ScalingOff()\n\nSet/Get a flag that controls whether the axes are scaled to fit\nin the viewport. If off, the axes size remains constant (i.e.,\nstay the size of the bounding box). By default scaling is on so\nthe axes are scaled to fit inside the viewport.\n"},
  {(char*)"SetNumberOfLabels", PyvtkCubeAxesActor2D_SetNumberOfLabels, 1,
   (char*)"V.SetNumberOfLabels(int)\nC++: void SetNumberOfLabels(int)\n\nSet/Get the number of annotation labels to show along the x, y,\nand z axes. This values is a suggestion: the number of labels may\nvary depending on the particulars of the data.\n"},
  {(char*)"GetNumberOfLabelsMinValue", PyvtkCubeAxesActor2D_GetNumberOfLabelsMinValue, 1,
   (char*)"V.GetNumberOfLabelsMinValue() -> int\nC++: int GetNumberOfLabelsMinValue()\n\nSet/Get the number of annotation labels to show along the x, y,\nand z axes. This values is a suggestion: the number of labels may\nvary depending on the particulars of the data.\n"},
  {(char*)"GetNumberOfLabelsMaxValue", PyvtkCubeAxesActor2D_GetNumberOfLabelsMaxValue, 1,
   (char*)"V.GetNumberOfLabelsMaxValue() -> int\nC++: int GetNumberOfLabelsMaxValue()\n\nSet/Get the number of annotation labels to show along the x, y,\nand z axes. This values is a suggestion: the number of labels may\nvary depending on the particulars of the data.\n"},
  {(char*)"GetNumberOfLabels", PyvtkCubeAxesActor2D_GetNumberOfLabels, 1,
   (char*)"V.GetNumberOfLabels() -> int\nC++: int GetNumberOfLabels()\n\nSet/Get the number of annotation labels to show along the x, y,\nand z axes. This values is a suggestion: the number of labels may\nvary depending on the particulars of the data.\n"},
  {(char*)"SetXLabel", PyvtkCubeAxesActor2D_SetXLabel, 1,
   (char*)"V.SetXLabel(string)\nC++: void SetXLabel(char *)\n\nSet/Get the labels for the x, y, and z axes. By default, use \"X\",\n\"Y\" and \"Z\".\n"},
  {(char*)"GetXLabel", PyvtkCubeAxesActor2D_GetXLabel, 1,
   (char*)"V.GetXLabel() -> string\nC++: char *GetXLabel()\n\nSet/Get the labels for the x, y, and z axes. By default, use \"X\",\n\"Y\" and \"Z\".\n"},
  {(char*)"SetYLabel", PyvtkCubeAxesActor2D_SetYLabel, 1,
   (char*)"V.SetYLabel(string)\nC++: void SetYLabel(char *)\n\nSet/Get the labels for the x, y, and z axes. By default, use \"X\",\n\"Y\" and \"Z\".\n"},
  {(char*)"GetYLabel", PyvtkCubeAxesActor2D_GetYLabel, 1,
   (char*)"V.GetYLabel() -> string\nC++: char *GetYLabel()\n\nSet/Get the labels for the x, y, and z axes. By default, use \"X\",\n\"Y\" and \"Z\".\n"},
  {(char*)"SetZLabel", PyvtkCubeAxesActor2D_SetZLabel, 1,
   (char*)"V.SetZLabel(string)\nC++: void SetZLabel(char *)\n\nSet/Get the labels for the x, y, and z axes. By default, use \"X\",\n\"Y\" and \"Z\".\n"},
  {(char*)"GetZLabel", PyvtkCubeAxesActor2D_GetZLabel, 1,
   (char*)"V.GetZLabel() -> string\nC++: char *GetZLabel()\n\nSet/Get the labels for the x, y, and z axes. By default, use \"X\",\n\"Y\" and \"Z\".\n"},
  {(char*)"GetXAxisActor2D", PyvtkCubeAxesActor2D_GetXAxisActor2D, 1,
   (char*)"V.GetXAxisActor2D() -> vtkAxisActor2D\nC++: vtkAxisActor2D *GetXAxisActor2D()\n\nRetrieve handles to the X, Y and Z axis (so that you can set\ntheir text properties for example)\n"},
  {(char*)"GetYAxisActor2D", PyvtkCubeAxesActor2D_GetYAxisActor2D, 1,
   (char*)"V.GetYAxisActor2D() -> vtkAxisActor2D\nC++: vtkAxisActor2D *GetYAxisActor2D()\n\nRetrieve handles to the X, Y and Z axis (so that you can set\ntheir text properties for example)\n"},
  {(char*)"GetZAxisActor2D", PyvtkCubeAxesActor2D_GetZAxisActor2D, 1,
   (char*)"V.GetZAxisActor2D() -> vtkAxisActor2D\nC++: vtkAxisActor2D *GetZAxisActor2D()\n\nRetrieve handles to the X, Y and Z axis (so that you can set\ntheir text properties for example)\n"},
  {(char*)"SetAxisTitleTextProperty", PyvtkCubeAxesActor2D_SetAxisTitleTextProperty, 1,
   (char*)"V.SetAxisTitleTextProperty(vtkTextProperty)\nC++: virtual void SetAxisTitleTextProperty(vtkTextProperty *p)\n\nSet/Get the title text property of all axes. Note that each axis\ncan be controlled individually through the GetX/Y/ZAxisActor2D()\nmethods.\n"},
  {(char*)"GetAxisTitleTextProperty", PyvtkCubeAxesActor2D_GetAxisTitleTextProperty, 1,
   (char*)"V.GetAxisTitleTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetAxisTitleTextProperty()\n\nSet/Get the title text property of all axes. Note that each axis\ncan be controlled individually through the GetX/Y/ZAxisActor2D()\nmethods.\n"},
  {(char*)"SetAxisLabelTextProperty", PyvtkCubeAxesActor2D_SetAxisLabelTextProperty, 1,
   (char*)"V.SetAxisLabelTextProperty(vtkTextProperty)\nC++: virtual void SetAxisLabelTextProperty(vtkTextProperty *p)\n\nSet/Get the labels text property of all axes. Note that each axis\ncan be controlled individually through the GetX/Y/ZAxisActor2D()\nmethods.\n"},
  {(char*)"GetAxisLabelTextProperty", PyvtkCubeAxesActor2D_GetAxisLabelTextProperty, 1,
   (char*)"V.GetAxisLabelTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetAxisLabelTextProperty()\n\nSet/Get the labels text property of all axes. Note that each axis\ncan be controlled individually through the GetX/Y/ZAxisActor2D()\nmethods.\n"},
  {(char*)"SetLabelFormat", PyvtkCubeAxesActor2D_SetLabelFormat, 1,
   (char*)"V.SetLabelFormat(string)\nC++: void SetLabelFormat(char *)\n\nSet/Get the format with which to print the labels on each of the\nx-y-z axes.\n"},
  {(char*)"GetLabelFormat", PyvtkCubeAxesActor2D_GetLabelFormat, 1,
   (char*)"V.GetLabelFormat() -> string\nC++: char *GetLabelFormat()\n\nSet/Get the format with which to print the labels on each of the\nx-y-z axes.\n"},
  {(char*)"SetFontFactor", PyvtkCubeAxesActor2D_SetFontFactor, 1,
   (char*)"V.SetFontFactor(float)\nC++: void SetFontFactor(double)\n\nSet/Get the factor that controls the overall size of the fonts\nused to label and title the axes.\n"},
  {(char*)"GetFontFactorMinValue", PyvtkCubeAxesActor2D_GetFontFactorMinValue, 1,
   (char*)"V.GetFontFactorMinValue() -> float\nC++: double GetFontFactorMinValue()\n\nSet/Get the factor that controls the overall size of the fonts\nused to label and title the axes.\n"},
  {(char*)"GetFontFactorMaxValue", PyvtkCubeAxesActor2D_GetFontFactorMaxValue, 1,
   (char*)"V.GetFontFactorMaxValue() -> float\nC++: double GetFontFactorMaxValue()\n\nSet/Get the factor that controls the overall size of the fonts\nused to label and title the axes.\n"},
  {(char*)"GetFontFactor", PyvtkCubeAxesActor2D_GetFontFactor, 1,
   (char*)"V.GetFontFactor() -> float\nC++: double GetFontFactor()\n\nSet/Get the factor that controls the overall size of the fonts\nused to label and title the axes.\n"},
  {(char*)"SetInertia", PyvtkCubeAxesActor2D_SetInertia, 1,
   (char*)"V.SetInertia(int)\nC++: void SetInertia(int)\n\nSet/Get the inertial factor that controls how often (i.e, how\nmany renders) the axes can switch position (jump from one axes to\nanother).\n"},
  {(char*)"GetInertiaMinValue", PyvtkCubeAxesActor2D_GetInertiaMinValue, 1,
   (char*)"V.GetInertiaMinValue() -> int\nC++: int GetInertiaMinValue()\n\nSet/Get the inertial factor that controls how often (i.e, how\nmany renders) the axes can switch position (jump from one axes to\nanother).\n"},
  {(char*)"GetInertiaMaxValue", PyvtkCubeAxesActor2D_GetInertiaMaxValue, 1,
   (char*)"V.GetInertiaMaxValue() -> int\nC++: int GetInertiaMaxValue()\n\nSet/Get the inertial factor that controls how often (i.e, how\nmany renders) the axes can switch position (jump from one axes to\nanother).\n"},
  {(char*)"GetInertia", PyvtkCubeAxesActor2D_GetInertia, 1,
   (char*)"V.GetInertia() -> int\nC++: int GetInertia()\n\nSet/Get the inertial factor that controls how often (i.e, how\nmany renders) the axes can switch position (jump from one axes to\nanother).\n"},
  {(char*)"SetShowActualBounds", PyvtkCubeAxesActor2D_SetShowActualBounds, 1,
   (char*)"V.SetShowActualBounds(int)\nC++: void SetShowActualBounds(int)\n\nSet/Get the variable that controls whether the actual bounds of\nthe dataset are always shown. Setting this variable to 1 means\nthat clipping is disabled and that the actual value of the bounds\nis displayed even with corner offsets Setting this variable to 0\nmeans these axis will clip themselves and show variable bounds\n(legacy mode)\n"},
  {(char*)"GetShowActualBoundsMinValue", PyvtkCubeAxesActor2D_GetShowActualBoundsMinValue, 1,
   (char*)"V.GetShowActualBoundsMinValue() -> int\nC++: int GetShowActualBoundsMinValue()\n\nSet/Get the variable that controls whether the actual bounds of\nthe dataset are always shown. Setting this variable to 1 means\nthat clipping is disabled and that the actual value of the bounds\nis displayed even with corner offsets Setting this variable to 0\nmeans these axis will clip themselves and show variable bounds\n(legacy mode)\n"},
  {(char*)"GetShowActualBoundsMaxValue", PyvtkCubeAxesActor2D_GetShowActualBoundsMaxValue, 1,
   (char*)"V.GetShowActualBoundsMaxValue() -> int\nC++: int GetShowActualBoundsMaxValue()\n\nSet/Get the variable that controls whether the actual bounds of\nthe dataset are always shown. Setting this variable to 1 means\nthat clipping is disabled and that the actual value of the bounds\nis displayed even with corner offsets Setting this variable to 0\nmeans these axis will clip themselves and show variable bounds\n(legacy mode)\n"},
  {(char*)"GetShowActualBounds", PyvtkCubeAxesActor2D_GetShowActualBounds, 1,
   (char*)"V.GetShowActualBounds() -> int\nC++: int GetShowActualBounds()\n\nSet/Get the variable that controls whether the actual bounds of\nthe dataset are always shown. Setting this variable to 1 means\nthat clipping is disabled and that the actual value of the bounds\nis displayed even with corner offsets Setting this variable to 0\nmeans these axis will clip themselves and show variable bounds\n(legacy mode)\n"},
  {(char*)"SetCornerOffset", PyvtkCubeAxesActor2D_SetCornerOffset, 1,
   (char*)"V.SetCornerOffset(float)\nC++: void SetCornerOffset(double a)\n\nSpecify an offset value to \"pull back\" the axes from the corner\nat which they are joined to avoid overlap of axes labels. The\n\"CornerOffset\" is the fraction of the axis length to pull back.\n"},
  {(char*)"GetCornerOffset", PyvtkCubeAxesActor2D_GetCornerOffset, 1,
   (char*)"V.GetCornerOffset() -> float\nC++: double GetCornerOffset()\n\nSpecify an offset value to \"pull back\" the axes from the corner\nat which they are joined to avoid overlap of axes labels. The\n\"CornerOffset\" is the fraction of the axis length to pull back.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkCubeAxesActor2D_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {(char*)"SetXAxisVisibility", PyvtkCubeAxesActor2D_SetXAxisVisibility, 1,
   (char*)"V.SetXAxisVisibility(int)\nC++: void SetXAxisVisibility(int a)\n\nTurn on and off the visibility of each axis.\n"},
  {(char*)"GetXAxisVisibility", PyvtkCubeAxesActor2D_GetXAxisVisibility, 1,
   (char*)"V.GetXAxisVisibility() -> int\nC++: int GetXAxisVisibility()\n\nTurn on and off the visibility of each axis.\n"},
  {(char*)"XAxisVisibilityOn", PyvtkCubeAxesActor2D_XAxisVisibilityOn, 1,
   (char*)"V.XAxisVisibilityOn()\nC++: void XAxisVisibilityOn()\n\nTurn on and off the visibility of each axis.\n"},
  {(char*)"XAxisVisibilityOff", PyvtkCubeAxesActor2D_XAxisVisibilityOff, 1,
   (char*)"V.XAxisVisibilityOff()\nC++: void XAxisVisibilityOff()\n\nTurn on and off the visibility of each axis.\n"},
  {(char*)"SetYAxisVisibility", PyvtkCubeAxesActor2D_SetYAxisVisibility, 1,
   (char*)"V.SetYAxisVisibility(int)\nC++: void SetYAxisVisibility(int a)\n\nTurn on and off the visibility of each axis.\n"},
  {(char*)"GetYAxisVisibility", PyvtkCubeAxesActor2D_GetYAxisVisibility, 1,
   (char*)"V.GetYAxisVisibility() -> int\nC++: int GetYAxisVisibility()\n\nTurn on and off the visibility of each axis.\n"},
  {(char*)"YAxisVisibilityOn", PyvtkCubeAxesActor2D_YAxisVisibilityOn, 1,
   (char*)"V.YAxisVisibilityOn()\nC++: void YAxisVisibilityOn()\n\nTurn on and off the visibility of each axis.\n"},
  {(char*)"YAxisVisibilityOff", PyvtkCubeAxesActor2D_YAxisVisibilityOff, 1,
   (char*)"V.YAxisVisibilityOff()\nC++: void YAxisVisibilityOff()\n\nTurn on and off the visibility of each axis.\n"},
  {(char*)"SetZAxisVisibility", PyvtkCubeAxesActor2D_SetZAxisVisibility, 1,
   (char*)"V.SetZAxisVisibility(int)\nC++: void SetZAxisVisibility(int a)\n\nTurn on and off the visibility of each axis.\n"},
  {(char*)"GetZAxisVisibility", PyvtkCubeAxesActor2D_GetZAxisVisibility, 1,
   (char*)"V.GetZAxisVisibility() -> int\nC++: int GetZAxisVisibility()\n\nTurn on and off the visibility of each axis.\n"},
  {(char*)"ZAxisVisibilityOn", PyvtkCubeAxesActor2D_ZAxisVisibilityOn, 1,
   (char*)"V.ZAxisVisibilityOn()\nC++: void ZAxisVisibilityOn()\n\nTurn on and off the visibility of each axis.\n"},
  {(char*)"ZAxisVisibilityOff", PyvtkCubeAxesActor2D_ZAxisVisibilityOff, 1,
   (char*)"V.ZAxisVisibilityOff()\nC++: void ZAxisVisibilityOff()\n\nTurn on and off the visibility of each axis.\n"},
  {(char*)"ShallowCopy", PyvtkCubeAxesActor2D_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkCubeAxesActor2D)\nC++: void ShallowCopy(vtkCubeAxesActor2D *actor)\n\nShallow copy of a CubeAxesActor2D.\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"SetProp", PyvtkCubeAxesActor2D_SetProp, 1,
   (char*)"V.SetProp(vtkProp)\nC++: virtual void SetProp(vtkProp *prop)\n\n@deprecated Replaced by vtkCubeAxesActor2D::SetViewProp() as of\nVTK 5.0.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"GetProp", PyvtkCubeAxesActor2D_GetProp, 1,
   (char*)"V.GetProp() -> vtkProp\nC++: virtual vtkProp *GetProp()\n\n@deprecated Replaced by vtkCubeAxesActor2D::GetViewProp() as of\nVTK 5.0.\n"},
#endif
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCubeAxesActor2D_StaticNew()
{
  return vtkCubeAxesActor2D::New();
}

PyObject *PyVTKClass_vtkCubeAxesActor2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCubeAxesActor2D_StaticNew,
    PyvtkCubeAxesActor2D_Methods,
    "vtkCubeAxesActor2D", modulename,
    NULL, NULL,
    PyvtkCubeAxesActor2D_Doc(),
    PyVTKClass_vtkActor2DNew(modulename));
  return cls;
}

const char **PyvtkCubeAxesActor2D_Doc()
{
  static const char *docstring[] = {
    "vtkCubeAxesActor2D - create a 2D plot of a bounding box edges - used\nfor navigation\n\n",
    "Superclass: vtkActor2D\n\n",
    "vtkCubeAxesActor2D is a composite actor that draws three axes of the\nbounding box of an input dataset. The axes include labels and titles\nfor the x-y-z axes. The algorithm selects the axes that are on the\n\"exterior\" of the bounding box, exterior as determined from examining\nouter edges of the bounding box in projection (display) space.\nAlternatively, the edges closest to the viewer (i.e., camera\np",
    "osition) can be drawn.\n\nTo use this object you must define a bounding box and the camera used\nto render the vtkCubeAxesActor2D. The camera is used to control the\nscaling and position of the vtkCubeAxesActor2D so that it fits in the\nviewport and always remains visible.)\n\nThe font property of the axes titles and labels can be modified\nthrough the AxisTitleTextProperty and AxisLabelTextProperty\nattri",
    "butes. You may also use the GetXAxisActor2D, GetYAxisActor2D or\nGetZAxisActor2D methods to access each individual axis actor to\nmodify their font properties.\n\nThe bounding box to use is defined in one of three ways. First, if\nthe Input ivar is defined, then the input dataset's bounds is used.\nIf the Input is not defined, and the Prop (superclass of all actors)\nis defined, then the Prop's bounds is",
    " used. If neither the Input or\nProp is defined, then the Bounds instance variable (an array of six\ndoubles) is used.\n\nSee Also:\n\nvtkActor2D vtkAxisActor2D vtkXYPlotActor vtkTextProperty\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCubeAxesActor2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCubeAxesActor2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCubeAxesActor2D", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_FLY_OUTER_EDGES", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_FLY_CLOSEST_TRIAD", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_FLY_NONE", o) != 0)
    {
    Py_DECREF(o);
    }

}

