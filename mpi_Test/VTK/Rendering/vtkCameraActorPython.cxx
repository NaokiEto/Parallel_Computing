// python wrapper for vtkCameraActor
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
#include "vtkCameraActor.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCameraActor(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCameraActor(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCameraActorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCameraActorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkProp3DNew
extern "C" { PyObject *PyVTKClass_vtkProp3DNew(const char *); }
#define DECLARED_PyVTKClass_vtkProp3DNew
#endif

static const char **PyvtkCameraActor_Doc();


static PyObject *
PyvtkCameraActor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraActor *op = static_cast<vtkCameraActor *>(vp);

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
      tempr = op->vtkCameraActor::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraActor *op = static_cast<vtkCameraActor *>(vp);

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
      tempr = op->vtkCameraActor::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraActor *op = static_cast<vtkCameraActor *>(vp);

  vtkCameraActor *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCameraActor::NewInstance();
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
PyvtkCameraActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCameraActor *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCameraActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraActor_SetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraActor *op = static_cast<vtkCameraActor *>(vp);

  vtkCamera *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCamera"))
    {
    if (ap.IsBound())
      {
      op->SetCamera(temp0);
      }
    else
      {
      op->vtkCameraActor::SetCamera(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraActor_GetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraActor *op = static_cast<vtkCameraActor *>(vp);

  vtkCamera *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCamera();
      }
    else
      {
      tempr = op->vtkCameraActor::GetCamera();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraActor_SetWidthByHeightRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidthByHeightRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraActor *op = static_cast<vtkCameraActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWidthByHeightRatio(temp0);
      }
    else
      {
      op->vtkCameraActor::SetWidthByHeightRatio(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraActor_GetWidthByHeightRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidthByHeightRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraActor *op = static_cast<vtkCameraActor *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWidthByHeightRatio();
      }
    else
      {
      tempr = op->vtkCameraActor::GetWidthByHeightRatio();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraActor *op = static_cast<vtkCameraActor *>(vp);

  vtkViewport *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      tempr = op->RenderOpaqueGeometry(temp0);
      }
    else
      {
      tempr = op->vtkCameraActor::RenderOpaqueGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraActor_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraActor *op = static_cast<vtkCameraActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->HasTranslucentPolygonalGeometry();
      }
    else
      {
      tempr = op->vtkCameraActor::HasTranslucentPolygonalGeometry();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraActor *op = static_cast<vtkCameraActor *>(vp);

  vtkWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
    {
    if (ap.IsBound())
      {
      op->ReleaseGraphicsResources(temp0);
      }
    else
      {
      op->vtkCameraActor::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraActor_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraActor *op = static_cast<vtkCameraActor *>(vp);

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
      tempr = op->vtkCameraActor::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraActor_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraActor *op = static_cast<vtkCameraActor *>(vp);

  vtkProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProperty();
      }
    else
      {
      tempr = op->vtkCameraActor::GetProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraActor_SetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraActor *op = static_cast<vtkCameraActor *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetProperty(temp0);
      }
    else
      {
      op->vtkCameraActor::SetProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCameraActor_Methods[] = {
  {(char*)"GetClassName", PyvtkCameraActor_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCameraActor_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCameraActor_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCameraActor\nC++: vtkCameraActor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCameraActor_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCameraActor\nC++: vtkCameraActor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCamera", PyvtkCameraActor_SetCamera, 1,
   (char*)"V.SetCamera(vtkCamera)\nC++: void SetCamera(vtkCamera *camera)\n\nThe camera to represent. Initial value is NULL.\n"},
  {(char*)"GetCamera", PyvtkCameraActor_GetCamera, 1,
   (char*)"V.GetCamera() -> vtkCamera\nC++: vtkCamera *GetCamera()\n\nThe camera to represent. Initial value is NULL.\n"},
  {(char*)"SetWidthByHeightRatio", PyvtkCameraActor_SetWidthByHeightRatio, 1,
   (char*)"V.SetWidthByHeightRatio(float)\nC++: void SetWidthByHeightRatio(double a)\n\nRatio between the width and the height of the frustum. Initial\nvalue is 1.0 (square)\n"},
  {(char*)"GetWidthByHeightRatio", PyvtkCameraActor_GetWidthByHeightRatio, 1,
   (char*)"V.GetWidthByHeightRatio() -> float\nC++: double GetWidthByHeightRatio()\n\nRatio between the width and the height of the frustum. Initial\nvalue is 1.0 (square)\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkCameraActor_RenderOpaqueGeometry, 1,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *viewport)\n\nSupport the standard render methods.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkCameraActor_HasTranslucentPolygonalGeometry, 1,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nDoes this prop have some translucent polygonal geometry? No.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkCameraActor_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {(char*)"GetMTime", PyvtkCameraActor_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nGet the actors mtime plus consider its properties and texture if\nset.\n"},
  {(char*)"GetProperty", PyvtkCameraActor_GetProperty, 1,
   (char*)"V.GetProperty() -> vtkProperty\nC++: vtkProperty *GetProperty()\n\nGet property of the internal actor.\n"},
  {(char*)"SetProperty", PyvtkCameraActor_SetProperty, 1,
   (char*)"V.SetProperty(vtkProperty)\nC++: void SetProperty(vtkProperty *p)\n\nSet property of the internal actor.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCameraActor_StaticNew()
{
  return vtkCameraActor::New();
}

PyObject *PyVTKClass_vtkCameraActorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCameraActor_StaticNew,
    PyvtkCameraActor_Methods,
    "vtkCameraActor", modulename,
    NULL, NULL,
    PyvtkCameraActor_Doc(),
    PyVTKClass_vtkProp3DNew(modulename));
  return cls;
}

const char **PyvtkCameraActor_Doc()
{
  static const char *docstring[] = {
    "vtkCameraActor - a frustum to represent a camera.\n\n",
    "Superclass: vtkProp3D\n\n",
    "vtkCameraActor is an actor used to represent a camera by its\nwireframe frustum.\n\nSee Also:\n\nvtkLight vtkConeSource vtkFrustumSource vtkCameraActor\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCameraActor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCameraActorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCameraActor", o) != 0)
    {
    Py_DECREF(o);
    }

}

