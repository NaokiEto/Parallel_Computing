// python wrapper for vtkGenericMovieWriter
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
#include "vtkGenericMovieWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGenericMovieWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGenericMovieWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGenericMovieWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGenericMovieWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkProcessObjectNew
extern "C" { PyObject *PyVTKClass_vtkProcessObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkProcessObjectNew
#endif

static const char **PyvtkGenericMovieWriter_Doc();


static PyObject *
PyvtkGenericMovieWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericMovieWriter *op = static_cast<vtkGenericMovieWriter *>(vp);

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
      tempr = op->vtkGenericMovieWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericMovieWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericMovieWriter *op = static_cast<vtkGenericMovieWriter *>(vp);

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
      tempr = op->vtkGenericMovieWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericMovieWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericMovieWriter *op = static_cast<vtkGenericMovieWriter *>(vp);

  vtkGenericMovieWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGenericMovieWriter::NewInstance();
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
PyvtkGenericMovieWriter_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericMovieWriter *op = static_cast<vtkGenericMovieWriter *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkGenericMovieWriter::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericMovieWriter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericMovieWriter *op = static_cast<vtkGenericMovieWriter *>(vp);

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
      tempr = op->vtkGenericMovieWriter::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericMovieWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericMovieWriter *op = static_cast<vtkGenericMovieWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileName(temp0);
      }
    else
      {
      op->vtkGenericMovieWriter::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericMovieWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericMovieWriter *op = static_cast<vtkGenericMovieWriter *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFileName();
      }
    else
      {
      tempr = op->vtkGenericMovieWriter::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericMovieWriter_Start(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Start");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericMovieWriter *op = static_cast<vtkGenericMovieWriter *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->Start();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericMovieWriter_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericMovieWriter *op = static_cast<vtkGenericMovieWriter *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->Write();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericMovieWriter_End(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "End");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericMovieWriter *op = static_cast<vtkGenericMovieWriter *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->End();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericMovieWriter_GetError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericMovieWriter *op = static_cast<vtkGenericMovieWriter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetError();
      }
    else
      {
      tempr = op->vtkGenericMovieWriter::GetError();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericMovieWriter_GetStringFromErrorCode(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetStringFromErrorCode");

  unsigned long temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkGenericMovieWriter::GetStringFromErrorCode(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGenericMovieWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkGenericMovieWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGenericMovieWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGenericMovieWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGenericMovieWriter\nC++: vtkGenericMovieWriter *NewInstance()\n\n"},
  {(char*)"SetInput", PyvtkGenericMovieWriter_SetInput, 1,
   (char*)"V.SetInput(vtkImageData)\nC++: virtual void SetInput(vtkImageData *input)\n\nSet/Get the input object from the image pipeline.\n"},
  {(char*)"GetInput", PyvtkGenericMovieWriter_GetInput, 1,
   (char*)"V.GetInput() -> vtkImageData\nC++: virtual vtkImageData *GetInput()\n\nSet/Get the input object from the image pipeline.\n"},
  {(char*)"SetFileName", PyvtkGenericMovieWriter_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSpecify file name of avi file.\n"},
  {(char*)"GetFileName", PyvtkGenericMovieWriter_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSpecify file name of avi file.\n"},
  {(char*)"Start", PyvtkGenericMovieWriter_Start, 1,
   (char*)"V.Start()\nC++: virtual void Start()\n\nThese methods start writing an Movie file, write a frame to the\nfile and then end the writing process.\n"},
  {(char*)"Write", PyvtkGenericMovieWriter_Write, 1,
   (char*)"V.Write()\nC++: virtual void Write()\n\nThese methods start writing an Movie file, write a frame to the\nfile and then end the writing process.\n"},
  {(char*)"End", PyvtkGenericMovieWriter_End, 1,
   (char*)"V.End()\nC++: virtual void End()\n\nThese methods start writing an Movie file, write a frame to the\nfile and then end the writing process.\n"},
  {(char*)"GetError", PyvtkGenericMovieWriter_GetError, 1,
   (char*)"V.GetError() -> int\nC++: int GetError()\n\nWas there an error on the last write performed?\n"},
  {(char*)"GetStringFromErrorCode", PyvtkGenericMovieWriter_GetStringFromErrorCode, 1,
   (char*)"V.GetStringFromErrorCode(int) -> string\nC++: static const char *GetStringFromErrorCode(\n    unsigned long event)\n\nConverts vtkErrorCodes and vtkGenericMovieWriter errors to\nstrings.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkGenericMovieWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkGenericMovieWriter_Methods,
    "vtkGenericMovieWriter", modulename,
    NULL, NULL,
    PyvtkGenericMovieWriter_Doc(),
    PyVTKClass_vtkProcessObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(40000);
    if (o && PyDict_SetItemString(d, (char *)"UserError", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(40001);
    if (o && PyDict_SetItemString(d, (char *)"InitError", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(40002);
    if (o && PyDict_SetItemString(d, (char *)"NoInputError", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(40003);
    if (o && PyDict_SetItemString(d, (char *)"CanNotCompress", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(40004);
    if (o && PyDict_SetItemString(d, (char *)"CanNotFormat", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(40005);
    if (o && PyDict_SetItemString(d, (char *)"ChangedResolutionError", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkGenericMovieWriter_Doc()
{
  static const char *docstring[] = {
    "vtkGenericMovieWriter - an abstract movie writer class.\n\n",
    "Superclass: vtkProcessObject\n\n",
    "vtkGenericMovieWriter is the abstract base class for several movie\nwriters. The input type is a vtkImageData. The Start() method will\nopen and create the file, the Write() method will output a frame to\nthe file (i.e. the contents of the vtkImageData), End() will finalize\nand close the file.\n\nSee Also:\n\nvtkAVIWriter vtkMPEG2Writer\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGenericMovieWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGenericMovieWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGenericMovieWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

