// python wrapper for vtkMergeCells
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
#include "vtkMergeCells.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMergeCells(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMergeCells(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMergeCellsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMergeCellsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkMergeCells_Doc();


static PyObject *
PyvtkMergeCells_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

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
      tempr = op->vtkMergeCells::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCells_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

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
      tempr = op->vtkMergeCells::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCells_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  vtkMergeCells *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMergeCells::NewInstance();
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
PyvtkMergeCells_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkMergeCells *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkMergeCells::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCells_SetUnstructuredGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnstructuredGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  vtkUnstructuredGrid *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUnstructuredGrid"))
    {
    if (ap.IsBound())
      {
      op->SetUnstructuredGrid(temp0);
      }
    else
      {
      op->vtkMergeCells::SetUnstructuredGrid(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCells_GetUnstructuredGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnstructuredGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  vtkUnstructuredGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUnstructuredGrid();
      }
    else
      {
      tempr = op->vtkMergeCells::GetUnstructuredGrid();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCells_SetTotalNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTotalNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTotalNumberOfCells(temp0);
      }
    else
      {
      op->vtkMergeCells::SetTotalNumberOfCells(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCells_GetTotalNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

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
      tempr = op->vtkMergeCells::GetTotalNumberOfCells();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCells_SetTotalNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTotalNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTotalNumberOfPoints(temp0);
      }
    else
      {
      op->vtkMergeCells::SetTotalNumberOfPoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCells_GetTotalNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTotalNumberOfPoints();
      }
    else
      {
      tempr = op->vtkMergeCells::GetTotalNumberOfPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCells_SetUseGlobalIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseGlobalIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseGlobalIds(temp0);
      }
    else
      {
      op->vtkMergeCells::SetUseGlobalIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCells_GetUseGlobalIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseGlobalIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseGlobalIds();
      }
    else
      {
      tempr = op->vtkMergeCells::GetUseGlobalIds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCells_SetPointMergeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointMergeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPointMergeTolerance(temp0);
      }
    else
      {
      op->vtkMergeCells::SetPointMergeTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCells_GetPointMergeToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMergeToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointMergeToleranceMinValue();
      }
    else
      {
      tempr = op->vtkMergeCells::GetPointMergeToleranceMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCells_GetPointMergeToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMergeToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointMergeToleranceMaxValue();
      }
    else
      {
      tempr = op->vtkMergeCells::GetPointMergeToleranceMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCells_GetPointMergeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMergeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointMergeTolerance();
      }
    else
      {
      tempr = op->vtkMergeCells::GetPointMergeTolerance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCells_SetUseGlobalCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseGlobalCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseGlobalCellIds(temp0);
      }
    else
      {
      op->vtkMergeCells::SetUseGlobalCellIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCells_GetUseGlobalCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseGlobalCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseGlobalCellIds();
      }
    else
      {
      tempr = op->vtkMergeCells::GetUseGlobalCellIds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCells_SetMergeDuplicatePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergeDuplicatePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMergeDuplicatePoints(temp0);
      }
    else
      {
      op->vtkMergeCells::SetMergeDuplicatePoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCells_GetMergeDuplicatePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergeDuplicatePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMergeDuplicatePoints();
      }
    else
      {
      tempr = op->vtkMergeCells::GetMergeDuplicatePoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCells_MergeDuplicatePointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergeDuplicatePointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MergeDuplicatePointsOn();
      }
    else
      {
      op->vtkMergeCells::MergeDuplicatePointsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCells_MergeDuplicatePointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergeDuplicatePointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MergeDuplicatePointsOff();
      }
    else
      {
      op->vtkMergeCells::MergeDuplicatePointsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCells_SetTotalNumberOfDataSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTotalNumberOfDataSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTotalNumberOfDataSets(temp0);
      }
    else
      {
      op->vtkMergeCells::SetTotalNumberOfDataSets(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCells_GetTotalNumberOfDataSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalNumberOfDataSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTotalNumberOfDataSets();
      }
    else
      {
      tempr = op->vtkMergeCells::GetTotalNumberOfDataSets();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCells_MergeDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergeDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  vtkDataSet *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      tempr = op->MergeDataSet(temp0);
      }
    else
      {
      tempr = op->vtkMergeCells::MergeDataSet(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCells_Finish(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finish");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Finish();
      }
    else
      {
      op->vtkMergeCells::Finish();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMergeCells_Methods[] = {
  {(char*)"GetClassName", PyvtkMergeCells_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMergeCells_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMergeCells_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMergeCells\nC++: vtkMergeCells *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMergeCells_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMergeCells\nC++: vtkMergeCells *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetUnstructuredGrid", PyvtkMergeCells_SetUnstructuredGrid, 1,
   (char*)"V.SetUnstructuredGrid(vtkUnstructuredGrid)\nC++: virtual void SetUnstructuredGrid(vtkUnstructuredGrid *)\n\nSet the vtkUnstructuredGrid object that will become the\n   union of the DataSets specified in MergeDataSet calls.\n   vtkMergeCells assumes this grid is empty at first.\n"},
  {(char*)"GetUnstructuredGrid", PyvtkMergeCells_GetUnstructuredGrid, 1,
   (char*)"V.GetUnstructuredGrid() -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetUnstructuredGrid()\n\nSet the vtkUnstructuredGrid object that will become the\n   union of the DataSets specified in MergeDataSet calls.\n   vtkMergeCells assumes this grid is empty at first.\n"},
  {(char*)"SetTotalNumberOfCells", PyvtkMergeCells_SetTotalNumberOfCells, 1,
   (char*)"V.SetTotalNumberOfCells(int)\nC++: void SetTotalNumberOfCells(vtkIdType a)\n\nSpecify the total number of cells in the final\nvtkUnstructuredGrid.\n   Make this call before any call to MergeDataSet().\n"},
  {(char*)"GetTotalNumberOfCells", PyvtkMergeCells_GetTotalNumberOfCells, 1,
   (char*)"V.GetTotalNumberOfCells() -> int\nC++: vtkIdType GetTotalNumberOfCells()\n\nSpecify the total number of cells in the final\nvtkUnstructuredGrid.\n   Make this call before any call to MergeDataSet().\n"},
  {(char*)"SetTotalNumberOfPoints", PyvtkMergeCells_SetTotalNumberOfPoints, 1,
   (char*)"V.SetTotalNumberOfPoints(int)\nC++: void SetTotalNumberOfPoints(vtkIdType a)\n\nSpecify the total number of points in the final\nvtkUnstructuredGrid\n   Make this call before any call to MergeDataSet().  This is an\n   upper bound, since some points may be duplicates.\n"},
  {(char*)"GetTotalNumberOfPoints", PyvtkMergeCells_GetTotalNumberOfPoints, 1,
   (char*)"V.GetTotalNumberOfPoints() -> int\nC++: vtkIdType GetTotalNumberOfPoints()\n\nSpecify the total number of points in the final\nvtkUnstructuredGrid\n   Make this call before any call to MergeDataSet().  This is an\n   upper bound, since some points may be duplicates.\n"},
  {(char*)"SetUseGlobalIds", PyvtkMergeCells_SetUseGlobalIds, 1,
   (char*)"V.SetUseGlobalIds(int)\nC++: void SetUseGlobalIds(int a)\n\nvtkMergeCells attempts eliminate duplicate points when merging\n  data sets.  This is done most efficiently if a global point ID\n  field array is available.  Set the name of the point array if\nyou\n  have one.\n"},
  {(char*)"GetUseGlobalIds", PyvtkMergeCells_GetUseGlobalIds, 1,
   (char*)"V.GetUseGlobalIds() -> int\nC++: int GetUseGlobalIds()\n\nvtkMergeCells attempts eliminate duplicate points when merging\n  data sets.  This is done most efficiently if a global point ID\n  field array is available.  Set the name of the point array if\nyou\n  have one.\n"},
  {(char*)"SetPointMergeTolerance", PyvtkMergeCells_SetPointMergeTolerance, 1,
   (char*)"V.SetPointMergeTolerance(float)\nC++: void SetPointMergeTolerance(float)\n\nvtkMergeCells attempts eliminate duplicate points when merging\n  data sets.  If no global point ID field array name is provided,\n  it will use a point locator to find duplicate points.  You can\n  set a tolerance for that locator here.  The default tolerance\n  is 10e-4.\n"},
  {(char*)"GetPointMergeToleranceMinValue", PyvtkMergeCells_GetPointMergeToleranceMinValue, 1,
   (char*)"V.GetPointMergeToleranceMinValue() -> float\nC++: float GetPointMergeToleranceMinValue()\n\nvtkMergeCells attempts eliminate duplicate points when merging\n  data sets.  If no global point ID field array name is provided,\n  it will use a point locator to find duplicate points.  You can\n  set a tolerance for that locator here.  The default tolerance\n  is 10e-4.\n"},
  {(char*)"GetPointMergeToleranceMaxValue", PyvtkMergeCells_GetPointMergeToleranceMaxValue, 1,
   (char*)"V.GetPointMergeToleranceMaxValue() -> float\nC++: float GetPointMergeToleranceMaxValue()\n\nvtkMergeCells attempts eliminate duplicate points when merging\n  data sets.  If no global point ID field array name is provided,\n  it will use a point locator to find duplicate points.  You can\n  set a tolerance for that locator here.  The default tolerance\n  is 10e-4.\n"},
  {(char*)"GetPointMergeTolerance", PyvtkMergeCells_GetPointMergeTolerance, 1,
   (char*)"V.GetPointMergeTolerance() -> float\nC++: float GetPointMergeTolerance()\n\nvtkMergeCells attempts eliminate duplicate points when merging\n  data sets.  If no global point ID field array name is provided,\n  it will use a point locator to find duplicate points.  You can\n  set a tolerance for that locator here.  The default tolerance\n  is 10e-4.\n"},
  {(char*)"SetUseGlobalCellIds", PyvtkMergeCells_SetUseGlobalCellIds, 1,
   (char*)"V.SetUseGlobalCellIds(int)\nC++: void SetUseGlobalCellIds(int a)\n\nvtkMergeCells will detect and filter out duplicate cells if you\n  provide it the name of a global cell ID array.\n"},
  {(char*)"GetUseGlobalCellIds", PyvtkMergeCells_GetUseGlobalCellIds, 1,
   (char*)"V.GetUseGlobalCellIds() -> int\nC++: int GetUseGlobalCellIds()\n\nvtkMergeCells will detect and filter out duplicate cells if you\n  provide it the name of a global cell ID array.\n"},
  {(char*)"SetMergeDuplicatePoints", PyvtkMergeCells_SetMergeDuplicatePoints, 1,
   (char*)"V.SetMergeDuplicatePoints(int)\nC++: void SetMergeDuplicatePoints(int a)\n\nvtkMergeCells attempts eliminate duplicate points when merging\n  data sets.  If for some reason you don't want it to do this,\n  than MergeDuplicatePointsOff().\n"},
  {(char*)"GetMergeDuplicatePoints", PyvtkMergeCells_GetMergeDuplicatePoints, 1,
   (char*)"V.GetMergeDuplicatePoints() -> int\nC++: int GetMergeDuplicatePoints()\n\nvtkMergeCells attempts eliminate duplicate points when merging\n  data sets.  If for some reason you don't want it to do this,\n  than MergeDuplicatePointsOff().\n"},
  {(char*)"MergeDuplicatePointsOn", PyvtkMergeCells_MergeDuplicatePointsOn, 1,
   (char*)"V.MergeDuplicatePointsOn()\nC++: void MergeDuplicatePointsOn()\n\nvtkMergeCells attempts eliminate duplicate points when merging\n  data sets.  If for some reason you don't want it to do this,\n  than MergeDuplicatePointsOff().\n"},
  {(char*)"MergeDuplicatePointsOff", PyvtkMergeCells_MergeDuplicatePointsOff, 1,
   (char*)"V.MergeDuplicatePointsOff()\nC++: void MergeDuplicatePointsOff()\n\nvtkMergeCells attempts eliminate duplicate points when merging\n  data sets.  If for some reason you don't want it to do this,\n  than MergeDuplicatePointsOff().\n"},
  {(char*)"SetTotalNumberOfDataSets", PyvtkMergeCells_SetTotalNumberOfDataSets, 1,
   (char*)"V.SetTotalNumberOfDataSets(int)\nC++: void SetTotalNumberOfDataSets(int a)\n\nWe need to know the number of different data sets that will\n   be merged into one so we can pre-allocate some arrays.\n   This can be an upper bound, not necessarily exact.\n"},
  {(char*)"GetTotalNumberOfDataSets", PyvtkMergeCells_GetTotalNumberOfDataSets, 1,
   (char*)"V.GetTotalNumberOfDataSets() -> int\nC++: int GetTotalNumberOfDataSets()\n\nWe need to know the number of different data sets that will\n   be merged into one so we can pre-allocate some arrays.\n   This can be an upper bound, not necessarily exact.\n"},
  {(char*)"MergeDataSet", PyvtkMergeCells_MergeDataSet, 1,
   (char*)"V.MergeDataSet(vtkDataSet) -> int\nC++: int MergeDataSet(vtkDataSet *set)\n\nProvide a DataSet to be merged in to the final UnstructuredGrid.\n   This call returns after the merge has completed.  Be sure to\ncall\n   SetTotalNumberOfCells, SetTotalNumberOfPoints, and\nSetTotalNumberOfDataSets\n   before making this call.  Return 0 if OK, -1 if error.\n"},
  {(char*)"Finish", PyvtkMergeCells_Finish, 1,
   (char*)"V.Finish()\nC++: void Finish()\n\nCall Finish() after merging last DataSet to free unneeded memory\nand to\n   make sure the ugrid's GetNumberOfPoints() reflects the actual\n   number of points set, not the number allocated.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMergeCells_StaticNew()
{
  return vtkMergeCells::New();
}

PyObject *PyVTKClass_vtkMergeCellsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMergeCells_StaticNew,
    PyvtkMergeCells_Methods,
    "vtkMergeCells", modulename,
    NULL, NULL,
    PyvtkMergeCells_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkMergeCells_Doc()
{
  static const char *docstring[] = {
    "vtkMergeCells - merges any number of vtkDataSets back into a single\n\n",
    "Superclass: vtkObject\n\n",
    "Designed to work with distributed vtkDataSets, this class will take\n   vtkDataSets and merge them back into a single vtkUnstructuredGrid.\n\n\n   The vtkPoints object of the unstructured grid will have data type\n   VTK_FLOAT, regardless of the data type of the points of the\n   input vtkDataSets.  If this is a problem, someone must let me\nknow.\n\n\n   It is assumed the different DataSets have the same f",
    "ield arrays. \nIf\n   the name of a global point ID array is provided, this class will\n   refrain from including duplicate points in the merged Ugrid.  This\n   class differs from vtkAppendFilter in these ways: (1) it uses less\n   memory than that class (which uses memory equal to twice the size\n   of the final Ugrid) but requires that you know the size of the\n   final Ugrid in advance (2) this class",
    " assumes the individual\nDataSets have\n   the same field arrays, while vtkAppendFilter intersects the field\n   arrays (3) this class knows duplicate points may be appearing in\n   the DataSets and can filter those out, (4) this class is not a\nfilter.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMergeCells(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMergeCellsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMergeCells", o) != 0)
    {
    Py_DECREF(o);
    }

}

