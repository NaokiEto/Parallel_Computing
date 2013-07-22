// python wrapper for vtkImageVariance3D
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
#include "vtkImageVariance3D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageVariance3D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageVariance3D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageVariance3DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageVariance3DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageSpatialAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageSpatialAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageSpatialAlgorithmNew
#endif

static const char **PyvtkImageVariance3D_Doc();


static PyObject *
PyvtkImageVariance3D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageVariance3D *op = static_cast<vtkImageVariance3D *>(vp);

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
      tempr = op->vtkImageVariance3D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageVariance3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageVariance3D *op = static_cast<vtkImageVariance3D *>(vp);

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
      tempr = op->vtkImageVariance3D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageVariance3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageVariance3D *op = static_cast<vtkImageVariance3D *>(vp);

  vtkImageVariance3D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageVariance3D::NewInstance();
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
PyvtkImageVariance3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageVariance3D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageVariance3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageVariance3D_SetKernelSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKernelSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageVariance3D *op = static_cast<vtkImageVariance3D *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetKernelSize(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageVariance3D::SetKernelSize(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageVariance3D_Methods[] = {
  {(char*)"GetClassName", PyvtkImageVariance3D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageVariance3D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageVariance3D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageVariance3D\nC++: vtkImageVariance3D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageVariance3D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageVariance3D\nC++: vtkImageVariance3D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetKernelSize", PyvtkImageVariance3D_SetKernelSize, 1,
   (char*)"V.SetKernelSize(int, int, int)\nC++: void SetKernelSize(int size0, int size1, int size2)\n\nThis method sets the size of the neighborhood.  It also sets the\ndefault middle of the neighborhood and computes the Elliptical\nfoot print.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageVariance3D_StaticNew()
{
  return vtkImageVariance3D::New();
}

PyObject *PyVTKClass_vtkImageVariance3DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageVariance3D_StaticNew,
    PyvtkImageVariance3D_Methods,
    "vtkImageVariance3D", modulename,
    NULL, NULL,
    PyvtkImageVariance3D_Doc(),
    PyVTKClass_vtkImageSpatialAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageVariance3D_Doc()
{
  static const char *docstring[] = {
    "vtkImageVariance3D - Variance in a neighborhood.\n\n",
    "Superclass: vtkImageSpatialAlgorithm\n\n",
    "vtkImageVariance3D replaces each pixel with a measurement of pixel\nvariance in a elliptical neighborhood centered on that pixel. The\nvalue computed is not exactly the variance. The difference between\nthe neighbor values and center value is computed and squared for each\nneighbor.  These values are summed and divided by the total number of\nneighbors to produce the output value.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageVariance3D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageVariance3DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageVariance3D", o) != 0)
    {
    Py_DECREF(o);
    }

}

