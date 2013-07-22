// python wrapper for vtkXMLPStructuredGridReader
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
#include "vtkXMLPStructuredGridReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLPStructuredGridReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLPStructuredGridReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLPStructuredGridReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLPStructuredGridReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkXMLPStructuredDataReaderNew
extern "C" { PyObject *PyVTKClass_vtkXMLPStructuredDataReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLPStructuredDataReaderNew
#endif

static const char **PyvtkXMLPStructuredGridReader_Doc();


static PyObject *
PyvtkXMLPStructuredGridReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPStructuredGridReader *op = static_cast<vtkXMLPStructuredGridReader *>(vp);

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
      tempr = op->vtkXMLPStructuredGridReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPStructuredGridReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPStructuredGridReader *op = static_cast<vtkXMLPStructuredGridReader *>(vp);

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
      tempr = op->vtkXMLPStructuredGridReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPStructuredGridReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPStructuredGridReader *op = static_cast<vtkXMLPStructuredGridReader *>(vp);

  vtkXMLPStructuredGridReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLPStructuredGridReader::NewInstance();
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
PyvtkXMLPStructuredGridReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkXMLPStructuredGridReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkXMLPStructuredGridReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPStructuredGridReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPStructuredGridReader *op = static_cast<vtkXMLPStructuredGridReader *>(vp);

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
      tempr = op->vtkXMLPStructuredGridReader::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLPStructuredGridReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPStructuredGridReader *op = static_cast<vtkXMLPStructuredGridReader *>(vp);

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
      tempr = op->vtkXMLPStructuredGridReader::GetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLPStructuredGridReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkXMLPStructuredGridReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkXMLPStructuredGridReader_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}


static PyMethodDef PyvtkXMLPStructuredGridReader_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLPStructuredGridReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLPStructuredGridReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLPStructuredGridReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLPStructuredGridReader\nC++: vtkXMLPStructuredGridReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLPStructuredGridReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLPStructuredGridReader\nC++: vtkXMLPStructuredGridReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutput", PyvtkXMLPStructuredGridReader_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkStructuredGrid\nC++: vtkStructuredGrid *GetOutput()\nV.GetOutput(int) -> vtkStructuredGrid\nC++: vtkStructuredGrid *GetOutput(int idx)\n\nGet the reader's output.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLPStructuredGridReader_StaticNew()
{
  return vtkXMLPStructuredGridReader::New();
}

PyObject *PyVTKClass_vtkXMLPStructuredGridReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLPStructuredGridReader_StaticNew,
    PyvtkXMLPStructuredGridReader_Methods,
    "vtkXMLPStructuredGridReader", modulename,
    NULL, NULL,
    PyvtkXMLPStructuredGridReader_Doc(),
    PyVTKClass_vtkXMLPStructuredDataReaderNew(modulename));
  return cls;
}

const char **PyvtkXMLPStructuredGridReader_Doc()
{
  static const char *docstring[] = {
    "vtkXMLPStructuredGridReader - Read PVTK XML StructuredGrid files.\n\n",
    "Superclass: vtkXMLPStructuredDataReader\n\n",
    "vtkXMLPStructuredGridReader reads the PVTK XML StructuredGrid file\nformat.  This reads the parallel format's summary file and then uses\nvtkXMLStructuredGridReader to read data from the individual\nStructuredGrid piece files.  Streaming is supported.  The standard\nextension for this reader's file format is \"pvts\".\n\nSee Also:\n\nvtkXMLStructuredGridReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLPStructuredGridReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLPStructuredGridReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLPStructuredGridReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

