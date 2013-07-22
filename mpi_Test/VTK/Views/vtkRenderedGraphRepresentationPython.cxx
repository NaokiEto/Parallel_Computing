// python wrapper for vtkRenderedGraphRepresentation
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
#include "vtkRenderedGraphRepresentation.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkRenderedGraphRepresentation(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkRenderedGraphRepresentation(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkRenderedGraphRepresentationNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkRenderedGraphRepresentationNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkRenderedRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkRenderedRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkRenderedRepresentationNew
#endif

static const char **PyvtkRenderedGraphRepresentation_Doc();


static PyObject *
PyvtkRenderedGraphRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

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
      tempr = op->vtkRenderedGraphRepresentation::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

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
      tempr = op->vtkRenderedGraphRepresentation::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  vtkRenderedGraphRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkRenderedGraphRepresentation::NewInstance();
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
PyvtkRenderedGraphRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkRenderedGraphRepresentation *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkRenderedGraphRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetVertexLabelArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVertexLabelArrayName(temp0);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetVertexLabelArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetVertexLabelArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVertexLabelArrayName();
      }
    else
      {
      tempr = op->vtkRenderedGraphRepresentation::GetVertexLabelArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetVertexLabelPriorityArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexLabelPriorityArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVertexLabelPriorityArrayName(temp0);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetVertexLabelPriorityArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetVertexLabelPriorityArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexLabelPriorityArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVertexLabelPriorityArrayName();
      }
    else
      {
      tempr = op->vtkRenderedGraphRepresentation::GetVertexLabelPriorityArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetVertexLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVertexLabelVisibility(temp0);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetVertexLabelVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetVertexLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVertexLabelVisibility();
      }
    else
      {
      tempr = op->vtkRenderedGraphRepresentation::GetVertexLabelVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_VertexLabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VertexLabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->VertexLabelVisibilityOn();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::VertexLabelVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_VertexLabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VertexLabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->VertexLabelVisibilityOff();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::VertexLabelVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetVertexLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->SetVertexLabelTextProperty(temp0);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetVertexLabelTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetVertexLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  vtkTextProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVertexLabelTextProperty();
      }
    else
      {
      tempr = op->vtkRenderedGraphRepresentation::GetVertexLabelTextProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetVertexHoverArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexHoverArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVertexHoverArrayName(temp0);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetVertexHoverArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetVertexHoverArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexHoverArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVertexHoverArrayName();
      }
    else
      {
      tempr = op->vtkRenderedGraphRepresentation::GetVertexHoverArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetHideVertexLabelsOnInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHideVertexLabelsOnInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHideVertexLabelsOnInteraction(temp0);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetHideVertexLabelsOnInteraction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetHideVertexLabelsOnInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHideVertexLabelsOnInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHideVertexLabelsOnInteraction();
      }
    else
      {
      tempr = op->vtkRenderedGraphRepresentation::GetHideVertexLabelsOnInteraction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_HideVertexLabelsOnInteractionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HideVertexLabelsOnInteractionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HideVertexLabelsOnInteractionOn();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::HideVertexLabelsOnInteractionOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_HideVertexLabelsOnInteractionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HideVertexLabelsOnInteractionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HideVertexLabelsOnInteractionOff();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::HideVertexLabelsOnInteractionOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetEdgeLabelArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdgeLabelArrayName(temp0);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetEdgeLabelArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetEdgeLabelArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgeLabelArrayName();
      }
    else
      {
      tempr = op->vtkRenderedGraphRepresentation::GetEdgeLabelArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetEdgeLabelPriorityArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLabelPriorityArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdgeLabelPriorityArrayName(temp0);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetEdgeLabelPriorityArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetEdgeLabelPriorityArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeLabelPriorityArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgeLabelPriorityArrayName();
      }
    else
      {
      tempr = op->vtkRenderedGraphRepresentation::GetEdgeLabelPriorityArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetEdgeLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdgeLabelVisibility(temp0);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetEdgeLabelVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetEdgeLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgeLabelVisibility();
      }
    else
      {
      tempr = op->vtkRenderedGraphRepresentation::GetEdgeLabelVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_EdgeLabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeLabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EdgeLabelVisibilityOn();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::EdgeLabelVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_EdgeLabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeLabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EdgeLabelVisibilityOff();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::EdgeLabelVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetEdgeLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->SetEdgeLabelTextProperty(temp0);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetEdgeLabelTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetEdgeLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  vtkTextProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgeLabelTextProperty();
      }
    else
      {
      tempr = op->vtkRenderedGraphRepresentation::GetEdgeLabelTextProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetEdgeHoverArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeHoverArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdgeHoverArrayName(temp0);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetEdgeHoverArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetEdgeHoverArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeHoverArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgeHoverArrayName();
      }
    else
      {
      tempr = op->vtkRenderedGraphRepresentation::GetEdgeHoverArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetHideEdgeLabelsOnInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHideEdgeLabelsOnInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHideEdgeLabelsOnInteraction(temp0);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetHideEdgeLabelsOnInteraction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetHideEdgeLabelsOnInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHideEdgeLabelsOnInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHideEdgeLabelsOnInteraction();
      }
    else
      {
      tempr = op->vtkRenderedGraphRepresentation::GetHideEdgeLabelsOnInteraction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_HideEdgeLabelsOnInteractionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HideEdgeLabelsOnInteractionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HideEdgeLabelsOnInteractionOn();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::HideEdgeLabelsOnInteractionOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_HideEdgeLabelsOnInteractionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HideEdgeLabelsOnInteractionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HideEdgeLabelsOnInteractionOff();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::HideEdgeLabelsOnInteractionOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetVertexIconArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexIconArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVertexIconArrayName(temp0);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetVertexIconArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetVertexIconArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexIconArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVertexIconArrayName();
      }
    else
      {
      tempr = op->vtkRenderedGraphRepresentation::GetVertexIconArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetVertexIconPriorityArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexIconPriorityArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVertexIconPriorityArrayName(temp0);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetVertexIconPriorityArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetVertexIconPriorityArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexIconPriorityArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVertexIconPriorityArrayName();
      }
    else
      {
      tempr = op->vtkRenderedGraphRepresentation::GetVertexIconPriorityArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetVertexIconVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexIconVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVertexIconVisibility(temp0);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetVertexIconVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetVertexIconVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexIconVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVertexIconVisibility();
      }
    else
      {
      tempr = op->vtkRenderedGraphRepresentation::GetVertexIconVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_VertexIconVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VertexIconVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->VertexIconVisibilityOn();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::VertexIconVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_VertexIconVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VertexIconVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->VertexIconVisibilityOff();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::VertexIconVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_AddVertexIconType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddVertexIconType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddVertexIconType(temp0, temp1);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::AddVertexIconType(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_ClearVertexIconTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearVertexIconTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearVertexIconTypes();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::ClearVertexIconTypes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetUseVertexIconTypeMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseVertexIconTypeMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseVertexIconTypeMap(temp0);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetUseVertexIconTypeMap(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetUseVertexIconTypeMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseVertexIconTypeMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseVertexIconTypeMap();
      }
    else
      {
      tempr = op->vtkRenderedGraphRepresentation::GetUseVertexIconTypeMap();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_UseVertexIconTypeMapOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseVertexIconTypeMapOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseVertexIconTypeMapOn();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::UseVertexIconTypeMapOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_UseVertexIconTypeMapOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseVertexIconTypeMapOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseVertexIconTypeMapOff();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::UseVertexIconTypeMapOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetVertexIconAlignment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexIconAlignment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVertexIconAlignment(temp0);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetVertexIconAlignment(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetVertexIconAlignment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexIconAlignment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVertexIconAlignment();
      }
    else
      {
      tempr = op->vtkRenderedGraphRepresentation::GetVertexIconAlignment();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetVertexSelectedIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexSelectedIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVertexSelectedIcon(temp0);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetVertexSelectedIcon(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetVertexSelectedIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexSelectedIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVertexSelectedIcon();
      }
    else
      {
      tempr = op->vtkRenderedGraphRepresentation::GetVertexSelectedIcon();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetVertexDefaultIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexDefaultIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVertexDefaultIcon(temp0);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetVertexDefaultIcon(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetVertexDefaultIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexDefaultIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVertexDefaultIcon();
      }
    else
      {
      tempr = op->vtkRenderedGraphRepresentation::GetVertexDefaultIcon();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetVertexIconSelectionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexIconSelectionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVertexIconSelectionMode(temp0);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetVertexIconSelectionMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetVertexIconSelectionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexIconSelectionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVertexIconSelectionMode();
      }
    else
      {
      tempr = op->vtkRenderedGraphRepresentation::GetVertexIconSelectionMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetVertexIconSelectionModeToSelectedIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexIconSelectionModeToSelectedIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetVertexIconSelectionModeToSelectedIcon();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetVertexIconSelectionModeToSelectedIcon();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetVertexIconSelectionModeToSelectedOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexIconSelectionModeToSelectedOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetVertexIconSelectionModeToSelectedOffset();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetVertexIconSelectionModeToSelectedOffset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetVertexIconSelectionModeToAnnotationIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexIconSelectionModeToAnnotationIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetVertexIconSelectionModeToAnnotationIcon();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetVertexIconSelectionModeToAnnotationIcon();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetVertexIconSelectionModeToIgnoreSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexIconSelectionModeToIgnoreSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetVertexIconSelectionModeToIgnoreSelection();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetVertexIconSelectionModeToIgnoreSelection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetEdgeIconArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeIconArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdgeIconArrayName(temp0);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetEdgeIconArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetEdgeIconArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeIconArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgeIconArrayName();
      }
    else
      {
      tempr = op->vtkRenderedGraphRepresentation::GetEdgeIconArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetEdgeIconPriorityArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeIconPriorityArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdgeIconPriorityArrayName(temp0);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetEdgeIconPriorityArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetEdgeIconPriorityArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeIconPriorityArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgeIconPriorityArrayName();
      }
    else
      {
      tempr = op->vtkRenderedGraphRepresentation::GetEdgeIconPriorityArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetEdgeIconVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeIconVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdgeIconVisibility(temp0);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetEdgeIconVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetEdgeIconVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeIconVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgeIconVisibility();
      }
    else
      {
      tempr = op->vtkRenderedGraphRepresentation::GetEdgeIconVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_EdgeIconVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeIconVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EdgeIconVisibilityOn();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::EdgeIconVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_EdgeIconVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeIconVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EdgeIconVisibilityOff();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::EdgeIconVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_AddEdgeIconType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddEdgeIconType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddEdgeIconType(temp0, temp1);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::AddEdgeIconType(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_ClearEdgeIconTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearEdgeIconTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearEdgeIconTypes();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::ClearEdgeIconTypes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetUseEdgeIconTypeMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseEdgeIconTypeMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseEdgeIconTypeMap(temp0);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetUseEdgeIconTypeMap(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetUseEdgeIconTypeMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseEdgeIconTypeMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseEdgeIconTypeMap();
      }
    else
      {
      tempr = op->vtkRenderedGraphRepresentation::GetUseEdgeIconTypeMap();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_UseEdgeIconTypeMapOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseEdgeIconTypeMapOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseEdgeIconTypeMapOn();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::UseEdgeIconTypeMapOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_UseEdgeIconTypeMapOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseEdgeIconTypeMapOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseEdgeIconTypeMapOff();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::UseEdgeIconTypeMapOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetEdgeIconAlignment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeIconAlignment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdgeIconAlignment(temp0);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetEdgeIconAlignment(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetEdgeIconAlignment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeIconAlignment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgeIconAlignment();
      }
    else
      {
      tempr = op->vtkRenderedGraphRepresentation::GetEdgeIconAlignment();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetColorVerticesByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorVerticesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColorVerticesByArray(temp0);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetColorVerticesByArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetColorVerticesByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorVerticesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColorVerticesByArray();
      }
    else
      {
      tempr = op->vtkRenderedGraphRepresentation::GetColorVerticesByArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_ColorVerticesByArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorVerticesByArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ColorVerticesByArrayOn();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::ColorVerticesByArrayOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_ColorVerticesByArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorVerticesByArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ColorVerticesByArrayOff();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::ColorVerticesByArrayOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetVertexColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVertexColorArrayName(temp0);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetVertexColorArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetVertexColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVertexColorArrayName();
      }
    else
      {
      tempr = op->vtkRenderedGraphRepresentation::GetVertexColorArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetColorEdgesByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorEdgesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColorEdgesByArray(temp0);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetColorEdgesByArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetColorEdgesByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorEdgesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColorEdgesByArray();
      }
    else
      {
      tempr = op->vtkRenderedGraphRepresentation::GetColorEdgesByArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_ColorEdgesByArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorEdgesByArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ColorEdgesByArrayOn();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::ColorEdgesByArrayOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_ColorEdgesByArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorEdgesByArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ColorEdgesByArrayOff();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::ColorEdgesByArrayOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetEdgeColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdgeColorArrayName(temp0);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetEdgeColorArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetEdgeColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgeColorArrayName();
      }
    else
      {
      tempr = op->vtkRenderedGraphRepresentation::GetEdgeColorArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetEnableVerticesByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableVerticesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnableVerticesByArray(temp0);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetEnableVerticesByArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetEnableVerticesByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableVerticesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEnableVerticesByArray();
      }
    else
      {
      tempr = op->vtkRenderedGraphRepresentation::GetEnableVerticesByArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_EnableVerticesByArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableVerticesByArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableVerticesByArrayOn();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::EnableVerticesByArrayOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_EnableVerticesByArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableVerticesByArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableVerticesByArrayOff();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::EnableVerticesByArrayOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetEnabledVerticesArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabledVerticesArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnabledVerticesArrayName(temp0);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetEnabledVerticesArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetEnabledVerticesArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnabledVerticesArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEnabledVerticesArrayName();
      }
    else
      {
      tempr = op->vtkRenderedGraphRepresentation::GetEnabledVerticesArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetEnableEdgesByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableEdgesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnableEdgesByArray(temp0);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetEnableEdgesByArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetEnableEdgesByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableEdgesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEnableEdgesByArray();
      }
    else
      {
      tempr = op->vtkRenderedGraphRepresentation::GetEnableEdgesByArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_EnableEdgesByArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableEdgesByArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableEdgesByArrayOn();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::EnableEdgesByArrayOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_EnableEdgesByArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableEdgesByArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableEdgesByArrayOff();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::EnableEdgesByArrayOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetEnabledEdgesArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabledEdgesArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnabledEdgesArrayName(temp0);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetEnabledEdgesArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetEnabledEdgesArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnabledEdgesArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEnabledEdgesArrayName();
      }
    else
      {
      tempr = op->vtkRenderedGraphRepresentation::GetEnabledEdgesArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetEdgeVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdgeVisibility(temp0);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetEdgeVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetEdgeVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgeVisibility();
      }
    else
      {
      tempr = op->vtkRenderedGraphRepresentation::GetEdgeVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_EdgeVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EdgeVisibilityOn();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::EdgeVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_EdgeVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EdgeVisibilityOff();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::EdgeVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetEdgeSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdgeSelection(temp0);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetEdgeSelection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetEdgeSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgeSelection();
      }
    else
      {
      tempr = op->vtkRenderedGraphRepresentation::GetEdgeSelection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetLayoutStrategy_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  vtkGraphLayoutStrategy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGraphLayoutStrategy"))
    {
    if (ap.IsBound())
      {
      op->SetLayoutStrategy(temp0);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetLayoutStrategy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedGraphRepresentation_SetLayoutStrategy_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLayoutStrategy(temp0);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetLayoutStrategy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkRenderedGraphRepresentation_SetLayoutStrategy_Methods[] = {
  {NULL, PyvtkRenderedGraphRepresentation_SetLayoutStrategy_s1, 1,
   (char*)"@O *vtkGraphLayoutStrategy"},
  {NULL, PyvtkRenderedGraphRepresentation_SetLayoutStrategy_s2, 1,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkRenderedGraphRepresentation_SetLayoutStrategy(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRenderedGraphRepresentation_SetLayoutStrategy_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetLayoutStrategy");
  return NULL;
}



static PyObject *
PyvtkRenderedGraphRepresentation_GetLayoutStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  vtkGraphLayoutStrategy *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLayoutStrategy();
      }
    else
      {
      tempr = op->vtkRenderedGraphRepresentation::GetLayoutStrategy();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetLayoutStrategyName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayoutStrategyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLayoutStrategyName();
      }
    else
      {
      tempr = op->vtkRenderedGraphRepresentation::GetLayoutStrategyName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetLayoutStrategyToRandom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToRandom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLayoutStrategyToRandom();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetLayoutStrategyToRandom();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetLayoutStrategyToForceDirected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToForceDirected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLayoutStrategyToForceDirected();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetLayoutStrategyToForceDirected();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetLayoutStrategyToSimple2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToSimple2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLayoutStrategyToSimple2D();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetLayoutStrategyToSimple2D();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetLayoutStrategyToClustering2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToClustering2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLayoutStrategyToClustering2D();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetLayoutStrategyToClustering2D();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetLayoutStrategyToCommunity2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToCommunity2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLayoutStrategyToCommunity2D();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetLayoutStrategyToCommunity2D();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetLayoutStrategyToFast2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToFast2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLayoutStrategyToFast2D();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetLayoutStrategyToFast2D();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetLayoutStrategyToPassThrough(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToPassThrough");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLayoutStrategyToPassThrough();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetLayoutStrategyToPassThrough();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetLayoutStrategyToCircular(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToCircular");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLayoutStrategyToCircular();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetLayoutStrategyToCircular();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetLayoutStrategyToTree_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLayoutStrategyToTree();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetLayoutStrategyToTree();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedGraphRepresentation_SetLayoutStrategyToTree_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  bool temp0 = false;
  double temp1 = 90;
  double temp2 = 0.9;
  double temp3 = 1.0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 4) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
    {
    if (ap.IsBound())
      {
      op->SetLayoutStrategyToTree(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetLayoutStrategyToTree(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedGraphRepresentation_SetLayoutStrategyToTree(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkRenderedGraphRepresentation_SetLayoutStrategyToTree_s1(self, args);
    case 1:
    case 2:
    case 3:
    case 4:
      return PyvtkRenderedGraphRepresentation_SetLayoutStrategyToTree_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetLayoutStrategyToTree");
  return NULL;
}



static PyObject *
PyvtkRenderedGraphRepresentation_SetLayoutStrategyToCosmicTree_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToCosmicTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLayoutStrategyToCosmicTree();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetLayoutStrategyToCosmicTree();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedGraphRepresentation_SetLayoutStrategyToCosmicTree_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToCosmicTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  char *temp0 = NULL;
  bool temp1 = true;
  int temp2 = 0;
  vtkIdType temp3 = -1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 4) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
    {
    if (ap.IsBound())
      {
      op->SetLayoutStrategyToCosmicTree(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetLayoutStrategyToCosmicTree(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedGraphRepresentation_SetLayoutStrategyToCosmicTree(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkRenderedGraphRepresentation_SetLayoutStrategyToCosmicTree_s1(self, args);
    case 1:
    case 2:
    case 3:
    case 4:
      return PyvtkRenderedGraphRepresentation_SetLayoutStrategyToCosmicTree_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetLayoutStrategyToCosmicTree");
  return NULL;
}



static PyObject *
PyvtkRenderedGraphRepresentation_SetLayoutStrategyToCone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToCone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLayoutStrategyToCone();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetLayoutStrategyToCone();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetLayoutStrategyToSpanTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToSpanTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLayoutStrategyToSpanTree();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetLayoutStrategyToSpanTree();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetLayoutStrategyToAssignCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToAssignCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  char *temp0 = NULL;
  char *temp1 = 0;
  char *temp2 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    if (ap.IsBound())
      {
      op->SetLayoutStrategyToAssignCoordinates(temp0, temp1, temp2);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetLayoutStrategyToAssignCoordinates(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetEdgeLayoutStrategy_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  vtkEdgeLayoutStrategy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkEdgeLayoutStrategy"))
    {
    if (ap.IsBound())
      {
      op->SetEdgeLayoutStrategy(temp0);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetEdgeLayoutStrategy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedGraphRepresentation_SetEdgeLayoutStrategy_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdgeLayoutStrategy(temp0);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetEdgeLayoutStrategy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkRenderedGraphRepresentation_SetEdgeLayoutStrategy_Methods[] = {
  {NULL, PyvtkRenderedGraphRepresentation_SetEdgeLayoutStrategy_s1, 1,
   (char*)"@O *vtkEdgeLayoutStrategy"},
  {NULL, PyvtkRenderedGraphRepresentation_SetEdgeLayoutStrategy_s2, 1,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkRenderedGraphRepresentation_SetEdgeLayoutStrategy(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRenderedGraphRepresentation_SetEdgeLayoutStrategy_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetEdgeLayoutStrategy");
  return NULL;
}



static PyObject *
PyvtkRenderedGraphRepresentation_GetEdgeLayoutStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  vtkEdgeLayoutStrategy *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgeLayoutStrategy();
      }
    else
      {
      tempr = op->vtkRenderedGraphRepresentation::GetEdgeLayoutStrategy();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetEdgeLayoutStrategyToArcParallel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLayoutStrategyToArcParallel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetEdgeLayoutStrategyToArcParallel();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetEdgeLayoutStrategyToArcParallel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetEdgeLayoutStrategyToPassThrough(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLayoutStrategyToPassThrough");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetEdgeLayoutStrategyToPassThrough();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetEdgeLayoutStrategyToPassThrough();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetEdgeLayoutStrategyToGeo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLayoutStrategyToGeo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  double temp0 = 0.2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    if (ap.IsBound())
      {
      op->SetEdgeLayoutStrategyToGeo(temp0);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetEdgeLayoutStrategyToGeo(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetEdgeLayoutStrategyName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeLayoutStrategyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgeLayoutStrategyName();
      }
    else
      {
      tempr = op->vtkRenderedGraphRepresentation::GetEdgeLayoutStrategyName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_ApplyViewTheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyViewTheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  vtkViewTheme *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewTheme"))
    {
    if (ap.IsBound())
      {
      op->ApplyViewTheme(temp0);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::ApplyViewTheme(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetGlyphType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGlyphType(temp0);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetGlyphType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetGlyphType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGlyphType();
      }
    else
      {
      tempr = op->vtkRenderedGraphRepresentation::GetGlyphType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

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
      op->vtkRenderedGraphRepresentation::SetScaling(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

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
      tempr = op->vtkRenderedGraphRepresentation::GetScaling();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_ScalingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalingOn();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::ScalingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_ScalingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalingOff();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::ScalingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetScalingArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalingArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalingArrayName(temp0);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetScalingArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetScalingArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalingArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalingArrayName();
      }
    else
      {
      tempr = op->vtkRenderedGraphRepresentation::GetScalingArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetVertexScalarBarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexScalarBarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVertexScalarBarVisibility(temp0);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetVertexScalarBarVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetVertexScalarBarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexScalarBarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVertexScalarBarVisibility();
      }
    else
      {
      tempr = op->vtkRenderedGraphRepresentation::GetVertexScalarBarVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetEdgeScalarBarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeScalarBarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdgeScalarBarVisibility(temp0);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::SetEdgeScalarBarVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetEdgeScalarBarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeScalarBarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgeScalarBarVisibility();
      }
    else
      {
      tempr = op->vtkRenderedGraphRepresentation::GetEdgeScalarBarVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_IsLayoutComplete(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsLayoutComplete");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsLayoutComplete();
      }
    else
      {
      tempr = op->vtkRenderedGraphRepresentation::IsLayoutComplete();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_UpdateLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdateLayout();
      }
    else
      {
      op->vtkRenderedGraphRepresentation::UpdateLayout();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_ComputeSelectedGraphBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeSelectedGraphBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

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
      op->ComputeSelectedGraphBounds(temp0);
      }
    else
      {
      op->vtkRenderedGraphRepresentation::ComputeSelectedGraphBounds(temp0);
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

static PyMethodDef PyvtkRenderedGraphRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkRenderedGraphRepresentation_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRenderedGraphRepresentation_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRenderedGraphRepresentation_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkRenderedGraphRepresentation\nC++: vtkRenderedGraphRepresentation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRenderedGraphRepresentation_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRenderedGraphRepresentation\nC++: vtkRenderedGraphRepresentation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetVertexLabelArrayName", PyvtkRenderedGraphRepresentation_SetVertexLabelArrayName, 1,
   (char*)"V.SetVertexLabelArrayName(string)\nC++: virtual void SetVertexLabelArrayName(const char *name)\n\n"},
  {(char*)"GetVertexLabelArrayName", PyvtkRenderedGraphRepresentation_GetVertexLabelArrayName, 1,
   (char*)"V.GetVertexLabelArrayName() -> string\nC++: virtual const char *GetVertexLabelArrayName()\n\n"},
  {(char*)"SetVertexLabelPriorityArrayName", PyvtkRenderedGraphRepresentation_SetVertexLabelPriorityArrayName, 1,
   (char*)"V.SetVertexLabelPriorityArrayName(string)\nC++: virtual void SetVertexLabelPriorityArrayName(\n    const char *name)\n\n"},
  {(char*)"GetVertexLabelPriorityArrayName", PyvtkRenderedGraphRepresentation_GetVertexLabelPriorityArrayName, 1,
   (char*)"V.GetVertexLabelPriorityArrayName() -> string\nC++: virtual const char *GetVertexLabelPriorityArrayName()\n\n"},
  {(char*)"SetVertexLabelVisibility", PyvtkRenderedGraphRepresentation_SetVertexLabelVisibility, 1,
   (char*)"V.SetVertexLabelVisibility(bool)\nC++: virtual void SetVertexLabelVisibility(bool b)\n\n"},
  {(char*)"GetVertexLabelVisibility", PyvtkRenderedGraphRepresentation_GetVertexLabelVisibility, 1,
   (char*)"V.GetVertexLabelVisibility() -> bool\nC++: virtual bool GetVertexLabelVisibility()\n\n"},
  {(char*)"VertexLabelVisibilityOn", PyvtkRenderedGraphRepresentation_VertexLabelVisibilityOn, 1,
   (char*)"V.VertexLabelVisibilityOn()\nC++: void VertexLabelVisibilityOn()\n\n"},
  {(char*)"VertexLabelVisibilityOff", PyvtkRenderedGraphRepresentation_VertexLabelVisibilityOff, 1,
   (char*)"V.VertexLabelVisibilityOff()\nC++: void VertexLabelVisibilityOff()\n\n"},
  {(char*)"SetVertexLabelTextProperty", PyvtkRenderedGraphRepresentation_SetVertexLabelTextProperty, 1,
   (char*)"V.SetVertexLabelTextProperty(vtkTextProperty)\nC++: virtual void SetVertexLabelTextProperty(vtkTextProperty *p)\n\n"},
  {(char*)"GetVertexLabelTextProperty", PyvtkRenderedGraphRepresentation_GetVertexLabelTextProperty, 1,
   (char*)"V.GetVertexLabelTextProperty() -> vtkTextProperty\nC++: virtual vtkTextProperty *GetVertexLabelTextProperty()\n\n"},
  {(char*)"SetVertexHoverArrayName", PyvtkRenderedGraphRepresentation_SetVertexHoverArrayName, 1,
   (char*)"V.SetVertexHoverArrayName(string)\nC++: void SetVertexHoverArrayName(char *)\n\n"},
  {(char*)"GetVertexHoverArrayName", PyvtkRenderedGraphRepresentation_GetVertexHoverArrayName, 1,
   (char*)"V.GetVertexHoverArrayName() -> string\nC++: char *GetVertexHoverArrayName()\n\n"},
  {(char*)"SetHideVertexLabelsOnInteraction", PyvtkRenderedGraphRepresentation_SetHideVertexLabelsOnInteraction, 1,
   (char*)"V.SetHideVertexLabelsOnInteraction(bool)\nC++: void SetHideVertexLabelsOnInteraction(bool a)\n\nWhether to hide the display of vertex labels during mouse\ninteraction.  Default is off.\n"},
  {(char*)"GetHideVertexLabelsOnInteraction", PyvtkRenderedGraphRepresentation_GetHideVertexLabelsOnInteraction, 1,
   (char*)"V.GetHideVertexLabelsOnInteraction() -> bool\nC++: bool GetHideVertexLabelsOnInteraction()\n\nWhether to hide the display of vertex labels during mouse\ninteraction.  Default is off.\n"},
  {(char*)"HideVertexLabelsOnInteractionOn", PyvtkRenderedGraphRepresentation_HideVertexLabelsOnInteractionOn, 1,
   (char*)"V.HideVertexLabelsOnInteractionOn()\nC++: void HideVertexLabelsOnInteractionOn()\n\nWhether to hide the display of vertex labels during mouse\ninteraction.  Default is off.\n"},
  {(char*)"HideVertexLabelsOnInteractionOff", PyvtkRenderedGraphRepresentation_HideVertexLabelsOnInteractionOff, 1,
   (char*)"V.HideVertexLabelsOnInteractionOff()\nC++: void HideVertexLabelsOnInteractionOff()\n\nWhether to hide the display of vertex labels during mouse\ninteraction.  Default is off.\n"},
  {(char*)"SetEdgeLabelArrayName", PyvtkRenderedGraphRepresentation_SetEdgeLabelArrayName, 1,
   (char*)"V.SetEdgeLabelArrayName(string)\nC++: virtual void SetEdgeLabelArrayName(const char *name)\n\n"},
  {(char*)"GetEdgeLabelArrayName", PyvtkRenderedGraphRepresentation_GetEdgeLabelArrayName, 1,
   (char*)"V.GetEdgeLabelArrayName() -> string\nC++: virtual const char *GetEdgeLabelArrayName()\n\n"},
  {(char*)"SetEdgeLabelPriorityArrayName", PyvtkRenderedGraphRepresentation_SetEdgeLabelPriorityArrayName, 1,
   (char*)"V.SetEdgeLabelPriorityArrayName(string)\nC++: virtual void SetEdgeLabelPriorityArrayName(const char *name)\n\n"},
  {(char*)"GetEdgeLabelPriorityArrayName", PyvtkRenderedGraphRepresentation_GetEdgeLabelPriorityArrayName, 1,
   (char*)"V.GetEdgeLabelPriorityArrayName() -> string\nC++: virtual const char *GetEdgeLabelPriorityArrayName()\n\n"},
  {(char*)"SetEdgeLabelVisibility", PyvtkRenderedGraphRepresentation_SetEdgeLabelVisibility, 1,
   (char*)"V.SetEdgeLabelVisibility(bool)\nC++: virtual void SetEdgeLabelVisibility(bool b)\n\n"},
  {(char*)"GetEdgeLabelVisibility", PyvtkRenderedGraphRepresentation_GetEdgeLabelVisibility, 1,
   (char*)"V.GetEdgeLabelVisibility() -> bool\nC++: virtual bool GetEdgeLabelVisibility()\n\n"},
  {(char*)"EdgeLabelVisibilityOn", PyvtkRenderedGraphRepresentation_EdgeLabelVisibilityOn, 1,
   (char*)"V.EdgeLabelVisibilityOn()\nC++: void EdgeLabelVisibilityOn()\n\n"},
  {(char*)"EdgeLabelVisibilityOff", PyvtkRenderedGraphRepresentation_EdgeLabelVisibilityOff, 1,
   (char*)"V.EdgeLabelVisibilityOff()\nC++: void EdgeLabelVisibilityOff()\n\n"},
  {(char*)"SetEdgeLabelTextProperty", PyvtkRenderedGraphRepresentation_SetEdgeLabelTextProperty, 1,
   (char*)"V.SetEdgeLabelTextProperty(vtkTextProperty)\nC++: virtual void SetEdgeLabelTextProperty(vtkTextProperty *p)\n\n"},
  {(char*)"GetEdgeLabelTextProperty", PyvtkRenderedGraphRepresentation_GetEdgeLabelTextProperty, 1,
   (char*)"V.GetEdgeLabelTextProperty() -> vtkTextProperty\nC++: virtual vtkTextProperty *GetEdgeLabelTextProperty()\n\n"},
  {(char*)"SetEdgeHoverArrayName", PyvtkRenderedGraphRepresentation_SetEdgeHoverArrayName, 1,
   (char*)"V.SetEdgeHoverArrayName(string)\nC++: void SetEdgeHoverArrayName(char *)\n\n"},
  {(char*)"GetEdgeHoverArrayName", PyvtkRenderedGraphRepresentation_GetEdgeHoverArrayName, 1,
   (char*)"V.GetEdgeHoverArrayName() -> string\nC++: char *GetEdgeHoverArrayName()\n\n"},
  {(char*)"SetHideEdgeLabelsOnInteraction", PyvtkRenderedGraphRepresentation_SetHideEdgeLabelsOnInteraction, 1,
   (char*)"V.SetHideEdgeLabelsOnInteraction(bool)\nC++: void SetHideEdgeLabelsOnInteraction(bool a)\n\nWhether to hide the display of edge labels during mouse\ninteraction.  Default is off.\n"},
  {(char*)"GetHideEdgeLabelsOnInteraction", PyvtkRenderedGraphRepresentation_GetHideEdgeLabelsOnInteraction, 1,
   (char*)"V.GetHideEdgeLabelsOnInteraction() -> bool\nC++: bool GetHideEdgeLabelsOnInteraction()\n\nWhether to hide the display of edge labels during mouse\ninteraction.  Default is off.\n"},
  {(char*)"HideEdgeLabelsOnInteractionOn", PyvtkRenderedGraphRepresentation_HideEdgeLabelsOnInteractionOn, 1,
   (char*)"V.HideEdgeLabelsOnInteractionOn()\nC++: void HideEdgeLabelsOnInteractionOn()\n\nWhether to hide the display of edge labels during mouse\ninteraction.  Default is off.\n"},
  {(char*)"HideEdgeLabelsOnInteractionOff", PyvtkRenderedGraphRepresentation_HideEdgeLabelsOnInteractionOff, 1,
   (char*)"V.HideEdgeLabelsOnInteractionOff()\nC++: void HideEdgeLabelsOnInteractionOff()\n\nWhether to hide the display of edge labels during mouse\ninteraction.  Default is off.\n"},
  {(char*)"SetVertexIconArrayName", PyvtkRenderedGraphRepresentation_SetVertexIconArrayName, 1,
   (char*)"V.SetVertexIconArrayName(string)\nC++: virtual void SetVertexIconArrayName(const char *name)\n\n"},
  {(char*)"GetVertexIconArrayName", PyvtkRenderedGraphRepresentation_GetVertexIconArrayName, 1,
   (char*)"V.GetVertexIconArrayName() -> string\nC++: virtual const char *GetVertexIconArrayName()\n\n"},
  {(char*)"SetVertexIconPriorityArrayName", PyvtkRenderedGraphRepresentation_SetVertexIconPriorityArrayName, 1,
   (char*)"V.SetVertexIconPriorityArrayName(string)\nC++: virtual void SetVertexIconPriorityArrayName(const char *name)\n\n"},
  {(char*)"GetVertexIconPriorityArrayName", PyvtkRenderedGraphRepresentation_GetVertexIconPriorityArrayName, 1,
   (char*)"V.GetVertexIconPriorityArrayName() -> string\nC++: virtual const char *GetVertexIconPriorityArrayName()\n\n"},
  {(char*)"SetVertexIconVisibility", PyvtkRenderedGraphRepresentation_SetVertexIconVisibility, 1,
   (char*)"V.SetVertexIconVisibility(bool)\nC++: virtual void SetVertexIconVisibility(bool b)\n\n"},
  {(char*)"GetVertexIconVisibility", PyvtkRenderedGraphRepresentation_GetVertexIconVisibility, 1,
   (char*)"V.GetVertexIconVisibility() -> bool\nC++: virtual bool GetVertexIconVisibility()\n\n"},
  {(char*)"VertexIconVisibilityOn", PyvtkRenderedGraphRepresentation_VertexIconVisibilityOn, 1,
   (char*)"V.VertexIconVisibilityOn()\nC++: void VertexIconVisibilityOn()\n\n"},
  {(char*)"VertexIconVisibilityOff", PyvtkRenderedGraphRepresentation_VertexIconVisibilityOff, 1,
   (char*)"V.VertexIconVisibilityOff()\nC++: void VertexIconVisibilityOff()\n\n"},
  {(char*)"AddVertexIconType", PyvtkRenderedGraphRepresentation_AddVertexIconType, 1,
   (char*)"V.AddVertexIconType(string, int)\nC++: virtual void AddVertexIconType(const char *name, int type)\n\n"},
  {(char*)"ClearVertexIconTypes", PyvtkRenderedGraphRepresentation_ClearVertexIconTypes, 1,
   (char*)"V.ClearVertexIconTypes()\nC++: virtual void ClearVertexIconTypes()\n\n"},
  {(char*)"SetUseVertexIconTypeMap", PyvtkRenderedGraphRepresentation_SetUseVertexIconTypeMap, 1,
   (char*)"V.SetUseVertexIconTypeMap(bool)\nC++: virtual void SetUseVertexIconTypeMap(bool b)\n\n"},
  {(char*)"GetUseVertexIconTypeMap", PyvtkRenderedGraphRepresentation_GetUseVertexIconTypeMap, 1,
   (char*)"V.GetUseVertexIconTypeMap() -> bool\nC++: virtual bool GetUseVertexIconTypeMap()\n\n"},
  {(char*)"UseVertexIconTypeMapOn", PyvtkRenderedGraphRepresentation_UseVertexIconTypeMapOn, 1,
   (char*)"V.UseVertexIconTypeMapOn()\nC++: void UseVertexIconTypeMapOn()\n\n"},
  {(char*)"UseVertexIconTypeMapOff", PyvtkRenderedGraphRepresentation_UseVertexIconTypeMapOff, 1,
   (char*)"V.UseVertexIconTypeMapOff()\nC++: void UseVertexIconTypeMapOff()\n\n"},
  {(char*)"SetVertexIconAlignment", PyvtkRenderedGraphRepresentation_SetVertexIconAlignment, 1,
   (char*)"V.SetVertexIconAlignment(int)\nC++: virtual void SetVertexIconAlignment(int align)\n\n"},
  {(char*)"GetVertexIconAlignment", PyvtkRenderedGraphRepresentation_GetVertexIconAlignment, 1,
   (char*)"V.GetVertexIconAlignment() -> int\nC++: virtual int GetVertexIconAlignment()\n\n"},
  {(char*)"SetVertexSelectedIcon", PyvtkRenderedGraphRepresentation_SetVertexSelectedIcon, 1,
   (char*)"V.SetVertexSelectedIcon(int)\nC++: virtual void SetVertexSelectedIcon(int icon)\n\n"},
  {(char*)"GetVertexSelectedIcon", PyvtkRenderedGraphRepresentation_GetVertexSelectedIcon, 1,
   (char*)"V.GetVertexSelectedIcon() -> int\nC++: virtual int GetVertexSelectedIcon()\n\n"},
  {(char*)"SetVertexDefaultIcon", PyvtkRenderedGraphRepresentation_SetVertexDefaultIcon, 1,
   (char*)"V.SetVertexDefaultIcon(int)\nC++: virtual void SetVertexDefaultIcon(int icon)\n\n"},
  {(char*)"GetVertexDefaultIcon", PyvtkRenderedGraphRepresentation_GetVertexDefaultIcon, 1,
   (char*)"V.GetVertexDefaultIcon() -> int\nC++: virtual int GetVertexDefaultIcon()\n\n"},
  {(char*)"SetVertexIconSelectionMode", PyvtkRenderedGraphRepresentation_SetVertexIconSelectionMode, 1,
   (char*)"V.SetVertexIconSelectionMode(int)\nC++: virtual void SetVertexIconSelectionMode(int mode)\n\nSet the mode to one of  vtkApplyIcons::SELECTED_ICON - use\nVertexSelectedIcon vtkApplyIcons::SELECTED_OFFSET - use\nVertexSelectedIcon as offset vtkApplyIcons::ANNOTATION_ICON - use\ncurrent annotation icon vtkApplyIcons::IGNORE_SELECTION - ignore\nselected elements  The default is IGNORE_SELECTION.\n"},
  {(char*)"GetVertexIconSelectionMode", PyvtkRenderedGraphRepresentation_GetVertexIconSelectionMode, 1,
   (char*)"V.GetVertexIconSelectionMode() -> int\nC++: virtual int GetVertexIconSelectionMode()\n\nSet the mode to one of  vtkApplyIcons::SELECTED_ICON - use\nVertexSelectedIcon vtkApplyIcons::SELECTED_OFFSET - use\nVertexSelectedIcon as offset vtkApplyIcons::ANNOTATION_ICON - use\ncurrent annotation icon vtkApplyIcons::IGNORE_SELECTION - ignore\nselected elements  The default is IGNORE_SELECTION.\n"},
  {(char*)"SetVertexIconSelectionModeToSelectedIcon", PyvtkRenderedGraphRepresentation_SetVertexIconSelectionModeToSelectedIcon, 1,
   (char*)"V.SetVertexIconSelectionModeToSelectedIcon()\nC++: virtual void SetVertexIconSelectionModeToSelectedIcon()\n\nSet the mode to one of  vtkApplyIcons::SELECTED_ICON - use\nVertexSelectedIcon vtkApplyIcons::SELECTED_OFFSET - use\nVertexSelectedIcon as offset vtkApplyIcons::ANNOTATION_ICON - use\ncurrent annotation icon vtkApplyIcons::IGNORE_SELECTION - ignore\nselected elements  The default is IGNORE_SELECTION.\n"},
  {(char*)"SetVertexIconSelectionModeToSelectedOffset", PyvtkRenderedGraphRepresentation_SetVertexIconSelectionModeToSelectedOffset, 1,
   (char*)"V.SetVertexIconSelectionModeToSelectedOffset()\nC++: virtual void SetVertexIconSelectionModeToSelectedOffset()\n\nSet the mode to one of  vtkApplyIcons::SELECTED_ICON - use\nVertexSelectedIcon vtkApplyIcons::SELECTED_OFFSET - use\nVertexSelectedIcon as offset vtkApplyIcons::ANNOTATION_ICON - use\ncurrent annotation icon vtkApplyIcons::IGNORE_SELECTION - ignore\nselected elements  The default is IGNORE_SELECTION.\n"},
  {(char*)"SetVertexIconSelectionModeToAnnotationIcon", PyvtkRenderedGraphRepresentation_SetVertexIconSelectionModeToAnnotationIcon, 1,
   (char*)"V.SetVertexIconSelectionModeToAnnotationIcon()\nC++: virtual void SetVertexIconSelectionModeToAnnotationIcon()\n\nSet the mode to one of  vtkApplyIcons::SELECTED_ICON - use\nVertexSelectedIcon vtkApplyIcons::SELECTED_OFFSET - use\nVertexSelectedIcon as offset vtkApplyIcons::ANNOTATION_ICON - use\ncurrent annotation icon vtkApplyIcons::IGNORE_SELECTION - ignore\nselected elements  The default is IGNORE_SELECTION.\n"},
  {(char*)"SetVertexIconSelectionModeToIgnoreSelection", PyvtkRenderedGraphRepresentation_SetVertexIconSelectionModeToIgnoreSelection, 1,
   (char*)"V.SetVertexIconSelectionModeToIgnoreSelection()\nC++: virtual void SetVertexIconSelectionModeToIgnoreSelection()\n\nSet the mode to one of  vtkApplyIcons::SELECTED_ICON - use\nVertexSelectedIcon vtkApplyIcons::SELECTED_OFFSET - use\nVertexSelectedIcon as offset vtkApplyIcons::ANNOTATION_ICON - use\ncurrent annotation icon vtkApplyIcons::IGNORE_SELECTION - ignore\nselected elements  The default is IGNORE_SELECTION.\n"},
  {(char*)"SetEdgeIconArrayName", PyvtkRenderedGraphRepresentation_SetEdgeIconArrayName, 1,
   (char*)"V.SetEdgeIconArrayName(string)\nC++: virtual void SetEdgeIconArrayName(const char *name)\n\n"},
  {(char*)"GetEdgeIconArrayName", PyvtkRenderedGraphRepresentation_GetEdgeIconArrayName, 1,
   (char*)"V.GetEdgeIconArrayName() -> string\nC++: virtual const char *GetEdgeIconArrayName()\n\n"},
  {(char*)"SetEdgeIconPriorityArrayName", PyvtkRenderedGraphRepresentation_SetEdgeIconPriorityArrayName, 1,
   (char*)"V.SetEdgeIconPriorityArrayName(string)\nC++: virtual void SetEdgeIconPriorityArrayName(const char *name)\n\n"},
  {(char*)"GetEdgeIconPriorityArrayName", PyvtkRenderedGraphRepresentation_GetEdgeIconPriorityArrayName, 1,
   (char*)"V.GetEdgeIconPriorityArrayName() -> string\nC++: virtual const char *GetEdgeIconPriorityArrayName()\n\n"},
  {(char*)"SetEdgeIconVisibility", PyvtkRenderedGraphRepresentation_SetEdgeIconVisibility, 1,
   (char*)"V.SetEdgeIconVisibility(bool)\nC++: virtual void SetEdgeIconVisibility(bool b)\n\n"},
  {(char*)"GetEdgeIconVisibility", PyvtkRenderedGraphRepresentation_GetEdgeIconVisibility, 1,
   (char*)"V.GetEdgeIconVisibility() -> bool\nC++: virtual bool GetEdgeIconVisibility()\n\n"},
  {(char*)"EdgeIconVisibilityOn", PyvtkRenderedGraphRepresentation_EdgeIconVisibilityOn, 1,
   (char*)"V.EdgeIconVisibilityOn()\nC++: void EdgeIconVisibilityOn()\n\n"},
  {(char*)"EdgeIconVisibilityOff", PyvtkRenderedGraphRepresentation_EdgeIconVisibilityOff, 1,
   (char*)"V.EdgeIconVisibilityOff()\nC++: void EdgeIconVisibilityOff()\n\n"},
  {(char*)"AddEdgeIconType", PyvtkRenderedGraphRepresentation_AddEdgeIconType, 1,
   (char*)"V.AddEdgeIconType(string, int)\nC++: virtual void AddEdgeIconType(const char *name, int type)\n\n"},
  {(char*)"ClearEdgeIconTypes", PyvtkRenderedGraphRepresentation_ClearEdgeIconTypes, 1,
   (char*)"V.ClearEdgeIconTypes()\nC++: virtual void ClearEdgeIconTypes()\n\n"},
  {(char*)"SetUseEdgeIconTypeMap", PyvtkRenderedGraphRepresentation_SetUseEdgeIconTypeMap, 1,
   (char*)"V.SetUseEdgeIconTypeMap(bool)\nC++: virtual void SetUseEdgeIconTypeMap(bool b)\n\n"},
  {(char*)"GetUseEdgeIconTypeMap", PyvtkRenderedGraphRepresentation_GetUseEdgeIconTypeMap, 1,
   (char*)"V.GetUseEdgeIconTypeMap() -> bool\nC++: virtual bool GetUseEdgeIconTypeMap()\n\n"},
  {(char*)"UseEdgeIconTypeMapOn", PyvtkRenderedGraphRepresentation_UseEdgeIconTypeMapOn, 1,
   (char*)"V.UseEdgeIconTypeMapOn()\nC++: void UseEdgeIconTypeMapOn()\n\n"},
  {(char*)"UseEdgeIconTypeMapOff", PyvtkRenderedGraphRepresentation_UseEdgeIconTypeMapOff, 1,
   (char*)"V.UseEdgeIconTypeMapOff()\nC++: void UseEdgeIconTypeMapOff()\n\n"},
  {(char*)"SetEdgeIconAlignment", PyvtkRenderedGraphRepresentation_SetEdgeIconAlignment, 1,
   (char*)"V.SetEdgeIconAlignment(int)\nC++: virtual void SetEdgeIconAlignment(int align)\n\n"},
  {(char*)"GetEdgeIconAlignment", PyvtkRenderedGraphRepresentation_GetEdgeIconAlignment, 1,
   (char*)"V.GetEdgeIconAlignment() -> int\nC++: virtual int GetEdgeIconAlignment()\n\n"},
  {(char*)"SetColorVerticesByArray", PyvtkRenderedGraphRepresentation_SetColorVerticesByArray, 1,
   (char*)"V.SetColorVerticesByArray(bool)\nC++: virtual void SetColorVerticesByArray(bool b)\n\n"},
  {(char*)"GetColorVerticesByArray", PyvtkRenderedGraphRepresentation_GetColorVerticesByArray, 1,
   (char*)"V.GetColorVerticesByArray() -> bool\nC++: virtual bool GetColorVerticesByArray()\n\n"},
  {(char*)"ColorVerticesByArrayOn", PyvtkRenderedGraphRepresentation_ColorVerticesByArrayOn, 1,
   (char*)"V.ColorVerticesByArrayOn()\nC++: void ColorVerticesByArrayOn()\n\n"},
  {(char*)"ColorVerticesByArrayOff", PyvtkRenderedGraphRepresentation_ColorVerticesByArrayOff, 1,
   (char*)"V.ColorVerticesByArrayOff()\nC++: void ColorVerticesByArrayOff()\n\n"},
  {(char*)"SetVertexColorArrayName", PyvtkRenderedGraphRepresentation_SetVertexColorArrayName, 1,
   (char*)"V.SetVertexColorArrayName(string)\nC++: virtual void SetVertexColorArrayName(const char *name)\n\n"},
  {(char*)"GetVertexColorArrayName", PyvtkRenderedGraphRepresentation_GetVertexColorArrayName, 1,
   (char*)"V.GetVertexColorArrayName() -> string\nC++: virtual const char *GetVertexColorArrayName()\n\n"},
  {(char*)"SetColorEdgesByArray", PyvtkRenderedGraphRepresentation_SetColorEdgesByArray, 1,
   (char*)"V.SetColorEdgesByArray(bool)\nC++: virtual void SetColorEdgesByArray(bool b)\n\n"},
  {(char*)"GetColorEdgesByArray", PyvtkRenderedGraphRepresentation_GetColorEdgesByArray, 1,
   (char*)"V.GetColorEdgesByArray() -> bool\nC++: virtual bool GetColorEdgesByArray()\n\n"},
  {(char*)"ColorEdgesByArrayOn", PyvtkRenderedGraphRepresentation_ColorEdgesByArrayOn, 1,
   (char*)"V.ColorEdgesByArrayOn()\nC++: void ColorEdgesByArrayOn()\n\n"},
  {(char*)"ColorEdgesByArrayOff", PyvtkRenderedGraphRepresentation_ColorEdgesByArrayOff, 1,
   (char*)"V.ColorEdgesByArrayOff()\nC++: void ColorEdgesByArrayOff()\n\n"},
  {(char*)"SetEdgeColorArrayName", PyvtkRenderedGraphRepresentation_SetEdgeColorArrayName, 1,
   (char*)"V.SetEdgeColorArrayName(string)\nC++: virtual void SetEdgeColorArrayName(const char *name)\n\n"},
  {(char*)"GetEdgeColorArrayName", PyvtkRenderedGraphRepresentation_GetEdgeColorArrayName, 1,
   (char*)"V.GetEdgeColorArrayName() -> string\nC++: virtual const char *GetEdgeColorArrayName()\n\n"},
  {(char*)"SetEnableVerticesByArray", PyvtkRenderedGraphRepresentation_SetEnableVerticesByArray, 1,
   (char*)"V.SetEnableVerticesByArray(bool)\nC++: virtual void SetEnableVerticesByArray(bool b)\n\n"},
  {(char*)"GetEnableVerticesByArray", PyvtkRenderedGraphRepresentation_GetEnableVerticesByArray, 1,
   (char*)"V.GetEnableVerticesByArray() -> bool\nC++: virtual bool GetEnableVerticesByArray()\n\n"},
  {(char*)"EnableVerticesByArrayOn", PyvtkRenderedGraphRepresentation_EnableVerticesByArrayOn, 1,
   (char*)"V.EnableVerticesByArrayOn()\nC++: void EnableVerticesByArrayOn()\n\n"},
  {(char*)"EnableVerticesByArrayOff", PyvtkRenderedGraphRepresentation_EnableVerticesByArrayOff, 1,
   (char*)"V.EnableVerticesByArrayOff()\nC++: void EnableVerticesByArrayOff()\n\n"},
  {(char*)"SetEnabledVerticesArrayName", PyvtkRenderedGraphRepresentation_SetEnabledVerticesArrayName, 1,
   (char*)"V.SetEnabledVerticesArrayName(string)\nC++: virtual void SetEnabledVerticesArrayName(const char *name)\n\n"},
  {(char*)"GetEnabledVerticesArrayName", PyvtkRenderedGraphRepresentation_GetEnabledVerticesArrayName, 1,
   (char*)"V.GetEnabledVerticesArrayName() -> string\nC++: virtual const char *GetEnabledVerticesArrayName()\n\n"},
  {(char*)"SetEnableEdgesByArray", PyvtkRenderedGraphRepresentation_SetEnableEdgesByArray, 1,
   (char*)"V.SetEnableEdgesByArray(bool)\nC++: virtual void SetEnableEdgesByArray(bool b)\n\n"},
  {(char*)"GetEnableEdgesByArray", PyvtkRenderedGraphRepresentation_GetEnableEdgesByArray, 1,
   (char*)"V.GetEnableEdgesByArray() -> bool\nC++: virtual bool GetEnableEdgesByArray()\n\n"},
  {(char*)"EnableEdgesByArrayOn", PyvtkRenderedGraphRepresentation_EnableEdgesByArrayOn, 1,
   (char*)"V.EnableEdgesByArrayOn()\nC++: void EnableEdgesByArrayOn()\n\n"},
  {(char*)"EnableEdgesByArrayOff", PyvtkRenderedGraphRepresentation_EnableEdgesByArrayOff, 1,
   (char*)"V.EnableEdgesByArrayOff()\nC++: void EnableEdgesByArrayOff()\n\n"},
  {(char*)"SetEnabledEdgesArrayName", PyvtkRenderedGraphRepresentation_SetEnabledEdgesArrayName, 1,
   (char*)"V.SetEnabledEdgesArrayName(string)\nC++: virtual void SetEnabledEdgesArrayName(const char *name)\n\n"},
  {(char*)"GetEnabledEdgesArrayName", PyvtkRenderedGraphRepresentation_GetEnabledEdgesArrayName, 1,
   (char*)"V.GetEnabledEdgesArrayName() -> string\nC++: virtual const char *GetEnabledEdgesArrayName()\n\n"},
  {(char*)"SetEdgeVisibility", PyvtkRenderedGraphRepresentation_SetEdgeVisibility, 1,
   (char*)"V.SetEdgeVisibility(bool)\nC++: virtual void SetEdgeVisibility(bool b)\n\n"},
  {(char*)"GetEdgeVisibility", PyvtkRenderedGraphRepresentation_GetEdgeVisibility, 1,
   (char*)"V.GetEdgeVisibility() -> bool\nC++: virtual bool GetEdgeVisibility()\n\n"},
  {(char*)"EdgeVisibilityOn", PyvtkRenderedGraphRepresentation_EdgeVisibilityOn, 1,
   (char*)"V.EdgeVisibilityOn()\nC++: void EdgeVisibilityOn()\n\n"},
  {(char*)"EdgeVisibilityOff", PyvtkRenderedGraphRepresentation_EdgeVisibilityOff, 1,
   (char*)"V.EdgeVisibilityOff()\nC++: void EdgeVisibilityOff()\n\n"},
  {(char*)"SetEdgeSelection", PyvtkRenderedGraphRepresentation_SetEdgeSelection, 1,
   (char*)"V.SetEdgeSelection(bool)\nC++: void SetEdgeSelection(bool b)\n\n"},
  {(char*)"GetEdgeSelection", PyvtkRenderedGraphRepresentation_GetEdgeSelection, 1,
   (char*)"V.GetEdgeSelection() -> bool\nC++: bool GetEdgeSelection()\n\n"},
  {(char*)"SetLayoutStrategy", PyvtkRenderedGraphRepresentation_SetLayoutStrategy, 1,
   (char*)"V.SetLayoutStrategy(vtkGraphLayoutStrategy)\nC++: virtual void SetLayoutStrategy(\n    vtkGraphLayoutStrategy *strategy)\nV.SetLayoutStrategy(string)\nC++: virtual void SetLayoutStrategy(const char *name)\n\nSet/get the graph layout strategy.\n"},
  {(char*)"GetLayoutStrategy", PyvtkRenderedGraphRepresentation_GetLayoutStrategy, 1,
   (char*)"V.GetLayoutStrategy() -> vtkGraphLayoutStrategy\nC++: virtual vtkGraphLayoutStrategy *GetLayoutStrategy()\n\nSet/get the graph layout strategy.\n"},
  {(char*)"GetLayoutStrategyName", PyvtkRenderedGraphRepresentation_GetLayoutStrategyName, 1,
   (char*)"V.GetLayoutStrategyName() -> string\nC++: char *GetLayoutStrategyName()\n\nGet/set the layout strategy by name.\n"},
  {(char*)"SetLayoutStrategyToRandom", PyvtkRenderedGraphRepresentation_SetLayoutStrategyToRandom, 1,
   (char*)"V.SetLayoutStrategyToRandom()\nC++: void SetLayoutStrategyToRandom()\n\nSet predefined layout strategies.\n"},
  {(char*)"SetLayoutStrategyToForceDirected", PyvtkRenderedGraphRepresentation_SetLayoutStrategyToForceDirected, 1,
   (char*)"V.SetLayoutStrategyToForceDirected()\nC++: void SetLayoutStrategyToForceDirected()\n\nSet predefined layout strategies.\n"},
  {(char*)"SetLayoutStrategyToSimple2D", PyvtkRenderedGraphRepresentation_SetLayoutStrategyToSimple2D, 1,
   (char*)"V.SetLayoutStrategyToSimple2D()\nC++: void SetLayoutStrategyToSimple2D()\n\nSet predefined layout strategies.\n"},
  {(char*)"SetLayoutStrategyToClustering2D", PyvtkRenderedGraphRepresentation_SetLayoutStrategyToClustering2D, 1,
   (char*)"V.SetLayoutStrategyToClustering2D()\nC++: void SetLayoutStrategyToClustering2D()\n\nSet predefined layout strategies.\n"},
  {(char*)"SetLayoutStrategyToCommunity2D", PyvtkRenderedGraphRepresentation_SetLayoutStrategyToCommunity2D, 1,
   (char*)"V.SetLayoutStrategyToCommunity2D()\nC++: void SetLayoutStrategyToCommunity2D()\n\nSet predefined layout strategies.\n"},
  {(char*)"SetLayoutStrategyToFast2D", PyvtkRenderedGraphRepresentation_SetLayoutStrategyToFast2D, 1,
   (char*)"V.SetLayoutStrategyToFast2D()\nC++: void SetLayoutStrategyToFast2D()\n\nSet predefined layout strategies.\n"},
  {(char*)"SetLayoutStrategyToPassThrough", PyvtkRenderedGraphRepresentation_SetLayoutStrategyToPassThrough, 1,
   (char*)"V.SetLayoutStrategyToPassThrough()\nC++: void SetLayoutStrategyToPassThrough()\n\nSet predefined layout strategies.\n"},
  {(char*)"SetLayoutStrategyToCircular", PyvtkRenderedGraphRepresentation_SetLayoutStrategyToCircular, 1,
   (char*)"V.SetLayoutStrategyToCircular()\nC++: void SetLayoutStrategyToCircular()\n\nSet predefined layout strategies.\n"},
  {(char*)"SetLayoutStrategyToTree", PyvtkRenderedGraphRepresentation_SetLayoutStrategyToTree, 1,
   (char*)"V.SetLayoutStrategyToTree()\nC++: void SetLayoutStrategyToTree()\nV.SetLayoutStrategyToTree(bool, float, float, float)\nC++: virtual void SetLayoutStrategyToTree(bool radial,\n    double angle=90, double leafSpacing=0.9,\n    double logSpacing=1.0)\n\nSet predefined layout strategies.\n"},
  {(char*)"SetLayoutStrategyToCosmicTree", PyvtkRenderedGraphRepresentation_SetLayoutStrategyToCosmicTree, 1,
   (char*)"V.SetLayoutStrategyToCosmicTree()\nC++: void SetLayoutStrategyToCosmicTree()\nV.SetLayoutStrategyToCosmicTree(string, bool, int, int)\nC++: virtual void SetLayoutStrategyToCosmicTree(\n    const char *nodeSizeArrayName, bool sizeLeafNodesOnly=true,\n    int layoutDepth=0, vtkIdType layoutRoot=-1)\n\nSet predefined layout strategies.\n"},
  {(char*)"SetLayoutStrategyToCone", PyvtkRenderedGraphRepresentation_SetLayoutStrategyToCone, 1,
   (char*)"V.SetLayoutStrategyToCone()\nC++: void SetLayoutStrategyToCone()\n\nSet predefined layout strategies.\n"},
  {(char*)"SetLayoutStrategyToSpanTree", PyvtkRenderedGraphRepresentation_SetLayoutStrategyToSpanTree, 1,
   (char*)"V.SetLayoutStrategyToSpanTree()\nC++: void SetLayoutStrategyToSpanTree()\n\nSet predefined layout strategies.\n"},
  {(char*)"SetLayoutStrategyToAssignCoordinates", PyvtkRenderedGraphRepresentation_SetLayoutStrategyToAssignCoordinates, 1,
   (char*)"V.SetLayoutStrategyToAssignCoordinates(string, string, string)\nC++: virtual void SetLayoutStrategyToAssignCoordinates(\n    const char *xarr, const char *yarr=0, const char *zarr=0)\n\nSet the layout strategy to use coordinates from arrays. The x\narray must be specified. The y and z arrays are optional.\n"},
  {(char*)"SetEdgeLayoutStrategy", PyvtkRenderedGraphRepresentation_SetEdgeLayoutStrategy, 1,
   (char*)"V.SetEdgeLayoutStrategy(vtkEdgeLayoutStrategy)\nC++: virtual void SetEdgeLayoutStrategy(\n    vtkEdgeLayoutStrategy *strategy)\nV.SetEdgeLayoutStrategy(string)\nC++: virtual void SetEdgeLayoutStrategy(const char *name)\n\nSet/get the graph layout strategy.\n"},
  {(char*)"GetEdgeLayoutStrategy", PyvtkRenderedGraphRepresentation_GetEdgeLayoutStrategy, 1,
   (char*)"V.GetEdgeLayoutStrategy() -> vtkEdgeLayoutStrategy\nC++: virtual vtkEdgeLayoutStrategy *GetEdgeLayoutStrategy()\n\nSet/get the graph layout strategy.\n"},
  {(char*)"SetEdgeLayoutStrategyToArcParallel", PyvtkRenderedGraphRepresentation_SetEdgeLayoutStrategyToArcParallel, 1,
   (char*)"V.SetEdgeLayoutStrategyToArcParallel()\nC++: void SetEdgeLayoutStrategyToArcParallel()\n\nSet/get the graph layout strategy.\n"},
  {(char*)"SetEdgeLayoutStrategyToPassThrough", PyvtkRenderedGraphRepresentation_SetEdgeLayoutStrategyToPassThrough, 1,
   (char*)"V.SetEdgeLayoutStrategyToPassThrough()\nC++: void SetEdgeLayoutStrategyToPassThrough()\n\nSet/get the graph layout strategy.\n"},
  {(char*)"SetEdgeLayoutStrategyToGeo", PyvtkRenderedGraphRepresentation_SetEdgeLayoutStrategyToGeo, 1,
   (char*)"V.SetEdgeLayoutStrategyToGeo(float)\nC++: virtual void SetEdgeLayoutStrategyToGeo(\n    double explodeFactor=0.2)\n\nSet the edge layout strategy to a geospatial arced strategy\nappropriate for vtkGeoView.\n"},
  {(char*)"GetEdgeLayoutStrategyName", PyvtkRenderedGraphRepresentation_GetEdgeLayoutStrategyName, 1,
   (char*)"V.GetEdgeLayoutStrategyName() -> string\nC++: char *GetEdgeLayoutStrategyName()\n\nSet the edge layout strategy by name.\n"},
  {(char*)"ApplyViewTheme", PyvtkRenderedGraphRepresentation_ApplyViewTheme, 1,
   (char*)"V.ApplyViewTheme(vtkViewTheme)\nC++: virtual void ApplyViewTheme(vtkViewTheme *theme)\n\nApply a theme to this representation.\n"},
  {(char*)"SetGlyphType", PyvtkRenderedGraphRepresentation_SetGlyphType, 1,
   (char*)"V.SetGlyphType(int)\nC++: virtual void SetGlyphType(int type)\n\nSet the graph vertex glyph type.\n"},
  {(char*)"GetGlyphType", PyvtkRenderedGraphRepresentation_GetGlyphType, 1,
   (char*)"V.GetGlyphType() -> int\nC++: virtual int GetGlyphType()\n\nSet the graph vertex glyph type.\n"},
  {(char*)"SetScaling", PyvtkRenderedGraphRepresentation_SetScaling, 1,
   (char*)"V.SetScaling(bool)\nC++: virtual void SetScaling(bool b)\n\nSet whether to scale vertex glyphs.\n"},
  {(char*)"GetScaling", PyvtkRenderedGraphRepresentation_GetScaling, 1,
   (char*)"V.GetScaling() -> bool\nC++: virtual bool GetScaling()\n\nSet whether to scale vertex glyphs.\n"},
  {(char*)"ScalingOn", PyvtkRenderedGraphRepresentation_ScalingOn, 1,
   (char*)"V.ScalingOn()\nC++: void ScalingOn()\n\nSet whether to scale vertex glyphs.\n"},
  {(char*)"ScalingOff", PyvtkRenderedGraphRepresentation_ScalingOff, 1,
   (char*)"V.ScalingOff()\nC++: void ScalingOff()\n\nSet whether to scale vertex glyphs.\n"},
  {(char*)"SetScalingArrayName", PyvtkRenderedGraphRepresentation_SetScalingArrayName, 1,
   (char*)"V.SetScalingArrayName(string)\nC++: virtual void SetScalingArrayName(const char *name)\n\nSet the glyph scaling array name.\n"},
  {(char*)"GetScalingArrayName", PyvtkRenderedGraphRepresentation_GetScalingArrayName, 1,
   (char*)"V.GetScalingArrayName() -> string\nC++: virtual const char *GetScalingArrayName()\n\nSet the glyph scaling array name.\n"},
  {(char*)"SetVertexScalarBarVisibility", PyvtkRenderedGraphRepresentation_SetVertexScalarBarVisibility, 1,
   (char*)"V.SetVertexScalarBarVisibility(bool)\nC++: virtual void SetVertexScalarBarVisibility(bool b)\n\nVertex/edge scalar bar visibility.\n"},
  {(char*)"GetVertexScalarBarVisibility", PyvtkRenderedGraphRepresentation_GetVertexScalarBarVisibility, 1,
   (char*)"V.GetVertexScalarBarVisibility() -> bool\nC++: virtual bool GetVertexScalarBarVisibility()\n\nVertex/edge scalar bar visibility.\n"},
  {(char*)"SetEdgeScalarBarVisibility", PyvtkRenderedGraphRepresentation_SetEdgeScalarBarVisibility, 1,
   (char*)"V.SetEdgeScalarBarVisibility(bool)\nC++: virtual void SetEdgeScalarBarVisibility(bool b)\n\nVertex/edge scalar bar visibility.\n"},
  {(char*)"GetEdgeScalarBarVisibility", PyvtkRenderedGraphRepresentation_GetEdgeScalarBarVisibility, 1,
   (char*)"V.GetEdgeScalarBarVisibility() -> bool\nC++: virtual bool GetEdgeScalarBarVisibility()\n\nVertex/edge scalar bar visibility.\n"},
  {(char*)"IsLayoutComplete", PyvtkRenderedGraphRepresentation_IsLayoutComplete, 1,
   (char*)"V.IsLayoutComplete() -> bool\nC++: virtual bool IsLayoutComplete()\n\nWhether the current graph layout is complete.\n"},
  {(char*)"UpdateLayout", PyvtkRenderedGraphRepresentation_UpdateLayout, 1,
   (char*)"V.UpdateLayout()\nC++: virtual void UpdateLayout()\n\nPerforms another iteration on the graph layout.\n"},
  {(char*)"ComputeSelectedGraphBounds", PyvtkRenderedGraphRepresentation_ComputeSelectedGraphBounds, 1,
   (char*)"V.ComputeSelectedGraphBounds([float, float, float, float, float,\n    float])\nC++: void ComputeSelectedGraphBounds(double bounds[6])\n\nCompute the bounding box of the selected subgraph.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRenderedGraphRepresentation_StaticNew()
{
  return vtkRenderedGraphRepresentation::New();
}

PyObject *PyVTKClass_vtkRenderedGraphRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRenderedGraphRepresentation_StaticNew,
    PyvtkRenderedGraphRepresentation_Methods,
    "vtkRenderedGraphRepresentation", modulename,
    NULL, NULL,
    PyvtkRenderedGraphRepresentation_Doc(),
    PyVTKClass_vtkRenderedRepresentationNew(modulename));
  return cls;
}

const char **PyvtkRenderedGraphRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkRenderedGraphRepresentation - \n\n",
    "Superclass: vtkRenderedRepresentation\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRenderedGraphRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRenderedGraphRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRenderedGraphRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

