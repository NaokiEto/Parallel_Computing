// python wrapper for vtkRandomGraphSource
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
#include "vtkRandomGraphSource.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkRandomGraphSource(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkRandomGraphSource(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkRandomGraphSourceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkRandomGraphSourceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkGraphAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkGraphAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkGraphAlgorithmNew
#endif

static const char **PyvtkRandomGraphSource_Doc();


static PyObject *
PyvtkRandomGraphSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

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
      tempr = op->vtkRandomGraphSource::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

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
      tempr = op->vtkRandomGraphSource::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  vtkRandomGraphSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkRandomGraphSource::NewInstance();
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
PyvtkRandomGraphSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkRandomGraphSource *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkRandomGraphSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetNumberOfVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfVertices();
      }
    else
      {
      tempr = op->vtkRandomGraphSource::GetNumberOfVertices();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetNumberOfVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfVertices(temp0);
      }
    else
      {
      op->vtkRandomGraphSource::SetNumberOfVertices(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetNumberOfVerticesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVerticesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfVerticesMinValue();
      }
    else
      {
      tempr = op->vtkRandomGraphSource::GetNumberOfVerticesMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetNumberOfVerticesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVerticesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfVerticesMaxValue();
      }
    else
      {
      tempr = op->vtkRandomGraphSource::GetNumberOfVerticesMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetNumberOfEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfEdges();
      }
    else
      {
      tempr = op->vtkRandomGraphSource::GetNumberOfEdges();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetNumberOfEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfEdges(temp0);
      }
    else
      {
      op->vtkRandomGraphSource::SetNumberOfEdges(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetNumberOfEdgesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdgesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfEdgesMinValue();
      }
    else
      {
      tempr = op->vtkRandomGraphSource::GetNumberOfEdgesMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetNumberOfEdgesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdgesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfEdgesMaxValue();
      }
    else
      {
      tempr = op->vtkRandomGraphSource::GetNumberOfEdgesMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetEdgeProbability(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeProbability");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgeProbability();
      }
    else
      {
      tempr = op->vtkRandomGraphSource::GetEdgeProbability();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetEdgeProbability(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeProbability");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdgeProbability(temp0);
      }
    else
      {
      op->vtkRandomGraphSource::SetEdgeProbability(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetEdgeProbabilityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeProbabilityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgeProbabilityMinValue();
      }
    else
      {
      tempr = op->vtkRandomGraphSource::GetEdgeProbabilityMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetEdgeProbabilityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeProbabilityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgeProbabilityMaxValue();
      }
    else
      {
      tempr = op->vtkRandomGraphSource::GetEdgeProbabilityMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetIncludeEdgeWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIncludeEdgeWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIncludeEdgeWeights(temp0);
      }
    else
      {
      op->vtkRandomGraphSource::SetIncludeEdgeWeights(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetIncludeEdgeWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncludeEdgeWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIncludeEdgeWeights();
      }
    else
      {
      tempr = op->vtkRandomGraphSource::GetIncludeEdgeWeights();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_IncludeEdgeWeightsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncludeEdgeWeightsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IncludeEdgeWeightsOn();
      }
    else
      {
      op->vtkRandomGraphSource::IncludeEdgeWeightsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_IncludeEdgeWeightsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncludeEdgeWeightsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IncludeEdgeWeightsOff();
      }
    else
      {
      op->vtkRandomGraphSource::IncludeEdgeWeightsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetEdgeWeightArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeWeightArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdgeWeightArrayName(temp0);
      }
    else
      {
      op->vtkRandomGraphSource::SetEdgeWeightArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetEdgeWeightArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeWeightArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgeWeightArrayName();
      }
    else
      {
      tempr = op->vtkRandomGraphSource::GetEdgeWeightArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetDirected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDirected(temp0);
      }
    else
      {
      op->vtkRandomGraphSource::SetDirected(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetDirected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDirected();
      }
    else
      {
      tempr = op->vtkRandomGraphSource::GetDirected();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_DirectedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DirectedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DirectedOn();
      }
    else
      {
      op->vtkRandomGraphSource::DirectedOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_DirectedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DirectedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DirectedOff();
      }
    else
      {
      op->vtkRandomGraphSource::DirectedOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetUseEdgeProbability(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseEdgeProbability");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseEdgeProbability(temp0);
      }
    else
      {
      op->vtkRandomGraphSource::SetUseEdgeProbability(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetUseEdgeProbability(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseEdgeProbability");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseEdgeProbability();
      }
    else
      {
      tempr = op->vtkRandomGraphSource::GetUseEdgeProbability();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_UseEdgeProbabilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseEdgeProbabilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseEdgeProbabilityOn();
      }
    else
      {
      op->vtkRandomGraphSource::UseEdgeProbabilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_UseEdgeProbabilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseEdgeProbabilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseEdgeProbabilityOff();
      }
    else
      {
      op->vtkRandomGraphSource::UseEdgeProbabilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetStartWithTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartWithTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStartWithTree(temp0);
      }
    else
      {
      op->vtkRandomGraphSource::SetStartWithTree(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetStartWithTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartWithTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStartWithTree();
      }
    else
      {
      tempr = op->vtkRandomGraphSource::GetStartWithTree();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_StartWithTreeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWithTreeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartWithTreeOn();
      }
    else
      {
      op->vtkRandomGraphSource::StartWithTreeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_StartWithTreeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWithTreeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartWithTreeOff();
      }
    else
      {
      op->vtkRandomGraphSource::StartWithTreeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetAllowSelfLoops(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllowSelfLoops");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAllowSelfLoops(temp0);
      }
    else
      {
      op->vtkRandomGraphSource::SetAllowSelfLoops(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetAllowSelfLoops(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllowSelfLoops");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAllowSelfLoops();
      }
    else
      {
      tempr = op->vtkRandomGraphSource::GetAllowSelfLoops();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_AllowSelfLoopsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowSelfLoopsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllowSelfLoopsOn();
      }
    else
      {
      op->vtkRandomGraphSource::AllowSelfLoopsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_AllowSelfLoopsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowSelfLoopsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllowSelfLoopsOff();
      }
    else
      {
      op->vtkRandomGraphSource::AllowSelfLoopsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetAllowParallelEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllowParallelEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAllowParallelEdges(temp0);
      }
    else
      {
      op->vtkRandomGraphSource::SetAllowParallelEdges(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetAllowParallelEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllowParallelEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAllowParallelEdges();
      }
    else
      {
      tempr = op->vtkRandomGraphSource::GetAllowParallelEdges();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_AllowParallelEdgesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowParallelEdgesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllowParallelEdgesOn();
      }
    else
      {
      op->vtkRandomGraphSource::AllowParallelEdgesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_AllowParallelEdgesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowParallelEdgesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllowParallelEdgesOff();
      }
    else
      {
      op->vtkRandomGraphSource::AllowParallelEdgesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetGeneratePedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeneratePedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGeneratePedigreeIds(temp0);
      }
    else
      {
      op->vtkRandomGraphSource::SetGeneratePedigreeIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetGeneratePedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeneratePedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGeneratePedigreeIds();
      }
    else
      {
      tempr = op->vtkRandomGraphSource::GetGeneratePedigreeIds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GeneratePedigreeIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePedigreeIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GeneratePedigreeIdsOn();
      }
    else
      {
      op->vtkRandomGraphSource::GeneratePedigreeIdsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GeneratePedigreeIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePedigreeIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GeneratePedigreeIdsOff();
      }
    else
      {
      op->vtkRandomGraphSource::GeneratePedigreeIdsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetVertexPedigreeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexPedigreeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVertexPedigreeIdArrayName(temp0);
      }
    else
      {
      op->vtkRandomGraphSource::SetVertexPedigreeIdArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetVertexPedigreeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexPedigreeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVertexPedigreeIdArrayName();
      }
    else
      {
      tempr = op->vtkRandomGraphSource::GetVertexPedigreeIdArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetEdgePedigreeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgePedigreeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdgePedigreeIdArrayName(temp0);
      }
    else
      {
      op->vtkRandomGraphSource::SetEdgePedigreeIdArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetEdgePedigreeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgePedigreeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgePedigreeIdArrayName();
      }
    else
      {
      tempr = op->vtkRandomGraphSource::GetEdgePedigreeIdArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSeed(temp0);
      }
    else
      {
      op->vtkRandomGraphSource::SetSeed(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSeed();
      }
    else
      {
      tempr = op->vtkRandomGraphSource::GetSeed();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkRandomGraphSource_Methods[] = {
  {(char*)"GetClassName", PyvtkRandomGraphSource_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRandomGraphSource_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRandomGraphSource_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkRandomGraphSource\nC++: vtkRandomGraphSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRandomGraphSource_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRandomGraphSource\nC++: vtkRandomGraphSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetNumberOfVertices", PyvtkRandomGraphSource_GetNumberOfVertices, 1,
   (char*)"V.GetNumberOfVertices() -> int\nC++: int GetNumberOfVertices()\n\nThe number of vertices in the graph.\n"},
  {(char*)"SetNumberOfVertices", PyvtkRandomGraphSource_SetNumberOfVertices, 1,
   (char*)"V.SetNumberOfVertices(int)\nC++: void SetNumberOfVertices(int)\n\nThe number of vertices in the graph.\n"},
  {(char*)"GetNumberOfVerticesMinValue", PyvtkRandomGraphSource_GetNumberOfVerticesMinValue, 1,
   (char*)"V.GetNumberOfVerticesMinValue() -> int\nC++: int GetNumberOfVerticesMinValue()\n\nThe number of vertices in the graph.\n"},
  {(char*)"GetNumberOfVerticesMaxValue", PyvtkRandomGraphSource_GetNumberOfVerticesMaxValue, 1,
   (char*)"V.GetNumberOfVerticesMaxValue() -> int\nC++: int GetNumberOfVerticesMaxValue()\n\nThe number of vertices in the graph.\n"},
  {(char*)"GetNumberOfEdges", PyvtkRandomGraphSource_GetNumberOfEdges, 1,
   (char*)"V.GetNumberOfEdges() -> int\nC++: int GetNumberOfEdges()\n\nIf UseEdgeProbability is off, creates a graph with the specified\nnumber of edges.  Duplicate (parallel) edges are allowed.\n"},
  {(char*)"SetNumberOfEdges", PyvtkRandomGraphSource_SetNumberOfEdges, 1,
   (char*)"V.SetNumberOfEdges(int)\nC++: void SetNumberOfEdges(int)\n\nIf UseEdgeProbability is off, creates a graph with the specified\nnumber of edges.  Duplicate (parallel) edges are allowed.\n"},
  {(char*)"GetNumberOfEdgesMinValue", PyvtkRandomGraphSource_GetNumberOfEdgesMinValue, 1,
   (char*)"V.GetNumberOfEdgesMinValue() -> int\nC++: int GetNumberOfEdgesMinValue()\n\nIf UseEdgeProbability is off, creates a graph with the specified\nnumber of edges.  Duplicate (parallel) edges are allowed.\n"},
  {(char*)"GetNumberOfEdgesMaxValue", PyvtkRandomGraphSource_GetNumberOfEdgesMaxValue, 1,
   (char*)"V.GetNumberOfEdgesMaxValue() -> int\nC++: int GetNumberOfEdgesMaxValue()\n\nIf UseEdgeProbability is off, creates a graph with the specified\nnumber of edges.  Duplicate (parallel) edges are allowed.\n"},
  {(char*)"GetEdgeProbability", PyvtkRandomGraphSource_GetEdgeProbability, 1,
   (char*)"V.GetEdgeProbability() -> float\nC++: double GetEdgeProbability()\n\nIf UseEdgeProbability is on, adds an edge with this probability\nbetween 0 and 1 for each pair of vertices in the graph.\n"},
  {(char*)"SetEdgeProbability", PyvtkRandomGraphSource_SetEdgeProbability, 1,
   (char*)"V.SetEdgeProbability(float)\nC++: void SetEdgeProbability(double)\n\nIf UseEdgeProbability is on, adds an edge with this probability\nbetween 0 and 1 for each pair of vertices in the graph.\n"},
  {(char*)"GetEdgeProbabilityMinValue", PyvtkRandomGraphSource_GetEdgeProbabilityMinValue, 1,
   (char*)"V.GetEdgeProbabilityMinValue() -> float\nC++: double GetEdgeProbabilityMinValue()\n\nIf UseEdgeProbability is on, adds an edge with this probability\nbetween 0 and 1 for each pair of vertices in the graph.\n"},
  {(char*)"GetEdgeProbabilityMaxValue", PyvtkRandomGraphSource_GetEdgeProbabilityMaxValue, 1,
   (char*)"V.GetEdgeProbabilityMaxValue() -> float\nC++: double GetEdgeProbabilityMaxValue()\n\nIf UseEdgeProbability is on, adds an edge with this probability\nbetween 0 and 1 for each pair of vertices in the graph.\n"},
  {(char*)"SetIncludeEdgeWeights", PyvtkRandomGraphSource_SetIncludeEdgeWeights, 1,
   (char*)"V.SetIncludeEdgeWeights(bool)\nC++: void SetIncludeEdgeWeights(bool a)\n\nWhen set, includes edge weights in an array named \"edge_weights\".\nDefaults to off.  Weights are random between 0 and 1.\n"},
  {(char*)"GetIncludeEdgeWeights", PyvtkRandomGraphSource_GetIncludeEdgeWeights, 1,
   (char*)"V.GetIncludeEdgeWeights() -> bool\nC++: bool GetIncludeEdgeWeights()\n\nWhen set, includes edge weights in an array named \"edge_weights\".\nDefaults to off.  Weights are random between 0 and 1.\n"},
  {(char*)"IncludeEdgeWeightsOn", PyvtkRandomGraphSource_IncludeEdgeWeightsOn, 1,
   (char*)"V.IncludeEdgeWeightsOn()\nC++: void IncludeEdgeWeightsOn()\n\nWhen set, includes edge weights in an array named \"edge_weights\".\nDefaults to off.  Weights are random between 0 and 1.\n"},
  {(char*)"IncludeEdgeWeightsOff", PyvtkRandomGraphSource_IncludeEdgeWeightsOff, 1,
   (char*)"V.IncludeEdgeWeightsOff()\nC++: void IncludeEdgeWeightsOff()\n\nWhen set, includes edge weights in an array named \"edge_weights\".\nDefaults to off.  Weights are random between 0 and 1.\n"},
  {(char*)"SetEdgeWeightArrayName", PyvtkRandomGraphSource_SetEdgeWeightArrayName, 1,
   (char*)"V.SetEdgeWeightArrayName(string)\nC++: void SetEdgeWeightArrayName(char *)\n\nThe name of the edge weight array. Default \"edge weight\".\n"},
  {(char*)"GetEdgeWeightArrayName", PyvtkRandomGraphSource_GetEdgeWeightArrayName, 1,
   (char*)"V.GetEdgeWeightArrayName() -> string\nC++: char *GetEdgeWeightArrayName()\n\nThe name of the edge weight array. Default \"edge weight\".\n"},
  {(char*)"SetDirected", PyvtkRandomGraphSource_SetDirected, 1,
   (char*)"V.SetDirected(bool)\nC++: void SetDirected(bool a)\n\nWhen set, creates a directed graph, as opposed to an undirected\ngraph.\n"},
  {(char*)"GetDirected", PyvtkRandomGraphSource_GetDirected, 1,
   (char*)"V.GetDirected() -> bool\nC++: bool GetDirected()\n\nWhen set, creates a directed graph, as opposed to an undirected\ngraph.\n"},
  {(char*)"DirectedOn", PyvtkRandomGraphSource_DirectedOn, 1,
   (char*)"V.DirectedOn()\nC++: void DirectedOn()\n\nWhen set, creates a directed graph, as opposed to an undirected\ngraph.\n"},
  {(char*)"DirectedOff", PyvtkRandomGraphSource_DirectedOff, 1,
   (char*)"V.DirectedOff()\nC++: void DirectedOff()\n\nWhen set, creates a directed graph, as opposed to an undirected\ngraph.\n"},
  {(char*)"SetUseEdgeProbability", PyvtkRandomGraphSource_SetUseEdgeProbability, 1,
   (char*)"V.SetUseEdgeProbability(bool)\nC++: void SetUseEdgeProbability(bool a)\n\nWhen set, uses the EdgeProbability parameter to determine the\ndensity of edges.  Otherwise, NumberOfEdges is used.\n"},
  {(char*)"GetUseEdgeProbability", PyvtkRandomGraphSource_GetUseEdgeProbability, 1,
   (char*)"V.GetUseEdgeProbability() -> bool\nC++: bool GetUseEdgeProbability()\n\nWhen set, uses the EdgeProbability parameter to determine the\ndensity of edges.  Otherwise, NumberOfEdges is used.\n"},
  {(char*)"UseEdgeProbabilityOn", PyvtkRandomGraphSource_UseEdgeProbabilityOn, 1,
   (char*)"V.UseEdgeProbabilityOn()\nC++: void UseEdgeProbabilityOn()\n\nWhen set, uses the EdgeProbability parameter to determine the\ndensity of edges.  Otherwise, NumberOfEdges is used.\n"},
  {(char*)"UseEdgeProbabilityOff", PyvtkRandomGraphSource_UseEdgeProbabilityOff, 1,
   (char*)"V.UseEdgeProbabilityOff()\nC++: void UseEdgeProbabilityOff()\n\nWhen set, uses the EdgeProbability parameter to determine the\ndensity of edges.  Otherwise, NumberOfEdges is used.\n"},
  {(char*)"SetStartWithTree", PyvtkRandomGraphSource_SetStartWithTree, 1,
   (char*)"V.SetStartWithTree(bool)\nC++: void SetStartWithTree(bool a)\n\nWhen set, builds a random tree structure first, then adds\nadditional random edges.\n"},
  {(char*)"GetStartWithTree", PyvtkRandomGraphSource_GetStartWithTree, 1,
   (char*)"V.GetStartWithTree() -> bool\nC++: bool GetStartWithTree()\n\nWhen set, builds a random tree structure first, then adds\nadditional random edges.\n"},
  {(char*)"StartWithTreeOn", PyvtkRandomGraphSource_StartWithTreeOn, 1,
   (char*)"V.StartWithTreeOn()\nC++: void StartWithTreeOn()\n\nWhen set, builds a random tree structure first, then adds\nadditional random edges.\n"},
  {(char*)"StartWithTreeOff", PyvtkRandomGraphSource_StartWithTreeOff, 1,
   (char*)"V.StartWithTreeOff()\nC++: void StartWithTreeOff()\n\nWhen set, builds a random tree structure first, then adds\nadditional random edges.\n"},
  {(char*)"SetAllowSelfLoops", PyvtkRandomGraphSource_SetAllowSelfLoops, 1,
   (char*)"V.SetAllowSelfLoops(bool)\nC++: void SetAllowSelfLoops(bool a)\n\nIf this flag is set to true, edges where the source and target\nvertex are the same can be generated.  The default is to forbid\nsuch loops.\n"},
  {(char*)"GetAllowSelfLoops", PyvtkRandomGraphSource_GetAllowSelfLoops, 1,
   (char*)"V.GetAllowSelfLoops() -> bool\nC++: bool GetAllowSelfLoops()\n\nIf this flag is set to true, edges where the source and target\nvertex are the same can be generated.  The default is to forbid\nsuch loops.\n"},
  {(char*)"AllowSelfLoopsOn", PyvtkRandomGraphSource_AllowSelfLoopsOn, 1,
   (char*)"V.AllowSelfLoopsOn()\nC++: void AllowSelfLoopsOn()\n\nIf this flag is set to true, edges where the source and target\nvertex are the same can be generated.  The default is to forbid\nsuch loops.\n"},
  {(char*)"AllowSelfLoopsOff", PyvtkRandomGraphSource_AllowSelfLoopsOff, 1,
   (char*)"V.AllowSelfLoopsOff()\nC++: void AllowSelfLoopsOff()\n\nIf this flag is set to true, edges where the source and target\nvertex are the same can be generated.  The default is to forbid\nsuch loops.\n"},
  {(char*)"SetAllowParallelEdges", PyvtkRandomGraphSource_SetAllowParallelEdges, 1,
   (char*)"V.SetAllowParallelEdges(bool)\nC++: void SetAllowParallelEdges(bool a)\n\nWhen set, multiple edges from a source to a target vertex are\nallowed. The default is to forbid such loops.\n"},
  {(char*)"GetAllowParallelEdges", PyvtkRandomGraphSource_GetAllowParallelEdges, 1,
   (char*)"V.GetAllowParallelEdges() -> bool\nC++: bool GetAllowParallelEdges()\n\nWhen set, multiple edges from a source to a target vertex are\nallowed. The default is to forbid such loops.\n"},
  {(char*)"AllowParallelEdgesOn", PyvtkRandomGraphSource_AllowParallelEdgesOn, 1,
   (char*)"V.AllowParallelEdgesOn()\nC++: void AllowParallelEdgesOn()\n\nWhen set, multiple edges from a source to a target vertex are\nallowed. The default is to forbid such loops.\n"},
  {(char*)"AllowParallelEdgesOff", PyvtkRandomGraphSource_AllowParallelEdgesOff, 1,
   (char*)"V.AllowParallelEdgesOff()\nC++: void AllowParallelEdgesOff()\n\nWhen set, multiple edges from a source to a target vertex are\nallowed. The default is to forbid such loops.\n"},
  {(char*)"SetGeneratePedigreeIds", PyvtkRandomGraphSource_SetGeneratePedigreeIds, 1,
   (char*)"V.SetGeneratePedigreeIds(bool)\nC++: void SetGeneratePedigreeIds(bool a)\n\nAdd pedigree ids to vertex and edge data.\n"},
  {(char*)"GetGeneratePedigreeIds", PyvtkRandomGraphSource_GetGeneratePedigreeIds, 1,
   (char*)"V.GetGeneratePedigreeIds() -> bool\nC++: bool GetGeneratePedigreeIds()\n\nAdd pedigree ids to vertex and edge data.\n"},
  {(char*)"GeneratePedigreeIdsOn", PyvtkRandomGraphSource_GeneratePedigreeIdsOn, 1,
   (char*)"V.GeneratePedigreeIdsOn()\nC++: void GeneratePedigreeIdsOn()\n\nAdd pedigree ids to vertex and edge data.\n"},
  {(char*)"GeneratePedigreeIdsOff", PyvtkRandomGraphSource_GeneratePedigreeIdsOff, 1,
   (char*)"V.GeneratePedigreeIdsOff()\nC++: void GeneratePedigreeIdsOff()\n\nAdd pedigree ids to vertex and edge data.\n"},
  {(char*)"SetVertexPedigreeIdArrayName", PyvtkRandomGraphSource_SetVertexPedigreeIdArrayName, 1,
   (char*)"V.SetVertexPedigreeIdArrayName(string)\nC++: void SetVertexPedigreeIdArrayName(char *)\n\nThe name of the vertex pedigree id array. Default \"vertex id\".\n"},
  {(char*)"GetVertexPedigreeIdArrayName", PyvtkRandomGraphSource_GetVertexPedigreeIdArrayName, 1,
   (char*)"V.GetVertexPedigreeIdArrayName() -> string\nC++: char *GetVertexPedigreeIdArrayName()\n\nThe name of the vertex pedigree id array. Default \"vertex id\".\n"},
  {(char*)"SetEdgePedigreeIdArrayName", PyvtkRandomGraphSource_SetEdgePedigreeIdArrayName, 1,
   (char*)"V.SetEdgePedigreeIdArrayName(string)\nC++: void SetEdgePedigreeIdArrayName(char *)\n\nThe name of the edge pedigree id array. Default \"edge id\".\n"},
  {(char*)"GetEdgePedigreeIdArrayName", PyvtkRandomGraphSource_GetEdgePedigreeIdArrayName, 1,
   (char*)"V.GetEdgePedigreeIdArrayName() -> string\nC++: char *GetEdgePedigreeIdArrayName()\n\nThe name of the edge pedigree id array. Default \"edge id\".\n"},
  {(char*)"SetSeed", PyvtkRandomGraphSource_SetSeed, 1,
   (char*)"V.SetSeed(int)\nC++: void SetSeed(int a)\n\nControl the seed used for pseudo-random-number generation. This\nensures that vtkRandomGraphSource can produce repeatable results.\n"},
  {(char*)"GetSeed", PyvtkRandomGraphSource_GetSeed, 1,
   (char*)"V.GetSeed() -> int\nC++: int GetSeed()\n\nControl the seed used for pseudo-random-number generation. This\nensures that vtkRandomGraphSource can produce repeatable results.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRandomGraphSource_StaticNew()
{
  return vtkRandomGraphSource::New();
}

PyObject *PyVTKClass_vtkRandomGraphSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRandomGraphSource_StaticNew,
    PyvtkRandomGraphSource_Methods,
    "vtkRandomGraphSource", modulename,
    NULL, NULL,
    PyvtkRandomGraphSource_Doc(),
    PyVTKClass_vtkGraphAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkRandomGraphSource_Doc()
{
  static const char *docstring[] = {
    "vtkRandomGraphSource - a graph with random edges\n\n",
    "Superclass: vtkGraphAlgorithm\n\n",
    "Generates a graph with a specified number of vertices, with the\ndensity of edges specified by either an exact number of edges or the\nprobability of an edge.  You may additionally specify whether to\nbegin with a random tree (which enforces graph connectivity).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRandomGraphSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRandomGraphSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRandomGraphSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

