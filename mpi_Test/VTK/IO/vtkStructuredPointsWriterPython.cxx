// python wrapper for vtkStructuredPointsWriter
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
#include "vtkStructuredPointsWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkStructuredPointsWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkStructuredPointsWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkStructuredPointsWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkStructuredPointsWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataWriterNew
extern "C" { PyObject *PyVTKClass_vtkDataWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataWriterNew
#endif

static const char **PyvtkStructuredPointsWriter_Doc();


static PyObject *
PyvtkStructuredPointsWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsWriter *op = static_cast<vtkStructuredPointsWriter *>(vp);

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
      tempr = op->vtkStructuredPointsWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredPointsWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsWriter *op = static_cast<vtkStructuredPointsWriter *>(vp);

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
      tempr = op->vtkStructuredPointsWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredPointsWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsWriter *op = static_cast<vtkStructuredPointsWriter *>(vp);

  vtkStructuredPointsWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkStructuredPointsWriter::NewInstance();
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
PyvtkStructuredPointsWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkStructuredPointsWriter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkStructuredPointsWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredPointsWriter_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsWriter *op = static_cast<vtkStructuredPointsWriter *>(vp);

  vtkImageData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkStructuredPointsWriter::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkStructuredPointsWriter_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsWriter *op = static_cast<vtkStructuredPointsWriter *>(vp);

  int temp0;
  vtkImageData *tempr;
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
      tempr = op->vtkStructuredPointsWriter::GetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkStructuredPointsWriter_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkStructuredPointsWriter_GetInput_s1(self, args);
    case 1:
      return PyvtkStructuredPointsWriter_GetInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return NULL;
}


static PyMethodDef PyvtkStructuredPointsWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkStructuredPointsWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStructuredPointsWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStructuredPointsWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkStructuredPointsWriter\nC++: vtkStructuredPointsWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStructuredPointsWriter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStructuredPointsWriter\nC++: vtkStructuredPointsWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetInput", PyvtkStructuredPointsWriter_GetInput, 1,
   (char*)"V.GetInput() -> vtkImageData\nC++: vtkImageData *GetInput()\nV.GetInput(int) -> vtkImageData\nC++: vtkImageData *GetInput(int port)\n\nGet the input to this writer.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkStructuredPointsWriter_StaticNew()
{
  return vtkStructuredPointsWriter::New();
}

PyObject *PyVTKClass_vtkStructuredPointsWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkStructuredPointsWriter_StaticNew,
    PyvtkStructuredPointsWriter_Methods,
    "vtkStructuredPointsWriter", modulename,
    NULL, NULL,
    PyvtkStructuredPointsWriter_Doc(),
    PyVTKClass_vtkDataWriterNew(modulename));
  return cls;
}

const char **PyvtkStructuredPointsWriter_Doc()
{
  static const char *docstring[] = {
    "vtkStructuredPointsWriter - write vtk structured points data file\n\n",
    "Superclass: vtkDataWriter\n\n",
    "vtkStructuredPointsWriter is a source object that writes ASCII or\nbinary structured points data in vtk file format. See text for format\ndetails.\n\nCaveats:\n\nBinary files written on one system may not be readable on other\nsystems.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStructuredPointsWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStructuredPointsWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStructuredPointsWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

