// python wrapper for vtkGlyph3D
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
#include "vtkGlyph3D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGlyph3D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGlyph3D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGlyph3DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGlyph3DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkGlyph3D_Doc();


static PyObject *
PyvtkGlyph3D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

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
      tempr = op->vtkGlyph3D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

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
      tempr = op->vtkGlyph3D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  vtkGlyph3D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGlyph3D::NewInstance();
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
PyvtkGlyph3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGlyph3D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGlyph3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetSource_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

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
      op->vtkGlyph3D::SetSource(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGlyph3D_SetSource_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

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
      op->vtkGlyph3D::SetSource(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGlyph3D_SetSource(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkGlyph3D_SetSource_s1(self, args);
    case 2:
      return PyvtkGlyph3D_SetSource_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSource");
  return NULL;
}



static PyObject *
PyvtkGlyph3D_SetSourceConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

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
      op->vtkGlyph3D::SetSourceConnection(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGlyph3D_SetSourceConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

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
      op->vtkGlyph3D::SetSourceConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGlyph3D_SetSourceConnection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkGlyph3D_SetSourceConnection_s1(self, args);
    case 1:
      return PyvtkGlyph3D_SetSourceConnection_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSourceConnection");
  return NULL;
}



static PyObject *
PyvtkGlyph3D_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

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
      tempr = op->vtkGlyph3D::GetSource(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

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
      op->vtkGlyph3D::SetScaling(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_ScalingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalingOn();
      }
    else
      {
      op->vtkGlyph3D::ScalingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_ScalingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalingOff();
      }
    else
      {
      op->vtkGlyph3D::ScalingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

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
      tempr = op->vtkGlyph3D::GetScaling();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetScaleMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

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
      op->vtkGlyph3D::SetScaleMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetScaleMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

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
      tempr = op->vtkGlyph3D::GetScaleMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetScaleModeToScaleByScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleModeToScaleByScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScaleModeToScaleByScalar();
      }
    else
      {
      op->vtkGlyph3D::SetScaleModeToScaleByScalar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetScaleModeToScaleByVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleModeToScaleByVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScaleModeToScaleByVector();
      }
    else
      {
      op->vtkGlyph3D::SetScaleModeToScaleByVector();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetScaleModeToScaleByVectorComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleModeToScaleByVectorComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScaleModeToScaleByVectorComponents();
      }
    else
      {
      op->vtkGlyph3D::SetScaleModeToScaleByVectorComponents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetScaleModeToDataScalingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleModeToDataScalingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScaleModeToDataScalingOff();
      }
    else
      {
      op->vtkGlyph3D::SetScaleModeToDataScalingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetScaleModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

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
      tempr = op->vtkGlyph3D::GetScaleModeAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColorMode(temp0);
      }
    else
      {
      op->vtkGlyph3D::SetColorMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColorMode();
      }
    else
      {
      tempr = op->vtkGlyph3D::GetColorMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetColorModeToColorByScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToColorByScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetColorModeToColorByScale();
      }
    else
      {
      op->vtkGlyph3D::SetColorModeToColorByScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetColorModeToColorByScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToColorByScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetColorModeToColorByScalar();
      }
    else
      {
      op->vtkGlyph3D::SetColorModeToColorByScalar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetColorModeToColorByVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToColorByVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetColorModeToColorByVector();
      }
    else
      {
      op->vtkGlyph3D::SetColorModeToColorByVector();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetColorModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColorModeAsString();
      }
    else
      {
      tempr = op->vtkGlyph3D::GetColorModeAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

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
      op->vtkGlyph3D::SetScaleFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

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
      tempr = op->vtkGlyph3D::GetScaleFactor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

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
      op->vtkGlyph3D::SetRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGlyph3D_SetRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

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
      op->vtkGlyph3D::SetRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGlyph3D_SetRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkGlyph3D_SetRange_s1(self, args);
    case 1:
      return PyvtkGlyph3D_SetRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetRange");
  return NULL;
}



static PyObject *
PyvtkGlyph3D_GetRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

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
      tempr = op->vtkGlyph3D::GetRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetOrient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  int temp0;
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
      op->vtkGlyph3D::SetOrient(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_OrientOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OrientOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OrientOn();
      }
    else
      {
      op->vtkGlyph3D::OrientOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_OrientOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OrientOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OrientOff();
      }
    else
      {
      op->vtkGlyph3D::OrientOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetOrient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOrient();
      }
    else
      {
      tempr = op->vtkGlyph3D::GetOrient();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetClamping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClamping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  int temp0;
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
      op->vtkGlyph3D::SetClamping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_ClampingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClampingOn();
      }
    else
      {
      op->vtkGlyph3D::ClampingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_ClampingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClampingOff();
      }
    else
      {
      op->vtkGlyph3D::ClampingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetClamping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClamping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetClamping();
      }
    else
      {
      tempr = op->vtkGlyph3D::GetClamping();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetVectorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVectorMode(temp0);
      }
    else
      {
      op->vtkGlyph3D::SetVectorMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetVectorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVectorMode();
      }
    else
      {
      tempr = op->vtkGlyph3D::GetVectorMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetVectorModeToUseVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorModeToUseVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetVectorModeToUseVector();
      }
    else
      {
      op->vtkGlyph3D::SetVectorModeToUseVector();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetVectorModeToUseNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorModeToUseNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetVectorModeToUseNormal();
      }
    else
      {
      op->vtkGlyph3D::SetVectorModeToUseNormal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetVectorModeToVectorRotationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorModeToVectorRotationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetVectorModeToVectorRotationOff();
      }
    else
      {
      op->vtkGlyph3D::SetVectorModeToVectorRotationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetVectorModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVectorModeAsString();
      }
    else
      {
      tempr = op->vtkGlyph3D::GetVectorModeAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetIndexMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIndexMode(temp0);
      }
    else
      {
      op->vtkGlyph3D::SetIndexMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetIndexMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIndexMode();
      }
    else
      {
      tempr = op->vtkGlyph3D::GetIndexMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetIndexModeToScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexModeToScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIndexModeToScalar();
      }
    else
      {
      op->vtkGlyph3D::SetIndexModeToScalar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetIndexModeToVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexModeToVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIndexModeToVector();
      }
    else
      {
      op->vtkGlyph3D::SetIndexModeToVector();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetIndexModeToOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexModeToOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIndexModeToOff();
      }
    else
      {
      op->vtkGlyph3D::SetIndexModeToOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetIndexModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIndexModeAsString();
      }
    else
      {
      tempr = op->vtkGlyph3D::GetIndexModeAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetGeneratePointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeneratePointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGeneratePointIds(temp0);
      }
    else
      {
      op->vtkGlyph3D::SetGeneratePointIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetGeneratePointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeneratePointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGeneratePointIds();
      }
    else
      {
      tempr = op->vtkGlyph3D::GetGeneratePointIds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_GeneratePointIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePointIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GeneratePointIdsOn();
      }
    else
      {
      op->vtkGlyph3D::GeneratePointIdsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_GeneratePointIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePointIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GeneratePointIdsOff();
      }
    else
      {
      op->vtkGlyph3D::GeneratePointIdsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetPointIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPointIdsName(temp0);
      }
    else
      {
      op->vtkGlyph3D::SetPointIdsName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetPointIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointIdsName();
      }
    else
      {
      tempr = op->vtkGlyph3D::GetPointIdsName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetFillCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFillCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFillCellData(temp0);
      }
    else
      {
      op->vtkGlyph3D::SetFillCellData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetFillCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFillCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFillCellData();
      }
    else
      {
      tempr = op->vtkGlyph3D::GetFillCellData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_FillCellDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillCellDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FillCellDataOn();
      }
    else
      {
      op->vtkGlyph3D::FillCellDataOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_FillCellDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillCellDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FillCellDataOff();
      }
    else
      {
      op->vtkGlyph3D::FillCellDataOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_IsPointVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPointVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  vtkDataSet *temp0 = NULL;
  vtkIdType temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->IsPointVisible(temp0, temp1);
      }
    else
      {
      tempr = op->vtkGlyph3D::IsPointVisible(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetSourceTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  vtkTransform *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTransform"))
    {
    if (ap.IsBound())
      {
      op->SetSourceTransform(temp0);
      }
    else
      {
      op->vtkGlyph3D::SetSourceTransform(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetSourceTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSourceTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  vtkTransform *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSourceTransform();
      }
    else
      {
      tempr = op->vtkGlyph3D::GetSourceTransform();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

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
      tempr = op->vtkGlyph3D::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGlyph3D_Methods[] = {
  {(char*)"GetClassName", PyvtkGlyph3D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGlyph3D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGlyph3D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGlyph3D\nC++: vtkGlyph3D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGlyph3D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGlyph3D\nC++: vtkGlyph3D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSource", PyvtkGlyph3D_SetSource, 1,
   (char*)"V.SetSource(vtkPolyData)\nC++: void SetSource(vtkPolyData *pd)\nV.SetSource(int, vtkPolyData)\nC++: void SetSource(int id, vtkPolyData *pd)\n\nSet the source to use for he glyph. Old style. See\nSetSourceConnection.\n"},
  {(char*)"SetSourceConnection", PyvtkGlyph3D_SetSourceConnection, 1,
   (char*)"V.SetSourceConnection(int, vtkAlgorithmOutput)\nC++: void SetSourceConnection(int id,\n    vtkAlgorithmOutput *algOutput)\nV.SetSourceConnection(vtkAlgorithmOutput)\nC++: void SetSourceConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify a source object at a specified table location. New style.\nSource connection is stored in port 1. This method is equivalent\nto SetInputConnection(1, id, outputPort).\n"},
  {(char*)"GetSource", PyvtkGlyph3D_GetSource, 1,
   (char*)"V.GetSource(int) -> vtkPolyData\nC++: vtkPolyData *GetSource(int id=0)\n\nGet a pointer to a source object at a specified table location.\n"},
  {(char*)"SetScaling", PyvtkGlyph3D_SetScaling, 1,
   (char*)"V.SetScaling(int)\nC++: void SetScaling(int a)\n\nTurn on/off scaling of source geometry.\n"},
  {(char*)"ScalingOn", PyvtkGlyph3D_ScalingOn, 1,
   (char*)"V.ScalingOn()\nC++: void ScalingOn()\n\nTurn on/off scaling of source geometry.\n"},
  {(char*)"ScalingOff", PyvtkGlyph3D_ScalingOff, 1,
   (char*)"V.ScalingOff()\nC++: void ScalingOff()\n\nTurn on/off scaling of source geometry.\n"},
  {(char*)"GetScaling", PyvtkGlyph3D_GetScaling, 1,
   (char*)"V.GetScaling() -> int\nC++: int GetScaling()\n\nTurn on/off scaling of source geometry.\n"},
  {(char*)"SetScaleMode", PyvtkGlyph3D_SetScaleMode, 1,
   (char*)"V.SetScaleMode(int)\nC++: void SetScaleMode(int a)\n\nEither scale by scalar or by vector/normal magnitude.\n"},
  {(char*)"GetScaleMode", PyvtkGlyph3D_GetScaleMode, 1,
   (char*)"V.GetScaleMode() -> int\nC++: int GetScaleMode()\n\nEither scale by scalar or by vector/normal magnitude.\n"},
  {(char*)"SetScaleModeToScaleByScalar", PyvtkGlyph3D_SetScaleModeToScaleByScalar, 1,
   (char*)"V.SetScaleModeToScaleByScalar()\nC++: void SetScaleModeToScaleByScalar()\n\nEither scale by scalar or by vector/normal magnitude.\n"},
  {(char*)"SetScaleModeToScaleByVector", PyvtkGlyph3D_SetScaleModeToScaleByVector, 1,
   (char*)"V.SetScaleModeToScaleByVector()\nC++: void SetScaleModeToScaleByVector()\n\nEither scale by scalar or by vector/normal magnitude.\n"},
  {(char*)"SetScaleModeToScaleByVectorComponents", PyvtkGlyph3D_SetScaleModeToScaleByVectorComponents, 1,
   (char*)"V.SetScaleModeToScaleByVectorComponents()\nC++: void SetScaleModeToScaleByVectorComponents()\n\nEither scale by scalar or by vector/normal magnitude.\n"},
  {(char*)"SetScaleModeToDataScalingOff", PyvtkGlyph3D_SetScaleModeToDataScalingOff, 1,
   (char*)"V.SetScaleModeToDataScalingOff()\nC++: void SetScaleModeToDataScalingOff()\n\nEither scale by scalar or by vector/normal magnitude.\n"},
  {(char*)"GetScaleModeAsString", PyvtkGlyph3D_GetScaleModeAsString, 1,
   (char*)"V.GetScaleModeAsString() -> string\nC++: const char *GetScaleModeAsString()\n\nEither scale by scalar or by vector/normal magnitude.\n"},
  {(char*)"SetColorMode", PyvtkGlyph3D_SetColorMode, 1,
   (char*)"V.SetColorMode(int)\nC++: void SetColorMode(int a)\n\nEither color by scale, scalar or by vector/normal magnitude.\n"},
  {(char*)"GetColorMode", PyvtkGlyph3D_GetColorMode, 1,
   (char*)"V.GetColorMode() -> int\nC++: int GetColorMode()\n\nEither color by scale, scalar or by vector/normal magnitude.\n"},
  {(char*)"SetColorModeToColorByScale", PyvtkGlyph3D_SetColorModeToColorByScale, 1,
   (char*)"V.SetColorModeToColorByScale()\nC++: void SetColorModeToColorByScale()\n\nEither color by scale, scalar or by vector/normal magnitude.\n"},
  {(char*)"SetColorModeToColorByScalar", PyvtkGlyph3D_SetColorModeToColorByScalar, 1,
   (char*)"V.SetColorModeToColorByScalar()\nC++: void SetColorModeToColorByScalar()\n\nEither color by scale, scalar or by vector/normal magnitude.\n"},
  {(char*)"SetColorModeToColorByVector", PyvtkGlyph3D_SetColorModeToColorByVector, 1,
   (char*)"V.SetColorModeToColorByVector()\nC++: void SetColorModeToColorByVector()\n\nEither color by scale, scalar or by vector/normal magnitude.\n"},
  {(char*)"GetColorModeAsString", PyvtkGlyph3D_GetColorModeAsString, 1,
   (char*)"V.GetColorModeAsString() -> string\nC++: const char *GetColorModeAsString()\n\nEither color by scale, scalar or by vector/normal magnitude.\n"},
  {(char*)"SetScaleFactor", PyvtkGlyph3D_SetScaleFactor, 1,
   (char*)"V.SetScaleFactor(float)\nC++: void SetScaleFactor(double a)\n\nSpecify scale factor to scale object by.\n"},
  {(char*)"GetScaleFactor", PyvtkGlyph3D_GetScaleFactor, 1,
   (char*)"V.GetScaleFactor() -> float\nC++: double GetScaleFactor()\n\nSpecify scale factor to scale object by.\n"},
  {(char*)"SetRange", PyvtkGlyph3D_SetRange, 1,
   (char*)"V.SetRange(float, float)\nC++: void SetRange(double, double)\nV.SetRange((float, float))\nC++: void SetRange(double a[2])\n\n"},
  {(char*)"GetRange", PyvtkGlyph3D_GetRange, 1,
   (char*)"V.GetRange() -> (float, float)\nC++: double *GetRange()\n\nSpecify range to map scalar values into.\n"},
  {(char*)"SetOrient", PyvtkGlyph3D_SetOrient, 1,
   (char*)"V.SetOrient(int)\nC++: void SetOrient(int a)\n\nTurn on/off orienting of input geometry along vector/normal.\n"},
  {(char*)"OrientOn", PyvtkGlyph3D_OrientOn, 1,
   (char*)"V.OrientOn()\nC++: void OrientOn()\n\nTurn on/off orienting of input geometry along vector/normal.\n"},
  {(char*)"OrientOff", PyvtkGlyph3D_OrientOff, 1,
   (char*)"V.OrientOff()\nC++: void OrientOff()\n\nTurn on/off orienting of input geometry along vector/normal.\n"},
  {(char*)"GetOrient", PyvtkGlyph3D_GetOrient, 1,
   (char*)"V.GetOrient() -> int\nC++: int GetOrient()\n\nTurn on/off orienting of input geometry along vector/normal.\n"},
  {(char*)"SetClamping", PyvtkGlyph3D_SetClamping, 1,
   (char*)"V.SetClamping(int)\nC++: void SetClamping(int a)\n\nTurn on/off clamping of \"scalar\" values to range. (Scalar value\nmay be\n vector magnitude if ScaleByVector() is enabled.)\n"},
  {(char*)"ClampingOn", PyvtkGlyph3D_ClampingOn, 1,
   (char*)"V.ClampingOn()\nC++: void ClampingOn()\n\nTurn on/off clamping of \"scalar\" values to range. (Scalar value\nmay be\n vector magnitude if ScaleByVector() is enabled.)\n"},
  {(char*)"ClampingOff", PyvtkGlyph3D_ClampingOff, 1,
   (char*)"V.ClampingOff()\nC++: void ClampingOff()\n\nTurn on/off clamping of \"scalar\" values to range. (Scalar value\nmay be\n vector magnitude if ScaleByVector() is enabled.)\n"},
  {(char*)"GetClamping", PyvtkGlyph3D_GetClamping, 1,
   (char*)"V.GetClamping() -> int\nC++: int GetClamping()\n\nTurn on/off clamping of \"scalar\" values to range. (Scalar value\nmay be\n vector magnitude if ScaleByVector() is enabled.)\n"},
  {(char*)"SetVectorMode", PyvtkGlyph3D_SetVectorMode, 1,
   (char*)"V.SetVectorMode(int)\nC++: void SetVectorMode(int a)\n\nSpecify whether to use vector or normal to perform vector\noperations.\n"},
  {(char*)"GetVectorMode", PyvtkGlyph3D_GetVectorMode, 1,
   (char*)"V.GetVectorMode() -> int\nC++: int GetVectorMode()\n\nSpecify whether to use vector or normal to perform vector\noperations.\n"},
  {(char*)"SetVectorModeToUseVector", PyvtkGlyph3D_SetVectorModeToUseVector, 1,
   (char*)"V.SetVectorModeToUseVector()\nC++: void SetVectorModeToUseVector()\n\nSpecify whether to use vector or normal to perform vector\noperations.\n"},
  {(char*)"SetVectorModeToUseNormal", PyvtkGlyph3D_SetVectorModeToUseNormal, 1,
   (char*)"V.SetVectorModeToUseNormal()\nC++: void SetVectorModeToUseNormal()\n\nSpecify whether to use vector or normal to perform vector\noperations.\n"},
  {(char*)"SetVectorModeToVectorRotationOff", PyvtkGlyph3D_SetVectorModeToVectorRotationOff, 1,
   (char*)"V.SetVectorModeToVectorRotationOff()\nC++: void SetVectorModeToVectorRotationOff()\n\nSpecify whether to use vector or normal to perform vector\noperations.\n"},
  {(char*)"GetVectorModeAsString", PyvtkGlyph3D_GetVectorModeAsString, 1,
   (char*)"V.GetVectorModeAsString() -> string\nC++: const char *GetVectorModeAsString()\n\nSpecify whether to use vector or normal to perform vector\noperations.\n"},
  {(char*)"SetIndexMode", PyvtkGlyph3D_SetIndexMode, 1,
   (char*)"V.SetIndexMode(int)\nC++: void SetIndexMode(int a)\n\nIndex into table of sources by scalar, by vector/normal\nmagnitude, or no indexing. If indexing is turned off, then the\nfirst source glyph in the table of glyphs is used. Note that\nindexing mode will only use the InputScalarsSelection array and\nnot the InputColorScalarsSelection as the scalar source if an\narray is specified.\n"},
  {(char*)"GetIndexMode", PyvtkGlyph3D_GetIndexMode, 1,
   (char*)"V.GetIndexMode() -> int\nC++: int GetIndexMode()\n\nIndex into table of sources by scalar, by vector/normal\nmagnitude, or no indexing. If indexing is turned off, then the\nfirst source glyph in the table of glyphs is used. Note that\nindexing mode will only use the InputScalarsSelection array and\nnot the InputColorScalarsSelection as the scalar source if an\narray is specified.\n"},
  {(char*)"SetIndexModeToScalar", PyvtkGlyph3D_SetIndexModeToScalar, 1,
   (char*)"V.SetIndexModeToScalar()\nC++: void SetIndexModeToScalar()\n\nIndex into table of sources by scalar, by vector/normal\nmagnitude, or no indexing. If indexing is turned off, then the\nfirst source glyph in the table of glyphs is used. Note that\nindexing mode will only use the InputScalarsSelection array and\nnot the InputColorScalarsSelection as the scalar source if an\narray is specified.\n"},
  {(char*)"SetIndexModeToVector", PyvtkGlyph3D_SetIndexModeToVector, 1,
   (char*)"V.SetIndexModeToVector()\nC++: void SetIndexModeToVector()\n\nIndex into table of sources by scalar, by vector/normal\nmagnitude, or no indexing. If indexing is turned off, then the\nfirst source glyph in the table of glyphs is used. Note that\nindexing mode will only use the InputScalarsSelection array and\nnot the InputColorScalarsSelection as the scalar source if an\narray is specified.\n"},
  {(char*)"SetIndexModeToOff", PyvtkGlyph3D_SetIndexModeToOff, 1,
   (char*)"V.SetIndexModeToOff()\nC++: void SetIndexModeToOff()\n\nIndex into table of sources by scalar, by vector/normal\nmagnitude, or no indexing. If indexing is turned off, then the\nfirst source glyph in the table of glyphs is used. Note that\nindexing mode will only use the InputScalarsSelection array and\nnot the InputColorScalarsSelection as the scalar source if an\narray is specified.\n"},
  {(char*)"GetIndexModeAsString", PyvtkGlyph3D_GetIndexModeAsString, 1,
   (char*)"V.GetIndexModeAsString() -> string\nC++: const char *GetIndexModeAsString()\n\nIndex into table of sources by scalar, by vector/normal\nmagnitude, or no indexing. If indexing is turned off, then the\nfirst source glyph in the table of glyphs is used. Note that\nindexing mode will only use the InputScalarsSelection array and\nnot the InputColorScalarsSelection as the scalar source if an\narray is specified.\n"},
  {(char*)"SetGeneratePointIds", PyvtkGlyph3D_SetGeneratePointIds, 1,
   (char*)"V.SetGeneratePointIds(int)\nC++: void SetGeneratePointIds(int a)\n\nEnable/disable the generation of point ids as part of the output.\nThe point ids are the id of the input generating point. The point\nids are stored in the output point field data and named\n\"InputPointIds\". Point generation is useful for debugging and\npick operations.\n"},
  {(char*)"GetGeneratePointIds", PyvtkGlyph3D_GetGeneratePointIds, 1,
   (char*)"V.GetGeneratePointIds() -> int\nC++: int GetGeneratePointIds()\n\nEnable/disable the generation of point ids as part of the output.\nThe point ids are the id of the input generating point. The point\nids are stored in the output point field data and named\n\"InputPointIds\". Point generation is useful for debugging and\npick operations.\n"},
  {(char*)"GeneratePointIdsOn", PyvtkGlyph3D_GeneratePointIdsOn, 1,
   (char*)"V.GeneratePointIdsOn()\nC++: void GeneratePointIdsOn()\n\nEnable/disable the generation of point ids as part of the output.\nThe point ids are the id of the input generating point. The point\nids are stored in the output point field data and named\n\"InputPointIds\". Point generation is useful for debugging and\npick operations.\n"},
  {(char*)"GeneratePointIdsOff", PyvtkGlyph3D_GeneratePointIdsOff, 1,
   (char*)"V.GeneratePointIdsOff()\nC++: void GeneratePointIdsOff()\n\nEnable/disable the generation of point ids as part of the output.\nThe point ids are the id of the input generating point. The point\nids are stored in the output point field data and named\n\"InputPointIds\". Point generation is useful for debugging and\npick operations.\n"},
  {(char*)"SetPointIdsName", PyvtkGlyph3D_SetPointIdsName, 1,
   (char*)"V.SetPointIdsName(string)\nC++: void SetPointIdsName(char *)\n\nSet/Get the name of the PointIds array if generated. By default\nthe Ids are named \"InputPointIds\", but this can be changed with\nthis function.\n"},
  {(char*)"GetPointIdsName", PyvtkGlyph3D_GetPointIdsName, 1,
   (char*)"V.GetPointIdsName() -> string\nC++: char *GetPointIdsName()\n\nSet/Get the name of the PointIds array if generated. By default\nthe Ids are named \"InputPointIds\", but this can be changed with\nthis function.\n"},
  {(char*)"SetFillCellData", PyvtkGlyph3D_SetFillCellData, 1,
   (char*)"V.SetFillCellData(int)\nC++: void SetFillCellData(int a)\n\nEnable/disable the generation of cell data as part of the output.\nThe cell data at each cell will match the point data of the input\nat the glyphed point.\n"},
  {(char*)"GetFillCellData", PyvtkGlyph3D_GetFillCellData, 1,
   (char*)"V.GetFillCellData() -> int\nC++: int GetFillCellData()\n\nEnable/disable the generation of cell data as part of the output.\nThe cell data at each cell will match the point data of the input\nat the glyphed point.\n"},
  {(char*)"FillCellDataOn", PyvtkGlyph3D_FillCellDataOn, 1,
   (char*)"V.FillCellDataOn()\nC++: void FillCellDataOn()\n\nEnable/disable the generation of cell data as part of the output.\nThe cell data at each cell will match the point data of the input\nat the glyphed point.\n"},
  {(char*)"FillCellDataOff", PyvtkGlyph3D_FillCellDataOff, 1,
   (char*)"V.FillCellDataOff()\nC++: void FillCellDataOff()\n\nEnable/disable the generation of cell data as part of the output.\nThe cell data at each cell will match the point data of the input\nat the glyphed point.\n"},
  {(char*)"IsPointVisible", PyvtkGlyph3D_IsPointVisible, 1,
   (char*)"V.IsPointVisible(vtkDataSet, int) -> int\nC++: virtual int IsPointVisible(vtkDataSet *, vtkIdType)\n\nThis can be overwritten by subclass to return 0 when a point is\nblanked. Default implementation is to always return 1;\n"},
  {(char*)"SetSourceTransform", PyvtkGlyph3D_SetSourceTransform, 1,
   (char*)"V.SetSourceTransform(vtkTransform)\nC++: void SetSourceTransform(vtkTransform *)\n\nWhen set, this is use to transform the source polydata before\nusing it to generate the glyph. This is useful if one wanted to\nreorient the source, for example.\n"},
  {(char*)"GetSourceTransform", PyvtkGlyph3D_GetSourceTransform, 1,
   (char*)"V.GetSourceTransform() -> vtkTransform\nC++: vtkTransform *GetSourceTransform()\n\nWhen set, this is use to transform the source polydata before\nusing it to generate the glyph. This is useful if one wanted to\nreorient the source, for example.\n"},
  {(char*)"GetMTime", PyvtkGlyph3D_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long GetMTime()\n\nOverridden to include SourceTransform's MTime.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGlyph3D_StaticNew()
{
  return vtkGlyph3D::New();
}

PyObject *PyVTKClass_vtkGlyph3DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGlyph3D_StaticNew,
    PyvtkGlyph3D_Methods,
    "vtkGlyph3D", modulename,
    NULL, NULL,
    PyvtkGlyph3D_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkGlyph3D_Doc()
{
  static const char *docstring[] = {
    "vtkGlyph3D - copy oriented and scaled glyph geometry to every input\npoint\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkGlyph3D is a filter that copies a geometric representation (called\na glyph) to every point in the input dataset. The glyph is defined\nwith polygonal data from a source filter input. The glyph may be\noriented along the input vectors or normals, and it may be scaled\naccording to scalar data or vector magnitude. More than one glyph may\nbe used by creating a table of source objects, each defining a",
    "\ndifferent glyph. If a table of glyphs is defined, then the table can\nbe indexed into by using either scalar value or vector magnitude.\n\nTo use this object you'll have to provide an input dataset and a\nsource to define the glyph. Then decide whether you want to scale the\nglyph and how to scale the glyph (using scalar value or vector\nmagnitude). Next decide whether you want to orient the glyph, and",
    "\nwhether to use the vector data or normal data to orient it. Finally,\ndecide whether to use a table of glyphs, or just a single glyph. If\nyou use a table of glyphs, you'll have to decide whether to index\ninto it with scalar value or with vector magnitude.\n\nCaveats:\n\nThe scaling of the glyphs is controlled by the ScaleFactor ivar\nmultiplied by the scalar value at each point (if VTK_SCALE_BY_SCALAR\n",
    "is set), or multiplied by the vector magnitude (if\nVTK_SCALE_BY_VECTOR is set), Alternatively (if\nVTK_SCALE_BY_VECTORCOMPONENTS is set), the scaling may be specified\nfor x,y,z using the vector components. The scale factor can be\nfurther controlled by enabling clamping using the Clamping ivar. If\nclamping is enabled, the scale is normalized by the Range ivar, and\nthen multiplied by the scale factor",
    ". The normalization process\nincludes clamping the scale value between (0,1).\n\nTypically this object operates on input data with scalar and/or\nvector data. However, scalar and/or vector aren't necessary, and it\ncan be used to copy data from a single source to each point. In this\ncase the scale factor can be used to uniformly scale the glyphs.\n\nThe object uses \"vector\" data to scale glyphs, orient g",
    "lyphs, and/or\nindex into a table of glyphs. You can choose to use either the vector\nor normal data at each input point. Use the method\nSetVectorModeToUseVector() to use the vector input data, and\nSetVectorModeToUseNormal() to use the normal input data.\n\nIf you do use a table of glyphs, make sure to set the Range ivar to\nmake sure the index into the glyph table is computed correctly.\n\nYou can turn ",
    "off scaling of the glyphs completely by using the\nScaling ivar. You can also turn off scaling due to data (either\nvector or scalar) by using the SetScaleModeToDataScalingOff() method.\n\nYou can set what arrays to use for the scalars, vectors, normals, and\ncolor scalars by using the SetInputArrayToProcess methods in\nvtkAlgorithm. The first array is scalars, the next vectors, the next\nnormals and fin",
    "ally color scalars.\n\nSee Also:\n\nvtkTensorGlyph\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGlyph3D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGlyph3DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGlyph3D", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SCALE_BY_SCALAR", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SCALE_BY_VECTOR", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SCALE_BY_VECTORCOMPONENTS", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(3);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_DATA_SCALING_OFF", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_COLOR_BY_SCALE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_COLOR_BY_SCALAR", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_COLOR_BY_VECTOR", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_USE_VECTOR", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_USE_NORMAL", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_VECTOR_ROTATION_OFF", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_INDEXING_OFF", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_INDEXING_BY_SCALAR", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_INDEXING_BY_VECTOR", o) != 0)
    {
    Py_DECREF(o);
    }

}

