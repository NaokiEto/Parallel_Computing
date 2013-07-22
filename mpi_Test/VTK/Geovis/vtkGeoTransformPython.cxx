// python wrapper for vtkGeoTransform
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
#include "vtkGeoTransform.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGeoTransform(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGeoTransform(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGeoTransformNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGeoTransformNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAbstractTransformNew
extern "C" { PyObject *PyVTKClass_vtkAbstractTransformNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractTransformNew
#endif

static const char **PyvtkGeoTransform_Doc();


static PyObject *
PyvtkGeoTransform_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTransform *op = static_cast<vtkGeoTransform *>(vp);

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
      tempr = op->vtkGeoTransform::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTransform_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTransform *op = static_cast<vtkGeoTransform *>(vp);

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
      tempr = op->vtkGeoTransform::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTransform_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTransform *op = static_cast<vtkGeoTransform *>(vp);

  vtkGeoTransform *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGeoTransform::NewInstance();
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
PyvtkGeoTransform_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGeoTransform *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGeoTransform::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTransform_SetSourceProjection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceProjection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTransform *op = static_cast<vtkGeoTransform *>(vp);

  vtkGeoProjection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGeoProjection"))
    {
    if (ap.IsBound())
      {
      op->SetSourceProjection(temp0);
      }
    else
      {
      op->vtkGeoTransform::SetSourceProjection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTransform_GetSourceProjection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSourceProjection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTransform *op = static_cast<vtkGeoTransform *>(vp);

  vtkGeoProjection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSourceProjection();
      }
    else
      {
      tempr = op->vtkGeoTransform::GetSourceProjection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTransform_SetDestinationProjection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDestinationProjection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTransform *op = static_cast<vtkGeoTransform *>(vp);

  vtkGeoProjection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGeoProjection"))
    {
    if (ap.IsBound())
      {
      op->SetDestinationProjection(temp0);
      }
    else
      {
      op->vtkGeoTransform::SetDestinationProjection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTransform_GetDestinationProjection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDestinationProjection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTransform *op = static_cast<vtkGeoTransform *>(vp);

  vtkGeoProjection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDestinationProjection();
      }
    else
      {
      tempr = op->vtkGeoTransform::GetDestinationProjection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTransform_TransformPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTransform *op = static_cast<vtkGeoTransform *>(vp);

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
      op->vtkGeoTransform::TransformPoints(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTransform_Inverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Inverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTransform *op = static_cast<vtkGeoTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Inverse();
      }
    else
      {
      op->vtkGeoTransform::Inverse();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTransform_InternalTransformPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalTransformPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTransform *op = static_cast<vtkGeoTransform *>(vp);

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
      op->vtkGeoTransform::InternalTransformPoint(temp0, temp1);
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
PyvtkGeoTransform_InternalTransformDerivative(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalTransformDerivative");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTransform *op = static_cast<vtkGeoTransform *>(vp);

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
      op->vtkGeoTransform::InternalTransformDerivative(temp0, temp1, temp2);
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
PyvtkGeoTransform_MakeTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTransform *op = static_cast<vtkGeoTransform *>(vp);

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
      tempr = op->vtkGeoTransform::MakeTransform();
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

static PyMethodDef PyvtkGeoTransform_Methods[] = {
  {(char*)"GetClassName", PyvtkGeoTransform_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGeoTransform_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGeoTransform_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGeoTransform\nC++: vtkGeoTransform *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGeoTransform_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGeoTransform\nC++: vtkGeoTransform *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSourceProjection", PyvtkGeoTransform_SetSourceProjection, 1,
   (char*)"V.SetSourceProjection(vtkGeoProjection)\nC++: void SetSourceProjection(vtkGeoProjection *source)\n\nThe source geographic projection.\n"},
  {(char*)"GetSourceProjection", PyvtkGeoTransform_GetSourceProjection, 1,
   (char*)"V.GetSourceProjection() -> vtkGeoProjection\nC++: vtkGeoProjection *GetSourceProjection()\n\nThe source geographic projection.\n"},
  {(char*)"SetDestinationProjection", PyvtkGeoTransform_SetDestinationProjection, 1,
   (char*)"V.SetDestinationProjection(vtkGeoProjection)\nC++: void SetDestinationProjection(vtkGeoProjection *dest)\n\nThe target geographic projection.\n"},
  {(char*)"GetDestinationProjection", PyvtkGeoTransform_GetDestinationProjection, 1,
   (char*)"V.GetDestinationProjection() -> vtkGeoProjection\nC++: vtkGeoProjection *GetDestinationProjection()\n\nThe target geographic projection.\n"},
  {(char*)"TransformPoints", PyvtkGeoTransform_TransformPoints, 1,
   (char*)"V.TransformPoints(vtkPoints, vtkPoints)\nC++: virtual void TransformPoints(vtkPoints *src, vtkPoints *dst)\n\nTransform many points at once.\n"},
  {(char*)"Inverse", PyvtkGeoTransform_Inverse, 1,
   (char*)"V.Inverse()\nC++: virtual void Inverse()\n\nInvert the transformation.\n"},
  {(char*)"InternalTransformPoint", PyvtkGeoTransform_InternalTransformPoint, 1,
   (char*)"V.InternalTransformPoint((float, float, float), [float, float,\n    float])\nC++: virtual void InternalTransformPoint(const double in[3],\n    double out[3])\n\nThis will calculate the transformation without calling Update.\nMeant for use only within other VTK classes.\n"},
  {(char*)"InternalTransformDerivative", PyvtkGeoTransform_InternalTransformDerivative, 1,
   (char*)"V.InternalTransformDerivative((float, float, float), [float,\n    float, float], [[float, float, float], [float, float, float],\n    [float, float, float]])\nC++: virtual void InternalTransformDerivative(const double in[3],\n    double out[3], double derivative[3][3])\n\nThis will transform a point and, at the same time, calculate a\n3x3 Jacobian matrix that provides the partial derivatives of the\ntransformation at that point.  This method does not call Update.\nMeant for use only within other VTK classes.\n"},
  {(char*)"MakeTransform", PyvtkGeoTransform_MakeTransform, 1,
   (char*)"V.MakeTransform() -> vtkAbstractTransform\nC++: virtual vtkAbstractTransform *MakeTransform()\n\nMake another transform of the same type.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGeoTransform_StaticNew()
{
  return vtkGeoTransform::New();
}

PyObject *PyVTKClass_vtkGeoTransformNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGeoTransform_StaticNew,
    PyvtkGeoTransform_Methods,
    "vtkGeoTransform", modulename,
    NULL, NULL,
    PyvtkGeoTransform_Doc(),
    PyVTKClass_vtkAbstractTransformNew(modulename));
  return cls;
}

const char **PyvtkGeoTransform_Doc()
{
  static const char *docstring[] = {
    "vtkGeoTransform - A transformation between two geographic coordinate\nsystems\n\n",
    "Superclass: vtkAbstractTransform\n\n",
    "This class takes two geographic projections and transforms point\ncoordinates between them.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGeoTransform(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGeoTransformNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGeoTransform", o) != 0)
    {
    Py_DECREF(o);
    }

}

