// python wrapper for vtkFollower
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
#include "vtkFollower.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkFollower(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkFollower(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkFollowerNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkFollowerNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkActorNew
extern "C" { PyObject *PyVTKClass_vtkActorNew(const char *); }
#define DECLARED_PyVTKClass_vtkActorNew
#endif

static const char **PyvtkFollower_Doc();


static PyObject *
PyvtkFollower_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFollower *op = static_cast<vtkFollower *>(vp);

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
      tempr = op->vtkFollower::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFollower_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFollower *op = static_cast<vtkFollower *>(vp);

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
      tempr = op->vtkFollower::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFollower_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFollower *op = static_cast<vtkFollower *>(vp);

  vtkFollower *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkFollower::NewInstance();
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
PyvtkFollower_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkFollower *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkFollower::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFollower_SetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFollower *op = static_cast<vtkFollower *>(vp);

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
      op->vtkFollower::SetCamera(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFollower_GetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFollower *op = static_cast<vtkFollower *>(vp);

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
      tempr = op->vtkFollower::GetCamera();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFollower_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFollower *op = static_cast<vtkFollower *>(vp);

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
      tempr = op->vtkFollower::RenderOpaqueGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFollower_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFollower *op = static_cast<vtkFollower *>(vp);

  vtkViewport *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      tempr = op->RenderTranslucentPolygonalGeometry(temp0);
      }
    else
      {
      tempr = op->vtkFollower::RenderTranslucentPolygonalGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFollower_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFollower *op = static_cast<vtkFollower *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->Render(temp0);
      }
    else
      {
      op->vtkFollower::Render(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFollower_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFollower *op = static_cast<vtkFollower *>(vp);

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
      tempr = op->vtkFollower::HasTranslucentPolygonalGeometry();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFollower_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFollower *op = static_cast<vtkFollower *>(vp);

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
      op->vtkFollower::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFollower_ComputeMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFollower *op = static_cast<vtkFollower *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeMatrix();
      }
    else
      {
      op->vtkFollower::ComputeMatrix();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFollower_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFollower *op = static_cast<vtkFollower *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkFollower::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkFollower_Methods[] = {
  {(char*)"GetClassName", PyvtkFollower_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkFollower_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkFollower_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkFollower\nC++: vtkFollower *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkFollower_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkFollower\nC++: vtkFollower *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCamera", PyvtkFollower_SetCamera, 1,
   (char*)"V.SetCamera(vtkCamera)\nC++: virtual void SetCamera(vtkCamera *)\n\nSet/Get the camera to follow. If this is not set, then the\nfollower won't know who to follow.\n"},
  {(char*)"GetCamera", PyvtkFollower_GetCamera, 1,
   (char*)"V.GetCamera() -> vtkCamera\nC++: vtkCamera *GetCamera()\n\nSet/Get the camera to follow. If this is not set, then the\nfollower won't know who to follow.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkFollower_RenderOpaqueGeometry, 1,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *viewport)\n\nThis causes the actor to be rendered. It in turn will render the\nactor's property, texture map and then mapper. If a property\nhasn't been assigned, then the actor will create one\nautomatically.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkFollower_RenderTranslucentPolygonalGeometry, 1,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(\n    vtkViewport *viewport)\n\nThis causes the actor to be rendered. It in turn will render the\nactor's property, texture map and then mapper. If a property\nhasn't been assigned, then the actor will create one\nautomatically.\n"},
  {(char*)"Render", PyvtkFollower_Render, 1,
   (char*)"V.Render(vtkRenderer)\nC++: virtual void Render(vtkRenderer *ren)\n\nThis causes the actor to be rendered. It in turn will render the\nactor's property, texture map and then mapper. If a property\nhasn't been assigned, then the actor will create one\nautomatically.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkFollower_HasTranslucentPolygonalGeometry, 1,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkFollower_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources associated with this\nvtkProp3DFollower.\n"},
  {(char*)"ComputeMatrix", PyvtkFollower_ComputeMatrix, 1,
   (char*)"V.ComputeMatrix()\nC++: virtual void ComputeMatrix()\n\nGenerate the matrix based on ivars. This method overloads its\nsuperclasses ComputeMatrix() method due to the special\nvtkFollower matrix operations.\n"},
  {(char*)"ShallowCopy", PyvtkFollower_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop)\n\nShallow copy of a follower. Overloads the virtual vtkProp method.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkFollower_StaticNew()
{
  return vtkFollower::New();
}

PyObject *PyVTKClass_vtkFollowerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkFollower_StaticNew,
    PyvtkFollower_Methods,
    "vtkFollower", modulename,
    NULL, NULL,
    PyvtkFollower_Doc(),
    PyVTKClass_vtkActorNew(modulename));
  return cls;
}

const char **PyvtkFollower_Doc()
{
  static const char *docstring[] = {
    "vtkFollower - a subclass of actor that always faces the camera\n\n",
    "Superclass: vtkActor\n\n",
    "vtkFollower is a subclass of vtkActor that always follows its\nspecified camera. More specifically it will not change its position\nor scale, but it will continually update its orientation so that it\nis right side up and facing the camera. This is typically used for\ntext labels in a scene. All of the adjustments that can be made to an\nactor also will take effect with a follower.  So, if you change t",
    "he\norientation of the follower by 90 degrees, then it will follow the\ncamera, but be off by 90 degrees.\n\nSee Also:\n\nvtkActor vtkCamera\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkFollower(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkFollowerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkFollower", o) != 0)
    {
    Py_DECREF(o);
    }

}

