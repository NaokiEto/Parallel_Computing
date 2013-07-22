// python wrapper for vtkColorTransferFunction
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
#include "vtkColorTransferFunction.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkColorTransferFunction(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkColorTransferFunction(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkColorTransferFunctionNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkColorTransferFunctionNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkScalarsToColorsNew
extern "C" { PyObject *PyVTKClass_vtkScalarsToColorsNew(const char *); }
#define DECLARED_PyVTKClass_vtkScalarsToColorsNew
#endif

static const char **PyvtkColorTransferFunction_Doc();


static PyObject *
PyvtkColorTransferFunction_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

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
      tempr = op->vtkColorTransferFunction::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

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
      tempr = op->vtkColorTransferFunction::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  vtkColorTransferFunction *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkColorTransferFunction::NewInstance();
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
PyvtkColorTransferFunction_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkColorTransferFunction *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkColorTransferFunction::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  vtkColorTransferFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkColorTransferFunction"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkColorTransferFunction::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  vtkColorTransferFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkColorTransferFunction"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkColorTransferFunction::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSize();
      }
    else
      {
      tempr = op->vtkColorTransferFunction::GetSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_AddRGBPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRGBPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      tempr = op->AddRGBPoint(temp0, temp1, temp2, temp3);
      }
    else
      {
      tempr = op->vtkColorTransferFunction::AddRGBPoint(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkColorTransferFunction_AddRGBPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRGBPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  int tempr;
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
      tempr = op->AddRGBPoint(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      tempr = op->vtkColorTransferFunction::AddRGBPoint(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkColorTransferFunction_AddRGBPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkColorTransferFunction_AddRGBPoint_s1(self, args);
    case 6:
      return PyvtkColorTransferFunction_AddRGBPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddRGBPoint");
  return NULL;
}



static PyObject *
PyvtkColorTransferFunction_AddHSVPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddHSVPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      tempr = op->AddHSVPoint(temp0, temp1, temp2, temp3);
      }
    else
      {
      tempr = op->vtkColorTransferFunction::AddHSVPoint(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkColorTransferFunction_AddHSVPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddHSVPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  int tempr;
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
      tempr = op->AddHSVPoint(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      tempr = op->vtkColorTransferFunction::AddHSVPoint(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkColorTransferFunction_AddHSVPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkColorTransferFunction_AddHSVPoint_s1(self, args);
    case 6:
      return PyvtkColorTransferFunction_AddHSVPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddHSVPoint");
  return NULL;
}



static PyObject *
PyvtkColorTransferFunction_RemovePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  double temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->RemovePoint(temp0);
      }
    else
      {
      tempr = op->vtkColorTransferFunction::RemovePoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_AddRGBSegment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRGBSegment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  double temp7;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
    {
    if (ap.IsBound())
      {
      op->AddRGBSegment(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }
    else
      {
      op->vtkColorTransferFunction::AddRGBSegment(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_AddHSVSegment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddHSVSegment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  double temp7;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
    {
    if (ap.IsBound())
      {
      op->AddHSVSegment(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }
    else
      {
      op->vtkColorTransferFunction::AddHSVSegment(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_RemoveAllPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllPoints();
      }
    else
      {
      op->vtkColorTransferFunction::RemoveAllPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  double temp0;
  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColor(temp0);
      }
    else
      {
      tempr = op->vtkColorTransferFunction::GetColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkColorTransferFunction_GetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  double temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetColor(temp0, temp1);
      }
    else
      {
      op->vtkColorTransferFunction::GetColor(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkColorTransferFunction_GetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkColorTransferFunction_GetColor_s1(self, args);
    case 2:
      return PyvtkColorTransferFunction_GetColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetColor");
  return NULL;
}



static PyObject *
PyvtkColorTransferFunction_GetRedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  double temp0;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRedValue(temp0);
      }
    else
      {
      tempr = op->vtkColorTransferFunction::GetRedValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetGreenValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGreenValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  double temp0;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGreenValue(temp0);
      }
    else
      {
      tempr = op->vtkColorTransferFunction::GetGreenValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetBlueValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlueValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  double temp0;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBlueValue(temp0);
      }
    else
      {
      tempr = op->vtkColorTransferFunction::GetBlueValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetNodeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  int temp0;
  double temp1[6];
  double save1[6];
  const int size1 = 6;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      tempr = op->GetNodeValue(temp0, temp1);
      }
    else
      {
      tempr = op->vtkColorTransferFunction::GetNodeValue(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_SetNodeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNodeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  int temp0;
  double temp1[6];
  double save1[6];
  const int size1 = 6;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      tempr = op->SetNodeValue(temp0, temp1);
      }
    else
      {
      tempr = op->vtkColorTransferFunction::SetNodeValue(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRange();
      }
    else
      {
      tempr = op->vtkColorTransferFunction::GetRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_AdjustRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdjustRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      tempr = op->AdjustRange(temp0);
      }
    else
      {
      tempr = op->vtkColorTransferFunction::AdjustRange(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_SetClamping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClamping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetClamping(temp0);
      }
    else
      {
      op->vtkColorTransferFunction::SetClamping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetClampingMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClampingMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetClampingMinValue();
      }
    else
      {
      tempr = op->vtkColorTransferFunction::GetClampingMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetClampingMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClampingMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetClampingMaxValue();
      }
    else
      {
      tempr = op->vtkColorTransferFunction::GetClampingMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetClamping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClamping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetClamping();
      }
    else
      {
      tempr = op->vtkColorTransferFunction::GetClamping();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_ClampingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClampingOn();
      }
    else
      {
      op->vtkColorTransferFunction::ClampingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_ClampingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClampingOff();
      }
    else
      {
      op->vtkColorTransferFunction::ClampingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_SetColorSpace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorSpace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColorSpace(temp0);
      }
    else
      {
      op->vtkColorTransferFunction::SetColorSpace(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetColorSpaceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorSpaceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColorSpaceMinValue();
      }
    else
      {
      tempr = op->vtkColorTransferFunction::GetColorSpaceMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetColorSpaceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorSpaceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColorSpaceMaxValue();
      }
    else
      {
      tempr = op->vtkColorTransferFunction::GetColorSpaceMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_SetColorSpaceToRGB(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorSpaceToRGB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetColorSpaceToRGB();
      }
    else
      {
      op->vtkColorTransferFunction::SetColorSpaceToRGB();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_SetColorSpaceToHSV(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorSpaceToHSV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetColorSpaceToHSV();
      }
    else
      {
      op->vtkColorTransferFunction::SetColorSpaceToHSV();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_SetColorSpaceToLab(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorSpaceToLab");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetColorSpaceToLab();
      }
    else
      {
      op->vtkColorTransferFunction::SetColorSpaceToLab();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_SetColorSpaceToDiverging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorSpaceToDiverging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetColorSpaceToDiverging();
      }
    else
      {
      op->vtkColorTransferFunction::SetColorSpaceToDiverging();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetColorSpace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorSpace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColorSpace();
      }
    else
      {
      tempr = op->vtkColorTransferFunction::GetColorSpace();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_SetHSVWrap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHSVWrap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHSVWrap(temp0);
      }
    else
      {
      op->vtkColorTransferFunction::SetHSVWrap(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetHSVWrap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHSVWrap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHSVWrap();
      }
    else
      {
      tempr = op->vtkColorTransferFunction::GetHSVWrap();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_HSVWrapOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HSVWrapOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HSVWrapOn();
      }
    else
      {
      op->vtkColorTransferFunction::HSVWrapOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_HSVWrapOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HSVWrapOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HSVWrapOff();
      }
    else
      {
      op->vtkColorTransferFunction::HSVWrapOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_SetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  int temp0;
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
      op->vtkColorTransferFunction::SetScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_SetScaleToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScaleToLinear();
      }
    else
      {
      op->vtkColorTransferFunction::SetScaleToLinear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_SetScaleToLog10(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleToLog10");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScaleToLog10();
      }
    else
      {
      op->vtkColorTransferFunction::SetScaleToLog10();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScale();
      }
    else
      {
      tempr = op->vtkColorTransferFunction::GetScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_SetNanColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNanColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

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
      op->SetNanColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkColorTransferFunction::SetNanColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkColorTransferFunction_SetNanColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNanColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetNanColor(temp0);
      }
    else
      {
      op->vtkColorTransferFunction::SetNanColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkColorTransferFunction_SetNanColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkColorTransferFunction_SetNanColor_s1(self, args);
    case 1:
      return PyvtkColorTransferFunction_SetNanColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetNanColor");
  return NULL;
}



static PyObject *
PyvtkColorTransferFunction_GetNanColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNanColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNanColor();
      }
    else
      {
      tempr = op->vtkColorTransferFunction::GetNanColor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_SetAllowDuplicateScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllowDuplicateScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAllowDuplicateScalars(temp0);
      }
    else
      {
      op->vtkColorTransferFunction::SetAllowDuplicateScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetAllowDuplicateScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllowDuplicateScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAllowDuplicateScalars();
      }
    else
      {
      tempr = op->vtkColorTransferFunction::GetAllowDuplicateScalars();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_AllowDuplicateScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowDuplicateScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllowDuplicateScalarsOn();
      }
    else
      {
      op->vtkColorTransferFunction::AllowDuplicateScalarsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_AllowDuplicateScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowDuplicateScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllowDuplicateScalarsOff();
      }
    else
      {
      op->vtkColorTransferFunction::AllowDuplicateScalarsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetNumberOfAvailableColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAvailableColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfAvailableColors();
      }
    else
      {
      tempr = op->vtkColorTransferFunction::GetNumberOfAvailableColors();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkColorTransferFunction_Methods[] = {
  {(char*)"GetClassName", PyvtkColorTransferFunction_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkColorTransferFunction_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkColorTransferFunction_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkColorTransferFunction\nC++: vtkColorTransferFunction *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkColorTransferFunction_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkColorTransferFunction\nC++: vtkColorTransferFunction *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"DeepCopy", PyvtkColorTransferFunction_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkColorTransferFunction)\nC++: void DeepCopy(vtkColorTransferFunction *f)\n\n"},
  {(char*)"ShallowCopy", PyvtkColorTransferFunction_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkColorTransferFunction)\nC++: void ShallowCopy(vtkColorTransferFunction *f)\n\n"},
  {(char*)"GetSize", PyvtkColorTransferFunction_GetSize, 1,
   (char*)"V.GetSize() -> int\nC++: int GetSize()\n\nHow many points are there defining this function?\n"},
  {(char*)"AddRGBPoint", PyvtkColorTransferFunction_AddRGBPoint, 1,
   (char*)"V.AddRGBPoint(float, float, float, float) -> int\nC++: int AddRGBPoint(double x, double r, double g, double b)\nV.AddRGBPoint(float, float, float, float, float, float) -> int\nC++: int AddRGBPoint(double x, double r, double g, double b,\n    double midpoint, double sharpness)\n\nAdd/Remove a point to/from the function defined in RGB or HSV\nReturn the index of the point (0 based), or -1 on error. See the\ndescription of class vtkPiecewiseFunction for an explanation of\nmidpoint and sharpness.\n"},
  {(char*)"AddHSVPoint", PyvtkColorTransferFunction_AddHSVPoint, 1,
   (char*)"V.AddHSVPoint(float, float, float, float) -> int\nC++: int AddHSVPoint(double x, double h, double s, double v)\nV.AddHSVPoint(float, float, float, float, float, float) -> int\nC++: int AddHSVPoint(double x, double h, double s, double v,\n    double midpoint, double sharpness)\n\nAdd/Remove a point to/from the function defined in RGB or HSV\nReturn the index of the point (0 based), or -1 on error. See the\ndescription of class vtkPiecewiseFunction for an explanation of\nmidpoint and sharpness.\n"},
  {(char*)"RemovePoint", PyvtkColorTransferFunction_RemovePoint, 1,
   (char*)"V.RemovePoint(float) -> int\nC++: int RemovePoint(double x)\n\nAdd/Remove a point to/from the function defined in RGB or HSV\nReturn the index of the point (0 based), or -1 on error. See the\ndescription of class vtkPiecewiseFunction for an explanation of\nmidpoint and sharpness.\n"},
  {(char*)"AddRGBSegment", PyvtkColorTransferFunction_AddRGBSegment, 1,
   (char*)"V.AddRGBSegment(float, float, float, float, float, float, float,\n    float)\nC++: void AddRGBSegment(double x1, double r1, double g1,\n    double b1, double x2, double r2, double g2, double b2)\n\nAdd two points to the function and remove all the points between\nthem\n"},
  {(char*)"AddHSVSegment", PyvtkColorTransferFunction_AddHSVSegment, 1,
   (char*)"V.AddHSVSegment(float, float, float, float, float, float, float,\n    float)\nC++: void AddHSVSegment(double x1, double h1, double s1,\n    double v1, double x2, double h2, double s2, double v2)\n\nAdd two points to the function and remove all the points between\nthem\n"},
  {(char*)"RemoveAllPoints", PyvtkColorTransferFunction_RemoveAllPoints, 1,
   (char*)"V.RemoveAllPoints()\nC++: void RemoveAllPoints()\n\nRemove all points\n"},
  {(char*)"GetColor", PyvtkColorTransferFunction_GetColor, 1,
   (char*)"V.GetColor(float) -> (float, float, float)\nC++: double *GetColor(double x)\nV.GetColor(float, [float, float, float])\nC++: void GetColor(double x, double rgb[3])\n\nReturns an RGB color for the specified scalar value\n"},
  {(char*)"GetRedValue", PyvtkColorTransferFunction_GetRedValue, 1,
   (char*)"V.GetRedValue(float) -> float\nC++: double GetRedValue(double x)\n\nGet the color components individually.\n"},
  {(char*)"GetGreenValue", PyvtkColorTransferFunction_GetGreenValue, 1,
   (char*)"V.GetGreenValue(float) -> float\nC++: double GetGreenValue(double x)\n\nGet the color components individually.\n"},
  {(char*)"GetBlueValue", PyvtkColorTransferFunction_GetBlueValue, 1,
   (char*)"V.GetBlueValue(float) -> float\nC++: double GetBlueValue(double x)\n\nGet the color components individually.\n"},
  {(char*)"GetNodeValue", PyvtkColorTransferFunction_GetNodeValue, 1,
   (char*)"V.GetNodeValue(int, [float, float, float, float, float, float])\n    -> int\nC++: int GetNodeValue(int index, double val[6])\n\nFor the node specified by index, set/get the location (X), R, G,\nand B values, midpoint, and sharpness values at the node.\n"},
  {(char*)"SetNodeValue", PyvtkColorTransferFunction_SetNodeValue, 1,
   (char*)"V.SetNodeValue(int, [float, float, float, float, float, float])\n    -> int\nC++: int SetNodeValue(int index, double val[6])\n\nFor the node specified by index, set/get the location (X), R, G,\nand B values, midpoint, and sharpness values at the node.\n"},
  {(char*)"GetRange", PyvtkColorTransferFunction_GetRange, 1,
   (char*)"V.GetRange() -> (float, float)\nC++: double *GetRange()\n\n"},
  {(char*)"AdjustRange", PyvtkColorTransferFunction_AdjustRange, 1,
   (char*)"V.AdjustRange([float, float]) -> int\nC++: int AdjustRange(double range[2])\n\nRemove all points out of the new range, and make sure there is a\npoint at each end of that range. Return 1 on success, 0\notherwise.\n"},
  {(char*)"SetClamping", PyvtkColorTransferFunction_SetClamping, 1,
   (char*)"V.SetClamping(int)\nC++: void SetClamping(int)\n\nSets and gets the clamping value for this transfer function.\n"},
  {(char*)"GetClampingMinValue", PyvtkColorTransferFunction_GetClampingMinValue, 1,
   (char*)"V.GetClampingMinValue() -> int\nC++: int GetClampingMinValue()\n\nSets and gets the clamping value for this transfer function.\n"},
  {(char*)"GetClampingMaxValue", PyvtkColorTransferFunction_GetClampingMaxValue, 1,
   (char*)"V.GetClampingMaxValue() -> int\nC++: int GetClampingMaxValue()\n\nSets and gets the clamping value for this transfer function.\n"},
  {(char*)"GetClamping", PyvtkColorTransferFunction_GetClamping, 1,
   (char*)"V.GetClamping() -> int\nC++: int GetClamping()\n\nSets and gets the clamping value for this transfer function.\n"},
  {(char*)"ClampingOn", PyvtkColorTransferFunction_ClampingOn, 1,
   (char*)"V.ClampingOn()\nC++: void ClampingOn()\n\nSets and gets the clamping value for this transfer function.\n"},
  {(char*)"ClampingOff", PyvtkColorTransferFunction_ClampingOff, 1,
   (char*)"V.ClampingOff()\nC++: void ClampingOff()\n\nSets and gets the clamping value for this transfer function.\n"},
  {(char*)"SetColorSpace", PyvtkColorTransferFunction_SetColorSpace, 1,
   (char*)"V.SetColorSpace(int)\nC++: void SetColorSpace(int)\n\nSet/Get the color space used for interpolation: RGB, HSV, CIELAB,\nor Diverging.  In HSV mode, if HSVWrap is on, it will take the\nshortest path in Hue (going back through 0 if that is the\nshortest way around the hue circle) whereas if HSVWrap is off it\nwill not go through 0 (in order the match the current\nfunctionality of vtkLookupTable).  Diverging is a special mode\nwhere colors will pass through white when interpolating between\ntwo saturated colors.\n"},
  {(char*)"GetColorSpaceMinValue", PyvtkColorTransferFunction_GetColorSpaceMinValue, 1,
   (char*)"V.GetColorSpaceMinValue() -> int\nC++: int GetColorSpaceMinValue()\n\nSet/Get the color space used for interpolation: RGB, HSV, CIELAB,\nor Diverging.  In HSV mode, if HSVWrap is on, it will take the\nshortest path in Hue (going back through 0 if that is the\nshortest way around the hue circle) whereas if HSVWrap is off it\nwill not go through 0 (in order the match the current\nfunctionality of vtkLookupTable).  Diverging is a special mode\nwhere colors will pass through white when interpolating between\ntwo saturated colors.\n"},
  {(char*)"GetColorSpaceMaxValue", PyvtkColorTransferFunction_GetColorSpaceMaxValue, 1,
   (char*)"V.GetColorSpaceMaxValue() -> int\nC++: int GetColorSpaceMaxValue()\n\nSet/Get the color space used for interpolation: RGB, HSV, CIELAB,\nor Diverging.  In HSV mode, if HSVWrap is on, it will take the\nshortest path in Hue (going back through 0 if that is the\nshortest way around the hue circle) whereas if HSVWrap is off it\nwill not go through 0 (in order the match the current\nfunctionality of vtkLookupTable).  Diverging is a special mode\nwhere colors will pass through white when interpolating between\ntwo saturated colors.\n"},
  {(char*)"SetColorSpaceToRGB", PyvtkColorTransferFunction_SetColorSpaceToRGB, 1,
   (char*)"V.SetColorSpaceToRGB()\nC++: void SetColorSpaceToRGB()\n\nSet/Get the color space used for interpolation: RGB, HSV, CIELAB,\nor Diverging.  In HSV mode, if HSVWrap is on, it will take the\nshortest path in Hue (going back through 0 if that is the\nshortest way around the hue circle) whereas if HSVWrap is off it\nwill not go through 0 (in order the match the current\nfunctionality of vtkLookupTable).  Diverging is a special mode\nwhere colors will pass through white when interpolating between\ntwo saturated colors.\n"},
  {(char*)"SetColorSpaceToHSV", PyvtkColorTransferFunction_SetColorSpaceToHSV, 1,
   (char*)"V.SetColorSpaceToHSV()\nC++: void SetColorSpaceToHSV()\n\nSet/Get the color space used for interpolation: RGB, HSV, CIELAB,\nor Diverging.  In HSV mode, if HSVWrap is on, it will take the\nshortest path in Hue (going back through 0 if that is the\nshortest way around the hue circle) whereas if HSVWrap is off it\nwill not go through 0 (in order the match the current\nfunctionality of vtkLookupTable).  Diverging is a special mode\nwhere colors will pass through white when interpolating between\ntwo saturated colors.\n"},
  {(char*)"SetColorSpaceToLab", PyvtkColorTransferFunction_SetColorSpaceToLab, 1,
   (char*)"V.SetColorSpaceToLab()\nC++: void SetColorSpaceToLab()\n\nSet/Get the color space used for interpolation: RGB, HSV, CIELAB,\nor Diverging.  In HSV mode, if HSVWrap is on, it will take the\nshortest path in Hue (going back through 0 if that is the\nshortest way around the hue circle) whereas if HSVWrap is off it\nwill not go through 0 (in order the match the current\nfunctionality of vtkLookupTable).  Diverging is a special mode\nwhere colors will pass through white when interpolating between\ntwo saturated colors.\n"},
  {(char*)"SetColorSpaceToDiverging", PyvtkColorTransferFunction_SetColorSpaceToDiverging, 1,
   (char*)"V.SetColorSpaceToDiverging()\nC++: void SetColorSpaceToDiverging()\n\nSet/Get the color space used for interpolation: RGB, HSV, CIELAB,\nor Diverging.  In HSV mode, if HSVWrap is on, it will take the\nshortest path in Hue (going back through 0 if that is the\nshortest way around the hue circle) whereas if HSVWrap is off it\nwill not go through 0 (in order the match the current\nfunctionality of vtkLookupTable).  Diverging is a special mode\nwhere colors will pass through white when interpolating between\ntwo saturated colors.\n"},
  {(char*)"GetColorSpace", PyvtkColorTransferFunction_GetColorSpace, 1,
   (char*)"V.GetColorSpace() -> int\nC++: int GetColorSpace()\n\nSet/Get the color space used for interpolation: RGB, HSV, CIELAB,\nor Diverging.  In HSV mode, if HSVWrap is on, it will take the\nshortest path in Hue (going back through 0 if that is the\nshortest way around the hue circle) whereas if HSVWrap is off it\nwill not go through 0 (in order the match the current\nfunctionality of vtkLookupTable).  Diverging is a special mode\nwhere colors will pass through white when interpolating between\ntwo saturated colors.\n"},
  {(char*)"SetHSVWrap", PyvtkColorTransferFunction_SetHSVWrap, 1,
   (char*)"V.SetHSVWrap(int)\nC++: void SetHSVWrap(int a)\n\nSet/Get the color space used for interpolation: RGB, HSV, CIELAB,\nor Diverging.  In HSV mode, if HSVWrap is on, it will take the\nshortest path in Hue (going back through 0 if that is the\nshortest way around the hue circle) whereas if HSVWrap is off it\nwill not go through 0 (in order the match the current\nfunctionality of vtkLookupTable).  Diverging is a special mode\nwhere colors will pass through white when interpolating between\ntwo saturated colors.\n"},
  {(char*)"GetHSVWrap", PyvtkColorTransferFunction_GetHSVWrap, 1,
   (char*)"V.GetHSVWrap() -> int\nC++: int GetHSVWrap()\n\nSet/Get the color space used for interpolation: RGB, HSV, CIELAB,\nor Diverging.  In HSV mode, if HSVWrap is on, it will take the\nshortest path in Hue (going back through 0 if that is the\nshortest way around the hue circle) whereas if HSVWrap is off it\nwill not go through 0 (in order the match the current\nfunctionality of vtkLookupTable).  Diverging is a special mode\nwhere colors will pass through white when interpolating between\ntwo saturated colors.\n"},
  {(char*)"HSVWrapOn", PyvtkColorTransferFunction_HSVWrapOn, 1,
   (char*)"V.HSVWrapOn()\nC++: void HSVWrapOn()\n\nSet/Get the color space used for interpolation: RGB, HSV, CIELAB,\nor Diverging.  In HSV mode, if HSVWrap is on, it will take the\nshortest path in Hue (going back through 0 if that is the\nshortest way around the hue circle) whereas if HSVWrap is off it\nwill not go through 0 (in order the match the current\nfunctionality of vtkLookupTable).  Diverging is a special mode\nwhere colors will pass through white when interpolating between\ntwo saturated colors.\n"},
  {(char*)"HSVWrapOff", PyvtkColorTransferFunction_HSVWrapOff, 1,
   (char*)"V.HSVWrapOff()\nC++: void HSVWrapOff()\n\nSet/Get the color space used for interpolation: RGB, HSV, CIELAB,\nor Diverging.  In HSV mode, if HSVWrap is on, it will take the\nshortest path in Hue (going back through 0 if that is the\nshortest way around the hue circle) whereas if HSVWrap is off it\nwill not go through 0 (in order the match the current\nfunctionality of vtkLookupTable).  Diverging is a special mode\nwhere colors will pass through white when interpolating between\ntwo saturated colors.\n"},
  {(char*)"SetScale", PyvtkColorTransferFunction_SetScale, 1,
   (char*)"V.SetScale(int)\nC++: void SetScale(int a)\n\nSet the type of scale to use, linear or logarithmic.  The default\nis linear.  If the scale is logarithmic, and the range contains\nzero, the color mapping will be linear.\n"},
  {(char*)"SetScaleToLinear", PyvtkColorTransferFunction_SetScaleToLinear, 1,
   (char*)"V.SetScaleToLinear()\nC++: void SetScaleToLinear()\n\nSet the type of scale to use, linear or logarithmic.  The default\nis linear.  If the scale is logarithmic, and the range contains\nzero, the color mapping will be linear.\n"},
  {(char*)"SetScaleToLog10", PyvtkColorTransferFunction_SetScaleToLog10, 1,
   (char*)"V.SetScaleToLog10()\nC++: void SetScaleToLog10()\n\nSet the type of scale to use, linear or logarithmic.  The default\nis linear.  If the scale is logarithmic, and the range contains\nzero, the color mapping will be linear.\n"},
  {(char*)"GetScale", PyvtkColorTransferFunction_GetScale, 1,
   (char*)"V.GetScale() -> int\nC++: int GetScale()\n\nSet the type of scale to use, linear or logarithmic.  The default\nis linear.  If the scale is logarithmic, and the range contains\nzero, the color mapping will be linear.\n"},
  {(char*)"SetNanColor", PyvtkColorTransferFunction_SetNanColor, 1,
   (char*)"V.SetNanColor(float, float, float)\nC++: void SetNanColor(double, double, double)\nV.SetNanColor((float, float, float))\nC++: void SetNanColor(double a[3])\n\n"},
  {(char*)"GetNanColor", PyvtkColorTransferFunction_GetNanColor, 1,
   (char*)"V.GetNanColor() -> (float, float, float)\nC++: double *GetNanColor()\n\n"},
  {(char*)"SetAllowDuplicateScalars", PyvtkColorTransferFunction_SetAllowDuplicateScalars, 1,
   (char*)"V.SetAllowDuplicateScalars(int)\nC++: void SetAllowDuplicateScalars(int a)\n\nToggle whether to allow duplicate scalar values in the color\ntransfer function (off by default).\n"},
  {(char*)"GetAllowDuplicateScalars", PyvtkColorTransferFunction_GetAllowDuplicateScalars, 1,
   (char*)"V.GetAllowDuplicateScalars() -> int\nC++: int GetAllowDuplicateScalars()\n\nToggle whether to allow duplicate scalar values in the color\ntransfer function (off by default).\n"},
  {(char*)"AllowDuplicateScalarsOn", PyvtkColorTransferFunction_AllowDuplicateScalarsOn, 1,
   (char*)"V.AllowDuplicateScalarsOn()\nC++: void AllowDuplicateScalarsOn()\n\nToggle whether to allow duplicate scalar values in the color\ntransfer function (off by default).\n"},
  {(char*)"AllowDuplicateScalarsOff", PyvtkColorTransferFunction_AllowDuplicateScalarsOff, 1,
   (char*)"V.AllowDuplicateScalarsOff()\nC++: void AllowDuplicateScalarsOff()\n\nToggle whether to allow duplicate scalar values in the color\ntransfer function (off by default).\n"},
  {(char*)"GetNumberOfAvailableColors", PyvtkColorTransferFunction_GetNumberOfAvailableColors, 1,
   (char*)"V.GetNumberOfAvailableColors() -> int\nC++: virtual vtkIdType GetNumberOfAvailableColors()\n\nGet the number of available colors for mapping to.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkColorTransferFunction_StaticNew()
{
  return vtkColorTransferFunction::New();
}

PyObject *PyVTKClass_vtkColorTransferFunctionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkColorTransferFunction_StaticNew,
    PyvtkColorTransferFunction_Methods,
    "vtkColorTransferFunction", modulename,
    NULL, NULL,
    PyvtkColorTransferFunction_Doc(),
    PyVTKClass_vtkScalarsToColorsNew(modulename));
  return cls;
}

const char **PyvtkColorTransferFunction_Doc()
{
  static const char *docstring[] = {
    "vtkColorTransferFunction - Defines a transfer function for mapping a\nproperty to an RGB color value.\n\n",
    "Superclass: vtkScalarsToColors\n\n",
    "vtkColorTransferFunction is a color mapping in RGB or HSV space that\nuses piecewise hermite functions to allow interpolation that can be\npiecewise constant, piecewise linear, or somewhere in-between (a\nmodified piecewise hermite function that squishes the function\naccording to a sharpness parameter). The function also allows for the\nspecification of the midpoint (the place where the function reach",
    "es\nthe average of the two bounding nodes) as a normalize distance\nbetween nodes. See the description of class vtkPiecewiseFunction for\nan explanation of midpoint and sharpness.\n\nSee Also:\n\nvtkPiecewiseFunction\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkColorTransferFunction(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkColorTransferFunctionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkColorTransferFunction", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_CTF_RGB", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_CTF_HSV", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_CTF_LAB", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(3);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_CTF_DIVERGING", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_CTF_LINEAR", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_CTF_LOG10", o) != 0)
    {
    Py_DECREF(o);
    }

}

