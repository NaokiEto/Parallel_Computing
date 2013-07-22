// python wrapper for vtkFrameBufferObject
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
#include "vtkFrameBufferObject.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkFrameBufferObject(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkFrameBufferObject(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkFrameBufferObjectNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkFrameBufferObjectNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkFrameBufferObject_Doc();


static PyObject *
PyvtkFrameBufferObject_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

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
      tempr = op->vtkFrameBufferObject::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

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
      tempr = op->vtkFrameBufferObject::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

  vtkFrameBufferObject *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkFrameBufferObject::NewInstance();
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
PyvtkFrameBufferObject_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkFrameBufferObject *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkFrameBufferObject::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_SetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

  vtkRenderWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
    {
    if (ap.IsBound())
      {
      op->SetContext(temp0);
      }
    else
      {
      op->vtkFrameBufferObject::SetContext(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_GetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

  vtkRenderWindow *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetContext();
      }
    else
      {
      tempr = op->vtkFrameBufferObject::GetContext();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_Start(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Start");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

  int temp0;
  int temp1;
  bool temp2 = false;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->Start(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkFrameBufferObject::Start(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_StartNonOrtho(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartNonOrtho");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

  int temp0;
  int temp1;
  bool temp2 = false;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->StartNonOrtho(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkFrameBufferObject::StartNonOrtho(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_RenderQuad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderQuad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->RenderQuad(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkFrameBufferObject::RenderQuad(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_Bind(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Bind");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Bind();
      }
    else
      {
      op->vtkFrameBufferObject::Bind();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_UnBind(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnBind");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UnBind();
      }
    else
      {
      op->vtkFrameBufferObject::UnBind();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_SetActiveBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetActiveBuffer(temp0);
      }
    else
      {
      op->vtkFrameBufferObject::SetActiveBuffer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_SetColorBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

  unsigned int temp0;
  vtkTextureObject *temp1 = NULL;
  unsigned int temp2 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkTextureObject") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    if (ap.IsBound())
      {
      op->SetColorBuffer(temp0, temp1, temp2);
      }
    else
      {
      op->vtkFrameBufferObject::SetColorBuffer(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_GetColorBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

  unsigned int temp0;
  vtkTextureObject *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColorBuffer(temp0);
      }
    else
      {
      tempr = op->vtkFrameBufferObject::GetColorBuffer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_RemoveColorBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveColorBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveColorBuffer(temp0);
      }
    else
      {
      op->vtkFrameBufferObject::RemoveColorBuffer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_RemoveAllColorBuffers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllColorBuffers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllColorBuffers();
      }
    else
      {
      op->vtkFrameBufferObject::RemoveAllColorBuffers();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_SetDepthBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepthBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

  vtkTextureObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextureObject"))
    {
    if (ap.IsBound())
      {
      op->SetDepthBuffer(temp0);
      }
    else
      {
      op->vtkFrameBufferObject::SetDepthBuffer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_RemoveDepthBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveDepthBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveDepthBuffer();
      }
    else
      {
      op->vtkFrameBufferObject::RemoveDepthBuffer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_SetDepthBufferNeeded(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepthBufferNeeded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDepthBufferNeeded(temp0);
      }
    else
      {
      op->vtkFrameBufferObject::SetDepthBufferNeeded(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_GetDepthBufferNeeded(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthBufferNeeded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDepthBufferNeeded();
      }
    else
      {
      tempr = op->vtkFrameBufferObject::GetDepthBufferNeeded();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_SetNumberOfRenderTargets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfRenderTargets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfRenderTargets(temp0);
      }
    else
      {
      op->vtkFrameBufferObject::SetNumberOfRenderTargets(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_GetNumberOfRenderTargets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRenderTargets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

  unsigned int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfRenderTargets();
      }
    else
      {
      tempr = op->vtkFrameBufferObject::GetNumberOfRenderTargets();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_GetMaximumNumberOfActiveTargets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfActiveTargets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

  unsigned int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumNumberOfActiveTargets();
      }
    else
      {
      tempr = op->vtkFrameBufferObject::GetMaximumNumberOfActiveTargets();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_GetMaximumNumberOfRenderTargets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfRenderTargets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

  unsigned int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumNumberOfRenderTargets();
      }
    else
      {
      tempr = op->vtkFrameBufferObject::GetMaximumNumberOfRenderTargets();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_GetLastSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLastSize();
      }
    else
      {
      tempr = op->vtkFrameBufferObject::GetLastSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_IsSupported(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsSupported");

  vtkRenderWindow *temp0 = NULL;
  bool tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
    {
    tempr = vtkFrameBufferObject::IsSupported(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkFrameBufferObject_Methods[] = {
  {(char*)"GetClassName", PyvtkFrameBufferObject_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkFrameBufferObject_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkFrameBufferObject_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkFrameBufferObject\nC++: vtkFrameBufferObject *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkFrameBufferObject_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkFrameBufferObject\nC++: vtkFrameBufferObject *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetContext", PyvtkFrameBufferObject_SetContext, 1,
   (char*)"V.SetContext(vtkRenderWindow)\nC++: void SetContext(vtkRenderWindow *context)\n\nGet/Set the context. Context must be a vtkOpenGLRenderWindow.\nThis does not increase the reference count of the context to\navoid reference loops. SetContext() may raise an error is the\nOpenGL context does not support the required OpenGL extensions.\n"},
  {(char*)"GetContext", PyvtkFrameBufferObject_GetContext, 1,
   (char*)"V.GetContext() -> vtkRenderWindow\nC++: vtkRenderWindow *GetContext()\n\nGet/Set the context. Context must be a vtkOpenGLRenderWindow.\nThis does not increase the reference count of the context to\navoid reference loops. SetContext() may raise an error is the\nOpenGL context does not support the required OpenGL extensions.\n"},
  {(char*)"Start", PyvtkFrameBufferObject_Start, 1,
   (char*)"V.Start(int, int, bool) -> bool\nC++: bool Start(int width, int height,\n    bool shaderSupportsTextureInt)\n\nUser must take care that width/height match the dimensions of the\nuser defined texture attachments. This method makes the \"active\nbuffers\" the buffers that will get drawn into by subsequent\ndrawing calls. Note that this does not clear the render buffers\ni.e. no glClear() calls are made by either of these methods. It's\nup to the caller to clear the buffers if needed.\n"},
  {(char*)"StartNonOrtho", PyvtkFrameBufferObject_StartNonOrtho, 1,
   (char*)"V.StartNonOrtho(int, int, bool) -> bool\nC++: bool StartNonOrtho(int width, int height,\n    bool shaderSupportsTextureInt)\n\nUser must take care that width/height match the dimensions of the\nuser defined texture attachments. This method makes the \"active\nbuffers\" the buffers that will get drawn into by subsequent\ndrawing calls. Note that this does not clear the render buffers\ni.e. no glClear() calls are made by either of these methods. It's\nup to the caller to clear the buffers if needed.\n"},
  {(char*)"RenderQuad", PyvtkFrameBufferObject_RenderQuad, 1,
   (char*)"V.RenderQuad(int, int, int, int)\nC++: void RenderQuad(int minX, int maxX, int minY, int maxY)\n\nRenders a quad at the given location with pixel coordinates. This\nmethod is provided as a convenience, since we often render quads\nin a FBO.\n\\pre positive_minX: minX>=0\n\\pre increasing_x: minX<=maxX\n\\pre valid_maxX: maxX<LastSize[0]\n\\pre positive_minY: minY>=0\n\\pre increasing_y: minY<=maxY\n\\pre valid_maxY: maxY<LastSize[1]\n"},
  {(char*)"Bind", PyvtkFrameBufferObject_Bind, 1,
   (char*)"V.Bind()\nC++: void Bind()\n\nSave the current framebuffer and make the frame buffer active.\nMultiple calls to Bind has no effect.\n"},
  {(char*)"UnBind", PyvtkFrameBufferObject_UnBind, 1,
   (char*)"V.UnBind()\nC++: void UnBind()\n\nRestore the framebuffer saved with the call to Bind(). Multiple\ncalls to UnBind has no effect.\n"},
  {(char*)"SetActiveBuffer", PyvtkFrameBufferObject_SetActiveBuffer, 1,
   (char*)"V.SetActiveBuffer(int)\nC++: void SetActiveBuffer(unsigned int index)\n\nChoose the buffer to render into.\n"},
  {(char*)"SetColorBuffer", PyvtkFrameBufferObject_SetColorBuffer, 1,
   (char*)"V.SetColorBuffer(int, vtkTextureObject, int)\nC++: void SetColorBuffer(unsigned int index,\n    vtkTextureObject *texture, unsigned int zslice=0)\n\n"},
  {(char*)"GetColorBuffer", PyvtkFrameBufferObject_GetColorBuffer, 1,
   (char*)"V.GetColorBuffer(int) -> vtkTextureObject\nC++: vtkTextureObject *GetColorBuffer(unsigned int index)\n\n"},
  {(char*)"RemoveColorBuffer", PyvtkFrameBufferObject_RemoveColorBuffer, 1,
   (char*)"V.RemoveColorBuffer(int)\nC++: void RemoveColorBuffer(unsigned int index)\n\n"},
  {(char*)"RemoveAllColorBuffers", PyvtkFrameBufferObject_RemoveAllColorBuffers, 1,
   (char*)"V.RemoveAllColorBuffers()\nC++: void RemoveAllColorBuffers()\n\n"},
  {(char*)"SetDepthBuffer", PyvtkFrameBufferObject_SetDepthBuffer, 1,
   (char*)"V.SetDepthBuffer(vtkTextureObject)\nC++: void SetDepthBuffer(vtkTextureObject *depthTexture)\n\nSet the texture to use as depth buffer.\n"},
  {(char*)"RemoveDepthBuffer", PyvtkFrameBufferObject_RemoveDepthBuffer, 1,
   (char*)"V.RemoveDepthBuffer()\nC++: void RemoveDepthBuffer()\n\nSet the texture to use as depth buffer.\n"},
  {(char*)"SetDepthBufferNeeded", PyvtkFrameBufferObject_SetDepthBufferNeeded, 1,
   (char*)"V.SetDepthBufferNeeded(bool)\nC++: void SetDepthBufferNeeded(bool a)\n\nIf true, the frame buffer object will be initialized with a depth\nbuffer. Initial value is true.\n"},
  {(char*)"GetDepthBufferNeeded", PyvtkFrameBufferObject_GetDepthBufferNeeded, 1,
   (char*)"V.GetDepthBufferNeeded() -> bool\nC++: bool GetDepthBufferNeeded()\n\nIf true, the frame buffer object will be initialized with a depth\nbuffer. Initial value is true.\n"},
  {(char*)"SetNumberOfRenderTargets", PyvtkFrameBufferObject_SetNumberOfRenderTargets, 1,
   (char*)"V.SetNumberOfRenderTargets(int)\nC++: void SetNumberOfRenderTargets(unsigned int)\n\nSet/Get the number of render targets to render into at once.\n"},
  {(char*)"GetNumberOfRenderTargets", PyvtkFrameBufferObject_GetNumberOfRenderTargets, 1,
   (char*)"V.GetNumberOfRenderTargets() -> int\nC++: unsigned int GetNumberOfRenderTargets()\n\nSet/Get the number of render targets to render into at once.\n"},
  {(char*)"GetMaximumNumberOfActiveTargets", PyvtkFrameBufferObject_GetMaximumNumberOfActiveTargets, 1,
   (char*)"V.GetMaximumNumberOfActiveTargets() -> int\nC++: unsigned int GetMaximumNumberOfActiveTargets()\n\nReturns the maximum number of targets that can be rendered to at\none time. This limits the active targets set by\nSetActiveTargets(). The return value is valid only if GetContext\nis non-null.\n"},
  {(char*)"GetMaximumNumberOfRenderTargets", PyvtkFrameBufferObject_GetMaximumNumberOfRenderTargets, 1,
   (char*)"V.GetMaximumNumberOfRenderTargets() -> int\nC++: unsigned int GetMaximumNumberOfRenderTargets()\n\nReturns the maximum number of render targets available. This\nlimits the available attachement points for SetColorAttachment().\nThe return value is valid only if GetContext is non-null.\n"},
  {(char*)"GetLastSize", PyvtkFrameBufferObject_GetLastSize, 1,
   (char*)"V.GetLastSize() -> (int, int)\nC++: int *GetLastSize()\n\n"},
  {(char*)"IsSupported", PyvtkFrameBufferObject_IsSupported, 1,
   (char*)"V.IsSupported(vtkRenderWindow) -> bool\nC++: static bool IsSupported(vtkRenderWindow *renWin)\n\nReturns if the context supports the required extensions.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkFrameBufferObject_StaticNew()
{
  return vtkFrameBufferObject::New();
}

PyObject *PyVTKClass_vtkFrameBufferObjectNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkFrameBufferObject_StaticNew,
    PyvtkFrameBufferObject_Methods,
    "vtkFrameBufferObject", modulename,
    NULL, NULL,
    PyvtkFrameBufferObject_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkFrameBufferObject_Doc()
{
  static const char *docstring[] = {
    "vtkFrameBufferObject - internal class which encapsulates OpenGL\n\n",
    "Superclass: vtkObject\n\n",
    "Encapsulates an OpenGL Frame Buffer Object. For use by\nvtkOpenGLFBORenderWindow, not to be used directly.\n\nCaveats:\n\nDON'T PLAY WITH IT YET.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkFrameBufferObject(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkFrameBufferObjectNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkFrameBufferObject", o) != 0)
    {
    Py_DECREF(o);
    }

}

