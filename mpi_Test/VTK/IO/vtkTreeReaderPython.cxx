// python wrapper for vtkTreeReader
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
#include "vtkTreeReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTreeReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTreeReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTreeReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTreeReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataReaderNew
extern "C" { PyObject *PyVTKClass_vtkDataReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataReaderNew
#endif

static const char **PyvtkTreeReader_Doc();


static PyObject *
PyvtkTreeReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeReader *op = static_cast<vtkTreeReader *>(vp);

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
      tempr = op->vtkTreeReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeReader *op = static_cast<vtkTreeReader *>(vp);

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
      tempr = op->vtkTreeReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeReader *op = static_cast<vtkTreeReader *>(vp);

  vtkTreeReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTreeReader::NewInstance();
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
PyvtkTreeReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTreeReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTreeReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeReader *op = static_cast<vtkTreeReader *>(vp);

  vtkTree *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput();
      }
    else
      {
      tempr = op->vtkTreeReader::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTreeReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeReader *op = static_cast<vtkTreeReader *>(vp);

  int temp0;
  vtkTree *tempr;
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
      tempr = op->vtkTreeReader::GetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTreeReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkTreeReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkTreeReader_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}



static PyObject *
PyvtkTreeReader_SetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeReader *op = static_cast<vtkTreeReader *>(vp);

  vtkTree *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTree"))
    {
    if (ap.IsBound())
      {
      op->SetOutput(temp0);
      }
    else
      {
      op->vtkTreeReader::SetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTreeReader_Methods[] = {
  {(char*)"GetClassName", PyvtkTreeReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTreeReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTreeReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTreeReader\nC++: vtkTreeReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTreeReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTreeReader\nC++: vtkTreeReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutput", PyvtkTreeReader_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkTree\nC++: vtkTree *GetOutput()\nV.GetOutput(int) -> vtkTree\nC++: vtkTree *GetOutput(int idx)\n\nGet the output of this reader.\n"},
  {(char*)"SetOutput", PyvtkTreeReader_SetOutput, 1,
   (char*)"V.SetOutput(vtkTree)\nC++: void SetOutput(vtkTree *output)\n\nGet the output of this reader.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTreeReader_StaticNew()
{
  return vtkTreeReader::New();
}

PyObject *PyVTKClass_vtkTreeReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTreeReader_StaticNew,
    PyvtkTreeReader_Methods,
    "vtkTreeReader", modulename,
    NULL, NULL,
    PyvtkTreeReader_Doc(),
    PyVTKClass_vtkDataReaderNew(modulename));
  return cls;
}

const char **PyvtkTreeReader_Doc()
{
  static const char *docstring[] = {
    "vtkTreeReader - read vtkTree data file\n\n",
    "Superclass: vtkDataReader\n\n",
    "vtkTreeReader is a source object that reads ASCII or binary vtkTree\ndata files in vtk format. (see text for format details). The output\nof this reader is a single vtkTree data object. The superclass of\nthis class, vtkDataReader, provides many methods for controlling the\nreading of the data file, see vtkDataReader for more information.\n\nCaveats:\n\nBinary files written on one system may not be readab",
    "le on other\nsystems.\n\nSee Also:\n\nvtkTree vtkDataReader vtkTreeWriter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTreeReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTreeReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTreeReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

