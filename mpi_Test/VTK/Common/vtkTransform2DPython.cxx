// python wrapper for vtkTransform2D
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
#include "vtkTransform2D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTransform2D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTransform2D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTransform2DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTransform2DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkTransform2D_Doc();


static PyObject *
PyvtkTransform2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform2D *op = static_cast<vtkTransform2D *>(vp);

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
      tempr = op->vtkTransform2D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransform2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform2D *op = static_cast<vtkTransform2D *>(vp);

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
      tempr = op->vtkTransform2D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransform2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform2D *op = static_cast<vtkTransform2D *>(vp);

  vtkTransform2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTransform2D::NewInstance();
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
PyvtkTransform2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTransform2D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTransform2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransform2D_Identity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Identity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform2D *op = static_cast<vtkTransform2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Identity();
      }
    else
      {
      op->vtkTransform2D::Identity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransform2D_Inverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Inverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform2D *op = static_cast<vtkTransform2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Inverse();
      }
    else
      {
      op->vtkTransform2D::Inverse();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransform2D_Translate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Translate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform2D *op = static_cast<vtkTransform2D *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->Translate(temp0, temp1);
      }
    else
      {
      op->vtkTransform2D::Translate(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTransform2D_Translate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Translate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform2D *op = static_cast<vtkTransform2D *>(vp);

  double temp0[2];
  const int size0 = 2;
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
      op->vtkTransform2D::Translate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTransform2D_Translate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkTransform2D_Translate_s1(self, args);
    case 1:
      return PyvtkTransform2D_Translate_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Translate");
  return NULL;
}



static PyObject *
PyvtkTransform2D_Rotate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Rotate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform2D *op = static_cast<vtkTransform2D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Rotate(temp0);
      }
    else
      {
      op->vtkTransform2D::Rotate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransform2D_Scale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform2D *op = static_cast<vtkTransform2D *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->Scale(temp0, temp1);
      }
    else
      {
      op->vtkTransform2D::Scale(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTransform2D_Scale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform2D *op = static_cast<vtkTransform2D *>(vp);

  double temp0[2];
  const int size0 = 2;
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
      op->vtkTransform2D::Scale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTransform2D_Scale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkTransform2D_Scale_s1(self, args);
    case 1:
      return PyvtkTransform2D_Scale_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Scale");
  return NULL;
}



static PyObject *
PyvtkTransform2D_SetMatrix_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform2D *op = static_cast<vtkTransform2D *>(vp);

  vtkMatrix3x3 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3"))
    {
    if (ap.IsBound())
      {
      op->SetMatrix(temp0);
      }
    else
      {
      op->vtkTransform2D::SetMatrix(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTransform2D_SetMatrix_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform2D *op = static_cast<vtkTransform2D *>(vp);

  double temp0[9];
  const int size0 = 9;
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
      op->vtkTransform2D::SetMatrix(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTransform2D_SetMatrix_Methods[] = {
  {NULL, PyvtkTransform2D_SetMatrix_s1, 1,
   (char*)"@O *vtkMatrix3x3"},
  {NULL, PyvtkTransform2D_SetMatrix_s2, 1,
   (char*)"@O *d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTransform2D_SetMatrix(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTransform2D_SetMatrix_Methods;
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
PyvtkTransform2D_GetMatrix_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform2D *op = static_cast<vtkTransform2D *>(vp);

  vtkMatrix3x3 *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMatrix();
      }
    else
      {
      tempr = op->vtkTransform2D::GetMatrix();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTransform2D_GetMatrix_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform2D *op = static_cast<vtkTransform2D *>(vp);

  vtkMatrix3x3 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3"))
    {
    if (ap.IsBound())
      {
      op->GetMatrix(temp0);
      }
    else
      {
      op->vtkTransform2D::GetMatrix(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTransform2D_GetMatrix(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkTransform2D_GetMatrix_s1(self, args);
    case 1:
      return PyvtkTransform2D_GetMatrix_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetMatrix");
  return NULL;
}



static PyObject *
PyvtkTransform2D_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform2D *op = static_cast<vtkTransform2D *>(vp);

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
      op->GetPosition(temp0);
      }
    else
      {
      op->vtkTransform2D::GetPosition(temp0);
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
PyvtkTransform2D_GetInverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform2D *op = static_cast<vtkTransform2D *>(vp);

  vtkMatrix3x3 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3"))
    {
    if (ap.IsBound())
      {
      op->GetInverse(temp0);
      }
    else
      {
      op->vtkTransform2D::GetInverse(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransform2D_GetTranspose(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranspose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform2D *op = static_cast<vtkTransform2D *>(vp);

  vtkMatrix3x3 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3"))
    {
    if (ap.IsBound())
      {
      op->GetTranspose(temp0);
      }
    else
      {
      op->vtkTransform2D::GetTranspose(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransform2D_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform2D *op = static_cast<vtkTransform2D *>(vp);

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
      tempr = op->vtkTransform2D::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransform2D_TransformPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform2D *op = static_cast<vtkTransform2D *>(vp);

  vtkPoints2D *temp0 = NULL;
  vtkPoints2D *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPoints2D") &&
      ap.GetVTKObject(temp1, "vtkPoints2D"))
    {
    if (ap.IsBound())
      {
      op->TransformPoints(temp0, temp1);
      }
    else
      {
      op->vtkTransform2D::TransformPoints(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransform2D_InverseTransformPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InverseTransformPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform2D *op = static_cast<vtkTransform2D *>(vp);

  vtkPoints2D *temp0 = NULL;
  vtkPoints2D *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPoints2D") &&
      ap.GetVTKObject(temp1, "vtkPoints2D"))
    {
    if (ap.IsBound())
      {
      op->InverseTransformPoints(temp0, temp1);
      }
    else
      {
      op->vtkTransform2D::InverseTransformPoints(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransform2D_MultiplyPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultiplyPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform2D *op = static_cast<vtkTransform2D *>(vp);

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
      op->MultiplyPoint(temp0, temp1);
      }
    else
      {
      op->vtkTransform2D::MultiplyPoint(temp0, temp1);
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

static PyMethodDef PyvtkTransform2D_Methods[] = {
  {(char*)"GetClassName", PyvtkTransform2D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTransform2D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTransform2D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTransform2D\nC++: vtkTransform2D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTransform2D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTransform2D\nC++: vtkTransform2D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Identity", PyvtkTransform2D_Identity, 1,
   (char*)"V.Identity()\nC++: void Identity()\n\nSet the transformation to the identity transformation.\n"},
  {(char*)"Inverse", PyvtkTransform2D_Inverse, 1,
   (char*)"V.Inverse()\nC++: void Inverse()\n\nInvert the transformation.\n"},
  {(char*)"Translate", PyvtkTransform2D_Translate, 1,
   (char*)"V.Translate(float, float)\nC++: void Translate(double x, double y)\nV.Translate((float, float))\nC++: void Translate(const double x[2])\n\nCreate a translation matrix and concatenate it with the current\ntransformation.\n"},
  {(char*)"Rotate", PyvtkTransform2D_Rotate, 1,
   (char*)"V.Rotate(float)\nC++: void Rotate(double angle)\n\nCreate a rotation matrix and concatenate it with the current\ntransformation. The angle is in degrees.\n"},
  {(char*)"Scale", PyvtkTransform2D_Scale, 1,
   (char*)"V.Scale(float, float)\nC++: void Scale(double x, double y)\nV.Scale((float, float))\nC++: void Scale(const double s[2])\n\nCreate a scale matrix (i.e. set the diagonal elements to x, y)\nand concatenate it with the current transformation.\n"},
  {(char*)"SetMatrix", PyvtkTransform2D_SetMatrix, 1,
   (char*)"V.SetMatrix(vtkMatrix3x3)\nC++: void SetMatrix(vtkMatrix3x3 *matrix)\nV.SetMatrix((float, float, float, float, float, float, float,\n    float, float))\nC++: void SetMatrix(const double elements[9])\n\nSet the current matrix directly.\n"},
  {(char*)"GetMatrix", PyvtkTransform2D_GetMatrix, 1,
   (char*)"V.GetMatrix() -> vtkMatrix3x3\nC++: vtkMatrix3x3 *GetMatrix()\nV.GetMatrix(vtkMatrix3x3)\nC++: void GetMatrix(vtkMatrix3x3 *matrix)\n\nGet the underlying 3x3 matrix.\n"},
  {(char*)"GetPosition", PyvtkTransform2D_GetPosition, 1,
   (char*)"V.GetPosition([float, float])\nC++: void GetPosition(double pos[2])\n\nReturn the position from the current transformation matrix as an\narray of two floating point numbers. This is simply returning the\ntranslation component of the 3x3 matrix.\n"},
  {(char*)"GetInverse", PyvtkTransform2D_GetInverse, 1,
   (char*)"V.GetInverse(vtkMatrix3x3)\nC++: void GetInverse(vtkMatrix3x3 *inverse)\n\nReturn a matrix which is the inverse of the current\ntransformation matrix.\n"},
  {(char*)"GetTranspose", PyvtkTransform2D_GetTranspose, 1,
   (char*)"V.GetTranspose(vtkMatrix3x3)\nC++: void GetTranspose(vtkMatrix3x3 *transpose)\n\nReturn a matrix which is the transpose of the current\ntransformation matrix.  This is equivalent to the inverse if and\nonly if the transformation is a pure rotation with no translation\nor scale.\n"},
  {(char*)"GetMTime", PyvtkTransform2D_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nOverride GetMTime to account for input and concatenation.\n"},
  {(char*)"TransformPoints", PyvtkTransform2D_TransformPoints, 1,
   (char*)"V.TransformPoints(vtkPoints2D, vtkPoints2D)\nC++: void TransformPoints(vtkPoints2D *inPts, vtkPoints2D *outPts)\n\nApply the transformation to a series of points, and append the\nresults to outPts.\n"},
  {(char*)"InverseTransformPoints", PyvtkTransform2D_InverseTransformPoints, 1,
   (char*)"V.InverseTransformPoints(vtkPoints2D, vtkPoints2D)\nC++: void InverseTransformPoints(vtkPoints2D *inPts,\n    vtkPoints2D *outPts)\n\nApply the transformation to a series of points, and append the\nresults to outPts.\n"},
  {(char*)"MultiplyPoint", PyvtkTransform2D_MultiplyPoint, 1,
   (char*)"V.MultiplyPoint((float, float, float), [float, float, float])\nC++: void MultiplyPoint(const double in[3], double out[3])\n\nUse this method only if you wish to compute the transformation in\nhomogeneous (x,y,w) coordinates, otherwise use TransformPoint().\nThis method calls this->GetMatrix()->MultiplyPoint().\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTransform2D_StaticNew()
{
  return vtkTransform2D::New();
}

PyObject *PyVTKClass_vtkTransform2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTransform2D_StaticNew,
    PyvtkTransform2D_Methods,
    "vtkTransform2D", modulename,
    NULL, NULL,
    PyvtkTransform2D_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkTransform2D_Doc()
{
  static const char *docstring[] = {
    "vtkTransform2D - describes linear transformations via a 3x3 matrix\n\n",
    "Superclass: vtkObject\n\n",
    "A vtkTransform2D can be used to describe the full range of linear\n(also known as affine) coordinate transformations in two dimensions,\nwhich are internally represented as a 3x3 homogeneous transformation\nmatrix.  When you create a new vtkTransform2D, it is always\ninitialized to the identity transformation.\n\nThis class performs all of its operations in a right handed\ncoordinate system with right ha",
    "nded rotations. Some other graphics\nlibraries use left handed coordinate systems and rotations.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTransform2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTransform2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTransform2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

