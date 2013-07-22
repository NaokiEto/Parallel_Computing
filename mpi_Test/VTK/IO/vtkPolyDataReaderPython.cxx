// python wrapper for vtkPolyDataReader
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
#include "vtkPolyDataReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPolyDataReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPolyDataReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPolyDataReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPolyDataReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataReaderNew
extern "C" { PyObject *PyVTKClass_vtkDataReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataReaderNew
#endif

static const char **PyvtkPolyDataReader_Doc();


static PyObject *
PyvtkPolyDataReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataReader *op = static_cast<vtkPolyDataReader *>(vp);

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
      tempr = op->vtkPolyDataReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataReader *op = static_cast<vtkPolyDataReader *>(vp);

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
      tempr = op->vtkPolyDataReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataReader *op = static_cast<vtkPolyDataReader *>(vp);

  vtkPolyDataReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPolyDataReader::NewInstance();
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
PyvtkPolyDataReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPolyDataReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPolyDataReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataReader *op = static_cast<vtkPolyDataReader *>(vp);

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
      tempr = op->vtkPolyDataReader::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPolyDataReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataReader *op = static_cast<vtkPolyDataReader *>(vp);

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
      tempr = op->vtkPolyDataReader::GetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPolyDataReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkPolyDataReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkPolyDataReader_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}



static PyObject *
PyvtkPolyDataReader_SetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataReader *op = static_cast<vtkPolyDataReader *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->SetOutput(temp0);
      }
    else
      {
      op->vtkPolyDataReader::SetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPolyDataReader_Methods[] = {
  {(char*)"GetClassName", PyvtkPolyDataReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPolyDataReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPolyDataReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPolyDataReader\nC++: vtkPolyDataReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPolyDataReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPolyDataReader\nC++: vtkPolyDataReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutput", PyvtkPolyDataReader_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkPolyData\nC++: vtkPolyData *GetOutput()\nV.GetOutput(int) -> vtkPolyData\nC++: vtkPolyData *GetOutput(int idx)\n\nGet the output of this reader.\n"},
  {(char*)"SetOutput", PyvtkPolyDataReader_SetOutput, 1,
   (char*)"V.SetOutput(vtkPolyData)\nC++: void SetOutput(vtkPolyData *output)\n\nGet the output of this reader.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPolyDataReader_StaticNew()
{
  return vtkPolyDataReader::New();
}

PyObject *PyVTKClass_vtkPolyDataReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPolyDataReader_StaticNew,
    PyvtkPolyDataReader_Methods,
    "vtkPolyDataReader", modulename,
    NULL, NULL,
    PyvtkPolyDataReader_Doc(),
    PyVTKClass_vtkDataReaderNew(modulename));
  return cls;
}

const char **PyvtkPolyDataReader_Doc()
{
  static const char *docstring[] = {
    "vtkPolyDataReader - read vtk polygonal data file\n\n",
    "Superclass: vtkDataReader\n\n",
    "vtkPolyDataReader is a source object that reads ASCII or binary\npolygonal data files in vtk format (see text for format details). The\noutput of this reader is a single vtkPolyData data object. The\nsuperclass of this class, vtkDataReader, provides many methods for\ncontrolling the reading of the data file, see vtkDataReader for more\ninformation.\n\nCaveats:\n\nBinary files written on one system may not ",
    "be readable on other\nsystems.\n\nSee Also:\n\nvtkPolyData vtkDataReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPolyDataReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPolyDataReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPolyDataReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

