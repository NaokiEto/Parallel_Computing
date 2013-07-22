// python wrapper for vtkRectilinearWipeRepresentation
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
#include "vtkRectilinearWipeRepresentation.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkRectilinearWipeRepresentation(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkRectilinearWipeRepresentation(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkRectilinearWipeRepresentationNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkRectilinearWipeRepresentationNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkWidgetRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkWidgetRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkWidgetRepresentationNew
#endif

static const char **PyvtkRectilinearWipeRepresentation_Doc();


static PyObject *
PyvtkRectilinearWipeRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeRepresentation *op = static_cast<vtkRectilinearWipeRepresentation *>(vp);

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
      tempr = op->vtkRectilinearWipeRepresentation::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearWipeRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeRepresentation *op = static_cast<vtkRectilinearWipeRepresentation *>(vp);

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
      tempr = op->vtkRectilinearWipeRepresentation::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearWipeRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeRepresentation *op = static_cast<vtkRectilinearWipeRepresentation *>(vp);

  vtkRectilinearWipeRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkRectilinearWipeRepresentation::NewInstance();
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
PyvtkRectilinearWipeRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkRectilinearWipeRepresentation *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkRectilinearWipeRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearWipeRepresentation_SetRectilinearWipe(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRectilinearWipe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeRepresentation *op = static_cast<vtkRectilinearWipeRepresentation *>(vp);

  vtkImageRectilinearWipe *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageRectilinearWipe"))
    {
    if (ap.IsBound())
      {
      op->SetRectilinearWipe(temp0);
      }
    else
      {
      op->vtkRectilinearWipeRepresentation::SetRectilinearWipe(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearWipeRepresentation_GetRectilinearWipe(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRectilinearWipe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeRepresentation *op = static_cast<vtkRectilinearWipeRepresentation *>(vp);

  vtkImageRectilinearWipe *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRectilinearWipe();
      }
    else
      {
      tempr = op->vtkRectilinearWipeRepresentation::GetRectilinearWipe();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearWipeRepresentation_SetImageActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeRepresentation *op = static_cast<vtkRectilinearWipeRepresentation *>(vp);

  vtkImageActor *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageActor"))
    {
    if (ap.IsBound())
      {
      op->SetImageActor(temp0);
      }
    else
      {
      op->vtkRectilinearWipeRepresentation::SetImageActor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearWipeRepresentation_GetImageActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeRepresentation *op = static_cast<vtkRectilinearWipeRepresentation *>(vp);

  vtkImageActor *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetImageActor();
      }
    else
      {
      tempr = op->vtkRectilinearWipeRepresentation::GetImageActor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearWipeRepresentation_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeRepresentation *op = static_cast<vtkRectilinearWipeRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTolerance(temp0);
      }
    else
      {
      op->vtkRectilinearWipeRepresentation::SetTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearWipeRepresentation_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeRepresentation *op = static_cast<vtkRectilinearWipeRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetToleranceMinValue();
      }
    else
      {
      tempr = op->vtkRectilinearWipeRepresentation::GetToleranceMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearWipeRepresentation_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeRepresentation *op = static_cast<vtkRectilinearWipeRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetToleranceMaxValue();
      }
    else
      {
      tempr = op->vtkRectilinearWipeRepresentation::GetToleranceMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearWipeRepresentation_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeRepresentation *op = static_cast<vtkRectilinearWipeRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTolerance();
      }
    else
      {
      tempr = op->vtkRectilinearWipeRepresentation::GetTolerance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearWipeRepresentation_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeRepresentation *op = static_cast<vtkRectilinearWipeRepresentation *>(vp);

  vtkProperty2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProperty();
      }
    else
      {
      tempr = op->vtkRectilinearWipeRepresentation::GetProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearWipeRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeRepresentation *op = static_cast<vtkRectilinearWipeRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkRectilinearWipeRepresentation::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearWipeRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeRepresentation *op = static_cast<vtkRectilinearWipeRepresentation *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->StartWidgetInteraction(temp0);
      }
    else
      {
      op->vtkRectilinearWipeRepresentation::StartWidgetInteraction(temp0);
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


static PyObject *
PyvtkRectilinearWipeRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeRepresentation *op = static_cast<vtkRectilinearWipeRepresentation *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->WidgetInteraction(temp0);
      }
    else
      {
      op->vtkRectilinearWipeRepresentation::WidgetInteraction(temp0);
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


static PyObject *
PyvtkRectilinearWipeRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeRepresentation *op = static_cast<vtkRectilinearWipeRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2 = 0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    if (ap.IsBound())
      {
      tempr = op->ComputeInteractionState(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkRectilinearWipeRepresentation::ComputeInteractionState(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearWipeRepresentation_GetActors2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeRepresentation *op = static_cast<vtkRectilinearWipeRepresentation *>(vp);

  vtkPropCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
    {
    if (ap.IsBound())
      {
      op->GetActors2D(temp0);
      }
    else
      {
      op->vtkRectilinearWipeRepresentation::GetActors2D(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearWipeRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeRepresentation *op = static_cast<vtkRectilinearWipeRepresentation *>(vp);

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
      op->vtkRectilinearWipeRepresentation::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearWipeRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeRepresentation *op = static_cast<vtkRectilinearWipeRepresentation *>(vp);

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
      tempr = op->vtkRectilinearWipeRepresentation::RenderOverlay(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearWipeRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeRepresentation *op = static_cast<vtkRectilinearWipeRepresentation *>(vp);

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
      tempr = op->vtkRectilinearWipeRepresentation::RenderOpaqueGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearWipeRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeRepresentation *op = static_cast<vtkRectilinearWipeRepresentation *>(vp);

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
      tempr = op->vtkRectilinearWipeRepresentation::RenderTranslucentPolygonalGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearWipeRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeRepresentation *op = static_cast<vtkRectilinearWipeRepresentation *>(vp);

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
      tempr = op->vtkRectilinearWipeRepresentation::HasTranslucentPolygonalGeometry();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkRectilinearWipeRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkRectilinearWipeRepresentation_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for instances of this class.\n"},
  {(char*)"IsA", PyvtkRectilinearWipeRepresentation_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for instances of this class.\n"},
  {(char*)"NewInstance", PyvtkRectilinearWipeRepresentation_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkRectilinearWipeRepresentation\nC++: vtkRectilinearWipeRepresentation *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {(char*)"SafeDownCast", PyvtkRectilinearWipeRepresentation_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRectilinearWipeRepresentation\nC++: vtkRectilinearWipeRepresentation *SafeDownCast(vtkObject* o)\n\nStandard methods for instances of this class.\n"},
  {(char*)"SetRectilinearWipe", PyvtkRectilinearWipeRepresentation_SetRectilinearWipe, 1,
   (char*)"V.SetRectilinearWipe(vtkImageRectilinearWipe)\nC++: void SetRectilinearWipe(vtkImageRectilinearWipe *wipe)\n\nSpecify an instance of vtkImageRectilinearWipe to manipulate.\n"},
  {(char*)"GetRectilinearWipe", PyvtkRectilinearWipeRepresentation_GetRectilinearWipe, 1,
   (char*)"V.GetRectilinearWipe() -> vtkImageRectilinearWipe\nC++: vtkImageRectilinearWipe *GetRectilinearWipe()\n\nSpecify an instance of vtkImageRectilinearWipe to manipulate.\n"},
  {(char*)"SetImageActor", PyvtkRectilinearWipeRepresentation_SetImageActor, 1,
   (char*)"V.SetImageActor(vtkImageActor)\nC++: void SetImageActor(vtkImageActor *imageActor)\n\nSpecify an instance of vtkImageActor to decorate.\n"},
  {(char*)"GetImageActor", PyvtkRectilinearWipeRepresentation_GetImageActor, 1,
   (char*)"V.GetImageActor() -> vtkImageActor\nC++: vtkImageActor *GetImageActor()\n\nSpecify an instance of vtkImageActor to decorate.\n"},
  {(char*)"SetTolerance", PyvtkRectilinearWipeRepresentation_SetTolerance, 1,
   (char*)"V.SetTolerance(int)\nC++: void SetTolerance(int)\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered to be on the widget, or on a\nwidget feature (e.g., a corner point or edge).\n"},
  {(char*)"GetToleranceMinValue", PyvtkRectilinearWipeRepresentation_GetToleranceMinValue, 1,
   (char*)"V.GetToleranceMinValue() -> int\nC++: int GetToleranceMinValue()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered to be on the widget, or on a\nwidget feature (e.g., a corner point or edge).\n"},
  {(char*)"GetToleranceMaxValue", PyvtkRectilinearWipeRepresentation_GetToleranceMaxValue, 1,
   (char*)"V.GetToleranceMaxValue() -> int\nC++: int GetToleranceMaxValue()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered to be on the widget, or on a\nwidget feature (e.g., a corner point or edge).\n"},
  {(char*)"GetTolerance", PyvtkRectilinearWipeRepresentation_GetTolerance, 1,
   (char*)"V.GetTolerance() -> int\nC++: int GetTolerance()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered to be on the widget, or on a\nwidget feature (e.g., a corner point or edge).\n"},
  {(char*)"GetProperty", PyvtkRectilinearWipeRepresentation_GetProperty, 1,
   (char*)"V.GetProperty() -> vtkProperty2D\nC++: vtkProperty2D *GetProperty()\n\nGet the properties for the widget. This can be manipulated to set\ndifferent colors, line widths, etc.\n"},
  {(char*)"BuildRepresentation", PyvtkRectilinearWipeRepresentation_BuildRepresentation, 1,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nSubclasses of vtkRectilinearWipeRepresentation must implement\nthese methods. These are the methods that the widget and its\nrepresentation use to communicate with each other.\n"},
  {(char*)"StartWidgetInteraction", PyvtkRectilinearWipeRepresentation_StartWidgetInteraction, 1,
   (char*)"V.StartWidgetInteraction([float, float])\nC++: virtual void StartWidgetInteraction(double eventPos[2])\n\nSubclasses of vtkRectilinearWipeRepresentation must implement\nthese methods. These are the methods that the widget and its\nrepresentation use to communicate with each other.\n"},
  {(char*)"WidgetInteraction", PyvtkRectilinearWipeRepresentation_WidgetInteraction, 1,
   (char*)"V.WidgetInteraction([float, float])\nC++: virtual void WidgetInteraction(double eventPos[2])\n\nSubclasses of vtkRectilinearWipeRepresentation must implement\nthese methods. These are the methods that the widget and its\nrepresentation use to communicate with each other.\n"},
  {(char*)"ComputeInteractionState", PyvtkRectilinearWipeRepresentation_ComputeInteractionState, 1,
   (char*)"V.ComputeInteractionState(int, int, int) -> int\nC++: virtual int ComputeInteractionState(int X, int Y,\n    int modify=0)\n\nSubclasses of vtkRectilinearWipeRepresentation must implement\nthese methods. These are the methods that the widget and its\nrepresentation use to communicate with each other.\n"},
  {(char*)"GetActors2D", PyvtkRectilinearWipeRepresentation_GetActors2D, 1,
   (char*)"V.GetActors2D(vtkPropCollection)\nC++: virtual void GetActors2D(vtkPropCollection *)\n\nMethods to make this class behave as a vtkProp.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkRectilinearWipeRepresentation_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nMethods to make this class behave as a vtkProp.\n"},
  {(char*)"RenderOverlay", PyvtkRectilinearWipeRepresentation_RenderOverlay, 1,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: virtual int RenderOverlay(vtkViewport *viewport)\n\nMethods to make this class behave as a vtkProp.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkRectilinearWipeRepresentation_RenderOpaqueGeometry, 1,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *viewport)\n\nMethods to make this class behave as a vtkProp.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkRectilinearWipeRepresentation_RenderTranslucentPolygonalGeometry, 1,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(\n    vtkViewport *viewport)\n\nMethods to make this class behave as a vtkProp.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkRectilinearWipeRepresentation_HasTranslucentPolygonalGeometry, 1,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nMethods to make this class behave as a vtkProp.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRectilinearWipeRepresentation_StaticNew()
{
  return vtkRectilinearWipeRepresentation::New();
}

PyObject *PyVTKClass_vtkRectilinearWipeRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRectilinearWipeRepresentation_StaticNew,
    PyvtkRectilinearWipeRepresentation_Methods,
    "vtkRectilinearWipeRepresentation", modulename,
    NULL, NULL,
    PyvtkRectilinearWipeRepresentation_Doc(),
    PyVTKClass_vtkWidgetRepresentationNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"Outside", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"MovingHPane", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"MovingVPane", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"MovingCenter", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkRectilinearWipeRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkRectilinearWipeRepresentation - represent a\nvtkRectilinearWipeWidget\n\n",
    "Superclass: vtkWidgetRepresentation\n\n",
    "This class is used to represent and render a\nvtkRectilinearWipeWidget. To use this class, you need to specify an\ninstance of a vtkImageRectilinearWipe and vtkImageActor. This\nprovides the information for this representation to construct and\nplace itself.\n\nThe class may be subclassed so that alternative representations can\nbe created.  The class defines an API and a default implementation\nthat the ",
    "vtkRectilinearWipeWidget interacts with to render itself in\nthe scene.\n\nCaveats:\n\nThe separation of the widget event handling and representation\nenables users and developers to create new appearances for the\nwidget. It also facilitates parallel processing, where the client\napplication handles events, and remote representations of the widget\nare slaves to the client (and do not handle events).\n\nSee",
    " Also:\n\nvtkRectilinearWipeWidget vtkWidgetRepresentation vtkAbstractWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRectilinearWipeRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRectilinearWipeRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRectilinearWipeRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

