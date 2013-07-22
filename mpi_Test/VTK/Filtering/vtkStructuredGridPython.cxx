// python wrapper for vtkStructuredGrid
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
#include "vtkStructuredGrid.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkStructuredGrid(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkStructuredGrid(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkStructuredGridNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkStructuredGridNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPointSetNew
extern "C" { PyObject *PyVTKClass_vtkPointSetNew(const char *); }
#define DECLARED_PyVTKClass_vtkPointSetNew
#endif

static const char **PyvtkStructuredGrid_Doc();


static PyObject *
PyvtkStructuredGrid_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

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
      tempr = op->vtkStructuredGrid::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

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
      tempr = op->vtkStructuredGrid::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  vtkStructuredGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkStructuredGrid::NewInstance();
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
PyvtkStructuredGrid_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkStructuredGrid *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkStructuredGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGrid_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

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
      tempr = op->vtkStructuredGrid::GetDataObjectType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGrid_CopyStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

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
      op->vtkStructuredGrid::CopyStructure(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGrid_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

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
      tempr = op->vtkStructuredGrid::GetNumberOfPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGrid_GetPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

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
      tempr = op->vtkStructuredGrid::GetPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkStructuredGrid_GetPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

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
      op->vtkStructuredGrid::GetPoint(temp0, temp1);
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
PyvtkStructuredGrid_GetPoint_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  int temp0;
  int temp1;
  int temp2;
  double temp3[3];
  double save3[3];
  const int size3 = 3;
  bool temp4 = true;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
    {
    ap.SaveArray(temp3, save3, size3);

    if (ap.IsBound())
      {
      op->GetPoint(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkStructuredGrid::GetPoint(temp0, temp1, temp2, temp3, temp4);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkStructuredGrid_GetPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkStructuredGrid_GetPoint_s1(self, args);
    case 2:
      return PyvtkStructuredGrid_GetPoint_s2(self, args);
    case 4:
    case 5:
      return PyvtkStructuredGrid_GetPoint_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint");
  return NULL;
}



static PyObject *
PyvtkStructuredGrid_GetCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

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
      tempr = op->vtkStructuredGrid::GetCell(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkStructuredGrid_GetCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

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
      op->vtkStructuredGrid::GetCell(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkStructuredGrid_GetCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkStructuredGrid_GetCell_s1(self, args);
    case 2:
      return PyvtkStructuredGrid_GetCell_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetCell");
  return NULL;
}



static PyObject *
PyvtkStructuredGrid_GetCellBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

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
      op->vtkStructuredGrid::GetCellBounds(temp0, temp1);
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
PyvtkStructuredGrid_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

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
      tempr = op->vtkStructuredGrid::GetCellType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGrid_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

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
      tempr = op->vtkStructuredGrid::GetNumberOfCells();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGrid_GetCellPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

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
      op->vtkStructuredGrid::GetCellPoints(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGrid_GetPointCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

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
      op->vtkStructuredGrid::GetPointCells(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGrid_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkStructuredGrid::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGrid_GetMaxCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

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
      tempr = op->vtkStructuredGrid::GetMaxCellSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGrid_GetCellNeighbors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

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
      op->vtkStructuredGrid::GetCellNeighbors(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGrid_GetScalarRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetScalarRange(temp0);
      }
    else
      {
      op->vtkStructuredGrid::GetScalarRange(temp0);
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
PyvtkStructuredGrid_GetScalarRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarRange();
      }
    else
      {
      tempr = op->vtkStructuredGrid::GetScalarRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkStructuredGrid_GetScalarRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkStructuredGrid_GetScalarRange_s1(self, args);
    case 0:
      return PyvtkStructuredGrid_GetScalarRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetScalarRange");
  return NULL;
}



static PyObject *
PyvtkStructuredGrid_SetDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

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
      op->vtkStructuredGrid::SetDimensions(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkStructuredGrid_SetDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

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
      op->vtkStructuredGrid::SetDimensions(temp0);
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
PyvtkStructuredGrid_SetDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkStructuredGrid_SetDimensions_s1(self, args);
    case 1:
      return PyvtkStructuredGrid_SetDimensions_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDimensions");
  return NULL;
}



static PyObject *
PyvtkStructuredGrid_GetDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

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
      tempr = op->vtkStructuredGrid::GetDimensions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkStructuredGrid_GetDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

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
      op->GetDimensions(temp0);
      }
    else
      {
      op->vtkStructuredGrid::GetDimensions(temp0);
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
PyvtkStructuredGrid_GetDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkStructuredGrid_GetDimensions_s1(self, args);
    case 1:
      return PyvtkStructuredGrid_GetDimensions_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetDimensions");
  return NULL;
}



static PyObject *
PyvtkStructuredGrid_GetDataDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

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
      tempr = op->vtkStructuredGrid::GetDataDimension();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGrid_SetExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

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
      op->vtkStructuredGrid::SetExtent(temp0);
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
PyvtkStructuredGrid_SetExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

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
      op->vtkStructuredGrid::SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkStructuredGrid_SetExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkStructuredGrid_SetExtent_s1(self, args);
    case 6:
      return PyvtkStructuredGrid_SetExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetExtent");
  return NULL;
}



static PyObject *
PyvtkStructuredGrid_GetExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

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
      tempr = op->vtkStructuredGrid::GetExtent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGrid_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

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
      tempr = op->vtkStructuredGrid::GetActualMemorySize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGrid_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

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
      op->vtkStructuredGrid::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGrid_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

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
      op->vtkStructuredGrid::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGrid_GetExtentType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtentType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

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
      tempr = op->vtkStructuredGrid::GetExtentType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGrid_BlankPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BlankPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->BlankPoint(temp0);
      }
    else
      {
      op->vtkStructuredGrid::BlankPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGrid_UnBlankPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnBlankPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->UnBlankPoint(temp0);
      }
    else
      {
      op->vtkStructuredGrid::UnBlankPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGrid_BlankCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BlankCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->BlankCell(temp0);
      }
    else
      {
      op->vtkStructuredGrid::BlankCell(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGrid_UnBlankCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnBlankCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->UnBlankCell(temp0);
      }
    else
      {
      op->vtkStructuredGrid::UnBlankCell(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGrid_GetPointVisibilityArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointVisibilityArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  vtkUnsignedCharArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointVisibilityArray();
      }
    else
      {
      tempr = op->vtkStructuredGrid::GetPointVisibilityArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGrid_SetPointVisibilityArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointVisibilityArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  vtkUnsignedCharArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray"))
    {
    if (ap.IsBound())
      {
      op->SetPointVisibilityArray(temp0);
      }
    else
      {
      op->vtkStructuredGrid::SetPointVisibilityArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGrid_GetCellVisibilityArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellVisibilityArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  vtkUnsignedCharArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellVisibilityArray();
      }
    else
      {
      tempr = op->vtkStructuredGrid::GetCellVisibilityArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGrid_SetCellVisibilityArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellVisibilityArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  vtkUnsignedCharArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray"))
    {
    if (ap.IsBound())
      {
      op->SetCellVisibilityArray(temp0);
      }
    else
      {
      op->vtkStructuredGrid::SetCellVisibilityArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGrid_IsPointVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPointVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  vtkIdType temp0;
  unsigned char tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsPointVisible(temp0);
      }
    else
      {
      tempr = op->vtkStructuredGrid::IsPointVisible(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGrid_IsCellVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsCellVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  vtkIdType temp0;
  unsigned char tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsCellVisible(temp0);
      }
    else
      {
      tempr = op->vtkStructuredGrid::IsCellVisible(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGrid_GetPointBlanking(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointBlanking");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  unsigned char tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointBlanking();
      }
    else
      {
      tempr = op->vtkStructuredGrid::GetPointBlanking();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGrid_GetCellBlanking(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellBlanking");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  unsigned char tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellBlanking();
      }
    else
      {
      tempr = op->vtkStructuredGrid::GetCellBlanking();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGrid_Crop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Crop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Crop();
      }
    else
      {
      op->vtkStructuredGrid::Crop();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGrid_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = NULL;
  vtkStructuredGrid *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    tempr = vtkStructuredGrid::GetData(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkStructuredGrid_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = NULL;
  int temp1 = 0;
  vtkStructuredGrid *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    tempr = vtkStructuredGrid::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkStructuredGrid_GetData_Methods[] = {
  {NULL, PyvtkStructuredGrid_GetData_s1, 1,
   (char*)"O *vtkInformation"},
  {NULL, PyvtkStructuredGrid_GetData_s2, 1,
   (char*)"O|i *vtkInformationVector"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkStructuredGrid_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkStructuredGrid_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkStructuredGrid_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return NULL;
}


static PyMethodDef PyvtkStructuredGrid_Methods[] = {
  {(char*)"GetClassName", PyvtkStructuredGrid_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStructuredGrid_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStructuredGrid_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkStructuredGrid\nC++: vtkStructuredGrid *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStructuredGrid_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStructuredGrid\nC++: vtkStructuredGrid *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDataObjectType", PyvtkStructuredGrid_GetDataObjectType, 1,
   (char*)"V.GetDataObjectType() -> int\nC++: int GetDataObjectType()\n\nReturn what type of dataset this is.\n"},
  {(char*)"CopyStructure", PyvtkStructuredGrid_CopyStructure, 1,
   (char*)"V.CopyStructure(vtkDataSet)\nC++: void CopyStructure(vtkDataSet *ds)\n\nCopy the geometric and topological structure of an input poly\ndata object.\n"},
  {(char*)"GetNumberOfPoints", PyvtkStructuredGrid_GetNumberOfPoints, 1,
   (char*)"V.GetNumberOfPoints() -> int\nC++: vtkIdType GetNumberOfPoints()\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"GetPoint", PyvtkStructuredGrid_GetPoint, 1,
   (char*)"V.GetPoint(int) -> (float, float, float)\nC++: double *GetPoint(vtkIdType ptId)\nV.GetPoint(int, [float, float, float])\nC++: void GetPoint(vtkIdType ptId, double p[3])\nV.GetPoint(int, int, int, [float, float, float], bool)\nC++: void GetPoint(int i, int j, int k, double p[3],\n    bool adjustForExtent=true)\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"GetCell", PyvtkStructuredGrid_GetCell, 1,
   (char*)"V.GetCell(int) -> vtkCell\nC++: vtkCell *GetCell(vtkIdType cellId)\nV.GetCell(int, vtkGenericCell)\nC++: void GetCell(vtkIdType cellId, vtkGenericCell *cell)\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"GetCellBounds", PyvtkStructuredGrid_GetCellBounds, 1,
   (char*)"V.GetCellBounds(int, [float, float, float, float, float, float])\nC++: void GetCellBounds(vtkIdType cellId, double bounds[6])\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"GetCellType", PyvtkStructuredGrid_GetCellType, 1,
   (char*)"V.GetCellType(int) -> int\nC++: int GetCellType(vtkIdType cellId)\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"GetNumberOfCells", PyvtkStructuredGrid_GetNumberOfCells, 1,
   (char*)"V.GetNumberOfCells() -> int\nC++: vtkIdType GetNumberOfCells()\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"GetCellPoints", PyvtkStructuredGrid_GetCellPoints, 1,
   (char*)"V.GetCellPoints(int, vtkIdList)\nC++: void GetCellPoints(vtkIdType cellId, vtkIdList *ptIds)\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"GetPointCells", PyvtkStructuredGrid_GetPointCells, 1,
   (char*)"V.GetPointCells(int, vtkIdList)\nC++: void GetPointCells(vtkIdType ptId, vtkIdList *cellIds)\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"Initialize", PyvtkStructuredGrid_Initialize, 1,
   (char*)"V.Initialize()\nC++: void Initialize()\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"GetMaxCellSize", PyvtkStructuredGrid_GetMaxCellSize, 1,
   (char*)"V.GetMaxCellSize() -> int\nC++: int GetMaxCellSize()\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"GetCellNeighbors", PyvtkStructuredGrid_GetCellNeighbors, 1,
   (char*)"V.GetCellNeighbors(int, vtkIdList, vtkIdList)\nC++: void GetCellNeighbors(vtkIdType cellId, vtkIdList *ptIds,\n    vtkIdList *cellIds)\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"GetScalarRange", PyvtkStructuredGrid_GetScalarRange, 1,
   (char*)"V.GetScalarRange([float, float])\nC++: virtual void GetScalarRange(double range[2])\nV.GetScalarRange() -> (float, float)\nC++: double *GetScalarRange()\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"SetDimensions", PyvtkStructuredGrid_SetDimensions, 1,
   (char*)"V.SetDimensions(int, int, int)\nC++: void SetDimensions(int i, int j, int k)\nV.SetDimensions([int, int, int])\nC++: void SetDimensions(int dim[3])\n\nfollowing methods are specific to structured grid\n"},
  {(char*)"GetDimensions", PyvtkStructuredGrid_GetDimensions, 1,
   (char*)"V.GetDimensions() -> (int, int, int)\nC++: virtual int *GetDimensions()\nV.GetDimensions([int, int, int])\nC++: virtual void GetDimensions(int dim[3])\n\nGet dimensions of this structured points dataset.\n"},
  {(char*)"GetDataDimension", PyvtkStructuredGrid_GetDataDimension, 1,
   (char*)"V.GetDataDimension() -> int\nC++: int GetDataDimension()\n\nReturn the dimensionality of the data.\n"},
  {(char*)"SetExtent", PyvtkStructuredGrid_SetExtent, 1,
   (char*)"V.SetExtent([int, int, int, int, int, int])\nC++: void SetExtent(int extent[6])\nV.SetExtent(int, int, int, int, int, int)\nC++: void SetExtent(int x1, int x2, int y1, int y2, int z1,\n    int z2)\n\nDifferent ways to set the extent of the data array.  The extent\nshould be set before the \"Scalars\" are set or allocated. The\nExtent is stored  in the order (X, Y, Z).\n"},
  {(char*)"GetExtent", PyvtkStructuredGrid_GetExtent, 1,
   (char*)"V.GetExtent() -> (int, int, int, int, int, int)\nC++: int *GetExtent()\n\n"},
  {(char*)"GetActualMemorySize", PyvtkStructuredGrid_GetActualMemorySize, 1,
   (char*)"V.GetActualMemorySize() -> int\nC++: unsigned long GetActualMemorySize()\n\nReturn the actual size of the data in kilobytes. This number is\nvalid only after the pipeline has updated. The memory size\nreturned is guaranteed to be greater than or equal to the memory\nrequired to represent the data (e.g., extra space in arrays, etc.\nare not included in the return value). THIS METHOD IS THREAD\nSAFE.\n"},
  {(char*)"ShallowCopy", PyvtkStructuredGrid_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkDataObject)\nC++: void ShallowCopy(vtkDataObject *src)\n\nShallow and Deep copy.\n"},
  {(char*)"DeepCopy", PyvtkStructuredGrid_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkDataObject)\nC++: void DeepCopy(vtkDataObject *src)\n\nShallow and Deep copy.\n"},
  {(char*)"GetExtentType", PyvtkStructuredGrid_GetExtentType, 1,
   (char*)"V.GetExtentType() -> int\nC++: int GetExtentType()\n\nThe extent type is a 3D extent\n"},
  {(char*)"BlankPoint", PyvtkStructuredGrid_BlankPoint, 1,
   (char*)"V.BlankPoint(int)\nC++: void BlankPoint(vtkIdType ptId)\n\nMethods for supporting blanking of cells. Blanking turns on or\noff points in the structured grid, and hence the cells connected\nto them. These methods should be called only after the dimensions\nof the grid are set.\n"},
  {(char*)"UnBlankPoint", PyvtkStructuredGrid_UnBlankPoint, 1,
   (char*)"V.UnBlankPoint(int)\nC++: void UnBlankPoint(vtkIdType ptId)\n\nMethods for supporting blanking of cells. Blanking turns on or\noff points in the structured grid, and hence the cells connected\nto them. These methods should be called only after the dimensions\nof the grid are set.\n"},
  {(char*)"BlankCell", PyvtkStructuredGrid_BlankCell, 1,
   (char*)"V.BlankCell(int)\nC++: void BlankCell(vtkIdType ptId)\n\nMethods for supporting blanking of cells. Blanking turns on or\noff cells in the structured grid, and hence the cells connected\nto them. These methods should be called only after the dimensions\nof the grid are set.\n"},
  {(char*)"UnBlankCell", PyvtkStructuredGrid_UnBlankCell, 1,
   (char*)"V.UnBlankCell(int)\nC++: void UnBlankCell(vtkIdType ptId)\n\nMethods for supporting blanking of cells. Blanking turns on or\noff cells in the structured grid, and hence the cells connected\nto them. These methods should be called only after the dimensions\nof the grid are set.\n"},
  {(char*)"GetPointVisibilityArray", PyvtkStructuredGrid_GetPointVisibilityArray, 1,
   (char*)"V.GetPointVisibilityArray() -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *GetPointVisibilityArray()\n\nGet the array that defines the blanking (visibility) of each\npoint.\n"},
  {(char*)"SetPointVisibilityArray", PyvtkStructuredGrid_SetPointVisibilityArray, 1,
   (char*)"V.SetPointVisibilityArray(vtkUnsignedCharArray)\nC++: void SetPointVisibilityArray(\n    vtkUnsignedCharArray *pointVisibility)\n\nSet an array that defines the (blanking) visibility of the points\nin the grid. Make sure that length of the visibility array\nmatches the number of points in the grid.\n"},
  {(char*)"GetCellVisibilityArray", PyvtkStructuredGrid_GetCellVisibilityArray, 1,
   (char*)"V.GetCellVisibilityArray() -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *GetCellVisibilityArray()\n\nGet the array that defines the blanking (visibility) of each\ncell.\n"},
  {(char*)"SetCellVisibilityArray", PyvtkStructuredGrid_SetCellVisibilityArray, 1,
   (char*)"V.SetCellVisibilityArray(vtkUnsignedCharArray)\nC++: void SetCellVisibilityArray(\n    vtkUnsignedCharArray *pointVisibility)\n\nSet an array that defines the (blanking) visibility of the cells\nin the grid. Make sure that length of the visibility array\nmatches the number of points in the grid.\n"},
  {(char*)"IsPointVisible", PyvtkStructuredGrid_IsPointVisible, 1,
   (char*)"V.IsPointVisible(int) -> int\nC++: unsigned char IsPointVisible(vtkIdType ptId)\n\nReturn non-zero value if specified point is visible. These\nmethods should be called only after the dimensions of the grid\nare set.\n"},
  {(char*)"IsCellVisible", PyvtkStructuredGrid_IsCellVisible, 1,
   (char*)"V.IsCellVisible(int) -> int\nC++: unsigned char IsCellVisible(vtkIdType cellId)\n\nReturn non-zero value if specified point is visible. These\nmethods should be called only after the dimensions of the grid\nare set.\n"},
  {(char*)"GetPointBlanking", PyvtkStructuredGrid_GetPointBlanking, 1,
   (char*)"V.GetPointBlanking() -> int\nC++: unsigned char GetPointBlanking()\n\nReturns 1 if there is any visibility constraint on the points, 0\notherwise.\n"},
  {(char*)"GetCellBlanking", PyvtkStructuredGrid_GetCellBlanking, 1,
   (char*)"V.GetCellBlanking() -> int\nC++: unsigned char GetCellBlanking()\n\nReturns 1 if there is any visibility constraint on the cells, 0\notherwise.\n"},
  {(char*)"Crop", PyvtkStructuredGrid_Crop, 1,
   (char*)"V.Crop()\nC++: virtual void Crop()\n\nReallocates and copies to set the Extent to the UpdateExtent.\nThis is used internally when the exact extent is requested, and\nthe source generated more than the update extent.\n"},
  {(char*)"GetData", PyvtkStructuredGrid_GetData, 1,
   (char*)"V.GetData(vtkInformation) -> vtkStructuredGrid\nC++: static vtkStructuredGrid *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkStructuredGrid\nC++: static vtkStructuredGrid *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkStructuredGrid_StaticNew()
{
  return vtkStructuredGrid::New();
}

PyObject *PyVTKClass_vtkStructuredGridNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkStructuredGrid_StaticNew,
    PyvtkStructuredGrid_Methods,
    "vtkStructuredGrid", modulename,
    NULL, NULL,
    PyvtkStructuredGrid_Doc(),
    PyVTKClass_vtkPointSetNew(modulename));
  return cls;
}

const char **PyvtkStructuredGrid_Doc()
{
  static const char *docstring[] = {
    "vtkStructuredGrid - topologically regular array of data\n\n",
    "Superclass: vtkPointSet\n\n",
    "vtkStructuredGrid is a data object that is a concrete implementation\nof vtkDataSet. vtkStructuredGrid represents a geometric structure\nthat is a topologically regular array of points. The topology is that\nof a cube that has been subdivided into a regular array of smaller\ncubes. Each point/cell can be addressed with i-j-k indices. Examples\ninclude finite difference grids.\n\nThe order and number of p",
    "oints must match that specified by the\ndimensions of the grid. The point order increases in i fastest (from\n0<=i<dims[0]), then j (0<=j<dims[1]), then k (0<=k<dims[2]) where\ndims[] are the dimensions of the grid in the i-j-k topological\ndirections. The number of points is dims[0]*dims[1]*dims[2]. The same\nis true for the cells of the grid. The order and number of cells must\nmatch that specified by",
    " the dimensions of the grid. The cell order\nincreases in i fastest (from 0<=i<(dims[0]-1)), then j\n(0<=j<(dims[1]-1)), then k (0<=k<(dims[2]-1)) The number of cells is\n(dims[0]-1)*(dims[1]-1)*(dims[2]-1).\n\nA unusual feature of vtkStructuredGrid is the ability to blank, or\n\"turn-off\" points and cells in the dataset. This is controlled by\ndefining a \"blanking array\" whose values (0,1) specify whethe",
    "r a\npoint should be blanked or not.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStructuredGrid(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStructuredGridNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStructuredGrid", o) != 0)
    {
    Py_DECREF(o);
    }

}

