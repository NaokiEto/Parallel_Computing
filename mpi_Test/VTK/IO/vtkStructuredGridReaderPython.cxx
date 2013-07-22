// python wrapper for vtkStructuredGridReader
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
#include "vtkStructuredGridReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkStructuredGridReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkStructuredGridReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkStructuredGridReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkStructuredGridReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataReaderNew
extern "C" { PyObject *PyVTKClass_vtkDataReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataReaderNew
#endif

static const char **PyvtkStructuredGridReader_Doc();


static PyObject *
PyvtkStructuredGridReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridReader *op = static_cast<vtkStructuredGridReader *>(vp);

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
      tempr = op->vtkStructuredGridReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridReader *op = static_cast<vtkStructuredGridReader *>(vp);

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
      tempr = op->vtkStructuredGridReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridReader *op = static_cast<vtkStructuredGridReader *>(vp);

  vtkStructuredGridReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkStructuredGridReader::NewInstance();
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
PyvtkStructuredGridReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkStructuredGridReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkStructuredGridReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridReader *op = static_cast<vtkStructuredGridReader *>(vp);

  vtkStructuredGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput();
      }
    else
      {
      tempr = op->vtkStructuredGridReader::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkStructuredGridReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridReader *op = static_cast<vtkStructuredGridReader *>(vp);

  int temp0;
  vtkStructuredGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput(temp0);
      }
    else
      {
      tempr = op->vtkStructuredGridReader::GetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkStructuredGridReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkStructuredGridReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkStructuredGridReader_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}



static PyObject *
PyvtkStructuredGridReader_SetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridReader *op = static_cast<vtkStructuredGridReader *>(vp);

  vtkStructuredGrid *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStructuredGrid"))
    {
    if (ap.IsBound())
      {
      op->SetOutput(temp0);
      }
    else
      {
      op->vtkStructuredGridReader::SetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridReader_ReadMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridReader *op = static_cast<vtkStructuredGridReader *>(vp);

  vtkInformation *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      tempr = op->ReadMetaData(temp0);
      }
    else
      {
      tempr = op->vtkStructuredGridReader::ReadMetaData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkStructuredGridReader_Methods[] = {
  {(char*)"GetClassName", PyvtkStructuredGridReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStructuredGridReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStructuredGridReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkStructuredGridReader\nC++: vtkStructuredGridReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStructuredGridReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStructuredGridReader\nC++: vtkStructuredGridReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutput", PyvtkStructuredGridReader_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkStructuredGrid\nC++: vtkStructuredGrid *GetOutput()\nV.GetOutput(int) -> vtkStructuredGrid\nC++: vtkStructuredGrid *GetOutput(int idx)\n\nGet the output of this reader.\n"},
  {(char*)"SetOutput", PyvtkStructuredGridReader_SetOutput, 1,
   (char*)"V.SetOutput(vtkStructuredGrid)\nC++: void SetOutput(vtkStructuredGrid *output)\n\nGet the output of this reader.\n"},
  {(char*)"ReadMetaData", PyvtkStructuredGridReader_ReadMetaData, 1,
   (char*)"V.ReadMetaData(vtkInformation) -> int\nC++: virtual int ReadMetaData(vtkInformation *outInfo)\n\nRead the meta information from the file.  This needs to be public\nto it can be accessed by vtkDataSetReader.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkStructuredGridReader_StaticNew()
{
  return vtkStructuredGridReader::New();
}

PyObject *PyVTKClass_vtkStructuredGridReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkStructuredGridReader_StaticNew,
    PyvtkStructuredGridReader_Methods,
    "vtkStructuredGridReader", modulename,
    NULL, NULL,
    PyvtkStructuredGridReader_Doc(),
    PyVTKClass_vtkDataReaderNew(modulename));
  return cls;
}

const char **PyvtkStructuredGridReader_Doc()
{
  static const char *docstring[] = {
    "vtkStructuredGridReader - read vtk structured grid data file\n\n",
    "Superclass: vtkDataReader\n\n",
    "vtkStructuredGridReader is a source object that reads ASCII or binary\nstructured grid data files in vtk format. (see text for format\ndetails). The output of this reader is a single vtkStructuredGrid\ndata object. The superclass of this class, vtkDataReader, provides\nmany methods for controlling the reading of the data file, see\nvtkDataReader for more information.\n\nCaveats:\n\nBinary files written on ",
    "one system may not be readable on other\nsystems.\n\nSee Also:\n\nvtkStructuredGrid vtkDataReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStructuredGridReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStructuredGridReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStructuredGridReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

