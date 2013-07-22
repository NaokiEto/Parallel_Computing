// python wrapper for vtkSliderRepresentation2D
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
#include "vtkSliderRepresentation2D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSliderRepresentation2D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSliderRepresentation2D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSliderRepresentation2DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSliderRepresentation2DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkSliderRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkSliderRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkSliderRepresentationNew
#endif

static const char **PyvtkSliderRepresentation2D_Doc();


static PyObject *
PyvtkSliderRepresentation2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation2D *op = static_cast<vtkSliderRepresentation2D *>(vp);

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
      tempr = op->vtkSliderRepresentation2D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation2D *op = static_cast<vtkSliderRepresentation2D *>(vp);

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
      tempr = op->vtkSliderRepresentation2D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation2D *op = static_cast<vtkSliderRepresentation2D *>(vp);

  vtkSliderRepresentation2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSliderRepresentation2D::NewInstance();
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
PyvtkSliderRepresentation2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSliderRepresentation2D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSliderRepresentation2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation2D_GetPoint1Coordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1Coordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation2D *op = static_cast<vtkSliderRepresentation2D *>(vp);

  vtkCoordinate *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPoint1Coordinate();
      }
    else
      {
      tempr = op->vtkSliderRepresentation2D::GetPoint1Coordinate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation2D_GetPoint2Coordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2Coordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation2D *op = static_cast<vtkSliderRepresentation2D *>(vp);

  vtkCoordinate *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPoint2Coordinate();
      }
    else
      {
      tempr = op->vtkSliderRepresentation2D::GetPoint2Coordinate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation2D_SetTitleText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation2D *op = static_cast<vtkSliderRepresentation2D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTitleText(temp0);
      }
    else
      {
      op->vtkSliderRepresentation2D::SetTitleText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation2D_GetTitleText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation2D *op = static_cast<vtkSliderRepresentation2D *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTitleText();
      }
    else
      {
      tempr = op->vtkSliderRepresentation2D::GetTitleText();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation2D_GetSliderProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliderProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation2D *op = static_cast<vtkSliderRepresentation2D *>(vp);

  vtkProperty2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSliderProperty();
      }
    else
      {
      tempr = op->vtkSliderRepresentation2D::GetSliderProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation2D_GetTubeProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTubeProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation2D *op = static_cast<vtkSliderRepresentation2D *>(vp);

  vtkProperty2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTubeProperty();
      }
    else
      {
      tempr = op->vtkSliderRepresentation2D::GetTubeProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation2D_GetCapProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCapProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation2D *op = static_cast<vtkSliderRepresentation2D *>(vp);

  vtkProperty2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCapProperty();
      }
    else
      {
      tempr = op->vtkSliderRepresentation2D::GetCapProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation2D_GetSelectedProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation2D *op = static_cast<vtkSliderRepresentation2D *>(vp);

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
      tempr = op->vtkSliderRepresentation2D::GetSelectedProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation2D_GetLabelProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation2D *op = static_cast<vtkSliderRepresentation2D *>(vp);

  vtkTextProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLabelProperty();
      }
    else
      {
      tempr = op->vtkSliderRepresentation2D::GetLabelProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation2D_GetTitleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation2D *op = static_cast<vtkSliderRepresentation2D *>(vp);

  vtkTextProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTitleProperty();
      }
    else
      {
      tempr = op->vtkSliderRepresentation2D::GetTitleProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation2D_PlaceWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation2D *op = static_cast<vtkSliderRepresentation2D *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->PlaceWidget(temp0);
      }
    else
      {
      op->vtkSliderRepresentation2D::PlaceWidget(temp0);
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
PyvtkSliderRepresentation2D_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation2D *op = static_cast<vtkSliderRepresentation2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkSliderRepresentation2D::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation2D_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation2D *op = static_cast<vtkSliderRepresentation2D *>(vp);

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
      op->vtkSliderRepresentation2D::StartWidgetInteraction(temp0);
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
PyvtkSliderRepresentation2D_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation2D *op = static_cast<vtkSliderRepresentation2D *>(vp);

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
      op->vtkSliderRepresentation2D::WidgetInteraction(temp0);
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
PyvtkSliderRepresentation2D_Highlight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Highlight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation2D *op = static_cast<vtkSliderRepresentation2D *>(vp);

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
      op->vtkSliderRepresentation2D::Highlight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation2D_GetActors2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation2D *op = static_cast<vtkSliderRepresentation2D *>(vp);

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
      op->vtkSliderRepresentation2D::GetActors2D(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation2D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation2D *op = static_cast<vtkSliderRepresentation2D *>(vp);

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
      op->vtkSliderRepresentation2D::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation2D_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation2D *op = static_cast<vtkSliderRepresentation2D *>(vp);

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
      tempr = op->vtkSliderRepresentation2D::RenderOverlay(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation2D_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation2D *op = static_cast<vtkSliderRepresentation2D *>(vp);

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
      tempr = op->vtkSliderRepresentation2D::RenderOpaqueGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSliderRepresentation2D_Methods[] = {
  {(char*)"GetClassName", PyvtkSliderRepresentation2D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for the class.\n"},
  {(char*)"IsA", PyvtkSliderRepresentation2D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for the class.\n"},
  {(char*)"NewInstance", PyvtkSliderRepresentation2D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSliderRepresentation2D\nC++: vtkSliderRepresentation2D *NewInstance()\n\nStandard methods for the class.\n"},
  {(char*)"SafeDownCast", PyvtkSliderRepresentation2D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSliderRepresentation2D\nC++: vtkSliderRepresentation2D *SafeDownCast(vtkObject* o)\n\nStandard methods for the class.\n"},
  {(char*)"GetPoint1Coordinate", PyvtkSliderRepresentation2D_GetPoint1Coordinate, 1,
   (char*)"V.GetPoint1Coordinate() -> vtkCoordinate\nC++: vtkCoordinate *GetPoint1Coordinate()\n\nPosition the first end point of the slider. Note that this point\nis an instance of vtkCoordinate, meaning that Point 1 can be\nspecified in a variety of coordinate systems, and can even be\nrelative to another point. To set the point, you'll want to get\nthe Point1Coordinate and then invoke the necessary methods to put\nit into the correct coordinate system and set the correct initial\nvalue.\n"},
  {(char*)"GetPoint2Coordinate", PyvtkSliderRepresentation2D_GetPoint2Coordinate, 1,
   (char*)"V.GetPoint2Coordinate() -> vtkCoordinate\nC++: vtkCoordinate *GetPoint2Coordinate()\n\nPosition the second end point of the slider. Note that this point\nis an instance of vtkCoordinate, meaning that Point 1 can be\nspecified in a variety of coordinate systems, and can even be\nrelative to another point. To set the point, you'll want to get\nthe Point2Coordinate and then invoke the necessary methods to put\nit into the correct coordinate system and set the correct initial\nvalue.\n"},
  {(char*)"SetTitleText", PyvtkSliderRepresentation2D_SetTitleText, 1,
   (char*)"V.SetTitleText(string)\nC++: virtual void SetTitleText(const char *)\n\nSpecify the label text for this widget. If the value is not set,\nor set to the empty string \"\", then the label text is not\ndisplayed.\n"},
  {(char*)"GetTitleText", PyvtkSliderRepresentation2D_GetTitleText, 1,
   (char*)"V.GetTitleText() -> string\nC++: virtual const char *GetTitleText()\n\nSpecify the label text for this widget. If the value is not set,\nor set to the empty string \"\", then the label text is not\ndisplayed.\n"},
  {(char*)"GetSliderProperty", PyvtkSliderRepresentation2D_GetSliderProperty, 1,
   (char*)"V.GetSliderProperty() -> vtkProperty2D\nC++: vtkProperty2D *GetSliderProperty()\n\nGet the slider properties. The properties of the slider when\nselected and unselected can be manipulated.\n"},
  {(char*)"GetTubeProperty", PyvtkSliderRepresentation2D_GetTubeProperty, 1,
   (char*)"V.GetTubeProperty() -> vtkProperty2D\nC++: vtkProperty2D *GetTubeProperty()\n\nGet the properties for the tube and end caps.\n"},
  {(char*)"GetCapProperty", PyvtkSliderRepresentation2D_GetCapProperty, 1,
   (char*)"V.GetCapProperty() -> vtkProperty2D\nC++: vtkProperty2D *GetCapProperty()\n\nGet the properties for the tube and end caps.\n"},
  {(char*)"GetSelectedProperty", PyvtkSliderRepresentation2D_GetSelectedProperty, 1,
   (char*)"V.GetSelectedProperty() -> vtkProperty2D\nC++: vtkProperty2D *GetSelectedProperty()\n\nGet the selection property. This property is used to modify the\nappearance of selected objects (e.g., the slider).\n"},
  {(char*)"GetLabelProperty", PyvtkSliderRepresentation2D_GetLabelProperty, 1,
   (char*)"V.GetLabelProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetLabelProperty()\n\nSet/Get the properties for the label and title text.\n"},
  {(char*)"GetTitleProperty", PyvtkSliderRepresentation2D_GetTitleProperty, 1,
   (char*)"V.GetTitleProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetTitleProperty()\n\nSet/Get the properties for the label and title text.\n"},
  {(char*)"PlaceWidget", PyvtkSliderRepresentation2D_PlaceWidget, 1,
   (char*)"V.PlaceWidget([float, float, float, float, float, float])\nC++: virtual void PlaceWidget(double bounds[6])\n\nMethods to interface with the vtkSliderWidget. The PlaceWidget()\nmethod assumes that the parameter bounds[6] specifies the\nlocation in display space where the widget should be placed.\n"},
  {(char*)"BuildRepresentation", PyvtkSliderRepresentation2D_BuildRepresentation, 1,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nMethods to interface with the vtkSliderWidget. The PlaceWidget()\nmethod assumes that the parameter bounds[6] specifies the\nlocation in display space where the widget should be placed.\n"},
  {(char*)"StartWidgetInteraction", PyvtkSliderRepresentation2D_StartWidgetInteraction, 1,
   (char*)"V.StartWidgetInteraction([float, float])\nC++: virtual void StartWidgetInteraction(double eventPos[2])\n\nMethods to interface with the vtkSliderWidget. The PlaceWidget()\nmethod assumes that the parameter bounds[6] specifies the\nlocation in display space where the widget should be placed.\n"},
  {(char*)"WidgetInteraction", PyvtkSliderRepresentation2D_WidgetInteraction, 1,
   (char*)"V.WidgetInteraction([float, float])\nC++: virtual void WidgetInteraction(double newEventPos[2])\n\nMethods to interface with the vtkSliderWidget. The PlaceWidget()\nmethod assumes that the parameter bounds[6] specifies the\nlocation in display space where the widget should be placed.\n"},
  {(char*)"Highlight", PyvtkSliderRepresentation2D_Highlight, 1,
   (char*)"V.Highlight(int)\nC++: virtual void Highlight(int)\n\nMethods to interface with the vtkSliderWidget. The PlaceWidget()\nmethod assumes that the parameter bounds[6] specifies the\nlocation in display space where the widget should be placed.\n"},
  {(char*)"GetActors2D", PyvtkSliderRepresentation2D_GetActors2D, 1,
   (char*)"V.GetActors2D(vtkPropCollection)\nC++: virtual void GetActors2D(vtkPropCollection *)\n\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkSliderRepresentation2D_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\n"},
  {(char*)"RenderOverlay", PyvtkSliderRepresentation2D_RenderOverlay, 1,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: virtual int RenderOverlay(vtkViewport *)\n\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkSliderRepresentation2D_RenderOpaqueGeometry, 1,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSliderRepresentation2D_StaticNew()
{
  return vtkSliderRepresentation2D::New();
}

PyObject *PyVTKClass_vtkSliderRepresentation2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSliderRepresentation2D_StaticNew,
    PyvtkSliderRepresentation2D_Methods,
    "vtkSliderRepresentation2D", modulename,
    NULL, NULL,
    PyvtkSliderRepresentation2D_Doc(),
    PyVTKClass_vtkSliderRepresentationNew(modulename));
  return cls;
}

const char **PyvtkSliderRepresentation2D_Doc()
{
  static const char *docstring[] = {
    "vtkSliderRepresentation2D - provide the representation for a\nvtkSliderWidget with a 3D skin\n\n",
    "Superclass: vtkSliderRepresentation\n\n",
    "This class is used to represent and render a vtkSliderWidget. To use\nthis class, you must at a minimum specify the end points of the\nslider. Optional instance variable can be used to modify the\nappearance of the widget.\n\nSee Also:\n\nvtkSliderWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSliderRepresentation2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSliderRepresentation2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSliderRepresentation2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

