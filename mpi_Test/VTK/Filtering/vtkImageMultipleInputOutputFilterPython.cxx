// python wrapper for vtkImageMultipleInputOutputFilter
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
#include "vtkImageMultipleInputOutputFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageMultipleInputOutputFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageMultipleInputOutputFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageMultipleInputOutputFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageMultipleInputOutputFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageMultipleInputFilterNew
extern "C" { PyObject *PyVTKClass_vtkImageMultipleInputFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageMultipleInputFilterNew
#endif

static const char **PyvtkImageMultipleInputOutputFilter_Doc();


static PyObject *
PyvtkImageMultipleInputOutputFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMultipleInputOutputFilter *op = static_cast<vtkImageMultipleInputOutputFilter *>(vp);

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
      tempr = op->vtkImageMultipleInputOutputFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMultipleInputOutputFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMultipleInputOutputFilter *op = static_cast<vtkImageMultipleInputOutputFilter *>(vp);

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
      tempr = op->vtkImageMultipleInputOutputFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMultipleInputOutputFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMultipleInputOutputFilter *op = static_cast<vtkImageMultipleInputOutputFilter *>(vp);

  vtkImageMultipleInputOutputFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageMultipleInputOutputFilter::NewInstance();
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
PyvtkImageMultipleInputOutputFilter_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMultipleInputOutputFilter *op = static_cast<vtkImageMultipleInputOutputFilter *>(vp);

  int temp0;
  vtkImageData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput(temp0);
      }
    else
      {
      tempr = op->vtkImageMultipleInputOutputFilter::GetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImageMultipleInputOutputFilter_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMultipleInputOutputFilter *op = static_cast<vtkImageMultipleInputOutputFilter *>(vp);

  vtkImageData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput();
      }
    else
      {
      tempr = op->vtkImageMultipleInputOutputFilter::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImageMultipleInputOutputFilter_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImageMultipleInputOutputFilter_GetOutput_s1(self, args);
    case 0:
      return PyvtkImageMultipleInputOutputFilter_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}


static PyMethodDef PyvtkImageMultipleInputOutputFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkImageMultipleInputOutputFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageMultipleInputOutputFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageMultipleInputOutputFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageMultipleInputOutputFilter\nC++: vtkImageMultipleInputOutputFilter *NewInstance()\n\n"},
  {(char*)"GetOutput", PyvtkImageMultipleInputOutputFilter_GetOutput, 1,
   (char*)"V.GetOutput(int) -> vtkImageData\nC++: vtkImageData *GetOutput(int num)\nV.GetOutput() -> vtkImageData\nC++: vtkImageData *GetOutput()\n\nGet one input to this filter.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkImageMultipleInputOutputFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkImageMultipleInputOutputFilter_Methods,
    "vtkImageMultipleInputOutputFilter", modulename,
    NULL, NULL,
    PyvtkImageMultipleInputOutputFilter_Doc(),
    PyVTKClass_vtkImageMultipleInputFilterNew(modulename));
  return cls;
}

const char **PyvtkImageMultipleInputOutputFilter_Doc()
{
  static const char *docstring[] = {
    "vtkImageMultipleInputOutputFilter - Generic filter that has N inputs.\n\n",
    "Superclass: vtkImageMultipleInputFilter\n\n",
    "vtkImageMultipleInputOutputFilter is a super class for filters that\nhave any number of inputs. Streaming is not available in this class\nyet.\n\nSee Also:\n\nvtkImageToImageFilter vtkImageInPlaceFilter vtkImageTwoInputFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageMultipleInputOutputFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageMultipleInputOutputFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageMultipleInputOutputFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

