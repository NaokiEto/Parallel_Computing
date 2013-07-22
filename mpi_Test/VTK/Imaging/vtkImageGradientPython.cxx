// python wrapper for vtkImageGradient
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
#include "vtkImageGradient.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageGradient(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageGradient(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageGradientNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageGradientNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageGradient_Doc();


static PyObject *
PyvtkImageGradient_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradient *op = static_cast<vtkImageGradient *>(vp);

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
      tempr = op->vtkImageGradient::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGradient_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradient *op = static_cast<vtkImageGradient *>(vp);

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
      tempr = op->vtkImageGradient::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGradient_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradient *op = static_cast<vtkImageGradient *>(vp);

  vtkImageGradient *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageGradient::NewInstance();
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
PyvtkImageGradient_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageGradient *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageGradient::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGradient_SetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradient *op = static_cast<vtkImageGradient *>(vp);

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
      op->vtkImageGradient::SetDimensionality(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageGradient_GetDimensionalityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionalityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradient *op = static_cast<vtkImageGradient *>(vp);

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
      tempr = op->vtkImageGradient::GetDimensionalityMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGradient_GetDimensionalityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionalityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradient *op = static_cast<vtkImageGradient *>(vp);

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
      tempr = op->vtkImageGradient::GetDimensionalityMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGradient_GetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradient *op = static_cast<vtkImageGradient *>(vp);

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
      tempr = op->vtkImageGradient::GetDimensionality();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGradient_SetHandleBoundaries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleBoundaries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradient *op = static_cast<vtkImageGradient *>(vp);

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
      op->vtkImageGradient::SetHandleBoundaries(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageGradient_GetHandleBoundaries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleBoundaries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradient *op = static_cast<vtkImageGradient *>(vp);

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
      tempr = op->vtkImageGradient::GetHandleBoundaries();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGradient_HandleBoundariesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleBoundariesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradient *op = static_cast<vtkImageGradient *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HandleBoundariesOn();
      }
    else
      {
      op->vtkImageGradient::HandleBoundariesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageGradient_HandleBoundariesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleBoundariesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradient *op = static_cast<vtkImageGradient *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HandleBoundariesOff();
      }
    else
      {
      op->vtkImageGradient::HandleBoundariesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageGradient_Methods[] = {
  {(char*)"GetClassName", PyvtkImageGradient_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageGradient_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageGradient_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageGradient\nC++: vtkImageGradient *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageGradient_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageGradient\nC++: vtkImageGradient *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetDimensionality", PyvtkImageGradient_SetDimensionality, 1,
   (char*)"V.SetDimensionality(int)\nC++: void SetDimensionality(int)\n\nDetermines how the input is interpreted (set of 2d slices ...)\n"},
  {(char*)"GetDimensionalityMinValue", PyvtkImageGradient_GetDimensionalityMinValue, 1,
   (char*)"V.GetDimensionalityMinValue() -> int\nC++: int GetDimensionalityMinValue()\n\nDetermines how the input is interpreted (set of 2d slices ...)\n"},
  {(char*)"GetDimensionalityMaxValue", PyvtkImageGradient_GetDimensionalityMaxValue, 1,
   (char*)"V.GetDimensionalityMaxValue() -> int\nC++: int GetDimensionalityMaxValue()\n\nDetermines how the input is interpreted (set of 2d slices ...)\n"},
  {(char*)"GetDimensionality", PyvtkImageGradient_GetDimensionality, 1,
   (char*)"V.GetDimensionality() -> int\nC++: int GetDimensionality()\n\nDetermines how the input is interpreted (set of 2d slices ...)\n"},
  {(char*)"SetHandleBoundaries", PyvtkImageGradient_SetHandleBoundaries, 1,
   (char*)"V.SetHandleBoundaries(int)\nC++: void SetHandleBoundaries(int a)\n\nGet/Set whether to handle boundaries.  If enabled, boundary\npixels are treated as duplicated so that central differencing\nworks for the boundary pixels.  If disabled, the output whole\nextent of the image is reduced by one pixel.\n"},
  {(char*)"GetHandleBoundaries", PyvtkImageGradient_GetHandleBoundaries, 1,
   (char*)"V.GetHandleBoundaries() -> int\nC++: int GetHandleBoundaries()\n\nGet/Set whether to handle boundaries.  If enabled, boundary\npixels are treated as duplicated so that central differencing\nworks for the boundary pixels.  If disabled, the output whole\nextent of the image is reduced by one pixel.\n"},
  {(char*)"HandleBoundariesOn", PyvtkImageGradient_HandleBoundariesOn, 1,
   (char*)"V.HandleBoundariesOn()\nC++: void HandleBoundariesOn()\n\nGet/Set whether to handle boundaries.  If enabled, boundary\npixels are treated as duplicated so that central differencing\nworks for the boundary pixels.  If disabled, the output whole\nextent of the image is reduced by one pixel.\n"},
  {(char*)"HandleBoundariesOff", PyvtkImageGradient_HandleBoundariesOff, 1,
   (char*)"V.HandleBoundariesOff()\nC++: void HandleBoundariesOff()\n\nGet/Set whether to handle boundaries.  If enabled, boundary\npixels are treated as duplicated so that central differencing\nworks for the boundary pixels.  If disabled, the output whole\nextent of the image is reduced by one pixel.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageGradient_StaticNew()
{
  return vtkImageGradient::New();
}

PyObject *PyVTKClass_vtkImageGradientNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageGradient_StaticNew,
    PyvtkImageGradient_Methods,
    "vtkImageGradient", modulename,
    NULL, NULL,
    PyvtkImageGradient_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageGradient_Doc()
{
  static const char *docstring[] = {
    "vtkImageGradient - Computes the gradient vector.\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "vtkImageGradient computes the gradient vector of an image.  The\nvector results are stored as scalar components. The Dimensionality\ndetermines whether to perform a 2d or 3d gradient. The default is two\ndimensional XY gradient.  OutputScalarType is always double. Gradient\nis computed using central differences.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageGradient(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageGradientNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageGradient", o) != 0)
    {
    Py_DECREF(o);
    }

}

