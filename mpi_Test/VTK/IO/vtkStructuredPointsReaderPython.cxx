// python wrapper for vtkStructuredPointsReader
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
#include "vtkStructuredPointsReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkStructuredPointsReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkStructuredPointsReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkStructuredPointsReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkStructuredPointsReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataReaderNew
extern "C" { PyObject *PyVTKClass_vtkDataReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataReaderNew
#endif

static const char **PyvtkStructuredPointsReader_Doc();


static PyObject *
PyvtkStructuredPointsReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsReader *op = static_cast<vtkStructuredPointsReader *>(vp);

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
      tempr = op->vtkStructuredPointsReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredPointsReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsReader *op = static_cast<vtkStructuredPointsReader *>(vp);

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
      tempr = op->vtkStructuredPointsReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredPointsReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsReader *op = static_cast<vtkStructuredPointsReader *>(vp);

  vtkStructuredPointsReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkStructuredPointsReader::NewInstance();
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
PyvtkStructuredPointsReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkStructuredPointsReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkStructuredPointsReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredPointsReader_SetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsReader *op = static_cast<vtkStructuredPointsReader *>(vp);

  vtkStructuredPoints *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStructuredPoints"))
    {
    if (ap.IsBound())
      {
      op->SetOutput(temp0);
      }
    else
      {
      op->vtkStructuredPointsReader::SetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredPointsReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsReader *op = static_cast<vtkStructuredPointsReader *>(vp);

  int temp0;
  vtkStructuredPoints *tempr;
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
      tempr = op->vtkStructuredPointsReader::GetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkStructuredPointsReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsReader *op = static_cast<vtkStructuredPointsReader *>(vp);

  vtkStructuredPoints *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput();
      }
    else
      {
      tempr = op->vtkStructuredPointsReader::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkStructuredPointsReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkStructuredPointsReader_GetOutput_s1(self, args);
    case 0:
      return PyvtkStructuredPointsReader_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}



static PyObject *
PyvtkStructuredPointsReader_ReadMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsReader *op = static_cast<vtkStructuredPointsReader *>(vp);

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
      tempr = op->vtkStructuredPointsReader::ReadMetaData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkStructuredPointsReader_Methods[] = {
  {(char*)"GetClassName", PyvtkStructuredPointsReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStructuredPointsReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStructuredPointsReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkStructuredPointsReader\nC++: vtkStructuredPointsReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStructuredPointsReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStructuredPointsReader\nC++: vtkStructuredPointsReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetOutput", PyvtkStructuredPointsReader_SetOutput, 1,
   (char*)"V.SetOutput(vtkStructuredPoints)\nC++: void SetOutput(vtkStructuredPoints *output)\n\nSet/Get the output of this reader.\n"},
  {(char*)"GetOutput", PyvtkStructuredPointsReader_GetOutput, 1,
   (char*)"V.GetOutput(int) -> vtkStructuredPoints\nC++: vtkStructuredPoints *GetOutput(int idx)\nV.GetOutput() -> vtkStructuredPoints\nC++: vtkStructuredPoints *GetOutput()\n\nSet/Get the output of this reader.\n"},
  {(char*)"ReadMetaData", PyvtkStructuredPointsReader_ReadMetaData, 1,
   (char*)"V.ReadMetaData(vtkInformation) -> int\nC++: virtual int ReadMetaData(vtkInformation *outInfo)\n\nRead the meta information from the file.  This needs to be public\nto it can be accessed by vtkDataSetReader.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkStructuredPointsReader_StaticNew()
{
  return vtkStructuredPointsReader::New();
}

PyObject *PyVTKClass_vtkStructuredPointsReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkStructuredPointsReader_StaticNew,
    PyvtkStructuredPointsReader_Methods,
    "vtkStructuredPointsReader", modulename,
    NULL, NULL,
    PyvtkStructuredPointsReader_Doc(),
    PyVTKClass_vtkDataReaderNew(modulename));
  return cls;
}

const char **PyvtkStructuredPointsReader_Doc()
{
  static const char *docstring[] = {
    "vtkStructuredPointsReader - read vtk structured points data file\n\n",
    "Superclass: vtkDataReader\n\n",
    "vtkStructuredPointsReader is a source object that reads ASCII or\nbinary structured points data files in vtk format (see text for\nformat details). The output of this reader is a single\nvtkStructuredPoints data object. The superclass of this class,\nvtkDataReader, provides many methods for controlling the reading of\nthe data file, see vtkDataReader for more information.\n\nCaveats:\n\nBinary files writte",
    "n on one system may not be readable on other\nsystems.\n\nSee Also:\n\nvtkStructuredPoints vtkDataReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStructuredPointsReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStructuredPointsReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStructuredPointsReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

