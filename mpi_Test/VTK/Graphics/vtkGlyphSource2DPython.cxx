// python wrapper for vtkGlyphSource2D
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
#include "vtkGlyphSource2D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGlyphSource2D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGlyphSource2D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGlyphSource2DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGlyphSource2DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkGlyphSource2D_Doc();


static PyObject *
PyvtkGlyphSource2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

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
      tempr = op->vtkGlyphSource2D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

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
      tempr = op->vtkGlyphSource2D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  vtkGlyphSource2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGlyphSource2D::NewInstance();
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
PyvtkGlyphSource2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGlyphSource2D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGlyphSource2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

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
      op->SetCenter(temp0, temp1, temp2);
      }
    else
      {
      op->vtkGlyphSource2D::SetCenter(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGlyphSource2D_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetCenter(temp0);
      }
    else
      {
      op->vtkGlyphSource2D::SetCenter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGlyphSource2D_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkGlyphSource2D_SetCenter_s1(self, args);
    case 1:
      return PyvtkGlyphSource2D_SetCenter_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return NULL;
}



static PyObject *
PyvtkGlyphSource2D_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCenter();
      }
    else
      {
      tempr = op->vtkGlyphSource2D::GetCenter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScale(temp0);
      }
    else
      {
      op->vtkGlyphSource2D::SetScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetScaleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScaleMinValue();
      }
    else
      {
      tempr = op->vtkGlyphSource2D::GetScaleMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetScaleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScaleMaxValue();
      }
    else
      {
      tempr = op->vtkGlyphSource2D::GetScaleMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScale();
      }
    else
      {
      tempr = op->vtkGlyphSource2D::GetScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetScale2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScale2(temp0);
      }
    else
      {
      op->vtkGlyphSource2D::SetScale2(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetScale2MinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale2MinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScale2MinValue();
      }
    else
      {
      tempr = op->vtkGlyphSource2D::GetScale2MinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetScale2MaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale2MaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScale2MaxValue();
      }
    else
      {
      tempr = op->vtkGlyphSource2D::GetScale2MaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetScale2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScale2();
      }
    else
      {
      tempr = op->vtkGlyphSource2D::GetScale2();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

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
      op->vtkGlyphSource2D::SetColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGlyphSource2D_SetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetColor(temp0);
      }
    else
      {
      op->vtkGlyphSource2D::SetColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGlyphSource2D_SetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkGlyphSource2D_SetColor_s1(self, args);
    case 1:
      return PyvtkGlyphSource2D_SetColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetColor");
  return NULL;
}



static PyObject *
PyvtkGlyphSource2D_GetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

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
      tempr = op->vtkGlyphSource2D::GetColor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetFilled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFilled(temp0);
      }
    else
      {
      op->vtkGlyphSource2D::SetFilled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetFilled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFilled();
      }
    else
      {
      tempr = op->vtkGlyphSource2D::GetFilled();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_FilledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FilledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FilledOn();
      }
    else
      {
      op->vtkGlyphSource2D::FilledOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_FilledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FilledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FilledOff();
      }
    else
      {
      op->vtkGlyphSource2D::FilledOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetDash(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDash");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDash(temp0);
      }
    else
      {
      op->vtkGlyphSource2D::SetDash(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetDash(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDash");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDash();
      }
    else
      {
      tempr = op->vtkGlyphSource2D::GetDash();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_DashOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DashOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DashOn();
      }
    else
      {
      op->vtkGlyphSource2D::DashOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_DashOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DashOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DashOff();
      }
    else
      {
      op->vtkGlyphSource2D::DashOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetCross(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCross");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCross(temp0);
      }
    else
      {
      op->vtkGlyphSource2D::SetCross(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetCross(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCross");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCross();
      }
    else
      {
      tempr = op->vtkGlyphSource2D::GetCross();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_CrossOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CrossOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CrossOn();
      }
    else
      {
      op->vtkGlyphSource2D::CrossOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_CrossOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CrossOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CrossOff();
      }
    else
      {
      op->vtkGlyphSource2D::CrossOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetRotationAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRotationAngle(temp0);
      }
    else
      {
      op->vtkGlyphSource2D::SetRotationAngle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetRotationAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRotationAngle();
      }
    else
      {
      tempr = op->vtkGlyphSource2D::GetRotationAngle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetGlyphType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGlyphType(temp0);
      }
    else
      {
      op->vtkGlyphSource2D::SetGlyphType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetGlyphTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGlyphTypeMinValue();
      }
    else
      {
      tempr = op->vtkGlyphSource2D::GetGlyphTypeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetGlyphTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGlyphTypeMaxValue();
      }
    else
      {
      tempr = op->vtkGlyphSource2D::GetGlyphTypeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetGlyphType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGlyphType();
      }
    else
      {
      tempr = op->vtkGlyphSource2D::GetGlyphType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetGlyphTypeToNone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToNone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGlyphTypeToNone();
      }
    else
      {
      op->vtkGlyphSource2D::SetGlyphTypeToNone();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetGlyphTypeToVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGlyphTypeToVertex();
      }
    else
      {
      op->vtkGlyphSource2D::SetGlyphTypeToVertex();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetGlyphTypeToDash(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToDash");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGlyphTypeToDash();
      }
    else
      {
      op->vtkGlyphSource2D::SetGlyphTypeToDash();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetGlyphTypeToCross(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToCross");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGlyphTypeToCross();
      }
    else
      {
      op->vtkGlyphSource2D::SetGlyphTypeToCross();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetGlyphTypeToThickCross(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToThickCross");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGlyphTypeToThickCross();
      }
    else
      {
      op->vtkGlyphSource2D::SetGlyphTypeToThickCross();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetGlyphTypeToTriangle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToTriangle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGlyphTypeToTriangle();
      }
    else
      {
      op->vtkGlyphSource2D::SetGlyphTypeToTriangle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetGlyphTypeToSquare(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToSquare");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGlyphTypeToSquare();
      }
    else
      {
      op->vtkGlyphSource2D::SetGlyphTypeToSquare();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetGlyphTypeToCircle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToCircle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGlyphTypeToCircle();
      }
    else
      {
      op->vtkGlyphSource2D::SetGlyphTypeToCircle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetGlyphTypeToDiamond(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToDiamond");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGlyphTypeToDiamond();
      }
    else
      {
      op->vtkGlyphSource2D::SetGlyphTypeToDiamond();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetGlyphTypeToArrow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToArrow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGlyphTypeToArrow();
      }
    else
      {
      op->vtkGlyphSource2D::SetGlyphTypeToArrow();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetGlyphTypeToThickArrow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToThickArrow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGlyphTypeToThickArrow();
      }
    else
      {
      op->vtkGlyphSource2D::SetGlyphTypeToThickArrow();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetGlyphTypeToHookedArrow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToHookedArrow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGlyphTypeToHookedArrow();
      }
    else
      {
      op->vtkGlyphSource2D::SetGlyphTypeToHookedArrow();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetGlyphTypeToEdgeArrow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToEdgeArrow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGlyphTypeToEdgeArrow();
      }
    else
      {
      op->vtkGlyphSource2D::SetGlyphTypeToEdgeArrow();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGlyphSource2D_Methods[] = {
  {(char*)"GetClassName", PyvtkGlyphSource2D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGlyphSource2D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGlyphSource2D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGlyphSource2D\nC++: vtkGlyphSource2D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGlyphSource2D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGlyphSource2D\nC++: vtkGlyphSource2D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCenter", PyvtkGlyphSource2D_SetCenter, 1,
   (char*)"V.SetCenter(float, float, float)\nC++: void SetCenter(double, double, double)\nV.SetCenter((float, float, float))\nC++: void SetCenter(double a[3])\n\n"},
  {(char*)"GetCenter", PyvtkGlyphSource2D_GetCenter, 1,
   (char*)"V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\n\nSet the center of the glyph. By default the center is (0,0,0).\n"},
  {(char*)"SetScale", PyvtkGlyphSource2D_SetScale, 1,
   (char*)"V.SetScale(float)\nC++: void SetScale(double)\n\nSet the scale of the glyph. Note that the glyphs are designed to\nfit in the (1,1) rectangle.\n"},
  {(char*)"GetScaleMinValue", PyvtkGlyphSource2D_GetScaleMinValue, 1,
   (char*)"V.GetScaleMinValue() -> float\nC++: double GetScaleMinValue()\n\nSet the scale of the glyph. Note that the glyphs are designed to\nfit in the (1,1) rectangle.\n"},
  {(char*)"GetScaleMaxValue", PyvtkGlyphSource2D_GetScaleMaxValue, 1,
   (char*)"V.GetScaleMaxValue() -> float\nC++: double GetScaleMaxValue()\n\nSet the scale of the glyph. Note that the glyphs are designed to\nfit in the (1,1) rectangle.\n"},
  {(char*)"GetScale", PyvtkGlyphSource2D_GetScale, 1,
   (char*)"V.GetScale() -> float\nC++: double GetScale()\n\nSet the scale of the glyph. Note that the glyphs are designed to\nfit in the (1,1) rectangle.\n"},
  {(char*)"SetScale2", PyvtkGlyphSource2D_SetScale2, 1,
   (char*)"V.SetScale2(float)\nC++: void SetScale2(double)\n\nSet the scale of optional portions of the glyph (e.g., the dash\nand cross is DashOn() and CrossOn()).\n"},
  {(char*)"GetScale2MinValue", PyvtkGlyphSource2D_GetScale2MinValue, 1,
   (char*)"V.GetScale2MinValue() -> float\nC++: double GetScale2MinValue()\n\nSet the scale of optional portions of the glyph (e.g., the dash\nand cross is DashOn() and CrossOn()).\n"},
  {(char*)"GetScale2MaxValue", PyvtkGlyphSource2D_GetScale2MaxValue, 1,
   (char*)"V.GetScale2MaxValue() -> float\nC++: double GetScale2MaxValue()\n\nSet the scale of optional portions of the glyph (e.g., the dash\nand cross is DashOn() and CrossOn()).\n"},
  {(char*)"GetScale2", PyvtkGlyphSource2D_GetScale2, 1,
   (char*)"V.GetScale2() -> float\nC++: double GetScale2()\n\nSet the scale of optional portions of the glyph (e.g., the dash\nand cross is DashOn() and CrossOn()).\n"},
  {(char*)"SetColor", PyvtkGlyphSource2D_SetColor, 1,
   (char*)"V.SetColor(float, float, float)\nC++: void SetColor(double, double, double)\nV.SetColor((float, float, float))\nC++: void SetColor(double a[3])\n\n"},
  {(char*)"GetColor", PyvtkGlyphSource2D_GetColor, 1,
   (char*)"V.GetColor() -> (float, float, float)\nC++: double *GetColor()\n\nSet the color of the glyph. The default color is white.\n"},
  {(char*)"SetFilled", PyvtkGlyphSource2D_SetFilled, 1,
   (char*)"V.SetFilled(int)\nC++: void SetFilled(int a)\n\nSpecify whether the glyph is filled (a polygon) or not (a closed\npolygon defined by line segments). This only applies to 2D closed\nglyphs.\n"},
  {(char*)"GetFilled", PyvtkGlyphSource2D_GetFilled, 1,
   (char*)"V.GetFilled() -> int\nC++: int GetFilled()\n\nSpecify whether the glyph is filled (a polygon) or not (a closed\npolygon defined by line segments). This only applies to 2D closed\nglyphs.\n"},
  {(char*)"FilledOn", PyvtkGlyphSource2D_FilledOn, 1,
   (char*)"V.FilledOn()\nC++: void FilledOn()\n\nSpecify whether the glyph is filled (a polygon) or not (a closed\npolygon defined by line segments). This only applies to 2D closed\nglyphs.\n"},
  {(char*)"FilledOff", PyvtkGlyphSource2D_FilledOff, 1,
   (char*)"V.FilledOff()\nC++: void FilledOff()\n\nSpecify whether the glyph is filled (a polygon) or not (a closed\npolygon defined by line segments). This only applies to 2D closed\nglyphs.\n"},
  {(char*)"SetDash", PyvtkGlyphSource2D_SetDash, 1,
   (char*)"V.SetDash(int)\nC++: void SetDash(int a)\n\nSpecify whether a short line segment is drawn through the glyph.\n(This is in addition to the glyph. If the glyph type is set to\n\"Dash\" there is no need to enable this flag.)\n"},
  {(char*)"GetDash", PyvtkGlyphSource2D_GetDash, 1,
   (char*)"V.GetDash() -> int\nC++: int GetDash()\n\nSpecify whether a short line segment is drawn through the glyph.\n(This is in addition to the glyph. If the glyph type is set to\n\"Dash\" there is no need to enable this flag.)\n"},
  {(char*)"DashOn", PyvtkGlyphSource2D_DashOn, 1,
   (char*)"V.DashOn()\nC++: void DashOn()\n\nSpecify whether a short line segment is drawn through the glyph.\n(This is in addition to the glyph. If the glyph type is set to\n\"Dash\" there is no need to enable this flag.)\n"},
  {(char*)"DashOff", PyvtkGlyphSource2D_DashOff, 1,
   (char*)"V.DashOff()\nC++: void DashOff()\n\nSpecify whether a short line segment is drawn through the glyph.\n(This is in addition to the glyph. If the glyph type is set to\n\"Dash\" there is no need to enable this flag.)\n"},
  {(char*)"SetCross", PyvtkGlyphSource2D_SetCross, 1,
   (char*)"V.SetCross(int)\nC++: void SetCross(int a)\n\nSpecify whether a cross is drawn as part of the glyph. (This is\nin addition to the glyph. If the glyph type is set to \"Cross\"\nthere is no need to enable this flag.)\n"},
  {(char*)"GetCross", PyvtkGlyphSource2D_GetCross, 1,
   (char*)"V.GetCross() -> int\nC++: int GetCross()\n\nSpecify whether a cross is drawn as part of the glyph. (This is\nin addition to the glyph. If the glyph type is set to \"Cross\"\nthere is no need to enable this flag.)\n"},
  {(char*)"CrossOn", PyvtkGlyphSource2D_CrossOn, 1,
   (char*)"V.CrossOn()\nC++: void CrossOn()\n\nSpecify whether a cross is drawn as part of the glyph. (This is\nin addition to the glyph. If the glyph type is set to \"Cross\"\nthere is no need to enable this flag.)\n"},
  {(char*)"CrossOff", PyvtkGlyphSource2D_CrossOff, 1,
   (char*)"V.CrossOff()\nC++: void CrossOff()\n\nSpecify whether a cross is drawn as part of the glyph. (This is\nin addition to the glyph. If the glyph type is set to \"Cross\"\nthere is no need to enable this flag.)\n"},
  {(char*)"SetRotationAngle", PyvtkGlyphSource2D_SetRotationAngle, 1,
   (char*)"V.SetRotationAngle(float)\nC++: void SetRotationAngle(double a)\n\nSpecify an angle (in degrees) to rotate the glyph around the\nz-axis. Using this ivar, it is possible to generate rotated\nglyphs (e.g., crosses, arrows, etc.)\n"},
  {(char*)"GetRotationAngle", PyvtkGlyphSource2D_GetRotationAngle, 1,
   (char*)"V.GetRotationAngle() -> float\nC++: double GetRotationAngle()\n\nSpecify an angle (in degrees) to rotate the glyph around the\nz-axis. Using this ivar, it is possible to generate rotated\nglyphs (e.g., crosses, arrows, etc.)\n"},
  {(char*)"SetGlyphType", PyvtkGlyphSource2D_SetGlyphType, 1,
   (char*)"V.SetGlyphType(int)\nC++: void SetGlyphType(int)\n\nSpecify the type of glyph to generate.\n"},
  {(char*)"GetGlyphTypeMinValue", PyvtkGlyphSource2D_GetGlyphTypeMinValue, 1,
   (char*)"V.GetGlyphTypeMinValue() -> int\nC++: int GetGlyphTypeMinValue()\n\nSpecify the type of glyph to generate.\n"},
  {(char*)"GetGlyphTypeMaxValue", PyvtkGlyphSource2D_GetGlyphTypeMaxValue, 1,
   (char*)"V.GetGlyphTypeMaxValue() -> int\nC++: int GetGlyphTypeMaxValue()\n\nSpecify the type of glyph to generate.\n"},
  {(char*)"GetGlyphType", PyvtkGlyphSource2D_GetGlyphType, 1,
   (char*)"V.GetGlyphType() -> int\nC++: int GetGlyphType()\n\nSpecify the type of glyph to generate.\n"},
  {(char*)"SetGlyphTypeToNone", PyvtkGlyphSource2D_SetGlyphTypeToNone, 1,
   (char*)"V.SetGlyphTypeToNone()\nC++: void SetGlyphTypeToNone()\n\nSpecify the type of glyph to generate.\n"},
  {(char*)"SetGlyphTypeToVertex", PyvtkGlyphSource2D_SetGlyphTypeToVertex, 1,
   (char*)"V.SetGlyphTypeToVertex()\nC++: void SetGlyphTypeToVertex()\n\nSpecify the type of glyph to generate.\n"},
  {(char*)"SetGlyphTypeToDash", PyvtkGlyphSource2D_SetGlyphTypeToDash, 1,
   (char*)"V.SetGlyphTypeToDash()\nC++: void SetGlyphTypeToDash()\n\nSpecify the type of glyph to generate.\n"},
  {(char*)"SetGlyphTypeToCross", PyvtkGlyphSource2D_SetGlyphTypeToCross, 1,
   (char*)"V.SetGlyphTypeToCross()\nC++: void SetGlyphTypeToCross()\n\nSpecify the type of glyph to generate.\n"},
  {(char*)"SetGlyphTypeToThickCross", PyvtkGlyphSource2D_SetGlyphTypeToThickCross, 1,
   (char*)"V.SetGlyphTypeToThickCross()\nC++: void SetGlyphTypeToThickCross()\n\nSpecify the type of glyph to generate.\n"},
  {(char*)"SetGlyphTypeToTriangle", PyvtkGlyphSource2D_SetGlyphTypeToTriangle, 1,
   (char*)"V.SetGlyphTypeToTriangle()\nC++: void SetGlyphTypeToTriangle()\n\nSpecify the type of glyph to generate.\n"},
  {(char*)"SetGlyphTypeToSquare", PyvtkGlyphSource2D_SetGlyphTypeToSquare, 1,
   (char*)"V.SetGlyphTypeToSquare()\nC++: void SetGlyphTypeToSquare()\n\nSpecify the type of glyph to generate.\n"},
  {(char*)"SetGlyphTypeToCircle", PyvtkGlyphSource2D_SetGlyphTypeToCircle, 1,
   (char*)"V.SetGlyphTypeToCircle()\nC++: void SetGlyphTypeToCircle()\n\nSpecify the type of glyph to generate.\n"},
  {(char*)"SetGlyphTypeToDiamond", PyvtkGlyphSource2D_SetGlyphTypeToDiamond, 1,
   (char*)"V.SetGlyphTypeToDiamond()\nC++: void SetGlyphTypeToDiamond()\n\nSpecify the type of glyph to generate.\n"},
  {(char*)"SetGlyphTypeToArrow", PyvtkGlyphSource2D_SetGlyphTypeToArrow, 1,
   (char*)"V.SetGlyphTypeToArrow()\nC++: void SetGlyphTypeToArrow()\n\nSpecify the type of glyph to generate.\n"},
  {(char*)"SetGlyphTypeToThickArrow", PyvtkGlyphSource2D_SetGlyphTypeToThickArrow, 1,
   (char*)"V.SetGlyphTypeToThickArrow()\nC++: void SetGlyphTypeToThickArrow()\n\nSpecify the type of glyph to generate.\n"},
  {(char*)"SetGlyphTypeToHookedArrow", PyvtkGlyphSource2D_SetGlyphTypeToHookedArrow, 1,
   (char*)"V.SetGlyphTypeToHookedArrow()\nC++: void SetGlyphTypeToHookedArrow()\n\nSpecify the type of glyph to generate.\n"},
  {(char*)"SetGlyphTypeToEdgeArrow", PyvtkGlyphSource2D_SetGlyphTypeToEdgeArrow, 1,
   (char*)"V.SetGlyphTypeToEdgeArrow()\nC++: void SetGlyphTypeToEdgeArrow()\n\nSpecify the type of glyph to generate.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGlyphSource2D_StaticNew()
{
  return vtkGlyphSource2D::New();
}

PyObject *PyVTKClass_vtkGlyphSource2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGlyphSource2D_StaticNew,
    PyvtkGlyphSource2D_Methods,
    "vtkGlyphSource2D", modulename,
    NULL, NULL,
    PyvtkGlyphSource2D_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkGlyphSource2D_Doc()
{
  static const char *docstring[] = {
    "vtkGlyphSource2D - create 2D glyphs represented by vtkPolyData\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkGlyphSource2D can generate a family of 2D glyphs each of which\nlies in the x-y plane (i.e., the z-coordinate is zero). The class is\na helper class to be used with vtkGlyph2D and vtkXYPlotActor.\n\nTo use this class, specify the glyph type to use and its attributes.\nAttributes include its position (i.e., center point), scale, color,\nand whether the symbol is filled or not (a polygon or closed line",
    "\nsequence). You can also put a short line through the glyph running\nfrom -x to +x (the glyph looks like it's on a line), or a cross.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGlyphSource2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGlyphSource2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGlyphSource2D", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_NO_GLYPH", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_VERTEX_GLYPH", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_DASH_GLYPH", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(3);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_CROSS_GLYPH", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(4);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_THICKCROSS_GLYPH", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(5);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_TRIANGLE_GLYPH", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(6);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SQUARE_GLYPH", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(7);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_CIRCLE_GLYPH", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(8);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_DIAMOND_GLYPH", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(9);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_ARROW_GLYPH", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(10);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_THICKARROW_GLYPH", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(11);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_HOOKEDARROW_GLYPH", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(12);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_EDGEARROW_GLYPH", o) != 0)
    {
    Py_DECREF(o);
    }

}

