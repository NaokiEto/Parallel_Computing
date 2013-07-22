// python wrapper for vtkTableToTreeFilter
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
#include "vtkTableToTreeFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTableToTreeFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTableToTreeFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTableToTreeFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTableToTreeFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkTreeAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTreeAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTreeAlgorithmNew
#endif

static const char **PyvtkTableToTreeFilter_Doc();


static PyObject *
PyvtkTableToTreeFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToTreeFilter *op = static_cast<vtkTableToTreeFilter *>(vp);

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
      tempr = op->vtkTableToTreeFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToTreeFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToTreeFilter *op = static_cast<vtkTableToTreeFilter *>(vp);

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
      tempr = op->vtkTableToTreeFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToTreeFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToTreeFilter *op = static_cast<vtkTableToTreeFilter *>(vp);

  vtkTableToTreeFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTableToTreeFilter::NewInstance();
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
PyvtkTableToTreeFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTableToTreeFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTableToTreeFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTableToTreeFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkTableToTreeFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTableToTreeFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTableToTreeFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTableToTreeFilter\nC++: vtkTableToTreeFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTableToTreeFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTableToTreeFilter\nC++: vtkTableToTreeFilter *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTableToTreeFilter_StaticNew()
{
  return vtkTableToTreeFilter::New();
}

PyObject *PyVTKClass_vtkTableToTreeFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTableToTreeFilter_StaticNew,
    PyvtkTableToTreeFilter_Methods,
    "vtkTableToTreeFilter", modulename,
    NULL, NULL,
    PyvtkTableToTreeFilter_Doc(),
    PyVTKClass_vtkTreeAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTableToTreeFilter_Doc()
{
  static const char *docstring[] = {
    "vtkTableToTreeFilter - Filter that converts a vtkTable to a vtkTree\n\n",
    "Superclass: vtkTreeAlgorithm\n\n",
    "vtkTableToTreeFilter is a filter for converting a vtkTable data\nstructure into a vtkTree datastructure.  Currently, this will convert\nthe table into a star, with each row of the table as a child of a new\nroot node. The columns of the table are passed as node fields of the\ntree.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTableToTreeFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTableToTreeFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTableToTreeFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

