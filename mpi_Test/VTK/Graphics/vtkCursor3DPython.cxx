// python wrapper for vtkCursor3D
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
#include "vtkCursor3D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCursor3D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCursor3D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCursor3DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCursor3DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkCursor3D_Doc();


static PyObject *
PyvtkCursor3D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

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
      tempr = op->vtkCursor3D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCursor3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

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
      tempr = op->vtkCursor3D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCursor3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  vtkCursor3D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCursor3D::NewInstance();
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
PyvtkCursor3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCursor3D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCursor3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCursor3D_SetModelBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetModelBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkCursor3D::SetModelBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCursor3D_SetModelBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

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
      op->SetModelBounds(temp0);
      }
    else
      {
      op->vtkCursor3D::SetModelBounds(temp0);
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
PyvtkCursor3D_SetModelBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkCursor3D_SetModelBounds_s1(self, args);
    case 1:
      return PyvtkCursor3D_SetModelBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetModelBounds");
  return NULL;
}



static PyObject *
PyvtkCursor3D_GetModelBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  double *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetModelBounds();
      }
    else
      {
      tempr = op->vtkCursor3D::GetModelBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCursor3D_SetFocalPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

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
      op->SetFocalPoint(temp0);
      }
    else
      {
      op->vtkCursor3D::SetFocalPoint(temp0);
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
PyvtkCursor3D_SetFocalPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

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
      op->SetFocalPoint(temp0, temp1, temp2);
      }
    else
      {
      op->vtkCursor3D::SetFocalPoint(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCursor3D_SetFocalPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkCursor3D_SetFocalPoint_s1(self, args);
    case 3:
      return PyvtkCursor3D_SetFocalPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetFocalPoint");
  return NULL;
}



static PyObject *
PyvtkCursor3D_GetFocalPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFocalPoint();
      }
    else
      {
      tempr = op->vtkCursor3D::GetFocalPoint();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCursor3D_SetOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutline(temp0);
      }
    else
      {
      op->vtkCursor3D::SetOutline(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCursor3D_GetOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutline();
      }
    else
      {
      tempr = op->vtkCursor3D::GetOutline();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCursor3D_OutlineOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OutlineOn();
      }
    else
      {
      op->vtkCursor3D::OutlineOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCursor3D_OutlineOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OutlineOff();
      }
    else
      {
      op->vtkCursor3D::OutlineOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCursor3D_SetAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAxes(temp0);
      }
    else
      {
      op->vtkCursor3D::SetAxes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCursor3D_GetAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAxes();
      }
    else
      {
      tempr = op->vtkCursor3D::GetAxes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCursor3D_AxesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AxesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AxesOn();
      }
    else
      {
      op->vtkCursor3D::AxesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCursor3D_AxesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AxesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AxesOff();
      }
    else
      {
      op->vtkCursor3D::AxesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCursor3D_SetXShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXShadows(temp0);
      }
    else
      {
      op->vtkCursor3D::SetXShadows(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCursor3D_GetXShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXShadows();
      }
    else
      {
      tempr = op->vtkCursor3D::GetXShadows();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCursor3D_XShadowsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XShadowsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->XShadowsOn();
      }
    else
      {
      op->vtkCursor3D::XShadowsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCursor3D_XShadowsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XShadowsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->XShadowsOff();
      }
    else
      {
      op->vtkCursor3D::XShadowsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCursor3D_SetYShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYShadows(temp0);
      }
    else
      {
      op->vtkCursor3D::SetYShadows(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCursor3D_GetYShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetYShadows();
      }
    else
      {
      tempr = op->vtkCursor3D::GetYShadows();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCursor3D_YShadowsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YShadowsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->YShadowsOn();
      }
    else
      {
      op->vtkCursor3D::YShadowsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCursor3D_YShadowsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YShadowsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->YShadowsOff();
      }
    else
      {
      op->vtkCursor3D::YShadowsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCursor3D_SetZShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZShadows(temp0);
      }
    else
      {
      op->vtkCursor3D::SetZShadows(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCursor3D_GetZShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetZShadows();
      }
    else
      {
      tempr = op->vtkCursor3D::GetZShadows();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCursor3D_ZShadowsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZShadowsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ZShadowsOn();
      }
    else
      {
      op->vtkCursor3D::ZShadowsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCursor3D_ZShadowsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZShadowsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ZShadowsOff();
      }
    else
      {
      op->vtkCursor3D::ZShadowsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCursor3D_SetTranslationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTranslationMode(temp0);
      }
    else
      {
      op->vtkCursor3D::SetTranslationMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCursor3D_GetTranslationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTranslationMode();
      }
    else
      {
      tempr = op->vtkCursor3D::GetTranslationMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCursor3D_TranslationModeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslationModeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TranslationModeOn();
      }
    else
      {
      op->vtkCursor3D::TranslationModeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCursor3D_TranslationModeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslationModeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TranslationModeOff();
      }
    else
      {
      op->vtkCursor3D::TranslationModeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCursor3D_SetWrap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWrap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWrap(temp0);
      }
    else
      {
      op->vtkCursor3D::SetWrap(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCursor3D_GetWrap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWrap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWrap();
      }
    else
      {
      tempr = op->vtkCursor3D::GetWrap();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCursor3D_WrapOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WrapOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WrapOn();
      }
    else
      {
      op->vtkCursor3D::WrapOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCursor3D_WrapOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WrapOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WrapOff();
      }
    else
      {
      op->vtkCursor3D::WrapOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCursor3D_GetFocus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFocus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  vtkPolyData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFocus();
      }
    else
      {
      tempr = op->vtkCursor3D::GetFocus();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCursor3D_AllOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllOn();
      }
    else
      {
      op->vtkCursor3D::AllOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCursor3D_AllOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllOff();
      }
    else
      {
      op->vtkCursor3D::AllOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCursor3D_Methods[] = {
  {(char*)"GetClassName", PyvtkCursor3D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCursor3D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCursor3D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCursor3D\nC++: vtkCursor3D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCursor3D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCursor3D\nC++: vtkCursor3D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetModelBounds", PyvtkCursor3D_SetModelBounds, 1,
   (char*)"V.SetModelBounds(float, float, float, float, float, float)\nC++: void SetModelBounds(double xmin, double xmax, double ymin,\n    double ymax, double zmin, double zmax)\nV.SetModelBounds([float, float, float, float, float, float])\nC++: void SetModelBounds(double bounds[6])\n\nSet / get the boundary of the 3D cursor.\n"},
  {(char*)"GetModelBounds", PyvtkCursor3D_GetModelBounds, 1,
   (char*)"V.GetModelBounds() -> (float, float, float, float, float, float)\nC++: double *GetModelBounds()\n\nSet / get the boundary of the 3D cursor.\n"},
  {(char*)"SetFocalPoint", PyvtkCursor3D_SetFocalPoint, 1,
   (char*)"V.SetFocalPoint([float, float, float])\nC++: void SetFocalPoint(double x[3])\nV.SetFocalPoint(float, float, float)\nC++: void SetFocalPoint(double x, double y, double z)\n\nSet/Get the position of cursor focus. If translation mode is on,\nthen the entire cursor (including bounding box, cursor, and\nshadows) is translated. Otherwise, the focal point will either be\nclamped to the bounding box, or wrapped, if Wrap is on. (Note:\nthis behavior requires that the bounding box is set prior to the\nfocal point.)\n"},
  {(char*)"GetFocalPoint", PyvtkCursor3D_GetFocalPoint, 1,
   (char*)"V.GetFocalPoint() -> (float, float, float)\nC++: double *GetFocalPoint()\n\nSet/Get the position of cursor focus. If translation mode is on,\nthen the entire cursor (including bounding box, cursor, and\nshadows) is translated. Otherwise, the focal point will either be\nclamped to the bounding box, or wrapped, if Wrap is on. (Note:\nthis behavior requires that the bounding box is set prior to the\nfocal point.)\n"},
  {(char*)"SetOutline", PyvtkCursor3D_SetOutline, 1,
   (char*)"V.SetOutline(int)\nC++: void SetOutline(int a)\n\nTurn on/off the wireframe bounding box.\n"},
  {(char*)"GetOutline", PyvtkCursor3D_GetOutline, 1,
   (char*)"V.GetOutline() -> int\nC++: int GetOutline()\n\nTurn on/off the wireframe bounding box.\n"},
  {(char*)"OutlineOn", PyvtkCursor3D_OutlineOn, 1,
   (char*)"V.OutlineOn()\nC++: void OutlineOn()\n\nTurn on/off the wireframe bounding box.\n"},
  {(char*)"OutlineOff", PyvtkCursor3D_OutlineOff, 1,
   (char*)"V.OutlineOff()\nC++: void OutlineOff()\n\nTurn on/off the wireframe bounding box.\n"},
  {(char*)"SetAxes", PyvtkCursor3D_SetAxes, 1,
   (char*)"V.SetAxes(int)\nC++: void SetAxes(int a)\n\nTurn on/off the wireframe axes.\n"},
  {(char*)"GetAxes", PyvtkCursor3D_GetAxes, 1,
   (char*)"V.GetAxes() -> int\nC++: int GetAxes()\n\nTurn on/off the wireframe axes.\n"},
  {(char*)"AxesOn", PyvtkCursor3D_AxesOn, 1,
   (char*)"V.AxesOn()\nC++: void AxesOn()\n\nTurn on/off the wireframe axes.\n"},
  {(char*)"AxesOff", PyvtkCursor3D_AxesOff, 1,
   (char*)"V.AxesOff()\nC++: void AxesOff()\n\nTurn on/off the wireframe axes.\n"},
  {(char*)"SetXShadows", PyvtkCursor3D_SetXShadows, 1,
   (char*)"V.SetXShadows(int)\nC++: void SetXShadows(int a)\n\nTurn on/off the wireframe x-shadows.\n"},
  {(char*)"GetXShadows", PyvtkCursor3D_GetXShadows, 1,
   (char*)"V.GetXShadows() -> int\nC++: int GetXShadows()\n\nTurn on/off the wireframe x-shadows.\n"},
  {(char*)"XShadowsOn", PyvtkCursor3D_XShadowsOn, 1,
   (char*)"V.XShadowsOn()\nC++: void XShadowsOn()\n\nTurn on/off the wireframe x-shadows.\n"},
  {(char*)"XShadowsOff", PyvtkCursor3D_XShadowsOff, 1,
   (char*)"V.XShadowsOff()\nC++: void XShadowsOff()\n\nTurn on/off the wireframe x-shadows.\n"},
  {(char*)"SetYShadows", PyvtkCursor3D_SetYShadows, 1,
   (char*)"V.SetYShadows(int)\nC++: void SetYShadows(int a)\n\nTurn on/off the wireframe y-shadows.\n"},
  {(char*)"GetYShadows", PyvtkCursor3D_GetYShadows, 1,
   (char*)"V.GetYShadows() -> int\nC++: int GetYShadows()\n\nTurn on/off the wireframe y-shadows.\n"},
  {(char*)"YShadowsOn", PyvtkCursor3D_YShadowsOn, 1,
   (char*)"V.YShadowsOn()\nC++: void YShadowsOn()\n\nTurn on/off the wireframe y-shadows.\n"},
  {(char*)"YShadowsOff", PyvtkCursor3D_YShadowsOff, 1,
   (char*)"V.YShadowsOff()\nC++: void YShadowsOff()\n\nTurn on/off the wireframe y-shadows.\n"},
  {(char*)"SetZShadows", PyvtkCursor3D_SetZShadows, 1,
   (char*)"V.SetZShadows(int)\nC++: void SetZShadows(int a)\n\nTurn on/off the wireframe z-shadows.\n"},
  {(char*)"GetZShadows", PyvtkCursor3D_GetZShadows, 1,
   (char*)"V.GetZShadows() -> int\nC++: int GetZShadows()\n\nTurn on/off the wireframe z-shadows.\n"},
  {(char*)"ZShadowsOn", PyvtkCursor3D_ZShadowsOn, 1,
   (char*)"V.ZShadowsOn()\nC++: void ZShadowsOn()\n\nTurn on/off the wireframe z-shadows.\n"},
  {(char*)"ZShadowsOff", PyvtkCursor3D_ZShadowsOff, 1,
   (char*)"V.ZShadowsOff()\nC++: void ZShadowsOff()\n\nTurn on/off the wireframe z-shadows.\n"},
  {(char*)"SetTranslationMode", PyvtkCursor3D_SetTranslationMode, 1,
   (char*)"V.SetTranslationMode(int)\nC++: void SetTranslationMode(int a)\n\nEnable/disable the translation mode. If on, changes in cursor\nposition cause the entire widget to translate along with the\ncursor. By default, translation mode is off.\n"},
  {(char*)"GetTranslationMode", PyvtkCursor3D_GetTranslationMode, 1,
   (char*)"V.GetTranslationMode() -> int\nC++: int GetTranslationMode()\n\nEnable/disable the translation mode. If on, changes in cursor\nposition cause the entire widget to translate along with the\ncursor. By default, translation mode is off.\n"},
  {(char*)"TranslationModeOn", PyvtkCursor3D_TranslationModeOn, 1,
   (char*)"V.TranslationModeOn()\nC++: void TranslationModeOn()\n\nEnable/disable the translation mode. If on, changes in cursor\nposition cause the entire widget to translate along with the\ncursor. By default, translation mode is off.\n"},
  {(char*)"TranslationModeOff", PyvtkCursor3D_TranslationModeOff, 1,
   (char*)"V.TranslationModeOff()\nC++: void TranslationModeOff()\n\nEnable/disable the translation mode. If on, changes in cursor\nposition cause the entire widget to translate along with the\ncursor. By default, translation mode is off.\n"},
  {(char*)"SetWrap", PyvtkCursor3D_SetWrap, 1,
   (char*)"V.SetWrap(int)\nC++: void SetWrap(int a)\n\nTurn on/off cursor wrapping. If the cursor focus moves outside\nthe specified bounds, the cursor will either be restrained\nagainst the nearest \"wall\" (Wrap=off), or it will wrap around\n(Wrap=on).\n"},
  {(char*)"GetWrap", PyvtkCursor3D_GetWrap, 1,
   (char*)"V.GetWrap() -> int\nC++: int GetWrap()\n\nTurn on/off cursor wrapping. If the cursor focus moves outside\nthe specified bounds, the cursor will either be restrained\nagainst the nearest \"wall\" (Wrap=off), or it will wrap around\n(Wrap=on).\n"},
  {(char*)"WrapOn", PyvtkCursor3D_WrapOn, 1,
   (char*)"V.WrapOn()\nC++: void WrapOn()\n\nTurn on/off cursor wrapping. If the cursor focus moves outside\nthe specified bounds, the cursor will either be restrained\nagainst the nearest \"wall\" (Wrap=off), or it will wrap around\n(Wrap=on).\n"},
  {(char*)"WrapOff", PyvtkCursor3D_WrapOff, 1,
   (char*)"V.WrapOff()\nC++: void WrapOff()\n\nTurn on/off cursor wrapping. If the cursor focus moves outside\nthe specified bounds, the cursor will either be restrained\nagainst the nearest \"wall\" (Wrap=off), or it will wrap around\n(Wrap=on).\n"},
  {(char*)"GetFocus", PyvtkCursor3D_GetFocus, 1,
   (char*)"V.GetFocus() -> vtkPolyData\nC++: vtkPolyData *GetFocus()\n\nGet the focus for this filter.\n"},
  {(char*)"AllOn", PyvtkCursor3D_AllOn, 1,
   (char*)"V.AllOn()\nC++: void AllOn()\n\nTurn every part of the 3D cursor on or off.\n"},
  {(char*)"AllOff", PyvtkCursor3D_AllOff, 1,
   (char*)"V.AllOff()\nC++: void AllOff()\n\nTurn every part of the 3D cursor on or off.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCursor3D_StaticNew()
{
  return vtkCursor3D::New();
}

PyObject *PyVTKClass_vtkCursor3DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCursor3D_StaticNew,
    PyvtkCursor3D_Methods,
    "vtkCursor3D", modulename,
    NULL, NULL,
    PyvtkCursor3D_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkCursor3D_Doc()
{
  static const char *docstring[] = {
    "vtkCursor3D - generate a 3D cursor representation\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkCursor3D is an object that generates a 3D representation of a\ncursor. The cursor consists of a wireframe bounding box, three\nintersecting axes lines that meet at the cursor focus, and \"shadows\"\nor projections of the axes against the sides of the bounding box.\nEach of these components can be turned on/off.\n\nThis filter generates two output datasets. The first (Output) is just\nthe geometric repre",
    "sentation of the cursor. The second (Focus) is a\nsingle point at the focal point.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCursor3D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCursor3DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCursor3D", o) != 0)
    {
    Py_DECREF(o);
    }

}

