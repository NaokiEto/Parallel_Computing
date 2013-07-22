// python wrapper for vtkStructuredGridToPolyDataFilter
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
#include "vtkStructuredGridToPolyDataFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkStructuredGridToPolyDataFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkStructuredGridToPolyDataFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkStructuredGridToPolyDataFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkStructuredGridToPolyDataFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataSourceNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataSourceNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataSourceNew
#endif

static const char **PyvtkStructuredGridToPolyDataFilter_Doc();


static PyObject *
PyvtkStructuredGridToPolyDataFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridToPolyDataFilter *op = static_cast<vtkStructuredGridToPolyDataFilter *>(vp);

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
      tempr = op->vtkStructuredGridToPolyDataFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridToPolyDataFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridToPolyDataFilter *op = static_cast<vtkStructuredGridToPolyDataFilter *>(vp);

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
      tempr = op->vtkStructuredGridToPolyDataFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridToPolyDataFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridToPolyDataFilter *op = static_cast<vtkStructuredGridToPolyDataFilter *>(vp);

  vtkStructuredGridToPolyDataFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkStructuredGridToPolyDataFilter::NewInstance();
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
PyvtkStructuredGridToPolyDataFilter_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridToPolyDataFilter *op = static_cast<vtkStructuredGridToPolyDataFilter *>(vp);

  vtkStructuredGrid *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStructuredGrid"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkStructuredGridToPolyDataFilter::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridToPolyDataFilter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridToPolyDataFilter *op = static_cast<vtkStructuredGridToPolyDataFilter *>(vp);

  vtkStructuredGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkStructuredGridToPolyDataFilter::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkStructuredGridToPolyDataFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkStructuredGridToPolyDataFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStructuredGridToPolyDataFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStructuredGridToPolyDataFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkStructuredGridToPolyDataFilter\nC++: vtkStructuredGridToPolyDataFilter *NewInstance()\n\n"},
  {(char*)"SetInput", PyvtkStructuredGridToPolyDataFilter_SetInput, 1,
   (char*)"V.SetInput(vtkStructuredGrid)\nC++: void SetInput(vtkStructuredGrid *input)\n\nSet / get the input Grid or filter.\n"},
  {(char*)"GetInput", PyvtkStructuredGridToPolyDataFilter_GetInput, 1,
   (char*)"V.GetInput() -> vtkStructuredGrid\nC++: vtkStructuredGrid *GetInput()\n\nSet / get the input Grid or filter.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkStructuredGridToPolyDataFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkStructuredGridToPolyDataFilter_Methods,
    "vtkStructuredGridToPolyDataFilter", modulename,
    NULL, NULL,
    PyvtkStructuredGridToPolyDataFilter_Doc(),
    PyVTKClass_vtkPolyDataSourceNew(modulename));
  return cls;
}

const char **PyvtkStructuredGridToPolyDataFilter_Doc()
{
  static const char *docstring[] = {
    "vtkStructuredGridToPolyDataFilter - abstract filter class\n\n",
    "Superclass: vtkPolyDataSource\n\n",
    "vtkStructuredGridToPolyDataFilter is a filter whose subclasses take\nas input structured grid datasets and generate polygonal data on\noutput.\n\nSee Also:\n\nvtkStructuredGridGeometryFilter vtkStructuredGridOutlineFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStructuredGridToPolyDataFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStructuredGridToPolyDataFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStructuredGridToPolyDataFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

