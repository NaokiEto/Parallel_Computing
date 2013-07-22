// python wrapper for vtkImageEuclideanToPolar
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
#include "vtkImageEuclideanToPolar.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageEuclideanToPolar(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageEuclideanToPolar(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageEuclideanToPolarNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageEuclideanToPolarNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageEuclideanToPolar_Doc();


static PyObject *
PyvtkImageEuclideanToPolar_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanToPolar *op = static_cast<vtkImageEuclideanToPolar *>(vp);

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
      tempr = op->vtkImageEuclideanToPolar::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageEuclideanToPolar_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanToPolar *op = static_cast<vtkImageEuclideanToPolar *>(vp);

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
      tempr = op->vtkImageEuclideanToPolar::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageEuclideanToPolar_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanToPolar *op = static_cast<vtkImageEuclideanToPolar *>(vp);

  vtkImageEuclideanToPolar *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageEuclideanToPolar::NewInstance();
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
PyvtkImageEuclideanToPolar_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageEuclideanToPolar *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageEuclideanToPolar::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageEuclideanToPolar_SetThetaMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThetaMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanToPolar *op = static_cast<vtkImageEuclideanToPolar *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetThetaMaximum(temp0);
      }
    else
      {
      op->vtkImageEuclideanToPolar::SetThetaMaximum(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageEuclideanToPolar_GetThetaMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThetaMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanToPolar *op = static_cast<vtkImageEuclideanToPolar *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetThetaMaximum();
      }
    else
      {
      tempr = op->vtkImageEuclideanToPolar::GetThetaMaximum();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageEuclideanToPolar_Methods[] = {
  {(char*)"GetClassName", PyvtkImageEuclideanToPolar_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageEuclideanToPolar_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageEuclideanToPolar_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageEuclideanToPolar\nC++: vtkImageEuclideanToPolar *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageEuclideanToPolar_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageEuclideanToPolar\nC++: vtkImageEuclideanToPolar *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetThetaMaximum", PyvtkImageEuclideanToPolar_SetThetaMaximum, 1,
   (char*)"V.SetThetaMaximum(float)\nC++: void SetThetaMaximum(double a)\n\nTheta is an angle. Maximum specifies when it maps back to 0.\nThetaMaximum defaults to 255 instead of 2PI, because unsigned\nchar is expected as input. The output type must be the same as\ninput type.\n"},
  {(char*)"GetThetaMaximum", PyvtkImageEuclideanToPolar_GetThetaMaximum, 1,
   (char*)"V.GetThetaMaximum() -> float\nC++: double GetThetaMaximum()\n\nTheta is an angle. Maximum specifies when it maps back to 0.\nThetaMaximum defaults to 255 instead of 2PI, because unsigned\nchar is expected as input. The output type must be the same as\ninput type.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageEuclideanToPolar_StaticNew()
{
  return vtkImageEuclideanToPolar::New();
}

PyObject *PyVTKClass_vtkImageEuclideanToPolarNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageEuclideanToPolar_StaticNew,
    PyvtkImageEuclideanToPolar_Methods,
    "vtkImageEuclideanToPolar", modulename,
    NULL, NULL,
    PyvtkImageEuclideanToPolar_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageEuclideanToPolar_Doc()
{
  static const char *docstring[] = {
    "vtkImageEuclideanToPolar - Converts 2D Euclidean coordinates to polar.\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "For each pixel with vector components x,y, this filter outputs theta\nin component0, and radius in component1.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageEuclideanToPolar(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageEuclideanToPolarNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageEuclideanToPolar", o) != 0)
    {
    Py_DECREF(o);
    }

}

