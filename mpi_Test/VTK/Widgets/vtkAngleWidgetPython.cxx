// python wrapper for vtkAngleWidget
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
#include "vtkAngleWidget.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkAngleWidget(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkAngleWidget(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkAngleWidgetNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkAngleWidgetNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAbstractWidgetNew
extern "C" { PyObject *PyVTKClass_vtkAbstractWidgetNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractWidgetNew
#endif

static const char **PyvtkAngleWidget_Doc();


static PyObject *
PyvtkAngleWidget_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleWidget *op = static_cast<vtkAngleWidget *>(vp);

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
      tempr = op->vtkAngleWidget::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAngleWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleWidget *op = static_cast<vtkAngleWidget *>(vp);

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
      tempr = op->vtkAngleWidget::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAngleWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleWidget *op = static_cast<vtkAngleWidget *>(vp);

  vtkAngleWidget *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkAngleWidget::NewInstance();
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
PyvtkAngleWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkAngleWidget *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkAngleWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAngleWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleWidget *op = static_cast<vtkAngleWidget *>(vp);

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
      op->vtkAngleWidget::SetEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAngleWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleWidget *op = static_cast<vtkAngleWidget *>(vp);

  vtkAngleRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAngleRepresentation"))
    {
    if (ap.IsBound())
      {
      op->SetRepresentation(temp0);
      }
    else
      {
      op->vtkAngleWidget::SetRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAngleWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleWidget *op = static_cast<vtkAngleWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultRepresentation();
      }
    else
      {
      op->vtkAngleWidget::CreateDefaultRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAngleWidget_GetAngleRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngleRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleWidget *op = static_cast<vtkAngleWidget *>(vp);

  vtkAngleRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAngleRepresentation();
      }
    else
      {
      tempr = op->vtkAngleWidget::GetAngleRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAngleWidget_IsAngleValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAngleValid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleWidget *op = static_cast<vtkAngleWidget *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsAngleValid();
      }
    else
      {
      tempr = op->vtkAngleWidget::IsAngleValid();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAngleWidget_SetProcessEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleWidget *op = static_cast<vtkAngleWidget *>(vp);

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
      op->vtkAngleWidget::SetProcessEvents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAngleWidget_SetWidgetStateToStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidgetStateToStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleWidget *op = static_cast<vtkAngleWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetWidgetStateToStart();
      }
    else
      {
      op->vtkAngleWidget::SetWidgetStateToStart();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAngleWidget_SetWidgetStateToManipulate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidgetStateToManipulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleWidget *op = static_cast<vtkAngleWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetWidgetStateToManipulate();
      }
    else
      {
      op->vtkAngleWidget::SetWidgetStateToManipulate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAngleWidget_GetWidgetState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidgetState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleWidget *op = static_cast<vtkAngleWidget *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWidgetState();
      }
    else
      {
      tempr = op->vtkAngleWidget::GetWidgetState();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAngleWidget_Methods[] = {
  {(char*)"GetClassName", PyvtkAngleWidget_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for a VTK class.\n"},
  {(char*)"IsA", PyvtkAngleWidget_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for a VTK class.\n"},
  {(char*)"NewInstance", PyvtkAngleWidget_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkAngleWidget\nC++: vtkAngleWidget *NewInstance()\n\nStandard methods for a VTK class.\n"},
  {(char*)"SafeDownCast", PyvtkAngleWidget_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAngleWidget\nC++: vtkAngleWidget *SafeDownCast(vtkObject* o)\n\nStandard methods for a VTK class.\n"},
  {(char*)"SetEnabled", PyvtkAngleWidget_SetEnabled, 1,
   (char*)"V.SetEnabled(int)\nC++: virtual void SetEnabled(int)\n\nThe method for activiating and deactiviating this widget. This\nmethod must be overridden because it is a composite widget and\ndoes more than its superclasses' vtkAbstractWidget::SetEnabled()\nmethod.\n"},
  {(char*)"SetRepresentation", PyvtkAngleWidget_SetRepresentation, 1,
   (char*)"V.SetRepresentation(vtkAngleRepresentation)\nC++: void SetRepresentation(vtkAngleRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {(char*)"CreateDefaultRepresentation", PyvtkAngleWidget_CreateDefaultRepresentation, 1,
   (char*)"V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation()\n\nCreate the default widget representation if one is not set.\n"},
  {(char*)"GetAngleRepresentation", PyvtkAngleWidget_GetAngleRepresentation, 1,
   (char*)"V.GetAngleRepresentation() -> vtkAngleRepresentation\nC++: vtkAngleRepresentation *GetAngleRepresentation()\n\nReturn the representation as a vtkAngleRepresentation.\n"},
  {(char*)"IsAngleValid", PyvtkAngleWidget_IsAngleValid, 1,
   (char*)"V.IsAngleValid() -> int\nC++: int IsAngleValid()\n\nA flag indicates whether the angle is valid. The angle value only\nbecomes valid after two of the three points are placed.\n"},
  {(char*)"SetProcessEvents", PyvtkAngleWidget_SetProcessEvents, 1,
   (char*)"V.SetProcessEvents(int)\nC++: virtual void SetProcessEvents(int)\n\nMethods to change the whether the widget responds to interaction.\nOverridden to pass the state to component widgets.\n"},
  {(char*)"SetWidgetStateToStart", PyvtkAngleWidget_SetWidgetStateToStart, 1,
   (char*)"V.SetWidgetStateToStart()\nC++: virtual void SetWidgetStateToStart()\n\nSet the state of the widget. If the state is set to \"Manipulate\"\nthen it is assumed that the widget and its representation will be\ninitialized programmatically and is not interactively placed.\nInitially the widget state is set to \"Start\" which means nothing\nwill appear and the user must interactively place the widget with\nrepeated mouse selections. Set the state to \"Start\" if you want\ninteractive placement. Generally state changes must be followed\nby a Render() for things to visually take effect.\n"},
  {(char*)"SetWidgetStateToManipulate", PyvtkAngleWidget_SetWidgetStateToManipulate, 1,
   (char*)"V.SetWidgetStateToManipulate()\nC++: virtual void SetWidgetStateToManipulate()\n\nSet the state of the widget. If the state is set to \"Manipulate\"\nthen it is assumed that the widget and its representation will be\ninitialized programmatically and is not interactively placed.\nInitially the widget state is set to \"Start\" which means nothing\nwill appear and the user must interactively place the widget with\nrepeated mouse selections. Set the state to \"Start\" if you want\ninteractive placement. Generally state changes must be followed\nby a Render() for things to visually take effect.\n"},
  {(char*)"GetWidgetState", PyvtkAngleWidget_GetWidgetState, 1,
   (char*)"V.GetWidgetState() -> int\nC++: virtual int GetWidgetState()\n\nReturn the current widget state.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAngleWidget_StaticNew()
{
  return vtkAngleWidget::New();
}

PyObject *PyVTKClass_vtkAngleWidgetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAngleWidget_StaticNew,
    PyvtkAngleWidget_Methods,
    "vtkAngleWidget", modulename,
    NULL, NULL,
    PyvtkAngleWidget_Doc(),
    PyVTKClass_vtkAbstractWidgetNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"Start", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"Define", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"Manipulate", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkAngleWidget_Doc()
{
  static const char *docstring[] = {
    "vtkAngleWidget - measure the angle between two rays (defined by three\npoints)\n\n",
    "Superclass: vtkAbstractWidget\n\n",
    "The vtkAngleWidget is used to measure the angle between two rays\n(defined by three points). The three points (two end points and a\ncenter) can be positioned independently, and when they are released,\na special PlacePointEvent is invoked so that special operations may\nbe take to reposition the point (snap to grid, etc.) The widget has\ntwo different modes of interaction: when initially defined (i.e.",
    ",\nplacing the three points) and then a manipulate mode (adjusting the\nposition of the three points).\n\nTo use this widget, specify an instance of vtkAngleWidget and a\nrepresentation (a subclass of vtkAngleRepresentation). The widget is\nimplemented using three instances of vtkHandleWidget which are used\nto position the three points. The representations for these handle\nwidgets are provided by the vt",
    "kAngleRepresentation.\n\nEvent Bindings:\n\nBy default, the widget responds to the following VTK events (i.e., it\nwatches the vtkRenderWindowInteractor for these events):\n\n\n  LeftButtonPressEvent - add a point or select a handle\n  MouseMoveEvent - position the second or third point, or move a\nhandle\n  LeftButtonReleaseEvent - release the selected handle \n\nNote that the event bindings described above c",
    "an be changed using\nthis class's vtkWidgetEventTranslator. This class translates VTK\nevents into the vtkAngleWidget's widget events:\n\n\n  vtkWidgetEvent::AddPoint -- add one point; depending on the state\n                              it may the first, second or third point\n                              added. Or, if near a handle, select the\nhandle.\n  vtkWidgetEvent::Move -- position the second or ",
    "third point, or move\nthe\n                          handle depending on the state.\n  vtkWidgetEvent::EndSelect -- the handle manipulation process has\ncompleted. \n\nThis widget invokes the following VTK events on itself (which\nobservers can listen for):\n\n\n  vtkCommand::StartInteractionEvent (beginning to interact)\n  vtkCommand::EndInteractionEvent (completing interaction)\n  vtkCommand::InteractionEve",
    "nt (moving a handle)\n  vtkCommand::PlacePointEvent (after a point is positioned;\n                               call data includes handle id (0,1,2)) \n\nSee Also:\n\nvtkHandleWidget vtkDistanceWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAngleWidget(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAngleWidgetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAngleWidget", o) != 0)
    {
    Py_DECREF(o);
    }

}
