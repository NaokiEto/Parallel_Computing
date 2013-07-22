// python wrapper for vtkTransform
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
#include "vtkTransform.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTransform(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTransform(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTransformNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTransformNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkLinearTransformNew
extern "C" { PyObject *PyVTKClass_vtkLinearTransformNew(const char *); }
#define DECLARED_PyVTKClass_vtkLinearTransformNew
#endif

static const char **PyvtkTransform_Doc();


static PyObject *
PyvtkTransform_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

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
      tempr = op->vtkTransform::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransform_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

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
      tempr = op->vtkTransform::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransform_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  vtkTransform *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTransform::NewInstance();
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
PyvtkTransform_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTransform *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTransform::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransform_Identity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Identity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Identity();
      }
    else
      {
      op->vtkTransform::Identity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransform_Inverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Inverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Inverse();
      }
    else
      {
      op->vtkTransform::Inverse();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransform_Translate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Translate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

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
      op->Translate(temp0, temp1, temp2);
      }
    else
      {
      op->vtkTransform::Translate(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTransform_Translate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Translate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->Translate(temp0);
      }
    else
      {
      op->vtkTransform::Translate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTransform_Translate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTransform_Translate_s1(self, args);
    case 1:
      return PyvtkTransform_Translate_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Translate");
  return NULL;
}



static PyObject *
PyvtkTransform_RotateWXYZ_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotateWXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

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
      op->RotateWXYZ(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkTransform::RotateWXYZ(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTransform_RotateWXYZ_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotateWXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  double temp0;
  double temp1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    if (ap.IsBound())
      {
      op->RotateWXYZ(temp0, temp1);
      }
    else
      {
      op->vtkTransform::RotateWXYZ(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTransform_RotateWXYZ(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkTransform_RotateWXYZ_s1(self, args);
    case 2:
      return PyvtkTransform_RotateWXYZ_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RotateWXYZ");
  return NULL;
}



static PyObject *
PyvtkTransform_RotateX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotateX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RotateX(temp0);
      }
    else
      {
      op->vtkTransform::RotateX(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransform_RotateY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotateY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RotateY(temp0);
      }
    else
      {
      op->vtkTransform::RotateY(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransform_RotateZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotateZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RotateZ(temp0);
      }
    else
      {
      op->vtkTransform::RotateZ(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransform_Scale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

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
      op->Scale(temp0, temp1, temp2);
      }
    else
      {
      op->vtkTransform::Scale(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTransform_Scale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->Scale(temp0);
      }
    else
      {
      op->vtkTransform::Scale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTransform_Scale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTransform_Scale_s1(self, args);
    case 1:
      return PyvtkTransform_Scale_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Scale");
  return NULL;
}



static PyObject *
PyvtkTransform_SetMatrix_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  vtkMatrix4x4 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
    {
    if (ap.IsBound())
      {
      op->SetMatrix(temp0);
      }
    else
      {
      op->vtkTransform::SetMatrix(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTransform_SetMatrix_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  double temp0[16];
  const int size0 = 16;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetMatrix(temp0);
      }
    else
      {
      op->vtkTransform::SetMatrix(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTransform_SetMatrix_Methods[] = {
  {NULL, PyvtkTransform_SetMatrix_s1, 1,
   (char*)"@O *vtkMatrix4x4"},
  {NULL, PyvtkTransform_SetMatrix_s2, 1,
   (char*)"@O *d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTransform_SetMatrix(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTransform_SetMatrix_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetMatrix");
  return NULL;
}



static PyObject *
PyvtkTransform_Concatenate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Concatenate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  vtkMatrix4x4 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
    {
    if (ap.IsBound())
      {
      op->Concatenate(temp0);
      }
    else
      {
      op->vtkTransform::Concatenate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTransform_Concatenate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Concatenate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  double temp0[16];
  const int size0 = 16;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->Concatenate(temp0);
      }
    else
      {
      op->vtkTransform::Concatenate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTransform_Concatenate_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Concatenate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  vtkLinearTransform *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLinearTransform"))
    {
    if (ap.IsBound())
      {
      op->Concatenate(temp0);
      }
    else
      {
      op->vtkTransform::Concatenate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTransform_Concatenate_Methods[] = {
  {NULL, PyvtkTransform_Concatenate_s1, 1,
   (char*)"@O *vtkMatrix4x4"},
  {NULL, PyvtkTransform_Concatenate_s2, 1,
   (char*)"@O *d"},
  {NULL, PyvtkTransform_Concatenate_s3, 1,
   (char*)"@O *vtkLinearTransform"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTransform_Concatenate(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTransform_Concatenate_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Concatenate");
  return NULL;
}



static PyObject *
PyvtkTransform_PreMultiply(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreMultiply");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PreMultiply();
      }
    else
      {
      op->vtkTransform::PreMultiply();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransform_PostMultiply(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PostMultiply");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PostMultiply();
      }
    else
      {
      op->vtkTransform::PostMultiply();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransform_GetNumberOfConcatenatedTransforms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfConcatenatedTransforms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfConcatenatedTransforms();
      }
    else
      {
      tempr = op->vtkTransform::GetNumberOfConcatenatedTransforms();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransform_GetConcatenatedTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConcatenatedTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  int temp0;
  vtkLinearTransform *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetConcatenatedTransform(temp0);
      }
    else
      {
      tempr = op->vtkTransform::GetConcatenatedTransform(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransform_GetOrientation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

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
      op->GetOrientation(temp0);
      }
    else
      {
      op->vtkTransform::GetOrientation(temp0);
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
PyvtkTransform_GetOrientation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOrientation();
      }
    else
      {
      tempr = op->vtkTransform::GetOrientation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkTransform_GetOrientation_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetOrientation");

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  vtkMatrix4x4 *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4"))
    {
    ap.SaveArray(temp0, save0, size0);

    vtkTransform::GetOrientation(temp0, temp1);

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
PyvtkTransform_GetOrientation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 1:
      return PyvtkTransform_GetOrientation_s1(self, args);
    case 0:
      return PyvtkTransform_GetOrientation_s2(self, args);
    case 2:
      return PyvtkTransform_GetOrientation_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOrientation");
  return NULL;
}



static PyObject *
PyvtkTransform_GetOrientationWXYZ_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationWXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  double temp0[4];
  double save0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetOrientationWXYZ(temp0);
      }
    else
      {
      op->vtkTransform::GetOrientationWXYZ(temp0);
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
PyvtkTransform_GetOrientationWXYZ_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationWXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  double *tempr;
  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOrientationWXYZ();
      }
    else
      {
      tempr = op->vtkTransform::GetOrientationWXYZ();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkTransform_GetOrientationWXYZ(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkTransform_GetOrientationWXYZ_s1(self, args);
    case 0:
      return PyvtkTransform_GetOrientationWXYZ_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOrientationWXYZ");
  return NULL;
}



static PyObject *
PyvtkTransform_GetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

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
      op->GetPosition(temp0);
      }
    else
      {
      op->vtkTransform::GetPosition(temp0);
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
PyvtkTransform_GetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPosition();
      }
    else
      {
      tempr = op->vtkTransform::GetPosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkTransform_GetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkTransform_GetPosition_s1(self, args);
    case 0:
      return PyvtkTransform_GetPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPosition");
  return NULL;
}



static PyObject *
PyvtkTransform_GetScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

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
      op->GetScale(temp0);
      }
    else
      {
      op->vtkTransform::GetScale(temp0);
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
PyvtkTransform_GetScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScale();
      }
    else
      {
      tempr = op->vtkTransform::GetScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkTransform_GetScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkTransform_GetScale_s1(self, args);
    case 0:
      return PyvtkTransform_GetScale_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetScale");
  return NULL;
}



static PyObject *
PyvtkTransform_GetInverse_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  vtkMatrix4x4 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
    {
    if (ap.IsBound())
      {
      op->GetInverse(temp0);
      }
    else
      {
      op->vtkTransform::GetInverse(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTransform_GetInverse_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

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
      tempr = op->vtkTransform::GetInverse();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTransform_GetInverse(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkTransform_GetInverse_s1(self, args);
    case 0:
      return PyvtkTransform_GetInverse_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetInverse");
  return NULL;
}



static PyObject *
PyvtkTransform_GetTranspose(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranspose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  vtkMatrix4x4 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
    {
    if (ap.IsBound())
      {
      op->GetTranspose(temp0);
      }
    else
      {
      op->vtkTransform::GetTranspose(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransform_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  vtkLinearTransform *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLinearTransform"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkTransform::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransform_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  vtkLinearTransform *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkTransform::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransform_GetInverseFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInverseFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInverseFlag();
      }
    else
      {
      tempr = op->vtkTransform::GetInverseFlag();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransform_Push(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Push");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Push();
      }
    else
      {
      op->vtkTransform::Push();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransform_Pop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Pop();
      }
    else
      {
      op->vtkTransform::Pop();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransform_CircuitCheck(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CircuitCheck");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

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
      tempr = op->vtkTransform::CircuitCheck(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransform_MakeTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  vtkAbstractTransform *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->MakeTransform();
      }
    else
      {
      tempr = op->vtkTransform::MakeTransform();
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
PyvtkTransform_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

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
      tempr = op->vtkTransform::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransform_MultiplyPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultiplyPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  double temp0[4];
  const int size0 = 4;
  double temp1[4];
  double save1[4];
  const int size1 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->MultiplyPoint(temp0, temp1);
      }
    else
      {
      op->vtkTransform::MultiplyPoint(temp0, temp1);
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

static PyMethodDef PyvtkTransform_Methods[] = {
  {(char*)"GetClassName", PyvtkTransform_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTransform_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTransform_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTransform\nC++: vtkTransform *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTransform_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTransform\nC++: vtkTransform *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Identity", PyvtkTransform_Identity, 1,
   (char*)"V.Identity()\nC++: void Identity()\n\nSet the transformation to the identity transformation.  If the\ntransform has an Input, then the transformation will be reset so\nthat it is the same as the Input.\n"},
  {(char*)"Inverse", PyvtkTransform_Inverse, 1,
   (char*)"V.Inverse()\nC++: void Inverse()\n\nInvert the transformation.  This will also set a flag so that the\ntransformation will use the inverse of its Input, if an Input has\nbeen set.\n"},
  {(char*)"Translate", PyvtkTransform_Translate, 1,
   (char*)"V.Translate(float, float, float)\nC++: void Translate(double x, double y, double z)\nV.Translate((float, float, float))\nC++: void Translate(const double x[3])\n\nCreate a translation matrix and concatenate it with the current\ntransformation according to PreMultiply or PostMultiply\nsemantics.\n"},
  {(char*)"RotateWXYZ", PyvtkTransform_RotateWXYZ, 1,
   (char*)"V.RotateWXYZ(float, float, float, float)\nC++: void RotateWXYZ(double angle, double x, double y, double z)\nV.RotateWXYZ(float, (float, float, float))\nC++: void RotateWXYZ(double angle, const double axis[3])\n\nCreate a rotation matrix and concatenate it with the current\ntransformation according to PreMultiply or PostMultiply\nsemantics. The angle is in degrees, and (x,y,z) specifies the\naxis that the rotation will be performed around.\n"},
  {(char*)"RotateX", PyvtkTransform_RotateX, 1,
   (char*)"V.RotateX(float)\nC++: void RotateX(double angle)\n\nCreate a rotation matrix about the X, Y, or Z axis and\nconcatenate it with the current transformation according to\nPreMultiply or PostMultiply semantics.  The angle is expressed in\ndegrees.\n"},
  {(char*)"RotateY", PyvtkTransform_RotateY, 1,
   (char*)"V.RotateY(float)\nC++: void RotateY(double angle)\n\nCreate a rotation matrix about the X, Y, or Z axis and\nconcatenate it with the current transformation according to\nPreMultiply or PostMultiply semantics.  The angle is expressed in\ndegrees.\n"},
  {(char*)"RotateZ", PyvtkTransform_RotateZ, 1,
   (char*)"V.RotateZ(float)\nC++: void RotateZ(double angle)\n\nCreate a rotation matrix about the X, Y, or Z axis and\nconcatenate it with the current transformation according to\nPreMultiply or PostMultiply semantics.  The angle is expressed in\ndegrees.\n"},
  {(char*)"Scale", PyvtkTransform_Scale, 1,
   (char*)"V.Scale(float, float, float)\nC++: void Scale(double x, double y, double z)\nV.Scale((float, float, float))\nC++: void Scale(const double s[3])\n\nCreate a scale matrix (i.e. set the diagonal elements to x, y, z)\nand concatenate it with the current transformation according to\nPreMultiply or PostMultiply semantics.\n"},
  {(char*)"SetMatrix", PyvtkTransform_SetMatrix, 1,
   (char*)"V.SetMatrix(vtkMatrix4x4)\nC++: void SetMatrix(vtkMatrix4x4 *matrix)\nV.SetMatrix((float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float)\n    )\nC++: void SetMatrix(const double elements[16])\n\nSet the current matrix directly.  This actually calls Identity(),\nfollowed by Concatenate(matrix).\n"},
  {(char*)"Concatenate", PyvtkTransform_Concatenate, 1,
   (char*)"V.Concatenate(vtkMatrix4x4)\nC++: void Concatenate(vtkMatrix4x4 *matrix)\nV.Concatenate((float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float)\n    )\nC++: void Concatenate(const double elements[16])\nV.Concatenate(vtkLinearTransform)\nC++: void Concatenate(vtkLinearTransform *transform)\n\nConcatenates the matrix with the current transformation according\nto PreMultiply or PostMultiply semantics.\n"},
  {(char*)"PreMultiply", PyvtkTransform_PreMultiply, 1,
   (char*)"V.PreMultiply()\nC++: void PreMultiply()\n\nSets the internal state of the transform to PreMultiply. All\nsubsequent operations will occur before those already represented\nin the current transformation.  In homogeneous matrix notation, M\n= M*A where M is the current transformation matrix and A is the\napplied matrix. The default is PreMultiply.\n"},
  {(char*)"PostMultiply", PyvtkTransform_PostMultiply, 1,
   (char*)"V.PostMultiply()\nC++: void PostMultiply()\n\nSets the internal state of the transform to PostMultiply. All\nsubsequent operations will occur after those already represented\nin the current transformation.  In homogeneous matrix notation, M\n= A*M where M is the current transformation matrix and A is the\napplied matrix. The default is PreMultiply.\n"},
  {(char*)"GetNumberOfConcatenatedTransforms", PyvtkTransform_GetNumberOfConcatenatedTransforms, 1,
   (char*)"V.GetNumberOfConcatenatedTransforms() -> int\nC++: int GetNumberOfConcatenatedTransforms()\n\nGet the total number of transformations that are linked into this\none via Concatenate() operations or via SetInput().\n"},
  {(char*)"GetConcatenatedTransform", PyvtkTransform_GetConcatenatedTransform, 1,
   (char*)"V.GetConcatenatedTransform(int) -> vtkLinearTransform\nC++: vtkLinearTransform *GetConcatenatedTransform(int i)\n\n"},
  {(char*)"GetOrientation", PyvtkTransform_GetOrientation, 1,
   (char*)"V.GetOrientation([float, float, float])\nC++: void GetOrientation(double orient[3])\nV.GetOrientation() -> (float, float, float)\nC++: double *GetOrientation()\nV.GetOrientation([float, float, float], vtkMatrix4x4)\nC++: static void GetOrientation(double orient[3],\n    vtkMatrix4x4 *matrix)\n\nGet the x, y, z orientation angles from the transformation matrix\nas an array of three floating point values.\n"},
  {(char*)"GetOrientationWXYZ", PyvtkTransform_GetOrientationWXYZ, 1,
   (char*)"V.GetOrientationWXYZ([float, float, float, float])\nC++: void GetOrientationWXYZ(double wxyz[4])\nV.GetOrientationWXYZ() -> (float, float, float, float)\nC++: double *GetOrientationWXYZ()\n\nReturn the wxyz angle+axis representing the current orientation.\nThe angle is in degrees and the axis is a unit vector.\n"},
  {(char*)"GetPosition", PyvtkTransform_GetPosition, 1,
   (char*)"V.GetPosition([float, float, float])\nC++: void GetPosition(double pos[3])\nV.GetPosition() -> (float, float, float)\nC++: double *GetPosition()\n\nReturn the position from the current transformation matrix as an\narray of three floating point numbers. This is simply returning\nthe translation component of the 4x4 matrix.\n"},
  {(char*)"GetScale", PyvtkTransform_GetScale, 1,
   (char*)"V.GetScale([float, float, float])\nC++: void GetScale(double scale[3])\nV.GetScale() -> (float, float, float)\nC++: double *GetScale()\n\nReturn the scale factors of the current transformation matrix as\nan array of three float numbers.  These scale factors are not\nnecessarily about the x, y, and z axes unless unless the scale\ntransformation was applied before any rotations.\n"},
  {(char*)"GetInverse", PyvtkTransform_GetInverse, 1,
   (char*)"V.GetInverse(vtkMatrix4x4)\nC++: void GetInverse(vtkMatrix4x4 *inverse)\nV.GetInverse() -> vtkAbstractTransform\nC++: vtkAbstractTransform *GetInverse()\n\nReturn a matrix which is the inverse of the current\ntransformation matrix.\n"},
  {(char*)"GetTranspose", PyvtkTransform_GetTranspose, 1,
   (char*)"V.GetTranspose(vtkMatrix4x4)\nC++: void GetTranspose(vtkMatrix4x4 *transpose)\n\nReturn a matrix which is the transpose of the current\ntransformation matrix.  This is equivalent to the inverse if and\nonly if the transformation is a pure rotation with no translation\nor scale.\n"},
  {(char*)"SetInput", PyvtkTransform_SetInput, 1,
   (char*)"V.SetInput(vtkLinearTransform)\nC++: void SetInput(vtkLinearTransform *input)\n\nSet the input for this transformation.  This will be used as the\nbase transformation if it is set.  This method allows you to\nbuild a transform pipeline: if the input is modified, then this\ntransformation will automatically update accordingly.  Note that\nthe InverseFlag, controlled via Inverse(), determines whether\nthis transformation will use the Input or the inverse of the\nInput.\n"},
  {(char*)"GetInput", PyvtkTransform_GetInput, 1,
   (char*)"V.GetInput() -> vtkLinearTransform\nC++: vtkLinearTransform *GetInput()\n\nSet the input for this transformation.  This will be used as the\nbase transformation if it is set.  This method allows you to\nbuild a transform pipeline: if the input is modified, then this\ntransformation will automatically update accordingly.  Note that\nthe InverseFlag, controlled via Inverse(), determines whether\nthis transformation will use the Input or the inverse of the\nInput.\n"},
  {(char*)"GetInverseFlag", PyvtkTransform_GetInverseFlag, 1,
   (char*)"V.GetInverseFlag() -> int\nC++: int GetInverseFlag()\n\nGet the inverse flag of the transformation.  This controls\nwhether it is the Input or the inverse of the Input that is used\nas the base transformation.  The InverseFlag is flipped every\ntime Inverse() is called.  The InverseFlag is off when a\ntransform is first created.\n"},
  {(char*)"Push", PyvtkTransform_Push, 1,
   (char*)"V.Push()\nC++: void Push()\n\nPushes the current transformation onto the transformation stack.\n"},
  {(char*)"Pop", PyvtkTransform_Pop, 1,
   (char*)"V.Pop()\nC++: void Pop()\n\nDeletes the transformation on the top of the stack and sets the\ntop to the next transformation on the stack.\n"},
  {(char*)"CircuitCheck", PyvtkTransform_CircuitCheck, 1,
   (char*)"V.CircuitCheck(vtkAbstractTransform) -> int\nC++: int CircuitCheck(vtkAbstractTransform *transform)\n\nCheck for self-reference.  Will return true if concatenating with\nthe specified transform, setting it to be our inverse, or setting\nit to be our input will create a circular reference. CircuitCheck\nis automatically called by SetInput(), SetInverse(), and\nConcatenate(vtkXTransform *).  Avoid using this function, it is\nexperimental.\n"},
  {(char*)"MakeTransform", PyvtkTransform_MakeTransform, 1,
   (char*)"V.MakeTransform() -> vtkAbstractTransform\nC++: vtkAbstractTransform *MakeTransform()\n\nMake a new transform of the same type.\n"},
  {(char*)"GetMTime", PyvtkTransform_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nOverride GetMTime to account for input and concatenation.\n"},
  {(char*)"MultiplyPoint", PyvtkTransform_MultiplyPoint, 1,
   (char*)"V.MultiplyPoint((float, float, float, float), [float, float,\n    float, float])\nC++: void MultiplyPoint(const double in[4], double out[4])\n\nUse this method only if you wish to compute the transformation in\nhomogeneous (x,y,z,w) coordinates, otherwise use\nTransformPoint(). This method calls\nthis->GetMatrix()->MultiplyPoint().\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTransform_StaticNew()
{
  return vtkTransform::New();
}

PyObject *PyVTKClass_vtkTransformNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTransform_StaticNew,
    PyvtkTransform_Methods,
    "vtkTransform", modulename,
    NULL, NULL,
    PyvtkTransform_Doc(),
    PyVTKClass_vtkLinearTransformNew(modulename));
  return cls;
}

const char **PyvtkTransform_Doc()
{
  static const char *docstring[] = {
    "vtkTransform - describes linear transformations via a 4x4 matrix\n\n",
    "Superclass: vtkLinearTransform\n\n",
    "A vtkTransform can be used to describe the full range of linear (also\nknown as affine) coordinate transformations in three dimensions,\nwhich are internally represented as a 4x4 homogeneous transformation\nmatrix.  When you create a new vtkTransform, it is always initialized\nto the identity transformation. <P>The SetInput() method allows you\nto set another transform, instead of the identity transfor",
    "m, to be\nthe base transformation. There is a pipeline mechanism to ensure that\nwhen the input is modified, the current transformation will be\nupdated accordingly. This pipeline mechanism is also supported by the\nConcatenate() method. <P>Most of the methods for manipulating this\ntransformation, e.g. Translate, Rotate, and Concatenate, can operate\nin either PreMultiply (the default) or PostMultiply ",
    "mode.  In\nPreMultiply mode, the translation, concatenation, etc. will occur\nbefore any transformations which are represented by the current\nmatrix.  In PostMultiply mode, the additional transformation will\noccur after any transformations represented by the current matrix.\n<P>This class performs all of its operations in a right handed\ncoordinate system with right handed rotations. Some other graphi",
    "cs\nlibraries use left handed coordinate systems and rotations.\n\nSee Also:\n\nvtkPerspectiveTransform vtkGeneralTransform vtkMatrix4x4\nvtkTransformCollection vtkTransformFilter vtkTransformPolyDataFilter\nvtkImageReslice\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTransform(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTransformNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTransform", o) != 0)
    {
    Py_DECREF(o);
    }

}

