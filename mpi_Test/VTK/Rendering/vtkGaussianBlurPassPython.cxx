// python wrapper for vtkGaussianBlurPass
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
#include "vtkGaussianBlurPass.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGaussianBlurPass(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGaussianBlurPass(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGaussianBlurPassNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGaussianBlurPassNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageProcessingPassNew
extern "C" { PyObject *PyVTKClass_vtkImageProcessingPassNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageProcessingPassNew
#endif

static const char **PyvtkGaussianBlurPass_Doc();


static PyObject *
PyvtkGaussianBlurPass_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianBlurPass *op = static_cast<vtkGaussianBlurPass *>(vp);

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
      tempr = op->vtkGaussianBlurPass::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianBlurPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianBlurPass *op = static_cast<vtkGaussianBlurPass *>(vp);

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
      tempr = op->vtkGaussianBlurPass::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianBlurPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianBlurPass *op = static_cast<vtkGaussianBlurPass *>(vp);

  vtkGaussianBlurPass *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGaussianBlurPass::NewInstance();
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
PyvtkGaussianBlurPass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGaussianBlurPass *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGaussianBlurPass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianBlurPass_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianBlurPass *op = static_cast<vtkGaussianBlurPass *>(vp);

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
      op->vtkGaussianBlurPass::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGaussianBlurPass_Methods[] = {
  {(char*)"GetClassName", PyvtkGaussianBlurPass_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGaussianBlurPass_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGaussianBlurPass_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGaussianBlurPass\nC++: vtkGaussianBlurPass *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGaussianBlurPass_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGaussianBlurPass\nC++: vtkGaussianBlurPass *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkGaussianBlurPass_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *w)\n\nRelease graphics resources and ask components to release their\nown resources.\n\\pre w_exists: w!=0\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGaussianBlurPass_StaticNew()
{
  return vtkGaussianBlurPass::New();
}

PyObject *PyVTKClass_vtkGaussianBlurPassNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGaussianBlurPass_StaticNew,
    PyvtkGaussianBlurPass_Methods,
    "vtkGaussianBlurPass", modulename,
    NULL, NULL,
    PyvtkGaussianBlurPass_Doc(),
    PyVTKClass_vtkImageProcessingPassNew(modulename));
  return cls;
}

const char **PyvtkGaussianBlurPass_Doc()
{
  static const char *docstring[] = {
    "vtkGaussianBlurPass - Implement a post-processing Gaussian blur\n\n",
    "Superclass: vtkImageProcessingPass\n\n",
    "Blur the image renderered by its delegate. Blurring uses a Gaussian\nlow-pass filter with a 5x5 kernel.\n\nThis pass expects an initialized depth buffer and color buffer.\nInitialized buffers means they have been cleared with farest z-value\nand background color/gradient/transparent color. An opaque pass may\nhave been performed right after the initialization.\n\nThe delegate is used once.\n\nIts delegate i",
    "s usually set to a vtkCameraPass or to a\npost-processing pass.\n\nThis pass requires a OpenGL context that supports texture objects\n(TO), framebuffer objects (FBO) and GLSL. If not, it will emit an\nerror message and will render its delegate and return.\n\nImplementation:\n\nAs the filter is separable, it first blurs the image horizontally and\nthen vertically. This reduces the number of texture sampling ",
    "to 5 per\npass. In addition, as texture sampling can already blend texel values\nin linear mode, by adjusting the texture coordinate accordingly, only\n3 texture sampling are actually necessary. Reference: OpenGL Bloom\nToturial by Philip Rideout, section Exploit Hardware Filtering \nhttp://prideout.net/bloom/index.php#Sneaky\n\nSee Also:\n\nvtkRenderPass\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGaussianBlurPass(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGaussianBlurPassNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGaussianBlurPass", o) != 0)
    {
    Py_DECREF(o);
    }

}

