// python wrapper for vtkParallelopipedWidget
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
#include "vtkParallelopipedWidget.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkParallelopipedWidget(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkParallelopipedWidget(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkParallelopipedWidgetNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkParallelopipedWidgetNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAbstractWidgetNew
extern "C" { PyObject *PyVTKClass_vtkAbstractWidgetNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractWidgetNew
#endif

static const char **PyvtkParallelopipedWidget_Doc();


static PyObject *
PyvtkParallelopipedWidget_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedWidget *op = static_cast<vtkParallelopipedWidget *>(vp);

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
      tempr = op->vtkParallelopipedWidget::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedWidget *op = static_cast<vtkParallelopipedWidget *>(vp);

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
      tempr = op->vtkParallelopipedWidget::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedWidget *op = static_cast<vtkParallelopipedWidget *>(vp);

  vtkParallelopipedWidget *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkParallelopipedWidget::NewInstance();
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
PyvtkParallelopipedWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkParallelopipedWidget *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkParallelopipedWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedWidget *op = static_cast<vtkParallelopipedWidget *>(vp);

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
      op->vtkParallelopipedWidget::SetEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedWidget *op = static_cast<vtkParallelopipedWidget *>(vp);

  vtkParallelopipedRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkParallelopipedRepresentation"))
    {
    if (ap.IsBound())
      {
      op->SetRepresentation(temp0);
      }
    else
      {
      op->vtkParallelopipedWidget::SetRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedWidget_GetParallelopipedRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParallelopipedRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedWidget *op = static_cast<vtkParallelopipedWidget *>(vp);

  vtkParallelopipedRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetParallelopipedRepresentation();
      }
    else
      {
      tempr = op->vtkParallelopipedWidget::GetParallelopipedRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedWidget_SetEnableChairCreation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableChairCreation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedWidget *op = static_cast<vtkParallelopipedWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnableChairCreation(temp0);
      }
    else
      {
      op->vtkParallelopipedWidget::SetEnableChairCreation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedWidget_GetEnableChairCreation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableChairCreation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedWidget *op = static_cast<vtkParallelopipedWidget *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEnableChairCreation();
      }
    else
      {
      tempr = op->vtkParallelopipedWidget::GetEnableChairCreation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedWidget_EnableChairCreationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableChairCreationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedWidget *op = static_cast<vtkParallelopipedWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableChairCreationOn();
      }
    else
      {
      op->vtkParallelopipedWidget::EnableChairCreationOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedWidget_EnableChairCreationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableChairCreationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedWidget *op = static_cast<vtkParallelopipedWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableChairCreationOff();
      }
    else
      {
      op->vtkParallelopipedWidget::EnableChairCreationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedWidget *op = static_cast<vtkParallelopipedWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultRepresentation();
      }
    else
      {
      op->vtkParallelopipedWidget::CreateDefaultRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedWidget_SetProcessEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedWidget *op = static_cast<vtkParallelopipedWidget *>(vp);

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
      op->vtkParallelopipedWidget::SetProcessEvents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkParallelopipedWidget_Methods[] = {
  {(char*)"GetClassName", PyvtkParallelopipedWidget_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkParallelopipedWidget_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkParallelopipedWidget_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkParallelopipedWidget\nC++: vtkParallelopipedWidget *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkParallelopipedWidget_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkParallelopipedWidget\nC++: vtkParallelopipedWidget *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetEnabled", PyvtkParallelopipedWidget_SetEnabled, 1,
   (char*)"V.SetEnabled(int)\nC++: virtual void SetEnabled(int)\n\nOverride the superclass method. This is a composite widget, (it\ninternally consists of handle widgets). We will override the\nsuperclass method, so that we can pass the enabled state to the\ninternal widgets as well.\n"},
  {(char*)"SetRepresentation", PyvtkParallelopipedWidget_SetRepresentation, 1,
   (char*)"V.SetRepresentation(vtkParallelopipedRepresentation)\nC++: void SetRepresentation(vtkParallelopipedRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {(char*)"GetParallelopipedRepresentation", PyvtkParallelopipedWidget_GetParallelopipedRepresentation, 1,
   (char*)"V.GetParallelopipedRepresentation()\n    -> vtkParallelopipedRepresentation\nC++: vtkParallelopipedRepresentation *GetParallelopipedRepresentation(\n    )\n\nReturn the representation as a vtkParallelopipedRepresentation.\n"},
  {(char*)"SetEnableChairCreation", PyvtkParallelopipedWidget_SetEnableChairCreation, 1,
   (char*)"V.SetEnableChairCreation(int)\nC++: void SetEnableChairCreation(int a)\n\nEnable/disable the creation of a chair on this widget. If off,\nchairs cannot be created.\n"},
  {(char*)"GetEnableChairCreation", PyvtkParallelopipedWidget_GetEnableChairCreation, 1,
   (char*)"V.GetEnableChairCreation() -> int\nC++: int GetEnableChairCreation()\n\nEnable/disable the creation of a chair on this widget. If off,\nchairs cannot be created.\n"},
  {(char*)"EnableChairCreationOn", PyvtkParallelopipedWidget_EnableChairCreationOn, 1,
   (char*)"V.EnableChairCreationOn()\nC++: void EnableChairCreationOn()\n\nEnable/disable the creation of a chair on this widget. If off,\nchairs cannot be created.\n"},
  {(char*)"EnableChairCreationOff", PyvtkParallelopipedWidget_EnableChairCreationOff, 1,
   (char*)"V.EnableChairCreationOff()\nC++: void EnableChairCreationOff()\n\nEnable/disable the creation of a chair on this widget. If off,\nchairs cannot be created.\n"},
  {(char*)"CreateDefaultRepresentation", PyvtkParallelopipedWidget_CreateDefaultRepresentation, 1,
   (char*)"V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation()\n\nCreate the default widget representation if one is not set.\n"},
  {(char*)"SetProcessEvents", PyvtkParallelopipedWidget_SetProcessEvents, 1,
   (char*)"V.SetProcessEvents(int)\nC++: virtual void SetProcessEvents(int)\n\nMethods to change the whether the widget responds to interaction.\nOverridden to pass the state to component widgets.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkParallelopipedWidget_StaticNew()
{
  return vtkParallelopipedWidget::New();
}

PyObject *PyVTKClass_vtkParallelopipedWidgetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkParallelopipedWidget_StaticNew,
    PyvtkParallelopipedWidget_Methods,
    "vtkParallelopipedWidget", modulename,
    NULL, NULL,
    PyvtkParallelopipedWidget_Doc(),
    PyVTKClass_vtkAbstractWidgetNew(modulename));
  return cls;
}

const char **PyvtkParallelopipedWidget_Doc()
{
  static const char *docstring[] = {
    "vtkParallelopipedWidget - a widget to manipulate 3D parallelopipeds\n\n",
    "Superclass: vtkAbstractWidget\n\n",
    "This widget was designed with the aim of visualizing / probing cuts\non a skewed image data / structured grid.\n\nInteraction:\n\nThe widget allows you to create a parallelopiped (defined by 8\nhandles). The widget is initially placed by using the \"PlaceWidget\"\nmethod in the representation class. After the widget has been\ncreated, the following interactions may be used to manipulate it :\n1) Click on a h",
    "andle and drag it around moves the handle in space,\n   while keeping the same axis alignment of the parallelopiped\n2) Dragging a handle with the shift button pressed resizes the piped\n   along an axis.\n3) Control-click on a handle creates a chair at that position. (A\n   chair is a depression in the piped that allows you to visualize\n   cuts in the volume).\n4) Clicking on a chair and dragging it ar",
    "ound moves the chair within\n   the piped.\n5) Shift-click on the piped enables you to translate it.\n\nCaveats:\n\nSee Also:\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkParallelopipedWidget(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkParallelopipedWidgetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkParallelopipedWidget", o) != 0)
    {
    Py_DECREF(o);
    }

}

