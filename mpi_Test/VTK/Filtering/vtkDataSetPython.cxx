// python wrapper for vtkDataSet
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
#include "vtkDataSet.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDataSet(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDataSet(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDataSetNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDataSetNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataObjectNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectNew
#endif

static const char **PyvtkDataSet_Doc();


static PyObject *
PyvtkDataSet_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

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
      tempr = op->vtkDataSet::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

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
      tempr = op->vtkDataSet::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  vtkDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDataSet::NewInstance();
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
PyvtkDataSet_CopyStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    op->CopyStructure(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSet_CopyAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->CopyAttributes(temp0);
      }
    else
      {
      op->vtkDataSet::CopyAttributes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSet_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetNumberOfPoints();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSet_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetNumberOfCells();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSet_GetPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  vtkIdType temp0;
  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = op->GetPoint(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkDataSet_GetPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

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
      op->vtkDataSet::GetPoint(temp0, temp1);
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
PyvtkDataSet_GetPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkDataSet_GetPoint_s1(self, args);
    case 2:
      return PyvtkDataSet_GetPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint");
  return NULL;
}



static PyObject *
PyvtkDataSet_GetCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  vtkIdType temp0;
  vtkCell *tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = op->GetCell(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataSet_GetCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  vtkIdType temp0;
  vtkGenericCell *temp1 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkGenericCell"))
    {
    op->GetCell(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataSet_GetCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkDataSet_GetCell_s1(self, args);
    case 2:
      return PyvtkDataSet_GetCell_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetCell");
  return NULL;
}



static PyObject *
PyvtkDataSet_GetCellBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

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
      op->vtkDataSet::GetCellBounds(temp0, temp1);
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
PyvtkDataSet_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  vtkIdType temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = op->GetCellType(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSet_GetCellTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  vtkCellTypes *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellTypes"))
    {
    if (ap.IsBound())
      {
      op->GetCellTypes(temp0);
      }
    else
      {
      op->vtkDataSet::GetCellTypes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSet_GetCellPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  vtkIdType temp0;
  vtkIdList *temp1 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
    {
    op->GetCellPoints(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSet_GetPointCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  vtkIdType temp0;
  vtkIdList *temp1 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
    {
    op->GetPointCells(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSet_GetCellNeighbors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

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
      op->vtkDataSet::GetCellNeighbors(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSet_FindPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

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
      tempr = op->vtkDataSet::FindPoint(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataSet_FindPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    tempr = op->FindPoint(temp0);

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
PyvtkDataSet_FindPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkDataSet_FindPoint_s1(self, args);
    case 1:
      return PyvtkDataSet_FindPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "FindPoint");
  return NULL;
}



static PyObject *
PyvtkDataSet_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMTime();
      }
    else
      {
      tempr = op->vtkDataSet::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSet_GetCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  vtkCellData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellData();
      }
    else
      {
      tempr = op->vtkDataSet::GetCellData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSet_GetPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  vtkPointData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointData();
      }
    else
      {
      tempr = op->vtkDataSet::GetPointData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSet_Squeeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Squeeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Squeeze();
      }
    else
      {
      op->vtkDataSet::Squeeze();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSet_ComputeBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeBounds();
      }
    else
      {
      op->vtkDataSet::ComputeBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSet_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  double *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBounds();
      }
    else
      {
      tempr = op->vtkDataSet::GetBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkDataSet_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetBounds(temp0);
      }
    else
      {
      op->vtkDataSet::GetBounds(temp0);
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
PyvtkDataSet_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkDataSet_GetBounds_s1(self, args);
    case 1:
      return PyvtkDataSet_GetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return NULL;
}



static PyObject *
PyvtkDataSet_GetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCenter();
      }
    else
      {
      tempr = op->vtkDataSet::GetCenter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkDataSet_GetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetCenter(temp0);
      }
    else
      {
      op->vtkDataSet::GetCenter(temp0);
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
PyvtkDataSet_GetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkDataSet_GetCenter_s1(self, args);
    case 1:
      return PyvtkDataSet_GetCenter_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetCenter");
  return NULL;
}



static PyObject *
PyvtkDataSet_GetLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLength();
      }
    else
      {
      tempr = op->vtkDataSet::GetLength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSet_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkDataSet::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSet_GetScalarRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

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
      op->vtkDataSet::GetScalarRange(temp0);
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
PyvtkDataSet_GetScalarRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

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
      tempr = op->vtkDataSet::GetScalarRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkDataSet_GetScalarRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkDataSet_GetScalarRange_s1(self, args);
    case 0:
      return PyvtkDataSet_GetScalarRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetScalarRange");
  return NULL;
}



static PyObject *
PyvtkDataSet_GetMaxCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetMaxCellSize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSet_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

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
      tempr = op->vtkDataSet::GetActualMemorySize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSet_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

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
      tempr = op->vtkDataSet::GetDataObjectType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSet_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

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
      op->vtkDataSet::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSet_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

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
      op->vtkDataSet::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSet_CheckAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->CheckAttributes();
      }
    else
      {
      tempr = op->vtkDataSet::CheckAttributes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSet_GenerateGhostLevelArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateGhostLevelArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateGhostLevelArray();
      }
    else
      {
      op->vtkDataSet::GenerateGhostLevelArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSet_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = NULL;
  vtkDataSet *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    tempr = vtkDataSet::GetData(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataSet_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = NULL;
  int temp1 = 0;
  vtkDataSet *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    tempr = vtkDataSet::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDataSet_GetData_Methods[] = {
  {NULL, PyvtkDataSet_GetData_s1, 1,
   (char*)"O *vtkInformation"},
  {NULL, PyvtkDataSet_GetData_s2, 1,
   (char*)"O|i *vtkInformationVector"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDataSet_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataSet_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkDataSet_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return NULL;
}



static PyObject *
PyvtkDataSet_GetAttributesAsFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributesAsFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  int temp0;
  vtkFieldData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAttributesAsFieldData(temp0);
      }
    else
      {
      tempr = op->vtkDataSet::GetAttributesAsFieldData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSet_GetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  int temp0;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfElements(temp0);
      }
    else
      {
      tempr = op->vtkDataSet::GetNumberOfElements(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDataSet_Methods[] = {
  {(char*)"GetClassName", PyvtkDataSet_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataSet_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataSet_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDataSet\nC++: vtkDataSet *NewInstance()\n\n"},
  {(char*)"CopyStructure", PyvtkDataSet_CopyStructure, 1,
   (char*)"V.CopyStructure(vtkDataSet)\nC++: virtual void CopyStructure(vtkDataSet *ds)\n\nCopy the geometric and topological structure of an object. Note\nthat the invoking object and the object pointed to by the\nparameter ds must be of the same type. THIS METHOD IS NOT THREAD\nSAFE.\n"},
  {(char*)"CopyAttributes", PyvtkDataSet_CopyAttributes, 1,
   (char*)"V.CopyAttributes(vtkDataSet)\nC++: virtual void CopyAttributes(vtkDataSet *ds)\n\nCopy the attributes associated with the specified dataset to this\ninstance of vtkDataSet. THIS METHOD IS NOT THREAD SAFE.\n"},
  {(char*)"GetNumberOfPoints", PyvtkDataSet_GetNumberOfPoints, 1,
   (char*)"V.GetNumberOfPoints() -> int\nC++: virtual vtkIdType GetNumberOfPoints()\n\nDetermine the number of points composing the dataset. THIS METHOD\nIS THREAD SAFE\n"},
  {(char*)"GetNumberOfCells", PyvtkDataSet_GetNumberOfCells, 1,
   (char*)"V.GetNumberOfCells() -> int\nC++: virtual vtkIdType GetNumberOfCells()\n\nDetermine the number of cells composing the dataset. THIS METHOD\nIS THREAD SAFE\n"},
  {(char*)"GetPoint", PyvtkDataSet_GetPoint, 1,
   (char*)"V.GetPoint(int) -> (float, float, float)\nC++: virtual double *GetPoint(vtkIdType ptId)\nV.GetPoint(int, [float, float, float])\nC++: virtual void GetPoint(vtkIdType id, double x[3])\n\nGet point coordinates with ptId such that: 0 <= ptId <\nNumberOfPoints. THIS METHOD IS NOT THREAD SAFE.\n"},
  {(char*)"GetCell", PyvtkDataSet_GetCell, 1,
   (char*)"V.GetCell(int) -> vtkCell\nC++: virtual vtkCell *GetCell(vtkIdType cellId)\nV.GetCell(int, vtkGenericCell)\nC++: virtual void GetCell(vtkIdType cellId, vtkGenericCell *cell)\n\nGet cell with cellId such that: 0 <= cellId < NumberOfCells. THIS\nMETHOD IS NOT THREAD SAFE.\n"},
  {(char*)"GetCellBounds", PyvtkDataSet_GetCellBounds, 1,
   (char*)"V.GetCellBounds(int, [float, float, float, float, float, float])\nC++: virtual void GetCellBounds(vtkIdType cellId,\n    double bounds[6])\n\nGet the bounds of the cell with cellId such that:\n    0 <= cellId < NumberOfCells. A subclass may be able to\ndetermine the bounds of cell without using an expensive GetCell()\nmethod. A default implementation is provided that actually uses a\nGetCell() call.  This is to ensure the method is available to all\ndatasets.  Subclasses should override this method to provide an\nefficient implementation. THIS METHOD IS THREAD SAFE IF FIRST\nCALLED FROM A SINGLE THREAD AND THE DATASET IS NOT MODIFIED\n"},
  {(char*)"GetCellType", PyvtkDataSet_GetCellType, 1,
   (char*)"V.GetCellType(int) -> int\nC++: virtual int GetCellType(vtkIdType cellId)\n\nGet type of cell with cellId such that: 0 <= cellId <\nNumberOfCells. THIS METHOD IS THREAD SAFE IF FIRST CALLED FROM A\nSINGLE THREAD AND THE DATASET IS NOT MODIFIED\n"},
  {(char*)"GetCellTypes", PyvtkDataSet_GetCellTypes, 1,
   (char*)"V.GetCellTypes(vtkCellTypes)\nC++: virtual void GetCellTypes(vtkCellTypes *types)\n\nGet a list of types of cells in a dataset. The list consists of\nan array of types (not necessarily in any order), with a single\nentry per type. For example a dataset 5 triangles, 3 lines, and\n100 hexahedra would result a list of three entries, corresponding\nto the types VTK_TRIANGLE, VTK_LINE, and VTK_HEXAHEDRON. THIS\nMETHOD IS THREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND\nTHE DATASET IS NOT MODIFIED\n"},
  {(char*)"GetCellPoints", PyvtkDataSet_GetCellPoints, 1,
   (char*)"V.GetCellPoints(int, vtkIdList)\nC++: virtual void GetCellPoints(vtkIdType cellId,\n    vtkIdList *ptIds)\n\nTopological inquiry to get points defining cell. THIS METHOD IS\nTHREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND THE DATASET\nIS NOT MODIFIED\n"},
  {(char*)"GetPointCells", PyvtkDataSet_GetPointCells, 1,
   (char*)"V.GetPointCells(int, vtkIdList)\nC++: virtual void GetPointCells(vtkIdType ptId,\n    vtkIdList *cellIds)\n\nTopological inquiry to get cells using point. THIS METHOD IS\nTHREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND THE DATASET\nIS NOT MODIFIED\n"},
  {(char*)"GetCellNeighbors", PyvtkDataSet_GetCellNeighbors, 1,
   (char*)"V.GetCellNeighbors(int, vtkIdList, vtkIdList)\nC++: virtual void GetCellNeighbors(vtkIdType cellId,\n    vtkIdList *ptIds, vtkIdList *cellIds)\n\nTopological inquiry to get all cells using list of points\nexclusive of cell specified (e.g., cellId). Note that the list\nconsists of only cells that use ALL the points provided. THIS\nMETHOD IS THREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND\nTHE DATASET IS NOT MODIFIED\n"},
  {(char*)"FindPoint", PyvtkDataSet_FindPoint, 1,
   (char*)"V.FindPoint(float, float, float) -> int\nC++: vtkIdType FindPoint(double x, double y, double z)\nV.FindPoint([float, float, float]) -> int\nC++: virtual vtkIdType FindPoint(double x[3])\n\nLocate the closest point to the global coordinate x. Return the\npoint id. If point id < 0; then no point found. (This may arise\nwhen point is outside of dataset.) THIS METHOD IS THREAD SAFE IF\nFIRST CALLED FROM A SINGLE THREAD AND THE DATASET IS NOT MODIFIED\n"},
  {(char*)"GetMTime", PyvtkDataSet_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nDatasets are composite objects and need to check each part for\nMTime THIS METHOD IS THREAD SAFE\n"},
  {(char*)"GetCellData", PyvtkDataSet_GetCellData, 1,
   (char*)"V.GetCellData() -> vtkCellData\nC++: vtkCellData *GetCellData()\n\nReturn a pointer to this dataset's cell data. THIS METHOD IS\nTHREAD SAFE\n"},
  {(char*)"GetPointData", PyvtkDataSet_GetPointData, 1,
   (char*)"V.GetPointData() -> vtkPointData\nC++: vtkPointData *GetPointData()\n\nReturn a pointer to this dataset's point data. THIS METHOD IS\nTHREAD SAFE\n"},
  {(char*)"Squeeze", PyvtkDataSet_Squeeze, 1,
   (char*)"V.Squeeze()\nC++: virtual void Squeeze()\n\nReclaim any extra memory used to store data. THIS METHOD IS NOT\nTHREAD SAFE.\n"},
  {(char*)"ComputeBounds", PyvtkDataSet_ComputeBounds, 1,
   (char*)"V.ComputeBounds()\nC++: virtual void ComputeBounds()\n\nCompute the data bounding box from data points. THIS METHOD IS\nNOT THREAD SAFE.\n"},
  {(char*)"GetBounds", PyvtkDataSet_GetBounds, 1,
   (char*)"V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds()\nV.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6])\n\nReturn a pointer to the geometry bounding box in the form\n(xmin,xmax, ymin,ymax, zmin,zmax). THIS METHOD IS NOT THREAD\nSAFE.\n"},
  {(char*)"GetCenter", PyvtkDataSet_GetCenter, 1,
   (char*)"V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\nV.GetCenter([float, float, float])\nC++: void GetCenter(double center[3])\n\nGet the center of the bounding box. THIS METHOD IS NOT THREAD\nSAFE.\n"},
  {(char*)"GetLength", PyvtkDataSet_GetLength, 1,
   (char*)"V.GetLength() -> float\nC++: double GetLength()\n\nReturn the length of the diagonal of the bounding box. THIS\nMETHOD IS THREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND\nTHE DATASET IS NOT MODIFIED\n"},
  {(char*)"Initialize", PyvtkDataSet_Initialize, 1,
   (char*)"V.Initialize()\nC++: void Initialize()\n\nRestore data object to initial state, THIS METHOD IS NOT THREAD\nSAFE.\n"},
  {(char*)"GetScalarRange", PyvtkDataSet_GetScalarRange, 1,
   (char*)"V.GetScalarRange([float, float])\nC++: virtual void GetScalarRange(double range[2])\nV.GetScalarRange() -> (float, float)\nC++: double *GetScalarRange()\n\nConvenience method to get the range of the scalar data (if there\nis any scalar data). Returns the (min/max) range of combined\npoint and cell data. If there are no point or cell scalars the\nmethod will return (0,1). Note: Update needs to be called to\ncreate the scalars. THIS METHOD IS THREAD SAFE IF FIRST CALLED\nFROM A SINGLE THREAD AND THE DATASET IS NOT MODIFIED\n"},
  {(char*)"GetMaxCellSize", PyvtkDataSet_GetMaxCellSize, 1,
   (char*)"V.GetMaxCellSize() -> int\nC++: virtual int GetMaxCellSize()\n\nConvenience method returns largest cell size in dataset. This is\ngenerally used to allocate memory for supporting data structures.\nTHIS METHOD IS THREAD SAFE\n"},
  {(char*)"GetActualMemorySize", PyvtkDataSet_GetActualMemorySize, 1,
   (char*)"V.GetActualMemorySize() -> int\nC++: unsigned long GetActualMemorySize()\n\nReturn the actual size of the data in kilobytes. This number is\nvalid only after the pipeline has updated. The memory size\nreturned is guaranteed to be greater than or equal to the memory\nrequired to represent the data (e.g., extra space in arrays, etc.\nare not included in the return value). THIS METHOD IS THREAD\nSAFE.\n"},
  {(char*)"GetDataObjectType", PyvtkDataSet_GetDataObjectType, 1,
   (char*)"V.GetDataObjectType() -> int\nC++: int GetDataObjectType()\n\nReturn the type of data object.\n"},
  {(char*)"ShallowCopy", PyvtkDataSet_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkDataObject)\nC++: void ShallowCopy(vtkDataObject *src)\n\nShallow and Deep copy.\n"},
  {(char*)"DeepCopy", PyvtkDataSet_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkDataObject)\nC++: void DeepCopy(vtkDataObject *src)\n\nShallow and Deep copy.\n"},
  {(char*)"CheckAttributes", PyvtkDataSet_CheckAttributes, 1,
   (char*)"V.CheckAttributes() -> int\nC++: int CheckAttributes()\n\nThis method checks to see if the cell and point attributes match\nthe geometry.  Many filters will crash if the number of tupples\nin an array is less than the number of points/cells. This method\nreturns 1 if there is a mismatch, and 0 if everything is ok.  It\nprints an error if an array is too short, and a warning if an\narray is too long.\n"},
  {(char*)"GenerateGhostLevelArray", PyvtkDataSet_GenerateGhostLevelArray, 1,
   (char*)"V.GenerateGhostLevelArray()\nC++: virtual void GenerateGhostLevelArray()\n\nNormally called by pipeline executives or algoritgms only. This\nmethod computes the ghost arrays for a given dataset.\n"},
  {(char*)"GetData", PyvtkDataSet_GetData, 1,
   (char*)"V.GetData(vtkInformation) -> vtkDataSet\nC++: static vtkDataSet *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkDataSet\nC++: static vtkDataSet *GetData(vtkInformationVector *v, int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {(char*)"GetAttributesAsFieldData", PyvtkDataSet_GetAttributesAsFieldData, 1,
   (char*)"V.GetAttributesAsFieldData(int) -> vtkFieldData\nC++: virtual vtkFieldData *GetAttributesAsFieldData(int type)\n\nReturns the attributes of the data object as a vtkFieldData. This\nreturns non-null values in all the same cases as GetAttributes,\nin addition to the case of FIELD, which will return the field\ndata for any vtkDataObject subclass.\n"},
  {(char*)"GetNumberOfElements", PyvtkDataSet_GetNumberOfElements, 1,
   (char*)"V.GetNumberOfElements(int) -> int\nC++: virtual vtkIdType GetNumberOfElements(int type)\n\nGet the number of elements for a specific attribute type (POINT,\nCELL, etc.).\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkDataSetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkDataSet_Methods,
    "vtkDataSet", modulename,
    NULL, NULL,
    PyvtkDataSet_Doc(),
    PyVTKClass_vtkDataObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"DATA_OBJECT_FIELD", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"POINT_DATA_FIELD", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"CELL_DATA_FIELD", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkDataSet_Doc()
{
  static const char *docstring[] = {
    "vtkDataSet - abstract class to specify dataset behavior\n\n",
    "Superclass: vtkDataObject\n\n",
    "vtkDataSet is an abstract class that specifies an interface for\ndataset objects. vtkDataSet also provides methods to provide\ninformations about the data, such as center, bounding box, and\nrepresentative length.\n\nIn vtk a dataset consists of a structure (geometry and topology) and\nattribute data. The structure is defined implicitly or explicitly as\na collection of cells. The geometry of the structu",
    "re is contained in\npoint coordinates plus the cell interpolation functions. The topology\nof the dataset structure is defined by cell types and how the cells\nshare their defining points.\n\nAttribute data in vtk is either point data (data at points) or cell\ndata (data at cells). Typically filters operate on point data, but\nsome may operate on cell data, both cell and point data, either one,\nor none.\n",
    "\nSee Also:\n\nvtkPointSet vtkStructuredPoints vtkStructuredGrid vtkUnstructuredGrid\nvtkRectilinearGrid vtkPolyData vtkPointData vtkCellData vtkDataObject\nvtkFieldData\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataSet(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataSetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataSet", o) != 0)
    {
    Py_DECREF(o);
    }

}

