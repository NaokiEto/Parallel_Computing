// python wrapper for vtkXMLUnstructuredGridReader
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
#include "vtkXMLUnstructuredGridReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLUnstructuredGridReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLUnstructuredGridReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLUnstructuredGridReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLUnstructuredGridReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkXMLUnstructuredDataReaderNew
extern "C" { PyObject *PyVTKClass_vtkXMLUnstructuredDataReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLUnstructuredDataReaderNew
#endif

static const char **PyvtkXMLUnstructuredGridReader_Doc();


static PyObject *
PyvtkXMLUnstructuredGridReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredGridReader *op = static_cast<vtkXMLUnstructuredGridReader *>(vp);

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
      tempr = op->vtkXMLUnstructuredGridReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUnstructuredGridReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredGridReader *op = static_cast<vtkXMLUnstructuredGridReader *>(vp);

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
      tempr = op->vtkXMLUnstructuredGridReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUnstructuredGridReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredGridReader *op = static_cast<vtkXMLUnstructuredGridReader *>(vp);

  vtkXMLUnstructuredGridReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLUnstructuredGridReader::NewInstance();
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
PyvtkXMLUnstructuredGridReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkXMLUnstructuredGridReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkXMLUnstructuredGridReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUnstructuredGridReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredGridReader *op = static_cast<vtkXMLUnstructuredGridReader *>(vp);

  vtkUnstructuredGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput();
      }
    else
      {
      tempr = op->vtkXMLUnstructuredGridReader::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLUnstructuredGridReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredGridReader *op = static_cast<vtkXMLUnstructuredGridReader *>(vp);

  int temp0;
  vtkUnstructuredGrid *tempr;
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
      tempr = op->vtkXMLUnstructuredGridReader::GetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLUnstructuredGridReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkXMLUnstructuredGridReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkXMLUnstructuredGridReader_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}


static PyMethodDef PyvtkXMLUnstructuredGridReader_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLUnstructuredGridReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLUnstructuredGridReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLUnstructuredGridReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLUnstructuredGridReader\nC++: vtkXMLUnstructuredGridReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLUnstructuredGridReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLUnstructuredGridReader\nC++: vtkXMLUnstructuredGridReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutput", PyvtkXMLUnstructuredGridReader_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetOutput()\nV.GetOutput(int) -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetOutput(int idx)\n\nGet the reader's output.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLUnstructuredGridReader_StaticNew()
{
  return vtkXMLUnstructuredGridReader::New();
}

PyObject *PyVTKClass_vtkXMLUnstructuredGridReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLUnstructuredGridReader_StaticNew,
    PyvtkXMLUnstructuredGridReader_Methods,
    "vtkXMLUnstructuredGridReader", modulename,
    NULL, NULL,
    PyvtkXMLUnstructuredGridReader_Doc(),
    PyVTKClass_vtkXMLUnstructuredDataReaderNew(modulename));
  return cls;
}

const char **PyvtkXMLUnstructuredGridReader_Doc()
{
  static const char *docstring[] = {
    "vtkXMLUnstructuredGridReader - Read VTK XML UnstructuredGrid files.\n\n",
    "Superclass: vtkXMLUnstructuredDataReader\n\n",
    "vtkXMLUnstructuredGridReader reads the VTK XML UnstructuredGrid file\nformat.  One unstructured grid file can be read to produce one\noutput.  Streaming is supported.  The standard extension for this\nreader's file format is \"vtu\".  This reader is also used to read a\nsingle piece of the parallel file format.\n\nSee Also:\n\nvtkXMLPUnstructuredGridReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLUnstructuredGridReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLUnstructuredGridReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLUnstructuredGridReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

