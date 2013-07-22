// python wrapper for vtkHierarchicalGraphView
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
#include "vtkHierarchicalGraphView.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkHierarchicalGraphView(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkHierarchicalGraphView(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkHierarchicalGraphViewNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkHierarchicalGraphViewNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkGraphLayoutViewNew
extern "C" { PyObject *PyVTKClass_vtkGraphLayoutViewNew(const char *); }
#define DECLARED_PyVTKClass_vtkGraphLayoutViewNew
#endif

static const char **PyvtkHierarchicalGraphView_Doc();


static PyObject *
PyvtkHierarchicalGraphView_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

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
      tempr = op->vtkHierarchicalGraphView::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

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
      tempr = op->vtkHierarchicalGraphView::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  vtkHierarchicalGraphView *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkHierarchicalGraphView::NewInstance();
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
PyvtkHierarchicalGraphView_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkHierarchicalGraphView *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkHierarchicalGraphView::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_SetHierarchyFromInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHierarchyFromInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  vtkDataRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      tempr = op->SetHierarchyFromInputConnection(temp0);
      }
    else
      {
      tempr = op->vtkHierarchicalGraphView::SetHierarchyFromInputConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_SetHierarchyFromInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHierarchyFromInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  vtkDataObject *temp0 = NULL;
  vtkDataRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      tempr = op->SetHierarchyFromInput(temp0);
      }
    else
      {
      tempr = op->vtkHierarchicalGraphView::SetHierarchyFromInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_SetGraphFromInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphFromInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

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
      tempr = op->vtkHierarchicalGraphView::SetGraphFromInputConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_SetGraphFromInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphFromInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  vtkDataObject *temp0 = NULL;
  vtkDataRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      tempr = op->SetGraphFromInput(temp0);
      }
    else
      {
      tempr = op->vtkHierarchicalGraphView::SetGraphFromInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_SetGraphEdgeLabelArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGraphEdgeLabelArrayName(temp0);
      }
    else
      {
      op->vtkHierarchicalGraphView::SetGraphEdgeLabelArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_GetGraphEdgeLabelArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphEdgeLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGraphEdgeLabelArrayName();
      }
    else
      {
      tempr = op->vtkHierarchicalGraphView::GetGraphEdgeLabelArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_SetGraphEdgeLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGraphEdgeLabelVisibility(temp0);
      }
    else
      {
      op->vtkHierarchicalGraphView::SetGraphEdgeLabelVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_GetGraphEdgeLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphEdgeLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGraphEdgeLabelVisibility();
      }
    else
      {
      tempr = op->vtkHierarchicalGraphView::GetGraphEdgeLabelVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_GraphEdgeLabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GraphEdgeLabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GraphEdgeLabelVisibilityOn();
      }
    else
      {
      op->vtkHierarchicalGraphView::GraphEdgeLabelVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_GraphEdgeLabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GraphEdgeLabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GraphEdgeLabelVisibilityOff();
      }
    else
      {
      op->vtkHierarchicalGraphView::GraphEdgeLabelVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_SetGraphEdgeColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGraphEdgeColorArrayName(temp0);
      }
    else
      {
      op->vtkHierarchicalGraphView::SetGraphEdgeColorArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_GetGraphEdgeColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphEdgeColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGraphEdgeColorArrayName();
      }
    else
      {
      tempr = op->vtkHierarchicalGraphView::GetGraphEdgeColorArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_SetGraphEdgeColorToSplineFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeColorToSplineFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGraphEdgeColorToSplineFraction();
      }
    else
      {
      op->vtkHierarchicalGraphView::SetGraphEdgeColorToSplineFraction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_SetColorGraphEdgesByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorGraphEdgesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColorGraphEdgesByArray(temp0);
      }
    else
      {
      op->vtkHierarchicalGraphView::SetColorGraphEdgesByArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_GetColorGraphEdgesByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorGraphEdgesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColorGraphEdgesByArray();
      }
    else
      {
      tempr = op->vtkHierarchicalGraphView::GetColorGraphEdgesByArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_ColorGraphEdgesByArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorGraphEdgesByArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ColorGraphEdgesByArrayOn();
      }
    else
      {
      op->vtkHierarchicalGraphView::ColorGraphEdgesByArrayOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_ColorGraphEdgesByArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorGraphEdgesByArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ColorGraphEdgesByArrayOff();
      }
    else
      {
      op->vtkHierarchicalGraphView::ColorGraphEdgesByArrayOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_SetBundlingStrength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBundlingStrength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

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
      op->vtkHierarchicalGraphView::SetBundlingStrength(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_GetBundlingStrength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBundlingStrength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

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
      tempr = op->vtkHierarchicalGraphView::GetBundlingStrength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_SetGraphVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGraphVisibility(temp0);
      }
    else
      {
      op->vtkHierarchicalGraphView::SetGraphVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_GetGraphVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGraphVisibility();
      }
    else
      {
      tempr = op->vtkHierarchicalGraphView::GetGraphVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_GraphVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GraphVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GraphVisibilityOn();
      }
    else
      {
      op->vtkHierarchicalGraphView::GraphVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_GraphVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GraphVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GraphVisibilityOff();
      }
    else
      {
      op->vtkHierarchicalGraphView::GraphVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_SetGraphEdgeLabelFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGraphEdgeLabelFontSize(temp0);
      }
    else
      {
      op->vtkHierarchicalGraphView::SetGraphEdgeLabelFontSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_GetGraphEdgeLabelFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphEdgeLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGraphEdgeLabelFontSize();
      }
    else
      {
      tempr = op->vtkHierarchicalGraphView::GetGraphEdgeLabelFontSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkHierarchicalGraphView_Methods[] = {
  {(char*)"GetClassName", PyvtkHierarchicalGraphView_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHierarchicalGraphView_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHierarchicalGraphView_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkHierarchicalGraphView\nC++: vtkHierarchicalGraphView *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkHierarchicalGraphView_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHierarchicalGraphView\nC++: vtkHierarchicalGraphView *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetHierarchyFromInputConnection", PyvtkHierarchicalGraphView_SetHierarchyFromInputConnection, 1,
   (char*)"V.SetHierarchyFromInputConnection(vtkAlgorithmOutput)\n    -> vtkDataRepresentation\nC++: vtkDataRepresentation *SetHierarchyFromInputConnection(\n    vtkAlgorithmOutput *conn)\n\nSet the tree and graph representations to the appropriate input\nports.\n"},
  {(char*)"SetHierarchyFromInput", PyvtkHierarchicalGraphView_SetHierarchyFromInput, 1,
   (char*)"V.SetHierarchyFromInput(vtkDataObject) -> vtkDataRepresentation\nC++: vtkDataRepresentation *SetHierarchyFromInput(\n    vtkDataObject *input)\n\nSet the tree and graph representations to the appropriate input\nports.\n"},
  {(char*)"SetGraphFromInputConnection", PyvtkHierarchicalGraphView_SetGraphFromInputConnection, 1,
   (char*)"V.SetGraphFromInputConnection(vtkAlgorithmOutput)\n    -> vtkDataRepresentation\nC++: vtkDataRepresentation *SetGraphFromInputConnection(\n    vtkAlgorithmOutput *conn)\n\nSet the tree and graph representations to the appropriate input\nports.\n"},
  {(char*)"SetGraphFromInput", PyvtkHierarchicalGraphView_SetGraphFromInput, 1,
   (char*)"V.SetGraphFromInput(vtkDataObject) -> vtkDataRepresentation\nC++: vtkDataRepresentation *SetGraphFromInput(\n    vtkDataObject *input)\n\nSet the tree and graph representations to the appropriate input\nports.\n"},
  {(char*)"SetGraphEdgeLabelArrayName", PyvtkHierarchicalGraphView_SetGraphEdgeLabelArrayName, 1,
   (char*)"V.SetGraphEdgeLabelArrayName(string)\nC++: virtual void SetGraphEdgeLabelArrayName(const char *name)\n\nThe array to use for edge labeling.  Default is \"label\".\n"},
  {(char*)"GetGraphEdgeLabelArrayName", PyvtkHierarchicalGraphView_GetGraphEdgeLabelArrayName, 1,
   (char*)"V.GetGraphEdgeLabelArrayName() -> string\nC++: virtual const char *GetGraphEdgeLabelArrayName()\n\nThe array to use for edge labeling.  Default is \"label\".\n"},
  {(char*)"SetGraphEdgeLabelVisibility", PyvtkHierarchicalGraphView_SetGraphEdgeLabelVisibility, 1,
   (char*)"V.SetGraphEdgeLabelVisibility(bool)\nC++: virtual void SetGraphEdgeLabelVisibility(bool vis)\n\nWhether to show edge labels.  Default is off.\n"},
  {(char*)"GetGraphEdgeLabelVisibility", PyvtkHierarchicalGraphView_GetGraphEdgeLabelVisibility, 1,
   (char*)"V.GetGraphEdgeLabelVisibility() -> bool\nC++: virtual bool GetGraphEdgeLabelVisibility()\n\nWhether to show edge labels.  Default is off.\n"},
  {(char*)"GraphEdgeLabelVisibilityOn", PyvtkHierarchicalGraphView_GraphEdgeLabelVisibilityOn, 1,
   (char*)"V.GraphEdgeLabelVisibilityOn()\nC++: void GraphEdgeLabelVisibilityOn()\n\nWhether to show edge labels.  Default is off.\n"},
  {(char*)"GraphEdgeLabelVisibilityOff", PyvtkHierarchicalGraphView_GraphEdgeLabelVisibilityOff, 1,
   (char*)"V.GraphEdgeLabelVisibilityOff()\nC++: void GraphEdgeLabelVisibilityOff()\n\nWhether to show edge labels.  Default is off.\n"},
  {(char*)"SetGraphEdgeColorArrayName", PyvtkHierarchicalGraphView_SetGraphEdgeColorArrayName, 1,
   (char*)"V.SetGraphEdgeColorArrayName(string)\nC++: virtual void SetGraphEdgeColorArrayName(const char *name)\n\nThe array to use for coloring edges.  Default is \"color\".\n"},
  {(char*)"GetGraphEdgeColorArrayName", PyvtkHierarchicalGraphView_GetGraphEdgeColorArrayName, 1,
   (char*)"V.GetGraphEdgeColorArrayName() -> string\nC++: virtual const char *GetGraphEdgeColorArrayName()\n\nThe array to use for coloring edges.  Default is \"color\".\n"},
  {(char*)"SetGraphEdgeColorToSplineFraction", PyvtkHierarchicalGraphView_SetGraphEdgeColorToSplineFraction, 1,
   (char*)"V.SetGraphEdgeColorToSplineFraction()\nC++: virtual void SetGraphEdgeColorToSplineFraction()\n\nSet the color to be the spline fraction\n"},
  {(char*)"SetColorGraphEdgesByArray", PyvtkHierarchicalGraphView_SetColorGraphEdgesByArray, 1,
   (char*)"V.SetColorGraphEdgesByArray(bool)\nC++: virtual void SetColorGraphEdgesByArray(bool vis)\n\nWhether to color edges.  Default is off.\n"},
  {(char*)"GetColorGraphEdgesByArray", PyvtkHierarchicalGraphView_GetColorGraphEdgesByArray, 1,
   (char*)"V.GetColorGraphEdgesByArray() -> bool\nC++: virtual bool GetColorGraphEdgesByArray()\n\nWhether to color edges.  Default is off.\n"},
  {(char*)"ColorGraphEdgesByArrayOn", PyvtkHierarchicalGraphView_ColorGraphEdgesByArrayOn, 1,
   (char*)"V.ColorGraphEdgesByArrayOn()\nC++: void ColorGraphEdgesByArrayOn()\n\nWhether to color edges.  Default is off.\n"},
  {(char*)"ColorGraphEdgesByArrayOff", PyvtkHierarchicalGraphView_ColorGraphEdgesByArrayOff, 1,
   (char*)"V.ColorGraphEdgesByArrayOff()\nC++: void ColorGraphEdgesByArrayOff()\n\nWhether to color edges.  Default is off.\n"},
  {(char*)"SetBundlingStrength", PyvtkHierarchicalGraphView_SetBundlingStrength, 1,
   (char*)"V.SetBundlingStrength(float)\nC++: virtual void SetBundlingStrength(double strength)\n\nSet the bundling strength.\n"},
  {(char*)"GetBundlingStrength", PyvtkHierarchicalGraphView_GetBundlingStrength, 1,
   (char*)"V.GetBundlingStrength() -> float\nC++: virtual double GetBundlingStrength()\n\nSet the bundling strength.\n"},
  {(char*)"SetGraphVisibility", PyvtkHierarchicalGraphView_SetGraphVisibility, 1,
   (char*)"V.SetGraphVisibility(bool)\nC++: virtual void SetGraphVisibility(bool b)\n\nWhether the graph edges are visible (default off).\n"},
  {(char*)"GetGraphVisibility", PyvtkHierarchicalGraphView_GetGraphVisibility, 1,
   (char*)"V.GetGraphVisibility() -> bool\nC++: virtual bool GetGraphVisibility()\n\nWhether the graph edges are visible (default off).\n"},
  {(char*)"GraphVisibilityOn", PyvtkHierarchicalGraphView_GraphVisibilityOn, 1,
   (char*)"V.GraphVisibilityOn()\nC++: void GraphVisibilityOn()\n\nWhether the graph edges are visible (default off).\n"},
  {(char*)"GraphVisibilityOff", PyvtkHierarchicalGraphView_GraphVisibilityOff, 1,
   (char*)"V.GraphVisibilityOff()\nC++: void GraphVisibilityOff()\n\nWhether the graph edges are visible (default off).\n"},
  {(char*)"SetGraphEdgeLabelFontSize", PyvtkHierarchicalGraphView_SetGraphEdgeLabelFontSize, 1,
   (char*)"V.SetGraphEdgeLabelFontSize(int)\nC++: virtual void SetGraphEdgeLabelFontSize(const int size)\n\nThe size of the font used for edge labeling\n"},
  {(char*)"GetGraphEdgeLabelFontSize", PyvtkHierarchicalGraphView_GetGraphEdgeLabelFontSize, 1,
   (char*)"V.GetGraphEdgeLabelFontSize() -> int\nC++: virtual int GetGraphEdgeLabelFontSize()\n\nThe size of the font used for edge labeling\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkHierarchicalGraphView_StaticNew()
{
  return vtkHierarchicalGraphView::New();
}

PyObject *PyVTKClass_vtkHierarchicalGraphViewNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkHierarchicalGraphView_StaticNew,
    PyvtkHierarchicalGraphView_Methods,
    "vtkHierarchicalGraphView", modulename,
    NULL, NULL,
    PyvtkHierarchicalGraphView_Doc(),
    PyVTKClass_vtkGraphLayoutViewNew(modulename));
  return cls;
}

const char **PyvtkHierarchicalGraphView_Doc()
{
  static const char *docstring[] = {
    "vtkHierarchicalGraphView - Accepts a graph and a hierarchy - currently\n\n",
    "Superclass: vtkGraphLayoutView\n\n",
    "Takes a graph and a hierarchy (currently a tree) and lays out the\ngraph vertices based on their categorization within the hierarchy.\n\n.SEE ALSO vtkGraphLayoutView\n\nThanks:\n\nThanks to the turtle with jets for feet, without you this class\nwouldn't have been possible.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHierarchicalGraphView(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHierarchicalGraphViewNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHierarchicalGraphView", o) != 0)
    {
    Py_DECREF(o);
    }

}

