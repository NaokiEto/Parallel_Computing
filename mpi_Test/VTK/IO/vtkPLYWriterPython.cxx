// python wrapper for vtkPLYWriter
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
#include "vtkPLYWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPLYWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPLYWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPLYWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPLYWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataWriterNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataWriterNew
#endif

static const char **PyvtkPLYWriter_Doc();


static PyObject *
PyvtkPLYWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

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
      tempr = op->vtkPLYWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

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
      tempr = op->vtkPLYWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  vtkPLYWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPLYWriter::NewInstance();
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
PyvtkPLYWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPLYWriter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPLYWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetDataByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDataByteOrder(temp0);
      }
    else
      {
      op->vtkPLYWriter::SetDataByteOrder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetDataByteOrderMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataByteOrderMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataByteOrderMinValue();
      }
    else
      {
      tempr = op->vtkPLYWriter::GetDataByteOrderMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetDataByteOrderMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataByteOrderMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataByteOrderMaxValue();
      }
    else
      {
      tempr = op->vtkPLYWriter::GetDataByteOrderMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetDataByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataByteOrder();
      }
    else
      {
      tempr = op->vtkPLYWriter::GetDataByteOrder();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetDataByteOrderToBigEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataByteOrderToBigEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataByteOrderToBigEndian();
      }
    else
      {
      op->vtkPLYWriter::SetDataByteOrderToBigEndian();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetDataByteOrderToLittleEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataByteOrderToLittleEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataByteOrderToLittleEndian();
      }
    else
      {
      op->vtkPLYWriter::SetDataByteOrderToLittleEndian();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColorMode(temp0);
      }
    else
      {
      op->vtkPLYWriter::SetColorMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColorMode();
      }
    else
      {
      tempr = op->vtkPLYWriter::GetColorMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetColorModeToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetColorModeToDefault();
      }
    else
      {
      op->vtkPLYWriter::SetColorModeToDefault();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetColorModeToUniformCellColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToUniformCellColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetColorModeToUniformCellColor();
      }
    else
      {
      op->vtkPLYWriter::SetColorModeToUniformCellColor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetColorModeToUniformPointColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToUniformPointColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetColorModeToUniformPointColor();
      }
    else
      {
      op->vtkPLYWriter::SetColorModeToUniformPointColor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetColorModeToUniformColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToUniformColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetColorModeToUniformColor();
      }
    else
      {
      op->vtkPLYWriter::SetColorModeToUniformColor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetColorModeToOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetColorModeToOff();
      }
    else
      {
      op->vtkPLYWriter::SetColorModeToOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetArrayName(temp0);
      }
    else
      {
      op->vtkPLYWriter::SetArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetArrayName();
      }
    else
      {
      tempr = op->vtkPLYWriter::GetArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComponent(temp0);
      }
    else
      {
      op->vtkPLYWriter::SetComponent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetComponentMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComponentMinValue();
      }
    else
      {
      tempr = op->vtkPLYWriter::GetComponentMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetComponentMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComponentMaxValue();
      }
    else
      {
      tempr = op->vtkPLYWriter::GetComponentMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComponent();
      }
    else
      {
      tempr = op->vtkPLYWriter::GetComponent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  vtkScalarsToColors *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
    {
    if (ap.IsBound())
      {
      op->SetLookupTable(temp0);
      }
    else
      {
      op->vtkPLYWriter::SetLookupTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  vtkScalarsToColors *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLookupTable();
      }
    else
      {
      tempr = op->vtkPLYWriter::GetLookupTable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPLYWriter::SetColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPLYWriter_SetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  unsigned char temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetColor(temp0);
      }
    else
      {
      op->vtkPLYWriter::SetColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPLYWriter_SetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPLYWriter_SetColor_s1(self, args);
    case 1:
      return PyvtkPLYWriter_SetColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetColor");
  return NULL;
}



static PyObject *
PyvtkPLYWriter_GetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  unsigned char *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColor();
      }
    else
      {
      tempr = op->vtkPLYWriter::GetColor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkPLYWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkPLYWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPLYWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPLYWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPLYWriter\nC++: vtkPLYWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPLYWriter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPLYWriter\nC++: vtkPLYWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetDataByteOrder", PyvtkPLYWriter_SetDataByteOrder, 1,
   (char*)"V.SetDataByteOrder(int)\nC++: void SetDataByteOrder(int)\n\nIf the file type is binary, then the user can specify which byte\norder to use (little versus big endian).\n"},
  {(char*)"GetDataByteOrderMinValue", PyvtkPLYWriter_GetDataByteOrderMinValue, 1,
   (char*)"V.GetDataByteOrderMinValue() -> int\nC++: int GetDataByteOrderMinValue()\n\nIf the file type is binary, then the user can specify which byte\norder to use (little versus big endian).\n"},
  {(char*)"GetDataByteOrderMaxValue", PyvtkPLYWriter_GetDataByteOrderMaxValue, 1,
   (char*)"V.GetDataByteOrderMaxValue() -> int\nC++: int GetDataByteOrderMaxValue()\n\nIf the file type is binary, then the user can specify which byte\norder to use (little versus big endian).\n"},
  {(char*)"GetDataByteOrder", PyvtkPLYWriter_GetDataByteOrder, 1,
   (char*)"V.GetDataByteOrder() -> int\nC++: int GetDataByteOrder()\n\nIf the file type is binary, then the user can specify which byte\norder to use (little versus big endian).\n"},
  {(char*)"SetDataByteOrderToBigEndian", PyvtkPLYWriter_SetDataByteOrderToBigEndian, 1,
   (char*)"V.SetDataByteOrderToBigEndian()\nC++: void SetDataByteOrderToBigEndian()\n\nIf the file type is binary, then the user can specify which byte\norder to use (little versus big endian).\n"},
  {(char*)"SetDataByteOrderToLittleEndian", PyvtkPLYWriter_SetDataByteOrderToLittleEndian, 1,
   (char*)"V.SetDataByteOrderToLittleEndian()\nC++: void SetDataByteOrderToLittleEndian()\n\nIf the file type is binary, then the user can specify which byte\norder to use (little versus big endian).\n"},
  {(char*)"SetColorMode", PyvtkPLYWriter_SetColorMode, 1,
   (char*)"V.SetColorMode(int)\nC++: void SetColorMode(int a)\n\nThese methods enable the user to control how to add color into\nthe PLY output file. The default behavior is as follows. The user\nprovides the name of an array and a component number. If the type\nof the array is three components, unsigned char, then the data is\nwritten as three separate \"red\", \"green\" and \"blue\" properties.\nIf the type is not unsigned char, and a lookup table is provided,\nthen the array/component are mapped through the table to generate\nthree separate \"red\", \"green\" and \"blue\" properties in the PLY\nfile. The user can also set the ColorMode to specify a uniform\ncolor for the whole part (on a vertex colors, face colors, or\nboth. (Note: vertex colors or cell colors may be written,\ndepending on where the named array is found. If points and cells\nhave the arrays with the same name, then both colors will be\nwritten.)\n"},
  {(char*)"GetColorMode", PyvtkPLYWriter_GetColorMode, 1,
   (char*)"V.GetColorMode() -> int\nC++: int GetColorMode()\n\nThese methods enable the user to control how to add color into\nthe PLY output file. The default behavior is as follows. The user\nprovides the name of an array and a component number. If the type\nof the array is three components, unsigned char, then the data is\nwritten as three separate \"red\", \"green\" and \"blue\" properties.\nIf the type is not unsigned char, and a lookup table is provided,\nthen the array/component are mapped through the table to generate\nthree separate \"red\", \"green\" and \"blue\" properties in the PLY\nfile. The user can also set the ColorMode to specify a uniform\ncolor for the whole part (on a vertex colors, face colors, or\nboth. (Note: vertex colors or cell colors may be written,\ndepending on where the named array is found. If points and cells\nhave the arrays with the same name, then both colors will be\nwritten.)\n"},
  {(char*)"SetColorModeToDefault", PyvtkPLYWriter_SetColorModeToDefault, 1,
   (char*)"V.SetColorModeToDefault()\nC++: void SetColorModeToDefault()\n\nThese methods enable the user to control how to add color into\nthe PLY output file. The default behavior is as follows. The user\nprovides the name of an array and a component number. If the type\nof the array is three components, unsigned char, then the data is\nwritten as three separate \"red\", \"green\" and \"blue\" properties.\nIf the type is not unsigned char, and a lookup table is provided,\nthen the array/component are mapped through the table to generate\nthree separate \"red\", \"green\" and \"blue\" properties in the PLY\nfile. The user can also set the ColorMode to specify a uniform\ncolor for the whole part (on a vertex colors, face colors, or\nboth. (Note: vertex colors or cell colors may be written,\ndepending on where the named array is found. If points and cells\nhave the arrays with the same name, then both colors will be\nwritten.)\n"},
  {(char*)"SetColorModeToUniformCellColor", PyvtkPLYWriter_SetColorModeToUniformCellColor, 1,
   (char*)"V.SetColorModeToUniformCellColor()\nC++: void SetColorModeToUniformCellColor()\n\nThese methods enable the user to control how to add color into\nthe PLY output file. The default behavior is as follows. The user\nprovides the name of an array and a component number. If the type\nof the array is three components, unsigned char, then the data is\nwritten as three separate \"red\", \"green\" and \"blue\" properties.\nIf the type is not unsigned char, and a lookup table is provided,\nthen the array/component are mapped through the table to generate\nthree separate \"red\", \"green\" and \"blue\" properties in the PLY\nfile. The user can also set the ColorMode to specify a uniform\ncolor for the whole part (on a vertex colors, face colors, or\nboth. (Note: vertex colors or cell colors may be written,\ndepending on where the named array is found. If points and cells\nhave the arrays with the same name, then both colors will be\nwritten.)\n"},
  {(char*)"SetColorModeToUniformPointColor", PyvtkPLYWriter_SetColorModeToUniformPointColor, 1,
   (char*)"V.SetColorModeToUniformPointColor()\nC++: void SetColorModeToUniformPointColor()\n\nThese methods enable the user to control how to add color into\nthe PLY output file. The default behavior is as follows. The user\nprovides the name of an array and a component number. If the type\nof the array is three components, unsigned char, then the data is\nwritten as three separate \"red\", \"green\" and \"blue\" properties.\nIf the type is not unsigned char, and a lookup table is provided,\nthen the array/component are mapped through the table to generate\nthree separate \"red\", \"green\" and \"blue\" properties in the PLY\nfile. The user can also set the ColorMode to specify a uniform\ncolor for the whole part (on a vertex colors, face colors, or\nboth. (Note: vertex colors or cell colors may be written,\ndepending on where the named array is found. If points and cells\nhave the arrays with the same name, then both colors will be\nwritten.)\n"},
  {(char*)"SetColorModeToUniformColor", PyvtkPLYWriter_SetColorModeToUniformColor, 1,
   (char*)"V.SetColorModeToUniformColor()\nC++: void SetColorModeToUniformColor()\n\nThese methods enable the user to control how to add color into\nthe PLY output file. The default behavior is as follows. The user\nprovides the name of an array and a component number. If the type\nof the array is three components, unsigned char, then the data is\nwritten as three separate \"red\", \"green\" and \"blue\" properties.\nIf the type is not unsigned char, and a lookup table is provided,\nthen the array/component are mapped through the table to generate\nthree separate \"red\", \"green\" and \"blue\" properties in the PLY\nfile. The user can also set the ColorMode to specify a uniform\ncolor for the whole part (on a vertex colors, face colors, or\nboth. (Note: vertex colors or cell colors may be written,\ndepending on where the named array is found. If points and cells\nhave the arrays with the same name, then both colors will be\nwritten.)\n"},
  {(char*)"SetColorModeToOff", PyvtkPLYWriter_SetColorModeToOff, 1,
   (char*)"V.SetColorModeToOff()\nC++: void SetColorModeToOff()\n\nThese methods enable the user to control how to add color into\nthe PLY output file. The default behavior is as follows. The user\nprovides the name of an array and a component number. If the type\nof the array is three components, unsigned char, then the data is\nwritten as three separate \"red\", \"green\" and \"blue\" properties.\nIf the type is not unsigned char, and a lookup table is provided,\nthen the array/component are mapped through the table to generate\nthree separate \"red\", \"green\" and \"blue\" properties in the PLY\nfile. The user can also set the ColorMode to specify a uniform\ncolor for the whole part (on a vertex colors, face colors, or\nboth. (Note: vertex colors or cell colors may be written,\ndepending on where the named array is found. If points and cells\nhave the arrays with the same name, then both colors will be\nwritten.)\n"},
  {(char*)"SetArrayName", PyvtkPLYWriter_SetArrayName, 1,
   (char*)"V.SetArrayName(string)\nC++: void SetArrayName(char *)\n\nSpecify the array name to use to color the data.\n"},
  {(char*)"GetArrayName", PyvtkPLYWriter_GetArrayName, 1,
   (char*)"V.GetArrayName() -> string\nC++: char *GetArrayName()\n\nSpecify the array name to use to color the data.\n"},
  {(char*)"SetComponent", PyvtkPLYWriter_SetComponent, 1,
   (char*)"V.SetComponent(int)\nC++: void SetComponent(int)\n\nSpecify the array component to use to color the data.\n"},
  {(char*)"GetComponentMinValue", PyvtkPLYWriter_GetComponentMinValue, 1,
   (char*)"V.GetComponentMinValue() -> int\nC++: int GetComponentMinValue()\n\nSpecify the array component to use to color the data.\n"},
  {(char*)"GetComponentMaxValue", PyvtkPLYWriter_GetComponentMaxValue, 1,
   (char*)"V.GetComponentMaxValue() -> int\nC++: int GetComponentMaxValue()\n\nSpecify the array component to use to color the data.\n"},
  {(char*)"GetComponent", PyvtkPLYWriter_GetComponent, 1,
   (char*)"V.GetComponent() -> int\nC++: int GetComponent()\n\nSpecify the array component to use to color the data.\n"},
  {(char*)"SetLookupTable", PyvtkPLYWriter_SetLookupTable, 1,
   (char*)"V.SetLookupTable(vtkScalarsToColors)\nC++: virtual void SetLookupTable(vtkScalarsToColors *)\n\nA lookup table can be specified in order to convert data arrays\nto RGBA colors.\n"},
  {(char*)"GetLookupTable", PyvtkPLYWriter_GetLookupTable, 1,
   (char*)"V.GetLookupTable() -> vtkScalarsToColors\nC++: vtkScalarsToColors *GetLookupTable()\n\nA lookup table can be specified in order to convert data arrays\nto RGBA colors.\n"},
  {(char*)"SetColor", PyvtkPLYWriter_SetColor, 1,
   (char*)"V.SetColor(int, int, int)\nC++: void SetColor(unsigned char, unsigned char, unsigned char)\nV.SetColor((int, int, int))\nC++: void SetColor(unsigned char a[3])\n\n"},
  {(char*)"GetColor", PyvtkPLYWriter_GetColor, 1,
   (char*)"V.GetColor() -> (int, int, int)\nC++: unsigned char *GetColor()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPLYWriter_StaticNew()
{
  return vtkPLYWriter::New();
}

PyObject *PyVTKClass_vtkPLYWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPLYWriter_StaticNew,
    PyvtkPLYWriter_Methods,
    "vtkPLYWriter", modulename,
    NULL, NULL,
    PyvtkPLYWriter_Doc(),
    PyVTKClass_vtkPolyDataWriterNew(modulename));
  return cls;
}

const char **PyvtkPLYWriter_Doc()
{
  static const char *docstring[] = {
    "vtkPLYWriter - write Stanford PLY file format\n\n",
    "Superclass: vtkPolyDataWriter\n\n",
    "vtkPLYWriter writes polygonal data in Stanford University PLY format\n(see http://graphics.stanford.edu/data/3Dscanrep/). The data can be\nwritten in either binary (little or big endian) or ASCII\nrepresentation. As for PointData and CellData, vtkPLYWriter cannot\nhandle normals or vectors. It only handles RGB PointData and\nCellData. You need to set the name of the array (using SetName for\nthe array a",
    "nd SetArrayName for the writer). If the array is not a\nvtkUnsignedCharArray with 3 components, you need to specify a\nvtkLookupTable to map the scalars to RGB.\n\nCaveats:\n\nPLY does not handle big endian versus little endian correctly.\n\nSee Also:\n\nvtkPLYReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPLYWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPLYWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPLYWriter", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_LITTLE_ENDIAN", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_BIG_ENDIAN", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_COLOR_MODE_UNIFORM_CELL_COLOR", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_COLOR_MODE_UNIFORM_POINT_COLOR", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(3);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_COLOR_MODE_UNIFORM_COLOR", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(4);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_COLOR_MODE_OFF", o) != 0)
    {
    Py_DECREF(o);
    }

}

