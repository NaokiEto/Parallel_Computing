// python wrapper for vtkStructuredPointsToStructuredPointsFilter
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
#include "vtkStructuredPointsToStructuredPointsFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkStructuredPointsToStructuredPointsFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkStructuredPointsToStructuredPointsFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkStructuredPointsToStructuredPointsFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkStructuredPointsToStructuredPointsFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkStructuredPointsSourceNew
extern "C" { PyObject *PyVTKClass_vtkStructuredPointsSourceNew(const char *); }
#define DECLARED_PyVTKClass_vtkStructuredPointsSourceNew
#endif

static const char **PyvtkStructuredPointsToStructuredPointsFilter_Doc();


static PyObject *
PyvtkStructuredPointsToStructuredPointsFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsToStructuredPointsFilter *op = static_cast<vtkStructuredPointsToStructuredPointsFilter *>(vp);

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
      tempr = op->vtkStructuredPointsToStructuredPointsFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredPointsToStructuredPointsFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsToStructuredPointsFilter *op = static_cast<vtkStructuredPointsToStructuredPointsFilter *>(vp);

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
      tempr = op->vtkStructuredPointsToStructuredPointsFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredPointsToStructuredPointsFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsToStructuredPointsFilter *op = static_cast<vtkStructuredPointsToStructuredPointsFilter *>(vp);

  vtkStructuredPointsToStructuredPointsFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkStructuredPointsToStructuredPointsFilter::NewInstance();
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
PyvtkStructuredPointsToStructuredPointsFilter_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsToStructuredPointsFilter *op = static_cast<vtkStructuredPointsToStructuredPointsFilter *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkStructuredPointsToStructuredPointsFilter::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredPointsToStructuredPointsFilter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsToStructuredPointsFilter *op = static_cast<vtkStructuredPointsToStructuredPointsFilter *>(vp);

  vtkImageData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkStructuredPointsToStructuredPointsFilter::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkStructuredPointsToStructuredPointsFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkStructuredPointsToStructuredPointsFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStructuredPointsToStructuredPointsFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStructuredPointsToStructuredPointsFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkStructuredPointsToStructuredPointsFilter\nC++: vtkStructuredPointsToStructuredPointsFilter *NewInstance()\n\n"},
  {(char*)"SetInput", PyvtkStructuredPointsToStructuredPointsFilter_SetInput, 1,
   (char*)"V.SetInput(vtkImageData)\nC++: void SetInput(vtkImageData *input)\n\nSet / get the input data or filter.\n"},
  {(char*)"GetInput", PyvtkStructuredPointsToStructuredPointsFilter_GetInput, 1,
   (char*)"V.GetInput() -> vtkImageData\nC++: vtkImageData *GetInput()\n\nSet / get the input data or filter.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkStructuredPointsToStructuredPointsFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkStructuredPointsToStructuredPointsFilter_Methods,
    "vtkStructuredPointsToStructuredPointsFilter", modulename,
    NULL, NULL,
    PyvtkStructuredPointsToStructuredPointsFilter_Doc(),
    PyVTKClass_vtkStructuredPointsSourceNew(modulename));
  return cls;
}

const char **PyvtkStructuredPointsToStructuredPointsFilter_Doc()
{
  static const char *docstring[] = {
    "vtkStructuredPointsToStructuredPointsFilter - abstract filter class\n\n",
    "Superclass: vtkStructuredPointsSource\n\n",
    "vtkStructuredPointsToStructuredPointsFilter is an abstract filter\nclass whose subclasses take on input structured points and generate\nstructured points on output.\n\nSee Also:\n\nvtkExtractVOI vtkImageDifference vtkSweptSurface\nvtkTransformStructuredPoints\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStructuredPointsToStructuredPointsFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStructuredPointsToStructuredPointsFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStructuredPointsToStructuredPointsFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

