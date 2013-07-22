// python wrapper for vtkWindBladeReader
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
#include "vtkWindBladeReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkWindBladeReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkWindBladeReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkWindBladeReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkWindBladeReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkStructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkStructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkStructuredGridAlgorithmNew
#endif

static const char **PyvtkWindBladeReader_Doc();


static PyObject *
PyvtkWindBladeReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

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
      tempr = op->vtkWindBladeReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindBladeReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

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
      tempr = op->vtkWindBladeReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindBladeReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  vtkWindBladeReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkWindBladeReader::NewInstance();
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
PyvtkWindBladeReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkWindBladeReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkWindBladeReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindBladeReader_SetFilename(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilename");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFilename(temp0);
      }
    else
      {
      op->vtkWindBladeReader::SetFilename(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindBladeReader_GetFilename(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilename");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFilename();
      }
    else
      {
      tempr = op->vtkWindBladeReader::GetFilename();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindBladeReader_SetWholeExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkWindBladeReader::SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkWindBladeReader_SetWholeExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  int temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetWholeExtent(temp0);
      }
    else
      {
      op->vtkWindBladeReader::SetWholeExtent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkWindBladeReader_SetWholeExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkWindBladeReader_SetWholeExtent_s1(self, args);
    case 1:
      return PyvtkWindBladeReader_SetWholeExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetWholeExtent");
  return NULL;
}



static PyObject *
PyvtkWindBladeReader_GetWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  int *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWholeExtent();
      }
    else
      {
      tempr = op->vtkWindBladeReader::GetWholeExtent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkWindBladeReader_SetSubExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetSubExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkWindBladeReader::SetSubExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkWindBladeReader_SetSubExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  int temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetSubExtent(temp0);
      }
    else
      {
      op->vtkWindBladeReader::SetSubExtent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkWindBladeReader_SetSubExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkWindBladeReader_SetSubExtent_s1(self, args);
    case 1:
      return PyvtkWindBladeReader_SetSubExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSubExtent");
  return NULL;
}



static PyObject *
PyvtkWindBladeReader_GetSubExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  int *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSubExtent();
      }
    else
      {
      tempr = op->vtkWindBladeReader::GetSubExtent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkWindBladeReader_GetFieldOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  vtkStructuredGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFieldOutput();
      }
    else
      {
      tempr = op->vtkWindBladeReader::GetFieldOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindBladeReader_GetBladeOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBladeOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  vtkUnstructuredGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBladeOutput();
      }
    else
      {
      tempr = op->vtkWindBladeReader::GetBladeOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindBladeReader_GetGroundOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGroundOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  vtkStructuredGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGroundOutput();
      }
    else
      {
      tempr = op->vtkWindBladeReader::GetGroundOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindBladeReader_GetNumberOfPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfPointArrays();
      }
    else
      {
      tempr = op->vtkWindBladeReader::GetNumberOfPointArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindBladeReader_GetPointArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointArrayName(temp0);
      }
    else
      {
      tempr = op->vtkWindBladeReader::GetPointArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindBladeReader_GetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkWindBladeReader::GetPointArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindBladeReader_SetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPointArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkWindBladeReader::SetPointArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindBladeReader_DisableAllPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DisableAllPointArrays();
      }
    else
      {
      op->vtkWindBladeReader::DisableAllPointArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindBladeReader_EnableAllPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableAllPointArrays();
      }
    else
      {
      op->vtkWindBladeReader::EnableAllPointArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkWindBladeReader_Methods[] = {
  {(char*)"GetClassName", PyvtkWindBladeReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkWindBladeReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkWindBladeReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkWindBladeReader\nC++: vtkWindBladeReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkWindBladeReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkWindBladeReader\nC++: vtkWindBladeReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFilename", PyvtkWindBladeReader_SetFilename, 1,
   (char*)"V.SetFilename(string)\nC++: void SetFilename(char *)\n\n"},
  {(char*)"GetFilename", PyvtkWindBladeReader_GetFilename, 1,
   (char*)"V.GetFilename() -> string\nC++: char *GetFilename()\n\n"},
  {(char*)"SetWholeExtent", PyvtkWindBladeReader_SetWholeExtent, 1,
   (char*)"V.SetWholeExtent(int, int, int, int, int, int)\nC++: void SetWholeExtent(int, int, int, int, int, int)\nV.SetWholeExtent((int, int, int, int, int, int))\nC++: void SetWholeExtent(int a[6])\n\n"},
  {(char*)"GetWholeExtent", PyvtkWindBladeReader_GetWholeExtent, 1,
   (char*)"V.GetWholeExtent() -> (int, int, int, int, int, int)\nC++: int *GetWholeExtent()\n\n"},
  {(char*)"SetSubExtent", PyvtkWindBladeReader_SetSubExtent, 1,
   (char*)"V.SetSubExtent(int, int, int, int, int, int)\nC++: void SetSubExtent(int, int, int, int, int, int)\nV.SetSubExtent((int, int, int, int, int, int))\nC++: void SetSubExtent(int a[6])\n\n"},
  {(char*)"GetSubExtent", PyvtkWindBladeReader_GetSubExtent, 1,
   (char*)"V.GetSubExtent() -> (int, int, int, int, int, int)\nC++: int *GetSubExtent()\n\n"},
  {(char*)"GetFieldOutput", PyvtkWindBladeReader_GetFieldOutput, 1,
   (char*)"V.GetFieldOutput() -> vtkStructuredGrid\nC++: vtkStructuredGrid *GetFieldOutput()\n\nGet the reader's output\n"},
  {(char*)"GetBladeOutput", PyvtkWindBladeReader_GetBladeOutput, 1,
   (char*)"V.GetBladeOutput() -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetBladeOutput()\n\nGet the reader's output\n"},
  {(char*)"GetGroundOutput", PyvtkWindBladeReader_GetGroundOutput, 1,
   (char*)"V.GetGroundOutput() -> vtkStructuredGrid\nC++: vtkStructuredGrid *GetGroundOutput()\n\nGet the reader's output\n"},
  {(char*)"GetNumberOfPointArrays", PyvtkWindBladeReader_GetNumberOfPointArrays, 1,
   (char*)"V.GetNumberOfPointArrays() -> int\nC++: int GetNumberOfPointArrays()\n\nThe following methods allow selective reading of solutions\nfields. By default, ALL data fields on the nodes are read, but\nthis can be modified.\n"},
  {(char*)"GetPointArrayName", PyvtkWindBladeReader_GetPointArrayName, 1,
   (char*)"V.GetPointArrayName(int) -> string\nC++: const char *GetPointArrayName(int index)\n\nThe following methods allow selective reading of solutions\nfields. By default, ALL data fields on the nodes are read, but\nthis can be modified.\n"},
  {(char*)"GetPointArrayStatus", PyvtkWindBladeReader_GetPointArrayStatus, 1,
   (char*)"V.GetPointArrayStatus(string) -> int\nC++: int GetPointArrayStatus(const char *name)\n\n"},
  {(char*)"SetPointArrayStatus", PyvtkWindBladeReader_SetPointArrayStatus, 1,
   (char*)"V.SetPointArrayStatus(string, int)\nC++: void SetPointArrayStatus(const char *name, int status)\n\n"},
  {(char*)"DisableAllPointArrays", PyvtkWindBladeReader_DisableAllPointArrays, 1,
   (char*)"V.DisableAllPointArrays()\nC++: void DisableAllPointArrays()\n\n"},
  {(char*)"EnableAllPointArrays", PyvtkWindBladeReader_EnableAllPointArrays, 1,
   (char*)"V.EnableAllPointArrays()\nC++: void EnableAllPointArrays()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkWindBladeReader_StaticNew()
{
  return vtkWindBladeReader::New();
}

PyObject *PyVTKClass_vtkWindBladeReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkWindBladeReader_StaticNew,
    PyvtkWindBladeReader_Methods,
    "vtkWindBladeReader", modulename,
    NULL, NULL,
    PyvtkWindBladeReader_Doc(),
    PyVTKClass_vtkStructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkWindBladeReader_Doc()
{
  static const char *docstring[] = {
    "vtkWindBladeReader - class for reading WindBlade data files\n\n",
    "Superclass: vtkStructuredGridAlgorithm\n\n",
    "vtkWindBladeReader is a source object that reads WindBlade files\nwhich are block binary files with tags before and after each block\ngiving the number of bytes within the block.  The number of data\nvariables dumped varies.  The data is 3D rectilinear with irregular\nspacing on the Z dimension.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkWindBladeReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkWindBladeReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkWindBladeReader", o) != 0)
    {
    Py_DECREF(o);
    }

  Py_INCREF(Py_None);
  o = Py_None;
  if (o && PyDict_SetItemString(dict, (char *)"VTK_USE_MPI", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyFloat_FromDouble(287.04);
  if (o && PyDict_SetItemString(dict, (char *)"DRY_AIR_CONSTANT", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(4);
  if (o && PyDict_SetItemString(dict, (char *)"NUM_PART_SIDES", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(5);
  if (o && PyDict_SetItemString(dict, (char *)"NUM_BASE_SIDES", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(256);
  if (o && PyDict_SetItemString(dict, (char *)"LINE_SIZE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(3);
  if (o && PyDict_SetItemString(dict, (char *)"DIMENSION", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(4);
  if (o && PyDict_SetItemString(dict, (char *)"BYTES_PER_DATA", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"SCALAR", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VECTOR", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"FLOAT", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"INTEGER", o) != 0)
    {
    Py_DECREF(o);
    }

}

