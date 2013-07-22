// python wrapper for vtkPropAssembly
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
#include "vtkPropAssembly.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPropAssembly(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPropAssembly(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPropAssemblyNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPropAssemblyNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPropNew
extern "C" { PyObject *PyVTKClass_vtkPropNew(const char *); }
#define DECLARED_PyVTKClass_vtkPropNew
#endif

static const char **PyvtkPropAssembly_Doc();


static PyObject *
PyvtkPropAssembly_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropAssembly *op = static_cast<vtkPropAssembly *>(vp);

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
      tempr = op->vtkPropAssembly::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPropAssembly_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropAssembly *op = static_cast<vtkPropAssembly *>(vp);

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
      tempr = op->vtkPropAssembly::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPropAssembly_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropAssembly *op = static_cast<vtkPropAssembly *>(vp);

  vtkPropAssembly *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPropAssembly::NewInstance();
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
PyvtkPropAssembly_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPropAssembly *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPropAssembly::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPropAssembly_AddPart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropAssembly *op = static_cast<vtkPropAssembly *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->AddPart(temp0);
      }
    else
      {
      op->vtkPropAssembly::AddPart(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPropAssembly_RemovePart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropAssembly *op = static_cast<vtkPropAssembly *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->RemovePart(temp0);
      }
    else
      {
      op->vtkPropAssembly::RemovePart(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPropAssembly_GetParts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropAssembly *op = static_cast<vtkPropAssembly *>(vp);

  vtkPropCollection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetParts();
      }
    else
      {
      tempr = op->vtkPropAssembly::GetParts();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPropAssembly_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropAssembly *op = static_cast<vtkPropAssembly *>(vp);

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
      tempr = op->vtkPropAssembly::RenderOpaqueGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPropAssembly_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropAssembly *op = static_cast<vtkPropAssembly *>(vp);

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
      tempr = op->vtkPropAssembly::RenderTranslucentPolygonalGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPropAssembly_RenderVolumetricGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderVolumetricGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropAssembly *op = static_cast<vtkPropAssembly *>(vp);

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
      tempr = op->vtkPropAssembly::RenderVolumetricGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPropAssembly_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropAssembly *op = static_cast<vtkPropAssembly *>(vp);

  vtkViewport *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      tempr = op->RenderOverlay(temp0);
      }
    else
      {
      tempr = op->vtkPropAssembly::RenderOverlay(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPropAssembly_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropAssembly *op = static_cast<vtkPropAssembly *>(vp);

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
      tempr = op->vtkPropAssembly::HasTranslucentPolygonalGeometry();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPropAssembly_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropAssembly *op = static_cast<vtkPropAssembly *>(vp);

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
      op->vtkPropAssembly::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPropAssembly_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropAssembly *op = static_cast<vtkPropAssembly *>(vp);

  double *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBounds();
      }
    else
      {
      tempr = op->vtkPropAssembly::GetBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPropAssembly_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropAssembly *op = static_cast<vtkPropAssembly *>(vp);

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
      op->vtkPropAssembly::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPropAssembly_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropAssembly *op = static_cast<vtkPropAssembly *>(vp);

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
      tempr = op->vtkPropAssembly::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPropAssembly_InitPathTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitPathTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropAssembly *op = static_cast<vtkPropAssembly *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InitPathTraversal();
      }
    else
      {
      op->vtkPropAssembly::InitPathTraversal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPropAssembly_GetNextPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropAssembly *op = static_cast<vtkPropAssembly *>(vp);

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
      tempr = op->vtkPropAssembly::GetNextPath();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPropAssembly_GetNumberOfPaths(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPaths");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropAssembly *op = static_cast<vtkPropAssembly *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfPaths();
      }
    else
      {
      tempr = op->vtkPropAssembly::GetNumberOfPaths();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPropAssembly_BuildPaths(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildPaths");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropAssembly *op = static_cast<vtkPropAssembly *>(vp);

  vtkAssemblyPaths *temp0 = NULL;
  vtkAssemblyPath *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkAssemblyPaths") &&
      ap.GetVTKObject(temp1, "vtkAssemblyPath"))
    {
    if (ap.IsBound())
      {
      op->BuildPaths(temp0, temp1);
      }
    else
      {
      op->vtkPropAssembly::BuildPaths(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPropAssembly_Methods[] = {
  {(char*)"GetClassName", PyvtkPropAssembly_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPropAssembly_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPropAssembly_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPropAssembly\nC++: vtkPropAssembly *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPropAssembly_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPropAssembly\nC++: vtkPropAssembly *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddPart", PyvtkPropAssembly_AddPart, 1,
   (char*)"V.AddPart(vtkProp)\nC++: void AddPart(vtkProp *)\n\nAdd a part to the list of parts.\n"},
  {(char*)"RemovePart", PyvtkPropAssembly_RemovePart, 1,
   (char*)"V.RemovePart(vtkProp)\nC++: void RemovePart(vtkProp *)\n\nRemove a part from the list of parts,\n"},
  {(char*)"GetParts", PyvtkPropAssembly_GetParts, 1,
   (char*)"V.GetParts() -> vtkPropCollection\nC++: vtkPropCollection *GetParts()\n\nReturn the list of parts.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkPropAssembly_RenderOpaqueGeometry, 1,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *ren)\n\nRender this assembly and all its parts.  The rendering process is\nrecursive. The parts of each assembly are rendered only if the\nvisibility for the prop is turned on.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkPropAssembly_RenderTranslucentPolygonalGeometry, 1,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(\n    vtkViewport *ren)\n\nRender this assembly and all its parts.  The rendering process is\nrecursive. The parts of each assembly are rendered only if the\nvisibility for the prop is turned on.\n"},
  {(char*)"RenderVolumetricGeometry", PyvtkPropAssembly_RenderVolumetricGeometry, 1,
   (char*)"V.RenderVolumetricGeometry(vtkViewport) -> int\nC++: virtual int RenderVolumetricGeometry(vtkViewport *ren)\n\nRender this assembly and all its parts.  The rendering process is\nrecursive. The parts of each assembly are rendered only if the\nvisibility for the prop is turned on.\n"},
  {(char*)"RenderOverlay", PyvtkPropAssembly_RenderOverlay, 1,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *ren)\n\nRender this assembly and all its parts.  The rendering process is\nrecursive. The parts of each assembly are rendered only if the\nvisibility for the prop is turned on.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkPropAssembly_HasTranslucentPolygonalGeometry, 1,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkPropAssembly_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {(char*)"GetBounds", PyvtkPropAssembly_GetBounds, 1,
   (char*)"V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds()\n\nGet the bounds for this prop assembly as\n(Xmin,Xmax,Ymin,Ymax,Zmin,Zmax). May return NULL in some cases\n(meaning the bounds is undefined).\n"},
  {(char*)"ShallowCopy", PyvtkPropAssembly_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *Prop)\n\nShallow copy of this vtkPropAssembly.\n"},
  {(char*)"GetMTime", PyvtkPropAssembly_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nOverride default GetMTime method to also consider all of the prop\nassembly's parts.\n"},
  {(char*)"InitPathTraversal", PyvtkPropAssembly_InitPathTraversal, 1,
   (char*)"V.InitPathTraversal()\nC++: void InitPathTraversal()\n\nMethods to traverse the paths (i.e., leaf nodes) of a prop\nassembly. These methods should be contrasted to those that\ntraverse the list of parts using GetParts().  GetParts() returns\na list of children of this assembly, not necessarily the leaf\nnodes of the assembly. To use the methods below - first invoke\nInitPathTraversal() followed by repeated calls to GetNextPath(). \nGetNextPath() returns a NULL pointer when the list is exhausted.\n(See the superclass vtkProp for more information about paths.)\n"},
  {(char*)"GetNextPath", PyvtkPropAssembly_GetNextPath, 1,
   (char*)"V.GetNextPath() -> vtkAssemblyPath\nC++: vtkAssemblyPath *GetNextPath()\n\nMethods to traverse the paths (i.e., leaf nodes) of a prop\nassembly. These methods should be contrasted to those that\ntraverse the list of parts using GetParts().  GetParts() returns\na list of children of this assembly, not necessarily the leaf\nnodes of the assembly. To use the methods below - first invoke\nInitPathTraversal() followed by repeated calls to GetNextPath(). \nGetNextPath() returns a NULL pointer when the list is exhausted.\n(See the superclass vtkProp for more information about paths.)\n"},
  {(char*)"GetNumberOfPaths", PyvtkPropAssembly_GetNumberOfPaths, 1,
   (char*)"V.GetNumberOfPaths() -> int\nC++: int GetNumberOfPaths()\n\nMethods to traverse the paths (i.e., leaf nodes) of a prop\nassembly. These methods should be contrasted to those that\ntraverse the list of parts using GetParts().  GetParts() returns\na list of children of this assembly, not necessarily the leaf\nnodes of the assembly. To use the methods below - first invoke\nInitPathTraversal() followed by repeated calls to GetNextPath(). \nGetNextPath() returns a NULL pointer when the list is exhausted.\n(See the superclass vtkProp for more information about paths.)\n"},
  {(char*)"BuildPaths", PyvtkPropAssembly_BuildPaths, 1,
   (char*)"V.BuildPaths(vtkAssemblyPaths, vtkAssemblyPath)\nC++: void BuildPaths(vtkAssemblyPaths *paths,\n    vtkAssemblyPath *path)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS Overload the\nsuperclass' vtkProp BuildPaths() method.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPropAssembly_StaticNew()
{
  return vtkPropAssembly::New();
}

PyObject *PyVTKClass_vtkPropAssemblyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPropAssembly_StaticNew,
    PyvtkPropAssembly_Methods,
    "vtkPropAssembly", modulename,
    NULL, NULL,
    PyvtkPropAssembly_Doc(),
    PyVTKClass_vtkPropNew(modulename));
  return cls;
}

const char **PyvtkPropAssembly_Doc()
{
  static const char *docstring[] = {
    "vtkPropAssembly - create hierarchies of props\n\n",
    "Superclass: vtkProp\n\n",
    "vtkPropAssembly is an object that groups props and other prop\nassemblies into a tree-like hierarchy. The props can then be treated\nas a group (e.g., turning visibility on and off).\n\nA vtkPropAssembly object can be used in place of an vtkProp since it\nis a subclass of vtkProp. The difference is that vtkPropAssembly\nmaintains a list of other prop and prop assembly instances (its\n\"parts\") that form t",
    "he assembly. Note that this process is recursive:\nyou can create groups consisting of prop assemblies to arbitrary\ndepth.\n\nvtkPropAssembly's and vtkProp's that compose a prop assembly need not\nbe added to a renderer's list of props, as long as the parent\nassembly is in the prop list. This is because they are automatically\nrenderered during the hierarchical traversal process.\n\nCaveats:\n\nvtkPropAsse",
    "mblies can consist of hierarchies of assemblies, where one\nactor or assembly used in one hierarchy is also used in other\nhierarchies. However, make that there are no cycles (e.g.,\nparent->child->parent), this will cause program failure.\n\nSee Also:\n\nvtkProp3D vtkActor vtkAssembly vtkActor2D vtkVolume\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPropAssembly(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPropAssemblyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPropAssembly", o) != 0)
    {
    Py_DECREF(o);
    }

}

