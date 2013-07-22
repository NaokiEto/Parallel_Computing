// python wrapper for vtkCheckerboardWidget
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
#include "vtkCheckerboardWidget.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCheckerboardWidget(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCheckerboardWidget(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCheckerboardWidgetNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCheckerboardWidgetNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAbstractWidgetNew
extern "C" { PyObject *PyVTKClass_vtkAbstractWidgetNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractWidgetNew
#endif

static const char **PyvtkCheckerboardWidget_Doc();


static PyObject *
PyvtkCheckerboardWidget_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardWidget *op = static_cast<vtkCheckerboardWidget *>(vp);

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
      tempr = op->vtkCheckerboardWidget::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardWidget *op = static_cast<vtkCheckerboardWidget *>(vp);

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
      tempr = op->vtkCheckerboardWidget::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardWidget *op = static_cast<vtkCheckerboardWidget *>(vp);

  vtkCheckerboardWidget *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCheckerboardWidget::NewInstance();
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
PyvtkCheckerboardWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCheckerboardWidget *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCheckerboardWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardWidget *op = static_cast<vtkCheckerboardWidget *>(vp);

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
      op->vtkCheckerboardWidget::SetEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardWidget *op = static_cast<vtkCheckerboardWidget *>(vp);

  vtkCheckerboardRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCheckerboardRepresentation"))
    {
    if (ap.IsBound())
      {
      op->SetRepresentation(temp0);
      }
    else
      {
      op->vtkCheckerboardWidget::SetRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardWidget_GetCheckerboardRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCheckerboardRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardWidget *op = static_cast<vtkCheckerboardWidget *>(vp);

  vtkCheckerboardRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCheckerboardRepresentation();
      }
    else
      {
      tempr = op->vtkCheckerboardWidget::GetCheckerboardRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardWidget *op = static_cast<vtkCheckerboardWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultRepresentation();
      }
    else
      {
      op->vtkCheckerboardWidget::CreateDefaultRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCheckerboardWidget_Methods[] = {
  {(char*)"GetClassName", PyvtkCheckerboardWidget_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for a VTK class.\n"},
  {(char*)"IsA", PyvtkCheckerboardWidget_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for a VTK class.\n"},
  {(char*)"NewInstance", PyvtkCheckerboardWidget_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCheckerboardWidget\nC++: vtkCheckerboardWidget *NewInstance()\n\nStandard methods for a VTK class.\n"},
  {(char*)"SafeDownCast", PyvtkCheckerboardWidget_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCheckerboardWidget\nC++: vtkCheckerboardWidget *SafeDownCast(vtkObject* o)\n\nStandard methods for a VTK class.\n"},
  {(char*)"SetEnabled", PyvtkCheckerboardWidget_SetEnabled, 1,
   (char*)"V.SetEnabled(int)\nC++: virtual void SetEnabled(int)\n\nThe method for activiating and deactiviating this widget. This\nmethod must be overridden because it is a composite widget and\ndoes more than its superclasses' vtkAbstractWidget::SetEnabled()\nmethod.\n"},
  {(char*)"SetRepresentation", PyvtkCheckerboardWidget_SetRepresentation, 1,
   (char*)"V.SetRepresentation(vtkCheckerboardRepresentation)\nC++: void SetRepresentation(vtkCheckerboardRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {(char*)"GetCheckerboardRepresentation", PyvtkCheckerboardWidget_GetCheckerboardRepresentation, 1,
   (char*)"V.GetCheckerboardRepresentation() -> vtkCheckerboardRepresentation\nC++: vtkCheckerboardRepresentation *GetCheckerboardRepresentation(\n    )\n\nReturn the representation as a vtkCheckerboardRepresentation.\n"},
  {(char*)"CreateDefaultRepresentation", PyvtkCheckerboardWidget_CreateDefaultRepresentation, 1,
   (char*)"V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation()\n\nCreate the default widget representation if one is not set.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCheckerboardWidget_StaticNew()
{
  return vtkCheckerboardWidget::New();
}

PyObject *PyVTKClass_vtkCheckerboardWidgetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCheckerboardWidget_StaticNew,
    PyvtkCheckerboardWidget_Methods,
    "vtkCheckerboardWidget", modulename,
    NULL, NULL,
    PyvtkCheckerboardWidget_Doc(),
    PyVTKClass_vtkAbstractWidgetNew(modulename));
  return cls;
}

const char **PyvtkCheckerboardWidget_Doc()
{
  static const char *docstring[] = {
    "vtkCheckerboardWidget - interactively set the number of divisions in\n2D image checkerboard\n\n",
    "Superclass: vtkAbstractWidget\n\n",
    "The vtkCheckerboardWidget is used to interactively control an\ninstance of vtkImageCheckerboard (and an associated vtkImageActor\nused to display the checkerboard). The user can adjust the number of\ndivisions in each of the i-j directions in a 2D image. A frame\nappears around the vtkImageActor with sliders along each side of the\nframe. The user can interactively adjust the sliders to the desired\nnum",
    "ber of checkerboard subdivisions.\n\nTo use this widget, specify an instance of vtkImageCheckerboard and\nan instance of vtkImageActor. By default, the widget responds to the\nfollowing events:\n\nIf the slider bead is selected:\n  LeftButtonPressEvent - select slider (if on slider)\n  LeftButtonReleaseEvent - release slider\n  MouseMoveEvent - move slider If the end caps or slider tube of a\nslider are sel",
    "ected:\n  LeftButtonPressEvent - jump (or animate) to cap or point on tube; \nIt is possible to change these event bindings. Please refer to the\ndocumentation for vtkSliderWidget for more information. Advanced\nusers may directly access and manipulate the sliders by obtaining the\ninstances of vtkSliderWidget composing the vtkCheckerboard widget.\n\nSee Also:\n\nvtkImageCheckerboard vtkImageActor vtkSlide",
    "rWidget\nvtkRectilinearWipeWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCheckerboardWidget(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCheckerboardWidgetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCheckerboardWidget", o) != 0)
    {
    Py_DECREF(o);
    }

}

