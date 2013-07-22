// python wrapper for vtkTreeAreaView
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
#include "vtkTreeAreaView.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTreeAreaView(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTreeAreaView(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTreeAreaViewNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTreeAreaViewNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkRenderViewNew
extern "C" { PyObject *PyVTKClass_vtkRenderViewNew(const char *); }
#define DECLARED_PyVTKClass_vtkRenderViewNew
#endif

static const char **PyvtkTreeAreaView_Doc();


static PyObject *
PyvtkTreeAreaView_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

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
      tempr = op->vtkTreeAreaView::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

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
      tempr = op->vtkTreeAreaView::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  vtkTreeAreaView *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTreeAreaView::NewInstance();
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
PyvtkTreeAreaView_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTreeAreaView *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTreeAreaView::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_SetTreeFromInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTreeFromInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  vtkDataRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      tempr = op->SetTreeFromInputConnection(temp0);
      }
    else
      {
      tempr = op->vtkTreeAreaView::SetTreeFromInputConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_SetTreeFromInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTreeFromInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  vtkTree *temp0 = NULL;
  vtkDataRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTree"))
    {
    if (ap.IsBound())
      {
      tempr = op->SetTreeFromInput(temp0);
      }
    else
      {
      tempr = op->vtkTreeAreaView::SetTreeFromInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_SetGraphFromInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphFromInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  vtkDataRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      tempr = op->SetGraphFromInputConnection(temp0);
      }
    else
      {
      tempr = op->vtkTreeAreaView::SetGraphFromInputConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_SetGraphFromInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphFromInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  vtkGraph *temp0 = NULL;
  vtkDataRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGraph"))
    {
    if (ap.IsBound())
      {
      tempr = op->SetGraphFromInput(temp0);
      }
    else
      {
      tempr = op->vtkTreeAreaView::SetGraphFromInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_SetAreaLabelArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAreaLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAreaLabelArrayName(temp0);
      }
    else
      {
      op->vtkTreeAreaView::SetAreaLabelArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_GetAreaLabelArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAreaLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAreaLabelArrayName();
      }
    else
      {
      tempr = op->vtkTreeAreaView::GetAreaLabelArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_SetAreaSizeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAreaSizeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAreaSizeArrayName(temp0);
      }
    else
      {
      op->vtkTreeAreaView::SetAreaSizeArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_GetAreaSizeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAreaSizeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAreaSizeArrayName();
      }
    else
      {
      tempr = op->vtkTreeAreaView::GetAreaSizeArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_SetLabelPriorityArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelPriorityArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabelPriorityArrayName(temp0);
      }
    else
      {
      op->vtkTreeAreaView::SetLabelPriorityArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_GetLabelPriorityArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelPriorityArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLabelPriorityArrayName();
      }
    else
      {
      tempr = op->vtkTreeAreaView::GetLabelPriorityArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_SetEdgeLabelArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

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
      op->vtkTreeAreaView::SetEdgeLabelArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_GetEdgeLabelArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

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
      tempr = op->vtkTreeAreaView::GetEdgeLabelArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_SetAreaHoverArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAreaHoverArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAreaHoverArrayName(temp0);
      }
    else
      {
      op->vtkTreeAreaView::SetAreaHoverArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_GetAreaHoverArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAreaHoverArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAreaHoverArrayName();
      }
    else
      {
      tempr = op->vtkTreeAreaView::GetAreaHoverArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_SetAreaLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAreaLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAreaLabelVisibility(temp0);
      }
    else
      {
      op->vtkTreeAreaView::SetAreaLabelVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_GetAreaLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAreaLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAreaLabelVisibility();
      }
    else
      {
      tempr = op->vtkTreeAreaView::GetAreaLabelVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_AreaLabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AreaLabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AreaLabelVisibilityOn();
      }
    else
      {
      op->vtkTreeAreaView::AreaLabelVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_AreaLabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AreaLabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AreaLabelVisibilityOff();
      }
    else
      {
      op->vtkTreeAreaView::AreaLabelVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_SetEdgeLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

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
      op->vtkTreeAreaView::SetEdgeLabelVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_GetEdgeLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

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
      tempr = op->vtkTreeAreaView::GetEdgeLabelVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_EdgeLabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeLabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EdgeLabelVisibilityOn();
      }
    else
      {
      op->vtkTreeAreaView::EdgeLabelVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_EdgeLabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeLabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EdgeLabelVisibilityOff();
      }
    else
      {
      op->vtkTreeAreaView::EdgeLabelVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_SetAreaColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAreaColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAreaColorArrayName(temp0);
      }
    else
      {
      op->vtkTreeAreaView::SetAreaColorArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_GetAreaColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAreaColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAreaColorArrayName();
      }
    else
      {
      tempr = op->vtkTreeAreaView::GetAreaColorArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_SetColorAreas(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorAreas");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColorAreas(temp0);
      }
    else
      {
      op->vtkTreeAreaView::SetColorAreas(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_GetColorAreas(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorAreas");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColorAreas();
      }
    else
      {
      tempr = op->vtkTreeAreaView::GetColorAreas();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_ColorAreasOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorAreasOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ColorAreasOn();
      }
    else
      {
      op->vtkTreeAreaView::ColorAreasOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_ColorAreasOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorAreasOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ColorAreasOff();
      }
    else
      {
      op->vtkTreeAreaView::ColorAreasOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_SetEdgeColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

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
      op->vtkTreeAreaView::SetEdgeColorArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_GetEdgeColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

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
      tempr = op->vtkTreeAreaView::GetEdgeColorArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_SetEdgeColorToSplineFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeColorToSplineFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetEdgeColorToSplineFraction();
      }
    else
      {
      op->vtkTreeAreaView::SetEdgeColorToSplineFraction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_SetShrinkPercentage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShrinkPercentage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShrinkPercentage(temp0);
      }
    else
      {
      op->vtkTreeAreaView::SetShrinkPercentage(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_GetShrinkPercentage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShrinkPercentage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShrinkPercentage();
      }
    else
      {
      tempr = op->vtkTreeAreaView::GetShrinkPercentage();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_SetColorEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

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
      op->vtkTreeAreaView::SetColorEdges(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_GetColorEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

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
      tempr = op->vtkTreeAreaView::GetColorEdges();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_ColorEdgesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorEdgesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ColorEdgesOn();
      }
    else
      {
      op->vtkTreeAreaView::ColorEdgesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_ColorEdgesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorEdgesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ColorEdgesOff();
      }
    else
      {
      op->vtkTreeAreaView::ColorEdgesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_SetBundlingStrength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBundlingStrength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBundlingStrength(temp0);
      }
    else
      {
      op->vtkTreeAreaView::SetBundlingStrength(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_GetBundlingStrength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBundlingStrength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBundlingStrength();
      }
    else
      {
      tempr = op->vtkTreeAreaView::GetBundlingStrength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_SetAreaLabelFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAreaLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAreaLabelFontSize(temp0);
      }
    else
      {
      op->vtkTreeAreaView::SetAreaLabelFontSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_GetAreaLabelFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAreaLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAreaLabelFontSize();
      }
    else
      {
      tempr = op->vtkTreeAreaView::GetAreaLabelFontSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_SetEdgeLabelFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

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
      op->vtkTreeAreaView::SetEdgeLabelFontSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_GetEdgeLabelFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

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
      tempr = op->vtkTreeAreaView::GetEdgeLabelFontSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_SetLayoutStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  vtkAreaLayoutStrategy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAreaLayoutStrategy"))
    {
    if (ap.IsBound())
      {
      op->SetLayoutStrategy(temp0);
      }
    else
      {
      op->vtkTreeAreaView::SetLayoutStrategy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_GetLayoutStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  vtkAreaLayoutStrategy *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLayoutStrategy();
      }
    else
      {
      tempr = op->vtkTreeAreaView::GetLayoutStrategy();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_SetUseRectangularCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseRectangularCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseRectangularCoordinates(temp0);
      }
    else
      {
      op->vtkTreeAreaView::SetUseRectangularCoordinates(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_GetUseRectangularCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseRectangularCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseRectangularCoordinates();
      }
    else
      {
      tempr = op->vtkTreeAreaView::GetUseRectangularCoordinates();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_UseRectangularCoordinatesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseRectangularCoordinatesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseRectangularCoordinatesOn();
      }
    else
      {
      op->vtkTreeAreaView::UseRectangularCoordinatesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_UseRectangularCoordinatesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseRectangularCoordinatesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseRectangularCoordinatesOff();
      }
    else
      {
      op->vtkTreeAreaView::UseRectangularCoordinatesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_SetEdgeScalarBarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeScalarBarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

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
      op->vtkTreeAreaView::SetEdgeScalarBarVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeAreaView_GetEdgeScalarBarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeScalarBarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

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
      tempr = op->vtkTreeAreaView::GetEdgeScalarBarVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTreeAreaView_Methods[] = {
  {(char*)"GetClassName", PyvtkTreeAreaView_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTreeAreaView_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTreeAreaView_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTreeAreaView\nC++: vtkTreeAreaView *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTreeAreaView_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTreeAreaView\nC++: vtkTreeAreaView *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetTreeFromInputConnection", PyvtkTreeAreaView_SetTreeFromInputConnection, 1,
   (char*)"V.SetTreeFromInputConnection(vtkAlgorithmOutput)\n    -> vtkDataRepresentation\nC++: vtkDataRepresentation *SetTreeFromInputConnection(\n    vtkAlgorithmOutput *conn)\n\nSet the tree and graph representations to the appropriate input\nports.\n"},
  {(char*)"SetTreeFromInput", PyvtkTreeAreaView_SetTreeFromInput, 1,
   (char*)"V.SetTreeFromInput(vtkTree) -> vtkDataRepresentation\nC++: vtkDataRepresentation *SetTreeFromInput(vtkTree *input)\n\nSet the tree and graph representations to the appropriate input\nports.\n"},
  {(char*)"SetGraphFromInputConnection", PyvtkTreeAreaView_SetGraphFromInputConnection, 1,
   (char*)"V.SetGraphFromInputConnection(vtkAlgorithmOutput)\n    -> vtkDataRepresentation\nC++: vtkDataRepresentation *SetGraphFromInputConnection(\n    vtkAlgorithmOutput *conn)\n\nSet the tree and graph representations to the appropriate input\nports.\n"},
  {(char*)"SetGraphFromInput", PyvtkTreeAreaView_SetGraphFromInput, 1,
   (char*)"V.SetGraphFromInput(vtkGraph) -> vtkDataRepresentation\nC++: vtkDataRepresentation *SetGraphFromInput(vtkGraph *input)\n\nSet the tree and graph representations to the appropriate input\nports.\n"},
  {(char*)"SetAreaLabelArrayName", PyvtkTreeAreaView_SetAreaLabelArrayName, 1,
   (char*)"V.SetAreaLabelArrayName(string)\nC++: void SetAreaLabelArrayName(const char *name)\n\nThe array to use for area labeling.  Default is \"label\".\n"},
  {(char*)"GetAreaLabelArrayName", PyvtkTreeAreaView_GetAreaLabelArrayName, 1,
   (char*)"V.GetAreaLabelArrayName() -> string\nC++: const char *GetAreaLabelArrayName()\n\nThe array to use for area labeling.  Default is \"label\".\n"},
  {(char*)"SetAreaSizeArrayName", PyvtkTreeAreaView_SetAreaSizeArrayName, 1,
   (char*)"V.SetAreaSizeArrayName(string)\nC++: void SetAreaSizeArrayName(const char *name)\n\nThe array to use for area sizes. Default is \"size\".\n"},
  {(char*)"GetAreaSizeArrayName", PyvtkTreeAreaView_GetAreaSizeArrayName, 1,
   (char*)"V.GetAreaSizeArrayName() -> string\nC++: const char *GetAreaSizeArrayName()\n\nThe array to use for area sizes. Default is \"size\".\n"},
  {(char*)"SetLabelPriorityArrayName", PyvtkTreeAreaView_SetLabelPriorityArrayName, 1,
   (char*)"V.SetLabelPriorityArrayName(string)\nC++: void SetLabelPriorityArrayName(const char *name)\n\nThe array to use for area labeling priority. Default is\n\"GraphVertexDegree\".\n"},
  {(char*)"GetLabelPriorityArrayName", PyvtkTreeAreaView_GetLabelPriorityArrayName, 1,
   (char*)"V.GetLabelPriorityArrayName() -> string\nC++: const char *GetLabelPriorityArrayName()\n\nThe array to use for area labeling priority. Default is\n\"GraphVertexDegree\".\n"},
  {(char*)"SetEdgeLabelArrayName", PyvtkTreeAreaView_SetEdgeLabelArrayName, 1,
   (char*)"V.SetEdgeLabelArrayName(string)\nC++: void SetEdgeLabelArrayName(const char *name)\n\nThe array to use for edge labeling.  Default is \"label\".\n"},
  {(char*)"GetEdgeLabelArrayName", PyvtkTreeAreaView_GetEdgeLabelArrayName, 1,
   (char*)"V.GetEdgeLabelArrayName() -> string\nC++: const char *GetEdgeLabelArrayName()\n\nThe array to use for edge labeling.  Default is \"label\".\n"},
  {(char*)"SetAreaHoverArrayName", PyvtkTreeAreaView_SetAreaHoverArrayName, 1,
   (char*)"V.SetAreaHoverArrayName(string)\nC++: void SetAreaHoverArrayName(const char *name)\n\nThe name of the array whose value appears when the mouse hovers\nover a rectangle in the treemap. This must be a string array.\n"},
  {(char*)"GetAreaHoverArrayName", PyvtkTreeAreaView_GetAreaHoverArrayName, 1,
   (char*)"V.GetAreaHoverArrayName() -> string\nC++: const char *GetAreaHoverArrayName()\n\nThe name of the array whose value appears when the mouse hovers\nover a rectangle in the treemap. This must be a string array.\n"},
  {(char*)"SetAreaLabelVisibility", PyvtkTreeAreaView_SetAreaLabelVisibility, 1,
   (char*)"V.SetAreaLabelVisibility(bool)\nC++: void SetAreaLabelVisibility(bool vis)\n\nWhether to show area labels.  Default is off.\n"},
  {(char*)"GetAreaLabelVisibility", PyvtkTreeAreaView_GetAreaLabelVisibility, 1,
   (char*)"V.GetAreaLabelVisibility() -> bool\nC++: bool GetAreaLabelVisibility()\n\nWhether to show area labels.  Default is off.\n"},
  {(char*)"AreaLabelVisibilityOn", PyvtkTreeAreaView_AreaLabelVisibilityOn, 1,
   (char*)"V.AreaLabelVisibilityOn()\nC++: void AreaLabelVisibilityOn()\n\nWhether to show area labels.  Default is off.\n"},
  {(char*)"AreaLabelVisibilityOff", PyvtkTreeAreaView_AreaLabelVisibilityOff, 1,
   (char*)"V.AreaLabelVisibilityOff()\nC++: void AreaLabelVisibilityOff()\n\nWhether to show area labels.  Default is off.\n"},
  {(char*)"SetEdgeLabelVisibility", PyvtkTreeAreaView_SetEdgeLabelVisibility, 1,
   (char*)"V.SetEdgeLabelVisibility(bool)\nC++: void SetEdgeLabelVisibility(bool vis)\n\nWhether to show edge labels.  Default is off.\n"},
  {(char*)"GetEdgeLabelVisibility", PyvtkTreeAreaView_GetEdgeLabelVisibility, 1,
   (char*)"V.GetEdgeLabelVisibility() -> bool\nC++: bool GetEdgeLabelVisibility()\n\nWhether to show edge labels.  Default is off.\n"},
  {(char*)"EdgeLabelVisibilityOn", PyvtkTreeAreaView_EdgeLabelVisibilityOn, 1,
   (char*)"V.EdgeLabelVisibilityOn()\nC++: void EdgeLabelVisibilityOn()\n\nWhether to show edge labels.  Default is off.\n"},
  {(char*)"EdgeLabelVisibilityOff", PyvtkTreeAreaView_EdgeLabelVisibilityOff, 1,
   (char*)"V.EdgeLabelVisibilityOff()\nC++: void EdgeLabelVisibilityOff()\n\nWhether to show edge labels.  Default is off.\n"},
  {(char*)"SetAreaColorArrayName", PyvtkTreeAreaView_SetAreaColorArrayName, 1,
   (char*)"V.SetAreaColorArrayName(string)\nC++: void SetAreaColorArrayName(const char *name)\n\nThe array to use for coloring vertices.  Default is \"color\".\n"},
  {(char*)"GetAreaColorArrayName", PyvtkTreeAreaView_GetAreaColorArrayName, 1,
   (char*)"V.GetAreaColorArrayName() -> string\nC++: const char *GetAreaColorArrayName()\n\nThe array to use for coloring vertices.  Default is \"color\".\n"},
  {(char*)"SetColorAreas", PyvtkTreeAreaView_SetColorAreas, 1,
   (char*)"V.SetColorAreas(bool)\nC++: void SetColorAreas(bool vis)\n\nWhether to color vertices.  Default is off.\n"},
  {(char*)"GetColorAreas", PyvtkTreeAreaView_GetColorAreas, 1,
   (char*)"V.GetColorAreas() -> bool\nC++: bool GetColorAreas()\n\nWhether to color vertices.  Default is off.\n"},
  {(char*)"ColorAreasOn", PyvtkTreeAreaView_ColorAreasOn, 1,
   (char*)"V.ColorAreasOn()\nC++: void ColorAreasOn()\n\nWhether to color vertices.  Default is off.\n"},
  {(char*)"ColorAreasOff", PyvtkTreeAreaView_ColorAreasOff, 1,
   (char*)"V.ColorAreasOff()\nC++: void ColorAreasOff()\n\nWhether to color vertices.  Default is off.\n"},
  {(char*)"SetEdgeColorArrayName", PyvtkTreeAreaView_SetEdgeColorArrayName, 1,
   (char*)"V.SetEdgeColorArrayName(string)\nC++: void SetEdgeColorArrayName(const char *name)\n\nThe array to use for coloring edges.  Default is \"color\".\n"},
  {(char*)"GetEdgeColorArrayName", PyvtkTreeAreaView_GetEdgeColorArrayName, 1,
   (char*)"V.GetEdgeColorArrayName() -> string\nC++: const char *GetEdgeColorArrayName()\n\nThe array to use for coloring edges.  Default is \"color\".\n"},
  {(char*)"SetEdgeColorToSplineFraction", PyvtkTreeAreaView_SetEdgeColorToSplineFraction, 1,
   (char*)"V.SetEdgeColorToSplineFraction()\nC++: void SetEdgeColorToSplineFraction()\n\nSet the color to be the spline fraction\n"},
  {(char*)"SetShrinkPercentage", PyvtkTreeAreaView_SetShrinkPercentage, 1,
   (char*)"V.SetShrinkPercentage(float)\nC++: void SetShrinkPercentage(double value)\n\nSet the region shrink percentage between 0.0 and 1.0.\n"},
  {(char*)"GetShrinkPercentage", PyvtkTreeAreaView_GetShrinkPercentage, 1,
   (char*)"V.GetShrinkPercentage() -> float\nC++: double GetShrinkPercentage()\n\nSet the region shrink percentage between 0.0 and 1.0.\n"},
  {(char*)"SetColorEdges", PyvtkTreeAreaView_SetColorEdges, 1,
   (char*)"V.SetColorEdges(bool)\nC++: void SetColorEdges(bool vis)\n\nWhether to color edges.  Default is off.\n"},
  {(char*)"GetColorEdges", PyvtkTreeAreaView_GetColorEdges, 1,
   (char*)"V.GetColorEdges() -> bool\nC++: bool GetColorEdges()\n\nWhether to color edges.  Default is off.\n"},
  {(char*)"ColorEdgesOn", PyvtkTreeAreaView_ColorEdgesOn, 1,
   (char*)"V.ColorEdgesOn()\nC++: void ColorEdgesOn()\n\nWhether to color edges.  Default is off.\n"},
  {(char*)"ColorEdgesOff", PyvtkTreeAreaView_ColorEdgesOff, 1,
   (char*)"V.ColorEdgesOff()\nC++: void ColorEdgesOff()\n\nWhether to color edges.  Default is off.\n"},
  {(char*)"SetBundlingStrength", PyvtkTreeAreaView_SetBundlingStrength, 1,
   (char*)"V.SetBundlingStrength(float)\nC++: void SetBundlingStrength(double strength)\n\nSet the bundling strength.\n"},
  {(char*)"GetBundlingStrength", PyvtkTreeAreaView_GetBundlingStrength, 1,
   (char*)"V.GetBundlingStrength() -> float\nC++: double GetBundlingStrength()\n\nSet the bundling strength.\n"},
  {(char*)"SetAreaLabelFontSize", PyvtkTreeAreaView_SetAreaLabelFontSize, 1,
   (char*)"V.SetAreaLabelFontSize(int)\nC++: virtual void SetAreaLabelFontSize(const int size)\n\nThe size of the font used for area labeling\n"},
  {(char*)"GetAreaLabelFontSize", PyvtkTreeAreaView_GetAreaLabelFontSize, 1,
   (char*)"V.GetAreaLabelFontSize() -> int\nC++: virtual int GetAreaLabelFontSize()\n\nThe size of the font used for area labeling\n"},
  {(char*)"SetEdgeLabelFontSize", PyvtkTreeAreaView_SetEdgeLabelFontSize, 1,
   (char*)"V.SetEdgeLabelFontSize(int)\nC++: virtual void SetEdgeLabelFontSize(const int size)\n\nThe size of the font used for edge labeling\n"},
  {(char*)"GetEdgeLabelFontSize", PyvtkTreeAreaView_GetEdgeLabelFontSize, 1,
   (char*)"V.GetEdgeLabelFontSize() -> int\nC++: virtual int GetEdgeLabelFontSize()\n\nThe size of the font used for edge labeling\n"},
  {(char*)"SetLayoutStrategy", PyvtkTreeAreaView_SetLayoutStrategy, 1,
   (char*)"V.SetLayoutStrategy(vtkAreaLayoutStrategy)\nC++: virtual void SetLayoutStrategy(\n    vtkAreaLayoutStrategy *strategy)\n\nThe layout strategy for producing spatial regions for the tree.\n"},
  {(char*)"GetLayoutStrategy", PyvtkTreeAreaView_GetLayoutStrategy, 1,
   (char*)"V.GetLayoutStrategy() -> vtkAreaLayoutStrategy\nC++: virtual vtkAreaLayoutStrategy *GetLayoutStrategy()\n\nThe layout strategy for producing spatial regions for the tree.\n"},
  {(char*)"SetUseRectangularCoordinates", PyvtkTreeAreaView_SetUseRectangularCoordinates, 1,
   (char*)"V.SetUseRectangularCoordinates(bool)\nC++: virtual void SetUseRectangularCoordinates(bool rect)\n\nWhether the area represents radial or rectangular coordinates.\n"},
  {(char*)"GetUseRectangularCoordinates", PyvtkTreeAreaView_GetUseRectangularCoordinates, 1,
   (char*)"V.GetUseRectangularCoordinates() -> bool\nC++: virtual bool GetUseRectangularCoordinates()\n\nWhether the area represents radial or rectangular coordinates.\n"},
  {(char*)"UseRectangularCoordinatesOn", PyvtkTreeAreaView_UseRectangularCoordinatesOn, 1,
   (char*)"V.UseRectangularCoordinatesOn()\nC++: void UseRectangularCoordinatesOn()\n\nWhether the area represents radial or rectangular coordinates.\n"},
  {(char*)"UseRectangularCoordinatesOff", PyvtkTreeAreaView_UseRectangularCoordinatesOff, 1,
   (char*)"V.UseRectangularCoordinatesOff()\nC++: void UseRectangularCoordinatesOff()\n\nWhether the area represents radial or rectangular coordinates.\n"},
  {(char*)"SetEdgeScalarBarVisibility", PyvtkTreeAreaView_SetEdgeScalarBarVisibility, 1,
   (char*)"V.SetEdgeScalarBarVisibility(bool)\nC++: virtual void SetEdgeScalarBarVisibility(bool b)\n\nVisibility of scalar bar actor for edges.\n"},
  {(char*)"GetEdgeScalarBarVisibility", PyvtkTreeAreaView_GetEdgeScalarBarVisibility, 1,
   (char*)"V.GetEdgeScalarBarVisibility() -> bool\nC++: virtual bool GetEdgeScalarBarVisibility()\n\nVisibility of scalar bar actor for edges.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTreeAreaView_StaticNew()
{
  return vtkTreeAreaView::New();
}

PyObject *PyVTKClass_vtkTreeAreaViewNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTreeAreaView_StaticNew,
    PyvtkTreeAreaView_Methods,
    "vtkTreeAreaView", modulename,
    NULL, NULL,
    PyvtkTreeAreaView_Doc(),
    PyVTKClass_vtkRenderViewNew(modulename));
  return cls;
}

const char **PyvtkTreeAreaView_Doc()
{
  static const char *docstring[] = {
    "vtkTreeAreaView - Accepts a graph and a hierarchy - currently\n\n",
    "Superclass: vtkRenderView\n\n",
    "Takes a graph and a hierarchy (currently a tree) and lays out the\ngraph vertices based on their categorization within the hierarchy.\n\n.SEE ALSO vtkGraphLayoutView\n\nThanks:\n\nThanks to Jason Shepherd for implementing this class\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTreeAreaView(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTreeAreaViewNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTreeAreaView", o) != 0)
    {
    Py_DECREF(o);
    }

}

