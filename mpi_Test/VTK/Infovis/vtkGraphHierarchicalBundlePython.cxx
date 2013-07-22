// python wrapper for vtkGraphHierarchicalBundle
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
#include "vtkGraphHierarchicalBundle.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGraphHierarchicalBundle(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGraphHierarchicalBundle(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGraphHierarchicalBundleNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGraphHierarchicalBundleNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkGraphHierarchicalBundle_Doc();


static PyObject *
PyvtkGraphHierarchicalBundle_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphHierarchicalBundle *op = static_cast<vtkGraphHierarchicalBundle *>(vp);

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
      tempr = op->vtkGraphHierarchicalBundle::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphHierarchicalBundle_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphHierarchicalBundle *op = static_cast<vtkGraphHierarchicalBundle *>(vp);

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
      tempr = op->vtkGraphHierarchicalBundle::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphHierarchicalBundle_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphHierarchicalBundle *op = static_cast<vtkGraphHierarchicalBundle *>(vp);

  vtkGraphHierarchicalBundle *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGraphHierarchicalBundle::NewInstance();
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
PyvtkGraphHierarchicalBundle_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGraphHierarchicalBundle *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGraphHierarchicalBundle::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphHierarchicalBundle_SetBundlingStrength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBundlingStrength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphHierarchicalBundle *op = static_cast<vtkGraphHierarchicalBundle *>(vp);

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
      op->vtkGraphHierarchicalBundle::SetBundlingStrength(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphHierarchicalBundle_GetBundlingStrengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBundlingStrengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphHierarchicalBundle *op = static_cast<vtkGraphHierarchicalBundle *>(vp);

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
      tempr = op->vtkGraphHierarchicalBundle::GetBundlingStrengthMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphHierarchicalBundle_GetBundlingStrengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBundlingStrengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphHierarchicalBundle *op = static_cast<vtkGraphHierarchicalBundle *>(vp);

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
      tempr = op->vtkGraphHierarchicalBundle::GetBundlingStrengthMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphHierarchicalBundle_GetBundlingStrength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBundlingStrength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphHierarchicalBundle *op = static_cast<vtkGraphHierarchicalBundle *>(vp);

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
      tempr = op->vtkGraphHierarchicalBundle::GetBundlingStrength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphHierarchicalBundle_SetDirectMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphHierarchicalBundle *op = static_cast<vtkGraphHierarchicalBundle *>(vp);

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
      op->vtkGraphHierarchicalBundle::SetDirectMapping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphHierarchicalBundle_GetDirectMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirectMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphHierarchicalBundle *op = static_cast<vtkGraphHierarchicalBundle *>(vp);

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
      tempr = op->vtkGraphHierarchicalBundle::GetDirectMapping();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphHierarchicalBundle_DirectMappingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DirectMappingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphHierarchicalBundle *op = static_cast<vtkGraphHierarchicalBundle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DirectMappingOn();
      }
    else
      {
      op->vtkGraphHierarchicalBundle::DirectMappingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphHierarchicalBundle_DirectMappingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DirectMappingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphHierarchicalBundle *op = static_cast<vtkGraphHierarchicalBundle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DirectMappingOff();
      }
    else
      {
      op->vtkGraphHierarchicalBundle::DirectMappingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphHierarchicalBundle_FillInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphHierarchicalBundle *op = static_cast<vtkGraphHierarchicalBundle *>(vp);

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
      tempr = op->vtkGraphHierarchicalBundle::FillInputPortInformation(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGraphHierarchicalBundle_Methods[] = {
  {(char*)"GetClassName", PyvtkGraphHierarchicalBundle_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGraphHierarchicalBundle_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGraphHierarchicalBundle_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGraphHierarchicalBundle\nC++: vtkGraphHierarchicalBundle *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGraphHierarchicalBundle_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGraphHierarchicalBundle\nC++: vtkGraphHierarchicalBundle *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetBundlingStrength", PyvtkGraphHierarchicalBundle_SetBundlingStrength, 1,
   (char*)"V.SetBundlingStrength(float)\nC++: void SetBundlingStrength(double)\n\nThe level of arc bundling in the graph. A strength of 0 creates\nstraight lines, while a strength of 1 forces arcs to pass\ndirectly through hierarchy node points. The default value is 0.8.\n"},
  {(char*)"GetBundlingStrengthMinValue", PyvtkGraphHierarchicalBundle_GetBundlingStrengthMinValue, 1,
   (char*)"V.GetBundlingStrengthMinValue() -> float\nC++: double GetBundlingStrengthMinValue()\n\nThe level of arc bundling in the graph. A strength of 0 creates\nstraight lines, while a strength of 1 forces arcs to pass\ndirectly through hierarchy node points. The default value is 0.8.\n"},
  {(char*)"GetBundlingStrengthMaxValue", PyvtkGraphHierarchicalBundle_GetBundlingStrengthMaxValue, 1,
   (char*)"V.GetBundlingStrengthMaxValue() -> float\nC++: double GetBundlingStrengthMaxValue()\n\nThe level of arc bundling in the graph. A strength of 0 creates\nstraight lines, while a strength of 1 forces arcs to pass\ndirectly through hierarchy node points. The default value is 0.8.\n"},
  {(char*)"GetBundlingStrength", PyvtkGraphHierarchicalBundle_GetBundlingStrength, 1,
   (char*)"V.GetBundlingStrength() -> float\nC++: double GetBundlingStrength()\n\nThe level of arc bundling in the graph. A strength of 0 creates\nstraight lines, while a strength of 1 forces arcs to pass\ndirectly through hierarchy node points. The default value is 0.8.\n"},
  {(char*)"SetDirectMapping", PyvtkGraphHierarchicalBundle_SetDirectMapping, 1,
   (char*)"V.SetDirectMapping(bool)\nC++: void SetDirectMapping(bool a)\n\nIf on, uses direct mapping from tree to graph vertices. If off,\nboth the graph and tree must contain PedigreeId arrays which are\nused to match graph and tree vertices. Default is off.\n"},
  {(char*)"GetDirectMapping", PyvtkGraphHierarchicalBundle_GetDirectMapping, 1,
   (char*)"V.GetDirectMapping() -> bool\nC++: bool GetDirectMapping()\n\nIf on, uses direct mapping from tree to graph vertices. If off,\nboth the graph and tree must contain PedigreeId arrays which are\nused to match graph and tree vertices. Default is off.\n"},
  {(char*)"DirectMappingOn", PyvtkGraphHierarchicalBundle_DirectMappingOn, 1,
   (char*)"V.DirectMappingOn()\nC++: void DirectMappingOn()\n\nIf on, uses direct mapping from tree to graph vertices. If off,\nboth the graph and tree must contain PedigreeId arrays which are\nused to match graph and tree vertices. Default is off.\n"},
  {(char*)"DirectMappingOff", PyvtkGraphHierarchicalBundle_DirectMappingOff, 1,
   (char*)"V.DirectMappingOff()\nC++: void DirectMappingOff()\n\nIf on, uses direct mapping from tree to graph vertices. If off,\nboth the graph and tree must contain PedigreeId arrays which are\nused to match graph and tree vertices. Default is off.\n"},
  {(char*)"FillInputPortInformation", PyvtkGraphHierarchicalBundle_FillInputPortInformation, 1,
   (char*)"V.FillInputPortInformation(int, vtkInformation) -> int\nC++: int FillInputPortInformation(int port, vtkInformation *info)\n\nSet the input type of the algorithm to vtkGraph.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGraphHierarchicalBundle_StaticNew()
{
  return vtkGraphHierarchicalBundle::New();
}

PyObject *PyVTKClass_vtkGraphHierarchicalBundleNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGraphHierarchicalBundle_StaticNew,
    PyvtkGraphHierarchicalBundle_Methods,
    "vtkGraphHierarchicalBundle", modulename,
    NULL, NULL,
    PyvtkGraphHierarchicalBundle_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkGraphHierarchicalBundle_Doc()
{
  static const char *docstring[] = {
    "vtkGraphHierarchicalBundle - layout graph arcs in bundles\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "This algorithm creates a vtkPolyData from a vtkGraph.  As opposed to\nvtkGraphToPolyData, which converts each arc into a straight line,\neach arc is converted to a polyline, following a tree structure.  The\nfilter requires both a vtkGraph and vtkTree as input.  The tree\nvertices must be a superset of the graph vertices.  A common example\nis when the graph vertices correspond to the leaves of the tre",
    "e, but\nthe internal vertices of the tree represent groupings of graph\nvertices.  The algorithm matches the vertices using the array\n\"PedigreeId\".  The user may alternately set the DirectMapping flag to\nindicate that the two structures must have directly corresponding\noffsets (i.e. node i in the graph must correspond to node i in the\ntree).\n\nThe vtkGraph defines the topology of the output vtkPolyDa",
    "ta (i.e. the\nconnections between nodes) while the vtkTree defines the geometry\n(i.e. the location of nodes and arc routes).  Thus, the tree must\nhave been assigned vertex locations, but the graph does not need\nlocations, in fact they will be ignored.  The edges approximately\nfollow the path from the source to target nodes in the tree.  A\nbundling parameter controls how closely the edges are bundle",
    "d\ntogether along the tree structure.\n\nYou may follow this algorithm with vtkSplineFilter in order to make\nnicely curved edges.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGraphHierarchicalBundle(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGraphHierarchicalBundleNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGraphHierarchicalBundle", o) != 0)
    {
    Py_DECREF(o);
    }

}

