// python wrapper for vtkActor
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
#include "vtkActor.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkActor(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkActor(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkActorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkActorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkProp3DNew
extern "C" { PyObject *PyVTKClass_vtkProp3DNew(const char *); }
#define DECLARED_PyVTKClass_vtkProp3DNew
#endif

static const char **PyvtkActor_Doc();


static PyObject *
PyvtkActor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

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
      tempr = op->vtkActor::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

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
      tempr = op->vtkActor::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

  vtkActor *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkActor::NewInstance();
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
PyvtkActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkActor *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkActor_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

  vtkPropCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
    {
    if (ap.IsBound())
      {
      op->GetActors(temp0);
      }
    else
      {
      op->vtkActor::GetActors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

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
      tempr = op->vtkActor::RenderOpaqueGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkActor_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

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
      tempr = op->vtkActor::RenderTranslucentPolygonalGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkActor_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

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
      tempr = op->vtkActor::HasTranslucentPolygonalGeometry();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkActor_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

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
      op->vtkActor::Render(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkActor_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

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
      op->vtkActor::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

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
      op->vtkActor::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkActor_SetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

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
      op->vtkActor::SetProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkActor_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

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
      tempr = op->vtkActor::GetProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkActor_MakeProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

  vtkProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->MakeProperty();
      }
    else
      {
      tempr = op->vtkActor::MakeProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkActor_SetBackfaceProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackfaceProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetBackfaceProperty(temp0);
      }
    else
      {
      op->vtkActor::SetBackfaceProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkActor_GetBackfaceProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackfaceProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

  vtkProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBackfaceProperty();
      }
    else
      {
      tempr = op->vtkActor::GetBackfaceProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkActor_SetTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

  vtkTexture *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTexture"))
    {
    if (ap.IsBound())
      {
      op->SetTexture(temp0);
      }
    else
      {
      op->vtkActor::SetTexture(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkActor_GetTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

  vtkTexture *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTexture();
      }
    else
      {
      tempr = op->vtkActor::GetTexture();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkActor_SetMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

  vtkMapper *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMapper"))
    {
    if (ap.IsBound())
      {
      op->SetMapper(temp0);
      }
    else
      {
      op->vtkActor::SetMapper(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkActor_GetMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

  vtkMapper *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMapper();
      }
    else
      {
      tempr = op->vtkActor::GetMapper();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkActor_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetBounds(temp0);
      }
    else
      {
      op->vtkActor::GetBounds(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkActor_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

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
      tempr = op->vtkActor::GetBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkActor_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkActor_GetBounds_s1(self, args);
    case 0:
      return PyvtkActor_GetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return NULL;
}



static PyObject *
PyvtkActor_ApplyProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ApplyProperties();
      }
    else
      {
      op->vtkActor::ApplyProperties();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkActor_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

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
      tempr = op->vtkActor::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkActor_GetRedrawMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRedrawMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRedrawMTime();
      }
    else
      {
      tempr = op->vtkActor::GetRedrawMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkActor_InitPartTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitPartTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InitPartTraversal();
      }
    else
      {
      op->vtkActor::InitPartTraversal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkActor_GetNextPart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextPart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

  vtkActor *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNextPart();
      }
    else
      {
      tempr = op->vtkActor::GetNextPart();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkActor_GetNumberOfParts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfParts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfParts();
      }
    else
      {
      tempr = op->vtkActor::GetNumberOfParts();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}
#endif


static PyObject *
PyvtkActor_GetSupportsSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSupportsSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSupportsSelection();
      }
    else
      {
      tempr = op->vtkActor::GetSupportsSelection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkActor_Methods[] = {
  {(char*)"GetClassName", PyvtkActor_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkActor_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkActor_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkActor\nC++: vtkActor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkActor_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkActor\nC++: vtkActor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetActors", PyvtkActor_GetActors, 1,
   (char*)"V.GetActors(vtkPropCollection)\nC++: virtual void GetActors(vtkPropCollection *)\n\nFor some exporters and other other operations we must be able to\ncollect all the actors or volumes. These methods are used in that\nprocess.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkActor_RenderOpaqueGeometry, 1,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *viewport)\n\nSupport the standard render methods.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkActor_RenderTranslucentPolygonalGeometry, 1,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(\n    vtkViewport *viewport)\n\nSupport the standard render methods.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkActor_HasTranslucentPolygonalGeometry, 1,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {(char*)"Render", PyvtkActor_Render, 1,
   (char*)"V.Render(vtkRenderer, vtkMapper)\nC++: virtual void Render(vtkRenderer *, vtkMapper *)\n\nThis causes the actor to be rendered. It in turn will render the\nactor's property, texture map and then mapper. If a property\nhasn't been assigned, then the actor will create one\nautomatically. Note that a side effect of this method is that the\npipeline will be updated.\n"},
  {(char*)"ShallowCopy", PyvtkActor_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop)\n\nShallow copy of an actor. Overloads the virtual vtkProp method.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkActor_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {(char*)"SetProperty", PyvtkActor_SetProperty, 1,
   (char*)"V.SetProperty(vtkProperty)\nC++: void SetProperty(vtkProperty *lut)\n\nSet/Get the property object that controls this actors surface\nproperties.  This should be an instance of a vtkProperty object. \nEvery actor must have a property associated with it.  If one\nisn't specified, then one will be generated automatically.\nMultiple actors can share one property object.\n"},
  {(char*)"GetProperty", PyvtkActor_GetProperty, 1,
   (char*)"V.GetProperty() -> vtkProperty\nC++: vtkProperty *GetProperty()\n\nSet/Get the property object that controls this actors surface\nproperties.  This should be an instance of a vtkProperty object. \nEvery actor must have a property associated with it.  If one\nisn't specified, then one will be generated automatically.\nMultiple actors can share one property object.\n"},
  {(char*)"MakeProperty", PyvtkActor_MakeProperty, 1,
   (char*)"V.MakeProperty() -> vtkProperty\nC++: virtual vtkProperty *MakeProperty()\n\nCreate a new property suitable for use with this type of Actor.\nFor example, a vtkMesaActor should create a vtkMesaProperty in\nthis function.   The default is to just call vtkProperty::New.\n"},
  {(char*)"SetBackfaceProperty", PyvtkActor_SetBackfaceProperty, 1,
   (char*)"V.SetBackfaceProperty(vtkProperty)\nC++: void SetBackfaceProperty(vtkProperty *lut)\n\nSet/Get the property object that controls this actors backface\nsurface properties.  This should be an instance of a vtkProperty\nobject. If one isn't specified, then the front face properties\nwill be used.  Multiple actors can share one property object.\n"},
  {(char*)"GetBackfaceProperty", PyvtkActor_GetBackfaceProperty, 1,
   (char*)"V.GetBackfaceProperty() -> vtkProperty\nC++: vtkProperty *GetBackfaceProperty()\n\nSet/Get the property object that controls this actors backface\nsurface properties.  This should be an instance of a vtkProperty\nobject. If one isn't specified, then the front face properties\nwill be used.  Multiple actors can share one property object.\n"},
  {(char*)"SetTexture", PyvtkActor_SetTexture, 1,
   (char*)"V.SetTexture(vtkTexture)\nC++: virtual void SetTexture(vtkTexture *)\n\nSet/Get the texture object to control rendering texture maps. \nThis will be a vtkTexture object. An actor does not need to have\nan associated texture map and multiple actors can share one\ntexture.\n"},
  {(char*)"GetTexture", PyvtkActor_GetTexture, 1,
   (char*)"V.GetTexture() -> vtkTexture\nC++: vtkTexture *GetTexture()\n\nSet/Get the texture object to control rendering texture maps. \nThis will be a vtkTexture object. An actor does not need to have\nan associated texture map and multiple actors can share one\ntexture.\n"},
  {(char*)"SetMapper", PyvtkActor_SetMapper, 1,
   (char*)"V.SetMapper(vtkMapper)\nC++: virtual void SetMapper(vtkMapper *)\n\nThis is the method that is used to connect an actor to the end of\na visualization pipeline, i.e. the mapper. This should be a\nsubclass of vtkMapper. Typically vtkPolyDataMapper and\nvtkDataSetMapper will be used.\n"},
  {(char*)"GetMapper", PyvtkActor_GetMapper, 1,
   (char*)"V.GetMapper() -> vtkMapper\nC++: vtkMapper *GetMapper()\n\nReturns the Mapper that this actor is getting its data from.\n"},
  {(char*)"GetBounds", PyvtkActor_GetBounds, 1,
   (char*)"V.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6])\nV.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds()\n\nGet the bounds for this Actor as (Xmin,Xmax,Ymin,Ymax,Zmin,Zmax).\n(The method GetBounds(double bounds[6]) is available from the\nsuperclass.)\n"},
  {(char*)"ApplyProperties", PyvtkActor_ApplyProperties, 1,
   (char*)"V.ApplyProperties()\nC++: virtual void ApplyProperties()\n\nApply the current properties to all parts that compose this\nactor. This method is overloaded in vtkAssembly to apply the\nassemblies' properties to all its parts in a recursive manner.\nTypically the use of this method is to set the desired properties\nin the assembly, and then push the properties down to the\nassemblies parts with ApplyProperties().\n"},
  {(char*)"GetMTime", PyvtkActor_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nGet the actors mtime plus consider its properties and texture if\nset.\n"},
  {(char*)"GetRedrawMTime", PyvtkActor_GetRedrawMTime, 1,
   (char*)"V.GetRedrawMTime() -> int\nC++: virtual unsigned long GetRedrawMTime()\n\nReturn the mtime of anything that would cause the rendered image\nto appear differently. Usually this involves checking the mtime\nof the prop plus anything else it depends on such as properties,\ntextures etc.\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"InitPartTraversal", PyvtkActor_InitPartTraversal, 1,
   (char*)"V.InitPartTraversal()\nC++: virtual void InitPartTraversal()\n\nThe following methods are for compatibility. The methods will be\ndeprecated in the near future. Use vtkProp::GetNextPath() (and\nrelated functionality) to get the parts in an assembly (or more\ncorrectly, the paths in the assembly).\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"GetNextPart", PyvtkActor_GetNextPart, 1,
   (char*)"V.GetNextPart() -> vtkActor\nC++: virtual vtkActor *GetNextPart()\n\nThe following methods are for compatibility. The methods will be\ndeprecated in the near future. Use vtkProp::GetNextPath() (and\nrelated functionality) to get the parts in an assembly (or more\ncorrectly, the paths in the assembly).\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"GetNumberOfParts", PyvtkActor_GetNumberOfParts, 1,
   (char*)"V.GetNumberOfParts() -> int\nC++: virtual int GetNumberOfParts()\n\nThe following methods are for compatibility. The methods will be\ndeprecated in the near future. Use vtkProp::GetNextPath() (and\nrelated functionality) to get the parts in an assembly (or more\ncorrectly, the paths in the assembly).\n"},
#endif
  {(char*)"GetSupportsSelection", PyvtkActor_GetSupportsSelection, 1,
   (char*)"V.GetSupportsSelection() -> bool\nC++: virtual bool GetSupportsSelection()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS Used by\nvtkHardwareSelector to determine if the prop supports hardware\nselection.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkActor_StaticNew()
{
  return vtkActor::New();
}

PyObject *PyVTKClass_vtkActorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkActor_StaticNew,
    PyvtkActor_Methods,
    "vtkActor", modulename,
    NULL, NULL,
    PyvtkActor_Doc(),
    PyVTKClass_vtkProp3DNew(modulename));
  return cls;
}

const char **PyvtkActor_Doc()
{
  static const char *docstring[] = {
    "vtkActor - represents an object (geometry & properties) in a rendered\nscene \n\n",
    "Superclass: vtkProp3D\n\n",
    "vtkActor is used to represent an entity in a rendering scene.  It\ninherits functions related to the actors position, and orientation\nfrom vtkProp. The actor also has scaling and maintains a reference to\nthe defining geometry (i.e., the mapper), rendering properties, and\npossibly a texture map. vtkActor combines these instance variables\ninto one 4x4 transformation matrix as follows: [x y z 1] = [x ",
    "y z 1]\nTranslate(-origin) Scale(scale) Rot(y) Rot(x) Rot (z) Trans(origin)\nTrans(position)\n\nSee Also:\n\nvtkProperty vtkTexture vtkMapper vtkAssembly vtkFollower vtkLODActor\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkActor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkActorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkActor", o) != 0)
    {
    Py_DECREF(o);
    }

}

