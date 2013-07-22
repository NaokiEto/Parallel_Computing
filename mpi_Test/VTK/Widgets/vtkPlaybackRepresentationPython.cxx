// python wrapper for vtkPlaybackRepresentation
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
#include "vtkPlaybackRepresentation.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPlaybackRepresentation(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPlaybackRepresentation(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPlaybackRepresentationNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPlaybackRepresentationNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkBorderRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkBorderRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkBorderRepresentationNew
#endif

static const char **PyvtkPlaybackRepresentation_Doc();


static PyObject *
PyvtkPlaybackRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaybackRepresentation *op = static_cast<vtkPlaybackRepresentation *>(vp);

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
      tempr = op->vtkPlaybackRepresentation::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlaybackRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaybackRepresentation *op = static_cast<vtkPlaybackRepresentation *>(vp);

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
      tempr = op->vtkPlaybackRepresentation::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlaybackRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaybackRepresentation *op = static_cast<vtkPlaybackRepresentation *>(vp);

  vtkPlaybackRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPlaybackRepresentation::NewInstance();
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
PyvtkPlaybackRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPlaybackRepresentation *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPlaybackRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlaybackRepresentation_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaybackRepresentation *op = static_cast<vtkPlaybackRepresentation *>(vp);

  vtkProperty2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProperty();
      }
    else
      {
      tempr = op->vtkPlaybackRepresentation::GetProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlaybackRepresentation_Play(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Play");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaybackRepresentation *op = static_cast<vtkPlaybackRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Play();
      }
    else
      {
      op->vtkPlaybackRepresentation::Play();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlaybackRepresentation_Stop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Stop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaybackRepresentation *op = static_cast<vtkPlaybackRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Stop();
      }
    else
      {
      op->vtkPlaybackRepresentation::Stop();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlaybackRepresentation_ForwardOneFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForwardOneFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaybackRepresentation *op = static_cast<vtkPlaybackRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ForwardOneFrame();
      }
    else
      {
      op->vtkPlaybackRepresentation::ForwardOneFrame();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlaybackRepresentation_BackwardOneFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BackwardOneFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaybackRepresentation *op = static_cast<vtkPlaybackRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BackwardOneFrame();
      }
    else
      {
      op->vtkPlaybackRepresentation::BackwardOneFrame();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlaybackRepresentation_JumpToBeginning(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "JumpToBeginning");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaybackRepresentation *op = static_cast<vtkPlaybackRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->JumpToBeginning();
      }
    else
      {
      op->vtkPlaybackRepresentation::JumpToBeginning();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlaybackRepresentation_JumpToEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "JumpToEnd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaybackRepresentation *op = static_cast<vtkPlaybackRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->JumpToEnd();
      }
    else
      {
      op->vtkPlaybackRepresentation::JumpToEnd();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlaybackRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaybackRepresentation *op = static_cast<vtkPlaybackRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkPlaybackRepresentation::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlaybackRepresentation_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaybackRepresentation *op = static_cast<vtkPlaybackRepresentation *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetSize(temp0);
      }
    else
      {
      op->vtkPlaybackRepresentation::GetSize(temp0);
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
PyvtkPlaybackRepresentation_GetActors2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaybackRepresentation *op = static_cast<vtkPlaybackRepresentation *>(vp);

  vtkPropCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
    {
    if (ap.IsBound())
      {
      op->GetActors2D(temp0);
      }
    else
      {
      op->vtkPlaybackRepresentation::GetActors2D(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlaybackRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaybackRepresentation *op = static_cast<vtkPlaybackRepresentation *>(vp);

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
      op->vtkPlaybackRepresentation::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlaybackRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaybackRepresentation *op = static_cast<vtkPlaybackRepresentation *>(vp);

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
      tempr = op->vtkPlaybackRepresentation::RenderOverlay(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlaybackRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaybackRepresentation *op = static_cast<vtkPlaybackRepresentation *>(vp);

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
      tempr = op->vtkPlaybackRepresentation::RenderOpaqueGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlaybackRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaybackRepresentation *op = static_cast<vtkPlaybackRepresentation *>(vp);

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
      tempr = op->vtkPlaybackRepresentation::RenderTranslucentPolygonalGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlaybackRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaybackRepresentation *op = static_cast<vtkPlaybackRepresentation *>(vp);

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
      tempr = op->vtkPlaybackRepresentation::HasTranslucentPolygonalGeometry();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPlaybackRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkPlaybackRepresentation_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK class methods.\n"},
  {(char*)"IsA", PyvtkPlaybackRepresentation_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK class methods.\n"},
  {(char*)"NewInstance", PyvtkPlaybackRepresentation_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPlaybackRepresentation\nC++: vtkPlaybackRepresentation *NewInstance()\n\nStandard VTK class methods.\n"},
  {(char*)"SafeDownCast", PyvtkPlaybackRepresentation_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPlaybackRepresentation\nC++: vtkPlaybackRepresentation *SafeDownCast(vtkObject* o)\n\nStandard VTK class methods.\n"},
  {(char*)"GetProperty", PyvtkPlaybackRepresentation_GetProperty, 1,
   (char*)"V.GetProperty() -> vtkProperty2D\nC++: vtkProperty2D *GetProperty()\n\nBy obtaining this property you can specify the properties of the\nrepresentation.\n"},
  {(char*)"Play", PyvtkPlaybackRepresentation_Play, 1,
   (char*)"V.Play()\nC++: virtual void Play()\n\nVirtual callbacks that subclasses should implement.\n"},
  {(char*)"Stop", PyvtkPlaybackRepresentation_Stop, 1,
   (char*)"V.Stop()\nC++: virtual void Stop()\n\nVirtual callbacks that subclasses should implement.\n"},
  {(char*)"ForwardOneFrame", PyvtkPlaybackRepresentation_ForwardOneFrame, 1,
   (char*)"V.ForwardOneFrame()\nC++: virtual void ForwardOneFrame()\n\nVirtual callbacks that subclasses should implement.\n"},
  {(char*)"BackwardOneFrame", PyvtkPlaybackRepresentation_BackwardOneFrame, 1,
   (char*)"V.BackwardOneFrame()\nC++: virtual void BackwardOneFrame()\n\nVirtual callbacks that subclasses should implement.\n"},
  {(char*)"JumpToBeginning", PyvtkPlaybackRepresentation_JumpToBeginning, 1,
   (char*)"V.JumpToBeginning()\nC++: virtual void JumpToBeginning()\n\nVirtual callbacks that subclasses should implement.\n"},
  {(char*)"JumpToEnd", PyvtkPlaybackRepresentation_JumpToEnd, 1,
   (char*)"V.JumpToEnd()\nC++: virtual void JumpToEnd()\n\nVirtual callbacks that subclasses should implement.\n"},
  {(char*)"BuildRepresentation", PyvtkPlaybackRepresentation_BuildRepresentation, 1,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nSatisfy the superclasses' API.\n"},
  {(char*)"GetSize", PyvtkPlaybackRepresentation_GetSize, 1,
   (char*)"V.GetSize([float, float])\nC++: virtual void GetSize(double size[2])\n\nSatisfy the superclasses' API.\n"},
  {(char*)"GetActors2D", PyvtkPlaybackRepresentation_GetActors2D, 1,
   (char*)"V.GetActors2D(vtkPropCollection)\nC++: virtual void GetActors2D(vtkPropCollection *)\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkPlaybackRepresentation_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {(char*)"RenderOverlay", PyvtkPlaybackRepresentation_RenderOverlay, 1,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: virtual int RenderOverlay(vtkViewport *)\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkPlaybackRepresentation_RenderOpaqueGeometry, 1,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *)\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkPlaybackRepresentation_RenderTranslucentPolygonalGeometry, 1,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(vtkViewport *)\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkPlaybackRepresentation_HasTranslucentPolygonalGeometry, 1,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPlaybackRepresentation_StaticNew()
{
  return vtkPlaybackRepresentation::New();
}

PyObject *PyVTKClass_vtkPlaybackRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPlaybackRepresentation_StaticNew,
    PyvtkPlaybackRepresentation_Methods,
    "vtkPlaybackRepresentation", modulename,
    NULL, NULL,
    PyvtkPlaybackRepresentation_Doc(),
    PyVTKClass_vtkBorderRepresentationNew(modulename));
  return cls;
}

const char **PyvtkPlaybackRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkPlaybackRepresentation - represent the vtkPlaybackWidget\n\n",
    "Superclass: vtkBorderRepresentation\n\n",
    "This class is used to represent the vtkPlaybackWidget. Besides\ndefining geometry, this class defines a series of virtual method\nstubs that are meant to be subclassed by applications for controlling\nplayback.\n\nSee Also:\n\nvtkPlaybackWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPlaybackRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPlaybackRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPlaybackRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

