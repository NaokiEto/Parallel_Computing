// python wrapper for vtkOpenGLTexture
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
#include "vtkOpenGLTexture.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkOpenGLTexture(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkOpenGLTexture(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkOpenGLTextureNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkOpenGLTextureNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkTextureNew
extern "C" { PyObject *PyVTKClass_vtkTextureNew(const char *); }
#define DECLARED_PyVTKClass_vtkTextureNew
#endif

static const char **PyvtkOpenGLTexture_Doc();


static PyObject *
PyvtkOpenGLTexture_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLTexture *op = static_cast<vtkOpenGLTexture *>(vp);

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
      tempr = op->vtkOpenGLTexture::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLTexture_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLTexture *op = static_cast<vtkOpenGLTexture *>(vp);

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
      tempr = op->vtkOpenGLTexture::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLTexture_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLTexture *op = static_cast<vtkOpenGLTexture *>(vp);

  vtkOpenGLTexture *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkOpenGLTexture::NewInstance();
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
PyvtkOpenGLTexture_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkOpenGLTexture *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkOpenGLTexture::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLTexture_Load(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Load");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLTexture *op = static_cast<vtkOpenGLTexture *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->Load(temp0);
      }
    else
      {
      op->vtkOpenGLTexture::Load(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLTexture_PostRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PostRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLTexture *op = static_cast<vtkOpenGLTexture *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->PostRender(temp0);
      }
    else
      {
      op->vtkOpenGLTexture::PostRender(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLTexture_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLTexture *op = static_cast<vtkOpenGLTexture *>(vp);

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
      op->vtkOpenGLTexture::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLTexture_GetIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLTexture *op = static_cast<vtkOpenGLTexture *>(vp);

  long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIndex();
      }
    else
      {
      tempr = op->vtkOpenGLTexture::GetIndex();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLTexture_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLTexture_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLTexture_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLTexture_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkOpenGLTexture\nC++: vtkOpenGLTexture *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLTexture_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLTexture\nC++: vtkOpenGLTexture *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Load", PyvtkOpenGLTexture_Load, 1,
   (char*)"V.Load(vtkRenderer)\nC++: void Load(vtkRenderer *ren)\n\nImplement base class method.\n"},
  {(char*)"PostRender", PyvtkOpenGLTexture_PostRender, 1,
   (char*)"V.PostRender(vtkRenderer)\nC++: virtual void PostRender(vtkRenderer *ren)\n\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkOpenGLTexture_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\ntexture. The parameter window could be used to determine which\ngraphic resources to release. Using the same texture object in\nmultiple render windows is NOT currently supported.\n"},
  {(char*)"GetIndex", PyvtkOpenGLTexture_GetIndex, 1,
   (char*)"V.GetIndex() -> int\nC++: long GetIndex()\n\nGet the openGL texture name to which this texture is bound. This\nis available only if GL version >= 1.1\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLTexture_StaticNew()
{
  return vtkOpenGLTexture::New();
}

PyObject *PyVTKClass_vtkOpenGLTextureNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLTexture_StaticNew,
    PyvtkOpenGLTexture_Methods,
    "vtkOpenGLTexture", modulename,
    NULL, NULL,
    PyvtkOpenGLTexture_Doc(),
    PyVTKClass_vtkTextureNew(modulename));
  return cls;
}

const char **PyvtkOpenGLTexture_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLTexture - OpenGL texture map\n\n",
    "Superclass: vtkTexture\n\n",
    "vtkOpenGLTexture is a concrete implementation of the abstract class\nvtkTexture. vtkOpenGLTexture interfaces to the OpenGL rendering\nlibrary.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLTexture(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLTextureNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLTexture", o) != 0)
    {
    Py_DECREF(o);
    }

}

