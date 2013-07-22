// python wrapper for vtkOpenGLRayCastImageDisplayHelper
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
#include "vtkOpenGLRayCastImageDisplayHelper.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkOpenGLRayCastImageDisplayHelper(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkOpenGLRayCastImageDisplayHelper(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkOpenGLRayCastImageDisplayHelperNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkOpenGLRayCastImageDisplayHelperNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkRayCastImageDisplayHelperNew
extern "C" { PyObject *PyVTKClass_vtkRayCastImageDisplayHelperNew(const char *); }
#define DECLARED_PyVTKClass_vtkRayCastImageDisplayHelperNew
#endif

static const char **PyvtkOpenGLRayCastImageDisplayHelper_Doc();


static PyObject *
PyvtkOpenGLRayCastImageDisplayHelper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRayCastImageDisplayHelper *op = static_cast<vtkOpenGLRayCastImageDisplayHelper *>(vp);

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
      tempr = op->vtkOpenGLRayCastImageDisplayHelper::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRayCastImageDisplayHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRayCastImageDisplayHelper *op = static_cast<vtkOpenGLRayCastImageDisplayHelper *>(vp);

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
      tempr = op->vtkOpenGLRayCastImageDisplayHelper::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRayCastImageDisplayHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRayCastImageDisplayHelper *op = static_cast<vtkOpenGLRayCastImageDisplayHelper *>(vp);

  vtkOpenGLRayCastImageDisplayHelper *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkOpenGLRayCastImageDisplayHelper::NewInstance();
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
PyvtkOpenGLRayCastImageDisplayHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkOpenGLRayCastImageDisplayHelper *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkOpenGLRayCastImageDisplayHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRayCastImageDisplayHelper_RenderTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRayCastImageDisplayHelper *op = static_cast<vtkOpenGLRayCastImageDisplayHelper *>(vp);

  vtkVolume *temp0 = NULL;
  vtkRenderer *temp1 = NULL;
  vtkFixedPointRayCastImage *temp2 = NULL;
  float temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkVolume") &&
      ap.GetVTKObject(temp1, "vtkRenderer") &&
      ap.GetVTKObject(temp2, "vtkFixedPointRayCastImage") &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->RenderTexture(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkOpenGLRayCastImageDisplayHelper::RenderTexture(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLRayCastImageDisplayHelper_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLRayCastImageDisplayHelper_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLRayCastImageDisplayHelper_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLRayCastImageDisplayHelper_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkOpenGLRayCastImageDisplayHelper\nC++: vtkOpenGLRayCastImageDisplayHelper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLRayCastImageDisplayHelper_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLRayCastImageDisplayHelper\nC++: vtkOpenGLRayCastImageDisplayHelper *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"RenderTexture", PyvtkOpenGLRayCastImageDisplayHelper_RenderTexture, 1,
   (char*)"V.RenderTexture(vtkVolume, vtkRenderer, vtkFixedPointRayCastImage,\n     float)\nC++: void RenderTexture(vtkVolume *vol, vtkRenderer *ren,\n    vtkFixedPointRayCastImage *image, float requestedDepth)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLRayCastImageDisplayHelper_StaticNew()
{
  return vtkOpenGLRayCastImageDisplayHelper::New();
}

PyObject *PyVTKClass_vtkOpenGLRayCastImageDisplayHelperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLRayCastImageDisplayHelper_StaticNew,
    PyvtkOpenGLRayCastImageDisplayHelper_Methods,
    "vtkOpenGLRayCastImageDisplayHelper", modulename,
    NULL, NULL,
    PyvtkOpenGLRayCastImageDisplayHelper_Doc(),
    PyVTKClass_vtkRayCastImageDisplayHelperNew(modulename));
  return cls;
}

const char **PyvtkOpenGLRayCastImageDisplayHelper_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLRayCastImageDisplayHelper - OpenGL subclass that draws the\nimage to the screen\n\n",
    "Superclass: vtkRayCastImageDisplayHelper\n\n",
    "This is the concrete implementation of a ray cast image display\nhelper - a helper class responsible for drawing the image to the\nscreen.\n\nSee Also:\n\nvtkRayCastImageDisplayHelper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLRayCastImageDisplayHelper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLRayCastImageDisplayHelperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLRayCastImageDisplayHelper", o) != 0)
    {
    Py_DECREF(o);
    }

}

