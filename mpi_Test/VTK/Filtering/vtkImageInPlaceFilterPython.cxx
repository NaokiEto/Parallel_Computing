// python wrapper for vtkImageInPlaceFilter
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
#include "vtkImageInPlaceFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageInPlaceFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageInPlaceFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageInPlaceFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageInPlaceFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkImageInPlaceFilter_Doc();


static PyObject *
PyvtkImageInPlaceFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageInPlaceFilter *op = static_cast<vtkImageInPlaceFilter *>(vp);

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
      tempr = op->vtkImageInPlaceFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageInPlaceFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageInPlaceFilter *op = static_cast<vtkImageInPlaceFilter *>(vp);

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
      tempr = op->vtkImageInPlaceFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageInPlaceFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageInPlaceFilter *op = static_cast<vtkImageInPlaceFilter *>(vp);

  vtkImageInPlaceFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageInPlaceFilter::NewInstance();
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

static PyMethodDef PyvtkImageInPlaceFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkImageInPlaceFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageInPlaceFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageInPlaceFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageInPlaceFilter\nC++: vtkImageInPlaceFilter *NewInstance()\n\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkImageInPlaceFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkImageInPlaceFilter_Methods,
    "vtkImageInPlaceFilter", modulename,
    NULL, NULL,
    PyvtkImageInPlaceFilter_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageInPlaceFilter_Doc()
{
  static const char *docstring[] = {
    "vtkImageInPlaceFilter - Filter that operates in place.\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkImageInPlaceFilter is a filter super class that operates directly\non the input region.  The data is copied if the requested region has\ndifferent extent than the input region or some other object is\nreferencing the input region.\n\nSee Also:\n\nvtkImageToImageFilter vtkImageMultipleInputFilter\nvtkImageTwoInputFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageInPlaceFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageInPlaceFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageInPlaceFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

