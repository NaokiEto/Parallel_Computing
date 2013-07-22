// python wrapper for vtkLabelPlacementMapper
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
#include "vtkLabelPlacementMapper.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkLabelPlacementMapper(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkLabelPlacementMapper(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkLabelPlacementMapperNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkLabelPlacementMapperNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkMapper2DNew
extern "C" { PyObject *PyVTKClass_vtkMapper2DNew(const char *); }
#define DECLARED_PyVTKClass_vtkMapper2DNew
#endif

static const char **PyvtkLabelPlacementMapper_Doc();


static PyObject *
PyvtkLabelPlacementMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

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
      tempr = op->vtkLabelPlacementMapper::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

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
      tempr = op->vtkLabelPlacementMapper::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  vtkLabelPlacementMapper *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkLabelPlacementMapper::NewInstance();
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
PyvtkLabelPlacementMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkLabelPlacementMapper *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkLabelPlacementMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  vtkViewport *temp0 = NULL;
  vtkActor2D *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetVTKObject(temp1, "vtkActor2D"))
    {
    if (ap.IsBound())
      {
      op->RenderOverlay(temp0, temp1);
      }
    else
      {
      op->vtkLabelPlacementMapper::RenderOverlay(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetRenderStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  vtkLabelRenderStrategy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLabelRenderStrategy"))
    {
    if (ap.IsBound())
      {
      op->SetRenderStrategy(temp0);
      }
    else
      {
      op->vtkLabelPlacementMapper::SetRenderStrategy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetRenderStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  vtkLabelRenderStrategy *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRenderStrategy();
      }
    else
      {
      tempr = op->vtkLabelPlacementMapper::GetRenderStrategy();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetMaximumLabelFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumLabelFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumLabelFraction(temp0);
      }
    else
      {
      op->vtkLabelPlacementMapper::SetMaximumLabelFraction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetMaximumLabelFractionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLabelFractionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumLabelFractionMinValue();
      }
    else
      {
      tempr = op->vtkLabelPlacementMapper::GetMaximumLabelFractionMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetMaximumLabelFractionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLabelFractionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumLabelFractionMaxValue();
      }
    else
      {
      tempr = op->vtkLabelPlacementMapper::GetMaximumLabelFractionMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetMaximumLabelFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLabelFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumLabelFraction();
      }
    else
      {
      tempr = op->vtkLabelPlacementMapper::GetMaximumLabelFraction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetIteratorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIteratorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIteratorType(temp0);
      }
    else
      {
      op->vtkLabelPlacementMapper::SetIteratorType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetIteratorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIteratorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIteratorType();
      }
    else
      {
      tempr = op->vtkLabelPlacementMapper::GetIteratorType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetUseUnicodeStrings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseUnicodeStrings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseUnicodeStrings(temp0);
      }
    else
      {
      op->vtkLabelPlacementMapper::SetUseUnicodeStrings(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetUseUnicodeStrings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseUnicodeStrings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseUnicodeStrings();
      }
    else
      {
      tempr = op->vtkLabelPlacementMapper::GetUseUnicodeStrings();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_UseUnicodeStringsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseUnicodeStringsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseUnicodeStringsOn();
      }
    else
      {
      op->vtkLabelPlacementMapper::UseUnicodeStringsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_UseUnicodeStringsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseUnicodeStringsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseUnicodeStringsOff();
      }
    else
      {
      op->vtkLabelPlacementMapper::UseUnicodeStringsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetPositionsAsNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionsAsNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPositionsAsNormals();
      }
    else
      {
      tempr = op->vtkLabelPlacementMapper::GetPositionsAsNormals();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetPositionsAsNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPositionsAsNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPositionsAsNormals(temp0);
      }
    else
      {
      op->vtkLabelPlacementMapper::SetPositionsAsNormals(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_PositionsAsNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PositionsAsNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PositionsAsNormalsOn();
      }
    else
      {
      op->vtkLabelPlacementMapper::PositionsAsNormalsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_PositionsAsNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PositionsAsNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PositionsAsNormalsOff();
      }
    else
      {
      op->vtkLabelPlacementMapper::PositionsAsNormalsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetGeneratePerturbedLabelSpokes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeneratePerturbedLabelSpokes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGeneratePerturbedLabelSpokes();
      }
    else
      {
      tempr = op->vtkLabelPlacementMapper::GetGeneratePerturbedLabelSpokes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetGeneratePerturbedLabelSpokes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeneratePerturbedLabelSpokes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGeneratePerturbedLabelSpokes(temp0);
      }
    else
      {
      op->vtkLabelPlacementMapper::SetGeneratePerturbedLabelSpokes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GeneratePerturbedLabelSpokesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePerturbedLabelSpokesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GeneratePerturbedLabelSpokesOn();
      }
    else
      {
      op->vtkLabelPlacementMapper::GeneratePerturbedLabelSpokesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GeneratePerturbedLabelSpokesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePerturbedLabelSpokesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GeneratePerturbedLabelSpokesOff();
      }
    else
      {
      op->vtkLabelPlacementMapper::GeneratePerturbedLabelSpokesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetUseDepthBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDepthBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseDepthBuffer();
      }
    else
      {
      tempr = op->vtkLabelPlacementMapper::GetUseDepthBuffer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetUseDepthBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseDepthBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseDepthBuffer(temp0);
      }
    else
      {
      op->vtkLabelPlacementMapper::SetUseDepthBuffer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_UseDepthBufferOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDepthBufferOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseDepthBufferOn();
      }
    else
      {
      op->vtkLabelPlacementMapper::UseDepthBufferOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_UseDepthBufferOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDepthBufferOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseDepthBufferOff();
      }
    else
      {
      op->vtkLabelPlacementMapper::UseDepthBufferOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetPlaceAllLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaceAllLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPlaceAllLabels(temp0);
      }
    else
      {
      op->vtkLabelPlacementMapper::SetPlaceAllLabels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetPlaceAllLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaceAllLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPlaceAllLabels();
      }
    else
      {
      tempr = op->vtkLabelPlacementMapper::GetPlaceAllLabels();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_PlaceAllLabelsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceAllLabelsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PlaceAllLabelsOn();
      }
    else
      {
      op->vtkLabelPlacementMapper::PlaceAllLabelsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_PlaceAllLabelsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceAllLabelsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PlaceAllLabelsOff();
      }
    else
      {
      op->vtkLabelPlacementMapper::PlaceAllLabelsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetOutputTraversedBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputTraversedBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputTraversedBounds(temp0);
      }
    else
      {
      op->vtkLabelPlacementMapper::SetOutputTraversedBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetOutputTraversedBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputTraversedBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputTraversedBounds();
      }
    else
      {
      tempr = op->vtkLabelPlacementMapper::GetOutputTraversedBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_OutputTraversedBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutputTraversedBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OutputTraversedBoundsOn();
      }
    else
      {
      op->vtkLabelPlacementMapper::OutputTraversedBoundsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_OutputTraversedBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutputTraversedBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OutputTraversedBoundsOff();
      }
    else
      {
      op->vtkLabelPlacementMapper::OutputTraversedBoundsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShape(temp0);
      }
    else
      {
      op->vtkLabelPlacementMapper::SetShape(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetShapeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShapeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShapeMinValue();
      }
    else
      {
      tempr = op->vtkLabelPlacementMapper::GetShapeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetShapeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShapeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShapeMaxValue();
      }
    else
      {
      tempr = op->vtkLabelPlacementMapper::GetShapeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShape();
      }
    else
      {
      tempr = op->vtkLabelPlacementMapper::GetShape();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetShapeToNone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShapeToNone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetShapeToNone();
      }
    else
      {
      op->vtkLabelPlacementMapper::SetShapeToNone();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetShapeToRect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShapeToRect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetShapeToRect();
      }
    else
      {
      op->vtkLabelPlacementMapper::SetShapeToRect();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetShapeToRoundedRect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShapeToRoundedRect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetShapeToRoundedRect();
      }
    else
      {
      op->vtkLabelPlacementMapper::SetShapeToRoundedRect();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStyle(temp0);
      }
    else
      {
      op->vtkLabelPlacementMapper::SetStyle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetStyleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStyleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStyleMinValue();
      }
    else
      {
      tempr = op->vtkLabelPlacementMapper::GetStyleMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetStyleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStyleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStyleMaxValue();
      }
    else
      {
      tempr = op->vtkLabelPlacementMapper::GetStyleMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStyle();
      }
    else
      {
      tempr = op->vtkLabelPlacementMapper::GetStyle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetStyleToFilled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStyleToFilled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetStyleToFilled();
      }
    else
      {
      op->vtkLabelPlacementMapper::SetStyleToFilled();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetStyleToOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStyleToOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetStyleToOutline();
      }
    else
      {
      op->vtkLabelPlacementMapper::SetStyleToOutline();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetMargin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMargin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMargin(temp0);
      }
    else
      {
      op->vtkLabelPlacementMapper::SetMargin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetMargin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMargin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMargin();
      }
    else
      {
      tempr = op->vtkLabelPlacementMapper::GetMargin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetBackgroundColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

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
      op->SetBackgroundColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkLabelPlacementMapper::SetBackgroundColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLabelPlacementMapper_SetBackgroundColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetBackgroundColor(temp0);
      }
    else
      {
      op->vtkLabelPlacementMapper::SetBackgroundColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLabelPlacementMapper_SetBackgroundColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkLabelPlacementMapper_SetBackgroundColor_s1(self, args);
    case 1:
      return PyvtkLabelPlacementMapper_SetBackgroundColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBackgroundColor");
  return NULL;
}



static PyObject *
PyvtkLabelPlacementMapper_GetBackgroundColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBackgroundColor();
      }
    else
      {
      tempr = op->vtkLabelPlacementMapper::GetBackgroundColor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetBackgroundOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBackgroundOpacity(temp0);
      }
    else
      {
      op->vtkLabelPlacementMapper::SetBackgroundOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetBackgroundOpacityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundOpacityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBackgroundOpacityMinValue();
      }
    else
      {
      tempr = op->vtkLabelPlacementMapper::GetBackgroundOpacityMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetBackgroundOpacityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundOpacityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBackgroundOpacityMaxValue();
      }
    else
      {
      tempr = op->vtkLabelPlacementMapper::GetBackgroundOpacityMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetBackgroundOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBackgroundOpacity();
      }
    else
      {
      tempr = op->vtkLabelPlacementMapper::GetBackgroundOpacity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetAnchorTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnchorTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  vtkCoordinate *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAnchorTransform();
      }
    else
      {
      tempr = op->vtkLabelPlacementMapper::GetAnchorTransform();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLabelPlacementMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkLabelPlacementMapper_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkLabelPlacementMapper_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkLabelPlacementMapper_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkLabelPlacementMapper\nC++: vtkLabelPlacementMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkLabelPlacementMapper_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLabelPlacementMapper\nC++: vtkLabelPlacementMapper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"RenderOverlay", PyvtkLabelPlacementMapper_RenderOverlay, 1,
   (char*)"V.RenderOverlay(vtkViewport, vtkActor2D)\nC++: void RenderOverlay(vtkViewport *viewport, vtkActor2D *actor)\n\nDraw non-overlapping labels to the screen.\n"},
  {(char*)"SetRenderStrategy", PyvtkLabelPlacementMapper_SetRenderStrategy, 1,
   (char*)"V.SetRenderStrategy(vtkLabelRenderStrategy)\nC++: virtual void SetRenderStrategy(vtkLabelRenderStrategy *s)\n\nSet the label rendering strategy.\n"},
  {(char*)"GetRenderStrategy", PyvtkLabelPlacementMapper_GetRenderStrategy, 1,
   (char*)"V.GetRenderStrategy() -> vtkLabelRenderStrategy\nC++: vtkLabelRenderStrategy *GetRenderStrategy()\n\nSet the label rendering strategy.\n"},
  {(char*)"SetMaximumLabelFraction", PyvtkLabelPlacementMapper_SetMaximumLabelFraction, 1,
   (char*)"V.SetMaximumLabelFraction(float)\nC++: void SetMaximumLabelFraction(double)\n\nThe maximum fraction of the screen that the labels may cover.\nLabel placement stops when this fraction is reached.\n"},
  {(char*)"GetMaximumLabelFractionMinValue", PyvtkLabelPlacementMapper_GetMaximumLabelFractionMinValue, 1,
   (char*)"V.GetMaximumLabelFractionMinValue() -> float\nC++: double GetMaximumLabelFractionMinValue()\n\nThe maximum fraction of the screen that the labels may cover.\nLabel placement stops when this fraction is reached.\n"},
  {(char*)"GetMaximumLabelFractionMaxValue", PyvtkLabelPlacementMapper_GetMaximumLabelFractionMaxValue, 1,
   (char*)"V.GetMaximumLabelFractionMaxValue() -> float\nC++: double GetMaximumLabelFractionMaxValue()\n\nThe maximum fraction of the screen that the labels may cover.\nLabel placement stops when this fraction is reached.\n"},
  {(char*)"GetMaximumLabelFraction", PyvtkLabelPlacementMapper_GetMaximumLabelFraction, 1,
   (char*)"V.GetMaximumLabelFraction() -> float\nC++: double GetMaximumLabelFraction()\n\nThe maximum fraction of the screen that the labels may cover.\nLabel placement stops when this fraction is reached.\n"},
  {(char*)"SetIteratorType", PyvtkLabelPlacementMapper_SetIteratorType, 1,
   (char*)"V.SetIteratorType(int)\nC++: void SetIteratorType(int a)\n\nThe type of iterator used when traversing the labels. May be\nvtkLabelHierarchy::FRUSTUM or vtkLabelHierarchy::FULL_SORT\n"},
  {(char*)"GetIteratorType", PyvtkLabelPlacementMapper_GetIteratorType, 1,
   (char*)"V.GetIteratorType() -> int\nC++: int GetIteratorType()\n\nThe type of iterator used when traversing the labels. May be\nvtkLabelHierarchy::FRUSTUM or vtkLabelHierarchy::FULL_SORT\n"},
  {(char*)"SetUseUnicodeStrings", PyvtkLabelPlacementMapper_SetUseUnicodeStrings, 1,
   (char*)"V.SetUseUnicodeStrings(bool)\nC++: void SetUseUnicodeStrings(bool a)\n\nSet whether, or not, to use unicode strings.\n"},
  {(char*)"GetUseUnicodeStrings", PyvtkLabelPlacementMapper_GetUseUnicodeStrings, 1,
   (char*)"V.GetUseUnicodeStrings() -> bool\nC++: bool GetUseUnicodeStrings()\n\nSet whether, or not, to use unicode strings.\n"},
  {(char*)"UseUnicodeStringsOn", PyvtkLabelPlacementMapper_UseUnicodeStringsOn, 1,
   (char*)"V.UseUnicodeStringsOn()\nC++: void UseUnicodeStringsOn()\n\nSet whether, or not, to use unicode strings.\n"},
  {(char*)"UseUnicodeStringsOff", PyvtkLabelPlacementMapper_UseUnicodeStringsOff, 1,
   (char*)"V.UseUnicodeStringsOff()\nC++: void UseUnicodeStringsOff()\n\nSet whether, or not, to use unicode strings.\n"},
  {(char*)"GetPositionsAsNormals", PyvtkLabelPlacementMapper_GetPositionsAsNormals, 1,
   (char*)"V.GetPositionsAsNormals() -> bool\nC++: bool GetPositionsAsNormals()\n\nUse label anchor point coordinates as normal vectors and\neliminate those pointing away from the camera. Valid only when\npoints are on a sphere centered at the origin (such as a 3D\ngeographic view). Off by default.\n"},
  {(char*)"SetPositionsAsNormals", PyvtkLabelPlacementMapper_SetPositionsAsNormals, 1,
   (char*)"V.SetPositionsAsNormals(bool)\nC++: void SetPositionsAsNormals(bool a)\n\nUse label anchor point coordinates as normal vectors and\neliminate those pointing away from the camera. Valid only when\npoints are on a sphere centered at the origin (such as a 3D\ngeographic view). Off by default.\n"},
  {(char*)"PositionsAsNormalsOn", PyvtkLabelPlacementMapper_PositionsAsNormalsOn, 1,
   (char*)"V.PositionsAsNormalsOn()\nC++: void PositionsAsNormalsOn()\n\nUse label anchor point coordinates as normal vectors and\neliminate those pointing away from the camera. Valid only when\npoints are on a sphere centered at the origin (such as a 3D\ngeographic view). Off by default.\n"},
  {(char*)"PositionsAsNormalsOff", PyvtkLabelPlacementMapper_PositionsAsNormalsOff, 1,
   (char*)"V.PositionsAsNormalsOff()\nC++: void PositionsAsNormalsOff()\n\nUse label anchor point coordinates as normal vectors and\neliminate those pointing away from the camera. Valid only when\npoints are on a sphere centered at the origin (such as a 3D\ngeographic view). Off by default.\n"},
  {(char*)"GetGeneratePerturbedLabelSpokes", PyvtkLabelPlacementMapper_GetGeneratePerturbedLabelSpokes, 1,
   (char*)"V.GetGeneratePerturbedLabelSpokes() -> bool\nC++: bool GetGeneratePerturbedLabelSpokes()\n\nEnable drawing spokes (lines) to anchor point coordinates that\nwere perturbed for being coincident with other anchor point\ncoordinates.\n"},
  {(char*)"SetGeneratePerturbedLabelSpokes", PyvtkLabelPlacementMapper_SetGeneratePerturbedLabelSpokes, 1,
   (char*)"V.SetGeneratePerturbedLabelSpokes(bool)\nC++: void SetGeneratePerturbedLabelSpokes(bool a)\n\nEnable drawing spokes (lines) to anchor point coordinates that\nwere perturbed for being coincident with other anchor point\ncoordinates.\n"},
  {(char*)"GeneratePerturbedLabelSpokesOn", PyvtkLabelPlacementMapper_GeneratePerturbedLabelSpokesOn, 1,
   (char*)"V.GeneratePerturbedLabelSpokesOn()\nC++: void GeneratePerturbedLabelSpokesOn()\n\nEnable drawing spokes (lines) to anchor point coordinates that\nwere perturbed for being coincident with other anchor point\ncoordinates.\n"},
  {(char*)"GeneratePerturbedLabelSpokesOff", PyvtkLabelPlacementMapper_GeneratePerturbedLabelSpokesOff, 1,
   (char*)"V.GeneratePerturbedLabelSpokesOff()\nC++: void GeneratePerturbedLabelSpokesOff()\n\nEnable drawing spokes (lines) to anchor point coordinates that\nwere perturbed for being coincident with other anchor point\ncoordinates.\n"},
  {(char*)"GetUseDepthBuffer", PyvtkLabelPlacementMapper_GetUseDepthBuffer, 1,
   (char*)"V.GetUseDepthBuffer() -> bool\nC++: bool GetUseDepthBuffer()\n\nUse the depth buffer to test each label to see if it should not\nbe displayed if it would be occluded by other objects in the\nscene. Off by default.\n"},
  {(char*)"SetUseDepthBuffer", PyvtkLabelPlacementMapper_SetUseDepthBuffer, 1,
   (char*)"V.SetUseDepthBuffer(bool)\nC++: void SetUseDepthBuffer(bool a)\n\nUse the depth buffer to test each label to see if it should not\nbe displayed if it would be occluded by other objects in the\nscene. Off by default.\n"},
  {(char*)"UseDepthBufferOn", PyvtkLabelPlacementMapper_UseDepthBufferOn, 1,
   (char*)"V.UseDepthBufferOn()\nC++: void UseDepthBufferOn()\n\nUse the depth buffer to test each label to see if it should not\nbe displayed if it would be occluded by other objects in the\nscene. Off by default.\n"},
  {(char*)"UseDepthBufferOff", PyvtkLabelPlacementMapper_UseDepthBufferOff, 1,
   (char*)"V.UseDepthBufferOff()\nC++: void UseDepthBufferOff()\n\nUse the depth buffer to test each label to see if it should not\nbe displayed if it would be occluded by other objects in the\nscene. Off by default.\n"},
  {(char*)"SetPlaceAllLabels", PyvtkLabelPlacementMapper_SetPlaceAllLabels, 1,
   (char*)"V.SetPlaceAllLabels(bool)\nC++: void SetPlaceAllLabels(bool a)\n\nTells the placer to place every label regardless of overlap. Off\nby default.\n"},
  {(char*)"GetPlaceAllLabels", PyvtkLabelPlacementMapper_GetPlaceAllLabels, 1,
   (char*)"V.GetPlaceAllLabels() -> bool\nC++: bool GetPlaceAllLabels()\n\nTells the placer to place every label regardless of overlap. Off\nby default.\n"},
  {(char*)"PlaceAllLabelsOn", PyvtkLabelPlacementMapper_PlaceAllLabelsOn, 1,
   (char*)"V.PlaceAllLabelsOn()\nC++: void PlaceAllLabelsOn()\n\nTells the placer to place every label regardless of overlap. Off\nby default.\n"},
  {(char*)"PlaceAllLabelsOff", PyvtkLabelPlacementMapper_PlaceAllLabelsOff, 1,
   (char*)"V.PlaceAllLabelsOff()\nC++: void PlaceAllLabelsOff()\n\nTells the placer to place every label regardless of overlap. Off\nby default.\n"},
  {(char*)"SetOutputTraversedBounds", PyvtkLabelPlacementMapper_SetOutputTraversedBounds, 1,
   (char*)"V.SetOutputTraversedBounds(bool)\nC++: void SetOutputTraversedBounds(bool a)\n\nWhether to render traversed bounds. Off by default.\n"},
  {(char*)"GetOutputTraversedBounds", PyvtkLabelPlacementMapper_GetOutputTraversedBounds, 1,
   (char*)"V.GetOutputTraversedBounds() -> bool\nC++: bool GetOutputTraversedBounds()\n\nWhether to render traversed bounds. Off by default.\n"},
  {(char*)"OutputTraversedBoundsOn", PyvtkLabelPlacementMapper_OutputTraversedBoundsOn, 1,
   (char*)"V.OutputTraversedBoundsOn()\nC++: void OutputTraversedBoundsOn()\n\nWhether to render traversed bounds. Off by default.\n"},
  {(char*)"OutputTraversedBoundsOff", PyvtkLabelPlacementMapper_OutputTraversedBoundsOff, 1,
   (char*)"V.OutputTraversedBoundsOff()\nC++: void OutputTraversedBoundsOff()\n\nWhether to render traversed bounds. Off by default.\n"},
  {(char*)"SetShape", PyvtkLabelPlacementMapper_SetShape, 1,
   (char*)"V.SetShape(int)\nC++: void SetShape(int)\n\nThe shape of the label background, should be one of the values in\nthe LabelShape enumeration.\n"},
  {(char*)"GetShapeMinValue", PyvtkLabelPlacementMapper_GetShapeMinValue, 1,
   (char*)"V.GetShapeMinValue() -> int\nC++: int GetShapeMinValue()\n\nThe shape of the label background, should be one of the values in\nthe LabelShape enumeration.\n"},
  {(char*)"GetShapeMaxValue", PyvtkLabelPlacementMapper_GetShapeMaxValue, 1,
   (char*)"V.GetShapeMaxValue() -> int\nC++: int GetShapeMaxValue()\n\nThe shape of the label background, should be one of the values in\nthe LabelShape enumeration.\n"},
  {(char*)"GetShape", PyvtkLabelPlacementMapper_GetShape, 1,
   (char*)"V.GetShape() -> int\nC++: int GetShape()\n\nThe shape of the label background, should be one of the values in\nthe LabelShape enumeration.\n"},
  {(char*)"SetShapeToNone", PyvtkLabelPlacementMapper_SetShapeToNone, 1,
   (char*)"V.SetShapeToNone()\nC++: virtual void SetShapeToNone()\n\nThe shape of the label background, should be one of the values in\nthe LabelShape enumeration.\n"},
  {(char*)"SetShapeToRect", PyvtkLabelPlacementMapper_SetShapeToRect, 1,
   (char*)"V.SetShapeToRect()\nC++: virtual void SetShapeToRect()\n\nThe shape of the label background, should be one of the values in\nthe LabelShape enumeration.\n"},
  {(char*)"SetShapeToRoundedRect", PyvtkLabelPlacementMapper_SetShapeToRoundedRect, 1,
   (char*)"V.SetShapeToRoundedRect()\nC++: virtual void SetShapeToRoundedRect()\n\nThe shape of the label background, should be one of the values in\nthe LabelShape enumeration.\n"},
  {(char*)"SetStyle", PyvtkLabelPlacementMapper_SetStyle, 1,
   (char*)"V.SetStyle(int)\nC++: void SetStyle(int)\n\nThe style of the label background shape, should be one of the\nvalues in the LabelStyle enumeration.\n"},
  {(char*)"GetStyleMinValue", PyvtkLabelPlacementMapper_GetStyleMinValue, 1,
   (char*)"V.GetStyleMinValue() -> int\nC++: int GetStyleMinValue()\n\nThe style of the label background shape, should be one of the\nvalues in the LabelStyle enumeration.\n"},
  {(char*)"GetStyleMaxValue", PyvtkLabelPlacementMapper_GetStyleMaxValue, 1,
   (char*)"V.GetStyleMaxValue() -> int\nC++: int GetStyleMaxValue()\n\nThe style of the label background shape, should be one of the\nvalues in the LabelStyle enumeration.\n"},
  {(char*)"GetStyle", PyvtkLabelPlacementMapper_GetStyle, 1,
   (char*)"V.GetStyle() -> int\nC++: int GetStyle()\n\nThe style of the label background shape, should be one of the\nvalues in the LabelStyle enumeration.\n"},
  {(char*)"SetStyleToFilled", PyvtkLabelPlacementMapper_SetStyleToFilled, 1,
   (char*)"V.SetStyleToFilled()\nC++: virtual void SetStyleToFilled()\n\nThe style of the label background shape, should be one of the\nvalues in the LabelStyle enumeration.\n"},
  {(char*)"SetStyleToOutline", PyvtkLabelPlacementMapper_SetStyleToOutline, 1,
   (char*)"V.SetStyleToOutline()\nC++: virtual void SetStyleToOutline()\n\nThe style of the label background shape, should be one of the\nvalues in the LabelStyle enumeration.\n"},
  {(char*)"SetMargin", PyvtkLabelPlacementMapper_SetMargin, 1,
   (char*)"V.SetMargin(float)\nC++: void SetMargin(double a)\n\nThe size of the margin on the label background shape. Default is\n5.\n"},
  {(char*)"GetMargin", PyvtkLabelPlacementMapper_GetMargin, 1,
   (char*)"V.GetMargin() -> float\nC++: double GetMargin()\n\nThe size of the margin on the label background shape. Default is\n5.\n"},
  {(char*)"SetBackgroundColor", PyvtkLabelPlacementMapper_SetBackgroundColor, 1,
   (char*)"V.SetBackgroundColor(float, float, float)\nC++: void SetBackgroundColor(double, double, double)\nV.SetBackgroundColor((float, float, float))\nC++: void SetBackgroundColor(double a[3])\n\n"},
  {(char*)"GetBackgroundColor", PyvtkLabelPlacementMapper_GetBackgroundColor, 1,
   (char*)"V.GetBackgroundColor() -> (float, float, float)\nC++: double *GetBackgroundColor()\n\n"},
  {(char*)"SetBackgroundOpacity", PyvtkLabelPlacementMapper_SetBackgroundOpacity, 1,
   (char*)"V.SetBackgroundOpacity(float)\nC++: void SetBackgroundOpacity(double)\n\nThe opacity of the background shape.\n"},
  {(char*)"GetBackgroundOpacityMinValue", PyvtkLabelPlacementMapper_GetBackgroundOpacityMinValue, 1,
   (char*)"V.GetBackgroundOpacityMinValue() -> float\nC++: double GetBackgroundOpacityMinValue()\n\nThe opacity of the background shape.\n"},
  {(char*)"GetBackgroundOpacityMaxValue", PyvtkLabelPlacementMapper_GetBackgroundOpacityMaxValue, 1,
   (char*)"V.GetBackgroundOpacityMaxValue() -> float\nC++: double GetBackgroundOpacityMaxValue()\n\nThe opacity of the background shape.\n"},
  {(char*)"GetBackgroundOpacity", PyvtkLabelPlacementMapper_GetBackgroundOpacity, 1,
   (char*)"V.GetBackgroundOpacity() -> float\nC++: double GetBackgroundOpacity()\n\nThe opacity of the background shape.\n"},
  {(char*)"GetAnchorTransform", PyvtkLabelPlacementMapper_GetAnchorTransform, 1,
   (char*)"V.GetAnchorTransform() -> vtkCoordinate\nC++: vtkCoordinate *GetAnchorTransform()\n\nGet the transform for the anchor points.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLabelPlacementMapper_StaticNew()
{
  return vtkLabelPlacementMapper::New();
}

PyObject *PyVTKClass_vtkLabelPlacementMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLabelPlacementMapper_StaticNew,
    PyvtkLabelPlacementMapper_Methods,
    "vtkLabelPlacementMapper", modulename,
    NULL, NULL,
    PyvtkLabelPlacementMapper_Doc(),
    PyVTKClass_vtkMapper2DNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"NONE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"RECT", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"ROUNDED_RECT", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"NUMBER_OF_LABEL_SHAPES", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"FILLED", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"OUTLINE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"NUMBER_OF_LABEL_STYLES", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkLabelPlacementMapper_Doc()
{
  static const char *docstring[] = {
    "vtkLabelPlacementMapper - Places and renders non-overlapping labels.\n\n",
    "Superclass: vtkMapper2D\n\n",
    "To use this mapper, first send your data through\nvtkPointSetToLabelHierarchy, which takes a set of points, associates\nspecial arrays to the points (label, priority, etc.), and produces a\nprioritized spatial tree of labels.\n\nThis mapper then takes that hierarchy (or hierarchies) as input, and\nevery frame will decide which labels and/or icons to place in order\nof priority, and will render only those",
    " labels/icons. A label render\nstrategy is used to render the labels, and can use e.g. FreeType or\nQt for rendering.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLabelPlacementMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLabelPlacementMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLabelPlacementMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

