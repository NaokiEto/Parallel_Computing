// python wrapper for vtkImageSpatialFilter
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
#include "vtkImageSpatialFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageSpatialFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageSpatialFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageSpatialFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageSpatialFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageToImageFilterNew
extern "C" { PyObject *PyVTKClass_vtkImageToImageFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageToImageFilterNew
#endif

static const char **PyvtkImageSpatialFilter_Doc();


static PyObject *
PyvtkImageSpatialFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSpatialFilter *op = static_cast<vtkImageSpatialFilter *>(vp);

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
      tempr = op->vtkImageSpatialFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSpatialFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSpatialFilter *op = static_cast<vtkImageSpatialFilter *>(vp);

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
      tempr = op->vtkImageSpatialFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSpatialFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSpatialFilter *op = static_cast<vtkImageSpatialFilter *>(vp);

  vtkImageSpatialFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageSpatialFilter::NewInstance();
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
PyvtkImageSpatialFilter_GetKernelSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKernelSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSpatialFilter *op = static_cast<vtkImageSpatialFilter *>(vp);

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
      tempr = op->vtkImageSpatialFilter::GetKernelSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSpatialFilter_GetKernelMiddle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKernelMiddle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSpatialFilter *op = static_cast<vtkImageSpatialFilter *>(vp);

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
      tempr = op->vtkImageSpatialFilter::GetKernelMiddle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageSpatialFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkImageSpatialFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageSpatialFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageSpatialFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageSpatialFilter\nC++: vtkImageSpatialFilter *NewInstance()\n\n"},
  {(char*)"GetKernelSize", PyvtkImageSpatialFilter_GetKernelSize, 1,
   (char*)"V.GetKernelSize() -> (int, int, int)\nC++: int *GetKernelSize()\n\n"},
  {(char*)"GetKernelMiddle", PyvtkImageSpatialFilter_GetKernelMiddle, 1,
   (char*)"V.GetKernelMiddle() -> (int, int, int)\nC++: int *GetKernelMiddle()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageSpatialFilter_StaticNew()
{
  return vtkImageSpatialFilter::New();
}

PyObject *PyVTKClass_vtkImageSpatialFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageSpatialFilter_StaticNew,
    PyvtkImageSpatialFilter_Methods,
    "vtkImageSpatialFilter", modulename,
    NULL, NULL,
    PyvtkImageSpatialFilter_Doc(),
    PyVTKClass_vtkImageToImageFilterNew(modulename));
  return cls;
}

const char **PyvtkImageSpatialFilter_Doc()
{
  static const char *docstring[] = {
    "vtkImageSpatialFilter - Filters that operate on pixel neighborhoods.\n\n",
    "Superclass: vtkImageToImageFilter\n\n",
    "vtkImageSpatialFilter is a super class for filters that operate on an\ninput neighborhood for each output pixel. It handles even sized\nneighborhoods, but their can be a half pixel shift associated with\nprocessing.  This superclass has some logic for handling boundaries. \nIt can split regions into boundary and non-boundary pieces and call\ndifferent execute methods.\n\nWarning:\n\nThis used to be the par",
    "ent class for most imaging filter in VTK4.x,\nnow this role has been replaced by vtkImageSpatialAlgorithm. You\nshould consider using vtkImageSpatialAlgorithm instead, when writing\nfilter for VTK5 and above. This class was kept to ensure full\nbackward compatibility.\n\nSee also:\n\nvtkSimpleImageToImageFilter vtkImageToImageFilter\nvtkImageSpatialAlgorithm\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageSpatialFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageSpatialFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageSpatialFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

