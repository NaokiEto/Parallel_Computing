// python wrapper for vtkPOpenFOAMReader
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
#include "vtkPOpenFOAMReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPOpenFOAMReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPOpenFOAMReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPOpenFOAMReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPOpenFOAMReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkOpenFOAMReaderNew
extern "C" { PyObject *PyVTKClass_vtkOpenFOAMReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkOpenFOAMReaderNew
#endif

static const char **PyvtkPOpenFOAMReader_Doc();


static PyObject *
PyvtkPOpenFOAMReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOpenFOAMReader *op = static_cast<vtkPOpenFOAMReader *>(vp);

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
      tempr = op->vtkPOpenFOAMReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPOpenFOAMReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOpenFOAMReader *op = static_cast<vtkPOpenFOAMReader *>(vp);

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
      tempr = op->vtkPOpenFOAMReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPOpenFOAMReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOpenFOAMReader *op = static_cast<vtkPOpenFOAMReader *>(vp);

  vtkPOpenFOAMReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPOpenFOAMReader::NewInstance();
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
PyvtkPOpenFOAMReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPOpenFOAMReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPOpenFOAMReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPOpenFOAMReader_SetCaseType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCaseType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOpenFOAMReader *op = static_cast<vtkPOpenFOAMReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCaseType(temp0);
      }
    else
      {
      op->vtkPOpenFOAMReader::SetCaseType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPOpenFOAMReader_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOpenFOAMReader *op = static_cast<vtkPOpenFOAMReader *>(vp);

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
      op->vtkPOpenFOAMReader::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPOpenFOAMReader_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOpenFOAMReader *op = static_cast<vtkPOpenFOAMReader *>(vp);

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
      tempr = op->vtkPOpenFOAMReader::GetController();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPOpenFOAMReader_Methods[] = {
  {(char*)"GetClassName", PyvtkPOpenFOAMReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPOpenFOAMReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPOpenFOAMReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPOpenFOAMReader\nC++: vtkPOpenFOAMReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPOpenFOAMReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPOpenFOAMReader\nC++: vtkPOpenFOAMReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCaseType", PyvtkPOpenFOAMReader_SetCaseType, 1,
   (char*)"V.SetCaseType(int)\nC++: void SetCaseType(const int t)\n\nSet and get case type. 0 = decomposed case, 1 = reconstructed\ncase.\n"},
  {(char*)"SetController", PyvtkPOpenFOAMReader_SetController, 1,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nSet and get the controller.\n"},
  {(char*)"GetController", PyvtkPOpenFOAMReader_GetController, 1,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nSet and get the controller.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPOpenFOAMReader_StaticNew()
{
  return vtkPOpenFOAMReader::New();
}

PyObject *PyVTKClass_vtkPOpenFOAMReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPOpenFOAMReader_StaticNew,
    PyvtkPOpenFOAMReader_Methods,
    "vtkPOpenFOAMReader", modulename,
    NULL, NULL,
    PyvtkPOpenFOAMReader_Doc(),
    PyVTKClass_vtkOpenFOAMReaderNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"DECOMPOSED_CASE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"RECONSTRUCTED_CASE", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkPOpenFOAMReader_Doc()
{
  static const char *docstring[] = {
    "vtkPOpenFOAMReader - reads a decomposed dataset in OpenFOAM format\n\n",
    "Superclass: vtkOpenFOAMReader\n\n",
    "vtkPOpenFOAMReader creates a multiblock dataset. It reads\nparallel-decomposed mesh information and time dependent data.  The\npolyMesh folders contain mesh information. The time folders contain\ntransient data for the cells. Each folder can contain any number of\ndata files.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPOpenFOAMReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPOpenFOAMReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPOpenFOAMReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

