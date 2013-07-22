// python wrapper for vtkExtractSelectedIds
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
#include "vtkExtractSelectedIds.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkExtractSelectedIds(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkExtractSelectedIds(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkExtractSelectedIdsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkExtractSelectedIdsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkExtractSelectionBaseNew
extern "C" { PyObject *PyVTKClass_vtkExtractSelectionBaseNew(const char *); }
#define DECLARED_PyVTKClass_vtkExtractSelectionBaseNew
#endif

static const char **PyvtkExtractSelectedIds_Doc();


static PyObject *
PyvtkExtractSelectedIds_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedIds *op = static_cast<vtkExtractSelectedIds *>(vp);

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
      tempr = op->vtkExtractSelectedIds::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedIds_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedIds *op = static_cast<vtkExtractSelectedIds *>(vp);

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
      tempr = op->vtkExtractSelectedIds::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedIds_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedIds *op = static_cast<vtkExtractSelectedIds *>(vp);

  vtkExtractSelectedIds *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkExtractSelectedIds::NewInstance();
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
PyvtkExtractSelectedIds_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkExtractSelectedIds *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkExtractSelectedIds::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkExtractSelectedIds_Methods[] = {
  {(char*)"GetClassName", PyvtkExtractSelectedIds_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtractSelectedIds_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtractSelectedIds_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkExtractSelectedIds\nC++: vtkExtractSelectedIds *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtractSelectedIds_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtractSelectedIds\nC++: vtkExtractSelectedIds *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtractSelectedIds_StaticNew()
{
  return vtkExtractSelectedIds::New();
}

PyObject *PyVTKClass_vtkExtractSelectedIdsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtractSelectedIds_StaticNew,
    PyvtkExtractSelectedIds_Methods,
    "vtkExtractSelectedIds", modulename,
    NULL, NULL,
    PyvtkExtractSelectedIds_Doc(),
    PyVTKClass_vtkExtractSelectionBaseNew(modulename));
  return cls;
}

const char **PyvtkExtractSelectedIds_Doc()
{
  static const char *docstring[] = {
    "vtkExtractSelectedIds - extract a list of cells from a dataset\n\n",
    "Superclass: vtkExtractSelectionBase\n\n",
    "vtkExtractSelectedIds extracts a set of cells and points from within\na vtkDataSet. The set of ids to extract are listed within a\nvtkSelection. This filter adds a scalar array called\nvtkOriginalCellIds that says what input cell produced each output\ncell. This is an example of a Pedigree ID which helps to trace back\nresults. Depending on whether the selection has GLOBALIDS, VALUES or\nINDICES, the se",
    "lection will use the contents of the array named in\nthe GLOBALIDS DataSetAttribute, and arbitrary array, or the position\n(tuple id or number) within the cell or point array.\n\nSee Also:\n\nvtkSelection vtkExtractSelection\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtractSelectedIds(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtractSelectedIdsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtractSelectedIds", o) != 0)
    {
    Py_DECREF(o);
    }

}

