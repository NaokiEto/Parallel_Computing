// python wrapper for vtkDIMACSGraphWriter
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
#include "vtkDIMACSGraphWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDIMACSGraphWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDIMACSGraphWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDIMACSGraphWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDIMACSGraphWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataWriterNew
extern "C" { PyObject *PyVTKClass_vtkDataWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataWriterNew
#endif

static const char **PyvtkDIMACSGraphWriter_Doc();


static PyObject *
PyvtkDIMACSGraphWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphWriter *op = static_cast<vtkDIMACSGraphWriter *>(vp);

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
      tempr = op->vtkDIMACSGraphWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDIMACSGraphWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphWriter *op = static_cast<vtkDIMACSGraphWriter *>(vp);

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
      tempr = op->vtkDIMACSGraphWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDIMACSGraphWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphWriter *op = static_cast<vtkDIMACSGraphWriter *>(vp);

  vtkDIMACSGraphWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDIMACSGraphWriter::NewInstance();
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
PyvtkDIMACSGraphWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDIMACSGraphWriter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDIMACSGraphWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDIMACSGraphWriter_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphWriter *op = static_cast<vtkDIMACSGraphWriter *>(vp);

  vtkGraph *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkDIMACSGraphWriter::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDIMACSGraphWriter_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphWriter *op = static_cast<vtkDIMACSGraphWriter *>(vp);

  int temp0;
  vtkGraph *tempr;
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
      tempr = op->vtkDIMACSGraphWriter::GetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDIMACSGraphWriter_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkDIMACSGraphWriter_GetInput_s1(self, args);
    case 1:
      return PyvtkDIMACSGraphWriter_GetInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return NULL;
}


static PyMethodDef PyvtkDIMACSGraphWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkDIMACSGraphWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDIMACSGraphWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDIMACSGraphWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDIMACSGraphWriter\nC++: vtkDIMACSGraphWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDIMACSGraphWriter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDIMACSGraphWriter\nC++: vtkDIMACSGraphWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetInput", PyvtkDIMACSGraphWriter_GetInput, 1,
   (char*)"V.GetInput() -> vtkGraph\nC++: vtkGraph *GetInput()\nV.GetInput(int) -> vtkGraph\nC++: vtkGraph *GetInput(int port)\n\nGet the input to this writer.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDIMACSGraphWriter_StaticNew()
{
  return vtkDIMACSGraphWriter::New();
}

PyObject *PyVTKClass_vtkDIMACSGraphWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDIMACSGraphWriter_StaticNew,
    PyvtkDIMACSGraphWriter_Methods,
    "vtkDIMACSGraphWriter", modulename,
    NULL, NULL,
    PyvtkDIMACSGraphWriter_Doc(),
    PyVTKClass_vtkDataWriterNew(modulename));
  return cls;
}

const char **PyvtkDIMACSGraphWriter_Doc()
{
  static const char *docstring[] = {
    "vtkDIMACSGraphWriter - write vtkGraph data to a DIMACS\n\n",
    "Superclass: vtkDataWriter\n\n",
    "vtkDIMACSGraphWriter is a sink object that writes vtkGraph data files\nin DIMACS (.gr) format. See webpage for format details.\nhttp://prolland.free.fr/works/research/dsat/dimacs.html\n\nSee Also:\n\nvtkDIMACSGraphReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDIMACSGraphWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDIMACSGraphWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDIMACSGraphWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

