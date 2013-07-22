// python wrapper for vtkJavaScriptDataWriter
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
#include "vtkJavaScriptDataWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkJavaScriptDataWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkJavaScriptDataWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkJavaScriptDataWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkJavaScriptDataWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkWriterNew
extern "C" { PyObject *PyVTKClass_vtkWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkWriterNew
#endif

static const char **PyvtkJavaScriptDataWriter_Doc();


static PyObject *
PyvtkJavaScriptDataWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJavaScriptDataWriter *op = static_cast<vtkJavaScriptDataWriter *>(vp);

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
      tempr = op->vtkJavaScriptDataWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkJavaScriptDataWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJavaScriptDataWriter *op = static_cast<vtkJavaScriptDataWriter *>(vp);

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
      tempr = op->vtkJavaScriptDataWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkJavaScriptDataWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJavaScriptDataWriter *op = static_cast<vtkJavaScriptDataWriter *>(vp);

  vtkJavaScriptDataWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkJavaScriptDataWriter::NewInstance();
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
PyvtkJavaScriptDataWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkJavaScriptDataWriter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkJavaScriptDataWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkJavaScriptDataWriter_SetVariableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJavaScriptDataWriter *op = static_cast<vtkJavaScriptDataWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVariableName(temp0);
      }
    else
      {
      op->vtkJavaScriptDataWriter::SetVariableName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkJavaScriptDataWriter_GetVariableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJavaScriptDataWriter *op = static_cast<vtkJavaScriptDataWriter *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVariableName();
      }
    else
      {
      tempr = op->vtkJavaScriptDataWriter::GetVariableName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkJavaScriptDataWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJavaScriptDataWriter *op = static_cast<vtkJavaScriptDataWriter *>(vp);

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
      op->vtkJavaScriptDataWriter::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkJavaScriptDataWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJavaScriptDataWriter *op = static_cast<vtkJavaScriptDataWriter *>(vp);

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
      tempr = op->vtkJavaScriptDataWriter::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkJavaScriptDataWriter_SetIncludeFieldNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIncludeFieldNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJavaScriptDataWriter *op = static_cast<vtkJavaScriptDataWriter *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIncludeFieldNames(temp0);
      }
    else
      {
      op->vtkJavaScriptDataWriter::SetIncludeFieldNames(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkJavaScriptDataWriter_GetIncludeFieldNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncludeFieldNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJavaScriptDataWriter *op = static_cast<vtkJavaScriptDataWriter *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIncludeFieldNames();
      }
    else
      {
      tempr = op->vtkJavaScriptDataWriter::GetIncludeFieldNames();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkJavaScriptDataWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkJavaScriptDataWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkJavaScriptDataWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkJavaScriptDataWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkJavaScriptDataWriter\nC++: vtkJavaScriptDataWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkJavaScriptDataWriter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkJavaScriptDataWriter\nC++: vtkJavaScriptDataWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetVariableName", PyvtkJavaScriptDataWriter_SetVariableName, 1,
   (char*)"V.SetVariableName(string)\nC++: void SetVariableName(char *)\n\nGet/set the name of the Javascript variable that the dataset will\nbe assigned to. The default value is \"data\", so the javascript\ncode generated by the filter will look like this: \"var data = [ ...\n];\". If VariableName is set to NULL, then no assignment statement\nwill be generated (i.e., only \"[ ... ];\" will be generated).\n"},
  {(char*)"GetVariableName", PyvtkJavaScriptDataWriter_GetVariableName, 1,
   (char*)"V.GetVariableName() -> string\nC++: char *GetVariableName()\n\nGet/set the name of the Javascript variable that the dataset will\nbe assigned to. The default value is \"data\", so the javascript\ncode generated by the filter will look like this: \"var data = [ ...\n];\". If VariableName is set to NULL, then no assignment statement\nwill be generated (i.e., only \"[ ... ];\" will be generated).\n"},
  {(char*)"SetFileName", PyvtkJavaScriptDataWriter_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nGet/Set the filename for the file.\n"},
  {(char*)"GetFileName", PyvtkJavaScriptDataWriter_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nGet/Set the filename for the file.\n"},
  {(char*)"SetIncludeFieldNames", PyvtkJavaScriptDataWriter_SetIncludeFieldNames, 1,
   (char*)"V.SetIncludeFieldNames(bool)\nC++: void SetIncludeFieldNames(bool a)\n\nGet/Set the whether or not to include field names When field\nnames are on you will get data output that looks like this: var\ndata=[\n      {foo:3,time:\"2009-11-04 16:09:42\",bar:1 },\n      {foo:5,time:\"2009-11-04 16:11:22\",bar:0 }, without field\nnames the data will be an array of arrays like this: var data=[\n      [3,\"2009-11-04 16:09:42\",1],\n      [5,\"2009-11-04 16:11:22\",0],\n\nDefault is ON (true)\n"},
  {(char*)"GetIncludeFieldNames", PyvtkJavaScriptDataWriter_GetIncludeFieldNames, 1,
   (char*)"V.GetIncludeFieldNames() -> bool\nC++: bool GetIncludeFieldNames()\n\nGet/Set the whether or not to include field names When field\nnames are on you will get data output that looks like this: var\ndata=[\n      {foo:3,time:\"2009-11-04 16:09:42\",bar:1 },\n      {foo:5,time:\"2009-11-04 16:11:22\",bar:0 }, without field\nnames the data will be an array of arrays like this: var data=[\n      [3,\"2009-11-04 16:09:42\",1],\n      [5,\"2009-11-04 16:11:22\",0],\n\nDefault is ON (true)\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkJavaScriptDataWriter_StaticNew()
{
  return vtkJavaScriptDataWriter::New();
}

PyObject *PyVTKClass_vtkJavaScriptDataWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkJavaScriptDataWriter_StaticNew,
    PyvtkJavaScriptDataWriter_Methods,
    "vtkJavaScriptDataWriter", modulename,
    NULL, NULL,
    PyvtkJavaScriptDataWriter_Doc(),
    PyVTKClass_vtkWriterNew(modulename));
  return cls;
}

const char **PyvtkJavaScriptDataWriter_Doc()
{
  static const char *docstring[] = {
    "vtkJavaScriptDataWriter - A Javascript data writer for vtkTable\n\n",
    "Superclass: vtkWriter\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkJavaScriptDataWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkJavaScriptDataWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkJavaScriptDataWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

