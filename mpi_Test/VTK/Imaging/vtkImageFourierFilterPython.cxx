// python wrapper for vtkImageFourierFilter
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
#include "vtkImageFourierFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageFourierFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageFourierFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageFourierFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageFourierFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageDecomposeFilterNew
extern "C" { PyObject *PyVTKClass_vtkImageDecomposeFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageDecomposeFilterNew
#endif

static const char **PyvtkImageFourierFilter_Doc();


static PyObject *
PyvtkImageFourierFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFourierFilter *op = static_cast<vtkImageFourierFilter *>(vp);

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
      tempr = op->vtkImageFourierFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageFourierFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFourierFilter *op = static_cast<vtkImageFourierFilter *>(vp);

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
      tempr = op->vtkImageFourierFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageFourierFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFourierFilter *op = static_cast<vtkImageFourierFilter *>(vp);

  vtkImageFourierFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageFourierFilter::NewInstance();
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
PyvtkImageFourierFilter_ExecuteFft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExecuteFft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFourierFilter *op = static_cast<vtkImageFourierFilter *>(vp);

  vtkImageComplex *temp0 = NULL;
  vtkImageComplex *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkImageComplex") &&
      ap.GetVTKObject(temp1, "vtkImageComplex") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->ExecuteFft(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageFourierFilter::ExecuteFft(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageFourierFilter_ExecuteRfft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExecuteRfft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFourierFilter *op = static_cast<vtkImageFourierFilter *>(vp);

  vtkImageComplex *temp0 = NULL;
  vtkImageComplex *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkImageComplex") &&
      ap.GetVTKObject(temp1, "vtkImageComplex") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->ExecuteRfft(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageFourierFilter::ExecuteRfft(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageFourierFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkImageFourierFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageFourierFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageFourierFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageFourierFilter\nC++: vtkImageFourierFilter *NewInstance()\n\n"},
  {(char*)"ExecuteFft", PyvtkImageFourierFilter_ExecuteFft, 1,
   (char*)"V.ExecuteFft(vtkImageComplex, vtkImageComplex, int)\nC++: void ExecuteFft(vtkImageComplex *in, vtkImageComplex *out,\n    int N)\n\nThis function calculates the whole fft of an array. The contents\nof the input array are changed. (It is engineered for no\ndecimation)\n"},
  {(char*)"ExecuteRfft", PyvtkImageFourierFilter_ExecuteRfft, 1,
   (char*)"V.ExecuteRfft(vtkImageComplex, vtkImageComplex, int)\nC++: void ExecuteRfft(vtkImageComplex *in, vtkImageComplex *out,\n    int N)\n\nThis function calculates the whole fft of an array. The contents\nof the input array are changed. (It is engineered for no\ndecimation)\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkImageFourierFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkImageFourierFilter_Methods,
    "vtkImageFourierFilter", modulename,
    NULL, NULL,
    PyvtkImageFourierFilter_Doc(),
    PyVTKClass_vtkImageDecomposeFilterNew(modulename));
  return cls;
}

const char **PyvtkImageFourierFilter_Doc()
{
  static const char *docstring[] = {
    "vtkImageFourierFilter - Superclass that implements complex numbers.\n\n",
    "Superclass: vtkImageDecomposeFilter\n\n",
    "vtkImageFourierFilter is a class of filters that use complex numbers\nthis superclass is a container for methods that manipulate these\nstructure including fast Fourier transforms.  Complex numbers may\nbecome a class. This should really be a helper class.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageFourierFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageFourierFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageFourierFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

