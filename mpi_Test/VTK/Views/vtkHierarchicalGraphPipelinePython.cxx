// python wrapper for vtkHierarchicalGraphPipeline
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
#include "vtkHierarchicalGraphPipeline.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkHierarchicalGraphPipeline(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkHierarchicalGraphPipeline(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkHierarchicalGraphPipelineNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkHierarchicalGraphPipelineNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkHierarchicalGraphPipeline_Doc();


static PyObject *
PyvtkHierarchicalGraphPipeline_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

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
      tempr = op->vtkHierarchicalGraphPipeline::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

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
      tempr = op->vtkHierarchicalGraphPipeline::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  vtkHierarchicalGraphPipeline *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkHierarchicalGraphPipeline::NewInstance();
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
PyvtkHierarchicalGraphPipeline_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkHierarchicalGraphPipeline *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkHierarchicalGraphPipeline::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_GetActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  vtkActor *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetActor();
      }
    else
      {
      tempr = op->vtkHierarchicalGraphPipeline::GetActor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_GetLabelActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  vtkActor2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLabelActor();
      }
    else
      {
      tempr = op->vtkHierarchicalGraphPipeline::GetLabelActor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_SetBundlingStrength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBundlingStrength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

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
      op->vtkHierarchicalGraphPipeline::SetBundlingStrength(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_GetBundlingStrength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBundlingStrength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

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
      tempr = op->vtkHierarchicalGraphPipeline::GetBundlingStrength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_SetLabelArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabelArrayName(temp0);
      }
    else
      {
      op->vtkHierarchicalGraphPipeline::SetLabelArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_GetLabelArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLabelArrayName();
      }
    else
      {
      tempr = op->vtkHierarchicalGraphPipeline::GetLabelArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_SetLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabelVisibility(temp0);
      }
    else
      {
      op->vtkHierarchicalGraphPipeline::SetLabelVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_GetLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLabelVisibility();
      }
    else
      {
      tempr = op->vtkHierarchicalGraphPipeline::GetLabelVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_LabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LabelVisibilityOn();
      }
    else
      {
      op->vtkHierarchicalGraphPipeline::LabelVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_LabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LabelVisibilityOff();
      }
    else
      {
      op->vtkHierarchicalGraphPipeline::LabelVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_SetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->SetLabelTextProperty(temp0);
      }
    else
      {
      op->vtkHierarchicalGraphPipeline::SetLabelTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_GetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  vtkTextProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLabelTextProperty();
      }
    else
      {
      tempr = op->vtkHierarchicalGraphPipeline::GetLabelTextProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_SetColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColorArrayName(temp0);
      }
    else
      {
      op->vtkHierarchicalGraphPipeline::SetColorArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_GetColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColorArrayName();
      }
    else
      {
      tempr = op->vtkHierarchicalGraphPipeline::GetColorArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_SetColorEdgesByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorEdgesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

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
      op->vtkHierarchicalGraphPipeline::SetColorEdgesByArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_GetColorEdgesByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorEdgesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

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
      tempr = op->vtkHierarchicalGraphPipeline::GetColorEdgesByArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_ColorEdgesByArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorEdgesByArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ColorEdgesByArrayOn();
      }
    else
      {
      op->vtkHierarchicalGraphPipeline::ColorEdgesByArrayOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_ColorEdgesByArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorEdgesByArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ColorEdgesByArrayOff();
      }
    else
      {
      op->vtkHierarchicalGraphPipeline::ColorEdgesByArrayOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVisibility(temp0);
      }
    else
      {
      op->vtkHierarchicalGraphPipeline::SetVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_GetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVisibility();
      }
    else
      {
      tempr = op->vtkHierarchicalGraphPipeline::GetVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_VisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->VisibilityOn();
      }
    else
      {
      op->vtkHierarchicalGraphPipeline::VisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_VisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->VisibilityOff();
      }
    else
      {
      op->vtkHierarchicalGraphPipeline::VisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_ConvertSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  vtkDataRepresentation *temp0 = NULL;
  vtkSelection *temp1 = NULL;
  vtkSelection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataRepresentation") &&
      ap.GetVTKObject(temp1, "vtkSelection"))
    {
    if (ap.IsBound())
      {
      tempr = op->ConvertSelection(temp0, temp1);
      }
    else
      {
      tempr = op->vtkHierarchicalGraphPipeline::ConvertSelection(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_PrepareInputConnections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrepareInputConnections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  vtkAlgorithmOutput *temp1 = NULL;
  vtkAlgorithmOutput *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput") &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput") &&
      ap.GetVTKObject(temp2, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->PrepareInputConnections(temp0, temp1, temp2);
      }
    else
      {
      op->vtkHierarchicalGraphPipeline::PrepareInputConnections(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_ApplyViewTheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyViewTheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

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
      op->vtkHierarchicalGraphPipeline::ApplyViewTheme(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_SetHoverArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHoverArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHoverArrayName(temp0);
      }
    else
      {
      op->vtkHierarchicalGraphPipeline::SetHoverArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_GetHoverArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHoverArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHoverArrayName();
      }
    else
      {
      tempr = op->vtkHierarchicalGraphPipeline::GetHoverArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_SetSplineType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSplineType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSplineType(temp0);
      }
    else
      {
      op->vtkHierarchicalGraphPipeline::SetSplineType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_GetSplineType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplineType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSplineType();
      }
    else
      {
      tempr = op->vtkHierarchicalGraphPipeline::GetSplineType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_RegisterProgress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterProgress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  vtkRenderView *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderView"))
    {
    if (ap.IsBound())
      {
      op->RegisterProgress(temp0);
      }
    else
      {
      op->vtkHierarchicalGraphPipeline::RegisterProgress(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkHierarchicalGraphPipeline_Methods[] = {
  {(char*)"GetClassName", PyvtkHierarchicalGraphPipeline_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHierarchicalGraphPipeline_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHierarchicalGraphPipeline_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkHierarchicalGraphPipeline\nC++: vtkHierarchicalGraphPipeline *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkHierarchicalGraphPipeline_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHierarchicalGraphPipeline\nC++: vtkHierarchicalGraphPipeline *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetActor", PyvtkHierarchicalGraphPipeline_GetActor, 1,
   (char*)"V.GetActor() -> vtkActor\nC++: vtkActor *GetActor()\n\nThe actor associated with the hierarchical graph.\n"},
  {(char*)"GetLabelActor", PyvtkHierarchicalGraphPipeline_GetLabelActor, 1,
   (char*)"V.GetLabelActor() -> vtkActor2D\nC++: vtkActor2D *GetLabelActor()\n\nThe actor associated with the hierarchical graph.\n"},
  {(char*)"SetBundlingStrength", PyvtkHierarchicalGraphPipeline_SetBundlingStrength, 1,
   (char*)"V.SetBundlingStrength(float)\nC++: virtual void SetBundlingStrength(double strength)\n\nThe bundling strength for the bundled edges.\n"},
  {(char*)"GetBundlingStrength", PyvtkHierarchicalGraphPipeline_GetBundlingStrength, 1,
   (char*)"V.GetBundlingStrength() -> float\nC++: virtual double GetBundlingStrength()\n\nThe bundling strength for the bundled edges.\n"},
  {(char*)"SetLabelArrayName", PyvtkHierarchicalGraphPipeline_SetLabelArrayName, 1,
   (char*)"V.SetLabelArrayName(string)\nC++: virtual void SetLabelArrayName(const char *name)\n\nThe edge label array name.\n"},
  {(char*)"GetLabelArrayName", PyvtkHierarchicalGraphPipeline_GetLabelArrayName, 1,
   (char*)"V.GetLabelArrayName() -> string\nC++: virtual const char *GetLabelArrayName()\n\nThe edge label array name.\n"},
  {(char*)"SetLabelVisibility", PyvtkHierarchicalGraphPipeline_SetLabelVisibility, 1,
   (char*)"V.SetLabelVisibility(bool)\nC++: virtual void SetLabelVisibility(bool vis)\n\nThe edge label visibility.\n"},
  {(char*)"GetLabelVisibility", PyvtkHierarchicalGraphPipeline_GetLabelVisibility, 1,
   (char*)"V.GetLabelVisibility() -> bool\nC++: virtual bool GetLabelVisibility()\n\nThe edge label visibility.\n"},
  {(char*)"LabelVisibilityOn", PyvtkHierarchicalGraphPipeline_LabelVisibilityOn, 1,
   (char*)"V.LabelVisibilityOn()\nC++: void LabelVisibilityOn()\n\nThe edge label visibility.\n"},
  {(char*)"LabelVisibilityOff", PyvtkHierarchicalGraphPipeline_LabelVisibilityOff, 1,
   (char*)"V.LabelVisibilityOff()\nC++: void LabelVisibilityOff()\n\nThe edge label visibility.\n"},
  {(char*)"SetLabelTextProperty", PyvtkHierarchicalGraphPipeline_SetLabelTextProperty, 1,
   (char*)"V.SetLabelTextProperty(vtkTextProperty)\nC++: virtual void SetLabelTextProperty(vtkTextProperty *prop)\n\nThe edge label text property.\n"},
  {(char*)"GetLabelTextProperty", PyvtkHierarchicalGraphPipeline_GetLabelTextProperty, 1,
   (char*)"V.GetLabelTextProperty() -> vtkTextProperty\nC++: virtual vtkTextProperty *GetLabelTextProperty()\n\nThe edge label text property.\n"},
  {(char*)"SetColorArrayName", PyvtkHierarchicalGraphPipeline_SetColorArrayName, 1,
   (char*)"V.SetColorArrayName(string)\nC++: virtual void SetColorArrayName(const char *name)\n\nThe edge color array.\n"},
  {(char*)"GetColorArrayName", PyvtkHierarchicalGraphPipeline_GetColorArrayName, 1,
   (char*)"V.GetColorArrayName() -> string\nC++: virtual const char *GetColorArrayName()\n\nThe edge color array.\n"},
  {(char*)"SetColorEdgesByArray", PyvtkHierarchicalGraphPipeline_SetColorEdgesByArray, 1,
   (char*)"V.SetColorEdgesByArray(bool)\nC++: virtual void SetColorEdgesByArray(bool vis)\n\nWhether to color the edges by an array.\n"},
  {(char*)"GetColorEdgesByArray", PyvtkHierarchicalGraphPipeline_GetColorEdgesByArray, 1,
   (char*)"V.GetColorEdgesByArray() -> bool\nC++: virtual bool GetColorEdgesByArray()\n\nWhether to color the edges by an array.\n"},
  {(char*)"ColorEdgesByArrayOn", PyvtkHierarchicalGraphPipeline_ColorEdgesByArrayOn, 1,
   (char*)"V.ColorEdgesByArrayOn()\nC++: void ColorEdgesByArrayOn()\n\nWhether to color the edges by an array.\n"},
  {(char*)"ColorEdgesByArrayOff", PyvtkHierarchicalGraphPipeline_ColorEdgesByArrayOff, 1,
   (char*)"V.ColorEdgesByArrayOff()\nC++: void ColorEdgesByArrayOff()\n\nWhether to color the edges by an array.\n"},
  {(char*)"SetVisibility", PyvtkHierarchicalGraphPipeline_SetVisibility, 1,
   (char*)"V.SetVisibility(bool)\nC++: virtual void SetVisibility(bool vis)\n\nThe visibility of this graph.\n"},
  {(char*)"GetVisibility", PyvtkHierarchicalGraphPipeline_GetVisibility, 1,
   (char*)"V.GetVisibility() -> bool\nC++: virtual bool GetVisibility()\n\nThe visibility of this graph.\n"},
  {(char*)"VisibilityOn", PyvtkHierarchicalGraphPipeline_VisibilityOn, 1,
   (char*)"V.VisibilityOn()\nC++: void VisibilityOn()\n\nThe visibility of this graph.\n"},
  {(char*)"VisibilityOff", PyvtkHierarchicalGraphPipeline_VisibilityOff, 1,
   (char*)"V.VisibilityOff()\nC++: void VisibilityOff()\n\nThe visibility of this graph.\n"},
  {(char*)"ConvertSelection", PyvtkHierarchicalGraphPipeline_ConvertSelection, 1,
   (char*)"V.ConvertSelection(vtkDataRepresentation, vtkSelection)\n    -> vtkSelection\nC++: virtual vtkSelection *ConvertSelection(\n    vtkDataRepresentation *rep, vtkSelection *sel)\n\nReturns a new selection relevant to this graph based on an input\nselection and the view that this graph is contained in.\n"},
  {(char*)"PrepareInputConnections", PyvtkHierarchicalGraphPipeline_PrepareInputConnections, 1,
   (char*)"V.PrepareInputConnections(vtkAlgorithmOutput, vtkAlgorithmOutput,\n    vtkAlgorithmOutput)\nC++: virtual void PrepareInputConnections(\n    vtkAlgorithmOutput *graphConn, vtkAlgorithmOutput *treeConn,\n    vtkAlgorithmOutput *annConn)\n\nSets the input connections for this graph. graphConn is the input\ngraph connection. treeConn is the input tree connection. annConn\nis the annotation link connection.\n"},
  {(char*)"ApplyViewTheme", PyvtkHierarchicalGraphPipeline_ApplyViewTheme, 1,
   (char*)"V.ApplyViewTheme(vtkViewTheme)\nC++: virtual void ApplyViewTheme(vtkViewTheme *theme)\n\nApplies the view theme to this graph.\n"},
  {(char*)"SetHoverArrayName", PyvtkHierarchicalGraphPipeline_SetHoverArrayName, 1,
   (char*)"V.SetHoverArrayName(string)\nC++: void SetHoverArrayName(char *)\n\nThe array to use while hovering over an edge.\n"},
  {(char*)"GetHoverArrayName", PyvtkHierarchicalGraphPipeline_GetHoverArrayName, 1,
   (char*)"V.GetHoverArrayName() -> string\nC++: char *GetHoverArrayName()\n\nThe array to use while hovering over an edge.\n"},
  {(char*)"SetSplineType", PyvtkHierarchicalGraphPipeline_SetSplineType, 1,
   (char*)"V.SetSplineType(int)\nC++: virtual void SetSplineType(int type)\n\nThe spline mode to use in vtkSplineGraphEdges.\nvtkSplineGraphEdges::CUSTOM uses a vtkCardinalSpline.\nvtkSplineGraphEdges::BSPLINE uses a b-spline. The default is\nBSPLINE.\n"},
  {(char*)"GetSplineType", PyvtkHierarchicalGraphPipeline_GetSplineType, 1,
   (char*)"V.GetSplineType() -> int\nC++: virtual int GetSplineType()\n\nThe spline mode to use in vtkSplineGraphEdges.\nvtkSplineGraphEdges::CUSTOM uses a vtkCardinalSpline.\nvtkSplineGraphEdges::BSPLINE uses a b-spline. The default is\nBSPLINE.\n"},
  {(char*)"RegisterProgress", PyvtkHierarchicalGraphPipeline_RegisterProgress, 1,
   (char*)"V.RegisterProgress(vtkRenderView)\nC++: void RegisterProgress(vtkRenderView *view)\n\nRegister progress with a view.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkHierarchicalGraphPipeline_StaticNew()
{
  return vtkHierarchicalGraphPipeline::New();
}

PyObject *PyVTKClass_vtkHierarchicalGraphPipelineNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkHierarchicalGraphPipeline_StaticNew,
    PyvtkHierarchicalGraphPipeline_Methods,
    "vtkHierarchicalGraphPipeline", modulename,
    NULL, NULL,
    PyvtkHierarchicalGraphPipeline_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkHierarchicalGraphPipeline_Doc()
{
  static const char *docstring[] = {
    "vtkHierarchicalGraphPipeline - helper class for rendering graphs\nsuperimposed on a tree.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkHierarchicalGraphPipeline renders bundled edges that are meant to\nbe viewed as an overlay on a tree. This class is not for general use,\nbut is used in the internals of vtkRenderedHierarchyRepresentation\nand vtkRenderedTreeAreaRepresentation.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHierarchicalGraphPipeline(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHierarchicalGraphPipelineNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHierarchicalGraphPipeline", o) != 0)
    {
    Py_DECREF(o);
    }

}

