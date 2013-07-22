// python wrapper for vtkSimplePointsReader
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
#include "vtkSimplePointsReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSimplePointsReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSimplePointsReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSimplePointsReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSimplePointsReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkSimplePointsReader_Doc();


static PyObject *
PyvtkSimplePointsReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimplePointsReader *op = static_cast<vtkSimplePointsReader *>(vp);

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
      tempr = op->vtkSimplePointsReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimplePointsReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimplePointsReader *op = static_cast<vtkSimplePointsReader *>(vp);

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
      tempr = op->vtkSimplePointsReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimplePointsReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimplePointsReader *op = static_cast<vtkSimplePointsReader *>(vp);

  vtkSimplePointsReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSimplePointsReader::NewInstance();
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
PyvtkSimplePointsReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSimplePointsReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSimplePointsReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimplePointsReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimplePointsReader *op = static_cast<vtkSimplePointsReader *>(vp);

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
      op->vtkSimplePointsReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSimplePointsReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimplePointsReader *op = static_cast<vtkSimplePointsReader *>(vp);

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
      tempr = op->vtkSimplePointsReader::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSimplePointsReader_Methods[] = {
  {(char*)"GetClassName", PyvtkSimplePointsReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSimplePointsReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSimplePointsReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSimplePointsReader\nC++: vtkSimplePointsReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSimplePointsReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSimplePointsReader\nC++: vtkSimplePointsReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkSimplePointsReader_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSet/Get the name of the file from which to read points.\n"},
  {(char*)"GetFileName", PyvtkSimplePointsReader_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSet/Get the name of the file from which to read points.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSimplePointsReader_StaticNew()
{
  return vtkSimplePointsReader::New();
}

PyObject *PyVTKClass_vtkSimplePointsReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSimplePointsReader_StaticNew,
    PyvtkSimplePointsReader_Methods,
    "vtkSimplePointsReader", modulename,
    NULL, NULL,
    PyvtkSimplePointsReader_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkSimplePointsReader_Doc()
{
  static const char *docstring[] = {
    "vtkSimplePointsReader - Read a list of points from a file.\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkSimplePointsReader is a source object that reads a list of points\nfrom a file.  Each point is specified by three floating-point values\nin ASCII format.  There is one point per line of the file.  A vertex\ncell is created for each point in the output.  This reader is meant\nas an example of how to write a reader in VTK.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSimplePointsReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSimplePointsReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSimplePointsReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

