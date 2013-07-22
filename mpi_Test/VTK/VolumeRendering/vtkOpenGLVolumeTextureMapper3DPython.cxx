// python wrapper for vtkOpenGLVolumeTextureMapper3D
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
#include "vtkOpenGLVolumeTextureMapper3D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkOpenGLVolumeTextureMapper3D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkOpenGLVolumeTextureMapper3D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkOpenGLVolumeTextureMapper3DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkOpenGLVolumeTextureMapper3DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkVolumeTextureMapper3DNew
extern "C" { PyObject *PyVTKClass_vtkVolumeTextureMapper3DNew(const char *); }
#define DECLARED_PyVTKClass_vtkVolumeTextureMapper3DNew
#endif

static const char **PyvtkOpenGLVolumeTextureMapper3D_Doc();


static PyObject *
PyvtkOpenGLVolumeTextureMapper3D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVolumeTextureMapper3D *op = static_cast<vtkOpenGLVolumeTextureMapper3D *>(vp);

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
      tempr = op->vtkOpenGLVolumeTextureMapper3D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLVolumeTextureMapper3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVolumeTextureMapper3D *op = static_cast<vtkOpenGLVolumeTextureMapper3D *>(vp);

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
      tempr = op->vtkOpenGLVolumeTextureMapper3D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLVolumeTextureMapper3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVolumeTextureMapper3D *op = static_cast<vtkOpenGLVolumeTextureMapper3D *>(vp);

  vtkOpenGLVolumeTextureMapper3D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkOpenGLVolumeTextureMapper3D::NewInstance();
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
PyvtkOpenGLVolumeTextureMapper3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkOpenGLVolumeTextureMapper3D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkOpenGLVolumeTextureMapper3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLVolumeTextureMapper3D_IsRenderSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsRenderSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVolumeTextureMapper3D *op = static_cast<vtkOpenGLVolumeTextureMapper3D *>(vp);

  vtkVolumeProperty *temp0 = NULL;
  vtkRenderer *temp1 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkVolumeProperty") &&
      ap.GetVTKObject(temp1, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      tempr = op->IsRenderSupported(temp0, temp1);
      }
    else
      {
      tempr = op->vtkOpenGLVolumeTextureMapper3D::IsRenderSupported(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLVolumeTextureMapper3D_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVolumeTextureMapper3D *op = static_cast<vtkOpenGLVolumeTextureMapper3D *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkVolume *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume"))
    {
    if (ap.IsBound())
      {
      op->Render(temp0, temp1);
      }
    else
      {
      op->vtkOpenGLVolumeTextureMapper3D::Render(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLVolumeTextureMapper3D_GetInitialized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInitialized");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVolumeTextureMapper3D *op = static_cast<vtkOpenGLVolumeTextureMapper3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInitialized();
      }
    else
      {
      tempr = op->vtkOpenGLVolumeTextureMapper3D::GetInitialized();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLVolumeTextureMapper3D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVolumeTextureMapper3D *op = static_cast<vtkOpenGLVolumeTextureMapper3D *>(vp);

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
      op->vtkOpenGLVolumeTextureMapper3D::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLVolumeTextureMapper3D_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLVolumeTextureMapper3D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLVolumeTextureMapper3D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLVolumeTextureMapper3D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkOpenGLVolumeTextureMapper3D\nC++: vtkOpenGLVolumeTextureMapper3D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLVolumeTextureMapper3D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLVolumeTextureMapper3D\nC++: vtkOpenGLVolumeTextureMapper3D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"IsRenderSupported", PyvtkOpenGLVolumeTextureMapper3D_IsRenderSupported, 1,
   (char*)"V.IsRenderSupported(vtkVolumeProperty, vtkRenderer) -> int\nC++: int IsRenderSupported(vtkVolumeProperty *, vtkRenderer *ren)\n\nIs hardware rendering supported? No if the input data is more\nthan one independent component, or if the hardware does not\nsupport the required extensions\n"},
  {(char*)"Render", PyvtkOpenGLVolumeTextureMapper3D_Render, 1,
   (char*)"V.Render(vtkRenderer, vtkVolume)\nC++: virtual void Render(vtkRenderer *ren, vtkVolume *vol)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS Render the\nvolume\n"},
  {(char*)"GetInitialized", PyvtkOpenGLVolumeTextureMapper3D_GetInitialized, 1,
   (char*)"V.GetInitialized() -> int\nC++: int GetInitialized()\n\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkOpenGLVolumeTextureMapper3D_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\ntexture. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLVolumeTextureMapper3D_StaticNew()
{
  return vtkOpenGLVolumeTextureMapper3D::New();
}

PyObject *PyVTKClass_vtkOpenGLVolumeTextureMapper3DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLVolumeTextureMapper3D_StaticNew,
    PyvtkOpenGLVolumeTextureMapper3D_Methods,
    "vtkOpenGLVolumeTextureMapper3D", modulename,
    NULL, NULL,
    PyvtkOpenGLVolumeTextureMapper3D_Doc(),
    PyVTKClass_vtkVolumeTextureMapper3DNew(modulename));
  return cls;
}

const char **PyvtkOpenGLVolumeTextureMapper3D_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLVolumeTextureMapper3D - concrete implementation of 3D volume\ntexture mapping\n\n",
    "Superclass: vtkVolumeTextureMapper3D\n\n",
    "vtkOpenGLVolumeTextureMapper3D renders a volume using 3D texture\nmapping. See vtkVolumeTextureMapper3D for full description.\n\nSee Also:\n\nvtkVolumeTextureMapper3D vtkVolumeMapper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLVolumeTextureMapper3D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLVolumeTextureMapper3DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLVolumeTextureMapper3D", o) != 0)
    {
    Py_DECREF(o);
    }

}

