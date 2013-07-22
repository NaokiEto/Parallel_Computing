// python wrapper for vtkQuadricLODActor
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
#include "vtkQuadricLODActor.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkQuadricLODActor(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkQuadricLODActor(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkQuadricLODActorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkQuadricLODActorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkActorNew
extern "C" { PyObject *PyVTKClass_vtkActorNew(const char *); }
#define DECLARED_PyVTKClass_vtkActorNew
#endif

static const char **PyvtkQuadricLODActor_Doc();


static PyObject *
PyvtkQuadricLODActor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

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
      tempr = op->vtkQuadricLODActor::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

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
      tempr = op->vtkQuadricLODActor::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  vtkQuadricLODActor *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkQuadricLODActor::NewInstance();
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
PyvtkQuadricLODActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkQuadricLODActor *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkQuadricLODActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_SetDeferLODConstruction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeferLODConstruction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDeferLODConstruction(temp0);
      }
    else
      {
      op->vtkQuadricLODActor::SetDeferLODConstruction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_GetDeferLODConstruction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeferLODConstruction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDeferLODConstruction();
      }
    else
      {
      tempr = op->vtkQuadricLODActor::GetDeferLODConstruction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_DeferLODConstructionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeferLODConstructionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DeferLODConstructionOn();
      }
    else
      {
      op->vtkQuadricLODActor::DeferLODConstructionOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_DeferLODConstructionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeferLODConstructionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DeferLODConstructionOff();
      }
    else
      {
      op->vtkQuadricLODActor::DeferLODConstructionOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_SetStatic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStatic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

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
      op->vtkQuadricLODActor::SetStatic(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_GetStatic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStatic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

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
      tempr = op->vtkQuadricLODActor::GetStatic();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_StaticOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StaticOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StaticOn();
      }
    else
      {
      op->vtkQuadricLODActor::StaticOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_StaticOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StaticOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StaticOff();
      }
    else
      {
      op->vtkQuadricLODActor::StaticOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_SetDataConfiguration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataConfiguration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDataConfiguration(temp0);
      }
    else
      {
      op->vtkQuadricLODActor::SetDataConfiguration(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_GetDataConfigurationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataConfigurationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataConfigurationMinValue();
      }
    else
      {
      tempr = op->vtkQuadricLODActor::GetDataConfigurationMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_GetDataConfigurationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataConfigurationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataConfigurationMaxValue();
      }
    else
      {
      tempr = op->vtkQuadricLODActor::GetDataConfigurationMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_GetDataConfiguration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataConfiguration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataConfiguration();
      }
    else
      {
      tempr = op->vtkQuadricLODActor::GetDataConfiguration();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_SetDataConfigurationToUnknown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataConfigurationToUnknown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataConfigurationToUnknown();
      }
    else
      {
      op->vtkQuadricLODActor::SetDataConfigurationToUnknown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_SetDataConfigurationToXLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataConfigurationToXLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataConfigurationToXLine();
      }
    else
      {
      op->vtkQuadricLODActor::SetDataConfigurationToXLine();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_SetDataConfigurationToYLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataConfigurationToYLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataConfigurationToYLine();
      }
    else
      {
      op->vtkQuadricLODActor::SetDataConfigurationToYLine();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_SetDataConfigurationToZLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataConfigurationToZLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataConfigurationToZLine();
      }
    else
      {
      op->vtkQuadricLODActor::SetDataConfigurationToZLine();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_SetDataConfigurationToXYPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataConfigurationToXYPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataConfigurationToXYPlane();
      }
    else
      {
      op->vtkQuadricLODActor::SetDataConfigurationToXYPlane();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_SetDataConfigurationToYZPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataConfigurationToYZPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataConfigurationToYZPlane();
      }
    else
      {
      op->vtkQuadricLODActor::SetDataConfigurationToYZPlane();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_SetDataConfigurationToXZPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataConfigurationToXZPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataConfigurationToXZPlane();
      }
    else
      {
      op->vtkQuadricLODActor::SetDataConfigurationToXZPlane();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_SetDataConfigurationToXYZVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataConfigurationToXYZVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataConfigurationToXYZVolume();
      }
    else
      {
      op->vtkQuadricLODActor::SetDataConfigurationToXYZVolume();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_SetCollapseDimensionRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCollapseDimensionRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCollapseDimensionRatio(temp0);
      }
    else
      {
      op->vtkQuadricLODActor::SetCollapseDimensionRatio(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_GetCollapseDimensionRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCollapseDimensionRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCollapseDimensionRatioMinValue();
      }
    else
      {
      tempr = op->vtkQuadricLODActor::GetCollapseDimensionRatioMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_GetCollapseDimensionRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCollapseDimensionRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCollapseDimensionRatioMaxValue();
      }
    else
      {
      tempr = op->vtkQuadricLODActor::GetCollapseDimensionRatioMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_GetCollapseDimensionRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCollapseDimensionRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCollapseDimensionRatio();
      }
    else
      {
      tempr = op->vtkQuadricLODActor::GetCollapseDimensionRatio();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_SetLODFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLODFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  vtkQuadricClustering *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkQuadricClustering"))
    {
    if (ap.IsBound())
      {
      op->SetLODFilter(temp0);
      }
    else
      {
      op->vtkQuadricLODActor::SetLODFilter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_GetLODFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLODFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  vtkQuadricClustering *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLODFilter();
      }
    else
      {
      tempr = op->vtkQuadricLODActor::GetLODFilter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_SetMaximumDisplayListSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumDisplayListSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumDisplayListSize(temp0);
      }
    else
      {
      op->vtkQuadricLODActor::SetMaximumDisplayListSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_GetMaximumDisplayListSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumDisplayListSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumDisplayListSizeMinValue();
      }
    else
      {
      tempr = op->vtkQuadricLODActor::GetMaximumDisplayListSizeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_GetMaximumDisplayListSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumDisplayListSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumDisplayListSizeMaxValue();
      }
    else
      {
      tempr = op->vtkQuadricLODActor::GetMaximumDisplayListSizeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_GetMaximumDisplayListSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumDisplayListSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumDisplayListSize();
      }
    else
      {
      tempr = op->vtkQuadricLODActor::GetMaximumDisplayListSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_SetPropType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPropType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPropType(temp0);
      }
    else
      {
      op->vtkQuadricLODActor::SetPropType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_GetPropTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPropTypeMinValue();
      }
    else
      {
      tempr = op->vtkQuadricLODActor::GetPropTypeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_GetPropTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPropTypeMaxValue();
      }
    else
      {
      tempr = op->vtkQuadricLODActor::GetPropTypeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_GetPropType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPropType();
      }
    else
      {
      tempr = op->vtkQuadricLODActor::GetPropType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_SetPropTypeToFollower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPropTypeToFollower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetPropTypeToFollower();
      }
    else
      {
      op->vtkQuadricLODActor::SetPropTypeToFollower();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_SetPropTypeToActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPropTypeToActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetPropTypeToActor();
      }
    else
      {
      op->vtkQuadricLODActor::SetPropTypeToActor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_SetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

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
      op->vtkQuadricLODActor::SetCamera(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_GetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

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
      tempr = op->vtkQuadricLODActor::GetCamera();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkMapper *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkMapper"))
    {
    if (ap.IsBound())
      {
      op->Render(temp0, temp1);
      }
    else
      {
      op->vtkQuadricLODActor::Render(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

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
      tempr = op->vtkQuadricLODActor::RenderOpaqueGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

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
      op->vtkQuadricLODActor::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricLODActor_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricLODActor *op = static_cast<vtkQuadricLODActor *>(vp);

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
      op->vtkQuadricLODActor::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkQuadricLODActor_Methods[] = {
  {(char*)"GetClassName", PyvtkQuadricLODActor_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard class methods.\n"},
  {(char*)"IsA", PyvtkQuadricLODActor_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard class methods.\n"},
  {(char*)"NewInstance", PyvtkQuadricLODActor_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkQuadricLODActor\nC++: vtkQuadricLODActor *NewInstance()\n\nStandard class methods.\n"},
  {(char*)"SafeDownCast", PyvtkQuadricLODActor_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkQuadricLODActor\nC++: vtkQuadricLODActor *SafeDownCast(vtkObject* o)\n\nStandard class methods.\n"},
  {(char*)"SetDeferLODConstruction", PyvtkQuadricLODActor_SetDeferLODConstruction, 1,
   (char*)"V.SetDeferLODConstruction(int)\nC++: void SetDeferLODConstruction(int a)\n\nSpecify whether to build the LOD immediately (i.e., on the first\nrender) or to wait until the LOD is requested in a subsequent\nrender. By default, LOD construction is not deferred\n(DeferLODConstruction is false).\n"},
  {(char*)"GetDeferLODConstruction", PyvtkQuadricLODActor_GetDeferLODConstruction, 1,
   (char*)"V.GetDeferLODConstruction() -> int\nC++: int GetDeferLODConstruction()\n\nSpecify whether to build the LOD immediately (i.e., on the first\nrender) or to wait until the LOD is requested in a subsequent\nrender. By default, LOD construction is not deferred\n(DeferLODConstruction is false).\n"},
  {(char*)"DeferLODConstructionOn", PyvtkQuadricLODActor_DeferLODConstructionOn, 1,
   (char*)"V.DeferLODConstructionOn()\nC++: void DeferLODConstructionOn()\n\nSpecify whether to build the LOD immediately (i.e., on the first\nrender) or to wait until the LOD is requested in a subsequent\nrender. By default, LOD construction is not deferred\n(DeferLODConstruction is false).\n"},
  {(char*)"DeferLODConstructionOff", PyvtkQuadricLODActor_DeferLODConstructionOff, 1,
   (char*)"V.DeferLODConstructionOff()\nC++: void DeferLODConstructionOff()\n\nSpecify whether to build the LOD immediately (i.e., on the first\nrender) or to wait until the LOD is requested in a subsequent\nrender. By default, LOD construction is not deferred\n(DeferLODConstruction is false).\n"},
  {(char*)"SetStatic", PyvtkQuadricLODActor_SetStatic, 1,
   (char*)"V.SetStatic(int)\nC++: void SetStatic(int a)\n\nTurn on/off a flag to control whether the underlying pipeline is\nstatic. If static, this means that the data pipeline executes\nonce and then not again until the user manually modifies this\nclass. By default, Static is off because trying to debug this is\ntricky, and you should only use it when you know what you are\ndoing.\n"},
  {(char*)"GetStatic", PyvtkQuadricLODActor_GetStatic, 1,
   (char*)"V.GetStatic() -> int\nC++: int GetStatic()\n\nTurn on/off a flag to control whether the underlying pipeline is\nstatic. If static, this means that the data pipeline executes\nonce and then not again until the user manually modifies this\nclass. By default, Static is off because trying to debug this is\ntricky, and you should only use it when you know what you are\ndoing.\n"},
  {(char*)"StaticOn", PyvtkQuadricLODActor_StaticOn, 1,
   (char*)"V.StaticOn()\nC++: void StaticOn()\n\nTurn on/off a flag to control whether the underlying pipeline is\nstatic. If static, this means that the data pipeline executes\nonce and then not again until the user manually modifies this\nclass. By default, Static is off because trying to debug this is\ntricky, and you should only use it when you know what you are\ndoing.\n"},
  {(char*)"StaticOff", PyvtkQuadricLODActor_StaticOff, 1,
   (char*)"V.StaticOff()\nC++: void StaticOff()\n\nTurn on/off a flag to control whether the underlying pipeline is\nstatic. If static, this means that the data pipeline executes\nonce and then not again until the user manually modifies this\nclass. By default, Static is off because trying to debug this is\ntricky, and you should only use it when you know what you are\ndoing.\n"},
  {(char*)"SetDataConfiguration", PyvtkQuadricLODActor_SetDataConfiguration, 1,
   (char*)"V.SetDataConfiguration(int)\nC++: void SetDataConfiguration(int)\n\nForce the binning of the quadric clustering according to\napplication knowledge relative to the dimension of the data. For\nexample, if you know your data lies in a 2D x-y plane, the\nperformance of the quadric clustering algorithm can be greatly\nimproved by indicating this (i.e., the number of resulting\ntriangles, and the quality of the decimation version is better).\nSetting this parameter forces the binning to be configured\nconsistent with the dimnesionality of the data, and the collapse\ndimension ratio is ignored. Specifying the value of\nDataConfiguration to UNKNOWN (the default value) means that the\nclass will attempt to figure the dimension of the class\nautomatically using the CollapseDimensionRatio ivar.\n"},
  {(char*)"GetDataConfigurationMinValue", PyvtkQuadricLODActor_GetDataConfigurationMinValue, 1,
   (char*)"V.GetDataConfigurationMinValue() -> int\nC++: int GetDataConfigurationMinValue()\n\nForce the binning of the quadric clustering according to\napplication knowledge relative to the dimension of the data. For\nexample, if you know your data lies in a 2D x-y plane, the\nperformance of the quadric clustering algorithm can be greatly\nimproved by indicating this (i.e., the number of resulting\ntriangles, and the quality of the decimation version is better).\nSetting this parameter forces the binning to be configured\nconsistent with the dimnesionality of the data, and the collapse\ndimension ratio is ignored. Specifying the value of\nDataConfiguration to UNKNOWN (the default value) means that the\nclass will attempt to figure the dimension of the class\nautomatically using the CollapseDimensionRatio ivar.\n"},
  {(char*)"GetDataConfigurationMaxValue", PyvtkQuadricLODActor_GetDataConfigurationMaxValue, 1,
   (char*)"V.GetDataConfigurationMaxValue() -> int\nC++: int GetDataConfigurationMaxValue()\n\nForce the binning of the quadric clustering according to\napplication knowledge relative to the dimension of the data. For\nexample, if you know your data lies in a 2D x-y plane, the\nperformance of the quadric clustering algorithm can be greatly\nimproved by indicating this (i.e., the number of resulting\ntriangles, and the quality of the decimation version is better).\nSetting this parameter forces the binning to be configured\nconsistent with the dimnesionality of the data, and the collapse\ndimension ratio is ignored. Specifying the value of\nDataConfiguration to UNKNOWN (the default value) means that the\nclass will attempt to figure the dimension of the class\nautomatically using the CollapseDimensionRatio ivar.\n"},
  {(char*)"GetDataConfiguration", PyvtkQuadricLODActor_GetDataConfiguration, 1,
   (char*)"V.GetDataConfiguration() -> int\nC++: int GetDataConfiguration()\n\nForce the binning of the quadric clustering according to\napplication knowledge relative to the dimension of the data. For\nexample, if you know your data lies in a 2D x-y plane, the\nperformance of the quadric clustering algorithm can be greatly\nimproved by indicating this (i.e., the number of resulting\ntriangles, and the quality of the decimation version is better).\nSetting this parameter forces the binning to be configured\nconsistent with the dimnesionality of the data, and the collapse\ndimension ratio is ignored. Specifying the value of\nDataConfiguration to UNKNOWN (the default value) means that the\nclass will attempt to figure the dimension of the class\nautomatically using the CollapseDimensionRatio ivar.\n"},
  {(char*)"SetDataConfigurationToUnknown", PyvtkQuadricLODActor_SetDataConfigurationToUnknown, 1,
   (char*)"V.SetDataConfigurationToUnknown()\nC++: void SetDataConfigurationToUnknown()\n\nForce the binning of the quadric clustering according to\napplication knowledge relative to the dimension of the data. For\nexample, if you know your data lies in a 2D x-y plane, the\nperformance of the quadric clustering algorithm can be greatly\nimproved by indicating this (i.e., the number of resulting\ntriangles, and the quality of the decimation version is better).\nSetting this parameter forces the binning to be configured\nconsistent with the dimnesionality of the data, and the collapse\ndimension ratio is ignored. Specifying the value of\nDataConfiguration to UNKNOWN (the default value) means that the\nclass will attempt to figure the dimension of the class\nautomatically using the CollapseDimensionRatio ivar.\n"},
  {(char*)"SetDataConfigurationToXLine", PyvtkQuadricLODActor_SetDataConfigurationToXLine, 1,
   (char*)"V.SetDataConfigurationToXLine()\nC++: void SetDataConfigurationToXLine()\n\nForce the binning of the quadric clustering according to\napplication knowledge relative to the dimension of the data. For\nexample, if you know your data lies in a 2D x-y plane, the\nperformance of the quadric clustering algorithm can be greatly\nimproved by indicating this (i.e., the number of resulting\ntriangles, and the quality of the decimation version is better).\nSetting this parameter forces the binning to be configured\nconsistent with the dimnesionality of the data, and the collapse\ndimension ratio is ignored. Specifying the value of\nDataConfiguration to UNKNOWN (the default value) means that the\nclass will attempt to figure the dimension of the class\nautomatically using the CollapseDimensionRatio ivar.\n"},
  {(char*)"SetDataConfigurationToYLine", PyvtkQuadricLODActor_SetDataConfigurationToYLine, 1,
   (char*)"V.SetDataConfigurationToYLine()\nC++: void SetDataConfigurationToYLine()\n\nForce the binning of the quadric clustering according to\napplication knowledge relative to the dimension of the data. For\nexample, if you know your data lies in a 2D x-y plane, the\nperformance of the quadric clustering algorithm can be greatly\nimproved by indicating this (i.e., the number of resulting\ntriangles, and the quality of the decimation version is better).\nSetting this parameter forces the binning to be configured\nconsistent with the dimnesionality of the data, and the collapse\ndimension ratio is ignored. Specifying the value of\nDataConfiguration to UNKNOWN (the default value) means that the\nclass will attempt to figure the dimension of the class\nautomatically using the CollapseDimensionRatio ivar.\n"},
  {(char*)"SetDataConfigurationToZLine", PyvtkQuadricLODActor_SetDataConfigurationToZLine, 1,
   (char*)"V.SetDataConfigurationToZLine()\nC++: void SetDataConfigurationToZLine()\n\nForce the binning of the quadric clustering according to\napplication knowledge relative to the dimension of the data. For\nexample, if you know your data lies in a 2D x-y plane, the\nperformance of the quadric clustering algorithm can be greatly\nimproved by indicating this (i.e., the number of resulting\ntriangles, and the quality of the decimation version is better).\nSetting this parameter forces the binning to be configured\nconsistent with the dimnesionality of the data, and the collapse\ndimension ratio is ignored. Specifying the value of\nDataConfiguration to UNKNOWN (the default value) means that the\nclass will attempt to figure the dimension of the class\nautomatically using the CollapseDimensionRatio ivar.\n"},
  {(char*)"SetDataConfigurationToXYPlane", PyvtkQuadricLODActor_SetDataConfigurationToXYPlane, 1,
   (char*)"V.SetDataConfigurationToXYPlane()\nC++: void SetDataConfigurationToXYPlane()\n\nForce the binning of the quadric clustering according to\napplication knowledge relative to the dimension of the data. For\nexample, if you know your data lies in a 2D x-y plane, the\nperformance of the quadric clustering algorithm can be greatly\nimproved by indicating this (i.e., the number of resulting\ntriangles, and the quality of the decimation version is better).\nSetting this parameter forces the binning to be configured\nconsistent with the dimnesionality of the data, and the collapse\ndimension ratio is ignored. Specifying the value of\nDataConfiguration to UNKNOWN (the default value) means that the\nclass will attempt to figure the dimension of the class\nautomatically using the CollapseDimensionRatio ivar.\n"},
  {(char*)"SetDataConfigurationToYZPlane", PyvtkQuadricLODActor_SetDataConfigurationToYZPlane, 1,
   (char*)"V.SetDataConfigurationToYZPlane()\nC++: void SetDataConfigurationToYZPlane()\n\nForce the binning of the quadric clustering according to\napplication knowledge relative to the dimension of the data. For\nexample, if you know your data lies in a 2D x-y plane, the\nperformance of the quadric clustering algorithm can be greatly\nimproved by indicating this (i.e., the number of resulting\ntriangles, and the quality of the decimation version is better).\nSetting this parameter forces the binning to be configured\nconsistent with the dimnesionality of the data, and the collapse\ndimension ratio is ignored. Specifying the value of\nDataConfiguration to UNKNOWN (the default value) means that the\nclass will attempt to figure the dimension of the class\nautomatically using the CollapseDimensionRatio ivar.\n"},
  {(char*)"SetDataConfigurationToXZPlane", PyvtkQuadricLODActor_SetDataConfigurationToXZPlane, 1,
   (char*)"V.SetDataConfigurationToXZPlane()\nC++: void SetDataConfigurationToXZPlane()\n\nForce the binning of the quadric clustering according to\napplication knowledge relative to the dimension of the data. For\nexample, if you know your data lies in a 2D x-y plane, the\nperformance of the quadric clustering algorithm can be greatly\nimproved by indicating this (i.e., the number of resulting\ntriangles, and the quality of the decimation version is better).\nSetting this parameter forces the binning to be configured\nconsistent with the dimnesionality of the data, and the collapse\ndimension ratio is ignored. Specifying the value of\nDataConfiguration to UNKNOWN (the default value) means that the\nclass will attempt to figure the dimension of the class\nautomatically using the CollapseDimensionRatio ivar.\n"},
  {(char*)"SetDataConfigurationToXYZVolume", PyvtkQuadricLODActor_SetDataConfigurationToXYZVolume, 1,
   (char*)"V.SetDataConfigurationToXYZVolume()\nC++: void SetDataConfigurationToXYZVolume()\n\nForce the binning of the quadric clustering according to\napplication knowledge relative to the dimension of the data. For\nexample, if you know your data lies in a 2D x-y plane, the\nperformance of the quadric clustering algorithm can be greatly\nimproved by indicating this (i.e., the number of resulting\ntriangles, and the quality of the decimation version is better).\nSetting this parameter forces the binning to be configured\nconsistent with the dimnesionality of the data, and the collapse\ndimension ratio is ignored. Specifying the value of\nDataConfiguration to UNKNOWN (the default value) means that the\nclass will attempt to figure the dimension of the class\nautomatically using the CollapseDimensionRatio ivar.\n"},
  {(char*)"SetCollapseDimensionRatio", PyvtkQuadricLODActor_SetCollapseDimensionRatio, 1,
   (char*)"V.SetCollapseDimensionRatio(float)\nC++: void SetCollapseDimensionRatio(double)\n\nIf the data configuration is set to UNKNOWN, this class attempts\nto figure out the dimensionality of the data using\nCollapseDimensionRatio. This ivar is the ratio of short edge of\nthe input bounding box to its long edge, which is then used to\ncollapse the data dimension (and set the quadric bin size in that\ndirection to one). By default, this value is 0.05.\n"},
  {(char*)"GetCollapseDimensionRatioMinValue", PyvtkQuadricLODActor_GetCollapseDimensionRatioMinValue, 1,
   (char*)"V.GetCollapseDimensionRatioMinValue() -> float\nC++: double GetCollapseDimensionRatioMinValue()\n\nIf the data configuration is set to UNKNOWN, this class attempts\nto figure out the dimensionality of the data using\nCollapseDimensionRatio. This ivar is the ratio of short edge of\nthe input bounding box to its long edge, which is then used to\ncollapse the data dimension (and set the quadric bin size in that\ndirection to one). By default, this value is 0.05.\n"},
  {(char*)"GetCollapseDimensionRatioMaxValue", PyvtkQuadricLODActor_GetCollapseDimensionRatioMaxValue, 1,
   (char*)"V.GetCollapseDimensionRatioMaxValue() -> float\nC++: double GetCollapseDimensionRatioMaxValue()\n\nIf the data configuration is set to UNKNOWN, this class attempts\nto figure out the dimensionality of the data using\nCollapseDimensionRatio. This ivar is the ratio of short edge of\nthe input bounding box to its long edge, which is then used to\ncollapse the data dimension (and set the quadric bin size in that\ndirection to one). By default, this value is 0.05.\n"},
  {(char*)"GetCollapseDimensionRatio", PyvtkQuadricLODActor_GetCollapseDimensionRatio, 1,
   (char*)"V.GetCollapseDimensionRatio() -> float\nC++: double GetCollapseDimensionRatio()\n\nIf the data configuration is set to UNKNOWN, this class attempts\nto figure out the dimensionality of the data using\nCollapseDimensionRatio. This ivar is the ratio of short edge of\nthe input bounding box to its long edge, which is then used to\ncollapse the data dimension (and set the quadric bin size in that\ndirection to one). By default, this value is 0.05.\n"},
  {(char*)"SetLODFilter", PyvtkQuadricLODActor_SetLODFilter, 1,
   (char*)"V.SetLODFilter(vtkQuadricClustering)\nC++: void SetLODFilter(vtkQuadricClustering *lodFilter)\n\nThis class will create a vtkQuadricClustering algorithm\nautomatically. However, if you would like to specify the filter\nto use, or to access it and configure it, these method provide\naccess to the filter.\n"},
  {(char*)"GetLODFilter", PyvtkQuadricLODActor_GetLODFilter, 1,
   (char*)"V.GetLODFilter() -> vtkQuadricClustering\nC++: vtkQuadricClustering *GetLODFilter()\n\nThis class will create a vtkQuadricClustering algorithm\nautomatically. However, if you would like to specify the filter\nto use, or to access it and configure it, these method provide\naccess to the filter.\n"},
  {(char*)"SetMaximumDisplayListSize", PyvtkQuadricLODActor_SetMaximumDisplayListSize, 1,
   (char*)"V.SetMaximumDisplayListSize(int)\nC++: void SetMaximumDisplayListSize(int)\n\nSpecify the maximum display list size. This variable is used to\ndetermine whether to use display lists\n(ImmediateModeRenderingOff) or not. Controlling display list size\nis important to prevent program crashes (i.e., overly large\ndisplay lists on some graphics hardware will cause faults). The\ndisplay list size is the length of the vtkCellArray representing\nthe topology of the input vtkPolyData.\n"},
  {(char*)"GetMaximumDisplayListSizeMinValue", PyvtkQuadricLODActor_GetMaximumDisplayListSizeMinValue, 1,
   (char*)"V.GetMaximumDisplayListSizeMinValue() -> int\nC++: int GetMaximumDisplayListSizeMinValue()\n\nSpecify the maximum display list size. This variable is used to\ndetermine whether to use display lists\n(ImmediateModeRenderingOff) or not. Controlling display list size\nis important to prevent program crashes (i.e., overly large\ndisplay lists on some graphics hardware will cause faults). The\ndisplay list size is the length of the vtkCellArray representing\nthe topology of the input vtkPolyData.\n"},
  {(char*)"GetMaximumDisplayListSizeMaxValue", PyvtkQuadricLODActor_GetMaximumDisplayListSizeMaxValue, 1,
   (char*)"V.GetMaximumDisplayListSizeMaxValue() -> int\nC++: int GetMaximumDisplayListSizeMaxValue()\n\nSpecify the maximum display list size. This variable is used to\ndetermine whether to use display lists\n(ImmediateModeRenderingOff) or not. Controlling display list size\nis important to prevent program crashes (i.e., overly large\ndisplay lists on some graphics hardware will cause faults). The\ndisplay list size is the length of the vtkCellArray representing\nthe topology of the input vtkPolyData.\n"},
  {(char*)"GetMaximumDisplayListSize", PyvtkQuadricLODActor_GetMaximumDisplayListSize, 1,
   (char*)"V.GetMaximumDisplayListSize() -> int\nC++: int GetMaximumDisplayListSize()\n\nSpecify the maximum display list size. This variable is used to\ndetermine whether to use display lists\n(ImmediateModeRenderingOff) or not. Controlling display list size\nis important to prevent program crashes (i.e., overly large\ndisplay lists on some graphics hardware will cause faults). The\ndisplay list size is the length of the vtkCellArray representing\nthe topology of the input vtkPolyData.\n"},
  {(char*)"SetPropType", PyvtkQuadricLODActor_SetPropType, 1,
   (char*)"V.SetPropType(int)\nC++: void SetPropType(int)\n\nIndicate that this actor is actually a follower. By default, the\nprop type is a vtkActor.\n"},
  {(char*)"GetPropTypeMinValue", PyvtkQuadricLODActor_GetPropTypeMinValue, 1,
   (char*)"V.GetPropTypeMinValue() -> int\nC++: int GetPropTypeMinValue()\n\nIndicate that this actor is actually a follower. By default, the\nprop type is a vtkActor.\n"},
  {(char*)"GetPropTypeMaxValue", PyvtkQuadricLODActor_GetPropTypeMaxValue, 1,
   (char*)"V.GetPropTypeMaxValue() -> int\nC++: int GetPropTypeMaxValue()\n\nIndicate that this actor is actually a follower. By default, the\nprop type is a vtkActor.\n"},
  {(char*)"GetPropType", PyvtkQuadricLODActor_GetPropType, 1,
   (char*)"V.GetPropType() -> int\nC++: int GetPropType()\n\nIndicate that this actor is actually a follower. By default, the\nprop type is a vtkActor.\n"},
  {(char*)"SetPropTypeToFollower", PyvtkQuadricLODActor_SetPropTypeToFollower, 1,
   (char*)"V.SetPropTypeToFollower()\nC++: void SetPropTypeToFollower()\n\nIndicate that this actor is actually a follower. By default, the\nprop type is a vtkActor.\n"},
  {(char*)"SetPropTypeToActor", PyvtkQuadricLODActor_SetPropTypeToActor, 1,
   (char*)"V.SetPropTypeToActor()\nC++: void SetPropTypeToActor()\n\nIndicate that this actor is actually a follower. By default, the\nprop type is a vtkActor.\n"},
  {(char*)"SetCamera", PyvtkQuadricLODActor_SetCamera, 1,
   (char*)"V.SetCamera(vtkCamera)\nC++: void SetCamera(vtkCamera *)\n\nSet/Get the camera to follow. This method is only applicable when\nthe prop type is set to a vtkFollower.\n"},
  {(char*)"GetCamera", PyvtkQuadricLODActor_GetCamera, 1,
   (char*)"V.GetCamera() -> vtkCamera\nC++: vtkCamera *GetCamera()\n\nSet/Get the camera to follow. This method is only applicable when\nthe prop type is set to a vtkFollower.\n"},
  {(char*)"Render", PyvtkQuadricLODActor_Render, 1,
   (char*)"V.Render(vtkRenderer, vtkMapper)\nC++: virtual void Render(vtkRenderer *, vtkMapper *)\n\nThis causes the actor to be rendered. Depending on the frame rate\nrequest, it will use either a full resolution render or an\ninteractive render (i.e., it will use the decimated geometry).\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkQuadricLODActor_RenderOpaqueGeometry, 1,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport)\n\nThis method is used internally by the rendering process. We\noveride the superclass method to properly set the estimated\nrender time.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkQuadricLODActor_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {(char*)"ShallowCopy", PyvtkQuadricLODActor_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop)\n\nShallow copy of an LOD actor. Overloads the virtual vtkProp\nmethod.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkQuadricLODActor_StaticNew()
{
  return vtkQuadricLODActor::New();
}

PyObject *PyVTKClass_vtkQuadricLODActorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkQuadricLODActor_StaticNew,
    PyvtkQuadricLODActor_Methods,
    "vtkQuadricLODActor", modulename,
    NULL, NULL,
    PyvtkQuadricLODActor_Doc(),
    PyVTKClass_vtkActorNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"UNKNOWN", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"XLINE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"YLINE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"ZLINE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"XYPLANE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(5);
    if (o && PyDict_SetItemString(d, (char *)"XZPLANE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(6);
    if (o && PyDict_SetItemString(d, (char *)"YZPLANE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(7);
    if (o && PyDict_SetItemString(d, (char *)"XYZVOLUME", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"FOLLOWER", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"ACTOR", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkQuadricLODActor_Doc()
{
  static const char *docstring[] = {
    "vtkQuadricLODActor - a specific level-of-detail strategy using the \n\n",
    "Superclass: vtkActor\n\n",
    "vtkQuadricLODActor implements a specific strategy for level-of-detail\nusing the vtkQuadricClustering decimation algorithm. It supports only\ntwo levels of detail: full resolution and a decimated version. The\ndecimated LOD is generated using a tuned strategy to produce output\nconsistent with the requested interactive frame rate (i.e., the\nvtkRenderWindowInteractor's DesiredUpdateRate). It also makes",
    " use of\ndisplay lists for performance, and adjusts the vtkQuadricClustering\nalgorithm to take into account the dimensionality of the data (e.g.,\n2D, x-y surfaces may be binned into n x n x 1 to reduce extra\npolygons in the z-direction). Finally, the filter may optionally be\nset in \"Static\" mode (this works with the vtkMapper::SetStatic()\nmethod). `Enabling Static results in a one time execution of",
    " the\nMapper's pipeline. After that, the pipeline no longer updated (unless\nmanually forced to do so).\n\nCaveats:\n\nBy default the algorithm is set up to pre-compute the LODs. That is,\non the first render (whether a full resolution render or interactive\nrender) the LOD is computed. This behavior can be changed so that the\nLOD construction is deferred until the first interactive render.\nEither way, wh",
    "en the LOD is constructed, the user may notice a short\npause.\n\nThis class can be used as a direct replacement for vtkActor. It may\nalso be used as a replacement for vtkFollower's (the ability to track\na camera is provided).\n\nSee Also:\n\nvtkLODActor vtkQuadricClustering\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkQuadricLODActor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkQuadricLODActorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkQuadricLODActor", o) != 0)
    {
    Py_DECREF(o);
    }

}

