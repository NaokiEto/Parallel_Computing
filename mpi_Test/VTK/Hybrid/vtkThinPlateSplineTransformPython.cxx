// python wrapper for vtkThinPlateSplineTransform
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
#include "vtkThinPlateSplineTransform.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkThinPlateSplineTransform(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkThinPlateSplineTransform(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkThinPlateSplineTransformNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkThinPlateSplineTransformNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkWarpTransformNew
extern "C" { PyObject *PyVTKClass_vtkWarpTransformNew(const char *); }
#define DECLARED_PyVTKClass_vtkWarpTransformNew
#endif

static const char **PyvtkThinPlateSplineTransform_Doc();


static PyObject *
PyvtkThinPlateSplineTransform_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThinPlateSplineTransform *op = static_cast<vtkThinPlateSplineTransform *>(vp);

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
      tempr = op->vtkThinPlateSplineTransform::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThinPlateSplineTransform_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThinPlateSplineTransform *op = static_cast<vtkThinPlateSplineTransform *>(vp);

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
      tempr = op->vtkThinPlateSplineTransform::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThinPlateSplineTransform_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThinPlateSplineTransform *op = static_cast<vtkThinPlateSplineTransform *>(vp);

  vtkThinPlateSplineTransform *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkThinPlateSplineTransform::NewInstance();
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
PyvtkThinPlateSplineTransform_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkThinPlateSplineTransform *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkThinPlateSplineTransform::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThinPlateSplineTransform_GetSigma(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSigma");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThinPlateSplineTransform *op = static_cast<vtkThinPlateSplineTransform *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSigma();
      }
    else
      {
      tempr = op->vtkThinPlateSplineTransform::GetSigma();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThinPlateSplineTransform_SetSigma(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSigma");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThinPlateSplineTransform *op = static_cast<vtkThinPlateSplineTransform *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSigma(temp0);
      }
    else
      {
      op->vtkThinPlateSplineTransform::SetSigma(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThinPlateSplineTransform_SetBasis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBasis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThinPlateSplineTransform *op = static_cast<vtkThinPlateSplineTransform *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBasis(temp0);
      }
    else
      {
      op->vtkThinPlateSplineTransform::SetBasis(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThinPlateSplineTransform_GetBasis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBasis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThinPlateSplineTransform *op = static_cast<vtkThinPlateSplineTransform *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBasis();
      }
    else
      {
      tempr = op->vtkThinPlateSplineTransform::GetBasis();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThinPlateSplineTransform_SetBasisToR(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBasisToR");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThinPlateSplineTransform *op = static_cast<vtkThinPlateSplineTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBasisToR();
      }
    else
      {
      op->vtkThinPlateSplineTransform::SetBasisToR();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThinPlateSplineTransform_SetBasisToR2LogR(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBasisToR2LogR");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThinPlateSplineTransform *op = static_cast<vtkThinPlateSplineTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBasisToR2LogR();
      }
    else
      {
      op->vtkThinPlateSplineTransform::SetBasisToR2LogR();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThinPlateSplineTransform_GetBasisAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBasisAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThinPlateSplineTransform *op = static_cast<vtkThinPlateSplineTransform *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBasisAsString();
      }
    else
      {
      tempr = op->vtkThinPlateSplineTransform::GetBasisAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThinPlateSplineTransform_SetSourceLandmarks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceLandmarks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThinPlateSplineTransform *op = static_cast<vtkThinPlateSplineTransform *>(vp);

  vtkPoints *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
    {
    if (ap.IsBound())
      {
      op->SetSourceLandmarks(temp0);
      }
    else
      {
      op->vtkThinPlateSplineTransform::SetSourceLandmarks(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThinPlateSplineTransform_GetSourceLandmarks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSourceLandmarks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThinPlateSplineTransform *op = static_cast<vtkThinPlateSplineTransform *>(vp);

  vtkPoints *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSourceLandmarks();
      }
    else
      {
      tempr = op->vtkThinPlateSplineTransform::GetSourceLandmarks();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThinPlateSplineTransform_SetTargetLandmarks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTargetLandmarks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThinPlateSplineTransform *op = static_cast<vtkThinPlateSplineTransform *>(vp);

  vtkPoints *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
    {
    if (ap.IsBound())
      {
      op->SetTargetLandmarks(temp0);
      }
    else
      {
      op->vtkThinPlateSplineTransform::SetTargetLandmarks(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThinPlateSplineTransform_GetTargetLandmarks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetLandmarks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThinPlateSplineTransform *op = static_cast<vtkThinPlateSplineTransform *>(vp);

  vtkPoints *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTargetLandmarks();
      }
    else
      {
      tempr = op->vtkThinPlateSplineTransform::GetTargetLandmarks();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThinPlateSplineTransform_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThinPlateSplineTransform *op = static_cast<vtkThinPlateSplineTransform *>(vp);

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
      tempr = op->vtkThinPlateSplineTransform::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThinPlateSplineTransform_MakeTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThinPlateSplineTransform *op = static_cast<vtkThinPlateSplineTransform *>(vp);

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
      tempr = op->vtkThinPlateSplineTransform::MakeTransform();
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

static PyMethodDef PyvtkThinPlateSplineTransform_Methods[] = {
  {(char*)"GetClassName", PyvtkThinPlateSplineTransform_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkThinPlateSplineTransform_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkThinPlateSplineTransform_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkThinPlateSplineTransform\nC++: vtkThinPlateSplineTransform *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkThinPlateSplineTransform_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkThinPlateSplineTransform\nC++: vtkThinPlateSplineTransform *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetSigma", PyvtkThinPlateSplineTransform_GetSigma, 1,
   (char*)"V.GetSigma() -> float\nC++: double GetSigma()\n\nSpecify the 'stiffness' of the spline. The default is 1.0.\n"},
  {(char*)"SetSigma", PyvtkThinPlateSplineTransform_SetSigma, 1,
   (char*)"V.SetSigma(float)\nC++: void SetSigma(double a)\n\nSpecify the 'stiffness' of the spline. The default is 1.0.\n"},
  {(char*)"SetBasis", PyvtkThinPlateSplineTransform_SetBasis, 1,
   (char*)"V.SetBasis(int)\nC++: void SetBasis(int basis)\n\nSpecify the radial basis function to use.  The default is R2LogR\nwhich is appropriate for 2D. Use |R| (SetBasisToR) if your data\nis 3D. Alternatively specify your own basis function, however\nthis will mean that the transform will no longer be a true\nthin-plate spline.\n"},
  {(char*)"GetBasis", PyvtkThinPlateSplineTransform_GetBasis, 1,
   (char*)"V.GetBasis() -> int\nC++: int GetBasis()\n\nSpecify the radial basis function to use.  The default is R2LogR\nwhich is appropriate for 2D. Use |R| (SetBasisToR) if your data\nis 3D. Alternatively specify your own basis function, however\nthis will mean that the transform will no longer be a true\nthin-plate spline.\n"},
  {(char*)"SetBasisToR", PyvtkThinPlateSplineTransform_SetBasisToR, 1,
   (char*)"V.SetBasisToR()\nC++: void SetBasisToR()\n\nSpecify the radial basis function to use.  The default is R2LogR\nwhich is appropriate for 2D. Use |R| (SetBasisToR) if your data\nis 3D. Alternatively specify your own basis function, however\nthis will mean that the transform will no longer be a true\nthin-plate spline.\n"},
  {(char*)"SetBasisToR2LogR", PyvtkThinPlateSplineTransform_SetBasisToR2LogR, 1,
   (char*)"V.SetBasisToR2LogR()\nC++: void SetBasisToR2LogR()\n\nSpecify the radial basis function to use.  The default is R2LogR\nwhich is appropriate for 2D. Use |R| (SetBasisToR) if your data\nis 3D. Alternatively specify your own basis function, however\nthis will mean that the transform will no longer be a true\nthin-plate spline.\n"},
  {(char*)"GetBasisAsString", PyvtkThinPlateSplineTransform_GetBasisAsString, 1,
   (char*)"V.GetBasisAsString() -> string\nC++: const char *GetBasisAsString()\n\nSpecify the radial basis function to use.  The default is R2LogR\nwhich is appropriate for 2D. Use |R| (SetBasisToR) if your data\nis 3D. Alternatively specify your own basis function, however\nthis will mean that the transform will no longer be a true\nthin-plate spline.\n"},
  {(char*)"SetSourceLandmarks", PyvtkThinPlateSplineTransform_SetSourceLandmarks, 1,
   (char*)"V.SetSourceLandmarks(vtkPoints)\nC++: void SetSourceLandmarks(vtkPoints *source)\n\nSet the source landmarks for the warp.  If you add or change the\nvtkPoints object, you must call Modified() on it or the\ntransformation might not update.\n"},
  {(char*)"GetSourceLandmarks", PyvtkThinPlateSplineTransform_GetSourceLandmarks, 1,
   (char*)"V.GetSourceLandmarks() -> vtkPoints\nC++: vtkPoints *GetSourceLandmarks()\n\nSet the source landmarks for the warp.  If you add or change the\nvtkPoints object, you must call Modified() on it or the\ntransformation might not update.\n"},
  {(char*)"SetTargetLandmarks", PyvtkThinPlateSplineTransform_SetTargetLandmarks, 1,
   (char*)"V.SetTargetLandmarks(vtkPoints)\nC++: void SetTargetLandmarks(vtkPoints *target)\n\nSet the target landmarks for the warp.  If you add or change the\nvtkPoints object, you must call Modified() on it or the\ntransformation might not update.\n"},
  {(char*)"GetTargetLandmarks", PyvtkThinPlateSplineTransform_GetTargetLandmarks, 1,
   (char*)"V.GetTargetLandmarks() -> vtkPoints\nC++: vtkPoints *GetTargetLandmarks()\n\nSet the target landmarks for the warp.  If you add or change the\nvtkPoints object, you must call Modified() on it or the\ntransformation might not update.\n"},
  {(char*)"GetMTime", PyvtkThinPlateSplineTransform_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nGet the MTime.\n"},
  {(char*)"MakeTransform", PyvtkThinPlateSplineTransform_MakeTransform, 1,
   (char*)"V.MakeTransform() -> vtkAbstractTransform\nC++: vtkAbstractTransform *MakeTransform()\n\nMake another transform of the same type.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkThinPlateSplineTransform_StaticNew()
{
  return vtkThinPlateSplineTransform::New();
}

PyObject *PyVTKClass_vtkThinPlateSplineTransformNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkThinPlateSplineTransform_StaticNew,
    PyvtkThinPlateSplineTransform_Methods,
    "vtkThinPlateSplineTransform", modulename,
    NULL, NULL,
    PyvtkThinPlateSplineTransform_Doc(),
    PyVTKClass_vtkWarpTransformNew(modulename));
  return cls;
}

const char **PyvtkThinPlateSplineTransform_Doc()
{
  static const char *docstring[] = {
    "vtkThinPlateSplineTransform - a nonlinear warp transformation\n\n",
    "Superclass: vtkWarpTransform\n\n",
    "vtkThinPlateSplineTransform describes a nonlinear warp transform\ndefined by a set of source and target landmarks. Any point on the\nmesh close to a source landmark will be moved to a place close to the\ncorresponding target landmark. The points in between are interpolated\nsmoothly using Bookstein's Thin Plate Spline algorithm.\n\nTo obtain a correct TPS warp, use the R2LogR kernel if your data is\n2D, ",
    "and the R kernel if your data is 3D. Or you can specify your own\nRBF. (Hence this class is more general than a pure TPS transform.)\n\nCaveats:\n\n1) The inverse transform is calculated using an iterative method, and\nis several times more expensive than the forward transform.\n2) Whenever you add, subtract, or set points you must call Modified()\n   on the vtkPoints object, or the transformation might n",
    "ot update.\n3) Collinear point configurations (except those that lie in the XY\n   plane) result in an unstable transformation.\n\nSee Also:\n\nvtkGridTransform vtkGeneralTransform\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkThinPlateSplineTransform(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkThinPlateSplineTransformNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkThinPlateSplineTransform", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_RBF_CUSTOM", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_RBF_R", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_RBF_R2LOGR", o) != 0)
    {
    Py_DECREF(o);
    }

}

