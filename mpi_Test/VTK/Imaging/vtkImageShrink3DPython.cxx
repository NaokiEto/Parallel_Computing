// python wrapper for vtkImageShrink3D
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
#include "vtkImageShrink3D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageShrink3D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageShrink3D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageShrink3DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageShrink3DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageShrink3D_Doc();


static PyObject *
PyvtkImageShrink3D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

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
      tempr = op->vtkImageShrink3D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageShrink3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

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
      tempr = op->vtkImageShrink3D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageShrink3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  vtkImageShrink3D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageShrink3D::NewInstance();
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
PyvtkImageShrink3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageShrink3D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageShrink3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageShrink3D_SetShrinkFactors_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShrinkFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  int temp0;
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
      op->SetShrinkFactors(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageShrink3D::SetShrinkFactors(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageShrink3D_SetShrinkFactors_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShrinkFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  int temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetShrinkFactors(temp0);
      }
    else
      {
      op->vtkImageShrink3D::SetShrinkFactors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageShrink3D_SetShrinkFactors(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageShrink3D_SetShrinkFactors_s1(self, args);
    case 1:
      return PyvtkImageShrink3D_SetShrinkFactors_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetShrinkFactors");
  return NULL;
}



static PyObject *
PyvtkImageShrink3D_GetShrinkFactors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShrinkFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  int *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShrinkFactors();
      }
    else
      {
      tempr = op->vtkImageShrink3D::GetShrinkFactors();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageShrink3D_SetShift_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  int temp0;
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
      op->SetShift(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageShrink3D::SetShift(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageShrink3D_SetShift_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  int temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetShift(temp0);
      }
    else
      {
      op->vtkImageShrink3D::SetShift(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageShrink3D_SetShift(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageShrink3D_SetShift_s1(self, args);
    case 1:
      return PyvtkImageShrink3D_SetShift_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetShift");
  return NULL;
}



static PyObject *
PyvtkImageShrink3D_GetShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  int *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShift();
      }
    else
      {
      tempr = op->vtkImageShrink3D::GetShift();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageShrink3D_SetAveraging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAveraging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAveraging(temp0);
      }
    else
      {
      op->vtkImageShrink3D::SetAveraging(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageShrink3D_GetAveraging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAveraging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAveraging();
      }
    else
      {
      tempr = op->vtkImageShrink3D::GetAveraging();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageShrink3D_AveragingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AveragingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AveragingOn();
      }
    else
      {
      op->vtkImageShrink3D::AveragingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageShrink3D_AveragingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AveragingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AveragingOff();
      }
    else
      {
      op->vtkImageShrink3D::AveragingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageShrink3D_SetMean(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMean");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMean(temp0);
      }
    else
      {
      op->vtkImageShrink3D::SetMean(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageShrink3D_GetMean(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMean");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMean();
      }
    else
      {
      tempr = op->vtkImageShrink3D::GetMean();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageShrink3D_MeanOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MeanOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MeanOn();
      }
    else
      {
      op->vtkImageShrink3D::MeanOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageShrink3D_MeanOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MeanOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MeanOff();
      }
    else
      {
      op->vtkImageShrink3D::MeanOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageShrink3D_SetMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinimum(temp0);
      }
    else
      {
      op->vtkImageShrink3D::SetMinimum(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageShrink3D_GetMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinimum();
      }
    else
      {
      tempr = op->vtkImageShrink3D::GetMinimum();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageShrink3D_MinimumOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MinimumOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MinimumOn();
      }
    else
      {
      op->vtkImageShrink3D::MinimumOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageShrink3D_MinimumOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MinimumOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MinimumOff();
      }
    else
      {
      op->vtkImageShrink3D::MinimumOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageShrink3D_SetMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximum(temp0);
      }
    else
      {
      op->vtkImageShrink3D::SetMaximum(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageShrink3D_GetMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximum();
      }
    else
      {
      tempr = op->vtkImageShrink3D::GetMaximum();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageShrink3D_MaximumOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MaximumOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MaximumOn();
      }
    else
      {
      op->vtkImageShrink3D::MaximumOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageShrink3D_MaximumOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MaximumOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MaximumOff();
      }
    else
      {
      op->vtkImageShrink3D::MaximumOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageShrink3D_SetMedian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMedian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMedian(temp0);
      }
    else
      {
      op->vtkImageShrink3D::SetMedian(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageShrink3D_GetMedian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMedian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMedian();
      }
    else
      {
      tempr = op->vtkImageShrink3D::GetMedian();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageShrink3D_MedianOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MedianOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MedianOn();
      }
    else
      {
      op->vtkImageShrink3D::MedianOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageShrink3D_MedianOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MedianOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MedianOff();
      }
    else
      {
      op->vtkImageShrink3D::MedianOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageShrink3D_Methods[] = {
  {(char*)"GetClassName", PyvtkImageShrink3D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageShrink3D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageShrink3D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageShrink3D\nC++: vtkImageShrink3D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageShrink3D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageShrink3D\nC++: vtkImageShrink3D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetShrinkFactors", PyvtkImageShrink3D_SetShrinkFactors, 1,
   (char*)"V.SetShrinkFactors(int, int, int)\nC++: void SetShrinkFactors(int, int, int)\nV.SetShrinkFactors((int, int, int))\nC++: void SetShrinkFactors(int a[3])\n\n"},
  {(char*)"GetShrinkFactors", PyvtkImageShrink3D_GetShrinkFactors, 1,
   (char*)"V.GetShrinkFactors() -> (int, int, int)\nC++: int *GetShrinkFactors()\n\n"},
  {(char*)"SetShift", PyvtkImageShrink3D_SetShift, 1,
   (char*)"V.SetShift(int, int, int)\nC++: void SetShift(int, int, int)\nV.SetShift((int, int, int))\nC++: void SetShift(int a[3])\n\n"},
  {(char*)"GetShift", PyvtkImageShrink3D_GetShift, 1,
   (char*)"V.GetShift() -> (int, int, int)\nC++: int *GetShift()\n\n"},
  {(char*)"SetAveraging", PyvtkImageShrink3D_SetAveraging, 1,
   (char*)"V.SetAveraging(int)\nC++: void SetAveraging(int)\n\nChoose Mean, Minimum, Maximum, Median or sub sampling. The\nneighborhood operations are not centered on the sampled pixel.\nThis may cause a half pixel shift in your output image. You can\nchanged \"Shift\" to get around this. vtkImageGaussianSmooth or\nvtkImageMean with strides.\n"},
  {(char*)"GetAveraging", PyvtkImageShrink3D_GetAveraging, 1,
   (char*)"V.GetAveraging() -> int\nC++: int GetAveraging()\n\nChoose Mean, Minimum, Maximum, Median or sub sampling. The\nneighborhood operations are not centered on the sampled pixel.\nThis may cause a half pixel shift in your output image. You can\nchanged \"Shift\" to get around this. vtkImageGaussianSmooth or\nvtkImageMean with strides.\n"},
  {(char*)"AveragingOn", PyvtkImageShrink3D_AveragingOn, 1,
   (char*)"V.AveragingOn()\nC++: void AveragingOn()\n\nChoose Mean, Minimum, Maximum, Median or sub sampling. The\nneighborhood operations are not centered on the sampled pixel.\nThis may cause a half pixel shift in your output image. You can\nchanged \"Shift\" to get around this. vtkImageGaussianSmooth or\nvtkImageMean with strides.\n"},
  {(char*)"AveragingOff", PyvtkImageShrink3D_AveragingOff, 1,
   (char*)"V.AveragingOff()\nC++: void AveragingOff()\n\nChoose Mean, Minimum, Maximum, Median or sub sampling. The\nneighborhood operations are not centered on the sampled pixel.\nThis may cause a half pixel shift in your output image. You can\nchanged \"Shift\" to get around this. vtkImageGaussianSmooth or\nvtkImageMean with strides.\n"},
  {(char*)"SetMean", PyvtkImageShrink3D_SetMean, 1,
   (char*)"V.SetMean(int)\nC++: void SetMean(int)\n\n"},
  {(char*)"GetMean", PyvtkImageShrink3D_GetMean, 1,
   (char*)"V.GetMean() -> int\nC++: int GetMean()\n\n"},
  {(char*)"MeanOn", PyvtkImageShrink3D_MeanOn, 1,
   (char*)"V.MeanOn()\nC++: void MeanOn()\n\n"},
  {(char*)"MeanOff", PyvtkImageShrink3D_MeanOff, 1,
   (char*)"V.MeanOff()\nC++: void MeanOff()\n\n"},
  {(char*)"SetMinimum", PyvtkImageShrink3D_SetMinimum, 1,
   (char*)"V.SetMinimum(int)\nC++: void SetMinimum(int)\n\n"},
  {(char*)"GetMinimum", PyvtkImageShrink3D_GetMinimum, 1,
   (char*)"V.GetMinimum() -> int\nC++: int GetMinimum()\n\n"},
  {(char*)"MinimumOn", PyvtkImageShrink3D_MinimumOn, 1,
   (char*)"V.MinimumOn()\nC++: void MinimumOn()\n\n"},
  {(char*)"MinimumOff", PyvtkImageShrink3D_MinimumOff, 1,
   (char*)"V.MinimumOff()\nC++: void MinimumOff()\n\n"},
  {(char*)"SetMaximum", PyvtkImageShrink3D_SetMaximum, 1,
   (char*)"V.SetMaximum(int)\nC++: void SetMaximum(int)\n\n"},
  {(char*)"GetMaximum", PyvtkImageShrink3D_GetMaximum, 1,
   (char*)"V.GetMaximum() -> int\nC++: int GetMaximum()\n\n"},
  {(char*)"MaximumOn", PyvtkImageShrink3D_MaximumOn, 1,
   (char*)"V.MaximumOn()\nC++: void MaximumOn()\n\n"},
  {(char*)"MaximumOff", PyvtkImageShrink3D_MaximumOff, 1,
   (char*)"V.MaximumOff()\nC++: void MaximumOff()\n\n"},
  {(char*)"SetMedian", PyvtkImageShrink3D_SetMedian, 1,
   (char*)"V.SetMedian(int)\nC++: void SetMedian(int)\n\n"},
  {(char*)"GetMedian", PyvtkImageShrink3D_GetMedian, 1,
   (char*)"V.GetMedian() -> int\nC++: int GetMedian()\n\n"},
  {(char*)"MedianOn", PyvtkImageShrink3D_MedianOn, 1,
   (char*)"V.MedianOn()\nC++: void MedianOn()\n\n"},
  {(char*)"MedianOff", PyvtkImageShrink3D_MedianOff, 1,
   (char*)"V.MedianOff()\nC++: void MedianOff()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageShrink3D_StaticNew()
{
  return vtkImageShrink3D::New();
}

PyObject *PyVTKClass_vtkImageShrink3DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageShrink3D_StaticNew,
    PyvtkImageShrink3D_Methods,
    "vtkImageShrink3D", modulename,
    NULL, NULL,
    PyvtkImageShrink3D_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageShrink3D_Doc()
{
  static const char *docstring[] = {
    "vtkImageShrink3D - Subsamples an image.\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "vtkImageShrink3D shrinks an image by sub sampling on a uniform grid\n(integer multiples).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageShrink3D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageShrink3DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageShrink3D", o) != 0)
    {
    Py_DECREF(o);
    }

}

