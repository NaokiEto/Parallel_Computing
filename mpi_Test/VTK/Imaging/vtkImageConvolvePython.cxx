// python wrapper for vtkImageConvolve
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
#include "vtkImageConvolve.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageConvolve(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageConvolve(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageConvolveNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageConvolveNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageConvolve_Doc();


static PyObject *
PyvtkImageConvolve_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

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
      tempr = op->vtkImageConvolve::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageConvolve_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

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
      tempr = op->vtkImageConvolve::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageConvolve_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  vtkImageConvolve *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageConvolve::NewInstance();
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
PyvtkImageConvolve_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageConvolve *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageConvolve::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageConvolve_GetKernelSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKernelSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  int *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetKernelSize();
      }
    else
      {
      tempr = op->vtkImageConvolve::GetKernelSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageConvolve_SetKernel3x3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKernel3x3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  double temp0[9];
  const int size0 = 9;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetKernel3x3(temp0);
      }
    else
      {
      op->vtkImageConvolve::SetKernel3x3(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageConvolve_SetKernel5x5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKernel5x5");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  double temp0[25];
  const int size0 = 25;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetKernel5x5(temp0);
      }
    else
      {
      op->vtkImageConvolve::SetKernel5x5(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageConvolve_SetKernel7x7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKernel7x7");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  double temp0[49];
  double save0[49];
  const int size0 = 49;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetKernel7x7(temp0);
      }
    else
      {
      op->vtkImageConvolve::SetKernel7x7(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageConvolve_GetKernel3x3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKernel3x3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  double temp0[9];
  double save0[9];
  const int size0 = 9;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetKernel3x3(temp0);
      }
    else
      {
      op->vtkImageConvolve::GetKernel3x3(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageConvolve_GetKernel5x5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKernel5x5");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  double temp0[25];
  double save0[25];
  const int size0 = 25;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetKernel5x5(temp0);
      }
    else
      {
      op->vtkImageConvolve::GetKernel5x5(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageConvolve_GetKernel7x7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKernel7x7");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  double temp0[49];
  double save0[49];
  const int size0 = 49;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetKernel7x7(temp0);
      }
    else
      {
      op->vtkImageConvolve::GetKernel7x7(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageConvolve_SetKernel3x3x3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKernel3x3x3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  double temp0[27];
  const int size0 = 27;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetKernel3x3x3(temp0);
      }
    else
      {
      op->vtkImageConvolve::SetKernel3x3x3(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageConvolve_SetKernel5x5x5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKernel5x5x5");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  double temp0[125];
  double save0[125];
  const int size0 = 125;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetKernel5x5x5(temp0);
      }
    else
      {
      op->vtkImageConvolve::SetKernel5x5x5(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageConvolve_SetKernel7x7x7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKernel7x7x7");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  double temp0[343];
  double save0[343];
  const int size0 = 343;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetKernel7x7x7(temp0);
      }
    else
      {
      op->vtkImageConvolve::SetKernel7x7x7(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageConvolve_GetKernel3x3x3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKernel3x3x3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  double temp0[27];
  double save0[27];
  const int size0 = 27;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetKernel3x3x3(temp0);
      }
    else
      {
      op->vtkImageConvolve::GetKernel3x3x3(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageConvolve_GetKernel5x5x5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKernel5x5x5");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  double temp0[125];
  double save0[125];
  const int size0 = 125;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetKernel5x5x5(temp0);
      }
    else
      {
      op->vtkImageConvolve::GetKernel5x5x5(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageConvolve_GetKernel7x7x7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKernel7x7x7");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  double temp0[343];
  double save0[343];
  const int size0 = 343;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetKernel7x7x7(temp0);
      }
    else
      {
      op->vtkImageConvolve::GetKernel7x7x7(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageConvolve_Methods[] = {
  {(char*)"GetClassName", PyvtkImageConvolve_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nConstruct an instance of vtkImageConvolve filter.\n"},
  {(char*)"IsA", PyvtkImageConvolve_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nConstruct an instance of vtkImageConvolve filter.\n"},
  {(char*)"NewInstance", PyvtkImageConvolve_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageConvolve\nC++: vtkImageConvolve *NewInstance()\n\nConstruct an instance of vtkImageConvolve filter.\n"},
  {(char*)"SafeDownCast", PyvtkImageConvolve_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageConvolve\nC++: vtkImageConvolve *SafeDownCast(vtkObject* o)\n\nConstruct an instance of vtkImageConvolve filter.\n"},
  {(char*)"GetKernelSize", PyvtkImageConvolve_GetKernelSize, 1,
   (char*)"V.GetKernelSize() -> (int, int, int)\nC++: int *GetKernelSize()\n\n"},
  {(char*)"SetKernel3x3", PyvtkImageConvolve_SetKernel3x3, 1,
   (char*)"V.SetKernel3x3((float, float, float, float, float, float, float,\n    float, float))\nC++: void SetKernel3x3(const double kernel[9])\n\nSet the kernel to be a given 3x3 or 5x5 or 7x7 kernel.\n"},
  {(char*)"SetKernel5x5", PyvtkImageConvolve_SetKernel5x5, 1,
   (char*)"V.SetKernel5x5((float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float))\nC++: void SetKernel5x5(const double kernel[25])\n\nSet the kernel to be a given 3x3 or 5x5 or 7x7 kernel.\n"},
  {(char*)"SetKernel7x7", PyvtkImageConvolve_SetKernel7x7, 1,
   (char*)"V.SetKernel7x7([float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float])\nC++: void SetKernel7x7(double kernel[49])\n\nSet the kernel to be a given 3x3 or 5x5 or 7x7 kernel.\n"},
  {(char*)"GetKernel3x3", PyvtkImageConvolve_GetKernel3x3, 1,
   (char*)"V.GetKernel3x3([float, float, float, float, float, float, float,\n    float, float])\nC++: void GetKernel3x3(double kernel[9])\n\nReturn an array that contains the kernel.\n"},
  {(char*)"GetKernel5x5", PyvtkImageConvolve_GetKernel5x5, 1,
   (char*)"V.GetKernel5x5([float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float])\nC++: void GetKernel5x5(double kernel[25])\n\nReturn an array that contains the kernel.\n"},
  {(char*)"GetKernel7x7", PyvtkImageConvolve_GetKernel7x7, 1,
   (char*)"V.GetKernel7x7([float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float])\nC++: void GetKernel7x7(double kernel[49])\n\nReturn an array that contains the kernel.\n"},
  {(char*)"SetKernel3x3x3", PyvtkImageConvolve_SetKernel3x3x3, 1,
   (char*)"V.SetKernel3x3x3((float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float))\nC++: void SetKernel3x3x3(const double kernel[27])\n\nSet the kernel to be a 3x3x3 or 5x5x5 or 7x7x7 kernel.\n"},
  {(char*)"SetKernel5x5x5", PyvtkImageConvolve_SetKernel5x5x5, 1,
   (char*)"V.SetKernel5x5x5([float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float])\nC++: void SetKernel5x5x5(double kernel[125])\n\nSet the kernel to be a 3x3x3 or 5x5x5 or 7x7x7 kernel.\n"},
  {(char*)"SetKernel7x7x7", PyvtkImageConvolve_SetKernel7x7x7, 1,
   (char*)"\n\nSet the kernel to be a 3x3x3 or 5x5x5 or 7x7x7 kernel.\n"},
  {(char*)"GetKernel3x3x3", PyvtkImageConvolve_GetKernel3x3x3, 1,
   (char*)"V.GetKernel3x3x3([float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float])\nC++: void GetKernel3x3x3(double kernel[27])\n\nReturn an array that contains the kernel\n"},
  {(char*)"GetKernel5x5x5", PyvtkImageConvolve_GetKernel5x5x5, 1,
   (char*)"V.GetKernel5x5x5([float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float])\nC++: void GetKernel5x5x5(double kernel[125])\n\nReturn an array that contains the kernel\n"},
  {(char*)"GetKernel7x7x7", PyvtkImageConvolve_GetKernel7x7x7, 1,
   (char*)"\n\nReturn an array that contains the kernel\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageConvolve_StaticNew()
{
  return vtkImageConvolve::New();
}

PyObject *PyVTKClass_vtkImageConvolveNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageConvolve_StaticNew,
    PyvtkImageConvolve_Methods,
    "vtkImageConvolve", modulename,
    NULL, NULL,
    PyvtkImageConvolve_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageConvolve_Doc()
{
  static const char *docstring[] = {
    "vtkImageConvolve - Convolution of an image with a kernel.\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "vtkImageConvolve convolves the image with a 3D NxNxN kernel or a 2D\nNxN kernal.  The output image is cropped to the same size as the\ninput.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageConvolve(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageConvolveNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageConvolve", o) != 0)
    {
    Py_DECREF(o);
    }

}

