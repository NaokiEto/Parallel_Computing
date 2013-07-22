// python wrapper for vtkTableReader
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
#include "vtkTableReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTableReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTableReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTableReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTableReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataReaderNew
extern "C" { PyObject *PyVTKClass_vtkDataReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataReaderNew
#endif

static const char **PyvtkTableReader_Doc();


static PyObject *
PyvtkTableReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableReader *op = static_cast<vtkTableReader *>(vp);

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
      tempr = op->vtkTableReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableReader *op = static_cast<vtkTableReader *>(vp);

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
      tempr = op->vtkTableReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableReader *op = static_cast<vtkTableReader *>(vp);

  vtkTableReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTableReader::NewInstance();
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
PyvtkTableReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTableReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTableReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableReader *op = static_cast<vtkTableReader *>(vp);

  vtkTable *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput();
      }
    else
      {
      tempr = op->vtkTableReader::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTableReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableReader *op = static_cast<vtkTableReader *>(vp);

  int temp0;
  vtkTable *tempr;
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
      tempr = op->vtkTableReader::GetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTableReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkTableReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkTableReader_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}



static PyObject *
PyvtkTableReader_SetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableReader *op = static_cast<vtkTableReader *>(vp);

  vtkTable *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTable"))
    {
    if (ap.IsBound())
      {
      op->SetOutput(temp0);
      }
    else
      {
      op->vtkTableReader::SetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTableReader_Methods[] = {
  {(char*)"GetClassName", PyvtkTableReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTableReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTableReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTableReader\nC++: vtkTableReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTableReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTableReader\nC++: vtkTableReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutput", PyvtkTableReader_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkTable\nC++: vtkTable *GetOutput()\nV.GetOutput(int) -> vtkTable\nC++: vtkTable *GetOutput(int idx)\n\nGet the output of this reader.\n"},
  {(char*)"SetOutput", PyvtkTableReader_SetOutput, 1,
   (char*)"V.SetOutput(vtkTable)\nC++: void SetOutput(vtkTable *output)\n\nGet the output of this reader.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTableReader_StaticNew()
{
  return vtkTableReader::New();
}

PyObject *PyVTKClass_vtkTableReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTableReader_StaticNew,
    PyvtkTableReader_Methods,
    "vtkTableReader", modulename,
    NULL, NULL,
    PyvtkTableReader_Doc(),
    PyVTKClass_vtkDataReaderNew(modulename));
  return cls;
}

const char **PyvtkTableReader_Doc()
{
  static const char *docstring[] = {
    "vtkTableReader - read vtkTable data file\n\n",
    "Superclass: vtkDataReader\n\n",
    "vtkTableReader is a source object that reads ASCII or binary vtkTable\ndata files in vtk format. (see text for format details). The output\nof this reader is a single vtkTable data object. The superclass of\nthis class, vtkDataReader, provides many methods for controlling the\nreading of the data file, see vtkDataReader for more information.\n\nCaveats:\n\nBinary files written on one system may not be rea",
    "dable on other\nsystems.\n\nSee Also:\n\nvtkTable vtkDataReader vtkTableWriter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTableReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTableReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTableReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

