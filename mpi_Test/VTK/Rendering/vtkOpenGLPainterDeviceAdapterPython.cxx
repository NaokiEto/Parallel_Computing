// python wrapper for vtkOpenGLPainterDeviceAdapter
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
#include "vtkOpenGLPainterDeviceAdapter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkOpenGLPainterDeviceAdapter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkOpenGLPainterDeviceAdapter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkOpenGLPainterDeviceAdapterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkOpenGLPainterDeviceAdapterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPainterDeviceAdapterNew
extern "C" { PyObject *PyVTKClass_vtkPainterDeviceAdapterNew(const char *); }
#define DECLARED_PyVTKClass_vtkPainterDeviceAdapterNew
#endif

static const char **PyvtkOpenGLPainterDeviceAdapter_Doc();


static PyObject *
PyvtkOpenGLPainterDeviceAdapter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

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
      tempr = op->vtkOpenGLPainterDeviceAdapter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPainterDeviceAdapter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

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
      tempr = op->vtkOpenGLPainterDeviceAdapter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPainterDeviceAdapter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

  vtkOpenGLPainterDeviceAdapter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkOpenGLPainterDeviceAdapter::NewInstance();
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
PyvtkOpenGLPainterDeviceAdapter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkOpenGLPainterDeviceAdapter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkOpenGLPainterDeviceAdapter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPainterDeviceAdapter_BeginPrimitive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BeginPrimitive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->BeginPrimitive(temp0);
      }
    else
      {
      op->vtkOpenGLPainterDeviceAdapter::BeginPrimitive(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPainterDeviceAdapter_EndPrimitive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndPrimitive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EndPrimitive();
      }
    else
      {
      op->vtkOpenGLPainterDeviceAdapter::EndPrimitive();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPainterDeviceAdapter_IsAttributesSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAttributesSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsAttributesSupported(temp0);
      }
    else
      {
      tempr = op->vtkOpenGLPainterDeviceAdapter::IsAttributesSupported(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPainterDeviceAdapter_SendAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SendAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

  int temp0;
  int temp1;
  int temp2;
  void  *temp3 = NULL;
  vtkIdType temp4 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
    {
    if (ap.IsBound())
      {
      op->SendAttribute(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkOpenGLPainterDeviceAdapter::SendAttribute(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPainterDeviceAdapter_SendMultiTextureCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SendMultiTextureCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

  int temp0;
  int temp1;
  void  *temp2 = NULL;
  int temp3;
  vtkIdType temp4;
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
      op->SendMultiTextureCoords(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkOpenGLPainterDeviceAdapter::SendMultiTextureCoords(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPainterDeviceAdapter_SetAttributePointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributePointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  void  *temp4 = NULL;
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
      op->SetAttributePointer(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkOpenGLPainterDeviceAdapter::SetAttributePointer(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPainterDeviceAdapter_EnableAttributeArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAttributeArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->EnableAttributeArray(temp0);
      }
    else
      {
      op->vtkOpenGLPainterDeviceAdapter::EnableAttributeArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPainterDeviceAdapter_DisableAttributeArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAttributeArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->DisableAttributeArray(temp0);
      }
    else
      {
      op->vtkOpenGLPainterDeviceAdapter::DisableAttributeArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPainterDeviceAdapter_DrawArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

  int temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->DrawArrays(temp0, temp1, temp2);
      }
    else
      {
      op->vtkOpenGLPainterDeviceAdapter::DrawArrays(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPainterDeviceAdapter_DrawElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

  int temp0;
  vtkIdType temp1;
  int temp2;
  void  *temp3 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->DrawElements(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkOpenGLPainterDeviceAdapter::DrawElements(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPainterDeviceAdapter_Compatible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Compatible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

  vtkRenderer *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      tempr = op->Compatible(temp0);
      }
    else
      {
      tempr = op->vtkOpenGLPainterDeviceAdapter::Compatible(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPainterDeviceAdapter_MakeLighting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeLighting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->MakeLighting(temp0);
      }
    else
      {
      op->vtkOpenGLPainterDeviceAdapter::MakeLighting(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPainterDeviceAdapter_QueryLighting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "QueryLighting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->QueryLighting();
      }
    else
      {
      tempr = op->vtkOpenGLPainterDeviceAdapter::QueryLighting();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPainterDeviceAdapter_MakeMultisampling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeMultisampling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->MakeMultisampling(temp0);
      }
    else
      {
      op->vtkOpenGLPainterDeviceAdapter::MakeMultisampling(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPainterDeviceAdapter_QueryMultisampling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "QueryMultisampling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->QueryMultisampling();
      }
    else
      {
      tempr = op->vtkOpenGLPainterDeviceAdapter::QueryMultisampling();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPainterDeviceAdapter_MakeBlending(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeBlending");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->MakeBlending(temp0);
      }
    else
      {
      op->vtkOpenGLPainterDeviceAdapter::MakeBlending(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPainterDeviceAdapter_QueryBlending(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "QueryBlending");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->QueryBlending();
      }
    else
      {
      tempr = op->vtkOpenGLPainterDeviceAdapter::QueryBlending();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPainterDeviceAdapter_MakeVertexEmphasis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeVertexEmphasis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->MakeVertexEmphasis(temp0);
      }
    else
      {
      op->vtkOpenGLPainterDeviceAdapter::MakeVertexEmphasis(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkOpenGLPainterDeviceAdapter_MakeVertexEmphasisWithStencilCheck(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeVertexEmphasisWithStencilCheck");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->MakeVertexEmphasisWithStencilCheck(temp0);
      }
    else
      {
      op->vtkOpenGLPainterDeviceAdapter::MakeVertexEmphasisWithStencilCheck(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}
#endif


static PyObject *
PyvtkOpenGLPainterDeviceAdapter_Stencil(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Stencil");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Stencil(temp0);
      }
    else
      {
      op->vtkOpenGLPainterDeviceAdapter::Stencil(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPainterDeviceAdapter_WriteStencil(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteStencil");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->WriteStencil(temp0);
      }
    else
      {
      op->vtkOpenGLPainterDeviceAdapter::WriteStencil(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPainterDeviceAdapter_TestStencil(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TestStencil");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPainterDeviceAdapter *op = static_cast<vtkOpenGLPainterDeviceAdapter *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->TestStencil(temp0);
      }
    else
      {
      op->vtkOpenGLPainterDeviceAdapter::TestStencil(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLPainterDeviceAdapter_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLPainterDeviceAdapter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLPainterDeviceAdapter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLPainterDeviceAdapter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkOpenGLPainterDeviceAdapter\nC++: vtkOpenGLPainterDeviceAdapter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLPainterDeviceAdapter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLPainterDeviceAdapter\nC++: vtkOpenGLPainterDeviceAdapter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"BeginPrimitive", PyvtkOpenGLPainterDeviceAdapter_BeginPrimitive, 1,
   (char*)"V.BeginPrimitive(int)\nC++: virtual void BeginPrimitive(int mode)\n\nConverts mode from VTK_* to GL_* and calls glBegin.\n"},
  {(char*)"EndPrimitive", PyvtkOpenGLPainterDeviceAdapter_EndPrimitive, 1,
   (char*)"V.EndPrimitive()\nC++: virtual void EndPrimitive()\n\nCalls glEnd.\n"},
  {(char*)"IsAttributesSupported", PyvtkOpenGLPainterDeviceAdapter_IsAttributesSupported, 1,
   (char*)"V.IsAttributesSupported(int) -> int\nC++: virtual int IsAttributesSupported(int attribute)\n\nReturns if the given attribute type is supported by the device.\nReturns 1 is supported, 0 otherwise.\n"},
  {(char*)"SendAttribute", PyvtkOpenGLPainterDeviceAdapter_SendAttribute, 1,
   (char*)"V.SendAttribute(int, int, int, , int)\nC++: virtual void SendAttribute(int index, int components,\n    int type, const void *attribute, vtkIdType offset=0)\n\nCalls one of glVertex*, glNormal*, glColor*, or glTexCoord*.\n"},
  {(char*)"SendMultiTextureCoords", PyvtkOpenGLPainterDeviceAdapter_SendMultiTextureCoords, 1,
   (char*)"V.SendMultiTextureCoords(int, int, , int, int)\nC++: virtual void SendMultiTextureCoords(int numcomp, int type,\n    const void *attribute, int idx, vtkIdType offset)\n\nCalls glMultiTex\n"},
  {(char*)"SetAttributePointer", PyvtkOpenGLPainterDeviceAdapter_SetAttributePointer, 1,
   (char*)"V.SetAttributePointer(int, int, int, int, )\nC++: virtual void SetAttributePointer(int index,\n    int numcomponents, int type, int stride, const void *pointer)\n\nCalls one of glVertexPointer, glNormalPointer, glColorPointer, or\nglTexCoordPointer.\n"},
  {(char*)"EnableAttributeArray", PyvtkOpenGLPainterDeviceAdapter_EnableAttributeArray, 1,
   (char*)"V.EnableAttributeArray(int)\nC++: virtual void EnableAttributeArray(int index)\n\nCalls glEnableClientState or glDisableClientState.\n"},
  {(char*)"DisableAttributeArray", PyvtkOpenGLPainterDeviceAdapter_DisableAttributeArray, 1,
   (char*)"V.DisableAttributeArray(int)\nC++: virtual void DisableAttributeArray(int index)\n\nCalls glEnableClientState or glDisableClientState.\n"},
  {(char*)"DrawArrays", PyvtkOpenGLPainterDeviceAdapter_DrawArrays, 1,
   (char*)"V.DrawArrays(int, int, int)\nC++: virtual void DrawArrays(int mode, vtkIdType first,\n    vtkIdType count)\n\nCalls glDrawArrays.  Mode is converted from VTK_* to GL_*.\n"},
  {(char*)"DrawElements", PyvtkOpenGLPainterDeviceAdapter_DrawElements, 1,
   (char*)"V.DrawElements(int, int, int, )\nC++: virtual void DrawElements(int mode, vtkIdType count,\n    int type, void *indices)\n\nCalls glDrawElements.  Mode and type are converted from VTK_* to\nGL_*.\n"},
  {(char*)"Compatible", PyvtkOpenGLPainterDeviceAdapter_Compatible, 1,
   (char*)"V.Compatible(vtkRenderer) -> int\nC++: virtual int Compatible(vtkRenderer *renderer)\n\nReturns true if renderer is a vtkOpenGLRenderer.\n"},
  {(char*)"MakeLighting", PyvtkOpenGLPainterDeviceAdapter_MakeLighting, 1,
   (char*)"V.MakeLighting(int)\nC++: virtual void MakeLighting(int mode)\n\nTurns lighting on and off.\n"},
  {(char*)"QueryLighting", PyvtkOpenGLPainterDeviceAdapter_QueryLighting, 1,
   (char*)"V.QueryLighting() -> int\nC++: virtual int QueryLighting()\n\nReturns current lighting setting.\n"},
  {(char*)"MakeMultisampling", PyvtkOpenGLPainterDeviceAdapter_MakeMultisampling, 1,
   (char*)"V.MakeMultisampling(int)\nC++: virtual void MakeMultisampling(int mode)\n\nTurns antialiasing on and off.\n"},
  {(char*)"QueryMultisampling", PyvtkOpenGLPainterDeviceAdapter_QueryMultisampling, 1,
   (char*)"V.QueryMultisampling() -> int\nC++: virtual int QueryMultisampling()\n\nReturns current antialiasing setting.\n"},
  {(char*)"MakeBlending", PyvtkOpenGLPainterDeviceAdapter_MakeBlending, 1,
   (char*)"V.MakeBlending(int)\nC++: virtual void MakeBlending(int mode)\n\nTurns blending on and off.\n"},
  {(char*)"QueryBlending", PyvtkOpenGLPainterDeviceAdapter_QueryBlending, 1,
   (char*)"V.QueryBlending() -> int\nC++: virtual int QueryBlending()\n\nReturns current blending setting.\n"},
  {(char*)"MakeVertexEmphasis", PyvtkOpenGLPainterDeviceAdapter_MakeVertexEmphasis, 1,
   (char*)"V.MakeVertexEmphasis(bool)\nC++: virtual void MakeVertexEmphasis(bool mode)\n\nTurns emphasis of vertices on or off for vertex selection. When\nemphasized verts are drawn nearer to the camera and are drawn\nlarger than normal to make selection of them more reliable.\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"MakeVertexEmphasisWithStencilCheck", PyvtkOpenGLPainterDeviceAdapter_MakeVertexEmphasisWithStencilCheck, 1,
   (char*)"V.MakeVertexEmphasisWithStencilCheck(int)\nC++: virtual void MakeVertexEmphasisWithStencilCheck(int mode)\n\n@deprecated\n"},
#endif
  {(char*)"Stencil", PyvtkOpenGLPainterDeviceAdapter_Stencil, 1,
   (char*)"V.Stencil(int)\nC++: virtual void Stencil(int on)\n\nControl use of the stencil buffer (for vertex selection).\n"},
  {(char*)"WriteStencil", PyvtkOpenGLPainterDeviceAdapter_WriteStencil, 1,
   (char*)"V.WriteStencil(int)\nC++: virtual void WriteStencil(vtkIdType value)\n\nControl use of the stencil buffer (for vertex selection).\n"},
  {(char*)"TestStencil", PyvtkOpenGLPainterDeviceAdapter_TestStencil, 1,
   (char*)"V.TestStencil(int)\nC++: virtual void TestStencil(vtkIdType value)\n\nControl use of the stencil buffer (for vertex selection).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLPainterDeviceAdapter_StaticNew()
{
  return vtkOpenGLPainterDeviceAdapter::New();
}

PyObject *PyVTKClass_vtkOpenGLPainterDeviceAdapterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLPainterDeviceAdapter_StaticNew,
    PyvtkOpenGLPainterDeviceAdapter_Methods,
    "vtkOpenGLPainterDeviceAdapter", modulename,
    NULL, NULL,
    PyvtkOpenGLPainterDeviceAdapter_Doc(),
    PyVTKClass_vtkPainterDeviceAdapterNew(modulename));
  return cls;
}

const char **PyvtkOpenGLPainterDeviceAdapter_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLPainterDeviceAdapter - An adapter between a vtkPainter and a\nrendering device.\n\n",
    "Superclass: vtkPainterDeviceAdapter\n\n",
    "An adapter between vtkPainter and the OpenGL rendering system.  Only\na handful of attributes with special meaning are supported.  The\nOpenGL attribute used for each attribute is given below.\n\n\n vtkDataSetAttributes::NORMALS          glNormal\n vtkDataSetAttributes:::SCALARS         glColor\n vtkDataSetAttributes::TCOORDS          glTexCoord\n vtkDataSetAttributes::NUM_ATTRIBUTES   glVertex\n \n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLPainterDeviceAdapter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLPainterDeviceAdapterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLPainterDeviceAdapter", o) != 0)
    {
    Py_DECREF(o);
    }

}

