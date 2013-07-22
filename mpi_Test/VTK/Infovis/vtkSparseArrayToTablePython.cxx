// python wrapper for vtkSparseArrayToTable
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
#include "vtkSparseArrayToTable.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSparseArrayToTable(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSparseArrayToTable(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSparseArrayToTableNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSparseArrayToTableNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkTableAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTableAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableAlgorithmNew
#endif

static const char **PyvtkSparseArrayToTable_Doc();


static PyObject *
PyvtkSparseArrayToTable_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArrayToTable *op = static_cast<vtkSparseArrayToTable *>(vp);

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
      tempr = op->vtkSparseArrayToTable::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArrayToTable_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArrayToTable *op = static_cast<vtkSparseArrayToTable *>(vp);

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
      tempr = op->vtkSparseArrayToTable::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArrayToTable_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArrayToTable *op = static_cast<vtkSparseArrayToTable *>(vp);

  vtkSparseArrayToTable *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSparseArrayToTable::NewInstance();
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
PyvtkSparseArrayToTable_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSparseArrayToTable *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSparseArrayToTable::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArrayToTable_GetValueColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArrayToTable *op = static_cast<vtkSparseArrayToTable *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetValueColumn();
      }
    else
      {
      tempr = op->vtkSparseArrayToTable::GetValueColumn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArrayToTable_SetValueColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArrayToTable *op = static_cast<vtkSparseArrayToTable *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetValueColumn(temp0);
      }
    else
      {
      op->vtkSparseArrayToTable::SetValueColumn(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSparseArrayToTable_Methods[] = {
  {(char*)"GetClassName", PyvtkSparseArrayToTable_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSparseArrayToTable_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSparseArrayToTable_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSparseArrayToTable\nC++: vtkSparseArrayToTable *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSparseArrayToTable_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSparseArrayToTable\nC++: vtkSparseArrayToTable *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetValueColumn", PyvtkSparseArrayToTable_GetValueColumn, 1,
   (char*)"V.GetValueColumn() -> string\nC++: char *GetValueColumn()\n\nSpecify the name of the output table column that contains array\nvalues. Default: \"value\"\n"},
  {(char*)"SetValueColumn", PyvtkSparseArrayToTable_SetValueColumn, 1,
   (char*)"V.SetValueColumn(string)\nC++: void SetValueColumn(char *)\n\nSpecify the name of the output table column that contains array\nvalues. Default: \"value\"\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSparseArrayToTable_StaticNew()
{
  return vtkSparseArrayToTable::New();
}

PyObject *PyVTKClass_vtkSparseArrayToTableNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSparseArrayToTable_StaticNew,
    PyvtkSparseArrayToTable_Methods,
    "vtkSparseArrayToTable", modulename,
    NULL, NULL,
    PyvtkSparseArrayToTable_Doc(),
    PyVTKClass_vtkTableAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkSparseArrayToTable_Doc()
{
  static const char *docstring[] = {
    "vtkSparseArrayToTable - Converts a sparse array to a vtkTable.\n\n",
    "Superclass: vtkTableAlgorithm\n\n",
    "Converts any sparse array to a vtkTable containing one row for each\nvalue stored in the array.  The table will contain one column of\ncoordinates for each dimension in the source array, plus one column\nof array values.  A common use-case for vtkSparseArrayToTable would\nbe converting a sparse array into a table suitable for use as an\ninput to vtkTableToGraph.\n\nThe coordinate columns in the output ta",
    "ble will be named using the\ndimension labels from the source array,  The value column name can be\nexplicitly set using SetValueColumn().\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSparseArrayToTable(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSparseArrayToTableNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSparseArrayToTable", o) != 0)
    {
    Py_DECREF(o);
    }

}

