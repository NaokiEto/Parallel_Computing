// python wrapper for vtkSimpleScalarTree
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
#include "vtkSimpleScalarTree.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSimpleScalarTree(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSimpleScalarTree(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSimpleScalarTreeNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSimpleScalarTreeNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkScalarTreeNew
extern "C" { PyObject *PyVTKClass_vtkScalarTreeNew(const char *); }
#define DECLARED_PyVTKClass_vtkScalarTreeNew
#endif

static const char **PyvtkSimpleScalarTree_Doc();


static PyObject *
PyvtkSimpleScalarTree_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

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
      tempr = op->vtkSimpleScalarTree::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

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
      tempr = op->vtkSimpleScalarTree::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  vtkSimpleScalarTree *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSimpleScalarTree::NewInstance();
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
PyvtkSimpleScalarTree_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSimpleScalarTree *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSimpleScalarTree::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_SetBranchingFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBranchingFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBranchingFactor(temp0);
      }
    else
      {
      op->vtkSimpleScalarTree::SetBranchingFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_GetBranchingFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBranchingFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBranchingFactorMinValue();
      }
    else
      {
      tempr = op->vtkSimpleScalarTree::GetBranchingFactorMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_GetBranchingFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBranchingFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBranchingFactorMaxValue();
      }
    else
      {
      tempr = op->vtkSimpleScalarTree::GetBranchingFactorMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_GetBranchingFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBranchingFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBranchingFactor();
      }
    else
      {
      tempr = op->vtkSimpleScalarTree::GetBranchingFactor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_GetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLevel();
      }
    else
      {
      tempr = op->vtkSimpleScalarTree::GetLevel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_SetMaxLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaxLevel(temp0);
      }
    else
      {
      op->vtkSimpleScalarTree::SetMaxLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_GetMaxLevelMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxLevelMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaxLevelMinValue();
      }
    else
      {
      tempr = op->vtkSimpleScalarTree::GetMaxLevelMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_GetMaxLevelMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxLevelMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaxLevelMaxValue();
      }
    else
      {
      tempr = op->vtkSimpleScalarTree::GetMaxLevelMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_GetMaxLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaxLevel();
      }
    else
      {
      tempr = op->vtkSimpleScalarTree::GetMaxLevel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_BuildTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildTree();
      }
    else
      {
      op->vtkSimpleScalarTree::BuildTree();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkSimpleScalarTree::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_InitTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->InitTraversal(temp0);
      }
    else
      {
      op->vtkSimpleScalarTree::InitTraversal(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSimpleScalarTree_Methods[] = {
  {(char*)"GetClassName", PyvtkSimpleScalarTree_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard type related macros and PrintSelf() method.\n"},
  {(char*)"IsA", PyvtkSimpleScalarTree_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard type related macros and PrintSelf() method.\n"},
  {(char*)"NewInstance", PyvtkSimpleScalarTree_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSimpleScalarTree\nC++: vtkSimpleScalarTree *NewInstance()\n\nStandard type related macros and PrintSelf() method.\n"},
  {(char*)"SafeDownCast", PyvtkSimpleScalarTree_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSimpleScalarTree\nC++: vtkSimpleScalarTree *SafeDownCast(vtkObject* o)\n\nStandard type related macros and PrintSelf() method.\n"},
  {(char*)"SetBranchingFactor", PyvtkSimpleScalarTree_SetBranchingFactor, 1,
   (char*)"V.SetBranchingFactor(int)\nC++: void SetBranchingFactor(int)\n\nSet the branching factor for the tree. This is the number of\nchildren per tree node. Smaller values (minimum is 2) mean deeper\ntrees and more memory overhead. Larger values mean shallower\ntrees, less memory usage, but worse performance.\n"},
  {(char*)"GetBranchingFactorMinValue", PyvtkSimpleScalarTree_GetBranchingFactorMinValue, 1,
   (char*)"V.GetBranchingFactorMinValue() -> int\nC++: int GetBranchingFactorMinValue()\n\nSet the branching factor for the tree. This is the number of\nchildren per tree node. Smaller values (minimum is 2) mean deeper\ntrees and more memory overhead. Larger values mean shallower\ntrees, less memory usage, but worse performance.\n"},
  {(char*)"GetBranchingFactorMaxValue", PyvtkSimpleScalarTree_GetBranchingFactorMaxValue, 1,
   (char*)"V.GetBranchingFactorMaxValue() -> int\nC++: int GetBranchingFactorMaxValue()\n\nSet the branching factor for the tree. This is the number of\nchildren per tree node. Smaller values (minimum is 2) mean deeper\ntrees and more memory overhead. Larger values mean shallower\ntrees, less memory usage, but worse performance.\n"},
  {(char*)"GetBranchingFactor", PyvtkSimpleScalarTree_GetBranchingFactor, 1,
   (char*)"V.GetBranchingFactor() -> int\nC++: int GetBranchingFactor()\n\nSet the branching factor for the tree. This is the number of\nchildren per tree node. Smaller values (minimum is 2) mean deeper\ntrees and more memory overhead. Larger values mean shallower\ntrees, less memory usage, but worse performance.\n"},
  {(char*)"GetLevel", PyvtkSimpleScalarTree_GetLevel, 1,
   (char*)"V.GetLevel() -> int\nC++: int GetLevel()\n\nGet the level of the scalar tree. This value may change each time\nthe scalar tree is built and the branching factor changes.\n"},
  {(char*)"SetMaxLevel", PyvtkSimpleScalarTree_SetMaxLevel, 1,
   (char*)"V.SetMaxLevel(int)\nC++: void SetMaxLevel(int)\n\nSet the maximum allowable level for the tree.\n"},
  {(char*)"GetMaxLevelMinValue", PyvtkSimpleScalarTree_GetMaxLevelMinValue, 1,
   (char*)"V.GetMaxLevelMinValue() -> int\nC++: int GetMaxLevelMinValue()\n\nSet the maximum allowable level for the tree.\n"},
  {(char*)"GetMaxLevelMaxValue", PyvtkSimpleScalarTree_GetMaxLevelMaxValue, 1,
   (char*)"V.GetMaxLevelMaxValue() -> int\nC++: int GetMaxLevelMaxValue()\n\nSet the maximum allowable level for the tree.\n"},
  {(char*)"GetMaxLevel", PyvtkSimpleScalarTree_GetMaxLevel, 1,
   (char*)"V.GetMaxLevel() -> int\nC++: int GetMaxLevel()\n\nSet the maximum allowable level for the tree.\n"},
  {(char*)"BuildTree", PyvtkSimpleScalarTree_BuildTree, 1,
   (char*)"V.BuildTree()\nC++: virtual void BuildTree()\n\nConstruct the scalar tree from the dataset provided. Checks build\ntimes and modified time from input and reconstructs the tree if\nnecessary.\n"},
  {(char*)"Initialize", PyvtkSimpleScalarTree_Initialize, 1,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nInitialize locator. Frees memory and resets object as\nappropriate.\n"},
  {(char*)"InitTraversal", PyvtkSimpleScalarTree_InitTraversal, 1,
   (char*)"V.InitTraversal(float)\nC++: virtual void InitTraversal(double scalarValue)\n\nBegin to traverse the cells based on a scalar value. Returned\ncells will have scalar values that span the scalar value\nspecified.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSimpleScalarTree_StaticNew()
{
  return vtkSimpleScalarTree::New();
}

PyObject *PyVTKClass_vtkSimpleScalarTreeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSimpleScalarTree_StaticNew,
    PyvtkSimpleScalarTree_Methods,
    "vtkSimpleScalarTree", modulename,
    NULL, NULL,
    PyvtkSimpleScalarTree_Doc(),
    PyVTKClass_vtkScalarTreeNew(modulename));
  return cls;
}

const char **PyvtkSimpleScalarTree_Doc()
{
  static const char *docstring[] = {
    "vtkSimpleScalarTree - organize data according to scalar values (used\nto accelerate contouring operations)\n\n",
    "Superclass: vtkScalarTree\n\n",
    "vtkSimpleScalarTree creates a pointerless binary tree that helps\nsearch for cells that lie within a particular scalar range. This\nobject is used to accelerate some contouring (and other scalar-based\ntechniques).\n\nThe tree consists of an array of (min,max) scalar range pairs per\nnode in the tree. The (min,max) range is determined from looking at\nthe range of the children of the tree node. If the no",
    "de is a leaf,\nthen the range is determined by scanning the range of scalar data in\nn cells in the dataset. The n cells are determined by arbitrary\nselecting cell ids from id(i) to id(i+n), and where n is specified\nusing the BranchingFactor ivar. Note that leaf node i=0 contains the\nscalar range computed from cell ids (0,n-1); leaf node i=1 contains\nthe range from cell ids (n,2n-1); and so on. The ",
    "implication is that\nthere are no direct lists of cell ids per leaf node, instead the cell\nids are implicitly known.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSimpleScalarTree(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSimpleScalarTreeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSimpleScalarTree", o) != 0)
    {
    Py_DECREF(o);
    }

}

