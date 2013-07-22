// python wrapper for vtkNetCDFReader
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
#include "vtkNetCDFReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkNetCDFReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkNetCDFReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkNetCDFReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkNetCDFReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
#endif

static const char **PyvtkNetCDFReader_Doc();


static PyObject *
PyvtkNetCDFReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

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
      tempr = op->vtkNetCDFReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

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
      tempr = op->vtkNetCDFReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  vtkNetCDFReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkNetCDFReader::NewInstance();
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
PyvtkNetCDFReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkNetCDFReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkNetCDFReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileName(temp0);
      }
    else
      {
      op->vtkNetCDFReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFileName();
      }
    else
      {
      tempr = op->vtkNetCDFReader::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFReader_UpdateMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->UpdateMetaData();
      }
    else
      {
      tempr = op->vtkNetCDFReader::UpdateMetaData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFReader_GetNumberOfVariableArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVariableArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfVariableArrays();
      }
    else
      {
      tempr = op->vtkNetCDFReader::GetNumberOfVariableArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFReader_GetVariableArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariableArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVariableArrayName(temp0);
      }
    else
      {
      tempr = op->vtkNetCDFReader::GetVariableArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFReader_GetVariableArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariableArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVariableArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkNetCDFReader::GetVariableArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFReader_SetVariableArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariableArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetVariableArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkNetCDFReader::SetVariableArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFReader_GetAllVariableArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllVariableArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  vtkStringArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAllVariableArrayNames();
      }
    else
      {
      tempr = op->vtkNetCDFReader::GetAllVariableArrayNames();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFReader_GetVariableDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariableDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  vtkStringArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVariableDimensions();
      }
    else
      {
      tempr = op->vtkNetCDFReader::GetVariableDimensions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFReader_SetDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDimensions(temp0);
      }
    else
      {
      op->vtkNetCDFReader::SetDimensions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFReader_GetAllDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  vtkStringArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAllDimensions();
      }
    else
      {
      tempr = op->vtkNetCDFReader::GetAllDimensions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFReader_GetReplaceFillValueWithNan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReplaceFillValueWithNan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetReplaceFillValueWithNan();
      }
    else
      {
      tempr = op->vtkNetCDFReader::GetReplaceFillValueWithNan();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFReader_SetReplaceFillValueWithNan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReplaceFillValueWithNan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReplaceFillValueWithNan(temp0);
      }
    else
      {
      op->vtkNetCDFReader::SetReplaceFillValueWithNan(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFReader_ReplaceFillValueWithNanOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceFillValueWithNanOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReplaceFillValueWithNanOn();
      }
    else
      {
      op->vtkNetCDFReader::ReplaceFillValueWithNanOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFReader_ReplaceFillValueWithNanOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceFillValueWithNanOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReplaceFillValueWithNanOff();
      }
    else
      {
      op->vtkNetCDFReader::ReplaceFillValueWithNanOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkNetCDFReader_Methods[] = {
  {(char*)"GetClassName", PyvtkNetCDFReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkNetCDFReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkNetCDFReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkNetCDFReader\nC++: vtkNetCDFReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkNetCDFReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkNetCDFReader\nC++: vtkNetCDFReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkNetCDFReader_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: virtual void SetFileName(const char *filename)\n\n"},
  {(char*)"GetFileName", PyvtkNetCDFReader_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\n"},
  {(char*)"UpdateMetaData", PyvtkNetCDFReader_UpdateMetaData, 1,
   (char*)"V.UpdateMetaData() -> int\nC++: int UpdateMetaData()\n\nUpdate the meta data from the current file.  Automatically called\nduring the RequestInformation pipeline update stage.\n"},
  {(char*)"GetNumberOfVariableArrays", PyvtkNetCDFReader_GetNumberOfVariableArrays, 1,
   (char*)"V.GetNumberOfVariableArrays() -> int\nC++: virtual int GetNumberOfVariableArrays()\n\nVariable array selection.\n"},
  {(char*)"GetVariableArrayName", PyvtkNetCDFReader_GetVariableArrayName, 1,
   (char*)"V.GetVariableArrayName(int) -> string\nC++: virtual const char *GetVariableArrayName(int idx)\n\nVariable array selection.\n"},
  {(char*)"GetVariableArrayStatus", PyvtkNetCDFReader_GetVariableArrayStatus, 1,
   (char*)"V.GetVariableArrayStatus(string) -> int\nC++: virtual int GetVariableArrayStatus(const char *name)\n\nVariable array selection.\n"},
  {(char*)"SetVariableArrayStatus", PyvtkNetCDFReader_SetVariableArrayStatus, 1,
   (char*)"V.SetVariableArrayStatus(string, int)\nC++: virtual void SetVariableArrayStatus(const char *name,\n    int status)\n\nVariable array selection.\n"},
  {(char*)"GetAllVariableArrayNames", PyvtkNetCDFReader_GetAllVariableArrayNames, 1,
   (char*)"V.GetAllVariableArrayNames() -> vtkStringArray\nC++: virtual vtkStringArray *GetAllVariableArrayNames()\n\nConvenience method to get a list of variable arrays.  The length\nof the returned list is the same as GetNumberOfVariableArrays,\nand the string at each index i is the same as returned from\nGetVariableArrayname(i).\n"},
  {(char*)"GetVariableDimensions", PyvtkNetCDFReader_GetVariableDimensions, 1,
   (char*)"V.GetVariableDimensions() -> vtkStringArray\nC++: vtkStringArray *GetVariableDimensions()\n\nReturns an array with string encodings for the dimensions used in\neach of the variables.  The indices in the returned array\ncorrespond to those used in the GetVariableArrayName method.  Two\narrays with the same dimensions will have the same encoded string\nreturned by this method.\n"},
  {(char*)"SetDimensions", PyvtkNetCDFReader_SetDimensions, 1,
   (char*)"V.SetDimensions(string)\nC++: virtual void SetDimensions(const char *dimensions)\n\nLoads the grid with the given dimensions.  The dimensions are\nencoded in a string that conforms to the same format as returned\nby GetVariableDimensions and GetAllDimensions.  This method is\nreally a convenience method for SetVariableArrayStatus.  It turns\non all variables that have the given dimensions and turns off all\nother variables.\n"},
  {(char*)"GetAllDimensions", PyvtkNetCDFReader_GetAllDimensions, 1,
   (char*)"V.GetAllDimensions() -> vtkStringArray\nC++: vtkStringArray *GetAllDimensions()\n\nReturns an array with string encodings for the dimension\ncombinations used in the variables.  The result is the same as\nGetVariableDimensions except that each entry in the array is\nunique (a set of dimensions is only given once even if it occurs\nfor multiple variables) and the order is meaningless.\n"},
  {(char*)"GetReplaceFillValueWithNan", PyvtkNetCDFReader_GetReplaceFillValueWithNan, 1,
   (char*)"V.GetReplaceFillValueWithNan() -> int\nC++: int GetReplaceFillValueWithNan()\n\nIf on, any float or double variable read that has a _FillValue\nattribute will have that fill value replaced with a not-a-number\n(NaN) value.  The advantage of setting these to NaN values is\nthat, if implemented properly by the system and careful math\noperations are used, they can implicitly be ignored by\ncalculations like finding the range of the values.  That said,\nthis option should be used with caution as VTK does not fully\nsupport NaN values and therefore odd calculations may occur.  By\ndefault this is off.\n"},
  {(char*)"SetReplaceFillValueWithNan", PyvtkNetCDFReader_SetReplaceFillValueWithNan, 1,
   (char*)"V.SetReplaceFillValueWithNan(int)\nC++: void SetReplaceFillValueWithNan(int a)\n\nIf on, any float or double variable read that has a _FillValue\nattribute will have that fill value replaced with a not-a-number\n(NaN) value.  The advantage of setting these to NaN values is\nthat, if implemented properly by the system and careful math\noperations are used, they can implicitly be ignored by\ncalculations like finding the range of the values.  That said,\nthis option should be used with caution as VTK does not fully\nsupport NaN values and therefore odd calculations may occur.  By\ndefault this is off.\n"},
  {(char*)"ReplaceFillValueWithNanOn", PyvtkNetCDFReader_ReplaceFillValueWithNanOn, 1,
   (char*)"V.ReplaceFillValueWithNanOn()\nC++: void ReplaceFillValueWithNanOn()\n\nIf on, any float or double variable read that has a _FillValue\nattribute will have that fill value replaced with a not-a-number\n(NaN) value.  The advantage of setting these to NaN values is\nthat, if implemented properly by the system and careful math\noperations are used, they can implicitly be ignored by\ncalculations like finding the range of the values.  That said,\nthis option should be used with caution as VTK does not fully\nsupport NaN values and therefore odd calculations may occur.  By\ndefault this is off.\n"},
  {(char*)"ReplaceFillValueWithNanOff", PyvtkNetCDFReader_ReplaceFillValueWithNanOff, 1,
   (char*)"V.ReplaceFillValueWithNanOff()\nC++: void ReplaceFillValueWithNanOff()\n\nIf on, any float or double variable read that has a _FillValue\nattribute will have that fill value replaced with a not-a-number\n(NaN) value.  The advantage of setting these to NaN values is\nthat, if implemented properly by the system and careful math\noperations are used, they can implicitly be ignored by\ncalculations like finding the range of the values.  That said,\nthis option should be used with caution as VTK does not fully\nsupport NaN values and therefore odd calculations may occur.  By\ndefault this is off.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkNetCDFReader_StaticNew()
{
  return vtkNetCDFReader::New();
}

PyObject *PyVTKClass_vtkNetCDFReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkNetCDFReader_StaticNew,
    PyvtkNetCDFReader_Methods,
    "vtkNetCDFReader", modulename,
    NULL, NULL,
    PyvtkNetCDFReader_Doc(),
    PyVTKClass_vtkDataObjectAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkNetCDFReader_Doc()
{
  static const char *docstring[] = {
    "vtkNetCDFReader\n\n",
    "Superclass: vtkDataObjectAlgorithm\n\n",
    "A superclass for reading netCDF files.  Subclass add conventions to\nthe reader.  This class just outputs data into a multi block data set\nwith a vtkImageData at each block.  A block is created for each\nvariable except that variables with matching dimensions will be\nplaced in the same block.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkNetCDFReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkNetCDFReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkNetCDFReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

