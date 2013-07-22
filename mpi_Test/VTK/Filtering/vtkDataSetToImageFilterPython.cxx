// python wrapper for vtkDataSetToImageFilter
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
#include "vtkDataSetToImageFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDataSetToImageFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDataSetToImageFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDataSetToImageFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDataSetToImageFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageSourceNew
extern "C" { PyObject *PyVTKClass_vtkImageSourceNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageSourceNew
#endif

static const char **PyvtkDataSetToImageFilter_Doc();


static PyObject *
PyvtkDataSetToImageFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToImageFilter *op = static_cast<vtkDataSetToImageFilter *>(vp);

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
      tempr = op->vtkDataSetToImageFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetToImageFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToImageFilter *op = static_cast<vtkDataSetToImageFilter *>(vp);

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
      tempr = op->vtkDataSetToImageFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetToImageFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToImageFilter *op = static_cast<vtkDataSetToImageFilter *>(vp);

  vtkDataSetToImageFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDataSetToImageFilter::NewInstance();
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
PyvtkDataSetToImageFilter_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToImageFilter *op = static_cast<vtkDataSetToImageFilter *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkDataSetToImageFilter::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetToImageFilter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToImageFilter *op = static_cast<vtkDataSetToImageFilter *>(vp);

  vtkDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkDataSetToImageFilter::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDataSetToImageFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkDataSetToImageFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataSetToImageFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataSetToImageFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDataSetToImageFilter\nC++: vtkDataSetToImageFilter *NewInstance()\n\n"},
  {(char*)"SetInput", PyvtkDataSetToImageFilter_SetInput, 1,
   (char*)"V.SetInput(vtkDataSet)\nC++: virtual void SetInput(vtkDataSet *input)\n\nSet / get the input data or filter.\n"},
  {(char*)"GetInput", PyvtkDataSetToImageFilter_GetInput, 1,
   (char*)"V.GetInput() -> vtkDataSet\nC++: vtkDataSet *GetInput()\n\nSet / get the input data or filter.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkDataSetToImageFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkDataSetToImageFilter_Methods,
    "vtkDataSetToImageFilter", modulename,
    NULL, NULL,
    PyvtkDataSetToImageFilter_Doc(),
    PyVTKClass_vtkImageSourceNew(modulename));
  return cls;
}

const char **PyvtkDataSetToImageFilter_Doc()
{
  static const char *docstring[] = {
    "vtkDataSetToImageFilter - abstract filter class\n\n",
    "Superclass: vtkImageSource\n\n",
    "vtkDataSetToImageFilter is an abstract filter class whose subclasses\ntake as input any dataset and generate image data on output.\n\nSee Also:\n\nvtkGaussianSplatter vtkImplicitModeller vtkShepardMethod\nvtkVoxelModeller\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataSetToImageFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataSetToImageFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataSetToImageFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

