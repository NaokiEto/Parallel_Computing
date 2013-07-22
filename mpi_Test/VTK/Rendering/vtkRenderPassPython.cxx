// python wrapper for vtkRenderPass
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
#include "vtkRenderPass.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkRenderPass(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkRenderPass(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkRenderPassNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkRenderPassNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkRenderPass_Doc();


static PyObject *
PyvtkRenderPass_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderPass *op = static_cast<vtkRenderPass *>(vp);

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
      tempr = op->vtkRenderPass::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderPass *op = static_cast<vtkRenderPass *>(vp);

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
      tempr = op->vtkRenderPass::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderPass *op = static_cast<vtkRenderPass *>(vp);

  vtkRenderPass *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkRenderPass::NewInstance();
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
PyvtkRenderPass_GetNumberOfRenderedProps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRenderedProps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderPass *op = static_cast<vtkRenderPass *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfRenderedProps();
      }
    else
      {
      tempr = op->vtkRenderPass::GetNumberOfRenderedProps();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderPass_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderPass *op = static_cast<vtkRenderPass *>(vp);

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
      op->vtkRenderPass::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkRenderPass_Methods[] = {
  {(char*)"GetClassName", PyvtkRenderPass_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRenderPass_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRenderPass_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkRenderPass\nC++: vtkRenderPass *NewInstance()\n\n"},
  {(char*)"GetNumberOfRenderedProps", PyvtkRenderPass_GetNumberOfRenderedProps, 1,
   (char*)"V.GetNumberOfRenderedProps() -> int\nC++: int GetNumberOfRenderedProps()\n\nNumber of props rendered at the last Render call.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkRenderPass_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *w)\n\nRelease graphics resources and ask components to release their\nown resources. Default implementation is empty.\n\\pre w_exists: w!=0\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkRenderPassNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkRenderPass_Methods,
    "vtkRenderPass", modulename,
    NULL, NULL,
    PyvtkRenderPass_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkRenderPass_Doc()
{
  static const char *docstring[] = {
    "vtkRenderPass - Perform part of the rendering of a vtkRenderer.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkRenderPass is a deferred class with a simple deferred method\nRender. This method performs a rendering pass of the scene described\nin vtkRenderState. Subclasses define what really happens during\nrendering.\n\nDirections to write a subclass of vtkRenderPass: It is up to the\nsubclass to decide if it needs to delegate part of its job to some\nother vtkRenderPass objects (\"delegates\").\n- The subclass h",
    "as to define ivar to set/get its delegates.\n- The documentation of the subclass has to describe:\n- what each delegate is supposed to perform\n- if a delegate is supposed to be used once or multiple times\n- what it expects to have in the framebuffer before starting (status\n  of colorbuffers, depth buffer, stencil buffer)\n- what it will change in the framebuffer.\n- A pass cannot modify the vtkRenderS",
    "tate where it will perform but\n  it can build a new vtkRenderState (it can change the FrameBuffer,\n  change the prop array, changed the required prop properties keys\n  (usually adding some to a copy of the existing list) but it has to\n  keep the same vtkRenderer object), make it current and pass it to\n  its delegate.\n- at the end of the execution of Render, the pass has to ensure the\n  current vtk",
    "RenderState is the one it has in argument.\n\nSee Also:\n\nvtkRenderState vtkRenderer\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRenderPass(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRenderPassNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRenderPass", o) != 0)
    {
    Py_DECREF(o);
    }

}

