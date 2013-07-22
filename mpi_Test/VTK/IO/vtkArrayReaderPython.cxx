// python wrapper for vtkArrayReader
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
#include "vtkArrayReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkArrayReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkArrayReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkArrayReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkArrayReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkArrayDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkArrayDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkArrayDataAlgorithmNew
#endif

static const char **PyvtkArrayReader_Doc();


static PyObject *
PyvtkArrayReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayReader *op = static_cast<vtkArrayReader *>(vp);

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
      tempr = op->vtkArrayReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayReader *op = static_cast<vtkArrayReader *>(vp);

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
      tempr = op->vtkArrayReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayReader *op = static_cast<vtkArrayReader *>(vp);

  vtkArrayReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkArrayReader::NewInstance();
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
PyvtkArrayReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkArrayReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkArrayReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayReader *op = static_cast<vtkArrayReader *>(vp);

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
      tempr = op->vtkArrayReader::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayReader *op = static_cast<vtkArrayReader *>(vp);

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
      op->vtkArrayReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkArrayReader_Methods[] = {
  {(char*)"GetClassName", PyvtkArrayReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkArrayReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkArrayReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkArrayReader\nC++: vtkArrayReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkArrayReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkArrayReader\nC++: vtkArrayReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetFileName", PyvtkArrayReader_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSet the filesystem location from which data will be read.\n"},
  {(char*)"SetFileName", PyvtkArrayReader_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSet the filesystem location from which data will be read.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkArrayReader_StaticNew()
{
  return vtkArrayReader::New();
}

PyObject *PyVTKClass_vtkArrayReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkArrayReader_StaticNew,
    PyvtkArrayReader_Methods,
    "vtkArrayReader", modulename,
    NULL, NULL,
    PyvtkArrayReader_Doc(),
    PyVTKClass_vtkArrayDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkArrayReader_Doc()
{
  static const char *docstring[] = {
    "vtkArrayReader -  Reads sparse and dense vtkArray data written by\nvtkArrayWriter.\n\n",
    "Superclass: vtkArrayDataAlgorithm\n\n",
    "Reads sparse and dense vtkArray data written with vtkArrayWriter.\n\nOutputs:\n  Output port 0: vtkArrayData containing a dense or sparse array.\n\nSee Also:\n\nvtkArrayWriter\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkArrayReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkArrayReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkArrayReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

