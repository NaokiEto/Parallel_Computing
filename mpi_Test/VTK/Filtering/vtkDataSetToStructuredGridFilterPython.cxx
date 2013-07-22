// python wrapper for vtkDataSetToStructuredGridFilter
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
#include "vtkDataSetToStructuredGridFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDataSetToStructuredGridFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDataSetToStructuredGridFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDataSetToStructuredGridFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDataSetToStructuredGridFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkStructuredGridSourceNew
extern "C" { PyObject *PyVTKClass_vtkStructuredGridSourceNew(const char *); }
#define DECLARED_PyVTKClass_vtkStructuredGridSourceNew
#endif

static const char **PyvtkDataSetToStructuredGridFilter_Doc();


static PyObject *
PyvtkDataSetToStructuredGridFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToStructuredGridFilter *op = static_cast<vtkDataSetToStructuredGridFilter *>(vp);

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
      tempr = op->vtkDataSetToStructuredGridFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetToStructuredGridFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToStructuredGridFilter *op = static_cast<vtkDataSetToStructuredGridFilter *>(vp);

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
      tempr = op->vtkDataSetToStructuredGridFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetToStructuredGridFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToStructuredGridFilter *op = static_cast<vtkDataSetToStructuredGridFilter *>(vp);

  vtkDataSetToStructuredGridFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDataSetToStructuredGridFilter::NewInstance();
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
PyvtkDataSetToStructuredGridFilter_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToStructuredGridFilter *op = static_cast<vtkDataSetToStructuredGridFilter *>(vp);

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
      op->vtkDataSetToStructuredGridFilter::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetToStructuredGridFilter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToStructuredGridFilter *op = static_cast<vtkDataSetToStructuredGridFilter *>(vp);

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
      tempr = op->vtkDataSetToStructuredGridFilter::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDataSetToStructuredGridFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkDataSetToStructuredGridFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataSetToStructuredGridFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataSetToStructuredGridFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDataSetToStructuredGridFilter\nC++: vtkDataSetToStructuredGridFilter *NewInstance()\n\n"},
  {(char*)"SetInput", PyvtkDataSetToStructuredGridFilter_SetInput, 1,
   (char*)"V.SetInput(vtkDataSet)\nC++: virtual void SetInput(vtkDataSet *input)\n\nSet / get the input data or filter.\n"},
  {(char*)"GetInput", PyvtkDataSetToStructuredGridFilter_GetInput, 1,
   (char*)"V.GetInput() -> vtkDataSet\nC++: vtkDataSet *GetInput()\n\nSet / get the input data or filter.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkDataSetToStructuredGridFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkDataSetToStructuredGridFilter_Methods,
    "vtkDataSetToStructuredGridFilter", modulename,
    NULL, NULL,
    PyvtkDataSetToStructuredGridFilter_Doc(),
    PyVTKClass_vtkStructuredGridSourceNew(modulename));
  return cls;
}

const char **PyvtkDataSetToStructuredGridFilter_Doc()
{
  static const char *docstring[] = {
    "vtkDataSetToStructuredGridFilter - abstract filter class\n\n",
    "Superclass: vtkStructuredGridSource\n\n",
    "vtkDataSetToStructuredGridFilter is an abstract filter class whose\nsubclasses take as input any dataset and generate a structured grid\non output.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataSetToStructuredGridFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataSetToStructuredGridFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataSetToStructuredGridFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

