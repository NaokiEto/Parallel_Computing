// python wrapper for vtkImageGaussianSmooth
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
#include "vtkImageGaussianSmooth.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageGaussianSmooth(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageGaussianSmooth(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageGaussianSmoothNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageGaussianSmoothNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageGaussianSmooth_Doc();


static PyObject *
PyvtkImageGaussianSmooth_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

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
      tempr = op->vtkImageGaussianSmooth::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGaussianSmooth_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

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
      tempr = op->vtkImageGaussianSmooth::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGaussianSmooth_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  vtkImageGaussianSmooth *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageGaussianSmooth::NewInstance();
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
PyvtkImageGaussianSmooth_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageGaussianSmooth *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageGaussianSmooth::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGaussianSmooth_SetStandardDeviations_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStandardDeviations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetStandardDeviations(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageGaussianSmooth::SetStandardDeviations(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageGaussianSmooth_SetStandardDeviations_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStandardDeviations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetStandardDeviations(temp0);
      }
    else
      {
      op->vtkImageGaussianSmooth::SetStandardDeviations(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageGaussianSmooth_SetStandardDeviations_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStandardDeviations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetStandardDeviations(temp0, temp1);
      }
    else
      {
      op->vtkImageGaussianSmooth::SetStandardDeviations(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageGaussianSmooth_SetStandardDeviations(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageGaussianSmooth_SetStandardDeviations_s1(self, args);
    case 1:
      return PyvtkImageGaussianSmooth_SetStandardDeviations_s2(self, args);
    case 2:
      return PyvtkImageGaussianSmooth_SetStandardDeviations_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetStandardDeviations");
  return NULL;
}



static PyObject *
PyvtkImageGaussianSmooth_SetStandardDeviation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStandardDeviation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStandardDeviation(temp0);
      }
    else
      {
      op->vtkImageGaussianSmooth::SetStandardDeviation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageGaussianSmooth_SetStandardDeviation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStandardDeviation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetStandardDeviation(temp0, temp1);
      }
    else
      {
      op->vtkImageGaussianSmooth::SetStandardDeviation(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageGaussianSmooth_SetStandardDeviation_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStandardDeviation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetStandardDeviation(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageGaussianSmooth::SetStandardDeviation(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageGaussianSmooth_SetStandardDeviation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImageGaussianSmooth_SetStandardDeviation_s1(self, args);
    case 2:
      return PyvtkImageGaussianSmooth_SetStandardDeviation_s2(self, args);
    case 3:
      return PyvtkImageGaussianSmooth_SetStandardDeviation_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetStandardDeviation");
  return NULL;
}



static PyObject *
PyvtkImageGaussianSmooth_GetStandardDeviations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStandardDeviations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStandardDeviations();
      }
    else
      {
      tempr = op->vtkImageGaussianSmooth::GetStandardDeviations();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGaussianSmooth_SetRadiusFactors_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadiusFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetRadiusFactors(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageGaussianSmooth::SetRadiusFactors(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageGaussianSmooth_SetRadiusFactors_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadiusFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetRadiusFactors(temp0);
      }
    else
      {
      op->vtkImageGaussianSmooth::SetRadiusFactors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageGaussianSmooth_SetRadiusFactors_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadiusFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetRadiusFactors(temp0, temp1);
      }
    else
      {
      op->vtkImageGaussianSmooth::SetRadiusFactors(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageGaussianSmooth_SetRadiusFactors(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageGaussianSmooth_SetRadiusFactors_s1(self, args);
    case 1:
      return PyvtkImageGaussianSmooth_SetRadiusFactors_s2(self, args);
    case 2:
      return PyvtkImageGaussianSmooth_SetRadiusFactors_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetRadiusFactors");
  return NULL;
}



static PyObject *
PyvtkImageGaussianSmooth_SetRadiusFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadiusFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRadiusFactor(temp0);
      }
    else
      {
      op->vtkImageGaussianSmooth::SetRadiusFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageGaussianSmooth_GetRadiusFactors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRadiusFactors();
      }
    else
      {
      tempr = op->vtkImageGaussianSmooth::GetRadiusFactors();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGaussianSmooth_SetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

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
      op->vtkImageGaussianSmooth::SetDimensionality(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageGaussianSmooth_GetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

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
      tempr = op->vtkImageGaussianSmooth::GetDimensionality();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageGaussianSmooth_Methods[] = {
  {(char*)"GetClassName", PyvtkImageGaussianSmooth_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageGaussianSmooth_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageGaussianSmooth_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageGaussianSmooth\nC++: vtkImageGaussianSmooth *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageGaussianSmooth_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageGaussianSmooth\nC++: vtkImageGaussianSmooth *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetStandardDeviations", PyvtkImageGaussianSmooth_SetStandardDeviations, 1,
   (char*)"V.SetStandardDeviations(float, float, float)\nC++: void SetStandardDeviations(double, double, double)\nV.SetStandardDeviations((float, float, float))\nC++: void SetStandardDeviations(double a[3])\nV.SetStandardDeviations(float, float)\nC++: void SetStandardDeviations(double a, double b)\n\n"},
  {(char*)"SetStandardDeviation", PyvtkImageGaussianSmooth_SetStandardDeviation, 1,
   (char*)"V.SetStandardDeviation(float)\nC++: void SetStandardDeviation(double std)\nV.SetStandardDeviation(float, float)\nC++: void SetStandardDeviation(double a, double b)\nV.SetStandardDeviation(float, float, float)\nC++: void SetStandardDeviation(double a, double b, double c)\n\nSets/Gets the Standard deviation of the gaussian in pixel units.\n"},
  {(char*)"GetStandardDeviations", PyvtkImageGaussianSmooth_GetStandardDeviations, 1,
   (char*)"V.GetStandardDeviations() -> (float, float, float)\nC++: double *GetStandardDeviations()\n\n"},
  {(char*)"SetRadiusFactors", PyvtkImageGaussianSmooth_SetRadiusFactors, 1,
   (char*)"V.SetRadiusFactors(float, float, float)\nC++: void SetRadiusFactors(double, double, double)\nV.SetRadiusFactors((float, float, float))\nC++: void SetRadiusFactors(double a[3])\nV.SetRadiusFactors(float, float)\nC++: void SetRadiusFactors(double f, double f2)\n\n"},
  {(char*)"SetRadiusFactor", PyvtkImageGaussianSmooth_SetRadiusFactor, 1,
   (char*)"V.SetRadiusFactor(float)\nC++: void SetRadiusFactor(double f)\n\nSets/Gets the Radius Factors of the gaussian (no unit). The\nradius factors determine how far out the gaussian kernel will go\nbefore being clamped to zero.\n"},
  {(char*)"GetRadiusFactors", PyvtkImageGaussianSmooth_GetRadiusFactors, 1,
   (char*)"V.GetRadiusFactors() -> (float, float, float)\nC++: double *GetRadiusFactors()\n\n"},
  {(char*)"SetDimensionality", PyvtkImageGaussianSmooth_SetDimensionality, 1,
   (char*)"V.SetDimensionality(int)\nC++: void SetDimensionality(int a)\n\nSet/Get the dimensionality of this filter. This determines\nwhether a one, two, or three dimensional gaussian is performed.\n"},
  {(char*)"GetDimensionality", PyvtkImageGaussianSmooth_GetDimensionality, 1,
   (char*)"V.GetDimensionality() -> int\nC++: int GetDimensionality()\n\nSet/Get the dimensionality of this filter. This determines\nwhether a one, two, or three dimensional gaussian is performed.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageGaussianSmooth_StaticNew()
{
  return vtkImageGaussianSmooth::New();
}

PyObject *PyVTKClass_vtkImageGaussianSmoothNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageGaussianSmooth_StaticNew,
    PyvtkImageGaussianSmooth_Methods,
    "vtkImageGaussianSmooth", modulename,
    NULL, NULL,
    PyvtkImageGaussianSmooth_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageGaussianSmooth_Doc()
{
  static const char *docstring[] = {
    "vtkImageGaussianSmooth - Performs a gaussian convolution.\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "vtkImageGaussianSmooth implements a convolution of the input image\nwith a gaussian. Supports from one to three dimensional convolutions.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageGaussianSmooth(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageGaussianSmoothNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageGaussianSmooth", o) != 0)
    {
    Py_DECREF(o);
    }

}

