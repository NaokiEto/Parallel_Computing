// python wrapper for vtkPointHandleRepresentation2D
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
#include "vtkPointHandleRepresentation2D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPointHandleRepresentation2D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPointHandleRepresentation2D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPointHandleRepresentation2DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPointHandleRepresentation2DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkHandleRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkHandleRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkHandleRepresentationNew
#endif

static const char **PyvtkPointHandleRepresentation2D_Doc();


static PyObject *
PyvtkPointHandleRepresentation2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation2D *op = static_cast<vtkPointHandleRepresentation2D *>(vp);

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
      tempr = op->vtkPointHandleRepresentation2D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation2D *op = static_cast<vtkPointHandleRepresentation2D *>(vp);

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
      tempr = op->vtkPointHandleRepresentation2D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation2D *op = static_cast<vtkPointHandleRepresentation2D *>(vp);

  vtkPointHandleRepresentation2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPointHandleRepresentation2D::NewInstance();
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
PyvtkPointHandleRepresentation2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPointHandleRepresentation2D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPointHandleRepresentation2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation2D_SetCursorShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCursorShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation2D *op = static_cast<vtkPointHandleRepresentation2D *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->SetCursorShape(temp0);
      }
    else
      {
      op->vtkPointHandleRepresentation2D::SetCursorShape(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation2D_GetCursorShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation2D *op = static_cast<vtkPointHandleRepresentation2D *>(vp);

  vtkPolyData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCursorShape();
      }
    else
      {
      tempr = op->vtkPointHandleRepresentation2D::GetCursorShape();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation2D_SetDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation2D *op = static_cast<vtkPointHandleRepresentation2D *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetDisplayPosition(temp0);
      }
    else
      {
      op->vtkPointHandleRepresentation2D::SetDisplayPosition(temp0);
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
PyvtkPointHandleRepresentation2D_SetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation2D *op = static_cast<vtkPointHandleRepresentation2D *>(vp);

  vtkProperty2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty2D"))
    {
    if (ap.IsBound())
      {
      op->SetProperty(temp0);
      }
    else
      {
      op->vtkPointHandleRepresentation2D::SetProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation2D_SetSelectedProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation2D *op = static_cast<vtkPointHandleRepresentation2D *>(vp);

  vtkProperty2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty2D"))
    {
    if (ap.IsBound())
      {
      op->SetSelectedProperty(temp0);
      }
    else
      {
      op->vtkPointHandleRepresentation2D::SetSelectedProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation2D_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation2D *op = static_cast<vtkPointHandleRepresentation2D *>(vp);

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
      tempr = op->vtkPointHandleRepresentation2D::GetProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation2D_GetSelectedProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation2D *op = static_cast<vtkPointHandleRepresentation2D *>(vp);

  vtkProperty2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectedProperty();
      }
    else
      {
      tempr = op->vtkPointHandleRepresentation2D::GetSelectedProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation2D_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation2D *op = static_cast<vtkPointHandleRepresentation2D *>(vp);

  double *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBounds();
      }
    else
      {
      tempr = op->vtkPointHandleRepresentation2D::GetBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation2D_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation2D *op = static_cast<vtkPointHandleRepresentation2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkPointHandleRepresentation2D::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation2D_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation2D *op = static_cast<vtkPointHandleRepresentation2D *>(vp);

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
      op->vtkPointHandleRepresentation2D::StartWidgetInteraction(temp0);
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
PyvtkPointHandleRepresentation2D_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation2D *op = static_cast<vtkPointHandleRepresentation2D *>(vp);

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
      op->vtkPointHandleRepresentation2D::WidgetInteraction(temp0);
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
PyvtkPointHandleRepresentation2D_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation2D *op = static_cast<vtkPointHandleRepresentation2D *>(vp);

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
      tempr = op->vtkPointHandleRepresentation2D::ComputeInteractionState(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation2D_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation2D *op = static_cast<vtkPointHandleRepresentation2D *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkPointHandleRepresentation2D::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation2D_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation2D *op = static_cast<vtkPointHandleRepresentation2D *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkPointHandleRepresentation2D::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation2D_GetActors2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation2D *op = static_cast<vtkPointHandleRepresentation2D *>(vp);

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
      op->vtkPointHandleRepresentation2D::GetActors2D(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation2D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation2D *op = static_cast<vtkPointHandleRepresentation2D *>(vp);

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
      op->vtkPointHandleRepresentation2D::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation2D_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation2D *op = static_cast<vtkPointHandleRepresentation2D *>(vp);

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
      tempr = op->vtkPointHandleRepresentation2D::RenderOverlay(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation2D_Highlight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Highlight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation2D *op = static_cast<vtkPointHandleRepresentation2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Highlight(temp0);
      }
    else
      {
      op->vtkPointHandleRepresentation2D::Highlight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation2D_SetPointPlacer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointPlacer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation2D *op = static_cast<vtkPointHandleRepresentation2D *>(vp);

  vtkPointPlacer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPointPlacer"))
    {
    if (ap.IsBound())
      {
      op->SetPointPlacer(temp0);
      }
    else
      {
      op->vtkPointHandleRepresentation2D::SetPointPlacer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPointHandleRepresentation2D_Methods[] = {
  {(char*)"GetClassName", PyvtkPointHandleRepresentation2D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for instances of this class.\n"},
  {(char*)"IsA", PyvtkPointHandleRepresentation2D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for instances of this class.\n"},
  {(char*)"NewInstance", PyvtkPointHandleRepresentation2D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPointHandleRepresentation2D\nC++: vtkPointHandleRepresentation2D *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {(char*)"SafeDownCast", PyvtkPointHandleRepresentation2D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPointHandleRepresentation2D\nC++: vtkPointHandleRepresentation2D *SafeDownCast(vtkObject* o)\n\nStandard methods for instances of this class.\n"},
  {(char*)"SetCursorShape", PyvtkPointHandleRepresentation2D_SetCursorShape, 1,
   (char*)"V.SetCursorShape(vtkPolyData)\nC++: void SetCursorShape(vtkPolyData *cursorShape)\n\nSpecify the cursor shape with an instance of vtkPolyData. Note\nthat shape is assumed to be defined in the display coordinate\nsystem. By default a vtkCursor2D shape is used.\n"},
  {(char*)"GetCursorShape", PyvtkPointHandleRepresentation2D_GetCursorShape, 1,
   (char*)"V.GetCursorShape() -> vtkPolyData\nC++: vtkPolyData *GetCursorShape()\n\nSpecify the cursor shape with an instance of vtkPolyData. Note\nthat shape is assumed to be defined in the display coordinate\nsystem. By default a vtkCursor2D shape is used.\n"},
  {(char*)"SetDisplayPosition", PyvtkPointHandleRepresentation2D_SetDisplayPosition, 1,
   (char*)"V.SetDisplayPosition([float, float, float])\nC++: virtual void SetDisplayPosition(double xyz[3])\n\nSet/Get the position of the point in display coordinates.  This\noverloads the superclasses SetDisplayPosition in order to set the\nfocal point of the cursor.\n"},
  {(char*)"SetProperty", PyvtkPointHandleRepresentation2D_SetProperty, 1,
   (char*)"V.SetProperty(vtkProperty2D)\nC++: void SetProperty(vtkProperty2D *)\n\nSet/Get the handle properties when unselected and selected.\n"},
  {(char*)"SetSelectedProperty", PyvtkPointHandleRepresentation2D_SetSelectedProperty, 1,
   (char*)"V.SetSelectedProperty(vtkProperty2D)\nC++: void SetSelectedProperty(vtkProperty2D *)\n\nSet/Get the handle properties when unselected and selected.\n"},
  {(char*)"GetProperty", PyvtkPointHandleRepresentation2D_GetProperty, 1,
   (char*)"V.GetProperty() -> vtkProperty2D\nC++: vtkProperty2D *GetProperty()\n\nSet/Get the handle properties when unselected and selected.\n"},
  {(char*)"GetSelectedProperty", PyvtkPointHandleRepresentation2D_GetSelectedProperty, 1,
   (char*)"V.GetSelectedProperty() -> vtkProperty2D\nC++: vtkProperty2D *GetSelectedProperty()\n\nSet/Get the handle properties when unselected and selected.\n"},
  {(char*)"GetBounds", PyvtkPointHandleRepresentation2D_GetBounds, 1,
   (char*)"V.GetBounds() -> (float, float, float, float, float, float)\nC++: virtual double *GetBounds()\n\nSubclasses of vtkPointHandleRepresentation2D must implement these\nmethods. These are the methods that the widget and its\nrepresentation use to communicate with each other.\n"},
  {(char*)"BuildRepresentation", PyvtkPointHandleRepresentation2D_BuildRepresentation, 1,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nSubclasses of vtkPointHandleRepresentation2D must implement these\nmethods. These are the methods that the widget and its\nrepresentation use to communicate with each other.\n"},
  {(char*)"StartWidgetInteraction", PyvtkPointHandleRepresentation2D_StartWidgetInteraction, 1,
   (char*)"V.StartWidgetInteraction([float, float])\nC++: virtual void StartWidgetInteraction(double eventPos[2])\n\nSubclasses of vtkPointHandleRepresentation2D must implement these\nmethods. These are the methods that the widget and its\nrepresentation use to communicate with each other.\n"},
  {(char*)"WidgetInteraction", PyvtkPointHandleRepresentation2D_WidgetInteraction, 1,
   (char*)"V.WidgetInteraction([float, float])\nC++: virtual void WidgetInteraction(double eventPos[2])\n\nSubclasses of vtkPointHandleRepresentation2D must implement these\nmethods. These are the methods that the widget and its\nrepresentation use to communicate with each other.\n"},
  {(char*)"ComputeInteractionState", PyvtkPointHandleRepresentation2D_ComputeInteractionState, 1,
   (char*)"V.ComputeInteractionState(int, int, int) -> int\nC++: virtual int ComputeInteractionState(int X, int Y,\n    int modify=0)\n\nSubclasses of vtkPointHandleRepresentation2D must implement these\nmethods. These are the methods that the widget and its\nrepresentation use to communicate with each other.\n"},
  {(char*)"ShallowCopy", PyvtkPointHandleRepresentation2D_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkProp)\nC++: virtual void ShallowCopy(vtkProp *prop)\n\nMethods to make this class behave as a vtkProp.\n"},
  {(char*)"DeepCopy", PyvtkPointHandleRepresentation2D_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkProp)\nC++: virtual void DeepCopy(vtkProp *prop)\n\nMethods to make this class behave as a vtkProp.\n"},
  {(char*)"GetActors2D", PyvtkPointHandleRepresentation2D_GetActors2D, 1,
   (char*)"V.GetActors2D(vtkPropCollection)\nC++: virtual void GetActors2D(vtkPropCollection *)\n\nMethods to make this class behave as a vtkProp.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkPointHandleRepresentation2D_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nMethods to make this class behave as a vtkProp.\n"},
  {(char*)"RenderOverlay", PyvtkPointHandleRepresentation2D_RenderOverlay, 1,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: virtual int RenderOverlay(vtkViewport *viewport)\n\nMethods to make this class behave as a vtkProp.\n"},
  {(char*)"Highlight", PyvtkPointHandleRepresentation2D_Highlight, 1,
   (char*)"V.Highlight(int)\nC++: void Highlight(int highlight)\n\n"},
  {(char*)"SetPointPlacer", PyvtkPointHandleRepresentation2D_SetPointPlacer, 1,
   (char*)"V.SetPointPlacer(vtkPointPlacer)\nC++: virtual void SetPointPlacer(vtkPointPlacer *)\n\nOverride the superclass implementation. This class does not use a\npoint placer. Point placers dictate the placement of points in 3D\nspace. Since this class constrains points to lie in an overlay\nplane anyway, we don't care. Just returns.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPointHandleRepresentation2D_StaticNew()
{
  return vtkPointHandleRepresentation2D::New();
}

PyObject *PyVTKClass_vtkPointHandleRepresentation2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPointHandleRepresentation2D_StaticNew,
    PyvtkPointHandleRepresentation2D_Methods,
    "vtkPointHandleRepresentation2D", modulename,
    NULL, NULL,
    PyvtkPointHandleRepresentation2D_Doc(),
    PyVTKClass_vtkHandleRepresentationNew(modulename));
  return cls;
}

const char **PyvtkPointHandleRepresentation2D_Doc()
{
  static const char *docstring[] = {
    "vtkPointHandleRepresentation2D - represent the position of a point in\ndisplay coordinates\n\n",
    "Superclass: vtkHandleRepresentation\n\n",
    "This class is used to represent a vtkHandleWidget. It represents a\nposition in 2D world coordinates using a x-y cursor (the cursor\ndefined by an instance of vtkPolyData and generated by a\nvtkPolyDataAlgorithm).\n\nSee Also:\n\nvtkHandleRepresentation vtkHandleWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPointHandleRepresentation2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPointHandleRepresentation2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPointHandleRepresentation2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

