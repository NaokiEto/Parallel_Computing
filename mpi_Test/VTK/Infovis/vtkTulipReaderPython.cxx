// python wrapper for vtkTulipReader
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
#include "vtkTulipReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTulipReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTulipReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTulipReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTulipReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkUndirectedGraphAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUndirectedGraphAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUndirectedGraphAlgorithmNew
#endif

static const char **PyvtkTulipReader_Doc();


static PyObject *
PyvtkTulipReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTulipReader *op = static_cast<vtkTulipReader *>(vp);

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
      tempr = op->vtkTulipReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTulipReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTulipReader *op = static_cast<vtkTulipReader *>(vp);

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
      tempr = op->vtkTulipReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTulipReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTulipReader *op = static_cast<vtkTulipReader *>(vp);

  vtkTulipReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTulipReader::NewInstance();
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
PyvtkTulipReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTulipReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTulipReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTulipReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTulipReader *op = static_cast<vtkTulipReader *>(vp);

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
      tempr = op->vtkTulipReader::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTulipReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTulipReader *op = static_cast<vtkTulipReader *>(vp);

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
      op->vtkTulipReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTulipReader_Methods[] = {
  {(char*)"GetClassName", PyvtkTulipReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTulipReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTulipReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTulipReader\nC++: vtkTulipReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTulipReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTulipReader\nC++: vtkTulipReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetFileName", PyvtkTulipReader_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nThe Tulip file name.\n"},
  {(char*)"SetFileName", PyvtkTulipReader_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nThe Tulip file name.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTulipReader_StaticNew()
{
  return vtkTulipReader::New();
}

PyObject *PyVTKClass_vtkTulipReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTulipReader_StaticNew,
    PyvtkTulipReader_Methods,
    "vtkTulipReader", modulename,
    NULL, NULL,
    PyvtkTulipReader_Doc(),
    PyVTKClass_vtkUndirectedGraphAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTulipReader_Doc()
{
  static const char *docstring[] = {
    "vtkTulipReader - Reads tulip graph files.\n\n",
    "Superclass: vtkUndirectedGraphAlgorithm\n\n",
    "vtkTulipReader reads in files in the Tulip format. Definition of the\nTulip file format can be found online at:\nhttp://tulip.labri.fr/tlpformat.php An example is the following \n(nodes 0 1 2 3 4 5 6 7 8 9) (edge 0 0 1) (edge 1 1 2) (edge 2 2 3)\n(edge 3 3 4) (edge 4 4 5) (edge 5 5 6) (edge 6 6 7) (edge 7 7 8)\n(edge 8 8 9) (edge 9 9 0) (edge 10 0 5) (edge 11 2 7) (edge 12 4 9) \nwhere \"nodes\" defines a",
    "ll the nodes ids in the graph, and \"edge\" is a\ntriple of edge id, source vertex id, and target vertex id. The graph\nis read in as undirected graph. NOTE: This currently only supports\nreading connectivity information. Also, only string and int\nproperties are supported. Display information is discarded.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTulipReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTulipReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTulipReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

