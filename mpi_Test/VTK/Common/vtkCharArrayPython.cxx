// python wrapper for vtkCharArray
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
#include "vtkCharArray.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCharArray(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCharArray(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCharArrayNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCharArrayNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataArrayNew
extern "C" { PyObject *PyVTKClass_vtkDataArrayNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataArrayNew
#endif

static const char **PyvtkCharArray_Doc();


static PyObject *
PyvtkCharArray_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCharArray *op = static_cast<vtkCharArray *>(vp);

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
      tempr = op->vtkCharArray::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCharArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCharArray *op = static_cast<vtkCharArray *>(vp);

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
      tempr = op->vtkCharArray::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCharArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCharArray *op = static_cast<vtkCharArray *>(vp);

  vtkCharArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCharArray::NewInstance();
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
PyvtkCharArray_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCharArray *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCharArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCharArray_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCharArray *op = static_cast<vtkCharArray *>(vp);

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
      tempr = op->vtkCharArray::GetDataType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCharArray_GetTupleValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTupleValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCharArray *op = static_cast<vtkCharArray *>(vp);

  vtkIdType temp0;
  char *temp1 = NULL;
  char *save1 = NULL;
  char small1[8];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = op->GetNumberOfComponents();
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new char[2*size1];
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
      op->vtkCharArray::GetTupleValue(temp0, temp1);
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
PyvtkCharArray_SetTupleValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTupleValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCharArray *op = static_cast<vtkCharArray *>(vp);

  vtkIdType temp0;
  char *temp1 = NULL;
  char small1[4];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = op->GetNumberOfComponents();
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new char[size1];
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
      op->vtkCharArray::SetTupleValue(temp0, temp1);
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
PyvtkCharArray_InsertTupleValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTupleValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCharArray *op = static_cast<vtkCharArray *>(vp);

  vtkIdType temp0;
  char *temp1 = NULL;
  char small1[4];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = op->GetNumberOfComponents();
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new char[size1];
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
      op->vtkCharArray::InsertTupleValue(temp0, temp1);
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
PyvtkCharArray_InsertNextTupleValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextTupleValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCharArray *op = static_cast<vtkCharArray *>(vp);

  char *temp0 = NULL;
  char small0[4];
  int size0 = 0;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op)
    {
    size0 = op->GetNumberOfComponents();
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new char[size0];
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
      tempr = op->vtkCharArray::InsertNextTupleValue(temp0);
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
PyvtkCharArray_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCharArray *op = static_cast<vtkCharArray *>(vp);

  vtkIdType temp0;
  char tempr;
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
      tempr = op->vtkCharArray::GetValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCharArray_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCharArray *op = static_cast<vtkCharArray *>(vp);

  vtkIdType temp0;
  char temp1;
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
      op->vtkCharArray::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCharArray_SetNumberOfValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCharArray *op = static_cast<vtkCharArray *>(vp);

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
      op->vtkCharArray::SetNumberOfValues(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCharArray_InsertValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCharArray *op = static_cast<vtkCharArray *>(vp);

  vtkIdType temp0;
  char temp1;
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
      op->vtkCharArray::InsertValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCharArray_InsertNextValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCharArray *op = static_cast<vtkCharArray *>(vp);

  char temp0;
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
      tempr = op->vtkCharArray::InsertNextValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCharArray_GetValueRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCharArray *op = static_cast<vtkCharArray *>(vp);

  int temp0;
  char *tempr;
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
      tempr = op->vtkCharArray::GetValueRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildBytes(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkCharArray_GetValueRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCharArray *op = static_cast<vtkCharArray *>(vp);

  char *temp0 = NULL;
  char *save0 = NULL;
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
      op->vtkCharArray::GetValueRange(temp0, temp1);
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
PyvtkCharArray_GetValueRange_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCharArray *op = static_cast<vtkCharArray *>(vp);

  char *tempr;
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
      tempr = op->vtkCharArray::GetValueRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildBytes(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkCharArray_GetValueRange_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCharArray *op = static_cast<vtkCharArray *>(vp);

  char *temp0 = NULL;
  char *save0 = NULL;
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
      op->vtkCharArray::GetValueRange(temp0);
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

static PyMethodDef PyvtkCharArray_GetValueRange_Methods[] = {
  {NULL, PyvtkCharArray_GetValueRange_s1, 1,
   (char*)"@i"},
  {NULL, PyvtkCharArray_GetValueRange_s4, 1,
   (char*)"@z *c"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkCharArray_GetValueRange(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCharArray_GetValueRange_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkCharArray_GetValueRange_s2(self, args);
    case 0:
      return PyvtkCharArray_GetValueRange_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValueRange");
  return NULL;
}



static PyObject *
PyvtkCharArray_GetDataTypeValueMin(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDataTypeValueMin");

  char tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkCharArray::GetDataTypeValueMin();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCharArray_GetDataTypeValueMax(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDataTypeValueMax");

  char tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkCharArray::GetDataTypeValueMax();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCharArray_WritePointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WritePointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCharArray *op = static_cast<vtkCharArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->WritePointer(temp0, temp1);
      }
    else
      {
      tempr = op->vtkCharArray::WritePointer(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCharArray_GetPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCharArray *op = static_cast<vtkCharArray *>(vp);

  vtkIdType temp0;
  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointer(temp0);
      }
    else
      {
      tempr = op->vtkCharArray::GetPointer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCharArray_SetArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCharArray *op = static_cast<vtkCharArray *>(vp);

  char *temp0 = NULL;
  vtkIdType temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetArray(temp0, temp1, temp2);
      }
    else
      {
      op->vtkCharArray::SetArray(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCharArray_SetArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCharArray *op = static_cast<vtkCharArray *>(vp);

  char *temp0 = NULL;
  vtkIdType temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetArray(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkCharArray::SetArray(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCharArray_SetArray(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkCharArray_SetArray_s1(self, args);
    case 4:
      return PyvtkCharArray_SetArray_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetArray");
  return NULL;
}


static PyMethodDef PyvtkCharArray_Methods[] = {
  {(char*)"GetClassName", PyvtkCharArray_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCharArray_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCharArray_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCharArray\nC++: vtkCharArray *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCharArray_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCharArray\nC++: vtkCharArray *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDataType", PyvtkCharArray_GetDataType, 1,
   (char*)"V.GetDataType() -> int\nC++: int GetDataType()\n\nGet the data type.\n"},
  {(char*)"GetTupleValue", PyvtkCharArray_GetTupleValue, 1,
   (char*)"V.GetTupleValue(int, [char, ...])\nC++: void GetTupleValue(vtkIdType i, char *tuple)\n\nCopy the tuple value into a user-provided array.\n"},
  {(char*)"SetTupleValue", PyvtkCharArray_SetTupleValue, 1,
   (char*)"V.SetTupleValue(int, (char, ...))\nC++: void SetTupleValue(vtkIdType i, const char *tuple)\n\nSet the tuple value at the ith location in the array.\n"},
  {(char*)"InsertTupleValue", PyvtkCharArray_InsertTupleValue, 1,
   (char*)"V.InsertTupleValue(int, (char, ...))\nC++: void InsertTupleValue(vtkIdType i, const char *tuple)\n\nInsert (memory allocation performed) the tuple into the ith\nlocation in the array.\n"},
  {(char*)"InsertNextTupleValue", PyvtkCharArray_InsertNextTupleValue, 1,
   (char*)"V.InsertNextTupleValue((char, ...)) -> int\nC++: vtkIdType InsertNextTupleValue(const char *tuple)\n\nInsert (memory allocation performed) the tuple onto the end of\nthe array.\n"},
  {(char*)"GetValue", PyvtkCharArray_GetValue, 1,
   (char*)"V.GetValue(int) -> char\nC++: char GetValue(vtkIdType id)\n\nGet the data at a particular index.\n"},
  {(char*)"SetValue", PyvtkCharArray_SetValue, 1,
   (char*)"V.SetValue(int, char)\nC++: void SetValue(vtkIdType id, char value)\n\nSet the data at a particular index. Does not do range checking.\nMake sure you use the method SetNumberOfValues() before inserting\ndata.\n"},
  {(char*)"SetNumberOfValues", PyvtkCharArray_SetNumberOfValues, 1,
   (char*)"V.SetNumberOfValues(int)\nC++: void SetNumberOfValues(vtkIdType number)\n\nSpecify the number of values for this object to hold. Does an\nallocation as well as setting the MaxId ivar. Used in conjunction\nwith SetValue() method for fast insertion.\n"},
  {(char*)"InsertValue", PyvtkCharArray_InsertValue, 1,
   (char*)"V.InsertValue(int, char)\nC++: void InsertValue(vtkIdType id, char f)\n\nInsert data at a specified position in the array.\n"},
  {(char*)"InsertNextValue", PyvtkCharArray_InsertNextValue, 1,
   (char*)"V.InsertNextValue(char) -> int\nC++: vtkIdType InsertNextValue(char f)\n\nInsert data at the end of the array. Return its location in the\narray.\n"},
  {(char*)"GetValueRange", PyvtkCharArray_GetValueRange, 1,
   (char*)"V.GetValueRange(int) -> (char, char)\nC++: char *GetValueRange(int comp)\nV.GetValueRange([char, char], int)\nC++: void GetValueRange(char range[2], int comp)\nV.GetValueRange() -> (char, char)\nC++: char *GetValueRange()\nV.GetValueRange([char, char])\nC++: void GetValueRange(char range[2])\n\nGet the range of array values for the given component in the\nnative data type.\n"},
  {(char*)"GetDataTypeValueMin", PyvtkCharArray_GetDataTypeValueMin, 1,
   (char*)"V.GetDataTypeValueMin() -> char\nC++: static char GetDataTypeValueMin()\n\nGet the minimum data value in its native type.\n"},
  {(char*)"GetDataTypeValueMax", PyvtkCharArray_GetDataTypeValueMax, 1,
   (char*)"V.GetDataTypeValueMax() -> char\nC++: static char GetDataTypeValueMax()\n\nGet the maximum data value in its native type.\n"},
  {(char*)"WritePointer", PyvtkCharArray_WritePointer, 1,
   (char*)"V.WritePointer(int, int) -> string\nC++: char *WritePointer(vtkIdType id, vtkIdType number)\n\nGet the address of a particular data index. Make sure data is\nallocated for the number of items requested. Set MaxId according\nto the number of data values requested.\n"},
  {(char*)"GetPointer", PyvtkCharArray_GetPointer, 1,
   (char*)"V.GetPointer(int) -> string\nC++: char *GetPointer(vtkIdType id)\n\nGet the address of a particular data index. Performs no checks to\nverify that the memory has been allocated etc.\n"},
  {(char*)"SetArray", PyvtkCharArray_SetArray, 1,
   (char*)"V.SetArray(string, int, int)\nC++: void SetArray(char *array, vtkIdType size, int save)\nV.SetArray(string, int, int, int)\nC++: void SetArray(char *array, vtkIdType size, int save,\n    int deleteMethod)\n\nThis method lets the user specify data to be held by the array. \nThe array argument is a pointer to the data.  size is the size of\nthe array supplied by the user.  Set save to 1 to keep the class\nfrom deleting the array when it cleans up or reallocates memory.\nThe class uses the actual array provided; it does not copy the\ndata from the suppled array.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCharArray_StaticNew()
{
  return vtkCharArray::New();
}

PyObject *PyVTKClass_vtkCharArrayNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCharArray_StaticNew,
    PyvtkCharArray_Methods,
    "vtkCharArray", modulename,
    NULL, NULL,
    PyvtkCharArray_Doc(),
    PyVTKClass_vtkDataArrayNew(modulename));
  return cls;
}

const char **PyvtkCharArray_Doc()
{
  static const char *docstring[] = {
    "vtkCharArray - dynamic, self-adjusting array of char\n\n",
    "Superclass: vtkDataArray\n\n",
    "vtkCharArray is an array of values of type char.  It provides methods\nfor insertion and retrieval of values and will automatically resize\nitself to hold new data.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCharArray(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCharArrayNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCharArray", o) != 0)
    {
    Py_DECREF(o);
    }


}

