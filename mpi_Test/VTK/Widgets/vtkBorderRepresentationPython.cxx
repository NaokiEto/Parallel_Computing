// python wrapper for vtkBorderRepresentation
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
#include "vtkBorderRepresentation.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkBorderRepresentation(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkBorderRepresentation(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkBorderRepresentationNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkBorderRepresentationNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkWidgetRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkWidgetRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkWidgetRepresentationNew
#endif

static const char **PyvtkBorderRepresentation_Doc();


static PyObject *
PyvtkBorderRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

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
      tempr = op->vtkBorderRepresentation::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

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
      tempr = op->vtkBorderRepresentation::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  vtkBorderRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkBorderRepresentation::NewInstance();
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
PyvtkBorderRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkBorderRepresentation *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkBorderRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetPositionCoordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

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
      tempr = op->vtkBorderRepresentation::GetPositionCoordinate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

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
      op->vtkBorderRepresentation::SetPosition(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBorderRepresentation_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

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
      op->vtkBorderRepresentation::SetPosition(temp0);
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
PyvtkBorderRepresentation_SetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkBorderRepresentation_SetPosition_s1(self, args);
    case 1:
      return PyvtkBorderRepresentation_SetPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return NULL;
}



static PyObject *
PyvtkBorderRepresentation_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

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
      tempr = op->vtkBorderRepresentation::GetPosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetPosition2Coordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition2Coordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

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
      tempr = op->vtkBorderRepresentation::GetPosition2Coordinate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetPosition2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

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
      op->vtkBorderRepresentation::SetPosition2(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBorderRepresentation_SetPosition2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

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
      op->vtkBorderRepresentation::SetPosition2(temp0);
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
PyvtkBorderRepresentation_SetPosition2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkBorderRepresentation_SetPosition2_s1(self, args);
    case 1:
      return PyvtkBorderRepresentation_SetPosition2_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition2");
  return NULL;
}



static PyObject *
PyvtkBorderRepresentation_GetPosition2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

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
      tempr = op->vtkBorderRepresentation::GetPosition2();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetShowBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShowBorder(temp0);
      }
    else
      {
      op->vtkBorderRepresentation::SetShowBorder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetShowBorderMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowBorderMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShowBorderMinValue();
      }
    else
      {
      tempr = op->vtkBorderRepresentation::GetShowBorderMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetShowBorderMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowBorderMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShowBorderMaxValue();
      }
    else
      {
      tempr = op->vtkBorderRepresentation::GetShowBorderMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetShowBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShowBorder();
      }
    else
      {
      tempr = op->vtkBorderRepresentation::GetShowBorder();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetShowBorderToOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowBorderToOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetShowBorderToOff();
      }
    else
      {
      op->vtkBorderRepresentation::SetShowBorderToOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetShowBorderToOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowBorderToOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetShowBorderToOn();
      }
    else
      {
      op->vtkBorderRepresentation::SetShowBorderToOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetShowBorderToActive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowBorderToActive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetShowBorderToActive();
      }
    else
      {
      op->vtkBorderRepresentation::SetShowBorderToActive();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetBorderProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  vtkProperty2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBorderProperty();
      }
    else
      {
      tempr = op->vtkBorderRepresentation::GetBorderProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetProportionalResize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProportionalResize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProportionalResize(temp0);
      }
    else
      {
      op->vtkBorderRepresentation::SetProportionalResize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetProportionalResize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProportionalResize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProportionalResize();
      }
    else
      {
      tempr = op->vtkBorderRepresentation::GetProportionalResize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_ProportionalResizeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProportionalResizeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ProportionalResizeOn();
      }
    else
      {
      op->vtkBorderRepresentation::ProportionalResizeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_ProportionalResizeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProportionalResizeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ProportionalResizeOff();
      }
    else
      {
      op->vtkBorderRepresentation::ProportionalResizeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetMinimumSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetMinimumSize(temp0, temp1);
      }
    else
      {
      op->vtkBorderRepresentation::SetMinimumSize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBorderRepresentation_SetMinimumSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetMinimumSize(temp0);
      }
    else
      {
      op->vtkBorderRepresentation::SetMinimumSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBorderRepresentation_SetMinimumSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkBorderRepresentation_SetMinimumSize_s1(self, args);
    case 1:
      return PyvtkBorderRepresentation_SetMinimumSize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetMinimumSize");
  return NULL;
}



static PyObject *
PyvtkBorderRepresentation_GetMinimumSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinimumSize();
      }
    else
      {
      tempr = op->vtkBorderRepresentation::GetMinimumSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetMaximumSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetMaximumSize(temp0, temp1);
      }
    else
      {
      op->vtkBorderRepresentation::SetMaximumSize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBorderRepresentation_SetMaximumSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumSize(temp0);
      }
    else
      {
      op->vtkBorderRepresentation::SetMaximumSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBorderRepresentation_SetMaximumSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkBorderRepresentation_SetMaximumSize_s1(self, args);
    case 1:
      return PyvtkBorderRepresentation_SetMaximumSize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetMaximumSize");
  return NULL;
}



static PyObject *
PyvtkBorderRepresentation_GetMaximumSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumSize();
      }
    else
      {
      tempr = op->vtkBorderRepresentation::GetMaximumSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

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
      op->vtkBorderRepresentation::SetTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

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
      tempr = op->vtkBorderRepresentation::GetToleranceMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

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
      tempr = op->vtkBorderRepresentation::GetToleranceMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

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
      tempr = op->vtkBorderRepresentation::GetTolerance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetSelectionPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectionPoint();
      }
    else
      {
      tempr = op->vtkBorderRepresentation::GetSelectionPoint();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetMoving(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMoving");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMoving(temp0);
      }
    else
      {
      op->vtkBorderRepresentation::SetMoving(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetMoving(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMoving");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMoving();
      }
    else
      {
      tempr = op->vtkBorderRepresentation::GetMoving();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_MovingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MovingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MovingOn();
      }
    else
      {
      op->vtkBorderRepresentation::MovingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_MovingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MovingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MovingOff();
      }
    else
      {
      op->vtkBorderRepresentation::MovingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkBorderRepresentation::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

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
      op->vtkBorderRepresentation::StartWidgetInteraction(temp0);
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
PyvtkBorderRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

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
      op->vtkBorderRepresentation::WidgetInteraction(temp0);
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
PyvtkBorderRepresentation_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

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
      op->GetSize(temp0);
      }
    else
      {
      op->vtkBorderRepresentation::GetSize(temp0);
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
PyvtkBorderRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

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
      tempr = op->vtkBorderRepresentation::ComputeInteractionState(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetActors2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

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
      op->vtkBorderRepresentation::GetActors2D(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

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
      op->vtkBorderRepresentation::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

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
      tempr = op->vtkBorderRepresentation::RenderOverlay(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

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
      tempr = op->vtkBorderRepresentation::RenderOpaqueGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

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
      tempr = op->vtkBorderRepresentation::RenderTranslucentPolygonalGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

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
      tempr = op->vtkBorderRepresentation::HasTranslucentPolygonalGeometry();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkBorderRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkBorderRepresentation_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nDefine standard methods.\n"},
  {(char*)"IsA", PyvtkBorderRepresentation_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nDefine standard methods.\n"},
  {(char*)"NewInstance", PyvtkBorderRepresentation_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkBorderRepresentation\nC++: vtkBorderRepresentation *NewInstance()\n\nDefine standard methods.\n"},
  {(char*)"SafeDownCast", PyvtkBorderRepresentation_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBorderRepresentation\nC++: vtkBorderRepresentation *SafeDownCast(vtkObject* o)\n\nDefine standard methods.\n"},
  {(char*)"GetPositionCoordinate", PyvtkBorderRepresentation_GetPositionCoordinate, 1,
   (char*)"V.GetPositionCoordinate() -> vtkCoordinate\nC++: vtkCoordinate *GetPositionCoordinate()\n\nSpecify opposite corners of the box defining the boundary of the\nwidget. By default, these coordinates are in the normalized\nviewport coordinate system, with Position the lower left of the\noutline, and Position2 relative to Position. Note that using\nthese methods are affected by the ProportionalResize flag. That\nis, if the aspect ratio of the representation is to be preserved\n(e.g., ProportionalResize is on), then the rectangle\n(Position,Position2) is a bounding rectangle. Also,\n"},
  {(char*)"SetPosition", PyvtkBorderRepresentation_SetPosition, 1,
   (char*)"V.SetPosition(float, float)\nC++: void SetPosition(double, double)\nV.SetPosition([float, float])\nC++: void SetPosition(double a[2])\n\nSpecify opposite corners of the box defining the boundary of the\nwidget. By default, these coordinates are in the normalized\nviewport coordinate system, with Position the lower left of the\noutline, and Position2 relative to Position. Note that using\nthese methods are affected by the ProportionalResize flag. That\nis, if the aspect ratio of the representation is to be preserved\n(e.g., ProportionalResize is on), then the rectangle\n(Position,Position2) is a bounding rectangle. Also,\n"},
  {(char*)"GetPosition", PyvtkBorderRepresentation_GetPosition, 1,
   (char*)"V.GetPosition() -> (float, float)\nC++: double *GetPosition()\n\nSpecify opposite corners of the box defining the boundary of the\nwidget. By default, these coordinates are in the normalized\nviewport coordinate system, with Position the lower left of the\noutline, and Position2 relative to Position. Note that using\nthese methods are affected by the ProportionalResize flag. That\nis, if the aspect ratio of the representation is to be preserved\n(e.g., ProportionalResize is on), then the rectangle\n(Position,Position2) is a bounding rectangle. Also,\n"},
  {(char*)"GetPosition2Coordinate", PyvtkBorderRepresentation_GetPosition2Coordinate, 1,
   (char*)"V.GetPosition2Coordinate() -> vtkCoordinate\nC++: vtkCoordinate *GetPosition2Coordinate()\n\nSpecify opposite corners of the box defining the boundary of the\nwidget. By default, these coordinates are in the normalized\nviewport coordinate system, with Position the lower left of the\noutline, and Position2 relative to Position. Note that using\nthese methods are affected by the ProportionalResize flag. That\nis, if the aspect ratio of the representation is to be preserved\n(e.g., ProportionalResize is on), then the rectangle\n(Position,Position2) is a bounding rectangle. Also,\n"},
  {(char*)"SetPosition2", PyvtkBorderRepresentation_SetPosition2, 1,
   (char*)"V.SetPosition2(float, float)\nC++: void SetPosition2(double, double)\nV.SetPosition2([float, float])\nC++: void SetPosition2(double a[2])\n\nSpecify opposite corners of the box defining the boundary of the\nwidget. By default, these coordinates are in the normalized\nviewport coordinate system, with Position the lower left of the\noutline, and Position2 relative to Position. Note that using\nthese methods are affected by the ProportionalResize flag. That\nis, if the aspect ratio of the representation is to be preserved\n(e.g., ProportionalResize is on), then the rectangle\n(Position,Position2) is a bounding rectangle. Also,\n"},
  {(char*)"GetPosition2", PyvtkBorderRepresentation_GetPosition2, 1,
   (char*)"V.GetPosition2() -> (float, float)\nC++: double *GetPosition2()\n\nSpecify opposite corners of the box defining the boundary of the\nwidget. By default, these coordinates are in the normalized\nviewport coordinate system, with Position the lower left of the\noutline, and Position2 relative to Position. Note that using\nthese methods are affected by the ProportionalResize flag. That\nis, if the aspect ratio of the representation is to be preserved\n(e.g., ProportionalResize is on), then the rectangle\n(Position,Position2) is a bounding rectangle. Also,\n"},
  {(char*)"SetShowBorder", PyvtkBorderRepresentation_SetShowBorder, 1,
   (char*)"V.SetShowBorder(int)\nC++: void SetShowBorder(int)\n\nSpecify when and if the border should appear. If ShowBorder is\n\"on\", then the border will always appear. If ShowBorder is \"off\"\nthen the border will never appear.  If ShowBorder is \"active\"\nthen the border will appear when the mouse pointer enters the\nregion bounded by the border widget.\n"},
  {(char*)"GetShowBorderMinValue", PyvtkBorderRepresentation_GetShowBorderMinValue, 1,
   (char*)"V.GetShowBorderMinValue() -> int\nC++: int GetShowBorderMinValue()\n\nSpecify when and if the border should appear. If ShowBorder is\n\"on\", then the border will always appear. If ShowBorder is \"off\"\nthen the border will never appear.  If ShowBorder is \"active\"\nthen the border will appear when the mouse pointer enters the\nregion bounded by the border widget.\n"},
  {(char*)"GetShowBorderMaxValue", PyvtkBorderRepresentation_GetShowBorderMaxValue, 1,
   (char*)"V.GetShowBorderMaxValue() -> int\nC++: int GetShowBorderMaxValue()\n\nSpecify when and if the border should appear. If ShowBorder is\n\"on\", then the border will always appear. If ShowBorder is \"off\"\nthen the border will never appear.  If ShowBorder is \"active\"\nthen the border will appear when the mouse pointer enters the\nregion bounded by the border widget.\n"},
  {(char*)"GetShowBorder", PyvtkBorderRepresentation_GetShowBorder, 1,
   (char*)"V.GetShowBorder() -> int\nC++: int GetShowBorder()\n\nSpecify when and if the border should appear. If ShowBorder is\n\"on\", then the border will always appear. If ShowBorder is \"off\"\nthen the border will never appear.  If ShowBorder is \"active\"\nthen the border will appear when the mouse pointer enters the\nregion bounded by the border widget.\n"},
  {(char*)"SetShowBorderToOff", PyvtkBorderRepresentation_SetShowBorderToOff, 1,
   (char*)"V.SetShowBorderToOff()\nC++: void SetShowBorderToOff()\n\nSpecify when and if the border should appear. If ShowBorder is\n\"on\", then the border will always appear. If ShowBorder is \"off\"\nthen the border will never appear.  If ShowBorder is \"active\"\nthen the border will appear when the mouse pointer enters the\nregion bounded by the border widget.\n"},
  {(char*)"SetShowBorderToOn", PyvtkBorderRepresentation_SetShowBorderToOn, 1,
   (char*)"V.SetShowBorderToOn()\nC++: void SetShowBorderToOn()\n\nSpecify when and if the border should appear. If ShowBorder is\n\"on\", then the border will always appear. If ShowBorder is \"off\"\nthen the border will never appear.  If ShowBorder is \"active\"\nthen the border will appear when the mouse pointer enters the\nregion bounded by the border widget.\n"},
  {(char*)"SetShowBorderToActive", PyvtkBorderRepresentation_SetShowBorderToActive, 1,
   (char*)"V.SetShowBorderToActive()\nC++: void SetShowBorderToActive()\n\nSpecify when and if the border should appear. If ShowBorder is\n\"on\", then the border will always appear. If ShowBorder is \"off\"\nthen the border will never appear.  If ShowBorder is \"active\"\nthen the border will appear when the mouse pointer enters the\nregion bounded by the border widget.\n"},
  {(char*)"GetBorderProperty", PyvtkBorderRepresentation_GetBorderProperty, 1,
   (char*)"V.GetBorderProperty() -> vtkProperty2D\nC++: vtkProperty2D *GetBorderProperty()\n\nSpecify the properties of the border.\n"},
  {(char*)"SetProportionalResize", PyvtkBorderRepresentation_SetProportionalResize, 1,
   (char*)"V.SetProportionalResize(int)\nC++: void SetProportionalResize(int a)\n\nIndicate whether resizing operations should keep the x-y\ndirections proportional to one another. Also, if\nProportionalResize is on, then the rectangle (Position,Position2)\nis a bounding rectangle, and the representation will be placed in\nthe rectangle in such a way as to preserve the aspect ratio of\nthe representation.\n"},
  {(char*)"GetProportionalResize", PyvtkBorderRepresentation_GetProportionalResize, 1,
   (char*)"V.GetProportionalResize() -> int\nC++: int GetProportionalResize()\n\nIndicate whether resizing operations should keep the x-y\ndirections proportional to one another. Also, if\nProportionalResize is on, then the rectangle (Position,Position2)\nis a bounding rectangle, and the representation will be placed in\nthe rectangle in such a way as to preserve the aspect ratio of\nthe representation.\n"},
  {(char*)"ProportionalResizeOn", PyvtkBorderRepresentation_ProportionalResizeOn, 1,
   (char*)"V.ProportionalResizeOn()\nC++: void ProportionalResizeOn()\n\nIndicate whether resizing operations should keep the x-y\ndirections proportional to one another. Also, if\nProportionalResize is on, then the rectangle (Position,Position2)\nis a bounding rectangle, and the representation will be placed in\nthe rectangle in such a way as to preserve the aspect ratio of\nthe representation.\n"},
  {(char*)"ProportionalResizeOff", PyvtkBorderRepresentation_ProportionalResizeOff, 1,
   (char*)"V.ProportionalResizeOff()\nC++: void ProportionalResizeOff()\n\nIndicate whether resizing operations should keep the x-y\ndirections proportional to one another. Also, if\nProportionalResize is on, then the rectangle (Position,Position2)\nis a bounding rectangle, and the representation will be placed in\nthe rectangle in such a way as to preserve the aspect ratio of\nthe representation.\n"},
  {(char*)"SetMinimumSize", PyvtkBorderRepresentation_SetMinimumSize, 1,
   (char*)"V.SetMinimumSize(int, int)\nC++: void SetMinimumSize(int, int)\nV.SetMinimumSize((int, int))\nC++: void SetMinimumSize(int a[2])\n\n"},
  {(char*)"GetMinimumSize", PyvtkBorderRepresentation_GetMinimumSize, 1,
   (char*)"V.GetMinimumSize() -> (int, int)\nC++: int *GetMinimumSize()\n\n"},
  {(char*)"SetMaximumSize", PyvtkBorderRepresentation_SetMaximumSize, 1,
   (char*)"V.SetMaximumSize(int, int)\nC++: void SetMaximumSize(int, int)\nV.SetMaximumSize((int, int))\nC++: void SetMaximumSize(int a[2])\n\n"},
  {(char*)"GetMaximumSize", PyvtkBorderRepresentation_GetMaximumSize, 1,
   (char*)"V.GetMaximumSize() -> (int, int)\nC++: int *GetMaximumSize()\n\n"},
  {(char*)"SetTolerance", PyvtkBorderRepresentation_SetTolerance, 1,
   (char*)"V.SetTolerance(int)\nC++: void SetTolerance(int)\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered to be on the widget, or on a\nwidget feature (e.g., a corner point or edge).\n"},
  {(char*)"GetToleranceMinValue", PyvtkBorderRepresentation_GetToleranceMinValue, 1,
   (char*)"V.GetToleranceMinValue() -> int\nC++: int GetToleranceMinValue()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered to be on the widget, or on a\nwidget feature (e.g., a corner point or edge).\n"},
  {(char*)"GetToleranceMaxValue", PyvtkBorderRepresentation_GetToleranceMaxValue, 1,
   (char*)"V.GetToleranceMaxValue() -> int\nC++: int GetToleranceMaxValue()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered to be on the widget, or on a\nwidget feature (e.g., a corner point or edge).\n"},
  {(char*)"GetTolerance", PyvtkBorderRepresentation_GetTolerance, 1,
   (char*)"V.GetTolerance() -> int\nC++: int GetTolerance()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered to be on the widget, or on a\nwidget feature (e.g., a corner point or edge).\n"},
  {(char*)"GetSelectionPoint", PyvtkBorderRepresentation_GetSelectionPoint, 1,
   (char*)"V.GetSelectionPoint() -> (float, float)\nC++: double *GetSelectionPoint()\n\nAfter a selection event within the region interior to the border;\nthe normalized selection coordinates may be obtained.\n"},
  {(char*)"SetMoving", PyvtkBorderRepresentation_SetMoving, 1,
   (char*)"V.SetMoving(int)\nC++: void SetMoving(int a)\n\nThis is a modifier of the interaction state. When set, widget\ninteraction allows the border (and stuff inside of it) to be\ntranslated with mouse motion.\n"},
  {(char*)"GetMoving", PyvtkBorderRepresentation_GetMoving, 1,
   (char*)"V.GetMoving() -> int\nC++: int GetMoving()\n\nThis is a modifier of the interaction state. When set, widget\ninteraction allows the border (and stuff inside of it) to be\ntranslated with mouse motion.\n"},
  {(char*)"MovingOn", PyvtkBorderRepresentation_MovingOn, 1,
   (char*)"V.MovingOn()\nC++: void MovingOn()\n\nThis is a modifier of the interaction state. When set, widget\ninteraction allows the border (and stuff inside of it) to be\ntranslated with mouse motion.\n"},
  {(char*)"MovingOff", PyvtkBorderRepresentation_MovingOff, 1,
   (char*)"V.MovingOff()\nC++: void MovingOff()\n\nThis is a modifier of the interaction state. When set, widget\ninteraction allows the border (and stuff inside of it) to be\ntranslated with mouse motion.\n"},
  {(char*)"BuildRepresentation", PyvtkBorderRepresentation_BuildRepresentation, 1,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nSubclasses should implement these methods. See the superclasses'\ndocumentation for more information.\n"},
  {(char*)"StartWidgetInteraction", PyvtkBorderRepresentation_StartWidgetInteraction, 1,
   (char*)"V.StartWidgetInteraction([float, float])\nC++: virtual void StartWidgetInteraction(double eventPos[2])\n\nSubclasses should implement these methods. See the superclasses'\ndocumentation for more information.\n"},
  {(char*)"WidgetInteraction", PyvtkBorderRepresentation_WidgetInteraction, 1,
   (char*)"V.WidgetInteraction([float, float])\nC++: virtual void WidgetInteraction(double eventPos[2])\n\nSubclasses should implement these methods. See the superclasses'\ndocumentation for more information.\n"},
  {(char*)"GetSize", PyvtkBorderRepresentation_GetSize, 1,
   (char*)"V.GetSize([float, float])\nC++: virtual void GetSize(double size[2])\n\nSubclasses should implement these methods. See the superclasses'\ndocumentation for more information.\n"},
  {(char*)"ComputeInteractionState", PyvtkBorderRepresentation_ComputeInteractionState, 1,
   (char*)"V.ComputeInteractionState(int, int, int) -> int\nC++: virtual int ComputeInteractionState(int X, int Y,\n    int modify=0)\n\nSubclasses should implement these methods. See the superclasses'\ndocumentation for more information.\n"},
  {(char*)"GetActors2D", PyvtkBorderRepresentation_GetActors2D, 1,
   (char*)"V.GetActors2D(vtkPropCollection)\nC++: virtual void GetActors2D(vtkPropCollection *)\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkBorderRepresentation_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {(char*)"RenderOverlay", PyvtkBorderRepresentation_RenderOverlay, 1,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: virtual int RenderOverlay(vtkViewport *)\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkBorderRepresentation_RenderOpaqueGeometry, 1,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *)\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkBorderRepresentation_RenderTranslucentPolygonalGeometry, 1,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(vtkViewport *)\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkBorderRepresentation_HasTranslucentPolygonalGeometry, 1,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBorderRepresentation_StaticNew()
{
  return vtkBorderRepresentation::New();
}

PyObject *PyVTKClass_vtkBorderRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBorderRepresentation_StaticNew,
    PyvtkBorderRepresentation_Methods,
    "vtkBorderRepresentation", modulename,
    NULL, NULL,
    PyvtkBorderRepresentation_Doc(),
    PyVTKClass_vtkWidgetRepresentationNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"BORDER_OFF", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"BORDER_ON", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"BORDER_ACTIVE", o) != 0)
      {
      Py_DECREF(o);
      }

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
    if (o && PyDict_SetItemString(d, (char *)"AdjustingP0", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"AdjustingP1", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"AdjustingP2", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(5);
    if (o && PyDict_SetItemString(d, (char *)"AdjustingP3", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(6);
    if (o && PyDict_SetItemString(d, (char *)"AdjustingE0", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(7);
    if (o && PyDict_SetItemString(d, (char *)"AdjustingE1", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(8);
    if (o && PyDict_SetItemString(d, (char *)"AdjustingE2", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(9);
    if (o && PyDict_SetItemString(d, (char *)"AdjustingE3", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkBorderRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkBorderRepresentation - represent a vtkBorderWidget\n\n",
    "Superclass: vtkWidgetRepresentation\n\n",
    "This class is used to represent and render a vtBorderWidget. To use\nthis class, you need to specify the two corners of a rectangular\nregion.\n\nThe class is typically subclassed so that specialized representations\ncan be created.  The class defines an API and a default\nimplementation that the vtkBorderRepresentation interacts with to\nrender itself in the scene.\n\nCaveats:\n\nThe separation of the widge",
    "t event handling (e.g., vtkBorderWidget)\nfrom the representation (vtkBorderRepresentation) enables users and\ndevelopers to create new appearances for the widget. It also\nfacilitates parallel processing, where the client application handles\nevents, and remote representations of the widget are slaves to the\nclient (and do not handle events).\n\nSee Also:\n\nvtkBorderWidget vtkTextWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBorderRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBorderRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBorderRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

