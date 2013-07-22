// python wrapper for vtkExtractSelectedGraph
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
#include "vtkExtractSelectedGraph.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkExtractSelectedGraph(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkExtractSelectedGraph(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkExtractSelectedGraphNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkExtractSelectedGraphNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkGraphAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkGraphAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkGraphAlgorithmNew
#endif

static const char **PyvtkExtractSelectedGraph_Doc();


static PyObject *
PyvtkExtractSelectedGraph_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedGraph *op = static_cast<vtkExtractSelectedGraph *>(vp);

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
      tempr = op->vtkExtractSelectedGraph::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedGraph_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedGraph *op = static_cast<vtkExtractSelectedGraph *>(vp);

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
      tempr = op->vtkExtractSelectedGraph::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedGraph_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedGraph *op = static_cast<vtkExtractSelectedGraph *>(vp);

  vtkExtractSelectedGraph *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkExtractSelectedGraph::NewInstance();
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
PyvtkExtractSelectedGraph_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkExtractSelectedGraph *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkExtractSelectedGraph::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedGraph_SetSelectionConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedGraph *op = static_cast<vtkExtractSelectedGraph *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetSelectionConnection(temp0);
      }
    else
      {
      op->vtkExtractSelectedGraph::SetSelectionConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedGraph_SetAnnotationLayersConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnnotationLayersConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedGraph *op = static_cast<vtkExtractSelectedGraph *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetAnnotationLayersConnection(temp0);
      }
    else
      {
      op->vtkExtractSelectedGraph::SetAnnotationLayersConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedGraph_SetRemoveIsolatedVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRemoveIsolatedVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedGraph *op = static_cast<vtkExtractSelectedGraph *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRemoveIsolatedVertices(temp0);
      }
    else
      {
      op->vtkExtractSelectedGraph::SetRemoveIsolatedVertices(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedGraph_GetRemoveIsolatedVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRemoveIsolatedVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedGraph *op = static_cast<vtkExtractSelectedGraph *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRemoveIsolatedVertices();
      }
    else
      {
      tempr = op->vtkExtractSelectedGraph::GetRemoveIsolatedVertices();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedGraph_RemoveIsolatedVerticesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveIsolatedVerticesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedGraph *op = static_cast<vtkExtractSelectedGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveIsolatedVerticesOn();
      }
    else
      {
      op->vtkExtractSelectedGraph::RemoveIsolatedVerticesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedGraph_RemoveIsolatedVerticesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveIsolatedVerticesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedGraph *op = static_cast<vtkExtractSelectedGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveIsolatedVerticesOff();
      }
    else
      {
      op->vtkExtractSelectedGraph::RemoveIsolatedVerticesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedGraph_FillInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedGraph *op = static_cast<vtkExtractSelectedGraph *>(vp);

  int temp0;
  vtkInformation *temp1 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      tempr = op->FillInputPortInformation(temp0, temp1);
      }
    else
      {
      tempr = op->vtkExtractSelectedGraph::FillInputPortInformation(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkExtractSelectedGraph_Methods[] = {
  {(char*)"GetClassName", PyvtkExtractSelectedGraph_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtractSelectedGraph_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtractSelectedGraph_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkExtractSelectedGraph\nC++: vtkExtractSelectedGraph *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtractSelectedGraph_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtractSelectedGraph\nC++: vtkExtractSelectedGraph *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSelectionConnection", PyvtkExtractSelectedGraph_SetSelectionConnection, 1,
   (char*)"V.SetSelectionConnection(vtkAlgorithmOutput)\nC++: void SetSelectionConnection(vtkAlgorithmOutput *in)\n\nA convenience method for setting the second input (i.e. the\nselection).\n"},
  {(char*)"SetAnnotationLayersConnection", PyvtkExtractSelectedGraph_SetAnnotationLayersConnection, 1,
   (char*)"V.SetAnnotationLayersConnection(vtkAlgorithmOutput)\nC++: void SetAnnotationLayersConnection(vtkAlgorithmOutput *in)\n\nA convenience method for setting the third input (i.e. the\nannotation layers).\n"},
  {(char*)"SetRemoveIsolatedVertices", PyvtkExtractSelectedGraph_SetRemoveIsolatedVertices, 1,
   (char*)"V.SetRemoveIsolatedVertices(bool)\nC++: void SetRemoveIsolatedVertices(bool a)\n\nIf set, removes vertices with no adjacent edges in an edge\nselection. A vertex selection ignores this flag and always\nreturns the full set of selected vertices.  Default is on.\n"},
  {(char*)"GetRemoveIsolatedVertices", PyvtkExtractSelectedGraph_GetRemoveIsolatedVertices, 1,
   (char*)"V.GetRemoveIsolatedVertices() -> bool\nC++: bool GetRemoveIsolatedVertices()\n\nIf set, removes vertices with no adjacent edges in an edge\nselection. A vertex selection ignores this flag and always\nreturns the full set of selected vertices.  Default is on.\n"},
  {(char*)"RemoveIsolatedVerticesOn", PyvtkExtractSelectedGraph_RemoveIsolatedVerticesOn, 1,
   (char*)"V.RemoveIsolatedVerticesOn()\nC++: void RemoveIsolatedVerticesOn()\n\nIf set, removes vertices with no adjacent edges in an edge\nselection. A vertex selection ignores this flag and always\nreturns the full set of selected vertices.  Default is on.\n"},
  {(char*)"RemoveIsolatedVerticesOff", PyvtkExtractSelectedGraph_RemoveIsolatedVerticesOff, 1,
   (char*)"V.RemoveIsolatedVerticesOff()\nC++: void RemoveIsolatedVerticesOff()\n\nIf set, removes vertices with no adjacent edges in an edge\nselection. A vertex selection ignores this flag and always\nreturns the full set of selected vertices.  Default is on.\n"},
  {(char*)"FillInputPortInformation", PyvtkExtractSelectedGraph_FillInputPortInformation, 1,
   (char*)"V.FillInputPortInformation(int, vtkInformation) -> int\nC++: int FillInputPortInformation(int port, vtkInformation *info)\n\nSpecify the first vtkGraph input and the second vtkSelection\ninput.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtractSelectedGraph_StaticNew()
{
  return vtkExtractSelectedGraph::New();
}

PyObject *PyVTKClass_vtkExtractSelectedGraphNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtractSelectedGraph_StaticNew,
    PyvtkExtractSelectedGraph_Methods,
    "vtkExtractSelectedGraph", modulename,
    NULL, NULL,
    PyvtkExtractSelectedGraph_Doc(),
    PyVTKClass_vtkGraphAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkExtractSelectedGraph_Doc()
{
  static const char *docstring[] = {
    "vtkExtractSelectedGraph - return a subgraph of a vtkGraph\n\n",
    "Superclass: vtkGraphAlgorithm\n\n",
    "The first input is a vtkGraph to take a subgraph from. The second\ninput (optional) is a vtkSelection containing selected indices. The\nthird input (optional) is a vtkAnnotationsLayers whose annotations\ncontain selected specifying selected indices. The vtkSelection may\nhave FIELD_TYPE set to POINTS (a vertex selection) or CELLS (an edge\nselection).  A vertex selection preserves all edges that connec",
    "t\nselected vertices.  An edge selection preserves all vertices that are\nadjacent to at least one selected edge.  Alternately, you may\nindicate that an edge selection should maintain the full set of\nvertices, by turning RemoveIsolatedVertices off.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtractSelectedGraph(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtractSelectedGraphNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtractSelectedGraph", o) != 0)
    {
    Py_DECREF(o);
    }

}

