// python wrapper for vtkAxisActor2D
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
#include "vtkAxisActor2D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkAxisActor2D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkAxisActor2D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkAxisActor2DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkAxisActor2DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkActor2DNew
extern "C" { PyObject *PyVTKClass_vtkActor2DNew(const char *); }
#define DECLARED_PyVTKClass_vtkActor2DNew
#endif

static const char **PyvtkAxisActor2D_Doc();


static PyObject *
PyvtkAxisActor2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

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
      tempr = op->vtkAxisActor2D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

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
      tempr = op->vtkAxisActor2D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  vtkAxisActor2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkAxisActor2D::NewInstance();
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
PyvtkAxisActor2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkAxisActor2D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkAxisActor2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetPoint1Coordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1Coordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

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
      tempr = op->vtkAxisActor2D::GetPoint1Coordinate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SetPoint1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

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
      op->SetPoint1(temp0);
      }
    else
      {
      op->vtkAxisActor2D::SetPoint1(temp0);
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
PyvtkAxisActor2D_SetPoint1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPoint1(temp0, temp1);
      }
    else
      {
      op->vtkAxisActor2D::SetPoint1(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAxisActor2D_SetPoint1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkAxisActor2D_SetPoint1_s1(self, args);
    case 2:
      return PyvtkAxisActor2D_SetPoint1_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint1");
  return NULL;
}



static PyObject *
PyvtkAxisActor2D_GetPoint2Coordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2Coordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

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
      tempr = op->vtkAxisActor2D::GetPoint2Coordinate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SetPoint2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

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
      op->SetPoint2(temp0);
      }
    else
      {
      op->vtkAxisActor2D::SetPoint2(temp0);
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
PyvtkAxisActor2D_SetPoint2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPoint2(temp0, temp1);
      }
    else
      {
      op->vtkAxisActor2D::SetPoint2(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAxisActor2D_SetPoint2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkAxisActor2D_SetPoint2_s1(self, args);
    case 2:
      return PyvtkAxisActor2D_SetPoint2_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint2");
  return NULL;
}



static PyObject *
PyvtkAxisActor2D_SetRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetRange(temp0, temp1);
      }
    else
      {
      op->vtkAxisActor2D::SetRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAxisActor2D_SetRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetRange(temp0);
      }
    else
      {
      op->vtkAxisActor2D::SetRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAxisActor2D_SetRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkAxisActor2D_SetRange_s1(self, args);
    case 1:
      return PyvtkAxisActor2D_SetRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetRange");
  return NULL;
}



static PyObject *
PyvtkAxisActor2D_GetRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRange();
      }
    else
      {
      tempr = op->vtkAxisActor2D::GetRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SetRulerMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRulerMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

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
      op->vtkAxisActor2D::SetRulerMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetRulerMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRulerMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

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
      tempr = op->vtkAxisActor2D::GetRulerMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_RulerModeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RulerModeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RulerModeOn();
      }
    else
      {
      op->vtkAxisActor2D::RulerModeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_RulerModeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RulerModeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RulerModeOff();
      }
    else
      {
      op->vtkAxisActor2D::RulerModeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SetRulerDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRulerDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

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
      op->vtkAxisActor2D::SetRulerDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetRulerDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRulerDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

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
      tempr = op->vtkAxisActor2D::GetRulerDistanceMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetRulerDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRulerDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

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
      tempr = op->vtkAxisActor2D::GetRulerDistanceMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetRulerDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRulerDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

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
      tempr = op->vtkAxisActor2D::GetRulerDistance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SetNumberOfLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

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
      op->vtkAxisActor2D::SetNumberOfLabels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetNumberOfLabelsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLabelsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

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
      tempr = op->vtkAxisActor2D::GetNumberOfLabelsMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetNumberOfLabelsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLabelsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

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
      tempr = op->vtkAxisActor2D::GetNumberOfLabelsMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetNumberOfLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

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
      tempr = op->vtkAxisActor2D::GetNumberOfLabels();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

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
      op->vtkAxisActor2D::SetLabelFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

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
      tempr = op->vtkAxisActor2D::GetLabelFormat();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SetAdjustLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAdjustLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAdjustLabels(temp0);
      }
    else
      {
      op->vtkAxisActor2D::SetAdjustLabels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetAdjustLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAdjustLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAdjustLabels();
      }
    else
      {
      tempr = op->vtkAxisActor2D::GetAdjustLabels();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_AdjustLabelsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdjustLabelsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AdjustLabelsOn();
      }
    else
      {
      op->vtkAxisActor2D::AdjustLabelsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_AdjustLabelsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdjustLabelsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AdjustLabelsOff();
      }
    else
      {
      op->vtkAxisActor2D::AdjustLabelsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetAdjustedRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAdjustedRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->GetAdjustedRange(temp0, temp1);
      }
    else
      {
      op->vtkAxisActor2D::GetAdjustedRange(temp0, temp1);
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
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAxisActor2D_GetAdjustedRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAdjustedRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

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
      op->GetAdjustedRange(temp0);
      }
    else
      {
      op->vtkAxisActor2D::GetAdjustedRange(temp0);
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
PyvtkAxisActor2D_GetAdjustedRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkAxisActor2D_GetAdjustedRange_s1(self, args);
    case 1:
      return PyvtkAxisActor2D_GetAdjustedRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetAdjustedRange");
  return NULL;
}



static PyObject *
PyvtkAxisActor2D_GetAdjustedNumberOfLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAdjustedNumberOfLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAdjustedNumberOfLabels();
      }
    else
      {
      tempr = op->vtkAxisActor2D::GetAdjustedNumberOfLabels();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

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
      op->vtkAxisActor2D::SetTitle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

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
      tempr = op->vtkAxisActor2D::GetTitle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

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
      op->vtkAxisActor2D::SetTitleTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

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
      tempr = op->vtkAxisActor2D::GetTitleTextProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

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
      op->vtkAxisActor2D::SetLabelTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

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
      tempr = op->vtkAxisActor2D::GetLabelTextProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SetTickLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTickLength(temp0);
      }
    else
      {
      op->vtkAxisActor2D::SetTickLength(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetTickLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTickLengthMinValue();
      }
    else
      {
      tempr = op->vtkAxisActor2D::GetTickLengthMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetTickLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTickLengthMaxValue();
      }
    else
      {
      tempr = op->vtkAxisActor2D::GetTickLengthMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetTickLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTickLength();
      }
    else
      {
      tempr = op->vtkAxisActor2D::GetTickLength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SetNumberOfMinorTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfMinorTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfMinorTicks(temp0);
      }
    else
      {
      op->vtkAxisActor2D::SetNumberOfMinorTicks(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetNumberOfMinorTicksMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfMinorTicksMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfMinorTicksMinValue();
      }
    else
      {
      tempr = op->vtkAxisActor2D::GetNumberOfMinorTicksMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetNumberOfMinorTicksMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfMinorTicksMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfMinorTicksMaxValue();
      }
    else
      {
      tempr = op->vtkAxisActor2D::GetNumberOfMinorTicksMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetNumberOfMinorTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfMinorTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfMinorTicks();
      }
    else
      {
      tempr = op->vtkAxisActor2D::GetNumberOfMinorTicks();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SetMinorTickLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinorTickLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinorTickLength(temp0);
      }
    else
      {
      op->vtkAxisActor2D::SetMinorTickLength(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetMinorTickLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinorTickLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinorTickLengthMinValue();
      }
    else
      {
      tempr = op->vtkAxisActor2D::GetMinorTickLengthMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetMinorTickLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinorTickLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinorTickLengthMaxValue();
      }
    else
      {
      tempr = op->vtkAxisActor2D::GetMinorTickLengthMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetMinorTickLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinorTickLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinorTickLength();
      }
    else
      {
      tempr = op->vtkAxisActor2D::GetMinorTickLength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SetTickOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTickOffset(temp0);
      }
    else
      {
      op->vtkAxisActor2D::SetTickOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetTickOffsetMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickOffsetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTickOffsetMinValue();
      }
    else
      {
      tempr = op->vtkAxisActor2D::GetTickOffsetMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetTickOffsetMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickOffsetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTickOffsetMaxValue();
      }
    else
      {
      tempr = op->vtkAxisActor2D::GetTickOffsetMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetTickOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTickOffset();
      }
    else
      {
      tempr = op->vtkAxisActor2D::GetTickOffset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SetAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAxisVisibility(temp0);
      }
    else
      {
      op->vtkAxisActor2D::SetAxisVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAxisVisibility();
      }
    else
      {
      tempr = op->vtkAxisActor2D::GetAxisVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_AxisVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AxisVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AxisVisibilityOn();
      }
    else
      {
      op->vtkAxisActor2D::AxisVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_AxisVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AxisVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AxisVisibilityOff();
      }
    else
      {
      op->vtkAxisActor2D::AxisVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SetTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTickVisibility(temp0);
      }
    else
      {
      op->vtkAxisActor2D::SetTickVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTickVisibility();
      }
    else
      {
      tempr = op->vtkAxisActor2D::GetTickVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_TickVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TickVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TickVisibilityOn();
      }
    else
      {
      op->vtkAxisActor2D::TickVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_TickVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TickVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TickVisibilityOff();
      }
    else
      {
      op->vtkAxisActor2D::TickVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SetLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabelVisibility(temp0);
      }
    else
      {
      op->vtkAxisActor2D::SetLabelVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLabelVisibility();
      }
    else
      {
      tempr = op->vtkAxisActor2D::GetLabelVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_LabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LabelVisibilityOn();
      }
    else
      {
      op->vtkAxisActor2D::LabelVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_LabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LabelVisibilityOff();
      }
    else
      {
      op->vtkAxisActor2D::LabelVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SetTitleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTitleVisibility(temp0);
      }
    else
      {
      op->vtkAxisActor2D::SetTitleVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetTitleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTitleVisibility();
      }
    else
      {
      tempr = op->vtkAxisActor2D::GetTitleVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_TitleVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TitleVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TitleVisibilityOn();
      }
    else
      {
      op->vtkAxisActor2D::TitleVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_TitleVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TitleVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TitleVisibilityOff();
      }
    else
      {
      op->vtkAxisActor2D::TitleVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SetTitlePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTitlePosition(temp0);
      }
    else
      {
      op->vtkAxisActor2D::SetTitlePosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetTitlePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTitlePosition();
      }
    else
      {
      tempr = op->vtkAxisActor2D::GetTitlePosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SetFontFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFontFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

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
      op->vtkAxisActor2D::SetFontFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetFontFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

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
      tempr = op->vtkAxisActor2D::GetFontFactorMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetFontFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

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
      tempr = op->vtkAxisActor2D::GetFontFactorMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetFontFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

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
      tempr = op->vtkAxisActor2D::GetFontFactor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SetLabelFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabelFactor(temp0);
      }
    else
      {
      op->vtkAxisActor2D::SetLabelFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetLabelFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLabelFactorMinValue();
      }
    else
      {
      tempr = op->vtkAxisActor2D::GetLabelFactorMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetLabelFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLabelFactorMaxValue();
      }
    else
      {
      tempr = op->vtkAxisActor2D::GetLabelFactorMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetLabelFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLabelFactor();
      }
    else
      {
      tempr = op->vtkAxisActor2D::GetLabelFactor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

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
      tempr = op->vtkAxisActor2D::RenderOverlay(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

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
      tempr = op->vtkAxisActor2D::RenderOpaqueGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

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
      tempr = op->vtkAxisActor2D::RenderTranslucentPolygonalGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

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
      tempr = op->vtkAxisActor2D::HasTranslucentPolygonalGeometry();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

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
      op->vtkAxisActor2D::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_ComputeRange(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeRange");

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  int temp2;
  int temp3;
  double temp4;
  PyObject *result = NULL;

  if (ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    vtkAxisActor2D::ComputeRange(temp0, temp1, temp2, temp3, temp4);

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
PyvtkAxisActor2D_SetSizeFontRelativeToAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSizeFontRelativeToAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSizeFontRelativeToAxis(temp0);
      }
    else
      {
      op->vtkAxisActor2D::SetSizeFontRelativeToAxis(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetSizeFontRelativeToAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSizeFontRelativeToAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSizeFontRelativeToAxis();
      }
    else
      {
      tempr = op->vtkAxisActor2D::GetSizeFontRelativeToAxis();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SizeFontRelativeToAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SizeFontRelativeToAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SizeFontRelativeToAxisOn();
      }
    else
      {
      op->vtkAxisActor2D::SizeFontRelativeToAxisOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SizeFontRelativeToAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SizeFontRelativeToAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SizeFontRelativeToAxisOff();
      }
    else
      {
      op->vtkAxisActor2D::SizeFontRelativeToAxisOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor2D_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

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
      op->vtkAxisActor2D::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAxisActor2D_Methods[] = {
  {(char*)"GetClassName", PyvtkAxisActor2D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAxisActor2D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAxisActor2D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkAxisActor2D\nC++: vtkAxisActor2D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAxisActor2D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAxisActor2D\nC++: vtkAxisActor2D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetPoint1Coordinate", PyvtkAxisActor2D_GetPoint1Coordinate, 1,
   (char*)"V.GetPoint1Coordinate() -> vtkCoordinate\nC++: virtual vtkCoordinate *GetPoint1Coordinate()\n\nSpecify the position of the first point defining the axis. Note:\nbackward compatibility only, use vtkActor2D's Position instead.\n"},
  {(char*)"SetPoint1", PyvtkAxisActor2D_SetPoint1, 1,
   (char*)"V.SetPoint1([float, float])\nC++: virtual void SetPoint1(double x[2])\nV.SetPoint1(float, float)\nC++: virtual void SetPoint1(double x, double y)\n\nSpecify the position of the first point defining the axis. Note:\nbackward compatibility only, use vtkActor2D's Position instead.\n"},
  {(char*)"GetPoint2Coordinate", PyvtkAxisActor2D_GetPoint2Coordinate, 1,
   (char*)"V.GetPoint2Coordinate() -> vtkCoordinate\nC++: virtual vtkCoordinate *GetPoint2Coordinate()\n\nSpecify the position of the second point defining the axis. Note\nthat the order from Point1 to Point2 controls which side the tick\nmarks are drawn on (ticks are drawn on the right, if visible).\nNote: backward compatibility only, use vtkActor2D's Position2\ninstead.\n"},
  {(char*)"SetPoint2", PyvtkAxisActor2D_SetPoint2, 1,
   (char*)"V.SetPoint2([float, float])\nC++: virtual void SetPoint2(double x[2])\nV.SetPoint2(float, float)\nC++: virtual void SetPoint2(double x, double y)\n\nSpecify the position of the second point defining the axis. Note\nthat the order from Point1 to Point2 controls which side the tick\nmarks are drawn on (ticks are drawn on the right, if visible).\nNote: backward compatibility only, use vtkActor2D's Position2\ninstead.\n"},
  {(char*)"SetRange", PyvtkAxisActor2D_SetRange, 1,
   (char*)"V.SetRange(float, float)\nC++: void SetRange(double, double)\nV.SetRange((float, float))\nC++: void SetRange(double a[2])\n\n"},
  {(char*)"GetRange", PyvtkAxisActor2D_GetRange, 1,
   (char*)"V.GetRange() -> (float, float)\nC++: double *GetRange()\n\nSpecify the (min,max) axis range. This will be used in the\ngeneration of labels, if labels are visible.\n"},
  {(char*)"SetRulerMode", PyvtkAxisActor2D_SetRulerMode, 1,
   (char*)"V.SetRulerMode(int)\nC++: void SetRulerMode(int a)\n\nSpecify whether this axis should act like a measuring tape (or\nruler) with specified major tick spacing. If enabled, the\ndistance between major ticks is controlled by the RulerDistance\nivar.\n"},
  {(char*)"GetRulerMode", PyvtkAxisActor2D_GetRulerMode, 1,
   (char*)"V.GetRulerMode() -> int\nC++: int GetRulerMode()\n\nSpecify whether this axis should act like a measuring tape (or\nruler) with specified major tick spacing. If enabled, the\ndistance between major ticks is controlled by the RulerDistance\nivar.\n"},
  {(char*)"RulerModeOn", PyvtkAxisActor2D_RulerModeOn, 1,
   (char*)"V.RulerModeOn()\nC++: void RulerModeOn()\n\nSpecify whether this axis should act like a measuring tape (or\nruler) with specified major tick spacing. If enabled, the\ndistance between major ticks is controlled by the RulerDistance\nivar.\n"},
  {(char*)"RulerModeOff", PyvtkAxisActor2D_RulerModeOff, 1,
   (char*)"V.RulerModeOff()\nC++: void RulerModeOff()\n\nSpecify whether this axis should act like a measuring tape (or\nruler) with specified major tick spacing. If enabled, the\ndistance between major ticks is controlled by the RulerDistance\nivar.\n"},
  {(char*)"SetRulerDistance", PyvtkAxisActor2D_SetRulerDistance, 1,
   (char*)"V.SetRulerDistance(float)\nC++: void SetRulerDistance(double)\n\nSpecify the RulerDistance which indicates the spacing of the\nmajor ticks. This ivar only has effect when the RulerMode is on.\n"},
  {(char*)"GetRulerDistanceMinValue", PyvtkAxisActor2D_GetRulerDistanceMinValue, 1,
   (char*)"V.GetRulerDistanceMinValue() -> float\nC++: double GetRulerDistanceMinValue()\n\nSpecify the RulerDistance which indicates the spacing of the\nmajor ticks. This ivar only has effect when the RulerMode is on.\n"},
  {(char*)"GetRulerDistanceMaxValue", PyvtkAxisActor2D_GetRulerDistanceMaxValue, 1,
   (char*)"V.GetRulerDistanceMaxValue() -> float\nC++: double GetRulerDistanceMaxValue()\n\nSpecify the RulerDistance which indicates the spacing of the\nmajor ticks. This ivar only has effect when the RulerMode is on.\n"},
  {(char*)"GetRulerDistance", PyvtkAxisActor2D_GetRulerDistance, 1,
   (char*)"V.GetRulerDistance() -> float\nC++: double GetRulerDistance()\n\nSpecify the RulerDistance which indicates the spacing of the\nmajor ticks. This ivar only has effect when the RulerMode is on.\n"},
  {(char*)"SetNumberOfLabels", PyvtkAxisActor2D_SetNumberOfLabels, 1,
   (char*)"V.SetNumberOfLabels(int)\nC++: void SetNumberOfLabels(int)\n\nSet/Get the number of annotation labels to show. This also\ncontrols the number of major ticks shown. Note that this ivar\nonly holds meaning if the RulerMode is off.\n"},
  {(char*)"GetNumberOfLabelsMinValue", PyvtkAxisActor2D_GetNumberOfLabelsMinValue, 1,
   (char*)"V.GetNumberOfLabelsMinValue() -> int\nC++: int GetNumberOfLabelsMinValue()\n\nSet/Get the number of annotation labels to show. This also\ncontrols the number of major ticks shown. Note that this ivar\nonly holds meaning if the RulerMode is off.\n"},
  {(char*)"GetNumberOfLabelsMaxValue", PyvtkAxisActor2D_GetNumberOfLabelsMaxValue, 1,
   (char*)"V.GetNumberOfLabelsMaxValue() -> int\nC++: int GetNumberOfLabelsMaxValue()\n\nSet/Get the number of annotation labels to show. This also\ncontrols the number of major ticks shown. Note that this ivar\nonly holds meaning if the RulerMode is off.\n"},
  {(char*)"GetNumberOfLabels", PyvtkAxisActor2D_GetNumberOfLabels, 1,
   (char*)"V.GetNumberOfLabels() -> int\nC++: int GetNumberOfLabels()\n\nSet/Get the number of annotation labels to show. This also\ncontrols the number of major ticks shown. Note that this ivar\nonly holds meaning if the RulerMode is off.\n"},
  {(char*)"SetLabelFormat", PyvtkAxisActor2D_SetLabelFormat, 1,
   (char*)"V.SetLabelFormat(string)\nC++: void SetLabelFormat(char *)\n\nSet/Get the format with which to print the labels on the scalar\nbar.\n"},
  {(char*)"GetLabelFormat", PyvtkAxisActor2D_GetLabelFormat, 1,
   (char*)"V.GetLabelFormat() -> string\nC++: char *GetLabelFormat()\n\nSet/Get the format with which to print the labels on the scalar\nbar.\n"},
  {(char*)"SetAdjustLabels", PyvtkAxisActor2D_SetAdjustLabels, 1,
   (char*)"V.SetAdjustLabels(int)\nC++: void SetAdjustLabels(int a)\n\nSet/Get the flag that controls whether the labels and ticks are\nadjusted for \"nice\" numerical values to make it easier to read\nthe labels. The adjustment is based in the Range instance\nvariable. Call GetAdjustedRange and GetAdjustedNumberOfLabels to\nget the adjusted range and number of labels. Note that if\nRulerMode is on, then the number of labels is a function of the\nrange and ruler distance.\n"},
  {(char*)"GetAdjustLabels", PyvtkAxisActor2D_GetAdjustLabels, 1,
   (char*)"V.GetAdjustLabels() -> int\nC++: int GetAdjustLabels()\n\nSet/Get the flag that controls whether the labels and ticks are\nadjusted for \"nice\" numerical values to make it easier to read\nthe labels. The adjustment is based in the Range instance\nvariable. Call GetAdjustedRange and GetAdjustedNumberOfLabels to\nget the adjusted range and number of labels. Note that if\nRulerMode is on, then the number of labels is a function of the\nrange and ruler distance.\n"},
  {(char*)"AdjustLabelsOn", PyvtkAxisActor2D_AdjustLabelsOn, 1,
   (char*)"V.AdjustLabelsOn()\nC++: void AdjustLabelsOn()\n\nSet/Get the flag that controls whether the labels and ticks are\nadjusted for \"nice\" numerical values to make it easier to read\nthe labels. The adjustment is based in the Range instance\nvariable. Call GetAdjustedRange and GetAdjustedNumberOfLabels to\nget the adjusted range and number of labels. Note that if\nRulerMode is on, then the number of labels is a function of the\nrange and ruler distance.\n"},
  {(char*)"AdjustLabelsOff", PyvtkAxisActor2D_AdjustLabelsOff, 1,
   (char*)"V.AdjustLabelsOff()\nC++: void AdjustLabelsOff()\n\nSet/Get the flag that controls whether the labels and ticks are\nadjusted for \"nice\" numerical values to make it easier to read\nthe labels. The adjustment is based in the Range instance\nvariable. Call GetAdjustedRange and GetAdjustedNumberOfLabels to\nget the adjusted range and number of labels. Note that if\nRulerMode is on, then the number of labels is a function of the\nrange and ruler distance.\n"},
  {(char*)"GetAdjustedRange", PyvtkAxisActor2D_GetAdjustedRange, 1,
   (char*)"V.GetAdjustedRange(float, float)\nC++: virtual void GetAdjustedRange(double &_arg1, double &_arg2)\nV.GetAdjustedRange([float, float])\nC++: virtual void GetAdjustedRange(double _arg[2])\n\nSet/Get the flag that controls whether the labels and ticks are\nadjusted for \"nice\" numerical values to make it easier to read\nthe labels. The adjustment is based in the Range instance\nvariable. Call GetAdjustedRange and GetAdjustedNumberOfLabels to\nget the adjusted range and number of labels. Note that if\nRulerMode is on, then the number of labels is a function of the\nrange and ruler distance.\n"},
  {(char*)"GetAdjustedNumberOfLabels", PyvtkAxisActor2D_GetAdjustedNumberOfLabels, 1,
   (char*)"V.GetAdjustedNumberOfLabels() -> int\nC++: virtual int GetAdjustedNumberOfLabels()\n\nSet/Get the flag that controls whether the labels and ticks are\nadjusted for \"nice\" numerical values to make it easier to read\nthe labels. The adjustment is based in the Range instance\nvariable. Call GetAdjustedRange and GetAdjustedNumberOfLabels to\nget the adjusted range and number of labels. Note that if\nRulerMode is on, then the number of labels is a function of the\nrange and ruler distance.\n"},
  {(char*)"SetTitle", PyvtkAxisActor2D_SetTitle, 1,
   (char*)"V.SetTitle(string)\nC++: void SetTitle(char *)\n\nSet/Get the title of the scalar bar actor,\n"},
  {(char*)"GetTitle", PyvtkAxisActor2D_GetTitle, 1,
   (char*)"V.GetTitle() -> string\nC++: char *GetTitle()\n\nSet/Get the title of the scalar bar actor,\n"},
  {(char*)"SetTitleTextProperty", PyvtkAxisActor2D_SetTitleTextProperty, 1,
   (char*)"V.SetTitleTextProperty(vtkTextProperty)\nC++: virtual void SetTitleTextProperty(vtkTextProperty *p)\n\nSet/Get the title text property.\n"},
  {(char*)"GetTitleTextProperty", PyvtkAxisActor2D_GetTitleTextProperty, 1,
   (char*)"V.GetTitleTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetTitleTextProperty()\n\nSet/Get the title text property.\n"},
  {(char*)"SetLabelTextProperty", PyvtkAxisActor2D_SetLabelTextProperty, 1,
   (char*)"V.SetLabelTextProperty(vtkTextProperty)\nC++: virtual void SetLabelTextProperty(vtkTextProperty *p)\n\nSet/Get the labels text property.\n"},
  {(char*)"GetLabelTextProperty", PyvtkAxisActor2D_GetLabelTextProperty, 1,
   (char*)"V.GetLabelTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetLabelTextProperty()\n\nSet/Get the labels text property.\n"},
  {(char*)"SetTickLength", PyvtkAxisActor2D_SetTickLength, 1,
   (char*)"V.SetTickLength(int)\nC++: void SetTickLength(int)\n\nSet/Get the length of the tick marks (expressed in pixels or\ndisplay coordinates).\n"},
  {(char*)"GetTickLengthMinValue", PyvtkAxisActor2D_GetTickLengthMinValue, 1,
   (char*)"V.GetTickLengthMinValue() -> int\nC++: int GetTickLengthMinValue()\n\nSet/Get the length of the tick marks (expressed in pixels or\ndisplay coordinates).\n"},
  {(char*)"GetTickLengthMaxValue", PyvtkAxisActor2D_GetTickLengthMaxValue, 1,
   (char*)"V.GetTickLengthMaxValue() -> int\nC++: int GetTickLengthMaxValue()\n\nSet/Get the length of the tick marks (expressed in pixels or\ndisplay coordinates).\n"},
  {(char*)"GetTickLength", PyvtkAxisActor2D_GetTickLength, 1,
   (char*)"V.GetTickLength() -> int\nC++: int GetTickLength()\n\nSet/Get the length of the tick marks (expressed in pixels or\ndisplay coordinates).\n"},
  {(char*)"SetNumberOfMinorTicks", PyvtkAxisActor2D_SetNumberOfMinorTicks, 1,
   (char*)"V.SetNumberOfMinorTicks(int)\nC++: void SetNumberOfMinorTicks(int)\n\nNumber of minor ticks to be displayed between each tick. Default\nis 0.\n"},
  {(char*)"GetNumberOfMinorTicksMinValue", PyvtkAxisActor2D_GetNumberOfMinorTicksMinValue, 1,
   (char*)"V.GetNumberOfMinorTicksMinValue() -> int\nC++: int GetNumberOfMinorTicksMinValue()\n\nNumber of minor ticks to be displayed between each tick. Default\nis 0.\n"},
  {(char*)"GetNumberOfMinorTicksMaxValue", PyvtkAxisActor2D_GetNumberOfMinorTicksMaxValue, 1,
   (char*)"V.GetNumberOfMinorTicksMaxValue() -> int\nC++: int GetNumberOfMinorTicksMaxValue()\n\nNumber of minor ticks to be displayed between each tick. Default\nis 0.\n"},
  {(char*)"GetNumberOfMinorTicks", PyvtkAxisActor2D_GetNumberOfMinorTicks, 1,
   (char*)"V.GetNumberOfMinorTicks() -> int\nC++: int GetNumberOfMinorTicks()\n\nNumber of minor ticks to be displayed between each tick. Default\nis 0.\n"},
  {(char*)"SetMinorTickLength", PyvtkAxisActor2D_SetMinorTickLength, 1,
   (char*)"V.SetMinorTickLength(int)\nC++: void SetMinorTickLength(int)\n\nSet/Get the length of the minor tick marks (expressed in pixels\nor display coordinates).\n"},
  {(char*)"GetMinorTickLengthMinValue", PyvtkAxisActor2D_GetMinorTickLengthMinValue, 1,
   (char*)"V.GetMinorTickLengthMinValue() -> int\nC++: int GetMinorTickLengthMinValue()\n\nSet/Get the length of the minor tick marks (expressed in pixels\nor display coordinates).\n"},
  {(char*)"GetMinorTickLengthMaxValue", PyvtkAxisActor2D_GetMinorTickLengthMaxValue, 1,
   (char*)"V.GetMinorTickLengthMaxValue() -> int\nC++: int GetMinorTickLengthMaxValue()\n\nSet/Get the length of the minor tick marks (expressed in pixels\nor display coordinates).\n"},
  {(char*)"GetMinorTickLength", PyvtkAxisActor2D_GetMinorTickLength, 1,
   (char*)"V.GetMinorTickLength() -> int\nC++: int GetMinorTickLength()\n\nSet/Get the length of the minor tick marks (expressed in pixels\nor display coordinates).\n"},
  {(char*)"SetTickOffset", PyvtkAxisActor2D_SetTickOffset, 1,
   (char*)"V.SetTickOffset(int)\nC++: void SetTickOffset(int)\n\nSet/Get the offset of the labels (expressed in pixels or display\ncoordinates). The offset is the distance of labels from tick\nmarks or other objects.\n"},
  {(char*)"GetTickOffsetMinValue", PyvtkAxisActor2D_GetTickOffsetMinValue, 1,
   (char*)"V.GetTickOffsetMinValue() -> int\nC++: int GetTickOffsetMinValue()\n\nSet/Get the offset of the labels (expressed in pixels or display\ncoordinates). The offset is the distance of labels from tick\nmarks or other objects.\n"},
  {(char*)"GetTickOffsetMaxValue", PyvtkAxisActor2D_GetTickOffsetMaxValue, 1,
   (char*)"V.GetTickOffsetMaxValue() -> int\nC++: int GetTickOffsetMaxValue()\n\nSet/Get the offset of the labels (expressed in pixels or display\ncoordinates). The offset is the distance of labels from tick\nmarks or other objects.\n"},
  {(char*)"GetTickOffset", PyvtkAxisActor2D_GetTickOffset, 1,
   (char*)"V.GetTickOffset() -> int\nC++: int GetTickOffset()\n\nSet/Get the offset of the labels (expressed in pixels or display\ncoordinates). The offset is the distance of labels from tick\nmarks or other objects.\n"},
  {(char*)"SetAxisVisibility", PyvtkAxisActor2D_SetAxisVisibility, 1,
   (char*)"V.SetAxisVisibility(int)\nC++: void SetAxisVisibility(int a)\n\nSet/Get visibility of the axis line.\n"},
  {(char*)"GetAxisVisibility", PyvtkAxisActor2D_GetAxisVisibility, 1,
   (char*)"V.GetAxisVisibility() -> int\nC++: int GetAxisVisibility()\n\nSet/Get visibility of the axis line.\n"},
  {(char*)"AxisVisibilityOn", PyvtkAxisActor2D_AxisVisibilityOn, 1,
   (char*)"V.AxisVisibilityOn()\nC++: void AxisVisibilityOn()\n\nSet/Get visibility of the axis line.\n"},
  {(char*)"AxisVisibilityOff", PyvtkAxisActor2D_AxisVisibilityOff, 1,
   (char*)"V.AxisVisibilityOff()\nC++: void AxisVisibilityOff()\n\nSet/Get visibility of the axis line.\n"},
  {(char*)"SetTickVisibility", PyvtkAxisActor2D_SetTickVisibility, 1,
   (char*)"V.SetTickVisibility(int)\nC++: void SetTickVisibility(int a)\n\nSet/Get visibility of the axis tick marks.\n"},
  {(char*)"GetTickVisibility", PyvtkAxisActor2D_GetTickVisibility, 1,
   (char*)"V.GetTickVisibility() -> int\nC++: int GetTickVisibility()\n\nSet/Get visibility of the axis tick marks.\n"},
  {(char*)"TickVisibilityOn", PyvtkAxisActor2D_TickVisibilityOn, 1,
   (char*)"V.TickVisibilityOn()\nC++: void TickVisibilityOn()\n\nSet/Get visibility of the axis tick marks.\n"},
  {(char*)"TickVisibilityOff", PyvtkAxisActor2D_TickVisibilityOff, 1,
   (char*)"V.TickVisibilityOff()\nC++: void TickVisibilityOff()\n\nSet/Get visibility of the axis tick marks.\n"},
  {(char*)"SetLabelVisibility", PyvtkAxisActor2D_SetLabelVisibility, 1,
   (char*)"V.SetLabelVisibility(int)\nC++: void SetLabelVisibility(int a)\n\nSet/Get visibility of the axis labels.\n"},
  {(char*)"GetLabelVisibility", PyvtkAxisActor2D_GetLabelVisibility, 1,
   (char*)"V.GetLabelVisibility() -> int\nC++: int GetLabelVisibility()\n\nSet/Get visibility of the axis labels.\n"},
  {(char*)"LabelVisibilityOn", PyvtkAxisActor2D_LabelVisibilityOn, 1,
   (char*)"V.LabelVisibilityOn()\nC++: void LabelVisibilityOn()\n\nSet/Get visibility of the axis labels.\n"},
  {(char*)"LabelVisibilityOff", PyvtkAxisActor2D_LabelVisibilityOff, 1,
   (char*)"V.LabelVisibilityOff()\nC++: void LabelVisibilityOff()\n\nSet/Get visibility of the axis labels.\n"},
  {(char*)"SetTitleVisibility", PyvtkAxisActor2D_SetTitleVisibility, 1,
   (char*)"V.SetTitleVisibility(int)\nC++: void SetTitleVisibility(int a)\n\nSet/Get visibility of the axis title.\n"},
  {(char*)"GetTitleVisibility", PyvtkAxisActor2D_GetTitleVisibility, 1,
   (char*)"V.GetTitleVisibility() -> int\nC++: int GetTitleVisibility()\n\nSet/Get visibility of the axis title.\n"},
  {(char*)"TitleVisibilityOn", PyvtkAxisActor2D_TitleVisibilityOn, 1,
   (char*)"V.TitleVisibilityOn()\nC++: void TitleVisibilityOn()\n\nSet/Get visibility of the axis title.\n"},
  {(char*)"TitleVisibilityOff", PyvtkAxisActor2D_TitleVisibilityOff, 1,
   (char*)"V.TitleVisibilityOff()\nC++: void TitleVisibilityOff()\n\nSet/Get visibility of the axis title.\n"},
  {(char*)"SetTitlePosition", PyvtkAxisActor2D_SetTitlePosition, 1,
   (char*)"V.SetTitlePosition(float)\nC++: void SetTitlePosition(double a)\n\nSet/Get position of the axis title. 0 is at the start of the axis\nwhereas 1 is at the end.\n"},
  {(char*)"GetTitlePosition", PyvtkAxisActor2D_GetTitlePosition, 1,
   (char*)"V.GetTitlePosition() -> float\nC++: double GetTitlePosition()\n\nSet/Get position of the axis title. 0 is at the start of the axis\nwhereas 1 is at the end.\n"},
  {(char*)"SetFontFactor", PyvtkAxisActor2D_SetFontFactor, 1,
   (char*)"V.SetFontFactor(float)\nC++: void SetFontFactor(double)\n\nSet/Get the factor that controls the overall size of the fonts\nused to label and title the axes. This ivar used in conjunction\nwith the LabelFactor can be used to control font sizes.\n"},
  {(char*)"GetFontFactorMinValue", PyvtkAxisActor2D_GetFontFactorMinValue, 1,
   (char*)"V.GetFontFactorMinValue() -> float\nC++: double GetFontFactorMinValue()\n\nSet/Get the factor that controls the overall size of the fonts\nused to label and title the axes. This ivar used in conjunction\nwith the LabelFactor can be used to control font sizes.\n"},
  {(char*)"GetFontFactorMaxValue", PyvtkAxisActor2D_GetFontFactorMaxValue, 1,
   (char*)"V.GetFontFactorMaxValue() -> float\nC++: double GetFontFactorMaxValue()\n\nSet/Get the factor that controls the overall size of the fonts\nused to label and title the axes. This ivar used in conjunction\nwith the LabelFactor can be used to control font sizes.\n"},
  {(char*)"GetFontFactor", PyvtkAxisActor2D_GetFontFactor, 1,
   (char*)"V.GetFontFactor() -> float\nC++: double GetFontFactor()\n\nSet/Get the factor that controls the overall size of the fonts\nused to label and title the axes. This ivar used in conjunction\nwith the LabelFactor can be used to control font sizes.\n"},
  {(char*)"SetLabelFactor", PyvtkAxisActor2D_SetLabelFactor, 1,
   (char*)"V.SetLabelFactor(float)\nC++: void SetLabelFactor(double)\n\nSet/Get the factor that controls the relative size of the axis\nlabels to the axis title.\n"},
  {(char*)"GetLabelFactorMinValue", PyvtkAxisActor2D_GetLabelFactorMinValue, 1,
   (char*)"V.GetLabelFactorMinValue() -> float\nC++: double GetLabelFactorMinValue()\n\nSet/Get the factor that controls the relative size of the axis\nlabels to the axis title.\n"},
  {(char*)"GetLabelFactorMaxValue", PyvtkAxisActor2D_GetLabelFactorMaxValue, 1,
   (char*)"V.GetLabelFactorMaxValue() -> float\nC++: double GetLabelFactorMaxValue()\n\nSet/Get the factor that controls the relative size of the axis\nlabels to the axis title.\n"},
  {(char*)"GetLabelFactor", PyvtkAxisActor2D_GetLabelFactor, 1,
   (char*)"V.GetLabelFactor() -> float\nC++: double GetLabelFactor()\n\nSet/Get the factor that controls the relative size of the axis\nlabels to the axis title.\n"},
  {(char*)"RenderOverlay", PyvtkAxisActor2D_RenderOverlay, 1,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport)\n\nDraw the axis.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkAxisActor2D_RenderOpaqueGeometry, 1,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport)\n\nDraw the axis.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkAxisActor2D_RenderTranslucentPolygonalGeometry, 1,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(vtkViewport *)\n\nDraw the axis.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkAxisActor2D_HasTranslucentPolygonalGeometry, 1,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkAxisActor2D_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {(char*)"ComputeRange", PyvtkAxisActor2D_ComputeRange, 1,
   (char*)"V.ComputeRange([float, float], [float, float], int, int, float)\nC++: static void ComputeRange(double inRange[2],\n    double outRange[2], int inNumTicks, int &outNumTicks,\n    double &interval)\n\nThis method computes the range of the axis given an input range.\nIt also computes the number of tick marks given a suggested\nnumber. (The number of tick marks includes end ticks as well.)\nThe number of tick marks computed (in conjunction with the output\nrange) will yield \"nice\" tick values. For example, if the input\nrange is (0.25,96.7) and the number of ticks requested is 10, the\noutput range will be (0,100) with the number of computed ticks to\n11 to yield tick values of (0,10,20,...,100).\n"},
  {(char*)"SetSizeFontRelativeToAxis", PyvtkAxisActor2D_SetSizeFontRelativeToAxis, 1,
   (char*)"V.SetSizeFontRelativeToAxis(int)\nC++: void SetSizeFontRelativeToAxis(int a)\n\nSpecify whether to size the fonts relative to the viewport or\nrelative to length of the axis. By default, fonts are resized\nrelative to the axis.\n"},
  {(char*)"GetSizeFontRelativeToAxis", PyvtkAxisActor2D_GetSizeFontRelativeToAxis, 1,
   (char*)"V.GetSizeFontRelativeToAxis() -> int\nC++: int GetSizeFontRelativeToAxis()\n\nSpecify whether to size the fonts relative to the viewport or\nrelative to length of the axis. By default, fonts are resized\nrelative to the axis.\n"},
  {(char*)"SizeFontRelativeToAxisOn", PyvtkAxisActor2D_SizeFontRelativeToAxisOn, 1,
   (char*)"V.SizeFontRelativeToAxisOn()\nC++: void SizeFontRelativeToAxisOn()\n\nSpecify whether to size the fonts relative to the viewport or\nrelative to length of the axis. By default, fonts are resized\nrelative to the axis.\n"},
  {(char*)"SizeFontRelativeToAxisOff", PyvtkAxisActor2D_SizeFontRelativeToAxisOff, 1,
   (char*)"V.SizeFontRelativeToAxisOff()\nC++: void SizeFontRelativeToAxisOff()\n\nSpecify whether to size the fonts relative to the viewport or\nrelative to length of the axis. By default, fonts are resized\nrelative to the axis.\n"},
  {(char*)"ShallowCopy", PyvtkAxisActor2D_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop)\n\nShallow copy of an axis actor. Overloads the virtual vtkProp\nmethod.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAxisActor2D_StaticNew()
{
  return vtkAxisActor2D::New();
}

PyObject *PyVTKClass_vtkAxisActor2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAxisActor2D_StaticNew,
    PyvtkAxisActor2D_Methods,
    "vtkAxisActor2D", modulename,
    NULL, NULL,
    PyvtkAxisActor2D_Doc(),
    PyVTKClass_vtkActor2DNew(modulename));
  return cls;
}

const char **PyvtkAxisActor2D_Doc()
{
  static const char *docstring[] = {
    "vtkAxisActor2D - Create an axis with tick marks and labels\n\n",
    "Superclass: vtkActor2D\n\n",
    "vtkAxisActor2D creates an axis with tick marks, labels, and/or a\ntitle, depending on the particular instance variable settings.\nvtkAxisActor2D is a 2D actor; that is, it is drawn on the overlay\nplane and is not occluded by 3D geometry. To use this class, you\ntypically specify two points defining the start and end points of the\nline (x-y definition using vtkCoordinate class), the number of\nlabels, ",
    "and the data range (min,max). You can also control what parts\nof the axis are visible including the line, the tick marks, the\nlabels, and the title.  You can also specify the label format (a\nprintf style format).\n\nThis class decides what font size to use and how to locate the\nlabels. It also decides how to create reasonable tick marks and\nlabels. The number of labels and the range of values may no",
    "t match\nthe number specified, but should be close.\n\nLabels are drawn on the \"right\" side of the axis. The \"right\" side is\nthe side of the axis on the right as you move from Position to\nPosition2. The way the labels and title line up with the axis and\ntick marks depends on whether the line is considered horizontal or\nvertical.\n\nThe vtkActor2D instance variables Position and Position2 are\ninstances ",
    "of vtkCoordinate. Note that the Position2 is an absolute\nposition in that class (it was by default relative to Position in\nvtkActor2D).\n\nWhat this means is that you can specify the axis in a variety of\ncoordinate systems. Also, the axis does not have to be either\nhorizontal or vertical. The tick marks are created so that they are\nperpendicular to the axis.\n\nSet the text property/attributes of the ",
    "title and the labels through\nthe vtkTextProperty objects associated to this actor.\n\nSee Also:\n\nvtkCubeAxesActor2D can be used to create axes in world coordinate\nspace.\n\nvtkActor2D vtkTextMapper vtkPolyDataMapper2D vtkScalarBarActor\nvtkCoordinate vtkTextProperty\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAxisActor2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAxisActor2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAxisActor2D", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(25);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_MAX_LABELS", o) != 0)
    {
    Py_DECREF(o);
    }

}
