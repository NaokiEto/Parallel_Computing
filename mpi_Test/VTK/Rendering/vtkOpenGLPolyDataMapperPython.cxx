// python wrapper for vtkOpenGLPolyDataMapper
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
#include "vtkOpenGLPolyDataMapper.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkOpenGLPolyDataMapper(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkOpenGLPolyDataMapper(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkOpenGLPolyDataMapperNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkOpenGLPolyDataMapperNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataMapperNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataMapperNew
#endif

static const char **PyvtkOpenGLPolyDataMapper_Doc();


static PyObject *
PyvtkOpenGLPolyDataMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

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
      tempr = op->vtkOpenGLPolyDataMapper::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

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
      tempr = op->vtkOpenGLPolyDataMapper::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  vtkOpenGLPolyDataMapper *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkOpenGLPolyDataMapper::NewInstance();
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
PyvtkOpenGLPolyDataMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkOpenGLPolyDataMapper *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkOpenGLPolyDataMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_RenderPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkActor *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
    {
    if (ap.IsBound())
      {
      op->RenderPiece(temp0, temp1);
      }
    else
      {
      op->vtkOpenGLPolyDataMapper::RenderPiece(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

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
      op->vtkOpenGLPolyDataMapper::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_Draw(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Draw");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkActor *temp1 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
    {
    if (ap.IsBound())
      {
      tempr = op->Draw(temp0, temp1);
      }
    else
      {
      tempr = op->vtkOpenGLPolyDataMapper::Draw(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLPolyDataMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLPolyDataMapper_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLPolyDataMapper_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLPolyDataMapper_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkOpenGLPolyDataMapper\nC++: vtkOpenGLPolyDataMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLPolyDataMapper_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLPolyDataMapper\nC++: vtkOpenGLPolyDataMapper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"RenderPiece", PyvtkOpenGLPolyDataMapper_RenderPiece, 1,
   (char*)"V.RenderPiece(vtkRenderer, vtkActor)\nC++: virtual void RenderPiece(vtkRenderer *ren, vtkActor *a)\n\nImplement superclass render method.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkOpenGLPolyDataMapper_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nmapper. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {(char*)"Draw", PyvtkOpenGLPolyDataMapper_Draw, 1,
   (char*)"V.Draw(vtkRenderer, vtkActor) -> int\nC++: virtual int Draw(vtkRenderer *ren, vtkActor *a)\n\nDraw method for OpenGL.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLPolyDataMapper_StaticNew()
{
  return vtkOpenGLPolyDataMapper::New();
}

PyObject *PyVTKClass_vtkOpenGLPolyDataMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLPolyDataMapper_StaticNew,
    PyvtkOpenGLPolyDataMapper_Methods,
    "vtkOpenGLPolyDataMapper", modulename,
    NULL, NULL,
    PyvtkOpenGLPolyDataMapper_Doc(),
    PyVTKClass_vtkPolyDataMapperNew(modulename));
  return cls;
}

const char **PyvtkOpenGLPolyDataMapper_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLPolyDataMapper - a PolyDataMapper for the OpenGL library\n\n",
    "Superclass: vtkPolyDataMapper\n\n",
    "vtkOpenGLPolyDataMapper is a subclass of vtkPolyDataMapper.\nvtkOpenGLPolyDataMapper is a geometric PolyDataMapper for the OpenGL\nrendering library.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLPolyDataMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLPolyDataMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLPolyDataMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

