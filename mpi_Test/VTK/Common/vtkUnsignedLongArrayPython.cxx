// python wrapper for vtkUnsignedLongArray
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
#include "vtkUnsignedLongArray.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkUnsignedLongArray(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkUnsignedLongArray(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkUnsignedLongArrayNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkUnsignedLongArrayNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataArrayNew
extern "C" { PyObject *PyVTKClass_vtkDataArrayNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataArrayNew
#endif

static const char **PyvtkUnsignedLongArray_Doc();


static PyObject *
PyvtkUnsignedLongArray_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedLongArray *op = static_cast<vtkUnsignedLongArray *>(vp);

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
      tempr = op->vtkUnsignedLongArray::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnsignedLongArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedLongArray *op = static_cast<vtkUnsignedLongArray *>(vp);

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
      tempr = op->vtkUnsignedLongArray::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnsignedLongArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedLongArray *op = static_cast<vtkUnsignedLongArray *>(vp);

  vtkUnsignedLongArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkUnsignedLongArray::NewInstance();
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
PyvtkUnsignedLongArray_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkUnsignedLongArray *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkUnsignedLongArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnsignedLongArray_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedLongArray *op = static_cast<vtkUnsignedLongArray *>(vp);

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
      tempr = op->vtkUnsignedLongArray::GetDataType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnsignedLongArray_GetTupleValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTupleValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedLongArray *op = static_cast<vtkUnsignedLongArray *>(vp);

  vtkIdType temp0;
  unsigned long *temp1 = NULL;
  unsigned long *save1 = NULL;
  unsigned long small1[8];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = op->GetNumberOfComponents();
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new unsigned long[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetTupleValue(temp0, temp1);
      }
    else
      {
      op->vtkUnsignedLongArray::GetTupleValue(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}


static PyObject *
PyvtkUnsignedLongArray_SetTupleValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTupleValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedLongArray *op = static_cast<vtkUnsignedLongArray *>(vp);

  vtkIdType temp0;
  unsigned long *temp1 = NULL;
  unsigned long small1[4];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = op->GetNumberOfComponents();
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new unsigned long[size1];
      }
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    if (ap.IsBound())
      {
      op->SetTupleValue(temp0, temp1);
      }
    else
      {
      op->vtkUnsignedLongArray::SetTupleValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}


static PyObject *
PyvtkUnsignedLongArray_InsertTupleValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTupleValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedLongArray *op = static_cast<vtkUnsignedLongArray *>(vp);

  vtkIdType temp0;
  unsigned long *temp1 = NULL;
  unsigned long small1[4];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = op->GetNumberOfComponents();
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new unsigned long[size1];
      }
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    if (ap.IsBound())
      {
      op->InsertTupleValue(temp0, temp1);
      }
    else
      {
      op->vtkUnsignedLongArray::InsertTupleValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}


static PyObject *
PyvtkUnsignedLongArray_InsertNextTupleValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextTupleValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedLongArray *op = static_cast<vtkUnsignedLongArray *>(vp);

  unsigned long *temp0 = NULL;
  unsigned long small0[4];
  int size0 = 0;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op)
    {
    size0 = op->GetNumberOfComponents();
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new unsigned long[size0];
      }
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      tempr = op->InsertNextTupleValue(temp0);
      }
    else
      {
      tempr = op->vtkUnsignedLongArray::InsertNextTupleValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkUnsignedLongArray_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedLongArray *op = static_cast<vtkUnsignedLongArray *>(vp);

  vtkIdType temp0;
  unsigned long tempr;
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
      tempr = op->vtkUnsignedLongArray::GetValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnsignedLongArray_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedLongArray *op = static_cast<vtkUnsignedLongArray *>(vp);

  vtkIdType temp0;
  unsigned long temp1;
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
      op->vtkUnsignedLongArray::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnsignedLongArray_SetNumberOfValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedLongArray *op = static_cast<vtkUnsignedLongArray *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfValues(temp0);
      }
    else
      {
      op->vtkUnsignedLongArray::SetNumberOfValues(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnsignedLongArray_InsertValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedLongArray *op = static_cast<vtkUnsignedLongArray *>(vp);

  vtkIdType temp0;
  unsigned long temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->InsertValue(temp0, temp1);
      }
    else
      {
      op->vtkUnsignedLongArray::InsertValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnsignedLongArray_InsertNextValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedLongArray *op = static_cast<vtkUnsignedLongArray *>(vp);

  unsigned long temp0;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->InsertNextValue(temp0);
      }
    else
      {
      tempr = op->vtkUnsignedLongArray::InsertNextValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnsignedLongArray_GetValueRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedLongArray *op = static_cast<vtkUnsignedLongArray *>(vp);

  int temp0;
  unsigned long *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetValueRange(temp0);
      }
    else
      {
      tempr = op->vtkUnsignedLongArray::GetValueRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkUnsignedLongArray_GetValueRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedLongArray *op = static_cast<vtkUnsignedLongArray *>(vp);

  unsigned long temp0[2];
  unsigned long save0[2];
  const int size0 = 2;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetValueRange(temp0, temp1);
      }
    else
      {
      op->vtkUnsignedLongArray::GetValueRange(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkUnsignedLongArray_GetValueRange_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedLongArray *op = static_cast<vtkUnsignedLongArray *>(vp);

  unsigned long *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetValueRange();
      }
    else
      {
      tempr = op->vtkUnsignedLongArray::GetValueRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkUnsignedLongArray_GetValueRange_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedLongArray *op = static_cast<vtkUnsignedLongArray *>(vp);

  unsigned long temp0[2];
  unsigned long save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetValueRange(temp0);
      }
    else
      {
      op->vtkUnsignedLongArray::GetValueRange(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkUnsignedLongArray_GetValueRange_Methods[] = {
  {NULL, PyvtkUnsignedLongArray_GetValueRange_s1, 1,
   (char*)"@i"},
  {NULL, PyvtkUnsignedLongArray_GetValueRange_s4, 1,
   (char*)"@O *k"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkUnsignedLongArray_GetValueRange(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkUnsignedLongArray_GetValueRange_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkUnsignedLongArray_GetValueRange_s2(self, args);
    case 0:
      return PyvtkUnsignedLongArray_GetValueRange_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValueRange");
  return NULL;
}



static PyObject *
PyvtkUnsignedLongArray_GetDataTypeValueMin(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDataTypeValueMin");

  unsigned long tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkUnsignedLongArray::GetDataTypeValueMin();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnsignedLongArray_GetDataTypeValueMax(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDataTypeValueMax");

  unsigned long tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkUnsignedLongArray::GetDataTypeValueMax();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkUnsignedLongArray_Methods[] = {
  {(char*)"GetClassName", PyvtkUnsignedLongArray_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkUnsignedLongArray_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkUnsignedLongArray_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkUnsignedLongArray\nC++: vtkUnsignedLongArray *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkUnsignedLongArray_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkUnsignedLongArray\nC++: vtkUnsignedLongArray *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDataType", PyvtkUnsignedLongArray_GetDataType, 1,
   (char*)"V.GetDataType() -> int\nC++: int GetDataType()\n\nGet the data type.\n"},
  {(char*)"GetTupleValue", PyvtkUnsignedLongArray_GetTupleValue, 1,
   (char*)"V.GetTupleValue(int, [int, ...])\nC++: void GetTupleValue(vtkIdType i, unsigned long *tuple)\n\nCopy the tuple value into a user-provided array.\n"},
  {(char*)"SetTupleValue", PyvtkUnsignedLongArray_SetTupleValue, 1,
   (char*)"V.SetTupleValue(int, (int, ...))\nC++: void SetTupleValue(vtkIdType i, const unsigned long *tuple)\n\nSet the tuple value at the ith location in the array.\n"},
  {(char*)"InsertTupleValue", PyvtkUnsignedLongArray_InsertTupleValue, 1,
   (char*)"V.InsertTupleValue(int, (int, ...))\nC++: void InsertTupleValue(vtkIdType i,\n    const unsigned long *tuple)\n\nInsert (memory allocation performed) the tuple into the ith\nlocation in the array.\n"},
  {(char*)"InsertNextTupleValue", PyvtkUnsignedLongArray_InsertNextTupleValue, 1,
   (char*)"V.InsertNextTupleValue((int, ...)) -> int\nC++: vtkIdType InsertNextTupleValue(const unsigned long *tuple)\n\nInsert (memory allocation performed) the tuple onto the end of\nthe array.\n"},
  {(char*)"GetValue", PyvtkUnsignedLongArray_GetValue, 1,
   (char*)"V.GetValue(int) -> int\nC++: unsigned long GetValue(vtkIdType id)\n\nGet the data at a particular index.\n"},
  {(char*)"SetValue", PyvtkUnsignedLongArray_SetValue, 1,
   (char*)"V.SetValue(int, int)\nC++: void SetValue(vtkIdType id, unsigned long value)\n\nSet the data at a particular index. Does not do range checking.\nMake sure you use the method SetNumberOfValues() before inserting\ndata.\n"},
  {(char*)"SetNumberOfValues", PyvtkUnsignedLongArray_SetNumberOfValues, 1,
   (char*)"V.SetNumberOfValues(int)\nC++: void SetNumberOfValues(vtkIdType number)\n\nSpecify the number of values for this object to hold. Does an\nallocation as well as setting the MaxId ivar. Used in conjunction\nwith SetValue() method for fast insertion.\n"},
  {(char*)"InsertValue", PyvtkUnsignedLongArray_InsertValue, 1,
   (char*)"V.InsertValue(int, int)\nC++: void InsertValue(vtkIdType id, unsigned long f)\n\nInsert data at a specified position in the array.\n"},
  {(char*)"InsertNextValue", PyvtkUnsignedLongArray_InsertNextValue, 1,
   (char*)"V.InsertNextValue(int) -> int\nC++: vtkIdType InsertNextValue(unsigned long f)\n\nInsert data at the end of the array. Return its location in the\narray.\n"},
  {(char*)"GetValueRange", PyvtkUnsignedLongArray_GetValueRange, 1,
   (char*)"V.GetValueRange(int) -> (int, int)\nC++: unsigned long *GetValueRange(int comp)\nV.GetValueRange([int, int], int)\nC++: void GetValueRange(unsigned long range[2], int comp)\nV.GetValueRange() -> (int, int)\nC++: unsigned long *GetValueRange()\nV.GetValueRange([int, int])\nC++: void GetValueRange(unsigned long range[2])\n\nGet the range of array values for the given component in the\nnative data type.\n"},
  {(char*)"GetDataTypeValueMin", PyvtkUnsignedLongArray_GetDataTypeValueMin, 1,
   (char*)"V.GetDataTypeValueMin() -> int\nC++: static unsigned long GetDataTypeValueMin()\n\nGet the minimum data value in its native type.\n"},
  {(char*)"GetDataTypeValueMax", PyvtkUnsignedLongArray_GetDataTypeValueMax, 1,
   (char*)"V.GetDataTypeValueMax() -> int\nC++: static unsigned long GetDataTypeValueMax()\n\nGet the maximum data value in its native type.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkUnsignedLongArray_StaticNew()
{
  return vtkUnsignedLongArray::New();
}

PyObject *PyVTKClass_vtkUnsignedLongArrayNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkUnsignedLongArray_StaticNew,
    PyvtkUnsignedLongArray_Methods,
    "vtkUnsignedLongArray", modulename,
    NULL, NULL,
    PyvtkUnsignedLongArray_Doc(),
    PyVTKClass_vtkDataArrayNew(modulename));
  return cls;
}

const char **PyvtkUnsignedLongArray_Doc()
{
  static const char *docstring[] = {
    "vtkUnsignedLongArray - dynamic, self-adjusting array of unsigned long\n\n",
    "Superclass: vtkDataArray\n\n",
    "vtkUnsignedLongArray is an array of values of type unsigned long. It\nprovides methods for insertion and retrieval of values and will\nautomatically resize itself to hold new data.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkUnsignedLongArray(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkUnsignedLongArrayNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkUnsignedLongArray", o) != 0)
    {
    Py_DECREF(o);
    }


}

