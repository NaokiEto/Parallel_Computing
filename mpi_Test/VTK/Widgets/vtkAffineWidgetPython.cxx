// python wrapper for vtkAffineWidget
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
#include "vtkAffineWidget.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkAffineWidget(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkAffineWidget(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkAffineWidgetNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkAffineWidgetNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAbstractWidgetNew
extern "C" { PyObject *PyVTKClass_vtkAbstractWidgetNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractWidgetNew
#endif

static const char **PyvtkAffineWidget_Doc();


static PyObject *
PyvtkAffineWidget_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineWidget *op = static_cast<vtkAffineWidget *>(vp);

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
      tempr = op->vtkAffineWidget::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAffineWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineWidget *op = static_cast<vtkAffineWidget *>(vp);

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
      tempr = op->vtkAffineWidget::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAffineWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineWidget *op = static_cast<vtkAffineWidget *>(vp);

  vtkAffineWidget *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkAffineWidget::NewInstance();
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
PyvtkAffineWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkAffineWidget *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkAffineWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAffineWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineWidget *op = static_cast<vtkAffineWidget *>(vp);

  vtkAffineRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAffineRepresentation"))
    {
    if (ap.IsBound())
      {
      op->SetRepresentation(temp0);
      }
    else
      {
      op->vtkAffineWidget::SetRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAffineWidget_GetAffineRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAffineRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineWidget *op = static_cast<vtkAffineWidget *>(vp);

  vtkAffineRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAffineRepresentation();
      }
    else
      {
      tempr = op->vtkAffineWidget::GetAffineRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAffineWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineWidget *op = static_cast<vtkAffineWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultRepresentation();
      }
    else
      {
      op->vtkAffineWidget::CreateDefaultRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAffineWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineWidget *op = static_cast<vtkAffineWidget *>(vp);

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
      op->vtkAffineWidget::SetEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAffineWidget_Methods[] = {
  {(char*)"GetClassName", PyvtkAffineWidget_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK class macros.\n"},
  {(char*)"IsA", PyvtkAffineWidget_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK class macros.\n"},
  {(char*)"NewInstance", PyvtkAffineWidget_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkAffineWidget\nC++: vtkAffineWidget *NewInstance()\n\nStandard VTK class macros.\n"},
  {(char*)"SafeDownCast", PyvtkAffineWidget_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAffineWidget\nC++: vtkAffineWidget *SafeDownCast(vtkObject* o)\n\nStandard VTK class macros.\n"},
  {(char*)"SetRepresentation", PyvtkAffineWidget_SetRepresentation, 1,
   (char*)"V.SetRepresentation(vtkAffineRepresentation)\nC++: void SetRepresentation(vtkAffineRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {(char*)"GetAffineRepresentation", PyvtkAffineWidget_GetAffineRepresentation, 1,
   (char*)"V.GetAffineRepresentation() -> vtkAffineRepresentation\nC++: vtkAffineRepresentation *GetAffineRepresentation()\n\nReturn the representation as a vtkAffineRepresentation.\n"},
  {(char*)"CreateDefaultRepresentation", PyvtkAffineWidget_CreateDefaultRepresentation, 1,
   (char*)"V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation()\n\nCreate the default widget representation if one is not set.\n"},
  {(char*)"SetEnabled", PyvtkAffineWidget_SetEnabled, 1,
   (char*)"V.SetEnabled(int)\nC++: virtual void SetEnabled(int)\n\nMethods for activiating this widget. This implementation extends\nthe superclasses' in order to resize the widget handles due to a\nrender start event.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAffineWidget_StaticNew()
{
  return vtkAffineWidget::New();
}

PyObject *PyVTKClass_vtkAffineWidgetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAffineWidget_StaticNew,
    PyvtkAffineWidget_Methods,
    "vtkAffineWidget", modulename,
    NULL, NULL,
    PyvtkAffineWidget_Doc(),
    PyVTKClass_vtkAbstractWidgetNew(modulename));
  return cls;
}

const char **PyvtkAffineWidget_Doc()
{
  static const char *docstring[] = {
    "vtkAffineWidget - perform affine transformations\n\n",
    "Superclass: vtkAbstractWidget\n\n",
    "The vtkAffineWidget is used to perform affine transformations on\nobjects. (Affine transformations are transformations that keep\nparallel lines parallel. Affine transformations include translation,\nscaling, rotation, and shearing.)\n\nTo use this widget, set the widget representation. The representation\nmaintains a transformation matrix and other instance variables\nconsistent with the transformations",
    " applied by this widget.\n\nEvent Bindings:\n\nBy default, the widget responds to the following VTK events (i.e., it\nwatches the vtkRenderWindowInteractor for these events):\n\n\n  LeftButtonPressEvent - select widget: depending on which part is\nselected\n                         translation, rotation, scaling, or shearing\nmay follow.\n  LeftButtonReleaseEvent - end selection of widget.\n  MouseMoveEvent - ",
    "interactive movement across widget \n\nNote that the event bindings described above can be changed using\nthis class's vtkWidgetEventTranslator. This class translates VTK\nevents into the vtkAffineWidget's widget events:\n\n\n  vtkWidgetEvent::Select -- focal point is being selected\n  vtkWidgetEvent::EndSelect -- the selection process has completed\n  vtkWidgetEvent::Move -- a request for widget motion \n\n",
    "In turn, when these widget events are processed, the vtkAffineWidget\ninvokes the following VTK events on itself (which observers can\nlisten for):\n\n\n  vtkCommand::StartInteractionEvent (on vtkWidgetEvent::Select)\n  vtkCommand::EndInteractionEvent (on vtkWidgetEvent::EndSelect)\n  vtkCommand::InteractionEvent (on vtkWidgetEvent::Move) \n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAffineWidget(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAffineWidgetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAffineWidget", o) != 0)
    {
    Py_DECREF(o);
    }

}

