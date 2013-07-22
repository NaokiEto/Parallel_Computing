// python wrapper for vtkHomogeneousTransform
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
#include "vtkHomogeneousTransform.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkHomogeneousTransform(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkHomogeneousTransform(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkHomogeneousTransformNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkHomogeneousTransformNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAbstractTransformNew
extern "C" { PyObject *PyVTKClass_vtkAbstractTransformNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractTransformNew
#endif

static const char **PyvtkHomogeneousTransform_Doc();


static PyObject *
PyvtkHomogeneousTransform_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHomogeneousTransform *op = static_cast<vtkHomogeneousTransform *>(vp);

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
      tempr = op->vtkHomogeneousTransform::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHomogeneousTransform_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHomogeneousTransform *op = static_cast<vtkHomogeneousTransform *>(vp);

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
      tempr = op->vtkHomogeneousTransform::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHomogeneousTransform_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHomogeneousTransform *op = static_cast<vtkHomogeneousTransform *>(vp);

  vtkHomogeneousTransform *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkHomogeneousTransform::NewInstance();
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
PyvtkHomogeneousTransform_TransformPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHomogeneousTransform *op = static_cast<vtkHomogeneousTransform *>(vp);

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
      op->vtkHomogeneousTransform::TransformPoints(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHomogeneousTransform_TransformPointsNormalsVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformPointsNormalsVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHomogeneousTransform *op = static_cast<vtkHomogeneousTransform *>(vp);

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
      op->vtkHomogeneousTransform::TransformPointsNormalsVectors(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHomogeneousTransform_GetMatrix_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHomogeneousTransform *op = static_cast<vtkHomogeneousTransform *>(vp);

  vtkMatrix4x4 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
    {
    if (ap.IsBound())
      {
      op->GetMatrix(temp0);
      }
    else
      {
      op->vtkHomogeneousTransform::GetMatrix(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHomogeneousTransform_GetMatrix_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHomogeneousTransform *op = static_cast<vtkHomogeneousTransform *>(vp);

  vtkMatrix4x4 *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMatrix();
      }
    else
      {
      tempr = op->vtkHomogeneousTransform::GetMatrix();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkHomogeneousTransform_GetMatrix(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkHomogeneousTransform_GetMatrix_s1(self, args);
    case 0:
      return PyvtkHomogeneousTransform_GetMatrix_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetMatrix");
  return NULL;
}



static PyObject *
PyvtkHomogeneousTransform_GetHomogeneousInverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHomogeneousInverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHomogeneousTransform *op = static_cast<vtkHomogeneousTransform *>(vp);

  vtkHomogeneousTransform *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHomogeneousInverse();
      }
    else
      {
      tempr = op->vtkHomogeneousTransform::GetHomogeneousInverse();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHomogeneousTransform_InternalTransformPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalTransformPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHomogeneousTransform *op = static_cast<vtkHomogeneousTransform *>(vp);

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
      op->vtkHomogeneousTransform::InternalTransformPoint(temp0, temp1);
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
PyvtkHomogeneousTransform_InternalTransformDerivative(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalTransformDerivative");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHomogeneousTransform *op = static_cast<vtkHomogeneousTransform *>(vp);

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
      op->vtkHomogeneousTransform::InternalTransformDerivative(temp0, temp1, temp2);
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

static PyMethodDef PyvtkHomogeneousTransform_Methods[] = {
  {(char*)"GetClassName", PyvtkHomogeneousTransform_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHomogeneousTransform_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHomogeneousTransform_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkHomogeneousTransform\nC++: vtkHomogeneousTransform *NewInstance()\n\n"},
  {(char*)"TransformPoints", PyvtkHomogeneousTransform_TransformPoints, 1,
   (char*)"V.TransformPoints(vtkPoints, vtkPoints)\nC++: void TransformPoints(vtkPoints *inPts, vtkPoints *outPts)\n\nApply the transformation to a series of points, and append the\nresults to outPts.\n"},
  {(char*)"TransformPointsNormalsVectors", PyvtkHomogeneousTransform_TransformPointsNormalsVectors, 1,
   (char*)"V.TransformPointsNormalsVectors(vtkPoints, vtkPoints,\n    vtkDataArray, vtkDataArray, vtkDataArray, vtkDataArray)\nC++: virtual void TransformPointsNormalsVectors(vtkPoints *inPts,\n    vtkPoints *outPts, vtkDataArray *inNms, vtkDataArray *outNms,\n    vtkDataArray *inVrs, vtkDataArray *outVrs)\n\nApply the transformation to a combination of points, normals and\nvectors.\n"},
  {(char*)"GetMatrix", PyvtkHomogeneousTransform_GetMatrix, 1,
   (char*)"V.GetMatrix(vtkMatrix4x4)\nC++: void GetMatrix(vtkMatrix4x4 *m)\nV.GetMatrix() -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetMatrix()\n\nGet a copy of the internal transformation matrix.  The transform\nis Updated first, to guarantee that the matrix is valid.\n"},
  {(char*)"GetHomogeneousInverse", PyvtkHomogeneousTransform_GetHomogeneousInverse, 1,
   (char*)"V.GetHomogeneousInverse() -> vtkHomogeneousTransform\nC++: vtkHomogeneousTransform *GetHomogeneousInverse()\n\nJust like GetInverse(), but includes typecast to\nvtkHomogeneousTransform.\n"},
  {(char*)"InternalTransformPoint", PyvtkHomogeneousTransform_InternalTransformPoint, 1,
   (char*)"V.InternalTransformPoint((float, float, float), [float, float,\n    float])\nC++: void InternalTransformPoint(const double in[3],\n    double out[3])\n\nThis will calculate the transformation without calling Update.\nMeant for use only within other VTK classes.\n"},
  {(char*)"InternalTransformDerivative", PyvtkHomogeneousTransform_InternalTransformDerivative, 1,
   (char*)"V.InternalTransformDerivative((float, float, float), [float,\n    float, float], [[float, float, float], [float, float, float],\n    [float, float, float]])\nC++: void InternalTransformDerivative(const double in[3],\n    double out[3], double derivative[3][3])\n\nThis will calculate the transformation as well as its derivative\nwithout calling Update.  Meant for use only within other VTK\nclasses.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkHomogeneousTransformNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkHomogeneousTransform_Methods,
    "vtkHomogeneousTransform", modulename,
    NULL, NULL,
    PyvtkHomogeneousTransform_Doc(),
    PyVTKClass_vtkAbstractTransformNew(modulename));
  return cls;
}

const char **PyvtkHomogeneousTransform_Doc()
{
  static const char *docstring[] = {
    "vtkHomogeneousTransform - superclass for homogeneous transformations\n\n",
    "Superclass: vtkAbstractTransform\n\n",
    "vtkHomogeneousTransform provides a generic interface for homogeneous\ntransformations, i.e. transformations which can be represented by\nmultiplying a 4x4 matrix with a homogeneous coordinate.\n\nSee Also:\n\nvtkPerspectiveTransform vtkLinearTransform vtkIdentityTransform\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHomogeneousTransform(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHomogeneousTransformNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHomogeneousTransform", o) != 0)
    {
    Py_DECREF(o);
    }

}

