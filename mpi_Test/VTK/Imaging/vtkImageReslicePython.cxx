// python wrapper for vtkImageReslice
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
#include "vtkImageReslice.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageReslice(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageReslice(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageResliceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageResliceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageReslice_Doc();


static PyObject *
PyvtkImageReslice_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

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
      tempr = op->vtkImageReslice::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

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
      tempr = op->vtkImageReslice::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  vtkImageReslice *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageReslice::NewInstance();
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
PyvtkImageReslice_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageReslice *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageReslice::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_SetResliceAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResliceAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  vtkMatrix4x4 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
    {
    if (ap.IsBound())
      {
      op->SetResliceAxes(temp0);
      }
    else
      {
      op->vtkImageReslice::SetResliceAxes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_GetResliceAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResliceAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  vtkMatrix4x4 *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetResliceAxes();
      }
    else
      {
      tempr = op->vtkImageReslice::GetResliceAxes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_SetResliceAxesDirectionCosines_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResliceAxesDirectionCosines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  double temp7;
  double temp8;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(9) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7) &&
      ap.GetValue(temp8))
    {
    if (ap.IsBound())
      {
      op->SetResliceAxesDirectionCosines(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
      }
    else
      {
      op->vtkImageReslice::SetResliceAxesDirectionCosines(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageReslice_SetResliceAxesDirectionCosines_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResliceAxesDirectionCosines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  const int size1 = 3;
  double temp2[3];
  const int size2 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    if (ap.IsBound())
      {
      op->SetResliceAxesDirectionCosines(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageReslice::SetResliceAxesDirectionCosines(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageReslice_SetResliceAxesDirectionCosines_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResliceAxesDirectionCosines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  double temp0[9];
  const int size0 = 9;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetResliceAxesDirectionCosines(temp0);
      }
    else
      {
      op->vtkImageReslice::SetResliceAxesDirectionCosines(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageReslice_SetResliceAxesDirectionCosines(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 9:
      return PyvtkImageReslice_SetResliceAxesDirectionCosines_s1(self, args);
    case 3:
      return PyvtkImageReslice_SetResliceAxesDirectionCosines_s2(self, args);
    case 1:
      return PyvtkImageReslice_SetResliceAxesDirectionCosines_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetResliceAxesDirectionCosines");
  return NULL;
}



static PyObject *
PyvtkImageReslice_GetResliceAxesDirectionCosines_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResliceAxesDirectionCosines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      op->GetResliceAxesDirectionCosines(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageReslice::GetResliceAxesDirectionCosines(temp0, temp1, temp2);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageReslice_GetResliceAxesDirectionCosines_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResliceAxesDirectionCosines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  double temp0[9];
  double save0[9];
  const int size0 = 9;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetResliceAxesDirectionCosines(temp0);
      }
    else
      {
      op->vtkImageReslice::GetResliceAxesDirectionCosines(temp0);
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
PyvtkImageReslice_GetResliceAxesDirectionCosines_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResliceAxesDirectionCosines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  double *tempr;
  int sizer = 9;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetResliceAxesDirectionCosines();
      }
    else
      {
      tempr = op->vtkImageReslice::GetResliceAxesDirectionCosines();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkImageReslice_GetResliceAxesDirectionCosines(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageReslice_GetResliceAxesDirectionCosines_s1(self, args);
    case 1:
      return PyvtkImageReslice_GetResliceAxesDirectionCosines_s2(self, args);
    case 0:
      return PyvtkImageReslice_GetResliceAxesDirectionCosines_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetResliceAxesDirectionCosines");
  return NULL;
}



static PyObject *
PyvtkImageReslice_SetResliceAxesOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResliceAxesOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

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
      op->SetResliceAxesOrigin(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageReslice::SetResliceAxesOrigin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageReslice_SetResliceAxesOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResliceAxesOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetResliceAxesOrigin(temp0);
      }
    else
      {
      op->vtkImageReslice::SetResliceAxesOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageReslice_SetResliceAxesOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageReslice_SetResliceAxesOrigin_s1(self, args);
    case 1:
      return PyvtkImageReslice_SetResliceAxesOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetResliceAxesOrigin");
  return NULL;
}



static PyObject *
PyvtkImageReslice_GetResliceAxesOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResliceAxesOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

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
      op->GetResliceAxesOrigin(temp0);
      }
    else
      {
      op->vtkImageReslice::GetResliceAxesOrigin(temp0);
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
PyvtkImageReslice_GetResliceAxesOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResliceAxesOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetResliceAxesOrigin();
      }
    else
      {
      tempr = op->vtkImageReslice::GetResliceAxesOrigin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkImageReslice_GetResliceAxesOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImageReslice_GetResliceAxesOrigin_s1(self, args);
    case 0:
      return PyvtkImageReslice_GetResliceAxesOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetResliceAxesOrigin");
  return NULL;
}



static PyObject *
PyvtkImageReslice_SetResliceTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResliceTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  vtkAbstractTransform *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
    {
    if (ap.IsBound())
      {
      op->SetResliceTransform(temp0);
      }
    else
      {
      op->vtkImageReslice::SetResliceTransform(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_GetResliceTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResliceTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  vtkAbstractTransform *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetResliceTransform();
      }
    else
      {
      tempr = op->vtkImageReslice::GetResliceTransform();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_SetInformationInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInformationInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetInformationInput(temp0);
      }
    else
      {
      op->vtkImageReslice::SetInformationInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_GetInformationInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInformationInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  vtkImageData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInformationInput();
      }
    else
      {
      tempr = op->vtkImageReslice::GetInformationInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_SetTransformInputSampling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransformInputSampling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTransformInputSampling(temp0);
      }
    else
      {
      op->vtkImageReslice::SetTransformInputSampling(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_TransformInputSamplingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformInputSamplingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TransformInputSamplingOn();
      }
    else
      {
      op->vtkImageReslice::TransformInputSamplingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_TransformInputSamplingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformInputSamplingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TransformInputSamplingOff();
      }
    else
      {
      op->vtkImageReslice::TransformInputSamplingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_GetTransformInputSampling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformInputSampling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTransformInputSampling();
      }
    else
      {
      tempr = op->vtkImageReslice::GetTransformInputSampling();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_SetAutoCropOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoCropOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAutoCropOutput(temp0);
      }
    else
      {
      op->vtkImageReslice::SetAutoCropOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_AutoCropOutputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoCropOutputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutoCropOutputOn();
      }
    else
      {
      op->vtkImageReslice::AutoCropOutputOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_AutoCropOutputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoCropOutputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutoCropOutputOff();
      }
    else
      {
      op->vtkImageReslice::AutoCropOutputOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_GetAutoCropOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoCropOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAutoCropOutput();
      }
    else
      {
      tempr = op->vtkImageReslice::GetAutoCropOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_SetWrap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWrap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

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
      op->vtkImageReslice::SetWrap(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_GetWrap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWrap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

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
      tempr = op->vtkImageReslice::GetWrap();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_WrapOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WrapOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WrapOn();
      }
    else
      {
      op->vtkImageReslice::WrapOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_WrapOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WrapOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WrapOff();
      }
    else
      {
      op->vtkImageReslice::WrapOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_SetMirror(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMirror");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMirror(temp0);
      }
    else
      {
      op->vtkImageReslice::SetMirror(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_GetMirror(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMirror");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMirror();
      }
    else
      {
      tempr = op->vtkImageReslice::GetMirror();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_MirrorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MirrorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MirrorOn();
      }
    else
      {
      op->vtkImageReslice::MirrorOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_MirrorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MirrorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MirrorOff();
      }
    else
      {
      op->vtkImageReslice::MirrorOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_SetBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBorder(temp0);
      }
    else
      {
      op->vtkImageReslice::SetBorder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_GetBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBorder();
      }
    else
      {
      tempr = op->vtkImageReslice::GetBorder();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_BorderOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BorderOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BorderOn();
      }
    else
      {
      op->vtkImageReslice::BorderOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_BorderOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BorderOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BorderOff();
      }
    else
      {
      op->vtkImageReslice::BorderOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_SetInterpolationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationMode(temp0);
      }
    else
      {
      op->vtkImageReslice::SetInterpolationMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_GetInterpolationModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInterpolationModeMinValue();
      }
    else
      {
      tempr = op->vtkImageReslice::GetInterpolationModeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_GetInterpolationModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInterpolationModeMaxValue();
      }
    else
      {
      tempr = op->vtkImageReslice::GetInterpolationModeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_GetInterpolationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInterpolationMode();
      }
    else
      {
      tempr = op->vtkImageReslice::GetInterpolationMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_SetInterpolationModeToNearestNeighbor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationModeToNearestNeighbor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationModeToNearestNeighbor();
      }
    else
      {
      op->vtkImageReslice::SetInterpolationModeToNearestNeighbor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_SetInterpolationModeToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationModeToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationModeToLinear();
      }
    else
      {
      op->vtkImageReslice::SetInterpolationModeToLinear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_SetInterpolationModeToCubic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationModeToCubic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationModeToCubic();
      }
    else
      {
      op->vtkImageReslice::SetInterpolationModeToCubic();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_GetInterpolationModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInterpolationModeAsString();
      }
    else
      {
      tempr = op->vtkImageReslice::GetInterpolationModeAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_SetOptimization(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOptimization");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOptimization(temp0);
      }
    else
      {
      op->vtkImageReslice::SetOptimization(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_GetOptimization(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOptimization");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOptimization();
      }
    else
      {
      tempr = op->vtkImageReslice::GetOptimization();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_OptimizationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OptimizationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OptimizationOn();
      }
    else
      {
      op->vtkImageReslice::OptimizationOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_OptimizationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OptimizationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OptimizationOff();
      }
    else
      {
      op->vtkImageReslice::OptimizationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_SetBackgroundColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  double temp0;
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
      op->SetBackgroundColor(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkImageReslice::SetBackgroundColor(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageReslice_SetBackgroundColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  double temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetBackgroundColor(temp0);
      }
    else
      {
      op->vtkImageReslice::SetBackgroundColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageReslice_SetBackgroundColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkImageReslice_SetBackgroundColor_s1(self, args);
    case 1:
      return PyvtkImageReslice_SetBackgroundColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBackgroundColor");
  return NULL;
}



static PyObject *
PyvtkImageReslice_GetBackgroundColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  double *tempr;
  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBackgroundColor();
      }
    else
      {
      tempr = op->vtkImageReslice::GetBackgroundColor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_SetBackgroundLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBackgroundLevel(temp0);
      }
    else
      {
      op->vtkImageReslice::SetBackgroundLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_GetBackgroundLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBackgroundLevel();
      }
    else
      {
      tempr = op->vtkImageReslice::GetBackgroundLevel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_SetOutputSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

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
      op->SetOutputSpacing(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageReslice::SetOutputSpacing(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageReslice_SetOutputSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOutputSpacing(temp0);
      }
    else
      {
      op->vtkImageReslice::SetOutputSpacing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageReslice_SetOutputSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageReslice_SetOutputSpacing_s1(self, args);
    case 1:
      return PyvtkImageReslice_SetOutputSpacing_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOutputSpacing");
  return NULL;
}



static PyObject *
PyvtkImageReslice_GetOutputSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputSpacing();
      }
    else
      {
      tempr = op->vtkImageReslice::GetOutputSpacing();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_SetOutputSpacingToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputSpacingToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputSpacingToDefault();
      }
    else
      {
      op->vtkImageReslice::SetOutputSpacingToDefault();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_SetOutputOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

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
      op->SetOutputOrigin(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageReslice::SetOutputOrigin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageReslice_SetOutputOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOutputOrigin(temp0);
      }
    else
      {
      op->vtkImageReslice::SetOutputOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageReslice_SetOutputOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageReslice_SetOutputOrigin_s1(self, args);
    case 1:
      return PyvtkImageReslice_SetOutputOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOutputOrigin");
  return NULL;
}



static PyObject *
PyvtkImageReslice_GetOutputOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputOrigin();
      }
    else
      {
      tempr = op->vtkImageReslice::GetOutputOrigin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_SetOutputOriginToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputOriginToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputOriginToDefault();
      }
    else
      {
      op->vtkImageReslice::SetOutputOriginToDefault();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_SetOutputExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
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
      op->SetOutputExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkImageReslice::SetOutputExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageReslice_SetOutputExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  int temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOutputExtent(temp0);
      }
    else
      {
      op->vtkImageReslice::SetOutputExtent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageReslice_SetOutputExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkImageReslice_SetOutputExtent_s1(self, args);
    case 1:
      return PyvtkImageReslice_SetOutputExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOutputExtent");
  return NULL;
}



static PyObject *
PyvtkImageReslice_GetOutputExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  int *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputExtent();
      }
    else
      {
      tempr = op->vtkImageReslice::GetOutputExtent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_SetOutputExtentToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputExtentToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputExtentToDefault();
      }
    else
      {
      op->vtkImageReslice::SetOutputExtentToDefault();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_SetOutputDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputDimensionality(temp0);
      }
    else
      {
      op->vtkImageReslice::SetOutputDimensionality(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_GetOutputDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputDimensionality();
      }
    else
      {
      tempr = op->vtkImageReslice::GetOutputDimensionality();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

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
      tempr = op->vtkImageReslice::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_ReportReferences(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReportReferences");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  vtkGarbageCollector *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGarbageCollector"))
    {
    if (ap.IsBound())
      {
      op->ReportReferences(temp0);
      }
    else
      {
      op->vtkImageReslice::ReportReferences(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_SetInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolate(temp0);
      }
    else
      {
      op->vtkImageReslice::SetInterpolate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_InterpolateOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InterpolateOn();
      }
    else
      {
      op->vtkImageReslice::InterpolateOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_InterpolateOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InterpolateOff();
      }
    else
      {
      op->vtkImageReslice::InterpolateOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_GetInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInterpolate();
      }
    else
      {
      tempr = op->vtkImageReslice::GetInterpolate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_SetStencil(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStencil");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  vtkImageStencilData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageStencilData"))
    {
    if (ap.IsBound())
      {
      op->SetStencil(temp0);
      }
    else
      {
      op->vtkImageReslice::SetStencil(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReslice_GetStencil(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStencil");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  vtkImageStencilData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStencil();
      }
    else
      {
      tempr = op->vtkImageReslice::GetStencil();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageReslice_Methods[] = {
  {(char*)"GetClassName", PyvtkImageReslice_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageReslice_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageReslice_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageReslice\nC++: vtkImageReslice *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageReslice_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageReslice\nC++: vtkImageReslice *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetResliceAxes", PyvtkImageReslice_SetResliceAxes, 1,
   (char*)"V.SetResliceAxes(vtkMatrix4x4)\nC++: virtual void SetResliceAxes(vtkMatrix4x4 *)\n\nThis method is used to set up the axes for the output voxels. The\noutput Spacing, Origin, and Extent specify the locations of the\nvoxels within the coordinate system defined by the axes. The\nResliceAxes are used most often to permute the data, e.g. to\nextract ZY or XZ slices of a volume as 2D XY images.\n\nThe first column of the matrix specifies the x-axis vector (the\nfourth element must be set to zero), the second column specifies\nthe y-axis, and the third column the z-axis.  The fourth column\nis the origin of the axes (the fourth element must be set to\none).\n\nAn alternative to SetResliceAxes() is to use\nSetResliceAxesDirectionCosines() to set the directions of the\naxes and SetResliceAxesOrigin() to set the origin of the axes.\n"},
  {(char*)"GetResliceAxes", PyvtkImageReslice_GetResliceAxes, 1,
   (char*)"V.GetResliceAxes() -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetResliceAxes()\n\nThis method is used to set up the axes for the output voxels. The\noutput Spacing, Origin, and Extent specify the locations of the\nvoxels within the coordinate system defined by the axes. The\nResliceAxes are used most often to permute the data, e.g. to\nextract ZY or XZ slices of a volume as 2D XY images.\n\nThe first column of the matrix specifies the x-axis vector (the\nfourth element must be set to zero), the second column specifies\nthe y-axis, and the third column the z-axis.  The fourth column\nis the origin of the axes (the fourth element must be set to\none).\n\nAn alternative to SetResliceAxes() is to use\nSetResliceAxesDirectionCosines() to set the directions of the\naxes and SetResliceAxesOrigin() to set the origin of the axes.\n"},
  {(char*)"SetResliceAxesDirectionCosines", PyvtkImageReslice_SetResliceAxesDirectionCosines, 1,
   (char*)"V.SetResliceAxesDirectionCosines(float, float, float, float,\n    float, float, float, float, float)\nC++: void SetResliceAxesDirectionCosines(double x0, double x1,\n    double x2, double y0, double y1, double y2, double z0,\n    double z1, double z2)\nV.SetResliceAxesDirectionCosines((float, float, float), (float,\n    float, float), (float, float, float))\nC++: void SetResliceAxesDirectionCosines(const double x[3],\n    const double y[3], const double z[3])\nV.SetResliceAxesDirectionCosines((float, float, float, float,\n    float, float, float, float, float))\nC++: void SetResliceAxesDirectionCosines(const double xyz[9])\n\nSpecify the direction cosines for the ResliceAxes (i.e. the first\nthree elements of each of the first three columns of the\nResliceAxes matrix).  This will modify the current ResliceAxes\nmatrix, or create a new matrix if none exists.\n"},
  {(char*)"GetResliceAxesDirectionCosines", PyvtkImageReslice_GetResliceAxesDirectionCosines, 1,
   (char*)"V.GetResliceAxesDirectionCosines([float, float, float], [float,\n    float, float], [float, float, float])\nC++: void GetResliceAxesDirectionCosines(double x[3], double y[3],\n     double z[3])\nV.GetResliceAxesDirectionCosines([float, float, float, float,\n    float, float, float, float, float])\nC++: void GetResliceAxesDirectionCosines(double xyz[9])\nV.GetResliceAxesDirectionCosines() -> (float, float, float, float,\n     float, float, float, float, float)\nC++: double *GetResliceAxesDirectionCosines()\n\nSpecify the direction cosines for the ResliceAxes (i.e. the first\nthree elements of each of the first three columns of the\nResliceAxes matrix).  This will modify the current ResliceAxes\nmatrix, or create a new matrix if none exists.\n"},
  {(char*)"SetResliceAxesOrigin", PyvtkImageReslice_SetResliceAxesOrigin, 1,
   (char*)"V.SetResliceAxesOrigin(float, float, float)\nC++: void SetResliceAxesOrigin(double x, double y, double z)\nV.SetResliceAxesOrigin((float, float, float))\nC++: void SetResliceAxesOrigin(const double xyz[3])\n\nSpecify the origin for the ResliceAxes (i.e. the first three\nelements of the final column of the ResliceAxes matrix). This\nwill modify the current ResliceAxes matrix, or create new matrix\nif none exists.\n"},
  {(char*)"GetResliceAxesOrigin", PyvtkImageReslice_GetResliceAxesOrigin, 1,
   (char*)"V.GetResliceAxesOrigin([float, float, float])\nC++: void GetResliceAxesOrigin(double xyz[3])\nV.GetResliceAxesOrigin() -> (float, float, float)\nC++: double *GetResliceAxesOrigin()\n\nSpecify the origin for the ResliceAxes (i.e. the first three\nelements of the final column of the ResliceAxes matrix). This\nwill modify the current ResliceAxes matrix, or create new matrix\nif none exists.\n"},
  {(char*)"SetResliceTransform", PyvtkImageReslice_SetResliceTransform, 1,
   (char*)"V.SetResliceTransform(vtkAbstractTransform)\nC++: virtual void SetResliceTransform(vtkAbstractTransform *)\n\nSet a transform to be applied to the resampling grid that has\nbeen defined via the ResliceAxes and the output Origin, Spacing\nand Extent.  Note that applying a transform to the resampling\ngrid (which lies in the output coordinate system) is equivalent\nto applying the inverse of that transform to the input volume. \nNonlinear transforms such as vtkGridTransform and\nvtkThinPlateSplineTransform can be used here.\n"},
  {(char*)"GetResliceTransform", PyvtkImageReslice_GetResliceTransform, 1,
   (char*)"V.GetResliceTransform() -> vtkAbstractTransform\nC++: vtkAbstractTransform *GetResliceTransform()\n\nSet a transform to be applied to the resampling grid that has\nbeen defined via the ResliceAxes and the output Origin, Spacing\nand Extent.  Note that applying a transform to the resampling\ngrid (which lies in the output coordinate system) is equivalent\nto applying the inverse of that transform to the input volume. \nNonlinear transforms such as vtkGridTransform and\nvtkThinPlateSplineTransform can be used here.\n"},
  {(char*)"SetInformationInput", PyvtkImageReslice_SetInformationInput, 1,
   (char*)"V.SetInformationInput(vtkImageData)\nC++: virtual void SetInformationInput(vtkImageData *)\n\nSet a vtkImageData from which the default Spacing, Origin, and\nWholeExtent of the output will be copied.  The spacing, origin,\nand extent will be permuted according to the ResliceAxes.  Any\nvalues set via SetOutputSpacing, SetOutputOrigin, and\nSetOutputExtent will override these values.  By default, the\nSpacing, Origin, and WholeExtent of the Input are used.\n"},
  {(char*)"GetInformationInput", PyvtkImageReslice_GetInformationInput, 1,
   (char*)"V.GetInformationInput() -> vtkImageData\nC++: vtkImageData *GetInformationInput()\n\nSet a vtkImageData from which the default Spacing, Origin, and\nWholeExtent of the output will be copied.  The spacing, origin,\nand extent will be permuted according to the ResliceAxes.  Any\nvalues set via SetOutputSpacing, SetOutputOrigin, and\nSetOutputExtent will override these values.  By default, the\nSpacing, Origin, and WholeExtent of the Input are used.\n"},
  {(char*)"SetTransformInputSampling", PyvtkImageReslice_SetTransformInputSampling, 1,
   (char*)"V.SetTransformInputSampling(int)\nC++: void SetTransformInputSampling(int a)\n\nSpecify whether to transform the spacing, origin and extent of\nthe Input (or the InformationInput) according to the direction\ncosines and origin of the ResliceAxes before applying them as the\ndefault output spacing, origin and extent (default: On).\n"},
  {(char*)"TransformInputSamplingOn", PyvtkImageReslice_TransformInputSamplingOn, 1,
   (char*)"V.TransformInputSamplingOn()\nC++: void TransformInputSamplingOn()\n\nSpecify whether to transform the spacing, origin and extent of\nthe Input (or the InformationInput) according to the direction\ncosines and origin of the ResliceAxes before applying them as the\ndefault output spacing, origin and extent (default: On).\n"},
  {(char*)"TransformInputSamplingOff", PyvtkImageReslice_TransformInputSamplingOff, 1,
   (char*)"V.TransformInputSamplingOff()\nC++: void TransformInputSamplingOff()\n\nSpecify whether to transform the spacing, origin and extent of\nthe Input (or the InformationInput) according to the direction\ncosines and origin of the ResliceAxes before applying them as the\ndefault output spacing, origin and extent (default: On).\n"},
  {(char*)"GetTransformInputSampling", PyvtkImageReslice_GetTransformInputSampling, 1,
   (char*)"V.GetTransformInputSampling() -> int\nC++: int GetTransformInputSampling()\n\nSpecify whether to transform the spacing, origin and extent of\nthe Input (or the InformationInput) according to the direction\ncosines and origin of the ResliceAxes before applying them as the\ndefault output spacing, origin and extent (default: On).\n"},
  {(char*)"SetAutoCropOutput", PyvtkImageReslice_SetAutoCropOutput, 1,
   (char*)"V.SetAutoCropOutput(int)\nC++: void SetAutoCropOutput(int a)\n\nTurn this on if you want to guarantee that the extent of the\noutput will be large enough to ensure that none of the data will\nbe cropped (default: Off).\n"},
  {(char*)"AutoCropOutputOn", PyvtkImageReslice_AutoCropOutputOn, 1,
   (char*)"V.AutoCropOutputOn()\nC++: void AutoCropOutputOn()\n\nTurn this on if you want to guarantee that the extent of the\noutput will be large enough to ensure that none of the data will\nbe cropped (default: Off).\n"},
  {(char*)"AutoCropOutputOff", PyvtkImageReslice_AutoCropOutputOff, 1,
   (char*)"V.AutoCropOutputOff()\nC++: void AutoCropOutputOff()\n\nTurn this on if you want to guarantee that the extent of the\noutput will be large enough to ensure that none of the data will\nbe cropped (default: Off).\n"},
  {(char*)"GetAutoCropOutput", PyvtkImageReslice_GetAutoCropOutput, 1,
   (char*)"V.GetAutoCropOutput() -> int\nC++: int GetAutoCropOutput()\n\nTurn this on if you want to guarantee that the extent of the\noutput will be large enough to ensure that none of the data will\nbe cropped (default: Off).\n"},
  {(char*)"SetWrap", PyvtkImageReslice_SetWrap, 1,
   (char*)"V.SetWrap(int)\nC++: void SetWrap(int a)\n\nTurn on wrap-pad feature (default: Off).\n"},
  {(char*)"GetWrap", PyvtkImageReslice_GetWrap, 1,
   (char*)"V.GetWrap() -> int\nC++: int GetWrap()\n\nTurn on wrap-pad feature (default: Off).\n"},
  {(char*)"WrapOn", PyvtkImageReslice_WrapOn, 1,
   (char*)"V.WrapOn()\nC++: void WrapOn()\n\nTurn on wrap-pad feature (default: Off).\n"},
  {(char*)"WrapOff", PyvtkImageReslice_WrapOff, 1,
   (char*)"V.WrapOff()\nC++: void WrapOff()\n\nTurn on wrap-pad feature (default: Off).\n"},
  {(char*)"SetMirror", PyvtkImageReslice_SetMirror, 1,
   (char*)"V.SetMirror(int)\nC++: void SetMirror(int a)\n\nTurn on mirror-pad feature (default: Off). This will override the\nwrap-pad.\n"},
  {(char*)"GetMirror", PyvtkImageReslice_GetMirror, 1,
   (char*)"V.GetMirror() -> int\nC++: int GetMirror()\n\nTurn on mirror-pad feature (default: Off). This will override the\nwrap-pad.\n"},
  {(char*)"MirrorOn", PyvtkImageReslice_MirrorOn, 1,
   (char*)"V.MirrorOn()\nC++: void MirrorOn()\n\nTurn on mirror-pad feature (default: Off). This will override the\nwrap-pad.\n"},
  {(char*)"MirrorOff", PyvtkImageReslice_MirrorOff, 1,
   (char*)"V.MirrorOff()\nC++: void MirrorOff()\n\nTurn on mirror-pad feature (default: Off). This will override the\nwrap-pad.\n"},
  {(char*)"SetBorder", PyvtkImageReslice_SetBorder, 1,
   (char*)"V.SetBorder(int)\nC++: void SetBorder(int a)\n\nExtend the apparent input border by a half voxel (default: On).\nThis changes how interpolation is handled at the borders of the\ninput image: if the center of an output voxel is beyond the edge\nof the input image, but is within a half voxel width of the edge\n(using the input voxel width), then the value of the output voxel\nis calculated as if the input's edge voxels were duplicated past\nthe edges of the input. This has no effect if Mirror or Wrap are\non.\n"},
  {(char*)"GetBorder", PyvtkImageReslice_GetBorder, 1,
   (char*)"V.GetBorder() -> int\nC++: int GetBorder()\n\nExtend the apparent input border by a half voxel (default: On).\nThis changes how interpolation is handled at the borders of the\ninput image: if the center of an output voxel is beyond the edge\nof the input image, but is within a half voxel width of the edge\n(using the input voxel width), then the value of the output voxel\nis calculated as if the input's edge voxels were duplicated past\nthe edges of the input. This has no effect if Mirror or Wrap are\non.\n"},
  {(char*)"BorderOn", PyvtkImageReslice_BorderOn, 1,
   (char*)"V.BorderOn()\nC++: void BorderOn()\n\nExtend the apparent input border by a half voxel (default: On).\nThis changes how interpolation is handled at the borders of the\ninput image: if the center of an output voxel is beyond the edge\nof the input image, but is within a half voxel width of the edge\n(using the input voxel width), then the value of the output voxel\nis calculated as if the input's edge voxels were duplicated past\nthe edges of the input. This has no effect if Mirror or Wrap are\non.\n"},
  {(char*)"BorderOff", PyvtkImageReslice_BorderOff, 1,
   (char*)"V.BorderOff()\nC++: void BorderOff()\n\nExtend the apparent input border by a half voxel (default: On).\nThis changes how interpolation is handled at the borders of the\ninput image: if the center of an output voxel is beyond the edge\nof the input image, but is within a half voxel width of the edge\n(using the input voxel width), then the value of the output voxel\nis calculated as if the input's edge voxels were duplicated past\nthe edges of the input. This has no effect if Mirror or Wrap are\non.\n"},
  {(char*)"SetInterpolationMode", PyvtkImageReslice_SetInterpolationMode, 1,
   (char*)"V.SetInterpolationMode(int)\nC++: void SetInterpolationMode(int)\n\nSet interpolation mode (default: nearest neighbor).\n"},
  {(char*)"GetInterpolationModeMinValue", PyvtkImageReslice_GetInterpolationModeMinValue, 1,
   (char*)"V.GetInterpolationModeMinValue() -> int\nC++: int GetInterpolationModeMinValue()\n\nSet interpolation mode (default: nearest neighbor).\n"},
  {(char*)"GetInterpolationModeMaxValue", PyvtkImageReslice_GetInterpolationModeMaxValue, 1,
   (char*)"V.GetInterpolationModeMaxValue() -> int\nC++: int GetInterpolationModeMaxValue()\n\nSet interpolation mode (default: nearest neighbor).\n"},
  {(char*)"GetInterpolationMode", PyvtkImageReslice_GetInterpolationMode, 1,
   (char*)"V.GetInterpolationMode() -> int\nC++: int GetInterpolationMode()\n\nSet interpolation mode (default: nearest neighbor).\n"},
  {(char*)"SetInterpolationModeToNearestNeighbor", PyvtkImageReslice_SetInterpolationModeToNearestNeighbor, 1,
   (char*)"V.SetInterpolationModeToNearestNeighbor()\nC++: void SetInterpolationModeToNearestNeighbor()\n\nSet interpolation mode (default: nearest neighbor).\n"},
  {(char*)"SetInterpolationModeToLinear", PyvtkImageReslice_SetInterpolationModeToLinear, 1,
   (char*)"V.SetInterpolationModeToLinear()\nC++: void SetInterpolationModeToLinear()\n\nSet interpolation mode (default: nearest neighbor).\n"},
  {(char*)"SetInterpolationModeToCubic", PyvtkImageReslice_SetInterpolationModeToCubic, 1,
   (char*)"V.SetInterpolationModeToCubic()\nC++: void SetInterpolationModeToCubic()\n\nSet interpolation mode (default: nearest neighbor).\n"},
  {(char*)"GetInterpolationModeAsString", PyvtkImageReslice_GetInterpolationModeAsString, 1,
   (char*)"V.GetInterpolationModeAsString() -> string\nC++: virtual const char *GetInterpolationModeAsString()\n\nSet interpolation mode (default: nearest neighbor).\n"},
  {(char*)"SetOptimization", PyvtkImageReslice_SetOptimization, 1,
   (char*)"V.SetOptimization(int)\nC++: void SetOptimization(int a)\n\nTurn on and off optimizations (default on, they should only be\nturned off for testing purposes).\n"},
  {(char*)"GetOptimization", PyvtkImageReslice_GetOptimization, 1,
   (char*)"V.GetOptimization() -> int\nC++: int GetOptimization()\n\nTurn on and off optimizations (default on, they should only be\nturned off for testing purposes).\n"},
  {(char*)"OptimizationOn", PyvtkImageReslice_OptimizationOn, 1,
   (char*)"V.OptimizationOn()\nC++: void OptimizationOn()\n\nTurn on and off optimizations (default on, they should only be\nturned off for testing purposes).\n"},
  {(char*)"OptimizationOff", PyvtkImageReslice_OptimizationOff, 1,
   (char*)"V.OptimizationOff()\nC++: void OptimizationOff()\n\nTurn on and off optimizations (default on, they should only be\nturned off for testing purposes).\n"},
  {(char*)"SetBackgroundColor", PyvtkImageReslice_SetBackgroundColor, 1,
   (char*)"V.SetBackgroundColor(float, float, float, float)\nC++: void SetBackgroundColor(double, double, double, double)\nV.SetBackgroundColor((float, float, float, float))\nC++: void SetBackgroundColor(double a[4])\n\n"},
  {(char*)"GetBackgroundColor", PyvtkImageReslice_GetBackgroundColor, 1,
   (char*)"V.GetBackgroundColor() -> (float, float, float, float)\nC++: double *GetBackgroundColor()\n\n"},
  {(char*)"SetBackgroundLevel", PyvtkImageReslice_SetBackgroundLevel, 1,
   (char*)"V.SetBackgroundLevel(float)\nC++: void SetBackgroundLevel(double v)\n\nSet background grey level (for single-component images).\n"},
  {(char*)"GetBackgroundLevel", PyvtkImageReslice_GetBackgroundLevel, 1,
   (char*)"V.GetBackgroundLevel() -> float\nC++: double GetBackgroundLevel()\n\nSet background grey level (for single-component images).\n"},
  {(char*)"SetOutputSpacing", PyvtkImageReslice_SetOutputSpacing, 1,
   (char*)"V.SetOutputSpacing(float, float, float)\nC++: virtual void SetOutputSpacing(double x, double y, double z)\nV.SetOutputSpacing((float, float, float))\nC++: virtual void SetOutputSpacing(const double a[3])\n\nSet the voxel spacing for the output data.  The default output\nspacing is the input spacing permuted through the ResliceAxes.\n"},
  {(char*)"GetOutputSpacing", PyvtkImageReslice_GetOutputSpacing, 1,
   (char*)"V.GetOutputSpacing() -> (float, float, float)\nC++: double *GetOutputSpacing()\n\n"},
  {(char*)"SetOutputSpacingToDefault", PyvtkImageReslice_SetOutputSpacingToDefault, 1,
   (char*)"V.SetOutputSpacingToDefault()\nC++: void SetOutputSpacingToDefault()\n\nSet the voxel spacing for the output data.  The default output\nspacing is the input spacing permuted through the ResliceAxes.\n"},
  {(char*)"SetOutputOrigin", PyvtkImageReslice_SetOutputOrigin, 1,
   (char*)"V.SetOutputOrigin(float, float, float)\nC++: virtual void SetOutputOrigin(double x, double y, double z)\nV.SetOutputOrigin((float, float, float))\nC++: virtual void SetOutputOrigin(const double a[3])\n\nSet the origin for the output data.  The default output origin is\nthe input origin permuted through the ResliceAxes.\n"},
  {(char*)"GetOutputOrigin", PyvtkImageReslice_GetOutputOrigin, 1,
   (char*)"V.GetOutputOrigin() -> (float, float, float)\nC++: double *GetOutputOrigin()\n\n"},
  {(char*)"SetOutputOriginToDefault", PyvtkImageReslice_SetOutputOriginToDefault, 1,
   (char*)"V.SetOutputOriginToDefault()\nC++: void SetOutputOriginToDefault()\n\nSet the origin for the output data.  The default output origin is\nthe input origin permuted through the ResliceAxes.\n"},
  {(char*)"SetOutputExtent", PyvtkImageReslice_SetOutputExtent, 1,
   (char*)"V.SetOutputExtent(int, int, int, int, int, int)\nC++: virtual void SetOutputExtent(int a, int b, int c, int d,\n    int e, int f)\nV.SetOutputExtent((int, int, int, int, int, int))\nC++: virtual void SetOutputExtent(const int a[6])\n\nSet the extent for the output data.  The default output extent is\nthe input extent permuted through the ResliceAxes.\n"},
  {(char*)"GetOutputExtent", PyvtkImageReslice_GetOutputExtent, 1,
   (char*)"V.GetOutputExtent() -> (int, int, int, int, int, int)\nC++: int *GetOutputExtent()\n\n"},
  {(char*)"SetOutputExtentToDefault", PyvtkImageReslice_SetOutputExtentToDefault, 1,
   (char*)"V.SetOutputExtentToDefault()\nC++: void SetOutputExtentToDefault()\n\nSet the extent for the output data.  The default output extent is\nthe input extent permuted through the ResliceAxes.\n"},
  {(char*)"SetOutputDimensionality", PyvtkImageReslice_SetOutputDimensionality, 1,
   (char*)"V.SetOutputDimensionality(int)\nC++: void SetOutputDimensionality(int a)\n\nForce the dimensionality of the output to either 1, 2, 3 or 0\n(default: 3).  If the dimensionality is 2D, then the Z extent of\nthe output is forced to (0,0) and the Z origin of the output is\nforced to 0.0 (i.e. the output extent is confined to the xy\nplane).  If the dimensionality is 1D, the output extent is\nconfined to the x axis. For 0D, the output extent consists of a\nsingle voxel at (0,0,0).\n"},
  {(char*)"GetOutputDimensionality", PyvtkImageReslice_GetOutputDimensionality, 1,
   (char*)"V.GetOutputDimensionality() -> int\nC++: int GetOutputDimensionality()\n\nForce the dimensionality of the output to either 1, 2, 3 or 0\n(default: 3).  If the dimensionality is 2D, then the Z extent of\nthe output is forced to (0,0) and the Z origin of the output is\nforced to 0.0 (i.e. the output extent is confined to the xy\nplane).  If the dimensionality is 1D, the output extent is\nconfined to the x axis. For 0D, the output extent consists of a\nsingle voxel at (0,0,0).\n"},
  {(char*)"GetMTime", PyvtkImageReslice_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nWhen determining the modified time of the filter, this check the\nmodified time of the transform and matrix.\n"},
  {(char*)"ReportReferences", PyvtkImageReslice_ReportReferences, 1,
   (char*)"V.ReportReferences(vtkGarbageCollector)\nC++: virtual void ReportReferences(vtkGarbageCollector *)\n\nReport object referenced by instances of this class.\n"},
  {(char*)"SetInterpolate", PyvtkImageReslice_SetInterpolate, 1,
   (char*)"V.SetInterpolate(int)\nC++: void SetInterpolate(int t)\n\nConvenient methods for switching between nearest-neighbor and\nlinear interpolation. InterpolateOn() is equivalent to\nSetInterpolationModeToLinear() and InterpolateOff() is equivalent\nto SetInterpolationModeToNearestNeighbor() You should not use\nthese methods if you use the SetInterpolationMode methods.\n"},
  {(char*)"InterpolateOn", PyvtkImageReslice_InterpolateOn, 1,
   (char*)"V.InterpolateOn()\nC++: void InterpolateOn()\n\nConvenient methods for switching between nearest-neighbor and\nlinear interpolation. InterpolateOn() is equivalent to\nSetInterpolationModeToLinear() and InterpolateOff() is equivalent\nto SetInterpolationModeToNearestNeighbor() You should not use\nthese methods if you use the SetInterpolationMode methods.\n"},
  {(char*)"InterpolateOff", PyvtkImageReslice_InterpolateOff, 1,
   (char*)"V.InterpolateOff()\nC++: void InterpolateOff()\n\nConvenient methods for switching between nearest-neighbor and\nlinear interpolation. InterpolateOn() is equivalent to\nSetInterpolationModeToLinear() and InterpolateOff() is equivalent\nto SetInterpolationModeToNearestNeighbor() You should not use\nthese methods if you use the SetInterpolationMode methods.\n"},
  {(char*)"GetInterpolate", PyvtkImageReslice_GetInterpolate, 1,
   (char*)"V.GetInterpolate() -> int\nC++: int GetInterpolate()\n\nConvenient methods for switching between nearest-neighbor and\nlinear interpolation. InterpolateOn() is equivalent to\nSetInterpolationModeToLinear() and InterpolateOff() is equivalent\nto SetInterpolationModeToNearestNeighbor() You should not use\nthese methods if you use the SetInterpolationMode methods.\n"},
  {(char*)"SetStencil", PyvtkImageReslice_SetStencil, 1,
   (char*)"V.SetStencil(vtkImageStencilData)\nC++: void SetStencil(vtkImageStencilData *stencil)\n\nUse a stencil to limit the calculations to a specific region of\nthe output.  Portions of the output that are 'outside' the\nstencil will be cleared to the background color.\n"},
  {(char*)"GetStencil", PyvtkImageReslice_GetStencil, 1,
   (char*)"V.GetStencil() -> vtkImageStencilData\nC++: vtkImageStencilData *GetStencil()\n\nUse a stencil to limit the calculations to a specific region of\nthe output.  Portions of the output that are 'outside' the\nstencil will be cleared to the background color.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageReslice_StaticNew()
{
  return vtkImageReslice::New();
}

PyObject *PyVTKClass_vtkImageResliceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageReslice_StaticNew,
    PyvtkImageReslice_Methods,
    "vtkImageReslice", modulename,
    NULL, NULL,
    PyvtkImageReslice_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageReslice_Doc()
{
  static const char *docstring[] = {
    "vtkImageReslice - Reslices a volume along a new set of axes.\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "vtkImageReslice is the swiss-army-knife of image geometry filters: It\ncan permute, rotate, flip, scale, resample, deform, and pad image\ndata in any combination with reasonably high efficiency.  Simple\noperations such as permutation, resampling and padding are done with\nsimilar efficiently to the specialized vtkImagePermute,\nvtkImageResample, and vtkImagePad filters.  There are a number of\ntasks th",
    "at vtkImageReslice is well suited for:\n\n1) Application of simple rotations, scales, and translations to an\nimage. It is often a good idea to use vtkImageChangeInformation to\ncenter the image first, so that scales and rotations occur around the\ncenter rather than around the lower-left corner of the image.\n\n2) Resampling of one data set to match the voxel sampling of a second\ndata set via the SetInf",
    "ormationInput() method, e.g. for the purpose\nof comparing two images or combining two images. A transformation,\neither linear or nonlinear, can be applied at the same time via the\nSetResliceTransform method if the two images are not in the same\ncoordinate space.\n\n3) Extraction of slices from an image volume.  The most convenient\nway to do this is to use SetResliceAxesDirectionCosines() to specify\n",
    "the orientation of the slice.  The direction cosines give the x, y,\nand z axes for the output volume.  The method\nSetOutputDimensionality(2) is used to specify that want to output a\nslice rather than a volume.  The SetResliceAxesOrigin() command is\nused to provide an (x,y,z) point that the slice will pass through.\nYou can use both the ResliceAxes and the ResliceTransform at the same\ntime, in order",
    " to extract slices from a volume that you have applied\na transformation to.\n\nCaveats:\n\nThis filter is very inefficient if the output X dimension is 1.\n\nSee Also:\n\nvtkAbstractTransform vtkMatrix4x4\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageReslice(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageResliceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageReslice", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_RESLICE_NEAREST", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_RESLICE_LINEAR", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_RESLICE_RESERVED_2", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(3);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_RESLICE_CUBIC", o) != 0)
    {
    Py_DECREF(o);
    }

}

