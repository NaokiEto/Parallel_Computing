// python wrapper for vtkSpanTreeLayoutStrategy
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
#include "vtkSpanTreeLayoutStrategy.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSpanTreeLayoutStrategy(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSpanTreeLayoutStrategy(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSpanTreeLayoutStrategyNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSpanTreeLayoutStrategyNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkGraphLayoutStrategyNew
extern "C" { PyObject *PyVTKClass_vtkGraphLayoutStrategyNew(const char *); }
#define DECLARED_PyVTKClass_vtkGraphLayoutStrategyNew
#endif

static const char **PyvtkSpanTreeLayoutStrategy_Doc();


static PyObject *
PyvtkSpanTreeLayoutStrategy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanTreeLayoutStrategy *op = static_cast<vtkSpanTreeLayoutStrategy *>(vp);

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
      tempr = op->vtkSpanTreeLayoutStrategy::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpanTreeLayoutStrategy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanTreeLayoutStrategy *op = static_cast<vtkSpanTreeLayoutStrategy *>(vp);

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
      tempr = op->vtkSpanTreeLayoutStrategy::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpanTreeLayoutStrategy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanTreeLayoutStrategy *op = static_cast<vtkSpanTreeLayoutStrategy *>(vp);

  vtkSpanTreeLayoutStrategy *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSpanTreeLayoutStrategy::NewInstance();
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
PyvtkSpanTreeLayoutStrategy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSpanTreeLayoutStrategy *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSpanTreeLayoutStrategy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpanTreeLayoutStrategy_SetDepthFirstSpanningTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepthFirstSpanningTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanTreeLayoutStrategy *op = static_cast<vtkSpanTreeLayoutStrategy *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDepthFirstSpanningTree(temp0);
      }
    else
      {
      op->vtkSpanTreeLayoutStrategy::SetDepthFirstSpanningTree(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpanTreeLayoutStrategy_GetDepthFirstSpanningTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthFirstSpanningTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanTreeLayoutStrategy *op = static_cast<vtkSpanTreeLayoutStrategy *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDepthFirstSpanningTree();
      }
    else
      {
      tempr = op->vtkSpanTreeLayoutStrategy::GetDepthFirstSpanningTree();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpanTreeLayoutStrategy_DepthFirstSpanningTreeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DepthFirstSpanningTreeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanTreeLayoutStrategy *op = static_cast<vtkSpanTreeLayoutStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DepthFirstSpanningTreeOn();
      }
    else
      {
      op->vtkSpanTreeLayoutStrategy::DepthFirstSpanningTreeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpanTreeLayoutStrategy_DepthFirstSpanningTreeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DepthFirstSpanningTreeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanTreeLayoutStrategy *op = static_cast<vtkSpanTreeLayoutStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DepthFirstSpanningTreeOff();
      }
    else
      {
      op->vtkSpanTreeLayoutStrategy::DepthFirstSpanningTreeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpanTreeLayoutStrategy_Layout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Layout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanTreeLayoutStrategy *op = static_cast<vtkSpanTreeLayoutStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Layout();
      }
    else
      {
      op->vtkSpanTreeLayoutStrategy::Layout();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSpanTreeLayoutStrategy_Methods[] = {
  {(char*)"GetClassName", PyvtkSpanTreeLayoutStrategy_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSpanTreeLayoutStrategy_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSpanTreeLayoutStrategy_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSpanTreeLayoutStrategy\nC++: vtkSpanTreeLayoutStrategy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSpanTreeLayoutStrategy_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSpanTreeLayoutStrategy\nC++: vtkSpanTreeLayoutStrategy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetDepthFirstSpanningTree", PyvtkSpanTreeLayoutStrategy_SetDepthFirstSpanningTree, 1,
   (char*)"V.SetDepthFirstSpanningTree(bool)\nC++: void SetDepthFirstSpanningTree(bool a)\n\nIf set, base the layout on a depth-first spanning tree, rather\nthan the default breadth-first spanning tree. Switching between\nDFT and BFT may significantly change the layout, and choice must\nbe made on a per-graph basis. Default value is off.\n"},
  {(char*)"GetDepthFirstSpanningTree", PyvtkSpanTreeLayoutStrategy_GetDepthFirstSpanningTree, 1,
   (char*)"V.GetDepthFirstSpanningTree() -> bool\nC++: bool GetDepthFirstSpanningTree()\n\nIf set, base the layout on a depth-first spanning tree, rather\nthan the default breadth-first spanning tree. Switching between\nDFT and BFT may significantly change the layout, and choice must\nbe made on a per-graph basis. Default value is off.\n"},
  {(char*)"DepthFirstSpanningTreeOn", PyvtkSpanTreeLayoutStrategy_DepthFirstSpanningTreeOn, 1,
   (char*)"V.DepthFirstSpanningTreeOn()\nC++: void DepthFirstSpanningTreeOn()\n\nIf set, base the layout on a depth-first spanning tree, rather\nthan the default breadth-first spanning tree. Switching between\nDFT and BFT may significantly change the layout, and choice must\nbe made on a per-graph basis. Default value is off.\n"},
  {(char*)"DepthFirstSpanningTreeOff", PyvtkSpanTreeLayoutStrategy_DepthFirstSpanningTreeOff, 1,
   (char*)"V.DepthFirstSpanningTreeOff()\nC++: void DepthFirstSpanningTreeOff()\n\nIf set, base the layout on a depth-first spanning tree, rather\nthan the default breadth-first spanning tree. Switching between\nDFT and BFT may significantly change the layout, and choice must\nbe made on a per-graph basis. Default value is off.\n"},
  {(char*)"Layout", PyvtkSpanTreeLayoutStrategy_Layout, 1,
   (char*)"V.Layout()\nC++: void Layout()\n\nPerform the layout.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSpanTreeLayoutStrategy_StaticNew()
{
  return vtkSpanTreeLayoutStrategy::New();
}

PyObject *PyVTKClass_vtkSpanTreeLayoutStrategyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSpanTreeLayoutStrategy_StaticNew,
    PyvtkSpanTreeLayoutStrategy_Methods,
    "vtkSpanTreeLayoutStrategy", modulename,
    NULL, NULL,
    PyvtkSpanTreeLayoutStrategy_Doc(),
    PyVTKClass_vtkGraphLayoutStrategyNew(modulename));
  return cls;
}

const char **PyvtkSpanTreeLayoutStrategy_Doc()
{
  static const char *docstring[] = {
    "vtkSpanTreeLayoutStrategy\n\n",
    "Superclass: vtkGraphLayoutStrategy\n\n",
    "vtkSpanTreeLayout is a strategy for drawing directed graphs that\nworks by first extracting a spanning tree (more accurately, a\nspanning forest), and using this both to position graph vertices and\nto plan the placement of non-tree edges.  The latter are drawn with\nthe aid of edge points to produce a tidy drawing.\n\nThe approach is best suited to \"quasi-trees\", graphs where the number\nof edges is of ",
    "the same order as the number of nodes; it is less well\nsuited to denser graphs.  The boolean flag DepthFirstSpanningTree\ndetermines whether a depth-first or breadth-first strategy is used to\nconstruct the underlying forest, and the choice of strategy affects\nthe output layout significantly.  Informal experiments suggest that\nthe breadth-first strategy is better for denser graphs.\n\nDifferent layout",
    "s could also be produced by plugging in alternative\ntree layout strategies.  To work with the method of routing non-tree\nedges, any strategy should draw a tree so that levels are equally\nspaced along the z-axis, precluding for example the use of a radial\nor balloon layout.\n\nvtkSpanTreeLayout is based on an approach to 3D graph layout first\ndeveloped as part of the \"tulip\" tool by Dr. David Auber a",
    "t LaBRI,\nU.Bordeaux: see www.tulip-software.org\n\nThis implementation departs from the original version in that: (a) it\nis reconstructed to use Titan/VTK data structures; (b) it uses a\nfaster method for dealing with non-tree edges,\n    requiring at most two edge points per edge (c) allows for\nplugging in different tree layout methods (d) allows selection of two\ndifferent strategies for building\n   ",
    " the underlying layout tree, which can yield significantly\n    different results depending on the data.\n\nThanks:\n\nThanks to David Duke from the University of Leeds for providing this\nimplementation.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSpanTreeLayoutStrategy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSpanTreeLayoutStrategyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSpanTreeLayoutStrategy", o) != 0)
    {
    Py_DECREF(o);
    }

}

