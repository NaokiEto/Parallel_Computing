// python wrapper for vtkParallelCoordinatesActor
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
#include "vtkParallelCoordinatesActor.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkParallelCoordinatesActor(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkParallelCoordinatesActor(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkParallelCoordinatesActorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkParallelCoordinatesActorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkActor2DNew
extern "C" { PyObject *PyVTKClass_vtkActor2DNew(const char *); }
#define DECLARED_PyVTKClass_vtkActor2DNew
#endif

static const char **PyvtkParallelCoordinatesActor_Doc();


static PyObject *
PyvtkParallelCoordinatesActor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

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
      tempr = op->vtkParallelCoordinatesActor::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

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
      tempr = op->vtkParallelCoordinatesActor::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

  vtkParallelCoordinatesActor *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkParallelCoordinatesActor::NewInstance();
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
PyvtkParallelCoordinatesActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkParallelCoordinatesActor *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkParallelCoordinatesActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_SetIndependentVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndependentVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIndependentVariables(temp0);
      }
    else
      {
      op->vtkParallelCoordinatesActor::SetIndependentVariables(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_GetIndependentVariablesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndependentVariablesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIndependentVariablesMinValue();
      }
    else
      {
      tempr = op->vtkParallelCoordinatesActor::GetIndependentVariablesMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_GetIndependentVariablesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndependentVariablesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIndependentVariablesMaxValue();
      }
    else
      {
      tempr = op->vtkParallelCoordinatesActor::GetIndependentVariablesMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_GetIndependentVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndependentVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIndependentVariables();
      }
    else
      {
      tempr = op->vtkParallelCoordinatesActor::GetIndependentVariables();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_SetIndependentVariablesToColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndependentVariablesToColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIndependentVariablesToColumns();
      }
    else
      {
      op->vtkParallelCoordinatesActor::SetIndependentVariablesToColumns();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_SetIndependentVariablesToRows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndependentVariablesToRows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIndependentVariablesToRows();
      }
    else
      {
      op->vtkParallelCoordinatesActor::SetIndependentVariablesToRows();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTitle(temp0);
      }
    else
      {
      op->vtkParallelCoordinatesActor::SetTitle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTitle();
      }
    else
      {
      tempr = op->vtkParallelCoordinatesActor::GetTitle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_SetNumberOfLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfLabels(temp0);
      }
    else
      {
      op->vtkParallelCoordinatesActor::SetNumberOfLabels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_GetNumberOfLabelsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLabelsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfLabelsMinValue();
      }
    else
      {
      tempr = op->vtkParallelCoordinatesActor::GetNumberOfLabelsMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_GetNumberOfLabelsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLabelsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfLabelsMaxValue();
      }
    else
      {
      tempr = op->vtkParallelCoordinatesActor::GetNumberOfLabelsMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_GetNumberOfLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfLabels();
      }
    else
      {
      tempr = op->vtkParallelCoordinatesActor::GetNumberOfLabels();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_SetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabelFormat(temp0);
      }
    else
      {
      op->vtkParallelCoordinatesActor::SetLabelFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_GetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLabelFormat();
      }
    else
      {
      tempr = op->vtkParallelCoordinatesActor::GetLabelFormat();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_SetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->SetTitleTextProperty(temp0);
      }
    else
      {
      op->vtkParallelCoordinatesActor::SetTitleTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_GetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

  vtkTextProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTitleTextProperty();
      }
    else
      {
      tempr = op->vtkParallelCoordinatesActor::GetTitleTextProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_SetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

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
      op->vtkParallelCoordinatesActor::SetLabelTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_GetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

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
      tempr = op->vtkParallelCoordinatesActor::GetLabelTextProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

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
      tempr = op->vtkParallelCoordinatesActor::RenderOpaqueGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

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
      tempr = op->vtkParallelCoordinatesActor::RenderOverlay(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

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
      tempr = op->vtkParallelCoordinatesActor::RenderTranslucentPolygonalGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

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
      tempr = op->vtkParallelCoordinatesActor::HasTranslucentPolygonalGeometry();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkParallelCoordinatesActor::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

  vtkDataObject *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkParallelCoordinatesActor::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesActor *op = static_cast<vtkParallelCoordinatesActor *>(vp);

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
      op->vtkParallelCoordinatesActor::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkParallelCoordinatesActor_Methods[] = {
  {(char*)"GetClassName", PyvtkParallelCoordinatesActor_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkParallelCoordinatesActor_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkParallelCoordinatesActor_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkParallelCoordinatesActor\nC++: vtkParallelCoordinatesActor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkParallelCoordinatesActor_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkParallelCoordinatesActor\nC++: vtkParallelCoordinatesActor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetIndependentVariables", PyvtkParallelCoordinatesActor_SetIndependentVariables, 1,
   (char*)"V.SetIndependentVariables(int)\nC++: void SetIndependentVariables(int)\n\nSpecify whether to use the rows or columns as independent\nvariables. If columns, then each row represents a separate point.\nIf rows, then each column represents a separate point.\n"},
  {(char*)"GetIndependentVariablesMinValue", PyvtkParallelCoordinatesActor_GetIndependentVariablesMinValue, 1,
   (char*)"V.GetIndependentVariablesMinValue() -> int\nC++: int GetIndependentVariablesMinValue()\n\nSpecify whether to use the rows or columns as independent\nvariables. If columns, then each row represents a separate point.\nIf rows, then each column represents a separate point.\n"},
  {(char*)"GetIndependentVariablesMaxValue", PyvtkParallelCoordinatesActor_GetIndependentVariablesMaxValue, 1,
   (char*)"V.GetIndependentVariablesMaxValue() -> int\nC++: int GetIndependentVariablesMaxValue()\n\nSpecify whether to use the rows or columns as independent\nvariables. If columns, then each row represents a separate point.\nIf rows, then each column represents a separate point.\n"},
  {(char*)"GetIndependentVariables", PyvtkParallelCoordinatesActor_GetIndependentVariables, 1,
   (char*)"V.GetIndependentVariables() -> int\nC++: int GetIndependentVariables()\n\nSpecify whether to use the rows or columns as independent\nvariables. If columns, then each row represents a separate point.\nIf rows, then each column represents a separate point.\n"},
  {(char*)"SetIndependentVariablesToColumns", PyvtkParallelCoordinatesActor_SetIndependentVariablesToColumns, 1,
   (char*)"V.SetIndependentVariablesToColumns()\nC++: void SetIndependentVariablesToColumns()\n\nSpecify whether to use the rows or columns as independent\nvariables. If columns, then each row represents a separate point.\nIf rows, then each column represents a separate point.\n"},
  {(char*)"SetIndependentVariablesToRows", PyvtkParallelCoordinatesActor_SetIndependentVariablesToRows, 1,
   (char*)"V.SetIndependentVariablesToRows()\nC++: void SetIndependentVariablesToRows()\n\nSpecify whether to use the rows or columns as independent\nvariables. If columns, then each row represents a separate point.\nIf rows, then each column represents a separate point.\n"},
  {(char*)"SetTitle", PyvtkParallelCoordinatesActor_SetTitle, 1,
   (char*)"V.SetTitle(string)\nC++: void SetTitle(char *)\n\nSet/Get the title of the parallel coordinates plot.\n"},
  {(char*)"GetTitle", PyvtkParallelCoordinatesActor_GetTitle, 1,
   (char*)"V.GetTitle() -> string\nC++: char *GetTitle()\n\nSet/Get the title of the parallel coordinates plot.\n"},
  {(char*)"SetNumberOfLabels", PyvtkParallelCoordinatesActor_SetNumberOfLabels, 1,
   (char*)"V.SetNumberOfLabels(int)\nC++: void SetNumberOfLabels(int)\n\nSet/Get the number of annotation labels to show along each axis.\nThis values is a suggestion: the number of labels may vary\ndepending on the particulars of the data.\n"},
  {(char*)"GetNumberOfLabelsMinValue", PyvtkParallelCoordinatesActor_GetNumberOfLabelsMinValue, 1,
   (char*)"V.GetNumberOfLabelsMinValue() -> int\nC++: int GetNumberOfLabelsMinValue()\n\nSet/Get the number of annotation labels to show along each axis.\nThis values is a suggestion: the number of labels may vary\ndepending on the particulars of the data.\n"},
  {(char*)"GetNumberOfLabelsMaxValue", PyvtkParallelCoordinatesActor_GetNumberOfLabelsMaxValue, 1,
   (char*)"V.GetNumberOfLabelsMaxValue() -> int\nC++: int GetNumberOfLabelsMaxValue()\n\nSet/Get the number of annotation labels to show along each axis.\nThis values is a suggestion: the number of labels may vary\ndepending on the particulars of the data.\n"},
  {(char*)"GetNumberOfLabels", PyvtkParallelCoordinatesActor_GetNumberOfLabels, 1,
   (char*)"V.GetNumberOfLabels() -> int\nC++: int GetNumberOfLabels()\n\nSet/Get the number of annotation labels to show along each axis.\nThis values is a suggestion: the number of labels may vary\ndepending on the particulars of the data.\n"},
  {(char*)"SetLabelFormat", PyvtkParallelCoordinatesActor_SetLabelFormat, 1,
   (char*)"V.SetLabelFormat(string)\nC++: void SetLabelFormat(char *)\n\nSet/Get the format with which to print the labels on the axes.\n"},
  {(char*)"GetLabelFormat", PyvtkParallelCoordinatesActor_GetLabelFormat, 1,
   (char*)"V.GetLabelFormat() -> string\nC++: char *GetLabelFormat()\n\nSet/Get the format with which to print the labels on the axes.\n"},
  {(char*)"SetTitleTextProperty", PyvtkParallelCoordinatesActor_SetTitleTextProperty, 1,
   (char*)"V.SetTitleTextProperty(vtkTextProperty)\nC++: virtual void SetTitleTextProperty(vtkTextProperty *p)\n\nSet/Get the title text property.\n"},
  {(char*)"GetTitleTextProperty", PyvtkParallelCoordinatesActor_GetTitleTextProperty, 1,
   (char*)"V.GetTitleTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetTitleTextProperty()\n\nSet/Get the title text property.\n"},
  {(char*)"SetLabelTextProperty", PyvtkParallelCoordinatesActor_SetLabelTextProperty, 1,
   (char*)"V.SetLabelTextProperty(vtkTextProperty)\nC++: virtual void SetLabelTextProperty(vtkTextProperty *p)\n\nSet/Get the labels text property.\n"},
  {(char*)"GetLabelTextProperty", PyvtkParallelCoordinatesActor_GetLabelTextProperty, 1,
   (char*)"V.GetLabelTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetLabelTextProperty()\n\nSet/Get the labels text property.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkParallelCoordinatesActor_RenderOpaqueGeometry, 1,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *)\n\nDraw the parallel coordinates plot.\n"},
  {(char*)"RenderOverlay", PyvtkParallelCoordinatesActor_RenderOverlay, 1,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *)\n\nDraw the parallel coordinates plot.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkParallelCoordinatesActor_RenderTranslucentPolygonalGeometry, 1,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(vtkViewport *)\n\nDraw the parallel coordinates plot.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkParallelCoordinatesActor_HasTranslucentPolygonalGeometry, 1,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {(char*)"SetInput", PyvtkParallelCoordinatesActor_SetInput, 1,
   (char*)"V.SetInput(vtkDataObject)\nC++: virtual void SetInput(vtkDataObject *)\n\nSet the input to the parallel coordinates actor.\n"},
  {(char*)"GetInput", PyvtkParallelCoordinatesActor_GetInput, 1,
   (char*)"V.GetInput() -> vtkDataObject\nC++: vtkDataObject *GetInput()\n\nRemove a dataset from the list of data to append.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkParallelCoordinatesActor_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkParallelCoordinatesActor_StaticNew()
{
  return vtkParallelCoordinatesActor::New();
}

PyObject *PyVTKClass_vtkParallelCoordinatesActorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkParallelCoordinatesActor_StaticNew,
    PyvtkParallelCoordinatesActor_Methods,
    "vtkParallelCoordinatesActor", modulename,
    NULL, NULL,
    PyvtkParallelCoordinatesActor_Doc(),
    PyVTKClass_vtkActor2DNew(modulename));
  return cls;
}

const char **PyvtkParallelCoordinatesActor_Doc()
{
  static const char *docstring[] = {
    "vtkParallelCoordinatesActor - create parallel coordinate display from\ninput field\n\n",
    "Superclass: vtkActor2D\n\n",
    "vtkParallelCoordinatesActor generates a parallel coordinates plot\nfrom an input field (i.e., vtkDataObject). Parallel coordinates\nrepresent N-dimensional data by using a set of N parallel axes (not\northogonal like the usual x-y-z Cartesian axes). Each N-dimensional\npoint is plotted as a polyline, were each of the N components of the\npoint lie on one of the N axes, and the components are connected ",
    "by\nstraight lines.\n\nTo use this class, you must specify an input data object. You'll\nprobably also want to specify the position of the plot be setting the\nPosition and Position2 instance variables, which define a rectangle\nin which the plot lies. Another important parameter is the\nIndependentVariables ivar, which tells the instance how to interpret\nthe field data (independent variables as the rows",
    " or columns of the\nfield). There are also many other instance variables that control the\nlook of the plot includes its title, attributes, number of ticks on\nthe axes, etc.\n\nSet the text property/attributes of the title and the labels through\nthe vtkTextProperty objects associated to this actor.\n\nCaveats:\n\nField data is not necessarily \"rectangular\" in shape. In these cases,\nsome of the data may no",
    "t be plotted.\n\nField data can contain non-numeric arrays (i.e. arrays not subclasses\nof vtkDataArray). Such arrays are skipped.\n\nThe early implementation lacks many features that could be added in\nthe future. This includes the ability to \"brush\" data (choose regions\nalong an axis and highlight any points/lines passing through the\nregion); efficiency is really bad; more control over the properties\n",
    "of the plot (separate properties for each axes,title,etc.; and using\nthe labels found in the field to label each of the axes.\n\nSee Also:\n\nvtkAxisActor3D can be used to create axes in world coordinate space.\nvtkActor2D vtkTextMapper vtkPolyDataMapper2D vtkScalarBarActor\nvtkCoordinate vtkTextProperty\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkParallelCoordinatesActor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkParallelCoordinatesActorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkParallelCoordinatesActor", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_IV_COLUMN", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_IV_ROW", o) != 0)
    {
    Py_DECREF(o);
    }

}

