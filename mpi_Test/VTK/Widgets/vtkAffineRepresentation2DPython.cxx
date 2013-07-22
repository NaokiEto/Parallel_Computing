// python wrapper for vtkAffineRepresentation2D
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
#include "vtkAffineRepresentation2D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkAffineRepresentation2D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkAffineRepresentation2D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkAffineRepresentation2DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkAffineRepresentation2DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAffineRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkAffineRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkAffineRepresentationNew
#endif

static const char **PyvtkAffineRepresentation2D_Doc();


static PyObject *
PyvtkAffineRepresentation2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

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
      tempr = op->vtkAffineRepresentation2D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

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
      tempr = op->vtkAffineRepresentation2D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  vtkAffineRepresentation2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkAffineRepresentation2D::NewInstance();
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
PyvtkAffineRepresentation2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkAffineRepresentation2D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkAffineRepresentation2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_SetBoxWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoxWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBoxWidth(temp0);
      }
    else
      {
      op->vtkAffineRepresentation2D::SetBoxWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_GetBoxWidthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoxWidthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBoxWidthMinValue();
      }
    else
      {
      tempr = op->vtkAffineRepresentation2D::GetBoxWidthMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_GetBoxWidthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoxWidthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBoxWidthMaxValue();
      }
    else
      {
      tempr = op->vtkAffineRepresentation2D::GetBoxWidthMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_GetBoxWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoxWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBoxWidth();
      }
    else
      {
      tempr = op->vtkAffineRepresentation2D::GetBoxWidth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_SetCircleWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCircleWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCircleWidth(temp0);
      }
    else
      {
      op->vtkAffineRepresentation2D::SetCircleWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_GetCircleWidthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCircleWidthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCircleWidthMinValue();
      }
    else
      {
      tempr = op->vtkAffineRepresentation2D::GetCircleWidthMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_GetCircleWidthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCircleWidthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCircleWidthMaxValue();
      }
    else
      {
      tempr = op->vtkAffineRepresentation2D::GetCircleWidthMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_GetCircleWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCircleWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCircleWidth();
      }
    else
      {
      tempr = op->vtkAffineRepresentation2D::GetCircleWidth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_SetAxesWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxesWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAxesWidth(temp0);
      }
    else
      {
      op->vtkAffineRepresentation2D::SetAxesWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_GetAxesWidthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxesWidthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAxesWidthMinValue();
      }
    else
      {
      tempr = op->vtkAffineRepresentation2D::GetAxesWidthMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_GetAxesWidthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxesWidthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAxesWidthMaxValue();
      }
    else
      {
      tempr = op->vtkAffineRepresentation2D::GetAxesWidthMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_GetAxesWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxesWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAxesWidth();
      }
    else
      {
      tempr = op->vtkAffineRepresentation2D::GetAxesWidth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

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
      op->SetOrigin(temp0);
      }
    else
      {
      op->vtkAffineRepresentation2D::SetOrigin(temp0);
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
PyvtkAffineRepresentation2D_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

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
      op->SetOrigin(temp0, temp1, temp2);
      }
    else
      {
      op->vtkAffineRepresentation2D::SetOrigin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAffineRepresentation2D_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkAffineRepresentation2D_SetOrigin_s1(self, args);
    case 3:
      return PyvtkAffineRepresentation2D_SetOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return NULL;
}



static PyObject *
PyvtkAffineRepresentation2D_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOrigin();
      }
    else
      {
      tempr = op->vtkAffineRepresentation2D::GetOrigin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  vtkTransform *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTransform"))
    {
    if (ap.IsBound())
      {
      op->GetTransform(temp0);
      }
    else
      {
      op->vtkAffineRepresentation2D::GetTransform(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_SetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  vtkProperty2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty2D"))
    {
    if (ap.IsBound())
      {
      op->SetProperty(temp0);
      }
    else
      {
      op->vtkAffineRepresentation2D::SetProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_SetSelectedProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  vtkProperty2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty2D"))
    {
    if (ap.IsBound())
      {
      op->SetSelectedProperty(temp0);
      }
    else
      {
      op->vtkAffineRepresentation2D::SetSelectedProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_SetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->SetTextProperty(temp0);
      }
    else
      {
      op->vtkAffineRepresentation2D::SetTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  vtkProperty2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProperty();
      }
    else
      {
      tempr = op->vtkAffineRepresentation2D::GetProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_GetSelectedProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  vtkProperty2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectedProperty();
      }
    else
      {
      tempr = op->vtkAffineRepresentation2D::GetSelectedProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_GetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  vtkTextProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextProperty();
      }
    else
      {
      tempr = op->vtkAffineRepresentation2D::GetTextProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_SetDisplayText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDisplayText(temp0);
      }
    else
      {
      op->vtkAffineRepresentation2D::SetDisplayText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_GetDisplayText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDisplayText();
      }
    else
      {
      tempr = op->vtkAffineRepresentation2D::GetDisplayText();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_DisplayTextOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayTextOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DisplayTextOn();
      }
    else
      {
      op->vtkAffineRepresentation2D::DisplayTextOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_DisplayTextOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayTextOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DisplayTextOff();
      }
    else
      {
      op->vtkAffineRepresentation2D::DisplayTextOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_PlaceWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

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
      op->PlaceWidget(temp0);
      }
    else
      {
      op->vtkAffineRepresentation2D::PlaceWidget(temp0);
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
PyvtkAffineRepresentation2D_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->StartWidgetInteraction(temp0);
      }
    else
      {
      op->vtkAffineRepresentation2D::StartWidgetInteraction(temp0);
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
PyvtkAffineRepresentation2D_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->WidgetInteraction(temp0);
      }
    else
      {
      op->vtkAffineRepresentation2D::WidgetInteraction(temp0);
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
PyvtkAffineRepresentation2D_EndWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->EndWidgetInteraction(temp0);
      }
    else
      {
      op->vtkAffineRepresentation2D::EndWidgetInteraction(temp0);
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
PyvtkAffineRepresentation2D_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  int temp0;
  int temp1;
  int temp2 = 0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    if (ap.IsBound())
      {
      tempr = op->ComputeInteractionState(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkAffineRepresentation2D::ComputeInteractionState(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkAffineRepresentation2D::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

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
      op->vtkAffineRepresentation2D::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_GetActors2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  vtkPropCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
    {
    if (ap.IsBound())
      {
      op->GetActors2D(temp0);
      }
    else
      {
      op->vtkAffineRepresentation2D::GetActors2D(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

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
      op->vtkAffineRepresentation2D::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  vtkViewport *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      tempr = op->RenderOverlay(temp0);
      }
    else
      {
      tempr = op->vtkAffineRepresentation2D::RenderOverlay(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAffineRepresentation2D_Methods[] = {
  {(char*)"GetClassName", PyvtkAffineRepresentation2D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for instances of this class.\n"},
  {(char*)"IsA", PyvtkAffineRepresentation2D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for instances of this class.\n"},
  {(char*)"NewInstance", PyvtkAffineRepresentation2D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkAffineRepresentation2D\nC++: vtkAffineRepresentation2D *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {(char*)"SafeDownCast", PyvtkAffineRepresentation2D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAffineRepresentation2D\nC++: vtkAffineRepresentation2D *SafeDownCast(vtkObject* o)\n\nStandard methods for instances of this class.\n"},
  {(char*)"SetBoxWidth", PyvtkAffineRepresentation2D_SetBoxWidth, 1,
   (char*)"V.SetBoxWidth(int)\nC++: void SetBoxWidth(int)\n\nSpecify the width of the various parts of the representation (in\npixels).  The three parts are of the representation are the\ntranslation axes, the rotation circle, and the scale/shear box.\nNote that since the widget resizes itself so that the width and\nheight are always the same, only the width needs to be specified.\n"},
  {(char*)"GetBoxWidthMinValue", PyvtkAffineRepresentation2D_GetBoxWidthMinValue, 1,
   (char*)"V.GetBoxWidthMinValue() -> int\nC++: int GetBoxWidthMinValue()\n\nSpecify the width of the various parts of the representation (in\npixels).  The three parts are of the representation are the\ntranslation axes, the rotation circle, and the scale/shear box.\nNote that since the widget resizes itself so that the width and\nheight are always the same, only the width needs to be specified.\n"},
  {(char*)"GetBoxWidthMaxValue", PyvtkAffineRepresentation2D_GetBoxWidthMaxValue, 1,
   (char*)"V.GetBoxWidthMaxValue() -> int\nC++: int GetBoxWidthMaxValue()\n\nSpecify the width of the various parts of the representation (in\npixels).  The three parts are of the representation are the\ntranslation axes, the rotation circle, and the scale/shear box.\nNote that since the widget resizes itself so that the width and\nheight are always the same, only the width needs to be specified.\n"},
  {(char*)"GetBoxWidth", PyvtkAffineRepresentation2D_GetBoxWidth, 1,
   (char*)"V.GetBoxWidth() -> int\nC++: int GetBoxWidth()\n\nSpecify the width of the various parts of the representation (in\npixels).  The three parts are of the representation are the\ntranslation axes, the rotation circle, and the scale/shear box.\nNote that since the widget resizes itself so that the width and\nheight are always the same, only the width needs to be specified.\n"},
  {(char*)"SetCircleWidth", PyvtkAffineRepresentation2D_SetCircleWidth, 1,
   (char*)"V.SetCircleWidth(int)\nC++: void SetCircleWidth(int)\n\nSpecify the width of the various parts of the representation (in\npixels).  The three parts are of the representation are the\ntranslation axes, the rotation circle, and the scale/shear box.\nNote that since the widget resizes itself so that the width and\nheight are always the same, only the width needs to be specified.\n"},
  {(char*)"GetCircleWidthMinValue", PyvtkAffineRepresentation2D_GetCircleWidthMinValue, 1,
   (char*)"V.GetCircleWidthMinValue() -> int\nC++: int GetCircleWidthMinValue()\n\nSpecify the width of the various parts of the representation (in\npixels).  The three parts are of the representation are the\ntranslation axes, the rotation circle, and the scale/shear box.\nNote that since the widget resizes itself so that the width and\nheight are always the same, only the width needs to be specified.\n"},
  {(char*)"GetCircleWidthMaxValue", PyvtkAffineRepresentation2D_GetCircleWidthMaxValue, 1,
   (char*)"V.GetCircleWidthMaxValue() -> int\nC++: int GetCircleWidthMaxValue()\n\nSpecify the width of the various parts of the representation (in\npixels).  The three parts are of the representation are the\ntranslation axes, the rotation circle, and the scale/shear box.\nNote that since the widget resizes itself so that the width and\nheight are always the same, only the width needs to be specified.\n"},
  {(char*)"GetCircleWidth", PyvtkAffineRepresentation2D_GetCircleWidth, 1,
   (char*)"V.GetCircleWidth() -> int\nC++: int GetCircleWidth()\n\nSpecify the width of the various parts of the representation (in\npixels).  The three parts are of the representation are the\ntranslation axes, the rotation circle, and the scale/shear box.\nNote that since the widget resizes itself so that the width and\nheight are always the same, only the width needs to be specified.\n"},
  {(char*)"SetAxesWidth", PyvtkAffineRepresentation2D_SetAxesWidth, 1,
   (char*)"V.SetAxesWidth(int)\nC++: void SetAxesWidth(int)\n\nSpecify the width of the various parts of the representation (in\npixels).  The three parts are of the representation are the\ntranslation axes, the rotation circle, and the scale/shear box.\nNote that since the widget resizes itself so that the width and\nheight are always the same, only the width needs to be specified.\n"},
  {(char*)"GetAxesWidthMinValue", PyvtkAffineRepresentation2D_GetAxesWidthMinValue, 1,
   (char*)"V.GetAxesWidthMinValue() -> int\nC++: int GetAxesWidthMinValue()\n\nSpecify the width of the various parts of the representation (in\npixels).  The three parts are of the representation are the\ntranslation axes, the rotation circle, and the scale/shear box.\nNote that since the widget resizes itself so that the width and\nheight are always the same, only the width needs to be specified.\n"},
  {(char*)"GetAxesWidthMaxValue", PyvtkAffineRepresentation2D_GetAxesWidthMaxValue, 1,
   (char*)"V.GetAxesWidthMaxValue() -> int\nC++: int GetAxesWidthMaxValue()\n\nSpecify the width of the various parts of the representation (in\npixels).  The three parts are of the representation are the\ntranslation axes, the rotation circle, and the scale/shear box.\nNote that since the widget resizes itself so that the width and\nheight are always the same, only the width needs to be specified.\n"},
  {(char*)"GetAxesWidth", PyvtkAffineRepresentation2D_GetAxesWidth, 1,
   (char*)"V.GetAxesWidth() -> int\nC++: int GetAxesWidth()\n\nSpecify the width of the various parts of the representation (in\npixels).  The three parts are of the representation are the\ntranslation axes, the rotation circle, and the scale/shear box.\nNote that since the widget resizes itself so that the width and\nheight are always the same, only the width needs to be specified.\n"},
  {(char*)"SetOrigin", PyvtkAffineRepresentation2D_SetOrigin, 1,
   (char*)"V.SetOrigin([float, float, float])\nC++: void SetOrigin(double o[3])\nV.SetOrigin(float, float, float)\nC++: void SetOrigin(double ox, double oy, double oz)\n\nSpecify the origin of the widget (in world coordinates). The\norigin is the point where the widget places itself. Note that\nrotations and scaling occurs around the origin.\n"},
  {(char*)"GetOrigin", PyvtkAffineRepresentation2D_GetOrigin, 1,
   (char*)"V.GetOrigin() -> (float, float, float)\nC++: double *GetOrigin()\n\n"},
  {(char*)"GetTransform", PyvtkAffineRepresentation2D_GetTransform, 1,
   (char*)"V.GetTransform(vtkTransform)\nC++: virtual void GetTransform(vtkTransform *t)\n\nRetrieve a linear transform characterizing the affine\ntransformation generated by this widget. This method copies its\ninternal transform into the transform provided. Note that the\nPlaceWidget() method initializes the internal matrix to identity.\nAll subsequent widget operations (i.e., scale, translate, rotate,\nshear) are concatenated with the internal transform.\n"},
  {(char*)"SetProperty", PyvtkAffineRepresentation2D_SetProperty, 1,
   (char*)"V.SetProperty(vtkProperty2D)\nC++: void SetProperty(vtkProperty2D *)\n\nSet/Get the properties when unselected and selected.\n"},
  {(char*)"SetSelectedProperty", PyvtkAffineRepresentation2D_SetSelectedProperty, 1,
   (char*)"V.SetSelectedProperty(vtkProperty2D)\nC++: void SetSelectedProperty(vtkProperty2D *)\n\nSet/Get the properties when unselected and selected.\n"},
  {(char*)"SetTextProperty", PyvtkAffineRepresentation2D_SetTextProperty, 1,
   (char*)"V.SetTextProperty(vtkTextProperty)\nC++: void SetTextProperty(vtkTextProperty *)\n\nSet/Get the properties when unselected and selected.\n"},
  {(char*)"GetProperty", PyvtkAffineRepresentation2D_GetProperty, 1,
   (char*)"V.GetProperty() -> vtkProperty2D\nC++: vtkProperty2D *GetProperty()\n\nSet/Get the properties when unselected and selected.\n"},
  {(char*)"GetSelectedProperty", PyvtkAffineRepresentation2D_GetSelectedProperty, 1,
   (char*)"V.GetSelectedProperty() -> vtkProperty2D\nC++: vtkProperty2D *GetSelectedProperty()\n\nSet/Get the properties when unselected and selected.\n"},
  {(char*)"GetTextProperty", PyvtkAffineRepresentation2D_GetTextProperty, 1,
   (char*)"V.GetTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetTextProperty()\n\nSet/Get the properties when unselected and selected.\n"},
  {(char*)"SetDisplayText", PyvtkAffineRepresentation2D_SetDisplayText, 1,
   (char*)"V.SetDisplayText(int)\nC++: void SetDisplayText(int a)\n\nEnable the display of text with numeric values characterizing the\ntransformation. Rotation and shear are expressed in degrees;\ntranslation the distance in world coordinates; and scale\nnormalized (sx,sy) values.\n"},
  {(char*)"GetDisplayText", PyvtkAffineRepresentation2D_GetDisplayText, 1,
   (char*)"V.GetDisplayText() -> int\nC++: int GetDisplayText()\n\nEnable the display of text with numeric values characterizing the\ntransformation. Rotation and shear are expressed in degrees;\ntranslation the distance in world coordinates; and scale\nnormalized (sx,sy) values.\n"},
  {(char*)"DisplayTextOn", PyvtkAffineRepresentation2D_DisplayTextOn, 1,
   (char*)"V.DisplayTextOn()\nC++: void DisplayTextOn()\n\nEnable the display of text with numeric values characterizing the\ntransformation. Rotation and shear are expressed in degrees;\ntranslation the distance in world coordinates; and scale\nnormalized (sx,sy) values.\n"},
  {(char*)"DisplayTextOff", PyvtkAffineRepresentation2D_DisplayTextOff, 1,
   (char*)"V.DisplayTextOff()\nC++: void DisplayTextOff()\n\nEnable the display of text with numeric values characterizing the\ntransformation. Rotation and shear are expressed in degrees;\ntranslation the distance in world coordinates; and scale\nnormalized (sx,sy) values.\n"},
  {(char*)"PlaceWidget", PyvtkAffineRepresentation2D_PlaceWidget, 1,
   (char*)"V.PlaceWidget([float, float, float, float, float, float])\nC++: virtual void PlaceWidget(double bounds[6])\n\nSubclasses of vtkAffineRepresentation2D must implement these\nmethods. These are the methods that the widget and its\nrepresentation use to communicate with each other. Note:\nPlaceWidget() reinitializes the transformation matrix (i.e., sets\nit to identity). It also sets the origin for scaling and\nrotation.\n"},
  {(char*)"StartWidgetInteraction", PyvtkAffineRepresentation2D_StartWidgetInteraction, 1,
   (char*)"V.StartWidgetInteraction([float, float])\nC++: virtual void StartWidgetInteraction(double eventPos[2])\n\nSubclasses of vtkAffineRepresentation2D must implement these\nmethods. These are the methods that the widget and its\nrepresentation use to communicate with each other. Note:\nPlaceWidget() reinitializes the transformation matrix (i.e., sets\nit to identity). It also sets the origin for scaling and\nrotation.\n"},
  {(char*)"WidgetInteraction", PyvtkAffineRepresentation2D_WidgetInteraction, 1,
   (char*)"V.WidgetInteraction([float, float])\nC++: virtual void WidgetInteraction(double eventPos[2])\n\nSubclasses of vtkAffineRepresentation2D must implement these\nmethods. These are the methods that the widget and its\nrepresentation use to communicate with each other. Note:\nPlaceWidget() reinitializes the transformation matrix (i.e., sets\nit to identity). It also sets the origin for scaling and\nrotation.\n"},
  {(char*)"EndWidgetInteraction", PyvtkAffineRepresentation2D_EndWidgetInteraction, 1,
   (char*)"V.EndWidgetInteraction([float, float])\nC++: virtual void EndWidgetInteraction(double eventPos[2])\n\nSubclasses of vtkAffineRepresentation2D must implement these\nmethods. These are the methods that the widget and its\nrepresentation use to communicate with each other. Note:\nPlaceWidget() reinitializes the transformation matrix (i.e., sets\nit to identity). It also sets the origin for scaling and\nrotation.\n"},
  {(char*)"ComputeInteractionState", PyvtkAffineRepresentation2D_ComputeInteractionState, 1,
   (char*)"V.ComputeInteractionState(int, int, int) -> int\nC++: virtual int ComputeInteractionState(int X, int Y,\n    int modify=0)\n\nSubclasses of vtkAffineRepresentation2D must implement these\nmethods. These are the methods that the widget and its\nrepresentation use to communicate with each other. Note:\nPlaceWidget() reinitializes the transformation matrix (i.e., sets\nit to identity). It also sets the origin for scaling and\nrotation.\n"},
  {(char*)"BuildRepresentation", PyvtkAffineRepresentation2D_BuildRepresentation, 1,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nSubclasses of vtkAffineRepresentation2D must implement these\nmethods. These are the methods that the widget and its\nrepresentation use to communicate with each other. Note:\nPlaceWidget() reinitializes the transformation matrix (i.e., sets\nit to identity). It also sets the origin for scaling and\nrotation.\n"},
  {(char*)"ShallowCopy", PyvtkAffineRepresentation2D_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkProp)\nC++: virtual void ShallowCopy(vtkProp *prop)\n\nMethods to make this class behave as a vtkProp.\n"},
  {(char*)"GetActors2D", PyvtkAffineRepresentation2D_GetActors2D, 1,
   (char*)"V.GetActors2D(vtkPropCollection)\nC++: virtual void GetActors2D(vtkPropCollection *)\n\nMethods to make this class behave as a vtkProp.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkAffineRepresentation2D_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nMethods to make this class behave as a vtkProp.\n"},
  {(char*)"RenderOverlay", PyvtkAffineRepresentation2D_RenderOverlay, 1,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: virtual int RenderOverlay(vtkViewport *viewport)\n\nMethods to make this class behave as a vtkProp.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAffineRepresentation2D_StaticNew()
{
  return vtkAffineRepresentation2D::New();
}

PyObject *PyVTKClass_vtkAffineRepresentation2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAffineRepresentation2D_StaticNew,
    PyvtkAffineRepresentation2D_Methods,
    "vtkAffineRepresentation2D", modulename,
    NULL, NULL,
    PyvtkAffineRepresentation2D_Doc(),
    PyVTKClass_vtkAffineRepresentationNew(modulename));
  return cls;
}

const char **PyvtkAffineRepresentation2D_Doc()
{
  static const char *docstring[] = {
    "vtkAffineRepresentation2D - represent 2D affine transformations\n\n",
    "Superclass: vtkAffineRepresentation\n\n",
    "This class is used to represent a vtkAffineWidget. This\nrepresentation consists of three parts: a box, a circle, and a cross.\nThe box is used for scaling and shearing, the circle for rotation,\nand the cross for translation. These parts are drawn in the overlay\nplane and maintain a constant size (width and height) specified in\nterms of normalized viewport coordinates.\n\nThe representation maintains ",
    "an internal transformation matrix (see\nsuperclass' GetTransform() method). The transformations generated by\nthis widget assume that the representation lies in the x-y plane. If\nthis is not the case, the user is responsible for transforming this\nrepresentation's matrix into the correct coordinate space (by\njudicious matrix multiplication). Note that the transformation matrix\nreturned by GetTransfor",
    "m() is relative to the last PlaceWidget()\ninvocation. (The PlaceWidget() sets the origin around which rotation\nand scaling occurs; the origin is the center point of the bounding\nbox provided.)\n\nSee Also:\n\nvtkAffineRepresentation vtkAffineWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAffineRepresentation2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAffineRepresentation2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAffineRepresentation2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

