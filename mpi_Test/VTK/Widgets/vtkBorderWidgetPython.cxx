// python wrapper for vtkBorderWidget
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
#include "vtkBorderWidget.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkBorderWidget(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkBorderWidget(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkBorderWidgetNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkBorderWidgetNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAbstractWidgetNew
extern "C" { PyObject *PyVTKClass_vtkAbstractWidgetNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractWidgetNew
#endif

static const char **PyvtkBorderWidget_Doc();


static PyObject *
PyvtkBorderWidget_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderWidget *op = static_cast<vtkBorderWidget *>(vp);

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
      tempr = op->vtkBorderWidget::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBorderWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderWidget *op = static_cast<vtkBorderWidget *>(vp);

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
      tempr = op->vtkBorderWidget::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBorderWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderWidget *op = static_cast<vtkBorderWidget *>(vp);

  vtkBorderWidget *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkBorderWidget::NewInstance();
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
PyvtkBorderWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkBorderWidget *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkBorderWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBorderWidget_SetSelectable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderWidget *op = static_cast<vtkBorderWidget *>(vp);

  int temp0;
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
      op->vtkBorderWidget::SetSelectable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBorderWidget_GetSelectable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderWidget *op = static_cast<vtkBorderWidget *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectable();
      }
    else
      {
      tempr = op->vtkBorderWidget::GetSelectable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBorderWidget_SelectableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderWidget *op = static_cast<vtkBorderWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SelectableOn();
      }
    else
      {
      op->vtkBorderWidget::SelectableOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBorderWidget_SelectableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderWidget *op = static_cast<vtkBorderWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SelectableOff();
      }
    else
      {
      op->vtkBorderWidget::SelectableOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBorderWidget_SetResizable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResizable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderWidget *op = static_cast<vtkBorderWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetResizable(temp0);
      }
    else
      {
      op->vtkBorderWidget::SetResizable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBorderWidget_GetResizable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResizable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderWidget *op = static_cast<vtkBorderWidget *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetResizable();
      }
    else
      {
      tempr = op->vtkBorderWidget::GetResizable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBorderWidget_ResizableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResizableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderWidget *op = static_cast<vtkBorderWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResizableOn();
      }
    else
      {
      op->vtkBorderWidget::ResizableOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBorderWidget_ResizableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResizableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderWidget *op = static_cast<vtkBorderWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResizableOff();
      }
    else
      {
      op->vtkBorderWidget::ResizableOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBorderWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderWidget *op = static_cast<vtkBorderWidget *>(vp);

  vtkBorderRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkBorderRepresentation"))
    {
    if (ap.IsBound())
      {
      op->SetRepresentation(temp0);
      }
    else
      {
      op->vtkBorderWidget::SetRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBorderWidget_GetBorderRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderWidget *op = static_cast<vtkBorderWidget *>(vp);

  vtkBorderRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBorderRepresentation();
      }
    else
      {
      tempr = op->vtkBorderWidget::GetBorderRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBorderWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderWidget *op = static_cast<vtkBorderWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultRepresentation();
      }
    else
      {
      op->vtkBorderWidget::CreateDefaultRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkBorderWidget_Methods[] = {
  {(char*)"GetClassName", PyvtkBorderWidget_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBorderWidget_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBorderWidget_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkBorderWidget\nC++: vtkBorderWidget *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkBorderWidget_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBorderWidget\nC++: vtkBorderWidget *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSelectable", PyvtkBorderWidget_SetSelectable, 1,
   (char*)"V.SetSelectable(int)\nC++: void SetSelectable(int a)\n\nIndicate whether the interior region of the widget can be\nselected or not. If not, then events (such as left mouse down)\nallow the user to \"move\" the widget, and no selection is\npossible. Otherwise the SelectRegion() method is invoked.\n"},
  {(char*)"GetSelectable", PyvtkBorderWidget_GetSelectable, 1,
   (char*)"V.GetSelectable() -> int\nC++: int GetSelectable()\n\nIndicate whether the interior region of the widget can be\nselected or not. If not, then events (such as left mouse down)\nallow the user to \"move\" the widget, and no selection is\npossible. Otherwise the SelectRegion() method is invoked.\n"},
  {(char*)"SelectableOn", PyvtkBorderWidget_SelectableOn, 1,
   (char*)"V.SelectableOn()\nC++: void SelectableOn()\n\nIndicate whether the interior region of the widget can be\nselected or not. If not, then events (such as left mouse down)\nallow the user to \"move\" the widget, and no selection is\npossible. Otherwise the SelectRegion() method is invoked.\n"},
  {(char*)"SelectableOff", PyvtkBorderWidget_SelectableOff, 1,
   (char*)"V.SelectableOff()\nC++: void SelectableOff()\n\nIndicate whether the interior region of the widget can be\nselected or not. If not, then events (such as left mouse down)\nallow the user to \"move\" the widget, and no selection is\npossible. Otherwise the SelectRegion() method is invoked.\n"},
  {(char*)"SetResizable", PyvtkBorderWidget_SetResizable, 1,
   (char*)"V.SetResizable(int)\nC++: void SetResizable(int a)\n\nIndicate whether the boundary of the widget can be resized. If\nnot, the cursor will not change to \"resize\" type when mouse over\nthe boundary.\n"},
  {(char*)"GetResizable", PyvtkBorderWidget_GetResizable, 1,
   (char*)"V.GetResizable() -> int\nC++: int GetResizable()\n\nIndicate whether the boundary of the widget can be resized. If\nnot, the cursor will not change to \"resize\" type when mouse over\nthe boundary.\n"},
  {(char*)"ResizableOn", PyvtkBorderWidget_ResizableOn, 1,
   (char*)"V.ResizableOn()\nC++: void ResizableOn()\n\nIndicate whether the boundary of the widget can be resized. If\nnot, the cursor will not change to \"resize\" type when mouse over\nthe boundary.\n"},
  {(char*)"ResizableOff", PyvtkBorderWidget_ResizableOff, 1,
   (char*)"V.ResizableOff()\nC++: void ResizableOff()\n\nIndicate whether the boundary of the widget can be resized. If\nnot, the cursor will not change to \"resize\" type when mouse over\nthe boundary.\n"},
  {(char*)"SetRepresentation", PyvtkBorderWidget_SetRepresentation, 1,
   (char*)"V.SetRepresentation(vtkBorderRepresentation)\nC++: void SetRepresentation(vtkBorderRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {(char*)"GetBorderRepresentation", PyvtkBorderWidget_GetBorderRepresentation, 1,
   (char*)"V.GetBorderRepresentation() -> vtkBorderRepresentation\nC++: vtkBorderRepresentation *GetBorderRepresentation()\n\nReturn the representation as a vtkBorderRepresentation.\n"},
  {(char*)"CreateDefaultRepresentation", PyvtkBorderWidget_CreateDefaultRepresentation, 1,
   (char*)"V.CreateDefaultRepresentation()\nC++: virtual void CreateDefaultRepresentation()\n\nCreate the default widget representation if one is not set.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBorderWidget_StaticNew()
{
  return vtkBorderWidget::New();
}

PyObject *PyVTKClass_vtkBorderWidgetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBorderWidget_StaticNew,
    PyvtkBorderWidget_Methods,
    "vtkBorderWidget", modulename,
    NULL, NULL,
    PyvtkBorderWidget_Doc(),
    PyVTKClass_vtkAbstractWidgetNew(modulename));
  return cls;
}

const char **PyvtkBorderWidget_Doc()
{
  static const char *docstring[] = {
    "vtkBorderWidget - place a border around a 2D rectangular region\n\n",
    "Superclass: vtkAbstractWidget\n\n",
    "This class is a superclass for 2D widgets that may require a\nrectangular border. Besides drawing a border, the widget provides\nmethods for resizing and moving the rectangular region (and\nassociated border). The widget provides methods and internal data\nmembers so that subclasses can take advantage of this widgets\ncapabilities, requiring only that the subclass defines a\n\"representation\", i.e., some",
    " combination of props or actors that can\nbe managed in the 2D rectangular region.\n\nThe class defines basic positioning functionality, including the\nability to size the widget with locked x/y proportions. The area\nwithin the border may be made \"selectable\" as well, meaning that a\nselection event interior to the widget invokes a virtual\nSelectRegion() method, which can be used to pick objects or oth",
    "erwise\nmanipulate data interior to the widget.\n\nEvent Bindings:\n\nBy default, the widget responds to the following VTK events (i.e., it\nwatches the vtkRenderWindowInteractor for these events):\n\nOn the boundary of the widget:\n  LeftButtonPressEvent - select boundary\n  LeftButtonReleaseEvent - deselect boundary\n  MouseMoveEvent - move/resize widget depending on which portion of\nthe\n                  ",
    " boundary was selected. On the interior of the\nwidget:\n  LeftButtonPressEvent - invoke SelectButton() callback (if the ivar\n                         Selectable is on) Anywhere on the widget:\n  MiddleButtonPressEvent - move the widget \n\nNote that the event bindings described above can be changed using\nthis class's vtkWidgetEventTranslator. This class translates VTK\nevents into the vtkBorderWidget's",
    " widget events:\n\n\n  vtkWidgetEvent::Select -- some part of the widget has been selected\n  vtkWidgetEvent::EndSelect -- the selection process has completed\n  vtkWidgetEvent::Translate -- the widget is to be translated\n  vtkWidgetEvent::Move -- a request for slider motion has been\ninvoked \n\nIn turn, when these widget events are processed, this widget invokes\nthe following VTK events on itself (which",
    " observers can listen for):\n\n\n  vtkCommand::StartInteractionEvent (on vtkWidgetEvent::Select)\n  vtkCommand::EndInteractionEvent (on vtkWidgetEvent::EndSelect)\n  vtkCommand::InteractionEvent (on vtkWidgetEvent::Move) \n\nSee Also:\n\nvtkInteractorObserver vtkCameraInterpolator\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBorderWidget(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBorderWidgetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBorderWidget", o) != 0)
    {
    Py_DECREF(o);
    }

}

