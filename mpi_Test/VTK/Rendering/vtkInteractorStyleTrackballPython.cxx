// python wrapper for vtkInteractorStyleTrackball
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
#include "vtkInteractorStyleTrackball.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkInteractorStyleTrackball(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkInteractorStyleTrackball(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkInteractorStyleTrackballNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkInteractorStyleTrackballNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkInteractorStyleSwitchNew
extern "C" { PyObject *PyVTKClass_vtkInteractorStyleSwitchNew(const char *); }
#define DECLARED_PyVTKClass_vtkInteractorStyleSwitchNew
#endif

static const char **PyvtkInteractorStyleTrackball_Doc();


static PyObject *
PyvtkInteractorStyleTrackball_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackball *op = static_cast<vtkInteractorStyleTrackball *>(vp);

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
      tempr = op->vtkInteractorStyleTrackball::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackball_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackball *op = static_cast<vtkInteractorStyleTrackball *>(vp);

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
      tempr = op->vtkInteractorStyleTrackball::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackball_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackball *op = static_cast<vtkInteractorStyleTrackball *>(vp);

  vtkInteractorStyleTrackball *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkInteractorStyleTrackball::NewInstance();
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
PyvtkInteractorStyleTrackball_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkInteractorStyleTrackball *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkInteractorStyleTrackball::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkInteractorStyleTrackball_Methods[] = {
  {(char*)"GetClassName", PyvtkInteractorStyleTrackball_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInteractorStyleTrackball_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInteractorStyleTrackball_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkInteractorStyleTrackball\nC++: vtkInteractorStyleTrackball *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkInteractorStyleTrackball_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkInteractorStyleTrackball\nC++: vtkInteractorStyleTrackball *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkInteractorStyleTrackball_StaticNew()
{
  return vtkInteractorStyleTrackball::New();
}

PyObject *PyVTKClass_vtkInteractorStyleTrackballNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkInteractorStyleTrackball_StaticNew,
    PyvtkInteractorStyleTrackball_Methods,
    "vtkInteractorStyleTrackball", modulename,
    NULL, NULL,
    PyvtkInteractorStyleTrackball_Doc(),
    PyVTKClass_vtkInteractorStyleSwitchNew(modulename));
  return cls;
}

const char **PyvtkInteractorStyleTrackball_Doc()
{
  static const char *docstring[] = {
    "vtkInteractorStyleTrackball - provides trackball motion control\n\n",
    "Superclass: vtkInteractorStyleSwitch\n\n",
    "vtkInteractorStyleTrackball is an implementation of\nvtkInteractorStyle that defines the trackball style. It is now\ndeprecated and as such a subclass of vtkInteractorStyleSwitch\n\nSee Also:\n\nvtkInteractorStyleSwitch vtkInteractorStyleTrackballActor\nvtkInteractorStyleJoystickCamera\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInteractorStyleTrackball(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInteractorStyleTrackballNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInteractorStyleTrackball", o) != 0)
    {
    Py_DECREF(o);
    }

}

