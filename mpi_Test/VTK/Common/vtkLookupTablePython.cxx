// python wrapper for vtkLookupTable
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
#include "vtkLookupTable.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkLookupTable(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkLookupTable(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkLookupTableNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkLookupTableNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkScalarsToColorsNew
extern "C" { PyObject *PyVTKClass_vtkScalarsToColorsNew(const char *); }
#define DECLARED_PyVTKClass_vtkScalarsToColorsNew
#endif

static const char **PyvtkLookupTable_Doc();


static PyObject *
PyvtkLookupTable_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

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
      tempr = op->vtkLookupTable::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

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
      tempr = op->vtkLookupTable::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  vtkLookupTable *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkLookupTable::NewInstance();
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
PyvtkLookupTable_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkLookupTable *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkLookupTable::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_IsOpaque(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsOpaque");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsOpaque();
      }
    else
      {
      tempr = op->vtkLookupTable::IsOpaque();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  int temp0 = 256;
  int temp1 = 256;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    if (ap.IsBound())
      {
      tempr = op->Allocate(temp0, temp1);
      }
    else
      {
      tempr = op->vtkLookupTable::Allocate(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_Build(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Build");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Build();
      }
    else
      {
      op->vtkLookupTable::Build();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_ForceBuild(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceBuild");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ForceBuild();
      }
    else
      {
      op->vtkLookupTable::ForceBuild();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_SetRamp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRamp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRamp(temp0);
      }
    else
      {
      op->vtkLookupTable::SetRamp(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_SetRampToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRampToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetRampToLinear();
      }
    else
      {
      op->vtkLookupTable::SetRampToLinear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_SetRampToSCurve(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRampToSCurve");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetRampToSCurve();
      }
    else
      {
      op->vtkLookupTable::SetRampToSCurve();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_SetRampToSQRT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRampToSQRT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetRampToSQRT();
      }
    else
      {
      op->vtkLookupTable::SetRampToSQRT();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_GetRamp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRamp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRamp();
      }
    else
      {
      tempr = op->vtkLookupTable::GetRamp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_SetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScale(temp0);
      }
    else
      {
      op->vtkLookupTable::SetScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_SetScaleToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScaleToLinear();
      }
    else
      {
      op->vtkLookupTable::SetScaleToLinear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_SetScaleToLog10(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleToLog10");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScaleToLog10();
      }
    else
      {
      op->vtkLookupTable::SetScaleToLog10();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_GetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScale();
      }
    else
      {
      tempr = op->vtkLookupTable::GetScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_SetTableRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTableRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

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
      op->SetTableRange(temp0);
      }
    else
      {
      op->vtkLookupTable::SetTableRange(temp0);
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
PyvtkLookupTable_SetTableRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTableRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetTableRange(temp0, temp1);
      }
    else
      {
      op->vtkLookupTable::SetTableRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLookupTable_SetTableRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkLookupTable_SetTableRange_s1(self, args);
    case 2:
      return PyvtkLookupTable_SetTableRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTableRange");
  return NULL;
}



static PyObject *
PyvtkLookupTable_GetTableRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTableRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTableRange();
      }
    else
      {
      tempr = op->vtkLookupTable::GetTableRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_SetHueRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetHueRange(temp0, temp1);
      }
    else
      {
      op->vtkLookupTable::SetHueRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLookupTable_SetHueRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetHueRange(temp0);
      }
    else
      {
      op->vtkLookupTable::SetHueRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLookupTable_SetHueRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkLookupTable_SetHueRange_s1(self, args);
    case 1:
      return PyvtkLookupTable_SetHueRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetHueRange");
  return NULL;
}



static PyObject *
PyvtkLookupTable_GetHueRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHueRange();
      }
    else
      {
      tempr = op->vtkLookupTable::GetHueRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_SetSaturationRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSaturationRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetSaturationRange(temp0, temp1);
      }
    else
      {
      op->vtkLookupTable::SetSaturationRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLookupTable_SetSaturationRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSaturationRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetSaturationRange(temp0);
      }
    else
      {
      op->vtkLookupTable::SetSaturationRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLookupTable_SetSaturationRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkLookupTable_SetSaturationRange_s1(self, args);
    case 1:
      return PyvtkLookupTable_SetSaturationRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSaturationRange");
  return NULL;
}



static PyObject *
PyvtkLookupTable_GetSaturationRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSaturationRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSaturationRange();
      }
    else
      {
      tempr = op->vtkLookupTable::GetSaturationRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_SetValueRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValueRange(temp0, temp1);
      }
    else
      {
      op->vtkLookupTable::SetValueRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLookupTable_SetValueRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetValueRange(temp0);
      }
    else
      {
      op->vtkLookupTable::SetValueRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLookupTable_SetValueRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkLookupTable_SetValueRange_s1(self, args);
    case 1:
      return PyvtkLookupTable_SetValueRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValueRange");
  return NULL;
}



static PyObject *
PyvtkLookupTable_GetValueRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetValueRange();
      }
    else
      {
      tempr = op->vtkLookupTable::GetValueRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_SetAlphaRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlphaRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetAlphaRange(temp0, temp1);
      }
    else
      {
      op->vtkLookupTable::SetAlphaRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLookupTable_SetAlphaRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlphaRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetAlphaRange(temp0);
      }
    else
      {
      op->vtkLookupTable::SetAlphaRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLookupTable_SetAlphaRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkLookupTable_SetAlphaRange_s1(self, args);
    case 1:
      return PyvtkLookupTable_SetAlphaRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetAlphaRange");
  return NULL;
}



static PyObject *
PyvtkLookupTable_GetAlphaRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlphaRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAlphaRange();
      }
    else
      {
      tempr = op->vtkLookupTable::GetAlphaRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_SetNanColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNanColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

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
      op->SetNanColor(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkLookupTable::SetNanColor(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLookupTable_SetNanColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNanColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetNanColor(temp0);
      }
    else
      {
      op->vtkLookupTable::SetNanColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLookupTable_SetNanColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkLookupTable_SetNanColor_s1(self, args);
    case 1:
      return PyvtkLookupTable_SetNanColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetNanColor");
  return NULL;
}



static PyObject *
PyvtkLookupTable_GetNanColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNanColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double *tempr;
  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNanColor();
      }
    else
      {
      tempr = op->vtkLookupTable::GetNanColor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_GetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetColor(temp0, temp1);
      }
    else
      {
      op->vtkLookupTable::GetColor(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_GetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double temp0;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOpacity(temp0);
      }
    else
      {
      tempr = op->vtkLookupTable::GetOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_GetIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double temp0;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIndex(temp0);
      }
    else
      {
      tempr = op->vtkLookupTable::GetIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_SetNumberOfTableValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfTableValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfTableValues(temp0);
      }
    else
      {
      op->vtkLookupTable::SetNumberOfTableValues(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_GetNumberOfTableValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTableValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfTableValues();
      }
    else
      {
      tempr = op->vtkLookupTable::GetNumberOfTableValues();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_SetTableValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  vtkIdType temp0;
  double temp1[4];
  double save1[4];
  const int size1 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->SetTableValue(temp0, temp1);
      }
    else
      {
      op->vtkLookupTable::SetTableValue(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLookupTable_SetTableValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  vtkIdType temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4 = 1.0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
    {
    if (ap.IsBound())
      {
      op->SetTableValue(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkLookupTable::SetTableValue(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLookupTable_SetTableValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkLookupTable_SetTableValue_s1(self, args);
    case 4:
    case 5:
      return PyvtkLookupTable_SetTableValue_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTableValue");
  return NULL;
}



static PyObject *
PyvtkLookupTable_GetTableValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  vtkIdType temp0;
  double *tempr;
  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTableValue(temp0);
      }
    else
      {
      tempr = op->vtkLookupTable::GetTableValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkLookupTable_GetTableValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  vtkIdType temp0;
  double temp1[4];
  double save1[4];
  const int size1 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetTableValue(temp0, temp1);
      }
    else
      {
      op->vtkLookupTable::GetTableValue(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLookupTable_GetTableValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkLookupTable_GetTableValue_s1(self, args);
    case 2:
      return PyvtkLookupTable_GetTableValue_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetTableValue");
  return NULL;
}



static PyObject *
PyvtkLookupTable_GetRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

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
      tempr = op->vtkLookupTable::GetRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_SetRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

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
      op->vtkLookupTable::SetRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLookupTable_SetRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

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
      op->SetRange(temp0);
      }
    else
      {
      op->vtkLookupTable::SetRange(temp0);
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
PyvtkLookupTable_SetRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkLookupTable_SetRange_s1(self, args);
    case 1:
      return PyvtkLookupTable_SetRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetRange");
  return NULL;
}



static PyObject *
PyvtkLookupTable_GetLogRange(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetLogRange");

  double temp0[2];
  const int size0 = 2;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    vtkLookupTable::GetLogRange(temp0, temp1);

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_ApplyLogScale(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ApplyLogScale");

  double temp0;
  double temp1[2];
  const int size1 = 2;
  double temp2[2];
  const int size2 = 2;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    tempr = vtkLookupTable::ApplyLogScale(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_SetNumberOfColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfColors(temp0);
      }
    else
      {
      op->vtkLookupTable::SetNumberOfColors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_GetNumberOfColorsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfColorsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfColorsMinValue();
      }
    else
      {
      tempr = op->vtkLookupTable::GetNumberOfColorsMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_GetNumberOfColorsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfColorsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfColorsMaxValue();
      }
    else
      {
      tempr = op->vtkLookupTable::GetNumberOfColorsMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_GetNumberOfColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfColors();
      }
    else
      {
      tempr = op->vtkLookupTable::GetNumberOfColors();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_SetTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  vtkUnsignedCharArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray"))
    {
    if (ap.IsBound())
      {
      op->SetTable(temp0);
      }
    else
      {
      op->vtkLookupTable::SetTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_GetTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  vtkUnsignedCharArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTable();
      }
    else
      {
      tempr = op->vtkLookupTable::GetTable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  vtkLookupTable *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLookupTable"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkLookupTable::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_UsingLogScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UsingLogScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->UsingLogScale();
      }
    else
      {
      tempr = op->vtkLookupTable::UsingLogScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTable_GetNumberOfAvailableColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAvailableColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfAvailableColors();
      }
    else
      {
      tempr = op->vtkLookupTable::GetNumberOfAvailableColors();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLookupTable_Methods[] = {
  {(char*)"GetClassName", PyvtkLookupTable_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkLookupTable_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkLookupTable_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkLookupTable\nC++: vtkLookupTable *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkLookupTable_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLookupTable\nC++: vtkLookupTable *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"IsOpaque", PyvtkLookupTable_IsOpaque, 1,
   (char*)"V.IsOpaque() -> int\nC++: virtual int IsOpaque()\n\nReturn true if all of the values defining the mapping have an\nopacity equal to 1. Default implementation return true.\n"},
  {(char*)"Allocate", PyvtkLookupTable_Allocate, 1,
   (char*)"V.Allocate(int, int) -> int\nC++: int Allocate(int sz=256, int ext=256)\n\nAllocate a color table of specified size.\n"},
  {(char*)"Build", PyvtkLookupTable_Build, 1,
   (char*)"V.Build()\nC++: virtual void Build()\n\nGenerate lookup table from hue, saturation, value, alpha min/max\nvalues. Table is built from linear ramp of each value.\n"},
  {(char*)"ForceBuild", PyvtkLookupTable_ForceBuild, 1,
   (char*)"V.ForceBuild()\nC++: virtual void ForceBuild()\n\nForce the lookup table to regenerate from hue, saturation, value,\nand alpha min/max values.  Table is built from a linear ramp of\neach value.  ForceBuild() is useful if a lookup table has been\ndefined manually (using SetTableValue) and then an application\ndecides to rebuild the lookup table using the implicit process.\n"},
  {(char*)"SetRamp", PyvtkLookupTable_SetRamp, 1,
   (char*)"V.SetRamp(int)\nC++: void SetRamp(int a)\n\nSet the shape of the table ramp to either linear or S-curve. The\ndefault is S-curve, which tails off gradually at either end. The\nequation used for the S-curve is y = (sin((x - 1/2)*pi) + 1)/2,\nwhile the equation for the linear ramp is simply y = x.  For an\nS-curve greyscale ramp, you should set NumberOfTableValues to 402\n(which is 256*pi/2) to provide room for the tails of the ramp.\nThe equation for the SQRT is y = sqrt(x).\n"},
  {(char*)"SetRampToLinear", PyvtkLookupTable_SetRampToLinear, 1,
   (char*)"V.SetRampToLinear()\nC++: void SetRampToLinear()\n\nSet the shape of the table ramp to either linear or S-curve. The\ndefault is S-curve, which tails off gradually at either end. The\nequation used for the S-curve is y = (sin((x - 1/2)*pi) + 1)/2,\nwhile the equation for the linear ramp is simply y = x.  For an\nS-curve greyscale ramp, you should set NumberOfTableValues to 402\n(which is 256*pi/2) to provide room for the tails of the ramp.\nThe equation for the SQRT is y = sqrt(x).\n"},
  {(char*)"SetRampToSCurve", PyvtkLookupTable_SetRampToSCurve, 1,
   (char*)"V.SetRampToSCurve()\nC++: void SetRampToSCurve()\n\nSet the shape of the table ramp to either linear or S-curve. The\ndefault is S-curve, which tails off gradually at either end. The\nequation used for the S-curve is y = (sin((x - 1/2)*pi) + 1)/2,\nwhile the equation for the linear ramp is simply y = x.  For an\nS-curve greyscale ramp, you should set NumberOfTableValues to 402\n(which is 256*pi/2) to provide room for the tails of the ramp.\nThe equation for the SQRT is y = sqrt(x).\n"},
  {(char*)"SetRampToSQRT", PyvtkLookupTable_SetRampToSQRT, 1,
   (char*)"V.SetRampToSQRT()\nC++: void SetRampToSQRT()\n\nSet the shape of the table ramp to either linear or S-curve. The\ndefault is S-curve, which tails off gradually at either end. The\nequation used for the S-curve is y = (sin((x - 1/2)*pi) + 1)/2,\nwhile the equation for the linear ramp is simply y = x.  For an\nS-curve greyscale ramp, you should set NumberOfTableValues to 402\n(which is 256*pi/2) to provide room for the tails of the ramp.\nThe equation for the SQRT is y = sqrt(x).\n"},
  {(char*)"GetRamp", PyvtkLookupTable_GetRamp, 1,
   (char*)"V.GetRamp() -> int\nC++: int GetRamp()\n\nSet the shape of the table ramp to either linear or S-curve. The\ndefault is S-curve, which tails off gradually at either end. The\nequation used for the S-curve is y = (sin((x - 1/2)*pi) + 1)/2,\nwhile the equation for the linear ramp is simply y = x.  For an\nS-curve greyscale ramp, you should set NumberOfTableValues to 402\n(which is 256*pi/2) to provide room for the tails of the ramp.\nThe equation for the SQRT is y = sqrt(x).\n"},
  {(char*)"SetScale", PyvtkLookupTable_SetScale, 1,
   (char*)"V.SetScale(int)\nC++: void SetScale(int scale)\n\nSet the type of scale to use, linear or logarithmic.  The default\nis linear.  If the scale is logarithmic, then the TableRange must\nnot cross the value zero.\n"},
  {(char*)"SetScaleToLinear", PyvtkLookupTable_SetScaleToLinear, 1,
   (char*)"V.SetScaleToLinear()\nC++: void SetScaleToLinear()\n\nSet the type of scale to use, linear or logarithmic.  The default\nis linear.  If the scale is logarithmic, then the TableRange must\nnot cross the value zero.\n"},
  {(char*)"SetScaleToLog10", PyvtkLookupTable_SetScaleToLog10, 1,
   (char*)"V.SetScaleToLog10()\nC++: void SetScaleToLog10()\n\nSet the type of scale to use, linear or logarithmic.  The default\nis linear.  If the scale is logarithmic, then the TableRange must\nnot cross the value zero.\n"},
  {(char*)"GetScale", PyvtkLookupTable_GetScale, 1,
   (char*)"V.GetScale() -> int\nC++: int GetScale()\n\nSet the type of scale to use, linear or logarithmic.  The default\nis linear.  If the scale is logarithmic, then the TableRange must\nnot cross the value zero.\n"},
  {(char*)"SetTableRange", PyvtkLookupTable_SetTableRange, 1,
   (char*)"V.SetTableRange([float, float])\nC++: void SetTableRange(double r[2])\nV.SetTableRange(float, float)\nC++: virtual void SetTableRange(double min, double max)\n\nSet/Get the minimum/maximum scalar values for scalar mapping.\nScalar values less than minimum range value are clamped to\nminimum range value. Scalar values greater than maximum range\nvalue are clamped to maximum range value.\n"},
  {(char*)"GetTableRange", PyvtkLookupTable_GetTableRange, 1,
   (char*)"V.GetTableRange() -> (float, float)\nC++: double *GetTableRange()\n\nSet/Get the minimum/maximum scalar values for scalar mapping.\nScalar values less than minimum range value are clamped to\nminimum range value. Scalar values greater than maximum range\nvalue are clamped to maximum range value.\n"},
  {(char*)"SetHueRange", PyvtkLookupTable_SetHueRange, 1,
   (char*)"V.SetHueRange(float, float)\nC++: void SetHueRange(double, double)\nV.SetHueRange((float, float))\nC++: void SetHueRange(double a[2])\n\n"},
  {(char*)"GetHueRange", PyvtkLookupTable_GetHueRange, 1,
   (char*)"V.GetHueRange() -> (float, float)\nC++: double *GetHueRange()\n\n"},
  {(char*)"SetSaturationRange", PyvtkLookupTable_SetSaturationRange, 1,
   (char*)"V.SetSaturationRange(float, float)\nC++: void SetSaturationRange(double, double)\nV.SetSaturationRange((float, float))\nC++: void SetSaturationRange(double a[2])\n\n"},
  {(char*)"GetSaturationRange", PyvtkLookupTable_GetSaturationRange, 1,
   (char*)"V.GetSaturationRange() -> (float, float)\nC++: double *GetSaturationRange()\n\n"},
  {(char*)"SetValueRange", PyvtkLookupTable_SetValueRange, 1,
   (char*)"V.SetValueRange(float, float)\nC++: void SetValueRange(double, double)\nV.SetValueRange((float, float))\nC++: void SetValueRange(double a[2])\n\n"},
  {(char*)"GetValueRange", PyvtkLookupTable_GetValueRange, 1,
   (char*)"V.GetValueRange() -> (float, float)\nC++: double *GetValueRange()\n\n"},
  {(char*)"SetAlphaRange", PyvtkLookupTable_SetAlphaRange, 1,
   (char*)"V.SetAlphaRange(float, float)\nC++: void SetAlphaRange(double, double)\nV.SetAlphaRange((float, float))\nC++: void SetAlphaRange(double a[2])\n\n"},
  {(char*)"GetAlphaRange", PyvtkLookupTable_GetAlphaRange, 1,
   (char*)"V.GetAlphaRange() -> (float, float)\nC++: double *GetAlphaRange()\n\n"},
  {(char*)"SetNanColor", PyvtkLookupTable_SetNanColor, 1,
   (char*)"V.SetNanColor(float, float, float, float)\nC++: void SetNanColor(double, double, double, double)\nV.SetNanColor((float, float, float, float))\nC++: void SetNanColor(double a[4])\n\n"},
  {(char*)"GetNanColor", PyvtkLookupTable_GetNanColor, 1,
   (char*)"V.GetNanColor() -> (float, float, float, float)\nC++: double *GetNanColor()\n\n"},
  {(char*)"GetColor", PyvtkLookupTable_GetColor, 1,
   (char*)"V.GetColor(float, [float, float, float])\nC++: void GetColor(double x, double rgb[3])\n\nMap one value through the lookup table and return the color as an\nRGB array of doubles between 0 and 1.\n"},
  {(char*)"GetOpacity", PyvtkLookupTable_GetOpacity, 1,
   (char*)"V.GetOpacity(float) -> float\nC++: double GetOpacity(double v)\n\nMap one value through the lookup table and return the alpha value\n(the opacity) as a double between 0 and 1.\n"},
  {(char*)"GetIndex", PyvtkLookupTable_GetIndex, 1,
   (char*)"V.GetIndex(float) -> int\nC++: virtual vtkIdType GetIndex(double v)\n\nReturn the table index associated with a particular value.\n"},
  {(char*)"SetNumberOfTableValues", PyvtkLookupTable_SetNumberOfTableValues, 1,
   (char*)"V.SetNumberOfTableValues(int)\nC++: void SetNumberOfTableValues(vtkIdType number)\n\nSpecify the number of values (i.e., colors) in the lookup table.\n"},
  {(char*)"GetNumberOfTableValues", PyvtkLookupTable_GetNumberOfTableValues, 1,
   (char*)"V.GetNumberOfTableValues() -> int\nC++: vtkIdType GetNumberOfTableValues()\n\nSpecify the number of values (i.e., colors) in the lookup table.\n"},
  {(char*)"SetTableValue", PyvtkLookupTable_SetTableValue, 1,
   (char*)"V.SetTableValue(int, [float, float, float, float])\nC++: void SetTableValue(vtkIdType indx, double rgba[4])\nV.SetTableValue(int, float, float, float, float)\nC++: void SetTableValue(vtkIdType indx, double r, double g,\n    double b, double a=1.0)\n\nDirectly load color into lookup table. Use [0,1] double values\nfor color component specification. Make sure that you've either\nused the Build() method or used SetNumberOfTableValues() prior to\nusing this method.\n"},
  {(char*)"GetTableValue", PyvtkLookupTable_GetTableValue, 1,
   (char*)"V.GetTableValue(int) -> (float, float, float, float)\nC++: double *GetTableValue(vtkIdType id)\nV.GetTableValue(int, [float, float, float, float])\nC++: void GetTableValue(vtkIdType id, double rgba[4])\n\nReturn a rgba color value for the given index into the lookup\ntable. Color components are expressed as [0,1] double values.\n"},
  {(char*)"GetRange", PyvtkLookupTable_GetRange, 1,
   (char*)"V.GetRange() -> (float, float)\nC++: double *GetRange()\n\nSets/Gets the range of scalars which will be mapped.  This is a\nduplicate of Get/SetTableRange.\n"},
  {(char*)"SetRange", PyvtkLookupTable_SetRange, 1,
   (char*)"V.SetRange(float, float)\nC++: void SetRange(double min, double max)\nV.SetRange([float, float])\nC++: void SetRange(double rng[2])\n\nSets/Gets the range of scalars which will be mapped.  This is a\nduplicate of Get/SetTableRange.\n"},
  {(char*)"GetLogRange", PyvtkLookupTable_GetLogRange, 1,
   (char*)"V.GetLogRange((float, float), [float, float])\nC++: static void GetLogRange(const double range[2],\n    double log_range[2])\n\nReturns the log of range in log_range. There is a little more to\nthis than simply taking the log10 of the two range values: we do\nconversion of negative ranges to positive ranges, and conversion\nof zero to a 'very small number'.\n"},
  {(char*)"ApplyLogScale", PyvtkLookupTable_ApplyLogScale, 1,
   (char*)"V.ApplyLogScale(float, (float, float), (float, float)) -> float\nC++: static double ApplyLogScale(double v, const double range[2],\n    const double log_range[2])\n\nApply log to value, with appropriate constraints.\n"},
  {(char*)"SetNumberOfColors", PyvtkLookupTable_SetNumberOfColors, 1,
   (char*)"V.SetNumberOfColors(int)\nC++: void SetNumberOfColors(vtkIdType)\n\nSet the number of colors in the lookup table.  Use\nSetNumberOfTableValues() instead, it can be used both before and\nafter the table has been built whereas SetNumberOfColors() has no\neffect after the table has been built.\n"},
  {(char*)"GetNumberOfColorsMinValue", PyvtkLookupTable_GetNumberOfColorsMinValue, 1,
   (char*)"V.GetNumberOfColorsMinValue() -> int\nC++: vtkIdType GetNumberOfColorsMinValue()\n\nSet the number of colors in the lookup table.  Use\nSetNumberOfTableValues() instead, it can be used both before and\nafter the table has been built whereas SetNumberOfColors() has no\neffect after the table has been built.\n"},
  {(char*)"GetNumberOfColorsMaxValue", PyvtkLookupTable_GetNumberOfColorsMaxValue, 1,
   (char*)"V.GetNumberOfColorsMaxValue() -> int\nC++: vtkIdType GetNumberOfColorsMaxValue()\n\nSet the number of colors in the lookup table.  Use\nSetNumberOfTableValues() instead, it can be used both before and\nafter the table has been built whereas SetNumberOfColors() has no\neffect after the table has been built.\n"},
  {(char*)"GetNumberOfColors", PyvtkLookupTable_GetNumberOfColors, 1,
   (char*)"V.GetNumberOfColors() -> int\nC++: vtkIdType GetNumberOfColors()\n\nSet the number of colors in the lookup table.  Use\nSetNumberOfTableValues() instead, it can be used both before and\nafter the table has been built whereas SetNumberOfColors() has no\neffect after the table has been built.\n"},
  {(char*)"SetTable", PyvtkLookupTable_SetTable, 1,
   (char*)"V.SetTable(vtkUnsignedCharArray)\nC++: void SetTable(vtkUnsignedCharArray *)\n\nSet/Get the internal table array that is used to map the scalars\nto colors.  The table array is an unsigned char array with 4\ncomponents representing RGBA.\n"},
  {(char*)"GetTable", PyvtkLookupTable_GetTable, 1,
   (char*)"V.GetTable() -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *GetTable()\n\nSet/Get the internal table array that is used to map the scalars\nto colors.  The table array is an unsigned char array with 4\ncomponents representing RGBA.\n"},
  {(char*)"DeepCopy", PyvtkLookupTable_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkLookupTable)\nC++: void DeepCopy(vtkLookupTable *lut)\n\nCopy the contents from another LookupTable\n"},
  {(char*)"UsingLogScale", PyvtkLookupTable_UsingLogScale, 1,
   (char*)"V.UsingLogScale() -> int\nC++: virtual int UsingLogScale()\n\nThis should return 1 is the subclass is using log scale for\nmapping scalars to colors. Returns 1 is scale == VTK_SCALE_LOG10.\n"},
  {(char*)"GetNumberOfAvailableColors", PyvtkLookupTable_GetNumberOfAvailableColors, 1,
   (char*)"V.GetNumberOfAvailableColors() -> int\nC++: virtual vtkIdType GetNumberOfAvailableColors()\n\nGet the number of available colors for mapping to.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLookupTable_StaticNew()
{
  return vtkLookupTable::New();
}

PyObject *PyVTKClass_vtkLookupTableNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLookupTable_StaticNew,
    PyvtkLookupTable_Methods,
    "vtkLookupTable", modulename,
    NULL, NULL,
    PyvtkLookupTable_Doc(),
    PyVTKClass_vtkScalarsToColorsNew(modulename));
  return cls;
}

const char **PyvtkLookupTable_Doc()
{
  static const char *docstring[] = {
    "vtkLookupTable - map scalar values into colors via a lookup table\n\n",
    "Superclass: vtkScalarsToColors\n\n",
    "vtkLookupTable is an object that is used by mapper objects to map\nscalar values into rgba (red-green-blue-alpha transparency) color\nspecification, or rgba into scalar values. The color table can be\ncreated by direct insertion of color values, or by specifying  hue,\nsaturation, value, and alpha range and generating a table.\n\nCaveats:\n\nYou need to explicitly call Build() when constructing the LUT by",
    "\nhand.\n\nSee Also:\n\nvtkLogLookupTable vtkWindowLevelLookupTable\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLookupTable(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLookupTableNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLookupTable", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_RAMP_LINEAR", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_RAMP_SCURVE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_RAMP_SQRT", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SCALE_LINEAR", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SCALE_LOG10", o) != 0)
    {
    Py_DECREF(o);
    }

}

