// python wrapper for vtkCompositeDataIterator
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
#include "vtkCompositeDataIterator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCompositeDataIterator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCompositeDataIterator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCompositeDataIteratorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCompositeDataIteratorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkCompositeDataIterator_Doc();


static PyObject *
PyvtkCompositeDataIterator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

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
      tempr = op->vtkCompositeDataIterator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

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
      tempr = op->vtkCompositeDataIterator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  vtkCompositeDataIterator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCompositeDataIterator::NewInstance();
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
PyvtkCompositeDataIterator_SetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  vtkCompositeDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataSet"))
    {
    if (ap.IsBound())
      {
      op->SetDataSet(temp0);
      }
    else
      {
      op->vtkCompositeDataIterator::SetDataSet(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_GetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  vtkCompositeDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataSet();
      }
    else
      {
      tempr = op->vtkCompositeDataIterator::GetDataSet();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_InitTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InitTraversal();
      }
    else
      {
      op->vtkCompositeDataIterator::InitTraversal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_InitReverseTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitReverseTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InitReverseTraversal();
      }
    else
      {
      op->vtkCompositeDataIterator::InitReverseTraversal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_GoToFirstItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToFirstItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GoToFirstItem();
      }
    else
      {
      op->vtkCompositeDataIterator::GoToFirstItem();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_GoToNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GoToNextItem();
      }
    else
      {
      op->vtkCompositeDataIterator::GoToNextItem();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_IsDoneWithTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDoneWithTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsDoneWithTraversal();
      }
    else
      {
      tempr = op->vtkCompositeDataIterator::IsDoneWithTraversal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_GetCurrentDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  vtkDataObject *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCurrentDataObject();
      }
    else
      {
      tempr = op->vtkCompositeDataIterator::GetCurrentDataObject();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_GetCurrentMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  vtkInformation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCurrentMetaData();
      }
    else
      {
      tempr = op->vtkCompositeDataIterator::GetCurrentMetaData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_HasCurrentMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCurrentMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->HasCurrentMetaData();
      }
    else
      {
      tempr = op->vtkCompositeDataIterator::HasCurrentMetaData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_SetVisitOnlyLeaves(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisitOnlyLeaves");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVisitOnlyLeaves(temp0);
      }
    else
      {
      op->vtkCompositeDataIterator::SetVisitOnlyLeaves(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_GetVisitOnlyLeaves(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisitOnlyLeaves");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVisitOnlyLeaves();
      }
    else
      {
      tempr = op->vtkCompositeDataIterator::GetVisitOnlyLeaves();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_VisitOnlyLeavesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VisitOnlyLeavesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->VisitOnlyLeavesOn();
      }
    else
      {
      op->vtkCompositeDataIterator::VisitOnlyLeavesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_VisitOnlyLeavesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VisitOnlyLeavesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->VisitOnlyLeavesOff();
      }
    else
      {
      op->vtkCompositeDataIterator::VisitOnlyLeavesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_SetTraverseSubTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTraverseSubTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTraverseSubTree(temp0);
      }
    else
      {
      op->vtkCompositeDataIterator::SetTraverseSubTree(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_GetTraverseSubTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTraverseSubTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTraverseSubTree();
      }
    else
      {
      tempr = op->vtkCompositeDataIterator::GetTraverseSubTree();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_TraverseSubTreeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TraverseSubTreeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TraverseSubTreeOn();
      }
    else
      {
      op->vtkCompositeDataIterator::TraverseSubTreeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_TraverseSubTreeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TraverseSubTreeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TraverseSubTreeOff();
      }
    else
      {
      op->vtkCompositeDataIterator::TraverseSubTreeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_SetSkipEmptyNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSkipEmptyNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSkipEmptyNodes(temp0);
      }
    else
      {
      op->vtkCompositeDataIterator::SetSkipEmptyNodes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_GetSkipEmptyNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSkipEmptyNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSkipEmptyNodes();
      }
    else
      {
      tempr = op->vtkCompositeDataIterator::GetSkipEmptyNodes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_SkipEmptyNodesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SkipEmptyNodesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SkipEmptyNodesOn();
      }
    else
      {
      op->vtkCompositeDataIterator::SkipEmptyNodesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_SkipEmptyNodesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SkipEmptyNodesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SkipEmptyNodesOff();
      }
    else
      {
      op->vtkCompositeDataIterator::SkipEmptyNodesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_GetCurrentFlatIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentFlatIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  unsigned int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCurrentFlatIndex();
      }
    else
      {
      tempr = op->vtkCompositeDataIterator::GetCurrentFlatIndex();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_GetReverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetReverse();
      }
    else
      {
      tempr = op->vtkCompositeDataIterator::GetReverse();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCompositeDataIterator_Methods[] = {
  {(char*)"GetClassName", PyvtkCompositeDataIterator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCompositeDataIterator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCompositeDataIterator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCompositeDataIterator\nC++: vtkCompositeDataIterator *NewInstance()\n\n"},
  {(char*)"SetDataSet", PyvtkCompositeDataIterator_SetDataSet, 1,
   (char*)"V.SetDataSet(vtkCompositeDataSet)\nC++: virtual void SetDataSet(vtkCompositeDataSet *ds)\n\nSet the composite dataset this iterator is iterating over. Must\nbe set before traversal begins.\n"},
  {(char*)"GetDataSet", PyvtkCompositeDataIterator_GetDataSet, 1,
   (char*)"V.GetDataSet() -> vtkCompositeDataSet\nC++: vtkCompositeDataSet *GetDataSet()\n\nSet the composite dataset this iterator is iterating over. Must\nbe set before traversal begins.\n"},
  {(char*)"InitTraversal", PyvtkCompositeDataIterator_InitTraversal, 1,
   (char*)"V.InitTraversal()\nC++: virtual void InitTraversal()\n\nBegin iterating over the composite dataset structure.\n"},
  {(char*)"InitReverseTraversal", PyvtkCompositeDataIterator_InitReverseTraversal, 1,
   (char*)"V.InitReverseTraversal()\nC++: virtual void InitReverseTraversal()\n\nBegin iterating over the composite dataset structure in reverse\norder.\n"},
  {(char*)"GoToFirstItem", PyvtkCompositeDataIterator_GoToFirstItem, 1,
   (char*)"V.GoToFirstItem()\nC++: virtual void GoToFirstItem()\n\nMove the iterator to the beginning of the collection.\n"},
  {(char*)"GoToNextItem", PyvtkCompositeDataIterator_GoToNextItem, 1,
   (char*)"V.GoToNextItem()\nC++: virtual void GoToNextItem()\n\nMove the iterator to the next item in the collection.\n"},
  {(char*)"IsDoneWithTraversal", PyvtkCompositeDataIterator_IsDoneWithTraversal, 1,
   (char*)"V.IsDoneWithTraversal() -> int\nC++: virtual int IsDoneWithTraversal()\n\nTest whether the iterator is finished with the traversal. Returns\n1 for yes, and 0 for no. It is safe to call any of the\nGetCurrent...() methods only when IsDoneWithTraversal() returns\n0.\n"},
  {(char*)"GetCurrentDataObject", PyvtkCompositeDataIterator_GetCurrentDataObject, 1,
   (char*)"V.GetCurrentDataObject() -> vtkDataObject\nC++: virtual vtkDataObject *GetCurrentDataObject()\n\nReturns the current item. Valid only when IsDoneWithTraversal()\nreturns 0.\n"},
  {(char*)"GetCurrentMetaData", PyvtkCompositeDataIterator_GetCurrentMetaData, 1,
   (char*)"V.GetCurrentMetaData() -> vtkInformation\nC++: virtual vtkInformation *GetCurrentMetaData()\n\nReturns the meta-data associated with the current item. This will\nallocate a new vtkInformation object is none is already present.\nUse HasCurrentMetaData to avoid unnecessary creation of\nvtkInformation objects.\n"},
  {(char*)"HasCurrentMetaData", PyvtkCompositeDataIterator_HasCurrentMetaData, 1,
   (char*)"V.HasCurrentMetaData() -> int\nC++: virtual int HasCurrentMetaData()\n\nReturns if the a meta-data information object is present for the\ncurrent item. Return 1 on success, 0 otherwise.\n"},
  {(char*)"SetVisitOnlyLeaves", PyvtkCompositeDataIterator_SetVisitOnlyLeaves, 1,
   (char*)"V.SetVisitOnlyLeaves(int)\nC++: void SetVisitOnlyLeaves(int a)\n\nIf VisitOnlyLeaves is true, the iterator will only visit nodes\n(sub-datasets) that are not composite. If it encounters a\ncomposite data set, it will automatically traverse that composite\ndataset until it finds non-composite datasets. With this options,\nit is possible to visit all non-composite datasets in tree of\ncomposite datasets (composite of composite of composite for\nexample :-) ) If VisitOnlyLeaves is false, GetCurrentDataObject()\nmay return vtkCompositeDataSet. By default, VisitOnlyLeaves is 1.\n"},
  {(char*)"GetVisitOnlyLeaves", PyvtkCompositeDataIterator_GetVisitOnlyLeaves, 1,
   (char*)"V.GetVisitOnlyLeaves() -> int\nC++: int GetVisitOnlyLeaves()\n\nIf VisitOnlyLeaves is true, the iterator will only visit nodes\n(sub-datasets) that are not composite. If it encounters a\ncomposite data set, it will automatically traverse that composite\ndataset until it finds non-composite datasets. With this options,\nit is possible to visit all non-composite datasets in tree of\ncomposite datasets (composite of composite of composite for\nexample :-) ) If VisitOnlyLeaves is false, GetCurrentDataObject()\nmay return vtkCompositeDataSet. By default, VisitOnlyLeaves is 1.\n"},
  {(char*)"VisitOnlyLeavesOn", PyvtkCompositeDataIterator_VisitOnlyLeavesOn, 1,
   (char*)"V.VisitOnlyLeavesOn()\nC++: void VisitOnlyLeavesOn()\n\nIf VisitOnlyLeaves is true, the iterator will only visit nodes\n(sub-datasets) that are not composite. If it encounters a\ncomposite data set, it will automatically traverse that composite\ndataset until it finds non-composite datasets. With this options,\nit is possible to visit all non-composite datasets in tree of\ncomposite datasets (composite of composite of composite for\nexample :-) ) If VisitOnlyLeaves is false, GetCurrentDataObject()\nmay return vtkCompositeDataSet. By default, VisitOnlyLeaves is 1.\n"},
  {(char*)"VisitOnlyLeavesOff", PyvtkCompositeDataIterator_VisitOnlyLeavesOff, 1,
   (char*)"V.VisitOnlyLeavesOff()\nC++: void VisitOnlyLeavesOff()\n\nIf VisitOnlyLeaves is true, the iterator will only visit nodes\n(sub-datasets) that are not composite. If it encounters a\ncomposite data set, it will automatically traverse that composite\ndataset until it finds non-composite datasets. With this options,\nit is possible to visit all non-composite datasets in tree of\ncomposite datasets (composite of composite of composite for\nexample :-) ) If VisitOnlyLeaves is false, GetCurrentDataObject()\nmay return vtkCompositeDataSet. By default, VisitOnlyLeaves is 1.\n"},
  {(char*)"SetTraverseSubTree", PyvtkCompositeDataIterator_SetTraverseSubTree, 1,
   (char*)"V.SetTraverseSubTree(int)\nC++: void SetTraverseSubTree(int a)\n\nIf TraverseSubTree is set to true, the iterator will visit the\nentire tree structure, otherwise it only visits the first level\nchildren. Set to 1 by default.\n"},
  {(char*)"GetTraverseSubTree", PyvtkCompositeDataIterator_GetTraverseSubTree, 1,
   (char*)"V.GetTraverseSubTree() -> int\nC++: int GetTraverseSubTree()\n\nIf TraverseSubTree is set to true, the iterator will visit the\nentire tree structure, otherwise it only visits the first level\nchildren. Set to 1 by default.\n"},
  {(char*)"TraverseSubTreeOn", PyvtkCompositeDataIterator_TraverseSubTreeOn, 1,
   (char*)"V.TraverseSubTreeOn()\nC++: void TraverseSubTreeOn()\n\nIf TraverseSubTree is set to true, the iterator will visit the\nentire tree structure, otherwise it only visits the first level\nchildren. Set to 1 by default.\n"},
  {(char*)"TraverseSubTreeOff", PyvtkCompositeDataIterator_TraverseSubTreeOff, 1,
   (char*)"V.TraverseSubTreeOff()\nC++: void TraverseSubTreeOff()\n\nIf TraverseSubTree is set to true, the iterator will visit the\nentire tree structure, otherwise it only visits the first level\nchildren. Set to 1 by default.\n"},
  {(char*)"SetSkipEmptyNodes", PyvtkCompositeDataIterator_SetSkipEmptyNodes, 1,
   (char*)"V.SetSkipEmptyNodes(int)\nC++: void SetSkipEmptyNodes(int a)\n\nIf SkipEmptyNodes is true, then NULL datasets will be skipped.\nDefault is true.\n"},
  {(char*)"GetSkipEmptyNodes", PyvtkCompositeDataIterator_GetSkipEmptyNodes, 1,
   (char*)"V.GetSkipEmptyNodes() -> int\nC++: int GetSkipEmptyNodes()\n\nIf SkipEmptyNodes is true, then NULL datasets will be skipped.\nDefault is true.\n"},
  {(char*)"SkipEmptyNodesOn", PyvtkCompositeDataIterator_SkipEmptyNodesOn, 1,
   (char*)"V.SkipEmptyNodesOn()\nC++: void SkipEmptyNodesOn()\n\nIf SkipEmptyNodes is true, then NULL datasets will be skipped.\nDefault is true.\n"},
  {(char*)"SkipEmptyNodesOff", PyvtkCompositeDataIterator_SkipEmptyNodesOff, 1,
   (char*)"V.SkipEmptyNodesOff()\nC++: void SkipEmptyNodesOff()\n\nIf SkipEmptyNodes is true, then NULL datasets will be skipped.\nDefault is true.\n"},
  {(char*)"GetCurrentFlatIndex", PyvtkCompositeDataIterator_GetCurrentFlatIndex, 1,
   (char*)"V.GetCurrentFlatIndex() -> int\nC++: unsigned int GetCurrentFlatIndex()\n\nFlat index is an index obtained by traversing the tree in\npreorder. This can be used to uniquely identify nodes in the\ntree. Not valid if IsDoneWithTraversal() returns true.\n"},
  {(char*)"GetReverse", PyvtkCompositeDataIterator_GetReverse, 1,
   (char*)"V.GetReverse() -> int\nC++: int GetReverse()\n\nReturns if the iteration is in reverse order.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCompositeDataIterator_StaticNew()
{
  return vtkCompositeDataIterator::New();
}

PyObject *PyVTKClass_vtkCompositeDataIteratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCompositeDataIterator_StaticNew,
    PyvtkCompositeDataIterator_Methods,
    "vtkCompositeDataIterator", modulename,
    NULL, NULL,
    PyvtkCompositeDataIterator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkCompositeDataIterator_Doc()
{
  static const char *docstring[] = {
    "vtkCompositeDataIterator - superclass for composite data iterators\n\n",
    "Superclass: vtkObject\n\n",
    "vtkCompositeDataIterator provides an interface for accessing datasets\nin a collection (vtkCompositeDataIterator).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCompositeDataIterator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCompositeDataIteratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCompositeDataIterator", o) != 0)
    {
    Py_DECREF(o);
    }

}

