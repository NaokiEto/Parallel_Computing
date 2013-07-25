// python wrapper for vtkLineWidget2
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
#include "vtkLineWidget2.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkLineWidget2(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkLineWidget2(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkLineWidget2New(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkLineWidget2New(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAbstractWidgetNew
extern "C" { PyObject *PyVTKClass_vtkAbstractWidgetNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractWidgetNew
#endif

static const char **PyvtkLineWidget2_Doc();


static PyObject *
PyvtkLineWidget2_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget2 *op = static_cast<vtkLineWidget2 *>(vp);

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
      tempr = op->vtkLineWidget2::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineWidget2_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget2 *op = static_cast<vtkLineWidget2 *>(vp);

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
      tempr = op->vtkLineWidget2::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineWidget2_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget2 *op = static_cast<vtkLineWidget2 *>(vp);

  vtkLineWidget2 *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkLineWidget2::NewInstance();
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
PyvtkLineWidget2_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkLineWidget2 *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkLineWidget2::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineWidget2_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget2 *op = static_cast<vtkLineWidget2 *>(vp);

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
      op->vtkLineWidget2::SetEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineWidget2_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget2 *op = static_cast<vtkLineWidget2 *>(vp);

  vtkLineRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLineRepresentation"))
    {
    if (ap.IsBound())
      {
      op->SetRepresentation(temp0);
      }
    else
      {
      op->vtkLineWidget2::SetRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineWidget2_GetLineRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget2 *op = static_cast<vtkLineWidget2 *>(vp);

  vtkLineRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLineRepresentation();
      }
    else
      {
      tempr = op->vtkLineWidget2::GetLineRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineWidget2_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget2 *op = static_cast<vtkLineWidget2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultRepresentation();
      }
    else
      {
      op->vtkLineWidget2::CreateDefaultRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineWidget2_SetProcessEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget2 *op = static_cast<vtkLineWidget2 *>(vp);

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
      op->vtkLineWidget2::SetProcessEvents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkLineWidget2_Methods[] = {
  {(char*)"GetClassName", PyvtkLineWidget2_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard vtkObject methods\n"},
  {(char*)"IsA", PyvtkLineWidget2_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard vtkObject methods\n"},
  {(char*)"NewInstance", PyvtkLineWidget2_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkLineWidget2\nC++: vtkLineWidget2 *NewInstance()\n\nStandard vtkObject methods\n"},
  {(char*)"SafeDownCast", PyvtkLineWidget2_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLineWidget2\nC++: vtkLineWidget2 *SafeDownCast(vtkObject* o)\n\nStandard vtkObject methods\n"},
  {(char*)"SetEnabled", PyvtkLineWidget2_SetEnabled, 1,
   (char*)"V.SetEnabled(int)\nC++: virtual void SetEnabled(int enabling)\n\nOverride superclasses' SetEnabled() method because the line\nwidget must enable its internal handle widgets.\n"},
  {(char*)"SetRepresentation", PyvtkLineWidget2_SetRepresentation, 1,
   (char*)"V.SetRepresentation(vtkLineRepresentation)\nC++: void SetRepresentation(vtkLineRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {(char*)"GetLineRepresentation", PyvtkLineWidget2_GetLineRepresentation, 1,
   (char*)"V.GetLineRepresentation() -> vtkLineRepresentation\nC++: vtkLineRepresentation *GetLineRepresentation()\n\nReturn the representation as a vtkLineRepresentation.\n"},
  {(char*)"CreateDefaultRepresentation", PyvtkLineWidget2_CreateDefaultRepresentation, 1,
   (char*)"V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation()\n\nCreate the default widget representation if one is not set.\n"},
  {(char*)"SetProcessEvents", PyvtkLineWidget2_SetProcessEvents, 1,
   (char*)"V.SetProcessEvents(int)\nC++: virtual void SetProcessEvents(int)\n\nMethods to change the whether the widget responds to interaction.\nOverridden to pass the state to component widgets.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLineWidget2_StaticNew()
{
  return vtkLineWidget2::New();
}

PyObject *PyVTKClass_vtkLineWidget2New(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLineWidget2_StaticNew,
    PyvtkLineWidget2_Methods,
    "vtkLineWidget2", modulename,
    NULL, NULL,
    PyvtkLineWidget2_Doc(),
    PyVTKClass_vtkAbstractWidgetNew(modulename));
  return cls;
}

const char **PyvtkLineWidget2_Doc()
{
  static const char *docstring[] = {
    "vtkLineWidget2 - 3D widget for manipulating a finite, straight line\n\n",
    "Superclass: vtkAbstractWidget\n\n",
    "This 3D widget defines a straight line that can be interactively\nplaced in a scene. The widget is assumed to consist of two parts: 1)\ntwo end points and 2) a straight line connecting the two points. (The\nrepresentation paired with this widget determines the actual geometry\nof the widget.) The positioning of the two end points is facilitated\nby using vtkHandleWidgets to position the points.\n\nTo use",
    " this widget, you generally pair it with a\nvtkLineRepresentation (or a subclass). Variuos options are available\nin the representation for controlling how the widget appears, and how\nthe widget functions.\n\nEvent Bindings:\n\nBy default, the widget responds to the following VTK events (i.e., it\nwatches the vtkRenderWindowInteractor for these events):\n\nIf one of the two end points are selected:\n  LeftB",
    "uttonPressEvent - activate the associated handle widget\n  LeftButtonReleaseEvent - release the handle widget associated with\nthe point\n  MouseMoveEvent - move the point If the line is selected:\n  LeftButtonPressEvent - activate a handle widget accociated with the\nline\n  LeftButtonReleaseEvent - release the handle widget associated with\nthe line\n  MouseMoveEvent - translate the line In all the case",
    "s, independent\nof what is picked, the widget responds to the following VTK events:\n  MiddleButtonPressEvent - translate the widget\n  MiddleButtonReleaseEvent - release the widget\n  RightButtonPressEvent - scale the widget's representation\n  RightButtonReleaseEvent - stop scaling the widget\n  MouseMoveEvent - scale (if right button) or move (if middle button)\nthe widget \n\nNote that the event bindin",
    "gs described above can be changed using\nthis class's vtkWidgetEventTranslator. This class translates VTK\nevents into the vtkLineWidget2's widget events:\n\n\n  vtkWidgetEvent::Select -- some part of the widget has been selected\n  vtkWidgetEvent::EndSelect -- the selection process has completed\n  vtkWidgetEvent::Move -- a request for slider motion has been\ninvoked \n\nIn turn, when these widget events a",
    "re processed, the vtkLineWidget2\ninvokes the following VTK events on itself (which observers can\nlisten for):\n\n\n  vtkCommand::StartInteractionEvent (on vtkWidgetEvent::Select)\n  vtkCommand::EndInteractionEvent (on vtkWidgetEvent::EndSelect)\n  vtkCommand::InteractionEvent (on vtkWidgetEvent::Move) \n\nCaveats:\n\nNote that the widget can be picked even when it is \"behind\" other\nactors.  This is an inte",
    "nded feature and not a bug.\n\nThis class, and vtkLineRepresentation, are next generation VTK\nwidgets. An earlier version of this functionality was defined in the\nclass vtkLineWidget.\n\nSee Also:\n\nvtkLineRepresentation vtkLineWidget vtk3DWidget\nvtkImplicitPlaneWidget vtkImplicitPlaneWidget2\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLineWidget2(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLineWidget2New(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLineWidget2", o) != 0)
    {
    Py_DECREF(o);
    }

}
