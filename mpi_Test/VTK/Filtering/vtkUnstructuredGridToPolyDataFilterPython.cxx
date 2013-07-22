// python wrapper for vtkUnstructuredGridToPolyDataFilter
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
#include "vtkUnstructuredGridToPolyDataFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkUnstructuredGridToPolyDataFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkUnstructuredGridToPolyDataFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkUnstructuredGridToPolyDataFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridToPolyDataFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataSourceNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataSourceNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataSourceNew
#endif

static const char **PyvtkUnstructuredGridToPolyDataFilter_Doc();


static PyObject *
PyvtkUnstructuredGridToPolyDataFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridToPolyDataFilter *op = static_cast<vtkUnstructuredGridToPolyDataFilter *>(vp);

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
      tempr = op->vtkUnstructuredGridToPolyDataFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridToPolyDataFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridToPolyDataFilter *op = static_cast<vtkUnstructuredGridToPolyDataFilter *>(vp);

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
      tempr = op->vtkUnstructuredGridToPolyDataFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridToPolyDataFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridToPolyDataFilter *op = static_cast<vtkUnstructuredGridToPolyDataFilter *>(vp);

  vtkUnstructuredGridToPolyDataFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkUnstructuredGridToPolyDataFilter::NewInstance();
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
PyvtkUnstructuredGridToPolyDataFilter_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridToPolyDataFilter *op = static_cast<vtkUnstructuredGridToPolyDataFilter *>(vp);

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
      op->vtkUnstructuredGridToPolyDataFilter::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridToPolyDataFilter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridToPolyDataFilter *op = static_cast<vtkUnstructuredGridToPolyDataFilter *>(vp);

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
      tempr = op->vtkUnstructuredGridToPolyDataFilter::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridToPolyDataFilter_ComputeInputUpdateExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInputUpdateExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridToPolyDataFilter *op = static_cast<vtkUnstructuredGridToPolyDataFilter *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->ComputeInputUpdateExtents(temp0);
      }
    else
      {
      op->vtkUnstructuredGridToPolyDataFilter::ComputeInputUpdateExtents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkUnstructuredGridToPolyDataFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkUnstructuredGridToPolyDataFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkUnstructuredGridToPolyDataFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkUnstructuredGridToPolyDataFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkUnstructuredGridToPolyDataFilter\nC++: vtkUnstructuredGridToPolyDataFilter *NewInstance()\n\n"},
  {(char*)"SetInput", PyvtkUnstructuredGridToPolyDataFilter_SetInput, 1,
   (char*)"V.SetInput(vtkUnstructuredGrid)\nC++: virtual void SetInput(vtkUnstructuredGrid *input)\n\nSet / get the input data or filter.\n"},
  {(char*)"GetInput", PyvtkUnstructuredGridToPolyDataFilter_GetInput, 1,
   (char*)"V.GetInput() -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetInput()\n\nSet / get the input data or filter.\n"},
  {(char*)"ComputeInputUpdateExtents", PyvtkUnstructuredGridToPolyDataFilter_ComputeInputUpdateExtents, 1,
   (char*)"V.ComputeInputUpdateExtents(vtkDataObject)\nC++: virtual void ComputeInputUpdateExtents(vtkDataObject *output)\n\nDo not let datasets return more than requested.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkUnstructuredGridToPolyDataFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkUnstructuredGridToPolyDataFilter_Methods,
    "vtkUnstructuredGridToPolyDataFilter", modulename,
    NULL, NULL,
    PyvtkUnstructuredGridToPolyDataFilter_Doc(),
    PyVTKClass_vtkPolyDataSourceNew(modulename));
  return cls;
}

const char **PyvtkUnstructuredGridToPolyDataFilter_Doc()
{
  static const char *docstring[] = {
    "vtkUnstructuredGridToPolyDataFilter - abstract filter class\n\n",
    "Superclass: vtkPolyDataSource\n\n",
    "vtkUnstructuredGridToPolyDataFilter is an abstract filter class whose\nsubclasses take as input datasets of type vtkUnstructuredGrid and\ngenerate polygonal data on output.\n\nSee Also:\n\nvtkContourGrid\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkUnstructuredGridToPolyDataFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkUnstructuredGridToPolyDataFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkUnstructuredGridToPolyDataFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

