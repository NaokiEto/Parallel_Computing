// python wrapper for vtkAssignCoordinatesLayoutStrategy
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
#include "vtkAssignCoordinatesLayoutStrategy.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkAssignCoordinatesLayoutStrategy(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkAssignCoordinatesLayoutStrategy(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkAssignCoordinatesLayoutStrategyNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkAssignCoordinatesLayoutStrategyNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkGraphLayoutStrategyNew
extern "C" { PyObject *PyVTKClass_vtkGraphLayoutStrategyNew(const char *); }
#define DECLARED_PyVTKClass_vtkGraphLayoutStrategyNew
#endif

static const char **PyvtkAssignCoordinatesLayoutStrategy_Doc();


static PyObject *
PyvtkAssignCoordinatesLayoutStrategy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignCoordinatesLayoutStrategy *op = static_cast<vtkAssignCoordinatesLayoutStrategy *>(vp);

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
      tempr = op->vtkAssignCoordinatesLayoutStrategy::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssignCoordinatesLayoutStrategy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignCoordinatesLayoutStrategy *op = static_cast<vtkAssignCoordinatesLayoutStrategy *>(vp);

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
      tempr = op->vtkAssignCoordinatesLayoutStrategy::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssignCoordinatesLayoutStrategy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignCoordinatesLayoutStrategy *op = static_cast<vtkAssignCoordinatesLayoutStrategy *>(vp);

  vtkAssignCoordinatesLayoutStrategy *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkAssignCoordinatesLayoutStrategy::NewInstance();
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
PyvtkAssignCoordinatesLayoutStrategy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkAssignCoordinatesLayoutStrategy *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkAssignCoordinatesLayoutStrategy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssignCoordinatesLayoutStrategy_SetXCoordArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXCoordArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignCoordinatesLayoutStrategy *op = static_cast<vtkAssignCoordinatesLayoutStrategy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXCoordArrayName(temp0);
      }
    else
      {
      op->vtkAssignCoordinatesLayoutStrategy::SetXCoordArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAssignCoordinatesLayoutStrategy_GetXCoordArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXCoordArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignCoordinatesLayoutStrategy *op = static_cast<vtkAssignCoordinatesLayoutStrategy *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXCoordArrayName();
      }
    else
      {
      tempr = op->vtkAssignCoordinatesLayoutStrategy::GetXCoordArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssignCoordinatesLayoutStrategy_SetYCoordArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYCoordArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignCoordinatesLayoutStrategy *op = static_cast<vtkAssignCoordinatesLayoutStrategy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYCoordArrayName(temp0);
      }
    else
      {
      op->vtkAssignCoordinatesLayoutStrategy::SetYCoordArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAssignCoordinatesLayoutStrategy_GetYCoordArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYCoordArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignCoordinatesLayoutStrategy *op = static_cast<vtkAssignCoordinatesLayoutStrategy *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetYCoordArrayName();
      }
    else
      {
      tempr = op->vtkAssignCoordinatesLayoutStrategy::GetYCoordArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssignCoordinatesLayoutStrategy_SetZCoordArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZCoordArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignCoordinatesLayoutStrategy *op = static_cast<vtkAssignCoordinatesLayoutStrategy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZCoordArrayName(temp0);
      }
    else
      {
      op->vtkAssignCoordinatesLayoutStrategy::SetZCoordArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAssignCoordinatesLayoutStrategy_GetZCoordArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZCoordArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignCoordinatesLayoutStrategy *op = static_cast<vtkAssignCoordinatesLayoutStrategy *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetZCoordArrayName();
      }
    else
      {
      tempr = op->vtkAssignCoordinatesLayoutStrategy::GetZCoordArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssignCoordinatesLayoutStrategy_Layout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Layout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignCoordinatesLayoutStrategy *op = static_cast<vtkAssignCoordinatesLayoutStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Layout();
      }
    else
      {
      op->vtkAssignCoordinatesLayoutStrategy::Layout();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAssignCoordinatesLayoutStrategy_Methods[] = {
  {(char*)"GetClassName", PyvtkAssignCoordinatesLayoutStrategy_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAssignCoordinatesLayoutStrategy_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAssignCoordinatesLayoutStrategy_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkAssignCoordinatesLayoutStrategy\nC++: vtkAssignCoordinatesLayoutStrategy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAssignCoordinatesLayoutStrategy_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAssignCoordinatesLayoutStrategy\nC++: vtkAssignCoordinatesLayoutStrategy *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"SetXCoordArrayName", PyvtkAssignCoordinatesLayoutStrategy_SetXCoordArrayName, 1,
   (char*)"V.SetXCoordArrayName(string)\nC++: virtual void SetXCoordArrayName(const char *name)\n\nThe array to use for the x coordinate values.\n"},
  {(char*)"GetXCoordArrayName", PyvtkAssignCoordinatesLayoutStrategy_GetXCoordArrayName, 1,
   (char*)"V.GetXCoordArrayName() -> string\nC++: virtual const char *GetXCoordArrayName()\n\nThe array to use for the x coordinate values.\n"},
  {(char*)"SetYCoordArrayName", PyvtkAssignCoordinatesLayoutStrategy_SetYCoordArrayName, 1,
   (char*)"V.SetYCoordArrayName(string)\nC++: virtual void SetYCoordArrayName(const char *name)\n\nThe array to use for the y coordinate values.\n"},
  {(char*)"GetYCoordArrayName", PyvtkAssignCoordinatesLayoutStrategy_GetYCoordArrayName, 1,
   (char*)"V.GetYCoordArrayName() -> string\nC++: virtual const char *GetYCoordArrayName()\n\nThe array to use for the y coordinate values.\n"},
  {(char*)"SetZCoordArrayName", PyvtkAssignCoordinatesLayoutStrategy_SetZCoordArrayName, 1,
   (char*)"V.SetZCoordArrayName(string)\nC++: virtual void SetZCoordArrayName(const char *name)\n\nThe array to use for the z coordinate values.\n"},
  {(char*)"GetZCoordArrayName", PyvtkAssignCoordinatesLayoutStrategy_GetZCoordArrayName, 1,
   (char*)"V.GetZCoordArrayName() -> string\nC++: virtual const char *GetZCoordArrayName()\n\nThe array to use for the z coordinate values.\n"},
  {(char*)"Layout", PyvtkAssignCoordinatesLayoutStrategy_Layout, 1,
   (char*)"V.Layout()\nC++: void Layout()\n\nPerform the random layout.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAssignCoordinatesLayoutStrategy_StaticNew()
{
  return vtkAssignCoordinatesLayoutStrategy::New();
}

PyObject *PyVTKClass_vtkAssignCoordinatesLayoutStrategyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAssignCoordinatesLayoutStrategy_StaticNew,
    PyvtkAssignCoordinatesLayoutStrategy_Methods,
    "vtkAssignCoordinatesLayoutStrategy", modulename,
    NULL, NULL,
    PyvtkAssignCoordinatesLayoutStrategy_Doc(),
    PyVTKClass_vtkGraphLayoutStrategyNew(modulename));
  return cls;
}

const char **PyvtkAssignCoordinatesLayoutStrategy_Doc()
{
  static const char *docstring[] = {
    "vtkAssignCoordinatesLayoutStrategy - uses array values to set vertex\nlocations\n\n",
    "Superclass: vtkGraphLayoutStrategy\n\n",
    "Uses vtkAssignCoordinates to use values from arrays as the x, y, and\nz coordinates.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAssignCoordinatesLayoutStrategy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAssignCoordinatesLayoutStrategyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAssignCoordinatesLayoutStrategy", o) != 0)
    {
    Py_DECREF(o);
    }

}

