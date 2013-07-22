// python wrapper for vtkRectilinearGridWriter
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
#include "vtkRectilinearGridWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkRectilinearGridWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkRectilinearGridWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkRectilinearGridWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkRectilinearGridWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataWriterNew
extern "C" { PyObject *PyVTKClass_vtkDataWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataWriterNew
#endif

static const char **PyvtkRectilinearGridWriter_Doc();


static PyObject *
PyvtkRectilinearGridWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridWriter *op = static_cast<vtkRectilinearGridWriter *>(vp);

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
      tempr = op->vtkRectilinearGridWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridWriter *op = static_cast<vtkRectilinearGridWriter *>(vp);

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
      tempr = op->vtkRectilinearGridWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridWriter *op = static_cast<vtkRectilinearGridWriter *>(vp);

  vtkRectilinearGridWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkRectilinearGridWriter::NewInstance();
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
PyvtkRectilinearGridWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkRectilinearGridWriter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkRectilinearGridWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridWriter_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridWriter *op = static_cast<vtkRectilinearGridWriter *>(vp);

  vtkRectilinearGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkRectilinearGridWriter::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRectilinearGridWriter_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridWriter *op = static_cast<vtkRectilinearGridWriter *>(vp);

  int temp0;
  vtkRectilinearGrid *tempr;
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
      tempr = op->vtkRectilinearGridWriter::GetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRectilinearGridWriter_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkRectilinearGridWriter_GetInput_s1(self, args);
    case 1:
      return PyvtkRectilinearGridWriter_GetInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return NULL;
}


static PyMethodDef PyvtkRectilinearGridWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkRectilinearGridWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRectilinearGridWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRectilinearGridWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkRectilinearGridWriter\nC++: vtkRectilinearGridWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRectilinearGridWriter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRectilinearGridWriter\nC++: vtkRectilinearGridWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetInput", PyvtkRectilinearGridWriter_GetInput, 1,
   (char*)"V.GetInput() -> vtkRectilinearGrid\nC++: vtkRectilinearGrid *GetInput()\nV.GetInput(int) -> vtkRectilinearGrid\nC++: vtkRectilinearGrid *GetInput(int port)\n\nGet the input to this writer.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRectilinearGridWriter_StaticNew()
{
  return vtkRectilinearGridWriter::New();
}

PyObject *PyVTKClass_vtkRectilinearGridWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRectilinearGridWriter_StaticNew,
    PyvtkRectilinearGridWriter_Methods,
    "vtkRectilinearGridWriter", modulename,
    NULL, NULL,
    PyvtkRectilinearGridWriter_Doc(),
    PyVTKClass_vtkDataWriterNew(modulename));
  return cls;
}

const char **PyvtkRectilinearGridWriter_Doc()
{
  static const char *docstring[] = {
    "vtkRectilinearGridWriter - write vtk rectilinear grid data file\n\n",
    "Superclass: vtkDataWriter\n\n",
    "vtkRectilinearGridWriter is a source object that writes ASCII or\nbinary rectilinear grid data files in vtk format. See text for format\ndetails.\n\nCaveats:\n\nBinary files written on one system may not be readable on other\nsystems.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRectilinearGridWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRectilinearGridWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRectilinearGridWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

