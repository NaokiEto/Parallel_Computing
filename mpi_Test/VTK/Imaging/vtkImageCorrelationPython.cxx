// python wrapper for vtkImageCorrelation
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
#include "vtkImageCorrelation.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageCorrelation(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageCorrelation(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageCorrelationNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageCorrelationNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageCorrelation_Doc();


static PyObject *
PyvtkImageCorrelation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCorrelation *op = static_cast<vtkImageCorrelation *>(vp);

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
      tempr = op->vtkImageCorrelation::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCorrelation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCorrelation *op = static_cast<vtkImageCorrelation *>(vp);

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
      tempr = op->vtkImageCorrelation::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCorrelation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCorrelation *op = static_cast<vtkImageCorrelation *>(vp);

  vtkImageCorrelation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageCorrelation::NewInstance();
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
PyvtkImageCorrelation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageCorrelation *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageCorrelation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCorrelation_SetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCorrelation *op = static_cast<vtkImageCorrelation *>(vp);

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
      op->vtkImageCorrelation::SetDimensionality(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCorrelation_GetDimensionalityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionalityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCorrelation *op = static_cast<vtkImageCorrelation *>(vp);

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
      tempr = op->vtkImageCorrelation::GetDimensionalityMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCorrelation_GetDimensionalityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionalityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCorrelation *op = static_cast<vtkImageCorrelation *>(vp);

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
      tempr = op->vtkImageCorrelation::GetDimensionalityMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCorrelation_GetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCorrelation *op = static_cast<vtkImageCorrelation *>(vp);

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
      tempr = op->vtkImageCorrelation::GetDimensionality();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCorrelation_SetInput1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCorrelation *op = static_cast<vtkImageCorrelation *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInput1(temp0);
      }
    else
      {
      op->vtkImageCorrelation::SetInput1(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCorrelation_SetInput2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCorrelation *op = static_cast<vtkImageCorrelation *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInput2(temp0);
      }
    else
      {
      op->vtkImageCorrelation::SetInput2(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageCorrelation_Methods[] = {
  {(char*)"GetClassName", PyvtkImageCorrelation_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageCorrelation_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageCorrelation_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageCorrelation\nC++: vtkImageCorrelation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageCorrelation_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageCorrelation\nC++: vtkImageCorrelation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetDimensionality", PyvtkImageCorrelation_SetDimensionality, 1,
   (char*)"V.SetDimensionality(int)\nC++: void SetDimensionality(int)\n\nDetermines how the input is interpreted (set of 2d slices ...).\nThe default is 2.\n"},
  {(char*)"GetDimensionalityMinValue", PyvtkImageCorrelation_GetDimensionalityMinValue, 1,
   (char*)"V.GetDimensionalityMinValue() -> int\nC++: int GetDimensionalityMinValue()\n\nDetermines how the input is interpreted (set of 2d slices ...).\nThe default is 2.\n"},
  {(char*)"GetDimensionalityMaxValue", PyvtkImageCorrelation_GetDimensionalityMaxValue, 1,
   (char*)"V.GetDimensionalityMaxValue() -> int\nC++: int GetDimensionalityMaxValue()\n\nDetermines how the input is interpreted (set of 2d slices ...).\nThe default is 2.\n"},
  {(char*)"GetDimensionality", PyvtkImageCorrelation_GetDimensionality, 1,
   (char*)"V.GetDimensionality() -> int\nC++: int GetDimensionality()\n\nDetermines how the input is interpreted (set of 2d slices ...).\nThe default is 2.\n"},
  {(char*)"SetInput1", PyvtkImageCorrelation_SetInput1, 1,
   (char*)"V.SetInput1(vtkDataObject)\nC++: virtual void SetInput1(vtkDataObject *in)\n\nSet the input image.\n"},
  {(char*)"SetInput2", PyvtkImageCorrelation_SetInput2, 1,
   (char*)"V.SetInput2(vtkDataObject)\nC++: virtual void SetInput2(vtkDataObject *in)\n\nSet the correlation kernel.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageCorrelation_StaticNew()
{
  return vtkImageCorrelation::New();
}

PyObject *PyVTKClass_vtkImageCorrelationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageCorrelation_StaticNew,
    PyvtkImageCorrelation_Methods,
    "vtkImageCorrelation", modulename,
    NULL, NULL,
    PyvtkImageCorrelation_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageCorrelation_Doc()
{
  static const char *docstring[] = {
    "vtkImageCorrelation - Correlation imageof the two inputs.\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "vtkImageCorrelation finds the correlation between two data sets.\nSetDimensionality determines whether the Correlation will be 3D, 2D\nor 1D. The default is a 2D Correlation.  The Output type will be\ndouble. The output size will match the size of the first input. The\nsecond input is considered the correlation kernel.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageCorrelation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageCorrelationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageCorrelation", o) != 0)
    {
    Py_DECREF(o);
    }

}

