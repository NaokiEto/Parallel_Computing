// python wrapper for vtkImageSpatialAlgorithm
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
#include "vtkImageSpatialAlgorithm.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageSpatialAlgorithm(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageSpatialAlgorithm(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageSpatialAlgorithmNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageSpatialAlgorithmNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageSpatialAlgorithm_Doc();


static PyObject *
PyvtkImageSpatialAlgorithm_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSpatialAlgorithm *op = static_cast<vtkImageSpatialAlgorithm *>(vp);

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
      tempr = op->vtkImageSpatialAlgorithm::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSpatialAlgorithm_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSpatialAlgorithm *op = static_cast<vtkImageSpatialAlgorithm *>(vp);

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
      tempr = op->vtkImageSpatialAlgorithm::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSpatialAlgorithm_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSpatialAlgorithm *op = static_cast<vtkImageSpatialAlgorithm *>(vp);

  vtkImageSpatialAlgorithm *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageSpatialAlgorithm::NewInstance();
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
PyvtkImageSpatialAlgorithm_GetKernelSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKernelSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSpatialAlgorithm *op = static_cast<vtkImageSpatialAlgorithm *>(vp);

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
      tempr = op->vtkImageSpatialAlgorithm::GetKernelSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSpatialAlgorithm_GetKernelMiddle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKernelMiddle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSpatialAlgorithm *op = static_cast<vtkImageSpatialAlgorithm *>(vp);

  int *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetKernelMiddle();
      }
    else
      {
      tempr = op->vtkImageSpatialAlgorithm::GetKernelMiddle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageSpatialAlgorithm_Methods[] = {
  {(char*)"GetClassName", PyvtkImageSpatialAlgorithm_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageSpatialAlgorithm_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageSpatialAlgorithm_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageSpatialAlgorithm\nC++: vtkImageSpatialAlgorithm *NewInstance()\n\n"},
  {(char*)"GetKernelSize", PyvtkImageSpatialAlgorithm_GetKernelSize, 1,
   (char*)"V.GetKernelSize() -> (int, int, int)\nC++: int *GetKernelSize()\n\n"},
  {(char*)"GetKernelMiddle", PyvtkImageSpatialAlgorithm_GetKernelMiddle, 1,
   (char*)"V.GetKernelMiddle() -> (int, int, int)\nC++: int *GetKernelMiddle()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageSpatialAlgorithm_StaticNew()
{
  return vtkImageSpatialAlgorithm::New();
}

PyObject *PyVTKClass_vtkImageSpatialAlgorithmNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageSpatialAlgorithm_StaticNew,
    PyvtkImageSpatialAlgorithm_Methods,
    "vtkImageSpatialAlgorithm", modulename,
    NULL, NULL,
    PyvtkImageSpatialAlgorithm_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageSpatialAlgorithm_Doc()
{
  static const char *docstring[] = {
    "vtkImageSpatialAlgorithm - Filters that operate on pixel\nneighborhoods.\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "vtkImageSpatialAlgorithm is a super class for filters that operate on\nan input neighborhood for each output pixel. It handles even sized\nneighborhoods, but their can be a half pixel shift associated with\nprocessing.  This superclass has some logic for handling boundaries. \nIt can split regions into boundary and non-boundary pieces and call\ndifferent execute methods.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageSpatialAlgorithm(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageSpatialAlgorithmNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageSpatialAlgorithm", o) != 0)
    {
    Py_DECREF(o);
    }

}

