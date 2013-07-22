// python wrapper for vtkTableToSparseArray
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
#include "vtkTableToSparseArray.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTableToSparseArray(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTableToSparseArray(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTableToSparseArrayNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTableToSparseArrayNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkArrayDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkArrayDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkArrayDataAlgorithmNew
#endif

static const char **PyvtkTableToSparseArray_Doc();


static PyObject *
PyvtkTableToSparseArray_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToSparseArray *op = static_cast<vtkTableToSparseArray *>(vp);

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
      tempr = op->vtkTableToSparseArray::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToSparseArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToSparseArray *op = static_cast<vtkTableToSparseArray *>(vp);

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
      tempr = op->vtkTableToSparseArray::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToSparseArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToSparseArray *op = static_cast<vtkTableToSparseArray *>(vp);

  vtkTableToSparseArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTableToSparseArray::NewInstance();
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
PyvtkTableToSparseArray_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTableToSparseArray *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTableToSparseArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToSparseArray_ClearCoordinateColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearCoordinateColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToSparseArray *op = static_cast<vtkTableToSparseArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearCoordinateColumns();
      }
    else
      {
      op->vtkTableToSparseArray::ClearCoordinateColumns();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableToSparseArray_AddCoordinateColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCoordinateColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToSparseArray *op = static_cast<vtkTableToSparseArray *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddCoordinateColumn(temp0);
      }
    else
      {
      op->vtkTableToSparseArray::AddCoordinateColumn(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableToSparseArray_SetValueColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToSparseArray *op = static_cast<vtkTableToSparseArray *>(vp);

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
      op->vtkTableToSparseArray::SetValueColumn(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableToSparseArray_GetValueColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToSparseArray *op = static_cast<vtkTableToSparseArray *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetValueColumn();
      }
    else
      {
      tempr = op->vtkTableToSparseArray::GetValueColumn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTableToSparseArray_Methods[] = {
  {(char*)"GetClassName", PyvtkTableToSparseArray_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTableToSparseArray_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTableToSparseArray_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTableToSparseArray\nC++: vtkTableToSparseArray *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTableToSparseArray_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTableToSparseArray\nC++: vtkTableToSparseArray *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ClearCoordinateColumns", PyvtkTableToSparseArray_ClearCoordinateColumns, 1,
   (char*)"V.ClearCoordinateColumns()\nC++: void ClearCoordinateColumns()\n\nSpecify the set of input table columns that will be mapped to\ncoordinates in the output sparse array.\n"},
  {(char*)"AddCoordinateColumn", PyvtkTableToSparseArray_AddCoordinateColumn, 1,
   (char*)"V.AddCoordinateColumn(string)\nC++: void AddCoordinateColumn(const char *name)\n\nSpecify the set of input table columns that will be mapped to\ncoordinates in the output sparse array.\n"},
  {(char*)"SetValueColumn", PyvtkTableToSparseArray_SetValueColumn, 1,
   (char*)"V.SetValueColumn(string)\nC++: void SetValueColumn(const char *name)\n\nSpecify the input table column that will be mapped to values in\nthe output array.\n"},
  {(char*)"GetValueColumn", PyvtkTableToSparseArray_GetValueColumn, 1,
   (char*)"V.GetValueColumn() -> string\nC++: const char *GetValueColumn()\n\nSpecify the input table column that will be mapped to values in\nthe output array.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTableToSparseArray_StaticNew()
{
  return vtkTableToSparseArray::New();
}

PyObject *PyVTKClass_vtkTableToSparseArrayNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTableToSparseArray_StaticNew,
    PyvtkTableToSparseArray_Methods,
    "vtkTableToSparseArray", modulename,
    NULL, NULL,
    PyvtkTableToSparseArray_Doc(),
    PyVTKClass_vtkArrayDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTableToSparseArray_Doc()
{
  static const char *docstring[] = {
    "vtkTableToSparseArray - converts a vtkTable into a sparse array.\n\n",
    "Superclass: vtkArrayDataAlgorithm\n\n",
    "Converts a vtkTable into a sparse array.  Use AddCoordinateColumn()\nto designate one-to-many table columns that contain coordinates for\neach array value, and SetValueColumn() to designate the table column\nthat contains array values.\n\nThus, the number of dimensions in the output array will equal the\nnumber of calls to AddCoordinateColumn().\n\nThe coordinate columns will also be used to populate dime",
    "nsion labels\nin the output array.\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTableToSparseArray(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTableToSparseArrayNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTableToSparseArray", o) != 0)
    {
    Py_DECREF(o);
    }

}

