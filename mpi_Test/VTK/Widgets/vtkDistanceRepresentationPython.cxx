// python wrapper for vtkDistanceRepresentation
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
#include "vtkDistanceRepresentation.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDistanceRepresentation(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDistanceRepresentation(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDistanceRepresentationNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDistanceRepresentationNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkWidgetRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkWidgetRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkWidgetRepresentationNew
#endif

static const char **PyvtkDistanceRepresentation_Doc();


static PyObject *
PyvtkDistanceRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

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
      tempr = op->vtkDistanceRepresentation::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

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
      tempr = op->vtkDistanceRepresentation::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  vtkDistanceRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDistanceRepresentation::NewInstance();
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
PyvtkDistanceRepresentation_GetDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetDistance();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_GetPoint1WorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    op->GetPoint1WorldPosition(temp0);

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
PyvtkDistanceRepresentation_GetPoint1WorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetPoint1WorldPosition();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkDistanceRepresentation_GetPoint1WorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkDistanceRepresentation_GetPoint1WorldPosition_s1(self, args);
    case 0:
      return PyvtkDistanceRepresentation_GetPoint1WorldPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint1WorldPosition");
  return NULL;
}



static PyObject *
PyvtkDistanceRepresentation_GetPoint2WorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    op->GetPoint2WorldPosition(temp0);

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
PyvtkDistanceRepresentation_GetPoint2WorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetPoint2WorldPosition();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkDistanceRepresentation_GetPoint2WorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkDistanceRepresentation_GetPoint2WorldPosition_s1(self, args);
    case 0:
      return PyvtkDistanceRepresentation_GetPoint2WorldPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint2WorldPosition");
  return NULL;
}



static PyObject *
PyvtkDistanceRepresentation_SetPoint1DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    op->SetPoint1DisplayPosition(temp0);

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
PyvtkDistanceRepresentation_SetPoint2DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    op->SetPoint2DisplayPosition(temp0);

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
PyvtkDistanceRepresentation_GetPoint1DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    op->GetPoint1DisplayPosition(temp0);

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
PyvtkDistanceRepresentation_GetPoint2DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    op->GetPoint2DisplayPosition(temp0);

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
PyvtkDistanceRepresentation_SetPoint1WorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    op->SetPoint1WorldPosition(temp0);

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
PyvtkDistanceRepresentation_SetPoint2WorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    op->SetPoint2WorldPosition(temp0);

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
PyvtkDistanceRepresentation_SetHandleRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  vtkHandleRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHandleRepresentation"))
    {
    if (ap.IsBound())
      {
      op->SetHandleRepresentation(temp0);
      }
    else
      {
      op->vtkDistanceRepresentation::SetHandleRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_InstantiateHandleRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InstantiateHandleRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InstantiateHandleRepresentation();
      }
    else
      {
      op->vtkDistanceRepresentation::InstantiateHandleRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_GetPoint1Representation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1Representation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  vtkHandleRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPoint1Representation();
      }
    else
      {
      tempr = op->vtkDistanceRepresentation::GetPoint1Representation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_GetPoint2Representation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2Representation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  vtkHandleRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPoint2Representation();
      }
    else
      {
      tempr = op->vtkDistanceRepresentation::GetPoint2Representation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

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
      op->vtkDistanceRepresentation::SetTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

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
      tempr = op->vtkDistanceRepresentation::GetToleranceMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

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
      tempr = op->vtkDistanceRepresentation::GetToleranceMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

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
      tempr = op->vtkDistanceRepresentation::GetTolerance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_SetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

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
      op->vtkDistanceRepresentation::SetLabelFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_GetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

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
      tempr = op->vtkDistanceRepresentation::GetLabelFormat();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_SetRulerMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRulerMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRulerMode(temp0);
      }
    else
      {
      op->vtkDistanceRepresentation::SetRulerMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_GetRulerMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRulerMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRulerMode();
      }
    else
      {
      tempr = op->vtkDistanceRepresentation::GetRulerMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_RulerModeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RulerModeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RulerModeOn();
      }
    else
      {
      op->vtkDistanceRepresentation::RulerModeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_RulerModeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RulerModeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RulerModeOff();
      }
    else
      {
      op->vtkDistanceRepresentation::RulerModeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_SetRulerDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRulerDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRulerDistance(temp0);
      }
    else
      {
      op->vtkDistanceRepresentation::SetRulerDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_GetRulerDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRulerDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRulerDistanceMinValue();
      }
    else
      {
      tempr = op->vtkDistanceRepresentation::GetRulerDistanceMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_GetRulerDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRulerDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRulerDistanceMaxValue();
      }
    else
      {
      tempr = op->vtkDistanceRepresentation::GetRulerDistanceMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_GetRulerDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRulerDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRulerDistance();
      }
    else
      {
      tempr = op->vtkDistanceRepresentation::GetRulerDistance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_SetNumberOfRulerTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfRulerTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfRulerTicks(temp0);
      }
    else
      {
      op->vtkDistanceRepresentation::SetNumberOfRulerTicks(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_GetNumberOfRulerTicksMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRulerTicksMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfRulerTicksMinValue();
      }
    else
      {
      tempr = op->vtkDistanceRepresentation::GetNumberOfRulerTicksMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_GetNumberOfRulerTicksMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRulerTicksMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfRulerTicksMaxValue();
      }
    else
      {
      tempr = op->vtkDistanceRepresentation::GetNumberOfRulerTicksMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_GetNumberOfRulerTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRulerTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfRulerTicks();
      }
    else
      {
      tempr = op->vtkDistanceRepresentation::GetNumberOfRulerTicks();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkDistanceRepresentation::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

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
      tempr = op->vtkDistanceRepresentation::ComputeInteractionState(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

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
      op->vtkDistanceRepresentation::StartWidgetInteraction(temp0);
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
PyvtkDistanceRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

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
      op->vtkDistanceRepresentation::WidgetInteraction(temp0);
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

static PyMethodDef PyvtkDistanceRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkDistanceRepresentation_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK methods.\n"},
  {(char*)"IsA", PyvtkDistanceRepresentation_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK methods.\n"},
  {(char*)"NewInstance", PyvtkDistanceRepresentation_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDistanceRepresentation\nC++: vtkDistanceRepresentation *NewInstance()\n\nStandard VTK methods.\n"},
  {(char*)"GetDistance", PyvtkDistanceRepresentation_GetDistance, 1,
   (char*)"V.GetDistance() -> float\nC++: virtual double GetDistance()\n\nThis representation and all subclasses must keep a distance\nconsistent with the state of the widget.\n"},
  {(char*)"GetPoint1WorldPosition", PyvtkDistanceRepresentation_GetPoint1WorldPosition, 1,
   (char*)"V.GetPoint1WorldPosition([float, float, float])\nC++: virtual void GetPoint1WorldPosition(double pos[3])\nV.GetPoint1WorldPosition() -> (float, float, float)\nC++: virtual double *GetPoint1WorldPosition()\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"GetPoint2WorldPosition", PyvtkDistanceRepresentation_GetPoint2WorldPosition, 1,
   (char*)"V.GetPoint2WorldPosition([float, float, float])\nC++: virtual void GetPoint2WorldPosition(double pos[3])\nV.GetPoint2WorldPosition() -> (float, float, float)\nC++: virtual double *GetPoint2WorldPosition()\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"SetPoint1DisplayPosition", PyvtkDistanceRepresentation_SetPoint1DisplayPosition, 1,
   (char*)"V.SetPoint1DisplayPosition([float, float, float])\nC++: virtual void SetPoint1DisplayPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"SetPoint2DisplayPosition", PyvtkDistanceRepresentation_SetPoint2DisplayPosition, 1,
   (char*)"V.SetPoint2DisplayPosition([float, float, float])\nC++: virtual void SetPoint2DisplayPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"GetPoint1DisplayPosition", PyvtkDistanceRepresentation_GetPoint1DisplayPosition, 1,
   (char*)"V.GetPoint1DisplayPosition([float, float, float])\nC++: virtual void GetPoint1DisplayPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"GetPoint2DisplayPosition", PyvtkDistanceRepresentation_GetPoint2DisplayPosition, 1,
   (char*)"V.GetPoint2DisplayPosition([float, float, float])\nC++: virtual void GetPoint2DisplayPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"SetPoint1WorldPosition", PyvtkDistanceRepresentation_SetPoint1WorldPosition, 1,
   (char*)"V.SetPoint1WorldPosition([float, float, float])\nC++: virtual void SetPoint1WorldPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"SetPoint2WorldPosition", PyvtkDistanceRepresentation_SetPoint2WorldPosition, 1,
   (char*)"V.SetPoint2WorldPosition([float, float, float])\nC++: virtual void SetPoint2WorldPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"SetHandleRepresentation", PyvtkDistanceRepresentation_SetHandleRepresentation, 1,
   (char*)"V.SetHandleRepresentation(vtkHandleRepresentation)\nC++: void SetHandleRepresentation(vtkHandleRepresentation *handle)\n\nThis method is used to specify the type of handle representation\nto use for the two internal vtkHandleWidgets within\nvtkDistanceWidget. To use this method, create a dummy\nvtkHandleWidget (or subclass), and then invoke this method with\nthis dummy. Then the vtkDistanceRepresentation uses this dummy to\nclone two vtkHandleWidgets of the same type. Make sure you set\nthe handle representation before the widget is enabled. (The\nmethod InstantiateHandleRepresentation() is invoked by the\nvtkDistance widget.)\n"},
  {(char*)"InstantiateHandleRepresentation", PyvtkDistanceRepresentation_InstantiateHandleRepresentation, 1,
   (char*)"V.InstantiateHandleRepresentation()\nC++: void InstantiateHandleRepresentation()\n\nThis method is used to specify the type of handle representation\nto use for the two internal vtkHandleWidgets within\nvtkDistanceWidget. To use this method, create a dummy\nvtkHandleWidget (or subclass), and then invoke this method with\nthis dummy. Then the vtkDistanceRepresentation uses this dummy to\nclone two vtkHandleWidgets of the same type. Make sure you set\nthe handle representation before the widget is enabled. (The\nmethod InstantiateHandleRepresentation() is invoked by the\nvtkDistance widget.)\n"},
  {(char*)"GetPoint1Representation", PyvtkDistanceRepresentation_GetPoint1Representation, 1,
   (char*)"V.GetPoint1Representation() -> vtkHandleRepresentation\nC++: vtkHandleRepresentation *GetPoint1Representation()\n\nSet/Get the two handle representations used for the\nvtkDistanceWidget. (Note: properties can be set by grabbing these\nrepresentations and setting the properties appropriately.)\n"},
  {(char*)"GetPoint2Representation", PyvtkDistanceRepresentation_GetPoint2Representation, 1,
   (char*)"V.GetPoint2Representation() -> vtkHandleRepresentation\nC++: vtkHandleRepresentation *GetPoint2Representation()\n\nSet/Get the two handle representations used for the\nvtkDistanceWidget. (Note: properties can be set by grabbing these\nrepresentations and setting the properties appropriately.)\n"},
  {(char*)"SetTolerance", PyvtkDistanceRepresentation_SetTolerance, 1,
   (char*)"V.SetTolerance(int)\nC++: void SetTolerance(int)\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the end points\nof the widget to be active.\n"},
  {(char*)"GetToleranceMinValue", PyvtkDistanceRepresentation_GetToleranceMinValue, 1,
   (char*)"V.GetToleranceMinValue() -> int\nC++: int GetToleranceMinValue()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the end points\nof the widget to be active.\n"},
  {(char*)"GetToleranceMaxValue", PyvtkDistanceRepresentation_GetToleranceMaxValue, 1,
   (char*)"V.GetToleranceMaxValue() -> int\nC++: int GetToleranceMaxValue()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the end points\nof the widget to be active.\n"},
  {(char*)"GetTolerance", PyvtkDistanceRepresentation_GetTolerance, 1,
   (char*)"V.GetTolerance() -> int\nC++: int GetTolerance()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the end points\nof the widget to be active.\n"},
  {(char*)"SetLabelFormat", PyvtkDistanceRepresentation_SetLabelFormat, 1,
   (char*)"V.SetLabelFormat(string)\nC++: void SetLabelFormat(char *)\n\nSpecify the format to use for labelling the distance. Note that\nan empty string results in no label, or a format string without a\n\"%\" character will not print the distance value.\n"},
  {(char*)"GetLabelFormat", PyvtkDistanceRepresentation_GetLabelFormat, 1,
   (char*)"V.GetLabelFormat() -> string\nC++: char *GetLabelFormat()\n\nSpecify the format to use for labelling the distance. Note that\nan empty string results in no label, or a format string without a\n\"%\" character will not print the distance value.\n"},
  {(char*)"SetRulerMode", PyvtkDistanceRepresentation_SetRulerMode, 1,
   (char*)"V.SetRulerMode(int)\nC++: void SetRulerMode(int a)\n\nEnable or disable ruler mode. When enabled, the ticks on the\ndistance widget are separated by the amount specified by\nRulerDistance. Otherwise, the ivar NumberOfRulerTicks is used to\ndraw the tick marks.\n"},
  {(char*)"GetRulerMode", PyvtkDistanceRepresentation_GetRulerMode, 1,
   (char*)"V.GetRulerMode() -> int\nC++: int GetRulerMode()\n\nEnable or disable ruler mode. When enabled, the ticks on the\ndistance widget are separated by the amount specified by\nRulerDistance. Otherwise, the ivar NumberOfRulerTicks is used to\ndraw the tick marks.\n"},
  {(char*)"RulerModeOn", PyvtkDistanceRepresentation_RulerModeOn, 1,
   (char*)"V.RulerModeOn()\nC++: void RulerModeOn()\n\nEnable or disable ruler mode. When enabled, the ticks on the\ndistance widget are separated by the amount specified by\nRulerDistance. Otherwise, the ivar NumberOfRulerTicks is used to\ndraw the tick marks.\n"},
  {(char*)"RulerModeOff", PyvtkDistanceRepresentation_RulerModeOff, 1,
   (char*)"V.RulerModeOff()\nC++: void RulerModeOff()\n\nEnable or disable ruler mode. When enabled, the ticks on the\ndistance widget are separated by the amount specified by\nRulerDistance. Otherwise, the ivar NumberOfRulerTicks is used to\ndraw the tick marks.\n"},
  {(char*)"SetRulerDistance", PyvtkDistanceRepresentation_SetRulerDistance, 1,
   (char*)"V.SetRulerDistance(float)\nC++: void SetRulerDistance(double)\n\nSpecify the RulerDistance which indicates the spacing of the\nmajor ticks. This ivar only has effect when the RulerMode is on.\n"},
  {(char*)"GetRulerDistanceMinValue", PyvtkDistanceRepresentation_GetRulerDistanceMinValue, 1,
   (char*)"V.GetRulerDistanceMinValue() -> float\nC++: double GetRulerDistanceMinValue()\n\nSpecify the RulerDistance which indicates the spacing of the\nmajor ticks. This ivar only has effect when the RulerMode is on.\n"},
  {(char*)"GetRulerDistanceMaxValue", PyvtkDistanceRepresentation_GetRulerDistanceMaxValue, 1,
   (char*)"V.GetRulerDistanceMaxValue() -> float\nC++: double GetRulerDistanceMaxValue()\n\nSpecify the RulerDistance which indicates the spacing of the\nmajor ticks. This ivar only has effect when the RulerMode is on.\n"},
  {(char*)"GetRulerDistance", PyvtkDistanceRepresentation_GetRulerDistance, 1,
   (char*)"V.GetRulerDistance() -> float\nC++: double GetRulerDistance()\n\nSpecify the RulerDistance which indicates the spacing of the\nmajor ticks. This ivar only has effect when the RulerMode is on.\n"},
  {(char*)"SetNumberOfRulerTicks", PyvtkDistanceRepresentation_SetNumberOfRulerTicks, 1,
   (char*)"V.SetNumberOfRulerTicks(int)\nC++: void SetNumberOfRulerTicks(int)\n\nSpecify the number of major ruler ticks. This overrides any\nsubclasses (e.g., vtkDistanceRepresentation2D) that have\nalternative methods to specify the number of major ticks. Note:\nthe number of ticks is the number inbetween the two handle\nendpoints. This ivar only has effect when the RulerMode is off.\n"},
  {(char*)"GetNumberOfRulerTicksMinValue", PyvtkDistanceRepresentation_GetNumberOfRulerTicksMinValue, 1,
   (char*)"V.GetNumberOfRulerTicksMinValue() -> int\nC++: int GetNumberOfRulerTicksMinValue()\n\nSpecify the number of major ruler ticks. This overrides any\nsubclasses (e.g., vtkDistanceRepresentation2D) that have\nalternative methods to specify the number of major ticks. Note:\nthe number of ticks is the number inbetween the two handle\nendpoints. This ivar only has effect when the RulerMode is off.\n"},
  {(char*)"GetNumberOfRulerTicksMaxValue", PyvtkDistanceRepresentation_GetNumberOfRulerTicksMaxValue, 1,
   (char*)"V.GetNumberOfRulerTicksMaxValue() -> int\nC++: int GetNumberOfRulerTicksMaxValue()\n\nSpecify the number of major ruler ticks. This overrides any\nsubclasses (e.g., vtkDistanceRepresentation2D) that have\nalternative methods to specify the number of major ticks. Note:\nthe number of ticks is the number inbetween the two handle\nendpoints. This ivar only has effect when the RulerMode is off.\n"},
  {(char*)"GetNumberOfRulerTicks", PyvtkDistanceRepresentation_GetNumberOfRulerTicks, 1,
   (char*)"V.GetNumberOfRulerTicks() -> int\nC++: int GetNumberOfRulerTicks()\n\nSpecify the number of major ruler ticks. This overrides any\nsubclasses (e.g., vtkDistanceRepresentation2D) that have\nalternative methods to specify the number of major ticks. Note:\nthe number of ticks is the number inbetween the two handle\nendpoints. This ivar only has effect when the RulerMode is off.\n"},
  {(char*)"BuildRepresentation", PyvtkDistanceRepresentation_BuildRepresentation, 1,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"ComputeInteractionState", PyvtkDistanceRepresentation_ComputeInteractionState, 1,
   (char*)"V.ComputeInteractionState(int, int, int) -> int\nC++: virtual int ComputeInteractionState(int X, int Y,\n    int modify=0)\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"StartWidgetInteraction", PyvtkDistanceRepresentation_StartWidgetInteraction, 1,
   (char*)"V.StartWidgetInteraction([float, float])\nC++: virtual void StartWidgetInteraction(double e[2])\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"WidgetInteraction", PyvtkDistanceRepresentation_WidgetInteraction, 1,
   (char*)"V.WidgetInteraction([float, float])\nC++: virtual void WidgetInteraction(double e[2])\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkDistanceRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkDistanceRepresentation_Methods,
    "vtkDistanceRepresentation", modulename,
    NULL, NULL,
    PyvtkDistanceRepresentation_Doc(),
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
    if (o && PyDict_SetItemString(d, (char *)"NearP1", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"NearP2", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkDistanceRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkDistanceRepresentation - represent the vtkDistanceWidget\n\n",
    "Superclass: vtkWidgetRepresentation\n\n",
    "The vtkDistanceRepresentation is a superclass for various types of\nrepresentations for the vtkDistanceWidget. Logically subclasses\nconsist of an axis and two handles for placing/manipulating the end\npoints.\n\nSee Also:\n\nvtkDistanceWidget vtkHandleRepresentation vtkDistanceRepresentation2D\nvtkDistanceRepresentation\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDistanceRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDistanceRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDistanceRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

