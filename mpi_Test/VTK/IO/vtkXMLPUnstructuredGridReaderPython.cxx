// python wrapper for vtkXMLPUnstructuredGridReader
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
#include "vtkXMLPUnstructuredGridReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLPUnstructuredGridReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLPUnstructuredGridReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLPUnstructuredGridReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLPUnstructuredGridReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkXMLPUnstructuredDataReaderNew
extern "C" { PyObject *PyVTKClass_vtkXMLPUnstructuredDataReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLPUnstructuredDataReaderNew
#endif

static const char **PyvtkXMLPUnstructuredGridReader_Doc();


static PyObject *
PyvtkXMLPUnstructuredGridReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPUnstructuredGridReader *op = static_cast<vtkXMLPUnstructuredGridReader *>(vp);

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
      tempr = op->vtkXMLPUnstructuredGridReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPUnstructuredGridReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPUnstructuredGridReader *op = static_cast<vtkXMLPUnstructuredGridReader *>(vp);

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
      tempr = op->vtkXMLPUnstructuredGridReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPUnstructuredGridReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPUnstructuredGridReader *op = static_cast<vtkXMLPUnstructuredGridReader *>(vp);

  vtkXMLPUnstructuredGridReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLPUnstructuredGridReader::NewInstance();
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
PyvtkXMLPUnstructuredGridReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkXMLPUnstructuredGridReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkXMLPUnstructuredGridReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPUnstructuredGridReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPUnstructuredGridReader *op = static_cast<vtkXMLPUnstructuredGridReader *>(vp);

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
      tempr = op->vtkXMLPUnstructuredGridReader::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLPUnstructuredGridReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPUnstructuredGridReader *op = static_cast<vtkXMLPUnstructuredGridReader *>(vp);

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
      tempr = op->vtkXMLPUnstructuredGridReader::GetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLPUnstructuredGridReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkXMLPUnstructuredGridReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkXMLPUnstructuredGridReader_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}


static PyMethodDef PyvtkXMLPUnstructuredGridReader_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLPUnstructuredGridReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLPUnstructuredGridReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLPUnstructuredGridReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLPUnstructuredGridReader\nC++: vtkXMLPUnstructuredGridReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLPUnstructuredGridReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLPUnstructuredGridReader\nC++: vtkXMLPUnstructuredGridReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutput", PyvtkXMLPUnstructuredGridReader_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetOutput()\nV.GetOutput(int) -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetOutput(int idx)\n\nGet the reader's output.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLPUnstructuredGridReader_StaticNew()
{
  return vtkXMLPUnstructuredGridReader::New();
}

PyObject *PyVTKClass_vtkXMLPUnstructuredGridReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLPUnstructuredGridReader_StaticNew,
    PyvtkXMLPUnstructuredGridReader_Methods,
    "vtkXMLPUnstructuredGridReader", modulename,
    NULL, NULL,
    PyvtkXMLPUnstructuredGridReader_Doc(),
    PyVTKClass_vtkXMLPUnstructuredDataReaderNew(modulename));
  return cls;
}

const char **PyvtkXMLPUnstructuredGridReader_Doc()
{
  static const char *docstring[] = {
    "vtkXMLPUnstructuredGridReader - Read PVTK XML UnstructuredGrid files.\n\n",
    "Superclass: vtkXMLPUnstructuredDataReader\n\n",
    "vtkXMLPUnstructuredGridReader reads the PVTK XML UnstructuredGrid\nfile format.  This reads the parallel format's summary file and then\nuses vtkXMLUnstructuredGridReader to read data from the individual\nUnstructuredGrid piece files.  Streaming is supported. The standard\nextension for this reader's file format is \"pvtu\".\n\nSee Also:\n\nvtkXMLUnstructuredGridReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLPUnstructuredGridReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLPUnstructuredGridReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLPUnstructuredGridReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

