// python wrapper for vtkStructuredPointsToPolyDataFilter
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
#include "vtkStructuredPointsToPolyDataFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkStructuredPointsToPolyDataFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkStructuredPointsToPolyDataFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkStructuredPointsToPolyDataFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkStructuredPointsToPolyDataFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataSourceNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataSourceNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataSourceNew
#endif

static const char **PyvtkStructuredPointsToPolyDataFilter_Doc();


static PyObject *
PyvtkStructuredPointsToPolyDataFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsToPolyDataFilter *op = static_cast<vtkStructuredPointsToPolyDataFilter *>(vp);

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
      tempr = op->vtkStructuredPointsToPolyDataFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredPointsToPolyDataFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsToPolyDataFilter *op = static_cast<vtkStructuredPointsToPolyDataFilter *>(vp);

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
      tempr = op->vtkStructuredPointsToPolyDataFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredPointsToPolyDataFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsToPolyDataFilter *op = static_cast<vtkStructuredPointsToPolyDataFilter *>(vp);

  vtkStructuredPointsToPolyDataFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkStructuredPointsToPolyDataFilter::NewInstance();
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
PyvtkStructuredPointsToPolyDataFilter_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsToPolyDataFilter *op = static_cast<vtkStructuredPointsToPolyDataFilter *>(vp);

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
      op->vtkStructuredPointsToPolyDataFilter::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredPointsToPolyDataFilter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsToPolyDataFilter *op = static_cast<vtkStructuredPointsToPolyDataFilter *>(vp);

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
      tempr = op->vtkStructuredPointsToPolyDataFilter::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkStructuredPointsToPolyDataFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkStructuredPointsToPolyDataFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStructuredPointsToPolyDataFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStructuredPointsToPolyDataFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkStructuredPointsToPolyDataFilter\nC++: vtkStructuredPointsToPolyDataFilter *NewInstance()\n\n"},
  {(char*)"SetInput", PyvtkStructuredPointsToPolyDataFilter_SetInput, 1,
   (char*)"V.SetInput(vtkImageData)\nC++: virtual void SetInput(vtkImageData *input)\n\nSet / get the input data or filter.\n"},
  {(char*)"GetInput", PyvtkStructuredPointsToPolyDataFilter_GetInput, 1,
   (char*)"V.GetInput() -> vtkImageData\nC++: vtkImageData *GetInput()\n\nSet / get the input data or filter.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkStructuredPointsToPolyDataFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkStructuredPointsToPolyDataFilter_Methods,
    "vtkStructuredPointsToPolyDataFilter", modulename,
    NULL, NULL,
    PyvtkStructuredPointsToPolyDataFilter_Doc(),
    PyVTKClass_vtkPolyDataSourceNew(modulename));
  return cls;
}

const char **PyvtkStructuredPointsToPolyDataFilter_Doc()
{
  static const char *docstring[] = {
    "vtkStructuredPointsToPolyDataFilter - abstract filter class\n\n",
    "Superclass: vtkPolyDataSource\n\n",
    "vtkStructuredPointsToPolyDataFilter is an abstract filter class whose\nsubclasses take on input structured points and generate polygonal\ndata on output.\n\nSee Also:\n\nvtkDividingCubes vtkMarchingCubes vtkMarchingSquares\nvtkRecursiveDividingCubes vtkImageDataGeometryFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStructuredPointsToPolyDataFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStructuredPointsToPolyDataFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStructuredPointsToPolyDataFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

