// python wrapper for vtkCosmicTreeLayoutStrategy
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
#include "vtkCosmicTreeLayoutStrategy.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCosmicTreeLayoutStrategy(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCosmicTreeLayoutStrategy(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCosmicTreeLayoutStrategyNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCosmicTreeLayoutStrategyNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkGraphLayoutStrategyNew
extern "C" { PyObject *PyVTKClass_vtkGraphLayoutStrategyNew(const char *); }
#define DECLARED_PyVTKClass_vtkGraphLayoutStrategyNew
#endif

static const char **PyvtkCosmicTreeLayoutStrategy_Doc();


static PyObject *
PyvtkCosmicTreeLayoutStrategy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCosmicTreeLayoutStrategy *op = static_cast<vtkCosmicTreeLayoutStrategy *>(vp);

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
      tempr = op->vtkCosmicTreeLayoutStrategy::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCosmicTreeLayoutStrategy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCosmicTreeLayoutStrategy *op = static_cast<vtkCosmicTreeLayoutStrategy *>(vp);

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
      tempr = op->vtkCosmicTreeLayoutStrategy::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCosmicTreeLayoutStrategy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCosmicTreeLayoutStrategy *op = static_cast<vtkCosmicTreeLayoutStrategy *>(vp);

  vtkCosmicTreeLayoutStrategy *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCosmicTreeLayoutStrategy::NewInstance();
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
PyvtkCosmicTreeLayoutStrategy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCosmicTreeLayoutStrategy *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCosmicTreeLayoutStrategy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCosmicTreeLayoutStrategy_Layout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Layout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCosmicTreeLayoutStrategy *op = static_cast<vtkCosmicTreeLayoutStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Layout();
      }
    else
      {
      op->vtkCosmicTreeLayoutStrategy::Layout();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCosmicTreeLayoutStrategy_SetSizeLeafNodesOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSizeLeafNodesOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCosmicTreeLayoutStrategy *op = static_cast<vtkCosmicTreeLayoutStrategy *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSizeLeafNodesOnly(temp0);
      }
    else
      {
      op->vtkCosmicTreeLayoutStrategy::SetSizeLeafNodesOnly(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCosmicTreeLayoutStrategy_GetSizeLeafNodesOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSizeLeafNodesOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCosmicTreeLayoutStrategy *op = static_cast<vtkCosmicTreeLayoutStrategy *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSizeLeafNodesOnly();
      }
    else
      {
      tempr = op->vtkCosmicTreeLayoutStrategy::GetSizeLeafNodesOnly();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCosmicTreeLayoutStrategy_SizeLeafNodesOnlyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SizeLeafNodesOnlyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCosmicTreeLayoutStrategy *op = static_cast<vtkCosmicTreeLayoutStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SizeLeafNodesOnlyOn();
      }
    else
      {
      op->vtkCosmicTreeLayoutStrategy::SizeLeafNodesOnlyOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCosmicTreeLayoutStrategy_SizeLeafNodesOnlyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SizeLeafNodesOnlyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCosmicTreeLayoutStrategy *op = static_cast<vtkCosmicTreeLayoutStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SizeLeafNodesOnlyOff();
      }
    else
      {
      op->vtkCosmicTreeLayoutStrategy::SizeLeafNodesOnlyOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCosmicTreeLayoutStrategy_SetLayoutDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCosmicTreeLayoutStrategy *op = static_cast<vtkCosmicTreeLayoutStrategy *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLayoutDepth(temp0);
      }
    else
      {
      op->vtkCosmicTreeLayoutStrategy::SetLayoutDepth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCosmicTreeLayoutStrategy_GetLayoutDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayoutDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCosmicTreeLayoutStrategy *op = static_cast<vtkCosmicTreeLayoutStrategy *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLayoutDepth();
      }
    else
      {
      tempr = op->vtkCosmicTreeLayoutStrategy::GetLayoutDepth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCosmicTreeLayoutStrategy_SetLayoutRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutRoot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCosmicTreeLayoutStrategy *op = static_cast<vtkCosmicTreeLayoutStrategy *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLayoutRoot(temp0);
      }
    else
      {
      op->vtkCosmicTreeLayoutStrategy::SetLayoutRoot(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCosmicTreeLayoutStrategy_GetLayoutRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayoutRoot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCosmicTreeLayoutStrategy *op = static_cast<vtkCosmicTreeLayoutStrategy *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLayoutRoot();
      }
    else
      {
      tempr = op->vtkCosmicTreeLayoutStrategy::GetLayoutRoot();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCosmicTreeLayoutStrategy_SetNodeSizeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNodeSizeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCosmicTreeLayoutStrategy *op = static_cast<vtkCosmicTreeLayoutStrategy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNodeSizeArrayName(temp0);
      }
    else
      {
      op->vtkCosmicTreeLayoutStrategy::SetNodeSizeArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCosmicTreeLayoutStrategy_GetNodeSizeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeSizeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCosmicTreeLayoutStrategy *op = static_cast<vtkCosmicTreeLayoutStrategy *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNodeSizeArrayName();
      }
    else
      {
      tempr = op->vtkCosmicTreeLayoutStrategy::GetNodeSizeArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCosmicTreeLayoutStrategy_Methods[] = {
  {(char*)"GetClassName", PyvtkCosmicTreeLayoutStrategy_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCosmicTreeLayoutStrategy_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCosmicTreeLayoutStrategy_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCosmicTreeLayoutStrategy\nC++: vtkCosmicTreeLayoutStrategy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCosmicTreeLayoutStrategy_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCosmicTreeLayoutStrategy\nC++: vtkCosmicTreeLayoutStrategy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Layout", PyvtkCosmicTreeLayoutStrategy_Layout, 1,
   (char*)"V.Layout()\nC++: virtual void Layout()\n\nPerform the layout.\n"},
  {(char*)"SetSizeLeafNodesOnly", PyvtkCosmicTreeLayoutStrategy_SetSizeLeafNodesOnly, 1,
   (char*)"V.SetSizeLeafNodesOnly(int)\nC++: void SetSizeLeafNodesOnly(int a)\n\nShould node size specifications be obeyed at leaf nodes only or\n(with scaling as required to meet constraints) at every node in\nthe tree? This defaults to true, so that leaf nodes are scaled\naccording to the size specification provided, and the parent node\nsizes are calculated by the algorithm.\n"},
  {(char*)"GetSizeLeafNodesOnly", PyvtkCosmicTreeLayoutStrategy_GetSizeLeafNodesOnly, 1,
   (char*)"V.GetSizeLeafNodesOnly() -> int\nC++: int GetSizeLeafNodesOnly()\n\nShould node size specifications be obeyed at leaf nodes only or\n(with scaling as required to meet constraints) at every node in\nthe tree? This defaults to true, so that leaf nodes are scaled\naccording to the size specification provided, and the parent node\nsizes are calculated by the algorithm.\n"},
  {(char*)"SizeLeafNodesOnlyOn", PyvtkCosmicTreeLayoutStrategy_SizeLeafNodesOnlyOn, 1,
   (char*)"V.SizeLeafNodesOnlyOn()\nC++: void SizeLeafNodesOnlyOn()\n\nShould node size specifications be obeyed at leaf nodes only or\n(with scaling as required to meet constraints) at every node in\nthe tree? This defaults to true, so that leaf nodes are scaled\naccording to the size specification provided, and the parent node\nsizes are calculated by the algorithm.\n"},
  {(char*)"SizeLeafNodesOnlyOff", PyvtkCosmicTreeLayoutStrategy_SizeLeafNodesOnlyOff, 1,
   (char*)"V.SizeLeafNodesOnlyOff()\nC++: void SizeLeafNodesOnlyOff()\n\nShould node size specifications be obeyed at leaf nodes only or\n(with scaling as required to meet constraints) at every node in\nthe tree? This defaults to true, so that leaf nodes are scaled\naccording to the size specification provided, and the parent node\nsizes are calculated by the algorithm.\n"},
  {(char*)"SetLayoutDepth", PyvtkCosmicTreeLayoutStrategy_SetLayoutDepth, 1,
   (char*)"V.SetLayoutDepth(int)\nC++: void SetLayoutDepth(int a)\n\nHow many levels of the tree should be laid out? For large trees,\nyou may wish to set the root and maximum depth in order to\nretrieve the layout for the visible portion of the tree. When\nthis value is zero or negative, all nodes below and including the\nLayoutRoot will be presented. This defaults to 0.\n"},
  {(char*)"GetLayoutDepth", PyvtkCosmicTreeLayoutStrategy_GetLayoutDepth, 1,
   (char*)"V.GetLayoutDepth() -> int\nC++: int GetLayoutDepth()\n\nHow many levels of the tree should be laid out? For large trees,\nyou may wish to set the root and maximum depth in order to\nretrieve the layout for the visible portion of the tree. When\nthis value is zero or negative, all nodes below and including the\nLayoutRoot will be presented. This defaults to 0.\n"},
  {(char*)"SetLayoutRoot", PyvtkCosmicTreeLayoutStrategy_SetLayoutRoot, 1,
   (char*)"V.SetLayoutRoot(int)\nC++: void SetLayoutRoot(vtkIdType a)\n\nWhat is the top-most tree node to lay out? This node will become\nthe largest containing circle in the layout. Use this in\ncombination with SetLayoutDepth to retrieve the layout of a\nsubtree of interest for rendering. Setting LayoutRoot to a\nnegative number signals that the root node of the tree should be\nused as the root node of the layout. This defaults to -1.\n"},
  {(char*)"GetLayoutRoot", PyvtkCosmicTreeLayoutStrategy_GetLayoutRoot, 1,
   (char*)"V.GetLayoutRoot() -> int\nC++: vtkIdType GetLayoutRoot()\n\nWhat is the top-most tree node to lay out? This node will become\nthe largest containing circle in the layout. Use this in\ncombination with SetLayoutDepth to retrieve the layout of a\nsubtree of interest for rendering. Setting LayoutRoot to a\nnegative number signals that the root node of the tree should be\nused as the root node of the layout. This defaults to -1.\n"},
  {(char*)"SetNodeSizeArrayName", PyvtkCosmicTreeLayoutStrategy_SetNodeSizeArrayName, 1,
   (char*)"V.SetNodeSizeArrayName(string)\nC++: void SetNodeSizeArrayName(char *)\n\nSet the array to be used for sizing nodes. If this is set to an\nempty string or NULL (the default), then all leaf nodes (or all\nnodes, when SizeLeafNodesOnly is false) will be assigned a unit\nsize.\n"},
  {(char*)"GetNodeSizeArrayName", PyvtkCosmicTreeLayoutStrategy_GetNodeSizeArrayName, 1,
   (char*)"V.GetNodeSizeArrayName() -> string\nC++: char *GetNodeSizeArrayName()\n\nSet the array to be used for sizing nodes. If this is set to an\nempty string or NULL (the default), then all leaf nodes (or all\nnodes, when SizeLeafNodesOnly is false) will be assigned a unit\nsize.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCosmicTreeLayoutStrategy_StaticNew()
{
  return vtkCosmicTreeLayoutStrategy::New();
}

PyObject *PyVTKClass_vtkCosmicTreeLayoutStrategyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCosmicTreeLayoutStrategy_StaticNew,
    PyvtkCosmicTreeLayoutStrategy_Methods,
    "vtkCosmicTreeLayoutStrategy", modulename,
    NULL, NULL,
    PyvtkCosmicTreeLayoutStrategy_Doc(),
    PyVTKClass_vtkGraphLayoutStrategyNew(modulename));
  return cls;
}

const char **PyvtkCosmicTreeLayoutStrategy_Doc()
{
  static const char *docstring[] = {
    "vtkCosmicTreeLayoutStrategy - tree layout strategy reminiscent of\nastronomical systems\n\n",
    "Superclass: vtkGraphLayoutStrategy\n\n",
    "This layout strategy takes an input tree and places all the children\nof a node into a containing circle. The placement is such that each\nchild placed can be represented with a circle tangent to the\ncontaining circle and (usually) 2 other children. The interior of the\ncircle is left empty so that graph edges drawn on top of the tree\nwill not obfuscate the tree. However, when one child is much large",
    "r\nthan all the others, it may encroach on the center of the containing\ncircle; that's OK, because it's large enough not to be obscured by\nedges drawn atop it.\n\nThanks:\n\nThanks to the galaxy and David Thompson hierarchically nested inside\nit for inspiring this layout strategy.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCosmicTreeLayoutStrategy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCosmicTreeLayoutStrategyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCosmicTreeLayoutStrategy", o) != 0)
    {
    Py_DECREF(o);
    }

}

