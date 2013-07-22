// python wrapper for vtkGeoView
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
#include "vtkGeoView.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGeoView(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGeoView(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGeoViewNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGeoViewNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkRenderViewNew
extern "C" { PyObject *PyVTKClass_vtkRenderViewNew(const char *); }
#define DECLARED_PyVTKClass_vtkRenderViewNew
#endif

static const char **PyvtkGeoView_Doc();


static PyObject *
PyvtkGeoView_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoView *op = static_cast<vtkGeoView *>(vp);

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
      tempr = op->vtkGeoView::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoView_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoView *op = static_cast<vtkGeoView *>(vp);

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
      tempr = op->vtkGeoView::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoView_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoView *op = static_cast<vtkGeoView *>(vp);

  vtkGeoView *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGeoView::NewInstance();
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
PyvtkGeoView_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGeoView *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGeoView::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoView_AddDefaultImageRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDefaultImageRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoView *op = static_cast<vtkGeoView *>(vp);

  vtkImageData *temp0 = NULL;
  vtkGeoAlignedImageRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      tempr = op->AddDefaultImageRepresentation(temp0);
      }
    else
      {
      tempr = op->vtkGeoView::AddDefaultImageRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoView_PrepareForRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrepareForRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoView *op = static_cast<vtkGeoView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PrepareForRendering();
      }
    else
      {
      op->vtkGeoView::PrepareForRendering();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoView_BuildLowResEarth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLowResEarth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoView *op = static_cast<vtkGeoView *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->BuildLowResEarth(temp0);
      }
    else
      {
      op->vtkGeoView::BuildLowResEarth(temp0);
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
PyvtkGeoView_SetLockHeading(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLockHeading");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoView *op = static_cast<vtkGeoView *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLockHeading(temp0);
      }
    else
      {
      op->vtkGeoView::SetLockHeading(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoView_GetLockHeading(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLockHeading");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoView *op = static_cast<vtkGeoView *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLockHeading();
      }
    else
      {
      tempr = op->vtkGeoView::GetLockHeading();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoView_LockHeadingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LockHeadingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoView *op = static_cast<vtkGeoView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LockHeadingOn();
      }
    else
      {
      op->vtkGeoView::LockHeadingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoView_LockHeadingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LockHeadingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoView *op = static_cast<vtkGeoView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LockHeadingOff();
      }
    else
      {
      op->vtkGeoView::LockHeadingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoView_GetGeoInteractorStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeoInteractorStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoView *op = static_cast<vtkGeoView *>(vp);

  vtkGeoInteractorStyle *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGeoInteractorStyle();
      }
    else
      {
      tempr = op->vtkGeoView::GetGeoInteractorStyle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoView_SetGeoInteractorStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeoInteractorStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoView *op = static_cast<vtkGeoView *>(vp);

  vtkGeoInteractorStyle *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGeoInteractorStyle"))
    {
    if (ap.IsBound())
      {
      op->SetGeoInteractorStyle(temp0);
      }
    else
      {
      op->vtkGeoView::SetGeoInteractorStyle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoView_SetTerrain(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTerrain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoView *op = static_cast<vtkGeoView *>(vp);

  vtkGeoTerrain *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGeoTerrain"))
    {
    if (ap.IsBound())
      {
      op->SetTerrain(temp0);
      }
    else
      {
      op->vtkGeoView::SetTerrain(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoView_GetTerrain(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTerrain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoView *op = static_cast<vtkGeoView *>(vp);

  vtkGeoTerrain *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTerrain();
      }
    else
      {
      tempr = op->vtkGeoView::GetTerrain();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoView_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoView *op = static_cast<vtkGeoView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Render();
      }
    else
      {
      op->vtkGeoView::Render();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGeoView_Methods[] = {
  {(char*)"GetClassName", PyvtkGeoView_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGeoView_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGeoView_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGeoView\nC++: vtkGeoView *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGeoView_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGeoView\nC++: vtkGeoView *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddDefaultImageRepresentation", PyvtkGeoView_AddDefaultImageRepresentation, 1,
   (char*)"V.AddDefaultImageRepresentation(vtkImageData)\n    -> vtkGeoAlignedImageRepresentation\nC++: vtkGeoAlignedImageRepresentation *AddDefaultImageRepresentation(\n    vtkImageData *image)\n\nAdds an image representation with a simple terrain model using\nthe image in the specified file as the globe terrain.\n"},
  {(char*)"PrepareForRendering", PyvtkGeoView_PrepareForRendering, 1,
   (char*)"V.PrepareForRendering()\nC++: virtual void PrepareForRendering()\n\n"},
  {(char*)"BuildLowResEarth", PyvtkGeoView_BuildLowResEarth, 1,
   (char*)"V.BuildLowResEarth([float, float, float])\nC++: void BuildLowResEarth(double origin[3])\n\nRebuild low-res earth source; call after (re)setting origin.\n"},
  {(char*)"SetLockHeading", PyvtkGeoView_SetLockHeading, 1,
   (char*)"V.SetLockHeading(bool)\nC++: virtual void SetLockHeading(bool lock)\n\nWhether the view locks the heading when panning. Default is off.\n"},
  {(char*)"GetLockHeading", PyvtkGeoView_GetLockHeading, 1,
   (char*)"V.GetLockHeading() -> bool\nC++: virtual bool GetLockHeading()\n\nWhether the view locks the heading when panning. Default is off.\n"},
  {(char*)"LockHeadingOn", PyvtkGeoView_LockHeadingOn, 1,
   (char*)"V.LockHeadingOn()\nC++: void LockHeadingOn()\n\nWhether the view locks the heading when panning. Default is off.\n"},
  {(char*)"LockHeadingOff", PyvtkGeoView_LockHeadingOff, 1,
   (char*)"V.LockHeadingOff()\nC++: void LockHeadingOff()\n\nWhether the view locks the heading when panning. Default is off.\n"},
  {(char*)"GetGeoInteractorStyle", PyvtkGeoView_GetGeoInteractorStyle, 1,
   (char*)"V.GetGeoInteractorStyle() -> vtkGeoInteractorStyle\nC++: vtkGeoInteractorStyle *GetGeoInteractorStyle()\n\nConvenience method for obtaining the internal interactor style.\n"},
  {(char*)"SetGeoInteractorStyle", PyvtkGeoView_SetGeoInteractorStyle, 1,
   (char*)"V.SetGeoInteractorStyle(vtkGeoInteractorStyle)\nC++: virtual void SetGeoInteractorStyle(\n    vtkGeoInteractorStyle *style)\n\nMethod to change the interactor style.\n"},
  {(char*)"SetTerrain", PyvtkGeoView_SetTerrain, 1,
   (char*)"V.SetTerrain(vtkGeoTerrain)\nC++: virtual void SetTerrain(vtkGeoTerrain *terrain)\n\nThe terrain (geometry) model for this earth view.\n"},
  {(char*)"GetTerrain", PyvtkGeoView_GetTerrain, 1,
   (char*)"V.GetTerrain() -> vtkGeoTerrain\nC++: vtkGeoTerrain *GetTerrain()\n\nThe terrain (geometry) model for this earth view.\n"},
  {(char*)"Render", PyvtkGeoView_Render, 1,
   (char*)"V.Render()\nC++: virtual void Render()\n\nUpdate and render the view.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGeoView_StaticNew()
{
  return vtkGeoView::New();
}

PyObject *PyVTKClass_vtkGeoViewNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGeoView_StaticNew,
    PyvtkGeoView_Methods,
    "vtkGeoView", modulename,
    NULL, NULL,
    PyvtkGeoView_Doc(),
    PyVTKClass_vtkRenderViewNew(modulename));
  return cls;
}

const char **PyvtkGeoView_Doc()
{
  static const char *docstring[] = {
    "vtkGeoView - A 3D geospatial view.\n\n",
    "Superclass: vtkRenderView\n\n",
    "vtkGeoView is a 3D globe view. The globe may contain a\nmulti-resolution geometry source (vtkGeoTerrain), multiple\nmulti-resolution image sources (vtkGeoAlignedImageRepresentation), as\nwell as other representations such as vtkRenderedGraphRepresentation.\nAt a minimum, the view must have a terrain and one image\nrepresentation. The view uses vtkGeoInteractorStyle to orbit, zoom,\nand tilt the view, an",
    "d contains a vtkCompassWidget for manipulating\nthe camera.\n\nEach terrain or image representation contains a vtkGeoSource subclass\nwhich generates geometry or imagery at multiple resolutions. As the\ncamera position changes, the terrain and/or image representations may\nask its vtkGeoSource to refine the geometry. This refinement is\nperformed on a separate thread, and the data is added to the view\nwh",
    "en it becomes available.\n\nSee Also:\n\nvtkGeoTerrain vtkGeoAlignedImageRepresentation vtkGeoSource\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGeoView(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGeoViewNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGeoView", o) != 0)
    {
    Py_DECREF(o);
    }

}

