// python wrapper for vtkMapper
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
#include "vtkMapper.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMapper(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMapper(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMapperNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMapperNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAbstractMapper3DNew
extern "C" { PyObject *PyVTKClass_vtkAbstractMapper3DNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractMapper3DNew
#endif

static const char **PyvtkMapper_Doc();


static PyObject *
PyvtkMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

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
      tempr = op->vtkMapper::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

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
      tempr = op->vtkMapper::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  vtkMapper *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMapper::NewInstance();
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
PyvtkMapper_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  vtkAbstractMapper *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractMapper"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkMapper::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

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
      tempr = op->vtkMapper::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkActor *temp1 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
    {
    op->Render(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

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
      op->vtkMapper::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  vtkScalarsToColors *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
    {
    if (ap.IsBound())
      {
      op->SetLookupTable(temp0);
      }
    else
      {
      op->vtkMapper::SetLookupTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  vtkScalarsToColors *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLookupTable();
      }
    else
      {
      tempr = op->vtkMapper::GetLookupTable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_CreateDefaultLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultLookupTable();
      }
    else
      {
      op->vtkMapper::CreateDefaultLookupTable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_SetScalarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalarVisibility(temp0);
      }
    else
      {
      op->vtkMapper::SetScalarVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_GetScalarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarVisibility();
      }
    else
      {
      tempr = op->vtkMapper::GetScalarVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_ScalarVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalarVisibilityOn();
      }
    else
      {
      op->vtkMapper::ScalarVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_ScalarVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalarVisibilityOff();
      }
    else
      {
      op->vtkMapper::ScalarVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_SetStatic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStatic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStatic(temp0);
      }
    else
      {
      op->vtkMapper::SetStatic(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_GetStatic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStatic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStatic();
      }
    else
      {
      tempr = op->vtkMapper::GetStatic();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_StaticOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StaticOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StaticOn();
      }
    else
      {
      op->vtkMapper::StaticOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_StaticOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StaticOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StaticOff();
      }
    else
      {
      op->vtkMapper::StaticOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_SetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

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
      op->vtkMapper::SetColorMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_GetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

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
      tempr = op->vtkMapper::GetColorMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_SetColorModeToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetColorModeToDefault();
      }
    else
      {
      op->vtkMapper::SetColorModeToDefault();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_SetColorModeToMapScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToMapScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetColorModeToMapScalars();
      }
    else
      {
      op->vtkMapper::SetColorModeToMapScalars();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_GetColorModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

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
      tempr = op->vtkMapper::GetColorModeAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_SetInterpolateScalarsBeforeMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolateScalarsBeforeMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolateScalarsBeforeMapping(temp0);
      }
    else
      {
      op->vtkMapper::SetInterpolateScalarsBeforeMapping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_GetInterpolateScalarsBeforeMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolateScalarsBeforeMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInterpolateScalarsBeforeMapping();
      }
    else
      {
      tempr = op->vtkMapper::GetInterpolateScalarsBeforeMapping();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_InterpolateScalarsBeforeMappingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateScalarsBeforeMappingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InterpolateScalarsBeforeMappingOn();
      }
    else
      {
      op->vtkMapper::InterpolateScalarsBeforeMappingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_InterpolateScalarsBeforeMappingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateScalarsBeforeMappingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InterpolateScalarsBeforeMappingOff();
      }
    else
      {
      op->vtkMapper::InterpolateScalarsBeforeMappingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_SetUseLookupTableScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseLookupTableScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseLookupTableScalarRange(temp0);
      }
    else
      {
      op->vtkMapper::SetUseLookupTableScalarRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_GetUseLookupTableScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseLookupTableScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseLookupTableScalarRange();
      }
    else
      {
      tempr = op->vtkMapper::GetUseLookupTableScalarRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_UseLookupTableScalarRangeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseLookupTableScalarRangeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseLookupTableScalarRangeOn();
      }
    else
      {
      op->vtkMapper::UseLookupTableScalarRangeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_UseLookupTableScalarRangeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseLookupTableScalarRangeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseLookupTableScalarRangeOff();
      }
    else
      {
      op->vtkMapper::UseLookupTableScalarRangeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_SetScalarRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetScalarRange(temp0, temp1);
      }
    else
      {
      op->vtkMapper::SetScalarRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMapper_SetScalarRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetScalarRange(temp0);
      }
    else
      {
      op->vtkMapper::SetScalarRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMapper_SetScalarRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkMapper_SetScalarRange_s1(self, args);
    case 1:
      return PyvtkMapper_SetScalarRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetScalarRange");
  return NULL;
}



static PyObject *
PyvtkMapper_GetScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarRange();
      }
    else
      {
      tempr = op->vtkMapper::GetScalarRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_SetImmediateModeRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImmediateModeRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetImmediateModeRendering(temp0);
      }
    else
      {
      op->vtkMapper::SetImmediateModeRendering(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_GetImmediateModeRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImmediateModeRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetImmediateModeRendering();
      }
    else
      {
      tempr = op->vtkMapper::GetImmediateModeRendering();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_ImmediateModeRenderingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ImmediateModeRenderingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ImmediateModeRenderingOn();
      }
    else
      {
      op->vtkMapper::ImmediateModeRenderingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_ImmediateModeRenderingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ImmediateModeRenderingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ImmediateModeRenderingOff();
      }
    else
      {
      op->vtkMapper::ImmediateModeRenderingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_SetGlobalImmediateModeRendering(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetGlobalImmediateModeRendering");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkMapper::SetGlobalImmediateModeRendering(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_GlobalImmediateModeRenderingOn(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GlobalImmediateModeRenderingOn");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkMapper::GlobalImmediateModeRenderingOn();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_GlobalImmediateModeRenderingOff(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GlobalImmediateModeRenderingOff");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkMapper::GlobalImmediateModeRenderingOff();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_GetGlobalImmediateModeRendering(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalImmediateModeRendering");

  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkMapper::GetGlobalImmediateModeRendering();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_GetForceCompileOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceCompileOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetForceCompileOnly();
      }
    else
      {
      tempr = op->vtkMapper::GetForceCompileOnly();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_SetForceCompileOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceCompileOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetForceCompileOnly(temp0);
      }
    else
      {
      op->vtkMapper::SetForceCompileOnly(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_SetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalarMode(temp0);
      }
    else
      {
      op->vtkMapper::SetScalarMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_GetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarMode();
      }
    else
      {
      tempr = op->vtkMapper::GetScalarMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_SetScalarModeToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToDefault();
      }
    else
      {
      op->vtkMapper::SetScalarModeToDefault();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_SetScalarModeToUsePointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToUsePointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToUsePointData();
      }
    else
      {
      op->vtkMapper::SetScalarModeToUsePointData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_SetScalarModeToUseCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToUseCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToUseCellData();
      }
    else
      {
      op->vtkMapper::SetScalarModeToUseCellData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_SetScalarModeToUsePointFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToUsePointFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToUsePointFieldData();
      }
    else
      {
      op->vtkMapper::SetScalarModeToUsePointFieldData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_SetScalarModeToUseCellFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToUseCellFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToUseCellFieldData();
      }
    else
      {
      op->vtkMapper::SetScalarModeToUseCellFieldData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_SetScalarModeToUseFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToUseFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToUseFieldData();
      }
    else
      {
      op->vtkMapper::SetScalarModeToUseFieldData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_SelectColorArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectColorArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SelectColorArray(temp0);
      }
    else
      {
      op->vtkMapper::SelectColorArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMapper_SelectColorArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectColorArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SelectColorArray(temp0);
      }
    else
      {
      op->vtkMapper::SelectColorArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMapper_SelectColorArray_Methods[] = {
  {NULL, PyvtkMapper_SelectColorArray_s1, 1,
   (char*)"@i"},
  {NULL, PyvtkMapper_SelectColorArray_s2, 1,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMapper_SelectColorArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMapper_SelectColorArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SelectColorArray");
  return NULL;
}



static PyObject *
PyvtkMapper_ColorByArrayComponent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorByArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->ColorByArrayComponent(temp0, temp1);
      }
    else
      {
      op->vtkMapper::ColorByArrayComponent(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMapper_ColorByArrayComponent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorByArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->ColorByArrayComponent(temp0, temp1);
      }
    else
      {
      op->vtkMapper::ColorByArrayComponent(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMapper_ColorByArrayComponent_Methods[] = {
  {NULL, PyvtkMapper_ColorByArrayComponent_s1, 1,
   (char*)"@ii"},
  {NULL, PyvtkMapper_ColorByArrayComponent_s2, 1,
   (char*)"@zi"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMapper_ColorByArrayComponent(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMapper_ColorByArrayComponent_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ColorByArrayComponent");
  return NULL;
}



static PyObject *
PyvtkMapper_GetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetArrayName();
      }
    else
      {
      tempr = op->vtkMapper::GetArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_GetArrayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetArrayId();
      }
    else
      {
      tempr = op->vtkMapper::GetArrayId();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_GetArrayAccessMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayAccessMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetArrayAccessMode();
      }
    else
      {
      tempr = op->vtkMapper::GetArrayAccessMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_GetArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetArrayComponent();
      }
    else
      {
      tempr = op->vtkMapper::GetArrayComponent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_GetScalarModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarModeAsString();
      }
    else
      {
      tempr = op->vtkMapper::GetScalarModeAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_SetResolveCoincidentTopology(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetResolveCoincidentTopology");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkMapper::SetResolveCoincidentTopology(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_GetResolveCoincidentTopology(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetResolveCoincidentTopology");

  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkMapper::GetResolveCoincidentTopology();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_SetResolveCoincidentTopologyToDefault(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetResolveCoincidentTopologyToDefault");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkMapper::SetResolveCoincidentTopologyToDefault();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_SetResolveCoincidentTopologyToOff(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetResolveCoincidentTopologyToOff");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkMapper::SetResolveCoincidentTopologyToOff();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_SetResolveCoincidentTopologyToPolygonOffset(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetResolveCoincidentTopologyToPolygonOffset");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkMapper::SetResolveCoincidentTopologyToPolygonOffset();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_SetResolveCoincidentTopologyToShiftZBuffer(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetResolveCoincidentTopologyToShiftZBuffer");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkMapper::SetResolveCoincidentTopologyToShiftZBuffer();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_SetResolveCoincidentTopologyPolygonOffsetParameters(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetResolveCoincidentTopologyPolygonOffsetParameters");

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkMapper::SetResolveCoincidentTopologyPolygonOffsetParameters(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_GetResolveCoincidentTopologyPolygonOffsetParameters(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetResolveCoincidentTopologyPolygonOffsetParameters");

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkMapper::GetResolveCoincidentTopologyPolygonOffsetParameters(temp0, temp1);

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
PyvtkMapper_SetResolveCoincidentTopologyPolygonOffsetFaces(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetResolveCoincidentTopologyPolygonOffsetFaces");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkMapper::SetResolveCoincidentTopologyPolygonOffsetFaces(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_GetResolveCoincidentTopologyPolygonOffsetFaces(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetResolveCoincidentTopologyPolygonOffsetFaces");

  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkMapper::GetResolveCoincidentTopologyPolygonOffsetFaces();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_SetResolveCoincidentTopologyZShift(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetResolveCoincidentTopologyZShift");

  double temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkMapper::SetResolveCoincidentTopologyZShift(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_GetResolveCoincidentTopologyZShift(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetResolveCoincidentTopologyZShift");

  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkMapper::GetResolveCoincidentTopologyZShift();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

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
      tempr = op->vtkMapper::GetBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkMapper_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

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
      op->vtkMapper::GetBounds(temp0);
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
PyvtkMapper_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkMapper_GetBounds_s1(self, args);
    case 1:
      return PyvtkMapper_GetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return NULL;
}



static PyObject *
PyvtkMapper_SetRenderTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRenderTime(temp0);
      }
    else
      {
      op->vtkMapper::SetRenderTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_GetRenderTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRenderTime();
      }
    else
      {
      tempr = op->vtkMapper::GetRenderTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

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
      tempr = op->vtkMapper::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_GetInputAsDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputAsDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  vtkDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInputAsDataSet();
      }
    else
      {
      tempr = op->vtkMapper::GetInputAsDataSet();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_MapScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  double temp0;
  vtkUnsignedCharArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->MapScalars(temp0);
      }
    else
      {
      tempr = op->vtkMapper::MapScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_SetScalarMaterialMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarMaterialMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalarMaterialMode(temp0);
      }
    else
      {
      op->vtkMapper::SetScalarMaterialMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_GetScalarMaterialMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarMaterialMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarMaterialMode();
      }
    else
      {
      tempr = op->vtkMapper::GetScalarMaterialMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_SetScalarMaterialModeToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarMaterialModeToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarMaterialModeToDefault();
      }
    else
      {
      op->vtkMapper::SetScalarMaterialModeToDefault();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_SetScalarMaterialModeToAmbient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarMaterialModeToAmbient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarMaterialModeToAmbient();
      }
    else
      {
      op->vtkMapper::SetScalarMaterialModeToAmbient();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_SetScalarMaterialModeToDiffuse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarMaterialModeToDiffuse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarMaterialModeToDiffuse();
      }
    else
      {
      op->vtkMapper::SetScalarMaterialModeToDiffuse();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_SetScalarMaterialModeToAmbientAndDiffuse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarMaterialModeToAmbientAndDiffuse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarMaterialModeToAmbientAndDiffuse();
      }
    else
      {
      op->vtkMapper::SetScalarMaterialModeToAmbientAndDiffuse();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_GetScalarMaterialModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarMaterialModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarMaterialModeAsString();
      }
    else
      {
      tempr = op->vtkMapper::GetScalarMaterialModeAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapper_GetSupportsSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSupportsSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

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
      tempr = op->vtkMapper::GetSupportsSelection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkMapper_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMapper_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMapper_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMapper\nC++: vtkMapper *NewInstance()\n\n"},
  {(char*)"ShallowCopy", PyvtkMapper_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkAbstractMapper)\nC++: void ShallowCopy(vtkAbstractMapper *m)\n\nMake a shallow copy of this mapper.\n"},
  {(char*)"GetMTime", PyvtkMapper_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nOverload standard modified time function. If lookup table is\nmodified, then this object is modified as well.\n"},
  {(char*)"Render", PyvtkMapper_Render, 1,
   (char*)"V.Render(vtkRenderer, vtkActor)\nC++: virtual void Render(vtkRenderer *ren, vtkActor *a)\n\nMethod initiates the mapping process. Generally sent by the actor\nas each frame is rendered.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkMapper_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nmapper. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {(char*)"SetLookupTable", PyvtkMapper_SetLookupTable, 1,
   (char*)"V.SetLookupTable(vtkScalarsToColors)\nC++: void SetLookupTable(vtkScalarsToColors *lut)\n\nSpecify a lookup table for the mapper to use.\n"},
  {(char*)"GetLookupTable", PyvtkMapper_GetLookupTable, 1,
   (char*)"V.GetLookupTable() -> vtkScalarsToColors\nC++: vtkScalarsToColors *GetLookupTable()\n\nSpecify a lookup table for the mapper to use.\n"},
  {(char*)"CreateDefaultLookupTable", PyvtkMapper_CreateDefaultLookupTable, 1,
   (char*)"V.CreateDefaultLookupTable()\nC++: virtual void CreateDefaultLookupTable()\n\nCreate default lookup table. Generally used to create one when\nnone is available with the scalar data.\n"},
  {(char*)"SetScalarVisibility", PyvtkMapper_SetScalarVisibility, 1,
   (char*)"V.SetScalarVisibility(int)\nC++: void SetScalarVisibility(int a)\n\nTurn on/off flag to control whether scalar data is used to color\nobjects.\n"},
  {(char*)"GetScalarVisibility", PyvtkMapper_GetScalarVisibility, 1,
   (char*)"V.GetScalarVisibility() -> int\nC++: int GetScalarVisibility()\n\nTurn on/off flag to control whether scalar data is used to color\nobjects.\n"},
  {(char*)"ScalarVisibilityOn", PyvtkMapper_ScalarVisibilityOn, 1,
   (char*)"V.ScalarVisibilityOn()\nC++: void ScalarVisibilityOn()\n\nTurn on/off flag to control whether scalar data is used to color\nobjects.\n"},
  {(char*)"ScalarVisibilityOff", PyvtkMapper_ScalarVisibilityOff, 1,
   (char*)"V.ScalarVisibilityOff()\nC++: void ScalarVisibilityOff()\n\nTurn on/off flag to control whether scalar data is used to color\nobjects.\n"},
  {(char*)"SetStatic", PyvtkMapper_SetStatic, 1,
   (char*)"V.SetStatic(int)\nC++: void SetStatic(int a)\n\nTurn on/off flag to control whether the mapper's data is static.\nStatic data means that the mapper does not propagate updates down\nthe pipeline, greatly decreasing the time it takes to update many\nmappers. This should only be used if the data never changes.\n"},
  {(char*)"GetStatic", PyvtkMapper_GetStatic, 1,
   (char*)"V.GetStatic() -> int\nC++: int GetStatic()\n\nTurn on/off flag to control whether the mapper's data is static.\nStatic data means that the mapper does not propagate updates down\nthe pipeline, greatly decreasing the time it takes to update many\nmappers. This should only be used if the data never changes.\n"},
  {(char*)"StaticOn", PyvtkMapper_StaticOn, 1,
   (char*)"V.StaticOn()\nC++: void StaticOn()\n\nTurn on/off flag to control whether the mapper's data is static.\nStatic data means that the mapper does not propagate updates down\nthe pipeline, greatly decreasing the time it takes to update many\nmappers. This should only be used if the data never changes.\n"},
  {(char*)"StaticOff", PyvtkMapper_StaticOff, 1,
   (char*)"V.StaticOff()\nC++: void StaticOff()\n\nTurn on/off flag to control whether the mapper's data is static.\nStatic data means that the mapper does not propagate updates down\nthe pipeline, greatly decreasing the time it takes to update many\nmappers. This should only be used if the data never changes.\n"},
  {(char*)"SetColorMode", PyvtkMapper_SetColorMode, 1,
   (char*)"V.SetColorMode(int)\nC++: void SetColorMode(int a)\n\nControl how the scalar data is mapped to colors.  By default\n(ColorModeToDefault), unsigned char scalars are treated as\ncolors, and NOT mapped through the lookup table, while everything\nelse is. Setting ColorModeToMapScalars means that all scalar data\nwill be mapped through the lookup table.  (Note that for\nmulti-component scalars, the particular component to use for\nmapping can be specified using the SelectColorArray() method.)\n"},
  {(char*)"GetColorMode", PyvtkMapper_GetColorMode, 1,
   (char*)"V.GetColorMode() -> int\nC++: int GetColorMode()\n\nControl how the scalar data is mapped to colors.  By default\n(ColorModeToDefault), unsigned char scalars are treated as\ncolors, and NOT mapped through the lookup table, while everything\nelse is. Setting ColorModeToMapScalars means that all scalar data\nwill be mapped through the lookup table.  (Note that for\nmulti-component scalars, the particular component to use for\nmapping can be specified using the SelectColorArray() method.)\n"},
  {(char*)"SetColorModeToDefault", PyvtkMapper_SetColorModeToDefault, 1,
   (char*)"V.SetColorModeToDefault()\nC++: void SetColorModeToDefault()\n\nControl how the scalar data is mapped to colors.  By default\n(ColorModeToDefault), unsigned char scalars are treated as\ncolors, and NOT mapped through the lookup table, while everything\nelse is. Setting ColorModeToMapScalars means that all scalar data\nwill be mapped through the lookup table.  (Note that for\nmulti-component scalars, the particular component to use for\nmapping can be specified using the SelectColorArray() method.)\n"},
  {(char*)"SetColorModeToMapScalars", PyvtkMapper_SetColorModeToMapScalars, 1,
   (char*)"V.SetColorModeToMapScalars()\nC++: void SetColorModeToMapScalars()\n\nControl how the scalar data is mapped to colors.  By default\n(ColorModeToDefault), unsigned char scalars are treated as\ncolors, and NOT mapped through the lookup table, while everything\nelse is. Setting ColorModeToMapScalars means that all scalar data\nwill be mapped through the lookup table.  (Note that for\nmulti-component scalars, the particular component to use for\nmapping can be specified using the SelectColorArray() method.)\n"},
  {(char*)"GetColorModeAsString", PyvtkMapper_GetColorModeAsString, 1,
   (char*)"V.GetColorModeAsString() -> string\nC++: const char *GetColorModeAsString()\n\nReturn the method of coloring scalar data.\n"},
  {(char*)"SetInterpolateScalarsBeforeMapping", PyvtkMapper_SetInterpolateScalarsBeforeMapping, 1,
   (char*)"V.SetInterpolateScalarsBeforeMapping(int)\nC++: void SetInterpolateScalarsBeforeMapping(int a)\n\nBy default, vertex color is used to map colors to a surface.\nColors are interpolated after being mapped. This option avoids\ncolor interpolation by using a one dimensional texture map for\nthe colors.\n"},
  {(char*)"GetInterpolateScalarsBeforeMapping", PyvtkMapper_GetInterpolateScalarsBeforeMapping, 1,
   (char*)"V.GetInterpolateScalarsBeforeMapping() -> int\nC++: int GetInterpolateScalarsBeforeMapping()\n\nBy default, vertex color is used to map colors to a surface.\nColors are interpolated after being mapped. This option avoids\ncolor interpolation by using a one dimensional texture map for\nthe colors.\n"},
  {(char*)"InterpolateScalarsBeforeMappingOn", PyvtkMapper_InterpolateScalarsBeforeMappingOn, 1,
   (char*)"V.InterpolateScalarsBeforeMappingOn()\nC++: void InterpolateScalarsBeforeMappingOn()\n\nBy default, vertex color is used to map colors to a surface.\nColors are interpolated after being mapped. This option avoids\ncolor interpolation by using a one dimensional texture map for\nthe colors.\n"},
  {(char*)"InterpolateScalarsBeforeMappingOff", PyvtkMapper_InterpolateScalarsBeforeMappingOff, 1,
   (char*)"V.InterpolateScalarsBeforeMappingOff()\nC++: void InterpolateScalarsBeforeMappingOff()\n\nBy default, vertex color is used to map colors to a surface.\nColors are interpolated after being mapped. This option avoids\ncolor interpolation by using a one dimensional texture map for\nthe colors.\n"},
  {(char*)"SetUseLookupTableScalarRange", PyvtkMapper_SetUseLookupTableScalarRange, 1,
   (char*)"V.SetUseLookupTableScalarRange(int)\nC++: void SetUseLookupTableScalarRange(int a)\n\nControl whether the mapper sets the lookuptable range based on\nits own ScalarRange, or whether it will use the LookupTable\nScalarRange regardless of it's own setting. By default the Mapper\nis allowed to set the LookupTable range, but users who are\nsharing LookupTables between mappers/actors will probably wish to\nforce the mapper to use the LookupTable unchanged.\n"},
  {(char*)"GetUseLookupTableScalarRange", PyvtkMapper_GetUseLookupTableScalarRange, 1,
   (char*)"V.GetUseLookupTableScalarRange() -> int\nC++: int GetUseLookupTableScalarRange()\n\nControl whether the mapper sets the lookuptable range based on\nits own ScalarRange, or whether it will use the LookupTable\nScalarRange regardless of it's own setting. By default the Mapper\nis allowed to set the LookupTable range, but users who are\nsharing LookupTables between mappers/actors will probably wish to\nforce the mapper to use the LookupTable unchanged.\n"},
  {(char*)"UseLookupTableScalarRangeOn", PyvtkMapper_UseLookupTableScalarRangeOn, 1,
   (char*)"V.UseLookupTableScalarRangeOn()\nC++: void UseLookupTableScalarRangeOn()\n\nControl whether the mapper sets the lookuptable range based on\nits own ScalarRange, or whether it will use the LookupTable\nScalarRange regardless of it's own setting. By default the Mapper\nis allowed to set the LookupTable range, but users who are\nsharing LookupTables between mappers/actors will probably wish to\nforce the mapper to use the LookupTable unchanged.\n"},
  {(char*)"UseLookupTableScalarRangeOff", PyvtkMapper_UseLookupTableScalarRangeOff, 1,
   (char*)"V.UseLookupTableScalarRangeOff()\nC++: void UseLookupTableScalarRangeOff()\n\nControl whether the mapper sets the lookuptable range based on\nits own ScalarRange, or whether it will use the LookupTable\nScalarRange regardless of it's own setting. By default the Mapper\nis allowed to set the LookupTable range, but users who are\nsharing LookupTables between mappers/actors will probably wish to\nforce the mapper to use the LookupTable unchanged.\n"},
  {(char*)"SetScalarRange", PyvtkMapper_SetScalarRange, 1,
   (char*)"V.SetScalarRange(float, float)\nC++: void SetScalarRange(double, double)\nV.SetScalarRange((float, float))\nC++: void SetScalarRange(double a[2])\n\n"},
  {(char*)"GetScalarRange", PyvtkMapper_GetScalarRange, 1,
   (char*)"V.GetScalarRange() -> (float, float)\nC++: double *GetScalarRange()\n\nSpecify range in terms of scalar minimum and maximum (smin,smax).\nThese values are used to map scalars into lookup table. Has no\neffect when UseLookupTableScalarRange is true.\n"},
  {(char*)"SetImmediateModeRendering", PyvtkMapper_SetImmediateModeRendering, 1,
   (char*)"V.SetImmediateModeRendering(int)\nC++: void SetImmediateModeRendering(int a)\n\nTurn on/off flag to control whether data is rendered using\nimmediate mode or note. Immediate mode rendering tends to be\nslower but it can handle larger datasets. The default value is\nimmediate mode off. If you are having problems rendering a large\ndataset you might want to consider using immediate more\nrendering.\n"},
  {(char*)"GetImmediateModeRendering", PyvtkMapper_GetImmediateModeRendering, 1,
   (char*)"V.GetImmediateModeRendering() -> int\nC++: int GetImmediateModeRendering()\n\nTurn on/off flag to control whether data is rendered using\nimmediate mode or note. Immediate mode rendering tends to be\nslower but it can handle larger datasets. The default value is\nimmediate mode off. If you are having problems rendering a large\ndataset you might want to consider using immediate more\nrendering.\n"},
  {(char*)"ImmediateModeRenderingOn", PyvtkMapper_ImmediateModeRenderingOn, 1,
   (char*)"V.ImmediateModeRenderingOn()\nC++: void ImmediateModeRenderingOn()\n\nTurn on/off flag to control whether data is rendered using\nimmediate mode or note. Immediate mode rendering tends to be\nslower but it can handle larger datasets. The default value is\nimmediate mode off. If you are having problems rendering a large\ndataset you might want to consider using immediate more\nrendering.\n"},
  {(char*)"ImmediateModeRenderingOff", PyvtkMapper_ImmediateModeRenderingOff, 1,
   (char*)"V.ImmediateModeRenderingOff()\nC++: void ImmediateModeRenderingOff()\n\nTurn on/off flag to control whether data is rendered using\nimmediate mode or note. Immediate mode rendering tends to be\nslower but it can handle larger datasets. The default value is\nimmediate mode off. If you are having problems rendering a large\ndataset you might want to consider using immediate more\nrendering.\n"},
  {(char*)"SetGlobalImmediateModeRendering", PyvtkMapper_SetGlobalImmediateModeRendering, 1,
   (char*)"V.SetGlobalImmediateModeRendering(int)\nC++: static void SetGlobalImmediateModeRendering(int val)\n\nTurn on/off flag to control whether data is rendered using\nimmediate mode or note. Immediate mode rendering tends to be\nslower but it can handle larger datasets. The default value is\nimmediate mode off. If you are having problems rendering a large\ndataset you might want to consider using immediate more\nrendering.\n"},
  {(char*)"GlobalImmediateModeRenderingOn", PyvtkMapper_GlobalImmediateModeRenderingOn, 1,
   (char*)"V.GlobalImmediateModeRenderingOn()\nC++: static void GlobalImmediateModeRenderingOn()\n\nTurn on/off flag to control whether data is rendered using\nimmediate mode or note. Immediate mode rendering tends to be\nslower but it can handle larger datasets. The default value is\nimmediate mode off. If you are having problems rendering a large\ndataset you might want to consider using immediate more\nrendering.\n"},
  {(char*)"GlobalImmediateModeRenderingOff", PyvtkMapper_GlobalImmediateModeRenderingOff, 1,
   (char*)"V.GlobalImmediateModeRenderingOff()\nC++: static void GlobalImmediateModeRenderingOff()\n\nTurn on/off flag to control whether data is rendered using\nimmediate mode or note. Immediate mode rendering tends to be\nslower but it can handle larger datasets. The default value is\nimmediate mode off. If you are having problems rendering a large\ndataset you might want to consider using immediate more\nrendering.\n"},
  {(char*)"GetGlobalImmediateModeRendering", PyvtkMapper_GetGlobalImmediateModeRendering, 1,
   (char*)"V.GetGlobalImmediateModeRendering() -> int\nC++: static int GetGlobalImmediateModeRendering()\n\nTurn on/off flag to control whether data is rendered using\nimmediate mode or note. Immediate mode rendering tends to be\nslower but it can handle larger datasets. The default value is\nimmediate mode off. If you are having problems rendering a large\ndataset you might want to consider using immediate more\nrendering.\n"},
  {(char*)"GetForceCompileOnly", PyvtkMapper_GetForceCompileOnly, 1,
   (char*)"V.GetForceCompileOnly() -> int\nC++: int GetForceCompileOnly()\n\nForce compile only mode in case display lists are used\n(ImmediateModeRendering is false). If ImmediateModeRendering is\ntrue, no rendering happens. Changing the value of this flag does\nnot change modified time of the mapper. Initial value is false.\nThis can be used by another rendering class which also uses\ndisplay lists (call of display lists can be nested but not their\ncreation.) There is no good reason to expose it to wrappers.\n"},
  {(char*)"SetForceCompileOnly", PyvtkMapper_SetForceCompileOnly, 1,
   (char*)"V.SetForceCompileOnly(int)\nC++: void SetForceCompileOnly(int value)\n\nForce compile only mode in case display lists are used\n(ImmediateModeRendering is false). If ImmediateModeRendering is\ntrue, no rendering happens. Changing the value of this flag does\nnot change modified time of the mapper. Initial value is false.\nThis can be used by another rendering class which also uses\ndisplay lists (call of display lists can be nested but not their\ncreation.) There is no good reason to expose it to wrappers.\n"},
  {(char*)"SetScalarMode", PyvtkMapper_SetScalarMode, 1,
   (char*)"V.SetScalarMode(int)\nC++: void SetScalarMode(int a)\n\nControl how the filter works with scalar point data and cell\nattribute data.  By default (ScalarModeToDefault), the filter\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the filter to\nuse point data (ScalarModeToUsePointData) or cell data\n(ScalarModeToUseCellData). You can also choose to get the scalars\nfrom an array in point field data (ScalarModeToUsePointFieldData)\nor cell field data (ScalarModeToUseCellFieldData).  If scalars\nare coming from a field data array, you must call\nSelectColorArray before you call GetColors. When ScalarMode is\nset to use Field Data (ScalarModeToFieldData), you must call\nSelectColorArray to choose the field data array to be used to\ncolor cells. In this mode, if the poly data has triangle strips,\nthe field data is treated as the celldata for each mini-cell\nformed by a triangle in the strip rather than the entire strip.\n"},
  {(char*)"GetScalarMode", PyvtkMapper_GetScalarMode, 1,
   (char*)"V.GetScalarMode() -> int\nC++: int GetScalarMode()\n\nControl how the filter works with scalar point data and cell\nattribute data.  By default (ScalarModeToDefault), the filter\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the filter to\nuse point data (ScalarModeToUsePointData) or cell data\n(ScalarModeToUseCellData). You can also choose to get the scalars\nfrom an array in point field data (ScalarModeToUsePointFieldData)\nor cell field data (ScalarModeToUseCellFieldData).  If scalars\nare coming from a field data array, you must call\nSelectColorArray before you call GetColors. When ScalarMode is\nset to use Field Data (ScalarModeToFieldData), you must call\nSelectColorArray to choose the field data array to be used to\ncolor cells. In this mode, if the poly data has triangle strips,\nthe field data is treated as the celldata for each mini-cell\nformed by a triangle in the strip rather than the entire strip.\n"},
  {(char*)"SetScalarModeToDefault", PyvtkMapper_SetScalarModeToDefault, 1,
   (char*)"V.SetScalarModeToDefault()\nC++: void SetScalarModeToDefault()\n\nControl how the filter works with scalar point data and cell\nattribute data.  By default (ScalarModeToDefault), the filter\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the filter to\nuse point data (ScalarModeToUsePointData) or cell data\n(ScalarModeToUseCellData). You can also choose to get the scalars\nfrom an array in point field data (ScalarModeToUsePointFieldData)\nor cell field data (ScalarModeToUseCellFieldData).  If scalars\nare coming from a field data array, you must call\nSelectColorArray before you call GetColors. When ScalarMode is\nset to use Field Data (ScalarModeToFieldData), you must call\nSelectColorArray to choose the field data array to be used to\ncolor cells. In this mode, if the poly data has triangle strips,\nthe field data is treated as the celldata for each mini-cell\nformed by a triangle in the strip rather than the entire strip.\n"},
  {(char*)"SetScalarModeToUsePointData", PyvtkMapper_SetScalarModeToUsePointData, 1,
   (char*)"V.SetScalarModeToUsePointData()\nC++: void SetScalarModeToUsePointData()\n\nControl how the filter works with scalar point data and cell\nattribute data.  By default (ScalarModeToDefault), the filter\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the filter to\nuse point data (ScalarModeToUsePointData) or cell data\n(ScalarModeToUseCellData). You can also choose to get the scalars\nfrom an array in point field data (ScalarModeToUsePointFieldData)\nor cell field data (ScalarModeToUseCellFieldData).  If scalars\nare coming from a field data array, you must call\nSelectColorArray before you call GetColors. When ScalarMode is\nset to use Field Data (ScalarModeToFieldData), you must call\nSelectColorArray to choose the field data array to be used to\ncolor cells. In this mode, if the poly data has triangle strips,\nthe field data is treated as the celldata for each mini-cell\nformed by a triangle in the strip rather than the entire strip.\n"},
  {(char*)"SetScalarModeToUseCellData", PyvtkMapper_SetScalarModeToUseCellData, 1,
   (char*)"V.SetScalarModeToUseCellData()\nC++: void SetScalarModeToUseCellData()\n\nControl how the filter works with scalar point data and cell\nattribute data.  By default (ScalarModeToDefault), the filter\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the filter to\nuse point data (ScalarModeToUsePointData) or cell data\n(ScalarModeToUseCellData). You can also choose to get the scalars\nfrom an array in point field data (ScalarModeToUsePointFieldData)\nor cell field data (ScalarModeToUseCellFieldData).  If scalars\nare coming from a field data array, you must call\nSelectColorArray before you call GetColors. When ScalarMode is\nset to use Field Data (ScalarModeToFieldData), you must call\nSelectColorArray to choose the field data array to be used to\ncolor cells. In this mode, if the poly data has triangle strips,\nthe field data is treated as the celldata for each mini-cell\nformed by a triangle in the strip rather than the entire strip.\n"},
  {(char*)"SetScalarModeToUsePointFieldData", PyvtkMapper_SetScalarModeToUsePointFieldData, 1,
   (char*)"V.SetScalarModeToUsePointFieldData()\nC++: void SetScalarModeToUsePointFieldData()\n\nControl how the filter works with scalar point data and cell\nattribute data.  By default (ScalarModeToDefault), the filter\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the filter to\nuse point data (ScalarModeToUsePointData) or cell data\n(ScalarModeToUseCellData). You can also choose to get the scalars\nfrom an array in point field data (ScalarModeToUsePointFieldData)\nor cell field data (ScalarModeToUseCellFieldData).  If scalars\nare coming from a field data array, you must call\nSelectColorArray before you call GetColors. When ScalarMode is\nset to use Field Data (ScalarModeToFieldData), you must call\nSelectColorArray to choose the field data array to be used to\ncolor cells. In this mode, if the poly data has triangle strips,\nthe field data is treated as the celldata for each mini-cell\nformed by a triangle in the strip rather than the entire strip.\n"},
  {(char*)"SetScalarModeToUseCellFieldData", PyvtkMapper_SetScalarModeToUseCellFieldData, 1,
   (char*)"V.SetScalarModeToUseCellFieldData()\nC++: void SetScalarModeToUseCellFieldData()\n\nControl how the filter works with scalar point data and cell\nattribute data.  By default (ScalarModeToDefault), the filter\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the filter to\nuse point data (ScalarModeToUsePointData) or cell data\n(ScalarModeToUseCellData). You can also choose to get the scalars\nfrom an array in point field data (ScalarModeToUsePointFieldData)\nor cell field data (ScalarModeToUseCellFieldData).  If scalars\nare coming from a field data array, you must call\nSelectColorArray before you call GetColors. When ScalarMode is\nset to use Field Data (ScalarModeToFieldData), you must call\nSelectColorArray to choose the field data array to be used to\ncolor cells. In this mode, if the poly data has triangle strips,\nthe field data is treated as the celldata for each mini-cell\nformed by a triangle in the strip rather than the entire strip.\n"},
  {(char*)"SetScalarModeToUseFieldData", PyvtkMapper_SetScalarModeToUseFieldData, 1,
   (char*)"V.SetScalarModeToUseFieldData()\nC++: void SetScalarModeToUseFieldData()\n\nControl how the filter works with scalar point data and cell\nattribute data.  By default (ScalarModeToDefault), the filter\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the filter to\nuse point data (ScalarModeToUsePointData) or cell data\n(ScalarModeToUseCellData). You can also choose to get the scalars\nfrom an array in point field data (ScalarModeToUsePointFieldData)\nor cell field data (ScalarModeToUseCellFieldData).  If scalars\nare coming from a field data array, you must call\nSelectColorArray before you call GetColors. When ScalarMode is\nset to use Field Data (ScalarModeToFieldData), you must call\nSelectColorArray to choose the field data array to be used to\ncolor cells. In this mode, if the poly data has triangle strips,\nthe field data is treated as the celldata for each mini-cell\nformed by a triangle in the strip rather than the entire strip.\n"},
  {(char*)"SelectColorArray", PyvtkMapper_SelectColorArray, 1,
   (char*)"V.SelectColorArray(int)\nC++: void SelectColorArray(int arrayNum)\nV.SelectColorArray(string)\nC++: void SelectColorArray(const char *arrayName)\n\nWhen ScalarMode is set to UsePointFieldData or UseCellFieldData,\nyou can specify which array to use for coloring using these\nmethods. The lookup table will decide how to convert vectors to\ncolors.\n"},
  {(char*)"ColorByArrayComponent", PyvtkMapper_ColorByArrayComponent, 1,
   (char*)"V.ColorByArrayComponent(int, int)\nC++: void ColorByArrayComponent(int arrayNum, int component)\nV.ColorByArrayComponent(string, int)\nC++: void ColorByArrayComponent(const char *arrayName,\n    int component)\n\nLegacy: These methods used to be used to specify the array\ncomponent. It is better to do this in the lookup table.\n"},
  {(char*)"GetArrayName", PyvtkMapper_GetArrayName, 1,
   (char*)"V.GetArrayName() -> string\nC++: char *GetArrayName()\n\nGet the array name or number and component to color by.\n"},
  {(char*)"GetArrayId", PyvtkMapper_GetArrayId, 1,
   (char*)"V.GetArrayId() -> int\nC++: int GetArrayId()\n\nGet the array name or number and component to color by.\n"},
  {(char*)"GetArrayAccessMode", PyvtkMapper_GetArrayAccessMode, 1,
   (char*)"V.GetArrayAccessMode() -> int\nC++: int GetArrayAccessMode()\n\nGet the array name or number and component to color by.\n"},
  {(char*)"GetArrayComponent", PyvtkMapper_GetArrayComponent, 1,
   (char*)"V.GetArrayComponent() -> int\nC++: int GetArrayComponent()\n\nGet the array name or number and component to color by.\n"},
  {(char*)"GetScalarModeAsString", PyvtkMapper_GetScalarModeAsString, 1,
   (char*)"V.GetScalarModeAsString() -> string\nC++: const char *GetScalarModeAsString()\n\nReturn the method for obtaining scalar data.\n"},
  {(char*)"SetResolveCoincidentTopology", PyvtkMapper_SetResolveCoincidentTopology, 1,
   (char*)"V.SetResolveCoincidentTopology(int)\nC++: static void SetResolveCoincidentTopology(int val)\n\nSet/Get a global flag that controls whether coincident topology\n(e.g., a line on top of a polygon) is shifted to avoid z-buffer\nresolution (and hence rendering problems). If not off, there are\ntwo methods to choose from. PolygonOffset uses graphics systems\ncalls to shift polygons, but does not distinguish vertices and\nlines from one another. ShiftZBuffer remaps the z-buffer to\ndistinguish vertices, lines, and polygons, but does not always\nproduce acceptable results. If you use the ShiftZBuffer approach,\nyou may also want to set the ResolveCoincidentTopologyZShift\nvalue. (Note: not all mappers/graphics systems implement this\nfunctionality.)\n"},
  {(char*)"GetResolveCoincidentTopology", PyvtkMapper_GetResolveCoincidentTopology, 1,
   (char*)"V.GetResolveCoincidentTopology() -> int\nC++: static int GetResolveCoincidentTopology()\n\nSet/Get a global flag that controls whether coincident topology\n(e.g., a line on top of a polygon) is shifted to avoid z-buffer\nresolution (and hence rendering problems). If not off, there are\ntwo methods to choose from. PolygonOffset uses graphics systems\ncalls to shift polygons, but does not distinguish vertices and\nlines from one another. ShiftZBuffer remaps the z-buffer to\ndistinguish vertices, lines, and polygons, but does not always\nproduce acceptable results. If you use the ShiftZBuffer approach,\nyou may also want to set the ResolveCoincidentTopologyZShift\nvalue. (Note: not all mappers/graphics systems implement this\nfunctionality.)\n"},
  {(char*)"SetResolveCoincidentTopologyToDefault", PyvtkMapper_SetResolveCoincidentTopologyToDefault, 1,
   (char*)"V.SetResolveCoincidentTopologyToDefault()\nC++: static void SetResolveCoincidentTopologyToDefault()\n\nSet/Get a global flag that controls whether coincident topology\n(e.g., a line on top of a polygon) is shifted to avoid z-buffer\nresolution (and hence rendering problems). If not off, there are\ntwo methods to choose from. PolygonOffset uses graphics systems\ncalls to shift polygons, but does not distinguish vertices and\nlines from one another. ShiftZBuffer remaps the z-buffer to\ndistinguish vertices, lines, and polygons, but does not always\nproduce acceptable results. If you use the ShiftZBuffer approach,\nyou may also want to set the ResolveCoincidentTopologyZShift\nvalue. (Note: not all mappers/graphics systems implement this\nfunctionality.)\n"},
  {(char*)"SetResolveCoincidentTopologyToOff", PyvtkMapper_SetResolveCoincidentTopologyToOff, 1,
   (char*)"V.SetResolveCoincidentTopologyToOff()\nC++: static void SetResolveCoincidentTopologyToOff()\n\nSet/Get a global flag that controls whether coincident topology\n(e.g., a line on top of a polygon) is shifted to avoid z-buffer\nresolution (and hence rendering problems). If not off, there are\ntwo methods to choose from. PolygonOffset uses graphics systems\ncalls to shift polygons, but does not distinguish vertices and\nlines from one another. ShiftZBuffer remaps the z-buffer to\ndistinguish vertices, lines, and polygons, but does not always\nproduce acceptable results. If you use the ShiftZBuffer approach,\nyou may also want to set the ResolveCoincidentTopologyZShift\nvalue. (Note: not all mappers/graphics systems implement this\nfunctionality.)\n"},
  {(char*)"SetResolveCoincidentTopologyToPolygonOffset", PyvtkMapper_SetResolveCoincidentTopologyToPolygonOffset, 1,
   (char*)"V.SetResolveCoincidentTopologyToPolygonOffset()\nC++: static void SetResolveCoincidentTopologyToPolygonOffset()\n\nSet/Get a global flag that controls whether coincident topology\n(e.g., a line on top of a polygon) is shifted to avoid z-buffer\nresolution (and hence rendering problems). If not off, there are\ntwo methods to choose from. PolygonOffset uses graphics systems\ncalls to shift polygons, but does not distinguish vertices and\nlines from one another. ShiftZBuffer remaps the z-buffer to\ndistinguish vertices, lines, and polygons, but does not always\nproduce acceptable results. If you use the ShiftZBuffer approach,\nyou may also want to set the ResolveCoincidentTopologyZShift\nvalue. (Note: not all mappers/graphics systems implement this\nfunctionality.)\n"},
  {(char*)"SetResolveCoincidentTopologyToShiftZBuffer", PyvtkMapper_SetResolveCoincidentTopologyToShiftZBuffer, 1,
   (char*)"V.SetResolveCoincidentTopologyToShiftZBuffer()\nC++: static void SetResolveCoincidentTopologyToShiftZBuffer()\n\nSet/Get a global flag that controls whether coincident topology\n(e.g., a line on top of a polygon) is shifted to avoid z-buffer\nresolution (and hence rendering problems). If not off, there are\ntwo methods to choose from. PolygonOffset uses graphics systems\ncalls to shift polygons, but does not distinguish vertices and\nlines from one another. ShiftZBuffer remaps the z-buffer to\ndistinguish vertices, lines, and polygons, but does not always\nproduce acceptable results. If you use the ShiftZBuffer approach,\nyou may also want to set the ResolveCoincidentTopologyZShift\nvalue. (Note: not all mappers/graphics systems implement this\nfunctionality.)\n"},
  {(char*)"SetResolveCoincidentTopologyPolygonOffsetParameters", PyvtkMapper_SetResolveCoincidentTopologyPolygonOffsetParameters, 1,
   (char*)"V.SetResolveCoincidentTopologyPolygonOffsetParameters(float,\n    float)\nC++: static void SetResolveCoincidentTopologyPolygonOffsetParameters(\n    double factor, double units)\n\nUsed to set the polygon offset scale factor and units. Used when\nResolveCoincidentTopology is set to PolygonOffset. These are\nglobal variables.\n"},
  {(char*)"GetResolveCoincidentTopologyPolygonOffsetParameters", PyvtkMapper_GetResolveCoincidentTopologyPolygonOffsetParameters, 1,
   (char*)"V.GetResolveCoincidentTopologyPolygonOffsetParameters(float,\n    float)\nC++: static void GetResolveCoincidentTopologyPolygonOffsetParameters(\n    double &factor, double &units)\n\nUsed to set the polygon offset scale factor and units. Used when\nResolveCoincidentTopology is set to PolygonOffset. These are\nglobal variables.\n"},
  {(char*)"SetResolveCoincidentTopologyPolygonOffsetFaces", PyvtkMapper_SetResolveCoincidentTopologyPolygonOffsetFaces, 1,
   (char*)"V.SetResolveCoincidentTopologyPolygonOffsetFaces(int)\nC++: static void SetResolveCoincidentTopologyPolygonOffsetFaces(\n    int faces)\n\nUsed when ResolveCoincidentTopology is set to PolygonOffset. The\npolygon offset can be applied either to the solid polygonal faces\nor the lines/vertices. When set (default), the offset is applied\nto the faces otherwise it is applied to lines and vertices. This\nis a global variable.\n"},
  {(char*)"GetResolveCoincidentTopologyPolygonOffsetFaces", PyvtkMapper_GetResolveCoincidentTopologyPolygonOffsetFaces, 1,
   (char*)"V.GetResolveCoincidentTopologyPolygonOffsetFaces() -> int\nC++: static int GetResolveCoincidentTopologyPolygonOffsetFaces()\n\nUsed when ResolveCoincidentTopology is set to PolygonOffset. The\npolygon offset can be applied either to the solid polygonal faces\nor the lines/vertices. When set (default), the offset is applied\nto the faces otherwise it is applied to lines and vertices. This\nis a global variable.\n"},
  {(char*)"SetResolveCoincidentTopologyZShift", PyvtkMapper_SetResolveCoincidentTopologyZShift, 1,
   (char*)"V.SetResolveCoincidentTopologyZShift(float)\nC++: static void SetResolveCoincidentTopologyZShift(double val)\n\nUsed to set the z-shift if ResolveCoincidentTopology is set to\nShiftZBuffer. This is a global variable.\n"},
  {(char*)"GetResolveCoincidentTopologyZShift", PyvtkMapper_GetResolveCoincidentTopologyZShift, 1,
   (char*)"V.GetResolveCoincidentTopologyZShift() -> float\nC++: static double GetResolveCoincidentTopologyZShift()\n\nUsed to set the z-shift if ResolveCoincidentTopology is set to\nShiftZBuffer. This is a global variable.\n"},
  {(char*)"GetBounds", PyvtkMapper_GetBounds, 1,
   (char*)"V.GetBounds() -> (float, float, float, float, float, float)\nC++: virtual double *GetBounds()\nV.GetBounds([float, float, float, float, float, float])\nC++: virtual void GetBounds(double bounds[6])\n\nReturn bounding box (array of six doubles) of data expressed as\n(xmin,xmax, ymin,ymax, zmin,zmax).\n"},
  {(char*)"SetRenderTime", PyvtkMapper_SetRenderTime, 1,
   (char*)"V.SetRenderTime(float)\nC++: void SetRenderTime(double time)\n\nThis instance variable is used by vtkLODActor to determine which\nmapper to use.  It is an estimate of the time necessary to\nrender. Setting the render time does not modify the mapper.\n"},
  {(char*)"GetRenderTime", PyvtkMapper_GetRenderTime, 1,
   (char*)"V.GetRenderTime() -> float\nC++: double GetRenderTime()\n\nThis instance variable is used by vtkLODActor to determine which\nmapper to use.  It is an estimate of the time necessary to\nrender. Setting the render time does not modify the mapper.\n"},
  {(char*)"GetInput", PyvtkMapper_GetInput, 1,
   (char*)"V.GetInput() -> vtkDataSet\nC++: vtkDataSet *GetInput()\n\nGet the input as a vtkDataSet.  This method is overridden in the\nspecialized mapper classes to return more specific data types.\n"},
  {(char*)"GetInputAsDataSet", PyvtkMapper_GetInputAsDataSet, 1,
   (char*)"V.GetInputAsDataSet() -> vtkDataSet\nC++: vtkDataSet *GetInputAsDataSet()\n\nGet the input to this mapper as a vtkDataSet, instead of as a\nmore specialized data type that the subclass may return from\nGetInput().  This method is provided for use in the wrapper\nlanguages, C++ programmers should use GetInput() instead.\n"},
  {(char*)"MapScalars", PyvtkMapper_MapScalars, 1,
   (char*)"V.MapScalars(float) -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *MapScalars(double alpha)\n\nMap the scalars (if there are any scalars and ScalarVisibility is\non) through the lookup table, returning an unsigned char RGBA\narray. This is typically done as part of the rendering process.\nThe alpha parameter allows the blending of the scalars with an\nadditional alpha (typically which comes from a vtkActor, etc.)\n"},
  {(char*)"SetScalarMaterialMode", PyvtkMapper_SetScalarMaterialMode, 1,
   (char*)"V.SetScalarMaterialMode(int)\nC++: void SetScalarMaterialMode(int a)\n\nSet/Get the light-model color mode.\n"},
  {(char*)"GetScalarMaterialMode", PyvtkMapper_GetScalarMaterialMode, 1,
   (char*)"V.GetScalarMaterialMode() -> int\nC++: int GetScalarMaterialMode()\n\nSet/Get the light-model color mode.\n"},
  {(char*)"SetScalarMaterialModeToDefault", PyvtkMapper_SetScalarMaterialModeToDefault, 1,
   (char*)"V.SetScalarMaterialModeToDefault()\nC++: void SetScalarMaterialModeToDefault()\n\nSet/Get the light-model color mode.\n"},
  {(char*)"SetScalarMaterialModeToAmbient", PyvtkMapper_SetScalarMaterialModeToAmbient, 1,
   (char*)"V.SetScalarMaterialModeToAmbient()\nC++: void SetScalarMaterialModeToAmbient()\n\nSet/Get the light-model color mode.\n"},
  {(char*)"SetScalarMaterialModeToDiffuse", PyvtkMapper_SetScalarMaterialModeToDiffuse, 1,
   (char*)"V.SetScalarMaterialModeToDiffuse()\nC++: void SetScalarMaterialModeToDiffuse()\n\nSet/Get the light-model color mode.\n"},
  {(char*)"SetScalarMaterialModeToAmbientAndDiffuse", PyvtkMapper_SetScalarMaterialModeToAmbientAndDiffuse, 1,
   (char*)"V.SetScalarMaterialModeToAmbientAndDiffuse()\nC++: void SetScalarMaterialModeToAmbientAndDiffuse()\n\nSet/Get the light-model color mode.\n"},
  {(char*)"GetScalarMaterialModeAsString", PyvtkMapper_GetScalarMaterialModeAsString, 1,
   (char*)"V.GetScalarMaterialModeAsString() -> string\nC++: const char *GetScalarMaterialModeAsString()\n\nReturn the light-model color mode.\n"},
  {(char*)"GetSupportsSelection", PyvtkMapper_GetSupportsSelection, 1,
   (char*)"V.GetSupportsSelection() -> bool\nC++: virtual bool GetSupportsSelection()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS Used by\nvtkHardwareSelector to determine if the prop supports hardware\nselection.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkMapper_Methods,
    "vtkMapper", modulename,
    NULL, NULL,
    PyvtkMapper_Doc(),
    PyVTKClass_vtkAbstractMapper3DNew(modulename));
  return cls;
}

const char **PyvtkMapper_Doc()
{
  static const char *docstring[] = {
    "vtkMapper - abstract class specifies interface to map data to\ngraphics primitives\n\n",
    "Superclass: vtkAbstractMapper3D\n\n",
    "vtkMapper is an abstract class to specify interface between data and\ngraphics primitives. Subclasses of vtkMapper map data through a\nlookuptable and control the creation of rendering primitives that\ninterface to the graphics library. The mapping can be controlled by\nsupplying a lookup table and specifying a scalar range to map data\nthrough.\n\nThere are several important control mechanisms affecting",
    " the behavior\nof this object. The ScalarVisibility flag controls whether scalar\ndata (if any) controls the color of the associated actor(s) that\nrefer to the mapper. The ScalarMode ivar is used to determine whether\nscalar point data or cell data is used to color the object. By\ndefault, point data scalars are used unless there are none, in which\ncell scalars are used. Or you can explicitly control ",
    "whether to use\npoint or cell scalar data. Finally, the mapping of scalars through\nthe lookup table varies depending on the setting of the ColorMode\nflag. See the documentation for the appropriate methods for an\nexplanation.\n\nAnother important feature of this class is whether to use immediate\nmode rendering (ImmediateModeRenderingOn) or display list rendering\n(ImmediateModeRenderingOff). If display",
    " lists are used, a data\nstructure is constructed (generally in the rendering library) which\ncan then be rapidly traversed and rendered by the rendering library.\nThe disadvantage of display lists is that they require additionally\nmemory which may affect the performance of the system.\n\nAnother important feature of the mapper is the ability to shift the\nz-buffer to resolve coincident topology. For ex",
    "ample, if you'd like\nto draw a mesh with some edges a different color, and the edges lie\non the mesh, this feature can be useful to get nice looking lines.\n(See the ResolveCoincidentTopology-related methods.)\n\nSee Also:\n\nvtkDataSetMapper vtkPolyDataMapper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMapper", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_RESOLVE_OFF", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_RESOLVE_POLYGON_OFFSET", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_RESOLVE_SHIFT_ZBUFFER", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_MATERIALMODE_DEFAULT", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_MATERIALMODE_AMBIENT", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_MATERIALMODE_DIFFUSE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(3);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_MATERIALMODE_AMBIENT_AND_DIFFUSE", o) != 0)
    {
    Py_DECREF(o);
    }

}

