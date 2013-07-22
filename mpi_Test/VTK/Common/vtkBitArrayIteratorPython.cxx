// python wrapper for vtkBitArrayIterator
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
#include "vtkBitArrayIterator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkBitArrayIterator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkBitArrayIterator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkBitArrayIteratorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkBitArrayIteratorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkArrayIteratorNew
extern "C" { PyObject *PyVTKClass_vtkArrayIteratorNew(const char *); }
#define DECLARED_PyVTKClass_vtkArrayIteratorNew
#endif

static const char **PyvtkBitArrayIterator_Doc();


static PyObject *
PyvtkBitArrayIterator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArrayIterator *op = static_cast<vtkBitArrayIterator *>(vp);

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
      tempr = op->vtkBitArrayIterator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBitArrayIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArrayIterator *op = static_cast<vtkBitArrayIterator *>(vp);

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
      tempr = op->vtkBitArrayIterator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBitArrayIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArrayIterator *op = static_cast<vtkBitArrayIterator *>(vp);

  vtkBitArrayIterator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkBitArrayIterator::NewInstance();
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
PyvtkBitArrayIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkBitArrayIterator *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkBitArrayIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBitArrayIterator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArrayIterator *op = static_cast<vtkBitArrayIterator *>(vp);

  vtkAbstractArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
    {
    if (ap.IsBound())
      {
      op->Initialize(temp0);
      }
    else
      {
      op->vtkBitArrayIterator::Initialize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBitArrayIterator_GetArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArrayIterator *op = static_cast<vtkBitArrayIterator *>(vp);

  vtkAbstractArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetArray();
      }
    else
      {
      tempr = op->vtkBitArrayIterator::GetArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBitArrayIterator_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArrayIterator *op = static_cast<vtkBitArrayIterator *>(vp);

  vtkIdType temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetValue(temp0);
      }
    else
      {
      tempr = op->vtkBitArrayIterator::GetValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBitArrayIterator_GetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArrayIterator *op = static_cast<vtkBitArrayIterator *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfTuples();
      }
    else
      {
      tempr = op->vtkBitArrayIterator::GetNumberOfTuples();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBitArrayIterator_GetNumberOfValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArrayIterator *op = static_cast<vtkBitArrayIterator *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfValues();
      }
    else
      {
      tempr = op->vtkBitArrayIterator::GetNumberOfValues();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBitArrayIterator_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArrayIterator *op = static_cast<vtkBitArrayIterator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfComponents();
      }
    else
      {
      tempr = op->vtkBitArrayIterator::GetNumberOfComponents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBitArrayIterator_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArrayIterator *op = static_cast<vtkBitArrayIterator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataType();
      }
    else
      {
      tempr = op->vtkBitArrayIterator::GetDataType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBitArrayIterator_GetDataTypeSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTypeSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArrayIterator *op = static_cast<vtkBitArrayIterator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataTypeSize();
      }
    else
      {
      tempr = op->vtkBitArrayIterator::GetDataTypeSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBitArrayIterator_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArrayIterator *op = static_cast<vtkBitArrayIterator *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1);
      }
    else
      {
      op->vtkBitArrayIterator::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkBitArrayIterator_Methods[] = {
  {(char*)"GetClassName", PyvtkBitArrayIterator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBitArrayIterator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBitArrayIterator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkBitArrayIterator\nC++: vtkBitArrayIterator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkBitArrayIterator_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBitArrayIterator\nC++: vtkBitArrayIterator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkBitArrayIterator_Initialize, 1,
   (char*)"V.Initialize(vtkAbstractArray)\nC++: virtual void Initialize(vtkAbstractArray *array)\n\nSet the array this iterator will iterate over. After Initialize()\nhas been called, the iterator is valid so long as the Array has\nnot been modified (except using the iterator itself). If the\narray is modified, the iterator must be re-intialized.\n"},
  {(char*)"GetArray", PyvtkBitArrayIterator_GetArray, 1,
   (char*)"V.GetArray() -> vtkAbstractArray\nC++: vtkAbstractArray *GetArray()\n\nGet the array.\n"},
  {(char*)"GetValue", PyvtkBitArrayIterator_GetValue, 1,
   (char*)"V.GetValue(int) -> int\nC++: int GetValue(vtkIdType id)\n\nMust be called only after Initialize.\n"},
  {(char*)"GetNumberOfTuples", PyvtkBitArrayIterator_GetNumberOfTuples, 1,
   (char*)"V.GetNumberOfTuples() -> int\nC++: vtkIdType GetNumberOfTuples()\n\nMust be called only after Initialize.\n"},
  {(char*)"GetNumberOfValues", PyvtkBitArrayIterator_GetNumberOfValues, 1,
   (char*)"V.GetNumberOfValues() -> int\nC++: vtkIdType GetNumberOfValues()\n\nMust be called only after Initialize.\n"},
  {(char*)"GetNumberOfComponents", PyvtkBitArrayIterator_GetNumberOfComponents, 1,
   (char*)"V.GetNumberOfComponents() -> int\nC++: int GetNumberOfComponents()\n\nMust be called only after Initialize.\n"},
  {(char*)"GetDataType", PyvtkBitArrayIterator_GetDataType, 1,
   (char*)"V.GetDataType() -> int\nC++: int GetDataType()\n\nGet the data type from the underlying array.\n"},
  {(char*)"GetDataTypeSize", PyvtkBitArrayIterator_GetDataTypeSize, 1,
   (char*)"V.GetDataTypeSize() -> int\nC++: int GetDataTypeSize()\n\nGet the data type size from the underlying array.\n"},
  {(char*)"SetValue", PyvtkBitArrayIterator_SetValue, 1,
   (char*)"V.SetValue(int, int)\nC++: void SetValue(vtkIdType id, int value)\n\nSets the value at the index. This does not verify if the index is\nvalid. The caller must ensure that id is less than the maximum\nnumber of values.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBitArrayIterator_StaticNew()
{
  return vtkBitArrayIterator::New();
}

PyObject *PyVTKClass_vtkBitArrayIteratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBitArrayIterator_StaticNew,
    PyvtkBitArrayIterator_Methods,
    "vtkBitArrayIterator", modulename,
    NULL, NULL,
    PyvtkBitArrayIterator_Doc(),
    PyVTKClass_vtkArrayIteratorNew(modulename));
  return cls;
}

const char **PyvtkBitArrayIterator_Doc()
{
  static const char *docstring[] = {
    "vtkBitArrayIterator - Iterator for vtkBitArray.\n\n",
    "Superclass: vtkArrayIterator\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBitArrayIterator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBitArrayIteratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBitArrayIterator", o) != 0)
    {
    Py_DECREF(o);
    }

}

