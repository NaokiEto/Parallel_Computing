// python wrapper for vtkMapper2D
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
#include "vtkMapper2D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMapper2D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMapper2D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMapper2DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMapper2DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAbstractMapperNew
extern "C" { PyObject *PyVTKClass_vtkAbstractMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractMapperNew
#endif

static const char **PyvtkMapper2D_Doc();


static PyObject *
PyvtkMapper2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper2D *op = static_cast<vtkMapper2D *>(vp);

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
      tempr = op->vtkMapper2D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapper2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper2D *op = static_cast<vtkMapper2D *>(vp);

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
      tempr = op->vtkMapper2D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapper2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper2D *op = static_cast<vtkMapper2D *>(vp);

  vtkMapper2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMapper2D::NewInstance();
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
PyvtkMapper2D_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper2D *op = static_cast<vtkMapper2D *>(vp);

  vtkViewport *temp0 = NULL;
  vtkActor2D *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetVTKObject(temp1, "vtkActor2D"))
    {
    if (ap.IsBound())
      {
      op->RenderOverlay(temp0, temp1);
      }
    else
      {
      op->vtkMapper2D::RenderOverlay(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper2D_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper2D *op = static_cast<vtkMapper2D *>(vp);

  vtkViewport *temp0 = NULL;
  vtkActor2D *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetVTKObject(temp1, "vtkActor2D"))
    {
    if (ap.IsBound())
      {
      op->RenderOpaqueGeometry(temp0, temp1);
      }
    else
      {
      op->vtkMapper2D::RenderOpaqueGeometry(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper2D_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper2D *op = static_cast<vtkMapper2D *>(vp);

  vtkViewport *temp0 = NULL;
  vtkActor2D *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetVTKObject(temp1, "vtkActor2D"))
    {
    if (ap.IsBound())
      {
      op->RenderTranslucentPolygonalGeometry(temp0, temp1);
      }
    else
      {
      op->vtkMapper2D::RenderTranslucentPolygonalGeometry(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapper2D_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper2D *op = static_cast<vtkMapper2D *>(vp);

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
      tempr = op->vtkMapper2D::HasTranslucentPolygonalGeometry();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMapper2D_Methods[] = {
  {(char*)"GetClassName", PyvtkMapper2D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMapper2D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMapper2D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMapper2D\nC++: vtkMapper2D *NewInstance()\n\n"},
  {(char*)"RenderOverlay", PyvtkMapper2D_RenderOverlay, 1,
   (char*)"V.RenderOverlay(vtkViewport, vtkActor2D)\nC++: virtual void RenderOverlay(vtkViewport *, vtkActor2D *)\n\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkMapper2D_RenderOpaqueGeometry, 1,
   (char*)"V.RenderOpaqueGeometry(vtkViewport, vtkActor2D)\nC++: virtual void RenderOpaqueGeometry(vtkViewport *,\n    vtkActor2D *)\n\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkMapper2D_RenderTranslucentPolygonalGeometry, 1,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport, vtkActor2D)\nC++: virtual void RenderTranslucentPolygonalGeometry(\n    vtkViewport *, vtkActor2D *)\n\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkMapper2D_HasTranslucentPolygonalGeometry, 1,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkMapper2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkMapper2D_Methods,
    "vtkMapper2D", modulename,
    NULL, NULL,
    PyvtkMapper2D_Doc(),
    PyVTKClass_vtkAbstractMapperNew(modulename));
  return cls;
}

const char **PyvtkMapper2D_Doc()
{
  static const char *docstring[] = {
    "vtkMapper2D - abstract class specifies interface for objects which\nrender 2D actors\n\n",
    "Superclass: vtkAbstractMapper\n\n",
    "vtkMapper2D is an abstract class which defines the interface for\nobjects which render two dimensional actors (vtkActor2D).\n\nSee Also:\n\nvtkActor2D\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMapper2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMapper2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMapper2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

