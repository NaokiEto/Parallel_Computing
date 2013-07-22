// python wrapper for vtkImageProcessingPass
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
#include "vtkImageProcessingPass.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageProcessingPass(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageProcessingPass(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageProcessingPassNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageProcessingPassNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkRenderPassNew
extern "C" { PyObject *PyVTKClass_vtkRenderPassNew(const char *); }
#define DECLARED_PyVTKClass_vtkRenderPassNew
#endif

static const char **PyvtkImageProcessingPass_Doc();


static PyObject *
PyvtkImageProcessingPass_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProcessingPass *op = static_cast<vtkImageProcessingPass *>(vp);

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
      tempr = op->vtkImageProcessingPass::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageProcessingPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProcessingPass *op = static_cast<vtkImageProcessingPass *>(vp);

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
      tempr = op->vtkImageProcessingPass::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageProcessingPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProcessingPass *op = static_cast<vtkImageProcessingPass *>(vp);

  vtkImageProcessingPass *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageProcessingPass::NewInstance();
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
PyvtkImageProcessingPass_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProcessingPass *op = static_cast<vtkImageProcessingPass *>(vp);

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
      op->vtkImageProcessingPass::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageProcessingPass_GetDelegatePass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDelegatePass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProcessingPass *op = static_cast<vtkImageProcessingPass *>(vp);

  vtkRenderPass *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDelegatePass();
      }
    else
      {
      tempr = op->vtkImageProcessingPass::GetDelegatePass();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageProcessingPass_SetDelegatePass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDelegatePass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProcessingPass *op = static_cast<vtkImageProcessingPass *>(vp);

  vtkRenderPass *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderPass"))
    {
    if (ap.IsBound())
      {
      op->SetDelegatePass(temp0);
      }
    else
      {
      op->vtkImageProcessingPass::SetDelegatePass(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageProcessingPass_Methods[] = {
  {(char*)"GetClassName", PyvtkImageProcessingPass_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageProcessingPass_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageProcessingPass_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageProcessingPass\nC++: vtkImageProcessingPass *NewInstance()\n\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkImageProcessingPass_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *w)\n\nRelease graphics resources and ask components to release their\nown resources.\n\\pre w_exists: w!=0\n"},
  {(char*)"GetDelegatePass", PyvtkImageProcessingPass_GetDelegatePass, 1,
   (char*)"V.GetDelegatePass() -> vtkRenderPass\nC++: vtkRenderPass *GetDelegatePass()\n\nDelegate for rendering the image to be processed. If it is NULL,\nnothing will be rendered and a warning will be emitted. It is\nusually set to a vtkCameraPass or to a post-processing pass.\nInitial value is a NULL pointer.\n"},
  {(char*)"SetDelegatePass", PyvtkImageProcessingPass_SetDelegatePass, 1,
   (char*)"V.SetDelegatePass(vtkRenderPass)\nC++: virtual void SetDelegatePass(vtkRenderPass *delegatePass)\n\nDelegate for rendering the image to be processed. If it is NULL,\nnothing will be rendered and a warning will be emitted. It is\nusually set to a vtkCameraPass or to a post-processing pass.\nInitial value is a NULL pointer.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkImageProcessingPassNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkImageProcessingPass_Methods,
    "vtkImageProcessingPass", modulename,
    NULL, NULL,
    PyvtkImageProcessingPass_Doc(),
    PyVTKClass_vtkRenderPassNew(modulename));
  return cls;
}

const char **PyvtkImageProcessingPass_Doc()
{
  static const char *docstring[] = {
    "vtkImageProcessingPass - Convenient class for post-processing passes.\n\n",
    "Superclass: vtkRenderPass\n\n",
    "Abstract class with some convenient methods frequently used in\nsubclasses.\n\nImplementation:\n\nSee Also:\n\nvtkRenderPass vtkGaussianBlurPass vtkSobelGradientMagnitudePass\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageProcessingPass(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageProcessingPassNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageProcessingPass", o) != 0)
    {
    Py_DECREF(o);
    }

}

