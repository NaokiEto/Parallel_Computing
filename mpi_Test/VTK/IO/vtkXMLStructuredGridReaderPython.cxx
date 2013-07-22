// python wrapper for vtkXMLStructuredGridReader
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
#include "vtkXMLStructuredGridReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLStructuredGridReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLStructuredGridReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLStructuredGridReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLStructuredGridReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkXMLStructuredDataReaderNew
extern "C" { PyObject *PyVTKClass_vtkXMLStructuredDataReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLStructuredDataReaderNew
#endif

static const char **PyvtkXMLStructuredGridReader_Doc();


static PyObject *
PyvtkXMLStructuredGridReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredGridReader *op = static_cast<vtkXMLStructuredGridReader *>(vp);

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
      tempr = op->vtkXMLStructuredGridReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLStructuredGridReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredGridReader *op = static_cast<vtkXMLStructuredGridReader *>(vp);

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
      tempr = op->vtkXMLStructuredGridReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLStructuredGridReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredGridReader *op = static_cast<vtkXMLStructuredGridReader *>(vp);

  vtkXMLStructuredGridReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLStructuredGridReader::NewInstance();
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
PyvtkXMLStructuredGridReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkXMLStructuredGridReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkXMLStructuredGridReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLStructuredGridReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredGridReader *op = static_cast<vtkXMLStructuredGridReader *>(vp);

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
      tempr = op->vtkXMLStructuredGridReader::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLStructuredGridReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredGridReader *op = static_cast<vtkXMLStructuredGridReader *>(vp);

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
      tempr = op->vtkXMLStructuredGridReader::GetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLStructuredGridReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkXMLStructuredGridReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkXMLStructuredGridReader_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}


static PyMethodDef PyvtkXMLStructuredGridReader_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLStructuredGridReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLStructuredGridReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLStructuredGridReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLStructuredGridReader\nC++: vtkXMLStructuredGridReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLStructuredGridReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLStructuredGridReader\nC++: vtkXMLStructuredGridReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutput", PyvtkXMLStructuredGridReader_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkStructuredGrid\nC++: vtkStructuredGrid *GetOutput()\nV.GetOutput(int) -> vtkStructuredGrid\nC++: vtkStructuredGrid *GetOutput(int idx)\n\nGet the reader's output.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLStructuredGridReader_StaticNew()
{
  return vtkXMLStructuredGridReader::New();
}

PyObject *PyVTKClass_vtkXMLStructuredGridReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLStructuredGridReader_StaticNew,
    PyvtkXMLStructuredGridReader_Methods,
    "vtkXMLStructuredGridReader", modulename,
    NULL, NULL,
    PyvtkXMLStructuredGridReader_Doc(),
    PyVTKClass_vtkXMLStructuredDataReaderNew(modulename));
  return cls;
}

const char **PyvtkXMLStructuredGridReader_Doc()
{
  static const char *docstring[] = {
    "vtkXMLStructuredGridReader - Read VTK XML StructuredGrid files.\n\n",
    "Superclass: vtkXMLStructuredDataReader\n\n",
    "vtkXMLStructuredGridReader reads the VTK XML StructuredGrid file\nformat.  One structured grid file can be read to produce one output. \nStreaming is supported.  The standard extension for this reader's\nfile format is \"vts\".  This reader is also used to read a single\npiece of the parallel file format.\n\nSee Also:\n\nvtkXMLPStructuredGridReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLStructuredGridReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLStructuredGridReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLStructuredGridReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

