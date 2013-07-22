// python wrapper for vtkAxesTransformWidget
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
#include "vtkAxesTransformWidget.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkAxesTransformWidget(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkAxesTransformWidget(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkAxesTransformWidgetNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkAxesTransformWidgetNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAbstractWidgetNew
extern "C" { PyObject *PyVTKClass_vtkAbstractWidgetNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractWidgetNew
#endif

static const char **PyvtkAxesTransformWidget_Doc();


static PyObject *
PyvtkAxesTransformWidget_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformWidget *op = static_cast<vtkAxesTransformWidget *>(vp);

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
      tempr = op->vtkAxesTransformWidget::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesTransformWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformWidget *op = static_cast<vtkAxesTransformWidget *>(vp);

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
      tempr = op->vtkAxesTransformWidget::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesTransformWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformWidget *op = static_cast<vtkAxesTransformWidget *>(vp);

  vtkAxesTransformWidget *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkAxesTransformWidget::NewInstance();
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
PyvtkAxesTransformWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkAxesTransformWidget *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkAxesTransformWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesTransformWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformWidget *op = static_cast<vtkAxesTransformWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnabled(temp0);
      }
    else
      {
      op->vtkAxesTransformWidget::SetEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxesTransformWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformWidget *op = static_cast<vtkAxesTransformWidget *>(vp);

  vtkAxesTransformRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAxesTransformRepresentation"))
    {
    if (ap.IsBound())
      {
      op->SetRepresentation(temp0);
      }
    else
      {
      op->vtkAxesTransformWidget::SetRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxesTransformWidget_GetLineRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformWidget *op = static_cast<vtkAxesTransformWidget *>(vp);

  vtkAxesTransformRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLineRepresentation();
      }
    else
      {
      tempr = op->vtkAxesTransformWidget::GetLineRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxesTransformWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformWidget *op = static_cast<vtkAxesTransformWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultRepresentation();
      }
    else
      {
      op->vtkAxesTransformWidget::CreateDefaultRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxesTransformWidget_SetProcessEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformWidget *op = static_cast<vtkAxesTransformWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProcessEvents(temp0);
      }
    else
      {
      op->vtkAxesTransformWidget::SetProcessEvents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAxesTransformWidget_Methods[] = {
  {(char*)"GetClassName", PyvtkAxesTransformWidget_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard vtkObject methods\n"},
  {(char*)"IsA", PyvtkAxesTransformWidget_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard vtkObject methods\n"},
  {(char*)"NewInstance", PyvtkAxesTransformWidget_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkAxesTransformWidget\nC++: vtkAxesTransformWidget *NewInstance()\n\nStandard vtkObject methods\n"},
  {(char*)"SafeDownCast", PyvtkAxesTransformWidget_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAxesTransformWidget\nC++: vtkAxesTransformWidget *SafeDownCast(vtkObject* o)\n\nStandard vtkObject methods\n"},
  {(char*)"SetEnabled", PyvtkAxesTransformWidget_SetEnabled, 1,
   (char*)"V.SetEnabled(int)\nC++: virtual void SetEnabled(int enabling)\n\nOverride superclasses' SetEnabled() method because the line\nwidget must enable its internal handle widgets.\n"},
  {(char*)"SetRepresentation", PyvtkAxesTransformWidget_SetRepresentation, 1,
   (char*)"V.SetRepresentation(vtkAxesTransformRepresentation)\nC++: void SetRepresentation(vtkAxesTransformRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {(char*)"GetLineRepresentation", PyvtkAxesTransformWidget_GetLineRepresentation, 1,
   (char*)"V.GetLineRepresentation() -> vtkAxesTransformRepresentation\nC++: vtkAxesTransformRepresentation *GetLineRepresentation()\n\nReturn the representation as a vtkAxesTransformRepresentation.\n"},
  {(char*)"CreateDefaultRepresentation", PyvtkAxesTransformWidget_CreateDefaultRepresentation, 1,
   (char*)"V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation()\n\nCreate the default widget representation if one is not set.\n"},
  {(char*)"SetProcessEvents", PyvtkAxesTransformWidget_SetProcessEvents, 1,
   (char*)"V.SetProcessEvents(int)\nC++: virtual void SetProcessEvents(int)\n\nMethods to change the whether the widget responds to interaction.\nOverridden to pass the state to component widgets.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAxesTransformWidget_StaticNew()
{
  return vtkAxesTransformWidget::New();
}

PyObject *PyVTKClass_vtkAxesTransformWidgetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAxesTransformWidget_StaticNew,
    PyvtkAxesTransformWidget_Methods,
    "vtkAxesTransformWidget", modulename,
    NULL, NULL,
    PyvtkAxesTransformWidget_Doc(),
    PyVTKClass_vtkAbstractWidgetNew(modulename));
  return cls;
}

const char **PyvtkAxesTransformWidget_Doc()
{
  static const char *docstring[] = {
    "vtkAxesTransformWidget - 3D widget for performing 3D transformations\naround an axes\n\n",
    "Superclass: vtkAbstractWidget\n\n",
    "This 3D widget defines an axes which is used to guide transformation.\nThe widget can translate, scale, and rotate around one of the three\ncoordinate axes. The widget consists of a handle at the origin (used\nfor translation), three axes (around which rotations occur), and\nthree end arrows (or cones depending on the representation) that can\nbe stretched to scale an object.  Optionally a text label c",
    "an be used\nto indicate the amount of the transformation.\n\nTo use this widget, you generally pair it with a\nvtkAxesTransformRepresentation (or a subclass). Various options are\navailable in the representation for controlling how the widget\nappears, and how the widget functions.\n\nEvent Bindings:\n\nBy default, the widget responds to the following VTK events (i.e., it\nwatches the vtkRenderWindowInteract",
    "or for these events):\n\nIf the origin handle is selected:\n  LeftButtonPressEvent - activate the associated handle widget\n  LeftButtonReleaseEvent - release the handle widget associated with\nthe point\n  MouseMoveEvent - move the handle and hence the origin and the\nwidget If one of the lines is selected:\n  LeftButtonPressEvent - activate rotation by selecting one of the\nthree axes.\n  LeftButtonReleas",
    "eEvent - end rotation\n  MouseMoveEvent - moving along the selected axis causes rotation to\noccur. If one of the arrows/cones is selected:\n  LeftButtonPressEvent - activate scaling by selecting the ends of\none of the three axes.\n  LeftButtonReleaseEvent - end scaling\n  MouseMoveEvent - moving along the selected axis causes scaling to\noccur. \n\nNote that the event bindings described above can be chan",
    "ged using\nthis class's vtkWidgetEventTranslator. This class translates VTK\nevents into the vtkAxesTransformWidget's widget events:\n\n\n  vtkWidgetEvent::Select -- some part of the widget has been selected\n  vtkWidgetEvent::EndSelect -- the selection process has completed\n  vtkWidgetEvent::Move -- a request for slider motion has been\ninvoked \n\nIn turn, when these widget events are processed, the\nvtkA",
    "xesTransformWidget invokes the following VTK events on itself\n(which observers can listen for):\n\n\n  vtkCommand::StartInteractionEvent (on vtkWidgetEvent::Select)\n  vtkCommand::EndInteractionEvent (on vtkWidgetEvent::EndSelect)\n  vtkCommand::InteractionEvent (on vtkWidgetEvent::Move) \n\nCaveats:\n\nNote that the widget can be picked even when it is \"behind\" other\nactors.  This is an intended feature a",
    "nd not a bug.\n\nThis class, and vtkAxesTransformRepresentation, are next generation\nVTK widgets.\n\nSee Also:\n\nvtkAxesTransformRepresentation vtkAffineWidget vtkBoxWidget2\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAxesTransformWidget(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAxesTransformWidgetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAxesTransformWidget", o) != 0)
    {
    Py_DECREF(o);
    }

}

