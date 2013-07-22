// python wrapper for vtkCenteredSliderWidget
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
#include "vtkCenteredSliderWidget.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCenteredSliderWidget(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCenteredSliderWidget(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCenteredSliderWidgetNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCenteredSliderWidgetNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAbstractWidgetNew
extern "C" { PyObject *PyVTKClass_vtkAbstractWidgetNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractWidgetNew
#endif

static const char **PyvtkCenteredSliderWidget_Doc();


static PyObject *
PyvtkCenteredSliderWidget_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCenteredSliderWidget *op = static_cast<vtkCenteredSliderWidget *>(vp);

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
      tempr = op->vtkCenteredSliderWidget::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCenteredSliderWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCenteredSliderWidget *op = static_cast<vtkCenteredSliderWidget *>(vp);

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
      tempr = op->vtkCenteredSliderWidget::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCenteredSliderWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCenteredSliderWidget *op = static_cast<vtkCenteredSliderWidget *>(vp);

  vtkCenteredSliderWidget *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCenteredSliderWidget::NewInstance();
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
PyvtkCenteredSliderWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCenteredSliderWidget *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCenteredSliderWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCenteredSliderWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCenteredSliderWidget *op = static_cast<vtkCenteredSliderWidget *>(vp);

  vtkSliderRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSliderRepresentation"))
    {
    if (ap.IsBound())
      {
      op->SetRepresentation(temp0);
      }
    else
      {
      op->vtkCenteredSliderWidget::SetRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCenteredSliderWidget_GetSliderRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliderRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCenteredSliderWidget *op = static_cast<vtkCenteredSliderWidget *>(vp);

  vtkSliderRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSliderRepresentation();
      }
    else
      {
      tempr = op->vtkCenteredSliderWidget::GetSliderRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCenteredSliderWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCenteredSliderWidget *op = static_cast<vtkCenteredSliderWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultRepresentation();
      }
    else
      {
      op->vtkCenteredSliderWidget::CreateDefaultRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCenteredSliderWidget_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCenteredSliderWidget *op = static_cast<vtkCenteredSliderWidget *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetValue();
      }
    else
      {
      tempr = op->vtkCenteredSliderWidget::GetValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCenteredSliderWidget_Methods[] = {
  {(char*)"GetClassName", PyvtkCenteredSliderWidget_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard macros.\n"},
  {(char*)"IsA", PyvtkCenteredSliderWidget_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard macros.\n"},
  {(char*)"NewInstance", PyvtkCenteredSliderWidget_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCenteredSliderWidget\nC++: vtkCenteredSliderWidget *NewInstance()\n\nStandard macros.\n"},
  {(char*)"SafeDownCast", PyvtkCenteredSliderWidget_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCenteredSliderWidget\nC++: vtkCenteredSliderWidget *SafeDownCast(vtkObject* o)\n\nStandard macros.\n"},
  {(char*)"SetRepresentation", PyvtkCenteredSliderWidget_SetRepresentation, 1,
   (char*)"V.SetRepresentation(vtkSliderRepresentation)\nC++: void SetRepresentation(vtkSliderRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {(char*)"GetSliderRepresentation", PyvtkCenteredSliderWidget_GetSliderRepresentation, 1,
   (char*)"V.GetSliderRepresentation() -> vtkSliderRepresentation\nC++: vtkSliderRepresentation *GetSliderRepresentation()\n\nReturn the representation as a vtkSliderRepresentation.\n"},
  {(char*)"CreateDefaultRepresentation", PyvtkCenteredSliderWidget_CreateDefaultRepresentation, 1,
   (char*)"V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation()\n\nCreate the default widget representation if one is not set.\n"},
  {(char*)"GetValue", PyvtkCenteredSliderWidget_GetValue, 1,
   (char*)"V.GetValue() -> float\nC++: double GetValue()\n\nGet the value fo this widget.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCenteredSliderWidget_StaticNew()
{
  return vtkCenteredSliderWidget::New();
}

PyObject *PyVTKClass_vtkCenteredSliderWidgetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCenteredSliderWidget_StaticNew,
    PyvtkCenteredSliderWidget_Methods,
    "vtkCenteredSliderWidget", modulename,
    NULL, NULL,
    PyvtkCenteredSliderWidget_Doc(),
    PyVTKClass_vtkAbstractWidgetNew(modulename));
  return cls;
}

const char **PyvtkCenteredSliderWidget_Doc()
{
  static const char *docstring[] = {
    "vtkCenteredSliderWidget - set a value by manipulating a slider\n\n",
    "Superclass: vtkAbstractWidget\n\n",
    "The vtkCenteredSliderWidget is used to adjust a scalar value in an\napplication. This class measures deviations form the center point on\nthe slider. Moving the slider modifies the value of the widget, which\ncan be used to set parameters on other objects. Note that the actual\nappearance of the widget depends on the specific representation for\nthe widget.\n\nTo use this widget, set the widget represent",
    "ation. The representation\nis assumed to consist of a tube, two end caps, and a slider (the\ndetails may vary depending on the particulars of the representation).\nThen in the representation you will typically set minimum and maximum\nvalue, as well as the current value. The position of the slider must\nalso be set, as well as various properties.\n\nNote that the value should be obtain from the widget, n",
    "ot from the\nrepresentation. Also note that Minimum and Maximum values are in\nterms of value per second. The value you get from this widget's\nGetValue method is multiplied by time.\n\nEvent Bindings:\n\nBy default, the widget responds to the following VTK events (i.e., it\nwatches the vtkRenderWindowInteractor for these events):\n\nIf the slider bead is selected:\n  LeftButtonPressEvent - select slider (if",
    " on slider)\n  LeftButtonReleaseEvent - release slider (if selected)\n  MouseMoveEvent - move slider If the end caps or slider tube are\nselected:\n  LeftButtonPressEvent - move (or animate) to cap or point on tube; \n\nNote that the event bindings described above can be changed using\nthis class's vtkWidgetEventTranslator. This class translates VTK\nevents into the vtkCenteredSliderWidget's widget events",
    ":\n\n\n  vtkWidgetEvent::Select -- some part of the widget has been selected\n  vtkWidgetEvent::EndSelect -- the selection process has completed\n  vtkWidgetEvent::Move -- a request for slider motion has been\ninvoked \n\nIn turn, when these widget events are processed, the\nvtkCenteredSliderWidget invokes the following VTK events on itself\n(which observers can listen for):\n\n\n  vtkCommand::StartInteraction",
    "Event (on vtkWidgetEvent::Select)\n  vtkCommand::EndInteractionEvent (on vtkWidgetEvent::EndSelect)\n  vtkCommand::InteractionEvent (on vtkWidgetEvent::Move) \n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCenteredSliderWidget(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCenteredSliderWidgetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCenteredSliderWidget", o) != 0)
    {
    Py_DECREF(o);
    }

}

