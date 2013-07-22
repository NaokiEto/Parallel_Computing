// python wrapper for vtkGridTransform
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
#include "vtkGridTransform.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGridTransform(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGridTransform(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGridTransformNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGridTransformNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkWarpTransformNew
extern "C" { PyObject *PyVTKClass_vtkWarpTransformNew(const char *); }
#define DECLARED_PyVTKClass_vtkWarpTransformNew
#endif

static const char **PyvtkGridTransform_Doc();


static PyObject *
PyvtkGridTransform_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

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
      tempr = op->vtkGridTransform::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGridTransform_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

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
      tempr = op->vtkGridTransform::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGridTransform_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

  vtkGridTransform *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGridTransform::NewInstance();
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
PyvtkGridTransform_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGridTransform *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGridTransform::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGridTransform_SetDisplacementGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplacementGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetDisplacementGrid(temp0);
      }
    else
      {
      op->vtkGridTransform::SetDisplacementGrid(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGridTransform_GetDisplacementGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplacementGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

  vtkImageData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDisplacementGrid();
      }
    else
      {
      tempr = op->vtkGridTransform::GetDisplacementGrid();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGridTransform_SetDisplacementScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplacementScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDisplacementScale(temp0);
      }
    else
      {
      op->vtkGridTransform::SetDisplacementScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGridTransform_GetDisplacementScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplacementScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDisplacementScale();
      }
    else
      {
      tempr = op->vtkGridTransform::GetDisplacementScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGridTransform_SetDisplacementShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplacementShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDisplacementShift(temp0);
      }
    else
      {
      op->vtkGridTransform::SetDisplacementShift(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGridTransform_GetDisplacementShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplacementShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDisplacementShift();
      }
    else
      {
      tempr = op->vtkGridTransform::GetDisplacementShift();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGridTransform_SetInterpolationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

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
      op->vtkGridTransform::SetInterpolationMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGridTransform_GetInterpolationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

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
      tempr = op->vtkGridTransform::GetInterpolationMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGridTransform_SetInterpolationModeToNearestNeighbor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationModeToNearestNeighbor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationModeToNearestNeighbor();
      }
    else
      {
      op->vtkGridTransform::SetInterpolationModeToNearestNeighbor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGridTransform_SetInterpolationModeToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationModeToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationModeToLinear();
      }
    else
      {
      op->vtkGridTransform::SetInterpolationModeToLinear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGridTransform_SetInterpolationModeToCubic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationModeToCubic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationModeToCubic();
      }
    else
      {
      op->vtkGridTransform::SetInterpolationModeToCubic();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGridTransform_GetInterpolationModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

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
      tempr = op->vtkGridTransform::GetInterpolationModeAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGridTransform_MakeTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

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
      tempr = op->vtkGridTransform::MakeTransform();
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
PyvtkGridTransform_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

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
      tempr = op->vtkGridTransform::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGridTransform_Methods[] = {
  {(char*)"GetClassName", PyvtkGridTransform_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGridTransform_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGridTransform_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGridTransform\nC++: vtkGridTransform *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGridTransform_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGridTransform\nC++: vtkGridTransform *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetDisplacementGrid", PyvtkGridTransform_SetDisplacementGrid, 1,
   (char*)"V.SetDisplacementGrid(vtkImageData)\nC++: virtual void SetDisplacementGrid(vtkImageData *)\n\nSet/Get the grid transform (the grid transform must have three\ncomponents for displacement in x, y, and z respectively). The\nvtkGridTransform class will never modify the data.\n"},
  {(char*)"GetDisplacementGrid", PyvtkGridTransform_GetDisplacementGrid, 1,
   (char*)"V.GetDisplacementGrid() -> vtkImageData\nC++: vtkImageData *GetDisplacementGrid()\n\nSet/Get the grid transform (the grid transform must have three\ncomponents for displacement in x, y, and z respectively). The\nvtkGridTransform class will never modify the data.\n"},
  {(char*)"SetDisplacementScale", PyvtkGridTransform_SetDisplacementScale, 1,
   (char*)"V.SetDisplacementScale(float)\nC++: void SetDisplacementScale(double a)\n\nSet scale factor to be applied to the displacements. This is used\nprimarily for grids which contain integer data types.  Default: 1\n"},
  {(char*)"GetDisplacementScale", PyvtkGridTransform_GetDisplacementScale, 1,
   (char*)"V.GetDisplacementScale() -> float\nC++: double GetDisplacementScale()\n\nSet scale factor to be applied to the displacements. This is used\nprimarily for grids which contain integer data types.  Default: 1\n"},
  {(char*)"SetDisplacementShift", PyvtkGridTransform_SetDisplacementShift, 1,
   (char*)"V.SetDisplacementShift(float)\nC++: void SetDisplacementShift(double a)\n\nSet a shift to be applied to the displacements.  The shift is\napplied after the scale, i.e. x = scale*y + shift. Default: 0\n"},
  {(char*)"GetDisplacementShift", PyvtkGridTransform_GetDisplacementShift, 1,
   (char*)"V.GetDisplacementShift() -> float\nC++: double GetDisplacementShift()\n\nSet a shift to be applied to the displacements.  The shift is\napplied after the scale, i.e. x = scale*y + shift. Default: 0\n"},
  {(char*)"SetInterpolationMode", PyvtkGridTransform_SetInterpolationMode, 1,
   (char*)"V.SetInterpolationMode(int)\nC++: void SetInterpolationMode(int mode)\n\nSet interpolation mode for sampling the grid.  Higher-order\ninterpolation allows you to use a sparser grid. Default: Linear.\n"},
  {(char*)"GetInterpolationMode", PyvtkGridTransform_GetInterpolationMode, 1,
   (char*)"V.GetInterpolationMode() -> int\nC++: int GetInterpolationMode()\n\nSet interpolation mode for sampling the grid.  Higher-order\ninterpolation allows you to use a sparser grid. Default: Linear.\n"},
  {(char*)"SetInterpolationModeToNearestNeighbor", PyvtkGridTransform_SetInterpolationModeToNearestNeighbor, 1,
   (char*)"V.SetInterpolationModeToNearestNeighbor()\nC++: void SetInterpolationModeToNearestNeighbor()\n\nSet interpolation mode for sampling the grid.  Higher-order\ninterpolation allows you to use a sparser grid. Default: Linear.\n"},
  {(char*)"SetInterpolationModeToLinear", PyvtkGridTransform_SetInterpolationModeToLinear, 1,
   (char*)"V.SetInterpolationModeToLinear()\nC++: void SetInterpolationModeToLinear()\n\nSet interpolation mode for sampling the grid.  Higher-order\ninterpolation allows you to use a sparser grid. Default: Linear.\n"},
  {(char*)"SetInterpolationModeToCubic", PyvtkGridTransform_SetInterpolationModeToCubic, 1,
   (char*)"V.SetInterpolationModeToCubic()\nC++: void SetInterpolationModeToCubic()\n\nSet interpolation mode for sampling the grid.  Higher-order\ninterpolation allows you to use a sparser grid. Default: Linear.\n"},
  {(char*)"GetInterpolationModeAsString", PyvtkGridTransform_GetInterpolationModeAsString, 1,
   (char*)"V.GetInterpolationModeAsString() -> string\nC++: const char *GetInterpolationModeAsString()\n\nSet interpolation mode for sampling the grid.  Higher-order\ninterpolation allows you to use a sparser grid. Default: Linear.\n"},
  {(char*)"MakeTransform", PyvtkGridTransform_MakeTransform, 1,
   (char*)"V.MakeTransform() -> vtkAbstractTransform\nC++: vtkAbstractTransform *MakeTransform()\n\nMake another transform of the same type.\n"},
  {(char*)"GetMTime", PyvtkGridTransform_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nGet the MTime.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGridTransform_StaticNew()
{
  return vtkGridTransform::New();
}

PyObject *PyVTKClass_vtkGridTransformNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGridTransform_StaticNew,
    PyvtkGridTransform_Methods,
    "vtkGridTransform", modulename,
    NULL, NULL,
    PyvtkGridTransform_Doc(),
    PyVTKClass_vtkWarpTransformNew(modulename));
  return cls;
}

const char **PyvtkGridTransform_Doc()
{
  static const char *docstring[] = {
    "vtkGridTransform - a nonlinear warp transformation\n\n",
    "Superclass: vtkWarpTransform\n\n",
    "vtkGridTransform describes a nonlinear warp transformation as a set\nof displacement vectors sampled along a uniform 3D grid.\n\nCaveats:\n\nThe inverse grid transform is calculated using an iterative method,\nand is several times more expensive than the forward transform.\n\nSee Also:\n\nvtkThinPlateSplineTransform vtkGeneralTransform vtkTransformToGrid\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGridTransform(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGridTransformNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGridTransform", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_GRID_NEAREST", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_GRID_LINEAR", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(3);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_GRID_CUBIC", o) != 0)
    {
    Py_DECREF(o);
    }

}

