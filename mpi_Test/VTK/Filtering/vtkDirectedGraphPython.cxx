// python wrapper for vtkDirectedGraph
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
#include "vtkDirectedGraph.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDirectedGraph(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDirectedGraph(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDirectedGraphNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDirectedGraphNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkGraphNew
extern "C" { PyObject *PyVTKClass_vtkGraphNew(const char *); }
#define DECLARED_PyVTKClass_vtkGraphNew
#endif

static const char **PyvtkDirectedGraph_Doc();


static PyObject *
PyvtkDirectedGraph_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectedGraph *op = static_cast<vtkDirectedGraph *>(vp);

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
      tempr = op->vtkDirectedGraph::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDirectedGraph_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectedGraph *op = static_cast<vtkDirectedGraph *>(vp);

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
      tempr = op->vtkDirectedGraph::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDirectedGraph_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectedGraph *op = static_cast<vtkDirectedGraph *>(vp);

  vtkDirectedGraph *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDirectedGraph::NewInstance();
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
PyvtkDirectedGraph_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDirectedGraph *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDirectedGraph::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDirectedGraph_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectedGraph *op = static_cast<vtkDirectedGraph *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataObjectType();
      }
    else
      {
      tempr = op->vtkDirectedGraph::GetDataObjectType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDirectedGraph_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = NULL;
  vtkDirectedGraph *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    tempr = vtkDirectedGraph::GetData(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDirectedGraph_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = NULL;
  int temp1 = 0;
  vtkDirectedGraph *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    tempr = vtkDirectedGraph::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDirectedGraph_GetData_Methods[] = {
  {NULL, PyvtkDirectedGraph_GetData_s1, 1,
   (char*)"O *vtkInformation"},
  {NULL, PyvtkDirectedGraph_GetData_s2, 1,
   (char*)"O|i *vtkInformationVector"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDirectedGraph_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDirectedGraph_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkDirectedGraph_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return NULL;
}



static PyObject *
PyvtkDirectedGraph_IsStructureValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsStructureValid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectedGraph *op = static_cast<vtkDirectedGraph *>(vp);

  vtkGraph *temp0 = NULL;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGraph"))
    {
    if (ap.IsBound())
      {
      tempr = op->IsStructureValid(temp0);
      }
    else
      {
      tempr = op->vtkDirectedGraph::IsStructureValid(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDirectedGraph_Methods[] = {
  {(char*)"GetClassName", PyvtkDirectedGraph_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDirectedGraph_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDirectedGraph_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDirectedGraph\nC++: vtkDirectedGraph *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDirectedGraph_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDirectedGraph\nC++: vtkDirectedGraph *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDataObjectType", PyvtkDirectedGraph_GetDataObjectType, 1,
   (char*)"V.GetDataObjectType() -> int\nC++: virtual int GetDataObjectType()\n\nReturn what type of dataset this is.\n"},
  {(char*)"GetData", PyvtkDirectedGraph_GetData, 1,
   (char*)"V.GetData(vtkInformation) -> vtkDirectedGraph\nC++: static vtkDirectedGraph *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkDirectedGraph\nC++: static vtkDirectedGraph *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve a graph from an information vector.\n"},
  {(char*)"IsStructureValid", PyvtkDirectedGraph_IsStructureValid, 1,
   (char*)"V.IsStructureValid(vtkGraph) -> bool\nC++: virtual bool IsStructureValid(vtkGraph *g)\n\nCheck the storage, and accept it if it is a valid undirected\ngraph. This is public to allow the ToDirected/UndirectedGraph to\nwork.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDirectedGraph_StaticNew()
{
  return vtkDirectedGraph::New();
}

PyObject *PyVTKClass_vtkDirectedGraphNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDirectedGraph_StaticNew,
    PyvtkDirectedGraph_Methods,
    "vtkDirectedGraph", modulename,
    NULL, NULL,
    PyvtkDirectedGraph_Doc(),
    PyVTKClass_vtkGraphNew(modulename));
  return cls;
}

const char **PyvtkDirectedGraph_Doc()
{
  static const char *docstring[] = {
    "vtkDirectedGraph - A directed graph.\n\n",
    "Superclass: vtkGraph\n\n",
    "vtkDirectedGraph is a collection of vertices along with a collection\nof directed edges (edges that have a source and target).\nShallowCopy() and DeepCopy() (and CheckedShallowCopy(),\nCheckedDeepCopy()) accept instances of vtkTree and\nvtkMutableDirectedGraph.\n\nvtkDirectedGraph is read-only. To create an undirected graph, use an\ninstance of vtkMutableDirectedGraph, then you may set the structure\nto a",
    " vtkDirectedGraph using ShallowCopy().\n\nSee Also:\n\nvtkGraph vtkMutableDirectedGraph\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDirectedGraph(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDirectedGraphNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDirectedGraph", o) != 0)
    {
    Py_DECREF(o);
    }

}

