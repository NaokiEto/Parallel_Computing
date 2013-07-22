// python wrapper for vtkCheckerboardRepresentation
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
#include "vtkCheckerboardRepresentation.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCheckerboardRepresentation(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCheckerboardRepresentation(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCheckerboardRepresentationNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCheckerboardRepresentationNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkWidgetRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkWidgetRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkWidgetRepresentationNew
#endif

static const char **PyvtkCheckerboardRepresentation_Doc();


static PyObject *
PyvtkCheckerboardRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

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
      tempr = op->vtkCheckerboardRepresentation::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

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
      tempr = op->vtkCheckerboardRepresentation::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  vtkCheckerboardRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCheckerboardRepresentation::NewInstance();
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
PyvtkCheckerboardRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCheckerboardRepresentation *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCheckerboardRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_SetCheckerboard(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCheckerboard");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  vtkImageCheckerboard *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageCheckerboard"))
    {
    if (ap.IsBound())
      {
      op->SetCheckerboard(temp0);
      }
    else
      {
      op->vtkCheckerboardRepresentation::SetCheckerboard(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_GetCheckerboard(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCheckerboard");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  vtkImageCheckerboard *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCheckerboard();
      }
    else
      {
      tempr = op->vtkCheckerboardRepresentation::GetCheckerboard();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_SetImageActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

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
      op->vtkCheckerboardRepresentation::SetImageActor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_GetImageActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

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
      tempr = op->vtkCheckerboardRepresentation::GetImageActor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_SetCornerOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCornerOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCornerOffset(temp0);
      }
    else
      {
      op->vtkCheckerboardRepresentation::SetCornerOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_GetCornerOffsetMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerOffsetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCornerOffsetMinValue();
      }
    else
      {
      tempr = op->vtkCheckerboardRepresentation::GetCornerOffsetMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_GetCornerOffsetMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerOffsetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCornerOffsetMaxValue();
      }
    else
      {
      tempr = op->vtkCheckerboardRepresentation::GetCornerOffsetMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_GetCornerOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCornerOffset();
      }
    else
      {
      tempr = op->vtkCheckerboardRepresentation::GetCornerOffset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_SliderValueChanged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SliderValueChanged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SliderValueChanged(temp0);
      }
    else
      {
      op->vtkCheckerboardRepresentation::SliderValueChanged(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_SetTopRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTopRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  vtkSliderRepresentation3D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSliderRepresentation3D"))
    {
    if (ap.IsBound())
      {
      op->SetTopRepresentation(temp0);
      }
    else
      {
      op->vtkCheckerboardRepresentation::SetTopRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_SetRightRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  vtkSliderRepresentation3D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSliderRepresentation3D"))
    {
    if (ap.IsBound())
      {
      op->SetRightRepresentation(temp0);
      }
    else
      {
      op->vtkCheckerboardRepresentation::SetRightRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_SetBottomRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBottomRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  vtkSliderRepresentation3D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSliderRepresentation3D"))
    {
    if (ap.IsBound())
      {
      op->SetBottomRepresentation(temp0);
      }
    else
      {
      op->vtkCheckerboardRepresentation::SetBottomRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_SetLeftRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  vtkSliderRepresentation3D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSliderRepresentation3D"))
    {
    if (ap.IsBound())
      {
      op->SetLeftRepresentation(temp0);
      }
    else
      {
      op->vtkCheckerboardRepresentation::SetLeftRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_GetTopRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTopRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  vtkSliderRepresentation3D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTopRepresentation();
      }
    else
      {
      tempr = op->vtkCheckerboardRepresentation::GetTopRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_GetRightRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  vtkSliderRepresentation3D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRightRepresentation();
      }
    else
      {
      tempr = op->vtkCheckerboardRepresentation::GetRightRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_GetBottomRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBottomRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  vtkSliderRepresentation3D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBottomRepresentation();
      }
    else
      {
      tempr = op->vtkCheckerboardRepresentation::GetBottomRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_GetLeftRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  vtkSliderRepresentation3D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLeftRepresentation();
      }
    else
      {
      tempr = op->vtkCheckerboardRepresentation::GetLeftRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkCheckerboardRepresentation::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  vtkPropCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
    {
    if (ap.IsBound())
      {
      op->GetActors(temp0);
      }
    else
      {
      op->vtkCheckerboardRepresentation::GetActors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

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
      op->vtkCheckerboardRepresentation::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

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
      tempr = op->vtkCheckerboardRepresentation::RenderOverlay(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

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
      tempr = op->vtkCheckerboardRepresentation::RenderOpaqueGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

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
      tempr = op->vtkCheckerboardRepresentation::RenderTranslucentPolygonalGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

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
      tempr = op->vtkCheckerboardRepresentation::HasTranslucentPolygonalGeometry();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCheckerboardRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkCheckerboardRepresentation_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK methods.\n"},
  {(char*)"IsA", PyvtkCheckerboardRepresentation_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK methods.\n"},
  {(char*)"NewInstance", PyvtkCheckerboardRepresentation_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCheckerboardRepresentation\nC++: vtkCheckerboardRepresentation *NewInstance()\n\nStandard VTK methods.\n"},
  {(char*)"SafeDownCast", PyvtkCheckerboardRepresentation_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCheckerboardRepresentation\nC++: vtkCheckerboardRepresentation *SafeDownCast(vtkObject* o)\n\nStandard VTK methods.\n"},
  {(char*)"SetCheckerboard", PyvtkCheckerboardRepresentation_SetCheckerboard, 1,
   (char*)"V.SetCheckerboard(vtkImageCheckerboard)\nC++: void SetCheckerboard(vtkImageCheckerboard *chkrbrd)\n\nSpecify an instance of vtkImageCheckerboard to manipulate.\n"},
  {(char*)"GetCheckerboard", PyvtkCheckerboardRepresentation_GetCheckerboard, 1,
   (char*)"V.GetCheckerboard() -> vtkImageCheckerboard\nC++: vtkImageCheckerboard *GetCheckerboard()\n\nSpecify an instance of vtkImageCheckerboard to manipulate.\n"},
  {(char*)"SetImageActor", PyvtkCheckerboardRepresentation_SetImageActor, 1,
   (char*)"V.SetImageActor(vtkImageActor)\nC++: void SetImageActor(vtkImageActor *imageActor)\n\nSpecify an instance of vtkImageActor to decorate.\n"},
  {(char*)"GetImageActor", PyvtkCheckerboardRepresentation_GetImageActor, 1,
   (char*)"V.GetImageActor() -> vtkImageActor\nC++: vtkImageActor *GetImageActor()\n\nSpecify an instance of vtkImageActor to decorate.\n"},
  {(char*)"SetCornerOffset", PyvtkCheckerboardRepresentation_SetCornerOffset, 1,
   (char*)"V.SetCornerOffset(float)\nC++: void SetCornerOffset(double)\n\nSpecify the offset of the ends of the sliders (on the boundary\nedges of the image) from the corner of the image. The offset is\nexpressed as a normalized fraction of the border edges.\n"},
  {(char*)"GetCornerOffsetMinValue", PyvtkCheckerboardRepresentation_GetCornerOffsetMinValue, 1,
   (char*)"V.GetCornerOffsetMinValue() -> float\nC++: double GetCornerOffsetMinValue()\n\nSpecify the offset of the ends of the sliders (on the boundary\nedges of the image) from the corner of the image. The offset is\nexpressed as a normalized fraction of the border edges.\n"},
  {(char*)"GetCornerOffsetMaxValue", PyvtkCheckerboardRepresentation_GetCornerOffsetMaxValue, 1,
   (char*)"V.GetCornerOffsetMaxValue() -> float\nC++: double GetCornerOffsetMaxValue()\n\nSpecify the offset of the ends of the sliders (on the boundary\nedges of the image) from the corner of the image. The offset is\nexpressed as a normalized fraction of the border edges.\n"},
  {(char*)"GetCornerOffset", PyvtkCheckerboardRepresentation_GetCornerOffset, 1,
   (char*)"V.GetCornerOffset() -> float\nC++: double GetCornerOffset()\n\nSpecify the offset of the ends of the sliders (on the boundary\nedges of the image) from the corner of the image. The offset is\nexpressed as a normalized fraction of the border edges.\n"},
  {(char*)"SliderValueChanged", PyvtkCheckerboardRepresentation_SliderValueChanged, 1,
   (char*)"V.SliderValueChanged(int)\nC++: void SliderValueChanged(int sliderNum)\n\nThis method is invoked by the vtkCheckerboardWidget() when a\nvalue of some slider has changed.\n"},
  {(char*)"SetTopRepresentation", PyvtkCheckerboardRepresentation_SetTopRepresentation, 1,
   (char*)"V.SetTopRepresentation(vtkSliderRepresentation3D)\nC++: void SetTopRepresentation(vtkSliderRepresentation3D *)\n\nSet and get the instances of vtkSliderRepresention used to\nimplement this representation. Normally default representations\nare created, but you can specify the ones you want to use.\n"},
  {(char*)"SetRightRepresentation", PyvtkCheckerboardRepresentation_SetRightRepresentation, 1,
   (char*)"V.SetRightRepresentation(vtkSliderRepresentation3D)\nC++: void SetRightRepresentation(vtkSliderRepresentation3D *)\n\nSet and get the instances of vtkSliderRepresention used to\nimplement this representation. Normally default representations\nare created, but you can specify the ones you want to use.\n"},
  {(char*)"SetBottomRepresentation", PyvtkCheckerboardRepresentation_SetBottomRepresentation, 1,
   (char*)"V.SetBottomRepresentation(vtkSliderRepresentation3D)\nC++: void SetBottomRepresentation(vtkSliderRepresentation3D *)\n\nSet and get the instances of vtkSliderRepresention used to\nimplement this representation. Normally default representations\nare created, but you can specify the ones you want to use.\n"},
  {(char*)"SetLeftRepresentation", PyvtkCheckerboardRepresentation_SetLeftRepresentation, 1,
   (char*)"V.SetLeftRepresentation(vtkSliderRepresentation3D)\nC++: void SetLeftRepresentation(vtkSliderRepresentation3D *)\n\nSet and get the instances of vtkSliderRepresention used to\nimplement this representation. Normally default representations\nare created, but you can specify the ones you want to use.\n"},
  {(char*)"GetTopRepresentation", PyvtkCheckerboardRepresentation_GetTopRepresentation, 1,
   (char*)"V.GetTopRepresentation() -> vtkSliderRepresentation3D\nC++: vtkSliderRepresentation3D *GetTopRepresentation()\n\nSet and get the instances of vtkSliderRepresention used to\nimplement this representation. Normally default representations\nare created, but you can specify the ones you want to use.\n"},
  {(char*)"GetRightRepresentation", PyvtkCheckerboardRepresentation_GetRightRepresentation, 1,
   (char*)"V.GetRightRepresentation() -> vtkSliderRepresentation3D\nC++: vtkSliderRepresentation3D *GetRightRepresentation()\n\nSet and get the instances of vtkSliderRepresention used to\nimplement this representation. Normally default representations\nare created, but you can specify the ones you want to use.\n"},
  {(char*)"GetBottomRepresentation", PyvtkCheckerboardRepresentation_GetBottomRepresentation, 1,
   (char*)"V.GetBottomRepresentation() -> vtkSliderRepresentation3D\nC++: vtkSliderRepresentation3D *GetBottomRepresentation()\n\nSet and get the instances of vtkSliderRepresention used to\nimplement this representation. Normally default representations\nare created, but you can specify the ones you want to use.\n"},
  {(char*)"GetLeftRepresentation", PyvtkCheckerboardRepresentation_GetLeftRepresentation, 1,
   (char*)"V.GetLeftRepresentation() -> vtkSliderRepresentation3D\nC++: vtkSliderRepresentation3D *GetLeftRepresentation()\n\nSet and get the instances of vtkSliderRepresention used to\nimplement this representation. Normally default representations\nare created, but you can specify the ones you want to use.\n"},
  {(char*)"BuildRepresentation", PyvtkCheckerboardRepresentation_BuildRepresentation, 1,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nMethods required by superclass.\n"},
  {(char*)"GetActors", PyvtkCheckerboardRepresentation_GetActors, 1,
   (char*)"V.GetActors(vtkPropCollection)\nC++: virtual void GetActors(vtkPropCollection *)\n\nMethods required by superclass.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkCheckerboardRepresentation_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *w)\n\nMethods required by superclass.\n"},
  {(char*)"RenderOverlay", PyvtkCheckerboardRepresentation_RenderOverlay, 1,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: virtual int RenderOverlay(vtkViewport *viewport)\n\nMethods required by superclass.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkCheckerboardRepresentation_RenderOpaqueGeometry, 1,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *viewport)\n\nMethods required by superclass.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkCheckerboardRepresentation_RenderTranslucentPolygonalGeometry, 1,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(\n    vtkViewport *viewport)\n\nMethods required by superclass.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkCheckerboardRepresentation_HasTranslucentPolygonalGeometry, 1,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nMethods required by superclass.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCheckerboardRepresentation_StaticNew()
{
  return vtkCheckerboardRepresentation::New();
}

PyObject *PyVTKClass_vtkCheckerboardRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCheckerboardRepresentation_StaticNew,
    PyvtkCheckerboardRepresentation_Methods,
    "vtkCheckerboardRepresentation", modulename,
    NULL, NULL,
    PyvtkCheckerboardRepresentation_Doc(),
    PyVTKClass_vtkWidgetRepresentationNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"TopSlider", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"RightSlider", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"BottomSlider", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"LeftSlider", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkCheckerboardRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkCheckerboardRepresentation - represent the vtkCheckerboardWidget\n\n",
    "Superclass: vtkWidgetRepresentation\n\n",
    "The vtkCheckerboardRepresentation is used to implement the\nrepresentation of the vtkCheckerboardWidget. The user can adjust the\nnumber of divisions in each of the i-j directions in a 2D image. A\nframe appears around the vtkImageActor with sliders along each side\nof the frame. The user can interactively adjust the sliders to the\ndesired number of checkerboard subdivisions. The representation uses\nf",
    "our instances of vtkSliderRepresentation3D to implement itself.\n\nSee Also:\n\nvtkCheckerboardWidget vtkImageCheckerboard vtkImageActor\nvtkSliderWidget vtkRectilinearWipeWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCheckerboardRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCheckerboardRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCheckerboardRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

