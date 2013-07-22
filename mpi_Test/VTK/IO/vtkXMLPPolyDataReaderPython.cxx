// python wrapper for vtkXMLPPolyDataReader
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
#include "vtkXMLPPolyDataReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLPPolyDataReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLPPolyDataReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLPPolyDataReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLPPolyDataReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkXMLPUnstructuredDataReaderNew
extern "C" { PyObject *PyVTKClass_vtkXMLPUnstructuredDataReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLPUnstructuredDataReaderNew
#endif

static const char **PyvtkXMLPPolyDataReader_Doc();


static PyObject *
PyvtkXMLPPolyDataReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPPolyDataReader *op = static_cast<vtkXMLPPolyDataReader *>(vp);

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
      tempr = op->vtkXMLPPolyDataReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPPolyDataReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPPolyDataReader *op = static_cast<vtkXMLPPolyDataReader *>(vp);

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
      tempr = op->vtkXMLPPolyDataReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPPolyDataReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPPolyDataReader *op = static_cast<vtkXMLPPolyDataReader *>(vp);

  vtkXMLPPolyDataReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLPPolyDataReader::NewInstance();
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
PyvtkXMLPPolyDataReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkXMLPPolyDataReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkXMLPPolyDataReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPPolyDataReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPPolyDataReader *op = static_cast<vtkXMLPPolyDataReader *>(vp);

  vtkPolyData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput();
      }
    else
      {
      tempr = op->vtkXMLPPolyDataReader::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLPPolyDataReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPPolyDataReader *op = static_cast<vtkXMLPPolyDataReader *>(vp);

  int temp0;
  vtkPolyData *tempr;
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
      tempr = op->vtkXMLPPolyDataReader::GetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLPPolyDataReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkXMLPPolyDataReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkXMLPPolyDataReader_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}


static PyMethodDef PyvtkXMLPPolyDataReader_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLPPolyDataReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLPPolyDataReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLPPolyDataReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLPPolyDataReader\nC++: vtkXMLPPolyDataReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLPPolyDataReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLPPolyDataReader\nC++: vtkXMLPPolyDataReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutput", PyvtkXMLPPolyDataReader_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkPolyData\nC++: vtkPolyData *GetOutput()\nV.GetOutput(int) -> vtkPolyData\nC++: vtkPolyData *GetOutput(int idx)\n\nGet the reader's output.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLPPolyDataReader_StaticNew()
{
  return vtkXMLPPolyDataReader::New();
}

PyObject *PyVTKClass_vtkXMLPPolyDataReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLPPolyDataReader_StaticNew,
    PyvtkXMLPPolyDataReader_Methods,
    "vtkXMLPPolyDataReader", modulename,
    NULL, NULL,
    PyvtkXMLPPolyDataReader_Doc(),
    PyVTKClass_vtkXMLPUnstructuredDataReaderNew(modulename));
  return cls;
}

const char **PyvtkXMLPPolyDataReader_Doc()
{
  static const char *docstring[] = {
    "vtkXMLPPolyDataReader - Read PVTK XML PolyData files.\n\n",
    "Superclass: vtkXMLPUnstructuredDataReader\n\n",
    "vtkXMLPPolyDataReader reads the PVTK XML PolyData file format. This\nreads the parallel format's summary file and then uses\nvtkXMLPolyDataReader to read data from the individual PolyData piece\nfiles.  Streaming is supported.  The standard extension for this\nreader's file format is \"pvtp\".\n\nSee Also:\n\nvtkXMLPolyDataReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLPPolyDataReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLPPolyDataReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLPPolyDataReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

