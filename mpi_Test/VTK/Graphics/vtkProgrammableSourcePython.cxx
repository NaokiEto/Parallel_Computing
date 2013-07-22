// python wrapper for vtkProgrammableSource
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
#include "vtkProgrammableSource.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkProgrammableSource(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkProgrammableSource(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkProgrammableSourceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkProgrammableSourceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkProgrammableSource_Doc();


static PyObject *
PyvtkProgrammableSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableSource *op = static_cast<vtkProgrammableSource *>(vp);

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
      tempr = op->vtkProgrammableSource::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableSource *op = static_cast<vtkProgrammableSource *>(vp);

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
      tempr = op->vtkProgrammableSource::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableSource *op = static_cast<vtkProgrammableSource *>(vp);

  vtkProgrammableSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkProgrammableSource::NewInstance();
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
PyvtkProgrammableSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkProgrammableSource *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkProgrammableSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableSource_SetExecuteMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExecuteMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableSource *op = static_cast<vtkProgrammableSource *>(vp);

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
      op->vtkProgrammableSource::SetExecuteMethod(
        (temp0 == Py_None ? NULL : vtkPythonVoidFunc),
        (temp0 == Py_None ? NULL : temp0));
      if (temp0 != Py_None)
        {
        Py_INCREF(temp0);
        }
      op->vtkProgrammableSource::SetExecuteMethodArgDelete(
        (temp0 == Py_None ? NULL : vtkPythonVoidFuncArgDelete));
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableSource_GetPolyDataOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyDataOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableSource *op = static_cast<vtkProgrammableSource *>(vp);

  vtkPolyData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPolyDataOutput();
      }
    else
      {
      tempr = op->vtkProgrammableSource::GetPolyDataOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableSource_GetStructuredPointsOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStructuredPointsOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableSource *op = static_cast<vtkProgrammableSource *>(vp);

  vtkStructuredPoints *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStructuredPointsOutput();
      }
    else
      {
      tempr = op->vtkProgrammableSource::GetStructuredPointsOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableSource_GetStructuredGridOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStructuredGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableSource *op = static_cast<vtkProgrammableSource *>(vp);

  vtkStructuredGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStructuredGridOutput();
      }
    else
      {
      tempr = op->vtkProgrammableSource::GetStructuredGridOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableSource_GetUnstructuredGridOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnstructuredGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableSource *op = static_cast<vtkProgrammableSource *>(vp);

  vtkUnstructuredGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUnstructuredGridOutput();
      }
    else
      {
      tempr = op->vtkProgrammableSource::GetUnstructuredGridOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableSource_GetRectilinearGridOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRectilinearGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableSource *op = static_cast<vtkProgrammableSource *>(vp);

  vtkRectilinearGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRectilinearGridOutput();
      }
    else
      {
      tempr = op->vtkProgrammableSource::GetRectilinearGridOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkProgrammableSource_Methods[] = {
  {(char*)"GetClassName", PyvtkProgrammableSource_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkProgrammableSource_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkProgrammableSource_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkProgrammableSource\nC++: vtkProgrammableSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkProgrammableSource_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkProgrammableSource\nC++: vtkProgrammableSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetExecuteMethod", PyvtkProgrammableSource_SetExecuteMethod, 1,
   (char*)"V.SetExecuteMethod(function)\nC++: void SetExecuteMethod(void (*f)(void *) , void *arg)\n\nSpecify the function to use to generate the source data. Note\nthat the function takes a single (void *) argument.\n"},
  {(char*)"GetPolyDataOutput", PyvtkProgrammableSource_GetPolyDataOutput, 1,
   (char*)"V.GetPolyDataOutput() -> vtkPolyData\nC++: vtkPolyData *GetPolyDataOutput()\n\nGet the output as a concrete type. This method is typically used\nby the writer of the source function to get the output as a\nparticular type (i.e., it essentially does type casting). It is\nthe users responsibility to know the correct type of the output\ndata.\n"},
  {(char*)"GetStructuredPointsOutput", PyvtkProgrammableSource_GetStructuredPointsOutput, 1,
   (char*)"V.GetStructuredPointsOutput() -> vtkStructuredPoints\nC++: vtkStructuredPoints *GetStructuredPointsOutput()\n\nGet the output as a concrete type.\n"},
  {(char*)"GetStructuredGridOutput", PyvtkProgrammableSource_GetStructuredGridOutput, 1,
   (char*)"V.GetStructuredGridOutput() -> vtkStructuredGrid\nC++: vtkStructuredGrid *GetStructuredGridOutput()\n\nGet the output as a concrete type.\n"},
  {(char*)"GetUnstructuredGridOutput", PyvtkProgrammableSource_GetUnstructuredGridOutput, 1,
   (char*)"V.GetUnstructuredGridOutput() -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetUnstructuredGridOutput()\n\nGet the output as a concrete type.\n"},
  {(char*)"GetRectilinearGridOutput", PyvtkProgrammableSource_GetRectilinearGridOutput, 1,
   (char*)"V.GetRectilinearGridOutput() -> vtkRectilinearGrid\nC++: vtkRectilinearGrid *GetRectilinearGridOutput()\n\nGet the output as a concrete type.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkProgrammableSource_StaticNew()
{
  return vtkProgrammableSource::New();
}

PyObject *PyVTKClass_vtkProgrammableSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkProgrammableSource_StaticNew,
    PyvtkProgrammableSource_Methods,
    "vtkProgrammableSource", modulename,
    NULL, NULL,
    PyvtkProgrammableSource_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkProgrammableSource_Doc()
{
  static const char *docstring[] = {
    "vtkProgrammableSource - generate source dataset via a user-specified\nfunction\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkProgrammableSource is a source object that is programmable by the\nuser. To use this object, you must specify a function that creates\nthe output.  It is possible to generate an output dataset of any\n(concrete) type; it is up to the function to properly initialize and\ndefine the output. Typically, you use one of the methods to get a\nconcrete output type (e.g., GetPolyDataOutput() or\nGetStructured",
    "PointsOutput()), and then manipulate the output in the\nuser-specified function.\n\nExample use of this include writing a function to read a data file or\ninterface to another system. (You might want to do this in favor of\nderiving a new class.) Another important use of this class is that it\nallows users of interpreters (e.g., Tcl or Java) the ability to write\nsource objects without having to recompil",
    "e C++ code or generate new\nlibraries.\n\nSee Also:\n\nvtkProgrammableFilter vtkProgrammableAttributeDataFilter\nvtkProgrammableDataObjectSource\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkProgrammableSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkProgrammableSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkProgrammableSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

