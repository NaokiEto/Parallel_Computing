// python wrapper for vtkStructuredGridWriter
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
#include "vtkStructuredGridWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkStructuredGridWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkStructuredGridWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkStructuredGridWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkStructuredGridWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataWriterNew
extern "C" { PyObject *PyVTKClass_vtkDataWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataWriterNew
#endif

static const char **PyvtkStructuredGridWriter_Doc();


static PyObject *
PyvtkStructuredGridWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridWriter *op = static_cast<vtkStructuredGridWriter *>(vp);

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
      tempr = op->vtkStructuredGridWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridWriter *op = static_cast<vtkStructuredGridWriter *>(vp);

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
      tempr = op->vtkStructuredGridWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridWriter *op = static_cast<vtkStructuredGridWriter *>(vp);

  vtkStructuredGridWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkStructuredGridWriter::NewInstance();
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
PyvtkStructuredGridWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkStructuredGridWriter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkStructuredGridWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridWriter_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridWriter *op = static_cast<vtkStructuredGridWriter *>(vp);

  vtkStructuredGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkStructuredGridWriter::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkStructuredGridWriter_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridWriter *op = static_cast<vtkStructuredGridWriter *>(vp);

  int temp0;
  vtkStructuredGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput(temp0);
      }
    else
      {
      tempr = op->vtkStructuredGridWriter::GetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkStructuredGridWriter_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkStructuredGridWriter_GetInput_s1(self, args);
    case 1:
      return PyvtkStructuredGridWriter_GetInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return NULL;
}


static PyMethodDef PyvtkStructuredGridWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkStructuredGridWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStructuredGridWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStructuredGridWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkStructuredGridWriter\nC++: vtkStructuredGridWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStructuredGridWriter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStructuredGridWriter\nC++: vtkStructuredGridWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetInput", PyvtkStructuredGridWriter_GetInput, 1,
   (char*)"V.GetInput() -> vtkStructuredGrid\nC++: vtkStructuredGrid *GetInput()\nV.GetInput(int) -> vtkStructuredGrid\nC++: vtkStructuredGrid *GetInput(int port)\n\nGet the input to this writer.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkStructuredGridWriter_StaticNew()
{
  return vtkStructuredGridWriter::New();
}

PyObject *PyVTKClass_vtkStructuredGridWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkStructuredGridWriter_StaticNew,
    PyvtkStructuredGridWriter_Methods,
    "vtkStructuredGridWriter", modulename,
    NULL, NULL,
    PyvtkStructuredGridWriter_Doc(),
    PyVTKClass_vtkDataWriterNew(modulename));
  return cls;
}

const char **PyvtkStructuredGridWriter_Doc()
{
  static const char *docstring[] = {
    "vtkStructuredGridWriter - write vtk structured grid data file\n\n",
    "Superclass: vtkDataWriter\n\n",
    "vtkStructuredGridWriter is a source object that writes ASCII or\nbinary structured grid data files in vtk format. See text for format\ndetails.\n\nCaveats:\n\nBinary files written on one system may not be readable on other\nsystems.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStructuredGridWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStructuredGridWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStructuredGridWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

