// python wrapper for vtkOpenGLVolumeTextureMapper2D
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
#include "vtkOpenGLVolumeTextureMapper2D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkOpenGLVolumeTextureMapper2D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkOpenGLVolumeTextureMapper2D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkOpenGLVolumeTextureMapper2DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkOpenGLVolumeTextureMapper2DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkVolumeTextureMapper2DNew
extern "C" { PyObject *PyVTKClass_vtkVolumeTextureMapper2DNew(const char *); }
#define DECLARED_PyVTKClass_vtkVolumeTextureMapper2DNew
#endif

static const char **PyvtkOpenGLVolumeTextureMapper2D_Doc();


static PyObject *
PyvtkOpenGLVolumeTextureMapper2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVolumeTextureMapper2D *op = static_cast<vtkOpenGLVolumeTextureMapper2D *>(vp);

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
      tempr = op->vtkOpenGLVolumeTextureMapper2D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLVolumeTextureMapper2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVolumeTextureMapper2D *op = static_cast<vtkOpenGLVolumeTextureMapper2D *>(vp);

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
      tempr = op->vtkOpenGLVolumeTextureMapper2D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLVolumeTextureMapper2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVolumeTextureMapper2D *op = static_cast<vtkOpenGLVolumeTextureMapper2D *>(vp);

  vtkOpenGLVolumeTextureMapper2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkOpenGLVolumeTextureMapper2D::NewInstance();
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
PyvtkOpenGLVolumeTextureMapper2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkOpenGLVolumeTextureMapper2D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkOpenGLVolumeTextureMapper2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLVolumeTextureMapper2D_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVolumeTextureMapper2D *op = static_cast<vtkOpenGLVolumeTextureMapper2D *>(vp);

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
      op->vtkOpenGLVolumeTextureMapper2D::Render(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLVolumeTextureMapper2D_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLVolumeTextureMapper2D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLVolumeTextureMapper2D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLVolumeTextureMapper2D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkOpenGLVolumeTextureMapper2D\nC++: vtkOpenGLVolumeTextureMapper2D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLVolumeTextureMapper2D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLVolumeTextureMapper2D\nC++: vtkOpenGLVolumeTextureMapper2D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Render", PyvtkOpenGLVolumeTextureMapper2D_Render, 1,
   (char*)"V.Render(vtkRenderer, vtkVolume)\nC++: virtual void Render(vtkRenderer *ren, vtkVolume *vol)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS Render the\nvolume\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLVolumeTextureMapper2D_StaticNew()
{
  return vtkOpenGLVolumeTextureMapper2D::New();
}

PyObject *PyVTKClass_vtkOpenGLVolumeTextureMapper2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLVolumeTextureMapper2D_StaticNew,
    PyvtkOpenGLVolumeTextureMapper2D_Methods,
    "vtkOpenGLVolumeTextureMapper2D", modulename,
    NULL, NULL,
    PyvtkOpenGLVolumeTextureMapper2D_Doc(),
    PyVTKClass_vtkVolumeTextureMapper2DNew(modulename));
  return cls;
}

const char **PyvtkOpenGLVolumeTextureMapper2D_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLVolumeTextureMapper2D - Abstract class for a volume mapper\n\n",
    "Superclass: vtkVolumeTextureMapper2D\n\n",
    "vtkOpenGLVolumeTextureMapper2D renders a volume using 2D texture\nmapping.\n\nSee Also:\n\nvtkVolumeMapper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLVolumeTextureMapper2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLVolumeTextureMapper2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLVolumeTextureMapper2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

