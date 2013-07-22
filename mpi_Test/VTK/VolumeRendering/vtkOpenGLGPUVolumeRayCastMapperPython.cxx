// python wrapper for vtkOpenGLGPUVolumeRayCastMapper
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
#include "vtkOpenGLGPUVolumeRayCastMapper.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkOpenGLGPUVolumeRayCastMapper(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkOpenGLGPUVolumeRayCastMapper(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkOpenGLGPUVolumeRayCastMapperNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkOpenGLGPUVolumeRayCastMapperNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkGPUVolumeRayCastMapperNew
extern "C" { PyObject *PyVTKClass_vtkGPUVolumeRayCastMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkGPUVolumeRayCastMapperNew
#endif

static const char **PyvtkOpenGLGPUVolumeRayCastMapper_Doc();


static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGPUVolumeRayCastMapper *op = static_cast<vtkOpenGLGPUVolumeRayCastMapper *>(vp);

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
      tempr = op->vtkOpenGLGPUVolumeRayCastMapper::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGPUVolumeRayCastMapper *op = static_cast<vtkOpenGLGPUVolumeRayCastMapper *>(vp);

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
      tempr = op->vtkOpenGLGPUVolumeRayCastMapper::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGPUVolumeRayCastMapper *op = static_cast<vtkOpenGLGPUVolumeRayCastMapper *>(vp);

  vtkOpenGLGPUVolumeRayCastMapper *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkOpenGLGPUVolumeRayCastMapper::NewInstance();
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
PyvtkOpenGLGPUVolumeRayCastMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkOpenGLGPUVolumeRayCastMapper *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkOpenGLGPUVolumeRayCastMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_IsRenderSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsRenderSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGPUVolumeRayCastMapper *op = static_cast<vtkOpenGLGPUVolumeRayCastMapper *>(vp);

  vtkRenderWindow *temp0 = NULL;
  vtkVolumeProperty *temp1 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow") &&
      ap.GetVTKObject(temp1, "vtkVolumeProperty"))
    {
    if (ap.IsBound())
      {
      tempr = op->IsRenderSupported(temp0, temp1);
      }
    else
      {
      tempr = op->vtkOpenGLGPUVolumeRayCastMapper::IsRenderSupported(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGPUVolumeRayCastMapper *op = static_cast<vtkOpenGLGPUVolumeRayCastMapper *>(vp);

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
      op->vtkOpenGLGPUVolumeRayCastMapper::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_OpenGLErrorMessage(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "OpenGLErrorMessage");

  unsigned int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkOpenGLGPUVolumeRayCastMapper::OpenGLErrorMessage(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_PrintError(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PrintError");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkOpenGLGPUVolumeRayCastMapper::PrintError(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLGPUVolumeRayCastMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLGPUVolumeRayCastMapper_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLGPUVolumeRayCastMapper_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLGPUVolumeRayCastMapper_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkOpenGLGPUVolumeRayCastMapper\nC++: vtkOpenGLGPUVolumeRayCastMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLGPUVolumeRayCastMapper_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLGPUVolumeRayCastMapper\nC++: vtkOpenGLGPUVolumeRayCastMapper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"IsRenderSupported", PyvtkOpenGLGPUVolumeRayCastMapper_IsRenderSupported, 1,
   (char*)"V.IsRenderSupported(vtkRenderWindow, vtkVolumeProperty) -> int\nC++: virtual int IsRenderSupported(vtkRenderWindow *window,\n    vtkVolumeProperty *property)\n\nBased on hardware and properties, we may or may not be able to\nrender using 3D texture mapping. This indicates if 3D texture\nmapping is supported by the hardware, and if the other extensions\nnecessary to support the specific properties are available.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkOpenGLGPUVolumeRayCastMapper_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *window)\n\nDelete OpenGL objects.\n\\post done: this->OpenGLObjectsCreated==0\n"},
  {(char*)"OpenGLErrorMessage", PyvtkOpenGLGPUVolumeRayCastMapper_OpenGLErrorMessage, 1,
   (char*)"V.OpenGLErrorMessage(int) -> string\nC++: static const char *OpenGLErrorMessage(unsigned int errorCode)\n\nReturn a string matching the OpenGL errorCode.\n\\post result_exists: result!=0\n"},
  {(char*)"PrintError", PyvtkOpenGLGPUVolumeRayCastMapper_PrintError, 1,
   (char*)"V.PrintError(string)\nC++: static void PrintError(const char *headerMessage)\n\nDisplay headerMessage on the standard output and the last OpenGL\nerror message if any.\n\\pre headerMessage_exists: headerMessage!=0\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLGPUVolumeRayCastMapper_StaticNew()
{
  return vtkOpenGLGPUVolumeRayCastMapper::New();
}

PyObject *PyVTKClass_vtkOpenGLGPUVolumeRayCastMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLGPUVolumeRayCastMapper_StaticNew,
    PyvtkOpenGLGPUVolumeRayCastMapper_Methods,
    "vtkOpenGLGPUVolumeRayCastMapper", modulename,
    NULL, NULL,
    PyvtkOpenGLGPUVolumeRayCastMapper_Doc(),
    PyVTKClass_vtkGPUVolumeRayCastMapperNew(modulename));
  return cls;
}

const char **PyvtkOpenGLGPUVolumeRayCastMapper_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLGPUVolumeRayCastMapper - OpenGL subclass that draws the\n\n",
    "Superclass: vtkGPUVolumeRayCastMapper\n\n",
    "This is the concrete implementation of a ray cast image display\nhelper - a helper class responsible for drawing the image to the\nscreen.\n\nSee Also:\n\nvtkGPUVolumeRayCastMapper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLGPUVolumeRayCastMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLGPUVolumeRayCastMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLGPUVolumeRayCastMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

