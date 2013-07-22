// python wrapper for vtkImageGradientMagnitude
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
#include "vtkImageGradientMagnitude.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageGradientMagnitude(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageGradientMagnitude(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageGradientMagnitudeNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageGradientMagnitudeNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageGradientMagnitude_Doc();


static PyObject *
PyvtkImageGradientMagnitude_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradientMagnitude *op = static_cast<vtkImageGradientMagnitude *>(vp);

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
      tempr = op->vtkImageGradientMagnitude::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGradientMagnitude_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradientMagnitude *op = static_cast<vtkImageGradientMagnitude *>(vp);

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
      tempr = op->vtkImageGradientMagnitude::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGradientMagnitude_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradientMagnitude *op = static_cast<vtkImageGradientMagnitude *>(vp);

  vtkImageGradientMagnitude *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageGradientMagnitude::NewInstance();
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
PyvtkImageGradientMagnitude_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageGradientMagnitude *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageGradientMagnitude::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGradientMagnitude_SetHandleBoundaries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleBoundaries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradientMagnitude *op = static_cast<vtkImageGradientMagnitude *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHandleBoundaries(temp0);
      }
    else
      {
      op->vtkImageGradientMagnitude::SetHandleBoundaries(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageGradientMagnitude_GetHandleBoundaries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleBoundaries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradientMagnitude *op = static_cast<vtkImageGradientMagnitude *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHandleBoundaries();
      }
    else
      {
      tempr = op->vtkImageGradientMagnitude::GetHandleBoundaries();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGradientMagnitude_HandleBoundariesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleBoundariesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradientMagnitude *op = static_cast<vtkImageGradientMagnitude *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HandleBoundariesOn();
      }
    else
      {
      op->vtkImageGradientMagnitude::HandleBoundariesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageGradientMagnitude_HandleBoundariesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleBoundariesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradientMagnitude *op = static_cast<vtkImageGradientMagnitude *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HandleBoundariesOff();
      }
    else
      {
      op->vtkImageGradientMagnitude::HandleBoundariesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageGradientMagnitude_SetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradientMagnitude *op = static_cast<vtkImageGradientMagnitude *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDimensionality(temp0);
      }
    else
      {
      op->vtkImageGradientMagnitude::SetDimensionality(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageGradientMagnitude_GetDimensionalityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionalityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradientMagnitude *op = static_cast<vtkImageGradientMagnitude *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDimensionalityMinValue();
      }
    else
      {
      tempr = op->vtkImageGradientMagnitude::GetDimensionalityMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGradientMagnitude_GetDimensionalityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionalityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradientMagnitude *op = static_cast<vtkImageGradientMagnitude *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDimensionalityMaxValue();
      }
    else
      {
      tempr = op->vtkImageGradientMagnitude::GetDimensionalityMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGradientMagnitude_GetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradientMagnitude *op = static_cast<vtkImageGradientMagnitude *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDimensionality();
      }
    else
      {
      tempr = op->vtkImageGradientMagnitude::GetDimensionality();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageGradientMagnitude_Methods[] = {
  {(char*)"GetClassName", PyvtkImageGradientMagnitude_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageGradientMagnitude_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageGradientMagnitude_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageGradientMagnitude\nC++: vtkImageGradientMagnitude *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageGradientMagnitude_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageGradientMagnitude\nC++: vtkImageGradientMagnitude *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetHandleBoundaries", PyvtkImageGradientMagnitude_SetHandleBoundaries, 1,
   (char*)"V.SetHandleBoundaries(int)\nC++: void SetHandleBoundaries(int a)\n\nIf \"HandleBoundariesOn\" then boundary pixels are duplicated So\ncentral differences can get values.\n"},
  {(char*)"GetHandleBoundaries", PyvtkImageGradientMagnitude_GetHandleBoundaries, 1,
   (char*)"V.GetHandleBoundaries() -> int\nC++: int GetHandleBoundaries()\n\nIf \"HandleBoundariesOn\" then boundary pixels are duplicated So\ncentral differences can get values.\n"},
  {(char*)"HandleBoundariesOn", PyvtkImageGradientMagnitude_HandleBoundariesOn, 1,
   (char*)"V.HandleBoundariesOn()\nC++: void HandleBoundariesOn()\n\nIf \"HandleBoundariesOn\" then boundary pixels are duplicated So\ncentral differences can get values.\n"},
  {(char*)"HandleBoundariesOff", PyvtkImageGradientMagnitude_HandleBoundariesOff, 1,
   (char*)"V.HandleBoundariesOff()\nC++: void HandleBoundariesOff()\n\nIf \"HandleBoundariesOn\" then boundary pixels are duplicated So\ncentral differences can get values.\n"},
  {(char*)"SetDimensionality", PyvtkImageGradientMagnitude_SetDimensionality, 1,
   (char*)"V.SetDimensionality(int)\nC++: void SetDimensionality(int)\n\nDetermines how the input is interpreted (set of 2d slices ...)\n"},
  {(char*)"GetDimensionalityMinValue", PyvtkImageGradientMagnitude_GetDimensionalityMinValue, 1,
   (char*)"V.GetDimensionalityMinValue() -> int\nC++: int GetDimensionalityMinValue()\n\nDetermines how the input is interpreted (set of 2d slices ...)\n"},
  {(char*)"GetDimensionalityMaxValue", PyvtkImageGradientMagnitude_GetDimensionalityMaxValue, 1,
   (char*)"V.GetDimensionalityMaxValue() -> int\nC++: int GetDimensionalityMaxValue()\n\nDetermines how the input is interpreted (set of 2d slices ...)\n"},
  {(char*)"GetDimensionality", PyvtkImageGradientMagnitude_GetDimensionality, 1,
   (char*)"V.GetDimensionality() -> int\nC++: int GetDimensionality()\n\nDetermines how the input is interpreted (set of 2d slices ...)\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageGradientMagnitude_StaticNew()
{
  return vtkImageGradientMagnitude::New();
}

PyObject *PyVTKClass_vtkImageGradientMagnitudeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageGradientMagnitude_StaticNew,
    PyvtkImageGradientMagnitude_Methods,
    "vtkImageGradientMagnitude", modulename,
    NULL, NULL,
    PyvtkImageGradientMagnitude_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageGradientMagnitude_Doc()
{
  static const char *docstring[] = {
    "vtkImageGradientMagnitude - Computes magnitude of the gradient.\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "vtkImageGradientMagnitude computes the gradient magnitude of an\nimage. Setting the dimensionality determines whether the gradient is\ncomputed on 2D images, or 3D volumes.  The default is two dimensional\nXY images.\n\nSee Also:\n\nvtkImageGradient vtkImageMagnitude\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageGradientMagnitude(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageGradientMagnitudeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageGradientMagnitude", o) != 0)
    {
    Py_DECREF(o);
    }

}

