// python wrapper for vtkTDxInteractorStyleGeo
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
#include "vtkTDxInteractorStyleGeo.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTDxInteractorStyleGeo(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTDxInteractorStyleGeo(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTDxInteractorStyleGeoNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTDxInteractorStyleGeoNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkTDxInteractorStyleNew
extern "C" { PyObject *PyVTKClass_vtkTDxInteractorStyleNew(const char *); }
#define DECLARED_PyVTKClass_vtkTDxInteractorStyleNew
#endif

static const char **PyvtkTDxInteractorStyleGeo_Doc();


static PyObject *
PyvtkTDxInteractorStyleGeo_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleGeo *op = static_cast<vtkTDxInteractorStyleGeo *>(vp);

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
      tempr = op->vtkTDxInteractorStyleGeo::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleGeo_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleGeo *op = static_cast<vtkTDxInteractorStyleGeo *>(vp);

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
      tempr = op->vtkTDxInteractorStyleGeo::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleGeo_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleGeo *op = static_cast<vtkTDxInteractorStyleGeo *>(vp);

  vtkTDxInteractorStyleGeo *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTDxInteractorStyleGeo::NewInstance();
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
PyvtkTDxInteractorStyleGeo_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTDxInteractorStyleGeo *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTDxInteractorStyleGeo::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleGeo_OnMotionEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMotionEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleGeo *op = static_cast<vtkTDxInteractorStyleGeo *>(vp);

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
      op->vtkTDxInteractorStyleGeo::OnMotionEvent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTDxInteractorStyleGeo_Methods[] = {
  {(char*)"GetClassName", PyvtkTDxInteractorStyleGeo_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTDxInteractorStyleGeo_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTDxInteractorStyleGeo_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTDxInteractorStyleGeo\nC++: vtkTDxInteractorStyleGeo *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTDxInteractorStyleGeo_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTDxInteractorStyleGeo\nC++: vtkTDxInteractorStyleGeo *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"OnMotionEvent", PyvtkTDxInteractorStyleGeo_OnMotionEvent, 1,
   (char*)"V.OnMotionEvent(vtkTDxMotionEventInfo)\nC++: virtual void OnMotionEvent(vtkTDxMotionEventInfo *motionInfo)\n\nAction on motion event.\n\\pre: motionInfo_exist: motionInfo!=0\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTDxInteractorStyleGeo_StaticNew()
{
  return vtkTDxInteractorStyleGeo::New();
}

PyObject *PyVTKClass_vtkTDxInteractorStyleGeoNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTDxInteractorStyleGeo_StaticNew,
    PyvtkTDxInteractorStyleGeo_Methods,
    "vtkTDxInteractorStyleGeo", modulename,
    NULL, NULL,
    PyvtkTDxInteractorStyleGeo_Doc(),
    PyVTKClass_vtkTDxInteractorStyleNew(modulename));
  return cls;
}

const char **PyvtkTDxInteractorStyleGeo_Doc()
{
  static const char *docstring[] = {
    "vtkTDxInteractorStyleGeo - interactive manipulation of the camera\nwith a 3DConnexion device, similar to google earth\n\n",
    "Superclass: vtkTDxInteractorStyle\n\n",
    "vtkTDxInteractorStyleGeo allows the end-user to manipulate tha camera\nwith a 3DConnexion device similar to google earth interaction.\n\nSee Also:\n\nvtkInteractorStyle vtkRenderWindowInteractor vtkTDxInteractorStyle\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTDxInteractorStyleGeo(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTDxInteractorStyleGeoNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTDxInteractorStyleGeo", o) != 0)
    {
    Py_DECREF(o);
    }

}

