// python wrapper for vtkUnstructuredGridWriter
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
#include "vtkUnstructuredGridWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkUnstructuredGridWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkUnstructuredGridWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkUnstructuredGridWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataWriterNew
extern "C" { PyObject *PyVTKClass_vtkDataWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataWriterNew
#endif

static const char **PyvtkUnstructuredGridWriter_Doc();


static PyObject *
PyvtkUnstructuredGridWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridWriter *op = static_cast<vtkUnstructuredGridWriter *>(vp);

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
      tempr = op->vtkUnstructuredGridWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridWriter *op = static_cast<vtkUnstructuredGridWriter *>(vp);

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
      tempr = op->vtkUnstructuredGridWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridWriter *op = static_cast<vtkUnstructuredGridWriter *>(vp);

  vtkUnstructuredGridWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkUnstructuredGridWriter::NewInstance();
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
PyvtkUnstructuredGridWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkUnstructuredGridWriter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkUnstructuredGridWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridWriter_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridWriter *op = static_cast<vtkUnstructuredGridWriter *>(vp);

  vtkUnstructuredGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkUnstructuredGridWriter::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkUnstructuredGridWriter_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridWriter *op = static_cast<vtkUnstructuredGridWriter *>(vp);

  int temp0;
  vtkUnstructuredGrid *tempr;
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
      tempr = op->vtkUnstructuredGridWriter::GetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkUnstructuredGridWriter_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkUnstructuredGridWriter_GetInput_s1(self, args);
    case 1:
      return PyvtkUnstructuredGridWriter_GetInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return NULL;
}


static PyMethodDef PyvtkUnstructuredGridWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkUnstructuredGridWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkUnstructuredGridWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkUnstructuredGridWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkUnstructuredGridWriter\nC++: vtkUnstructuredGridWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkUnstructuredGridWriter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkUnstructuredGridWriter\nC++: vtkUnstructuredGridWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetInput", PyvtkUnstructuredGridWriter_GetInput, 1,
   (char*)"V.GetInput() -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetInput()\nV.GetInput(int) -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetInput(int port)\n\nGet the input to this writer.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkUnstructuredGridWriter_StaticNew()
{
  return vtkUnstructuredGridWriter::New();
}

PyObject *PyVTKClass_vtkUnstructuredGridWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkUnstructuredGridWriter_StaticNew,
    PyvtkUnstructuredGridWriter_Methods,
    "vtkUnstructuredGridWriter", modulename,
    NULL, NULL,
    PyvtkUnstructuredGridWriter_Doc(),
    PyVTKClass_vtkDataWriterNew(modulename));
  return cls;
}

const char **PyvtkUnstructuredGridWriter_Doc()
{
  static const char *docstring[] = {
    "vtkUnstructuredGridWriter - write vtk unstructured grid data file\n\n",
    "Superclass: vtkDataWriter\n\n",
    "vtkUnstructuredGridWriter is a source object that writes ASCII or\nbinary unstructured grid data files in vtk format. See text for\nformat details.\n\nCaveats:\n\nBinary files written on one system may not be readable on other\nsystems.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkUnstructuredGridWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkUnstructuredGridWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkUnstructuredGridWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

