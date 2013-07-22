// python wrapper for vtkOpenGLProjectedAAHexahedraMapper
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
#include "vtkOpenGLProjectedAAHexahedraMapper.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkOpenGLProjectedAAHexahedraMapper(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkOpenGLProjectedAAHexahedraMapper(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkOpenGLProjectedAAHexahedraMapperNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkOpenGLProjectedAAHexahedraMapperNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkProjectedAAHexahedraMapperNew
extern "C" { PyObject *PyVTKClass_vtkProjectedAAHexahedraMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkProjectedAAHexahedraMapperNew
#endif

static const char **PyvtkOpenGLProjectedAAHexahedraMapper_Doc();


static PyObject *
PyvtkOpenGLProjectedAAHexahedraMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProjectedAAHexahedraMapper *op = static_cast<vtkOpenGLProjectedAAHexahedraMapper *>(vp);

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
      tempr = op->vtkOpenGLProjectedAAHexahedraMapper::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLProjectedAAHexahedraMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProjectedAAHexahedraMapper *op = static_cast<vtkOpenGLProjectedAAHexahedraMapper *>(vp);

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
      tempr = op->vtkOpenGLProjectedAAHexahedraMapper::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLProjectedAAHexahedraMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProjectedAAHexahedraMapper *op = static_cast<vtkOpenGLProjectedAAHexahedraMapper *>(vp);

  vtkOpenGLProjectedAAHexahedraMapper *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkOpenGLProjectedAAHexahedraMapper::NewInstance();
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
PyvtkOpenGLProjectedAAHexahedraMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkOpenGLProjectedAAHexahedraMapper *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkOpenGLProjectedAAHexahedraMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLProjectedAAHexahedraMapper_IsRenderSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsRenderSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProjectedAAHexahedraMapper *op = static_cast<vtkOpenGLProjectedAAHexahedraMapper *>(vp);

  vtkRenderWindow *temp0 = NULL;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
    {
    if (ap.IsBound())
      {
      tempr = op->IsRenderSupported(temp0);
      }
    else
      {
      tempr = op->vtkOpenGLProjectedAAHexahedraMapper::IsRenderSupported(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLProjectedAAHexahedraMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProjectedAAHexahedraMapper *op = static_cast<vtkOpenGLProjectedAAHexahedraMapper *>(vp);

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
      op->vtkOpenGLProjectedAAHexahedraMapper::Render(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLProjectedAAHexahedraMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProjectedAAHexahedraMapper *op = static_cast<vtkOpenGLProjectedAAHexahedraMapper *>(vp);

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
      op->vtkOpenGLProjectedAAHexahedraMapper::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLProjectedAAHexahedraMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLProjectedAAHexahedraMapper_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLProjectedAAHexahedraMapper_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLProjectedAAHexahedraMapper_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkOpenGLProjectedAAHexahedraMapper\nC++: vtkOpenGLProjectedAAHexahedraMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLProjectedAAHexahedraMapper_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLProjectedAAHexahedraMapper\nC++: vtkOpenGLProjectedAAHexahedraMapper *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"IsRenderSupported", PyvtkOpenGLProjectedAAHexahedraMapper_IsRenderSupported, 1,
   (char*)"V.IsRenderSupported(vtkRenderWindow) -> bool\nC++: bool IsRenderSupported(vtkRenderWindow *w)\n\nCheck if the required OpenGL extensions are supported by the\nOpenGL context attached to the render window `w'.\n"},
  {(char*)"Render", PyvtkOpenGLProjectedAAHexahedraMapper_Render, 1,
   (char*)"V.Render(vtkRenderer, vtkVolume)\nC++: void Render(vtkRenderer *renderer, vtkVolume *volume)\n\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkOpenGLProjectedAAHexahedraMapper_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *window)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLProjectedAAHexahedraMapper_StaticNew()
{
  return vtkOpenGLProjectedAAHexahedraMapper::New();
}

PyObject *PyVTKClass_vtkOpenGLProjectedAAHexahedraMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLProjectedAAHexahedraMapper_StaticNew,
    PyvtkOpenGLProjectedAAHexahedraMapper_Methods,
    "vtkOpenGLProjectedAAHexahedraMapper", modulename,
    NULL, NULL,
    PyvtkOpenGLProjectedAAHexahedraMapper_Doc(),
    PyVTKClass_vtkProjectedAAHexahedraMapperNew(modulename));
  return cls;
}

const char **PyvtkOpenGLProjectedAAHexahedraMapper_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLProjectedAAHexahedraMapper - OpenGL implementation of a\nvolume mapper for axis-aligned hexahedra\n\n",
    "Superclass: vtkProjectedAAHexahedraMapper\n\n",
    "High quality volume renderer for axis-aligned hexahedra\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLProjectedAAHexahedraMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLProjectedAAHexahedraMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLProjectedAAHexahedraMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

