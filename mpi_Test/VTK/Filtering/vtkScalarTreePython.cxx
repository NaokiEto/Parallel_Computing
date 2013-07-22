// python wrapper for vtkScalarTree
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
#include "vtkScalarTree.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkScalarTree(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkScalarTree(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkScalarTreeNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkScalarTreeNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkScalarTree_Doc();


static PyObject *
PyvtkScalarTree_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarTree *op = static_cast<vtkScalarTree *>(vp);

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
      tempr = op->vtkScalarTree::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarTree_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarTree *op = static_cast<vtkScalarTree *>(vp);

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
      tempr = op->vtkScalarTree::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarTree_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarTree *op = static_cast<vtkScalarTree *>(vp);

  vtkScalarTree *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkScalarTree::NewInstance();
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
PyvtkScalarTree_SetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarTree *op = static_cast<vtkScalarTree *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->SetDataSet(temp0);
      }
    else
      {
      op->vtkScalarTree::SetDataSet(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarTree_GetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarTree *op = static_cast<vtkScalarTree *>(vp);

  vtkDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataSet();
      }
    else
      {
      tempr = op->vtkScalarTree::GetDataSet();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarTree_BuildTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarTree *op = static_cast<vtkScalarTree *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->BuildTree();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarTree_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarTree *op = static_cast<vtkScalarTree *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->Initialize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarTree_InitTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarTree *op = static_cast<vtkScalarTree *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->InitTraversal(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkScalarTree_Methods[] = {
  {(char*)"GetClassName", PyvtkScalarTree_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkScalarTree_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkScalarTree_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkScalarTree\nC++: vtkScalarTree *NewInstance()\n\n"},
  {(char*)"SetDataSet", PyvtkScalarTree_SetDataSet, 1,
   (char*)"V.SetDataSet(vtkDataSet)\nC++: virtual void SetDataSet(vtkDataSet *)\n\nBuild the tree from the points/cells defining this dataset.\n"},
  {(char*)"GetDataSet", PyvtkScalarTree_GetDataSet, 1,
   (char*)"V.GetDataSet() -> vtkDataSet\nC++: vtkDataSet *GetDataSet()\n\nBuild the tree from the points/cells defining this dataset.\n"},
  {(char*)"BuildTree", PyvtkScalarTree_BuildTree, 1,
   (char*)"V.BuildTree()\nC++: virtual void BuildTree()\n\nConstruct the scalar tree from the dataset provided. Checks build\ntimes and modified time from input and reconstructs the tree if\nnecessary.\n"},
  {(char*)"Initialize", PyvtkScalarTree_Initialize, 1,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nInitialize locator. Frees memory and resets object as\nappropriate.\n"},
  {(char*)"InitTraversal", PyvtkScalarTree_InitTraversal, 1,
   (char*)"V.InitTraversal(float)\nC++: virtual void InitTraversal(double scalarValue)\n\nBegin to traverse the cells based on a scalar value. Returned\ncells will have scalar values that span the scalar value\nspecified.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkScalarTreeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkScalarTree_Methods,
    "vtkScalarTree", modulename,
    NULL, NULL,
    PyvtkScalarTree_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkScalarTree_Doc()
{
  static const char *docstring[] = {
    "vtkScalarTree - organize data according to scalar values (used to\naccelerate contouring operations)\n\n",
    "Superclass: vtkObject\n\n",
    "vtkScalarTree is an abstract class that defines the API to concrete\nscalar tree subclasses. A scalar tree is a data structure that\norganizes data according to its scalar value. This allows rapid\naccess to data for those algorithms that access the data based on\nscalar value. For example, isocontouring operates on cells based on\nthe scalar (isocontour) value.\n\nTo use subclasses of this class, you mu",
    "st specify a dataset to\noperate on, and then specify a scalar value in the InitTraversal()\nmethod. Then calls to GetNextCell() return cells whose scalar data\ncontains the scalar value specified.\n\nSee Also:\n\nvtkSimpleScalarTree\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkScalarTree(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkScalarTreeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkScalarTree", o) != 0)
    {
    Py_DECREF(o);
    }

}

