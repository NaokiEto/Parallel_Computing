// python wrapper for vtkImageSeparableConvolution
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
#include "vtkImageSeparableConvolution.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageSeparableConvolution(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageSeparableConvolution(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageSeparableConvolutionNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageSeparableConvolutionNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageDecomposeFilterNew
extern "C" { PyObject *PyVTKClass_vtkImageDecomposeFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageDecomposeFilterNew
#endif

static const char **PyvtkImageSeparableConvolution_Doc();


static PyObject *
PyvtkImageSeparableConvolution_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeparableConvolution *op = static_cast<vtkImageSeparableConvolution *>(vp);

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
      tempr = op->vtkImageSeparableConvolution::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSeparableConvolution_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeparableConvolution *op = static_cast<vtkImageSeparableConvolution *>(vp);

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
      tempr = op->vtkImageSeparableConvolution::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSeparableConvolution_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeparableConvolution *op = static_cast<vtkImageSeparableConvolution *>(vp);

  vtkImageSeparableConvolution *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageSeparableConvolution::NewInstance();
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
PyvtkImageSeparableConvolution_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageSeparableConvolution *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageSeparableConvolution::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSeparableConvolution_SetXKernel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXKernel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeparableConvolution *op = static_cast<vtkImageSeparableConvolution *>(vp);

  vtkFloatArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFloatArray"))
    {
    if (ap.IsBound())
      {
      op->SetXKernel(temp0);
      }
    else
      {
      op->vtkImageSeparableConvolution::SetXKernel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSeparableConvolution_GetXKernel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXKernel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeparableConvolution *op = static_cast<vtkImageSeparableConvolution *>(vp);

  vtkFloatArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXKernel();
      }
    else
      {
      tempr = op->vtkImageSeparableConvolution::GetXKernel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSeparableConvolution_SetYKernel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYKernel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeparableConvolution *op = static_cast<vtkImageSeparableConvolution *>(vp);

  vtkFloatArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFloatArray"))
    {
    if (ap.IsBound())
      {
      op->SetYKernel(temp0);
      }
    else
      {
      op->vtkImageSeparableConvolution::SetYKernel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSeparableConvolution_GetYKernel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYKernel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeparableConvolution *op = static_cast<vtkImageSeparableConvolution *>(vp);

  vtkFloatArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetYKernel();
      }
    else
      {
      tempr = op->vtkImageSeparableConvolution::GetYKernel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSeparableConvolution_SetZKernel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZKernel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeparableConvolution *op = static_cast<vtkImageSeparableConvolution *>(vp);

  vtkFloatArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFloatArray"))
    {
    if (ap.IsBound())
      {
      op->SetZKernel(temp0);
      }
    else
      {
      op->vtkImageSeparableConvolution::SetZKernel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSeparableConvolution_GetZKernel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZKernel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeparableConvolution *op = static_cast<vtkImageSeparableConvolution *>(vp);

  vtkFloatArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetZKernel();
      }
    else
      {
      tempr = op->vtkImageSeparableConvolution::GetZKernel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSeparableConvolution_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeparableConvolution *op = static_cast<vtkImageSeparableConvolution *>(vp);

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
      tempr = op->vtkImageSeparableConvolution::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageSeparableConvolution_Methods[] = {
  {(char*)"GetClassName", PyvtkImageSeparableConvolution_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageSeparableConvolution_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageSeparableConvolution_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageSeparableConvolution\nC++: vtkImageSeparableConvolution *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageSeparableConvolution_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageSeparableConvolution\nC++: vtkImageSeparableConvolution *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetXKernel", PyvtkImageSeparableConvolution_SetXKernel, 1,
   (char*)"V.SetXKernel(vtkFloatArray)\nC++: virtual void SetXKernel(vtkFloatArray *)\n\n"},
  {(char*)"GetXKernel", PyvtkImageSeparableConvolution_GetXKernel, 1,
   (char*)"V.GetXKernel() -> vtkFloatArray\nC++: vtkFloatArray *GetXKernel()\n\n"},
  {(char*)"SetYKernel", PyvtkImageSeparableConvolution_SetYKernel, 1,
   (char*)"V.SetYKernel(vtkFloatArray)\nC++: virtual void SetYKernel(vtkFloatArray *)\n\n"},
  {(char*)"GetYKernel", PyvtkImageSeparableConvolution_GetYKernel, 1,
   (char*)"V.GetYKernel() -> vtkFloatArray\nC++: vtkFloatArray *GetYKernel()\n\n"},
  {(char*)"SetZKernel", PyvtkImageSeparableConvolution_SetZKernel, 1,
   (char*)"V.SetZKernel(vtkFloatArray)\nC++: virtual void SetZKernel(vtkFloatArray *)\n\n"},
  {(char*)"GetZKernel", PyvtkImageSeparableConvolution_GetZKernel, 1,
   (char*)"V.GetZKernel() -> vtkFloatArray\nC++: vtkFloatArray *GetZKernel()\n\n"},
  {(char*)"GetMTime", PyvtkImageSeparableConvolution_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nOverload standard modified time function. If kernel arrays are\nmodified, then this object is modified as well.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageSeparableConvolution_StaticNew()
{
  return vtkImageSeparableConvolution::New();
}

PyObject *PyVTKClass_vtkImageSeparableConvolutionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageSeparableConvolution_StaticNew,
    PyvtkImageSeparableConvolution_Methods,
    "vtkImageSeparableConvolution", modulename,
    NULL, NULL,
    PyvtkImageSeparableConvolution_Doc(),
    PyVTKClass_vtkImageDecomposeFilterNew(modulename));
  return cls;
}

const char **PyvtkImageSeparableConvolution_Doc()
{
  static const char *docstring[] = {
    "vtkImageSeparableConvolution -  3 1D convolutions on an image\n\n",
    "Superclass: vtkImageDecomposeFilter\n\n",
    "vtkImageSeparableConvolution performs a convolution along the X, Y,\nand Z axes of an image, based on the three different 1D convolution\nkernels.  The kernels must be of odd size, and are considered to be\ncentered at (int)((kernelsize - 1) / 2.0 ).  If a kernel is NULL,\nthat dimension is skipped.  This filter is designed to efficiently\nconvolve separable filters that can be decomposed into 1 or mor",
    "e 1D\nconvolutions.  It also handles arbitrarly large kernel sizes, and\nuses edge replication to handle boundaries.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageSeparableConvolution(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageSeparableConvolutionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageSeparableConvolution", o) != 0)
    {
    Py_DECREF(o);
    }

}

