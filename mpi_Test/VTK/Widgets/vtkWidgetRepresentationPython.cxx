// python wrapper for vtkWidgetRepresentation
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
#include "vtkWidgetRepresentation.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkWidgetRepresentation(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkWidgetRepresentation(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkWidgetRepresentationNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkWidgetRepresentationNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPropNew
extern "C" { PyObject *PyVTKClass_vtkPropNew(const char *); }
#define DECLARED_PyVTKClass_vtkPropNew
#endif

static const char **PyvtkWidgetRepresentation_Doc();


static PyObject *
PyvtkWidgetRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

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
      tempr = op->vtkWidgetRepresentation::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

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
      tempr = op->vtkWidgetRepresentation::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  vtkWidgetRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkWidgetRepresentation::NewInstance();
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
PyvtkWidgetRepresentation_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->SetRenderer(temp0);
      }
    else
      {
      op->vtkWidgetRepresentation::SetRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  vtkRenderer *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRenderer();
      }
    else
      {
      tempr = op->vtkWidgetRepresentation::GetRenderer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->BuildRepresentation();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

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
      op->vtkWidgetRepresentation::StartWidgetInteraction(temp0);
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
PyvtkWidgetRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

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
      op->vtkWidgetRepresentation::WidgetInteraction(temp0);
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
PyvtkWidgetRepresentation_EndWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

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
      op->EndWidgetInteraction(temp0);
      }
    else
      {
      op->vtkWidgetRepresentation::EndWidgetInteraction(temp0);
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
PyvtkWidgetRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

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
      tempr = op->vtkWidgetRepresentation::ComputeInteractionState(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_GetInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInteractionState();
      }
    else
      {
      tempr = op->vtkWidgetRepresentation::GetInteractionState();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_Highlight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Highlight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Highlight(temp0);
      }
    else
      {
      op->vtkWidgetRepresentation::Highlight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_SetPlaceFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaceFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPlaceFactor(temp0);
      }
    else
      {
      op->vtkWidgetRepresentation::SetPlaceFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_GetPlaceFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaceFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPlaceFactorMinValue();
      }
    else
      {
      tempr = op->vtkWidgetRepresentation::GetPlaceFactorMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_GetPlaceFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaceFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPlaceFactorMaxValue();
      }
    else
      {
      tempr = op->vtkWidgetRepresentation::GetPlaceFactorMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_GetPlaceFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaceFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPlaceFactor();
      }
    else
      {
      tempr = op->vtkWidgetRepresentation::GetPlaceFactor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_SetHandleSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHandleSize(temp0);
      }
    else
      {
      op->vtkWidgetRepresentation::SetHandleSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_GetHandleSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHandleSizeMinValue();
      }
    else
      {
      tempr = op->vtkWidgetRepresentation::GetHandleSizeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_GetHandleSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHandleSizeMaxValue();
      }
    else
      {
      tempr = op->vtkWidgetRepresentation::GetHandleSizeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_GetHandleSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHandleSize();
      }
    else
      {
      tempr = op->vtkWidgetRepresentation::GetHandleSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_GetNeedToRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNeedToRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNeedToRender();
      }
    else
      {
      tempr = op->vtkWidgetRepresentation::GetNeedToRender();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_SetNeedToRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNeedToRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNeedToRender(temp0);
      }
    else
      {
      op->vtkWidgetRepresentation::SetNeedToRender(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_GetNeedToRenderMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNeedToRenderMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNeedToRenderMinValue();
      }
    else
      {
      tempr = op->vtkWidgetRepresentation::GetNeedToRenderMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_GetNeedToRenderMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNeedToRenderMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNeedToRenderMaxValue();
      }
    else
      {
      tempr = op->vtkWidgetRepresentation::GetNeedToRenderMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_NeedToRenderOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NeedToRenderOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NeedToRenderOn();
      }
    else
      {
      op->vtkWidgetRepresentation::NeedToRenderOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_NeedToRenderOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NeedToRenderOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NeedToRenderOff();
      }
    else
      {
      op->vtkWidgetRepresentation::NeedToRenderOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

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
      tempr = op->vtkWidgetRepresentation::GetBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

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
      op->vtkWidgetRepresentation::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  vtkPropCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
    {
    if (ap.IsBound())
      {
      op->GetActors(temp0);
      }
    else
      {
      op->vtkWidgetRepresentation::GetActors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_GetActors2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

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
      op->vtkWidgetRepresentation::GetActors2D(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_GetVolumes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  vtkPropCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
    {
    if (ap.IsBound())
      {
      op->GetVolumes(temp0);
      }
    else
      {
      op->vtkWidgetRepresentation::GetVolumes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

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
      op->vtkWidgetRepresentation::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

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
      tempr = op->vtkWidgetRepresentation::RenderOverlay(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

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
      tempr = op->vtkWidgetRepresentation::RenderOpaqueGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

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
      tempr = op->vtkWidgetRepresentation::RenderTranslucentPolygonalGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_RenderVolumetricGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderVolumetricGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      tempr = op->RenderVolumetricGeometry(temp0);
      }
    else
      {
      tempr = op->vtkWidgetRepresentation::RenderVolumetricGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

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
      tempr = op->vtkWidgetRepresentation::HasTranslucentPolygonalGeometry();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkWidgetRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkWidgetRepresentation_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for instances of this class.\n"},
  {(char*)"IsA", PyvtkWidgetRepresentation_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for instances of this class.\n"},
  {(char*)"NewInstance", PyvtkWidgetRepresentation_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkWidgetRepresentation\nC++: vtkWidgetRepresentation *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {(char*)"SetRenderer", PyvtkWidgetRepresentation_SetRenderer, 1,
   (char*)"V.SetRenderer(vtkRenderer)\nC++: virtual void SetRenderer(vtkRenderer *ren)\n\nSubclasses of vtkWidgetRepresentation must implement these\nmethods. This is considered the minimum API for a widget\nrepresentation.\n\nSetRenderer() - the renderer in which the widget is to appear\nmust be set. BuildRepresentation() - update the geometry of the\nwidget based on its\n                        current state.  WARNING: The renderer is\nNOT reference counted by the representation, in order to avoid\nreference loops.  Be sure that the representation lifetime does\nnot extend beyond the renderer lifetime.\n"},
  {(char*)"GetRenderer", PyvtkWidgetRepresentation_GetRenderer, 1,
   (char*)"V.GetRenderer() -> vtkRenderer\nC++: vtkRenderer *GetRenderer()\n\nSubclasses of vtkWidgetRepresentation must implement these\nmethods. This is considered the minimum API for a widget\nrepresentation.\n\nSetRenderer() - the renderer in which the widget is to appear\nmust be set. BuildRepresentation() - update the geometry of the\nwidget based on its\n                        current state.  WARNING: The renderer is\nNOT reference counted by the representation, in order to avoid\nreference loops.  Be sure that the representation lifetime does\nnot extend beyond the renderer lifetime.\n"},
  {(char*)"BuildRepresentation", PyvtkWidgetRepresentation_BuildRepresentation, 1,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nSubclasses of vtkWidgetRepresentation must implement these\nmethods. This is considered the minimum API for a widget\nrepresentation.\n\nSetRenderer() - the renderer in which the widget is to appear\nmust be set. BuildRepresentation() - update the geometry of the\nwidget based on its\n                        current state.  WARNING: The renderer is\nNOT reference counted by the representation, in order to avoid\nreference loops.  Be sure that the representation lifetime does\nnot extend beyond the renderer lifetime.\n"},
  {(char*)"StartWidgetInteraction", PyvtkWidgetRepresentation_StartWidgetInteraction, 1,
   (char*)"V.StartWidgetInteraction([float, float])\nC++: virtual void StartWidgetInteraction(double eventPos[2])\n\nThe following is a suggested API for widget representations.\nThese methods define the communication between the widget and its\nrepresentation. These methods are only suggestions because\nwidgets take on so many different forms that a universal API is\nnot deemed practical. However, these methods should be\nimplemented when possible to insure that the VTK widget hierarchy\nremains self-consistent.\n\nPlaceWidget() - given a bounding box\n(xmin,xmax,ymin,ymax,zmin,zmax), place\n                the widget inside of it. The current orientation\nof the widget\n                is preserved, only scaling and translation is\nperformed. StartWidgetInteraction() - generally corresponds to a\ninitial event (e.g.,\n                           mouse down) that starts the\ninteraction process\n                           with the widget. WidgetInteraction() -\ninvoked when an event causes the widget to change\n                      appearance. EndWidgetInteraction() -\ngenerally corresponds to a final event (e.g., mouse up)\n                         and completes the interaction sequence.\nComputeInteractionState() - given (X,Y) display coordinates in a\nrenderer, with a\n                            possible flag that modifies the\ncomputation,\n                            what is the state of the widget?\nGetInteractionState() - return the current state of the widget.\nNote that the\n                        value of \"0\" typically refers to\n\"outside\". The\n                        interaction state is strictly a function\nof the\n                        representation, and the widget/represent\nmust agree\n                        on what they mean. Highlight() - turn on\nor off any highlights associated with the widget.\n              Highlights are generally turned on when the widget\nis selected.  Note that subclasses may ignore some of these\nmethods and implement their own depending on the  ...\n [Truncated]\n"},
  {(char*)"WidgetInteraction", PyvtkWidgetRepresentation_WidgetInteraction, 1,
   (char*)"V.WidgetInteraction([float, float])\nC++: virtual void WidgetInteraction(double newEventPos[2])\n\nThe following is a suggested API for widget representations.\nThese methods define the communication between the widget and its\nrepresentation. These methods are only suggestions because\nwidgets take on so many different forms that a universal API is\nnot deemed practical. However, these methods should be\nimplemented when possible to insure that the VTK widget hierarchy\nremains self-consistent.\n\nPlaceWidget() - given a bounding box\n(xmin,xmax,ymin,ymax,zmin,zmax), place\n                the widget inside of it. The current orientation\nof the widget\n                is preserved, only scaling and translation is\nperformed. StartWidgetInteraction() - generally corresponds to a\ninitial event (e.g.,\n                           mouse down) that starts the\ninteraction process\n                           with the widget. WidgetInteraction() -\ninvoked when an event causes the widget to change\n                      appearance. EndWidgetInteraction() -\ngenerally corresponds to a final event (e.g., mouse up)\n                         and completes the interaction sequence.\nComputeInteractionState() - given (X,Y) display coordinates in a\nrenderer, with a\n                            possible flag that modifies the\ncomputation,\n                            what is the state of the widget?\nGetInteractionState() - return the current state of the widget.\nNote that the\n                        value of \"0\" typically refers to\n\"outside\". The\n                        interaction state is strictly a function\nof the\n                        representation, and the widget/represent\nmust agree\n                        on what they mean. Highlight() - turn on\nor off any highlights associated with the widget.\n              Highlights are generally turned on when the widget\nis selected.  Note that subclasses may ignore some of these\nmethods and implement their own depending on the specifi ...\n [Truncated]\n"},
  {(char*)"EndWidgetInteraction", PyvtkWidgetRepresentation_EndWidgetInteraction, 1,
   (char*)"V.EndWidgetInteraction([float, float])\nC++: virtual void EndWidgetInteraction(double newEventPos[2])\n\nThe following is a suggested API for widget representations.\nThese methods define the communication between the widget and its\nrepresentation. These methods are only suggestions because\nwidgets take on so many different forms that a universal API is\nnot deemed practical. However, these methods should be\nimplemented when possible to insure that the VTK widget hierarchy\nremains self-consistent.\n\nPlaceWidget() - given a bounding box\n(xmin,xmax,ymin,ymax,zmin,zmax), place\n                the widget inside of it. The current orientation\nof the widget\n                is preserved, only scaling and translation is\nperformed. StartWidgetInteraction() - generally corresponds to a\ninitial event (e.g.,\n                           mouse down) that starts the\ninteraction process\n                           with the widget. WidgetInteraction() -\ninvoked when an event causes the widget to change\n                      appearance. EndWidgetInteraction() -\ngenerally corresponds to a final event (e.g., mouse up)\n                         and completes the interaction sequence.\nComputeInteractionState() - given (X,Y) display coordinates in a\nrenderer, with a\n                            possible flag that modifies the\ncomputation,\n                            what is the state of the widget?\nGetInteractionState() - return the current state of the widget.\nNote that the\n                        value of \"0\" typically refers to\n\"outside\". The\n                        interaction state is strictly a function\nof the\n                        representation, and the widget/represent\nmust agree\n                        on what they mean. Highlight() - turn on\nor off any highlights associated with the widget.\n              Highlights are generally turned on when the widget\nis selected.  Note that subclasses may ignore some of these\nmethods and implement their own depending on the s ...\n [Truncated]\n"},
  {(char*)"ComputeInteractionState", PyvtkWidgetRepresentation_ComputeInteractionState, 1,
   (char*)"V.ComputeInteractionState(int, int, int) -> int\nC++: virtual int ComputeInteractionState(int X, int Y,\n    int modify=0)\n\nThe following is a suggested API for widget representations.\nThese methods define the communication between the widget and its\nrepresentation. These methods are only suggestions because\nwidgets take on so many different forms that a universal API is\nnot deemed practical. However, these methods should be\nimplemented when possible to insure that the VTK widget hierarchy\nremains self-consistent.\n\nPlaceWidget() - given a bounding box\n(xmin,xmax,ymin,ymax,zmin,zmax), place\n                the widget inside of it. The current orientation\nof the widget\n                is preserved, only scaling and translation is\nperformed. StartWidgetInteraction() - generally corresponds to a\ninitial event (e.g.,\n                           mouse down) that starts the\ninteraction process\n                           with the widget. WidgetInteraction() -\ninvoked when an event causes the widget to change\n                      appearance. EndWidgetInteraction() -\ngenerally corresponds to a final event (e.g., mouse up)\n                         and completes the interaction sequence.\nComputeInteractionState() - given (X,Y) display coordinates in a\nrenderer, with a\n                            possible flag that modifies the\ncomputation,\n                            what is the state of the widget?\nGetInteractionState() - return the current state of the widget.\nNote that the\n                        value of \"0\" typically refers to\n\"outside\". The\n                        interaction state is strictly a function\nof the\n                        representation, and the widget/represent\nmust agree\n                        on what they mean. Highlight() - turn on\nor off any highlights associated with the widget.\n              Highlights are generally turned on when the widget\nis selected.  Note that subclasses may ignore some of these\nmethods and implement their o ...\n [Truncated]\n"},
  {(char*)"GetInteractionState", PyvtkWidgetRepresentation_GetInteractionState, 1,
   (char*)"V.GetInteractionState() -> int\nC++: virtual int GetInteractionState()\n\nThe following is a suggested API for widget representations.\nThese methods define the communication between the widget and its\nrepresentation. These methods are only suggestions because\nwidgets take on so many different forms that a universal API is\nnot deemed practical. However, these methods should be\nimplemented when possible to insure that the VTK widget hierarchy\nremains self-consistent.\n\nPlaceWidget() - given a bounding box\n(xmin,xmax,ymin,ymax,zmin,zmax), place\n                the widget inside of it. The current orientation\nof the widget\n                is preserved, only scaling and translation is\nperformed. StartWidgetInteraction() - generally corresponds to a\ninitial event (e.g.,\n                           mouse down) that starts the\ninteraction process\n                           with the widget. WidgetInteraction() -\ninvoked when an event causes the widget to change\n                      appearance. EndWidgetInteraction() -\ngenerally corresponds to a final event (e.g., mouse up)\n                         and completes the interaction sequence.\nComputeInteractionState() - given (X,Y) display coordinates in a\nrenderer, with a\n                            possible flag that modifies the\ncomputation,\n                            what is the state of the widget?\nGetInteractionState() - return the current state of the widget.\nNote that the\n                        value of \"0\" typically refers to\n\"outside\". The\n                        interaction state is strictly a function\nof the\n                        representation, and the widget/represent\nmust agree\n                        on what they mean. Highlight() - turn on\nor off any highlights associated with the widget.\n              Highlights are generally turned on when the widget\nis selected.  Note that subclasses may ignore some of these\nmethods and implement their own depending on the specifics of the\nwidget.\n"},
  {(char*)"Highlight", PyvtkWidgetRepresentation_Highlight, 1,
   (char*)"V.Highlight(int)\nC++: virtual void Highlight(int highlightOn)\n\nThe following is a suggested API for widget representations.\nThese methods define the communication between the widget and its\nrepresentation. These methods are only suggestions because\nwidgets take on so many different forms that a universal API is\nnot deemed practical. However, these methods should be\nimplemented when possible to insure that the VTK widget hierarchy\nremains self-consistent.\n\nPlaceWidget() - given a bounding box\n(xmin,xmax,ymin,ymax,zmin,zmax), place\n                the widget inside of it. The current orientation\nof the widget\n                is preserved, only scaling and translation is\nperformed. StartWidgetInteraction() - generally corresponds to a\ninitial event (e.g.,\n                           mouse down) that starts the\ninteraction process\n                           with the widget. WidgetInteraction() -\ninvoked when an event causes the widget to change\n                      appearance. EndWidgetInteraction() -\ngenerally corresponds to a final event (e.g., mouse up)\n                         and completes the interaction sequence.\nComputeInteractionState() - given (X,Y) display coordinates in a\nrenderer, with a\n                            possible flag that modifies the\ncomputation,\n                            what is the state of the widget?\nGetInteractionState() - return the current state of the widget.\nNote that the\n                        value of \"0\" typically refers to\n\"outside\". The\n                        interaction state is strictly a function\nof the\n                        representation, and the widget/represent\nmust agree\n                        on what they mean. Highlight() - turn on\nor off any highlights associated with the widget.\n              Highlights are generally turned on when the widget\nis selected.  Note that subclasses may ignore some of these\nmethods and implement their own depending on the specifics of the\nwidget.\n"},
  {(char*)"SetPlaceFactor", PyvtkWidgetRepresentation_SetPlaceFactor, 1,
   (char*)"V.SetPlaceFactor(float)\nC++: void SetPlaceFactor(double)\n\nSet/Get a factor representing the scaling of the widget upon\nplacement (via the PlaceWidget() method). Normally the widget is\nplaced so that it just fits within the bounding box defined in\nPlaceWidget(bounds). The PlaceFactor will make the widget larger\n(PlaceFactor > 1) or smaller (PlaceFactor < 1). By default,\nPlaceFactor is set to 0.5.\n"},
  {(char*)"GetPlaceFactorMinValue", PyvtkWidgetRepresentation_GetPlaceFactorMinValue, 1,
   (char*)"V.GetPlaceFactorMinValue() -> float\nC++: double GetPlaceFactorMinValue()\n\nSet/Get a factor representing the scaling of the widget upon\nplacement (via the PlaceWidget() method). Normally the widget is\nplaced so that it just fits within the bounding box defined in\nPlaceWidget(bounds). The PlaceFactor will make the widget larger\n(PlaceFactor > 1) or smaller (PlaceFactor < 1). By default,\nPlaceFactor is set to 0.5.\n"},
  {(char*)"GetPlaceFactorMaxValue", PyvtkWidgetRepresentation_GetPlaceFactorMaxValue, 1,
   (char*)"V.GetPlaceFactorMaxValue() -> float\nC++: double GetPlaceFactorMaxValue()\n\nSet/Get a factor representing the scaling of the widget upon\nplacement (via the PlaceWidget() method). Normally the widget is\nplaced so that it just fits within the bounding box defined in\nPlaceWidget(bounds). The PlaceFactor will make the widget larger\n(PlaceFactor > 1) or smaller (PlaceFactor < 1). By default,\nPlaceFactor is set to 0.5.\n"},
  {(char*)"GetPlaceFactor", PyvtkWidgetRepresentation_GetPlaceFactor, 1,
   (char*)"V.GetPlaceFactor() -> float\nC++: double GetPlaceFactor()\n\nSet/Get a factor representing the scaling of the widget upon\nplacement (via the PlaceWidget() method). Normally the widget is\nplaced so that it just fits within the bounding box defined in\nPlaceWidget(bounds). The PlaceFactor will make the widget larger\n(PlaceFactor > 1) or smaller (PlaceFactor < 1). By default,\nPlaceFactor is set to 0.5.\n"},
  {(char*)"SetHandleSize", PyvtkWidgetRepresentation_SetHandleSize, 1,
   (char*)"V.SetHandleSize(float)\nC++: void SetHandleSize(double)\n\nSet/Get the factor that controls the size of the handles that\nappear as part of the widget (if any). These handles (like\nspheres, etc.)  are used to manipulate the widget. The HandleSize\ndata member allows you to change the relative size of the\nhandles. Note that while the handle size is typically expressed\nin pixels, some subclasses may use a relative size with respect\nto the viewport. (As a corollary, the value of this ivar is often\nset by subclasses of this class during instance instantiation.)\n"},
  {(char*)"GetHandleSizeMinValue", PyvtkWidgetRepresentation_GetHandleSizeMinValue, 1,
   (char*)"V.GetHandleSizeMinValue() -> float\nC++: double GetHandleSizeMinValue()\n\nSet/Get the factor that controls the size of the handles that\nappear as part of the widget (if any). These handles (like\nspheres, etc.)  are used to manipulate the widget. The HandleSize\ndata member allows you to change the relative size of the\nhandles. Note that while the handle size is typically expressed\nin pixels, some subclasses may use a relative size with respect\nto the viewport. (As a corollary, the value of this ivar is often\nset by subclasses of this class during instance instantiation.)\n"},
  {(char*)"GetHandleSizeMaxValue", PyvtkWidgetRepresentation_GetHandleSizeMaxValue, 1,
   (char*)"V.GetHandleSizeMaxValue() -> float\nC++: double GetHandleSizeMaxValue()\n\nSet/Get the factor that controls the size of the handles that\nappear as part of the widget (if any). These handles (like\nspheres, etc.)  are used to manipulate the widget. The HandleSize\ndata member allows you to change the relative size of the\nhandles. Note that while the handle size is typically expressed\nin pixels, some subclasses may use a relative size with respect\nto the viewport. (As a corollary, the value of this ivar is often\nset by subclasses of this class during instance instantiation.)\n"},
  {(char*)"GetHandleSize", PyvtkWidgetRepresentation_GetHandleSize, 1,
   (char*)"V.GetHandleSize() -> float\nC++: double GetHandleSize()\n\nSet/Get the factor that controls the size of the handles that\nappear as part of the widget (if any). These handles (like\nspheres, etc.)  are used to manipulate the widget. The HandleSize\ndata member allows you to change the relative size of the\nhandles. Note that while the handle size is typically expressed\nin pixels, some subclasses may use a relative size with respect\nto the viewport. (As a corollary, the value of this ivar is often\nset by subclasses of this class during instance instantiation.)\n"},
  {(char*)"GetNeedToRender", PyvtkWidgetRepresentation_GetNeedToRender, 1,
   (char*)"V.GetNeedToRender() -> int\nC++: int GetNeedToRender()\n\nSome subclasses use this data member to keep track of whether to\nrender or not (i.e., to minimize the total number of renders).\n"},
  {(char*)"SetNeedToRender", PyvtkWidgetRepresentation_SetNeedToRender, 1,
   (char*)"V.SetNeedToRender(int)\nC++: void SetNeedToRender(int)\n\nSome subclasses use this data member to keep track of whether to\nrender or not (i.e., to minimize the total number of renders).\n"},
  {(char*)"GetNeedToRenderMinValue", PyvtkWidgetRepresentation_GetNeedToRenderMinValue, 1,
   (char*)"V.GetNeedToRenderMinValue() -> int\nC++: int GetNeedToRenderMinValue()\n\nSome subclasses use this data member to keep track of whether to\nrender or not (i.e., to minimize the total number of renders).\n"},
  {(char*)"GetNeedToRenderMaxValue", PyvtkWidgetRepresentation_GetNeedToRenderMaxValue, 1,
   (char*)"V.GetNeedToRenderMaxValue() -> int\nC++: int GetNeedToRenderMaxValue()\n\nSome subclasses use this data member to keep track of whether to\nrender or not (i.e., to minimize the total number of renders).\n"},
  {(char*)"NeedToRenderOn", PyvtkWidgetRepresentation_NeedToRenderOn, 1,
   (char*)"V.NeedToRenderOn()\nC++: void NeedToRenderOn()\n\nSome subclasses use this data member to keep track of whether to\nrender or not (i.e., to minimize the total number of renders).\n"},
  {(char*)"NeedToRenderOff", PyvtkWidgetRepresentation_NeedToRenderOff, 1,
   (char*)"V.NeedToRenderOff()\nC++: void NeedToRenderOff()\n\nSome subclasses use this data member to keep track of whether to\nrender or not (i.e., to minimize the total number of renders).\n"},
  {(char*)"GetBounds", PyvtkWidgetRepresentation_GetBounds, 1,
   (char*)"V.GetBounds() -> (float, float, float, float, float, float)\nC++: virtual double *GetBounds()\n\nMethods to make this class behave as a vtkProp. They are repeated\nhere (from the vtkProp superclass) as a reminder to the widget\nimplementor. Failure to implement these methods properly may\nresult in the representation not appearing in the scene (i.e.,\nnot implementing the Render() methods properly) or leaking\ngraphics resources (i.e., not implementing\nReleaseGraphicsResources() properly).\n"},
  {(char*)"ShallowCopy", PyvtkWidgetRepresentation_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkProp)\nC++: virtual void ShallowCopy(vtkProp *prop)\n\nMethods to make this class behave as a vtkProp. They are repeated\nhere (from the vtkProp superclass) as a reminder to the widget\nimplementor. Failure to implement these methods properly may\nresult in the representation not appearing in the scene (i.e.,\nnot implementing the Render() methods properly) or leaking\ngraphics resources (i.e., not implementing\nReleaseGraphicsResources() properly).\n"},
  {(char*)"GetActors", PyvtkWidgetRepresentation_GetActors, 1,
   (char*)"V.GetActors(vtkPropCollection)\nC++: virtual void GetActors(vtkPropCollection *)\n\nMethods to make this class behave as a vtkProp. They are repeated\nhere (from the vtkProp superclass) as a reminder to the widget\nimplementor. Failure to implement these methods properly may\nresult in the representation not appearing in the scene (i.e.,\nnot implementing the Render() methods properly) or leaking\ngraphics resources (i.e., not implementing\nReleaseGraphicsResources() properly).\n"},
  {(char*)"GetActors2D", PyvtkWidgetRepresentation_GetActors2D, 1,
   (char*)"V.GetActors2D(vtkPropCollection)\nC++: virtual void GetActors2D(vtkPropCollection *)\n\nMethods to make this class behave as a vtkProp. They are repeated\nhere (from the vtkProp superclass) as a reminder to the widget\nimplementor. Failure to implement these methods properly may\nresult in the representation not appearing in the scene (i.e.,\nnot implementing the Render() methods properly) or leaking\ngraphics resources (i.e., not implementing\nReleaseGraphicsResources() properly).\n"},
  {(char*)"GetVolumes", PyvtkWidgetRepresentation_GetVolumes, 1,
   (char*)"V.GetVolumes(vtkPropCollection)\nC++: virtual void GetVolumes(vtkPropCollection *)\n\nMethods to make this class behave as a vtkProp. They are repeated\nhere (from the vtkProp superclass) as a reminder to the widget\nimplementor. Failure to implement these methods properly may\nresult in the representation not appearing in the scene (i.e.,\nnot implementing the Render() methods properly) or leaking\ngraphics resources (i.e., not implementing\nReleaseGraphicsResources() properly).\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkWidgetRepresentation_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nMethods to make this class behave as a vtkProp. They are repeated\nhere (from the vtkProp superclass) as a reminder to the widget\nimplementor. Failure to implement these methods properly may\nresult in the representation not appearing in the scene (i.e.,\nnot implementing the Render() methods properly) or leaking\ngraphics resources (i.e., not implementing\nReleaseGraphicsResources() properly).\n"},
  {(char*)"RenderOverlay", PyvtkWidgetRepresentation_RenderOverlay, 1,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: virtual int RenderOverlay(vtkViewport *viewport)\n\nMethods to make this class behave as a vtkProp. They are repeated\nhere (from the vtkProp superclass) as a reminder to the widget\nimplementor. Failure to implement these methods properly may\nresult in the representation not appearing in the scene (i.e.,\nnot implementing the Render() methods properly) or leaking\ngraphics resources (i.e., not implementing\nReleaseGraphicsResources() properly).\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkWidgetRepresentation_RenderOpaqueGeometry, 1,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *viewport)\n\nMethods to make this class behave as a vtkProp. They are repeated\nhere (from the vtkProp superclass) as a reminder to the widget\nimplementor. Failure to implement these methods properly may\nresult in the representation not appearing in the scene (i.e.,\nnot implementing the Render() methods properly) or leaking\ngraphics resources (i.e., not implementing\nReleaseGraphicsResources() properly).\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkWidgetRepresentation_RenderTranslucentPolygonalGeometry, 1,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(\n    vtkViewport *viewport)\n\nMethods to make this class behave as a vtkProp. They are repeated\nhere (from the vtkProp superclass) as a reminder to the widget\nimplementor. Failure to implement these methods properly may\nresult in the representation not appearing in the scene (i.e.,\nnot implementing the Render() methods properly) or leaking\ngraphics resources (i.e., not implementing\nReleaseGraphicsResources() properly).\n"},
  {(char*)"RenderVolumetricGeometry", PyvtkWidgetRepresentation_RenderVolumetricGeometry, 1,
   (char*)"V.RenderVolumetricGeometry(vtkViewport) -> int\nC++: virtual int RenderVolumetricGeometry(vtkViewport *viewport)\n\nMethods to make this class behave as a vtkProp. They are repeated\nhere (from the vtkProp superclass) as a reminder to the widget\nimplementor. Failure to implement these methods properly may\nresult in the representation not appearing in the scene (i.e.,\nnot implementing the Render() methods properly) or leaking\ngraphics resources (i.e., not implementing\nReleaseGraphicsResources() properly).\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkWidgetRepresentation_HasTranslucentPolygonalGeometry, 1,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nMethods to make this class behave as a vtkProp. They are repeated\nhere (from the vtkProp superclass) as a reminder to the widget\nimplementor. Failure to implement these methods properly may\nresult in the representation not appearing in the scene (i.e.,\nnot implementing the Render() methods properly) or leaking\ngraphics resources (i.e., not implementing\nReleaseGraphicsResources() properly).\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkWidgetRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkWidgetRepresentation_Methods,
    "vtkWidgetRepresentation", modulename,
    NULL, NULL,
    PyvtkWidgetRepresentation_Doc(),
    PyVTKClass_vtkPropNew(modulename));
  return cls;
}

const char **PyvtkWidgetRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkWidgetRepresentation - abstract class defines interface between\nthe widget and widget representation classes\n\n",
    "Superclass: vtkProp\n\n",
    "This class is used to define the API for, and partially implement, a\nrepresentation for different types of widgets. Note that the widget\nrepresentation (i.e., subclasses of vtkWidgetRepresentation) are a\ntype of vtkProp; meaning that they can be associated with a\nvtkRenderer end embedded in a scene like any other vtkActor. However,\nvtkWidgetRepresentation also defines an API that enables it to be\n",
    "paired with a subclass vtkAbstractWidget, meaning that it can be\ndriven by a widget, serving to represent the widget as the widget\nresponds to registered events.\n\nThe API defined here should be regarded as a guideline for\nimplementing widgets and widget representations. Widget behavior is\ncomplex, as is the way the representation responds to the registered\nwidget events, so the API may vary from w",
    "idget to widget to reflect\nthis complexity.\n\nCaveats:\n\nThe separation of the widget event handling and representation\nenables users and developers to create new appearances for the\nwidget. It also facilitates parallel processing, where the client\napplication handles events, and remote representations of the widget\nare slaves to the client (and do not handle events).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkWidgetRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkWidgetRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkWidgetRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}
