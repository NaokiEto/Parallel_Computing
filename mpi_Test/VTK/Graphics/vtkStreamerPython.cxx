// python wrapper for vtkStreamer
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
#include "vtkStreamer.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkStreamer(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkStreamer(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkStreamerNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkStreamerNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkStreamer_Doc();


static PyObject *
PyvtkStreamer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

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
      tempr = op->vtkStreamer::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

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
      tempr = op->vtkStreamer::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

  vtkStreamer *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkStreamer::NewInstance();
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
PyvtkStreamer_SetStartLocation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

  vtkIdType temp0;
  int temp1;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      op->SetStartLocation(temp0, temp1, temp2);
      }
    else
      {
      op->vtkStreamer::SetStartLocation(temp0, temp1, temp2);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkStreamer_SetStartLocation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

  vtkIdType temp0;
  int temp1;
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
      op->SetStartLocation(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkStreamer::SetStartLocation(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkStreamer_SetStartLocation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkStreamer_SetStartLocation_s1(self, args);
    case 5:
      return PyvtkStreamer_SetStartLocation_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetStartLocation");
  return NULL;
}



static PyObject *
PyvtkStreamer_GetStartLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

  int temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      tempr = op->GetStartLocation(temp0, temp1);
      }
    else
      {
      tempr = op->vtkStreamer::GetStartLocation(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamer_SetStartPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

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
      op->SetStartPosition(temp0);
      }
    else
      {
      op->vtkStreamer::SetStartPosition(temp0);
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
PyvtkStreamer_SetStartPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

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
      op->SetStartPosition(temp0, temp1, temp2);
      }
    else
      {
      op->vtkStreamer::SetStartPosition(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkStreamer_SetStartPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkStreamer_SetStartPosition_s1(self, args);
    case 3:
      return PyvtkStreamer_SetStartPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetStartPosition");
  return NULL;
}



static PyObject *
PyvtkStreamer_GetStartPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStartPosition();
      }
    else
      {
      tempr = op->vtkStreamer::GetStartPosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamer_SetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->SetSource(temp0);
      }
    else
      {
      op->vtkStreamer::SetSource(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamer_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

  vtkDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSource();
      }
    else
      {
      tempr = op->vtkStreamer::GetSource();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamer_SetMaximumPropagationTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumPropagationTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumPropagationTime(temp0);
      }
    else
      {
      op->vtkStreamer::SetMaximumPropagationTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamer_GetMaximumPropagationTimeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumPropagationTimeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumPropagationTimeMinValue();
      }
    else
      {
      tempr = op->vtkStreamer::GetMaximumPropagationTimeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamer_GetMaximumPropagationTimeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumPropagationTimeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumPropagationTimeMaxValue();
      }
    else
      {
      tempr = op->vtkStreamer::GetMaximumPropagationTimeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamer_GetMaximumPropagationTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumPropagationTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumPropagationTime();
      }
    else
      {
      tempr = op->vtkStreamer::GetMaximumPropagationTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamer_SetIntegrationDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIntegrationDirection(temp0);
      }
    else
      {
      op->vtkStreamer::SetIntegrationDirection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamer_GetIntegrationDirectionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationDirectionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIntegrationDirectionMinValue();
      }
    else
      {
      tempr = op->vtkStreamer::GetIntegrationDirectionMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamer_GetIntegrationDirectionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationDirectionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIntegrationDirectionMaxValue();
      }
    else
      {
      tempr = op->vtkStreamer::GetIntegrationDirectionMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamer_GetIntegrationDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIntegrationDirection();
      }
    else
      {
      tempr = op->vtkStreamer::GetIntegrationDirection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamer_SetIntegrationDirectionToForward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationDirectionToForward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIntegrationDirectionToForward();
      }
    else
      {
      op->vtkStreamer::SetIntegrationDirectionToForward();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamer_SetIntegrationDirectionToBackward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationDirectionToBackward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIntegrationDirectionToBackward();
      }
    else
      {
      op->vtkStreamer::SetIntegrationDirectionToBackward();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamer_SetIntegrationDirectionToIntegrateBothDirections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationDirectionToIntegrateBothDirections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIntegrationDirectionToIntegrateBothDirections();
      }
    else
      {
      op->vtkStreamer::SetIntegrationDirectionToIntegrateBothDirections();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamer_GetIntegrationDirectionAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationDirectionAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIntegrationDirectionAsString();
      }
    else
      {
      tempr = op->vtkStreamer::GetIntegrationDirectionAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamer_SetIntegrationStepLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationStepLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIntegrationStepLength(temp0);
      }
    else
      {
      op->vtkStreamer::SetIntegrationStepLength(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamer_GetIntegrationStepLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationStepLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIntegrationStepLengthMinValue();
      }
    else
      {
      tempr = op->vtkStreamer::GetIntegrationStepLengthMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamer_GetIntegrationStepLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationStepLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIntegrationStepLengthMaxValue();
      }
    else
      {
      tempr = op->vtkStreamer::GetIntegrationStepLengthMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamer_GetIntegrationStepLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationStepLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIntegrationStepLength();
      }
    else
      {
      tempr = op->vtkStreamer::GetIntegrationStepLength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamer_SetSpeedScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpeedScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSpeedScalars(temp0);
      }
    else
      {
      op->vtkStreamer::SetSpeedScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamer_GetSpeedScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpeedScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSpeedScalars();
      }
    else
      {
      tempr = op->vtkStreamer::GetSpeedScalars();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamer_SpeedScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SpeedScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SpeedScalarsOn();
      }
    else
      {
      op->vtkStreamer::SpeedScalarsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamer_SpeedScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SpeedScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SpeedScalarsOff();
      }
    else
      {
      op->vtkStreamer::SpeedScalarsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamer_SetOrientationScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOrientationScalars(temp0);
      }
    else
      {
      op->vtkStreamer::SetOrientationScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamer_GetOrientationScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOrientationScalars();
      }
    else
      {
      tempr = op->vtkStreamer::GetOrientationScalars();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamer_OrientationScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OrientationScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OrientationScalarsOn();
      }
    else
      {
      op->vtkStreamer::OrientationScalarsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamer_OrientationScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OrientationScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OrientationScalarsOff();
      }
    else
      {
      op->vtkStreamer::OrientationScalarsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamer_SetTerminalSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTerminalSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTerminalSpeed(temp0);
      }
    else
      {
      op->vtkStreamer::SetTerminalSpeed(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamer_GetTerminalSpeedMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTerminalSpeedMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTerminalSpeedMinValue();
      }
    else
      {
      tempr = op->vtkStreamer::GetTerminalSpeedMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamer_GetTerminalSpeedMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTerminalSpeedMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTerminalSpeedMaxValue();
      }
    else
      {
      tempr = op->vtkStreamer::GetTerminalSpeedMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamer_GetTerminalSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTerminalSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTerminalSpeed();
      }
    else
      {
      tempr = op->vtkStreamer::GetTerminalSpeed();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamer_SetVorticity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVorticity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVorticity(temp0);
      }
    else
      {
      op->vtkStreamer::SetVorticity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamer_GetVorticity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVorticity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVorticity();
      }
    else
      {
      tempr = op->vtkStreamer::GetVorticity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamer_VorticityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VorticityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->VorticityOn();
      }
    else
      {
      op->vtkStreamer::VorticityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamer_VorticityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VorticityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->VorticityOff();
      }
    else
      {
      op->vtkStreamer::VorticityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamer_SetNumberOfThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfThreads(temp0);
      }
    else
      {
      op->vtkStreamer::SetNumberOfThreads(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamer_GetNumberOfThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfThreads();
      }
    else
      {
      tempr = op->vtkStreamer::GetNumberOfThreads();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamer_SetSavePointInterval(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSavePointInterval");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSavePointInterval(temp0);
      }
    else
      {
      op->vtkStreamer::SetSavePointInterval(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamer_GetSavePointInterval(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSavePointInterval");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSavePointInterval();
      }
    else
      {
      tempr = op->vtkStreamer::GetSavePointInterval();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamer_SetIntegrator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

  vtkInitialValueProblemSolver *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInitialValueProblemSolver"))
    {
    if (ap.IsBound())
      {
      op->SetIntegrator(temp0);
      }
    else
      {
      op->vtkStreamer::SetIntegrator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamer_GetIntegrator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

  vtkInitialValueProblemSolver *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIntegrator();
      }
    else
      {
      tempr = op->vtkStreamer::GetIntegrator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamer_SetEpsilon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEpsilon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEpsilon(temp0);
      }
    else
      {
      op->vtkStreamer::SetEpsilon(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamer_GetEpsilon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEpsilon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamer *op = static_cast<vtkStreamer *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEpsilon();
      }
    else
      {
      tempr = op->vtkStreamer::GetEpsilon();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkStreamer_Methods[] = {
  {(char*)"GetClassName", PyvtkStreamer_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStreamer_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStreamer_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkStreamer\nC++: vtkStreamer *NewInstance()\n\n"},
  {(char*)"SetStartLocation", PyvtkStreamer_SetStartLocation, 1,
   (char*)"V.SetStartLocation(int, int, [float, float, float])\nC++: void SetStartLocation(vtkIdType cellId, int subId,\n    double pcoords[3])\nV.SetStartLocation(int, int, float, float, float)\nC++: void SetStartLocation(vtkIdType cellId, int subId, double r,\n    double s, double t)\n\nSpecify the start of the streamline in the cell coordinate\nsystem. That is, cellId and subId (if composite cell), and\nparametric coordinates.\n"},
  {(char*)"GetStartLocation", PyvtkStreamer_GetStartLocation, 1,
   (char*)"V.GetStartLocation(int, [float, float, float]) -> int\nC++: vtkIdType GetStartLocation(int &subId, double pcoords[3])\n\nGet the starting location of the streamline in the cell\ncoordinate system.\n"},
  {(char*)"SetStartPosition", PyvtkStreamer_SetStartPosition, 1,
   (char*)"V.SetStartPosition([float, float, float])\nC++: void SetStartPosition(double x[3])\nV.SetStartPosition(float, float, float)\nC++: void SetStartPosition(double x, double y, double z)\n\nSpecify the start of the streamline in the global coordinate\nsystem. Search must be performed to find initial cell to start\nintegration from.\n"},
  {(char*)"GetStartPosition", PyvtkStreamer_GetStartPosition, 1,
   (char*)"V.GetStartPosition() -> (float, float, float)\nC++: double *GetStartPosition()\n\nGet the start position in global x-y-z coordinates.\n"},
  {(char*)"SetSource", PyvtkStreamer_SetSource, 1,
   (char*)"V.SetSource(vtkDataSet)\nC++: void SetSource(vtkDataSet *source)\n\nSpecify the source object used to generate starting points.\n"},
  {(char*)"GetSource", PyvtkStreamer_GetSource, 1,
   (char*)"V.GetSource() -> vtkDataSet\nC++: vtkDataSet *GetSource()\n\nSpecify the source object used to generate starting points.\n"},
  {(char*)"SetMaximumPropagationTime", PyvtkStreamer_SetMaximumPropagationTime, 1,
   (char*)"V.SetMaximumPropagationTime(float)\nC++: void SetMaximumPropagationTime(double)\n\nSpecify the maximum length of the Streamer expressed in elapsed\ntime.\n"},
  {(char*)"GetMaximumPropagationTimeMinValue", PyvtkStreamer_GetMaximumPropagationTimeMinValue, 1,
   (char*)"V.GetMaximumPropagationTimeMinValue() -> float\nC++: double GetMaximumPropagationTimeMinValue()\n\nSpecify the maximum length of the Streamer expressed in elapsed\ntime.\n"},
  {(char*)"GetMaximumPropagationTimeMaxValue", PyvtkStreamer_GetMaximumPropagationTimeMaxValue, 1,
   (char*)"V.GetMaximumPropagationTimeMaxValue() -> float\nC++: double GetMaximumPropagationTimeMaxValue()\n\nSpecify the maximum length of the Streamer expressed in elapsed\ntime.\n"},
  {(char*)"GetMaximumPropagationTime", PyvtkStreamer_GetMaximumPropagationTime, 1,
   (char*)"V.GetMaximumPropagationTime() -> float\nC++: double GetMaximumPropagationTime()\n\nSpecify the maximum length of the Streamer expressed in elapsed\ntime.\n"},
  {(char*)"SetIntegrationDirection", PyvtkStreamer_SetIntegrationDirection, 1,
   (char*)"V.SetIntegrationDirection(int)\nC++: void SetIntegrationDirection(int)\n\nSpecify the direction in which to integrate the Streamer.\n"},
  {(char*)"GetIntegrationDirectionMinValue", PyvtkStreamer_GetIntegrationDirectionMinValue, 1,
   (char*)"V.GetIntegrationDirectionMinValue() -> int\nC++: int GetIntegrationDirectionMinValue()\n\nSpecify the direction in which to integrate the Streamer.\n"},
  {(char*)"GetIntegrationDirectionMaxValue", PyvtkStreamer_GetIntegrationDirectionMaxValue, 1,
   (char*)"V.GetIntegrationDirectionMaxValue() -> int\nC++: int GetIntegrationDirectionMaxValue()\n\nSpecify the direction in which to integrate the Streamer.\n"},
  {(char*)"GetIntegrationDirection", PyvtkStreamer_GetIntegrationDirection, 1,
   (char*)"V.GetIntegrationDirection() -> int\nC++: int GetIntegrationDirection()\n\nSpecify the direction in which to integrate the Streamer.\n"},
  {(char*)"SetIntegrationDirectionToForward", PyvtkStreamer_SetIntegrationDirectionToForward, 1,
   (char*)"V.SetIntegrationDirectionToForward()\nC++: void SetIntegrationDirectionToForward()\n\nSpecify the direction in which to integrate the Streamer.\n"},
  {(char*)"SetIntegrationDirectionToBackward", PyvtkStreamer_SetIntegrationDirectionToBackward, 1,
   (char*)"V.SetIntegrationDirectionToBackward()\nC++: void SetIntegrationDirectionToBackward()\n\nSpecify the direction in which to integrate the Streamer.\n"},
  {(char*)"SetIntegrationDirectionToIntegrateBothDirections", PyvtkStreamer_SetIntegrationDirectionToIntegrateBothDirections, 1,
   (char*)"V.SetIntegrationDirectionToIntegrateBothDirections()\nC++: void SetIntegrationDirectionToIntegrateBothDirections()\n\nSpecify the direction in which to integrate the Streamer.\n"},
  {(char*)"GetIntegrationDirectionAsString", PyvtkStreamer_GetIntegrationDirectionAsString, 1,
   (char*)"V.GetIntegrationDirectionAsString() -> string\nC++: const char *GetIntegrationDirectionAsString()\n\nSpecify the direction in which to integrate the Streamer.\n"},
  {(char*)"SetIntegrationStepLength", PyvtkStreamer_SetIntegrationStepLength, 1,
   (char*)"V.SetIntegrationStepLength(float)\nC++: void SetIntegrationStepLength(double)\n\nSpecify a nominal integration step size (expressed as a fraction\nof the size of each cell). This value can be larger than 1.\n"},
  {(char*)"GetIntegrationStepLengthMinValue", PyvtkStreamer_GetIntegrationStepLengthMinValue, 1,
   (char*)"V.GetIntegrationStepLengthMinValue() -> float\nC++: double GetIntegrationStepLengthMinValue()\n\nSpecify a nominal integration step size (expressed as a fraction\nof the size of each cell). This value can be larger than 1.\n"},
  {(char*)"GetIntegrationStepLengthMaxValue", PyvtkStreamer_GetIntegrationStepLengthMaxValue, 1,
   (char*)"V.GetIntegrationStepLengthMaxValue() -> float\nC++: double GetIntegrationStepLengthMaxValue()\n\nSpecify a nominal integration step size (expressed as a fraction\nof the size of each cell). This value can be larger than 1.\n"},
  {(char*)"GetIntegrationStepLength", PyvtkStreamer_GetIntegrationStepLength, 1,
   (char*)"V.GetIntegrationStepLength() -> float\nC++: double GetIntegrationStepLength()\n\nSpecify a nominal integration step size (expressed as a fraction\nof the size of each cell). This value can be larger than 1.\n"},
  {(char*)"SetSpeedScalars", PyvtkStreamer_SetSpeedScalars, 1,
   (char*)"V.SetSpeedScalars(int)\nC++: void SetSpeedScalars(int a)\n\nTurn on/off the creation of scalar data from velocity magnitude.\nIf off, and input dataset has scalars, input dataset scalars are\nused.\n"},
  {(char*)"GetSpeedScalars", PyvtkStreamer_GetSpeedScalars, 1,
   (char*)"V.GetSpeedScalars() -> int\nC++: int GetSpeedScalars()\n\nTurn on/off the creation of scalar data from velocity magnitude.\nIf off, and input dataset has scalars, input dataset scalars are\nused.\n"},
  {(char*)"SpeedScalarsOn", PyvtkStreamer_SpeedScalarsOn, 1,
   (char*)"V.SpeedScalarsOn()\nC++: void SpeedScalarsOn()\n\nTurn on/off the creation of scalar data from velocity magnitude.\nIf off, and input dataset has scalars, input dataset scalars are\nused.\n"},
  {(char*)"SpeedScalarsOff", PyvtkStreamer_SpeedScalarsOff, 1,
   (char*)"V.SpeedScalarsOff()\nC++: void SpeedScalarsOff()\n\nTurn on/off the creation of scalar data from velocity magnitude.\nIf off, and input dataset has scalars, input dataset scalars are\nused.\n"},
  {(char*)"SetOrientationScalars", PyvtkStreamer_SetOrientationScalars, 1,
   (char*)"V.SetOrientationScalars(int)\nC++: void SetOrientationScalars(int a)\n\nTurn on/off the creation of scalar data from vorticity\ninformation. The scalar information is currently the orientation\nvalue \"theta\" used in rotating stream tubes. If off, and input\ndataset has scalars, then input dataset scalars are used, unless\nSpeedScalars is also on. SpeedScalars takes precedence over\nOrientationScalars.\n"},
  {(char*)"GetOrientationScalars", PyvtkStreamer_GetOrientationScalars, 1,
   (char*)"V.GetOrientationScalars() -> int\nC++: int GetOrientationScalars()\n\nTurn on/off the creation of scalar data from vorticity\ninformation. The scalar information is currently the orientation\nvalue \"theta\" used in rotating stream tubes. If off, and input\ndataset has scalars, then input dataset scalars are used, unless\nSpeedScalars is also on. SpeedScalars takes precedence over\nOrientationScalars.\n"},
  {(char*)"OrientationScalarsOn", PyvtkStreamer_OrientationScalarsOn, 1,
   (char*)"V.OrientationScalarsOn()\nC++: void OrientationScalarsOn()\n\nTurn on/off the creation of scalar data from vorticity\ninformation. The scalar information is currently the orientation\nvalue \"theta\" used in rotating stream tubes. If off, and input\ndataset has scalars, then input dataset scalars are used, unless\nSpeedScalars is also on. SpeedScalars takes precedence over\nOrientationScalars.\n"},
  {(char*)"OrientationScalarsOff", PyvtkStreamer_OrientationScalarsOff, 1,
   (char*)"V.OrientationScalarsOff()\nC++: void OrientationScalarsOff()\n\nTurn on/off the creation of scalar data from vorticity\ninformation. The scalar information is currently the orientation\nvalue \"theta\" used in rotating stream tubes. If off, and input\ndataset has scalars, then input dataset scalars are used, unless\nSpeedScalars is also on. SpeedScalars takes precedence over\nOrientationScalars.\n"},
  {(char*)"SetTerminalSpeed", PyvtkStreamer_SetTerminalSpeed, 1,
   (char*)"V.SetTerminalSpeed(float)\nC++: void SetTerminalSpeed(double)\n\nSet/get terminal speed (i.e., speed is velocity magnitude). \nTerminal speed is speed at which streamer will terminate\npropagation.\n"},
  {(char*)"GetTerminalSpeedMinValue", PyvtkStreamer_GetTerminalSpeedMinValue, 1,
   (char*)"V.GetTerminalSpeedMinValue() -> float\nC++: double GetTerminalSpeedMinValue()\n\nSet/get terminal speed (i.e., speed is velocity magnitude). \nTerminal speed is speed at which streamer will terminate\npropagation.\n"},
  {(char*)"GetTerminalSpeedMaxValue", PyvtkStreamer_GetTerminalSpeedMaxValue, 1,
   (char*)"V.GetTerminalSpeedMaxValue() -> float\nC++: double GetTerminalSpeedMaxValue()\n\nSet/get terminal speed (i.e., speed is velocity magnitude). \nTerminal speed is speed at which streamer will terminate\npropagation.\n"},
  {(char*)"GetTerminalSpeed", PyvtkStreamer_GetTerminalSpeed, 1,
   (char*)"V.GetTerminalSpeed() -> float\nC++: double GetTerminalSpeed()\n\nSet/get terminal speed (i.e., speed is velocity magnitude). \nTerminal speed is speed at which streamer will terminate\npropagation.\n"},
  {(char*)"SetVorticity", PyvtkStreamer_SetVorticity, 1,
   (char*)"V.SetVorticity(int)\nC++: void SetVorticity(int a)\n\nTurn on/off the computation of vorticity. Vorticity is an\nindication of the rotation of the flow. In combination with\nvtkStreamLine and vtkTubeFilter can be used to create rotated\ntubes. If vorticity is turned on, in the output, the velocity\nvectors are replaced by vorticity vectors.\n"},
  {(char*)"GetVorticity", PyvtkStreamer_GetVorticity, 1,
   (char*)"V.GetVorticity() -> int\nC++: int GetVorticity()\n\nTurn on/off the computation of vorticity. Vorticity is an\nindication of the rotation of the flow. In combination with\nvtkStreamLine and vtkTubeFilter can be used to create rotated\ntubes. If vorticity is turned on, in the output, the velocity\nvectors are replaced by vorticity vectors.\n"},
  {(char*)"VorticityOn", PyvtkStreamer_VorticityOn, 1,
   (char*)"V.VorticityOn()\nC++: void VorticityOn()\n\nTurn on/off the computation of vorticity. Vorticity is an\nindication of the rotation of the flow. In combination with\nvtkStreamLine and vtkTubeFilter can be used to create rotated\ntubes. If vorticity is turned on, in the output, the velocity\nvectors are replaced by vorticity vectors.\n"},
  {(char*)"VorticityOff", PyvtkStreamer_VorticityOff, 1,
   (char*)"V.VorticityOff()\nC++: void VorticityOff()\n\nTurn on/off the computation of vorticity. Vorticity is an\nindication of the rotation of the flow. In combination with\nvtkStreamLine and vtkTubeFilter can be used to create rotated\ntubes. If vorticity is turned on, in the output, the velocity\nvectors are replaced by vorticity vectors.\n"},
  {(char*)"SetNumberOfThreads", PyvtkStreamer_SetNumberOfThreads, 1,
   (char*)"V.SetNumberOfThreads(int)\nC++: void SetNumberOfThreads(int a)\n\n"},
  {(char*)"GetNumberOfThreads", PyvtkStreamer_GetNumberOfThreads, 1,
   (char*)"V.GetNumberOfThreads() -> int\nC++: int GetNumberOfThreads()\n\n"},
  {(char*)"SetSavePointInterval", PyvtkStreamer_SetSavePointInterval, 1,
   (char*)"V.SetSavePointInterval(float)\nC++: void SetSavePointInterval(double a)\n\n"},
  {(char*)"GetSavePointInterval", PyvtkStreamer_GetSavePointInterval, 1,
   (char*)"V.GetSavePointInterval() -> float\nC++: double GetSavePointInterval()\n\n"},
  {(char*)"SetIntegrator", PyvtkStreamer_SetIntegrator, 1,
   (char*)"V.SetIntegrator(vtkInitialValueProblemSolver)\nC++: void SetIntegrator(vtkInitialValueProblemSolver *)\n\nSet/get the integrator type to be used in the stream line\ncalculation. The object passed is not actually used but is cloned\nwith NewInstance by each thread/process in the process of\nintegration (prototype pattern). The default is 2nd order Runge\nKutta.\n"},
  {(char*)"GetIntegrator", PyvtkStreamer_GetIntegrator, 1,
   (char*)"V.GetIntegrator() -> vtkInitialValueProblemSolver\nC++: vtkInitialValueProblemSolver *GetIntegrator()\n\nSet/get the integrator type to be used in the stream line\ncalculation. The object passed is not actually used but is cloned\nwith NewInstance by each thread/process in the process of\nintegration (prototype pattern). The default is 2nd order Runge\nKutta.\n"},
  {(char*)"SetEpsilon", PyvtkStreamer_SetEpsilon, 1,
   (char*)"V.SetEpsilon(float)\nC++: void SetEpsilon(double a)\n\nA positive value, as small as possible for numerical comparison.\nThe initial value is 1E-12.\n"},
  {(char*)"GetEpsilon", PyvtkStreamer_GetEpsilon, 1,
   (char*)"V.GetEpsilon() -> float\nC++: double GetEpsilon()\n\nA positive value, as small as possible for numerical comparison.\nThe initial value is 1E-12.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkStreamerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkStreamer_Methods,
    "vtkStreamer", modulename,
    NULL, NULL,
    PyvtkStreamer_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkStreamer_Doc()
{
  static const char *docstring[] = {
    "vtkStreamer - abstract object implements integration of massless\nparticle through vector field\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkStreamer is a filter that integrates a massless particle through a\nvector field. The integration is performed using second order\nRunge-Kutta method. vtkStreamer often serves as a base class for\nother classes that perform numerical integration through a vector\nfield (e.g., vtkStreamLine).\n\nNote that vtkStreamer can integrate both forward and backward in\ntime, or in both directions. The length of",
    " the streamer is controlled\nby specifying an elapsed time. (The elapsed time is the time each\nparticle travels.) Otherwise, the integration terminates after\nexiting the dataset or if the particle speed is reduced to a value\nless than the terminal speed.\n\nvtkStreamer integrates through any type of dataset. As a result, if\nthe dataset contains 2D cells such as polygons or triangles, the\nintegration ",
    "is constrained to lie on the surface defined by the 2D\ncells.\n\nThe starting point of streamers may be defined in three different\nways. Starting from global x-y-z \"position\" allows you to start a\nsingle streamer at a specified x-y-z coordinate. Starting from\n\"location\" allows you to start at a specified cell, subId, and\nparametric coordinate. Finally, you may specify a source object to\nstart multip",
    "le streamers. If you start streamers using a source\nobject, for each point in the source that is inside the dataset a\nstreamer is created.\n\nvtkStreamer implements the integration process in the Integrate()\nmethod. Because vtkStreamer does not implement the Execute() method\nthat its superclass (i.e., Filter) requires, it is an abstract class.\nIts subclasses implement the execute method and use the ",
    "Integrate()\nmethod, and then build their own representation of the integration\npath (i.e., lines, dashed lines, points, etc.).\n\nSee Also:\n\nvtkStreamLine vtkDashedStreamLine vtkStreamPoints\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStreamer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStreamerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStreamer", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_INTEGRATE_FORWARD", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_INTEGRATE_BACKWARD", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_INTEGRATE_BOTH_DIRECTIONS", o) != 0)
    {
    Py_DECREF(o);
    }

}

