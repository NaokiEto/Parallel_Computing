// python wrapper for vtkStructuredGridToStructuredGridFilter
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
#include "vtkStructuredGridToStructuredGridFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkStructuredGridToStructuredGridFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkStructuredGridToStructuredGridFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkStructuredGridToStructuredGridFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkStructuredGridToStructuredGridFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkStructuredGridSourceNew
extern "C" { PyObject *PyVTKClass_vtkStructuredGridSourceNew(const char *); }
#define DECLARED_PyVTKClass_vtkStructuredGridSourceNew
#endif

static const char **PyvtkStructuredGridToStructuredGridFilter_Doc();


static PyObject *
PyvtkStructuredGridToStructuredGridFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridToStructuredGridFilter *op = static_cast<vtkStructuredGridToStructuredGridFilter *>(vp);

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
      tempr = op->vtkStructuredGridToStructuredGridFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridToStructuredGridFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridToStructuredGridFilter *op = static_cast<vtkStructuredGridToStructuredGridFilter *>(vp);

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
      tempr = op->vtkStructuredGridToStructuredGridFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridToStructuredGridFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridToStructuredGridFilter *op = static_cast<vtkStructuredGridToStructuredGridFilter *>(vp);

  vtkStructuredGridToStructuredGridFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkStructuredGridToStructuredGridFilter::NewInstance();
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
PyvtkStructuredGridToStructuredGridFilter_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridToStructuredGridFilter *op = static_cast<vtkStructuredGridToStructuredGridFilter *>(vp);

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
      op->vtkStructuredGridToStructuredGridFilter::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridToStructuredGridFilter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridToStructuredGridFilter *op = static_cast<vtkStructuredGridToStructuredGridFilter *>(vp);

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
      tempr = op->vtkStructuredGridToStructuredGridFilter::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkStructuredGridToStructuredGridFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkStructuredGridToStructuredGridFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStructuredGridToStructuredGridFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStructuredGridToStructuredGridFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkStructuredGridToStructuredGridFilter\nC++: vtkStructuredGridToStructuredGridFilter *NewInstance()\n\n"},
  {(char*)"SetInput", PyvtkStructuredGridToStructuredGridFilter_SetInput, 1,
   (char*)"V.SetInput(vtkStructuredGrid)\nC++: void SetInput(vtkStructuredGrid *input)\n\nSet / get the input Grid or filter.\n"},
  {(char*)"GetInput", PyvtkStructuredGridToStructuredGridFilter_GetInput, 1,
   (char*)"V.GetInput() -> vtkStructuredGrid\nC++: vtkStructuredGrid *GetInput()\n\nSet / get the input Grid or filter.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkStructuredGridToStructuredGridFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkStructuredGridToStructuredGridFilter_Methods,
    "vtkStructuredGridToStructuredGridFilter", modulename,
    NULL, NULL,
    PyvtkStructuredGridToStructuredGridFilter_Doc(),
    PyVTKClass_vtkStructuredGridSourceNew(modulename));
  return cls;
}

const char **PyvtkStructuredGridToStructuredGridFilter_Doc()
{
  static const char *docstring[] = {
    "vtkStructuredGridToStructuredGridFilter - abstract filter class\n\n",
    "Superclass: vtkStructuredGridSource\n\n",
    "vtkStructuredPointsToStructuredPointsFilter is an abstract filter\nclass whose subclasses take on input a structured grid  and generate\na structured grid on output.\n\nSee Also:\n\nvtkExtractGrid\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStructuredGridToStructuredGridFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStructuredGridToStructuredGridFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStructuredGridToStructuredGridFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

