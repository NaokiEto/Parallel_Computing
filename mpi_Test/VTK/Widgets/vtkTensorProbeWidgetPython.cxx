// python wrapper for vtkTensorProbeWidget
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
#include "vtkTensorProbeWidget.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTensorProbeWidget(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTensorProbeWidget(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTensorProbeWidgetNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTensorProbeWidgetNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAbstractWidgetNew
extern "C" { PyObject *PyVTKClass_vtkAbstractWidgetNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractWidgetNew
#endif

static const char **PyvtkTensorProbeWidget_Doc();


static PyObject *
PyvtkTensorProbeWidget_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeWidget *op = static_cast<vtkTensorProbeWidget *>(vp);

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
      tempr = op->vtkTensorProbeWidget::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTensorProbeWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeWidget *op = static_cast<vtkTensorProbeWidget *>(vp);

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
      tempr = op->vtkTensorProbeWidget::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTensorProbeWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeWidget *op = static_cast<vtkTensorProbeWidget *>(vp);

  vtkTensorProbeWidget *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTensorProbeWidget::NewInstance();
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
PyvtkTensorProbeWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTensorProbeWidget *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTensorProbeWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTensorProbeWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeWidget *op = static_cast<vtkTensorProbeWidget *>(vp);

  vtkTensorProbeRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTensorProbeRepresentation"))
    {
    if (ap.IsBound())
      {
      op->SetRepresentation(temp0);
      }
    else
      {
      op->vtkTensorProbeWidget::SetRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTensorProbeWidget_GetTensorProbeRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensorProbeRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeWidget *op = static_cast<vtkTensorProbeWidget *>(vp);

  vtkTensorProbeRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTensorProbeRepresentation();
      }
    else
      {
      tempr = op->vtkTensorProbeWidget::GetTensorProbeRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTensorProbeWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeWidget *op = static_cast<vtkTensorProbeWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultRepresentation();
      }
    else
      {
      op->vtkTensorProbeWidget::CreateDefaultRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTensorProbeWidget_Methods[] = {
  {(char*)"GetClassName", PyvtkTensorProbeWidget_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK class macros.\n"},
  {(char*)"IsA", PyvtkTensorProbeWidget_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK class macros.\n"},
  {(char*)"NewInstance", PyvtkTensorProbeWidget_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTensorProbeWidget\nC++: vtkTensorProbeWidget *NewInstance()\n\nStandard VTK class macros.\n"},
  {(char*)"SafeDownCast", PyvtkTensorProbeWidget_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTensorProbeWidget\nC++: vtkTensorProbeWidget *SafeDownCast(vtkObject* o)\n\nStandard VTK class macros.\n"},
  {(char*)"SetRepresentation", PyvtkTensorProbeWidget_SetRepresentation, 1,
   (char*)"V.SetRepresentation(vtkTensorProbeRepresentation)\nC++: void SetRepresentation(vtkTensorProbeRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {(char*)"GetTensorProbeRepresentation", PyvtkTensorProbeWidget_GetTensorProbeRepresentation, 1,
   (char*)"V.GetTensorProbeRepresentation() -> vtkTensorProbeRepresentation\nC++: vtkTensorProbeRepresentation *GetTensorProbeRepresentation()\n\nReturn the representation as a vtkTensorProbeRepresentation.\n"},
  {(char*)"CreateDefaultRepresentation", PyvtkTensorProbeWidget_CreateDefaultRepresentation, 1,
   (char*)"V.CreateDefaultRepresentation()\nC++: virtual void CreateDefaultRepresentation()\n\nSee vtkWidgetRepresentation for details.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTensorProbeWidget_StaticNew()
{
  return vtkTensorProbeWidget::New();
}

PyObject *PyVTKClass_vtkTensorProbeWidgetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTensorProbeWidget_StaticNew,
    PyvtkTensorProbeWidget_Methods,
    "vtkTensorProbeWidget", modulename,
    NULL, NULL,
    PyvtkTensorProbeWidget_Doc(),
    PyVTKClass_vtkAbstractWidgetNew(modulename));
  return cls;
}

const char **PyvtkTensorProbeWidget_Doc()
{
  static const char *docstring[] = {
    "vtkTensorProbeWidget - a widget to probe tensors on a polyline\n\n",
    "Superclass: vtkAbstractWidget\n\n",
    "The class is used to probe tensors on a trajectory. The\nrepresentation (vtkTensorProbeRepresentation) is free to choose its\nown method of rendering the tensors. For instance\nvtkEllipsoidTensorProbeRepresentation renders the tensors as\nellipsoids. The interactions of the widget are controlled by the left\nmouse button. A left click on the tensor selects it. It can dragged\naround the trajectory to pr",
    "obe the tensors on it.\n\nFor instance dragging the ellipsoid around with\nvtkEllipsoidTensorProbeRepresentation will manifest itself with the\nellipsoid shape changing as needed along the trajectory.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTensorProbeWidget(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTensorProbeWidgetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTensorProbeWidget", o) != 0)
    {
    Py_DECREF(o);
    }

}

