// python wrapper for vtkDataRepresentation
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
#include "vtkDataRepresentation.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDataRepresentation(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDataRepresentation(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDataRepresentationNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDataRepresentationNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPassInputTypeAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPassInputTypeAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPassInputTypeAlgorithmNew
#endif

static const char **PyvtkDataRepresentation_Doc();


static PyObject *
PyvtkDataRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

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
      tempr = op->vtkDataRepresentation::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

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
      tempr = op->vtkDataRepresentation::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  vtkDataRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDataRepresentation::NewInstance();
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
PyvtkDataRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDataRepresentation *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDataRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataRepresentation_GetInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  int temp0 = 0;
  int temp1 = 0;
  vtkAlgorithmOutput *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInputConnection(temp0, temp1);
      }
    else
      {
      tempr = op->vtkDataRepresentation::GetInputConnection(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataRepresentation_GetAnnotationLink(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnotationLink");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  vtkAnnotationLink *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAnnotationLink();
      }
    else
      {
      tempr = op->vtkDataRepresentation::GetAnnotationLink();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataRepresentation_SetAnnotationLink(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnnotationLink");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  vtkAnnotationLink *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAnnotationLink"))
    {
    if (ap.IsBound())
      {
      op->SetAnnotationLink(temp0);
      }
    else
      {
      op->vtkDataRepresentation::SetAnnotationLink(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataRepresentation_ApplyViewTheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyViewTheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

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
      op->vtkDataRepresentation::ApplyViewTheme(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataRepresentation_Select_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Select");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  vtkView *temp0 = NULL;
  vtkSelection *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkView") &&
      ap.GetVTKObject(temp1, "vtkSelection"))
    {
    if (ap.IsBound())
      {
      op->Select(temp0, temp1);
      }
    else
      {
      op->vtkDataRepresentation::Select(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataRepresentation_Select_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Select");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  vtkView *temp0 = NULL;
  vtkSelection *temp1 = NULL;
  bool temp2 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkView") &&
      ap.GetVTKObject(temp1, "vtkSelection") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->Select(temp0, temp1, temp2);
      }
    else
      {
      op->vtkDataRepresentation::Select(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataRepresentation_Select(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkDataRepresentation_Select_s1(self, args);
    case 3:
      return PyvtkDataRepresentation_Select_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Select");
  return NULL;
}



static PyObject *
PyvtkDataRepresentation_Annotate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Annotate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  vtkView *temp0 = NULL;
  vtkAnnotationLayers *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkView") &&
      ap.GetVTKObject(temp1, "vtkAnnotationLayers"))
    {
    if (ap.IsBound())
      {
      op->Annotate(temp0, temp1);
      }
    else
      {
      op->vtkDataRepresentation::Annotate(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataRepresentation_Annotate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Annotate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  vtkView *temp0 = NULL;
  vtkAnnotationLayers *temp1 = NULL;
  bool temp2 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkView") &&
      ap.GetVTKObject(temp1, "vtkAnnotationLayers") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->Annotate(temp0, temp1, temp2);
      }
    else
      {
      op->vtkDataRepresentation::Annotate(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataRepresentation_Annotate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkDataRepresentation_Annotate_s1(self, args);
    case 3:
      return PyvtkDataRepresentation_Annotate_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Annotate");
  return NULL;
}



static PyObject *
PyvtkDataRepresentation_SetSelectable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSelectable(temp0);
      }
    else
      {
      op->vtkDataRepresentation::SetSelectable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataRepresentation_GetSelectable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectable();
      }
    else
      {
      tempr = op->vtkDataRepresentation::GetSelectable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataRepresentation_SelectableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SelectableOn();
      }
    else
      {
      op->vtkDataRepresentation::SelectableOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataRepresentation_SelectableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SelectableOff();
      }
    else
      {
      op->vtkDataRepresentation::SelectableOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataRepresentation_UpdateSelection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  vtkSelection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelection"))
    {
    if (ap.IsBound())
      {
      op->UpdateSelection(temp0);
      }
    else
      {
      op->vtkDataRepresentation::UpdateSelection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataRepresentation_UpdateSelection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  vtkSelection *temp0 = NULL;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->UpdateSelection(temp0, temp1);
      }
    else
      {
      op->vtkDataRepresentation::UpdateSelection(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataRepresentation_UpdateSelection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkDataRepresentation_UpdateSelection_s1(self, args);
    case 2:
      return PyvtkDataRepresentation_UpdateSelection_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "UpdateSelection");
  return NULL;
}



static PyObject *
PyvtkDataRepresentation_UpdateAnnotations_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateAnnotations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  vtkAnnotationLayers *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAnnotationLayers"))
    {
    if (ap.IsBound())
      {
      op->UpdateAnnotations(temp0);
      }
    else
      {
      op->vtkDataRepresentation::UpdateAnnotations(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataRepresentation_UpdateAnnotations_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateAnnotations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  vtkAnnotationLayers *temp0 = NULL;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkAnnotationLayers") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->UpdateAnnotations(temp0, temp1);
      }
    else
      {
      op->vtkDataRepresentation::UpdateAnnotations(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataRepresentation_UpdateAnnotations(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkDataRepresentation_UpdateAnnotations_s1(self, args);
    case 2:
      return PyvtkDataRepresentation_UpdateAnnotations_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "UpdateAnnotations");
  return NULL;
}



static PyObject *
PyvtkDataRepresentation_GetInternalAnnotationOutputPort_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInternalAnnotationOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  vtkAlgorithmOutput *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInternalAnnotationOutputPort();
      }
    else
      {
      tempr = op->vtkDataRepresentation::GetInternalAnnotationOutputPort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataRepresentation_GetInternalAnnotationOutputPort_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInternalAnnotationOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  int temp0;
  vtkAlgorithmOutput *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInternalAnnotationOutputPort(temp0);
      }
    else
      {
      tempr = op->vtkDataRepresentation::GetInternalAnnotationOutputPort(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataRepresentation_GetInternalAnnotationOutputPort_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInternalAnnotationOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  int temp0;
  int temp1;
  vtkAlgorithmOutput *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInternalAnnotationOutputPort(temp0, temp1);
      }
    else
      {
      tempr = op->vtkDataRepresentation::GetInternalAnnotationOutputPort(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataRepresentation_GetInternalAnnotationOutputPort(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkDataRepresentation_GetInternalAnnotationOutputPort_s1(self, args);
    case 1:
      return PyvtkDataRepresentation_GetInternalAnnotationOutputPort_s2(self, args);
    case 2:
      return PyvtkDataRepresentation_GetInternalAnnotationOutputPort_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetInternalAnnotationOutputPort");
  return NULL;
}



static PyObject *
PyvtkDataRepresentation_GetInternalSelectionOutputPort_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInternalSelectionOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  vtkAlgorithmOutput *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInternalSelectionOutputPort();
      }
    else
      {
      tempr = op->vtkDataRepresentation::GetInternalSelectionOutputPort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataRepresentation_GetInternalSelectionOutputPort_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInternalSelectionOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  int temp0;
  vtkAlgorithmOutput *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInternalSelectionOutputPort(temp0);
      }
    else
      {
      tempr = op->vtkDataRepresentation::GetInternalSelectionOutputPort(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataRepresentation_GetInternalSelectionOutputPort_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInternalSelectionOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  int temp0;
  int temp1;
  vtkAlgorithmOutput *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInternalSelectionOutputPort(temp0, temp1);
      }
    else
      {
      tempr = op->vtkDataRepresentation::GetInternalSelectionOutputPort(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataRepresentation_GetInternalSelectionOutputPort(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkDataRepresentation_GetInternalSelectionOutputPort_s1(self, args);
    case 1:
      return PyvtkDataRepresentation_GetInternalSelectionOutputPort_s2(self, args);
    case 2:
      return PyvtkDataRepresentation_GetInternalSelectionOutputPort_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetInternalSelectionOutputPort");
  return NULL;
}



static PyObject *
PyvtkDataRepresentation_GetInternalOutputPort_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInternalOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  vtkAlgorithmOutput *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInternalOutputPort();
      }
    else
      {
      tempr = op->vtkDataRepresentation::GetInternalOutputPort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataRepresentation_GetInternalOutputPort_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInternalOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  int temp0;
  vtkAlgorithmOutput *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInternalOutputPort(temp0);
      }
    else
      {
      tempr = op->vtkDataRepresentation::GetInternalOutputPort(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataRepresentation_GetInternalOutputPort_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInternalOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  int temp0;
  int temp1;
  vtkAlgorithmOutput *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInternalOutputPort(temp0, temp1);
      }
    else
      {
      tempr = op->vtkDataRepresentation::GetInternalOutputPort(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataRepresentation_GetInternalOutputPort(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkDataRepresentation_GetInternalOutputPort_s1(self, args);
    case 1:
      return PyvtkDataRepresentation_GetInternalOutputPort_s2(self, args);
    case 2:
      return PyvtkDataRepresentation_GetInternalOutputPort_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetInternalOutputPort");
  return NULL;
}



static PyObject *
PyvtkDataRepresentation_SetSelectionType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSelectionType(temp0);
      }
    else
      {
      op->vtkDataRepresentation::SetSelectionType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataRepresentation_GetSelectionType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectionType();
      }
    else
      {
      tempr = op->vtkDataRepresentation::GetSelectionType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataRepresentation_SetSelectionArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  vtkStringArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringArray"))
    {
    if (ap.IsBound())
      {
      op->SetSelectionArrayNames(temp0);
      }
    else
      {
      op->vtkDataRepresentation::SetSelectionArrayNames(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataRepresentation_GetSelectionArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  vtkStringArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectionArrayNames();
      }
    else
      {
      tempr = op->vtkDataRepresentation::GetSelectionArrayNames();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataRepresentation_SetSelectionArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSelectionArrayName(temp0);
      }
    else
      {
      op->vtkDataRepresentation::SetSelectionArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataRepresentation_GetSelectionArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectionArrayName();
      }
    else
      {
      tempr = op->vtkDataRepresentation::GetSelectionArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataRepresentation_ConvertSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  vtkView *temp0 = NULL;
  vtkSelection *temp1 = NULL;
  vtkSelection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkView") &&
      ap.GetVTKObject(temp1, "vtkSelection"))
    {
    if (ap.IsBound())
      {
      tempr = op->ConvertSelection(temp0, temp1);
      }
    else
      {
      tempr = op->vtkDataRepresentation::ConvertSelection(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDataRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkDataRepresentation_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataRepresentation_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataRepresentation_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDataRepresentation\nC++: vtkDataRepresentation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDataRepresentation_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDataRepresentation\nC++: vtkDataRepresentation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetInputConnection", PyvtkDataRepresentation_GetInputConnection, 1,
   (char*)"V.GetInputConnection(int, int) -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetInputConnection(int port=0,\n    int index=0)\n\nConvenience override method for obtaining the input connection\nwithout specifying the port or index.\n"},
  {(char*)"GetAnnotationLink", PyvtkDataRepresentation_GetAnnotationLink, 1,
   (char*)"V.GetAnnotationLink() -> vtkAnnotationLink\nC++: vtkAnnotationLink *GetAnnotationLink()\n\nThe annotation link for this representation. To link annotations,\nset the same vtkAnnotationLink object in multiple\nrepresentations.\n"},
  {(char*)"SetAnnotationLink", PyvtkDataRepresentation_SetAnnotationLink, 1,
   (char*)"V.SetAnnotationLink(vtkAnnotationLink)\nC++: void SetAnnotationLink(vtkAnnotationLink *link)\n\nThe annotation link for this representation. To link annotations,\nset the same vtkAnnotationLink object in multiple\nrepresentations.\n"},
  {(char*)"ApplyViewTheme", PyvtkDataRepresentation_ApplyViewTheme, 1,
   (char*)"V.ApplyViewTheme(vtkViewTheme)\nC++: virtual void ApplyViewTheme(vtkViewTheme *theme)\n\nApply a theme to this representation. Subclasses should override\nthis method.\n"},
  {(char*)"Select", PyvtkDataRepresentation_Select, 1,
   (char*)"V.Select(vtkView, vtkSelection)\nC++: void Select(vtkView *view, vtkSelection *selection)\nV.Select(vtkView, vtkSelection, bool)\nC++: void Select(vtkView *view, vtkSelection *selection,\n    bool extend)\n\nThe view calls this method when a selection occurs. The\nrepresentation takes this selection and converts it into a\nselection on its data by calling ConvertSelection, then calls\nUpdateSelection with the converted selection. Subclasses should\nnot overrride this method, but should instead override\nConvertSelection. The optional third argument specifies whether\nthe selection should be added to the previous selection on this\nrepresentation.\n"},
  {(char*)"Annotate", PyvtkDataRepresentation_Annotate, 1,
   (char*)"V.Annotate(vtkView, vtkAnnotationLayers)\nC++: void Annotate(vtkView *view,\n    vtkAnnotationLayers *annotations)\nV.Annotate(vtkView, vtkAnnotationLayers, bool)\nC++: void Annotate(vtkView *view,\n    vtkAnnotationLayers *annotations, bool extend)\n\nAnalagous to Select(). The view calls this method when it needs\nto change the underlying annotations (some views might perform\nthe creation of annotations). The representation takes the\nannotations and converts them into a selection on its data by\ncalling ConvertAnnotations, then calls UpdateAnnotations with the\nconverted selection. Subclasses should not overrride this method,\nbut should instead override ConvertSelection. The optional third\nargument specifies whether the selection should be added to the\nprevious selection on this representation.\n"},
  {(char*)"SetSelectable", PyvtkDataRepresentation_SetSelectable, 1,
   (char*)"V.SetSelectable(bool)\nC++: void SetSelectable(bool a)\n\nWhether this representation is able to handle a selection.\nDefault is true.\n"},
  {(char*)"GetSelectable", PyvtkDataRepresentation_GetSelectable, 1,
   (char*)"V.GetSelectable() -> bool\nC++: bool GetSelectable()\n\nWhether this representation is able to handle a selection.\nDefault is true.\n"},
  {(char*)"SelectableOn", PyvtkDataRepresentation_SelectableOn, 1,
   (char*)"V.SelectableOn()\nC++: void SelectableOn()\n\nWhether this representation is able to handle a selection.\nDefault is true.\n"},
  {(char*)"SelectableOff", PyvtkDataRepresentation_SelectableOff, 1,
   (char*)"V.SelectableOff()\nC++: void SelectableOff()\n\nWhether this representation is able to handle a selection.\nDefault is true.\n"},
  {(char*)"UpdateSelection", PyvtkDataRepresentation_UpdateSelection, 1,
   (char*)"V.UpdateSelection(vtkSelection)\nC++: void UpdateSelection(vtkSelection *selection)\nV.UpdateSelection(vtkSelection, bool)\nC++: void UpdateSelection(vtkSelection *selection, bool extend)\n\nUpdates the selection in the selection link and fires a selection\nchange event. Subclasses should not overrride this method, but\nshould instead override ConvertSelection. The optional second\nargument specifies whether the selection should be added to the\nprevious selection on this representation.\n"},
  {(char*)"UpdateAnnotations", PyvtkDataRepresentation_UpdateAnnotations, 1,
   (char*)"V.UpdateAnnotations(vtkAnnotationLayers)\nC++: void UpdateAnnotations(vtkAnnotationLayers *annotations)\nV.UpdateAnnotations(vtkAnnotationLayers, bool)\nC++: void UpdateAnnotations(vtkAnnotationLayers *annotations,\n    bool extend)\n\nUpdates the selection in the selection link and fires a selection\nchange event. Subclasses should not overrride this method, but\nshould instead override ConvertSelection. The optional second\nargument specifies whether the selection should be added to the\nprevious selection on this representation.\n"},
  {(char*)"GetInternalAnnotationOutputPort", PyvtkDataRepresentation_GetInternalAnnotationOutputPort, 1,
   (char*)"V.GetInternalAnnotationOutputPort() -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetInternalAnnotationOutputPort()\nV.GetInternalAnnotationOutputPort(int) -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetInternalAnnotationOutputPort(\n    int port)\nV.GetInternalAnnotationOutputPort(int, int) -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetInternalAnnotationOutputPort(\n    int port, int conn)\n\nThe output port that contains the annotations whose selections\nare localized for a particular input data object. This should be\nused when connecting the internal pipelines.\n"},
  {(char*)"GetInternalSelectionOutputPort", PyvtkDataRepresentation_GetInternalSelectionOutputPort, 1,
   (char*)"V.GetInternalSelectionOutputPort() -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetInternalSelectionOutputPort()\nV.GetInternalSelectionOutputPort(int) -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetInternalSelectionOutputPort(\n    int port)\nV.GetInternalSelectionOutputPort(int, int) -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetInternalSelectionOutputPort(\n    int port, int conn)\n\nThe output port that contains the selection associated with the\ncurrent annotation (normally the interactive selection). This\nshould be used when connecting the internal pipelines.\n"},
  {(char*)"GetInternalOutputPort", PyvtkDataRepresentation_GetInternalOutputPort, 1,
   (char*)"V.GetInternalOutputPort() -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetInternalOutputPort()\nV.GetInternalOutputPort(int) -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetInternalOutputPort(int port)\nV.GetInternalOutputPort(int, int) -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetInternalOutputPort(int port,\n    int conn)\n\nRetrieves an output port for the input data object at the\nspecified port and connection index. This may be connected to the\nrepresentation's internal pipeline.\n"},
  {(char*)"SetSelectionType", PyvtkDataRepresentation_SetSelectionType, 1,
   (char*)"V.SetSelectionType(int)\nC++: void SetSelectionType(int a)\n\nSet the selection type produced by this view. This should be one\nof the content type constants defined in vtkSelectionNode.h.\nCommon values are vtkSelectionNode::INDICES\nvtkSelectionNode::PEDIGREEIDS vtkSelectionNode::VALUES\n"},
  {(char*)"GetSelectionType", PyvtkDataRepresentation_GetSelectionType, 1,
   (char*)"V.GetSelectionType() -> int\nC++: int GetSelectionType()\n\nSet the selection type produced by this view. This should be one\nof the content type constants defined in vtkSelectionNode.h.\nCommon values are vtkSelectionNode::INDICES\nvtkSelectionNode::PEDIGREEIDS vtkSelectionNode::VALUES\n"},
  {(char*)"SetSelectionArrayNames", PyvtkDataRepresentation_SetSelectionArrayNames, 1,
   (char*)"V.SetSelectionArrayNames(vtkStringArray)\nC++: virtual void SetSelectionArrayNames(vtkStringArray *names)\n\nIf a VALUES selection, the arrays used to produce a selection.\n"},
  {(char*)"GetSelectionArrayNames", PyvtkDataRepresentation_GetSelectionArrayNames, 1,
   (char*)"V.GetSelectionArrayNames() -> vtkStringArray\nC++: vtkStringArray *GetSelectionArrayNames()\n\nIf a VALUES selection, the arrays used to produce a selection.\n"},
  {(char*)"SetSelectionArrayName", PyvtkDataRepresentation_SetSelectionArrayName, 1,
   (char*)"V.SetSelectionArrayName(string)\nC++: virtual void SetSelectionArrayName(const char *name)\n\nIf a VALUES selection, the array used to produce a selection.\n"},
  {(char*)"GetSelectionArrayName", PyvtkDataRepresentation_GetSelectionArrayName, 1,
   (char*)"V.GetSelectionArrayName() -> string\nC++: virtual const char *GetSelectionArrayName()\n\nIf a VALUES selection, the array used to produce a selection.\n"},
  {(char*)"ConvertSelection", PyvtkDataRepresentation_ConvertSelection, 1,
   (char*)"V.ConvertSelection(vtkView, vtkSelection) -> vtkSelection\nC++: virtual vtkSelection *ConvertSelection(vtkView *view,\n    vtkSelection *selection)\n\nConvert the selection to a type appropriate for sharing with\nother representations through vtkAnnotationLink, possibly using\nthe view. For the superclass, we just return the same selection.\nSubclasses may do something more fancy, like convert the\nselection from a frustrum to a list of pedigree ids.  If the\nselection cannot be applied to this representation, return NULL.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDataRepresentation_StaticNew()
{
  return vtkDataRepresentation::New();
}

PyObject *PyVTKClass_vtkDataRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDataRepresentation_StaticNew,
    PyvtkDataRepresentation_Methods,
    "vtkDataRepresentation", modulename,
    NULL, NULL,
    PyvtkDataRepresentation_Doc(),
    PyVTKClass_vtkPassInputTypeAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkDataRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkDataRepresentation - The superclass for all representations\n\n",
    "Superclass: vtkPassInputTypeAlgorithm\n\n",
    "vtkDataRepresentation the superclass for representations of data\nobjects. This class itself may be instantiated and used as a\nrepresentation that simply holds a connection to a pipeline.\n\nIf there are multiple representations present in a view, you should\nuse a subclass of vtkDataRepresentation.  The representation is\nresponsible for taking the input pipeline connection and converting\nit to an obj",
    "ect usable by a view.  In the most common case, the\nrepresentation will contain the pipeline necessary to convert a data\nobject into an actor or set of actors.\n\nThe representation has a concept of a selection.  If the user\nperforms a selection operation on the view, the view forwards this on\nto its representations.  The representation is responsible for\ndisplaying that selection in an appropriate ",
    "way.\n\nRepresentation selections may also be linked.  The representation\nshares the selection by converting it into a view-independent format,\nthen setting the selection on its vtkAnnotationLink.  Other\nrepresentations sharing the same selection link instance will get the\nsame selection from the selection link when the view is updated.  The\napplication is responsible for linking representations as ",
    "appropriate\nby setting the same vtkAnnotationLink on each linked representation.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

