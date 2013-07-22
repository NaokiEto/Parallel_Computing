// python wrapper for vtkPChacoReader
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
#include "vtkPChacoReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPChacoReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPChacoReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPChacoReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPChacoReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkChacoReaderNew
extern "C" { PyObject *PyVTKClass_vtkChacoReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkChacoReaderNew
#endif

static const char **PyvtkPChacoReader_Doc();


static PyObject *
PyvtkPChacoReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPChacoReader *op = static_cast<vtkPChacoReader *>(vp);

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
      tempr = op->vtkPChacoReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPChacoReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPChacoReader *op = static_cast<vtkPChacoReader *>(vp);

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
      tempr = op->vtkPChacoReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPChacoReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPChacoReader *op = static_cast<vtkPChacoReader *>(vp);

  vtkPChacoReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPChacoReader::NewInstance();
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
PyvtkPChacoReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPChacoReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPChacoReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPChacoReader_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPChacoReader *op = static_cast<vtkPChacoReader *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->SetController(temp0);
      }
    else
      {
      op->vtkPChacoReader::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPChacoReader_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPChacoReader *op = static_cast<vtkPChacoReader *>(vp);

  vtkMultiProcessController *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetController();
      }
    else
      {
      tempr = op->vtkPChacoReader::GetController();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPChacoReader_Methods[] = {
  {(char*)"GetClassName", PyvtkPChacoReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPChacoReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPChacoReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPChacoReader\nC++: vtkPChacoReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPChacoReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPChacoReader\nC++: vtkPChacoReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkPChacoReader_SetController, 1,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: void SetController(vtkMultiProcessController *c)\n\nSet/Get the communicator object (we'll use global World\ncontroller\n  if you don't set a different one).\n"},
  {(char*)"GetController", PyvtkPChacoReader_GetController, 1,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nSet/Get the communicator object (we'll use global World\ncontroller\n  if you don't set a different one).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPChacoReader_StaticNew()
{
  return vtkPChacoReader::New();
}

PyObject *PyVTKClass_vtkPChacoReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPChacoReader_StaticNew,
    PyvtkPChacoReader_Methods,
    "vtkPChacoReader", modulename,
    NULL, NULL,
    PyvtkPChacoReader_Doc(),
    PyVTKClass_vtkChacoReaderNew(modulename));
  return cls;
}

const char **PyvtkPChacoReader_Doc()
{
  static const char *docstring[] = {
    "vtkPChacoReader - Read Chaco files\n\n",
    "Superclass: vtkChacoReader\n\n",
    "vtkPChacoReader is a unstructured grid source object that reads Chaco\nfiles.  The file is read by process 0 and converted into a\nvtkUnstructuredGrid.  The vtkDistributedDataFilter is invoked to\ndivide the grid among the processes.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPChacoReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPChacoReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPChacoReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

