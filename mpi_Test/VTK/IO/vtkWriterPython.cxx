// python wrapper for vtkWriter
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
#include "vtkWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkAlgorithmNew
#endif

static const char **PyvtkWriter_Doc();


static PyObject *
PyvtkWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWriter *op = static_cast<vtkWriter *>(vp);

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
      tempr = op->vtkWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWriter *op = static_cast<vtkWriter *>(vp);

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
      tempr = op->vtkWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWriter *op = static_cast<vtkWriter *>(vp);

  vtkWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkWriter::NewInstance();
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
PyvtkWriter_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWriter *op = static_cast<vtkWriter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->Write();
      }
    else
      {
      tempr = op->vtkWriter::Write();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWriter_EncodeString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EncodeString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWriter *op = static_cast<vtkWriter *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  bool temp2 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->EncodeString(temp0, temp1, temp2);
      }
    else
      {
      op->vtkWriter::EncodeString(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWriter_SetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWriter *op = static_cast<vtkWriter *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkWriter::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkWriter_SetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWriter *op = static_cast<vtkWriter *>(vp);

  int temp0;
  vtkDataObject *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0, temp1);
      }
    else
      {
      op->vtkWriter::SetInput(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkWriter_SetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkWriter_SetInput_s1(self, args);
    case 2:
      return PyvtkWriter_SetInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInput");
  return NULL;
}



static PyObject *
PyvtkWriter_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWriter *op = static_cast<vtkWriter *>(vp);

  vtkDataObject *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkWriter::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkWriter_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWriter *op = static_cast<vtkWriter *>(vp);

  int temp0;
  vtkDataObject *tempr;
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
      tempr = op->vtkWriter::GetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkWriter_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkWriter_GetInput_s1(self, args);
    case 1:
      return PyvtkWriter_GetInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return NULL;
}


static PyMethodDef PyvtkWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkWriter\nC++: vtkWriter *NewInstance()\n\n"},
  {(char*)"Write", PyvtkWriter_Write, 1,
   (char*)"V.Write() -> int\nC++: virtual int Write()\n\nWrite data to output. Method executes subclasses WriteData()\nmethod, as well as StartMethod() and EndMethod() methods. Returns\n1 on success and 0 on failure.\n"},
  {(char*)"EncodeString", PyvtkWriter_EncodeString, 1,
   (char*)"V.EncodeString(string, string, bool)\nC++: void EncodeString(char *resname, const char *name,\n    bool doublePercent)\n\nEncode the string so that the reader will not have problems. The\nresulting string is up to three times the size of the input\nstring.  doublePercent indicates whether to output a double '%'\nbefore escaped characters so the string may be used as a printf\nformat string.\n"},
  {(char*)"SetInput", PyvtkWriter_SetInput, 1,
   (char*)"V.SetInput(vtkDataObject)\nC++: void SetInput(vtkDataObject *input)\nV.SetInput(int, vtkDataObject)\nC++: void SetInput(int index, vtkDataObject *input)\n\nSet/get the input to this writer.\n"},
  {(char*)"GetInput", PyvtkWriter_GetInput, 1,
   (char*)"V.GetInput() -> vtkDataObject\nC++: vtkDataObject *GetInput()\nV.GetInput(int) -> vtkDataObject\nC++: vtkDataObject *GetInput(int port)\n\nSet/get the input to this writer.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkWriter_Methods,
    "vtkWriter", modulename,
    NULL, NULL,
    PyvtkWriter_Doc(),
    PyVTKClass_vtkAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkWriter_Doc()
{
  static const char *docstring[] = {
    "vtkWriter - abstract class to write data to file(s)\n\n",
    "Superclass: vtkAlgorithm\n\n",
    "vtkWriter is an abstract class for mapper objects that write their\ndata to disk (or into a communications port). All writers respond to\nWrite() method. This method insures that there is input and input is\nup to date.\n\nCaveats:\n\nEvery subclass of vtkWriter must implement a WriteData() method. Most\nlikely will have to create SetInput() method as well.\n\nSee Also:\n\nvtkXMLDataSetWriter vtkDataSetWriter",
    " vtkImageWriter vtkMCubesWriter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkWriter", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_ASCII", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_BINARY", o) != 0)
    {
    Py_DECREF(o);
    }

}

