// python wrapper for vtkCompassWidget
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
#include "vtkCompassWidget.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCompassWidget(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCompassWidget(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCompassWidgetNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCompassWidgetNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAbstractWidgetNew
extern "C" { PyObject *PyVTKClass_vtkAbstractWidgetNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractWidgetNew
#endif

static const char **PyvtkCompassWidget_Doc();


static PyObject *
PyvtkCompassWidget_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassWidget *op = static_cast<vtkCompassWidget *>(vp);

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
      tempr = op->vtkCompassWidget::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompassWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassWidget *op = static_cast<vtkCompassWidget *>(vp);

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
      tempr = op->vtkCompassWidget::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompassWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassWidget *op = static_cast<vtkCompassWidget *>(vp);

  vtkCompassWidget *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCompassWidget::NewInstance();
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
PyvtkCompassWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCompassWidget *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCompassWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompassWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassWidget *op = static_cast<vtkCompassWidget *>(vp);

  vtkCompassRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompassRepresentation"))
    {
    if (ap.IsBound())
      {
      op->SetRepresentation(temp0);
      }
    else
      {
      op->vtkCompassWidget::SetRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompassWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassWidget *op = static_cast<vtkCompassWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultRepresentation();
      }
    else
      {
      op->vtkCompassWidget::CreateDefaultRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompassWidget_GetHeading(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeading");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassWidget *op = static_cast<vtkCompassWidget *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHeading();
      }
    else
      {
      tempr = op->vtkCompassWidget::GetHeading();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompassWidget_SetHeading(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeading");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassWidget *op = static_cast<vtkCompassWidget *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHeading(temp0);
      }
    else
      {
      op->vtkCompassWidget::SetHeading(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompassWidget_GetTilt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTilt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassWidget *op = static_cast<vtkCompassWidget *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTilt();
      }
    else
      {
      tempr = op->vtkCompassWidget::GetTilt();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompassWidget_SetTilt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTilt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassWidget *op = static_cast<vtkCompassWidget *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTilt(temp0);
      }
    else
      {
      op->vtkCompassWidget::SetTilt(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompassWidget_GetDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassWidget *op = static_cast<vtkCompassWidget *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDistance();
      }
    else
      {
      tempr = op->vtkCompassWidget::GetDistance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompassWidget_SetDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassWidget *op = static_cast<vtkCompassWidget *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDistance(temp0);
      }
    else
      {
      op->vtkCompassWidget::SetDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCompassWidget_Methods[] = {
  {(char*)"GetClassName", PyvtkCompassWidget_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard macros.\n"},
  {(char*)"IsA", PyvtkCompassWidget_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard macros.\n"},
  {(char*)"NewInstance", PyvtkCompassWidget_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCompassWidget\nC++: vtkCompassWidget *NewInstance()\n\nStandard macros.\n"},
  {(char*)"SafeDownCast", PyvtkCompassWidget_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCompassWidget\nC++: vtkCompassWidget *SafeDownCast(vtkObject* o)\n\nStandard macros.\n"},
  {(char*)"SetRepresentation", PyvtkCompassWidget_SetRepresentation, 1,
   (char*)"V.SetRepresentation(vtkCompassRepresentation)\nC++: void SetRepresentation(vtkCompassRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {(char*)"CreateDefaultRepresentation", PyvtkCompassWidget_CreateDefaultRepresentation, 1,
   (char*)"V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation()\n\nCreate the default widget representation if one is not set.\n"},
  {(char*)"GetHeading", PyvtkCompassWidget_GetHeading, 1,
   (char*)"V.GetHeading() -> float\nC++: double GetHeading()\n\nGet the value for this widget.\n"},
  {(char*)"SetHeading", PyvtkCompassWidget_SetHeading, 1,
   (char*)"V.SetHeading(float)\nC++: void SetHeading(double v)\n\nGet the value for this widget.\n"},
  {(char*)"GetTilt", PyvtkCompassWidget_GetTilt, 1,
   (char*)"V.GetTilt() -> float\nC++: double GetTilt()\n\nGet the value for this widget.\n"},
  {(char*)"SetTilt", PyvtkCompassWidget_SetTilt, 1,
   (char*)"V.SetTilt(float)\nC++: void SetTilt(double t)\n\nGet the value for this widget.\n"},
  {(char*)"GetDistance", PyvtkCompassWidget_GetDistance, 1,
   (char*)"V.GetDistance() -> float\nC++: double GetDistance()\n\nGet the value for this widget.\n"},
  {(char*)"SetDistance", PyvtkCompassWidget_SetDistance, 1,
   (char*)"V.SetDistance(float)\nC++: void SetDistance(double t)\n\nGet the value for this widget.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCompassWidget_StaticNew()
{
  return vtkCompassWidget::New();
}

PyObject *PyVTKClass_vtkCompassWidgetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCompassWidget_StaticNew,
    PyvtkCompassWidget_Methods,
    "vtkCompassWidget", modulename,
    NULL, NULL,
    PyvtkCompassWidget_Doc(),
    PyVTKClass_vtkAbstractWidgetNew(modulename));
  return cls;
}

const char **PyvtkCompassWidget_Doc()
{
  static const char *docstring[] = {
    "vtkCompassWidget - set a value by manipulating something\n\n",
    "Superclass: vtkAbstractWidget\n\n",
    "The vtkCompassWidget is used to adjust a scalar value in an\napplication. Note that the actual appearance of the widget depends on\nthe specific representation for the widget.\n\nTo use this widget, set the widget representation. (the details may\nvary depending on the particulars of the representation).\n\nEvent Bindings:\n\nBy default, the widget responds to the following VTK events (i.e., it\nwatches the",
    " vtkRenderWindowInteractor for these events):\n\nIf the slider bead is selected:\n  LeftButtonPressEvent - select slider\n  LeftButtonReleaseEvent - release slider\n  MouseMoveEvent - move slider \n\nNote that the event bindings described above can be changed using\nthis class's vtkWidgetEventTranslator. This class translates VTK\nevents into the vtkCompassWidget's widget events:\n\n\n  vtkWidgetEvent::Select",
    " -- some part of the widget has been selected\n  vtkWidgetEvent::EndSelect -- the selection process has completed\n  vtkWidgetEvent::Move -- a request for slider motion has been\ninvoked \n\nIn turn, when these widget events are processed, the vtkCompassWidget\ninvokes the following VTK events on itself (which observers can\nlisten for):\n\n\n  vtkCommand::StartInteractionEvent (on vtkWidgetEvent::Select)\n ",
    " vtkCommand::EndInteractionEvent (on vtkWidgetEvent::EndSelect)\n  vtkCommand::InteractionEvent (on vtkWidgetEvent::Move) \n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCompassWidget(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCompassWidgetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCompassWidget", o) != 0)
    {
    Py_DECREF(o);
    }

}

