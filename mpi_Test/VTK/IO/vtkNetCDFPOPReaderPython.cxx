// python wrapper for vtkNetCDFPOPReader
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
#include "vtkNetCDFPOPReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkNetCDFPOPReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkNetCDFPOPReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkNetCDFPOPReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkNetCDFPOPReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkRectilinearGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkRectilinearGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkRectilinearGridAlgorithmNew
#endif

static const char **PyvtkNetCDFPOPReader_Doc();


static PyObject *
PyvtkNetCDFPOPReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFPOPReader *op = static_cast<vtkNetCDFPOPReader *>(vp);

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
      tempr = op->vtkNetCDFPOPReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFPOPReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFPOPReader *op = static_cast<vtkNetCDFPOPReader *>(vp);

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
      tempr = op->vtkNetCDFPOPReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFPOPReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFPOPReader *op = static_cast<vtkNetCDFPOPReader *>(vp);

  vtkNetCDFPOPReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkNetCDFPOPReader::NewInstance();
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
PyvtkNetCDFPOPReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkNetCDFPOPReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkNetCDFPOPReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFPOPReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFPOPReader *op = static_cast<vtkNetCDFPOPReader *>(vp);

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
      op->vtkNetCDFPOPReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFPOPReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFPOPReader *op = static_cast<vtkNetCDFPOPReader *>(vp);

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
      tempr = op->vtkNetCDFPOPReader::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFPOPReader_SetStride_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFPOPReader *op = static_cast<vtkNetCDFPOPReader *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetStride(temp0, temp1, temp2);
      }
    else
      {
      op->vtkNetCDFPOPReader::SetStride(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkNetCDFPOPReader_SetStride_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFPOPReader *op = static_cast<vtkNetCDFPOPReader *>(vp);

  int temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetStride(temp0);
      }
    else
      {
      op->vtkNetCDFPOPReader::SetStride(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkNetCDFPOPReader_SetStride(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkNetCDFPOPReader_SetStride_s1(self, args);
    case 1:
      return PyvtkNetCDFPOPReader_SetStride_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetStride");
  return NULL;
}



static PyObject *
PyvtkNetCDFPOPReader_GetStride(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFPOPReader *op = static_cast<vtkNetCDFPOPReader *>(vp);

  int *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStride();
      }
    else
      {
      tempr = op->vtkNetCDFPOPReader::GetStride();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFPOPReader_GetNumberOfVariableArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVariableArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFPOPReader *op = static_cast<vtkNetCDFPOPReader *>(vp);

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
      tempr = op->vtkNetCDFPOPReader::GetNumberOfVariableArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFPOPReader_GetVariableArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariableArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFPOPReader *op = static_cast<vtkNetCDFPOPReader *>(vp);

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
      tempr = op->vtkNetCDFPOPReader::GetVariableArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFPOPReader_GetVariableArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariableArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFPOPReader *op = static_cast<vtkNetCDFPOPReader *>(vp);

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
      tempr = op->vtkNetCDFPOPReader::GetVariableArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFPOPReader_SetVariableArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariableArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFPOPReader *op = static_cast<vtkNetCDFPOPReader *>(vp);

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
      op->vtkNetCDFPOPReader::SetVariableArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkNetCDFPOPReader_Methods[] = {
  {(char*)"GetClassName", PyvtkNetCDFPOPReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkNetCDFPOPReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkNetCDFPOPReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkNetCDFPOPReader\nC++: vtkNetCDFPOPReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkNetCDFPOPReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkNetCDFPOPReader\nC++: vtkNetCDFPOPReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkNetCDFPOPReader_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\n"},
  {(char*)"GetFileName", PyvtkNetCDFPOPReader_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\n"},
  {(char*)"SetStride", PyvtkNetCDFPOPReader_SetStride, 1,
   (char*)"V.SetStride(int, int, int)\nC++: void SetStride(int, int, int)\nV.SetStride((int, int, int))\nC++: void SetStride(int a[3])\n\n"},
  {(char*)"GetStride", PyvtkNetCDFPOPReader_GetStride, 1,
   (char*)"V.GetStride() -> (int, int, int)\nC++: int *GetStride()\n\n"},
  {(char*)"GetNumberOfVariableArrays", PyvtkNetCDFPOPReader_GetNumberOfVariableArrays, 1,
   (char*)"V.GetNumberOfVariableArrays() -> int\nC++: virtual int GetNumberOfVariableArrays()\n\nVariable array selection.\n"},
  {(char*)"GetVariableArrayName", PyvtkNetCDFPOPReader_GetVariableArrayName, 1,
   (char*)"V.GetVariableArrayName(int) -> string\nC++: virtual const char *GetVariableArrayName(int idx)\n\nVariable array selection.\n"},
  {(char*)"GetVariableArrayStatus", PyvtkNetCDFPOPReader_GetVariableArrayStatus, 1,
   (char*)"V.GetVariableArrayStatus(string) -> int\nC++: virtual int GetVariableArrayStatus(const char *name)\n\nVariable array selection.\n"},
  {(char*)"SetVariableArrayStatus", PyvtkNetCDFPOPReader_SetVariableArrayStatus, 1,
   (char*)"V.SetVariableArrayStatus(string, int)\nC++: virtual void SetVariableArrayStatus(const char *name,\n    int status)\n\nVariable array selection.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkNetCDFPOPReader_StaticNew()
{
  return vtkNetCDFPOPReader::New();
}

PyObject *PyVTKClass_vtkNetCDFPOPReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkNetCDFPOPReader_StaticNew,
    PyvtkNetCDFPOPReader_Methods,
    "vtkNetCDFPOPReader", modulename,
    NULL, NULL,
    PyvtkNetCDFPOPReader_Doc(),
    PyVTKClass_vtkRectilinearGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkNetCDFPOPReader_Doc()
{
  static const char *docstring[] = {
    "vtkNetCDFPOPReader - read NetCDF files\n\n",
    "Superclass: vtkRectilinearGridAlgorithm\n\n",
    "vtkNetCDFPOPReader is a source object that reads NetCDF files. It\nshould be able to read most any NetCDF file that wants to output a\nrectilinear grid.  The ordering of the variables is changed such that\nthe NetCDF x, y, z directions correspond to the vtkRectilinearGrid z,\ny, x directions, respectively.  The striding is done with respect to\nthe vtkRectilinearGrid ordering.  Additionally, the z coor",
    "dinates of\nthe vtkRectilinearGrid are negated so that the first slice/plane has\nthe highest z-value and the last slice/plane has the lowest z-value.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkNetCDFPOPReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkNetCDFPOPReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkNetCDFPOPReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

