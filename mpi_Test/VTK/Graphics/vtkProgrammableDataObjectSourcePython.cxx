// python wrapper for vtkProgrammableDataObjectSource
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
#include "vtkProgrammableDataObjectSource.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkProgrammableDataObjectSource(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkProgrammableDataObjectSource(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkProgrammableDataObjectSourceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkProgrammableDataObjectSourceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
#endif

static const char **PyvtkProgrammableDataObjectSource_Doc();


static PyObject *
PyvtkProgrammableDataObjectSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableDataObjectSource *op = static_cast<vtkProgrammableDataObjectSource *>(vp);

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
      tempr = op->vtkProgrammableDataObjectSource::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableDataObjectSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableDataObjectSource *op = static_cast<vtkProgrammableDataObjectSource *>(vp);

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
      tempr = op->vtkProgrammableDataObjectSource::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableDataObjectSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableDataObjectSource *op = static_cast<vtkProgrammableDataObjectSource *>(vp);

  vtkProgrammableDataObjectSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkProgrammableDataObjectSource::NewInstance();
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
PyvtkProgrammableDataObjectSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkProgrammableDataObjectSource *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkProgrammableDataObjectSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableDataObjectSource_SetExecuteMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExecuteMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableDataObjectSource *op = static_cast<vtkProgrammableDataObjectSource *>(vp);

  PyObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFunction(temp0))
    {
    if (ap.IsBound())
      {
      op->SetExecuteMethod(
        (temp0 == Py_None ? NULL : vtkPythonVoidFunc),
        (temp0 == Py_None ? NULL : temp0));
      if (temp0 != Py_None)
        {
        Py_INCREF(temp0);
        }
      op->SetExecuteMethodArgDelete(
        (temp0 == Py_None ? NULL : vtkPythonVoidFuncArgDelete));
      }
    else
      {
      op->vtkProgrammableDataObjectSource::SetExecuteMethod(
        (temp0 == Py_None ? NULL : vtkPythonVoidFunc),
        (temp0 == Py_None ? NULL : temp0));
      if (temp0 != Py_None)
        {
        Py_INCREF(temp0);
        }
      op->vtkProgrammableDataObjectSource::SetExecuteMethodArgDelete(
        (temp0 == Py_None ? NULL : vtkPythonVoidFuncArgDelete));
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkProgrammableDataObjectSource_Methods[] = {
  {(char*)"GetClassName", PyvtkProgrammableDataObjectSource_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkProgrammableDataObjectSource_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkProgrammableDataObjectSource_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkProgrammableDataObjectSource\nC++: vtkProgrammableDataObjectSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkProgrammableDataObjectSource_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkProgrammableDataObjectSource\nC++: vtkProgrammableDataObjectSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetExecuteMethod", PyvtkProgrammableDataObjectSource_SetExecuteMethod, 1,
   (char*)"V.SetExecuteMethod(function)\nC++: void SetExecuteMethod(void (*f)(void *) , void *arg)\n\nSpecify the function to use to generate the output data object.\nNote that the function takes a single (void *) argument.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkProgrammableDataObjectSource_StaticNew()
{
  return vtkProgrammableDataObjectSource::New();
}

PyObject *PyVTKClass_vtkProgrammableDataObjectSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkProgrammableDataObjectSource_StaticNew,
    PyvtkProgrammableDataObjectSource_Methods,
    "vtkProgrammableDataObjectSource", modulename,
    NULL, NULL,
    PyvtkProgrammableDataObjectSource_Doc(),
    PyVTKClass_vtkDataObjectAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkProgrammableDataObjectSource_Doc()
{
  static const char *docstring[] = {
    "vtkProgrammableDataObjectSource - generate source data object via a\nuser-specified function\n\n",
    "Superclass: vtkDataObjectAlgorithm\n\n",
    "vtkProgrammableDataObjectSource is a source object that is\nprogrammable by the user. The output of the filter is a data object\n(vtkDataObject) which represents data via an instance of field data.\nTo use this object, you must specify a function that creates the\noutput.\n\nExample use of this filter includes reading tabular data and encoding\nit as vtkFieldData. You can then use filters like\nvtkDataObj",
    "ectToDataSetFilter to convert the data object to a dataset\nand then visualize it.  Another important use of this class is that\nit allows users of interpreters (e.g., Tcl or Java) the ability to\nwrite source objects without having to recompile C++ code or generate\nnew libraries.\n\nSee Also:\n\nvtkProgrammableFilter vtkProgrammableAttributeDataFilter\nvtkProgrammableSource vtkDataObjectToDataSetFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkProgrammableDataObjectSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkProgrammableDataObjectSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkProgrammableDataObjectSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

