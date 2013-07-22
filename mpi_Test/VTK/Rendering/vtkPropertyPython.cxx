// python wrapper for vtkProperty
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
#include "vtkProperty.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkProperty(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkProperty(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPropertyNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPropertyNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkProperty_Doc();


static PyObject *
PyvtkProperty_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

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
      tempr = op->vtkProperty::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

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
      tempr = op->vtkProperty::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  vtkProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkProperty::NewInstance();
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
PyvtkProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkProperty *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkProperty::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  vtkActor *temp0 = NULL;
  vtkRenderer *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkActor") &&
      ap.GetVTKObject(temp1, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->Render(temp0, temp1);
      }
    else
      {
      op->vtkProperty::Render(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_BackfaceRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BackfaceRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  vtkActor *temp0 = NULL;
  vtkRenderer *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkActor") &&
      ap.GetVTKObject(temp1, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->BackfaceRender(temp0, temp1);
      }
    else
      {
      op->vtkProperty::BackfaceRender(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_PostRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PostRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  vtkActor *temp0 = NULL;
  vtkRenderer *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkActor") &&
      ap.GetVTKObject(temp1, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->PostRender(temp0, temp1);
      }
    else
      {
      op->vtkProperty::PostRender(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_GetLighting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLighting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLighting();
      }
    else
      {
      tempr = op->vtkProperty::GetLighting();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_SetLighting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLighting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLighting(temp0);
      }
    else
      {
      op->vtkProperty::SetLighting(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_LightingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LightingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LightingOn();
      }
    else
      {
      op->vtkProperty::LightingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_LightingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LightingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LightingOff();
      }
    else
      {
      op->vtkProperty::LightingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_SetInterpolation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolation(temp0);
      }
    else
      {
      op->vtkProperty::SetInterpolation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_GetInterpolationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInterpolationMinValue();
      }
    else
      {
      tempr = op->vtkProperty::GetInterpolationMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_GetInterpolationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInterpolationMaxValue();
      }
    else
      {
      tempr = op->vtkProperty::GetInterpolationMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_GetInterpolation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInterpolation();
      }
    else
      {
      tempr = op->vtkProperty::GetInterpolation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_SetInterpolationToFlat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationToFlat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationToFlat();
      }
    else
      {
      op->vtkProperty::SetInterpolationToFlat();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_SetInterpolationToGouraud(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationToGouraud");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationToGouraud();
      }
    else
      {
      op->vtkProperty::SetInterpolationToGouraud();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_SetInterpolationToPhong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationToPhong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationToPhong();
      }
    else
      {
      op->vtkProperty::SetInterpolationToPhong();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_GetInterpolationAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInterpolationAsString();
      }
    else
      {
      tempr = op->vtkProperty::GetInterpolationAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRepresentation(temp0);
      }
    else
      {
      op->vtkProperty::SetRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_GetRepresentationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRepresentationMinValue();
      }
    else
      {
      tempr = op->vtkProperty::GetRepresentationMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_GetRepresentationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRepresentationMaxValue();
      }
    else
      {
      tempr = op->vtkProperty::GetRepresentationMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_GetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRepresentation();
      }
    else
      {
      tempr = op->vtkProperty::GetRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_SetRepresentationToPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationToPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetRepresentationToPoints();
      }
    else
      {
      op->vtkProperty::SetRepresentationToPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_SetRepresentationToWireframe(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationToWireframe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetRepresentationToWireframe();
      }
    else
      {
      op->vtkProperty::SetRepresentationToWireframe();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_SetRepresentationToSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationToSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetRepresentationToSurface();
      }
    else
      {
      op->vtkProperty::SetRepresentationToSurface();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_GetRepresentationAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRepresentationAsString();
      }
    else
      {
      tempr = op->vtkProperty::GetRepresentationAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_SetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkProperty::SetColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkProperty_SetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetColor(temp0);
      }
    else
      {
      op->vtkProperty::SetColor(temp0);
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
PyvtkProperty_SetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkProperty_SetColor_s1(self, args);
    case 1:
      return PyvtkProperty_SetColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetColor");
  return NULL;
}



static PyObject *
PyvtkProperty_GetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColor();
      }
    else
      {
      tempr = op->vtkProperty::GetColor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkProperty_GetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetColor(temp0);
      }
    else
      {
      op->vtkProperty::GetColor(temp0);
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
PyvtkProperty_GetColor_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->GetColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkProperty::GetColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkProperty_GetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkProperty_GetColor_s1(self, args);
    case 1:
      return PyvtkProperty_GetColor_s2(self, args);
    case 3:
      return PyvtkProperty_GetColor_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetColor");
  return NULL;
}



static PyObject *
PyvtkProperty_SetAmbient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAmbient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAmbient(temp0);
      }
    else
      {
      op->vtkProperty::SetAmbient(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_GetAmbientMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAmbientMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAmbientMinValue();
      }
    else
      {
      tempr = op->vtkProperty::GetAmbientMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_GetAmbientMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAmbientMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAmbientMaxValue();
      }
    else
      {
      tempr = op->vtkProperty::GetAmbientMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_GetAmbient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAmbient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAmbient();
      }
    else
      {
      tempr = op->vtkProperty::GetAmbient();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_SetDiffuse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiffuse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDiffuse(temp0);
      }
    else
      {
      op->vtkProperty::SetDiffuse(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_GetDiffuseMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffuseMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDiffuseMinValue();
      }
    else
      {
      tempr = op->vtkProperty::GetDiffuseMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_GetDiffuseMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffuseMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDiffuseMaxValue();
      }
    else
      {
      tempr = op->vtkProperty::GetDiffuseMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_GetDiffuse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffuse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDiffuse();
      }
    else
      {
      tempr = op->vtkProperty::GetDiffuse();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_SetSpecular(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecular");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSpecular(temp0);
      }
    else
      {
      op->vtkProperty::SetSpecular(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_GetSpecularMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpecularMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSpecularMinValue();
      }
    else
      {
      tempr = op->vtkProperty::GetSpecularMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_GetSpecularMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpecularMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSpecularMaxValue();
      }
    else
      {
      tempr = op->vtkProperty::GetSpecularMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_GetSpecular(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpecular");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSpecular();
      }
    else
      {
      tempr = op->vtkProperty::GetSpecular();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_SetSpecularPower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecularPower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSpecularPower(temp0);
      }
    else
      {
      op->vtkProperty::SetSpecularPower(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_GetSpecularPowerMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpecularPowerMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSpecularPowerMinValue();
      }
    else
      {
      tempr = op->vtkProperty::GetSpecularPowerMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_GetSpecularPowerMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpecularPowerMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSpecularPowerMaxValue();
      }
    else
      {
      tempr = op->vtkProperty::GetSpecularPowerMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_GetSpecularPower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpecularPower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSpecularPower();
      }
    else
      {
      tempr = op->vtkProperty::GetSpecularPower();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_SetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOpacity(temp0);
      }
    else
      {
      op->vtkProperty::SetOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_GetOpacityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOpacityMinValue();
      }
    else
      {
      tempr = op->vtkProperty::GetOpacityMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_GetOpacityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOpacityMaxValue();
      }
    else
      {
      tempr = op->vtkProperty::GetOpacityMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_GetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOpacity();
      }
    else
      {
      tempr = op->vtkProperty::GetOpacity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_SetAmbientColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAmbientColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetAmbientColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkProperty::SetAmbientColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkProperty_SetAmbientColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAmbientColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetAmbientColor(temp0);
      }
    else
      {
      op->vtkProperty::SetAmbientColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkProperty_SetAmbientColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkProperty_SetAmbientColor_s1(self, args);
    case 1:
      return PyvtkProperty_SetAmbientColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetAmbientColor");
  return NULL;
}



static PyObject *
PyvtkProperty_GetAmbientColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAmbientColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAmbientColor();
      }
    else
      {
      tempr = op->vtkProperty::GetAmbientColor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_SetDiffuseColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiffuseColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetDiffuseColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkProperty::SetDiffuseColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkProperty_SetDiffuseColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiffuseColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetDiffuseColor(temp0);
      }
    else
      {
      op->vtkProperty::SetDiffuseColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkProperty_SetDiffuseColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkProperty_SetDiffuseColor_s1(self, args);
    case 1:
      return PyvtkProperty_SetDiffuseColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDiffuseColor");
  return NULL;
}



static PyObject *
PyvtkProperty_GetDiffuseColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffuseColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDiffuseColor();
      }
    else
      {
      tempr = op->vtkProperty::GetDiffuseColor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_SetSpecularColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecularColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetSpecularColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkProperty::SetSpecularColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkProperty_SetSpecularColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecularColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetSpecularColor(temp0);
      }
    else
      {
      op->vtkProperty::SetSpecularColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkProperty_SetSpecularColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkProperty_SetSpecularColor_s1(self, args);
    case 1:
      return PyvtkProperty_SetSpecularColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSpecularColor");
  return NULL;
}



static PyObject *
PyvtkProperty_GetSpecularColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpecularColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSpecularColor();
      }
    else
      {
      tempr = op->vtkProperty::GetSpecularColor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_GetEdgeVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgeVisibility();
      }
    else
      {
      tempr = op->vtkProperty::GetEdgeVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_SetEdgeVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdgeVisibility(temp0);
      }
    else
      {
      op->vtkProperty::SetEdgeVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_EdgeVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EdgeVisibilityOn();
      }
    else
      {
      op->vtkProperty::EdgeVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_EdgeVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EdgeVisibilityOff();
      }
    else
      {
      op->vtkProperty::EdgeVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_SetEdgeColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetEdgeColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkProperty::SetEdgeColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkProperty_SetEdgeColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetEdgeColor(temp0);
      }
    else
      {
      op->vtkProperty::SetEdgeColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkProperty_SetEdgeColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkProperty_SetEdgeColor_s1(self, args);
    case 1:
      return PyvtkProperty_SetEdgeColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetEdgeColor");
  return NULL;
}



static PyObject *
PyvtkProperty_GetEdgeColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgeColor();
      }
    else
      {
      tempr = op->vtkProperty::GetEdgeColor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_SetLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLineWidth(temp0);
      }
    else
      {
      op->vtkProperty::SetLineWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_GetLineWidthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineWidthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLineWidthMinValue();
      }
    else
      {
      tempr = op->vtkProperty::GetLineWidthMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_GetLineWidthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineWidthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLineWidthMaxValue();
      }
    else
      {
      tempr = op->vtkProperty::GetLineWidthMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_GetLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLineWidth();
      }
    else
      {
      tempr = op->vtkProperty::GetLineWidth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_SetLineStipplePattern(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineStipplePattern");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLineStipplePattern(temp0);
      }
    else
      {
      op->vtkProperty::SetLineStipplePattern(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_GetLineStipplePattern(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineStipplePattern");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLineStipplePattern();
      }
    else
      {
      tempr = op->vtkProperty::GetLineStipplePattern();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_SetLineStippleRepeatFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineStippleRepeatFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLineStippleRepeatFactor(temp0);
      }
    else
      {
      op->vtkProperty::SetLineStippleRepeatFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_GetLineStippleRepeatFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineStippleRepeatFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLineStippleRepeatFactorMinValue();
      }
    else
      {
      tempr = op->vtkProperty::GetLineStippleRepeatFactorMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_GetLineStippleRepeatFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineStippleRepeatFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLineStippleRepeatFactorMaxValue();
      }
    else
      {
      tempr = op->vtkProperty::GetLineStippleRepeatFactorMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_GetLineStippleRepeatFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineStippleRepeatFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLineStippleRepeatFactor();
      }
    else
      {
      tempr = op->vtkProperty::GetLineStippleRepeatFactor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_SetPointSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPointSize(temp0);
      }
    else
      {
      op->vtkProperty::SetPointSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_GetPointSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointSizeMinValue();
      }
    else
      {
      tempr = op->vtkProperty::GetPointSizeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_GetPointSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointSizeMaxValue();
      }
    else
      {
      tempr = op->vtkProperty::GetPointSizeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_GetPointSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointSize();
      }
    else
      {
      tempr = op->vtkProperty::GetPointSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_GetBackfaceCulling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackfaceCulling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBackfaceCulling();
      }
    else
      {
      tempr = op->vtkProperty::GetBackfaceCulling();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_SetBackfaceCulling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackfaceCulling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBackfaceCulling(temp0);
      }
    else
      {
      op->vtkProperty::SetBackfaceCulling(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_BackfaceCullingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BackfaceCullingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BackfaceCullingOn();
      }
    else
      {
      op->vtkProperty::BackfaceCullingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_BackfaceCullingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BackfaceCullingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BackfaceCullingOff();
      }
    else
      {
      op->vtkProperty::BackfaceCullingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_GetFrontfaceCulling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrontfaceCulling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFrontfaceCulling();
      }
    else
      {
      tempr = op->vtkProperty::GetFrontfaceCulling();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_SetFrontfaceCulling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrontfaceCulling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFrontfaceCulling(temp0);
      }
    else
      {
      op->vtkProperty::SetFrontfaceCulling(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_FrontfaceCullingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FrontfaceCullingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FrontfaceCullingOn();
      }
    else
      {
      op->vtkProperty::FrontfaceCullingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_FrontfaceCullingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FrontfaceCullingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FrontfaceCullingOff();
      }
    else
      {
      op->vtkProperty::FrontfaceCullingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_GetMaterial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  vtkXMLMaterial *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaterial();
      }
    else
      {
      tempr = op->vtkProperty::GetMaterial();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_GetMaterialName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterialName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaterialName();
      }
    else
      {
      tempr = op->vtkProperty::GetMaterialName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_LoadMaterial_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadMaterial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->LoadMaterial(temp0);
      }
    else
      {
      op->vtkProperty::LoadMaterial(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkProperty_LoadMaterial_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadMaterial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  vtkXMLMaterial *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkXMLMaterial"))
    {
    if (ap.IsBound())
      {
      op->LoadMaterial(temp0);
      }
    else
      {
      op->vtkProperty::LoadMaterial(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkProperty_LoadMaterial_Methods[] = {
  {NULL, PyvtkProperty_LoadMaterial_s1, 1,
   (char*)"@z"},
  {NULL, PyvtkProperty_LoadMaterial_s2, 1,
   (char*)"@O *vtkXMLMaterial"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkProperty_LoadMaterial(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkProperty_LoadMaterial_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "LoadMaterial");
  return NULL;
}



static PyObject *
PyvtkProperty_LoadMaterialFromString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadMaterialFromString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->LoadMaterialFromString(temp0);
      }
    else
      {
      op->vtkProperty::LoadMaterialFromString(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_SetShading(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShading");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShading(temp0);
      }
    else
      {
      op->vtkProperty::SetShading(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_GetShading(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShading");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShading();
      }
    else
      {
      tempr = op->vtkProperty::GetShading();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_ShadingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShadingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShadingOn();
      }
    else
      {
      op->vtkProperty::ShadingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_ShadingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShadingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShadingOff();
      }
    else
      {
      op->vtkProperty::ShadingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_GetShaderProgram(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaderProgram");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  vtkShaderProgram *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShaderProgram();
      }
    else
      {
      tempr = op->vtkProperty::GetShaderProgram();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_AddShaderVariable_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddShaderVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddShaderVariable(temp0, temp1);
      }
    else
      {
      op->vtkProperty::AddShaderVariable(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkProperty_AddShaderVariable_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddShaderVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  char *temp0 = NULL;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddShaderVariable(temp0, temp1);
      }
    else
      {
      op->vtkProperty::AddShaderVariable(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkProperty_AddShaderVariable_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddShaderVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  char *temp0 = NULL;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->AddShaderVariable(temp0, temp1, temp2);
      }
    else
      {
      op->vtkProperty::AddShaderVariable(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkProperty_AddShaderVariable_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddShaderVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  char *temp0 = NULL;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->AddShaderVariable(temp0, temp1, temp2);
      }
    else
      {
      op->vtkProperty::AddShaderVariable(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkProperty_AddShaderVariable_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddShaderVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  char *temp0 = NULL;
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
      op->AddShaderVariable(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkProperty::AddShaderVariable(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkProperty_AddShaderVariable_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddShaderVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  char *temp0 = NULL;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->AddShaderVariable(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkProperty::AddShaderVariable(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkProperty_AddShaderVariable_Methods[] = {
  {NULL, PyvtkProperty_AddShaderVariable_s1, 1,
   (char*)"@zi"},
  {NULL, PyvtkProperty_AddShaderVariable_s2, 1,
   (char*)"@zd"},
  {NULL, PyvtkProperty_AddShaderVariable_s3, 1,
   (char*)"@zii"},
  {NULL, PyvtkProperty_AddShaderVariable_s4, 1,
   (char*)"@zdd"},
  {NULL, PyvtkProperty_AddShaderVariable_s5, 1,
   (char*)"@ziii"},
  {NULL, PyvtkProperty_AddShaderVariable_s6, 1,
   (char*)"@zddd"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkProperty_AddShaderVariable(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkProperty_AddShaderVariable_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
    case 3:
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddShaderVariable");
  return NULL;
}



static PyObject *
PyvtkProperty_SetTexture_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  char *temp0 = NULL;
  vtkTexture *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkTexture"))
    {
    if (ap.IsBound())
      {
      op->SetTexture(temp0, temp1);
      }
    else
      {
      op->vtkProperty::SetTexture(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkProperty_SetTexture_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  int temp0;
  vtkTexture *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkTexture"))
    {
    if (ap.IsBound())
      {
      op->SetTexture(temp0, temp1);
      }
    else
      {
      op->vtkProperty::SetTexture(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkProperty_SetTexture_Methods[] = {
  {NULL, PyvtkProperty_SetTexture_s1, 1,
   (char*)"@zO *vtkTexture"},
  {NULL, PyvtkProperty_SetTexture_s2, 1,
   (char*)"@iO *vtkTexture"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkProperty_SetTexture(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkProperty_SetTexture_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTexture");
  return NULL;
}



static PyObject *
PyvtkProperty_GetTexture_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  char *temp0 = NULL;
  vtkTexture *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTexture(temp0);
      }
    else
      {
      tempr = op->vtkProperty::GetTexture(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkProperty_GetTexture_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  int temp0;
  vtkTexture *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTexture(temp0);
      }
    else
      {
      tempr = op->vtkProperty::GetTexture(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkProperty_GetTexture_Methods[] = {
  {NULL, PyvtkProperty_GetTexture_s1, 1,
   (char*)"@z"},
  {NULL, PyvtkProperty_GetTexture_s2, 1,
   (char*)"@i"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkProperty_GetTexture(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkProperty_GetTexture_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetTexture");
  return NULL;
}



static PyObject *
PyvtkProperty_RemoveTexture_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveTexture(temp0);
      }
    else
      {
      op->vtkProperty::RemoveTexture(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkProperty_RemoveTexture_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveTexture(temp0);
      }
    else
      {
      op->vtkProperty::RemoveTexture(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkProperty_RemoveTexture_Methods[] = {
  {NULL, PyvtkProperty_RemoveTexture_s1, 1,
   (char*)"@i"},
  {NULL, PyvtkProperty_RemoveTexture_s2, 1,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkProperty_RemoveTexture(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkProperty_RemoveTexture_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RemoveTexture");
  return NULL;
}



static PyObject *
PyvtkProperty_RemoveAllTextures(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllTextures");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllTextures();
      }
    else
      {
      op->vtkProperty::RemoveAllTextures();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_GetNumberOfTextures(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTextures");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfTextures();
      }
    else
      {
      tempr = op->vtkProperty::GetNumberOfTextures();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

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
      op->vtkProperty::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkProperty_Methods[] = {
  {(char*)"GetClassName", PyvtkProperty_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkProperty_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkProperty_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkProperty\nC++: vtkProperty *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkProperty_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkProperty\nC++: vtkProperty *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"DeepCopy", PyvtkProperty_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkProperty)\nC++: void DeepCopy(vtkProperty *p)\n\nAssign one property to another.\n"},
  {(char*)"Render", PyvtkProperty_Render, 1,
   (char*)"V.Render(vtkActor, vtkRenderer)\nC++: virtual void Render(vtkActor *, vtkRenderer *)\n\nThis method causes the property to set up whatever is required\nfor its instance variables. This is actually handled by a\nsubclass of vtkProperty, which is created automatically. This\nmethod includes the invoking actor as an argument which can be\nused by property devices that require the actor.\n"},
  {(char*)"BackfaceRender", PyvtkProperty_BackfaceRender, 1,
   (char*)"V.BackfaceRender(vtkActor, vtkRenderer)\nC++: virtual void BackfaceRender(vtkActor *, vtkRenderer *)\n\nThis method renders the property as a backface property.\nTwoSidedLighting must be turned off to see any backface\nproperties. Note that only colors and opacity are used for\nbackface properties. Other properties such as Representation,\nCulling are specified by the Property.\n"},
  {(char*)"PostRender", PyvtkProperty_PostRender, 1,
   (char*)"V.PostRender(vtkActor, vtkRenderer)\nC++: virtual void PostRender(vtkActor *, vtkRenderer *)\n\nThis method is called after the actor has been rendered. Don't\ncall this directly. This method cleans up any shaders allocated.\n"},
  {(char*)"GetLighting", PyvtkProperty_GetLighting, 1,
   (char*)"V.GetLighting() -> bool\nC++: bool GetLighting()\n\nSet/Get lighting flag for an object. Initial value is true.\n"},
  {(char*)"SetLighting", PyvtkProperty_SetLighting, 1,
   (char*)"V.SetLighting(bool)\nC++: void SetLighting(bool a)\n\nSet/Get lighting flag for an object. Initial value is true.\n"},
  {(char*)"LightingOn", PyvtkProperty_LightingOn, 1,
   (char*)"V.LightingOn()\nC++: void LightingOn()\n\nSet/Get lighting flag for an object. Initial value is true.\n"},
  {(char*)"LightingOff", PyvtkProperty_LightingOff, 1,
   (char*)"V.LightingOff()\nC++: void LightingOff()\n\nSet/Get lighting flag for an object. Initial value is true.\n"},
  {(char*)"SetInterpolation", PyvtkProperty_SetInterpolation, 1,
   (char*)"V.SetInterpolation(int)\nC++: void SetInterpolation(int)\n\nSet the shading interpolation method for an object.\n"},
  {(char*)"GetInterpolationMinValue", PyvtkProperty_GetInterpolationMinValue, 1,
   (char*)"V.GetInterpolationMinValue() -> int\nC++: int GetInterpolationMinValue()\n\nSet the shading interpolation method for an object.\n"},
  {(char*)"GetInterpolationMaxValue", PyvtkProperty_GetInterpolationMaxValue, 1,
   (char*)"V.GetInterpolationMaxValue() -> int\nC++: int GetInterpolationMaxValue()\n\nSet the shading interpolation method for an object.\n"},
  {(char*)"GetInterpolation", PyvtkProperty_GetInterpolation, 1,
   (char*)"V.GetInterpolation() -> int\nC++: int GetInterpolation()\n\nSet the shading interpolation method for an object.\n"},
  {(char*)"SetInterpolationToFlat", PyvtkProperty_SetInterpolationToFlat, 1,
   (char*)"V.SetInterpolationToFlat()\nC++: void SetInterpolationToFlat()\n\nSet the shading interpolation method for an object.\n"},
  {(char*)"SetInterpolationToGouraud", PyvtkProperty_SetInterpolationToGouraud, 1,
   (char*)"V.SetInterpolationToGouraud()\nC++: void SetInterpolationToGouraud()\n\nSet the shading interpolation method for an object.\n"},
  {(char*)"SetInterpolationToPhong", PyvtkProperty_SetInterpolationToPhong, 1,
   (char*)"V.SetInterpolationToPhong()\nC++: void SetInterpolationToPhong()\n\nSet the shading interpolation method for an object.\n"},
  {(char*)"GetInterpolationAsString", PyvtkProperty_GetInterpolationAsString, 1,
   (char*)"V.GetInterpolationAsString() -> string\nC++: const char *GetInterpolationAsString()\n\nSet the shading interpolation method for an object.\n"},
  {(char*)"SetRepresentation", PyvtkProperty_SetRepresentation, 1,
   (char*)"V.SetRepresentation(int)\nC++: void SetRepresentation(int)\n\nControl the surface geometry representation for the object.\n"},
  {(char*)"GetRepresentationMinValue", PyvtkProperty_GetRepresentationMinValue, 1,
   (char*)"V.GetRepresentationMinValue() -> int\nC++: int GetRepresentationMinValue()\n\nControl the surface geometry representation for the object.\n"},
  {(char*)"GetRepresentationMaxValue", PyvtkProperty_GetRepresentationMaxValue, 1,
   (char*)"V.GetRepresentationMaxValue() -> int\nC++: int GetRepresentationMaxValue()\n\nControl the surface geometry representation for the object.\n"},
  {(char*)"GetRepresentation", PyvtkProperty_GetRepresentation, 1,
   (char*)"V.GetRepresentation() -> int\nC++: int GetRepresentation()\n\nControl the surface geometry representation for the object.\n"},
  {(char*)"SetRepresentationToPoints", PyvtkProperty_SetRepresentationToPoints, 1,
   (char*)"V.SetRepresentationToPoints()\nC++: void SetRepresentationToPoints()\n\nControl the surface geometry representation for the object.\n"},
  {(char*)"SetRepresentationToWireframe", PyvtkProperty_SetRepresentationToWireframe, 1,
   (char*)"V.SetRepresentationToWireframe()\nC++: void SetRepresentationToWireframe()\n\nControl the surface geometry representation for the object.\n"},
  {(char*)"SetRepresentationToSurface", PyvtkProperty_SetRepresentationToSurface, 1,
   (char*)"V.SetRepresentationToSurface()\nC++: void SetRepresentationToSurface()\n\nControl the surface geometry representation for the object.\n"},
  {(char*)"GetRepresentationAsString", PyvtkProperty_GetRepresentationAsString, 1,
   (char*)"V.GetRepresentationAsString() -> string\nC++: const char *GetRepresentationAsString()\n\nControl the surface geometry representation for the object.\n"},
  {(char*)"SetColor", PyvtkProperty_SetColor, 1,
   (char*)"V.SetColor(float, float, float)\nC++: void SetColor(double r, double g, double b)\nV.SetColor([float, float, float])\nC++: void SetColor(double a[3])\n\nSet the color of the object. Has the side effect of setting the\nambient diffuse and specular colors as well. This is basically a\nquick overall color setting method.\n"},
  {(char*)"GetColor", PyvtkProperty_GetColor, 1,
   (char*)"V.GetColor() -> (float, float, float)\nC++: double *GetColor()\nV.GetColor([float, float, float])\nC++: void GetColor(double rgb[3])\nV.GetColor(float, float, float)\nC++: void GetColor(double &r, double &g, double &b)\n\nSet the color of the object. Has the side effect of setting the\nambient diffuse and specular colors as well. This is basically a\nquick overall color setting method.\n"},
  {(char*)"SetAmbient", PyvtkProperty_SetAmbient, 1,
   (char*)"V.SetAmbient(float)\nC++: void SetAmbient(double)\n\nSet/Get the ambient lighting coefficient.\n"},
  {(char*)"GetAmbientMinValue", PyvtkProperty_GetAmbientMinValue, 1,
   (char*)"V.GetAmbientMinValue() -> float\nC++: double GetAmbientMinValue()\n\nSet/Get the ambient lighting coefficient.\n"},
  {(char*)"GetAmbientMaxValue", PyvtkProperty_GetAmbientMaxValue, 1,
   (char*)"V.GetAmbientMaxValue() -> float\nC++: double GetAmbientMaxValue()\n\nSet/Get the ambient lighting coefficient.\n"},
  {(char*)"GetAmbient", PyvtkProperty_GetAmbient, 1,
   (char*)"V.GetAmbient() -> float\nC++: double GetAmbient()\n\nSet/Get the ambient lighting coefficient.\n"},
  {(char*)"SetDiffuse", PyvtkProperty_SetDiffuse, 1,
   (char*)"V.SetDiffuse(float)\nC++: void SetDiffuse(double)\n\nSet/Get the diffuse lighting coefficient.\n"},
  {(char*)"GetDiffuseMinValue", PyvtkProperty_GetDiffuseMinValue, 1,
   (char*)"V.GetDiffuseMinValue() -> float\nC++: double GetDiffuseMinValue()\n\nSet/Get the diffuse lighting coefficient.\n"},
  {(char*)"GetDiffuseMaxValue", PyvtkProperty_GetDiffuseMaxValue, 1,
   (char*)"V.GetDiffuseMaxValue() -> float\nC++: double GetDiffuseMaxValue()\n\nSet/Get the diffuse lighting coefficient.\n"},
  {(char*)"GetDiffuse", PyvtkProperty_GetDiffuse, 1,
   (char*)"V.GetDiffuse() -> float\nC++: double GetDiffuse()\n\nSet/Get the diffuse lighting coefficient.\n"},
  {(char*)"SetSpecular", PyvtkProperty_SetSpecular, 1,
   (char*)"V.SetSpecular(float)\nC++: void SetSpecular(double)\n\nSet/Get the specular lighting coefficient.\n"},
  {(char*)"GetSpecularMinValue", PyvtkProperty_GetSpecularMinValue, 1,
   (char*)"V.GetSpecularMinValue() -> float\nC++: double GetSpecularMinValue()\n\nSet/Get the specular lighting coefficient.\n"},
  {(char*)"GetSpecularMaxValue", PyvtkProperty_GetSpecularMaxValue, 1,
   (char*)"V.GetSpecularMaxValue() -> float\nC++: double GetSpecularMaxValue()\n\nSet/Get the specular lighting coefficient.\n"},
  {(char*)"GetSpecular", PyvtkProperty_GetSpecular, 1,
   (char*)"V.GetSpecular() -> float\nC++: double GetSpecular()\n\nSet/Get the specular lighting coefficient.\n"},
  {(char*)"SetSpecularPower", PyvtkProperty_SetSpecularPower, 1,
   (char*)"V.SetSpecularPower(float)\nC++: void SetSpecularPower(double)\n\nSet/Get the specular power.\n"},
  {(char*)"GetSpecularPowerMinValue", PyvtkProperty_GetSpecularPowerMinValue, 1,
   (char*)"V.GetSpecularPowerMinValue() -> float\nC++: double GetSpecularPowerMinValue()\n\nSet/Get the specular power.\n"},
  {(char*)"GetSpecularPowerMaxValue", PyvtkProperty_GetSpecularPowerMaxValue, 1,
   (char*)"V.GetSpecularPowerMaxValue() -> float\nC++: double GetSpecularPowerMaxValue()\n\nSet/Get the specular power.\n"},
  {(char*)"GetSpecularPower", PyvtkProperty_GetSpecularPower, 1,
   (char*)"V.GetSpecularPower() -> float\nC++: double GetSpecularPower()\n\nSet/Get the specular power.\n"},
  {(char*)"SetOpacity", PyvtkProperty_SetOpacity, 1,
   (char*)"V.SetOpacity(float)\nC++: void SetOpacity(double)\n\nSet/Get the object's opacity. 1.0 is totally opaque and 0.0 is\ncompletely transparent.\n"},
  {(char*)"GetOpacityMinValue", PyvtkProperty_GetOpacityMinValue, 1,
   (char*)"V.GetOpacityMinValue() -> float\nC++: double GetOpacityMinValue()\n\nSet/Get the object's opacity. 1.0 is totally opaque and 0.0 is\ncompletely transparent.\n"},
  {(char*)"GetOpacityMaxValue", PyvtkProperty_GetOpacityMaxValue, 1,
   (char*)"V.GetOpacityMaxValue() -> float\nC++: double GetOpacityMaxValue()\n\nSet/Get the object's opacity. 1.0 is totally opaque and 0.0 is\ncompletely transparent.\n"},
  {(char*)"GetOpacity", PyvtkProperty_GetOpacity, 1,
   (char*)"V.GetOpacity() -> float\nC++: double GetOpacity()\n\nSet/Get the object's opacity. 1.0 is totally opaque and 0.0 is\ncompletely transparent.\n"},
  {(char*)"SetAmbientColor", PyvtkProperty_SetAmbientColor, 1,
   (char*)"V.SetAmbientColor(float, float, float)\nC++: void SetAmbientColor(double, double, double)\nV.SetAmbientColor((float, float, float))\nC++: void SetAmbientColor(double a[3])\n\n"},
  {(char*)"GetAmbientColor", PyvtkProperty_GetAmbientColor, 1,
   (char*)"V.GetAmbientColor() -> (float, float, float)\nC++: double *GetAmbientColor()\n\n"},
  {(char*)"SetDiffuseColor", PyvtkProperty_SetDiffuseColor, 1,
   (char*)"V.SetDiffuseColor(float, float, float)\nC++: void SetDiffuseColor(double, double, double)\nV.SetDiffuseColor((float, float, float))\nC++: void SetDiffuseColor(double a[3])\n\n"},
  {(char*)"GetDiffuseColor", PyvtkProperty_GetDiffuseColor, 1,
   (char*)"V.GetDiffuseColor() -> (float, float, float)\nC++: double *GetDiffuseColor()\n\n"},
  {(char*)"SetSpecularColor", PyvtkProperty_SetSpecularColor, 1,
   (char*)"V.SetSpecularColor(float, float, float)\nC++: void SetSpecularColor(double, double, double)\nV.SetSpecularColor((float, float, float))\nC++: void SetSpecularColor(double a[3])\n\n"},
  {(char*)"GetSpecularColor", PyvtkProperty_GetSpecularColor, 1,
   (char*)"V.GetSpecularColor() -> (float, float, float)\nC++: double *GetSpecularColor()\n\n"},
  {(char*)"GetEdgeVisibility", PyvtkProperty_GetEdgeVisibility, 1,
   (char*)"V.GetEdgeVisibility() -> int\nC++: int GetEdgeVisibility()\n\nTurn on/off the visibility of edges. On some renderers it is\npossible to render the edges of geometric primitives separately\nfrom the interior.\n"},
  {(char*)"SetEdgeVisibility", PyvtkProperty_SetEdgeVisibility, 1,
   (char*)"V.SetEdgeVisibility(int)\nC++: void SetEdgeVisibility(int a)\n\nTurn on/off the visibility of edges. On some renderers it is\npossible to render the edges of geometric primitives separately\nfrom the interior.\n"},
  {(char*)"EdgeVisibilityOn", PyvtkProperty_EdgeVisibilityOn, 1,
   (char*)"V.EdgeVisibilityOn()\nC++: void EdgeVisibilityOn()\n\nTurn on/off the visibility of edges. On some renderers it is\npossible to render the edges of geometric primitives separately\nfrom the interior.\n"},
  {(char*)"EdgeVisibilityOff", PyvtkProperty_EdgeVisibilityOff, 1,
   (char*)"V.EdgeVisibilityOff()\nC++: void EdgeVisibilityOff()\n\nTurn on/off the visibility of edges. On some renderers it is\npossible to render the edges of geometric primitives separately\nfrom the interior.\n"},
  {(char*)"SetEdgeColor", PyvtkProperty_SetEdgeColor, 1,
   (char*)"V.SetEdgeColor(float, float, float)\nC++: void SetEdgeColor(double, double, double)\nV.SetEdgeColor((float, float, float))\nC++: void SetEdgeColor(double a[3])\n\n"},
  {(char*)"GetEdgeColor", PyvtkProperty_GetEdgeColor, 1,
   (char*)"V.GetEdgeColor() -> (float, float, float)\nC++: double *GetEdgeColor()\n\n"},
  {(char*)"SetLineWidth", PyvtkProperty_SetLineWidth, 1,
   (char*)"V.SetLineWidth(float)\nC++: void SetLineWidth(float)\n\nSet/Get the width of a Line. The width is expressed in screen\nunits. This is only implemented for OpenGL. The default is 1.0.\n"},
  {(char*)"GetLineWidthMinValue", PyvtkProperty_GetLineWidthMinValue, 1,
   (char*)"V.GetLineWidthMinValue() -> float\nC++: float GetLineWidthMinValue()\n\nSet/Get the width of a Line. The width is expressed in screen\nunits. This is only implemented for OpenGL. The default is 1.0.\n"},
  {(char*)"GetLineWidthMaxValue", PyvtkProperty_GetLineWidthMaxValue, 1,
   (char*)"V.GetLineWidthMaxValue() -> float\nC++: float GetLineWidthMaxValue()\n\nSet/Get the width of a Line. The width is expressed in screen\nunits. This is only implemented for OpenGL. The default is 1.0.\n"},
  {(char*)"GetLineWidth", PyvtkProperty_GetLineWidth, 1,
   (char*)"V.GetLineWidth() -> float\nC++: float GetLineWidth()\n\nSet/Get the width of a Line. The width is expressed in screen\nunits. This is only implemented for OpenGL. The default is 1.0.\n"},
  {(char*)"SetLineStipplePattern", PyvtkProperty_SetLineStipplePattern, 1,
   (char*)"V.SetLineStipplePattern(int)\nC++: void SetLineStipplePattern(int a)\n\nSet/Get the stippling pattern of a Line, as a 16-bit binary\npattern (1 = pixel on, 0 = pixel off). This is only implemented\nfor OpenGL. The default is 0xFFFF.\n"},
  {(char*)"GetLineStipplePattern", PyvtkProperty_GetLineStipplePattern, 1,
   (char*)"V.GetLineStipplePattern() -> int\nC++: int GetLineStipplePattern()\n\nSet/Get the stippling pattern of a Line, as a 16-bit binary\npattern (1 = pixel on, 0 = pixel off). This is only implemented\nfor OpenGL. The default is 0xFFFF.\n"},
  {(char*)"SetLineStippleRepeatFactor", PyvtkProperty_SetLineStippleRepeatFactor, 1,
   (char*)"V.SetLineStippleRepeatFactor(int)\nC++: void SetLineStippleRepeatFactor(int)\n\nSet/Get the stippling repeat factor of a Line, which specifies\nhow many times each bit in the pattern is to be repeated. This is\nonly implemented for OpenGL. The default is 1.\n"},
  {(char*)"GetLineStippleRepeatFactorMinValue", PyvtkProperty_GetLineStippleRepeatFactorMinValue, 1,
   (char*)"V.GetLineStippleRepeatFactorMinValue() -> int\nC++: int GetLineStippleRepeatFactorMinValue()\n\nSet/Get the stippling repeat factor of a Line, which specifies\nhow many times each bit in the pattern is to be repeated. This is\nonly implemented for OpenGL. The default is 1.\n"},
  {(char*)"GetLineStippleRepeatFactorMaxValue", PyvtkProperty_GetLineStippleRepeatFactorMaxValue, 1,
   (char*)"V.GetLineStippleRepeatFactorMaxValue() -> int\nC++: int GetLineStippleRepeatFactorMaxValue()\n\nSet/Get the stippling repeat factor of a Line, which specifies\nhow many times each bit in the pattern is to be repeated. This is\nonly implemented for OpenGL. The default is 1.\n"},
  {(char*)"GetLineStippleRepeatFactor", PyvtkProperty_GetLineStippleRepeatFactor, 1,
   (char*)"V.GetLineStippleRepeatFactor() -> int\nC++: int GetLineStippleRepeatFactor()\n\nSet/Get the stippling repeat factor of a Line, which specifies\nhow many times each bit in the pattern is to be repeated. This is\nonly implemented for OpenGL. The default is 1.\n"},
  {(char*)"SetPointSize", PyvtkProperty_SetPointSize, 1,
   (char*)"V.SetPointSize(float)\nC++: void SetPointSize(float)\n\nSet/Get the diameter of a point. The size is expressed in screen\nunits. This is only implemented for OpenGL. The default is 1.0.\n"},
  {(char*)"GetPointSizeMinValue", PyvtkProperty_GetPointSizeMinValue, 1,
   (char*)"V.GetPointSizeMinValue() -> float\nC++: float GetPointSizeMinValue()\n\nSet/Get the diameter of a point. The size is expressed in screen\nunits. This is only implemented for OpenGL. The default is 1.0.\n"},
  {(char*)"GetPointSizeMaxValue", PyvtkProperty_GetPointSizeMaxValue, 1,
   (char*)"V.GetPointSizeMaxValue() -> float\nC++: float GetPointSizeMaxValue()\n\nSet/Get the diameter of a point. The size is expressed in screen\nunits. This is only implemented for OpenGL. The default is 1.0.\n"},
  {(char*)"GetPointSize", PyvtkProperty_GetPointSize, 1,
   (char*)"V.GetPointSize() -> float\nC++: float GetPointSize()\n\nSet/Get the diameter of a point. The size is expressed in screen\nunits. This is only implemented for OpenGL. The default is 1.0.\n"},
  {(char*)"GetBackfaceCulling", PyvtkProperty_GetBackfaceCulling, 1,
   (char*)"V.GetBackfaceCulling() -> int\nC++: int GetBackfaceCulling()\n\nTurn on/off fast culling of polygons based on orientation of\nnormal with respect to camera. If backface culling is on,\npolygons facing away from camera are not drawn.\n"},
  {(char*)"SetBackfaceCulling", PyvtkProperty_SetBackfaceCulling, 1,
   (char*)"V.SetBackfaceCulling(int)\nC++: void SetBackfaceCulling(int a)\n\nTurn on/off fast culling of polygons based on orientation of\nnormal with respect to camera. If backface culling is on,\npolygons facing away from camera are not drawn.\n"},
  {(char*)"BackfaceCullingOn", PyvtkProperty_BackfaceCullingOn, 1,
   (char*)"V.BackfaceCullingOn()\nC++: void BackfaceCullingOn()\n\nTurn on/off fast culling of polygons based on orientation of\nnormal with respect to camera. If backface culling is on,\npolygons facing away from camera are not drawn.\n"},
  {(char*)"BackfaceCullingOff", PyvtkProperty_BackfaceCullingOff, 1,
   (char*)"V.BackfaceCullingOff()\nC++: void BackfaceCullingOff()\n\nTurn on/off fast culling of polygons based on orientation of\nnormal with respect to camera. If backface culling is on,\npolygons facing away from camera are not drawn.\n"},
  {(char*)"GetFrontfaceCulling", PyvtkProperty_GetFrontfaceCulling, 1,
   (char*)"V.GetFrontfaceCulling() -> int\nC++: int GetFrontfaceCulling()\n\nTurn on/off fast culling of polygons based on orientation of\nnormal with respect to camera. If frontface culling is on,\npolygons facing towards camera are not drawn.\n"},
  {(char*)"SetFrontfaceCulling", PyvtkProperty_SetFrontfaceCulling, 1,
   (char*)"V.SetFrontfaceCulling(int)\nC++: void SetFrontfaceCulling(int a)\n\nTurn on/off fast culling of polygons based on orientation of\nnormal with respect to camera. If frontface culling is on,\npolygons facing towards camera are not drawn.\n"},
  {(char*)"FrontfaceCullingOn", PyvtkProperty_FrontfaceCullingOn, 1,
   (char*)"V.FrontfaceCullingOn()\nC++: void FrontfaceCullingOn()\n\nTurn on/off fast culling of polygons based on orientation of\nnormal with respect to camera. If frontface culling is on,\npolygons facing towards camera are not drawn.\n"},
  {(char*)"FrontfaceCullingOff", PyvtkProperty_FrontfaceCullingOff, 1,
   (char*)"V.FrontfaceCullingOff()\nC++: void FrontfaceCullingOff()\n\nTurn on/off fast culling of polygons based on orientation of\nnormal with respect to camera. If frontface culling is on,\npolygons facing towards camera are not drawn.\n"},
  {(char*)"GetMaterial", PyvtkProperty_GetMaterial, 1,
   (char*)"V.GetMaterial() -> vtkXMLMaterial\nC++: vtkXMLMaterial *GetMaterial()\n\nGet the material representation used for shading. The material\nwill be used only when shading is enabled.\n"},
  {(char*)"GetMaterialName", PyvtkProperty_GetMaterialName, 1,
   (char*)"V.GetMaterialName() -> string\nC++: char *GetMaterialName()\n\nReturns the name of the material currenly loaded, if any.\n"},
  {(char*)"LoadMaterial", PyvtkProperty_LoadMaterial, 1,
   (char*)"V.LoadMaterial(string)\nC++: void LoadMaterial(const char *name)\nV.LoadMaterial(vtkXMLMaterial)\nC++: void LoadMaterial(vtkXMLMaterial *)\n\nLoad the material. The material can be the name of a built-on\nmaterial or the filename for a VTK material XML description.\n"},
  {(char*)"LoadMaterialFromString", PyvtkProperty_LoadMaterialFromString, 1,
   (char*)"V.LoadMaterialFromString(string)\nC++: void LoadMaterialFromString(const char *materialxml)\n\nLoad the material given the contents of the material file.\n"},
  {(char*)"SetShading", PyvtkProperty_SetShading, 1,
   (char*)"V.SetShading(int)\nC++: void SetShading(int a)\n\nEnable/Disable shading. When shading is enabled, the Material\nmust be set.\n"},
  {(char*)"GetShading", PyvtkProperty_GetShading, 1,
   (char*)"V.GetShading() -> int\nC++: int GetShading()\n\nEnable/Disable shading. When shading is enabled, the Material\nmust be set.\n"},
  {(char*)"ShadingOn", PyvtkProperty_ShadingOn, 1,
   (char*)"V.ShadingOn()\nC++: void ShadingOn()\n\nEnable/Disable shading. When shading is enabled, the Material\nmust be set.\n"},
  {(char*)"ShadingOff", PyvtkProperty_ShadingOff, 1,
   (char*)"V.ShadingOff()\nC++: void ShadingOff()\n\nEnable/Disable shading. When shading is enabled, the Material\nmust be set.\n"},
  {(char*)"GetShaderProgram", PyvtkProperty_GetShaderProgram, 1,
   (char*)"V.GetShaderProgram() -> vtkShaderProgram\nC++: vtkShaderProgram *GetShaderProgram()\n\nGet the Shader program. If Material is not set/or not loaded\nproperly, this will return null.\n"},
  {(char*)"AddShaderVariable", PyvtkProperty_AddShaderVariable, 1,
   (char*)"V.AddShaderVariable(string, int)\nC++: void AddShaderVariable(const char *name, int v)\nV.AddShaderVariable(string, float)\nC++: void AddShaderVariable(const char *name, double v)\nV.AddShaderVariable(string, int, int)\nC++: void AddShaderVariable(const char *name, int v1, int v2)\nV.AddShaderVariable(string, float, float)\nC++: void AddShaderVariable(const char *name, double v1,\n    double v2)\nV.AddShaderVariable(string, int, int, int)\nC++: void AddShaderVariable(const char *name, int v1, int v2,\n    int v3)\nV.AddShaderVariable(string, float, float, float)\nC++: void AddShaderVariable(const char *name, double v1,\n    double v2, double v3)\n\nMethods to provide to add shader variables from tcl.\n"},
  {(char*)"SetTexture", PyvtkProperty_SetTexture, 1,
   (char*)"V.SetTexture(string, vtkTexture)\nC++: void SetTexture(const char *name, vtkTexture *texture)\nV.SetTexture(int, vtkTexture)\nC++: void SetTexture(int unit, vtkTexture *texture)\n\nSet/Get the texture object to control rendering texture maps. \nThis will be a vtkTexture object. A property does not need to\nhave an associated texture map and multiple properties can share\none texture. Textures must be assigned unique names.\n"},
  {(char*)"GetTexture", PyvtkProperty_GetTexture, 1,
   (char*)"V.GetTexture(string) -> vtkTexture\nC++: vtkTexture *GetTexture(const char *name)\nV.GetTexture(int) -> vtkTexture\nC++: vtkTexture *GetTexture(int unit)\n\nSet/Get the texture object to control rendering texture maps. \nThis will be a vtkTexture object. A property does not need to\nhave an associated texture map and multiple properties can share\none texture. Textures must be assigned unique names.\n"},
  {(char*)"RemoveTexture", PyvtkProperty_RemoveTexture, 1,
   (char*)"V.RemoveTexture(int)\nC++: void RemoveTexture(int unit)\nV.RemoveTexture(string)\nC++: void RemoveTexture(const char *name)\n\nSet/Get the texture object to control rendering texture maps. \nThis will be a vtkTexture object. A property does not need to\nhave an associated texture map and multiple properties can share\none texture. Textures must be assigned unique names.\n"},
  {(char*)"RemoveAllTextures", PyvtkProperty_RemoveAllTextures, 1,
   (char*)"V.RemoveAllTextures()\nC++: void RemoveAllTextures()\n\nRemove all the textures.\n"},
  {(char*)"GetNumberOfTextures", PyvtkProperty_GetNumberOfTextures, 1,
   (char*)"V.GetNumberOfTextures() -> int\nC++: int GetNumberOfTextures()\n\nReturns the number of textures in this property.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkProperty_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *win)\n\nRelease any graphics resources that are being consumed by this\nproperty. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkProperty_StaticNew()
{
  return vtkProperty::New();
}

PyObject *PyVTKClass_vtkPropertyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkProperty_StaticNew,
    PyvtkProperty_Methods,
    "vtkProperty", modulename,
    NULL, NULL,
    PyvtkProperty_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"VTK_TEXTURE_UNIT_0", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"VTK_TEXTURE_UNIT_1", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"VTK_TEXTURE_UNIT_2", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"VTK_TEXTURE_UNIT_3", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"VTK_TEXTURE_UNIT_4", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(5);
    if (o && PyDict_SetItemString(d, (char *)"VTK_TEXTURE_UNIT_5", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(6);
    if (o && PyDict_SetItemString(d, (char *)"VTK_TEXTURE_UNIT_6", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(7);
    if (o && PyDict_SetItemString(d, (char *)"VTK_TEXTURE_UNIT_7", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkProperty_Doc()
{
  static const char *docstring[] = {
    "vtkProperty - represent surface properties of a geometric object\n\n",
    "Superclass: vtkObject\n\n",
    "vtkProperty is an object that represents lighting and other surface\nproperties of a geometric object. The primary properties that can be\nset are colors (overall, ambient, diffuse, specular, and edge color);\nspecular power; opacity of the object; the representation of the\nobject (points, wireframe, or surface); and the shading method to be\nused (flat, Gouraud, and Phong). Also, some special graphic",
    "s features\nlike backface properties can be set and manipulated with this object.\n\nSee Also:\n\nvtkActor vtkPropertyDevice\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkProperty(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPropertyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkProperty", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_FLAT", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_GOURAUD", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_PHONG", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_POINTS", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_WIREFRAME", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SURFACE", o) != 0)
    {
    Py_DECREF(o);
    }

}

