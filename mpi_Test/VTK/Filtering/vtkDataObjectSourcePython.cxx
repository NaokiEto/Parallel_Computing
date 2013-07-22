// python wrapper for vtkDataObjectSource
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
#include "vtkDataObjectSource.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDataObjectSource(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDataObjectSource(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDataObjectSourceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDataObjectSourceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkSourceNew
extern "C" { PyObject *PyVTKClass_vtkSourceNew(const char *); }
#define DECLARED_PyVTKClass_vtkSourceNew
#endif

static const char **PyvtkDataObjectSource_Doc();


static PyObject *
PyvtkDataObjectSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectSource *op = static_cast<vtkDataObjectSource *>(vp);

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
      tempr = op->vtkDataObjectSource::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectSource *op = static_cast<vtkDataObjectSource *>(vp);

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
      tempr = op->vtkDataObjectSource::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectSource *op = static_cast<vtkDataObjectSource *>(vp);

  vtkDataObjectSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDataObjectSource::NewInstance();
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
PyvtkDataObjectSource_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectSource *op = static_cast<vtkDataObjectSource *>(vp);

  vtkDataObject *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput();
      }
    else
      {
      tempr = op->vtkDataObjectSource::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataObjectSource_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectSource *op = static_cast<vtkDataObjectSource *>(vp);

  int temp0;
  vtkDataObject *tempr;
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
      tempr = op->vtkDataObjectSource::GetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataObjectSource_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkDataObjectSource_GetOutput_s1(self, args);
    case 1:
      return PyvtkDataObjectSource_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}



static PyObject *
PyvtkDataObjectSource_SetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectSource *op = static_cast<vtkDataObjectSource *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetOutput(temp0);
      }
    else
      {
      op->vtkDataObjectSource::SetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkDataObjectSource_Methods[] = {
  {(char*)"GetClassName", PyvtkDataObjectSource_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataObjectSource_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataObjectSource_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDataObjectSource\nC++: vtkDataObjectSource *NewInstance()\n\n"},
  {(char*)"GetOutput", PyvtkDataObjectSource_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkDataObject\nC++: vtkDataObject *GetOutput()\nV.GetOutput(int) -> vtkDataObject\nC++: vtkDataObject *GetOutput(int idx)\n\nGet the output field of this source.\n"},
  {(char*)"SetOutput", PyvtkDataObjectSource_SetOutput, 1,
   (char*)"V.SetOutput(vtkDataObject)\nC++: void SetOutput(vtkDataObject *)\n\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkDataObjectSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkDataObjectSource_Methods,
    "vtkDataObjectSource", modulename,
    NULL, NULL,
    PyvtkDataObjectSource_Doc(),
    PyVTKClass_vtkSourceNew(modulename));
  return cls;
}

const char **PyvtkDataObjectSource_Doc()
{
  static const char *docstring[] = {
    "vtkDataObjectSource - abstract class specifies interface for\n\n",
    "Superclass: vtkSource\n\n",
    "vtkDataObjectSource is an abstract object that specifies behavior and\ninterface of field source objects. Field source objects are source\nobjects that create vtkFieldData (field data) on output.\n\nConcrete subclasses of vtkDataObjectSource must define Update() and\nExecute() methods. The public method Update() invokes network\nexecution and will bring the network up-to-date. The protected\nExecute() me",
    "thod actually does the work of data creation/generation.\nThe difference between the two methods is that Update() implements\ninput consistency checks and modified time comparisons and then\ninvokes the Execute() which is an implementation of a particular\nalgorithm.\n\nvtkDataObjectSource provides a mechanism for invoking the methods\nStartMethod() and EndMethod() before and after object execution (via\n",
    "Execute()). These are convenience methods you can use for any purpose\n(e.g., debugging info, highlighting/notifying user interface, etc.)\nThese methods accept a single void* pointer that can be used to send\ndata to the methods. It is also possible to specify a function to\ndelete the argument via StartMethodArgDelete and EndMethodArgDelete.\n\nAnother method, ProgressMethod() can be specified. Some f",
    "ilters\ninvoke this method periodically during their execution. The use is\nsimilar to that of StartMethod() and EndMethod().\n\nAn important feature of subclasses of vtkDataObjectSource is that it\nis possible to control the memory-management model (i.e., retain\noutput versus delete output data). If enabled the ReleaseDataFlag\nenables the deletion of the output data once the downstream process\nobject ",
    "finishes processing the data (please see text).\n\nSee Also:\n\nvtkSource vtkFilter vtkFieldDataFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataObjectSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataObjectSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataObjectSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

