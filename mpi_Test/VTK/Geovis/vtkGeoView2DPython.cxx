// python wrapper for vtkGeoView2D
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
#include "vtkGeoView2D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGeoView2D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGeoView2D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGeoView2DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGeoView2DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkRenderViewNew
extern "C" { PyObject *PyVTKClass_vtkRenderViewNew(const char *); }
#define DECLARED_PyVTKClass_vtkRenderViewNew
#endif

static const char **PyvtkGeoView2D_Doc();


static PyObject *
PyvtkGeoView2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoView2D *op = static_cast<vtkGeoView2D *>(vp);

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
      tempr = op->vtkGeoView2D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoView2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoView2D *op = static_cast<vtkGeoView2D *>(vp);

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
      tempr = op->vtkGeoView2D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoView2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoView2D *op = static_cast<vtkGeoView2D *>(vp);

  vtkGeoView2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGeoView2D::NewInstance();
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
PyvtkGeoView2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGeoView2D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGeoView2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoView2D_GetSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoView2D *op = static_cast<vtkGeoView2D *>(vp);

  vtkGeoTerrain2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSurface();
      }
    else
      {
      tempr = op->vtkGeoView2D::GetSurface();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoView2D_SetSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoView2D *op = static_cast<vtkGeoView2D *>(vp);

  vtkGeoTerrain2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGeoTerrain2D"))
    {
    if (ap.IsBound())
      {
      op->SetSurface(temp0);
      }
    else
      {
      op->vtkGeoView2D::SetSurface(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoView2D_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoView2D *op = static_cast<vtkGeoView2D *>(vp);

  vtkAbstractTransform *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTransform();
      }
    else
      {
      tempr = op->vtkGeoView2D::GetTransform();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoView2D_ApplyViewTheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyViewTheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoView2D *op = static_cast<vtkGeoView2D *>(vp);

  vtkViewTheme *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewTheme"))
    {
    if (ap.IsBound())
      {
      op->ApplyViewTheme(temp0);
      }
    else
      {
      op->vtkGeoView2D::ApplyViewTheme(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoView2D_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoView2D *op = static_cast<vtkGeoView2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Render();
      }
    else
      {
      op->vtkGeoView2D::Render();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGeoView2D_Methods[] = {
  {(char*)"GetClassName", PyvtkGeoView2D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGeoView2D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGeoView2D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGeoView2D\nC++: vtkGeoView2D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGeoView2D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGeoView2D\nC++: vtkGeoView2D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetSurface", PyvtkGeoView2D_GetSurface, 1,
   (char*)"V.GetSurface() -> vtkGeoTerrain2D\nC++: vtkGeoTerrain2D *GetSurface()\n\n"},
  {(char*)"SetSurface", PyvtkGeoView2D_SetSurface, 1,
   (char*)"V.SetSurface(vtkGeoTerrain2D)\nC++: virtual void SetSurface(vtkGeoTerrain2D *surf)\n\n"},
  {(char*)"GetTransform", PyvtkGeoView2D_GetTransform, 1,
   (char*)"V.GetTransform() -> vtkAbstractTransform\nC++: virtual vtkAbstractTransform *GetTransform()\n\nReturns the transform associated with the surface.\n"},
  {(char*)"ApplyViewTheme", PyvtkGeoView2D_ApplyViewTheme, 1,
   (char*)"V.ApplyViewTheme(vtkViewTheme)\nC++: virtual void ApplyViewTheme(vtkViewTheme *theme)\n\nApply the view theme to this view.\n"},
  {(char*)"Render", PyvtkGeoView2D_Render, 1,
   (char*)"V.Render()\nC++: virtual void Render()\n\nUpdate and render the view.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGeoView2D_StaticNew()
{
  return vtkGeoView2D::New();
}

PyObject *PyVTKClass_vtkGeoView2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGeoView2D_StaticNew,
    PyvtkGeoView2D_Methods,
    "vtkGeoView2D", modulename,
    NULL, NULL,
    PyvtkGeoView2D_Doc(),
    PyVTKClass_vtkRenderViewNew(modulename));
  return cls;
}

const char **PyvtkGeoView2D_Doc()
{
  static const char *docstring[] = {
    "vtkGeoView2D - A 2D geospatial view.\n\n",
    "Superclass: vtkRenderView\n\n",
    "vtkGeoView is a 2D globe view. The globe may contain a\nmulti-resolution geometry source (vtkGeoTerrain2D), multiple\nmulti-resolution image sources (vtkGeoAlignedImageRepresentation), as\nwell as other representations such as vtkGeoGraphRepresentation2D. At\na minimum, the view must have a terrain and one image representation.\nBy default, you may select in the view with the left mouse button,\npan wit",
    "h the middle button, and zoom with the right mouse button or\nscroll wheel.\n\nEach terrain or image representation contains a vtkGeoSource subclass\nwhich generates geometry or imagery at multiple resolutions. As the\ncamera position changes, the terrain and/or image representations may\nask its vtkGeoSource to refine the geometry. This refinement is\nperformed on a separate thread, and the data is adde",
    "d to the view\nwhen it becomes available.\n\nSee Also:\n\nvtkGeoTerrain2D vtkGeoAlignedImageRepresentation vtkGeoSource\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGeoView2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGeoView2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGeoView2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

