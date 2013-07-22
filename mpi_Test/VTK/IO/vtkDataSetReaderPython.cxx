// python wrapper for vtkDataSetReader
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
#include "vtkDataSetReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDataSetReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDataSetReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDataSetReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDataSetReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataReaderNew
extern "C" { PyObject *PyVTKClass_vtkDataReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataReaderNew
#endif

static const char **PyvtkDataSetReader_Doc();


static PyObject *
PyvtkDataSetReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetReader *op = static_cast<vtkDataSetReader *>(vp);

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
      tempr = op->vtkDataSetReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetReader *op = static_cast<vtkDataSetReader *>(vp);

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
      tempr = op->vtkDataSetReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetReader *op = static_cast<vtkDataSetReader *>(vp);

  vtkDataSetReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDataSetReader::NewInstance();
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
PyvtkDataSetReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDataSetReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDataSetReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetReader *op = static_cast<vtkDataSetReader *>(vp);

  vtkDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput();
      }
    else
      {
      tempr = op->vtkDataSetReader::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataSetReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetReader *op = static_cast<vtkDataSetReader *>(vp);

  int temp0;
  vtkDataSet *tempr;
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
      tempr = op->vtkDataSetReader::GetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataSetReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkDataSetReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkDataSetReader_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}



static PyObject *
PyvtkDataSetReader_GetPolyDataOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyDataOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetReader *op = static_cast<vtkDataSetReader *>(vp);

  vtkPolyData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPolyDataOutput();
      }
    else
      {
      tempr = op->vtkDataSetReader::GetPolyDataOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetReader_GetStructuredPointsOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStructuredPointsOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetReader *op = static_cast<vtkDataSetReader *>(vp);

  vtkStructuredPoints *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStructuredPointsOutput();
      }
    else
      {
      tempr = op->vtkDataSetReader::GetStructuredPointsOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetReader_GetStructuredGridOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStructuredGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetReader *op = static_cast<vtkDataSetReader *>(vp);

  vtkStructuredGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStructuredGridOutput();
      }
    else
      {
      tempr = op->vtkDataSetReader::GetStructuredGridOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetReader_GetUnstructuredGridOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnstructuredGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetReader *op = static_cast<vtkDataSetReader *>(vp);

  vtkUnstructuredGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUnstructuredGridOutput();
      }
    else
      {
      tempr = op->vtkDataSetReader::GetUnstructuredGridOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetReader_GetRectilinearGridOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRectilinearGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetReader *op = static_cast<vtkDataSetReader *>(vp);

  vtkRectilinearGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRectilinearGridOutput();
      }
    else
      {
      tempr = op->vtkDataSetReader::GetRectilinearGridOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetReader_ReadOutputType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadOutputType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetReader *op = static_cast<vtkDataSetReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->ReadOutputType();
      }
    else
      {
      tempr = op->vtkDataSetReader::ReadOutputType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDataSetReader_Methods[] = {
  {(char*)"GetClassName", PyvtkDataSetReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataSetReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataSetReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDataSetReader\nC++: vtkDataSetReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDataSetReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDataSetReader\nC++: vtkDataSetReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutput", PyvtkDataSetReader_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkDataSet\nC++: vtkDataSet *GetOutput()\nV.GetOutput(int) -> vtkDataSet\nC++: vtkDataSet *GetOutput(int idx)\n\nGet the output of this filter\n"},
  {(char*)"GetPolyDataOutput", PyvtkDataSetReader_GetPolyDataOutput, 1,
   (char*)"V.GetPolyDataOutput() -> vtkPolyData\nC++: vtkPolyData *GetPolyDataOutput()\n\nGet the output as various concrete types. This method is\ntypically used when you know exactly what type of data is being\nread.  Otherwise, use the general GetOutput() method. If the\nwrong type is used NULL is returned.  (You must also set the\nfilename of the object prior to getting the output.)\n"},
  {(char*)"GetStructuredPointsOutput", PyvtkDataSetReader_GetStructuredPointsOutput, 1,
   (char*)"V.GetStructuredPointsOutput() -> vtkStructuredPoints\nC++: vtkStructuredPoints *GetStructuredPointsOutput()\n\nGet the output as various concrete types. This method is\ntypically used when you know exactly what type of data is being\nread.  Otherwise, use the general GetOutput() method. If the\nwrong type is used NULL is returned.  (You must also set the\nfilename of the object prior to getting the output.)\n"},
  {(char*)"GetStructuredGridOutput", PyvtkDataSetReader_GetStructuredGridOutput, 1,
   (char*)"V.GetStructuredGridOutput() -> vtkStructuredGrid\nC++: vtkStructuredGrid *GetStructuredGridOutput()\n\nGet the output as various concrete types. This method is\ntypically used when you know exactly what type of data is being\nread.  Otherwise, use the general GetOutput() method. If the\nwrong type is used NULL is returned.  (You must also set the\nfilename of the object prior to getting the output.)\n"},
  {(char*)"GetUnstructuredGridOutput", PyvtkDataSetReader_GetUnstructuredGridOutput, 1,
   (char*)"V.GetUnstructuredGridOutput() -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetUnstructuredGridOutput()\n\nGet the output as various concrete types. This method is\ntypically used when you know exactly what type of data is being\nread.  Otherwise, use the general GetOutput() method. If the\nwrong type is used NULL is returned.  (You must also set the\nfilename of the object prior to getting the output.)\n"},
  {(char*)"GetRectilinearGridOutput", PyvtkDataSetReader_GetRectilinearGridOutput, 1,
   (char*)"V.GetRectilinearGridOutput() -> vtkRectilinearGrid\nC++: vtkRectilinearGrid *GetRectilinearGridOutput()\n\nGet the output as various concrete types. This method is\ntypically used when you know exactly what type of data is being\nread.  Otherwise, use the general GetOutput() method. If the\nwrong type is used NULL is returned.  (You must also set the\nfilename of the object prior to getting the output.)\n"},
  {(char*)"ReadOutputType", PyvtkDataSetReader_ReadOutputType, 1,
   (char*)"V.ReadOutputType() -> int\nC++: virtual int ReadOutputType()\n\nThis method can be used to find out the type of output expected\nwithout needing to read the whole file.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDataSetReader_StaticNew()
{
  return vtkDataSetReader::New();
}

PyObject *PyVTKClass_vtkDataSetReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDataSetReader_StaticNew,
    PyvtkDataSetReader_Methods,
    "vtkDataSetReader", modulename,
    NULL, NULL,
    PyvtkDataSetReader_Doc(),
    PyVTKClass_vtkDataReaderNew(modulename));
  return cls;
}

const char **PyvtkDataSetReader_Doc()
{
  static const char *docstring[] = {
    "vtkDataSetReader - class to read any type of vtk dataset\n\n",
    "Superclass: vtkDataReader\n\n",
    "vtkDataSetReader is a class that provides instance variables and\nmethods to read any type of dataset in Visualization Toolkit (vtk)\nformat.  The output type of this class will vary depending upon the\ntype of data file. Convenience methods are provided to keep the data\nas a particular type. (See text for format description details). The\nsuperclass of this class, vtkDataReader, provides many methods",
    " for\ncontrolling the reading of the data file, see vtkDataReader for more\ninformation.\n\nCaveats:\n\nBinary files written on one system may not be readable on other\nsystems.\n\nSee Also:\n\nvtkDataReader vtkPolyDataReader vtkRectilinearGridReader\nvtkStructuredPointsReader vtkStructuredGridReader\nvtkUnstructuredGridReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataSetReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataSetReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataSetReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

