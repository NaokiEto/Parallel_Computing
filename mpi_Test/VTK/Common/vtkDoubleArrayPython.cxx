// python wrapper for vtkDoubleArray
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
#include "vtkDoubleArray.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDoubleArray(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDoubleArray(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDoubleArrayNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDoubleArrayNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataArrayNew
extern "C" { PyObject *PyVTKClass_vtkDataArrayNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataArrayNew
#endif

static const char **PyvtkDoubleArray_Doc();


static PyObject *
PyvtkDoubleArray_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDoubleArray *op = static_cast<vtkDoubleArray *>(vp);

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
      tempr = op->vtkDoubleArray::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDoubleArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDoubleArray *op = static_cast<vtkDoubleArray *>(vp);

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
      tempr = op->vtkDoubleArray::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDoubleArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDoubleArray *op = static_cast<vtkDoubleArray *>(vp);

  vtkDoubleArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDoubleArray::NewInstance();
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
PyvtkDoubleArray_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDoubleArray *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDoubleArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDoubleArray_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDoubleArray *op = static_cast<vtkDoubleArray *>(vp);

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
      tempr = op->vtkDoubleArray::GetDataType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDoubleArray_GetTupleValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTupleValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDoubleArray *op = static_cast<vtkDoubleArray *>(vp);

  vtkIdType temp0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = op->GetNumberOfComponents();
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
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
      op->vtkDoubleArray::GetTupleValue(temp0, temp1);
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
PyvtkDoubleArray_SetTupleValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTupleValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDoubleArray *op = static_cast<vtkDoubleArray *>(vp);

  vtkIdType temp0;
  double *temp1 = NULL;
  double small1[4];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = op->GetNumberOfComponents();
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[size1];
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
      op->vtkDoubleArray::SetTupleValue(temp0, temp1);
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
PyvtkDoubleArray_InsertTupleValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTupleValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDoubleArray *op = static_cast<vtkDoubleArray *>(vp);

  vtkIdType temp0;
  double *temp1 = NULL;
  double small1[4];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = op->GetNumberOfComponents();
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[size1];
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
      op->vtkDoubleArray::InsertTupleValue(temp0, temp1);
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
PyvtkDoubleArray_InsertNextTupleValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextTupleValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDoubleArray *op = static_cast<vtkDoubleArray *>(vp);

  double *temp0 = NULL;
  double small0[4];
  int size0 = 0;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op)
    {
    size0 = op->GetNumberOfComponents();
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[size0];
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
      tempr = op->vtkDoubleArray::InsertNextTupleValue(temp0);
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
PyvtkDoubleArray_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDoubleArray *op = static_cast<vtkDoubleArray *>(vp);

  vtkIdType temp0;
  double tempr;
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
      tempr = op->vtkDoubleArray::GetValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDoubleArray_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDoubleArray *op = static_cast<vtkDoubleArray *>(vp);

  vtkIdType temp0;
  double temp1;
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
      op->vtkDoubleArray::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDoubleArray_SetNumberOfValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDoubleArray *op = static_cast<vtkDoubleArray *>(vp);

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
      op->vtkDoubleArray::SetNumberOfValues(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDoubleArray_InsertValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDoubleArray *op = static_cast<vtkDoubleArray *>(vp);

  vtkIdType temp0;
  double temp1;
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
      op->vtkDoubleArray::InsertValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDoubleArray_InsertNextValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDoubleArray *op = static_cast<vtkDoubleArray *>(vp);

  double temp0;
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
      tempr = op->vtkDoubleArray::InsertNextValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDoubleArray_GetValueRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDoubleArray *op = static_cast<vtkDoubleArray *>(vp);

  int temp0;
  double *tempr;
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
      tempr = op->vtkDoubleArray::GetValueRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkDoubleArray_GetValueRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDoubleArray *op = static_cast<vtkDoubleArray *>(vp);

  double temp0[2];
  double save0[2];
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
      op->vtkDoubleArray::GetValueRange(temp0, temp1);
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
PyvtkDoubleArray_GetValueRange_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDoubleArray *op = static_cast<vtkDoubleArray *>(vp);

  double *tempr;
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
      tempr = op->vtkDoubleArray::GetValueRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkDoubleArray_GetValueRange_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDoubleArray *op = static_cast<vtkDoubleArray *>(vp);

  double temp0[2];
  double save0[2];
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
      op->vtkDoubleArray::GetValueRange(temp0);
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

static PyMethodDef PyvtkDoubleArray_GetValueRange_Methods[] = {
  {NULL, PyvtkDoubleArray_GetValueRange_s1, 1,
   (char*)"@i"},
  {NULL, PyvtkDoubleArray_GetValueRange_s4, 1,
   (char*)"@O *d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDoubleArray_GetValueRange(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDoubleArray_GetValueRange_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkDoubleArray_GetValueRange_s2(self, args);
    case 0:
      return PyvtkDoubleArray_GetValueRange_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValueRange");
  return NULL;
}



static PyObject *
PyvtkDoubleArray_GetDataTypeValueMin(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDataTypeValueMin");

  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkDoubleArray::GetDataTypeValueMin();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDoubleArray_GetDataTypeValueMax(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDataTypeValueMax");

  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkDoubleArray::GetDataTypeValueMax();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDoubleArray_Methods[] = {
  {(char*)"GetClassName", PyvtkDoubleArray_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDoubleArray_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDoubleArray_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDoubleArray\nC++: vtkDoubleArray *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDoubleArray_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDoubleArray\nC++: vtkDoubleArray *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDataType", PyvtkDoubleArray_GetDataType, 1,
   (char*)"V.GetDataType() -> int\nC++: int GetDataType()\n\nGet the data type.\n"},
  {(char*)"GetTupleValue", PyvtkDoubleArray_GetTupleValue, 1,
   (char*)"V.GetTupleValue(int, [float, ...])\nC++: void GetTupleValue(vtkIdType i, double *tuple)\n\nCopy the tuple value into a user-provided array.\n"},
  {(char*)"SetTupleValue", PyvtkDoubleArray_SetTupleValue, 1,
   (char*)"V.SetTupleValue(int, (float, ...))\nC++: void SetTupleValue(vtkIdType i, const double *tuple)\n\nSet the tuple value at the ith location in the array.\n"},
  {(char*)"InsertTupleValue", PyvtkDoubleArray_InsertTupleValue, 1,
   (char*)"V.InsertTupleValue(int, (float, ...))\nC++: void InsertTupleValue(vtkIdType i, const double *tuple)\n\nInsert (memory allocation performed) the tuple into the ith\nlocation in the array.\n"},
  {(char*)"InsertNextTupleValue", PyvtkDoubleArray_InsertNextTupleValue, 1,
   (char*)"V.InsertNextTupleValue((float, ...)) -> int\nC++: vtkIdType InsertNextTupleValue(const double *tuple)\n\nInsert (memory allocation performed) the tuple onto the end of\nthe array.\n"},
  {(char*)"GetValue", PyvtkDoubleArray_GetValue, 1,
   (char*)"V.GetValue(int) -> float\nC++: double GetValue(vtkIdType id)\n\nGet the data at a particular index.\n"},
  {(char*)"SetValue", PyvtkDoubleArray_SetValue, 1,
   (char*)"V.SetValue(int, float)\nC++: void SetValue(vtkIdType id, double value)\n\nSet the data at a particular index. Does not do range checking.\nMake sure you use the method SetNumberOfValues() before inserting\ndata.\n"},
  {(char*)"SetNumberOfValues", PyvtkDoubleArray_SetNumberOfValues, 1,
   (char*)"V.SetNumberOfValues(int)\nC++: void SetNumberOfValues(vtkIdType number)\n\nSpecify the number of values for this object to hold. Does an\nallocation as well as setting the MaxId ivar. Used in conjunction\nwith SetValue() method for fast insertion.\n"},
  {(char*)"InsertValue", PyvtkDoubleArray_InsertValue, 1,
   (char*)"V.InsertValue(int, float)\nC++: void InsertValue(vtkIdType id, double f)\n\nInsert data at a specified position in the array.\n"},
  {(char*)"InsertNextValue", PyvtkDoubleArray_InsertNextValue, 1,
   (char*)"V.InsertNextValue(float) -> int\nC++: vtkIdType InsertNextValue(double f)\n\nInsert data at the end of the array. Return its location in the\narray.\n"},
  {(char*)"GetValueRange", PyvtkDoubleArray_GetValueRange, 1,
   (char*)"V.GetValueRange(int) -> (float, float)\nC++: double *GetValueRange(int comp)\nV.GetValueRange([float, float], int)\nC++: void GetValueRange(double range[2], int comp)\nV.GetValueRange() -> (float, float)\nC++: double *GetValueRange()\nV.GetValueRange([float, float])\nC++: void GetValueRange(double range[2])\n\nGet the range of array values for the given component in the\nnative data type.\n"},
  {(char*)"GetDataTypeValueMin", PyvtkDoubleArray_GetDataTypeValueMin, 1,
   (char*)"V.GetDataTypeValueMin() -> float\nC++: static double GetDataTypeValueMin()\n\nGet the minimum data value in its native type.\n"},
  {(char*)"GetDataTypeValueMax", PyvtkDoubleArray_GetDataTypeValueMax, 1,
   (char*)"V.GetDataTypeValueMax() -> float\nC++: static double GetDataTypeValueMax()\n\nGet the maximum data value in its native type.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDoubleArray_StaticNew()
{
  return vtkDoubleArray::New();
}

PyObject *PyVTKClass_vtkDoubleArrayNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDoubleArray_StaticNew,
    PyvtkDoubleArray_Methods,
    "vtkDoubleArray", modulename,
    NULL, NULL,
    PyvtkDoubleArray_Doc(),
    PyVTKClass_vtkDataArrayNew(modulename));
  return cls;
}

const char **PyvtkDoubleArray_Doc()
{
  static const char *docstring[] = {
    "vtkDoubleArray - dynamic, self-adjusting array of double\n\n",
    "Superclass: vtkDataArray\n\n",
    "vtkDoubleArray is an array of values of type double.  It provides\nmethods for insertion and retrieval of values and will automatically\nresize itself to hold new data.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDoubleArray(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDoubleArrayNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDoubleArray", o) != 0)
    {
    Py_DECREF(o);
    }


}

