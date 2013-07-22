// python wrapper for vtkGlyph3DMapper
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
#include "vtkGlyph3DMapper.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGlyph3DMapper(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGlyph3DMapper(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGlyph3DMapperNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGlyph3DMapperNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkMapperNew
extern "C" { PyObject *PyVTKClass_vtkMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkMapperNew
#endif

static const char **PyvtkGlyph3DMapper_Doc();


static PyObject *
PyvtkGlyph3DMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

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
      tempr = op->vtkGlyph3DMapper::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

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
      tempr = op->vtkGlyph3DMapper::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  vtkGlyph3DMapper *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGlyph3DMapper::NewInstance();
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
PyvtkGlyph3DMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGlyph3DMapper *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGlyph3DMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetSourceConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetSourceConnection(temp0, temp1);
      }
    else
      {
      op->vtkGlyph3DMapper::SetSourceConnection(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGlyph3DMapper_SetSourceConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetSourceConnection(temp0);
      }
    else
      {
      op->vtkGlyph3DMapper::SetSourceConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGlyph3DMapper_SetSourceConnection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkGlyph3DMapper_SetSourceConnection_s1(self, args);
    case 1:
      return PyvtkGlyph3DMapper_SetSourceConnection_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSourceConnection");
  return NULL;
}



static PyObject *
PyvtkGlyph3DMapper_SetSource_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  int temp0;
  vtkPolyData *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->SetSource(temp0, temp1);
      }
    else
      {
      op->vtkGlyph3DMapper::SetSource(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGlyph3DMapper_SetSource_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->SetSource(temp0);
      }
    else
      {
      op->vtkGlyph3DMapper::SetSource(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGlyph3DMapper_SetSource(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkGlyph3DMapper_SetSource_s1(self, args);
    case 1:
      return PyvtkGlyph3DMapper_SetSource_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSource");
  return NULL;
}



static PyObject *
PyvtkGlyph3DMapper_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  int temp0 = 0;
  vtkPolyData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSource(temp0);
      }
    else
      {
      tempr = op->vtkGlyph3DMapper::GetSource(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  bool temp0 = false;
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
      op->vtkGlyph3DMapper::SetScaling(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_ScalingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalingOn();
      }
    else
      {
      op->vtkGlyph3DMapper::ScalingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_ScalingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalingOff();
      }
    else
      {
      op->vtkGlyph3DMapper::ScalingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScaling();
      }
    else
      {
      tempr = op->vtkGlyph3DMapper::GetScaling();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetScaleMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScaleMode(temp0);
      }
    else
      {
      op->vtkGlyph3DMapper::SetScaleMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetScaleMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScaleMode();
      }
    else
      {
      tempr = op->vtkGlyph3DMapper::GetScaleMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScaleFactor(temp0);
      }
    else
      {
      op->vtkGlyph3DMapper::SetScaleFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScaleFactor();
      }
    else
      {
      tempr = op->vtkGlyph3DMapper::GetScaleFactor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetScaleModeToScaleByMagnitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleModeToScaleByMagnitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScaleModeToScaleByMagnitude();
      }
    else
      {
      op->vtkGlyph3DMapper::SetScaleModeToScaleByMagnitude();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetScaleModeToScaleByVectorComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleModeToScaleByVectorComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScaleModeToScaleByVectorComponents();
      }
    else
      {
      op->vtkGlyph3DMapper::SetScaleModeToScaleByVectorComponents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetScaleModeToNoDataScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleModeToNoDataScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScaleModeToNoDataScaling();
      }
    else
      {
      op->vtkGlyph3DMapper::SetScaleModeToNoDataScaling();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetScaleModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScaleModeAsString();
      }
    else
      {
      tempr = op->vtkGlyph3DMapper::GetScaleModeAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

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
      op->vtkGlyph3DMapper::SetRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGlyph3DMapper_SetRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

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
      op->vtkGlyph3DMapper::SetRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGlyph3DMapper_SetRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkGlyph3DMapper_SetRange_s1(self, args);
    case 1:
      return PyvtkGlyph3DMapper_SetRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetRange");
  return NULL;
}



static PyObject *
PyvtkGlyph3DMapper_GetRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

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
      tempr = op->vtkGlyph3DMapper::GetRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetOrient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOrient(temp0);
      }
    else
      {
      op->vtkGlyph3DMapper::SetOrient(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetOrient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOrient();
      }
    else
      {
      tempr = op->vtkGlyph3DMapper::GetOrient();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_OrientOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OrientOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OrientOn();
      }
    else
      {
      op->vtkGlyph3DMapper::OrientOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_OrientOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OrientOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OrientOff();
      }
    else
      {
      op->vtkGlyph3DMapper::OrientOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetOrientationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOrientationMode(temp0);
      }
    else
      {
      op->vtkGlyph3DMapper::SetOrientationMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetOrientationModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOrientationModeMinValue();
      }
    else
      {
      tempr = op->vtkGlyph3DMapper::GetOrientationModeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetOrientationModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOrientationModeMaxValue();
      }
    else
      {
      tempr = op->vtkGlyph3DMapper::GetOrientationModeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetOrientationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOrientationMode();
      }
    else
      {
      tempr = op->vtkGlyph3DMapper::GetOrientationMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetOrientationModeToDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationModeToDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOrientationModeToDirection();
      }
    else
      {
      op->vtkGlyph3DMapper::SetOrientationModeToDirection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetOrientationModeToRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationModeToRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOrientationModeToRotation();
      }
    else
      {
      op->vtkGlyph3DMapper::SetOrientationModeToRotation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetOrientationModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOrientationModeAsString();
      }
    else
      {
      tempr = op->vtkGlyph3DMapper::GetOrientationModeAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetClamping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClamping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetClamping(temp0);
      }
    else
      {
      op->vtkGlyph3DMapper::SetClamping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetClamping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClamping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetClamping();
      }
    else
      {
      tempr = op->vtkGlyph3DMapper::GetClamping();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_ClampingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClampingOn();
      }
    else
      {
      op->vtkGlyph3DMapper::ClampingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_ClampingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClampingOff();
      }
    else
      {
      op->vtkGlyph3DMapper::ClampingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetSourceIndexing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceIndexing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSourceIndexing(temp0);
      }
    else
      {
      op->vtkGlyph3DMapper::SetSourceIndexing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetSourceIndexing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSourceIndexing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSourceIndexing();
      }
    else
      {
      tempr = op->vtkGlyph3DMapper::GetSourceIndexing();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SourceIndexingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SourceIndexingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SourceIndexingOn();
      }
    else
      {
      op->vtkGlyph3DMapper::SourceIndexingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SourceIndexingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SourceIndexingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SourceIndexingOff();
      }
    else
      {
      op->vtkGlyph3DMapper::SourceIndexingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

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
      op->vtkGlyph3DMapper::GetBounds(temp0);
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
PyvtkGlyph3DMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkActor *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
    {
    if (ap.IsBound())
      {
      op->Render(temp0, temp1);
      }
    else
      {
      op->vtkGlyph3DMapper::Render(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetNestedDisplayLists(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNestedDisplayLists");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNestedDisplayLists(temp0);
      }
    else
      {
      op->vtkGlyph3DMapper::SetNestedDisplayLists(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetNestedDisplayLists(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNestedDisplayLists");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNestedDisplayLists();
      }
    else
      {
      tempr = op->vtkGlyph3DMapper::GetNestedDisplayLists();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_NestedDisplayListsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NestedDisplayListsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NestedDisplayListsOn();
      }
    else
      {
      op->vtkGlyph3DMapper::NestedDisplayListsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_NestedDisplayListsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NestedDisplayListsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NestedDisplayListsOff();
      }
    else
      {
      op->vtkGlyph3DMapper::NestedDisplayListsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetMasking(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMasking");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMasking(temp0);
      }
    else
      {
      op->vtkGlyph3DMapper::SetMasking(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetMasking(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMasking");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMasking();
      }
    else
      {
      tempr = op->vtkGlyph3DMapper::GetMasking();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_MaskingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MaskingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MaskingOn();
      }
    else
      {
      op->vtkGlyph3DMapper::MaskingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_MaskingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MaskingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MaskingOff();
      }
    else
      {
      op->vtkGlyph3DMapper::MaskingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetMaskArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaskArray(temp0);
      }
    else
      {
      op->vtkGlyph3DMapper::SetMaskArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGlyph3DMapper_SetMaskArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaskArray(temp0);
      }
    else
      {
      op->vtkGlyph3DMapper::SetMaskArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGlyph3DMapper_SetMaskArray_Methods[] = {
  {NULL, PyvtkGlyph3DMapper_SetMaskArray_s1, 1,
   (char*)"@z"},
  {NULL, PyvtkGlyph3DMapper_SetMaskArray_s2, 1,
   (char*)"@i"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkGlyph3DMapper_SetMaskArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkGlyph3DMapper_SetMaskArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetMaskArray");
  return NULL;
}



static PyObject *
PyvtkGlyph3DMapper_SetOrientationArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOrientationArray(temp0);
      }
    else
      {
      op->vtkGlyph3DMapper::SetOrientationArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGlyph3DMapper_SetOrientationArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOrientationArray(temp0);
      }
    else
      {
      op->vtkGlyph3DMapper::SetOrientationArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGlyph3DMapper_SetOrientationArray_Methods[] = {
  {NULL, PyvtkGlyph3DMapper_SetOrientationArray_s1, 1,
   (char*)"@z"},
  {NULL, PyvtkGlyph3DMapper_SetOrientationArray_s2, 1,
   (char*)"@i"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkGlyph3DMapper_SetOrientationArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkGlyph3DMapper_SetOrientationArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOrientationArray");
  return NULL;
}



static PyObject *
PyvtkGlyph3DMapper_SetScaleArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScaleArray(temp0);
      }
    else
      {
      op->vtkGlyph3DMapper::SetScaleArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGlyph3DMapper_SetScaleArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScaleArray(temp0);
      }
    else
      {
      op->vtkGlyph3DMapper::SetScaleArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGlyph3DMapper_SetScaleArray_Methods[] = {
  {NULL, PyvtkGlyph3DMapper_SetScaleArray_s1, 1,
   (char*)"@z"},
  {NULL, PyvtkGlyph3DMapper_SetScaleArray_s2, 1,
   (char*)"@i"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkGlyph3DMapper_SetScaleArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkGlyph3DMapper_SetScaleArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetScaleArray");
  return NULL;
}



static PyObject *
PyvtkGlyph3DMapper_SetSourceIndexArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceIndexArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSourceIndexArray(temp0);
      }
    else
      {
      op->vtkGlyph3DMapper::SetSourceIndexArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGlyph3DMapper_SetSourceIndexArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceIndexArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSourceIndexArray(temp0);
      }
    else
      {
      op->vtkGlyph3DMapper::SetSourceIndexArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGlyph3DMapper_SetSourceIndexArray_Methods[] = {
  {NULL, PyvtkGlyph3DMapper_SetSourceIndexArray_s1, 1,
   (char*)"@z"},
  {NULL, PyvtkGlyph3DMapper_SetSourceIndexArray_s2, 1,
   (char*)"@i"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkGlyph3DMapper_SetSourceIndexArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkGlyph3DMapper_SetSourceIndexArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSourceIndexArray");
  return NULL;
}



static PyObject *
PyvtkGlyph3DMapper_SetSelectionColorId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionColorId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSelectionColorId(temp0);
      }
    else
      {
      op->vtkGlyph3DMapper::SetSelectionColorId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetSelectionColorId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionColorId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  unsigned int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectionColorId();
      }
    else
      {
      tempr = op->vtkGlyph3DMapper::GetSelectionColorId();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetSelectMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSelectMode(temp0);
      }
    else
      {
      op->vtkGlyph3DMapper::SetSelectMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetSupportsSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSupportsSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSupportsSelection();
      }
    else
      {
      tempr = op->vtkGlyph3DMapper::GetSupportsSelection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGlyph3DMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkGlyph3DMapper_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGlyph3DMapper_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGlyph3DMapper_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGlyph3DMapper\nC++: vtkGlyph3DMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGlyph3DMapper_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGlyph3DMapper\nC++: vtkGlyph3DMapper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSourceConnection", PyvtkGlyph3DMapper_SetSourceConnection, 1,
   (char*)"V.SetSourceConnection(int, vtkAlgorithmOutput)\nC++: void SetSourceConnection(int idx,\n    vtkAlgorithmOutput *algOutput)\nV.SetSourceConnection(vtkAlgorithmOutput)\nC++: void SetSourceConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify a source object at a specified table location. New style.\nSource connection is stored in port 1. This method is equivalent\nto SetInputConnection(1, id, outputPort).\n"},
  {(char*)"SetSource", PyvtkGlyph3DMapper_SetSource, 1,
   (char*)"V.SetSource(int, vtkPolyData)\nC++: void SetSource(int idx, vtkPolyData *pd)\nV.SetSource(vtkPolyData)\nC++: void SetSource(vtkPolyData *pd)\n\nSpecify a source object at a specified table location.\n"},
  {(char*)"GetSource", PyvtkGlyph3DMapper_GetSource, 1,
   (char*)"V.GetSource(int) -> vtkPolyData\nC++: vtkPolyData *GetSource(int idx=0)\n\nGet a pointer to a source object at a specified table location.\n"},
  {(char*)"SetScaling", PyvtkGlyph3DMapper_SetScaling, 1,
   (char*)"V.SetScaling(bool)\nC++: void SetScaling(bool a)\n\nTurn on/off scaling of source geometry. When turned on,\nScaleFactor controls the scale applied. To scale with some data\narray, ScaleMode should be set accordingly.\n"},
  {(char*)"ScalingOn", PyvtkGlyph3DMapper_ScalingOn, 1,
   (char*)"V.ScalingOn()\nC++: void ScalingOn()\n\nTurn on/off scaling of source geometry. When turned on,\nScaleFactor controls the scale applied. To scale with some data\narray, ScaleMode should be set accordingly.\n"},
  {(char*)"ScalingOff", PyvtkGlyph3DMapper_ScalingOff, 1,
   (char*)"V.ScalingOff()\nC++: void ScalingOff()\n\nTurn on/off scaling of source geometry. When turned on,\nScaleFactor controls the scale applied. To scale with some data\narray, ScaleMode should be set accordingly.\n"},
  {(char*)"GetScaling", PyvtkGlyph3DMapper_GetScaling, 1,
   (char*)"V.GetScaling() -> bool\nC++: bool GetScaling()\n\nTurn on/off scaling of source geometry. When turned on,\nScaleFactor controls the scale applied. To scale with some data\narray, ScaleMode should be set accordingly.\n"},
  {(char*)"SetScaleMode", PyvtkGlyph3DMapper_SetScaleMode, 1,
   (char*)"V.SetScaleMode(int)\nC++: void SetScaleMode(int a)\n\nEither scale by individual components (SCALE_BY_COMPONENTS) or\nmagnitude (SCALE_BY_MAGNITUDE) of the chosen array to SCALE with\nor disable scaling using data array all together\n(NO_DATA_SCALING). Default is NO_DATA_SCALING.\n"},
  {(char*)"GetScaleMode", PyvtkGlyph3DMapper_GetScaleMode, 1,
   (char*)"V.GetScaleMode() -> int\nC++: int GetScaleMode()\n\nEither scale by individual components (SCALE_BY_COMPONENTS) or\nmagnitude (SCALE_BY_MAGNITUDE) of the chosen array to SCALE with\nor disable scaling using data array all together\n(NO_DATA_SCALING). Default is NO_DATA_SCALING.\n"},
  {(char*)"SetScaleFactor", PyvtkGlyph3DMapper_SetScaleFactor, 1,
   (char*)"V.SetScaleFactor(float)\nC++: void SetScaleFactor(double a)\n\nSpecify scale factor to scale object by. This is used only when\nScaling is On.\n"},
  {(char*)"GetScaleFactor", PyvtkGlyph3DMapper_GetScaleFactor, 1,
   (char*)"V.GetScaleFactor() -> float\nC++: double GetScaleFactor()\n\nSpecify scale factor to scale object by. This is used only when\nScaling is On.\n"},
  {(char*)"SetScaleModeToScaleByMagnitude", PyvtkGlyph3DMapper_SetScaleModeToScaleByMagnitude, 1,
   (char*)"V.SetScaleModeToScaleByMagnitude()\nC++: void SetScaleModeToScaleByMagnitude()\n\n"},
  {(char*)"SetScaleModeToScaleByVectorComponents", PyvtkGlyph3DMapper_SetScaleModeToScaleByVectorComponents, 1,
   (char*)"V.SetScaleModeToScaleByVectorComponents()\nC++: void SetScaleModeToScaleByVectorComponents()\n\n"},
  {(char*)"SetScaleModeToNoDataScaling", PyvtkGlyph3DMapper_SetScaleModeToNoDataScaling, 1,
   (char*)"V.SetScaleModeToNoDataScaling()\nC++: void SetScaleModeToNoDataScaling()\n\n"},
  {(char*)"GetScaleModeAsString", PyvtkGlyph3DMapper_GetScaleModeAsString, 1,
   (char*)"V.GetScaleModeAsString() -> string\nC++: const char *GetScaleModeAsString()\n\n"},
  {(char*)"SetRange", PyvtkGlyph3DMapper_SetRange, 1,
   (char*)"V.SetRange(float, float)\nC++: void SetRange(double, double)\nV.SetRange((float, float))\nC++: void SetRange(double a[2])\n\n"},
  {(char*)"GetRange", PyvtkGlyph3DMapper_GetRange, 1,
   (char*)"V.GetRange() -> (float, float)\nC++: double *GetRange()\n\nSpecify range to map scalar values into.\n"},
  {(char*)"SetOrient", PyvtkGlyph3DMapper_SetOrient, 1,
   (char*)"V.SetOrient(bool)\nC++: void SetOrient(bool a)\n\nTurn on/off orienting of input geometry. When turned on, the\norientation array specified using SetOrientationArray() will be\nused.\n"},
  {(char*)"GetOrient", PyvtkGlyph3DMapper_GetOrient, 1,
   (char*)"V.GetOrient() -> bool\nC++: bool GetOrient()\n\nTurn on/off orienting of input geometry. When turned on, the\norientation array specified using SetOrientationArray() will be\nused.\n"},
  {(char*)"OrientOn", PyvtkGlyph3DMapper_OrientOn, 1,
   (char*)"V.OrientOn()\nC++: void OrientOn()\n\nTurn on/off orienting of input geometry. When turned on, the\norientation array specified using SetOrientationArray() will be\nused.\n"},
  {(char*)"OrientOff", PyvtkGlyph3DMapper_OrientOff, 1,
   (char*)"V.OrientOff()\nC++: void OrientOff()\n\nTurn on/off orienting of input geometry. When turned on, the\norientation array specified using SetOrientationArray() will be\nused.\n"},
  {(char*)"SetOrientationMode", PyvtkGlyph3DMapper_SetOrientationMode, 1,
   (char*)"V.SetOrientationMode(int)\nC++: void SetOrientationMode(int)\n\nOrientation mode indicates if the OrientationArray provides the\ndirection vector for the orientation or the rotations around each\naxes. Default is DIRECTION\n"},
  {(char*)"GetOrientationModeMinValue", PyvtkGlyph3DMapper_GetOrientationModeMinValue, 1,
   (char*)"V.GetOrientationModeMinValue() -> int\nC++: int GetOrientationModeMinValue()\n\nOrientation mode indicates if the OrientationArray provides the\ndirection vector for the orientation or the rotations around each\naxes. Default is DIRECTION\n"},
  {(char*)"GetOrientationModeMaxValue", PyvtkGlyph3DMapper_GetOrientationModeMaxValue, 1,
   (char*)"V.GetOrientationModeMaxValue() -> int\nC++: int GetOrientationModeMaxValue()\n\nOrientation mode indicates if the OrientationArray provides the\ndirection vector for the orientation or the rotations around each\naxes. Default is DIRECTION\n"},
  {(char*)"GetOrientationMode", PyvtkGlyph3DMapper_GetOrientationMode, 1,
   (char*)"V.GetOrientationMode() -> int\nC++: int GetOrientationMode()\n\nOrientation mode indicates if the OrientationArray provides the\ndirection vector for the orientation or the rotations around each\naxes. Default is DIRECTION\n"},
  {(char*)"SetOrientationModeToDirection", PyvtkGlyph3DMapper_SetOrientationModeToDirection, 1,
   (char*)"V.SetOrientationModeToDirection()\nC++: void SetOrientationModeToDirection()\n\nOrientation mode indicates if the OrientationArray provides the\ndirection vector for the orientation or the rotations around each\naxes. Default is DIRECTION\n"},
  {(char*)"SetOrientationModeToRotation", PyvtkGlyph3DMapper_SetOrientationModeToRotation, 1,
   (char*)"V.SetOrientationModeToRotation()\nC++: void SetOrientationModeToRotation()\n\nOrientation mode indicates if the OrientationArray provides the\ndirection vector for the orientation or the rotations around each\naxes. Default is DIRECTION\n"},
  {(char*)"GetOrientationModeAsString", PyvtkGlyph3DMapper_GetOrientationModeAsString, 1,
   (char*)"V.GetOrientationModeAsString() -> string\nC++: const char *GetOrientationModeAsString()\n\nOrientation mode indicates if the OrientationArray provides the\ndirection vector for the orientation or the rotations around each\naxes. Default is DIRECTION\n"},
  {(char*)"SetClamping", PyvtkGlyph3DMapper_SetClamping, 1,
   (char*)"V.SetClamping(bool)\nC++: void SetClamping(bool a)\n\nTurn on/off clamping of data values to scale with to the\nspecified range.\n"},
  {(char*)"GetClamping", PyvtkGlyph3DMapper_GetClamping, 1,
   (char*)"V.GetClamping() -> bool\nC++: bool GetClamping()\n\nTurn on/off clamping of data values to scale with to the\nspecified range.\n"},
  {(char*)"ClampingOn", PyvtkGlyph3DMapper_ClampingOn, 1,
   (char*)"V.ClampingOn()\nC++: void ClampingOn()\n\nTurn on/off clamping of data values to scale with to the\nspecified range.\n"},
  {(char*)"ClampingOff", PyvtkGlyph3DMapper_ClampingOff, 1,
   (char*)"V.ClampingOff()\nC++: void ClampingOff()\n\nTurn on/off clamping of data values to scale with to the\nspecified range.\n"},
  {(char*)"SetSourceIndexing", PyvtkGlyph3DMapper_SetSourceIndexing, 1,
   (char*)"V.SetSourceIndexing(bool)\nC++: void SetSourceIndexing(bool a)\n\nEnable/disable indexing into table of the glyph sources. When\ndisabled, only the 1st source input will be used to generate the\nglyph. Otherwise the source index array will be used to select\nthe glyph source. The source index array can be specified using\nSetSourceIndexArray().\n"},
  {(char*)"GetSourceIndexing", PyvtkGlyph3DMapper_GetSourceIndexing, 1,
   (char*)"V.GetSourceIndexing() -> bool\nC++: bool GetSourceIndexing()\n\nEnable/disable indexing into table of the glyph sources. When\ndisabled, only the 1st source input will be used to generate the\nglyph. Otherwise the source index array will be used to select\nthe glyph source. The source index array can be specified using\nSetSourceIndexArray().\n"},
  {(char*)"SourceIndexingOn", PyvtkGlyph3DMapper_SourceIndexingOn, 1,
   (char*)"V.SourceIndexingOn()\nC++: void SourceIndexingOn()\n\nEnable/disable indexing into table of the glyph sources. When\ndisabled, only the 1st source input will be used to generate the\nglyph. Otherwise the source index array will be used to select\nthe glyph source. The source index array can be specified using\nSetSourceIndexArray().\n"},
  {(char*)"SourceIndexingOff", PyvtkGlyph3DMapper_SourceIndexingOff, 1,
   (char*)"V.SourceIndexingOff()\nC++: void SourceIndexingOff()\n\nEnable/disable indexing into table of the glyph sources. When\ndisabled, only the 1st source input will be used to generate the\nglyph. Otherwise the source index array will be used to select\nthe glyph source. The source index array can be specified using\nSetSourceIndexArray().\n"},
  {(char*)"GetBounds", PyvtkGlyph3DMapper_GetBounds, 1,
   (char*)"V.GetBounds([float, float, float, float, float, float])\nC++: virtual void GetBounds(double bounds[6])\n\nSame as superclass. Appear again to stop warnings about hidden\nmethod.\n"},
  {(char*)"Render", PyvtkGlyph3DMapper_Render, 1,
   (char*)"V.Render(vtkRenderer, vtkActor)\nC++: virtual void Render(vtkRenderer *ren, vtkActor *act)\n\nAll the work is done is derived classes.\n"},
  {(char*)"SetNestedDisplayLists", PyvtkGlyph3DMapper_SetNestedDisplayLists, 1,
   (char*)"V.SetNestedDisplayLists(bool)\nC++: void SetNestedDisplayLists(bool a)\n\nIf immediate mode is off, if NestedDisplayLists is false, only\nthe mappers of each glyph use display lists. If true, in\naddition, matrices transforms and color per glyph are also in a\nparent display list. Not relevant if immediate mode is on. For\ndebugging/profiling purpose. Initial value is true.\n"},
  {(char*)"GetNestedDisplayLists", PyvtkGlyph3DMapper_GetNestedDisplayLists, 1,
   (char*)"V.GetNestedDisplayLists() -> bool\nC++: bool GetNestedDisplayLists()\n\nIf immediate mode is off, if NestedDisplayLists is false, only\nthe mappers of each glyph use display lists. If true, in\naddition, matrices transforms and color per glyph are also in a\nparent display list. Not relevant if immediate mode is on. For\ndebugging/profiling purpose. Initial value is true.\n"},
  {(char*)"NestedDisplayListsOn", PyvtkGlyph3DMapper_NestedDisplayListsOn, 1,
   (char*)"V.NestedDisplayListsOn()\nC++: void NestedDisplayListsOn()\n\nIf immediate mode is off, if NestedDisplayLists is false, only\nthe mappers of each glyph use display lists. If true, in\naddition, matrices transforms and color per glyph are also in a\nparent display list. Not relevant if immediate mode is on. For\ndebugging/profiling purpose. Initial value is true.\n"},
  {(char*)"NestedDisplayListsOff", PyvtkGlyph3DMapper_NestedDisplayListsOff, 1,
   (char*)"V.NestedDisplayListsOff()\nC++: void NestedDisplayListsOff()\n\nIf immediate mode is off, if NestedDisplayLists is false, only\nthe mappers of each glyph use display lists. If true, in\naddition, matrices transforms and color per glyph are also in a\nparent display list. Not relevant if immediate mode is on. For\ndebugging/profiling purpose. Initial value is true.\n"},
  {(char*)"SetMasking", PyvtkGlyph3DMapper_SetMasking, 1,
   (char*)"V.SetMasking(bool)\nC++: void SetMasking(bool a)\n\nTells the mapper to skip glyphing input points that haves false\nvalues in the mask array. If there is no mask array (id access\nmode is set and there is no such id, or array name access mode is\nset and the there is no such name), masking is silently ignored.\nA mask array is a vtkBitArray with only one component. Initial\nvalue is false.\n"},
  {(char*)"GetMasking", PyvtkGlyph3DMapper_GetMasking, 1,
   (char*)"V.GetMasking() -> bool\nC++: bool GetMasking()\n\nTells the mapper to skip glyphing input points that haves false\nvalues in the mask array. If there is no mask array (id access\nmode is set and there is no such id, or array name access mode is\nset and the there is no such name), masking is silently ignored.\nA mask array is a vtkBitArray with only one component. Initial\nvalue is false.\n"},
  {(char*)"MaskingOn", PyvtkGlyph3DMapper_MaskingOn, 1,
   (char*)"V.MaskingOn()\nC++: void MaskingOn()\n\nTells the mapper to skip glyphing input points that haves false\nvalues in the mask array. If there is no mask array (id access\nmode is set and there is no such id, or array name access mode is\nset and the there is no such name), masking is silently ignored.\nA mask array is a vtkBitArray with only one component. Initial\nvalue is false.\n"},
  {(char*)"MaskingOff", PyvtkGlyph3DMapper_MaskingOff, 1,
   (char*)"V.MaskingOff()\nC++: void MaskingOff()\n\nTells the mapper to skip glyphing input points that haves false\nvalues in the mask array. If there is no mask array (id access\nmode is set and there is no such id, or array name access mode is\nset and the there is no such name), masking is silently ignored.\nA mask array is a vtkBitArray with only one component. Initial\nvalue is false.\n"},
  {(char*)"SetMaskArray", PyvtkGlyph3DMapper_SetMaskArray, 1,
   (char*)"V.SetMaskArray(string)\nC++: void SetMaskArray(const char *maskarrayname)\nV.SetMaskArray(int)\nC++: void SetMaskArray(int fieldAttributeType)\n\nSet the name of the point array to use as a mask for generating\nthe glyphs. This is a convenience method. The same effect can be\nachieved by using SetInputArrayToProcess(vtkGlyph3DMapper::MASK,\n0, 0,\n   vtkDataObject::FIELD_ASSOCIATION_POINTS, maskarrayname)\n"},
  {(char*)"SetOrientationArray", PyvtkGlyph3DMapper_SetOrientationArray, 1,
   (char*)"V.SetOrientationArray(string)\nC++: void SetOrientationArray(const char *orientationarrayname)\nV.SetOrientationArray(int)\nC++: void SetOrientationArray(int fieldAttributeType)\n\nTells the mapper to use an orientation array if Orient is true.\nAn orientation array is a vtkDataArray with 3 components. The\nfirst component is the angle of rotation along the X axis. The\nsecond component is the angle of rotation along the Y axis. The\nthird component is the angle of rotation along the Z axis.\nOrientation is specified in X,Y,Z order but the rotations are\nperformed in Z,X an Y. This definition is compliant with\nSetOrientation method on vtkProp3D. By using vector or normal\nthere is a degree of freedom or rotation left (underconstrained).\nWith the orientation array, there is no degree of freedom left.\nThis is convenience method. The same effect can be achieved by\nusing SetInputArrayToProcess(vtkGlyph3DMapper::ORIENTATION, 0, 0,\n   vtkDataObject::FIELD_ASSOCIATION_POINTS,\norientationarrayname);\n"},
  {(char*)"SetScaleArray", PyvtkGlyph3DMapper_SetScaleArray, 1,
   (char*)"V.SetScaleArray(string)\nC++: void SetScaleArray(const char *scalarsarrayname)\nV.SetScaleArray(int)\nC++: void SetScaleArray(int fieldAttributeType)\n\nConvenience method to set the array to scale with. This is same\nas calling SetInputArrayToProcess(vtkGlyph3DMapper::SCALE, 0, 0,\n   vtkDataObject::FIELD_ASSOCIATION_POINTS, scalarsarrayname).\n"},
  {(char*)"SetSourceIndexArray", PyvtkGlyph3DMapper_SetSourceIndexArray, 1,
   (char*)"V.SetSourceIndexArray(string)\nC++: void SetSourceIndexArray(const char *arrayname)\nV.SetSourceIndexArray(int)\nC++: void SetSourceIndexArray(int fieldAttributeType)\n\nConvenience method to set the array to use as index within the\nsources. This is same as calling\nSetInputArrayToProcess(vtkGlyph3DMapper::SOURCE_INDEX, 0, 0,\n   vtkDataObject::FIELD_ASSOCIATION_POINTS, arrayname).\n"},
  {(char*)"SetSelectionColorId", PyvtkGlyph3DMapper_SetSelectionColorId, 1,
   (char*)"V.SetSelectionColorId(int)\nC++: void SetSelectionColorId(unsigned int a)\n\nFor selection by color id mode (not for end-user, called by\nvtkGlyphSelectionRenderMode). 0 is reserved for miss. it has to\nstart at 1. Initial value is 1.\n"},
  {(char*)"GetSelectionColorId", PyvtkGlyph3DMapper_GetSelectionColorId, 1,
   (char*)"V.GetSelectionColorId() -> int\nC++: unsigned int GetSelectionColorId()\n\nFor selection by color id mode (not for end-user, called by\nvtkGlyphSelectionRenderMode). 0 is reserved for miss. it has to\nstart at 1. Initial value is 1.\n"},
  {(char*)"SetSelectMode", PyvtkGlyph3DMapper_SetSelectMode, 1,
   (char*)"V.SetSelectMode(int)\nC++: void SetSelectMode(int a)\n\nCalled by vtkGlyphSelectionRenderMode.\n"},
  {(char*)"GetSupportsSelection", PyvtkGlyph3DMapper_GetSupportsSelection, 1,
   (char*)"V.GetSupportsSelection() -> bool\nC++: virtual bool GetSupportsSelection()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS Used by\nvtkHardwareSelector to determine if the prop supports hardware\nselection.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGlyph3DMapper_StaticNew()
{
  return vtkGlyph3DMapper::New();
}

PyObject *PyVTKClass_vtkGlyph3DMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGlyph3DMapper_StaticNew,
    PyvtkGlyph3DMapper_Methods,
    "vtkGlyph3DMapper", modulename,
    NULL, NULL,
    PyvtkGlyph3DMapper_Doc(),
    PyVTKClass_vtkMapperNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"SCALE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"SOURCE_INDEX", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"MASK", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"ORIENTATION", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"NO_DATA_SCALING", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"SCALE_BY_MAGNITUDE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"SCALE_BY_COMPONENTS", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"DIRECTION", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"ROTATION", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkGlyph3DMapper_Doc()
{
  static const char *docstring[] = {
    "vtkGlyph3DMapper - vtkGlyph3D on the GPU.\n\n",
    "Superclass: vtkMapper\n\n",
    "Do the same job than vtkGlyph3D but on the GPU. For this reason, it\nis a mapper not a vtkPolyDataAlgorithm. Also, some methods of\nvtkGlyph3D don't make sense in vtkGlyph3DMapper: GeneratePointIds,\nold-style SetSource, PointIdsName, IsPointVisible.\n\nImplementation:\n\nSee Also:\n\nvtkGlyph3D\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGlyph3DMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGlyph3DMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGlyph3DMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

