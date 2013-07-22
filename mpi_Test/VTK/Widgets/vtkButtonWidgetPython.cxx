// python wrapper for vtkButtonWidget
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
#include "vtkButtonWidget.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkButtonWidget(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkButtonWidget(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkButtonWidgetNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkButtonWidgetNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAbstractWidgetNew
extern "C" { PyObject *PyVTKClass_vtkAbstractWidgetNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractWidgetNew
#endif

static const char **PyvtkButtonWidget_Doc();


static PyObject *
PyvtkButtonWidget_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonWidget *op = static_cast<vtkButtonWidget *>(vp);

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
      tempr = op->vtkButtonWidget::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkButtonWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonWidget *op = static_cast<vtkButtonWidget *>(vp);

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
      tempr = op->vtkButtonWidget::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkButtonWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonWidget *op = static_cast<vtkButtonWidget *>(vp);

  vtkButtonWidget *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkButtonWidget::NewInstance();
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
PyvtkButtonWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkButtonWidget *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkButtonWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkButtonWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonWidget *op = static_cast<vtkButtonWidget *>(vp);

  vtkButtonRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkButtonRepresentation"))
    {
    if (ap.IsBound())
      {
      op->SetRepresentation(temp0);
      }
    else
      {
      op->vtkButtonWidget::SetRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkButtonWidget_GetSliderRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliderRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonWidget *op = static_cast<vtkButtonWidget *>(vp);

  vtkButtonRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSliderRepresentation();
      }
    else
      {
      tempr = op->vtkButtonWidget::GetSliderRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkButtonWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonWidget *op = static_cast<vtkButtonWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultRepresentation();
      }
    else
      {
      op->vtkButtonWidget::CreateDefaultRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkButtonWidget_Methods[] = {
  {(char*)"GetClassName", PyvtkButtonWidget_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard macros.\n"},
  {(char*)"IsA", PyvtkButtonWidget_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard macros.\n"},
  {(char*)"NewInstance", PyvtkButtonWidget_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkButtonWidget\nC++: vtkButtonWidget *NewInstance()\n\nStandard macros.\n"},
  {(char*)"SafeDownCast", PyvtkButtonWidget_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkButtonWidget\nC++: vtkButtonWidget *SafeDownCast(vtkObject* o)\n\nStandard macros.\n"},
  {(char*)"SetRepresentation", PyvtkButtonWidget_SetRepresentation, 1,
   (char*)"V.SetRepresentation(vtkButtonRepresentation)\nC++: void SetRepresentation(vtkButtonRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {(char*)"GetSliderRepresentation", PyvtkButtonWidget_GetSliderRepresentation, 1,
   (char*)"V.GetSliderRepresentation() -> vtkButtonRepresentation\nC++: vtkButtonRepresentation *GetSliderRepresentation()\n\nReturn the representation as a vtkButtonRepresentation.\n"},
  {(char*)"CreateDefaultRepresentation", PyvtkButtonWidget_CreateDefaultRepresentation, 1,
   (char*)"V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation()\n\nCreate the default widget representation if one is not set.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkButtonWidget_StaticNew()
{
  return vtkButtonWidget::New();
}

PyObject *PyVTKClass_vtkButtonWidgetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkButtonWidget_StaticNew,
    PyvtkButtonWidget_Methods,
    "vtkButtonWidget", modulename,
    NULL, NULL,
    PyvtkButtonWidget_Doc(),
    PyVTKClass_vtkAbstractWidgetNew(modulename));
  return cls;
}

const char **PyvtkButtonWidget_Doc()
{
  static const char *docstring[] = {
    "vtkButtonWidget - activate an n-state button\n\n",
    "Superclass: vtkAbstractWidget\n\n",
    "The vtkButtonWidget is used to interface with an n-state button. That\nis each selection moves to the next button state (e.g., moves from\n\"on\" to \"off\"). The widget uses modulo list traversal to transition\nthrough one or more states. (A single state is simply a \"selection\"\nevent; traversal through the list can be in the forward or backward\ndirection.)\n\nDepending on the nature of the representation ",
    "the appearance of the\nbutton can change dramatically, the specifics of appearance changes\nare a function of the associated vtkButtonRepresentation (or\nsubclass).\n\nEvent Bindings:\n\nBy default, the widget responds to the following VTK events (i.e., it\nwatches the vtkRenderWindowInteractor for these events):\n\n\n  LeftButtonPressEvent - select button\n  LeftButtonReleaseEvent - end the button selection ",
    "process \n\nNote that the event bindings described above can be changed using\nthis class's vtkWidgetEventTranslator. This class translates VTK\nevents into the vtkButtonWidget's widget events:\n\n\n  vtkWidgetEvent::Select -- some part of the widget has been selected\n  vtkWidgetEvent::EndSelect -- the selection process has completed \n\nIn turn, when these widget events are processed, the vtkButtonWidget\n",
    "invokes the following VTK events on itself (which observers can\nlisten for):\n\n\n  vtkCommand::StateChangedEvent (on vtkWidgetEvent::EndSelect) \n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkButtonWidget(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkButtonWidgetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkButtonWidget", o) != 0)
    {
    Py_DECREF(o);
    }

}

