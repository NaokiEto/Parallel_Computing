// python wrapper for vtkChacoGraphReader
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
#include "vtkChacoGraphReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkChacoGraphReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkChacoGraphReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkChacoGraphReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkChacoGraphReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkUndirectedGraphAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUndirectedGraphAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUndirectedGraphAlgorithmNew
#endif

static const char **PyvtkChacoGraphReader_Doc();


static PyObject *
PyvtkChacoGraphReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoGraphReader *op = static_cast<vtkChacoGraphReader *>(vp);

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
      tempr = op->vtkChacoGraphReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChacoGraphReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoGraphReader *op = static_cast<vtkChacoGraphReader *>(vp);

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
      tempr = op->vtkChacoGraphReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChacoGraphReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoGraphReader *op = static_cast<vtkChacoGraphReader *>(vp);

  vtkChacoGraphReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkChacoGraphReader::NewInstance();
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
PyvtkChacoGraphReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkChacoGraphReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkChacoGraphReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChacoGraphReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoGraphReader *op = static_cast<vtkChacoGraphReader *>(vp);

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
      tempr = op->vtkChacoGraphReader::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChacoGraphReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoGraphReader *op = static_cast<vtkChacoGraphReader *>(vp);

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
      op->vtkChacoGraphReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkChacoGraphReader_Methods[] = {
  {(char*)"GetClassName", PyvtkChacoGraphReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkChacoGraphReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkChacoGraphReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkChacoGraphReader\nC++: vtkChacoGraphReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkChacoGraphReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkChacoGraphReader\nC++: vtkChacoGraphReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetFileName", PyvtkChacoGraphReader_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nThe Chaco file name.\n"},
  {(char*)"SetFileName", PyvtkChacoGraphReader_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nThe Chaco file name.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkChacoGraphReader_StaticNew()
{
  return vtkChacoGraphReader::New();
}

PyObject *PyVTKClass_vtkChacoGraphReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkChacoGraphReader_StaticNew,
    PyvtkChacoGraphReader_Methods,
    "vtkChacoGraphReader", modulename,
    NULL, NULL,
    PyvtkChacoGraphReader_Doc(),
    PyVTKClass_vtkUndirectedGraphAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkChacoGraphReader_Doc()
{
  static const char *docstring[] = {
    "vtkChacoGraphReader - Reads chaco graph files.\n\n",
    "Superclass: vtkUndirectedGraphAlgorithm\n\n",
    "vtkChacoGraphReader reads in files in the Chaco format into a\nvtkGraph. An example is the following  10 13 2 6 10 1 3 2 4 8 3 5 4 6\n10 1 5 7 6 8 3 7 9 8 10 1 5 9  The first line specifies the number of\nvertices and edges in the graph. Each additional line contains the\nvertices adjacent to a particular vertex.  In this example, vertex 1\nis adjacent to 2, 6 and 10, vertex 2 is adjacent to 1 and 3, e",
    "tc. \nSince Chaco ids start at 1 and VTK ids start at 0, the vertex ids in\nthe vtkGraph will be 1 less than the Chaco ids.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkChacoGraphReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkChacoGraphReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkChacoGraphReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

