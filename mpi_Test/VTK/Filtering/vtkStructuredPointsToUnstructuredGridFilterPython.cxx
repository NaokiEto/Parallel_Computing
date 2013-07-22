// python wrapper for vtkStructuredPointsToUnstructuredGridFilter
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
#include "vtkStructuredPointsToUnstructuredGridFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkStructuredPointsToUnstructuredGridFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkStructuredPointsToUnstructuredGridFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkStructuredPointsToUnstructuredGridFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkStructuredPointsToUnstructuredGridFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridSourceNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridSourceNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridSourceNew
#endif

static const char **PyvtkStructuredPointsToUnstructuredGridFilter_Doc();


static PyObject *
PyvtkStructuredPointsToUnstructuredGridFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsToUnstructuredGridFilter *op = static_cast<vtkStructuredPointsToUnstructuredGridFilter *>(vp);

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
      tempr = op->vtkStructuredPointsToUnstructuredGridFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredPointsToUnstructuredGridFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsToUnstructuredGridFilter *op = static_cast<vtkStructuredPointsToUnstructuredGridFilter *>(vp);

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
      tempr = op->vtkStructuredPointsToUnstructuredGridFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredPointsToUnstructuredGridFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsToUnstructuredGridFilter *op = static_cast<vtkStructuredPointsToUnstructuredGridFilter *>(vp);

  vtkStructuredPointsToUnstructuredGridFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkStructuredPointsToUnstructuredGridFilter::NewInstance();
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
PyvtkStructuredPointsToUnstructuredGridFilter_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsToUnstructuredGridFilter *op = static_cast<vtkStructuredPointsToUnstructuredGridFilter *>(vp);

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
      op->vtkStructuredPointsToUnstructuredGridFilter::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredPointsToUnstructuredGridFilter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsToUnstructuredGridFilter *op = static_cast<vtkStructuredPointsToUnstructuredGridFilter *>(vp);

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
      tempr = op->vtkStructuredPointsToUnstructuredGridFilter::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkStructuredPointsToUnstructuredGridFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkStructuredPointsToUnstructuredGridFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStructuredPointsToUnstructuredGridFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStructuredPointsToUnstructuredGridFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkStructuredPointsToUnstructuredGridFilter\nC++: vtkStructuredPointsToUnstructuredGridFilter *NewInstance()\n\n"},
  {(char*)"SetInput", PyvtkStructuredPointsToUnstructuredGridFilter_SetInput, 1,
   (char*)"V.SetInput(vtkImageData)\nC++: void SetInput(vtkImageData *input)\n\nSet / get the input data or filter.\n"},
  {(char*)"GetInput", PyvtkStructuredPointsToUnstructuredGridFilter_GetInput, 1,
   (char*)"V.GetInput() -> vtkImageData\nC++: vtkImageData *GetInput()\n\nSet / get the input data or filter.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkStructuredPointsToUnstructuredGridFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkStructuredPointsToUnstructuredGridFilter_Methods,
    "vtkStructuredPointsToUnstructuredGridFilter", modulename,
    NULL, NULL,
    PyvtkStructuredPointsToUnstructuredGridFilter_Doc(),
    PyVTKClass_vtkUnstructuredGridSourceNew(modulename));
  return cls;
}

const char **PyvtkStructuredPointsToUnstructuredGridFilter_Doc()
{
  static const char *docstring[] = {
    "vtkStructuredPointsToUnstructuredGridFilter - abstract filter class\n\n",
    "Superclass: vtkUnstructuredGridSource\n\n",
    "vtkStructuredPointsToUnstructuredGridFilter is an abstract filter\nclass whose subclasses take on input structured points and generate\nunstructured grid data on output.\n\nSee Also:\n\nvtkClipVolume\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStructuredPointsToUnstructuredGridFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStructuredPointsToUnstructuredGridFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStructuredPointsToUnstructuredGridFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

