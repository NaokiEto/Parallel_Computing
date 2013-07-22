// python wrapper for vtkRectilinearGridToPolyDataFilter
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
#include "vtkRectilinearGridToPolyDataFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkRectilinearGridToPolyDataFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkRectilinearGridToPolyDataFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkRectilinearGridToPolyDataFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkRectilinearGridToPolyDataFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataSourceNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataSourceNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataSourceNew
#endif

static const char **PyvtkRectilinearGridToPolyDataFilter_Doc();


static PyObject *
PyvtkRectilinearGridToPolyDataFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridToPolyDataFilter *op = static_cast<vtkRectilinearGridToPolyDataFilter *>(vp);

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
      tempr = op->vtkRectilinearGridToPolyDataFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridToPolyDataFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridToPolyDataFilter *op = static_cast<vtkRectilinearGridToPolyDataFilter *>(vp);

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
      tempr = op->vtkRectilinearGridToPolyDataFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridToPolyDataFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridToPolyDataFilter *op = static_cast<vtkRectilinearGridToPolyDataFilter *>(vp);

  vtkRectilinearGridToPolyDataFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkRectilinearGridToPolyDataFilter::NewInstance();
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
PyvtkRectilinearGridToPolyDataFilter_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridToPolyDataFilter *op = static_cast<vtkRectilinearGridToPolyDataFilter *>(vp);

  vtkRectilinearGrid *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRectilinearGrid"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkRectilinearGridToPolyDataFilter::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridToPolyDataFilter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridToPolyDataFilter *op = static_cast<vtkRectilinearGridToPolyDataFilter *>(vp);

  vtkRectilinearGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkRectilinearGridToPolyDataFilter::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkRectilinearGridToPolyDataFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkRectilinearGridToPolyDataFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRectilinearGridToPolyDataFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRectilinearGridToPolyDataFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkRectilinearGridToPolyDataFilter\nC++: vtkRectilinearGridToPolyDataFilter *NewInstance()\n\n"},
  {(char*)"SetInput", PyvtkRectilinearGridToPolyDataFilter_SetInput, 1,
   (char*)"V.SetInput(vtkRectilinearGrid)\nC++: void SetInput(vtkRectilinearGrid *input)\n\nSet / get the input Grid or filter.\n"},
  {(char*)"GetInput", PyvtkRectilinearGridToPolyDataFilter_GetInput, 1,
   (char*)"V.GetInput() -> vtkRectilinearGrid\nC++: vtkRectilinearGrid *GetInput()\n\nSet / get the input Grid or filter.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkRectilinearGridToPolyDataFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkRectilinearGridToPolyDataFilter_Methods,
    "vtkRectilinearGridToPolyDataFilter", modulename,
    NULL, NULL,
    PyvtkRectilinearGridToPolyDataFilter_Doc(),
    PyVTKClass_vtkPolyDataSourceNew(modulename));
  return cls;
}

const char **PyvtkRectilinearGridToPolyDataFilter_Doc()
{
  static const char *docstring[] = {
    "vtkRectilinearGridToPolyDataFilter - abstract filter class\n\n",
    "Superclass: vtkPolyDataSource\n\n",
    "vtkRectilinearGridToPolyDataFilter is a filter whose subclasses take\nas input rectilinear grid datasets and generate polygonal data on\noutput.\n\nSee Also:\n\nvtkRectilinearGridGeometryFilter vtkRectilinearGridOutlineFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRectilinearGridToPolyDataFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRectilinearGridToPolyDataFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRectilinearGridToPolyDataFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

