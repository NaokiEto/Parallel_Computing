// python wrapper for vtkClientServerCompositePass
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
#include "vtkClientServerCompositePass.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkClientServerCompositePass(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkClientServerCompositePass(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkClientServerCompositePassNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkClientServerCompositePassNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkRenderPassNew
extern "C" { PyObject *PyVTKClass_vtkRenderPassNew(const char *); }
#define DECLARED_PyVTKClass_vtkRenderPassNew
#endif

static const char **PyvtkClientServerCompositePass_Doc();


static PyObject *
PyvtkClientServerCompositePass_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerCompositePass *op = static_cast<vtkClientServerCompositePass *>(vp);

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
      tempr = op->vtkClientServerCompositePass::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClientServerCompositePass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerCompositePass *op = static_cast<vtkClientServerCompositePass *>(vp);

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
      tempr = op->vtkClientServerCompositePass::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClientServerCompositePass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerCompositePass *op = static_cast<vtkClientServerCompositePass *>(vp);

  vtkClientServerCompositePass *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkClientServerCompositePass::NewInstance();
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
PyvtkClientServerCompositePass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkClientServerCompositePass *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkClientServerCompositePass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClientServerCompositePass_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerCompositePass *op = static_cast<vtkClientServerCompositePass *>(vp);

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
      op->vtkClientServerCompositePass::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClientServerCompositePass_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerCompositePass *op = static_cast<vtkClientServerCompositePass *>(vp);

  vtkMultiProcessController *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetController();
      }
    else
      {
      tempr = op->vtkClientServerCompositePass::GetController();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClientServerCompositePass_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerCompositePass *op = static_cast<vtkClientServerCompositePass *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->SetController(temp0);
      }
    else
      {
      op->vtkClientServerCompositePass::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClientServerCompositePass_SetRenderPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerCompositePass *op = static_cast<vtkClientServerCompositePass *>(vp);

  vtkRenderPass *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderPass"))
    {
    if (ap.IsBound())
      {
      op->SetRenderPass(temp0);
      }
    else
      {
      op->vtkClientServerCompositePass::SetRenderPass(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClientServerCompositePass_GetRenderPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerCompositePass *op = static_cast<vtkClientServerCompositePass *>(vp);

  vtkRenderPass *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRenderPass();
      }
    else
      {
      tempr = op->vtkClientServerCompositePass::GetRenderPass();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClientServerCompositePass_SetPostProcessingRenderPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPostProcessingRenderPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerCompositePass *op = static_cast<vtkClientServerCompositePass *>(vp);

  vtkRenderPass *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderPass"))
    {
    if (ap.IsBound())
      {
      op->SetPostProcessingRenderPass(temp0);
      }
    else
      {
      op->vtkClientServerCompositePass::SetPostProcessingRenderPass(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClientServerCompositePass_GetPostProcessingRenderPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPostProcessingRenderPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerCompositePass *op = static_cast<vtkClientServerCompositePass *>(vp);

  vtkRenderPass *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPostProcessingRenderPass();
      }
    else
      {
      tempr = op->vtkClientServerCompositePass::GetPostProcessingRenderPass();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClientServerCompositePass_SetProcessIsServer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessIsServer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerCompositePass *op = static_cast<vtkClientServerCompositePass *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProcessIsServer(temp0);
      }
    else
      {
      op->vtkClientServerCompositePass::SetProcessIsServer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClientServerCompositePass_ProcessIsServerOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessIsServerOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerCompositePass *op = static_cast<vtkClientServerCompositePass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ProcessIsServerOn();
      }
    else
      {
      op->vtkClientServerCompositePass::ProcessIsServerOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClientServerCompositePass_ProcessIsServerOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessIsServerOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerCompositePass *op = static_cast<vtkClientServerCompositePass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ProcessIsServerOff();
      }
    else
      {
      op->vtkClientServerCompositePass::ProcessIsServerOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClientServerCompositePass_GetProcessIsServer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessIsServer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerCompositePass *op = static_cast<vtkClientServerCompositePass *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProcessIsServer();
      }
    else
      {
      tempr = op->vtkClientServerCompositePass::GetProcessIsServer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClientServerCompositePass_SetServerSideRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetServerSideRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerCompositePass *op = static_cast<vtkClientServerCompositePass *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetServerSideRendering(temp0);
      }
    else
      {
      op->vtkClientServerCompositePass::SetServerSideRendering(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClientServerCompositePass_ServerSideRenderingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ServerSideRenderingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerCompositePass *op = static_cast<vtkClientServerCompositePass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ServerSideRenderingOn();
      }
    else
      {
      op->vtkClientServerCompositePass::ServerSideRenderingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClientServerCompositePass_ServerSideRenderingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ServerSideRenderingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerCompositePass *op = static_cast<vtkClientServerCompositePass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ServerSideRenderingOff();
      }
    else
      {
      op->vtkClientServerCompositePass::ServerSideRenderingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClientServerCompositePass_GetServerSideRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetServerSideRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerCompositePass *op = static_cast<vtkClientServerCompositePass *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetServerSideRendering();
      }
    else
      {
      tempr = op->vtkClientServerCompositePass::GetServerSideRendering();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkClientServerCompositePass_Methods[] = {
  {(char*)"GetClassName", PyvtkClientServerCompositePass_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkClientServerCompositePass_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkClientServerCompositePass_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkClientServerCompositePass\nC++: vtkClientServerCompositePass *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkClientServerCompositePass_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkClientServerCompositePass\nC++: vtkClientServerCompositePass *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkClientServerCompositePass_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *w)\n\nRelease graphics resources and ask components to release their\nown resources.\n\\pre w_exists: w!=0\n"},
  {(char*)"GetController", PyvtkClientServerCompositePass_GetController, 1,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nController If it is NULL, nothing will be rendered and a warning\nwill be emitted. Initial value is a NULL pointer. This must be\nset to the socket controller used for communicating between the\nclient and the server.\n"},
  {(char*)"SetController", PyvtkClientServerCompositePass_SetController, 1,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(\n    vtkMultiProcessController *controller)\n\nController If it is NULL, nothing will be rendered and a warning\nwill be emitted. Initial value is a NULL pointer. This must be\nset to the socket controller used for communicating between the\nclient and the server.\n"},
  {(char*)"SetRenderPass", PyvtkClientServerCompositePass_SetRenderPass, 1,
   (char*)"V.SetRenderPass(vtkRenderPass)\nC++: void SetRenderPass(vtkRenderPass *)\n\nGet/Set the render pass used to do the actual rendering. When\nServerSideRendering is true, the rendering-pass is called only on\nthe server side.\n"},
  {(char*)"GetRenderPass", PyvtkClientServerCompositePass_GetRenderPass, 1,
   (char*)"V.GetRenderPass() -> vtkRenderPass\nC++: vtkRenderPass *GetRenderPass()\n\nGet/Set the render pass used to do the actual rendering. When\nServerSideRendering is true, the rendering-pass is called only on\nthe server side.\n"},
  {(char*)"SetPostProcessingRenderPass", PyvtkClientServerCompositePass_SetPostProcessingRenderPass, 1,
   (char*)"V.SetPostProcessingRenderPass(vtkRenderPass)\nC++: void SetPostProcessingRenderPass(vtkRenderPass *)\n\nSet/Get the optional post-fetch render pass. On the\nclient-process this is called after the server-side image is\nfetched (if ServerSideRendering is true). On server-process, this\nis called after the image rendered by this->RenderPass is\ndelivered to the client (if ServerSideRendering is true). This is\noptional, so you can set this either on one of the two processes\nor both or neither.\n"},
  {(char*)"GetPostProcessingRenderPass", PyvtkClientServerCompositePass_GetPostProcessingRenderPass, 1,
   (char*)"V.GetPostProcessingRenderPass() -> vtkRenderPass\nC++: vtkRenderPass *GetPostProcessingRenderPass()\n\nSet/Get the optional post-fetch render pass. On the\nclient-process this is called after the server-side image is\nfetched (if ServerSideRendering is true). On server-process, this\nis called after the image rendered by this->RenderPass is\ndelivered to the client (if ServerSideRendering is true). This is\noptional, so you can set this either on one of the two processes\nor both or neither.\n"},
  {(char*)"SetProcessIsServer", PyvtkClientServerCompositePass_SetProcessIsServer, 1,
   (char*)"V.SetProcessIsServer(bool)\nC++: void SetProcessIsServer(bool a)\n\nSet the current process type. This is needed since when using the\nsocket communicator there's no easy way of determining which\nprocess is the server and which one is the client.\n"},
  {(char*)"ProcessIsServerOn", PyvtkClientServerCompositePass_ProcessIsServerOn, 1,
   (char*)"V.ProcessIsServerOn()\nC++: void ProcessIsServerOn()\n\nSet the current process type. This is needed since when using the\nsocket communicator there's no easy way of determining which\nprocess is the server and which one is the client.\n"},
  {(char*)"ProcessIsServerOff", PyvtkClientServerCompositePass_ProcessIsServerOff, 1,
   (char*)"V.ProcessIsServerOff()\nC++: void ProcessIsServerOff()\n\nSet the current process type. This is needed since when using the\nsocket communicator there's no easy way of determining which\nprocess is the server and which one is the client.\n"},
  {(char*)"GetProcessIsServer", PyvtkClientServerCompositePass_GetProcessIsServer, 1,
   (char*)"V.GetProcessIsServer() -> bool\nC++: bool GetProcessIsServer()\n\nSet the current process type. This is needed since when using the\nsocket communicator there's no easy way of determining which\nprocess is the server and which one is the client.\n"},
  {(char*)"SetServerSideRendering", PyvtkClientServerCompositePass_SetServerSideRendering, 1,
   (char*)"V.SetServerSideRendering(bool)\nC++: void SetServerSideRendering(bool a)\n\nEnable/Disable fetching of the image from the server side to the\nclient. If this flag is disabled, then this pass just acts as a\n\"pass-through\" pass. This flag must be set to the same value on\nboth the processes.\n"},
  {(char*)"ServerSideRenderingOn", PyvtkClientServerCompositePass_ServerSideRenderingOn, 1,
   (char*)"V.ServerSideRenderingOn()\nC++: void ServerSideRenderingOn()\n\nEnable/Disable fetching of the image from the server side to the\nclient. If this flag is disabled, then this pass just acts as a\n\"pass-through\" pass. This flag must be set to the same value on\nboth the processes.\n"},
  {(char*)"ServerSideRenderingOff", PyvtkClientServerCompositePass_ServerSideRenderingOff, 1,
   (char*)"V.ServerSideRenderingOff()\nC++: void ServerSideRenderingOff()\n\nEnable/Disable fetching of the image from the server side to the\nclient. If this flag is disabled, then this pass just acts as a\n\"pass-through\" pass. This flag must be set to the same value on\nboth the processes.\n"},
  {(char*)"GetServerSideRendering", PyvtkClientServerCompositePass_GetServerSideRendering, 1,
   (char*)"V.GetServerSideRendering() -> bool\nC++: bool GetServerSideRendering()\n\nEnable/Disable fetching of the image from the server side to the\nclient. If this flag is disabled, then this pass just acts as a\n\"pass-through\" pass. This flag must be set to the same value on\nboth the processes.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkClientServerCompositePass_StaticNew()
{
  return vtkClientServerCompositePass::New();
}

PyObject *PyVTKClass_vtkClientServerCompositePassNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkClientServerCompositePass_StaticNew,
    PyvtkClientServerCompositePass_Methods,
    "vtkClientServerCompositePass", modulename,
    NULL, NULL,
    PyvtkClientServerCompositePass_Doc(),
    PyVTKClass_vtkRenderPassNew(modulename));
  return cls;
}

const char **PyvtkClientServerCompositePass_Doc()
{
  static const char *docstring[] = {
    "vtkClientServerCompositePass \n\n",
    "Superclass: vtkRenderPass\n\n",
    "vtkClientServerCompositePass is a render-pass that can handle\nclient-server image delivery. This is designed to be used in\nconfigurations in two-processes configurations.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkClientServerCompositePass(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkClientServerCompositePassNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkClientServerCompositePass", o) != 0)
    {
    Py_DECREF(o);
    }

}

