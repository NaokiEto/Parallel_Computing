// python wrapper for vtkDataSetToUnstructuredGridFilter
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
#include "vtkDataSetToUnstructuredGridFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDataSetToUnstructuredGridFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDataSetToUnstructuredGridFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDataSetToUnstructuredGridFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDataSetToUnstructuredGridFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridSourceNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridSourceNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridSourceNew
#endif

static const char **PyvtkDataSetToUnstructuredGridFilter_Doc();


static PyObject *
PyvtkDataSetToUnstructuredGridFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToUnstructuredGridFilter *op = static_cast<vtkDataSetToUnstructuredGridFilter *>(vp);

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
      tempr = op->vtkDataSetToUnstructuredGridFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetToUnstructuredGridFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToUnstructuredGridFilter *op = static_cast<vtkDataSetToUnstructuredGridFilter *>(vp);

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
      tempr = op->vtkDataSetToUnstructuredGridFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetToUnstructuredGridFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToUnstructuredGridFilter *op = static_cast<vtkDataSetToUnstructuredGridFilter *>(vp);

  vtkDataSetToUnstructuredGridFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDataSetToUnstructuredGridFilter::NewInstance();
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
PyvtkDataSetToUnstructuredGridFilter_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToUnstructuredGridFilter *op = static_cast<vtkDataSetToUnstructuredGridFilter *>(vp);

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
      op->vtkDataSetToUnstructuredGridFilter::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetToUnstructuredGridFilter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToUnstructuredGridFilter *op = static_cast<vtkDataSetToUnstructuredGridFilter *>(vp);

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
      tempr = op->vtkDataSetToUnstructuredGridFilter::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDataSetToUnstructuredGridFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkDataSetToUnstructuredGridFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataSetToUnstructuredGridFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataSetToUnstructuredGridFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDataSetToUnstructuredGridFilter\nC++: vtkDataSetToUnstructuredGridFilter *NewInstance()\n\n"},
  {(char*)"SetInput", PyvtkDataSetToUnstructuredGridFilter_SetInput, 1,
   (char*)"V.SetInput(vtkDataSet)\nC++: virtual void SetInput(vtkDataSet *input)\n\nSet / get the input data or filter.\n"},
  {(char*)"GetInput", PyvtkDataSetToUnstructuredGridFilter_GetInput, 1,
   (char*)"V.GetInput() -> vtkDataSet\nC++: vtkDataSet *GetInput()\n\nSet / get the input data or filter.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkDataSetToUnstructuredGridFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkDataSetToUnstructuredGridFilter_Methods,
    "vtkDataSetToUnstructuredGridFilter", modulename,
    NULL, NULL,
    PyvtkDataSetToUnstructuredGridFilter_Doc(),
    PyVTKClass_vtkUnstructuredGridSourceNew(modulename));
  return cls;
}

const char **PyvtkDataSetToUnstructuredGridFilter_Doc()
{
  static const char *docstring[] = {
    "vtkDataSetToUnstructuredGridFilter - abstract filter class\n\n",
    "Superclass: vtkUnstructuredGridSource\n\n",
    "vtkDataSetToUnstructuredGridFilter is an abstract filter class whose\nsubclasses take as input any dataset and generate an unstructured\ngrid on output.\n\nSee Also:\n\nvtkAppendFilter vtkConnectivityFilter vtkExtractGeometry\nvtkShrinkFilter vtkThreshold\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataSetToUnstructuredGridFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataSetToUnstructuredGridFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataSetToUnstructuredGridFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

