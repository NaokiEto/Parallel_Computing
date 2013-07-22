// python wrapper for vtkRectilinearGridReader
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
#include "vtkRectilinearGridReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkRectilinearGridReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkRectilinearGridReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkRectilinearGridReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkRectilinearGridReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataReaderNew
extern "C" { PyObject *PyVTKClass_vtkDataReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataReaderNew
#endif

static const char **PyvtkRectilinearGridReader_Doc();


static PyObject *
PyvtkRectilinearGridReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridReader *op = static_cast<vtkRectilinearGridReader *>(vp);

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
      tempr = op->vtkRectilinearGridReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridReader *op = static_cast<vtkRectilinearGridReader *>(vp);

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
      tempr = op->vtkRectilinearGridReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridReader *op = static_cast<vtkRectilinearGridReader *>(vp);

  vtkRectilinearGridReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkRectilinearGridReader::NewInstance();
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
PyvtkRectilinearGridReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkRectilinearGridReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkRectilinearGridReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridReader *op = static_cast<vtkRectilinearGridReader *>(vp);

  vtkRectilinearGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput();
      }
    else
      {
      tempr = op->vtkRectilinearGridReader::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRectilinearGridReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridReader *op = static_cast<vtkRectilinearGridReader *>(vp);

  int temp0;
  vtkRectilinearGrid *tempr;
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
      tempr = op->vtkRectilinearGridReader::GetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRectilinearGridReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkRectilinearGridReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkRectilinearGridReader_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}



static PyObject *
PyvtkRectilinearGridReader_SetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridReader *op = static_cast<vtkRectilinearGridReader *>(vp);

  vtkRectilinearGrid *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRectilinearGrid"))
    {
    if (ap.IsBound())
      {
      op->SetOutput(temp0);
      }
    else
      {
      op->vtkRectilinearGridReader::SetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridReader_ReadMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridReader *op = static_cast<vtkRectilinearGridReader *>(vp);

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
      tempr = op->vtkRectilinearGridReader::ReadMetaData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkRectilinearGridReader_Methods[] = {
  {(char*)"GetClassName", PyvtkRectilinearGridReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRectilinearGridReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRectilinearGridReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkRectilinearGridReader\nC++: vtkRectilinearGridReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRectilinearGridReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRectilinearGridReader\nC++: vtkRectilinearGridReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutput", PyvtkRectilinearGridReader_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkRectilinearGrid\nC++: vtkRectilinearGrid *GetOutput()\nV.GetOutput(int) -> vtkRectilinearGrid\nC++: vtkRectilinearGrid *GetOutput(int idx)\n\nGet and set the output of this reader.\n"},
  {(char*)"SetOutput", PyvtkRectilinearGridReader_SetOutput, 1,
   (char*)"V.SetOutput(vtkRectilinearGrid)\nC++: void SetOutput(vtkRectilinearGrid *output)\n\nGet and set the output of this reader.\n"},
  {(char*)"ReadMetaData", PyvtkRectilinearGridReader_ReadMetaData, 1,
   (char*)"V.ReadMetaData(vtkInformation) -> int\nC++: virtual int ReadMetaData(vtkInformation *outInfo)\n\nRead the meta information from the file.  This needs to be public\nto it can be accessed by vtkDataSetReader.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRectilinearGridReader_StaticNew()
{
  return vtkRectilinearGridReader::New();
}

PyObject *PyVTKClass_vtkRectilinearGridReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRectilinearGridReader_StaticNew,
    PyvtkRectilinearGridReader_Methods,
    "vtkRectilinearGridReader", modulename,
    NULL, NULL,
    PyvtkRectilinearGridReader_Doc(),
    PyVTKClass_vtkDataReaderNew(modulename));
  return cls;
}

const char **PyvtkRectilinearGridReader_Doc()
{
  static const char *docstring[] = {
    "vtkRectilinearGridReader - read vtk rectilinear grid data file\n\n",
    "Superclass: vtkDataReader\n\n",
    "vtkRectilinearGridReader is a source object that reads ASCII or\nbinary rectilinear grid data files in vtk format (see text for format\ndetails). The output of this reader is a single vtkRectilinearGrid\ndata object. The superclass of this class, vtkDataReader, provides\nmany methods for controlling the reading of the data file, see\nvtkDataReader for more information.\n\nCaveats:\n\nBinary files written o",
    "n one system may not be readable on other\nsystems.\n\nSee Also:\n\nvtkRectilinearGrid vtkDataReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRectilinearGridReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRectilinearGridReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRectilinearGridReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

