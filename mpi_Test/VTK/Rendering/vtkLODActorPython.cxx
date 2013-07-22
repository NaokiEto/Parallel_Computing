// python wrapper for vtkLODActor
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
#include "vtkLODActor.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkLODActor(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkLODActor(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkLODActorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkLODActorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkActorNew
extern "C" { PyObject *PyVTKClass_vtkActorNew(const char *); }
#define DECLARED_PyVTKClass_vtkActorNew
#endif

static const char **PyvtkLODActor_Doc();


static PyObject *
PyvtkLODActor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODActor *op = static_cast<vtkLODActor *>(vp);

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
      tempr = op->vtkLODActor::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLODActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODActor *op = static_cast<vtkLODActor *>(vp);

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
      tempr = op->vtkLODActor::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLODActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODActor *op = static_cast<vtkLODActor *>(vp);

  vtkLODActor *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkLODActor::NewInstance();
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
PyvtkLODActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkLODActor *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkLODActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLODActor_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODActor *op = static_cast<vtkLODActor *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkMapper *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkMapper"))
    {
    if (ap.IsBound())
      {
      op->Render(temp0, temp1);
      }
    else
      {
      op->vtkLODActor::Render(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLODActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODActor *op = static_cast<vtkLODActor *>(vp);

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
      tempr = op->vtkLODActor::RenderOpaqueGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLODActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODActor *op = static_cast<vtkLODActor *>(vp);

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
      op->vtkLODActor::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLODActor_AddLODMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLODMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODActor *op = static_cast<vtkLODActor *>(vp);

  vtkMapper *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMapper"))
    {
    if (ap.IsBound())
      {
      op->AddLODMapper(temp0);
      }
    else
      {
      op->vtkLODActor::AddLODMapper(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLODActor_SetLowResFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLowResFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODActor *op = static_cast<vtkLODActor *>(vp);

  vtkPolyDataAlgorithm *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyDataAlgorithm"))
    {
    if (ap.IsBound())
      {
      op->SetLowResFilter(temp0);
      }
    else
      {
      op->vtkLODActor::SetLowResFilter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLODActor_SetMediumResFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMediumResFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODActor *op = static_cast<vtkLODActor *>(vp);

  vtkPolyDataAlgorithm *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyDataAlgorithm"))
    {
    if (ap.IsBound())
      {
      op->SetMediumResFilter(temp0);
      }
    else
      {
      op->vtkLODActor::SetMediumResFilter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLODActor_GetLowResFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowResFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODActor *op = static_cast<vtkLODActor *>(vp);

  vtkPolyDataAlgorithm *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLowResFilter();
      }
    else
      {
      tempr = op->vtkLODActor::GetLowResFilter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLODActor_GetMediumResFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMediumResFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODActor *op = static_cast<vtkLODActor *>(vp);

  vtkPolyDataAlgorithm *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMediumResFilter();
      }
    else
      {
      tempr = op->vtkLODActor::GetMediumResFilter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLODActor_GetNumberOfCloudPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCloudPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODActor *op = static_cast<vtkLODActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfCloudPoints();
      }
    else
      {
      tempr = op->vtkLODActor::GetNumberOfCloudPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLODActor_SetNumberOfCloudPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfCloudPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODActor *op = static_cast<vtkLODActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfCloudPoints(temp0);
      }
    else
      {
      op->vtkLODActor::SetNumberOfCloudPoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLODActor_GetLODMappers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLODMappers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODActor *op = static_cast<vtkLODActor *>(vp);

  vtkMapperCollection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLODMappers();
      }
    else
      {
      tempr = op->vtkLODActor::GetLODMappers();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLODActor_Modified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Modified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODActor *op = static_cast<vtkLODActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Modified();
      }
    else
      {
      op->vtkLODActor::Modified();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLODActor_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODActor *op = static_cast<vtkLODActor *>(vp);

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
      op->vtkLODActor::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkLODActor_Methods[] = {
  {(char*)"GetClassName", PyvtkLODActor_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkLODActor_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkLODActor_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkLODActor\nC++: vtkLODActor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkLODActor_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLODActor\nC++: vtkLODActor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Render", PyvtkLODActor_Render, 1,
   (char*)"V.Render(vtkRenderer, vtkMapper)\nC++: virtual void Render(vtkRenderer *, vtkMapper *)\n\nThis causes the actor to be rendered. It, in turn, will render\nthe actor's property and then mapper.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkLODActor_RenderOpaqueGeometry, 1,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport)\n\nThis method is used internally by the rendering process. We\noveride the superclass method to properly set the estimated\nrender time.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkLODActor_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {(char*)"AddLODMapper", PyvtkLODActor_AddLODMapper, 1,
   (char*)"V.AddLODMapper(vtkMapper)\nC++: void AddLODMapper(vtkMapper *mapper)\n\nAdd another level of detail.  They do not have to be in any order\nof complexity.\n"},
  {(char*)"SetLowResFilter", PyvtkLODActor_SetLowResFilter, 1,
   (char*)"V.SetLowResFilter(vtkPolyDataAlgorithm)\nC++: virtual void SetLowResFilter(vtkPolyDataAlgorithm *)\n\nYou may plug in your own filters to decimate/subsample the input.\nThe default is to use a vtkOutlineFilter (low-res) and\nvtkMaskPoints (medium-res).\n"},
  {(char*)"SetMediumResFilter", PyvtkLODActor_SetMediumResFilter, 1,
   (char*)"V.SetMediumResFilter(vtkPolyDataAlgorithm)\nC++: virtual void SetMediumResFilter(vtkPolyDataAlgorithm *)\n\nYou may plug in your own filters to decimate/subsample the input.\nThe default is to use a vtkOutlineFilter (low-res) and\nvtkMaskPoints (medium-res).\n"},
  {(char*)"GetLowResFilter", PyvtkLODActor_GetLowResFilter, 1,
   (char*)"V.GetLowResFilter() -> vtkPolyDataAlgorithm\nC++: vtkPolyDataAlgorithm *GetLowResFilter()\n\nYou may plug in your own filters to decimate/subsample the input.\nThe default is to use a vtkOutlineFilter (low-res) and\nvtkMaskPoints (medium-res).\n"},
  {(char*)"GetMediumResFilter", PyvtkLODActor_GetMediumResFilter, 1,
   (char*)"V.GetMediumResFilter() -> vtkPolyDataAlgorithm\nC++: vtkPolyDataAlgorithm *GetMediumResFilter()\n\nYou may plug in your own filters to decimate/subsample the input.\nThe default is to use a vtkOutlineFilter (low-res) and\nvtkMaskPoints (medium-res).\n"},
  {(char*)"GetNumberOfCloudPoints", PyvtkLODActor_GetNumberOfCloudPoints, 1,
   (char*)"V.GetNumberOfCloudPoints() -> int\nC++: int GetNumberOfCloudPoints()\n\nSet/Get the number of random points for the point cloud.\n"},
  {(char*)"SetNumberOfCloudPoints", PyvtkLODActor_SetNumberOfCloudPoints, 1,
   (char*)"V.SetNumberOfCloudPoints(int)\nC++: void SetNumberOfCloudPoints(int a)\n\nSet/Get the number of random points for the point cloud.\n"},
  {(char*)"GetLODMappers", PyvtkLODActor_GetLODMappers, 1,
   (char*)"V.GetLODMappers() -> vtkMapperCollection\nC++: vtkMapperCollection *GetLODMappers()\n\nAll the mappers for different LODs are stored here. The order is\nnot important.\n"},
  {(char*)"Modified", PyvtkLODActor_Modified, 1,
   (char*)"V.Modified()\nC++: void Modified()\n\nWhen this objects gets modified, this method also modifies the\nobject.\n"},
  {(char*)"ShallowCopy", PyvtkLODActor_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop)\n\nShallow copy of an LOD actor. Overloads the virtual vtkProp\nmethod.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLODActor_StaticNew()
{
  return vtkLODActor::New();
}

PyObject *PyVTKClass_vtkLODActorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLODActor_StaticNew,
    PyvtkLODActor_Methods,
    "vtkLODActor", modulename,
    NULL, NULL,
    PyvtkLODActor_Doc(),
    PyVTKClass_vtkActorNew(modulename));
  return cls;
}

const char **PyvtkLODActor_Doc()
{
  static const char *docstring[] = {
    "vtkLODActor - an actor that supports multiple levels of detail\n\n",
    "Superclass: vtkActor\n\n",
    "vtkLODActor is an actor that stores multiple levels of detail (LOD)\nand can automatically switch between them. It selects which level of\ndetail to use based on how much time it has been allocated to render.\n Currently a very simple method of TotalTime/NumberOfActors is used. \n(In the future this should be modified to dynamically allocate the\nrendering time between different actors based on their n",
    "eeds.)\n\nThere are three levels of detail by default. The top level is just\nthe normal data.  The lowest level of detail is a simple bounding box\noutline of the actor. The middle level of detail is a point cloud of\na fixed number of points that have been randomly sampled from the\nmapper's input data.  Point attributes are copied over to the point\ncloud.  These two lower levels of detail are accompl",
    "ished by creating\ninstances of a vtkOutlineFilter (low-res) and vtkMaskPoints\n(medium-res). Additional levels of detail can be add using the\nAddLODMapper() method.\n\nTo control the frame rate, you typically set the\nvtkRenderWindowInteractor DesiredUpdateRate and StillUpdateRate. This\nthen will cause vtkLODActor to adjust its LOD to fulfill the\nrequested update rate.\n\nFor greater control on levels o",
    "f detail, see also vtkLODProp3D. That\nclass allows arbitrary definition of each LOD.\n\nCaveats:\n\nIf you provide your own mappers, you are responsible for setting its\nivars correctly, such as ScalarRange, LookupTable, and so on.\n\nOn some systems the point cloud rendering (the default, medium level\nof detail) can result in points so small that they can hardly be\nseen. In this case, use the GetPropert",
    "y()->SetPointSize() method to\nincrease the rendered size of the points.\n\nSee Also:\n\nvtkActor vtkRenderer vtkLODProp3D\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLODActor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLODActorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLODActor", o) != 0)
    {
    Py_DECREF(o);
    }

}

