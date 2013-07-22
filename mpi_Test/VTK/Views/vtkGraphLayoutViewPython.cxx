// python wrapper for vtkGraphLayoutView
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
#include "vtkGraphLayoutView.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGraphLayoutView(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGraphLayoutView(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGraphLayoutViewNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGraphLayoutViewNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkRenderViewNew
extern "C" { PyObject *PyVTKClass_vtkRenderViewNew(const char *); }
#define DECLARED_PyVTKClass_vtkRenderViewNew
#endif

static const char **PyvtkGraphLayoutView_Doc();


static PyObject *
PyvtkGraphLayoutView_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      tempr = op->vtkGraphLayoutView::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      tempr = op->vtkGraphLayoutView::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  vtkGraphLayoutView *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGraphLayoutView::NewInstance();
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
PyvtkGraphLayoutView_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGraphLayoutView *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGraphLayoutView::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetVertexLabelArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      op->vtkGraphLayoutView::SetVertexLabelArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetVertexLabelArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      tempr = op->vtkGraphLayoutView::GetVertexLabelArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetEdgeLabelArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      op->vtkGraphLayoutView::SetEdgeLabelArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetEdgeLabelArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      tempr = op->vtkGraphLayoutView::GetEdgeLabelArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetVertexLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      op->vtkGraphLayoutView::SetVertexLabelVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetVertexLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      tempr = op->vtkGraphLayoutView::GetVertexLabelVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_VertexLabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VertexLabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->VertexLabelVisibilityOn();
      }
    else
      {
      op->vtkGraphLayoutView::VertexLabelVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_VertexLabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VertexLabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->VertexLabelVisibilityOff();
      }
    else
      {
      op->vtkGraphLayoutView::VertexLabelVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetHideVertexLabelsOnInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHideVertexLabelsOnInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      op->vtkGraphLayoutView::SetHideVertexLabelsOnInteraction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetHideVertexLabelsOnInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHideVertexLabelsOnInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      tempr = op->vtkGraphLayoutView::GetHideVertexLabelsOnInteraction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_HideVertexLabelsOnInteractionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HideVertexLabelsOnInteractionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HideVertexLabelsOnInteractionOn();
      }
    else
      {
      op->vtkGraphLayoutView::HideVertexLabelsOnInteractionOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_HideVertexLabelsOnInteractionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HideVertexLabelsOnInteractionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HideVertexLabelsOnInteractionOff();
      }
    else
      {
      op->vtkGraphLayoutView::HideVertexLabelsOnInteractionOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetEdgeVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      op->vtkGraphLayoutView::SetEdgeVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetEdgeVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      tempr = op->vtkGraphLayoutView::GetEdgeVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_EdgeVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EdgeVisibilityOn();
      }
    else
      {
      op->vtkGraphLayoutView::EdgeVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_EdgeVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EdgeVisibilityOff();
      }
    else
      {
      op->vtkGraphLayoutView::EdgeVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetEdgeLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      op->vtkGraphLayoutView::SetEdgeLabelVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetEdgeLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      tempr = op->vtkGraphLayoutView::GetEdgeLabelVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_EdgeLabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeLabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EdgeLabelVisibilityOn();
      }
    else
      {
      op->vtkGraphLayoutView::EdgeLabelVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_EdgeLabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeLabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EdgeLabelVisibilityOff();
      }
    else
      {
      op->vtkGraphLayoutView::EdgeLabelVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetHideEdgeLabelsOnInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHideEdgeLabelsOnInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      op->vtkGraphLayoutView::SetHideEdgeLabelsOnInteraction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetHideEdgeLabelsOnInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHideEdgeLabelsOnInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      tempr = op->vtkGraphLayoutView::GetHideEdgeLabelsOnInteraction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_HideEdgeLabelsOnInteractionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HideEdgeLabelsOnInteractionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HideEdgeLabelsOnInteractionOn();
      }
    else
      {
      op->vtkGraphLayoutView::HideEdgeLabelsOnInteractionOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_HideEdgeLabelsOnInteractionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HideEdgeLabelsOnInteractionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HideEdgeLabelsOnInteractionOff();
      }
    else
      {
      op->vtkGraphLayoutView::HideEdgeLabelsOnInteractionOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetVertexColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      op->vtkGraphLayoutView::SetVertexColorArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetVertexColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      tempr = op->vtkGraphLayoutView::GetVertexColorArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetColorVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColorVertices(temp0);
      }
    else
      {
      op->vtkGraphLayoutView::SetColorVertices(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetColorVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColorVertices();
      }
    else
      {
      tempr = op->vtkGraphLayoutView::GetColorVertices();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_ColorVerticesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorVerticesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ColorVerticesOn();
      }
    else
      {
      op->vtkGraphLayoutView::ColorVerticesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_ColorVerticesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorVerticesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ColorVerticesOff();
      }
    else
      {
      op->vtkGraphLayoutView::ColorVerticesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetEdgeColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      op->vtkGraphLayoutView::SetEdgeColorArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetEdgeColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      tempr = op->vtkGraphLayoutView::GetEdgeColorArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetColorEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColorEdges(temp0);
      }
    else
      {
      op->vtkGraphLayoutView::SetColorEdges(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetColorEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColorEdges();
      }
    else
      {
      tempr = op->vtkGraphLayoutView::GetColorEdges();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_ColorEdgesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorEdgesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ColorEdgesOn();
      }
    else
      {
      op->vtkGraphLayoutView::ColorEdgesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_ColorEdgesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorEdgesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ColorEdgesOff();
      }
    else
      {
      op->vtkGraphLayoutView::ColorEdgesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetEdgeSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      op->vtkGraphLayoutView::SetEdgeSelection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetEdgeSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      tempr = op->vtkGraphLayoutView::GetEdgeSelection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_EdgeSelectionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeSelectionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EdgeSelectionOn();
      }
    else
      {
      op->vtkGraphLayoutView::EdgeSelectionOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_EdgeSelectionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeSelectionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EdgeSelectionOff();
      }
    else
      {
      op->vtkGraphLayoutView::EdgeSelectionOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetEnabledEdgesArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabledEdgesArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      op->vtkGraphLayoutView::SetEnabledEdgesArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetEnabledEdgesArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnabledEdgesArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      tempr = op->vtkGraphLayoutView::GetEnabledEdgesArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetEnableEdgesByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableEdgesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      op->vtkGraphLayoutView::SetEnableEdgesByArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetEnableEdgesByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableEdgesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEnableEdgesByArray();
      }
    else
      {
      tempr = op->vtkGraphLayoutView::GetEnableEdgesByArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetEnabledVerticesArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabledVerticesArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      op->vtkGraphLayoutView::SetEnabledVerticesArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetEnabledVerticesArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnabledVerticesArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      tempr = op->vtkGraphLayoutView::GetEnabledVerticesArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetEnableVerticesByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableVerticesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      op->vtkGraphLayoutView::SetEnableVerticesByArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetEnableVerticesByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableVerticesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEnableVerticesByArray();
      }
    else
      {
      tempr = op->vtkGraphLayoutView::GetEnableVerticesByArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetScalingArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalingArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      op->vtkGraphLayoutView::SetScalingArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetScalingArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalingArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      tempr = op->vtkGraphLayoutView::GetScalingArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetScaledGlyphs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaledGlyphs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScaledGlyphs(temp0);
      }
    else
      {
      op->vtkGraphLayoutView::SetScaledGlyphs(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetScaledGlyphs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaledGlyphs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScaledGlyphs();
      }
    else
      {
      tempr = op->vtkGraphLayoutView::GetScaledGlyphs();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_ScaledGlyphsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaledGlyphsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScaledGlyphsOn();
      }
    else
      {
      op->vtkGraphLayoutView::ScaledGlyphsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_ScaledGlyphsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaledGlyphsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScaledGlyphsOff();
      }
    else
      {
      op->vtkGraphLayoutView::ScaledGlyphsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetLayoutStrategy_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      op->vtkGraphLayoutView::SetLayoutStrategy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGraphLayoutView_SetLayoutStrategy_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      op->vtkGraphLayoutView::SetLayoutStrategy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGraphLayoutView_SetLayoutStrategy_Methods[] = {
  {NULL, PyvtkGraphLayoutView_SetLayoutStrategy_s1, 1,
   (char*)"@z"},
  {NULL, PyvtkGraphLayoutView_SetLayoutStrategy_s2, 1,
   (char*)"@O *vtkGraphLayoutStrategy"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkGraphLayoutView_SetLayoutStrategy(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkGraphLayoutView_SetLayoutStrategy_Methods;
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
PyvtkGraphLayoutView_SetLayoutStrategyToRandom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToRandom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLayoutStrategyToRandom();
      }
    else
      {
      op->vtkGraphLayoutView::SetLayoutStrategyToRandom();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetLayoutStrategyToForceDirected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToForceDirected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLayoutStrategyToForceDirected();
      }
    else
      {
      op->vtkGraphLayoutView::SetLayoutStrategyToForceDirected();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetLayoutStrategyToSimple2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToSimple2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLayoutStrategyToSimple2D();
      }
    else
      {
      op->vtkGraphLayoutView::SetLayoutStrategyToSimple2D();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetLayoutStrategyToClustering2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToClustering2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLayoutStrategyToClustering2D();
      }
    else
      {
      op->vtkGraphLayoutView::SetLayoutStrategyToClustering2D();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetLayoutStrategyToCommunity2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToCommunity2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLayoutStrategyToCommunity2D();
      }
    else
      {
      op->vtkGraphLayoutView::SetLayoutStrategyToCommunity2D();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetLayoutStrategyToFast2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToFast2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLayoutStrategyToFast2D();
      }
    else
      {
      op->vtkGraphLayoutView::SetLayoutStrategyToFast2D();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetLayoutStrategyToPassThrough(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToPassThrough");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLayoutStrategyToPassThrough();
      }
    else
      {
      op->vtkGraphLayoutView::SetLayoutStrategyToPassThrough();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetLayoutStrategyToCircular(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToCircular");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLayoutStrategyToCircular();
      }
    else
      {
      op->vtkGraphLayoutView::SetLayoutStrategyToCircular();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetLayoutStrategyToTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLayoutStrategyToTree();
      }
    else
      {
      op->vtkGraphLayoutView::SetLayoutStrategyToTree();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetLayoutStrategyToCosmicTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToCosmicTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLayoutStrategyToCosmicTree();
      }
    else
      {
      op->vtkGraphLayoutView::SetLayoutStrategyToCosmicTree();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetLayoutStrategyToCone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToCone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLayoutStrategyToCone();
      }
    else
      {
      op->vtkGraphLayoutView::SetLayoutStrategyToCone();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetLayoutStrategyToSpanTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToSpanTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLayoutStrategyToSpanTree();
      }
    else
      {
      op->vtkGraphLayoutView::SetLayoutStrategyToSpanTree();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetLayoutStrategyName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayoutStrategyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLayoutStrategyName();
      }
    else
      {
      tempr = op->vtkGraphLayoutView::GetLayoutStrategyName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetLayoutStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      tempr = op->vtkGraphLayoutView::GetLayoutStrategy();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetEdgeLayoutStrategy_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      op->vtkGraphLayoutView::SetEdgeLayoutStrategy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGraphLayoutView_SetEdgeLayoutStrategy_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      op->vtkGraphLayoutView::SetEdgeLayoutStrategy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGraphLayoutView_SetEdgeLayoutStrategy_Methods[] = {
  {NULL, PyvtkGraphLayoutView_SetEdgeLayoutStrategy_s1, 1,
   (char*)"@z"},
  {NULL, PyvtkGraphLayoutView_SetEdgeLayoutStrategy_s2, 1,
   (char*)"@O *vtkEdgeLayoutStrategy"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkGraphLayoutView_SetEdgeLayoutStrategy(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkGraphLayoutView_SetEdgeLayoutStrategy_Methods;
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
PyvtkGraphLayoutView_SetEdgeLayoutStrategyToArcParallel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLayoutStrategyToArcParallel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetEdgeLayoutStrategyToArcParallel();
      }
    else
      {
      op->vtkGraphLayoutView::SetEdgeLayoutStrategyToArcParallel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetEdgeLayoutStrategyToPassThrough(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLayoutStrategyToPassThrough");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetEdgeLayoutStrategyToPassThrough();
      }
    else
      {
      op->vtkGraphLayoutView::SetEdgeLayoutStrategyToPassThrough();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetEdgeLayoutStrategyName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeLayoutStrategyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgeLayoutStrategyName();
      }
    else
      {
      tempr = op->vtkGraphLayoutView::GetEdgeLayoutStrategyName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetEdgeLayoutStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      tempr = op->vtkGraphLayoutView::GetEdgeLayoutStrategy();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_AddIconType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddIconType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddIconType(temp0, temp1);
      }
    else
      {
      op->vtkGraphLayoutView::AddIconType(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_ClearIconTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearIconTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearIconTypes();
      }
    else
      {
      op->vtkGraphLayoutView::ClearIconTypes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetIconAlignment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconAlignment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIconAlignment(temp0);
      }
    else
      {
      op->vtkGraphLayoutView::SetIconAlignment(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetIconVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIconVisibility(temp0);
      }
    else
      {
      op->vtkGraphLayoutView::SetIconVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetIconVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIconVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIconVisibility();
      }
    else
      {
      tempr = op->vtkGraphLayoutView::GetIconVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_IconVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IconVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IconVisibilityOn();
      }
    else
      {
      op->vtkGraphLayoutView::IconVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_IconVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IconVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IconVisibilityOff();
      }
    else
      {
      op->vtkGraphLayoutView::IconVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetIconArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIconArrayName(temp0);
      }
    else
      {
      op->vtkGraphLayoutView::SetIconArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetIconArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIconArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIconArrayName();
      }
    else
      {
      tempr = op->vtkGraphLayoutView::GetIconArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetGlyphType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      op->vtkGraphLayoutView::SetGlyphType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetGlyphType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      tempr = op->vtkGraphLayoutView::GetGlyphType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetVertexLabelFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVertexLabelFontSize(temp0);
      }
    else
      {
      op->vtkGraphLayoutView::SetVertexLabelFontSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetVertexLabelFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVertexLabelFontSize();
      }
    else
      {
      tempr = op->vtkGraphLayoutView::GetVertexLabelFontSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetEdgeLabelFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdgeLabelFontSize(temp0);
      }
    else
      {
      op->vtkGraphLayoutView::SetEdgeLabelFontSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetEdgeLabelFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgeLabelFontSize();
      }
    else
      {
      tempr = op->vtkGraphLayoutView::GetEdgeLabelFontSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetEdgeScalarBarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeScalarBarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      op->vtkGraphLayoutView::SetEdgeScalarBarVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetEdgeScalarBarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeScalarBarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      tempr = op->vtkGraphLayoutView::GetEdgeScalarBarVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetVertexScalarBarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexScalarBarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      op->vtkGraphLayoutView::SetVertexScalarBarVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetVertexScalarBarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexScalarBarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      tempr = op->vtkGraphLayoutView::GetVertexScalarBarVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_ZoomToSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZoomToSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ZoomToSelection();
      }
    else
      {
      op->vtkGraphLayoutView::ZoomToSelection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_IsLayoutComplete(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsLayoutComplete");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsLayoutComplete();
      }
    else
      {
      tempr = op->vtkGraphLayoutView::IsLayoutComplete();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_UpdateLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdateLayout();
      }
    else
      {
      op->vtkGraphLayoutView::UpdateLayout();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGraphLayoutView_Methods[] = {
  {(char*)"GetClassName", PyvtkGraphLayoutView_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGraphLayoutView_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGraphLayoutView_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGraphLayoutView\nC++: vtkGraphLayoutView *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGraphLayoutView_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGraphLayoutView\nC++: vtkGraphLayoutView *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetVertexLabelArrayName", PyvtkGraphLayoutView_SetVertexLabelArrayName, 1,
   (char*)"V.SetVertexLabelArrayName(string)\nC++: void SetVertexLabelArrayName(const char *name)\n\nThe array to use for vertex labeling.  Default is \"label\".\n"},
  {(char*)"GetVertexLabelArrayName", PyvtkGraphLayoutView_GetVertexLabelArrayName, 1,
   (char*)"V.GetVertexLabelArrayName() -> string\nC++: const char *GetVertexLabelArrayName()\n\nThe array to use for vertex labeling.  Default is \"label\".\n"},
  {(char*)"SetEdgeLabelArrayName", PyvtkGraphLayoutView_SetEdgeLabelArrayName, 1,
   (char*)"V.SetEdgeLabelArrayName(string)\nC++: void SetEdgeLabelArrayName(const char *name)\n\nThe array to use for edge labeling.  Default is \"label\".\n"},
  {(char*)"GetEdgeLabelArrayName", PyvtkGraphLayoutView_GetEdgeLabelArrayName, 1,
   (char*)"V.GetEdgeLabelArrayName() -> string\nC++: const char *GetEdgeLabelArrayName()\n\nThe array to use for edge labeling.  Default is \"label\".\n"},
  {(char*)"SetVertexLabelVisibility", PyvtkGraphLayoutView_SetVertexLabelVisibility, 1,
   (char*)"V.SetVertexLabelVisibility(bool)\nC++: void SetVertexLabelVisibility(bool vis)\n\nWhether to show vertex labels.  Default is off.\n"},
  {(char*)"GetVertexLabelVisibility", PyvtkGraphLayoutView_GetVertexLabelVisibility, 1,
   (char*)"V.GetVertexLabelVisibility() -> bool\nC++: bool GetVertexLabelVisibility()\n\nWhether to show vertex labels.  Default is off.\n"},
  {(char*)"VertexLabelVisibilityOn", PyvtkGraphLayoutView_VertexLabelVisibilityOn, 1,
   (char*)"V.VertexLabelVisibilityOn()\nC++: void VertexLabelVisibilityOn()\n\nWhether to show vertex labels.  Default is off.\n"},
  {(char*)"VertexLabelVisibilityOff", PyvtkGraphLayoutView_VertexLabelVisibilityOff, 1,
   (char*)"V.VertexLabelVisibilityOff()\nC++: void VertexLabelVisibilityOff()\n\nWhether to show vertex labels.  Default is off.\n"},
  {(char*)"SetHideVertexLabelsOnInteraction", PyvtkGraphLayoutView_SetHideVertexLabelsOnInteraction, 1,
   (char*)"V.SetHideVertexLabelsOnInteraction(bool)\nC++: void SetHideVertexLabelsOnInteraction(bool vis)\n\nWhether to hide vertex labels during mouse interactions.  Default\nis off.\n"},
  {(char*)"GetHideVertexLabelsOnInteraction", PyvtkGraphLayoutView_GetHideVertexLabelsOnInteraction, 1,
   (char*)"V.GetHideVertexLabelsOnInteraction() -> bool\nC++: bool GetHideVertexLabelsOnInteraction()\n\nWhether to hide vertex labels during mouse interactions.  Default\nis off.\n"},
  {(char*)"HideVertexLabelsOnInteractionOn", PyvtkGraphLayoutView_HideVertexLabelsOnInteractionOn, 1,
   (char*)"V.HideVertexLabelsOnInteractionOn()\nC++: void HideVertexLabelsOnInteractionOn()\n\nWhether to hide vertex labels during mouse interactions.  Default\nis off.\n"},
  {(char*)"HideVertexLabelsOnInteractionOff", PyvtkGraphLayoutView_HideVertexLabelsOnInteractionOff, 1,
   (char*)"V.HideVertexLabelsOnInteractionOff()\nC++: void HideVertexLabelsOnInteractionOff()\n\nWhether to hide vertex labels during mouse interactions.  Default\nis off.\n"},
  {(char*)"SetEdgeVisibility", PyvtkGraphLayoutView_SetEdgeVisibility, 1,
   (char*)"V.SetEdgeVisibility(bool)\nC++: void SetEdgeVisibility(bool vis)\n\nWhether to show the edges at all. Default is on\n"},
  {(char*)"GetEdgeVisibility", PyvtkGraphLayoutView_GetEdgeVisibility, 1,
   (char*)"V.GetEdgeVisibility() -> bool\nC++: bool GetEdgeVisibility()\n\nWhether to show the edges at all. Default is on\n"},
  {(char*)"EdgeVisibilityOn", PyvtkGraphLayoutView_EdgeVisibilityOn, 1,
   (char*)"V.EdgeVisibilityOn()\nC++: void EdgeVisibilityOn()\n\nWhether to show the edges at all. Default is on\n"},
  {(char*)"EdgeVisibilityOff", PyvtkGraphLayoutView_EdgeVisibilityOff, 1,
   (char*)"V.EdgeVisibilityOff()\nC++: void EdgeVisibilityOff()\n\nWhether to show the edges at all. Default is on\n"},
  {(char*)"SetEdgeLabelVisibility", PyvtkGraphLayoutView_SetEdgeLabelVisibility, 1,
   (char*)"V.SetEdgeLabelVisibility(bool)\nC++: void SetEdgeLabelVisibility(bool vis)\n\nWhether to show edge labels.  Default is off.\n"},
  {(char*)"GetEdgeLabelVisibility", PyvtkGraphLayoutView_GetEdgeLabelVisibility, 1,
   (char*)"V.GetEdgeLabelVisibility() -> bool\nC++: bool GetEdgeLabelVisibility()\n\nWhether to show edge labels.  Default is off.\n"},
  {(char*)"EdgeLabelVisibilityOn", PyvtkGraphLayoutView_EdgeLabelVisibilityOn, 1,
   (char*)"V.EdgeLabelVisibilityOn()\nC++: void EdgeLabelVisibilityOn()\n\nWhether to show edge labels.  Default is off.\n"},
  {(char*)"EdgeLabelVisibilityOff", PyvtkGraphLayoutView_EdgeLabelVisibilityOff, 1,
   (char*)"V.EdgeLabelVisibilityOff()\nC++: void EdgeLabelVisibilityOff()\n\nWhether to show edge labels.  Default is off.\n"},
  {(char*)"SetHideEdgeLabelsOnInteraction", PyvtkGraphLayoutView_SetHideEdgeLabelsOnInteraction, 1,
   (char*)"V.SetHideEdgeLabelsOnInteraction(bool)\nC++: void SetHideEdgeLabelsOnInteraction(bool vis)\n\nWhether to hide edge labels during mouse interactions.  Default\nis off.\n"},
  {(char*)"GetHideEdgeLabelsOnInteraction", PyvtkGraphLayoutView_GetHideEdgeLabelsOnInteraction, 1,
   (char*)"V.GetHideEdgeLabelsOnInteraction() -> bool\nC++: bool GetHideEdgeLabelsOnInteraction()\n\nWhether to hide edge labels during mouse interactions.  Default\nis off.\n"},
  {(char*)"HideEdgeLabelsOnInteractionOn", PyvtkGraphLayoutView_HideEdgeLabelsOnInteractionOn, 1,
   (char*)"V.HideEdgeLabelsOnInteractionOn()\nC++: void HideEdgeLabelsOnInteractionOn()\n\nWhether to hide edge labels during mouse interactions.  Default\nis off.\n"},
  {(char*)"HideEdgeLabelsOnInteractionOff", PyvtkGraphLayoutView_HideEdgeLabelsOnInteractionOff, 1,
   (char*)"V.HideEdgeLabelsOnInteractionOff()\nC++: void HideEdgeLabelsOnInteractionOff()\n\nWhether to hide edge labels during mouse interactions.  Default\nis off.\n"},
  {(char*)"SetVertexColorArrayName", PyvtkGraphLayoutView_SetVertexColorArrayName, 1,
   (char*)"V.SetVertexColorArrayName(string)\nC++: void SetVertexColorArrayName(const char *name)\n\nThe array to use for coloring vertices.  The default behavior is\nto color by vertex degree.\n"},
  {(char*)"GetVertexColorArrayName", PyvtkGraphLayoutView_GetVertexColorArrayName, 1,
   (char*)"V.GetVertexColorArrayName() -> string\nC++: const char *GetVertexColorArrayName()\n\nThe array to use for coloring vertices.  The default behavior is\nto color by vertex degree.\n"},
  {(char*)"SetColorVertices", PyvtkGraphLayoutView_SetColorVertices, 1,
   (char*)"V.SetColorVertices(bool)\nC++: void SetColorVertices(bool vis)\n\nWhether to color vertices.  Default is off.\n"},
  {(char*)"GetColorVertices", PyvtkGraphLayoutView_GetColorVertices, 1,
   (char*)"V.GetColorVertices() -> bool\nC++: bool GetColorVertices()\n\nWhether to color vertices.  Default is off.\n"},
  {(char*)"ColorVerticesOn", PyvtkGraphLayoutView_ColorVerticesOn, 1,
   (char*)"V.ColorVerticesOn()\nC++: void ColorVerticesOn()\n\nWhether to color vertices.  Default is off.\n"},
  {(char*)"ColorVerticesOff", PyvtkGraphLayoutView_ColorVerticesOff, 1,
   (char*)"V.ColorVerticesOff()\nC++: void ColorVerticesOff()\n\nWhether to color vertices.  Default is off.\n"},
  {(char*)"SetEdgeColorArrayName", PyvtkGraphLayoutView_SetEdgeColorArrayName, 1,
   (char*)"V.SetEdgeColorArrayName(string)\nC++: void SetEdgeColorArrayName(const char *name)\n\nThe array to use for coloring edges.  Default is \"color\".\n"},
  {(char*)"GetEdgeColorArrayName", PyvtkGraphLayoutView_GetEdgeColorArrayName, 1,
   (char*)"V.GetEdgeColorArrayName() -> string\nC++: const char *GetEdgeColorArrayName()\n\nThe array to use for coloring edges.  Default is \"color\".\n"},
  {(char*)"SetColorEdges", PyvtkGraphLayoutView_SetColorEdges, 1,
   (char*)"V.SetColorEdges(bool)\nC++: void SetColorEdges(bool vis)\n\nWhether to color edges.  Default is off.\n"},
  {(char*)"GetColorEdges", PyvtkGraphLayoutView_GetColorEdges, 1,
   (char*)"V.GetColorEdges() -> bool\nC++: bool GetColorEdges()\n\nWhether to color edges.  Default is off.\n"},
  {(char*)"ColorEdgesOn", PyvtkGraphLayoutView_ColorEdgesOn, 1,
   (char*)"V.ColorEdgesOn()\nC++: void ColorEdgesOn()\n\nWhether to color edges.  Default is off.\n"},
  {(char*)"ColorEdgesOff", PyvtkGraphLayoutView_ColorEdgesOff, 1,
   (char*)"V.ColorEdgesOff()\nC++: void ColorEdgesOff()\n\nWhether to color edges.  Default is off.\n"},
  {(char*)"SetEdgeSelection", PyvtkGraphLayoutView_SetEdgeSelection, 1,
   (char*)"V.SetEdgeSelection(bool)\nC++: void SetEdgeSelection(bool vis)\n\nWhether edges are selectable. Default is on.\n"},
  {(char*)"GetEdgeSelection", PyvtkGraphLayoutView_GetEdgeSelection, 1,
   (char*)"V.GetEdgeSelection() -> bool\nC++: bool GetEdgeSelection()\n\nWhether edges are selectable. Default is on.\n"},
  {(char*)"EdgeSelectionOn", PyvtkGraphLayoutView_EdgeSelectionOn, 1,
   (char*)"V.EdgeSelectionOn()\nC++: void EdgeSelectionOn()\n\nWhether edges are selectable. Default is on.\n"},
  {(char*)"EdgeSelectionOff", PyvtkGraphLayoutView_EdgeSelectionOff, 1,
   (char*)"V.EdgeSelectionOff()\nC++: void EdgeSelectionOff()\n\nWhether edges are selectable. Default is on.\n"},
  {(char*)"SetEnabledEdgesArrayName", PyvtkGraphLayoutView_SetEnabledEdgesArrayName, 1,
   (char*)"V.SetEnabledEdgesArrayName(string)\nC++: void SetEnabledEdgesArrayName(const char *name)\n\nThe array to use for coloring edges.\n"},
  {(char*)"GetEnabledEdgesArrayName", PyvtkGraphLayoutView_GetEnabledEdgesArrayName, 1,
   (char*)"V.GetEnabledEdgesArrayName() -> string\nC++: const char *GetEnabledEdgesArrayName()\n\nThe array to use for coloring edges.\n"},
  {(char*)"SetEnableEdgesByArray", PyvtkGraphLayoutView_SetEnableEdgesByArray, 1,
   (char*)"V.SetEnableEdgesByArray(bool)\nC++: void SetEnableEdgesByArray(bool vis)\n\nWhether to color edges.  Default is off.\n"},
  {(char*)"GetEnableEdgesByArray", PyvtkGraphLayoutView_GetEnableEdgesByArray, 1,
   (char*)"V.GetEnableEdgesByArray() -> int\nC++: int GetEnableEdgesByArray()\n\nWhether to color edges.  Default is off.\n"},
  {(char*)"SetEnabledVerticesArrayName", PyvtkGraphLayoutView_SetEnabledVerticesArrayName, 1,
   (char*)"V.SetEnabledVerticesArrayName(string)\nC++: void SetEnabledVerticesArrayName(const char *name)\n\nThe array to use for coloring vertices.\n"},
  {(char*)"GetEnabledVerticesArrayName", PyvtkGraphLayoutView_GetEnabledVerticesArrayName, 1,
   (char*)"V.GetEnabledVerticesArrayName() -> string\nC++: const char *GetEnabledVerticesArrayName()\n\nThe array to use for coloring vertices.\n"},
  {(char*)"SetEnableVerticesByArray", PyvtkGraphLayoutView_SetEnableVerticesByArray, 1,
   (char*)"V.SetEnableVerticesByArray(bool)\nC++: void SetEnableVerticesByArray(bool vis)\n\nWhether to color vertices.  Default is off.\n"},
  {(char*)"GetEnableVerticesByArray", PyvtkGraphLayoutView_GetEnableVerticesByArray, 1,
   (char*)"V.GetEnableVerticesByArray() -> int\nC++: int GetEnableVerticesByArray()\n\nWhether to color vertices.  Default is off.\n"},
  {(char*)"SetScalingArrayName", PyvtkGraphLayoutView_SetScalingArrayName, 1,
   (char*)"V.SetScalingArrayName(string)\nC++: void SetScalingArrayName(const char *name)\n\nThe array used for scaling (if ScaledGlyphs is ON)\n"},
  {(char*)"GetScalingArrayName", PyvtkGraphLayoutView_GetScalingArrayName, 1,
   (char*)"V.GetScalingArrayName() -> string\nC++: const char *GetScalingArrayName()\n\nThe array used for scaling (if ScaledGlyphs is ON)\n"},
  {(char*)"SetScaledGlyphs", PyvtkGraphLayoutView_SetScaledGlyphs, 1,
   (char*)"V.SetScaledGlyphs(bool)\nC++: void SetScaledGlyphs(bool arg)\n\nWhether to use scaled glyphs or not.  Default is off.\n"},
  {(char*)"GetScaledGlyphs", PyvtkGraphLayoutView_GetScaledGlyphs, 1,
   (char*)"V.GetScaledGlyphs() -> bool\nC++: bool GetScaledGlyphs()\n\nWhether to use scaled glyphs or not.  Default is off.\n"},
  {(char*)"ScaledGlyphsOn", PyvtkGraphLayoutView_ScaledGlyphsOn, 1,
   (char*)"V.ScaledGlyphsOn()\nC++: void ScaledGlyphsOn()\n\nWhether to use scaled glyphs or not.  Default is off.\n"},
  {(char*)"ScaledGlyphsOff", PyvtkGraphLayoutView_ScaledGlyphsOff, 1,
   (char*)"V.ScaledGlyphsOff()\nC++: void ScaledGlyphsOff()\n\nWhether to use scaled glyphs or not.  Default is off.\n"},
  {(char*)"SetLayoutStrategy", PyvtkGraphLayoutView_SetLayoutStrategy, 1,
   (char*)"V.SetLayoutStrategy(string)\nC++: void SetLayoutStrategy(const char *name)\nV.SetLayoutStrategy(vtkGraphLayoutStrategy)\nC++: void SetLayoutStrategy(vtkGraphLayoutStrategy *s)\n\nThe layout strategy to use when performing the graph layout. The\npossible strings are:\n- \"Random\"         Randomly places vertices in a box.\n- \"Force Directed\" A layout in 3D or 2D simulating forces on\n  edges.\n- \"Simple 2D\"      A simple 2D force directed layout.\n- \"Clustering 2D\"  A 2D force directed layout that's just like\n  simple 2D but uses some techniques to cluster better.\n- \"Community 2D\"   A linear-time 2D layout that's just like Fast\n  2D but looks for and uses a community array to 'accentuate'\n  clusters.\n- \"Fast 2D\"       A linear-time 2D layout.\n- \"Pass Through\"  Use locations assigned to the input.\n- \"Circular\"      Places vertices uniformly on a circle.\n- \"Cone\"          Cone tree layout.\n- \"Span Tree\"     Span Tree Layout. Default is \"Simple 2D\".\n"},
  {(char*)"SetLayoutStrategyToRandom", PyvtkGraphLayoutView_SetLayoutStrategyToRandom, 1,
   (char*)"V.SetLayoutStrategyToRandom()\nC++: void SetLayoutStrategyToRandom()\n\nThe layout strategy to use when performing the graph layout. The\npossible strings are:\n- \"Random\"         Randomly places vertices in a box.\n- \"Force Directed\" A layout in 3D or 2D simulating forces on\n  edges.\n- \"Simple 2D\"      A simple 2D force directed layout.\n- \"Clustering 2D\"  A 2D force directed layout that's just like\n  simple 2D but uses some techniques to cluster better.\n- \"Community 2D\"   A linear-time 2D layout that's just like Fast\n  2D but looks for and uses a community array to 'accentuate'\n  clusters.\n- \"Fast 2D\"       A linear-time 2D layout.\n- \"Pass Through\"  Use locations assigned to the input.\n- \"Circular\"      Places vertices uniformly on a circle.\n- \"Cone\"          Cone tree layout.\n- \"Span Tree\"     Span Tree Layout. Default is \"Simple 2D\".\n"},
  {(char*)"SetLayoutStrategyToForceDirected", PyvtkGraphLayoutView_SetLayoutStrategyToForceDirected, 1,
   (char*)"V.SetLayoutStrategyToForceDirected()\nC++: void SetLayoutStrategyToForceDirected()\n\nThe layout strategy to use when performing the graph layout. The\npossible strings are:\n- \"Random\"         Randomly places vertices in a box.\n- \"Force Directed\" A layout in 3D or 2D simulating forces on\n  edges.\n- \"Simple 2D\"      A simple 2D force directed layout.\n- \"Clustering 2D\"  A 2D force directed layout that's just like\n  simple 2D but uses some techniques to cluster better.\n- \"Community 2D\"   A linear-time 2D layout that's just like Fast\n  2D but looks for and uses a community array to 'accentuate'\n  clusters.\n- \"Fast 2D\"       A linear-time 2D layout.\n- \"Pass Through\"  Use locations assigned to the input.\n- \"Circular\"      Places vertices uniformly on a circle.\n- \"Cone\"          Cone tree layout.\n- \"Span Tree\"     Span Tree Layout. Default is \"Simple 2D\".\n"},
  {(char*)"SetLayoutStrategyToSimple2D", PyvtkGraphLayoutView_SetLayoutStrategyToSimple2D, 1,
   (char*)"V.SetLayoutStrategyToSimple2D()\nC++: void SetLayoutStrategyToSimple2D()\n\nThe layout strategy to use when performing the graph layout. The\npossible strings are:\n- \"Random\"         Randomly places vertices in a box.\n- \"Force Directed\" A layout in 3D or 2D simulating forces on\n  edges.\n- \"Simple 2D\"      A simple 2D force directed layout.\n- \"Clustering 2D\"  A 2D force directed layout that's just like\n  simple 2D but uses some techniques to cluster better.\n- \"Community 2D\"   A linear-time 2D layout that's just like Fast\n  2D but looks for and uses a community array to 'accentuate'\n  clusters.\n- \"Fast 2D\"       A linear-time 2D layout.\n- \"Pass Through\"  Use locations assigned to the input.\n- \"Circular\"      Places vertices uniformly on a circle.\n- \"Cone\"          Cone tree layout.\n- \"Span Tree\"     Span Tree Layout. Default is \"Simple 2D\".\n"},
  {(char*)"SetLayoutStrategyToClustering2D", PyvtkGraphLayoutView_SetLayoutStrategyToClustering2D, 1,
   (char*)"V.SetLayoutStrategyToClustering2D()\nC++: void SetLayoutStrategyToClustering2D()\n\nThe layout strategy to use when performing the graph layout. The\npossible strings are:\n- \"Random\"         Randomly places vertices in a box.\n- \"Force Directed\" A layout in 3D or 2D simulating forces on\n  edges.\n- \"Simple 2D\"      A simple 2D force directed layout.\n- \"Clustering 2D\"  A 2D force directed layout that's just like\n  simple 2D but uses some techniques to cluster better.\n- \"Community 2D\"   A linear-time 2D layout that's just like Fast\n  2D but looks for and uses a community array to 'accentuate'\n  clusters.\n- \"Fast 2D\"       A linear-time 2D layout.\n- \"Pass Through\"  Use locations assigned to the input.\n- \"Circular\"      Places vertices uniformly on a circle.\n- \"Cone\"          Cone tree layout.\n- \"Span Tree\"     Span Tree Layout. Default is \"Simple 2D\".\n"},
  {(char*)"SetLayoutStrategyToCommunity2D", PyvtkGraphLayoutView_SetLayoutStrategyToCommunity2D, 1,
   (char*)"V.SetLayoutStrategyToCommunity2D()\nC++: void SetLayoutStrategyToCommunity2D()\n\nThe layout strategy to use when performing the graph layout. The\npossible strings are:\n- \"Random\"         Randomly places vertices in a box.\n- \"Force Directed\" A layout in 3D or 2D simulating forces on\n  edges.\n- \"Simple 2D\"      A simple 2D force directed layout.\n- \"Clustering 2D\"  A 2D force directed layout that's just like\n  simple 2D but uses some techniques to cluster better.\n- \"Community 2D\"   A linear-time 2D layout that's just like Fast\n  2D but looks for and uses a community array to 'accentuate'\n  clusters.\n- \"Fast 2D\"       A linear-time 2D layout.\n- \"Pass Through\"  Use locations assigned to the input.\n- \"Circular\"      Places vertices uniformly on a circle.\n- \"Cone\"          Cone tree layout.\n- \"Span Tree\"     Span Tree Layout. Default is \"Simple 2D\".\n"},
  {(char*)"SetLayoutStrategyToFast2D", PyvtkGraphLayoutView_SetLayoutStrategyToFast2D, 1,
   (char*)"V.SetLayoutStrategyToFast2D()\nC++: void SetLayoutStrategyToFast2D()\n\nThe layout strategy to use when performing the graph layout. The\npossible strings are:\n- \"Random\"         Randomly places vertices in a box.\n- \"Force Directed\" A layout in 3D or 2D simulating forces on\n  edges.\n- \"Simple 2D\"      A simple 2D force directed layout.\n- \"Clustering 2D\"  A 2D force directed layout that's just like\n  simple 2D but uses some techniques to cluster better.\n- \"Community 2D\"   A linear-time 2D layout that's just like Fast\n  2D but looks for and uses a community array to 'accentuate'\n  clusters.\n- \"Fast 2D\"       A linear-time 2D layout.\n- \"Pass Through\"  Use locations assigned to the input.\n- \"Circular\"      Places vertices uniformly on a circle.\n- \"Cone\"          Cone tree layout.\n- \"Span Tree\"     Span Tree Layout. Default is \"Simple 2D\".\n"},
  {(char*)"SetLayoutStrategyToPassThrough", PyvtkGraphLayoutView_SetLayoutStrategyToPassThrough, 1,
   (char*)"V.SetLayoutStrategyToPassThrough()\nC++: void SetLayoutStrategyToPassThrough()\n\nThe layout strategy to use when performing the graph layout. The\npossible strings are:\n- \"Random\"         Randomly places vertices in a box.\n- \"Force Directed\" A layout in 3D or 2D simulating forces on\n  edges.\n- \"Simple 2D\"      A simple 2D force directed layout.\n- \"Clustering 2D\"  A 2D force directed layout that's just like\n  simple 2D but uses some techniques to cluster better.\n- \"Community 2D\"   A linear-time 2D layout that's just like Fast\n  2D but looks for and uses a community array to 'accentuate'\n  clusters.\n- \"Fast 2D\"       A linear-time 2D layout.\n- \"Pass Through\"  Use locations assigned to the input.\n- \"Circular\"      Places vertices uniformly on a circle.\n- \"Cone\"          Cone tree layout.\n- \"Span Tree\"     Span Tree Layout. Default is \"Simple 2D\".\n"},
  {(char*)"SetLayoutStrategyToCircular", PyvtkGraphLayoutView_SetLayoutStrategyToCircular, 1,
   (char*)"V.SetLayoutStrategyToCircular()\nC++: void SetLayoutStrategyToCircular()\n\nThe layout strategy to use when performing the graph layout. The\npossible strings are:\n- \"Random\"         Randomly places vertices in a box.\n- \"Force Directed\" A layout in 3D or 2D simulating forces on\n  edges.\n- \"Simple 2D\"      A simple 2D force directed layout.\n- \"Clustering 2D\"  A 2D force directed layout that's just like\n  simple 2D but uses some techniques to cluster better.\n- \"Community 2D\"   A linear-time 2D layout that's just like Fast\n  2D but looks for and uses a community array to 'accentuate'\n  clusters.\n- \"Fast 2D\"       A linear-time 2D layout.\n- \"Pass Through\"  Use locations assigned to the input.\n- \"Circular\"      Places vertices uniformly on a circle.\n- \"Cone\"          Cone tree layout.\n- \"Span Tree\"     Span Tree Layout. Default is \"Simple 2D\".\n"},
  {(char*)"SetLayoutStrategyToTree", PyvtkGraphLayoutView_SetLayoutStrategyToTree, 1,
   (char*)"V.SetLayoutStrategyToTree()\nC++: void SetLayoutStrategyToTree()\n\nThe layout strategy to use when performing the graph layout. The\npossible strings are:\n- \"Random\"         Randomly places vertices in a box.\n- \"Force Directed\" A layout in 3D or 2D simulating forces on\n  edges.\n- \"Simple 2D\"      A simple 2D force directed layout.\n- \"Clustering 2D\"  A 2D force directed layout that's just like\n  simple 2D but uses some techniques to cluster better.\n- \"Community 2D\"   A linear-time 2D layout that's just like Fast\n  2D but looks for and uses a community array to 'accentuate'\n  clusters.\n- \"Fast 2D\"       A linear-time 2D layout.\n- \"Pass Through\"  Use locations assigned to the input.\n- \"Circular\"      Places vertices uniformly on a circle.\n- \"Cone\"          Cone tree layout.\n- \"Span Tree\"     Span Tree Layout. Default is \"Simple 2D\".\n"},
  {(char*)"SetLayoutStrategyToCosmicTree", PyvtkGraphLayoutView_SetLayoutStrategyToCosmicTree, 1,
   (char*)"V.SetLayoutStrategyToCosmicTree()\nC++: void SetLayoutStrategyToCosmicTree()\n\nThe layout strategy to use when performing the graph layout. The\npossible strings are:\n- \"Random\"         Randomly places vertices in a box.\n- \"Force Directed\" A layout in 3D or 2D simulating forces on\n  edges.\n- \"Simple 2D\"      A simple 2D force directed layout.\n- \"Clustering 2D\"  A 2D force directed layout that's just like\n  simple 2D but uses some techniques to cluster better.\n- \"Community 2D\"   A linear-time 2D layout that's just like Fast\n  2D but looks for and uses a community array to 'accentuate'\n  clusters.\n- \"Fast 2D\"       A linear-time 2D layout.\n- \"Pass Through\"  Use locations assigned to the input.\n- \"Circular\"      Places vertices uniformly on a circle.\n- \"Cone\"          Cone tree layout.\n- \"Span Tree\"     Span Tree Layout. Default is \"Simple 2D\".\n"},
  {(char*)"SetLayoutStrategyToCone", PyvtkGraphLayoutView_SetLayoutStrategyToCone, 1,
   (char*)"V.SetLayoutStrategyToCone()\nC++: void SetLayoutStrategyToCone()\n\nThe layout strategy to use when performing the graph layout. The\npossible strings are:\n- \"Random\"         Randomly places vertices in a box.\n- \"Force Directed\" A layout in 3D or 2D simulating forces on\n  edges.\n- \"Simple 2D\"      A simple 2D force directed layout.\n- \"Clustering 2D\"  A 2D force directed layout that's just like\n  simple 2D but uses some techniques to cluster better.\n- \"Community 2D\"   A linear-time 2D layout that's just like Fast\n  2D but looks for and uses a community array to 'accentuate'\n  clusters.\n- \"Fast 2D\"       A linear-time 2D layout.\n- \"Pass Through\"  Use locations assigned to the input.\n- \"Circular\"      Places vertices uniformly on a circle.\n- \"Cone\"          Cone tree layout.\n- \"Span Tree\"     Span Tree Layout. Default is \"Simple 2D\".\n"},
  {(char*)"SetLayoutStrategyToSpanTree", PyvtkGraphLayoutView_SetLayoutStrategyToSpanTree, 1,
   (char*)"V.SetLayoutStrategyToSpanTree()\nC++: void SetLayoutStrategyToSpanTree()\n\nThe layout strategy to use when performing the graph layout. The\npossible strings are:\n- \"Random\"         Randomly places vertices in a box.\n- \"Force Directed\" A layout in 3D or 2D simulating forces on\n  edges.\n- \"Simple 2D\"      A simple 2D force directed layout.\n- \"Clustering 2D\"  A 2D force directed layout that's just like\n  simple 2D but uses some techniques to cluster better.\n- \"Community 2D\"   A linear-time 2D layout that's just like Fast\n  2D but looks for and uses a community array to 'accentuate'\n  clusters.\n- \"Fast 2D\"       A linear-time 2D layout.\n- \"Pass Through\"  Use locations assigned to the input.\n- \"Circular\"      Places vertices uniformly on a circle.\n- \"Cone\"          Cone tree layout.\n- \"Span Tree\"     Span Tree Layout. Default is \"Simple 2D\".\n"},
  {(char*)"GetLayoutStrategyName", PyvtkGraphLayoutView_GetLayoutStrategyName, 1,
   (char*)"V.GetLayoutStrategyName() -> string\nC++: const char *GetLayoutStrategyName()\n\nThe layout strategy to use when performing the graph layout. The\npossible strings are:\n- \"Random\"         Randomly places vertices in a box.\n- \"Force Directed\" A layout in 3D or 2D simulating forces on\n  edges.\n- \"Simple 2D\"      A simple 2D force directed layout.\n- \"Clustering 2D\"  A 2D force directed layout that's just like\n  simple 2D but uses some techniques to cluster better.\n- \"Community 2D\"   A linear-time 2D layout that's just like Fast\n  2D but looks for and uses a community array to 'accentuate'\n  clusters.\n- \"Fast 2D\"       A linear-time 2D layout.\n- \"Pass Through\"  Use locations assigned to the input.\n- \"Circular\"      Places vertices uniformly on a circle.\n- \"Cone\"          Cone tree layout.\n- \"Span Tree\"     Span Tree Layout. Default is \"Simple 2D\".\n"},
  {(char*)"GetLayoutStrategy", PyvtkGraphLayoutView_GetLayoutStrategy, 1,
   (char*)"V.GetLayoutStrategy() -> vtkGraphLayoutStrategy\nC++: vtkGraphLayoutStrategy *GetLayoutStrategy()\n\nThe layout strategy to use when performing the graph layout. This\nsignature allows an application to create a layout object\ndirectly and simply set the pointer through this method.\n"},
  {(char*)"SetEdgeLayoutStrategy", PyvtkGraphLayoutView_SetEdgeLayoutStrategy, 1,
   (char*)"V.SetEdgeLayoutStrategy(string)\nC++: void SetEdgeLayoutStrategy(const char *name)\nV.SetEdgeLayoutStrategy(vtkEdgeLayoutStrategy)\nC++: void SetEdgeLayoutStrategy(vtkEdgeLayoutStrategy *s)\n\nThe layout strategy to use when performing the edge layout. The\npossible strings are:\n  \"Arc Parallel\"   - Arc parallel edges and self loops.\n  \"Pass Through\"   - Use edge routes assigned to the input.\nDefault is \"Arc Parallel\".\n"},
  {(char*)"SetEdgeLayoutStrategyToArcParallel", PyvtkGraphLayoutView_SetEdgeLayoutStrategyToArcParallel, 1,
   (char*)"V.SetEdgeLayoutStrategyToArcParallel()\nC++: void SetEdgeLayoutStrategyToArcParallel()\n\nThe layout strategy to use when performing the edge layout. The\npossible strings are:\n  \"Arc Parallel\"   - Arc parallel edges and self loops.\n  \"Pass Through\"   - Use edge routes assigned to the input.\nDefault is \"Arc Parallel\".\n"},
  {(char*)"SetEdgeLayoutStrategyToPassThrough", PyvtkGraphLayoutView_SetEdgeLayoutStrategyToPassThrough, 1,
   (char*)"V.SetEdgeLayoutStrategyToPassThrough()\nC++: void SetEdgeLayoutStrategyToPassThrough()\n\nThe layout strategy to use when performing the edge layout. The\npossible strings are:\n  \"Arc Parallel\"   - Arc parallel edges and self loops.\n  \"Pass Through\"   - Use edge routes assigned to the input.\nDefault is \"Arc Parallel\".\n"},
  {(char*)"GetEdgeLayoutStrategyName", PyvtkGraphLayoutView_GetEdgeLayoutStrategyName, 1,
   (char*)"V.GetEdgeLayoutStrategyName() -> string\nC++: const char *GetEdgeLayoutStrategyName()\n\nThe layout strategy to use when performing the edge layout. The\npossible strings are:\n  \"Arc Parallel\"   - Arc parallel edges and self loops.\n  \"Pass Through\"   - Use edge routes assigned to the input.\nDefault is \"Arc Parallel\".\n"},
  {(char*)"GetEdgeLayoutStrategy", PyvtkGraphLayoutView_GetEdgeLayoutStrategy, 1,
   (char*)"V.GetEdgeLayoutStrategy() -> vtkEdgeLayoutStrategy\nC++: vtkEdgeLayoutStrategy *GetEdgeLayoutStrategy()\n\nThe layout strategy to use when performing the edge layout. This\nsignature allows an application to create a layout object\ndirectly and simply set the pointer through this method.\n"},
  {(char*)"AddIconType", PyvtkGraphLayoutView_AddIconType, 1,
   (char*)"V.AddIconType(string, int)\nC++: void AddIconType(char *type, int index)\n\nAssociate the icon at index \"index\" in the vtkTexture to all\nvertices containing \"type\" as a value in the vertex attribute\narray specified by IconArrayName.\n"},
  {(char*)"ClearIconTypes", PyvtkGraphLayoutView_ClearIconTypes, 1,
   (char*)"V.ClearIconTypes()\nC++: void ClearIconTypes()\n\nClear all icon mappings.\n"},
  {(char*)"SetIconAlignment", PyvtkGraphLayoutView_SetIconAlignment, 1,
   (char*)"V.SetIconAlignment(int)\nC++: void SetIconAlignment(int alignment)\n\nSpecify where the icons should be placed in relation to the\nvertex. See vtkIconGlyphFilter.h for possible values.\n"},
  {(char*)"SetIconVisibility", PyvtkGraphLayoutView_SetIconVisibility, 1,
   (char*)"V.SetIconVisibility(bool)\nC++: void SetIconVisibility(bool b)\n\nWhether icons are visible (default off).\n"},
  {(char*)"GetIconVisibility", PyvtkGraphLayoutView_GetIconVisibility, 1,
   (char*)"V.GetIconVisibility() -> bool\nC++: bool GetIconVisibility()\n\nWhether icons are visible (default off).\n"},
  {(char*)"IconVisibilityOn", PyvtkGraphLayoutView_IconVisibilityOn, 1,
   (char*)"V.IconVisibilityOn()\nC++: void IconVisibilityOn()\n\nWhether icons are visible (default off).\n"},
  {(char*)"IconVisibilityOff", PyvtkGraphLayoutView_IconVisibilityOff, 1,
   (char*)"V.IconVisibilityOff()\nC++: void IconVisibilityOff()\n\nWhether icons are visible (default off).\n"},
  {(char*)"SetIconArrayName", PyvtkGraphLayoutView_SetIconArrayName, 1,
   (char*)"V.SetIconArrayName(string)\nC++: void SetIconArrayName(const char *name)\n\nThe array used for assigning icons\n"},
  {(char*)"GetIconArrayName", PyvtkGraphLayoutView_GetIconArrayName, 1,
   (char*)"V.GetIconArrayName() -> string\nC++: const char *GetIconArrayName()\n\nThe array used for assigning icons\n"},
  {(char*)"SetGlyphType", PyvtkGraphLayoutView_SetGlyphType, 1,
   (char*)"V.SetGlyphType(int)\nC++: void SetGlyphType(int type)\n\nThe type of glyph to use for the vertices\n"},
  {(char*)"GetGlyphType", PyvtkGraphLayoutView_GetGlyphType, 1,
   (char*)"V.GetGlyphType() -> int\nC++: int GetGlyphType()\n\nThe type of glyph to use for the vertices\n"},
  {(char*)"SetVertexLabelFontSize", PyvtkGraphLayoutView_SetVertexLabelFontSize, 1,
   (char*)"V.SetVertexLabelFontSize(int)\nC++: virtual void SetVertexLabelFontSize(const int size)\n\nThe size of the font used for vertex labeling\n"},
  {(char*)"GetVertexLabelFontSize", PyvtkGraphLayoutView_GetVertexLabelFontSize, 1,
   (char*)"V.GetVertexLabelFontSize() -> int\nC++: virtual int GetVertexLabelFontSize()\n\nThe size of the font used for vertex labeling\n"},
  {(char*)"SetEdgeLabelFontSize", PyvtkGraphLayoutView_SetEdgeLabelFontSize, 1,
   (char*)"V.SetEdgeLabelFontSize(int)\nC++: virtual void SetEdgeLabelFontSize(const int size)\n\nThe size of the font used for edge labeling\n"},
  {(char*)"GetEdgeLabelFontSize", PyvtkGraphLayoutView_GetEdgeLabelFontSize, 1,
   (char*)"V.GetEdgeLabelFontSize() -> int\nC++: virtual int GetEdgeLabelFontSize()\n\nThe size of the font used for edge labeling\n"},
  {(char*)"SetEdgeScalarBarVisibility", PyvtkGraphLayoutView_SetEdgeScalarBarVisibility, 1,
   (char*)"V.SetEdgeScalarBarVisibility(bool)\nC++: void SetEdgeScalarBarVisibility(bool vis)\n\nWhether the scalar bar for edges is visible.  Default is off.\n"},
  {(char*)"GetEdgeScalarBarVisibility", PyvtkGraphLayoutView_GetEdgeScalarBarVisibility, 1,
   (char*)"V.GetEdgeScalarBarVisibility() -> bool\nC++: bool GetEdgeScalarBarVisibility()\n\nWhether the scalar bar for edges is visible.  Default is off.\n"},
  {(char*)"SetVertexScalarBarVisibility", PyvtkGraphLayoutView_SetVertexScalarBarVisibility, 1,
   (char*)"V.SetVertexScalarBarVisibility(bool)\nC++: void SetVertexScalarBarVisibility(bool vis)\n\nWhether the scalar bar for vertices is visible.  Default is off.\n"},
  {(char*)"GetVertexScalarBarVisibility", PyvtkGraphLayoutView_GetVertexScalarBarVisibility, 1,
   (char*)"V.GetVertexScalarBarVisibility() -> bool\nC++: bool GetVertexScalarBarVisibility()\n\nWhether the scalar bar for vertices is visible.  Default is off.\n"},
  {(char*)"ZoomToSelection", PyvtkGraphLayoutView_ZoomToSelection, 1,
   (char*)"V.ZoomToSelection()\nC++: void ZoomToSelection()\n\nReset the camera based on the bounds of the selected region.\n"},
  {(char*)"IsLayoutComplete", PyvtkGraphLayoutView_IsLayoutComplete, 1,
   (char*)"V.IsLayoutComplete() -> int\nC++: virtual int IsLayoutComplete()\n\nIs the graph layout complete? This method is useful for when the\nstrategy is iterative and the application wants to show the\niterative progress of the graph layout See Also: UpdateLayout();\n"},
  {(char*)"UpdateLayout", PyvtkGraphLayoutView_UpdateLayout, 1,
   (char*)"V.UpdateLayout()\nC++: virtual void UpdateLayout()\n\nThis method is useful for when the strategy is iterative and the\napplication wants to show the iterative progress of the graph\nlayout. The application would have something like\nwhile(!IsLayoutComplete())\n  {\n  UpdateLayout();\n  } See Also: IsLayoutComplete();\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGraphLayoutView_StaticNew()
{
  return vtkGraphLayoutView::New();
}

PyObject *PyVTKClass_vtkGraphLayoutViewNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGraphLayoutView_StaticNew,
    PyvtkGraphLayoutView_Methods,
    "vtkGraphLayoutView", modulename,
    NULL, NULL,
    PyvtkGraphLayoutView_Doc(),
    PyVTKClass_vtkRenderViewNew(modulename));
  return cls;
}

const char **PyvtkGraphLayoutView_Doc()
{
  static const char *docstring[] = {
    "vtkGraphLayoutView - Lays out and displays a graph\n\n",
    "Superclass: vtkRenderView\n\n",
    "vtkGraphLayoutView performs graph layout and displays a vtkGraph. You\nmay color and label the vertices and edges using fields in the graph.\nIf coordinates are already assigned to the graph vertices in your\ngraph, set the layout strategy to PassThrough in this view. The\ndefault layout is Fast2D which is fast but not that good, for better\nlayout set the layout to Simple2D or ForceDirected. There are",
    " also\ntree and circle layout strategies. :)\n\n.SEE ALSO vtkFast2DLayoutStrategy vtkSimple2DLayoutStrategy\nvtkForceDirectedLayoutStrategy\n\nThanks:\n\nThanks a bunch to the holographic unfolding pattern.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGraphLayoutView(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGraphLayoutViewNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGraphLayoutView", o) != 0)
    {
    Py_DECREF(o);
    }

}

