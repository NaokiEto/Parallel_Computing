// python wrapper for vtkDistanceWidget
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
#include "vtkDistanceWidget.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDistanceWidget(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDistanceWidget(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDistanceWidgetNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDistanceWidgetNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAbstractWidgetNew
extern "C" { PyObject *PyVTKClass_vtkAbstractWidgetNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractWidgetNew
#endif

static const char **PyvtkDistanceWidget_Doc();


static PyObject *
PyvtkDistanceWidget_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceWidget *op = static_cast<vtkDistanceWidget *>(vp);

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
      tempr = op->vtkDistanceWidget::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceWidget *op = static_cast<vtkDistanceWidget *>(vp);

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
      tempr = op->vtkDistanceWidget::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceWidget *op = static_cast<vtkDistanceWidget *>(vp);

  vtkDistanceWidget *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDistanceWidget::NewInstance();
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
PyvtkDistanceWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDistanceWidget *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDistanceWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceWidget *op = static_cast<vtkDistanceWidget *>(vp);

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
      op->vtkDistanceWidget::SetEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceWidget *op = static_cast<vtkDistanceWidget *>(vp);

  vtkDistanceRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDistanceRepresentation"))
    {
    if (ap.IsBound())
      {
      op->SetRepresentation(temp0);
      }
    else
      {
      op->vtkDistanceWidget::SetRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceWidget_GetDistanceRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceWidget *op = static_cast<vtkDistanceWidget *>(vp);

  vtkDistanceRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDistanceRepresentation();
      }
    else
      {
      tempr = op->vtkDistanceWidget::GetDistanceRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceWidget *op = static_cast<vtkDistanceWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultRepresentation();
      }
    else
      {
      op->vtkDistanceWidget::CreateDefaultRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceWidget_SetProcessEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceWidget *op = static_cast<vtkDistanceWidget *>(vp);

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
      op->vtkDistanceWidget::SetProcessEvents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceWidget_SetWidgetStateToStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidgetStateToStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceWidget *op = static_cast<vtkDistanceWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetWidgetStateToStart();
      }
    else
      {
      op->vtkDistanceWidget::SetWidgetStateToStart();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceWidget_SetWidgetStateToManipulate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidgetStateToManipulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceWidget *op = static_cast<vtkDistanceWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetWidgetStateToManipulate();
      }
    else
      {
      op->vtkDistanceWidget::SetWidgetStateToManipulate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceWidget_GetWidgetState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidgetState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceWidget *op = static_cast<vtkDistanceWidget *>(vp);

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
      tempr = op->vtkDistanceWidget::GetWidgetState();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDistanceWidget_Methods[] = {
  {(char*)"GetClassName", PyvtkDistanceWidget_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for a VTK class.\n"},
  {(char*)"IsA", PyvtkDistanceWidget_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for a VTK class.\n"},
  {(char*)"NewInstance", PyvtkDistanceWidget_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDistanceWidget\nC++: vtkDistanceWidget *NewInstance()\n\nStandard methods for a VTK class.\n"},
  {(char*)"SafeDownCast", PyvtkDistanceWidget_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDistanceWidget\nC++: vtkDistanceWidget *SafeDownCast(vtkObject* o)\n\nStandard methods for a VTK class.\n"},
  {(char*)"SetEnabled", PyvtkDistanceWidget_SetEnabled, 1,
   (char*)"V.SetEnabled(int)\nC++: virtual void SetEnabled(int)\n\nThe method for activiating and deactiviating this widget. This\nmethod must be overridden because it is a composite widget and\ndoes more than its superclasses' vtkAbstractWidget::SetEnabled()\nmethod.\n"},
  {(char*)"SetRepresentation", PyvtkDistanceWidget_SetRepresentation, 1,
   (char*)"V.SetRepresentation(vtkDistanceRepresentation)\nC++: void SetRepresentation(vtkDistanceRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {(char*)"GetDistanceRepresentation", PyvtkDistanceWidget_GetDistanceRepresentation, 1,
   (char*)"V.GetDistanceRepresentation() -> vtkDistanceRepresentation\nC++: vtkDistanceRepresentation *GetDistanceRepresentation()\n\nReturn the representation as a vtkDistanceRepresentation.\n"},
  {(char*)"CreateDefaultRepresentation", PyvtkDistanceWidget_CreateDefaultRepresentation, 1,
   (char*)"V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation()\n\nCreate the default widget representation if one is not set.\n"},
  {(char*)"SetProcessEvents", PyvtkDistanceWidget_SetProcessEvents, 1,
   (char*)"V.SetProcessEvents(int)\nC++: virtual void SetProcessEvents(int)\n\nMethods to change the whether the widget responds to interaction.\nOverridden to pass the state to component widgets.\n"},
  {(char*)"SetWidgetStateToStart", PyvtkDistanceWidget_SetWidgetStateToStart, 1,
   (char*)"V.SetWidgetStateToStart()\nC++: virtual void SetWidgetStateToStart()\n\nSet the state of the widget. If the state is set to \"Manipulate\"\nthen it is assumed that the widget and its representation will be\ninitialized programmatically and is not interactively placed.\nInitially the widget state is set to \"Start\" which means nothing\nwill appear and the user must interactively place the widget with\nrepeated mouse selections. Set the state to \"Start\" if you want\ninteractive placement. Generally state changes must be followed\nby a Render() for things to visually take effect.\n"},
  {(char*)"SetWidgetStateToManipulate", PyvtkDistanceWidget_SetWidgetStateToManipulate, 1,
   (char*)"V.SetWidgetStateToManipulate()\nC++: virtual void SetWidgetStateToManipulate()\n\nSet the state of the widget. If the state is set to \"Manipulate\"\nthen it is assumed that the widget and its representation will be\ninitialized programmatically and is not interactively placed.\nInitially the widget state is set to \"Start\" which means nothing\nwill appear and the user must interactively place the widget with\nrepeated mouse selections. Set the state to \"Start\" if you want\ninteractive placement. Generally state changes must be followed\nby a Render() for things to visually take effect.\n"},
  {(char*)"GetWidgetState", PyvtkDistanceWidget_GetWidgetState, 1,
   (char*)"V.GetWidgetState() -> int\nC++: virtual int GetWidgetState()\n\nReturn the current widget state.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDistanceWidget_StaticNew()
{
  return vtkDistanceWidget::New();
}

PyObject *PyVTKClass_vtkDistanceWidgetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDistanceWidget_StaticNew,
    PyvtkDistanceWidget_Methods,
    "vtkDistanceWidget", modulename,
    NULL, NULL,
    PyvtkDistanceWidget_Doc(),
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

const char **PyvtkDistanceWidget_Doc()
{
  static const char *docstring[] = {
    "vtkDistanceWidget - measure the distance between two points\n\n",
    "Superclass: vtkAbstractWidget\n\n",
    "The vtkDistanceWidget is used to measure the distance between two\npoints. The two end points can be positioned independently, and when\nthey are released, a special PlacePointEvent is invoked so that\nspecial operations may be take to reposition the point (snap to grid,\netc.) The widget has two different modes of interaction: when\ninitially defined (i.e., placing the two points) and then a\nmanipulat",
    "e mode (adjusting the position of the two points).\n\nTo use this widget, specify an instance of vtkDistanceWidget and a\nrepresentation (a subclass of vtkDistanceRepresentation). The widget\nis implemented using two instances of vtkHandleWidget which are used\nto position the end points of the line. The representations for these\ntwo handle widgets are provided by the vtkDistanceRepresentation.\n\nEvent ",
    "Bindings:\n\nBy default, the widget responds to the following VTK events (i.e., it\nwatches the vtkRenderWindowInteractor for these events):\n\n\n  LeftButtonPressEvent - add a point or select a handle\n  MouseMoveEvent - position the second point or move a handle\n  LeftButtonReleaseEvent - release the handle \n\nNote that the event bindings described above can be changed using\nthis class's vtkWidgetEventT",
    "ranslator. This class translates VTK\nevents into the vtkDistanceWidget's widget events:\n\n\n  vtkWidgetEvent::AddPoint -- add one point; depending on the state\n                              it may the first or second point added.\nOr,\n                              if near a handle, select the handle.\n  vtkWidgetEvent::Move -- move the second point or handle depending\non the state.\n  vtkWidgetEvent::E",
    "ndSelect -- the handle manipulation process has\ncompleted. \n\nThis widget invokes the following VTK events on itself (which\nobservers can listen for):\n\n\n  vtkCommand::StartInteractionEvent (beginning to interact)\n  vtkCommand::EndInteractionEvent (completing interaction)\n  vtkCommand::InteractionEvent (moving after selecting something)\n  vtkCommand::PlacePointEvent (after point is positioned;\n     ",
    "                          call data includes handle id (0,1)) \n\nSee Also:\n\nvtkHandleWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDistanceWidget(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDistanceWidgetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDistanceWidget", o) != 0)
    {
    Py_DECREF(o);
    }

}

