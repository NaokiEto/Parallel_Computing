// python wrapper for vtkHyperOctreeCursor
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
#include "vtkHyperOctreeCursor.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkHyperOctreeCursor(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkHyperOctreeCursor(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkHyperOctreeCursorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkHyperOctreeCursorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkHyperOctreeCursor_Doc();


static PyObject *
PyvtkHyperOctreeCursor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCursor *op = static_cast<vtkHyperOctreeCursor *>(vp);

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
      tempr = op->vtkHyperOctreeCursor::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCursor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCursor *op = static_cast<vtkHyperOctreeCursor *>(vp);

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
      tempr = op->vtkHyperOctreeCursor::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCursor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCursor *op = static_cast<vtkHyperOctreeCursor *>(vp);

  vtkHyperOctreeCursor *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkHyperOctreeCursor::NewInstance();
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
PyvtkHyperOctreeCursor_GetLeafId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeafId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCursor *op = static_cast<vtkHyperOctreeCursor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetLeafId();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCursor_CurrentIsLeaf(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CurrentIsLeaf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCursor *op = static_cast<vtkHyperOctreeCursor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->CurrentIsLeaf();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCursor_CurrentIsRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CurrentIsRoot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCursor *op = static_cast<vtkHyperOctreeCursor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->CurrentIsRoot();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCursor_GetCurrentLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCursor *op = static_cast<vtkHyperOctreeCursor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetCurrentLevel();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCursor_GetChildIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChildIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCursor *op = static_cast<vtkHyperOctreeCursor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetChildIndex();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCursor_CurrentIsTerminalNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CurrentIsTerminalNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCursor *op = static_cast<vtkHyperOctreeCursor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->CurrentIsTerminalNode();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCursor_ToRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToRoot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCursor *op = static_cast<vtkHyperOctreeCursor *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->ToRoot();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCursor_ToParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCursor *op = static_cast<vtkHyperOctreeCursor *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->ToParent();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCursor_ToChild(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToChild");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCursor *op = static_cast<vtkHyperOctreeCursor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->ToChild(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCursor_ToSameNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToSameNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCursor *op = static_cast<vtkHyperOctreeCursor *>(vp);

  vtkHyperOctreeCursor *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHyperOctreeCursor"))
    {
    op->ToSameNode(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCursor_IsEqual(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsEqual");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCursor *op = static_cast<vtkHyperOctreeCursor *>(vp);

  vtkHyperOctreeCursor *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHyperOctreeCursor"))
    {
    tempr = op->IsEqual(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCursor_Clone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCursor *op = static_cast<vtkHyperOctreeCursor *>(vp);

  vtkHyperOctreeCursor *tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->Clone();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCursor_SameTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SameTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCursor *op = static_cast<vtkHyperOctreeCursor *>(vp);

  vtkHyperOctreeCursor *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHyperOctreeCursor"))
    {
    tempr = op->SameTree(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCursor_GetIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCursor *op = static_cast<vtkHyperOctreeCursor *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = op->GetIndex(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCursor_GetNumberOfChildren(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCursor *op = static_cast<vtkHyperOctreeCursor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetNumberOfChildren();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCursor_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCursor *op = static_cast<vtkHyperOctreeCursor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetDimension();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCursor_Found(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Found");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCursor *op = static_cast<vtkHyperOctreeCursor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->Found();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkHyperOctreeCursor_Methods[] = {
  {(char*)"GetClassName", PyvtkHyperOctreeCursor_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHyperOctreeCursor_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHyperOctreeCursor_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkHyperOctreeCursor\nC++: vtkHyperOctreeCursor *NewInstance()\n\n"},
  {(char*)"GetLeafId", PyvtkHyperOctreeCursor_GetLeafId, 1,
   (char*)"V.GetLeafId() -> int\nC++: virtual int GetLeafId()\n\nReturn the index of the current leaf in the data arrays.\n\\pre is_leaf: CurrentIsLeaf()\n"},
  {(char*)"CurrentIsLeaf", PyvtkHyperOctreeCursor_CurrentIsLeaf, 1,
   (char*)"V.CurrentIsLeaf() -> int\nC++: virtual int CurrentIsLeaf()\n\nIs the node pointed by the cursor a leaf?\n"},
  {(char*)"CurrentIsRoot", PyvtkHyperOctreeCursor_CurrentIsRoot, 1,
   (char*)"V.CurrentIsRoot() -> int\nC++: virtual int CurrentIsRoot()\n\nIs the node pointed by the cursor the root?\n"},
  {(char*)"GetCurrentLevel", PyvtkHyperOctreeCursor_GetCurrentLevel, 1,
   (char*)"V.GetCurrentLevel() -> int\nC++: virtual int GetCurrentLevel()\n\nReturn the level of the node pointed by the cursor.\n\\post positive_result: result>=0\n"},
  {(char*)"GetChildIndex", PyvtkHyperOctreeCursor_GetChildIndex, 1,
   (char*)"V.GetChildIndex() -> int\nC++: virtual int GetChildIndex()\n\nReturn the child number of the current node relative to its\nparent.\n\\pre not_root: !CurrentIsRoot().\n\\post valid_range: result>=0 && result<GetNumberOfChildren()\n"},
  {(char*)"CurrentIsTerminalNode", PyvtkHyperOctreeCursor_CurrentIsTerminalNode, 1,
   (char*)"V.CurrentIsTerminalNode() -> int\nC++: virtual int CurrentIsTerminalNode()\n\n"},
  {(char*)"ToRoot", PyvtkHyperOctreeCursor_ToRoot, 1,
   (char*)"V.ToRoot()\nC++: virtual void ToRoot()\n\nMove the cursor the root node.\n\\pre can be root\n\\post is_root: CurrentIsRoot()\n"},
  {(char*)"ToParent", PyvtkHyperOctreeCursor_ToParent, 1,
   (char*)"V.ToParent()\nC++: virtual void ToParent()\n\nMove the cursor to the parent of the current node.\n\\pre not_root: !CurrentIsRoot()\n"},
  {(char*)"ToChild", PyvtkHyperOctreeCursor_ToChild, 1,
   (char*)"V.ToChild(int)\nC++: virtual void ToChild(int child)\n\nMove the cursor to child `child' of the current node.\n\\pre not_leaf: !CurrentIsLeaf()\n\\pre valid_child: child>=0 && child<this->GetNumberOfChildren()\n"},
  {(char*)"ToSameNode", PyvtkHyperOctreeCursor_ToSameNode, 1,
   (char*)"V.ToSameNode(vtkHyperOctreeCursor)\nC++: virtual void ToSameNode(vtkHyperOctreeCursor *other)\n\nMove the cursor to the same node pointed by `other'.\n\\pre other_exists: other!=0\n\\pre same_hyperoctree: this->SameTree(other);\n\\post equal: this->IsEqual(other)\n"},
  {(char*)"IsEqual", PyvtkHyperOctreeCursor_IsEqual, 1,
   (char*)"V.IsEqual(vtkHyperOctreeCursor) -> int\nC++: virtual int IsEqual(vtkHyperOctreeCursor *other)\n\nIs `this' equal to `other'?\n\\pre other_exists: other!=0\n\\pre same_hyperoctree: this->SameTree(other);\n"},
  {(char*)"Clone", PyvtkHyperOctreeCursor_Clone, 1,
   (char*)"V.Clone() -> vtkHyperOctreeCursor\nC++: virtual vtkHyperOctreeCursor *Clone()\n\nCreate a copy of `this'.\n\\post results_exists:result!=0\n\\post same_tree: result->SameTree(this)\n"},
  {(char*)"SameTree", PyvtkHyperOctreeCursor_SameTree, 1,
   (char*)"V.SameTree(vtkHyperOctreeCursor) -> int\nC++: virtual int SameTree(vtkHyperOctreeCursor *other)\n\nAre `this' and `other' pointing on the same hyperoctree?\n\\pre other_exists: other!=0\n"},
  {(char*)"GetIndex", PyvtkHyperOctreeCursor_GetIndex, 1,
   (char*)"V.GetIndex(int) -> int\nC++: virtual int GetIndex(int d)\n\nReturn the index in dimension `d', as if the node was a cell of a\nuniform grid of 1<<GetCurrentLevel() cells in each dimension.\n\\pre valid_range: d>=0 && d<GetDimension()\n\\post valid_result: result>=0 && result<(1<<GetCurrentLevel())\n"},
  {(char*)"GetNumberOfChildren", PyvtkHyperOctreeCursor_GetNumberOfChildren, 1,
   (char*)"V.GetNumberOfChildren() -> int\nC++: virtual int GetNumberOfChildren()\n\nReturn the number of children for each node of the tree.\n\\post positive_number: result>0\n"},
  {(char*)"GetDimension", PyvtkHyperOctreeCursor_GetDimension, 1,
   (char*)"V.GetDimension() -> int\nC++: virtual int GetDimension()\n\nReturn the dimension of the tree.\n\\post positive_result: result>0\n"},
  {(char*)"Found", PyvtkHyperOctreeCursor_Found, 1,
   (char*)"V.Found() -> int\nC++: virtual int Found()\n\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkHyperOctreeCursorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkHyperOctreeCursor_Methods,
    "vtkHyperOctreeCursor", modulename,
    NULL, NULL,
    PyvtkHyperOctreeCursor_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkHyperOctreeCursor_Doc()
{
  static const char *docstring[] = {
    "vtkHyperOctreeCursor - Objects that can traverse hyperoctree nodes.\n\n",
    "Superclass: vtkObject\n\n",
    "Objects that can traverse hyperoctree nodes. It is an abstract class.\nCursors are created by the hyperoctree.\n\nSee Also:\n\nvtkDataObject vtkFieldData vtkHyperOctreeAlgorithm\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHyperOctreeCursor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHyperOctreeCursorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHyperOctreeCursor", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_OCTREE_CHILD_ZMIN_YMIN_XMIN", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_OCTREE_CHILD_ZMIN_YMIN_XMAX", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_OCTREE_CHILD_ZMIN_YMAX_XMIN", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(3);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_OCTREE_CHILD_ZMIN_YMAX_XMAX", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(4);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_OCTREE_CHILD_ZMAX_YMIN_XMIN", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(5);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_OCTREE_CHILD_ZMAX_YMIN_XMAX", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(6);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_OCTREE_CHILD_ZMAX_YMAX_XMIN", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(7);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_OCTREE_CHILD_ZMAX_YMAX_XMAX", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(VTK_OCTREE_CHILD_ZMIN_YMIN_XMIN);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_QUADTREE_CHILD_SW", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(VTK_OCTREE_CHILD_ZMIN_YMIN_XMAX);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_QUADTREE_CHILD_SE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(VTK_OCTREE_CHILD_ZMIN_YMAX_XMIN);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_QUADTREE_CHILD_NW", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(VTK_OCTREE_CHILD_ZMIN_YMAX_XMAX);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_QUADTREE_CHILD_NE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(VTK_QUADTREE_CHILD_SW);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_BINARY_TREE_CHILD_LEFT", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(VTK_QUADTREE_CHILD_SE);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_BINARY_TREE_CHILD_RIGHT", o) != 0)
    {
    Py_DECREF(o);
    }

}

