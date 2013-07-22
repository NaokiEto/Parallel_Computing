// python wrapper for vtkRenderedTreeAreaRepresentation
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
#include "vtkRenderedTreeAreaRepresentation.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkRenderedTreeAreaRepresentation(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkRenderedTreeAreaRepresentation(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkRenderedTreeAreaRepresentationNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkRenderedTreeAreaRepresentationNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkRenderedRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkRenderedRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkRenderedRepresentationNew
#endif

static const char **PyvtkRenderedTreeAreaRepresentation_Doc();


static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

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
      tempr = op->vtkRenderedTreeAreaRepresentation::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

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
      tempr = op->vtkRenderedTreeAreaRepresentation::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  vtkRenderedTreeAreaRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkRenderedTreeAreaRepresentation::NewInstance();
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
PyvtkRenderedTreeAreaRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkRenderedTreeAreaRepresentation *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkRenderedTreeAreaRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetLabelRenderMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelRenderMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabelRenderMode(temp0);
      }
    else
      {
      op->vtkRenderedTreeAreaRepresentation::SetLabelRenderMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetAreaLabelArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAreaLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

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
      op->vtkRenderedTreeAreaRepresentation::SetAreaLabelArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetAreaLabelArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAreaLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

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
      tempr = op->vtkRenderedTreeAreaRepresentation::GetAreaLabelArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetAreaSizeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAreaSizeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

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
      op->vtkRenderedTreeAreaRepresentation::SetAreaSizeArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetAreaSizeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAreaSizeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

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
      tempr = op->vtkRenderedTreeAreaRepresentation::GetAreaSizeArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetAreaLabelPriorityArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAreaLabelPriorityArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAreaLabelPriorityArrayName(temp0);
      }
    else
      {
      op->vtkRenderedTreeAreaRepresentation::SetAreaLabelPriorityArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetAreaLabelPriorityArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAreaLabelPriorityArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAreaLabelPriorityArrayName();
      }
    else
      {
      tempr = op->vtkRenderedTreeAreaRepresentation::GetAreaLabelPriorityArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeLabelArrayName_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

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
      op->vtkRenderedTreeAreaRepresentation::SetGraphEdgeLabelArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeLabelArrayName_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

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
      op->vtkRenderedTreeAreaRepresentation::SetGraphEdgeLabelArrayName(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeLabelArrayName(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeLabelArrayName_s1(self, args);
    case 2:
      return PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeLabelArrayName_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetGraphEdgeLabelArrayName");
  return NULL;
}



static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetGraphEdgeLabelArrayName_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphEdgeLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

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
      tempr = op->vtkRenderedTreeAreaRepresentation::GetGraphEdgeLabelArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetGraphEdgeLabelArrayName_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphEdgeLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

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
      tempr = op->vtkRenderedTreeAreaRepresentation::GetGraphEdgeLabelArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetGraphEdgeLabelArrayName(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkRenderedTreeAreaRepresentation_GetGraphEdgeLabelArrayName_s1(self, args);
    case 1:
      return PyvtkRenderedTreeAreaRepresentation_GetGraphEdgeLabelArrayName_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetGraphEdgeLabelArrayName");
  return NULL;
}



static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeLabelTextProperty_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->SetGraphEdgeLabelTextProperty(temp0);
      }
    else
      {
      op->vtkRenderedTreeAreaRepresentation::SetGraphEdgeLabelTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeLabelTextProperty_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  vtkTextProperty *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetGraphEdgeLabelTextProperty(temp0, temp1);
      }
    else
      {
      op->vtkRenderedTreeAreaRepresentation::SetGraphEdgeLabelTextProperty(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeLabelTextProperty(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeLabelTextProperty_s1(self, args);
    case 2:
      return PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeLabelTextProperty_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetGraphEdgeLabelTextProperty");
  return NULL;
}



static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetGraphEdgeLabelTextProperty_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphEdgeLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  vtkTextProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGraphEdgeLabelTextProperty();
      }
    else
      {
      tempr = op->vtkRenderedTreeAreaRepresentation::GetGraphEdgeLabelTextProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetGraphEdgeLabelTextProperty_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphEdgeLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  int temp0;
  vtkTextProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGraphEdgeLabelTextProperty(temp0);
      }
    else
      {
      tempr = op->vtkRenderedTreeAreaRepresentation::GetGraphEdgeLabelTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetGraphEdgeLabelTextProperty(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkRenderedTreeAreaRepresentation_GetGraphEdgeLabelTextProperty_s1(self, args);
    case 1:
      return PyvtkRenderedTreeAreaRepresentation_GetGraphEdgeLabelTextProperty_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetGraphEdgeLabelTextProperty");
  return NULL;
}



static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetAreaHoverArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAreaHoverArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

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
      op->vtkRenderedTreeAreaRepresentation::SetAreaHoverArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetAreaHoverArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAreaHoverArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAreaHoverArrayName();
      }
    else
      {
      tempr = op->vtkRenderedTreeAreaRepresentation::GetAreaHoverArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetAreaLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAreaLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

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
      op->vtkRenderedTreeAreaRepresentation::SetAreaLabelVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetAreaLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAreaLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

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
      tempr = op->vtkRenderedTreeAreaRepresentation::GetAreaLabelVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_AreaLabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AreaLabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AreaLabelVisibilityOn();
      }
    else
      {
      op->vtkRenderedTreeAreaRepresentation::AreaLabelVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_AreaLabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AreaLabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AreaLabelVisibilityOff();
      }
    else
      {
      op->vtkRenderedTreeAreaRepresentation::AreaLabelVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetAreaLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAreaLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->SetAreaLabelTextProperty(temp0);
      }
    else
      {
      op->vtkRenderedTreeAreaRepresentation::SetAreaLabelTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetAreaLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAreaLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  vtkTextProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAreaLabelTextProperty();
      }
    else
      {
      tempr = op->vtkRenderedTreeAreaRepresentation::GetAreaLabelTextProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeLabelVisibility_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

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
      op->vtkRenderedTreeAreaRepresentation::SetGraphEdgeLabelVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeLabelVisibility_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

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
      op->vtkRenderedTreeAreaRepresentation::SetGraphEdgeLabelVisibility(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeLabelVisibility(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeLabelVisibility_s1(self, args);
    case 2:
      return PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeLabelVisibility_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetGraphEdgeLabelVisibility");
  return NULL;
}



static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetGraphEdgeLabelVisibility_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphEdgeLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

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
      tempr = op->vtkRenderedTreeAreaRepresentation::GetGraphEdgeLabelVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetGraphEdgeLabelVisibility_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphEdgeLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

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
      tempr = op->vtkRenderedTreeAreaRepresentation::GetGraphEdgeLabelVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetGraphEdgeLabelVisibility(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkRenderedTreeAreaRepresentation_GetGraphEdgeLabelVisibility_s1(self, args);
    case 1:
      return PyvtkRenderedTreeAreaRepresentation_GetGraphEdgeLabelVisibility_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetGraphEdgeLabelVisibility");
  return NULL;
}



static PyObject *
PyvtkRenderedTreeAreaRepresentation_GraphEdgeLabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GraphEdgeLabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GraphEdgeLabelVisibilityOn();
      }
    else
      {
      op->vtkRenderedTreeAreaRepresentation::GraphEdgeLabelVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_GraphEdgeLabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GraphEdgeLabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GraphEdgeLabelVisibilityOff();
      }
    else
      {
      op->vtkRenderedTreeAreaRepresentation::GraphEdgeLabelVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetAreaColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAreaColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

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
      op->vtkRenderedTreeAreaRepresentation::SetAreaColorArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetAreaColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAreaColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

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
      tempr = op->vtkRenderedTreeAreaRepresentation::GetAreaColorArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetColorAreasByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorAreasByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColorAreasByArray(temp0);
      }
    else
      {
      op->vtkRenderedTreeAreaRepresentation::SetColorAreasByArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetColorAreasByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorAreasByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColorAreasByArray();
      }
    else
      {
      tempr = op->vtkRenderedTreeAreaRepresentation::GetColorAreasByArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_ColorAreasByArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorAreasByArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ColorAreasByArrayOn();
      }
    else
      {
      op->vtkRenderedTreeAreaRepresentation::ColorAreasByArrayOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_ColorAreasByArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorAreasByArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ColorAreasByArrayOff();
      }
    else
      {
      op->vtkRenderedTreeAreaRepresentation::ColorAreasByArrayOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeColorArrayName_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

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
      op->vtkRenderedTreeAreaRepresentation::SetGraphEdgeColorArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeColorArrayName_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

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
      op->vtkRenderedTreeAreaRepresentation::SetGraphEdgeColorArrayName(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeColorArrayName(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeColorArrayName_s1(self, args);
    case 2:
      return PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeColorArrayName_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetGraphEdgeColorArrayName");
  return NULL;
}



static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetGraphEdgeColorArrayName_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphEdgeColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

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
      tempr = op->vtkRenderedTreeAreaRepresentation::GetGraphEdgeColorArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetGraphEdgeColorArrayName_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphEdgeColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

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
      tempr = op->vtkRenderedTreeAreaRepresentation::GetGraphEdgeColorArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetGraphEdgeColorArrayName(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkRenderedTreeAreaRepresentation_GetGraphEdgeColorArrayName_s1(self, args);
    case 1:
      return PyvtkRenderedTreeAreaRepresentation_GetGraphEdgeColorArrayName_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetGraphEdgeColorArrayName");
  return NULL;
}



static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeColorToSplineFraction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeColorToSplineFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGraphEdgeColorToSplineFraction();
      }
    else
      {
      op->vtkRenderedTreeAreaRepresentation::SetGraphEdgeColorToSplineFraction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeColorToSplineFraction_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeColorToSplineFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

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
      op->vtkRenderedTreeAreaRepresentation::SetGraphEdgeColorToSplineFraction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeColorToSplineFraction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeColorToSplineFraction_s1(self, args);
    case 1:
      return PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeColorToSplineFraction_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetGraphEdgeColorToSplineFraction");
  return NULL;
}



static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetColorGraphEdgesByArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorGraphEdgesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

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
      op->vtkRenderedTreeAreaRepresentation::SetColorGraphEdgesByArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetColorGraphEdgesByArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorGraphEdgesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

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
      op->vtkRenderedTreeAreaRepresentation::SetColorGraphEdgesByArray(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetColorGraphEdgesByArray(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkRenderedTreeAreaRepresentation_SetColorGraphEdgesByArray_s1(self, args);
    case 2:
      return PyvtkRenderedTreeAreaRepresentation_SetColorGraphEdgesByArray_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetColorGraphEdgesByArray");
  return NULL;
}



static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetColorGraphEdgesByArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorGraphEdgesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

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
      tempr = op->vtkRenderedTreeAreaRepresentation::GetColorGraphEdgesByArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetColorGraphEdgesByArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorGraphEdgesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

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
      tempr = op->vtkRenderedTreeAreaRepresentation::GetColorGraphEdgesByArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetColorGraphEdgesByArray(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkRenderedTreeAreaRepresentation_GetColorGraphEdgesByArray_s1(self, args);
    case 1:
      return PyvtkRenderedTreeAreaRepresentation_GetColorGraphEdgesByArray_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetColorGraphEdgesByArray");
  return NULL;
}



static PyObject *
PyvtkRenderedTreeAreaRepresentation_ColorGraphEdgesByArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorGraphEdgesByArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ColorGraphEdgesByArrayOn();
      }
    else
      {
      op->vtkRenderedTreeAreaRepresentation::ColorGraphEdgesByArrayOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_ColorGraphEdgesByArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorGraphEdgesByArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ColorGraphEdgesByArrayOff();
      }
    else
      {
      op->vtkRenderedTreeAreaRepresentation::ColorGraphEdgesByArrayOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetGraphHoverArrayName_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphHoverArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGraphHoverArrayName(temp0);
      }
    else
      {
      op->vtkRenderedTreeAreaRepresentation::SetGraphHoverArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetGraphHoverArrayName_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphHoverArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetGraphHoverArrayName(temp0, temp1);
      }
    else
      {
      op->vtkRenderedTreeAreaRepresentation::SetGraphHoverArrayName(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetGraphHoverArrayName(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkRenderedTreeAreaRepresentation_SetGraphHoverArrayName_s1(self, args);
    case 2:
      return PyvtkRenderedTreeAreaRepresentation_SetGraphHoverArrayName_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetGraphHoverArrayName");
  return NULL;
}



static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetGraphHoverArrayName_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphHoverArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGraphHoverArrayName();
      }
    else
      {
      tempr = op->vtkRenderedTreeAreaRepresentation::GetGraphHoverArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetGraphHoverArrayName_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphHoverArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGraphHoverArrayName(temp0);
      }
    else
      {
      tempr = op->vtkRenderedTreeAreaRepresentation::GetGraphHoverArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetGraphHoverArrayName(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkRenderedTreeAreaRepresentation_GetGraphHoverArrayName_s1(self, args);
    case 1:
      return PyvtkRenderedTreeAreaRepresentation_GetGraphHoverArrayName_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetGraphHoverArrayName");
  return NULL;
}



static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetShrinkPercentage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShrinkPercentage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

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
      op->vtkRenderedTreeAreaRepresentation::SetShrinkPercentage(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetShrinkPercentage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShrinkPercentage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

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
      tempr = op->vtkRenderedTreeAreaRepresentation::GetShrinkPercentage();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetGraphBundlingStrength_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphBundlingStrength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGraphBundlingStrength(temp0);
      }
    else
      {
      op->vtkRenderedTreeAreaRepresentation::SetGraphBundlingStrength(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetGraphBundlingStrength_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphBundlingStrength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  double temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetGraphBundlingStrength(temp0, temp1);
      }
    else
      {
      op->vtkRenderedTreeAreaRepresentation::SetGraphBundlingStrength(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetGraphBundlingStrength(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkRenderedTreeAreaRepresentation_SetGraphBundlingStrength_s1(self, args);
    case 2:
      return PyvtkRenderedTreeAreaRepresentation_SetGraphBundlingStrength_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetGraphBundlingStrength");
  return NULL;
}



static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetGraphBundlingStrength_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphBundlingStrength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGraphBundlingStrength();
      }
    else
      {
      tempr = op->vtkRenderedTreeAreaRepresentation::GetGraphBundlingStrength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetGraphBundlingStrength_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphBundlingStrength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  int temp0;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGraphBundlingStrength(temp0);
      }
    else
      {
      tempr = op->vtkRenderedTreeAreaRepresentation::GetGraphBundlingStrength(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetGraphBundlingStrength(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkRenderedTreeAreaRepresentation_GetGraphBundlingStrength_s1(self, args);
    case 1:
      return PyvtkRenderedTreeAreaRepresentation_GetGraphBundlingStrength_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetGraphBundlingStrength");
  return NULL;
}



static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetGraphSplineType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphSplineType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

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
      op->vtkRenderedTreeAreaRepresentation::SetGraphSplineType(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetGraphSplineType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphSplineType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

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
      tempr = op->vtkRenderedTreeAreaRepresentation::GetGraphSplineType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetAreaLayoutStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAreaLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  vtkAreaLayoutStrategy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAreaLayoutStrategy"))
    {
    if (ap.IsBound())
      {
      op->SetAreaLayoutStrategy(temp0);
      }
    else
      {
      op->vtkRenderedTreeAreaRepresentation::SetAreaLayoutStrategy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetAreaLayoutStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAreaLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  vtkAreaLayoutStrategy *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAreaLayoutStrategy();
      }
    else
      {
      tempr = op->vtkRenderedTreeAreaRepresentation::GetAreaLayoutStrategy();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetAreaToPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAreaToPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  vtkPolyDataAlgorithm *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyDataAlgorithm"))
    {
    if (ap.IsBound())
      {
      op->SetAreaToPolyData(temp0);
      }
    else
      {
      op->vtkRenderedTreeAreaRepresentation::SetAreaToPolyData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetAreaToPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAreaToPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  vtkPolyDataAlgorithm *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAreaToPolyData();
      }
    else
      {
      tempr = op->vtkRenderedTreeAreaRepresentation::GetAreaToPolyData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetUseRectangularCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseRectangularCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

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
      op->vtkRenderedTreeAreaRepresentation::SetUseRectangularCoordinates(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetUseRectangularCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseRectangularCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

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
      tempr = op->vtkRenderedTreeAreaRepresentation::GetUseRectangularCoordinates();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_UseRectangularCoordinatesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseRectangularCoordinatesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseRectangularCoordinatesOn();
      }
    else
      {
      op->vtkRenderedTreeAreaRepresentation::UseRectangularCoordinatesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_UseRectangularCoordinatesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseRectangularCoordinatesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseRectangularCoordinatesOff();
      }
    else
      {
      op->vtkRenderedTreeAreaRepresentation::UseRectangularCoordinatesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetAreaLabelMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAreaLabelMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  vtkLabeledDataMapper *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLabeledDataMapper"))
    {
    if (ap.IsBound())
      {
      op->SetAreaLabelMapper(temp0);
      }
    else
      {
      op->vtkRenderedTreeAreaRepresentation::SetAreaLabelMapper(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetAreaLabelMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAreaLabelMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  vtkLabeledDataMapper *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAreaLabelMapper();
      }
    else
      {
      tempr = op->vtkRenderedTreeAreaRepresentation::GetAreaLabelMapper();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_ApplyViewTheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyViewTheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

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
      op->vtkRenderedTreeAreaRepresentation::ApplyViewTheme(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetEdgeScalarBarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeScalarBarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

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
      op->vtkRenderedTreeAreaRepresentation::SetEdgeScalarBarVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetEdgeScalarBarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeScalarBarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

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
      tempr = op->vtkRenderedTreeAreaRepresentation::GetEdgeScalarBarVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkRenderedTreeAreaRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkRenderedTreeAreaRepresentation_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRenderedTreeAreaRepresentation_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRenderedTreeAreaRepresentation_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkRenderedTreeAreaRepresentation\nC++: vtkRenderedTreeAreaRepresentation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRenderedTreeAreaRepresentation_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRenderedTreeAreaRepresentation\nC++: vtkRenderedTreeAreaRepresentation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetLabelRenderMode", PyvtkRenderedTreeAreaRepresentation_SetLabelRenderMode, 1,
   (char*)"V.SetLabelRenderMode(int)\nC++: virtual void SetLabelRenderMode(int mode)\n\nSet the label render mode. QT - Use vtkQtTreeRingLabeler with\nfitted labeling\n  and unicode support. Requires VTK_USE_QT to be on. FREETYPE -\nUse standard freetype text rendering.\n"},
  {(char*)"SetAreaLabelArrayName", PyvtkRenderedTreeAreaRepresentation_SetAreaLabelArrayName, 1,
   (char*)"V.SetAreaLabelArrayName(string)\nC++: virtual void SetAreaLabelArrayName(const char *name)\n\nThe array to use for area labeling.  Default is \"label\".\n"},
  {(char*)"GetAreaLabelArrayName", PyvtkRenderedTreeAreaRepresentation_GetAreaLabelArrayName, 1,
   (char*)"V.GetAreaLabelArrayName() -> string\nC++: virtual const char *GetAreaLabelArrayName()\n\nThe array to use for area labeling.  Default is \"label\".\n"},
  {(char*)"SetAreaSizeArrayName", PyvtkRenderedTreeAreaRepresentation_SetAreaSizeArrayName, 1,
   (char*)"V.SetAreaSizeArrayName(string)\nC++: virtual void SetAreaSizeArrayName(const char *name)\n\nThe array to use for area sizes. Default is \"size\".\n"},
  {(char*)"GetAreaSizeArrayName", PyvtkRenderedTreeAreaRepresentation_GetAreaSizeArrayName, 1,
   (char*)"V.GetAreaSizeArrayName() -> string\nC++: virtual const char *GetAreaSizeArrayName()\n\nThe array to use for area sizes. Default is \"size\".\n"},
  {(char*)"SetAreaLabelPriorityArrayName", PyvtkRenderedTreeAreaRepresentation_SetAreaLabelPriorityArrayName, 1,
   (char*)"V.SetAreaLabelPriorityArrayName(string)\nC++: virtual void SetAreaLabelPriorityArrayName(const char *name)\n\nThe array to use for area labeling priority. Default is\n\"GraphVertexDegree\".\n"},
  {(char*)"GetAreaLabelPriorityArrayName", PyvtkRenderedTreeAreaRepresentation_GetAreaLabelPriorityArrayName, 1,
   (char*)"V.GetAreaLabelPriorityArrayName() -> string\nC++: virtual const char *GetAreaLabelPriorityArrayName()\n\nThe array to use for area labeling priority. Default is\n\"GraphVertexDegree\".\n"},
  {(char*)"SetGraphEdgeLabelArrayName", PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeLabelArrayName, 1,
   (char*)"V.SetGraphEdgeLabelArrayName(string)\nC++: virtual void SetGraphEdgeLabelArrayName(const char *name)\nV.SetGraphEdgeLabelArrayName(string, int)\nC++: virtual void SetGraphEdgeLabelArrayName(const char *name,\n    int idx)\n\nThe array to use for edge labeling.  Default is \"label\".\n"},
  {(char*)"GetGraphEdgeLabelArrayName", PyvtkRenderedTreeAreaRepresentation_GetGraphEdgeLabelArrayName, 1,
   (char*)"V.GetGraphEdgeLabelArrayName() -> string\nC++: virtual const char *GetGraphEdgeLabelArrayName()\nV.GetGraphEdgeLabelArrayName(int) -> string\nC++: virtual const char *GetGraphEdgeLabelArrayName(int idx)\n\nThe array to use for edge labeling.  Default is \"label\".\n"},
  {(char*)"SetGraphEdgeLabelTextProperty", PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeLabelTextProperty, 1,
   (char*)"V.SetGraphEdgeLabelTextProperty(vtkTextProperty)\nC++: virtual void SetGraphEdgeLabelTextProperty(\n    vtkTextProperty *tp)\nV.SetGraphEdgeLabelTextProperty(vtkTextProperty, int)\nC++: virtual void SetGraphEdgeLabelTextProperty(\n    vtkTextProperty *tp, int idx)\n\nThe text property for the graph edge labels.\n"},
  {(char*)"GetGraphEdgeLabelTextProperty", PyvtkRenderedTreeAreaRepresentation_GetGraphEdgeLabelTextProperty, 1,
   (char*)"V.GetGraphEdgeLabelTextProperty() -> vtkTextProperty\nC++: virtual vtkTextProperty *GetGraphEdgeLabelTextProperty()\nV.GetGraphEdgeLabelTextProperty(int) -> vtkTextProperty\nC++: virtual vtkTextProperty *GetGraphEdgeLabelTextProperty(\n    int idx)\n\nThe text property for the graph edge labels.\n"},
  {(char*)"SetAreaHoverArrayName", PyvtkRenderedTreeAreaRepresentation_SetAreaHoverArrayName, 1,
   (char*)"V.SetAreaHoverArrayName(string)\nC++: void SetAreaHoverArrayName(char *)\n\nThe name of the array whose value appears when the mouse hovers\nover a rectangle in the treemap.\n"},
  {(char*)"GetAreaHoverArrayName", PyvtkRenderedTreeAreaRepresentation_GetAreaHoverArrayName, 1,
   (char*)"V.GetAreaHoverArrayName() -> string\nC++: char *GetAreaHoverArrayName()\n\nThe name of the array whose value appears when the mouse hovers\nover a rectangle in the treemap.\n"},
  {(char*)"SetAreaLabelVisibility", PyvtkRenderedTreeAreaRepresentation_SetAreaLabelVisibility, 1,
   (char*)"V.SetAreaLabelVisibility(bool)\nC++: virtual void SetAreaLabelVisibility(bool vis)\n\nWhether to show area labels.  Default is off.\n"},
  {(char*)"GetAreaLabelVisibility", PyvtkRenderedTreeAreaRepresentation_GetAreaLabelVisibility, 1,
   (char*)"V.GetAreaLabelVisibility() -> bool\nC++: virtual bool GetAreaLabelVisibility()\n\nWhether to show area labels.  Default is off.\n"},
  {(char*)"AreaLabelVisibilityOn", PyvtkRenderedTreeAreaRepresentation_AreaLabelVisibilityOn, 1,
   (char*)"V.AreaLabelVisibilityOn()\nC++: void AreaLabelVisibilityOn()\n\nWhether to show area labels.  Default is off.\n"},
  {(char*)"AreaLabelVisibilityOff", PyvtkRenderedTreeAreaRepresentation_AreaLabelVisibilityOff, 1,
   (char*)"V.AreaLabelVisibilityOff()\nC++: void AreaLabelVisibilityOff()\n\nWhether to show area labels.  Default is off.\n"},
  {(char*)"SetAreaLabelTextProperty", PyvtkRenderedTreeAreaRepresentation_SetAreaLabelTextProperty, 1,
   (char*)"V.SetAreaLabelTextProperty(vtkTextProperty)\nC++: virtual void SetAreaLabelTextProperty(vtkTextProperty *tp)\n\nThe text property for the area labels.\n"},
  {(char*)"GetAreaLabelTextProperty", PyvtkRenderedTreeAreaRepresentation_GetAreaLabelTextProperty, 1,
   (char*)"V.GetAreaLabelTextProperty() -> vtkTextProperty\nC++: virtual vtkTextProperty *GetAreaLabelTextProperty()\n\nThe text property for the area labels.\n"},
  {(char*)"SetGraphEdgeLabelVisibility", PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeLabelVisibility, 1,
   (char*)"V.SetGraphEdgeLabelVisibility(bool)\nC++: virtual void SetGraphEdgeLabelVisibility(bool vis)\nV.SetGraphEdgeLabelVisibility(bool, int)\nC++: virtual void SetGraphEdgeLabelVisibility(bool vis, int idx)\n\nWhether to show edge labels.  Default is off.\n"},
  {(char*)"GetGraphEdgeLabelVisibility", PyvtkRenderedTreeAreaRepresentation_GetGraphEdgeLabelVisibility, 1,
   (char*)"V.GetGraphEdgeLabelVisibility() -> bool\nC++: virtual bool GetGraphEdgeLabelVisibility()\nV.GetGraphEdgeLabelVisibility(int) -> bool\nC++: virtual bool GetGraphEdgeLabelVisibility(int idx)\n\nWhether to show edge labels.  Default is off.\n"},
  {(char*)"GraphEdgeLabelVisibilityOn", PyvtkRenderedTreeAreaRepresentation_GraphEdgeLabelVisibilityOn, 1,
   (char*)"V.GraphEdgeLabelVisibilityOn()\nC++: void GraphEdgeLabelVisibilityOn()\n\nWhether to show edge labels.  Default is off.\n"},
  {(char*)"GraphEdgeLabelVisibilityOff", PyvtkRenderedTreeAreaRepresentation_GraphEdgeLabelVisibilityOff, 1,
   (char*)"V.GraphEdgeLabelVisibilityOff()\nC++: void GraphEdgeLabelVisibilityOff()\n\nWhether to show edge labels.  Default is off.\n"},
  {(char*)"SetAreaColorArrayName", PyvtkRenderedTreeAreaRepresentation_SetAreaColorArrayName, 1,
   (char*)"V.SetAreaColorArrayName(string)\nC++: void SetAreaColorArrayName(const char *name)\n\nThe array to use for coloring vertices.  Default is \"color\".\n"},
  {(char*)"GetAreaColorArrayName", PyvtkRenderedTreeAreaRepresentation_GetAreaColorArrayName, 1,
   (char*)"V.GetAreaColorArrayName() -> string\nC++: const char *GetAreaColorArrayName()\n\nThe array to use for coloring vertices.  Default is \"color\".\n"},
  {(char*)"SetColorAreasByArray", PyvtkRenderedTreeAreaRepresentation_SetColorAreasByArray, 1,
   (char*)"V.SetColorAreasByArray(bool)\nC++: virtual void SetColorAreasByArray(bool vis)\n\nWhether to color vertices.  Default is off.\n"},
  {(char*)"GetColorAreasByArray", PyvtkRenderedTreeAreaRepresentation_GetColorAreasByArray, 1,
   (char*)"V.GetColorAreasByArray() -> bool\nC++: virtual bool GetColorAreasByArray()\n\nWhether to color vertices.  Default is off.\n"},
  {(char*)"ColorAreasByArrayOn", PyvtkRenderedTreeAreaRepresentation_ColorAreasByArrayOn, 1,
   (char*)"V.ColorAreasByArrayOn()\nC++: void ColorAreasByArrayOn()\n\nWhether to color vertices.  Default is off.\n"},
  {(char*)"ColorAreasByArrayOff", PyvtkRenderedTreeAreaRepresentation_ColorAreasByArrayOff, 1,
   (char*)"V.ColorAreasByArrayOff()\nC++: void ColorAreasByArrayOff()\n\nWhether to color vertices.  Default is off.\n"},
  {(char*)"SetGraphEdgeColorArrayName", PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeColorArrayName, 1,
   (char*)"V.SetGraphEdgeColorArrayName(string)\nC++: virtual void SetGraphEdgeColorArrayName(const char *name)\nV.SetGraphEdgeColorArrayName(string, int)\nC++: virtual void SetGraphEdgeColorArrayName(const char *name,\n    int idx)\n\nThe array to use for coloring edges.  Default is \"color\".\n"},
  {(char*)"GetGraphEdgeColorArrayName", PyvtkRenderedTreeAreaRepresentation_GetGraphEdgeColorArrayName, 1,
   (char*)"V.GetGraphEdgeColorArrayName() -> string\nC++: virtual const char *GetGraphEdgeColorArrayName()\nV.GetGraphEdgeColorArrayName(int) -> string\nC++: virtual const char *GetGraphEdgeColorArrayName(int idx)\n\nThe array to use for coloring edges.  Default is \"color\".\n"},
  {(char*)"SetGraphEdgeColorToSplineFraction", PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeColorToSplineFraction, 1,
   (char*)"V.SetGraphEdgeColorToSplineFraction()\nC++: virtual void SetGraphEdgeColorToSplineFraction()\nV.SetGraphEdgeColorToSplineFraction(int)\nC++: virtual void SetGraphEdgeColorToSplineFraction(int idx)\n\nSet the color to be the spline fraction\n"},
  {(char*)"SetColorGraphEdgesByArray", PyvtkRenderedTreeAreaRepresentation_SetColorGraphEdgesByArray, 1,
   (char*)"V.SetColorGraphEdgesByArray(bool)\nC++: virtual void SetColorGraphEdgesByArray(bool vis)\nV.SetColorGraphEdgesByArray(bool, int)\nC++: virtual void SetColorGraphEdgesByArray(bool vis, int idx)\n\nWhether to color edges.  Default is off.\n"},
  {(char*)"GetColorGraphEdgesByArray", PyvtkRenderedTreeAreaRepresentation_GetColorGraphEdgesByArray, 1,
   (char*)"V.GetColorGraphEdgesByArray() -> bool\nC++: virtual bool GetColorGraphEdgesByArray()\nV.GetColorGraphEdgesByArray(int) -> bool\nC++: virtual bool GetColorGraphEdgesByArray(int idx)\n\nWhether to color edges.  Default is off.\n"},
  {(char*)"ColorGraphEdgesByArrayOn", PyvtkRenderedTreeAreaRepresentation_ColorGraphEdgesByArrayOn, 1,
   (char*)"V.ColorGraphEdgesByArrayOn()\nC++: void ColorGraphEdgesByArrayOn()\n\nWhether to color edges.  Default is off.\n"},
  {(char*)"ColorGraphEdgesByArrayOff", PyvtkRenderedTreeAreaRepresentation_ColorGraphEdgesByArrayOff, 1,
   (char*)"V.ColorGraphEdgesByArrayOff()\nC++: void ColorGraphEdgesByArrayOff()\n\nWhether to color edges.  Default is off.\n"},
  {(char*)"SetGraphHoverArrayName", PyvtkRenderedTreeAreaRepresentation_SetGraphHoverArrayName, 1,
   (char*)"V.SetGraphHoverArrayName(string)\nC++: virtual void SetGraphHoverArrayName(const char *name)\nV.SetGraphHoverArrayName(string, int)\nC++: virtual void SetGraphHoverArrayName(const char *name,\n    int idx)\n\nThe name of the array whose value appears when the mouse hovers\nover a graph edge.\n"},
  {(char*)"GetGraphHoverArrayName", PyvtkRenderedTreeAreaRepresentation_GetGraphHoverArrayName, 1,
   (char*)"V.GetGraphHoverArrayName() -> string\nC++: virtual const char *GetGraphHoverArrayName()\nV.GetGraphHoverArrayName(int) -> string\nC++: virtual const char *GetGraphHoverArrayName(int idx)\n\nThe name of the array whose value appears when the mouse hovers\nover a graph edge.\n"},
  {(char*)"SetShrinkPercentage", PyvtkRenderedTreeAreaRepresentation_SetShrinkPercentage, 1,
   (char*)"V.SetShrinkPercentage(float)\nC++: virtual void SetShrinkPercentage(double value)\n\nSet the region shrink percentage between 0.0 and 1.0.\n"},
  {(char*)"GetShrinkPercentage", PyvtkRenderedTreeAreaRepresentation_GetShrinkPercentage, 1,
   (char*)"V.GetShrinkPercentage() -> float\nC++: virtual double GetShrinkPercentage()\n\nSet the region shrink percentage between 0.0 and 1.0.\n"},
  {(char*)"SetGraphBundlingStrength", PyvtkRenderedTreeAreaRepresentation_SetGraphBundlingStrength, 1,
   (char*)"V.SetGraphBundlingStrength(float)\nC++: virtual void SetGraphBundlingStrength(double strength)\nV.SetGraphBundlingStrength(float, int)\nC++: virtual void SetGraphBundlingStrength(double strength,\n    int idx)\n\nSet the bundling strength.\n"},
  {(char*)"GetGraphBundlingStrength", PyvtkRenderedTreeAreaRepresentation_GetGraphBundlingStrength, 1,
   (char*)"V.GetGraphBundlingStrength() -> float\nC++: virtual double GetGraphBundlingStrength()\nV.GetGraphBundlingStrength(int) -> float\nC++: virtual double GetGraphBundlingStrength(int idx)\n\nSet the bundling strength.\n"},
  {(char*)"SetGraphSplineType", PyvtkRenderedTreeAreaRepresentation_SetGraphSplineType, 1,
   (char*)"V.SetGraphSplineType(int, int)\nC++: virtual void SetGraphSplineType(int type, int idx)\n\nSets the spline type for the graph edges.\nvtkSplineGraphEdges::CUSTOM uses a vtkCardinalSpline.\nvtkSplineGraphEdges::BSPLINE uses a b-spline. The default is\nBSPLINE.\n"},
  {(char*)"GetGraphSplineType", PyvtkRenderedTreeAreaRepresentation_GetGraphSplineType, 1,
   (char*)"V.GetGraphSplineType(int) -> int\nC++: virtual int GetGraphSplineType(int idx)\n\nSets the spline type for the graph edges.\nvtkSplineGraphEdges::CUSTOM uses a vtkCardinalSpline.\nvtkSplineGraphEdges::BSPLINE uses a b-spline. The default is\nBSPLINE.\n"},
  {(char*)"SetAreaLayoutStrategy", PyvtkRenderedTreeAreaRepresentation_SetAreaLayoutStrategy, 1,
   (char*)"V.SetAreaLayoutStrategy(vtkAreaLayoutStrategy)\nC++: virtual void SetAreaLayoutStrategy(\n    vtkAreaLayoutStrategy *strategy)\n\nThe layout strategy for producing spatial regions for the tree.\n"},
  {(char*)"GetAreaLayoutStrategy", PyvtkRenderedTreeAreaRepresentation_GetAreaLayoutStrategy, 1,
   (char*)"V.GetAreaLayoutStrategy() -> vtkAreaLayoutStrategy\nC++: virtual vtkAreaLayoutStrategy *GetAreaLayoutStrategy()\n\nThe layout strategy for producing spatial regions for the tree.\n"},
  {(char*)"SetAreaToPolyData", PyvtkRenderedTreeAreaRepresentation_SetAreaToPolyData, 1,
   (char*)"V.SetAreaToPolyData(vtkPolyDataAlgorithm)\nC++: virtual void SetAreaToPolyData(\n    vtkPolyDataAlgorithm *areaToPoly)\n\nThe filter for converting areas to polydata. This may e.g. be\nvtkTreeMapToPolyData or vtkTreeRingToPolyData. The filter must\ntake a vtkTree as input and produce vtkPolyData.\n"},
  {(char*)"GetAreaToPolyData", PyvtkRenderedTreeAreaRepresentation_GetAreaToPolyData, 1,
   (char*)"V.GetAreaToPolyData() -> vtkPolyDataAlgorithm\nC++: vtkPolyDataAlgorithm *GetAreaToPolyData()\n\nThe filter for converting areas to polydata. This may e.g. be\nvtkTreeMapToPolyData or vtkTreeRingToPolyData. The filter must\ntake a vtkTree as input and produce vtkPolyData.\n"},
  {(char*)"SetUseRectangularCoordinates", PyvtkRenderedTreeAreaRepresentation_SetUseRectangularCoordinates, 1,
   (char*)"V.SetUseRectangularCoordinates(bool)\nC++: void SetUseRectangularCoordinates(bool a)\n\nWhether the area represents radial or rectangular coordinates.\n"},
  {(char*)"GetUseRectangularCoordinates", PyvtkRenderedTreeAreaRepresentation_GetUseRectangularCoordinates, 1,
   (char*)"V.GetUseRectangularCoordinates() -> bool\nC++: bool GetUseRectangularCoordinates()\n\nWhether the area represents radial or rectangular coordinates.\n"},
  {(char*)"UseRectangularCoordinatesOn", PyvtkRenderedTreeAreaRepresentation_UseRectangularCoordinatesOn, 1,
   (char*)"V.UseRectangularCoordinatesOn()\nC++: void UseRectangularCoordinatesOn()\n\nWhether the area represents radial or rectangular coordinates.\n"},
  {(char*)"UseRectangularCoordinatesOff", PyvtkRenderedTreeAreaRepresentation_UseRectangularCoordinatesOff, 1,
   (char*)"V.UseRectangularCoordinatesOff()\nC++: void UseRectangularCoordinatesOff()\n\nWhether the area represents radial or rectangular coordinates.\n"},
  {(char*)"SetAreaLabelMapper", PyvtkRenderedTreeAreaRepresentation_SetAreaLabelMapper, 1,
   (char*)"V.SetAreaLabelMapper(vtkLabeledDataMapper)\nC++: virtual void SetAreaLabelMapper(vtkLabeledDataMapper *mapper)\n\nThe mapper for rendering labels on areas. This may e.g. be\nvtkDynamic2DLabelMapper or vtkTreeMapLabelMapper.\n"},
  {(char*)"GetAreaLabelMapper", PyvtkRenderedTreeAreaRepresentation_GetAreaLabelMapper, 1,
   (char*)"V.GetAreaLabelMapper() -> vtkLabeledDataMapper\nC++: vtkLabeledDataMapper *GetAreaLabelMapper()\n\nThe mapper for rendering labels on areas. This may e.g. be\nvtkDynamic2DLabelMapper or vtkTreeMapLabelMapper.\n"},
  {(char*)"ApplyViewTheme", PyvtkRenderedTreeAreaRepresentation_ApplyViewTheme, 1,
   (char*)"V.ApplyViewTheme(vtkViewTheme)\nC++: virtual void ApplyViewTheme(vtkViewTheme *theme)\n\nApply the theme to this view.\n"},
  {(char*)"SetEdgeScalarBarVisibility", PyvtkRenderedTreeAreaRepresentation_SetEdgeScalarBarVisibility, 1,
   (char*)"V.SetEdgeScalarBarVisibility(bool)\nC++: virtual void SetEdgeScalarBarVisibility(bool b)\n\nVisibility of scalar bar actor for edges.\n"},
  {(char*)"GetEdgeScalarBarVisibility", PyvtkRenderedTreeAreaRepresentation_GetEdgeScalarBarVisibility, 1,
   (char*)"V.GetEdgeScalarBarVisibility() -> bool\nC++: virtual bool GetEdgeScalarBarVisibility()\n\nVisibility of scalar bar actor for edges.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRenderedTreeAreaRepresentation_StaticNew()
{
  return vtkRenderedTreeAreaRepresentation::New();
}

PyObject *PyVTKClass_vtkRenderedTreeAreaRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRenderedTreeAreaRepresentation_StaticNew,
    PyvtkRenderedTreeAreaRepresentation_Methods,
    "vtkRenderedTreeAreaRepresentation", modulename,
    NULL, NULL,
    PyvtkRenderedTreeAreaRepresentation_Doc(),
    PyVTKClass_vtkRenderedRepresentationNew(modulename));
  return cls;
}

const char **PyvtkRenderedTreeAreaRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkRenderedTreeAreaRepresentation - \n\n",
    "Superclass: vtkRenderedRepresentation\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRenderedTreeAreaRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRenderedTreeAreaRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRenderedTreeAreaRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

