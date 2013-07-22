// python wrapper for vtkSimpleImageToImageFilter
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
#include "vtkSimpleImageToImageFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSimpleImageToImageFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSimpleImageToImageFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSimpleImageToImageFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSimpleImageToImageFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkSimpleImageToImageFilter_Doc();


static PyObject *
PyvtkSimpleImageToImageFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleImageToImageFilter *op = static_cast<vtkSimpleImageToImageFilter *>(vp);

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
      tempr = op->vtkSimpleImageToImageFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleImageToImageFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleImageToImageFilter *op = static_cast<vtkSimpleImageToImageFilter *>(vp);

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
      tempr = op->vtkSimpleImageToImageFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleImageToImageFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleImageToImageFilter *op = static_cast<vtkSimpleImageToImageFilter *>(vp);

  vtkSimpleImageToImageFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSimpleImageToImageFilter::NewInstance();
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

static PyMethodDef PyvtkSimpleImageToImageFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkSimpleImageToImageFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSimpleImageToImageFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSimpleImageToImageFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSimpleImageToImageFilter\nC++: vtkSimpleImageToImageFilter *NewInstance()\n\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkSimpleImageToImageFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkSimpleImageToImageFilter_Methods,
    "vtkSimpleImageToImageFilter", modulename,
    NULL, NULL,
    PyvtkSimpleImageToImageFilter_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkSimpleImageToImageFilter_Doc()
{
  static const char *docstring[] = {
    "vtkSimpleImageToImageFilter - Generic image filter with one input.\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkSimpleImageToImageFilter is a filter which aims to avoid much of\nthe complexity associated with vtkImageAlgorithm (i.e. support for\npieces, multi-threaded operation). If you need to write a simple\nimage-image filter which operates on the whole input, use this as the\nsuperclass. The subclass has to provide only an execute method which\ntakes input and output as arguments. Memory allocation is han",
    "dled in\nvtkSimpleImageToImageFilter. Also, you are guaranteed to have a valid\ninput in the Execute(input, output) method. By default, this filter\nrequests it's input's whole extent and copies the input's information\n(spacing, whole extent etc...) to the output. If the output's setup\nis different (for example, if it performs some sort of sub-sampling),\nExecuteInformation has to be overwritten. As a",
    "n example of how this\ncan be done, you can look at vtkImageShrink3D::ExecuteInformation.\nFor a complete example which uses templates to support generic data\ntypes, see vtkSimpleImageToImageFilter.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSimpleImageToImageFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSimpleImageToImageFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSimpleImageToImageFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

