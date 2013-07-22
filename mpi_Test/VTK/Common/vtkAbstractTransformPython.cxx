// python wrapper for vtkAbstractTransform
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
#include "vtkAbstractTransform.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkAbstractTransform(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkAbstractTransform(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkAbstractTransformNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkAbstractTransformNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkAbstractTransform_Doc();


static PyObject *
PyvtkAbstractTransform_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

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
      tempr = op->vtkAbstractTransform::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractTransform_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

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
      tempr = op->vtkAbstractTransform::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractTransform_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  vtkAbstractTransform *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkAbstractTransform::NewInstance();
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
PyvtkAbstractTransform_TransformPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->TransformPoint(temp0, temp1);
      }
    else
      {
      op->vtkAbstractTransform::TransformPoint(temp0, temp1);
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
PyvtkAbstractTransform_TransformPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->TransformPoint(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkAbstractTransform::TransformPoint(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractTransform_TransformPoint_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  double temp0[3];
  const int size0 = 3;
  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      tempr = op->TransformPoint(temp0);
      }
    else
      {
      tempr = op->vtkAbstractTransform::TransformPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractTransform_TransformPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkAbstractTransform_TransformPoint_s1(self, args);
    case 3:
      return PyvtkAbstractTransform_TransformPoint_s2(self, args);
    case 1:
      return PyvtkAbstractTransform_TransformPoint_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "TransformPoint");
  return NULL;
}



static PyObject *
PyvtkAbstractTransform_TransformFloatPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformFloatPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  float temp0;
  float temp1;
  float temp2;
  float *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->TransformFloatPoint(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkAbstractTransform::TransformFloatPoint(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractTransform_TransformFloatPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformFloatPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  float temp0[3];
  const int size0 = 3;
  float *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      tempr = op->TransformFloatPoint(temp0);
      }
    else
      {
      tempr = op->vtkAbstractTransform::TransformFloatPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractTransform_TransformFloatPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkAbstractTransform_TransformFloatPoint_s1(self, args);
    case 1:
      return PyvtkAbstractTransform_TransformFloatPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "TransformFloatPoint");
  return NULL;
}



static PyObject *
PyvtkAbstractTransform_TransformDoublePoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformDoublePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->TransformDoublePoint(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkAbstractTransform::TransformDoublePoint(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractTransform_TransformDoublePoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformDoublePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  double temp0[3];
  const int size0 = 3;
  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      tempr = op->TransformDoublePoint(temp0);
      }
    else
      {
      tempr = op->vtkAbstractTransform::TransformDoublePoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractTransform_TransformDoublePoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkAbstractTransform_TransformDoublePoint_s1(self, args);
    case 1:
      return PyvtkAbstractTransform_TransformDoublePoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "TransformDoublePoint");
  return NULL;
}



static PyObject *
PyvtkAbstractTransform_TransformNormalAtPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformNormalAtPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
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
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      op->TransformNormalAtPoint(temp0, temp1, temp2);
      }
    else
      {
      op->vtkAbstractTransform::TransformNormalAtPoint(temp0, temp1, temp2);
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
PyvtkAbstractTransform_TransformNormalAtPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformNormalAtPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  const int size1 = 3;
  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    if (ap.IsBound())
      {
      tempr = op->TransformNormalAtPoint(temp0, temp1);
      }
    else
      {
      tempr = op->vtkAbstractTransform::TransformNormalAtPoint(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractTransform_TransformNormalAtPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkAbstractTransform_TransformNormalAtPoint_s1(self, args);
    case 2:
      return PyvtkAbstractTransform_TransformNormalAtPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "TransformNormalAtPoint");
  return NULL;
}



static PyObject *
PyvtkAbstractTransform_TransformDoubleNormalAtPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformDoubleNormalAtPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  const int size1 = 3;
  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    if (ap.IsBound())
      {
      tempr = op->TransformDoubleNormalAtPoint(temp0, temp1);
      }
    else
      {
      tempr = op->vtkAbstractTransform::TransformDoubleNormalAtPoint(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractTransform_TransformFloatNormalAtPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformFloatNormalAtPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  float temp0[3];
  const int size0 = 3;
  float temp1[3];
  const int size1 = 3;
  float *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    if (ap.IsBound())
      {
      tempr = op->TransformFloatNormalAtPoint(temp0, temp1);
      }
    else
      {
      tempr = op->vtkAbstractTransform::TransformFloatNormalAtPoint(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractTransform_TransformVectorAtPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformVectorAtPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
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
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      op->TransformVectorAtPoint(temp0, temp1, temp2);
      }
    else
      {
      op->vtkAbstractTransform::TransformVectorAtPoint(temp0, temp1, temp2);
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
PyvtkAbstractTransform_TransformVectorAtPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformVectorAtPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  const int size1 = 3;
  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    if (ap.IsBound())
      {
      tempr = op->TransformVectorAtPoint(temp0, temp1);
      }
    else
      {
      tempr = op->vtkAbstractTransform::TransformVectorAtPoint(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractTransform_TransformVectorAtPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkAbstractTransform_TransformVectorAtPoint_s1(self, args);
    case 2:
      return PyvtkAbstractTransform_TransformVectorAtPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "TransformVectorAtPoint");
  return NULL;
}



static PyObject *
PyvtkAbstractTransform_TransformDoubleVectorAtPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformDoubleVectorAtPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  const int size1 = 3;
  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    if (ap.IsBound())
      {
      tempr = op->TransformDoubleVectorAtPoint(temp0, temp1);
      }
    else
      {
      tempr = op->vtkAbstractTransform::TransformDoubleVectorAtPoint(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractTransform_TransformFloatVectorAtPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformFloatVectorAtPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  float temp0[3];
  const int size0 = 3;
  float temp1[3];
  const int size1 = 3;
  float *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    if (ap.IsBound())
      {
      tempr = op->TransformFloatVectorAtPoint(temp0, temp1);
      }
    else
      {
      tempr = op->vtkAbstractTransform::TransformFloatVectorAtPoint(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractTransform_TransformPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  vtkPoints *temp0 = NULL;
  vtkPoints *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkPoints"))
    {
    if (ap.IsBound())
      {
      op->TransformPoints(temp0, temp1);
      }
    else
      {
      op->vtkAbstractTransform::TransformPoints(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractTransform_TransformPointsNormalsVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformPointsNormalsVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  vtkPoints *temp0 = NULL;
  vtkPoints *temp1 = NULL;
  vtkDataArray *temp2 = NULL;
  vtkDataArray *temp3 = NULL;
  vtkDataArray *temp4 = NULL;
  vtkDataArray *temp5 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkPoints") &&
      ap.GetVTKObject(temp2, "vtkDataArray") &&
      ap.GetVTKObject(temp3, "vtkDataArray") &&
      ap.GetVTKObject(temp4, "vtkDataArray") &&
      ap.GetVTKObject(temp5, "vtkDataArray"))
    {
    if (ap.IsBound())
      {
      op->TransformPointsNormalsVectors(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkAbstractTransform::TransformPointsNormalsVectors(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractTransform_GetInverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  vtkAbstractTransform *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInverse();
      }
    else
      {
      tempr = op->vtkAbstractTransform::GetInverse();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractTransform_SetInverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  vtkAbstractTransform *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
    {
    if (ap.IsBound())
      {
      op->SetInverse(temp0);
      }
    else
      {
      op->vtkAbstractTransform::SetInverse(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractTransform_Inverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Inverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->Inverse();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractTransform_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  vtkAbstractTransform *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkAbstractTransform::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractTransform_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkAbstractTransform::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractTransform_InternalTransformPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalTransformPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    op->InternalTransformPoint(temp0, temp1);

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
PyvtkAbstractTransform_InternalTransformDerivative(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalTransformDerivative");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2[3][3];
  double save2[3][3];
  static int size2[2] = { 3, 3 };
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetNArray(*temp2, 2, size2))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(*temp2, *save2, size2[0]*size2[1]);

    op->InternalTransformDerivative(temp0, temp1, temp2);

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(*temp2, *save2, size2[0]*size2[1]) &&
        !ap.ErrorOccurred())
      {
      ap.SetNArray(2, *temp2, 2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractTransform_MakeTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  vtkAbstractTransform *tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->MakeTransform();

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
PyvtkAbstractTransform_CircuitCheck(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CircuitCheck");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  vtkAbstractTransform *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
    {
    if (ap.IsBound())
      {
      tempr = op->CircuitCheck(temp0);
      }
    else
      {
      tempr = op->vtkAbstractTransform::CircuitCheck(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractTransform_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

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
      tempr = op->vtkAbstractTransform::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkAbstractTransform_Identity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Identity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractTransform *op = static_cast<vtkAbstractTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Identity();
      }
    else
      {
      op->vtkAbstractTransform::Identity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}
#endif

static PyMethodDef PyvtkAbstractTransform_Methods[] = {
  {(char*)"GetClassName", PyvtkAbstractTransform_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAbstractTransform_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAbstractTransform_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkAbstractTransform\nC++: vtkAbstractTransform *NewInstance()\n\n"},
  {(char*)"TransformPoint", PyvtkAbstractTransform_TransformPoint, 1,
   (char*)"V.TransformPoint((float, float, float), [float, float, float])\nC++: void TransformPoint(const double in[3], double out[3])\nV.TransformPoint(float, float, float) -> (float, float, float)\nC++: double *TransformPoint(double x, double y, double z)\nV.TransformPoint((float, float, float)) -> (float, float, float)\nC++: double *TransformPoint(const double point[3])\n\nApply the transformation to a double-precision coordinate. You\ncan use the same array to store both the input and output point.\n"},
  {(char*)"TransformFloatPoint", PyvtkAbstractTransform_TransformFloatPoint, 1,
   (char*)"V.TransformFloatPoint(float, float, float) -> (float, float,\n    float)\nC++: float *TransformFloatPoint(float x, float y, float z)\nV.TransformFloatPoint((float, float, float)) -> (float, float,\n    float)\nC++: float *TransformFloatPoint(const float point[3])\n\nApply the transformation to an (x,y,z) coordinate. Use this if\nyou are programming in Python, tcl or Java.\n"},
  {(char*)"TransformDoublePoint", PyvtkAbstractTransform_TransformDoublePoint, 1,
   (char*)"V.TransformDoublePoint(float, float, float) -> (float, float,\n    float)\nC++: double *TransformDoublePoint(double x, double y, double z)\nV.TransformDoublePoint((float, float, float)) -> (float, float,\n    float)\nC++: double *TransformDoublePoint(const double point[3])\n\nApply the transformation to a double-precision (x,y,z)\ncoordinate. Use this if you are programming in Python, tcl or\nJava.\n"},
  {(char*)"TransformNormalAtPoint", PyvtkAbstractTransform_TransformNormalAtPoint, 1,
   (char*)"V.TransformNormalAtPoint((float, float, float), (float, float,\n    float), [float, float, float])\nC++: void TransformNormalAtPoint(const double point[3],\n    const double in[3], double out[3])\nV.TransformNormalAtPoint((float, float, float), (float, float,\n    float)) -> (float, float, float)\nC++: double *TransformNormalAtPoint(const double point[3],\n    const double normal[3])\n\nApply the transformation to a normal at the specified vertex.  If\nthe transformation is a vtkLinearTransform, you can use\nTransformNormal() instead.\n"},
  {(char*)"TransformDoubleNormalAtPoint", PyvtkAbstractTransform_TransformDoubleNormalAtPoint, 1,
   (char*)"V.TransformDoubleNormalAtPoint((float, float, float), (float,\n    float, float)) -> (float, float, float)\nC++: double *TransformDoubleNormalAtPoint(const double point[3],\n    const double normal[3])\n\nApply the transformation to a double-precision normal at the\nspecified vertex.  If the transformation is a vtkLinearTransform,\nyou can use TransformDoubleNormal() instead.\n"},
  {(char*)"TransformFloatNormalAtPoint", PyvtkAbstractTransform_TransformFloatNormalAtPoint, 1,
   (char*)"V.TransformFloatNormalAtPoint((float, float, float), (float,\n    float, float)) -> (float, float, float)\nC++: float *TransformFloatNormalAtPoint(const float point[3],\n    const float normal[3])\n\nApply the transformation to a single-precision normal at the\nspecified vertex.  If the transformation is a vtkLinearTransform,\nyou can use TransformFloatNormal() instead.\n"},
  {(char*)"TransformVectorAtPoint", PyvtkAbstractTransform_TransformVectorAtPoint, 1,
   (char*)"V.TransformVectorAtPoint((float, float, float), (float, float,\n    float), [float, float, float])\nC++: void TransformVectorAtPoint(const double point[3],\n    const double in[3], double out[3])\nV.TransformVectorAtPoint((float, float, float), (float, float,\n    float)) -> (float, float, float)\nC++: double *TransformVectorAtPoint(const double point[3],\n    const double vector[3])\n\nApply the transformation to a vector at the specified vertex.  If\nthe transformation is a vtkLinearTransform, you can use\nTransformVector() instead.\n"},
  {(char*)"TransformDoubleVectorAtPoint", PyvtkAbstractTransform_TransformDoubleVectorAtPoint, 1,
   (char*)"V.TransformDoubleVectorAtPoint((float, float, float), (float,\n    float, float)) -> (float, float, float)\nC++: double *TransformDoubleVectorAtPoint(const double point[3],\n    const double vector[3])\n\nApply the transformation to a double-precision vector at the\nspecified vertex.  If the transformation is a vtkLinearTransform,\nyou can use TransformDoubleVector() instead.\n"},
  {(char*)"TransformFloatVectorAtPoint", PyvtkAbstractTransform_TransformFloatVectorAtPoint, 1,
   (char*)"V.TransformFloatVectorAtPoint((float, float, float), (float,\n    float, float)) -> (float, float, float)\nC++: float *TransformFloatVectorAtPoint(const float point[3],\n    const float vector[3])\n\nApply the transformation to a single-precision vector at the\nspecified vertex.  If the transformation is a vtkLinearTransform,\nyou can use TransformFloatVector() instead.\n"},
  {(char*)"TransformPoints", PyvtkAbstractTransform_TransformPoints, 1,
   (char*)"V.TransformPoints(vtkPoints, vtkPoints)\nC++: virtual void TransformPoints(vtkPoints *inPts,\n    vtkPoints *outPts)\n\nApply the transformation to a series of points, and append the\nresults to outPts.\n"},
  {(char*)"TransformPointsNormalsVectors", PyvtkAbstractTransform_TransformPointsNormalsVectors, 1,
   (char*)"V.TransformPointsNormalsVectors(vtkPoints, vtkPoints,\n    vtkDataArray, vtkDataArray, vtkDataArray, vtkDataArray)\nC++: virtual void TransformPointsNormalsVectors(vtkPoints *inPts,\n    vtkPoints *outPts, vtkDataArray *inNms, vtkDataArray *outNms,\n    vtkDataArray *inVrs, vtkDataArray *outVrs)\n\nApply the transformation to a combination of points, normals and\nvectors.\n"},
  {(char*)"GetInverse", PyvtkAbstractTransform_GetInverse, 1,
   (char*)"V.GetInverse() -> vtkAbstractTransform\nC++: vtkAbstractTransform *GetInverse()\n\nGet the inverse of this transform.  If you modify this transform,\nthe returned inverse transform will automatically update.  If you\nwant the inverse of a vtkTransform, you might want to use\nGetLinearInverse() instead which will type cast the result from\nvtkAbstractTransform to vtkLinearTransform.\n"},
  {(char*)"SetInverse", PyvtkAbstractTransform_SetInverse, 1,
   (char*)"V.SetInverse(vtkAbstractTransform)\nC++: void SetInverse(vtkAbstractTransform *transform)\n\nSet a transformation that this transform will be the inverse of.\nThis transform will automatically update to agree with the\ninverse transform that you set.\n"},
  {(char*)"Inverse", PyvtkAbstractTransform_Inverse, 1,
   (char*)"V.Inverse()\nC++: virtual void Inverse()\n\nInvert the transformation.\n"},
  {(char*)"DeepCopy", PyvtkAbstractTransform_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkAbstractTransform)\nC++: void DeepCopy(vtkAbstractTransform *)\n\nCopy this transform from another of the same type.\n"},
  {(char*)"Update", PyvtkAbstractTransform_Update, 1,
   (char*)"V.Update()\nC++: void Update()\n\nUpdate the transform to account for any changes which have been\nmade.  You do not have to call this method yourself, it is called\nautomatically whenever the transform needs an update.\n"},
  {(char*)"InternalTransformPoint", PyvtkAbstractTransform_InternalTransformPoint, 1,
   (char*)"V.InternalTransformPoint((float, float, float), [float, float,\n    float])\nC++: virtual void InternalTransformPoint(const double in[3],\n    double out[3])\n\nThis will calculate the transformation without calling Update.\nMeant for use only within other VTK classes.\n"},
  {(char*)"InternalTransformDerivative", PyvtkAbstractTransform_InternalTransformDerivative, 1,
   (char*)"V.InternalTransformDerivative((float, float, float), [float,\n    float, float], [[float, float, float], [float, float, float],\n    [float, float, float]])\nC++: virtual void InternalTransformDerivative(const double in[3],\n    double out[3], double derivative[3][3])\n\nThis will transform a point and, at the same time, calculate a\n3x3 Jacobian matrix that provides the partial derivatives of the\ntransformation at that point.  This method does not call Update.\nMeant for use only within other VTK classes.\n"},
  {(char*)"MakeTransform", PyvtkAbstractTransform_MakeTransform, 1,
   (char*)"V.MakeTransform() -> vtkAbstractTransform\nC++: virtual vtkAbstractTransform *MakeTransform()\n\nMake another transform of the same type.\n"},
  {(char*)"CircuitCheck", PyvtkAbstractTransform_CircuitCheck, 1,
   (char*)"V.CircuitCheck(vtkAbstractTransform) -> int\nC++: virtual int CircuitCheck(vtkAbstractTransform *transform)\n\nCheck for self-reference.  Will return true if concatenating with\nthe specified transform, setting it to be our inverse, or setting\nit to be our input will create a circular reference. CircuitCheck\nis automatically called by SetInput(), SetInverse(), and\nConcatenate(vtkXTransform *).  Avoid using this function, it is\nexperimental.\n"},
  {(char*)"GetMTime", PyvtkAbstractTransform_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nOverride GetMTime necessary because of inverse transforms.\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"Identity", PyvtkAbstractTransform_Identity, 1,
   (char*)"V.Identity()\nC++: void Identity()\n\n@deprecated This method is deprecated in the base class.  It is\nstill valid to use it on many of the specialized classes.\n"},
#endif
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkAbstractTransformNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkAbstractTransform_Methods,
    "vtkAbstractTransform", modulename,
    NULL, NULL,
    PyvtkAbstractTransform_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkAbstractTransform_Doc()
{
  static const char *docstring[] = {
    "vtkTransformConcatenationStack - Store a stack of concatenations.\n\n",
    "Superclass: vtkObject\n\n",
    "A helper class (not derived from vtkObject) to store a stack of\nconcatenations.\n\nSee Also:\n\nvtkGeneralTransform vtkWarpTransform vtkHomogeneousTransform\nvtkLinearTransform vtkIdentityTransform vtkTransformPolyDataFilter\nvtkTransformFilter vtkImageReslice vtkImplicitFunction\n\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkTransformPair_Doc();


static PyObject *
PyvtkTransformPair_SwapForwardInverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SwapForwardInverse");
  void *vp = ap.GetSelfPointer(self);
  vtkTransformPair *op = static_cast<vtkTransformPair *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    op->SwapForwardInverse();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTransformPair_Methods[] = {
  {(char*)"SwapForwardInverse", PyvtkTransformPair_SwapForwardInverse, 1,
   (char*)"V.SwapForwardInverse()\nC++: void SwapForwardInverse()\n\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkTransformPair_Type
extern PyTypeObject PyvtkTransformPair_Type;
#define DECLARED_PyvtkTransformPair_Type
#endif


static PyObject *
PyvtkTransformPair_vtkTransformPair(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTransformPair");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkTransformPair *op = new vtkTransformPair();

    result = PyVTKSpecialObject_New("vtkTransformPair", op);
    }

  return result;
}

static PyMethodDef PyvtkTransformPair_vtkTransformPair_Methods[] = {
  {NULL, NULL, 0, NULL}
};

static PyMethodDef PyvtkTransformPair_NewMethod = \
{ (char*)"vtkTransformPair", PyvtkTransformPair_vtkTransformPair, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkTransformPair_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkTransformPair_vtkTransformPair(NULL, args);
}
#endif

static void PyvtkTransformPair_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkTransformPair *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkTransformPair_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", self->ob_type->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

PyTypeObject PyvtkTransformPair_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkTransformPair", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkTransformPair_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkTransformPair_Hash, // tp_hash
  0, // tp_call
  0, // tp_str
#if PY_VERSION_HEX >= 0x02020000
  PyObject_GenericGetAttr, // tp_getattro
#else
  PyVTKSpecialObject_GetAttr, // tp_getattro
#endif
  0, // tp_setattro
  0, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  0, // tp_doc
  0, // tp_traverse
  0, // tp_clear
  0, // tp_richcompare
  0, // tp_weaklistoffset
#if PY_VERSION_HEX >= 0x02020000
  0, // tp_iter
  0, // tp_iternext
  PyvtkTransformPair_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkTransformPair_New, // tp_new
#if PY_VERSION_HEX >= 0x02030000
  PyObject_Del, // tp_free
#else
  _PyObject_Del, // tp_free
#endif
  0, // tp_is_gc
  0, // tp_bases
  0, // tp_mro
  0, // tp_cache
  0, // tp_subclasses
  0, // tp_weaklist
#endif
  VTK_WRAP_PYTHON_SUPRESS_UNINITIALIZED
};

static void *PyvtkTransformPair_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkTransformPair(*static_cast<const vtkTransformPair*>(obj));
    }
  return 0;
}

static PyObject *PyvtkTransformPair_TypeNew(const char *)
{
  return PyVTKSpecialType_New(
    &PyvtkTransformPair_Type,
    PyvtkTransformPair_Methods,
    PyvtkTransformPair_vtkTransformPair_Methods,
    &PyvtkTransformPair_NewMethod,
    PyvtkTransformPair_Doc(), &PyvtkTransformPair_CCopy);
}

const char **PyvtkTransformPair_Doc()
{
  static const char *docstring[] = {
    "vtkTransformConcatenationStack - Store a stack of concatenations.\n\n",
    "A helper class (not derived from vtkObject) to store a stack of\nconcatenations.\n\nSee Also:\n\nvtkGeneralTransform vtkWarpTransform vtkHomogeneousTransform\nvtkLinearTransform vtkIdentityTransform vtkTransformPolyDataFilter\nvtkTransformFilter vtkImageReslice vtkImplicitFunction\n\n",
    "V.vtkTransformPair()\nC++: vtkTransformPair()\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAbstractTransform(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAbstractTransformNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAbstractTransform", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkTransformPair_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTransformPair", o) != 0)
    {
    Py_DECREF(o);
    }

}

