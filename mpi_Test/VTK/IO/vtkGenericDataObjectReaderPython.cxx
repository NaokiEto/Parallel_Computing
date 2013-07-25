// python wrapper for vtkGenericDataObjectReader
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
#include "vtkGenericDataObjectReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGenericDataObjectReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGenericDataObjectReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGenericDataObjectReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGenericDataObjectReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataReaderNew
extern "C" { PyObject *PyVTKClass_vtkDataReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataReaderNew
#endif

static const char **PyvtkGenericDataObjectReader_Doc();


static PyObject *
PyvtkGenericDataObjectReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataObjectReader *op = static_cast<vtkGenericDataObjectReader *>(vp);

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
      tempr = op->vtkGenericDataObjectReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataObjectReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataObjectReader *op = static_cast<vtkGenericDataObjectReader *>(vp);

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
      tempr = op->vtkGenericDataObjectReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataObjectReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataObjectReader *op = static_cast<vtkGenericDataObjectReader *>(vp);

  vtkGenericDataObjectReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGenericDataObjectReader::NewInstance();
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
PyvtkGenericDataObjectReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGenericDataObjectReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGenericDataObjectReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataObjectReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataObjectReader *op = static_cast<vtkGenericDataObjectReader *>(vp);

  vtkDataObject *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput();
      }
    else
      {
      tempr = op->vtkGenericDataObjectReader::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkGenericDataObjectReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataObjectReader *op = static_cast<vtkGenericDataObjectReader *>(vp);

  int temp0;
  vtkDataObject *tempr;
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
      tempr = op->vtkGenericDataObjectReader::GetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkGenericDataObjectReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkGenericDataObjectReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkGenericDataObjectReader_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}



static PyObject *
PyvtkGenericDataObjectReader_GetGraphOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataObjectReader *op = static_cast<vtkGenericDataObjectReader *>(vp);

  vtkGraph *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGraphOutput();
      }
    else
      {
      tempr = op->vtkGenericDataObjectReader::GetGraphOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataObjectReader_GetPolyDataOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyDataOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataObjectReader *op = static_cast<vtkGenericDataObjectReader *>(vp);

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
      tempr = op->vtkGenericDataObjectReader::GetPolyDataOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataObjectReader_GetRectilinearGridOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRectilinearGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataObjectReader *op = static_cast<vtkGenericDataObjectReader *>(vp);

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
      tempr = op->vtkGenericDataObjectReader::GetRectilinearGridOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataObjectReader_GetStructuredGridOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStructuredGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataObjectReader *op = static_cast<vtkGenericDataObjectReader *>(vp);

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
      tempr = op->vtkGenericDataObjectReader::GetStructuredGridOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataObjectReader_GetStructuredPointsOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStructuredPointsOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataObjectReader *op = static_cast<vtkGenericDataObjectReader *>(vp);

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
      tempr = op->vtkGenericDataObjectReader::GetStructuredPointsOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataObjectReader_GetTableOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTableOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataObjectReader *op = static_cast<vtkGenericDataObjectReader *>(vp);

  vtkTable *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTableOutput();
      }
    else
      {
      tempr = op->vtkGenericDataObjectReader::GetTableOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataObjectReader_GetTreeOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTreeOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataObjectReader *op = static_cast<vtkGenericDataObjectReader *>(vp);

  vtkTree *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTreeOutput();
      }
    else
      {
      tempr = op->vtkGenericDataObjectReader::GetTreeOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataObjectReader_GetUnstructuredGridOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnstructuredGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataObjectReader *op = static_cast<vtkGenericDataObjectReader *>(vp);

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
      tempr = op->vtkGenericDataObjectReader::GetUnstructuredGridOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataObjectReader_ReadOutputType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadOutputType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataObjectReader *op = static_cast<vtkGenericDataObjectReader *>(vp);

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
      tempr = op->vtkGenericDataObjectReader::ReadOutputType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGenericDataObjectReader_Methods[] = {
  {(char*)"GetClassName", PyvtkGenericDataObjectReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGenericDataObjectReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGenericDataObjectReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGenericDataObjectReader\nC++: vtkGenericDataObjectReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGenericDataObjectReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGenericDataObjectReader\nC++: vtkGenericDataObjectReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutput", PyvtkGenericDataObjectReader_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkDataObject\nC++: vtkDataObject *GetOutput()\nV.GetOutput(int) -> vtkDataObject\nC++: vtkDataObject *GetOutput(int idx)\n\nGet the output of this filter\n"},
  {(char*)"GetGraphOutput", PyvtkGenericDataObjectReader_GetGraphOutput, 1,
   (char*)"V.GetGraphOutput() -> vtkGraph\nC++: vtkGraph *GetGraphOutput()\n\nGet the output as various concrete types. This method is\ntypically used when you know exactly what type of data is being\nread.  Otherwise, use the general GetOutput() method. If the\nwrong type is used NULL is returned.  (You must also set the\nfilename of the object prior to getting the output.)\n"},
  {(char*)"GetPolyDataOutput", PyvtkGenericDataObjectReader_GetPolyDataOutput, 1,
   (char*)"V.GetPolyDataOutput() -> vtkPolyData\nC++: vtkPolyData *GetPolyDataOutput()\n\nGet the output as various concrete types. This method is\ntypically used when you know exactly what type of data is being\nread.  Otherwise, use the general GetOutput() method. If the\nwrong type is used NULL is returned.  (You must also set the\nfilename of the object prior to getting the output.)\n"},
  {(char*)"GetRectilinearGridOutput", PyvtkGenericDataObjectReader_GetRectilinearGridOutput, 1,
   (char*)"V.GetRectilinearGridOutput() -> vtkRectilinearGrid\nC++: vtkRectilinearGrid *GetRectilinearGridOutput()\n\nGet the output as various concrete types. This method is\ntypically used when you know exactly what type of data is being\nread.  Otherwise, use the general GetOutput() method. If the\nwrong type is used NULL is returned.  (You must also set the\nfilename of the object prior to getting the output.)\n"},
  {(char*)"GetStructuredGridOutput", PyvtkGenericDataObjectReader_GetStructuredGridOutput, 1,
   (char*)"V.GetStructuredGridOutput() -> vtkStructuredGrid\nC++: vtkStructuredGrid *GetStructuredGridOutput()\n\nGet the output as various concrete types. This method is\ntypically used when you know exactly what type of data is being\nread.  Otherwise, use the general GetOutput() method. If the\nwrong type is used NULL is returned.  (You must also set the\nfilename of the object prior to getting the output.)\n"},
  {(char*)"GetStructuredPointsOutput", PyvtkGenericDataObjectReader_GetStructuredPointsOutput, 1,
   (char*)"V.GetStructuredPointsOutput() -> vtkStructuredPoints\nC++: vtkStructuredPoints *GetStructuredPointsOutput()\n\nGet the output as various concrete types. This method is\ntypically used when you know exactly what type of data is being\nread.  Otherwise, use the general GetOutput() method. If the\nwrong type is used NULL is returned.  (You must also set the\nfilename of the object prior to getting the output.)\n"},
  {(char*)"GetTableOutput", PyvtkGenericDataObjectReader_GetTableOutput, 1,
   (char*)"V.GetTableOutput() -> vtkTable\nC++: vtkTable *GetTableOutput()\n\nGet the output as various concrete types. This method is\ntypically used when you know exactly what type of data is being\nread.  Otherwise, use the general GetOutput() method. If the\nwrong type is used NULL is returned.  (You must also set the\nfilename of the object prior to getting the output.)\n"},
  {(char*)"GetTreeOutput", PyvtkGenericDataObjectReader_GetTreeOutput, 1,
   (char*)"V.GetTreeOutput() -> vtkTree\nC++: vtkTree *GetTreeOutput()\n\nGet the output as various concrete types. This method is\ntypically used when you know exactly what type of data is being\nread.  Otherwise, use the general GetOutput() method. If the\nwrong type is used NULL is returned.  (You must also set the\nfilename of the object prior to getting the output.)\n"},
  {(char*)"GetUnstructuredGridOutput", PyvtkGenericDataObjectReader_GetUnstructuredGridOutput, 1,
   (char*)"V.GetUnstructuredGridOutput() -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetUnstructuredGridOutput()\n\nGet the output as various concrete types. This method is\ntypically used when you know exactly what type of data is being\nread.  Otherwise, use the general GetOutput() method. If the\nwrong type is used NULL is returned.  (You must also set the\nfilename of the object prior to getting the output.)\n"},
  {(char*)"ReadOutputType", PyvtkGenericDataObjectReader_ReadOutputType, 1,
   (char*)"V.ReadOutputType() -> int\nC++: virtual int ReadOutputType()\n\nThis method can be used to find out the type of output expected\nwithout needing to read the whole file.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGenericDataObjectReader_StaticNew()
{
  return vtkGenericDataObjectReader::New();
}

PyObject *PyVTKClass_vtkGenericDataObjectReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGenericDataObjectReader_StaticNew,
    PyvtkGenericDataObjectReader_Methods,
    "vtkGenericDataObjectReader", modulename,
    NULL, NULL,
    PyvtkGenericDataObjectReader_Doc(),
    PyVTKClass_vtkDataReaderNew(modulename));
  return cls;
}

const char **PyvtkGenericDataObjectReader_Doc()
{
  static const char *docstring[] = {
    "vtkGenericDataObjectReader - class to read any type of vtk data object\n\n",
    "Superclass: vtkDataReader\n\n",
    "vtkGenericDataObjectReader is a class that provides instance\nvariables and methods to read any type of data object in\nVisualization Toolkit (vtk) format.  The output type of this class\nwill vary depending upon the type of data file. Convenience methods\nare provided to return the data as a particular type. (See text for\nformat description details). The superclass of this class,\nvtkDataReader, provi",
    "des many methods for controlling the reading of\nthe data file, see vtkDataReader for more information.\n\nCaveats:\n\nBinary files written on one system may not be readable on other\nsystems.\n\nSee Also:\n\nvtkDataReader vtkGraphReader vtkPolyDataReader\nvtkRectilinearGridReader vtkStructuredPointsReader\nvtkStructuredGridReader vtkTableReader vtkTreeReader\nvtkUnstructuredGridReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGenericDataObjectReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGenericDataObjectReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGenericDataObjectReader", o) != 0)
    {
    Py_DECREF(o);
    }

}
