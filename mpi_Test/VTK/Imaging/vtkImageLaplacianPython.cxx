// python wrapper for vtkImageLaplacian
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
#include "vtkImageLaplacian.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageLaplacian(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageLaplacian(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageLaplacianNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageLaplacianNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageLaplacian_Doc();


static PyObject *
PyvtkImageLaplacian_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLaplacian *op = static_cast<vtkImageLaplacian *>(vp);

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
      tempr = op->vtkImageLaplacian::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageLaplacian_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLaplacian *op = static_cast<vtkImageLaplacian *>(vp);

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
      tempr = op->vtkImageLaplacian::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageLaplacian_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLaplacian *op = static_cast<vtkImageLaplacian *>(vp);

  vtkImageLaplacian *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageLaplacian::NewInstance();
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
PyvtkImageLaplacian_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageLaplacian *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageLaplacian::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageLaplacian_SetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLaplacian *op = static_cast<vtkImageLaplacian *>(vp);

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
      op->vtkImageLaplacian::SetDimensionality(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageLaplacian_GetDimensionalityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionalityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLaplacian *op = static_cast<vtkImageLaplacian *>(vp);

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
      tempr = op->vtkImageLaplacian::GetDimensionalityMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageLaplacian_GetDimensionalityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionalityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLaplacian *op = static_cast<vtkImageLaplacian *>(vp);

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
      tempr = op->vtkImageLaplacian::GetDimensionalityMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageLaplacian_GetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLaplacian *op = static_cast<vtkImageLaplacian *>(vp);

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
      tempr = op->vtkImageLaplacian::GetDimensionality();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageLaplacian_Methods[] = {
  {(char*)"GetClassName", PyvtkImageLaplacian_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageLaplacian_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageLaplacian_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageLaplacian\nC++: vtkImageLaplacian *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageLaplacian_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageLaplacian\nC++: vtkImageLaplacian *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetDimensionality", PyvtkImageLaplacian_SetDimensionality, 1,
   (char*)"V.SetDimensionality(int)\nC++: void SetDimensionality(int)\n\nDetermines how the input is interpreted (set of 2d slices ...)\n"},
  {(char*)"GetDimensionalityMinValue", PyvtkImageLaplacian_GetDimensionalityMinValue, 1,
   (char*)"V.GetDimensionalityMinValue() -> int\nC++: int GetDimensionalityMinValue()\n\nDetermines how the input is interpreted (set of 2d slices ...)\n"},
  {(char*)"GetDimensionalityMaxValue", PyvtkImageLaplacian_GetDimensionalityMaxValue, 1,
   (char*)"V.GetDimensionalityMaxValue() -> int\nC++: int GetDimensionalityMaxValue()\n\nDetermines how the input is interpreted (set of 2d slices ...)\n"},
  {(char*)"GetDimensionality", PyvtkImageLaplacian_GetDimensionality, 1,
   (char*)"V.GetDimensionality() -> int\nC++: int GetDimensionality()\n\nDetermines how the input is interpreted (set of 2d slices ...)\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageLaplacian_StaticNew()
{
  return vtkImageLaplacian::New();
}

PyObject *PyVTKClass_vtkImageLaplacianNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageLaplacian_StaticNew,
    PyvtkImageLaplacian_Methods,
    "vtkImageLaplacian", modulename,
    NULL, NULL,
    PyvtkImageLaplacian_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageLaplacian_Doc()
{
  static const char *docstring[] = {
    "vtkImageLaplacian - Computes divergence of gradient.\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "vtkImageLaplacian computes the Laplacian (like a second derivative)\nof a scalar image.  The operation is the same as taking the\ndivergence after a gradient.  Boundaries are handled, so the input is\nthe same as the output. Dimensionality determines how the input\nregions are interpreted. (images, or volumes). The Dimensionality\ndefaults to two.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageLaplacian(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageLaplacianNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageLaplacian", o) != 0)
    {
    Py_DECREF(o);
    }

}

