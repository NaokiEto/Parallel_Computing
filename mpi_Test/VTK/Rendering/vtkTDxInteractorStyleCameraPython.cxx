// python wrapper for vtkTDxInteractorStyleCamera
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
#include "vtkTDxInteractorStyleCamera.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTDxInteractorStyleCamera(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTDxInteractorStyleCamera(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTDxInteractorStyleCameraNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTDxInteractorStyleCameraNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkTDxInteractorStyleNew
extern "C" { PyObject *PyVTKClass_vtkTDxInteractorStyleNew(const char *); }
#define DECLARED_PyVTKClass_vtkTDxInteractorStyleNew
#endif

static const char **PyvtkTDxInteractorStyleCamera_Doc();


static PyObject *
PyvtkTDxInteractorStyleCamera_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleCamera *op = static_cast<vtkTDxInteractorStyleCamera *>(vp);

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
      tempr = op->vtkTDxInteractorStyleCamera::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleCamera_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleCamera *op = static_cast<vtkTDxInteractorStyleCamera *>(vp);

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
      tempr = op->vtkTDxInteractorStyleCamera::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleCamera_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleCamera *op = static_cast<vtkTDxInteractorStyleCamera *>(vp);

  vtkTDxInteractorStyleCamera *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTDxInteractorStyleCamera::NewInstance();
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
PyvtkTDxInteractorStyleCamera_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTDxInteractorStyleCamera *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTDxInteractorStyleCamera::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleCamera_OnMotionEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMotionEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleCamera *op = static_cast<vtkTDxInteractorStyleCamera *>(vp);

  vtkTDxMotionEventInfo *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTDxMotionEventInfo"))
    {
    if (ap.IsBound())
      {
      op->OnMotionEvent(temp0);
      }
    else
      {
      op->vtkTDxInteractorStyleCamera::OnMotionEvent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTDxInteractorStyleCamera_Methods[] = {
  {(char*)"GetClassName", PyvtkTDxInteractorStyleCamera_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTDxInteractorStyleCamera_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTDxInteractorStyleCamera_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTDxInteractorStyleCamera\nC++: vtkTDxInteractorStyleCamera *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTDxInteractorStyleCamera_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTDxInteractorStyleCamera\nC++: vtkTDxInteractorStyleCamera *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"OnMotionEvent", PyvtkTDxInteractorStyleCamera_OnMotionEvent, 1,
   (char*)"V.OnMotionEvent(vtkTDxMotionEventInfo)\nC++: virtual void OnMotionEvent(vtkTDxMotionEventInfo *motionInfo)\n\nAction on motion event.\n\\pre: motionInfo_exist: motionInfo!=0\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTDxInteractorStyleCamera_StaticNew()
{
  return vtkTDxInteractorStyleCamera::New();
}

PyObject *PyVTKClass_vtkTDxInteractorStyleCameraNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTDxInteractorStyleCamera_StaticNew,
    PyvtkTDxInteractorStyleCamera_Methods,
    "vtkTDxInteractorStyleCamera", modulename,
    NULL, NULL,
    PyvtkTDxInteractorStyleCamera_Doc(),
    PyVTKClass_vtkTDxInteractorStyleNew(modulename));
  return cls;
}

const char **PyvtkTDxInteractorStyleCamera_Doc()
{
  static const char *docstring[] = {
    "vtkTDxInteractorStyleCamera - interactive manipulation of the camera\nwith a 3DConnexion device\n\n",
    "Superclass: vtkTDxInteractorStyle\n\n",
    "vtkTDxInteractorStyleCamera allows the end-user to manipulate tha\ncamera with a 3DConnexion device.\n\nSee Also:\n\nvtkInteractorStyle vtkRenderWindowInteractor vtkTDxInteractorStyle\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTDxInteractorStyleCamera(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTDxInteractorStyleCameraNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTDxInteractorStyleCamera", o) != 0)
    {
    Py_DECREF(o);
    }

}

