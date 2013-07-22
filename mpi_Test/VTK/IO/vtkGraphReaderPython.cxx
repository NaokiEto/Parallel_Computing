// python wrapper for vtkGraphReader
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
#include "vtkGraphReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGraphReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGraphReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGraphReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGraphReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataReaderNew
extern "C" { PyObject *PyVTKClass_vtkDataReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataReaderNew
#endif

static const char **PyvtkGraphReader_Doc();


static PyObject *
PyvtkGraphReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphReader *op = static_cast<vtkGraphReader *>(vp);

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
      tempr = op->vtkGraphReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphReader *op = static_cast<vtkGraphReader *>(vp);

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
      tempr = op->vtkGraphReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphReader *op = static_cast<vtkGraphReader *>(vp);

  vtkGraphReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGraphReader::NewInstance();
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
PyvtkGraphReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGraphReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGraphReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphReader *op = static_cast<vtkGraphReader *>(vp);

  vtkGraph *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput();
      }
    else
      {
      tempr = op->vtkGraphReader::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkGraphReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphReader *op = static_cast<vtkGraphReader *>(vp);

  int temp0;
  vtkGraph *tempr;
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
      tempr = op->vtkGraphReader::GetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkGraphReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkGraphReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkGraphReader_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}



static PyObject *
PyvtkGraphReader_SetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphReader *op = static_cast<vtkGraphReader *>(vp);

  vtkGraph *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGraph"))
    {
    if (ap.IsBound())
      {
      op->SetOutput(temp0);
      }
    else
      {
      op->vtkGraphReader::SetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGraphReader_Methods[] = {
  {(char*)"GetClassName", PyvtkGraphReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGraphReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGraphReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGraphReader\nC++: vtkGraphReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGraphReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGraphReader\nC++: vtkGraphReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutput", PyvtkGraphReader_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkGraph\nC++: vtkGraph *GetOutput()\nV.GetOutput(int) -> vtkGraph\nC++: vtkGraph *GetOutput(int idx)\n\nGet the output of this reader.\n"},
  {(char*)"SetOutput", PyvtkGraphReader_SetOutput, 1,
   (char*)"V.SetOutput(vtkGraph)\nC++: void SetOutput(vtkGraph *output)\n\nGet the output of this reader.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGraphReader_StaticNew()
{
  return vtkGraphReader::New();
}

PyObject *PyVTKClass_vtkGraphReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGraphReader_StaticNew,
    PyvtkGraphReader_Methods,
    "vtkGraphReader", modulename,
    NULL, NULL,
    PyvtkGraphReader_Doc(),
    PyVTKClass_vtkDataReaderNew(modulename));
  return cls;
}

const char **PyvtkGraphReader_Doc()
{
  static const char *docstring[] = {
    "vtkGraphReader - read vtkGraph data file\n\n",
    "Superclass: vtkDataReader\n\n",
    "vtkGraphReader is a source object that reads ASCII or binary vtkGraph\ndata files in vtk format. (see text for format details). The output\nof this reader is a single vtkGraph data object. The superclass of\nthis class, vtkDataReader, provides many methods for controlling the\nreading of the data file, see vtkDataReader for more information.\n\nCaveats:\n\nBinary files written on one system may not be rea",
    "dable on other\nsystems.\n\nSee Also:\n\nvtkGraph vtkDataReader vtkGraphWriter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGraphReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGraphReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGraphReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

