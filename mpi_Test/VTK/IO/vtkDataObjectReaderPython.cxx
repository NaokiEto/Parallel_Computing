// python wrapper for vtkDataObjectReader
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
#include "vtkDataObjectReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDataObjectReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDataObjectReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDataObjectReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDataObjectReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataReaderNew
extern "C" { PyObject *PyVTKClass_vtkDataReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataReaderNew
#endif

static const char **PyvtkDataObjectReader_Doc();


static PyObject *
PyvtkDataObjectReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectReader *op = static_cast<vtkDataObjectReader *>(vp);

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
      tempr = op->vtkDataObjectReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectReader *op = static_cast<vtkDataObjectReader *>(vp);

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
      tempr = op->vtkDataObjectReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectReader *op = static_cast<vtkDataObjectReader *>(vp);

  vtkDataObjectReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDataObjectReader::NewInstance();
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
PyvtkDataObjectReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDataObjectReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDataObjectReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectReader *op = static_cast<vtkDataObjectReader *>(vp);

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
      tempr = op->vtkDataObjectReader::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataObjectReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectReader *op = static_cast<vtkDataObjectReader *>(vp);

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
      tempr = op->vtkDataObjectReader::GetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataObjectReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkDataObjectReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkDataObjectReader_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}



static PyObject *
PyvtkDataObjectReader_SetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectReader *op = static_cast<vtkDataObjectReader *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetOutput(temp0);
      }
    else
      {
      op->vtkDataObjectReader::SetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkDataObjectReader_Methods[] = {
  {(char*)"GetClassName", PyvtkDataObjectReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataObjectReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataObjectReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDataObjectReader\nC++: vtkDataObjectReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDataObjectReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDataObjectReader\nC++: vtkDataObjectReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutput", PyvtkDataObjectReader_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkDataObject\nC++: vtkDataObject *GetOutput()\nV.GetOutput(int) -> vtkDataObject\nC++: vtkDataObject *GetOutput(int idx)\n\nGet the output field of this reader.\n"},
  {(char*)"SetOutput", PyvtkDataObjectReader_SetOutput, 1,
   (char*)"V.SetOutput(vtkDataObject)\nC++: void SetOutput(vtkDataObject *)\n\nGet the output field of this reader.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDataObjectReader_StaticNew()
{
  return vtkDataObjectReader::New();
}

PyObject *PyVTKClass_vtkDataObjectReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDataObjectReader_StaticNew,
    PyvtkDataObjectReader_Methods,
    "vtkDataObjectReader", modulename,
    NULL, NULL,
    PyvtkDataObjectReader_Doc(),
    PyVTKClass_vtkDataReaderNew(modulename));
  return cls;
}

const char **PyvtkDataObjectReader_Doc()
{
  static const char *docstring[] = {
    "vtkDataObjectReader - read vtk field data file\n\n",
    "Superclass: vtkDataReader\n\n",
    "vtkDataObjectReader is a source object that reads ASCII or binary\nfield data files in vtk format. Fields are general matrix structures\nused represent complex data. (See text for format details).  The\noutput of this reader is a single vtkDataObject.  The superclass of\nthis class, vtkDataReader, provides many methods for controlling the\nreading of the data file, see vtkDataReader for more informatio",
    "n.\n\nCaveats:\n\nBinary files written on one system may not be readable on other\nsystems.\n\nSee Also:\n\nvtkFieldData vtkDataObjectWriter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataObjectReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataObjectReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataObjectReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

