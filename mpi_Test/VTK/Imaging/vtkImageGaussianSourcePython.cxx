// python wrapper for vtkImageGaussianSource
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
#include "vtkImageGaussianSource.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageGaussianSource(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageGaussianSource(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageGaussianSourceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageGaussianSourceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkImageGaussianSource_Doc();


static PyObject *
PyvtkImageGaussianSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSource *op = static_cast<vtkImageGaussianSource *>(vp);

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
      tempr = op->vtkImageGaussianSource::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGaussianSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSource *op = static_cast<vtkImageGaussianSource *>(vp);

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
      tempr = op->vtkImageGaussianSource::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGaussianSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSource *op = static_cast<vtkImageGaussianSource *>(vp);

  vtkImageGaussianSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageGaussianSource::NewInstance();
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
PyvtkImageGaussianSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageGaussianSource *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageGaussianSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGaussianSource_SetWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSource *op = static_cast<vtkImageGaussianSource *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkImageGaussianSource::SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageGaussianSource_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSource *op = static_cast<vtkImageGaussianSource *>(vp);

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
      op->SetCenter(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageGaussianSource::SetCenter(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageGaussianSource_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSource *op = static_cast<vtkImageGaussianSource *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetCenter(temp0);
      }
    else
      {
      op->vtkImageGaussianSource::SetCenter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageGaussianSource_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageGaussianSource_SetCenter_s1(self, args);
    case 1:
      return PyvtkImageGaussianSource_SetCenter_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return NULL;
}



static PyObject *
PyvtkImageGaussianSource_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSource *op = static_cast<vtkImageGaussianSource *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCenter();
      }
    else
      {
      tempr = op->vtkImageGaussianSource::GetCenter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGaussianSource_SetMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSource *op = static_cast<vtkImageGaussianSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximum(temp0);
      }
    else
      {
      op->vtkImageGaussianSource::SetMaximum(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageGaussianSource_GetMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSource *op = static_cast<vtkImageGaussianSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximum();
      }
    else
      {
      tempr = op->vtkImageGaussianSource::GetMaximum();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGaussianSource_SetStandardDeviation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStandardDeviation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSource *op = static_cast<vtkImageGaussianSource *>(vp);

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
      op->vtkImageGaussianSource::SetStandardDeviation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageGaussianSource_GetStandardDeviation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStandardDeviation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSource *op = static_cast<vtkImageGaussianSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStandardDeviation();
      }
    else
      {
      tempr = op->vtkImageGaussianSource::GetStandardDeviation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageGaussianSource_Methods[] = {
  {(char*)"GetClassName", PyvtkImageGaussianSource_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageGaussianSource_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageGaussianSource_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageGaussianSource\nC++: vtkImageGaussianSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageGaussianSource_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageGaussianSource\nC++: vtkImageGaussianSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetWholeExtent", PyvtkImageGaussianSource_SetWholeExtent, 1,
   (char*)"V.SetWholeExtent(int, int, int, int, int, int)\nC++: void SetWholeExtent(int xMinx, int xMax, int yMin, int yMax,\n    int zMin, int zMax)\n\nSet/Get the extent of the whole output image.\n"},
  {(char*)"SetCenter", PyvtkImageGaussianSource_SetCenter, 1,
   (char*)"V.SetCenter(float, float, float)\nC++: void SetCenter(double, double, double)\nV.SetCenter((float, float, float))\nC++: void SetCenter(double a[3])\n\n"},
  {(char*)"GetCenter", PyvtkImageGaussianSource_GetCenter, 1,
   (char*)"V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\n\n"},
  {(char*)"SetMaximum", PyvtkImageGaussianSource_SetMaximum, 1,
   (char*)"V.SetMaximum(float)\nC++: void SetMaximum(double a)\n\nSet/Get the Maximum value of the gaussian\n"},
  {(char*)"GetMaximum", PyvtkImageGaussianSource_GetMaximum, 1,
   (char*)"V.GetMaximum() -> float\nC++: double GetMaximum()\n\nSet/Get the Maximum value of the gaussian\n"},
  {(char*)"SetStandardDeviation", PyvtkImageGaussianSource_SetStandardDeviation, 1,
   (char*)"V.SetStandardDeviation(float)\nC++: void SetStandardDeviation(double a)\n\nSet/Get the standard deviation of the gaussian\n"},
  {(char*)"GetStandardDeviation", PyvtkImageGaussianSource_GetStandardDeviation, 1,
   (char*)"V.GetStandardDeviation() -> float\nC++: double GetStandardDeviation()\n\nSet/Get the standard deviation of the gaussian\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageGaussianSource_StaticNew()
{
  return vtkImageGaussianSource::New();
}

PyObject *PyVTKClass_vtkImageGaussianSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageGaussianSource_StaticNew,
    PyvtkImageGaussianSource_Methods,
    "vtkImageGaussianSource", modulename,
    NULL, NULL,
    PyvtkImageGaussianSource_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageGaussianSource_Doc()
{
  static const char *docstring[] = {
    "vtkImageGaussianSource - Create an image with Gaussian pixel values.\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkImageGaussianSource just produces images with pixel values\ndetermined by a Gaussian.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageGaussianSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageGaussianSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageGaussianSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

