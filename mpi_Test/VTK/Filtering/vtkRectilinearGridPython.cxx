// python wrapper for vtkRectilinearGrid
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
#include "vtkRectilinearGrid.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkRectilinearGrid(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkRectilinearGrid(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkRectilinearGridNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkRectilinearGridNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataSetNew
extern "C" { PyObject *PyVTKClass_vtkDataSetNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetNew
#endif

static const char **PyvtkRectilinearGrid_Doc();


static PyObject *
PyvtkRectilinearGrid_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

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
      tempr = op->vtkRectilinearGrid::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

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
      tempr = op->vtkRectilinearGrid::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  vtkRectilinearGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkRectilinearGrid::NewInstance();
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
PyvtkRectilinearGrid_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkRectilinearGrid *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkRectilinearGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataObjectType();
      }
    else
      {
      tempr = op->vtkRectilinearGrid::GetDataObjectType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_CopyStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->CopyStructure(temp0);
      }
    else
      {
      op->vtkRectilinearGrid::CopyStructure(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkRectilinearGrid::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfCells();
      }
    else
      {
      tempr = op->vtkRectilinearGrid::GetNumberOfCells();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfPoints();
      }
    else
      {
      tempr = op->vtkRectilinearGrid::GetNumberOfPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_GetPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  vtkIdType temp0;
  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPoint(temp0);
      }
    else
      {
      tempr = op->vtkRectilinearGrid::GetPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkRectilinearGrid_GetPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  vtkIdType temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetPoint(temp0, temp1);
      }
    else
      {
      op->vtkRectilinearGrid::GetPoint(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRectilinearGrid_GetPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkRectilinearGrid_GetPoint_s1(self, args);
    case 2:
      return PyvtkRectilinearGrid_GetPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint");
  return NULL;
}



static PyObject *
PyvtkRectilinearGrid_GetCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  vtkIdType temp0;
  vtkCell *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCell(temp0);
      }
    else
      {
      tempr = op->vtkRectilinearGrid::GetCell(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRectilinearGrid_GetCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  vtkIdType temp0;
  vtkGenericCell *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkGenericCell"))
    {
    if (ap.IsBound())
      {
      op->GetCell(temp0, temp1);
      }
    else
      {
      op->vtkRectilinearGrid::GetCell(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRectilinearGrid_GetCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkRectilinearGrid_GetCell_s1(self, args);
    case 2:
      return PyvtkRectilinearGrid_GetCell_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetCell");
  return NULL;
}



static PyObject *
PyvtkRectilinearGrid_GetCellBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  vtkIdType temp0;
  double temp1[6];
  double save1[6];
  const int size1 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetCellBounds(temp0, temp1);
      }
    else
      {
      op->vtkRectilinearGrid::GetCellBounds(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_FindPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  double temp0;
  double temp1;
  double temp2;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->FindPoint(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkRectilinearGrid::FindPoint(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRectilinearGrid_FindPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      tempr = op->FindPoint(temp0);
      }
    else
      {
      tempr = op->vtkRectilinearGrid::FindPoint(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRectilinearGrid_FindPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkRectilinearGrid_FindPoint_s1(self, args);
    case 1:
      return PyvtkRectilinearGrid_FindPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "FindPoint");
  return NULL;
}



static PyObject *
PyvtkRectilinearGrid_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  vtkIdType temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellType(temp0);
      }
    else
      {
      tempr = op->vtkRectilinearGrid::GetCellType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_GetCellPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  vtkIdType temp0;
  vtkIdList *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      op->GetCellPoints(temp0, temp1);
      }
    else
      {
      op->vtkRectilinearGrid::GetCellPoints(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_GetPointCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  vtkIdType temp0;
  vtkIdList *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      op->GetPointCells(temp0, temp1);
      }
    else
      {
      op->vtkRectilinearGrid::GetPointCells(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_ComputeBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeBounds();
      }
    else
      {
      op->vtkRectilinearGrid::ComputeBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_GetMaxCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaxCellSize();
      }
    else
      {
      tempr = op->vtkRectilinearGrid::GetMaxCellSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_GetCellNeighbors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  vtkIdType temp0;
  vtkIdList *temp1 = NULL;
  vtkIdList *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      op->GetCellNeighbors(temp0, temp1, temp2);
      }
    else
      {
      op->vtkRectilinearGrid::GetCellNeighbors(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_SetDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetDimensions(temp0, temp1, temp2);
      }
    else
      {
      op->vtkRectilinearGrid::SetDimensions(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRectilinearGrid_SetDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  int temp0[3];
  int save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetDimensions(temp0);
      }
    else
      {
      op->vtkRectilinearGrid::SetDimensions(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRectilinearGrid_SetDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkRectilinearGrid_SetDimensions_s1(self, args);
    case 1:
      return PyvtkRectilinearGrid_SetDimensions_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDimensions");
  return NULL;
}



static PyObject *
PyvtkRectilinearGrid_GetDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  int *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDimensions();
      }
    else
      {
      tempr = op->vtkRectilinearGrid::GetDimensions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_GetDataDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataDimension();
      }
    else
      {
      tempr = op->vtkRectilinearGrid::GetDataDimension();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_ComputeStructuredCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeStructuredCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  int temp1[3];
  int save1[3];
  const int size1 = 3;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      tempr = op->ComputeStructuredCoordinates(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkRectilinearGrid::ComputeStructuredCoordinates(temp0, temp1, temp2);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_ComputePointId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputePointId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  int temp0[3];
  int save0[3];
  const int size0 = 3;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      tempr = op->ComputePointId(temp0);
      }
    else
      {
      tempr = op->vtkRectilinearGrid::ComputePointId(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_ComputeCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  int temp0[3];
  int save0[3];
  const int size0 = 3;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      tempr = op->ComputeCellId(temp0);
      }
    else
      {
      tempr = op->vtkRectilinearGrid::ComputeCellId(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_SetXCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  vtkDataArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
    {
    if (ap.IsBound())
      {
      op->SetXCoordinates(temp0);
      }
    else
      {
      op->vtkRectilinearGrid::SetXCoordinates(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_GetXCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  vtkDataArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXCoordinates();
      }
    else
      {
      tempr = op->vtkRectilinearGrid::GetXCoordinates();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_SetYCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  vtkDataArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
    {
    if (ap.IsBound())
      {
      op->SetYCoordinates(temp0);
      }
    else
      {
      op->vtkRectilinearGrid::SetYCoordinates(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_GetYCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  vtkDataArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetYCoordinates();
      }
    else
      {
      tempr = op->vtkRectilinearGrid::GetYCoordinates();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_SetZCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  vtkDataArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
    {
    if (ap.IsBound())
      {
      op->SetZCoordinates(temp0);
      }
    else
      {
      op->vtkRectilinearGrid::SetZCoordinates(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_GetZCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  vtkDataArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetZCoordinates();
      }
    else
      {
      tempr = op->vtkRectilinearGrid::GetZCoordinates();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_SetExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetExtent(temp0);
      }
    else
      {
      op->vtkRectilinearGrid::SetExtent(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRectilinearGrid_SetExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkRectilinearGrid::SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRectilinearGrid_SetExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkRectilinearGrid_SetExtent_s1(self, args);
    case 6:
      return PyvtkRectilinearGrid_SetExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetExtent");
  return NULL;
}



static PyObject *
PyvtkRectilinearGrid_GetExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  int *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetExtent();
      }
    else
      {
      tempr = op->vtkRectilinearGrid::GetExtent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetActualMemorySize();
      }
    else
      {
      tempr = op->vtkRectilinearGrid::GetActualMemorySize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkRectilinearGrid::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkRectilinearGrid::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_GetExtentType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtentType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetExtentType();
      }
    else
      {
      tempr = op->vtkRectilinearGrid::GetExtentType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_Crop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Crop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Crop();
      }
    else
      {
      op->vtkRectilinearGrid::Crop();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = NULL;
  vtkRectilinearGrid *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    tempr = vtkRectilinearGrid::GetData(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRectilinearGrid_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = NULL;
  int temp1 = 0;
  vtkRectilinearGrid *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    tempr = vtkRectilinearGrid::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkRectilinearGrid_GetData_Methods[] = {
  {NULL, PyvtkRectilinearGrid_GetData_s1, 1,
   (char*)"O *vtkInformation"},
  {NULL, PyvtkRectilinearGrid_GetData_s2, 1,
   (char*)"O|i *vtkInformationVector"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkRectilinearGrid_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRectilinearGrid_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkRectilinearGrid_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return NULL;
}


static PyMethodDef PyvtkRectilinearGrid_Methods[] = {
  {(char*)"GetClassName", PyvtkRectilinearGrid_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRectilinearGrid_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRectilinearGrid_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkRectilinearGrid\nC++: vtkRectilinearGrid *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRectilinearGrid_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRectilinearGrid\nC++: vtkRectilinearGrid *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDataObjectType", PyvtkRectilinearGrid_GetDataObjectType, 1,
   (char*)"V.GetDataObjectType() -> int\nC++: int GetDataObjectType()\n\nReturn what type of dataset this is.\n"},
  {(char*)"CopyStructure", PyvtkRectilinearGrid_CopyStructure, 1,
   (char*)"V.CopyStructure(vtkDataSet)\nC++: void CopyStructure(vtkDataSet *ds)\n\nCopy the geometric and topological structure of an input\nrectilinear grid object.\n"},
  {(char*)"Initialize", PyvtkRectilinearGrid_Initialize, 1,
   (char*)"V.Initialize()\nC++: void Initialize()\n\nRestore object to initial state. Release memory back to system.\n"},
  {(char*)"GetNumberOfCells", PyvtkRectilinearGrid_GetNumberOfCells, 1,
   (char*)"V.GetNumberOfCells() -> int\nC++: vtkIdType GetNumberOfCells()\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"GetNumberOfPoints", PyvtkRectilinearGrid_GetNumberOfPoints, 1,
   (char*)"V.GetNumberOfPoints() -> int\nC++: vtkIdType GetNumberOfPoints()\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"GetPoint", PyvtkRectilinearGrid_GetPoint, 1,
   (char*)"V.GetPoint(int) -> (float, float, float)\nC++: double *GetPoint(vtkIdType ptId)\nV.GetPoint(int, [float, float, float])\nC++: void GetPoint(vtkIdType id, double x[3])\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"GetCell", PyvtkRectilinearGrid_GetCell, 1,
   (char*)"V.GetCell(int) -> vtkCell\nC++: vtkCell *GetCell(vtkIdType cellId)\nV.GetCell(int, vtkGenericCell)\nC++: void GetCell(vtkIdType cellId, vtkGenericCell *cell)\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"GetCellBounds", PyvtkRectilinearGrid_GetCellBounds, 1,
   (char*)"V.GetCellBounds(int, [float, float, float, float, float, float])\nC++: void GetCellBounds(vtkIdType cellId, double bounds[6])\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"FindPoint", PyvtkRectilinearGrid_FindPoint, 1,
   (char*)"V.FindPoint(float, float, float) -> int\nC++: vtkIdType FindPoint(double x, double y, double z)\nV.FindPoint([float, float, float]) -> int\nC++: vtkIdType FindPoint(double x[3])\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"GetCellType", PyvtkRectilinearGrid_GetCellType, 1,
   (char*)"V.GetCellType(int) -> int\nC++: int GetCellType(vtkIdType cellId)\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"GetCellPoints", PyvtkRectilinearGrid_GetCellPoints, 1,
   (char*)"V.GetCellPoints(int, vtkIdList)\nC++: void GetCellPoints(vtkIdType cellId, vtkIdList *ptIds)\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"GetPointCells", PyvtkRectilinearGrid_GetPointCells, 1,
   (char*)"V.GetPointCells(int, vtkIdList)\nC++: void GetPointCells(vtkIdType ptId, vtkIdList *cellIds)\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"ComputeBounds", PyvtkRectilinearGrid_ComputeBounds, 1,
   (char*)"V.ComputeBounds()\nC++: void ComputeBounds()\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"GetMaxCellSize", PyvtkRectilinearGrid_GetMaxCellSize, 1,
   (char*)"V.GetMaxCellSize() -> int\nC++: int GetMaxCellSize()\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"GetCellNeighbors", PyvtkRectilinearGrid_GetCellNeighbors, 1,
   (char*)"V.GetCellNeighbors(int, vtkIdList, vtkIdList)\nC++: void GetCellNeighbors(vtkIdType cellId, vtkIdList *ptIds,\n    vtkIdList *cellIds)\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"SetDimensions", PyvtkRectilinearGrid_SetDimensions, 1,
   (char*)"V.SetDimensions(int, int, int)\nC++: void SetDimensions(int i, int j, int k)\nV.SetDimensions([int, int, int])\nC++: void SetDimensions(int dim[3])\n\nSet dimensions of rectilinear grid dataset. This also sets the\nextent.\n"},
  {(char*)"GetDimensions", PyvtkRectilinearGrid_GetDimensions, 1,
   (char*)"V.GetDimensions() -> (int, int, int)\nC++: int *GetDimensions()\n\nGet dimensions of this rectilinear grid dataset.\n"},
  {(char*)"GetDataDimension", PyvtkRectilinearGrid_GetDataDimension, 1,
   (char*)"V.GetDataDimension() -> int\nC++: int GetDataDimension()\n\nReturn the dimensionality of the data.\n"},
  {(char*)"ComputeStructuredCoordinates", PyvtkRectilinearGrid_ComputeStructuredCoordinates, 1,
   (char*)"V.ComputeStructuredCoordinates([float, float, float], [int, int,\n    int], [float, float, float]) -> int\nC++: int ComputeStructuredCoordinates(double x[3], int ijk[3],\n    double pcoords[3])\n\nConvenience function computes the structured coordinates for a\npoint x[3]. The cell is specified by the array ijk[3], and the\nparametric coordinates in the cell are specified with pcoords[3].\nThe function returns a 0 if the point x is outside of the grid,\nand a 1 if inside the grid.\n"},
  {(char*)"ComputePointId", PyvtkRectilinearGrid_ComputePointId, 1,
   (char*)"V.ComputePointId([int, int, int]) -> int\nC++: vtkIdType ComputePointId(int ijk[3])\n\nGiven a location in structured coordinates (i-j-k), return the\npoint id.\n"},
  {(char*)"ComputeCellId", PyvtkRectilinearGrid_ComputeCellId, 1,
   (char*)"V.ComputeCellId([int, int, int]) -> int\nC++: vtkIdType ComputeCellId(int ijk[3])\n\nGiven a location in structured coordinates (i-j-k), return the\ncell id.\n"},
  {(char*)"SetXCoordinates", PyvtkRectilinearGrid_SetXCoordinates, 1,
   (char*)"V.SetXCoordinates(vtkDataArray)\nC++: virtual void SetXCoordinates(vtkDataArray *)\n\nSpecify the grid coordinates in the x-direction.\n"},
  {(char*)"GetXCoordinates", PyvtkRectilinearGrid_GetXCoordinates, 1,
   (char*)"V.GetXCoordinates() -> vtkDataArray\nC++: vtkDataArray *GetXCoordinates()\n\nSpecify the grid coordinates in the x-direction.\n"},
  {(char*)"SetYCoordinates", PyvtkRectilinearGrid_SetYCoordinates, 1,
   (char*)"V.SetYCoordinates(vtkDataArray)\nC++: virtual void SetYCoordinates(vtkDataArray *)\n\nSpecify the grid coordinates in the y-direction.\n"},
  {(char*)"GetYCoordinates", PyvtkRectilinearGrid_GetYCoordinates, 1,
   (char*)"V.GetYCoordinates() -> vtkDataArray\nC++: vtkDataArray *GetYCoordinates()\n\nSpecify the grid coordinates in the y-direction.\n"},
  {(char*)"SetZCoordinates", PyvtkRectilinearGrid_SetZCoordinates, 1,
   (char*)"V.SetZCoordinates(vtkDataArray)\nC++: virtual void SetZCoordinates(vtkDataArray *)\n\nSpecify the grid coordinates in the z-direction.\n"},
  {(char*)"GetZCoordinates", PyvtkRectilinearGrid_GetZCoordinates, 1,
   (char*)"V.GetZCoordinates() -> vtkDataArray\nC++: vtkDataArray *GetZCoordinates()\n\nSpecify the grid coordinates in the z-direction.\n"},
  {(char*)"SetExtent", PyvtkRectilinearGrid_SetExtent, 1,
   (char*)"V.SetExtent([int, int, int, int, int, int])\nC++: void SetExtent(int extent[6])\nV.SetExtent(int, int, int, int, int, int)\nC++: void SetExtent(int x1, int x2, int y1, int y2, int z1,\n    int z2)\n\nDifferent ways to set the extent of the data array.  The extent\nshould be set before the \"Scalars\" are set or allocated. The\nExtent is stored  in the order (X, Y, Z).\n"},
  {(char*)"GetExtent", PyvtkRectilinearGrid_GetExtent, 1,
   (char*)"V.GetExtent() -> (int, int, int, int, int, int)\nC++: int *GetExtent()\n\n"},
  {(char*)"GetActualMemorySize", PyvtkRectilinearGrid_GetActualMemorySize, 1,
   (char*)"V.GetActualMemorySize() -> int\nC++: unsigned long GetActualMemorySize()\n\nReturn the actual size of the data in kilobytes. This number is\nvalid only after the pipeline has updated. The memory size\nreturned is guaranteed to be greater than or equal to the memory\nrequired to represent the data (e.g., extra space in arrays, etc.\nare not included in the return value). THIS METHOD IS THREAD\nSAFE.\n"},
  {(char*)"ShallowCopy", PyvtkRectilinearGrid_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkDataObject)\nC++: void ShallowCopy(vtkDataObject *src)\n\nShallow and Deep copy.\n"},
  {(char*)"DeepCopy", PyvtkRectilinearGrid_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkDataObject)\nC++: void DeepCopy(vtkDataObject *src)\n\nShallow and Deep copy.\n"},
  {(char*)"GetExtentType", PyvtkRectilinearGrid_GetExtentType, 1,
   (char*)"V.GetExtentType() -> int\nC++: int GetExtentType()\n\nStructured extent. The extent type is a 3D extent\n"},
  {(char*)"Crop", PyvtkRectilinearGrid_Crop, 1,
   (char*)"V.Crop()\nC++: virtual void Crop()\n\nReallocates and copies to set the Extent to the UpdateExtent.\nThis is used internally when the exact extent is requested, and\nthe source generated more than the update extent.\n"},
  {(char*)"GetData", PyvtkRectilinearGrid_GetData, 1,
   (char*)"V.GetData(vtkInformation) -> vtkRectilinearGrid\nC++: static vtkRectilinearGrid *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkRectilinearGrid\nC++: static vtkRectilinearGrid *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRectilinearGrid_StaticNew()
{
  return vtkRectilinearGrid::New();
}

PyObject *PyVTKClass_vtkRectilinearGridNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRectilinearGrid_StaticNew,
    PyvtkRectilinearGrid_Methods,
    "vtkRectilinearGrid", modulename,
    NULL, NULL,
    PyvtkRectilinearGrid_Doc(),
    PyVTKClass_vtkDataSetNew(modulename));
  return cls;
}

const char **PyvtkRectilinearGrid_Doc()
{
  static const char *docstring[] = {
    "vtkRectilinearGrid - a dataset that is topologically regular with\nvariable spacing in the three coordinate directions\n\n",
    "Superclass: vtkDataSet\n\n",
    "vtkRectilinearGrid is a data object that is a concrete implementation\nof vtkDataSet. vtkRectilinearGrid represents a geometric structure\nthat is topologically regular with variable spacing in the three\ncoordinate directions x-y-z.\n\nTo define a vtkRectilinearGrid, you must specify the dimensions of\nthe data and provide three arrays of values specifying the\ncoordinates along the x-y-z axes. The coor",
    "dinate arrays are specified\nusing three vtkDataArray objects (one for x, one for y, one for z).\n\nCaveats:\n\nMake sure that the dimensions of the grid match the number of\ncoordinates in the x-y-z directions. If not, unpredictable results\n(including program failure) may result. Also, you must supply\ncoordinates in all three directions, even if the dataset topology is\n2D, 1D, or 0D.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRectilinearGrid(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRectilinearGridNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRectilinearGrid", o) != 0)
    {
    Py_DECREF(o);
    }

}

