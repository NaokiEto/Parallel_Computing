// python wrapper for vtkXYPlotWidget
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
#include "vtkXYPlotWidget.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXYPlotWidget(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXYPlotWidget(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXYPlotWidgetNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXYPlotWidgetNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkInteractorObserverNew
extern "C" { PyObject *PyVTKClass_vtkInteractorObserverNew(const char *); }
#define DECLARED_PyVTKClass_vtkInteractorObserverNew
#endif

static const char **PyvtkXYPlotWidget_Doc();


static PyObject *
PyvtkXYPlotWidget_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotWidget *op = static_cast<vtkXYPlotWidget *>(vp);

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
      tempr = op->vtkXYPlotWidget::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotWidget *op = static_cast<vtkXYPlotWidget *>(vp);

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
      tempr = op->vtkXYPlotWidget::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotWidget *op = static_cast<vtkXYPlotWidget *>(vp);

  vtkXYPlotWidget *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXYPlotWidget::NewInstance();
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
PyvtkXYPlotWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkXYPlotWidget *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkXYPlotWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotWidget_SetXYPlotActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXYPlotActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotWidget *op = static_cast<vtkXYPlotWidget *>(vp);

  vtkXYPlotActor *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkXYPlotActor"))
    {
    if (ap.IsBound())
      {
      op->SetXYPlotActor(temp0);
      }
    else
      {
      op->vtkXYPlotWidget::SetXYPlotActor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotWidget_GetXYPlotActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXYPlotActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotWidget *op = static_cast<vtkXYPlotWidget *>(vp);

  vtkXYPlotActor *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXYPlotActor();
      }
    else
      {
      tempr = op->vtkXYPlotWidget::GetXYPlotActor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotWidget *op = static_cast<vtkXYPlotWidget *>(vp);

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
      op->vtkXYPlotWidget::SetEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkXYPlotWidget_Methods[] = {
  {(char*)"GetClassName", PyvtkXYPlotWidget_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXYPlotWidget_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXYPlotWidget_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXYPlotWidget\nC++: vtkXYPlotWidget *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXYPlotWidget_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXYPlotWidget\nC++: vtkXYPlotWidget *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetXYPlotActor", PyvtkXYPlotWidget_SetXYPlotActor, 1,
   (char*)"V.SetXYPlotActor(vtkXYPlotActor)\nC++: virtual void SetXYPlotActor(vtkXYPlotActor *)\n\nGet the XY plot used by this Widget. One is created\nautomatically.\n"},
  {(char*)"GetXYPlotActor", PyvtkXYPlotWidget_GetXYPlotActor, 1,
   (char*)"V.GetXYPlotActor() -> vtkXYPlotActor\nC++: vtkXYPlotActor *GetXYPlotActor()\n\nGet the XY plot used by this Widget. One is created\nautomatically.\n"},
  {(char*)"SetEnabled", PyvtkXYPlotWidget_SetEnabled, 1,
   (char*)"V.SetEnabled(int)\nC++: virtual void SetEnabled(int)\n\nMethods for turning the interactor observer on and off.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXYPlotWidget_StaticNew()
{
  return vtkXYPlotWidget::New();
}

PyObject *PyVTKClass_vtkXYPlotWidgetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXYPlotWidget_StaticNew,
    PyvtkXYPlotWidget_Methods,
    "vtkXYPlotWidget", modulename,
    NULL, NULL,
    PyvtkXYPlotWidget_Doc(),
    PyVTKClass_vtkInteractorObserverNew(modulename));
  return cls;
}

const char **PyvtkXYPlotWidget_Doc()
{
  static const char *docstring[] = {
    "vtkXYPlotWidget - 2D widget for manipulating a XY plot\n\n",
    "Superclass: vtkInteractorObserver\n\n",
    "This class provides support for interactively manipulating the\nposition, size, and orientation of a XY Plot. It listens to Left\nmouse events and mouse movement. It will change the cursor shape\nbased on its location. If the cursor is over an edge of thea XY plot\nit will change the cursor shape to a resize edge shape. If the\nposition of a XY plot is moved to be close to the center of one of\nthe four",
    " edges of the viewport, then the XY plot will change its\norientation to align with that edge. This orientation is sticky in\nthat it will stay that orientation until the position is moved close\nto another edge.\n\nSee Also:\n\nvtkInteractorObserver\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXYPlotWidget(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXYPlotWidgetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXYPlotWidget", o) != 0)
    {
    Py_DECREF(o);
    }

}

