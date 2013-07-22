// python wrapper for vtkGraphHierarchicalBundleEdges
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
#include "vtkGraphHierarchicalBundleEdges.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGraphHierarchicalBundleEdges(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGraphHierarchicalBundleEdges(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGraphHierarchicalBundleEdgesNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGraphHierarchicalBundleEdgesNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkGraphAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkGraphAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkGraphAlgorithmNew
#endif

static const char **PyvtkGraphHierarchicalBundleEdges_Doc();


static PyObject *
PyvtkGraphHierarchicalBundleEdges_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphHierarchicalBundleEdges *op = static_cast<vtkGraphHierarchicalBundleEdges *>(vp);

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
      tempr = op->vtkGraphHierarchicalBundleEdges::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphHierarchicalBundleEdges_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphHierarchicalBundleEdges *op = static_cast<vtkGraphHierarchicalBundleEdges *>(vp);

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
      tempr = op->vtkGraphHierarchicalBundleEdges::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphHierarchicalBundleEdges_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphHierarchicalBundleEdges *op = static_cast<vtkGraphHierarchicalBundleEdges *>(vp);

  vtkGraphHierarchicalBundleEdges *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGraphHierarchicalBundleEdges::NewInstance();
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
PyvtkGraphHierarchicalBundleEdges_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGraphHierarchicalBundleEdges *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGraphHierarchicalBundleEdges::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphHierarchicalBundleEdges_SetBundlingStrength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBundlingStrength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphHierarchicalBundleEdges *op = static_cast<vtkGraphHierarchicalBundleEdges *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBundlingStrength(temp0);
      }
    else
      {
      op->vtkGraphHierarchicalBundleEdges::SetBundlingStrength(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphHierarchicalBundleEdges_GetBundlingStrengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBundlingStrengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphHierarchicalBundleEdges *op = static_cast<vtkGraphHierarchicalBundleEdges *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBundlingStrengthMinValue();
      }
    else
      {
      tempr = op->vtkGraphHierarchicalBundleEdges::GetBundlingStrengthMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphHierarchicalBundleEdges_GetBundlingStrengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBundlingStrengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphHierarchicalBundleEdges *op = static_cast<vtkGraphHierarchicalBundleEdges *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBundlingStrengthMaxValue();
      }
    else
      {
      tempr = op->vtkGraphHierarchicalBundleEdges::GetBundlingStrengthMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphHierarchicalBundleEdges_GetBundlingStrength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBundlingStrength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphHierarchicalBundleEdges *op = static_cast<vtkGraphHierarchicalBundleEdges *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBundlingStrength();
      }
    else
      {
      tempr = op->vtkGraphHierarchicalBundleEdges::GetBundlingStrength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphHierarchicalBundleEdges_SetDirectMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphHierarchicalBundleEdges *op = static_cast<vtkGraphHierarchicalBundleEdges *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDirectMapping(temp0);
      }
    else
      {
      op->vtkGraphHierarchicalBundleEdges::SetDirectMapping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphHierarchicalBundleEdges_GetDirectMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirectMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphHierarchicalBundleEdges *op = static_cast<vtkGraphHierarchicalBundleEdges *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDirectMapping();
      }
    else
      {
      tempr = op->vtkGraphHierarchicalBundleEdges::GetDirectMapping();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphHierarchicalBundleEdges_DirectMappingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DirectMappingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphHierarchicalBundleEdges *op = static_cast<vtkGraphHierarchicalBundleEdges *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DirectMappingOn();
      }
    else
      {
      op->vtkGraphHierarchicalBundleEdges::DirectMappingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphHierarchicalBundleEdges_DirectMappingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DirectMappingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphHierarchicalBundleEdges *op = static_cast<vtkGraphHierarchicalBundleEdges *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DirectMappingOff();
      }
    else
      {
      op->vtkGraphHierarchicalBundleEdges::DirectMappingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphHierarchicalBundleEdges_FillInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphHierarchicalBundleEdges *op = static_cast<vtkGraphHierarchicalBundleEdges *>(vp);

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
      tempr = op->vtkGraphHierarchicalBundleEdges::FillInputPortInformation(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGraphHierarchicalBundleEdges_Methods[] = {
  {(char*)"GetClassName", PyvtkGraphHierarchicalBundleEdges_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGraphHierarchicalBundleEdges_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGraphHierarchicalBundleEdges_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGraphHierarchicalBundleEdges\nC++: vtkGraphHierarchicalBundleEdges *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGraphHierarchicalBundleEdges_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGraphHierarchicalBundleEdges\nC++: vtkGraphHierarchicalBundleEdges *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetBundlingStrength", PyvtkGraphHierarchicalBundleEdges_SetBundlingStrength, 1,
   (char*)"V.SetBundlingStrength(float)\nC++: void SetBundlingStrength(double)\n\nThe level of arc bundling in the graph. A strength of 0 creates\nstraight lines, while a strength of 1 forces arcs to pass\ndirectly through hierarchy node points. The default value is 0.8.\n"},
  {(char*)"GetBundlingStrengthMinValue", PyvtkGraphHierarchicalBundleEdges_GetBundlingStrengthMinValue, 1,
   (char*)"V.GetBundlingStrengthMinValue() -> float\nC++: double GetBundlingStrengthMinValue()\n\nThe level of arc bundling in the graph. A strength of 0 creates\nstraight lines, while a strength of 1 forces arcs to pass\ndirectly through hierarchy node points. The default value is 0.8.\n"},
  {(char*)"GetBundlingStrengthMaxValue", PyvtkGraphHierarchicalBundleEdges_GetBundlingStrengthMaxValue, 1,
   (char*)"V.GetBundlingStrengthMaxValue() -> float\nC++: double GetBundlingStrengthMaxValue()\n\nThe level of arc bundling in the graph. A strength of 0 creates\nstraight lines, while a strength of 1 forces arcs to pass\ndirectly through hierarchy node points. The default value is 0.8.\n"},
  {(char*)"GetBundlingStrength", PyvtkGraphHierarchicalBundleEdges_GetBundlingStrength, 1,
   (char*)"V.GetBundlingStrength() -> float\nC++: double GetBundlingStrength()\n\nThe level of arc bundling in the graph. A strength of 0 creates\nstraight lines, while a strength of 1 forces arcs to pass\ndirectly through hierarchy node points. The default value is 0.8.\n"},
  {(char*)"SetDirectMapping", PyvtkGraphHierarchicalBundleEdges_SetDirectMapping, 1,
   (char*)"V.SetDirectMapping(bool)\nC++: void SetDirectMapping(bool a)\n\nIf on, uses direct mapping from tree to graph vertices. If off,\nboth the graph and tree must contain PedigreeId arrays which are\nused to match graph and tree vertices. Default is off.\n"},
  {(char*)"GetDirectMapping", PyvtkGraphHierarchicalBundleEdges_GetDirectMapping, 1,
   (char*)"V.GetDirectMapping() -> bool\nC++: bool GetDirectMapping()\n\nIf on, uses direct mapping from tree to graph vertices. If off,\nboth the graph and tree must contain PedigreeId arrays which are\nused to match graph and tree vertices. Default is off.\n"},
  {(char*)"DirectMappingOn", PyvtkGraphHierarchicalBundleEdges_DirectMappingOn, 1,
   (char*)"V.DirectMappingOn()\nC++: void DirectMappingOn()\n\nIf on, uses direct mapping from tree to graph vertices. If off,\nboth the graph and tree must contain PedigreeId arrays which are\nused to match graph and tree vertices. Default is off.\n"},
  {(char*)"DirectMappingOff", PyvtkGraphHierarchicalBundleEdges_DirectMappingOff, 1,
   (char*)"V.DirectMappingOff()\nC++: void DirectMappingOff()\n\nIf on, uses direct mapping from tree to graph vertices. If off,\nboth the graph and tree must contain PedigreeId arrays which are\nused to match graph and tree vertices. Default is off.\n"},
  {(char*)"FillInputPortInformation", PyvtkGraphHierarchicalBundleEdges_FillInputPortInformation, 1,
   (char*)"V.FillInputPortInformation(int, vtkInformation) -> int\nC++: int FillInputPortInformation(int port, vtkInformation *info)\n\nSet the input type of the algorithm to vtkGraph.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGraphHierarchicalBundleEdges_StaticNew()
{
  return vtkGraphHierarchicalBundleEdges::New();
}

PyObject *PyVTKClass_vtkGraphHierarchicalBundleEdgesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGraphHierarchicalBundleEdges_StaticNew,
    PyvtkGraphHierarchicalBundleEdges_Methods,
    "vtkGraphHierarchicalBundleEdges", modulename,
    NULL, NULL,
    PyvtkGraphHierarchicalBundleEdges_Doc(),
    PyVTKClass_vtkGraphAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkGraphHierarchicalBundleEdges_Doc()
{
  static const char *docstring[] = {
    "vtkGraphHierarchicalBundleEdges - layout graph arcs in bundles\n\n",
    "Superclass: vtkGraphAlgorithm\n\n",
    "This algorithm creates a vtkPolyData from a vtkGraph.  As opposed to\nvtkGraphToPolyData, which converts each arc into a straight line,\neach arc is converted to a polyline, following a tree structure.  The\nfilter requires both a vtkGraph and vtkTree as input.  The tree\nvertices must be a superset of the graph vertices.  A common example\nis when the graph vertices correspond to the leaves of the tre",
    "e, but\nthe internal vertices of the tree represent groupings of graph\nvertices.  The algorithm matches the vertices using the array\n\"PedigreeId\".  The user may alternately set the DirectMapping flag to\nindicate that the two structures must have directly corresponding\noffsets (i.e. node i in the graph must correspond to node i in the\ntree).\n\nThe vtkGraph defines the topology of the output vtkPolyDa",
    "ta (i.e. the\nconnections between nodes) while the vtkTree defines the geometry\n(i.e. the location of nodes and arc routes).  Thus, the tree must\nhave been assigned vertex locations, but the graph does not need\nlocations, in fact they will be ignored.  The edges approximately\nfollow the path from the source to target nodes in the tree.  A\nbundling parameter controls how closely the edges are bundle",
    "d\ntogether along the tree structure.\n\nYou may follow this algorithm with vtkSplineFilter in order to make\nnicely curved edges.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGraphHierarchicalBundleEdges(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGraphHierarchicalBundleEdgesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGraphHierarchicalBundleEdges", o) != 0)
    {
    Py_DECREF(o);
    }

}

