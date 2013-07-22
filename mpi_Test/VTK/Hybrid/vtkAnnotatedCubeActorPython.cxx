// python wrapper for vtkAnnotatedCubeActor
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
#include "vtkAnnotatedCubeActor.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkAnnotatedCubeActor(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkAnnotatedCubeActor(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkAnnotatedCubeActorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkAnnotatedCubeActorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkProp3DNew
extern "C" { PyObject *PyVTKClass_vtkProp3DNew(const char *); }
#define DECLARED_PyVTKClass_vtkProp3DNew
#endif

static const char **PyvtkAnnotatedCubeActor_Doc();


static PyObject *
PyvtkAnnotatedCubeActor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

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
      tempr = op->vtkAnnotatedCubeActor::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

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
      tempr = op->vtkAnnotatedCubeActor::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  vtkAnnotatedCubeActor *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkAnnotatedCubeActor::NewInstance();
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
PyvtkAnnotatedCubeActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkAnnotatedCubeActor *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkAnnotatedCubeActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  vtkPropCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
    {
    if (ap.IsBound())
      {
      op->GetActors(temp0);
      }
    else
      {
      op->vtkAnnotatedCubeActor::GetActors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  vtkViewport *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      tempr = op->RenderOpaqueGeometry(temp0);
      }
    else
      {
      tempr = op->vtkAnnotatedCubeActor::RenderOpaqueGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  vtkViewport *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      tempr = op->RenderTranslucentPolygonalGeometry(temp0);
      }
    else
      {
      tempr = op->vtkAnnotatedCubeActor::RenderTranslucentPolygonalGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->HasTranslucentPolygonalGeometry();
      }
    else
      {
      tempr = op->vtkAnnotatedCubeActor::HasTranslucentPolygonalGeometry();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkAnnotatedCubeActor::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

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
      op->vtkAnnotatedCubeActor::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetBounds(temp0);
      }
    else
      {
      op->vtkAnnotatedCubeActor::GetBounds(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAnnotatedCubeActor_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  double *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBounds();
      }
    else
      {
      tempr = op->vtkAnnotatedCubeActor::GetBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkAnnotatedCubeActor_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkAnnotatedCubeActor_GetBounds_s1(self, args);
    case 0:
      return PyvtkAnnotatedCubeActor_GetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return NULL;
}



static PyObject *
PyvtkAnnotatedCubeActor_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMTime();
      }
    else
      {
      tempr = op->vtkAnnotatedCubeActor::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_SetFaceTextScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFaceTextScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFaceTextScale(temp0);
      }
    else
      {
      op->vtkAnnotatedCubeActor::SetFaceTextScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetFaceTextScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceTextScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFaceTextScale();
      }
    else
      {
      tempr = op->vtkAnnotatedCubeActor::GetFaceTextScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetXPlusFaceProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXPlusFaceProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  vtkProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXPlusFaceProperty();
      }
    else
      {
      tempr = op->vtkAnnotatedCubeActor::GetXPlusFaceProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetXMinusFaceProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXMinusFaceProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  vtkProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXMinusFaceProperty();
      }
    else
      {
      tempr = op->vtkAnnotatedCubeActor::GetXMinusFaceProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetYPlusFaceProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYPlusFaceProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  vtkProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetYPlusFaceProperty();
      }
    else
      {
      tempr = op->vtkAnnotatedCubeActor::GetYPlusFaceProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetYMinusFaceProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYMinusFaceProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  vtkProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetYMinusFaceProperty();
      }
    else
      {
      tempr = op->vtkAnnotatedCubeActor::GetYMinusFaceProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetZPlusFaceProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZPlusFaceProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  vtkProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetZPlusFaceProperty();
      }
    else
      {
      tempr = op->vtkAnnotatedCubeActor::GetZPlusFaceProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetZMinusFaceProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZMinusFaceProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  vtkProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetZMinusFaceProperty();
      }
    else
      {
      tempr = op->vtkAnnotatedCubeActor::GetZMinusFaceProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetCubeProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCubeProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  vtkProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCubeProperty();
      }
    else
      {
      tempr = op->vtkAnnotatedCubeActor::GetCubeProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetTextEdgesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextEdgesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  vtkProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextEdgesProperty();
      }
    else
      {
      tempr = op->vtkAnnotatedCubeActor::GetTextEdgesProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_SetXPlusFaceText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXPlusFaceText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXPlusFaceText(temp0);
      }
    else
      {
      op->vtkAnnotatedCubeActor::SetXPlusFaceText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetXPlusFaceText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXPlusFaceText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXPlusFaceText();
      }
    else
      {
      tempr = op->vtkAnnotatedCubeActor::GetXPlusFaceText();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_SetXMinusFaceText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXMinusFaceText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXMinusFaceText(temp0);
      }
    else
      {
      op->vtkAnnotatedCubeActor::SetXMinusFaceText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetXMinusFaceText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXMinusFaceText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXMinusFaceText();
      }
    else
      {
      tempr = op->vtkAnnotatedCubeActor::GetXMinusFaceText();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_SetYPlusFaceText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYPlusFaceText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYPlusFaceText(temp0);
      }
    else
      {
      op->vtkAnnotatedCubeActor::SetYPlusFaceText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetYPlusFaceText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYPlusFaceText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetYPlusFaceText();
      }
    else
      {
      tempr = op->vtkAnnotatedCubeActor::GetYPlusFaceText();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_SetYMinusFaceText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYMinusFaceText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYMinusFaceText(temp0);
      }
    else
      {
      op->vtkAnnotatedCubeActor::SetYMinusFaceText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetYMinusFaceText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYMinusFaceText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetYMinusFaceText();
      }
    else
      {
      tempr = op->vtkAnnotatedCubeActor::GetYMinusFaceText();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_SetZPlusFaceText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZPlusFaceText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZPlusFaceText(temp0);
      }
    else
      {
      op->vtkAnnotatedCubeActor::SetZPlusFaceText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetZPlusFaceText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZPlusFaceText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetZPlusFaceText();
      }
    else
      {
      tempr = op->vtkAnnotatedCubeActor::GetZPlusFaceText();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_SetZMinusFaceText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZMinusFaceText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZMinusFaceText(temp0);
      }
    else
      {
      op->vtkAnnotatedCubeActor::SetZMinusFaceText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetZMinusFaceText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZMinusFaceText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetZMinusFaceText();
      }
    else
      {
      tempr = op->vtkAnnotatedCubeActor::GetZMinusFaceText();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_SetTextEdgesVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextEdgesVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTextEdgesVisibility(temp0);
      }
    else
      {
      op->vtkAnnotatedCubeActor::SetTextEdgesVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetTextEdgesVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextEdgesVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextEdgesVisibility();
      }
    else
      {
      tempr = op->vtkAnnotatedCubeActor::GetTextEdgesVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_SetCubeVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCubeVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCubeVisibility(temp0);
      }
    else
      {
      op->vtkAnnotatedCubeActor::SetCubeVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetCubeVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCubeVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCubeVisibility();
      }
    else
      {
      tempr = op->vtkAnnotatedCubeActor::GetCubeVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_SetFaceTextVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFaceTextVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFaceTextVisibility(temp0);
      }
    else
      {
      op->vtkAnnotatedCubeActor::SetFaceTextVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetFaceTextVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceTextVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFaceTextVisibility();
      }
    else
      {
      tempr = op->vtkAnnotatedCubeActor::GetFaceTextVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_SetXFaceTextRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXFaceTextRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXFaceTextRotation(temp0);
      }
    else
      {
      op->vtkAnnotatedCubeActor::SetXFaceTextRotation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetXFaceTextRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXFaceTextRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXFaceTextRotation();
      }
    else
      {
      tempr = op->vtkAnnotatedCubeActor::GetXFaceTextRotation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_SetYFaceTextRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYFaceTextRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYFaceTextRotation(temp0);
      }
    else
      {
      op->vtkAnnotatedCubeActor::SetYFaceTextRotation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetYFaceTextRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYFaceTextRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetYFaceTextRotation();
      }
    else
      {
      tempr = op->vtkAnnotatedCubeActor::GetYFaceTextRotation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_SetZFaceTextRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZFaceTextRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZFaceTextRotation(temp0);
      }
    else
      {
      op->vtkAnnotatedCubeActor::SetZFaceTextRotation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetZFaceTextRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZFaceTextRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetZFaceTextRotation();
      }
    else
      {
      tempr = op->vtkAnnotatedCubeActor::GetZFaceTextRotation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetAssembly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAssembly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  vtkAssembly *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAssembly();
      }
    else
      {
      tempr = op->vtkAnnotatedCubeActor::GetAssembly();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAnnotatedCubeActor_Methods[] = {
  {(char*)"GetClassName", PyvtkAnnotatedCubeActor_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAnnotatedCubeActor_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAnnotatedCubeActor_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkAnnotatedCubeActor\nC++: vtkAnnotatedCubeActor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAnnotatedCubeActor_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAnnotatedCubeActor\nC++: vtkAnnotatedCubeActor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetActors", PyvtkAnnotatedCubeActor_GetActors, 1,
   (char*)"V.GetActors(vtkPropCollection)\nC++: virtual void GetActors(vtkPropCollection *)\n\nFor some exporters and other other operations we must be able to\ncollect all the actors or volumes. These methods are used in that\nprocess.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkAnnotatedCubeActor_RenderOpaqueGeometry, 1,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *viewport)\n\nSupport the standard render methods.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkAnnotatedCubeActor_RenderTranslucentPolygonalGeometry, 1,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(\n    vtkViewport *viewport)\n\nSupport the standard render methods.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkAnnotatedCubeActor_HasTranslucentPolygonalGeometry, 1,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {(char*)"ShallowCopy", PyvtkAnnotatedCubeActor_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop)\n\nShallow copy of an axes actor. Overloads the virtual vtkProp\nmethod.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkAnnotatedCubeActor_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {(char*)"GetBounds", PyvtkAnnotatedCubeActor_GetBounds, 1,
   (char*)"V.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6])\nV.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds()\n\nGet the bounds for this Actor as (Xmin,Xmax,Ymin,Ymax,Zmin,Zmax).\n(The method GetBounds(double bounds[6]) is available from the\nsuperclass.)\n"},
  {(char*)"GetMTime", PyvtkAnnotatedCubeActor_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nGet the actors mtime plus consider its properties and texture if\nset.\n"},
  {(char*)"SetFaceTextScale", PyvtkAnnotatedCubeActor_SetFaceTextScale, 1,
   (char*)"V.SetFaceTextScale(float)\nC++: void SetFaceTextScale(double)\n\nSet/Get the scale factor for the face text\n"},
  {(char*)"GetFaceTextScale", PyvtkAnnotatedCubeActor_GetFaceTextScale, 1,
   (char*)"V.GetFaceTextScale() -> float\nC++: double GetFaceTextScale()\n\nSet/Get the scale factor for the face text\n"},
  {(char*)"GetXPlusFaceProperty", PyvtkAnnotatedCubeActor_GetXPlusFaceProperty, 1,
   (char*)"V.GetXPlusFaceProperty() -> vtkProperty\nC++: vtkProperty *GetXPlusFaceProperty()\n\nGet the individual face text properties.\n"},
  {(char*)"GetXMinusFaceProperty", PyvtkAnnotatedCubeActor_GetXMinusFaceProperty, 1,
   (char*)"V.GetXMinusFaceProperty() -> vtkProperty\nC++: vtkProperty *GetXMinusFaceProperty()\n\nGet the individual face text properties.\n"},
  {(char*)"GetYPlusFaceProperty", PyvtkAnnotatedCubeActor_GetYPlusFaceProperty, 1,
   (char*)"V.GetYPlusFaceProperty() -> vtkProperty\nC++: vtkProperty *GetYPlusFaceProperty()\n\nGet the individual face text properties.\n"},
  {(char*)"GetYMinusFaceProperty", PyvtkAnnotatedCubeActor_GetYMinusFaceProperty, 1,
   (char*)"V.GetYMinusFaceProperty() -> vtkProperty\nC++: vtkProperty *GetYMinusFaceProperty()\n\nGet the individual face text properties.\n"},
  {(char*)"GetZPlusFaceProperty", PyvtkAnnotatedCubeActor_GetZPlusFaceProperty, 1,
   (char*)"V.GetZPlusFaceProperty() -> vtkProperty\nC++: vtkProperty *GetZPlusFaceProperty()\n\nGet the individual face text properties.\n"},
  {(char*)"GetZMinusFaceProperty", PyvtkAnnotatedCubeActor_GetZMinusFaceProperty, 1,
   (char*)"V.GetZMinusFaceProperty() -> vtkProperty\nC++: vtkProperty *GetZMinusFaceProperty()\n\nGet the individual face text properties.\n"},
  {(char*)"GetCubeProperty", PyvtkAnnotatedCubeActor_GetCubeProperty, 1,
   (char*)"V.GetCubeProperty() -> vtkProperty\nC++: vtkProperty *GetCubeProperty()\n\nGet the cube properties.\n"},
  {(char*)"GetTextEdgesProperty", PyvtkAnnotatedCubeActor_GetTextEdgesProperty, 1,
   (char*)"V.GetTextEdgesProperty() -> vtkProperty\nC++: vtkProperty *GetTextEdgesProperty()\n\nGet the text edges properties.\n"},
  {(char*)"SetXPlusFaceText", PyvtkAnnotatedCubeActor_SetXPlusFaceText, 1,
   (char*)"V.SetXPlusFaceText(string)\nC++: void SetXPlusFaceText(char *)\n\nSet/get the face text.\n"},
  {(char*)"GetXPlusFaceText", PyvtkAnnotatedCubeActor_GetXPlusFaceText, 1,
   (char*)"V.GetXPlusFaceText() -> string\nC++: char *GetXPlusFaceText()\n\nSet/get the face text.\n"},
  {(char*)"SetXMinusFaceText", PyvtkAnnotatedCubeActor_SetXMinusFaceText, 1,
   (char*)"V.SetXMinusFaceText(string)\nC++: void SetXMinusFaceText(char *)\n\nSet/get the face text.\n"},
  {(char*)"GetXMinusFaceText", PyvtkAnnotatedCubeActor_GetXMinusFaceText, 1,
   (char*)"V.GetXMinusFaceText() -> string\nC++: char *GetXMinusFaceText()\n\nSet/get the face text.\n"},
  {(char*)"SetYPlusFaceText", PyvtkAnnotatedCubeActor_SetYPlusFaceText, 1,
   (char*)"V.SetYPlusFaceText(string)\nC++: void SetYPlusFaceText(char *)\n\nSet/get the face text.\n"},
  {(char*)"GetYPlusFaceText", PyvtkAnnotatedCubeActor_GetYPlusFaceText, 1,
   (char*)"V.GetYPlusFaceText() -> string\nC++: char *GetYPlusFaceText()\n\nSet/get the face text.\n"},
  {(char*)"SetYMinusFaceText", PyvtkAnnotatedCubeActor_SetYMinusFaceText, 1,
   (char*)"V.SetYMinusFaceText(string)\nC++: void SetYMinusFaceText(char *)\n\nSet/get the face text.\n"},
  {(char*)"GetYMinusFaceText", PyvtkAnnotatedCubeActor_GetYMinusFaceText, 1,
   (char*)"V.GetYMinusFaceText() -> string\nC++: char *GetYMinusFaceText()\n\nSet/get the face text.\n"},
  {(char*)"SetZPlusFaceText", PyvtkAnnotatedCubeActor_SetZPlusFaceText, 1,
   (char*)"V.SetZPlusFaceText(string)\nC++: void SetZPlusFaceText(char *)\n\nSet/get the face text.\n"},
  {(char*)"GetZPlusFaceText", PyvtkAnnotatedCubeActor_GetZPlusFaceText, 1,
   (char*)"V.GetZPlusFaceText() -> string\nC++: char *GetZPlusFaceText()\n\nSet/get the face text.\n"},
  {(char*)"SetZMinusFaceText", PyvtkAnnotatedCubeActor_SetZMinusFaceText, 1,
   (char*)"V.SetZMinusFaceText(string)\nC++: void SetZMinusFaceText(char *)\n\nSet/get the face text.\n"},
  {(char*)"GetZMinusFaceText", PyvtkAnnotatedCubeActor_GetZMinusFaceText, 1,
   (char*)"V.GetZMinusFaceText() -> string\nC++: char *GetZMinusFaceText()\n\nSet/get the face text.\n"},
  {(char*)"SetTextEdgesVisibility", PyvtkAnnotatedCubeActor_SetTextEdgesVisibility, 1,
   (char*)"V.SetTextEdgesVisibility(int)\nC++: void SetTextEdgesVisibility(int)\n\nEnable/disable drawing the vector text edges.\n"},
  {(char*)"GetTextEdgesVisibility", PyvtkAnnotatedCubeActor_GetTextEdgesVisibility, 1,
   (char*)"V.GetTextEdgesVisibility() -> int\nC++: int GetTextEdgesVisibility()\n\nEnable/disable drawing the vector text edges.\n"},
  {(char*)"SetCubeVisibility", PyvtkAnnotatedCubeActor_SetCubeVisibility, 1,
   (char*)"V.SetCubeVisibility(int)\nC++: void SetCubeVisibility(int)\n\nEnable/disable drawing the cube.\n"},
  {(char*)"GetCubeVisibility", PyvtkAnnotatedCubeActor_GetCubeVisibility, 1,
   (char*)"V.GetCubeVisibility() -> int\nC++: int GetCubeVisibility()\n\nEnable/disable drawing the cube.\n"},
  {(char*)"SetFaceTextVisibility", PyvtkAnnotatedCubeActor_SetFaceTextVisibility, 1,
   (char*)"V.SetFaceTextVisibility(int)\nC++: void SetFaceTextVisibility(int)\n\nEnable/disable drawing the vector text.\n"},
  {(char*)"GetFaceTextVisibility", PyvtkAnnotatedCubeActor_GetFaceTextVisibility, 1,
   (char*)"V.GetFaceTextVisibility() -> int\nC++: int GetFaceTextVisibility()\n\nEnable/disable drawing the vector text.\n"},
  {(char*)"SetXFaceTextRotation", PyvtkAnnotatedCubeActor_SetXFaceTextRotation, 1,
   (char*)"V.SetXFaceTextRotation(float)\nC++: void SetXFaceTextRotation(double a)\n\nAugment individual face text orientations.\n"},
  {(char*)"GetXFaceTextRotation", PyvtkAnnotatedCubeActor_GetXFaceTextRotation, 1,
   (char*)"V.GetXFaceTextRotation() -> float\nC++: double GetXFaceTextRotation()\n\nAugment individual face text orientations.\n"},
  {(char*)"SetYFaceTextRotation", PyvtkAnnotatedCubeActor_SetYFaceTextRotation, 1,
   (char*)"V.SetYFaceTextRotation(float)\nC++: void SetYFaceTextRotation(double a)\n\nAugment individual face text orientations.\n"},
  {(char*)"GetYFaceTextRotation", PyvtkAnnotatedCubeActor_GetYFaceTextRotation, 1,
   (char*)"V.GetYFaceTextRotation() -> float\nC++: double GetYFaceTextRotation()\n\nAugment individual face text orientations.\n"},
  {(char*)"SetZFaceTextRotation", PyvtkAnnotatedCubeActor_SetZFaceTextRotation, 1,
   (char*)"V.SetZFaceTextRotation(float)\nC++: void SetZFaceTextRotation(double a)\n\nAugment individual face text orientations.\n"},
  {(char*)"GetZFaceTextRotation", PyvtkAnnotatedCubeActor_GetZFaceTextRotation, 1,
   (char*)"V.GetZFaceTextRotation() -> float\nC++: double GetZFaceTextRotation()\n\nAugment individual face text orientations.\n"},
  {(char*)"GetAssembly", PyvtkAnnotatedCubeActor_GetAssembly, 1,
   (char*)"V.GetAssembly() -> vtkAssembly\nC++: vtkAssembly *GetAssembly()\n\nGet the assembly so that user supplied transforms can be applied\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAnnotatedCubeActor_StaticNew()
{
  return vtkAnnotatedCubeActor::New();
}

PyObject *PyVTKClass_vtkAnnotatedCubeActorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAnnotatedCubeActor_StaticNew,
    PyvtkAnnotatedCubeActor_Methods,
    "vtkAnnotatedCubeActor", modulename,
    NULL, NULL,
    PyvtkAnnotatedCubeActor_Doc(),
    PyVTKClass_vtkProp3DNew(modulename));
  return cls;
}

const char **PyvtkAnnotatedCubeActor_Doc()
{
  static const char *docstring[] = {
    "vtkAnnotatedCubeActor - a 3D cube with face labels\n\n",
    "Superclass: vtkProp3D\n\n",
    "vtkAnnotatedCubeActor is a hybrid 3D actor used to represent an\nanatomical orientation marker in a scene.  The class consists of a 3D\nunit cube centered on the origin with each face labelled in\ncorrespondance to a particular coordinate direction.  For example,\nwith Cartesian directions, the user defined text labels could be: +X,\n-X, +Y, -Y, +Z, -Z, while for anatomical directions: A, P, L, R, S,\nI",
    ".  Text is automatically centered on each cube face and is not\nrestriceted to single characters. In addition to or in replace of a\nsolid text label representation, the outline edges of the labels can\nbe displayed.  The individual properties of the cube, face labels and\ntext outlines can be manipulated as can their visibility.\n\nCaveats:\n\nvtkAnnotatedCubeActor is primarily intended for use with\nvtkO",
    "rientationMarkerWidget. The cube face text is generated by\nvtkVectorText and therefore the font attributes are restricted.\n\nSee Also:\n\nvtkAxesActor vtkOrientationMarkerWidget vtkVectorText\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAnnotatedCubeActor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAnnotatedCubeActorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAnnotatedCubeActor", o) != 0)
    {
    Py_DECREF(o);
    }

}

