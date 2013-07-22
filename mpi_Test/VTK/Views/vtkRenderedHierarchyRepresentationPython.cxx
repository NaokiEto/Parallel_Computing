// python wrapper for vtkRenderedHierarchyRepresentation
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
#include "vtkRenderedHierarchyRepresentation.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkRenderedHierarchyRepresentation(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkRenderedHierarchyRepresentation(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkRenderedHierarchyRepresentationNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkRenderedHierarchyRepresentationNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkRenderedGraphRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkRenderedGraphRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkRenderedGraphRepresentationNew
#endif

static const char **PyvtkRenderedHierarchyRepresentation_Doc();


static PyObject *
PyvtkRenderedHierarchyRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

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
      tempr = op->vtkRenderedHierarchyRepresentation::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedHierarchyRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

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
      tempr = op->vtkRenderedHierarchyRepresentation::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedHierarchyRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  vtkRenderedHierarchyRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkRenderedHierarchyRepresentation::NewInstance();
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
PyvtkRenderedHierarchyRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkRenderedHierarchyRepresentation *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkRenderedHierarchyRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedHierarchyRepresentation_SetGraphEdgeLabelArrayName_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

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
      op->vtkRenderedHierarchyRepresentation::SetGraphEdgeLabelArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_SetGraphEdgeLabelArrayName_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetGraphEdgeLabelArrayName(temp0, temp1);
      }
    else
      {
      op->vtkRenderedHierarchyRepresentation::SetGraphEdgeLabelArrayName(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_SetGraphEdgeLabelArrayName(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkRenderedHierarchyRepresentation_SetGraphEdgeLabelArrayName_s1(self, args);
    case 2:
      return PyvtkRenderedHierarchyRepresentation_SetGraphEdgeLabelArrayName_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetGraphEdgeLabelArrayName");
  return NULL;
}



static PyObject *
PyvtkRenderedHierarchyRepresentation_GetGraphEdgeLabelArrayName_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphEdgeLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

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
      tempr = op->vtkRenderedHierarchyRepresentation::GetGraphEdgeLabelArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_GetGraphEdgeLabelArrayName_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphEdgeLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGraphEdgeLabelArrayName(temp0);
      }
    else
      {
      tempr = op->vtkRenderedHierarchyRepresentation::GetGraphEdgeLabelArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_GetGraphEdgeLabelArrayName(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkRenderedHierarchyRepresentation_GetGraphEdgeLabelArrayName_s1(self, args);
    case 1:
      return PyvtkRenderedHierarchyRepresentation_GetGraphEdgeLabelArrayName_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetGraphEdgeLabelArrayName");
  return NULL;
}



static PyObject *
PyvtkRenderedHierarchyRepresentation_SetGraphEdgeLabelVisibility_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

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
      op->vtkRenderedHierarchyRepresentation::SetGraphEdgeLabelVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_SetGraphEdgeLabelVisibility_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  bool temp0 = false;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetGraphEdgeLabelVisibility(temp0, temp1);
      }
    else
      {
      op->vtkRenderedHierarchyRepresentation::SetGraphEdgeLabelVisibility(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_SetGraphEdgeLabelVisibility(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkRenderedHierarchyRepresentation_SetGraphEdgeLabelVisibility_s1(self, args);
    case 2:
      return PyvtkRenderedHierarchyRepresentation_SetGraphEdgeLabelVisibility_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetGraphEdgeLabelVisibility");
  return NULL;
}



static PyObject *
PyvtkRenderedHierarchyRepresentation_GetGraphEdgeLabelVisibility_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphEdgeLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

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
      tempr = op->vtkRenderedHierarchyRepresentation::GetGraphEdgeLabelVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_GetGraphEdgeLabelVisibility_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphEdgeLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  int temp0;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGraphEdgeLabelVisibility(temp0);
      }
    else
      {
      tempr = op->vtkRenderedHierarchyRepresentation::GetGraphEdgeLabelVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_GetGraphEdgeLabelVisibility(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkRenderedHierarchyRepresentation_GetGraphEdgeLabelVisibility_s1(self, args);
    case 1:
      return PyvtkRenderedHierarchyRepresentation_GetGraphEdgeLabelVisibility_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetGraphEdgeLabelVisibility");
  return NULL;
}



static PyObject *
PyvtkRenderedHierarchyRepresentation_GraphEdgeLabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GraphEdgeLabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GraphEdgeLabelVisibilityOn();
      }
    else
      {
      op->vtkRenderedHierarchyRepresentation::GraphEdgeLabelVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedHierarchyRepresentation_GraphEdgeLabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GraphEdgeLabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GraphEdgeLabelVisibilityOff();
      }
    else
      {
      op->vtkRenderedHierarchyRepresentation::GraphEdgeLabelVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedHierarchyRepresentation_SetGraphEdgeColorArrayName_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

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
      op->vtkRenderedHierarchyRepresentation::SetGraphEdgeColorArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_SetGraphEdgeColorArrayName_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetGraphEdgeColorArrayName(temp0, temp1);
      }
    else
      {
      op->vtkRenderedHierarchyRepresentation::SetGraphEdgeColorArrayName(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_SetGraphEdgeColorArrayName(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkRenderedHierarchyRepresentation_SetGraphEdgeColorArrayName_s1(self, args);
    case 2:
      return PyvtkRenderedHierarchyRepresentation_SetGraphEdgeColorArrayName_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetGraphEdgeColorArrayName");
  return NULL;
}



static PyObject *
PyvtkRenderedHierarchyRepresentation_GetGraphEdgeColorArrayName_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphEdgeColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

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
      tempr = op->vtkRenderedHierarchyRepresentation::GetGraphEdgeColorArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_GetGraphEdgeColorArrayName_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphEdgeColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGraphEdgeColorArrayName(temp0);
      }
    else
      {
      tempr = op->vtkRenderedHierarchyRepresentation::GetGraphEdgeColorArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_GetGraphEdgeColorArrayName(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkRenderedHierarchyRepresentation_GetGraphEdgeColorArrayName_s1(self, args);
    case 1:
      return PyvtkRenderedHierarchyRepresentation_GetGraphEdgeColorArrayName_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetGraphEdgeColorArrayName");
  return NULL;
}



static PyObject *
PyvtkRenderedHierarchyRepresentation_SetColorGraphEdgesByArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorGraphEdgesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

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
      op->vtkRenderedHierarchyRepresentation::SetColorGraphEdgesByArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_SetColorGraphEdgesByArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorGraphEdgesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  bool temp0 = false;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetColorGraphEdgesByArray(temp0, temp1);
      }
    else
      {
      op->vtkRenderedHierarchyRepresentation::SetColorGraphEdgesByArray(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_SetColorGraphEdgesByArray(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkRenderedHierarchyRepresentation_SetColorGraphEdgesByArray_s1(self, args);
    case 2:
      return PyvtkRenderedHierarchyRepresentation_SetColorGraphEdgesByArray_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetColorGraphEdgesByArray");
  return NULL;
}



static PyObject *
PyvtkRenderedHierarchyRepresentation_GetColorGraphEdgesByArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorGraphEdgesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

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
      tempr = op->vtkRenderedHierarchyRepresentation::GetColorGraphEdgesByArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_GetColorGraphEdgesByArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorGraphEdgesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  int temp0;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColorGraphEdgesByArray(temp0);
      }
    else
      {
      tempr = op->vtkRenderedHierarchyRepresentation::GetColorGraphEdgesByArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_GetColorGraphEdgesByArray(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkRenderedHierarchyRepresentation_GetColorGraphEdgesByArray_s1(self, args);
    case 1:
      return PyvtkRenderedHierarchyRepresentation_GetColorGraphEdgesByArray_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetColorGraphEdgesByArray");
  return NULL;
}



static PyObject *
PyvtkRenderedHierarchyRepresentation_ColorGraphEdgesByArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorGraphEdgesByArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ColorGraphEdgesByArrayOn();
      }
    else
      {
      op->vtkRenderedHierarchyRepresentation::ColorGraphEdgesByArrayOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedHierarchyRepresentation_ColorGraphEdgesByArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorGraphEdgesByArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ColorGraphEdgesByArrayOff();
      }
    else
      {
      op->vtkRenderedHierarchyRepresentation::ColorGraphEdgesByArrayOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedHierarchyRepresentation_SetGraphEdgeColorToSplineFraction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeColorToSplineFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGraphEdgeColorToSplineFraction();
      }
    else
      {
      op->vtkRenderedHierarchyRepresentation::SetGraphEdgeColorToSplineFraction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_SetGraphEdgeColorToSplineFraction_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeColorToSplineFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGraphEdgeColorToSplineFraction(temp0);
      }
    else
      {
      op->vtkRenderedHierarchyRepresentation::SetGraphEdgeColorToSplineFraction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_SetGraphEdgeColorToSplineFraction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkRenderedHierarchyRepresentation_SetGraphEdgeColorToSplineFraction_s1(self, args);
    case 1:
      return PyvtkRenderedHierarchyRepresentation_SetGraphEdgeColorToSplineFraction_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetGraphEdgeColorToSplineFraction");
  return NULL;
}



static PyObject *
PyvtkRenderedHierarchyRepresentation_SetGraphVisibility_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

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
      op->vtkRenderedHierarchyRepresentation::SetGraphVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_SetGraphVisibility_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  bool temp0 = false;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetGraphVisibility(temp0, temp1);
      }
    else
      {
      op->vtkRenderedHierarchyRepresentation::SetGraphVisibility(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_SetGraphVisibility(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkRenderedHierarchyRepresentation_SetGraphVisibility_s1(self, args);
    case 2:
      return PyvtkRenderedHierarchyRepresentation_SetGraphVisibility_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetGraphVisibility");
  return NULL;
}



static PyObject *
PyvtkRenderedHierarchyRepresentation_GetGraphVisibility_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

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
      tempr = op->vtkRenderedHierarchyRepresentation::GetGraphVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_GetGraphVisibility_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  int temp0;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGraphVisibility(temp0);
      }
    else
      {
      tempr = op->vtkRenderedHierarchyRepresentation::GetGraphVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_GetGraphVisibility(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkRenderedHierarchyRepresentation_GetGraphVisibility_s1(self, args);
    case 1:
      return PyvtkRenderedHierarchyRepresentation_GetGraphVisibility_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetGraphVisibility");
  return NULL;
}



static PyObject *
PyvtkRenderedHierarchyRepresentation_GraphVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GraphVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GraphVisibilityOn();
      }
    else
      {
      op->vtkRenderedHierarchyRepresentation::GraphVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedHierarchyRepresentation_GraphVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GraphVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GraphVisibilityOff();
      }
    else
      {
      op->vtkRenderedHierarchyRepresentation::GraphVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedHierarchyRepresentation_SetBundlingStrength_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBundlingStrength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

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
      op->vtkRenderedHierarchyRepresentation::SetBundlingStrength(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_SetBundlingStrength_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBundlingStrength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  double temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetBundlingStrength(temp0, temp1);
      }
    else
      {
      op->vtkRenderedHierarchyRepresentation::SetBundlingStrength(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_SetBundlingStrength(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkRenderedHierarchyRepresentation_SetBundlingStrength_s1(self, args);
    case 2:
      return PyvtkRenderedHierarchyRepresentation_SetBundlingStrength_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBundlingStrength");
  return NULL;
}



static PyObject *
PyvtkRenderedHierarchyRepresentation_GetBundlingStrength_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBundlingStrength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

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
      tempr = op->vtkRenderedHierarchyRepresentation::GetBundlingStrength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_GetBundlingStrength_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBundlingStrength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  int temp0;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBundlingStrength(temp0);
      }
    else
      {
      tempr = op->vtkRenderedHierarchyRepresentation::GetBundlingStrength(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_GetBundlingStrength(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkRenderedHierarchyRepresentation_GetBundlingStrength_s1(self, args);
    case 1:
      return PyvtkRenderedHierarchyRepresentation_GetBundlingStrength_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBundlingStrength");
  return NULL;
}



static PyObject *
PyvtkRenderedHierarchyRepresentation_SetGraphSplineType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphSplineType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetGraphSplineType(temp0, temp1);
      }
    else
      {
      op->vtkRenderedHierarchyRepresentation::SetGraphSplineType(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedHierarchyRepresentation_GetGraphSplineType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphSplineType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGraphSplineType(temp0);
      }
    else
      {
      tempr = op->vtkRenderedHierarchyRepresentation::GetGraphSplineType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedHierarchyRepresentation_SetGraphEdgeLabelFontSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

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
      op->vtkRenderedHierarchyRepresentation::SetGraphEdgeLabelFontSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_SetGraphEdgeLabelFontSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetGraphEdgeLabelFontSize(temp0, temp1);
      }
    else
      {
      op->vtkRenderedHierarchyRepresentation::SetGraphEdgeLabelFontSize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_SetGraphEdgeLabelFontSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkRenderedHierarchyRepresentation_SetGraphEdgeLabelFontSize_s1(self, args);
    case 2:
      return PyvtkRenderedHierarchyRepresentation_SetGraphEdgeLabelFontSize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetGraphEdgeLabelFontSize");
  return NULL;
}



static PyObject *
PyvtkRenderedHierarchyRepresentation_GetGraphEdgeLabelFontSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphEdgeLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

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
      tempr = op->vtkRenderedHierarchyRepresentation::GetGraphEdgeLabelFontSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_GetGraphEdgeLabelFontSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphEdgeLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGraphEdgeLabelFontSize(temp0);
      }
    else
      {
      tempr = op->vtkRenderedHierarchyRepresentation::GetGraphEdgeLabelFontSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_GetGraphEdgeLabelFontSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkRenderedHierarchyRepresentation_GetGraphEdgeLabelFontSize_s1(self, args);
    case 1:
      return PyvtkRenderedHierarchyRepresentation_GetGraphEdgeLabelFontSize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetGraphEdgeLabelFontSize");
  return NULL;
}


static PyMethodDef PyvtkRenderedHierarchyRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkRenderedHierarchyRepresentation_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRenderedHierarchyRepresentation_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRenderedHierarchyRepresentation_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkRenderedHierarchyRepresentation\nC++: vtkRenderedHierarchyRepresentation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRenderedHierarchyRepresentation_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRenderedHierarchyRepresentation\nC++: vtkRenderedHierarchyRepresentation *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"SetGraphEdgeLabelArrayName", PyvtkRenderedHierarchyRepresentation_SetGraphEdgeLabelArrayName, 1,
   (char*)"V.SetGraphEdgeLabelArrayName(string)\nC++: virtual void SetGraphEdgeLabelArrayName(const char *name)\nV.SetGraphEdgeLabelArrayName(string, int)\nC++: virtual void SetGraphEdgeLabelArrayName(const char *name,\n    int idx)\n\n\n"},
  {(char*)"GetGraphEdgeLabelArrayName", PyvtkRenderedHierarchyRepresentation_GetGraphEdgeLabelArrayName, 1,
   (char*)"V.GetGraphEdgeLabelArrayName() -> string\nC++: virtual const char *GetGraphEdgeLabelArrayName()\nV.GetGraphEdgeLabelArrayName(int) -> string\nC++: virtual const char *GetGraphEdgeLabelArrayName(int idx)\n\n\n"},
  {(char*)"SetGraphEdgeLabelVisibility", PyvtkRenderedHierarchyRepresentation_SetGraphEdgeLabelVisibility, 1,
   (char*)"V.SetGraphEdgeLabelVisibility(bool)\nC++: virtual void SetGraphEdgeLabelVisibility(bool vis)\nV.SetGraphEdgeLabelVisibility(bool, int)\nC++: virtual void SetGraphEdgeLabelVisibility(bool vis, int idx)\n\n"},
  {(char*)"GetGraphEdgeLabelVisibility", PyvtkRenderedHierarchyRepresentation_GetGraphEdgeLabelVisibility, 1,
   (char*)"V.GetGraphEdgeLabelVisibility() -> bool\nC++: virtual bool GetGraphEdgeLabelVisibility()\nV.GetGraphEdgeLabelVisibility(int) -> bool\nC++: virtual bool GetGraphEdgeLabelVisibility(int idx)\n\n"},
  {(char*)"GraphEdgeLabelVisibilityOn", PyvtkRenderedHierarchyRepresentation_GraphEdgeLabelVisibilityOn, 1,
   (char*)"V.GraphEdgeLabelVisibilityOn()\nC++: void GraphEdgeLabelVisibilityOn()\n\n"},
  {(char*)"GraphEdgeLabelVisibilityOff", PyvtkRenderedHierarchyRepresentation_GraphEdgeLabelVisibilityOff, 1,
   (char*)"V.GraphEdgeLabelVisibilityOff()\nC++: void GraphEdgeLabelVisibilityOff()\n\n"},
  {(char*)"SetGraphEdgeColorArrayName", PyvtkRenderedHierarchyRepresentation_SetGraphEdgeColorArrayName, 1,
   (char*)"V.SetGraphEdgeColorArrayName(string)\nC++: virtual void SetGraphEdgeColorArrayName(const char *name)\nV.SetGraphEdgeColorArrayName(string, int)\nC++: virtual void SetGraphEdgeColorArrayName(const char *name,\n    int idx)\n\n"},
  {(char*)"GetGraphEdgeColorArrayName", PyvtkRenderedHierarchyRepresentation_GetGraphEdgeColorArrayName, 1,
   (char*)"V.GetGraphEdgeColorArrayName() -> string\nC++: virtual const char *GetGraphEdgeColorArrayName()\nV.GetGraphEdgeColorArrayName(int) -> string\nC++: virtual const char *GetGraphEdgeColorArrayName(int idx)\n\n"},
  {(char*)"SetColorGraphEdgesByArray", PyvtkRenderedHierarchyRepresentation_SetColorGraphEdgesByArray, 1,
   (char*)"V.SetColorGraphEdgesByArray(bool)\nC++: virtual void SetColorGraphEdgesByArray(bool vis)\nV.SetColorGraphEdgesByArray(bool, int)\nC++: virtual void SetColorGraphEdgesByArray(bool vis, int idx)\n\n"},
  {(char*)"GetColorGraphEdgesByArray", PyvtkRenderedHierarchyRepresentation_GetColorGraphEdgesByArray, 1,
   (char*)"V.GetColorGraphEdgesByArray() -> bool\nC++: virtual bool GetColorGraphEdgesByArray()\nV.GetColorGraphEdgesByArray(int) -> bool\nC++: virtual bool GetColorGraphEdgesByArray(int idx)\n\n"},
  {(char*)"ColorGraphEdgesByArrayOn", PyvtkRenderedHierarchyRepresentation_ColorGraphEdgesByArrayOn, 1,
   (char*)"V.ColorGraphEdgesByArrayOn()\nC++: void ColorGraphEdgesByArrayOn()\n\n"},
  {(char*)"ColorGraphEdgesByArrayOff", PyvtkRenderedHierarchyRepresentation_ColorGraphEdgesByArrayOff, 1,
   (char*)"V.ColorGraphEdgesByArrayOff()\nC++: void ColorGraphEdgesByArrayOff()\n\n"},
  {(char*)"SetGraphEdgeColorToSplineFraction", PyvtkRenderedHierarchyRepresentation_SetGraphEdgeColorToSplineFraction, 1,
   (char*)"V.SetGraphEdgeColorToSplineFraction()\nC++: virtual void SetGraphEdgeColorToSplineFraction()\nV.SetGraphEdgeColorToSplineFraction(int)\nC++: virtual void SetGraphEdgeColorToSplineFraction(int idx)\n\n"},
  {(char*)"SetGraphVisibility", PyvtkRenderedHierarchyRepresentation_SetGraphVisibility, 1,
   (char*)"V.SetGraphVisibility(bool)\nC++: virtual void SetGraphVisibility(bool vis)\nV.SetGraphVisibility(bool, int)\nC++: virtual void SetGraphVisibility(bool vis, int idx)\n\n"},
  {(char*)"GetGraphVisibility", PyvtkRenderedHierarchyRepresentation_GetGraphVisibility, 1,
   (char*)"V.GetGraphVisibility() -> bool\nC++: virtual bool GetGraphVisibility()\nV.GetGraphVisibility(int) -> bool\nC++: virtual bool GetGraphVisibility(int idx)\n\n"},
  {(char*)"GraphVisibilityOn", PyvtkRenderedHierarchyRepresentation_GraphVisibilityOn, 1,
   (char*)"V.GraphVisibilityOn()\nC++: void GraphVisibilityOn()\n\n"},
  {(char*)"GraphVisibilityOff", PyvtkRenderedHierarchyRepresentation_GraphVisibilityOff, 1,
   (char*)"V.GraphVisibilityOff()\nC++: void GraphVisibilityOff()\n\n"},
  {(char*)"SetBundlingStrength", PyvtkRenderedHierarchyRepresentation_SetBundlingStrength, 1,
   (char*)"V.SetBundlingStrength(float)\nC++: virtual void SetBundlingStrength(double strength)\nV.SetBundlingStrength(float, int)\nC++: virtual void SetBundlingStrength(double strength, int idx)\n\n"},
  {(char*)"GetBundlingStrength", PyvtkRenderedHierarchyRepresentation_GetBundlingStrength, 1,
   (char*)"V.GetBundlingStrength() -> float\nC++: virtual double GetBundlingStrength()\nV.GetBundlingStrength(int) -> float\nC++: virtual double GetBundlingStrength(int idx)\n\n"},
  {(char*)"SetGraphSplineType", PyvtkRenderedHierarchyRepresentation_SetGraphSplineType, 1,
   (char*)"V.SetGraphSplineType(int, int)\nC++: virtual void SetGraphSplineType(int type, int idx)\n\nSets the spline type for the graph edges.\nvtkSplineGraphEdges::CUSTOM uses a vtkCardinalSpline.\nvtkSplineGraphEdges::BSPLINE uses a b-spline. The default is\nBSPLINE.\n"},
  {(char*)"GetGraphSplineType", PyvtkRenderedHierarchyRepresentation_GetGraphSplineType, 1,
   (char*)"V.GetGraphSplineType(int) -> int\nC++: virtual int GetGraphSplineType(int idx)\n\nSets the spline type for the graph edges.\nvtkSplineGraphEdges::CUSTOM uses a vtkCardinalSpline.\nvtkSplineGraphEdges::BSPLINE uses a b-spline. The default is\nBSPLINE.\n"},
  {(char*)"SetGraphEdgeLabelFontSize", PyvtkRenderedHierarchyRepresentation_SetGraphEdgeLabelFontSize, 1,
   (char*)"V.SetGraphEdgeLabelFontSize(int)\nC++: virtual void SetGraphEdgeLabelFontSize(int size)\nV.SetGraphEdgeLabelFontSize(int, int)\nC++: virtual void SetGraphEdgeLabelFontSize(int size, int idx)\n\n"},
  {(char*)"GetGraphEdgeLabelFontSize", PyvtkRenderedHierarchyRepresentation_GetGraphEdgeLabelFontSize, 1,
   (char*)"V.GetGraphEdgeLabelFontSize() -> int\nC++: virtual int GetGraphEdgeLabelFontSize()\nV.GetGraphEdgeLabelFontSize(int) -> int\nC++: virtual int GetGraphEdgeLabelFontSize(int idx)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRenderedHierarchyRepresentation_StaticNew()
{
  return vtkRenderedHierarchyRepresentation::New();
}

PyObject *PyVTKClass_vtkRenderedHierarchyRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRenderedHierarchyRepresentation_StaticNew,
    PyvtkRenderedHierarchyRepresentation_Methods,
    "vtkRenderedHierarchyRepresentation", modulename,
    NULL, NULL,
    PyvtkRenderedHierarchyRepresentation_Doc(),
    PyVTKClass_vtkRenderedGraphRepresentationNew(modulename));
  return cls;
}

const char **PyvtkRenderedHierarchyRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkRenderedHierarchyRepresentation - \n\n",
    "Superclass: vtkRenderedGraphRepresentation\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRenderedHierarchyRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRenderedHierarchyRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRenderedHierarchyRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

