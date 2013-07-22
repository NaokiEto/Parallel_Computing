// python wrapper for vtkWarpTransform
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
#include "vtkWarpTransform.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkWarpTransform(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkWarpTransform(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkWarpTransformNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkWarpTransformNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAbstractTransformNew
extern "C" { PyObject *PyVTKClass_vtkAbstractTransformNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractTransformNew
#endif

static const char **PyvtkWarpTransform_Doc();


static PyObject *
PyvtkWarpTransform_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTransform *op = static_cast<vtkWarpTransform *>(vp);

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
      tempr = op->vtkWarpTransform::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWarpTransform_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTransform *op = static_cast<vtkWarpTransform *>(vp);

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
      tempr = op->vtkWarpTransform::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWarpTransform_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTransform *op = static_cast<vtkWarpTransform *>(vp);

  vtkWarpTransform *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkWarpTransform::NewInstance();
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
PyvtkWarpTransform_Inverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Inverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTransform *op = static_cast<vtkWarpTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Inverse();
      }
    else
      {
      op->vtkWarpTransform::Inverse();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWarpTransform_GetInverseFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInverseFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTransform *op = static_cast<vtkWarpTransform *>(vp);

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
      tempr = op->vtkWarpTransform::GetInverseFlag();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWarpTransform_SetInverseTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInverseTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTransform *op = static_cast<vtkWarpTransform *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInverseTolerance(temp0);
      }
    else
      {
      op->vtkWarpTransform::SetInverseTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWarpTransform_GetInverseTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInverseTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTransform *op = static_cast<vtkWarpTransform *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInverseTolerance();
      }
    else
      {
      tempr = op->vtkWarpTransform::GetInverseTolerance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWarpTransform_SetInverseIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInverseIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTransform *op = static_cast<vtkWarpTransform *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInverseIterations(temp0);
      }
    else
      {
      op->vtkWarpTransform::SetInverseIterations(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWarpTransform_GetInverseIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInverseIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTransform *op = static_cast<vtkWarpTransform *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInverseIterations();
      }
    else
      {
      tempr = op->vtkWarpTransform::GetInverseIterations();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWarpTransform_InternalTransformPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalTransformPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTransform *op = static_cast<vtkWarpTransform *>(vp);

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
      op->InternalTransformPoint(temp0, temp1);
      }
    else
      {
      op->vtkWarpTransform::InternalTransformPoint(temp0, temp1);
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
PyvtkWarpTransform_InternalTransformDerivative(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalTransformDerivative");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTransform *op = static_cast<vtkWarpTransform *>(vp);

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2[3][3];
  double save2[3][3];
  static int size2[2] = { 3, 3 };
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetNArray(*temp2, 2, size2))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(*temp2, *save2, size2[0]*size2[1]);

    if (ap.IsBound())
      {
      op->InternalTransformDerivative(temp0, temp1, temp2);
      }
    else
      {
      op->vtkWarpTransform::InternalTransformDerivative(temp0, temp1, temp2);
      }

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
PyvtkWarpTransform_TemplateTransformPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TemplateTransformPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTransform *op = static_cast<vtkWarpTransform *>(vp);

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
      op->TemplateTransformPoint(temp0, temp1);
      }
    else
      {
      op->vtkWarpTransform::TemplateTransformPoint(temp0, temp1);
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
PyvtkWarpTransform_TemplateTransformPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TemplateTransformPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTransform *op = static_cast<vtkWarpTransform *>(vp);

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2[3][3];
  double save2[3][3];
  static int size2[2] = { 3, 3 };
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetNArray(*temp2, 2, size2))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(*temp2, *save2, size2[0]*size2[1]);

    if (ap.IsBound())
      {
      op->TemplateTransformPoint(temp0, temp1, temp2);
      }
    else
      {
      op->vtkWarpTransform::TemplateTransformPoint(temp0, temp1, temp2);
      }

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
PyvtkWarpTransform_TemplateTransformPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkWarpTransform_TemplateTransformPoint_s1(self, args);
    case 3:
      return PyvtkWarpTransform_TemplateTransformPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "TemplateTransformPoint");
  return NULL;
}



static PyObject *
PyvtkWarpTransform_TemplateTransformInverse_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TemplateTransformInverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTransform *op = static_cast<vtkWarpTransform *>(vp);

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
      op->TemplateTransformInverse(temp0, temp1);
      }
    else
      {
      op->vtkWarpTransform::TemplateTransformInverse(temp0, temp1);
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
PyvtkWarpTransform_TemplateTransformInverse_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TemplateTransformInverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTransform *op = static_cast<vtkWarpTransform *>(vp);

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2[3][3];
  double save2[3][3];
  static int size2[2] = { 3, 3 };
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetNArray(*temp2, 2, size2))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(*temp2, *save2, size2[0]*size2[1]);

    if (ap.IsBound())
      {
      op->TemplateTransformInverse(temp0, temp1, temp2);
      }
    else
      {
      op->vtkWarpTransform::TemplateTransformInverse(temp0, temp1, temp2);
      }

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
PyvtkWarpTransform_TemplateTransformInverse(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkWarpTransform_TemplateTransformInverse_s1(self, args);
    case 3:
      return PyvtkWarpTransform_TemplateTransformInverse_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "TemplateTransformInverse");
  return NULL;
}


static PyMethodDef PyvtkWarpTransform_Methods[] = {
  {(char*)"GetClassName", PyvtkWarpTransform_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkWarpTransform_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkWarpTransform_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkWarpTransform\nC++: vtkWarpTransform *NewInstance()\n\n"},
  {(char*)"Inverse", PyvtkWarpTransform_Inverse, 1,
   (char*)"V.Inverse()\nC++: void Inverse()\n\nInvert the transformation.  Warp transformations are usually\ninverted using an iterative technique such as Newton's method.\nThe inverse transform is usually around five or six times as\ncomputationally expensive as the forward transform.\n"},
  {(char*)"GetInverseFlag", PyvtkWarpTransform_GetInverseFlag, 1,
   (char*)"V.GetInverseFlag() -> int\nC++: int GetInverseFlag()\n\nGet the inverse flag of the transformation.  This flag is set to\nzero when the transformation is first created, and is flipped\neach time Inverse() is called.\n"},
  {(char*)"SetInverseTolerance", PyvtkWarpTransform_SetInverseTolerance, 1,
   (char*)"V.SetInverseTolerance(float)\nC++: void SetInverseTolerance(double a)\n\nSet the tolerance for inverse transformation. The default is\n0.001.\n"},
  {(char*)"GetInverseTolerance", PyvtkWarpTransform_GetInverseTolerance, 1,
   (char*)"V.GetInverseTolerance() -> float\nC++: double GetInverseTolerance()\n\nSet the tolerance for inverse transformation. The default is\n0.001.\n"},
  {(char*)"SetInverseIterations", PyvtkWarpTransform_SetInverseIterations, 1,
   (char*)"V.SetInverseIterations(int)\nC++: void SetInverseIterations(int a)\n\nSet the maximum number of iterations for the inverse\ntransformation.  The default is 500, but usually only 2 to 5\niterations are used.  The inversion method is fairly robust, and\nit should converge for nearly all smooth transformations that do\nnot fold back on themselves.\n"},
  {(char*)"GetInverseIterations", PyvtkWarpTransform_GetInverseIterations, 1,
   (char*)"V.GetInverseIterations() -> int\nC++: int GetInverseIterations()\n\nSet the maximum number of iterations for the inverse\ntransformation.  The default is 500, but usually only 2 to 5\niterations are used.  The inversion method is fairly robust, and\nit should converge for nearly all smooth transformations that do\nnot fold back on themselves.\n"},
  {(char*)"InternalTransformPoint", PyvtkWarpTransform_InternalTransformPoint, 1,
   (char*)"V.InternalTransformPoint((float, float, float), [float, float,\n    float])\nC++: void InternalTransformPoint(const double in[3],\n    double out[3])\n\nThis will calculate the transformation without calling Update.\nMeant for use only within other VTK classes.\n"},
  {(char*)"InternalTransformDerivative", PyvtkWarpTransform_InternalTransformDerivative, 1,
   (char*)"V.InternalTransformDerivative((float, float, float), [float,\n    float, float], [[float, float, float], [float, float, float],\n    [float, float, float]])\nC++: void InternalTransformDerivative(const double in[3],\n    double out[3], double derivative[3][3])\n\nThis will calculate the transformation, as well as its derivative\nwithout calling Update.  Meant for use only within other VTK\nclasses.\n"},
  {(char*)"TemplateTransformPoint", PyvtkWarpTransform_TemplateTransformPoint, 1,
   (char*)"V.TemplateTransformPoint((float, float, float), [float, float,\n    float])\nC++: void TemplateTransformPoint(const double in[3],\n    double out[3])\nV.TemplateTransformPoint((float, float, float), [float, float,\n    float], [[float, float, float], [float, float, float], [float,\n     float, float]])\nC++: void TemplateTransformPoint(const double in[3],\n    double out[3], double derivative[3][3])\n\nDo not use these methods.  They exists only as a work-around for\ninternal templated functions (I really didn't want to make the\nForward/Inverse methods public, is there a decent work around for\nthis sort of thing?)\n"},
  {(char*)"TemplateTransformInverse", PyvtkWarpTransform_TemplateTransformInverse, 1,
   (char*)"V.TemplateTransformInverse((float, float, float), [float, float,\n    float])\nC++: void TemplateTransformInverse(const double in[3],\n    double out[3])\nV.TemplateTransformInverse((float, float, float), [float, float,\n    float], [[float, float, float], [float, float, float], [float,\n     float, float]])\nC++: void TemplateTransformInverse(const double in[3],\n    double out[3], double derivative[3][3])\n\nDo not use these methods.  They exists only as a work-around for\ninternal templated functions (I really didn't want to make the\nForward/Inverse methods public, is there a decent work around for\nthis sort of thing?)\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkWarpTransformNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkWarpTransform_Methods,
    "vtkWarpTransform", modulename,
    NULL, NULL,
    PyvtkWarpTransform_Doc(),
    PyVTKClass_vtkAbstractTransformNew(modulename));
  return cls;
}

const char **PyvtkWarpTransform_Doc()
{
  static const char *docstring[] = {
    "vtkWarpTransform - superclass for nonlinear geometric transformations\n\n",
    "Superclass: vtkAbstractTransform\n\n",
    "vtkWarpTransform provides a generic interface for nonlinear warp\ntransformations.\n\nSee Also:\n\nvtkThinPlateSplineTransform vtkGridTransform vtkGeneralTransform\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkWarpTransform(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkWarpTransformNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkWarpTransform", o) != 0)
    {
    Py_DECREF(o);
    }

}

