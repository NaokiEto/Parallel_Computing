// python wrapper for vtkOpenGLCamera
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
#include "vtkOpenGLCamera.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkOpenGLCamera(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkOpenGLCamera(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkOpenGLCameraNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkOpenGLCameraNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkCameraNew
extern "C" { PyObject *PyVTKClass_vtkCameraNew(const char *); }
#define DECLARED_PyVTKClass_vtkCameraNew
#endif

static const char **PyvtkOpenGLCamera_Doc();


static PyObject *
PyvtkOpenGLCamera_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLCamera *op = static_cast<vtkOpenGLCamera *>(vp);

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
      tempr = op->vtkOpenGLCamera::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLCamera_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLCamera *op = static_cast<vtkOpenGLCamera *>(vp);

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
      tempr = op->vtkOpenGLCamera::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLCamera_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLCamera *op = static_cast<vtkOpenGLCamera *>(vp);

  vtkOpenGLCamera *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkOpenGLCamera::NewInstance();
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
PyvtkOpenGLCamera_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkOpenGLCamera *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkOpenGLCamera::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLCamera_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLCamera *op = static_cast<vtkOpenGLCamera *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->Render(temp0);
      }
    else
      {
      op->vtkOpenGLCamera::Render(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLCamera_UpdateViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLCamera *op = static_cast<vtkOpenGLCamera *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->UpdateViewport(temp0);
      }
    else
      {
      op->vtkOpenGLCamera::UpdateViewport(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLCamera_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLCamera_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLCamera_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLCamera_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkOpenGLCamera\nC++: vtkOpenGLCamera *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLCamera_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLCamera\nC++: vtkOpenGLCamera *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Render", PyvtkOpenGLCamera_Render, 1,
   (char*)"V.Render(vtkRenderer)\nC++: void Render(vtkRenderer *ren)\n\nImplement base class method.\n"},
  {(char*)"UpdateViewport", PyvtkOpenGLCamera_UpdateViewport, 1,
   (char*)"V.UpdateViewport(vtkRenderer)\nC++: void UpdateViewport(vtkRenderer *ren)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLCamera_StaticNew()
{
  return vtkOpenGLCamera::New();
}

PyObject *PyVTKClass_vtkOpenGLCameraNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLCamera_StaticNew,
    PyvtkOpenGLCamera_Methods,
    "vtkOpenGLCamera", modulename,
    NULL, NULL,
    PyvtkOpenGLCamera_Doc(),
    PyVTKClass_vtkCameraNew(modulename));
  return cls;
}

const char **PyvtkOpenGLCamera_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLCamera - OpenGL camera\n\n",
    "Superclass: vtkCamera\n\n",
    "vtkOpenGLCamera is a concrete implementation of the abstract class\nvtkCamera.  vtkOpenGLCamera interfaces to the OpenGL rendering\nlibrary.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLCamera(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLCameraNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLCamera", o) != 0)
    {
    Py_DECREF(o);
    }

}

