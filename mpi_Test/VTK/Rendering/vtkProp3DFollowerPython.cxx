// python wrapper for vtkProp3DFollower
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
#include "vtkProp3DFollower.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkProp3DFollower(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkProp3DFollower(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkProp3DFollowerNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkProp3DFollowerNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkProp3DNew
extern "C" { PyObject *PyVTKClass_vtkProp3DNew(const char *); }
#define DECLARED_PyVTKClass_vtkProp3DNew
#endif

static const char **PyvtkProp3DFollower_Doc();


static PyObject *
PyvtkProp3DFollower_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DFollower *op = static_cast<vtkProp3DFollower *>(vp);

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
      tempr = op->vtkProp3DFollower::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DFollower_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DFollower *op = static_cast<vtkProp3DFollower *>(vp);

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
      tempr = op->vtkProp3DFollower::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DFollower_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DFollower *op = static_cast<vtkProp3DFollower *>(vp);

  vtkProp3DFollower *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkProp3DFollower::NewInstance();
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
PyvtkProp3DFollower_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkProp3DFollower *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkProp3DFollower::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DFollower_SetProp3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProp3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DFollower *op = static_cast<vtkProp3DFollower *>(vp);

  vtkProp3D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp3D"))
    {
    if (ap.IsBound())
      {
      op->SetProp3D(temp0);
      }
    else
      {
      op->vtkProp3DFollower::SetProp3D(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DFollower_GetProp3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProp3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DFollower *op = static_cast<vtkProp3DFollower *>(vp);

  vtkProp3D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProp3D();
      }
    else
      {
      tempr = op->vtkProp3DFollower::GetProp3D();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DFollower_SetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DFollower *op = static_cast<vtkProp3DFollower *>(vp);

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
      op->vtkProp3DFollower::SetCamera(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DFollower_GetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DFollower *op = static_cast<vtkProp3DFollower *>(vp);

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
      tempr = op->vtkProp3DFollower::GetCamera();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DFollower_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DFollower *op = static_cast<vtkProp3DFollower *>(vp);

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
      tempr = op->vtkProp3DFollower::RenderOpaqueGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DFollower_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DFollower *op = static_cast<vtkProp3DFollower *>(vp);

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
      tempr = op->vtkProp3DFollower::RenderTranslucentPolygonalGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DFollower_RenderVolumetricGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderVolumetricGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DFollower *op = static_cast<vtkProp3DFollower *>(vp);

  vtkViewport *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      tempr = op->RenderVolumetricGeometry(temp0);
      }
    else
      {
      tempr = op->vtkProp3DFollower::RenderVolumetricGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DFollower_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DFollower *op = static_cast<vtkProp3DFollower *>(vp);

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
      tempr = op->vtkProp3DFollower::HasTranslucentPolygonalGeometry();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DFollower_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DFollower *op = static_cast<vtkProp3DFollower *>(vp);

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
      op->vtkProp3DFollower::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DFollower_ComputeMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DFollower *op = static_cast<vtkProp3DFollower *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeMatrix();
      }
    else
      {
      op->vtkProp3DFollower::ComputeMatrix();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DFollower_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DFollower *op = static_cast<vtkProp3DFollower *>(vp);

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
      op->vtkProp3DFollower::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DFollower_InitPathTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitPathTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DFollower *op = static_cast<vtkProp3DFollower *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InitPathTraversal();
      }
    else
      {
      op->vtkProp3DFollower::InitPathTraversal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DFollower_GetNextPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DFollower *op = static_cast<vtkProp3DFollower *>(vp);

  vtkAssemblyPath *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNextPath();
      }
    else
      {
      tempr = op->vtkProp3DFollower::GetNextPath();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkProp3DFollower_Methods[] = {
  {(char*)"GetClassName", PyvtkProp3DFollower_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK methods for type and printing.\n"},
  {(char*)"IsA", PyvtkProp3DFollower_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK methods for type and printing.\n"},
  {(char*)"NewInstance", PyvtkProp3DFollower_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkProp3DFollower\nC++: vtkProp3DFollower *NewInstance()\n\nStandard VTK methods for type and printing.\n"},
  {(char*)"SafeDownCast", PyvtkProp3DFollower_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkProp3DFollower\nC++: vtkProp3DFollower *SafeDownCast(vtkObject* o)\n\nStandard VTK methods for type and printing.\n"},
  {(char*)"SetProp3D", PyvtkProp3DFollower_SetProp3D, 1,
   (char*)"V.SetProp3D(vtkProp3D)\nC++: virtual void SetProp3D(vtkProp3D *prop)\n\nSet/Get the vtkProp3D to control (i.e., face the camera).\n"},
  {(char*)"GetProp3D", PyvtkProp3DFollower_GetProp3D, 1,
   (char*)"V.GetProp3D() -> vtkProp3D\nC++: virtual vtkProp3D *GetProp3D()\n\nSet/Get the vtkProp3D to control (i.e., face the camera).\n"},
  {(char*)"SetCamera", PyvtkProp3DFollower_SetCamera, 1,
   (char*)"V.SetCamera(vtkCamera)\nC++: virtual void SetCamera(vtkCamera *)\n\nSet/Get the camera to follow. If this is not set, then the\nfollower won't know what to follow and will act like a normal\nvtkProp3D.\n"},
  {(char*)"GetCamera", PyvtkProp3DFollower_GetCamera, 1,
   (char*)"V.GetCamera() -> vtkCamera\nC++: vtkCamera *GetCamera()\n\nSet/Get the camera to follow. If this is not set, then the\nfollower won't know what to follow and will act like a normal\nvtkProp3D.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkProp3DFollower_RenderOpaqueGeometry, 1,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *viewport)\n\nThis causes the actor to be rendered. It in turn will render the\nactor's property, texture map and then mapper. If a property\nhasn't been assigned, then the actor will create one\nautomatically.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkProp3DFollower_RenderTranslucentPolygonalGeometry, 1,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(\n    vtkViewport *viewport)\n\nThis causes the actor to be rendered. It in turn will render the\nactor's property, texture map and then mapper. If a property\nhasn't been assigned, then the actor will create one\nautomatically.\n"},
  {(char*)"RenderVolumetricGeometry", PyvtkProp3DFollower_RenderVolumetricGeometry, 1,
   (char*)"V.RenderVolumetricGeometry(vtkViewport) -> int\nC++: virtual int RenderVolumetricGeometry(vtkViewport *viewport)\n\nThis causes the actor to be rendered. It in turn will render the\nactor's property, texture map and then mapper. If a property\nhasn't been assigned, then the actor will create one\nautomatically.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkProp3DFollower_HasTranslucentPolygonalGeometry, 1,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkProp3DFollower_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources associated with this\nvtkProp3DFollower.\n"},
  {(char*)"ComputeMatrix", PyvtkProp3DFollower_ComputeMatrix, 1,
   (char*)"V.ComputeMatrix()\nC++: virtual void ComputeMatrix()\n\nGenerate the matrix based on ivars. This method overloads its\nsuperclasses ComputeMatrix() method due to the special\nvtkProp3DFollower matrix operations.\n"},
  {(char*)"ShallowCopy", PyvtkProp3DFollower_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop)\n\nShallow copy of a follower. Overloads the virtual vtkProp method.\n"},
  {(char*)"InitPathTraversal", PyvtkProp3DFollower_InitPathTraversal, 1,
   (char*)"V.InitPathTraversal()\nC++: void InitPathTraversal()\n\nOverload vtkProp's method for setting up assembly paths. See the\ndocumentation for vtkProp.\n"},
  {(char*)"GetNextPath", PyvtkProp3DFollower_GetNextPath, 1,
   (char*)"V.GetNextPath() -> vtkAssemblyPath\nC++: virtual vtkAssemblyPath *GetNextPath()\n\nOverload vtkProp's method for setting up assembly paths. See the\ndocumentation for vtkProp.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkProp3DFollower_StaticNew()
{
  return vtkProp3DFollower::New();
}

PyObject *PyVTKClass_vtkProp3DFollowerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkProp3DFollower_StaticNew,
    PyvtkProp3DFollower_Methods,
    "vtkProp3DFollower", modulename,
    NULL, NULL,
    PyvtkProp3DFollower_Doc(),
    PyVTKClass_vtkProp3DNew(modulename));
  return cls;
}

const char **PyvtkProp3DFollower_Doc()
{
  static const char *docstring[] = {
    "vtkProp3DFollower - a vtkProp3D that always faces the camera\n\n",
    "Superclass: vtkProp3D\n\n",
    "vtkProp3DFollower is a type of vtkProp3D that always faces the\ncamera. More specifically it will not change its position or scale,\nbut it will continually update its orientation so that it is right\nside up and facing the camera. This is typically used for complex\nbillboards or props that need to face the viewer at all times.\n\nNote: All of the transformations that can be made to a vtkProp3D will\nta",
    "ke effect with the follower. Thus, if you change the orientation of\nthe follower by 90 degrees, then it will follow the camera, but be\noff by 90 degrees.\n\nSee Also:\n\nvtkFollower vtkProp3D vtkActor vtkCamera\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkProp3DFollower(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkProp3DFollowerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkProp3DFollower", o) != 0)
    {
    Py_DECREF(o);
    }

}

