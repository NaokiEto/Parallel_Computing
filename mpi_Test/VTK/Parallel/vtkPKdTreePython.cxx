// python wrapper for vtkPKdTree
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
#include "vtkPKdTree.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPKdTree(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPKdTree(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPKdTreeNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPKdTreeNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkKdTreeNew
extern "C" { PyObject *PyVTKClass_vtkKdTreeNew(const char *); }
#define DECLARED_PyVTKClass_vtkKdTreeNew
#endif

static const char **PyvtkPKdTree_Doc();


static PyObject *
PyvtkPKdTree_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

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
      tempr = op->vtkPKdTree::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

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
      tempr = op->vtkPKdTree::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  vtkPKdTree *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPKdTree::NewInstance();
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
PyvtkPKdTree_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPKdTree *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPKdTree::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_BuildLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildLocator();
      }
    else
      {
      op->vtkPKdTree::BuildLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_GetTotalNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTotalNumberOfCells();
      }
    else
      {
      tempr = op->vtkPKdTree::GetTotalNumberOfCells();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_CreateProcessCellCountData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateProcessCellCountData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->CreateProcessCellCountData();
      }
    else
      {
      tempr = op->vtkPKdTree::CreateProcessCellCountData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_CreateGlobalDataArrayBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateGlobalDataArrayBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->CreateGlobalDataArrayBounds();
      }
    else
      {
      tempr = op->vtkPKdTree::CreateGlobalDataArrayBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->SetController(temp0);
      }
    else
      {
      op->vtkPKdTree::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  vtkMultiProcessController *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetController();
      }
    else
      {
      tempr = op->vtkPKdTree::GetController();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_GetRegionAssignment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionAssignment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRegionAssignment();
      }
    else
      {
      tempr = op->vtkPKdTree::GetRegionAssignment();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_AssignRegionsRoundRobin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AssignRegionsRoundRobin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->AssignRegionsRoundRobin();
      }
    else
      {
      tempr = op->vtkPKdTree::AssignRegionsRoundRobin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_AssignRegionsContiguous(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AssignRegionsContiguous");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->AssignRegionsContiguous();
      }
    else
      {
      tempr = op->vtkPKdTree::AssignRegionsContiguous();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_GetRegionAssignmentMapLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionAssignmentMapLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRegionAssignmentMapLength();
      }
    else
      {
      tempr = op->vtkPKdTree::GetRegionAssignmentMapLength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_GetRegionAssignmentList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionAssignmentList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int temp0;
  vtkIntArray *temp1 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIntArray"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRegionAssignmentList(temp0, temp1);
      }
    else
      {
      tempr = op->vtkPKdTree::GetRegionAssignmentList(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_GetAllProcessesBorderingOnPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllProcessesBorderingOnPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  float temp0;
  float temp1;
  float temp2;
  vtkIntArray *temp3 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkIntArray"))
    {
    if (ap.IsBound())
      {
      op->GetAllProcessesBorderingOnPoint(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPKdTree::GetAllProcessesBorderingOnPoint(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_GetProcessAssignedToRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessAssignedToRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProcessAssignedToRegion(temp0);
      }
    else
      {
      tempr = op->vtkPKdTree::GetProcessAssignedToRegion(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_HasData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int temp0;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->HasData(temp0, temp1);
      }
    else
      {
      tempr = op->vtkPKdTree::HasData(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_GetProcessCellCountForRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessCellCountForRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int temp0;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProcessCellCountForRegion(temp0, temp1);
      }
    else
      {
      tempr = op->vtkPKdTree::GetProcessCellCountForRegion(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_GetTotalProcessesInRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalProcessesInRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTotalProcessesInRegion(temp0);
      }
    else
      {
      tempr = op->vtkPKdTree::GetTotalProcessesInRegion(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_GetProcessListForRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessListForRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int temp0;
  vtkIntArray *temp1 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIntArray"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProcessListForRegion(temp0, temp1);
      }
    else
      {
      tempr = op->vtkPKdTree::GetProcessListForRegion(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_GetTotalRegionsForProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalRegionsForProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTotalRegionsForProcess(temp0);
      }
    else
      {
      tempr = op->vtkPKdTree::GetTotalRegionsForProcess(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_GetRegionListForProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionListForProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int temp0;
  vtkIntArray *temp1 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIntArray"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRegionListForProcess(temp0, temp1);
      }
    else
      {
      tempr = op->vtkPKdTree::GetRegionListForProcess(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_GetCellListsForProcessRegions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellListsForProcessRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int temp0;
  int temp1;
  vtkIdList *temp2 = NULL;
  vtkIdList *temp3 = NULL;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkIdList") &&
      ap.GetVTKObject(temp3, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellListsForProcessRegions(temp0, temp1, temp2, temp3);
      }
    else
      {
      tempr = op->vtkPKdTree::GetCellListsForProcessRegions(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPKdTree_GetCellListsForProcessRegions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellListsForProcessRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int temp0;
  vtkDataSet *temp1 = NULL;
  vtkIdList *temp2 = NULL;
  vtkIdList *temp3 = NULL;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataSet") &&
      ap.GetVTKObject(temp2, "vtkIdList") &&
      ap.GetVTKObject(temp3, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellListsForProcessRegions(temp0, temp1, temp2, temp3);
      }
    else
      {
      tempr = op->vtkPKdTree::GetCellListsForProcessRegions(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPKdTree_GetCellListsForProcessRegions_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellListsForProcessRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int temp0;
  vtkIdList *temp1 = NULL;
  vtkIdList *temp2 = NULL;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellListsForProcessRegions(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkPKdTree::GetCellListsForProcessRegions(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPKdTree_GetCellListsForProcessRegions_Methods[] = {
  {NULL, PyvtkPKdTree_GetCellListsForProcessRegions_s1, 1,
   (char*)"@iiOO *vtkIdList *vtkIdList"},
  {NULL, PyvtkPKdTree_GetCellListsForProcessRegions_s2, 1,
   (char*)"@iOOO *vtkDataSet *vtkIdList *vtkIdList"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPKdTree_GetCellListsForProcessRegions(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPKdTree_GetCellListsForProcessRegions_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPKdTree_GetCellListsForProcessRegions_s3(self, args);
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetCellListsForProcessRegions");
  return NULL;
}



static PyObject *
PyvtkPKdTree_ViewOrderAllProcessesInDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ViewOrderAllProcessesInDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  double temp0[3];
  const int size0 = 3;
  vtkIntArray *temp1 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkIntArray"))
    {
    if (ap.IsBound())
      {
      tempr = op->ViewOrderAllProcessesInDirection(temp0, temp1);
      }
    else
      {
      tempr = op->vtkPKdTree::ViewOrderAllProcessesInDirection(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_ViewOrderAllProcessesFromPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ViewOrderAllProcessesFromPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  double temp0[3];
  const int size0 = 3;
  vtkIntArray *temp1 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkIntArray"))
    {
    if (ap.IsBound())
      {
      tempr = op->ViewOrderAllProcessesFromPosition(temp0, temp1);
      }
    else
      {
      tempr = op->vtkPKdTree::ViewOrderAllProcessesFromPosition(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_GetCellArrayGlobalRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayGlobalRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  char *temp0 = NULL;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      tempr = op->GetCellArrayGlobalRange(temp0, temp1);
      }
    else
      {
      tempr = op->vtkPKdTree::GetCellArrayGlobalRange(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPKdTree_GetCellArrayGlobalRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayGlobalRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int temp0;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      tempr = op->GetCellArrayGlobalRange(temp0, temp1);
      }
    else
      {
      tempr = op->vtkPKdTree::GetCellArrayGlobalRange(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPKdTree_GetCellArrayGlobalRange_Methods[] = {
  {NULL, PyvtkPKdTree_GetCellArrayGlobalRange_s1, 1,
   (char*)"@zO *d"},
  {NULL, PyvtkPKdTree_GetCellArrayGlobalRange_s2, 1,
   (char*)"@iO *d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPKdTree_GetCellArrayGlobalRange(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPKdTree_GetCellArrayGlobalRange_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetCellArrayGlobalRange");
  return NULL;
}



static PyObject *
PyvtkPKdTree_GetPointArrayGlobalRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayGlobalRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  char *temp0 = NULL;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      tempr = op->GetPointArrayGlobalRange(temp0, temp1);
      }
    else
      {
      tempr = op->vtkPKdTree::GetPointArrayGlobalRange(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPKdTree_GetPointArrayGlobalRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayGlobalRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int temp0;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      tempr = op->GetPointArrayGlobalRange(temp0, temp1);
      }
    else
      {
      tempr = op->vtkPKdTree::GetPointArrayGlobalRange(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPKdTree_GetPointArrayGlobalRange_Methods[] = {
  {NULL, PyvtkPKdTree_GetPointArrayGlobalRange_s1, 1,
   (char*)"@zO *d"},
  {NULL, PyvtkPKdTree_GetPointArrayGlobalRange_s2, 1,
   (char*)"@iO *d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPKdTree_GetPointArrayGlobalRange(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPKdTree_GetPointArrayGlobalRange_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPointArrayGlobalRange");
  return NULL;
}


static PyMethodDef PyvtkPKdTree_Methods[] = {
  {(char*)"GetClassName", PyvtkPKdTree_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPKdTree_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPKdTree_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPKdTree\nC++: vtkPKdTree *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPKdTree_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPKdTree\nC++: vtkPKdTree *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"BuildLocator", PyvtkPKdTree_BuildLocator, 1,
   (char*)"V.BuildLocator()\nC++: void BuildLocator()\n\nBuild the spatial decomposition.  Call this explicitly\n  after changing any parameters affecting the build of the\n  tree.  It must be called by all processes in the parallel\n  application, or it will hang.\n"},
  {(char*)"GetTotalNumberOfCells", PyvtkPKdTree_GetTotalNumberOfCells, 1,
   (char*)"V.GetTotalNumberOfCells() -> int\nC++: vtkIdType GetTotalNumberOfCells()\n\nGet the total number of cells distributed across the data\n  files read by all processes.  You must have called BuildLocator\n  before calling this method.\n"},
  {(char*)"CreateProcessCellCountData", PyvtkPKdTree_CreateProcessCellCountData, 1,
   (char*)"V.CreateProcessCellCountData() -> int\nC++: int CreateProcessCellCountData()\n\nCreate tables of counts of cells per process per region.\n  These tables can be accessed with queries like\n  \"HasData\", \"GetProcessCellCountForRegion\", and so on.\n  You must have called BuildLocator() beforehand.  This\n  method must be called by all processes or it will hang.\n  Returns 1 on error, 0 when no error.\n"},
  {(char*)"CreateGlobalDataArrayBounds", PyvtkPKdTree_CreateGlobalDataArrayBounds, 1,
   (char*)"V.CreateGlobalDataArrayBounds() -> int\nC++: int CreateGlobalDataArrayBounds()\n\nA convenience function which compiles the global\n  bounds of the data arrays across processes.\n  These bounds can be accessed with\n  \"GetCellArrayGlobalRange\" and \"GetPointArrayGlobalRange\".\n  This method must be called by all processes or it will hang.\n  Returns 1 on error, 0 when no error.\n"},
  {(char*)"SetController", PyvtkPKdTree_SetController, 1,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: void SetController(vtkMultiProcessController *c)\n\nSet/Get the communicator object\n"},
  {(char*)"GetController", PyvtkPKdTree_GetController, 1,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nSet/Get the communicator object\n"},
  {(char*)"GetRegionAssignment", PyvtkPKdTree_GetRegionAssignment, 1,
   (char*)"V.GetRegionAssignment() -> int\nC++: int GetRegionAssignment()\n\nThe PKdTree class can assign spatial regions to processors after\n  building the k-d tree, using one of several partitioning\ncriteria.\n  These functions Set/Get whether this assignment is computed.\n  The default is \"Off\", no assignment is computed.   If \"On\", and\n  no assignment scheme is specified, contiguous assignment will\nbe\n  computed.  Specifying an assignment scheme (with\nAssignRegions*())\n  automatically turns on RegionAssignment.\n"},
  {(char*)"AssignRegionsRoundRobin", PyvtkPKdTree_AssignRegionsRoundRobin, 1,
   (char*)"V.AssignRegionsRoundRobin() -> int\nC++: int AssignRegionsRoundRobin()\n\nLet the PKdTree class assign a process to each region in a\n  round robin fashion.  If the k-d tree has not yet been\n  built, the regions will be assigned after BuildLocator\nexecutes.\n"},
  {(char*)"AssignRegionsContiguous", PyvtkPKdTree_AssignRegionsContiguous, 1,
   (char*)"V.AssignRegionsContiguous() -> int\nC++: int AssignRegionsContiguous()\n\nLet the PKdTree class assign a process to each region\n   by assigning contiguous sets of spatial regions to each\n   process.  The set of regions assigned to each process will\n   always have a union that is a convex space (a box).\n   If the k-d tree has not yet been built, the regions\n   will be assigned after BuildLocator executes.\n"},
  {(char*)"GetRegionAssignmentMapLength", PyvtkPKdTree_GetRegionAssignmentMapLength, 1,
   (char*)"V.GetRegionAssignmentMapLength() -> int\nC++: int GetRegionAssignmentMapLength()\n\n/ Returns the number of regions in the region assignment map.\n"},
  {(char*)"GetRegionAssignmentList", PyvtkPKdTree_GetRegionAssignmentList, 1,
   (char*)"V.GetRegionAssignmentList(int, vtkIntArray) -> int\nC++: int GetRegionAssignmentList(int procId, vtkIntArray *list)\n\nWrites the list of region IDs assigned to the specified\n   process.  Regions IDs start at 0 and increase by 1 from there.\n   Returns the number of regions in the list.\n"},
  {(char*)"GetAllProcessesBorderingOnPoint", PyvtkPKdTree_GetAllProcessesBorderingOnPoint, 1,
   (char*)"V.GetAllProcessesBorderingOnPoint(float, float, float,\n    vtkIntArray)\nC++: void GetAllProcessesBorderingOnPoint(float x, float y,\n    float z, vtkIntArray *list)\n\nThe k-d tree spatial regions have been assigned to processes.\n   Given a point on the boundary of one of the regions, this\n   method creates a list of all processes whose region\n   boundaries include that point.  This may be required when\n   looking for processes that have cells adjacent to the cells\n   of a given process.\n"},
  {(char*)"GetProcessAssignedToRegion", PyvtkPKdTree_GetProcessAssignedToRegion, 1,
   (char*)"V.GetProcessAssignedToRegion(int) -> int\nC++: int GetProcessAssignedToRegion(int regionId)\n\nReturns the ID of the process assigned to the region.\n"},
  {(char*)"HasData", PyvtkPKdTree_HasData, 1,
   (char*)"V.HasData(int, int) -> int\nC++: int HasData(int processId, int regionId)\n\nReturns 1 if the process has data for the given region,\n  0 otherwise.\n"},
  {(char*)"GetProcessCellCountForRegion", PyvtkPKdTree_GetProcessCellCountForRegion, 1,
   (char*)"V.GetProcessCellCountForRegion(int, int) -> int\nC++: int GetProcessCellCountForRegion(int processId, int regionId)\n\nReturns the number of cells the specified process has in the\n  specified region.\n"},
  {(char*)"GetTotalProcessesInRegion", PyvtkPKdTree_GetTotalProcessesInRegion, 1,
   (char*)"V.GetTotalProcessesInRegion(int) -> int\nC++: int GetTotalProcessesInRegion(int regionId)\n\nReturns the total number of processes that have data\n  falling within this spatial region.\n"},
  {(char*)"GetProcessListForRegion", PyvtkPKdTree_GetProcessListForRegion, 1,
   (char*)"V.GetProcessListForRegion(int, vtkIntArray) -> int\nC++: int GetProcessListForRegion(int regionId,\n    vtkIntArray *processes)\n\nAdds the list of processes having data for the given\n  region to the supplied list, returns the number of\n  processes added.\n"},
  {(char*)"GetTotalRegionsForProcess", PyvtkPKdTree_GetTotalRegionsForProcess, 1,
   (char*)"V.GetTotalRegionsForProcess(int) -> int\nC++: int GetTotalRegionsForProcess(int processId)\n\nReturns the total number of spatial regions that a given\n  process has data for.\n"},
  {(char*)"GetRegionListForProcess", PyvtkPKdTree_GetRegionListForProcess, 1,
   (char*)"V.GetRegionListForProcess(int, vtkIntArray) -> int\nC++: int GetRegionListForProcess(int processId,\n    vtkIntArray *regions)\n\nAdds the region IDs for which this process has data to\n  the supplied vtkIntArray.  Retruns the number of regions.\n"},
  {(char*)"GetCellListsForProcessRegions", PyvtkPKdTree_GetCellListsForProcessRegions, 1,
   (char*)"V.GetCellListsForProcessRegions(int, int, vtkIdList, vtkIdList)\n    -> int\nC++: vtkIdType GetCellListsForProcessRegions(int ProcessId,\n    int set, vtkIdList *inRegionCells, vtkIdList *onBoundaryCells)\nV.GetCellListsForProcessRegions(int, vtkDataSet, vtkIdList,\n    vtkIdList) -> int\nC++: vtkIdType GetCellListsForProcessRegions(int ProcessId,\n    vtkDataSet *set, vtkIdList *inRegionCells,\n    vtkIdList *onBoundaryCells)\nV.GetCellListsForProcessRegions(int, vtkIdList, vtkIdList) -> int\nC++: vtkIdType GetCellListsForProcessRegions(int ProcessId,\n    vtkIdList *inRegionCells, vtkIdList *onBoundaryCells)\n\nAfter regions have been assigned to processes, I may want to know\n  which cells I have that are in the regions assigned to a\nparticular\n  process.\n\n\n  This method takes a process ID and two vtkIdLists.  It\n  writes to the first list the IDs of the cells\n  contained in the process' regions.  (That is, their cell\n  centroid is contained in the region.)  To the second list it\n  write the IDs of the cells which intersect the process' regions\n  but whose cell centroid lies elsewhere.\n\n\n  The total number of cell IDs written to both lists is returned.\n  Either list pointer passed in can be NULL, and it will be\nignored.\n  If there are multiple data sets, you must specify which data\nset\n  you wish cell IDs for.\n\n\n  The caller should delete these two lists when done.  This\nmethod\n  uses the cell lists created in vtkKdTree::CreateCellLists().\n  If the cell lists for the process' regions do not exist, this\n  method will first build the cell lists for all regions by\ncalling\n  CreateCellLists().  You must remember to DeleteCellLists() when\n  done with all calls to this method, as cell lists can require a\n  great deal of memory.\n"},
  {(char*)"ViewOrderAllProcessesInDirection", PyvtkPKdTree_ViewOrderAllProcessesInDirection, 1,
   (char*)"V.ViewOrderAllProcessesInDirection((float, float, float),\n    vtkIntArray) -> int\nC++: int ViewOrderAllProcessesInDirection(\n    const double directionOfProjection[3],\n    vtkIntArray *orderedList)\n\nReturn a list of all processes in order from front to back given\na vector direction of projection.  Use this to do visibility\nsorts in parallel projection mode. `orderedList' will be resized\nto the number of processes. The return value is the number of\nprocesses.\n\\pre orderedList_exists: orderedList!=0\n"},
  {(char*)"ViewOrderAllProcessesFromPosition", PyvtkPKdTree_ViewOrderAllProcessesFromPosition, 1,
   (char*)"V.ViewOrderAllProcessesFromPosition((float, float, float),\n    vtkIntArray) -> int\nC++: int ViewOrderAllProcessesFromPosition(\n    const double cameraPosition[3], vtkIntArray *orderedList)\n\nReturn a list of all processes in order from front to back given\na camera position.  Use this to do visibility sorts in\nperspective projection mode. `orderedList' will be resized to the\nnumber of processes. The return value is the number of processes.\n\\pre orderedList_exists: orderedList!=0\n"},
  {(char*)"GetCellArrayGlobalRange", PyvtkPKdTree_GetCellArrayGlobalRange, 1,
   (char*)"V.GetCellArrayGlobalRange(string, [float, float]) -> int\nC++: int GetCellArrayGlobalRange(const char *name,\n    double range[2])\nV.GetCellArrayGlobalRange(int, [float, float]) -> int\nC++: int GetCellArrayGlobalRange(int arrayIndex, double range[2])\n\nAn added feature of vtkPKdTree is that it will calculate the\n   the global range of field arrays across all processes.  You\n   call CreateGlobalDataArrayBounds() to do this calculation.\n   Then the following methods return the ranges.\n   Returns 1 on error, 0 otherwise.\n"},
  {(char*)"GetPointArrayGlobalRange", PyvtkPKdTree_GetPointArrayGlobalRange, 1,
   (char*)"V.GetPointArrayGlobalRange(string, [float, float]) -> int\nC++: int GetPointArrayGlobalRange(const char *name,\n    double range[2])\nV.GetPointArrayGlobalRange(int, [float, float]) -> int\nC++: int GetPointArrayGlobalRange(int arrayIndex, double range[2])\n\nAn added feature of vtkPKdTree is that it will calculate the\n   the global range of field arrays across all processes.  You\n   call CreateGlobalDataArrayBounds() to do this calculation.\n   Then the following methods return the ranges.\n   Returns 1 on error, 0 otherwise.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPKdTree_StaticNew()
{
  return vtkPKdTree::New();
}

PyObject *PyVTKClass_vtkPKdTreeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPKdTree_StaticNew,
    PyvtkPKdTree_Methods,
    "vtkPKdTree", modulename,
    NULL, NULL,
    PyvtkPKdTree_Doc(),
    PyVTKClass_vtkKdTreeNew(modulename));
  return cls;
}

const char **PyvtkPKdTree_Doc()
{
  static const char *docstring[] = {
    "vtkPKdTree - Build a k-d tree decomposition of a list of points.\n\n",
    "Superclass: vtkKdTree\n\n",
    "Build, in parallel, a k-d tree decomposition of one or more\n     vtkDataSets distributed across processors.  We assume each\n     process has read in one portion of a large distributed data set.\n     When done, each process has access to the k-d tree structure,\n     can obtain information about which process contains\n     data for each spatial region, and can depth sort the spatial\n     regions.\n\n\n",
    "     This class can also assign spatial regions to processors, based\n     on one of several region assignment schemes.  By default\n     a contiguous, convex region is assigned to each process. \nSeveral\n     queries return information about how many and what cells I have\n     that lie in a region assigned to another process.\n\nSee Also:\n\n\n     vtkKdTree\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPKdTree(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPKdTreeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPKdTree", o) != 0)
    {
    Py_DECREF(o);
    }

}

