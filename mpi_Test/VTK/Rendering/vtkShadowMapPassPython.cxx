// python wrapper for vtkShadowMapPass
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
#include "vtkShadowMapPass.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkShadowMapPass(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkShadowMapPass(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkShadowMapPassNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkShadowMapPassNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkRenderPassNew
extern "C" { PyObject *PyVTKClass_vtkRenderPassNew(const char *); }
#define DECLARED_PyVTKClass_vtkRenderPassNew
#endif

static const char **PyvtkShadowMapPass_Doc();


static PyObject *
PyvtkShadowMapPass_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapPass *op = static_cast<vtkShadowMapPass *>(vp);

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
      tempr = op->vtkShadowMapPass::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShadowMapPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapPass *op = static_cast<vtkShadowMapPass *>(vp);

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
      tempr = op->vtkShadowMapPass::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShadowMapPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapPass *op = static_cast<vtkShadowMapPass *>(vp);

  vtkShadowMapPass *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkShadowMapPass::NewInstance();
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
PyvtkShadowMapPass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkShadowMapPass *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkShadowMapPass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShadowMapPass_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapPass *op = static_cast<vtkShadowMapPass *>(vp);

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
      op->vtkShadowMapPass::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkShadowMapPass_GetShadowMapBakerPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShadowMapBakerPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapPass *op = static_cast<vtkShadowMapPass *>(vp);

  vtkShadowMapBakerPass *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShadowMapBakerPass();
      }
    else
      {
      tempr = op->vtkShadowMapPass::GetShadowMapBakerPass();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShadowMapPass_SetShadowMapBakerPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShadowMapBakerPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapPass *op = static_cast<vtkShadowMapPass *>(vp);

  vtkShadowMapBakerPass *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkShadowMapBakerPass"))
    {
    if (ap.IsBound())
      {
      op->SetShadowMapBakerPass(temp0);
      }
    else
      {
      op->vtkShadowMapPass::SetShadowMapBakerPass(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkShadowMapPass_GetOpaquePass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpaquePass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapPass *op = static_cast<vtkShadowMapPass *>(vp);

  vtkRenderPass *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOpaquePass();
      }
    else
      {
      tempr = op->vtkShadowMapPass::GetOpaquePass();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShadowMapPass_SetOpaquePass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpaquePass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapPass *op = static_cast<vtkShadowMapPass *>(vp);

  vtkRenderPass *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderPass"))
    {
    if (ap.IsBound())
      {
      op->SetOpaquePass(temp0);
      }
    else
      {
      op->vtkShadowMapPass::SetOpaquePass(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkShadowMapPass_Methods[] = {
  {(char*)"GetClassName", PyvtkShadowMapPass_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkShadowMapPass_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkShadowMapPass_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkShadowMapPass\nC++: vtkShadowMapPass *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkShadowMapPass_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkShadowMapPass\nC++: vtkShadowMapPass *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkShadowMapPass_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *w)\n\nRelease graphics resources and ask components to release their\nown resources.\n\\pre w_exists: w!=0\n"},
  {(char*)"GetShadowMapBakerPass", PyvtkShadowMapPass_GetShadowMapBakerPass, 1,
   (char*)"V.GetShadowMapBakerPass() -> vtkShadowMapBakerPass\nC++: vtkShadowMapBakerPass *GetShadowMapBakerPass()\n\nPass that generates the shadow maps. the vtkShadowMapPass will\nuse the Resolution ivar of this pass. Initial value is a NULL\npointer.\n"},
  {(char*)"SetShadowMapBakerPass", PyvtkShadowMapPass_SetShadowMapBakerPass, 1,
   (char*)"V.SetShadowMapBakerPass(vtkShadowMapBakerPass)\nC++: virtual void SetShadowMapBakerPass(\n    vtkShadowMapBakerPass *shadowMapBakerPass)\n\nPass that generates the shadow maps. the vtkShadowMapPass will\nuse the Resolution ivar of this pass. Initial value is a NULL\npointer.\n"},
  {(char*)"GetOpaquePass", PyvtkShadowMapPass_GetOpaquePass, 1,
   (char*)"V.GetOpaquePass() -> vtkRenderPass\nC++: vtkRenderPass *GetOpaquePass()\n\nPass that render the opaque geometry, with no camera pass\n(otherwise it does not work with Ice-T). Initial value is a NULL\npointer. Typically a sequence pass with a light pass and opaque\npass. This should be the Opaque pass of the vtkShadowMapBakerPass\nwithout the vtkCameraPass.\n"},
  {(char*)"SetOpaquePass", PyvtkShadowMapPass_SetOpaquePass, 1,
   (char*)"V.SetOpaquePass(vtkRenderPass)\nC++: virtual void SetOpaquePass(vtkRenderPass *opaquePass)\n\nPass that render the opaque geometry, with no camera pass\n(otherwise it does not work with Ice-T). Initial value is a NULL\npointer. Typically a sequence pass with a light pass and opaque\npass. This should be the Opaque pass of the vtkShadowMapBakerPass\nwithout the vtkCameraPass.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkShadowMapPass_StaticNew()
{
  return vtkShadowMapPass::New();
}

PyObject *PyVTKClass_vtkShadowMapPassNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkShadowMapPass_StaticNew,
    PyvtkShadowMapPass_Methods,
    "vtkShadowMapPass", modulename,
    NULL, NULL,
    PyvtkShadowMapPass_Doc(),
    PyVTKClass_vtkRenderPassNew(modulename));
  return cls;
}

const char **PyvtkShadowMapPass_Doc()
{
  static const char *docstring[] = {
    "vtkShadowMapPass - Implement a shadow mapping render pass.\n\n",
    "Superclass: vtkRenderPass\n\n",
    "Render the opaque polygonal geometry of a scene with shadow maps (a\ntechnique to render hard shadows in hardware).\n\nThis pass expects an initialized depth buffer and color buffer.\nInitialized buffers means they have been cleared with farest z-value\nand background color/gradient/transparent color. An opaque pass may\nhave been performed right after the initialization.\n\nIts delegate is usually set to",
    " a vtkOpaquePass.\n\nImplementation:\n\nThe first pass of the algorithm is to generate a shadow map per light\n(depth map from the light point of view) by rendering the opaque\nobjects with the OCCLUDER property keys. The second pass is to render\nthe opaque objects with the RECEIVER keys.\n\nSee Also:\n\nvtkRenderPass, vtkOpaquePass\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkShadowMapPass(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkShadowMapPassNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkShadowMapPass", o) != 0)
    {
    Py_DECREF(o);
    }

}

