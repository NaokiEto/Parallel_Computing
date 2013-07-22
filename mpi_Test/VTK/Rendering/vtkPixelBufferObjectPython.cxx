// python wrapper for vtkPixelBufferObject
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
#include "vtkPixelBufferObject.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPixelBufferObject(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPixelBufferObject(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPixelBufferObjectNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPixelBufferObjectNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkPixelBufferObject_Doc();


static PyObject *
PyvtkPixelBufferObject_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

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
      tempr = op->vtkPixelBufferObject::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

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
      tempr = op->vtkPixelBufferObject::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  vtkPixelBufferObject *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPixelBufferObject::NewInstance();
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
PyvtkPixelBufferObject_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPixelBufferObject *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPixelBufferObject::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_SetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

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
      op->vtkPixelBufferObject::SetContext(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_GetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

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
      tempr = op->vtkPixelBufferObject::GetContext();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_GetUsage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUsage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUsage();
      }
    else
      {
      tempr = op->vtkPixelBufferObject::GetUsage();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_SetUsage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUsage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUsage(temp0);
      }
    else
      {
      op->vtkPixelBufferObject::SetUsage(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_Upload1D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Upload1D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  int temp0;
  void  *temp1 = NULL;
  unsigned int temp2;
  int temp3;
  vtkIdType temp4;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      tempr = op->Upload1D(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      tempr = op->vtkPixelBufferObject::Upload1D(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_Upload2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Upload2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  int temp0;
  void  *temp1 = NULL;
  unsigned int temp2[2];
  unsigned int save2[2];
  const int size2 = 2;
  int temp3;
  vtkIdType temp4[2];
  vtkIdType save4[2];
  const int size4 = 2;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp4, save4, size4);

    if (ap.IsBound())
      {
      tempr = op->Upload2D(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      tempr = op->vtkPixelBufferObject::Upload2D(temp0, temp1, temp2, temp3, temp4);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_GetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetType();
      }
    else
      {
      tempr = op->vtkPixelBufferObject::GetType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  unsigned int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSize();
      }
    else
      {
      tempr = op->vtkPixelBufferObject::GetSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_GetHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  unsigned int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHandle();
      }
    else
      {
      tempr = op->vtkPixelBufferObject::GetHandle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_Download1D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Download1D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  int temp0;
  void  *temp1 = NULL;
  unsigned int temp2;
  int temp3;
  vtkIdType temp4;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      tempr = op->Download1D(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      tempr = op->vtkPixelBufferObject::Download1D(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_Download2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Download2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  int temp0;
  void  *temp1 = NULL;
  unsigned int temp2[2];
  unsigned int save2[2];
  const int size2 = 2;
  int temp3;
  vtkIdType temp4[2];
  vtkIdType save4[2];
  const int size4 = 2;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp4, save4, size4);

    if (ap.IsBound())
      {
      tempr = op->Download2D(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      tempr = op->vtkPixelBufferObject::Download2D(temp0, temp1, temp2, temp3, temp4);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_Download3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Download3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  int temp0;
  void  *temp1 = NULL;
  unsigned int temp2[3];
  unsigned int save2[3];
  const int size2 = 3;
  int temp3;
  vtkIdType temp4[3];
  vtkIdType save4[3];
  const int size4 = 3;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp4, save4, size4);

    if (ap.IsBound())
      {
      tempr = op->Download3D(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      tempr = op->vtkPixelBufferObject::Download3D(temp0, temp1, temp2, temp3, temp4);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_BindToPackedBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BindToPackedBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BindToPackedBuffer();
      }
    else
      {
      op->vtkPixelBufferObject::BindToPackedBuffer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_BindToUnPackedBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BindToUnPackedBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BindToUnPackedBuffer();
      }
    else
      {
      op->vtkPixelBufferObject::BindToUnPackedBuffer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_UnBind(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnBind");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UnBind();
      }
    else
      {
      op->vtkPixelBufferObject::UnBind();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  unsigned int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->Allocate(temp0, temp1);
      }
    else
      {
      op->vtkPixelBufferObject::Allocate(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_ReleaseMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReleaseMemory();
      }
    else
      {
      op->vtkPixelBufferObject::ReleaseMemory();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_IsSupported(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsSupported");

  vtkRenderWindow *temp0 = NULL;
  bool tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
    {
    tempr = vtkPixelBufferObject::IsSupported(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPixelBufferObject_Methods[] = {
  {(char*)"GetClassName", PyvtkPixelBufferObject_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPixelBufferObject_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPixelBufferObject_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPixelBufferObject\nC++: vtkPixelBufferObject *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPixelBufferObject_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPixelBufferObject\nC++: vtkPixelBufferObject *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetContext", PyvtkPixelBufferObject_SetContext, 1,
   (char*)"V.SetContext(vtkRenderWindow)\nC++: void SetContext(vtkRenderWindow *context)\n\nGet/Set the context. Context must be a vtkOpenGLRenderWindow.\nThis does not increase the reference count of the context to\navoid reference loops. SetContext() may raise an error is the\nOpenGL context does not support the required OpenGL extensions.\n"},
  {(char*)"GetContext", PyvtkPixelBufferObject_GetContext, 1,
   (char*)"V.GetContext() -> vtkRenderWindow\nC++: vtkRenderWindow *GetContext()\n\nGet/Set the context. Context must be a vtkOpenGLRenderWindow.\nThis does not increase the reference count of the context to\navoid reference loops. SetContext() may raise an error is the\nOpenGL context does not support the required OpenGL extensions.\n"},
  {(char*)"GetUsage", PyvtkPixelBufferObject_GetUsage, 1,
   (char*)"V.GetUsage() -> int\nC++: int GetUsage()\n\nUsage is a performance hint. Valid values are:\n- StreamDraw specified once by A, used few times S\n- StreamRead specified once by R, queried a few times by A\n- StreamCopy specified once by R, used a few times S\n- StaticDraw specified once by A, used many times S\n- StaticRead specificed once by R, queried many times by A\n- StaticCopy specified once by R, used many times S\n- DynamicDraw respecified repeatedly by A, used many times S\n- DynamicRead respecified repeatedly by R, queried many times by\n  A\n- DynamicCopy respecified repeatedly by R, used many times S A:\n  the application S: as the source for GL drawing and image\n  specification commands. R: reading data from the GL Initial\n  value is StaticDraw, as in OpenGL spec.\n"},
  {(char*)"SetUsage", PyvtkPixelBufferObject_SetUsage, 1,
   (char*)"V.SetUsage(int)\nC++: void SetUsage(int a)\n\nUsage is a performance hint. Valid values are:\n- StreamDraw specified once by A, used few times S\n- StreamRead specified once by R, queried a few times by A\n- StreamCopy specified once by R, used a few times S\n- StaticDraw specified once by A, used many times S\n- StaticRead specificed once by R, queried many times by A\n- StaticCopy specified once by R, used many times S\n- DynamicDraw respecified repeatedly by A, used many times S\n- DynamicRead respecified repeatedly by R, queried many times by\n  A\n- DynamicCopy respecified repeatedly by R, used many times S A:\n  the application S: as the source for GL drawing and image\n  specification commands. R: reading data from the GL Initial\n  value is StaticDraw, as in OpenGL spec.\n"},
  {(char*)"Upload1D", PyvtkPixelBufferObject_Upload1D, 1,
   (char*)"V.Upload1D(int, , int, int, int) -> bool\nC++: bool Upload1D(int type, void *data, unsigned int numtuples,\n    int comps, vtkIdType increment)\n\nUpload data to GPU. The input data can be freed after this call.\nThe data ptr is treated as an 1D array with the given number of\ntuples and given number of components in each tuple to be copied\nto the GPU. increment is the offset added after the last\ncomponent in each tuple is transferred. Look at the documentation\nfor ContinuousIncrements in vtkImageData for details about how\nincrements are specified.\n"},
  {(char*)"Upload2D", PyvtkPixelBufferObject_Upload2D, 1,
   (char*)"V.Upload2D(int, , [int, int], int, [int, int]) -> bool\nC++: bool Upload2D(int type, void *data, unsigned int dims[2],\n    int comps, vtkIdType increments[2])\n\nUpdate data to GPU sourcing it from a 2D array. The input data\ncan be freed after this call. The data ptr is treated as a 2D\narray with increments indicating how to iterate over the data.\nLook at the documentation for ContinuousIncrements in\nvtkImageData for details about how increments are specified.\n"},
  {(char*)"GetType", PyvtkPixelBufferObject_GetType, 1,
   (char*)"V.GetType() -> int\nC++: int GetType()\n\nGet the type with which the data is loaded into the GPU. eg.\nVTK_FLOAT for float32, VTK_CHAR for byte, VTK_UNSIGNED_CHAR for\nunsigned byte etc.\n"},
  {(char*)"GetSize", PyvtkPixelBufferObject_GetSize, 1,
   (char*)"V.GetSize() -> int\nC++: unsigned int GetSize()\n\nGet the size of the data loaded into the GPU. Size is in the\nnumber of elements of the uploaded Type.\n"},
  {(char*)"GetHandle", PyvtkPixelBufferObject_GetHandle, 1,
   (char*)"V.GetHandle() -> int\nC++: unsigned int GetHandle()\n\nGet the openGL buffer handle.\n"},
  {(char*)"Download1D", PyvtkPixelBufferObject_Download1D, 1,
   (char*)"V.Download1D(int, , int, int, int) -> bool\nC++: bool Download1D(int type, void *data, unsigned int dim,\n    int numcomps, vtkIdType increment)\n\nDownload data from pixel buffer to the 1D array. The length of\nthe array must be equal to the size of the data in the memory.\n"},
  {(char*)"Download2D", PyvtkPixelBufferObject_Download2D, 1,
   (char*)"V.Download2D(int, , [int, int], int, [int, int]) -> bool\nC++: bool Download2D(int type, void *data, unsigned int dims[2],\n    int numcomps, vtkIdType increments[2])\n\nDownload data from pixel buffer to the 2D array. (lengthx *\nlengthy) must be equal to the size of the data in the memory.\n"},
  {(char*)"Download3D", PyvtkPixelBufferObject_Download3D, 1,
   (char*)"V.Download3D(int, , [int, int, int], int, [int, int, int]) -> bool\nC++: bool Download3D(int type, void *data, unsigned int dims[3],\n    int numcomps, vtkIdType increments[3])\n\nDownload data from pixel buffer to the 3D array. (lengthx *\nlengthy * lengthz) must be equal to the size of the data in the\nmemory.\n"},
  {(char*)"BindToPackedBuffer", PyvtkPixelBufferObject_BindToPackedBuffer, 1,
   (char*)"V.BindToPackedBuffer()\nC++: void BindToPackedBuffer()\n\nFor wrapping.\n"},
  {(char*)"BindToUnPackedBuffer", PyvtkPixelBufferObject_BindToUnPackedBuffer, 1,
   (char*)"V.BindToUnPackedBuffer()\nC++: void BindToUnPackedBuffer()\n\n"},
  {(char*)"UnBind", PyvtkPixelBufferObject_UnBind, 1,
   (char*)"V.UnBind()\nC++: void UnBind()\n\nInactivate the buffer.\n"},
  {(char*)"Allocate", PyvtkPixelBufferObject_Allocate, 1,
   (char*)"V.Allocate(int, int)\nC++: void Allocate(unsigned int size, int type)\n\nAllocate the memory. size is in number of bytes. type is a VTK\ntype.\n"},
  {(char*)"ReleaseMemory", PyvtkPixelBufferObject_ReleaseMemory, 1,
   (char*)"V.ReleaseMemory()\nC++: void ReleaseMemory()\n\nRelease the memory allocated without destroying the PBO handle.\n"},
  {(char*)"IsSupported", PyvtkPixelBufferObject_IsSupported, 1,
   (char*)"V.IsSupported(vtkRenderWindow) -> bool\nC++: static bool IsSupported(vtkRenderWindow *renWin)\n\nReturns if the context supports the required extensions.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPixelBufferObject_StaticNew()
{
  return vtkPixelBufferObject::New();
}

PyObject *PyVTKClass_vtkPixelBufferObjectNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPixelBufferObject_StaticNew,
    PyvtkPixelBufferObject_Methods,
    "vtkPixelBufferObject", modulename,
    NULL, NULL,
    PyvtkPixelBufferObject_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"StreamDraw", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"StreamRead", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"StreamCopy", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"StaticDraw", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"StaticRead", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(5);
    if (o && PyDict_SetItemString(d, (char *)"StaticCopy", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(6);
    if (o && PyDict_SetItemString(d, (char *)"DynamicDraw", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(7);
    if (o && PyDict_SetItemString(d, (char *)"DynamicRead", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(8);
    if (o && PyDict_SetItemString(d, (char *)"DynamicCopy", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(9);
    if (o && PyDict_SetItemString(d, (char *)"NumberOfUsages", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"PACKED_BUFFER", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"UNPACKED_BUFFER", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkPixelBufferObject_Doc()
{
  static const char *docstring[] = {
    "vtkPixelBufferObject - abstracts an OpenGL pixel buffer object.\n\n",
    "Superclass: vtkObject\n\n",
    "Provides low-level access to GPU memory. Used to pass raw data to\nGPU. The data is uploaded into a pixel buffer.\n\nCaveats:\n\nSince most GPUs don't support double format all double data is\nconverted to float and then uploaded. DON'T PLAY WITH IT YET.\n\nSee Also:\n\nOpenGL Pixel Buffer Object Extension Spec (ARB_pixel_buffer_object):\nhttp://www.opengl.org/registry/specs/ARB/pixel_buffer_object.txt\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPixelBufferObject(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPixelBufferObjectNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPixelBufferObject", o) != 0)
    {
    Py_DECREF(o);
    }

}

