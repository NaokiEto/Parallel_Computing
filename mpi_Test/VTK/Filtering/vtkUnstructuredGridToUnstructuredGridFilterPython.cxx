// python wrapper for vtkUnstructuredGridToUnstructuredGridFilter
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
#include "vtkUnstructuredGridToUnstructuredGridFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkUnstructuredGridToUnstructuredGridFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkUnstructuredGridToUnstructuredGridFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkUnstructuredGridToUnstructuredGridFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridToUnstructuredGridFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridSourceNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridSourceNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridSourceNew
#endif

static const char **PyvtkUnstructuredGridToUnstructuredGridFilter_Doc();


static PyObject *
PyvtkUnstructuredGridToUnstructuredGridFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridToUnstructuredGridFilter *op = static_cast<vtkUnstructuredGridToUnstructuredGridFilter *>(vp);

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
      tempr = op->vtkUnstructuredGridToUnstructuredGridFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridToUnstructuredGridFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridToUnstructuredGridFilter *op = static_cast<vtkUnstructuredGridToUnstructuredGridFilter *>(vp);

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
      tempr = op->vtkUnstructuredGridToUnstructuredGridFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridToUnstructuredGridFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridToUnstructuredGridFilter *op = static_cast<vtkUnstructuredGridToUnstructuredGridFilter *>(vp);

  vtkUnstructuredGridToUnstructuredGridFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkUnstructuredGridToUnstructuredGridFilter::NewInstance();
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
PyvtkUnstructuredGridToUnstructuredGridFilter_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridToUnstructuredGridFilter *op = static_cast<vtkUnstructuredGridToUnstructuredGridFilter *>(vp);

  vtkUnstructuredGrid *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUnstructuredGrid"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkUnstructuredGridToUnstructuredGridFilter::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridToUnstructuredGridFilter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridToUnstructuredGridFilter *op = static_cast<vtkUnstructuredGridToUnstructuredGridFilter *>(vp);

  vtkUnstructuredGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkUnstructuredGridToUnstructuredGridFilter::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridToUnstructuredGridFilter_FillInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridToUnstructuredGridFilter *op = static_cast<vtkUnstructuredGridToUnstructuredGridFilter *>(vp);

  int temp0;
  vtkInformation *temp1 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      tempr = op->FillInputPortInformation(temp0, temp1);
      }
    else
      {
      tempr = op->vtkUnstructuredGridToUnstructuredGridFilter::FillInputPortInformation(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkUnstructuredGridToUnstructuredGridFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkUnstructuredGridToUnstructuredGridFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkUnstructuredGridToUnstructuredGridFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkUnstructuredGridToUnstructuredGridFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkUnstructuredGridToUnstructuredGridFilter\nC++: vtkUnstructuredGridToUnstructuredGridFilter *NewInstance()\n\n"},
  {(char*)"SetInput", PyvtkUnstructuredGridToUnstructuredGridFilter_SetInput, 1,
   (char*)"V.SetInput(vtkUnstructuredGrid)\nC++: void SetInput(vtkUnstructuredGrid *input)\n\nSet / get the input Grid or filter.\n"},
  {(char*)"GetInput", PyvtkUnstructuredGridToUnstructuredGridFilter_GetInput, 1,
   (char*)"V.GetInput() -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetInput()\n\nSet / get the input Grid or filter.\n"},
  {(char*)"FillInputPortInformation", PyvtkUnstructuredGridToUnstructuredGridFilter_FillInputPortInformation, 1,
   (char*)"V.FillInputPortInformation(int, vtkInformation) -> int\nC++: virtual int FillInputPortInformation(int, vtkInformation *)\n\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkUnstructuredGridToUnstructuredGridFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkUnstructuredGridToUnstructuredGridFilter_Methods,
    "vtkUnstructuredGridToUnstructuredGridFilter", modulename,
    NULL, NULL,
    PyvtkUnstructuredGridToUnstructuredGridFilter_Doc(),
    PyVTKClass_vtkUnstructuredGridSourceNew(modulename));
  return cls;
}

const char **PyvtkUnstructuredGridToUnstructuredGridFilter_Doc()
{
  static const char *docstring[] = {
    "vtkUnstructuredGridToUnstructuredGridFilter - abstract filter class\n\n",
    "Superclass: vtkUnstructuredGridSource\n\n",
    "See Also:\n\nvtkExtractGrid\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkUnstructuredGridToUnstructuredGridFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkUnstructuredGridToUnstructuredGridFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkUnstructuredGridToUnstructuredGridFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

