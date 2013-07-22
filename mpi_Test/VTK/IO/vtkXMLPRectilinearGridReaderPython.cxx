// python wrapper for vtkXMLPRectilinearGridReader
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
#include "vtkXMLPRectilinearGridReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLPRectilinearGridReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLPRectilinearGridReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLPRectilinearGridReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLPRectilinearGridReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkXMLPStructuredDataReaderNew
extern "C" { PyObject *PyVTKClass_vtkXMLPStructuredDataReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLPStructuredDataReaderNew
#endif

static const char **PyvtkXMLPRectilinearGridReader_Doc();


static PyObject *
PyvtkXMLPRectilinearGridReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPRectilinearGridReader *op = static_cast<vtkXMLPRectilinearGridReader *>(vp);

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
      tempr = op->vtkXMLPRectilinearGridReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPRectilinearGridReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPRectilinearGridReader *op = static_cast<vtkXMLPRectilinearGridReader *>(vp);

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
      tempr = op->vtkXMLPRectilinearGridReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPRectilinearGridReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPRectilinearGridReader *op = static_cast<vtkXMLPRectilinearGridReader *>(vp);

  vtkXMLPRectilinearGridReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLPRectilinearGridReader::NewInstance();
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
PyvtkXMLPRectilinearGridReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkXMLPRectilinearGridReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkXMLPRectilinearGridReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPRectilinearGridReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPRectilinearGridReader *op = static_cast<vtkXMLPRectilinearGridReader *>(vp);

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
      tempr = op->vtkXMLPRectilinearGridReader::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLPRectilinearGridReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPRectilinearGridReader *op = static_cast<vtkXMLPRectilinearGridReader *>(vp);

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
      tempr = op->vtkXMLPRectilinearGridReader::GetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLPRectilinearGridReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkXMLPRectilinearGridReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkXMLPRectilinearGridReader_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}


static PyMethodDef PyvtkXMLPRectilinearGridReader_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLPRectilinearGridReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLPRectilinearGridReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLPRectilinearGridReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLPRectilinearGridReader\nC++: vtkXMLPRectilinearGridReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLPRectilinearGridReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLPRectilinearGridReader\nC++: vtkXMLPRectilinearGridReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutput", PyvtkXMLPRectilinearGridReader_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkRectilinearGrid\nC++: vtkRectilinearGrid *GetOutput()\nV.GetOutput(int) -> vtkRectilinearGrid\nC++: vtkRectilinearGrid *GetOutput(int idx)\n\nGet the reader's output.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLPRectilinearGridReader_StaticNew()
{
  return vtkXMLPRectilinearGridReader::New();
}

PyObject *PyVTKClass_vtkXMLPRectilinearGridReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLPRectilinearGridReader_StaticNew,
    PyvtkXMLPRectilinearGridReader_Methods,
    "vtkXMLPRectilinearGridReader", modulename,
    NULL, NULL,
    PyvtkXMLPRectilinearGridReader_Doc(),
    PyVTKClass_vtkXMLPStructuredDataReaderNew(modulename));
  return cls;
}

const char **PyvtkXMLPRectilinearGridReader_Doc()
{
  static const char *docstring[] = {
    "vtkXMLPRectilinearGridReader - Read PVTK XML RectilinearGrid files.\n\n",
    "Superclass: vtkXMLPStructuredDataReader\n\n",
    "vtkXMLPRectilinearGridReader reads the PVTK XML RectilinearGrid file\nformat.  This reads the parallel format's summary file and then uses\nvtkXMLRectilinearGridReader to read data from the individual\nRectilinearGrid piece files.  Streaming is supported. The standard\nextension for this reader's file format is \"pvtr\".\n\nSee Also:\n\nvtkXMLRectilinearGridReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLPRectilinearGridReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLPRectilinearGridReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLPRectilinearGridReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

