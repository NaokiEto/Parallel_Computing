// python wrapper for vtkMatricizeArray
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
#include "vtkMatricizeArray.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMatricizeArray(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMatricizeArray(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMatricizeArrayNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMatricizeArrayNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkArrayDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkArrayDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkArrayDataAlgorithmNew
#endif

static const char **PyvtkMatricizeArray_Doc();


static PyObject *
PyvtkMatricizeArray_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatricizeArray *op = static_cast<vtkMatricizeArray *>(vp);

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
      tempr = op->vtkMatricizeArray::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMatricizeArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatricizeArray *op = static_cast<vtkMatricizeArray *>(vp);

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
      tempr = op->vtkMatricizeArray::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMatricizeArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatricizeArray *op = static_cast<vtkMatricizeArray *>(vp);

  vtkMatricizeArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMatricizeArray::NewInstance();
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
PyvtkMatricizeArray_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkMatricizeArray *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkMatricizeArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMatricizeArray_GetSliceDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatricizeArray *op = static_cast<vtkMatricizeArray *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSliceDimension();
      }
    else
      {
      tempr = op->vtkMatricizeArray::GetSliceDimension();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMatricizeArray_SetSliceDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatricizeArray *op = static_cast<vtkMatricizeArray *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSliceDimension(temp0);
      }
    else
      {
      op->vtkMatricizeArray::SetSliceDimension(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMatricizeArray_Methods[] = {
  {(char*)"GetClassName", PyvtkMatricizeArray_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMatricizeArray_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMatricizeArray_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMatricizeArray\nC++: vtkMatricizeArray *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMatricizeArray_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMatricizeArray\nC++: vtkMatricizeArray *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetSliceDimension", PyvtkMatricizeArray_GetSliceDimension, 1,
   (char*)"V.GetSliceDimension() -> int\nC++: vtkIdType GetSliceDimension()\n\nReturns the 0-numbered dimension that will be mapped to columns\nin the output\n"},
  {(char*)"SetSliceDimension", PyvtkMatricizeArray_SetSliceDimension, 1,
   (char*)"V.SetSliceDimension(int)\nC++: void SetSliceDimension(vtkIdType a)\n\nSets the 0-numbered dimension that will be mapped to columns in\nthe output\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMatricizeArray_StaticNew()
{
  return vtkMatricizeArray::New();
}

PyObject *PyVTKClass_vtkMatricizeArrayNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMatricizeArray_StaticNew,
    PyvtkMatricizeArray_Methods,
    "vtkMatricizeArray", modulename,
    NULL, NULL,
    PyvtkMatricizeArray_Doc(),
    PyVTKClass_vtkArrayDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkMatricizeArray_Doc()
{
  static const char *docstring[] = {
    "vtkMatricizeArray - Convert an array of arbitrary dimensions to a\n\n",
    "Superclass: vtkArrayDataAlgorithm\n\n",
    "Given a sparse input array of arbitrary dimension, creates a sparse\noutput matrix (vtkSparseArray) where each column is a slice along an\narbitrary dimension from the source.\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMatricizeArray(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMatricizeArrayNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMatricizeArray", o) != 0)
    {
    Py_DECREF(o);
    }

}

