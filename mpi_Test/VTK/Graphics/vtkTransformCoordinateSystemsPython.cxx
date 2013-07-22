// python wrapper for vtkTransformCoordinateSystems
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
#include "vtkTransformCoordinateSystems.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTransformCoordinateSystems(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTransformCoordinateSystems(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTransformCoordinateSystemsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTransformCoordinateSystemsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPointSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPointSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPointSetAlgorithmNew
#endif

static const char **PyvtkTransformCoordinateSystems_Doc();


static PyObject *
PyvtkTransformCoordinateSystems_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCoordinateSystems *op = static_cast<vtkTransformCoordinateSystems *>(vp);

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
      tempr = op->vtkTransformCoordinateSystems::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformCoordinateSystems_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCoordinateSystems *op = static_cast<vtkTransformCoordinateSystems *>(vp);

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
      tempr = op->vtkTransformCoordinateSystems::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformCoordinateSystems_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCoordinateSystems *op = static_cast<vtkTransformCoordinateSystems *>(vp);

  vtkTransformCoordinateSystems *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTransformCoordinateSystems::NewInstance();
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
PyvtkTransformCoordinateSystems_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTransformCoordinateSystems *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTransformCoordinateSystems::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformCoordinateSystems_SetInputCoordinateSystem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputCoordinateSystem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCoordinateSystems *op = static_cast<vtkTransformCoordinateSystems *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInputCoordinateSystem(temp0);
      }
    else
      {
      op->vtkTransformCoordinateSystems::SetInputCoordinateSystem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransformCoordinateSystems_GetInputCoordinateSystem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputCoordinateSystem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCoordinateSystems *op = static_cast<vtkTransformCoordinateSystems *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInputCoordinateSystem();
      }
    else
      {
      tempr = op->vtkTransformCoordinateSystems::GetInputCoordinateSystem();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformCoordinateSystems_SetInputCoordinateSystemToDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputCoordinateSystemToDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCoordinateSystems *op = static_cast<vtkTransformCoordinateSystems *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInputCoordinateSystemToDisplay();
      }
    else
      {
      op->vtkTransformCoordinateSystems::SetInputCoordinateSystemToDisplay();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransformCoordinateSystems_SetInputCoordinateSystemToViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputCoordinateSystemToViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCoordinateSystems *op = static_cast<vtkTransformCoordinateSystems *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInputCoordinateSystemToViewport();
      }
    else
      {
      op->vtkTransformCoordinateSystems::SetInputCoordinateSystemToViewport();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransformCoordinateSystems_SetInputCoordinateSystemToWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputCoordinateSystemToWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCoordinateSystems *op = static_cast<vtkTransformCoordinateSystems *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInputCoordinateSystemToWorld();
      }
    else
      {
      op->vtkTransformCoordinateSystems::SetInputCoordinateSystemToWorld();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransformCoordinateSystems_SetOutputCoordinateSystem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputCoordinateSystem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCoordinateSystems *op = static_cast<vtkTransformCoordinateSystems *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputCoordinateSystem(temp0);
      }
    else
      {
      op->vtkTransformCoordinateSystems::SetOutputCoordinateSystem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransformCoordinateSystems_GetOutputCoordinateSystem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputCoordinateSystem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCoordinateSystems *op = static_cast<vtkTransformCoordinateSystems *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputCoordinateSystem();
      }
    else
      {
      tempr = op->vtkTransformCoordinateSystems::GetOutputCoordinateSystem();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformCoordinateSystems_SetOutputCoordinateSystemToDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputCoordinateSystemToDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCoordinateSystems *op = static_cast<vtkTransformCoordinateSystems *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputCoordinateSystemToDisplay();
      }
    else
      {
      op->vtkTransformCoordinateSystems::SetOutputCoordinateSystemToDisplay();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransformCoordinateSystems_SetOutputCoordinateSystemToViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputCoordinateSystemToViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCoordinateSystems *op = static_cast<vtkTransformCoordinateSystems *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputCoordinateSystemToViewport();
      }
    else
      {
      op->vtkTransformCoordinateSystems::SetOutputCoordinateSystemToViewport();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransformCoordinateSystems_SetOutputCoordinateSystemToWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputCoordinateSystemToWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCoordinateSystems *op = static_cast<vtkTransformCoordinateSystems *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputCoordinateSystemToWorld();
      }
    else
      {
      op->vtkTransformCoordinateSystems::SetOutputCoordinateSystemToWorld();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransformCoordinateSystems_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCoordinateSystems *op = static_cast<vtkTransformCoordinateSystems *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMTime();
      }
    else
      {
      tempr = op->vtkTransformCoordinateSystems::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformCoordinateSystems_SetViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCoordinateSystems *op = static_cast<vtkTransformCoordinateSystems *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      op->SetViewport(temp0);
      }
    else
      {
      op->vtkTransformCoordinateSystems::SetViewport(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransformCoordinateSystems_GetViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCoordinateSystems *op = static_cast<vtkTransformCoordinateSystems *>(vp);

  vtkViewport *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetViewport();
      }
    else
      {
      tempr = op->vtkTransformCoordinateSystems::GetViewport();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTransformCoordinateSystems_Methods[] = {
  {(char*)"GetClassName", PyvtkTransformCoordinateSystems_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for type information and printing.\n"},
  {(char*)"IsA", PyvtkTransformCoordinateSystems_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for type information and printing.\n"},
  {(char*)"NewInstance", PyvtkTransformCoordinateSystems_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTransformCoordinateSystems\nC++: vtkTransformCoordinateSystems *NewInstance()\n\nStandard methods for type information and printing.\n"},
  {(char*)"SafeDownCast", PyvtkTransformCoordinateSystems_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTransformCoordinateSystems\nC++: vtkTransformCoordinateSystems *SafeDownCast(vtkObject* o)\n\nStandard methods for type information and printing.\n"},
  {(char*)"SetInputCoordinateSystem", PyvtkTransformCoordinateSystems_SetInputCoordinateSystem, 1,
   (char*)"V.SetInputCoordinateSystem(int)\nC++: void SetInputCoordinateSystem(int a)\n\nSet/get the coordinate system in which the input is specified.\nThe current options are World, Viewport, and Display. By default\nthe input coordinate system is World.\n"},
  {(char*)"GetInputCoordinateSystem", PyvtkTransformCoordinateSystems_GetInputCoordinateSystem, 1,
   (char*)"V.GetInputCoordinateSystem() -> int\nC++: int GetInputCoordinateSystem()\n\nSet/get the coordinate system in which the input is specified.\nThe current options are World, Viewport, and Display. By default\nthe input coordinate system is World.\n"},
  {(char*)"SetInputCoordinateSystemToDisplay", PyvtkTransformCoordinateSystems_SetInputCoordinateSystemToDisplay, 1,
   (char*)"V.SetInputCoordinateSystemToDisplay()\nC++: void SetInputCoordinateSystemToDisplay()\n\nSet/get the coordinate system in which the input is specified.\nThe current options are World, Viewport, and Display. By default\nthe input coordinate system is World.\n"},
  {(char*)"SetInputCoordinateSystemToViewport", PyvtkTransformCoordinateSystems_SetInputCoordinateSystemToViewport, 1,
   (char*)"V.SetInputCoordinateSystemToViewport()\nC++: void SetInputCoordinateSystemToViewport()\n\nSet/get the coordinate system in which the input is specified.\nThe current options are World, Viewport, and Display. By default\nthe input coordinate system is World.\n"},
  {(char*)"SetInputCoordinateSystemToWorld", PyvtkTransformCoordinateSystems_SetInputCoordinateSystemToWorld, 1,
   (char*)"V.SetInputCoordinateSystemToWorld()\nC++: void SetInputCoordinateSystemToWorld()\n\nSet/get the coordinate system in which the input is specified.\nThe current options are World, Viewport, and Display. By default\nthe input coordinate system is World.\n"},
  {(char*)"SetOutputCoordinateSystem", PyvtkTransformCoordinateSystems_SetOutputCoordinateSystem, 1,
   (char*)"V.SetOutputCoordinateSystem(int)\nC++: void SetOutputCoordinateSystem(int a)\n\nSet/get the coordinate system to which to transform the output.\nThe current options are World, Viewport, and Display. By default\nthe output coordinate system is Display.\n"},
  {(char*)"GetOutputCoordinateSystem", PyvtkTransformCoordinateSystems_GetOutputCoordinateSystem, 1,
   (char*)"V.GetOutputCoordinateSystem() -> int\nC++: int GetOutputCoordinateSystem()\n\nSet/get the coordinate system to which to transform the output.\nThe current options are World, Viewport, and Display. By default\nthe output coordinate system is Display.\n"},
  {(char*)"SetOutputCoordinateSystemToDisplay", PyvtkTransformCoordinateSystems_SetOutputCoordinateSystemToDisplay, 1,
   (char*)"V.SetOutputCoordinateSystemToDisplay()\nC++: void SetOutputCoordinateSystemToDisplay()\n\nSet/get the coordinate system to which to transform the output.\nThe current options are World, Viewport, and Display. By default\nthe output coordinate system is Display.\n"},
  {(char*)"SetOutputCoordinateSystemToViewport", PyvtkTransformCoordinateSystems_SetOutputCoordinateSystemToViewport, 1,
   (char*)"V.SetOutputCoordinateSystemToViewport()\nC++: void SetOutputCoordinateSystemToViewport()\n\nSet/get the coordinate system to which to transform the output.\nThe current options are World, Viewport, and Display. By default\nthe output coordinate system is Display.\n"},
  {(char*)"SetOutputCoordinateSystemToWorld", PyvtkTransformCoordinateSystems_SetOutputCoordinateSystemToWorld, 1,
   (char*)"V.SetOutputCoordinateSystemToWorld()\nC++: void SetOutputCoordinateSystemToWorld()\n\nSet/get the coordinate system to which to transform the output.\nThe current options are World, Viewport, and Display. By default\nthe output coordinate system is Display.\n"},
  {(char*)"GetMTime", PyvtkTransformCoordinateSystems_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nReturn the MTime also considering the instance of vtkCoordinate.\n"},
  {(char*)"SetViewport", PyvtkTransformCoordinateSystems_SetViewport, 1,
   (char*)"V.SetViewport(vtkViewport)\nC++: void SetViewport(vtkViewport *viewport)\n\nIn order for successful coordinate transformation to occur, an\ninstance of vtkViewport (e.g., a VTK renderer) must be specified.\nNOTE: this is a raw pointer, not a weak pointer not a reference\ncounted object to avoid reference cycle loop between rendering\nclasses and filter classes.\n"},
  {(char*)"GetViewport", PyvtkTransformCoordinateSystems_GetViewport, 1,
   (char*)"V.GetViewport() -> vtkViewport\nC++: vtkViewport *GetViewport()\n\nIn order for successful coordinate transformation to occur, an\ninstance of vtkViewport (e.g., a VTK renderer) must be specified.\nNOTE: this is a raw pointer, not a weak pointer not a reference\ncounted object to avoid reference cycle loop between rendering\nclasses and filter classes.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTransformCoordinateSystems_StaticNew()
{
  return vtkTransformCoordinateSystems::New();
}

PyObject *PyVTKClass_vtkTransformCoordinateSystemsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTransformCoordinateSystems_StaticNew,
    PyvtkTransformCoordinateSystems_Methods,
    "vtkTransformCoordinateSystems", modulename,
    NULL, NULL,
    PyvtkTransformCoordinateSystems_Doc(),
    PyVTKClass_vtkPointSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTransformCoordinateSystems_Doc()
{
  static const char *docstring[] = {
    "vtkTransformCoordinateSystems - transform points into different\ncoordinate systems\n\n",
    "Superclass: vtkPointSetAlgorithm\n\n",
    "This filter transforms points from one coordinate system to another.\nThe user must specify the coordinate systems in which the input and\noutput are specified. The user must also specify the VTK viewport\n(i.e., renderer) in which the transformation occurs.\n\nSee Also:\n\nvtkCoordinate vtkTransformFilter vtkTransformPolyData\nvtkPolyDataMapper2D\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTransformCoordinateSystems(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTransformCoordinateSystemsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTransformCoordinateSystems", o) != 0)
    {
    Py_DECREF(o);
    }

}

