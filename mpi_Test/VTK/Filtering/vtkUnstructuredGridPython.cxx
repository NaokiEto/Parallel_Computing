// python wrapper for vtkUnstructuredGrid
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
#include "vtkUnstructuredGrid.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkUnstructuredGrid(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkUnstructuredGrid(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkUnstructuredGridNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPointSetNew
extern "C" { PyObject *PyVTKClass_vtkPointSetNew(const char *); }
#define DECLARED_PyVTKClass_vtkPointSetNew
#endif

static const char **PyvtkUnstructuredGrid_Doc();


static PyObject *
PyvtkUnstructuredGrid_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

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
      tempr = op->vtkUnstructuredGrid::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

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
      tempr = op->vtkUnstructuredGrid::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  vtkUnstructuredGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkUnstructuredGrid::NewInstance();
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
PyvtkUnstructuredGrid_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkUnstructuredGrid *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkUnstructuredGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

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
      tempr = op->vtkUnstructuredGrid::GetDataObjectType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  vtkIdType temp0 = 1000;
  int temp1 = 1000;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    if (ap.IsBound())
      {
      op->Allocate(temp0, temp1);
      }
    else
      {
      op->vtkUnstructuredGrid::Allocate(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_InsertNextCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  int temp0;
  vtkIdList *temp1 = NULL;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      tempr = op->InsertNextCell(temp0, temp1);
      }
    else
      {
      tempr = op->vtkUnstructuredGrid::InsertNextCell(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Reset();
      }
    else
      {
      op->vtkUnstructuredGrid::Reset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_CopyStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

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
      op->vtkUnstructuredGrid::CopyStructure(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

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
      tempr = op->vtkUnstructuredGrid::GetNumberOfCells();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

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
      tempr = op->vtkUnstructuredGrid::GetCell(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_GetCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

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
      op->vtkUnstructuredGrid::GetCell(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_GetCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkUnstructuredGrid_GetCell_s1(self, args);
    case 2:
      return PyvtkUnstructuredGrid_GetCell_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetCell");
  return NULL;
}



static PyObject *
PyvtkUnstructuredGrid_GetCellBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

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
      op->vtkUnstructuredGrid::GetCellBounds(temp0, temp1);
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
PyvtkUnstructuredGrid_GetCellPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

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
      op->vtkUnstructuredGrid::GetCellPoints(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetPointCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

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
      op->vtkUnstructuredGrid::GetPointCells(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

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
      tempr = op->vtkUnstructuredGrid::GetCellType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetCellTypesArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellTypesArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  vtkUnsignedCharArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellTypesArray();
      }
    else
      {
      tempr = op->vtkUnstructuredGrid::GetCellTypesArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetCellLocationsArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellLocationsArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  vtkIdTypeArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellLocationsArray();
      }
    else
      {
      tempr = op->vtkUnstructuredGrid::GetCellLocationsArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_Squeeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Squeeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Squeeze();
      }
    else
      {
      op->vtkUnstructuredGrid::Squeeze();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkUnstructuredGrid::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetMaxCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

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
      tempr = op->vtkUnstructuredGrid::GetMaxCellSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_BuildLinks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLinks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildLinks();
      }
    else
      {
      op->vtkUnstructuredGrid::BuildLinks();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetCellLinks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellLinks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  vtkCellLinks *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellLinks();
      }
    else
      {
      tempr = op->vtkUnstructuredGrid::GetCellLinks();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetFaceStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  vtkIdType temp0;
  vtkIdList *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      op->GetFaceStream(temp0, temp1);
      }
    else
      {
      op->vtkUnstructuredGrid::GetFaceStream(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_SetCells_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  int temp0;
  vtkCellArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkCellArray"))
    {
    if (ap.IsBound())
      {
      op->SetCells(temp0, temp1);
      }
    else
      {
      op->vtkUnstructuredGrid::SetCells(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_SetCells_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  vtkUnsignedCharArray *temp0 = NULL;
  vtkIdTypeArray *temp1 = NULL;
  vtkCellArray *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray") &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp2, "vtkCellArray"))
    {
    if (ap.IsBound())
      {
      op->SetCells(temp0, temp1, temp2);
      }
    else
      {
      op->vtkUnstructuredGrid::SetCells(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_SetCells_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  vtkUnsignedCharArray *temp0 = NULL;
  vtkIdTypeArray *temp1 = NULL;
  vtkCellArray *temp2 = NULL;
  vtkIdTypeArray *temp3 = NULL;
  vtkIdTypeArray *temp4 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray") &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp2, "vtkCellArray") &&
      ap.GetVTKObject(temp3, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp4, "vtkIdTypeArray"))
    {
    if (ap.IsBound())
      {
      op->SetCells(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkUnstructuredGrid::SetCells(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_SetCells(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkUnstructuredGrid_SetCells_s1(self, args);
    case 3:
      return PyvtkUnstructuredGrid_SetCells_s2(self, args);
    case 5:
      return PyvtkUnstructuredGrid_SetCells_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCells");
  return NULL;
}



static PyObject *
PyvtkUnstructuredGrid_GetCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  vtkCellArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCells();
      }
    else
      {
      tempr = op->vtkUnstructuredGrid::GetCells();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_RemoveReferenceToCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveReferenceToCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->RemoveReferenceToCell(temp0, temp1);
      }
    else
      {
      op->vtkUnstructuredGrid::RemoveReferenceToCell(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_AddReferenceToCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddReferenceToCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddReferenceToCell(temp0, temp1);
      }
    else
      {
      op->vtkUnstructuredGrid::AddReferenceToCell(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_ResizeCellList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResizeCellList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->ResizeCellList(temp0, temp1);
      }
    else
      {
      op->vtkUnstructuredGrid::ResizeCellList(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetCellNeighbors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

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
      op->vtkUnstructuredGrid::GetCellNeighbors(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetUpdateExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

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
      op->GetUpdateExtent(temp0, temp1, temp2);
      }
    else
      {
      op->vtkUnstructuredGrid::GetUpdateExtent(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_GetUpdateExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  int *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUpdateExtent();
      }
    else
      {
      tempr = op->vtkUnstructuredGrid::GetUpdateExtent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_GetUpdateExtent_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

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
      op->GetUpdateExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkUnstructuredGrid::GetUpdateExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(3, temp3);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(4, temp4);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(5, temp5);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_GetUpdateExtent_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

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
      op->GetUpdateExtent(temp0);
      }
    else
      {
      op->vtkUnstructuredGrid::GetUpdateExtent(temp0);
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
PyvtkUnstructuredGrid_GetUpdateExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkUnstructuredGrid_GetUpdateExtent_s1(self, args);
    case 0:
      return PyvtkUnstructuredGrid_GetUpdateExtent_s2(self, args);
    case 6:
      return PyvtkUnstructuredGrid_GetUpdateExtent_s3(self, args);
    case 1:
      return PyvtkUnstructuredGrid_GetUpdateExtent_s4(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetUpdateExtent");
  return NULL;
}



static PyObject *
PyvtkUnstructuredGrid_GetPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPiece();
      }
    else
      {
      tempr = op->vtkUnstructuredGrid::GetPiece();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfPieces();
      }
    else
      {
      tempr = op->vtkUnstructuredGrid::GetNumberOfPieces();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGhostLevel();
      }
    else
      {
      tempr = op->vtkUnstructuredGrid::GetGhostLevel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

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
      tempr = op->vtkUnstructuredGrid::GetActualMemorySize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

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
      op->vtkUnstructuredGrid::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

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
      op->vtkUnstructuredGrid::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetIdsOfCellsOfType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIdsOfCellsOfType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  int temp0;
  vtkIdTypeArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray"))
    {
    if (ap.IsBound())
      {
      op->GetIdsOfCellsOfType(temp0, temp1);
      }
    else
      {
      op->vtkUnstructuredGrid::GetIdsOfCellsOfType(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_IsHomogeneous(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsHomogeneous");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsHomogeneous();
      }
    else
      {
      tempr = op->vtkUnstructuredGrid::IsHomogeneous();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_RemoveGhostCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveGhostCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveGhostCells(temp0);
      }
    else
      {
      op->vtkUnstructuredGrid::RemoveGhostCells(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = NULL;
  vtkUnstructuredGrid *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    tempr = vtkUnstructuredGrid::GetData(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = NULL;
  int temp1 = 0;
  vtkUnstructuredGrid *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    tempr = vtkUnstructuredGrid::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkUnstructuredGrid_GetData_Methods[] = {
  {NULL, PyvtkUnstructuredGrid_GetData_s1, 1,
   (char*)"O *vtkInformation"},
  {NULL, PyvtkUnstructuredGrid_GetData_s2, 1,
   (char*)"O|i *vtkInformationVector"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkUnstructuredGrid_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkUnstructuredGrid_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkUnstructuredGrid_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return NULL;
}



static PyObject *
PyvtkUnstructuredGrid_GetFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  vtkIdTypeArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFaces();
      }
    else
      {
      tempr = op->vtkUnstructuredGrid::GetFaces();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetFaceLocations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceLocations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  vtkIdTypeArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFaceLocations();
      }
    else
      {
      tempr = op->vtkUnstructuredGrid::GetFaceLocations();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_InitializeFacesRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeFacesRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  vtkIdType temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->InitializeFacesRepresentation(temp0);
      }
    else
      {
      tempr = op->vtkUnstructuredGrid::InitializeFacesRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_DecomposeAPolyhedronCell(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DecomposeAPolyhedronCell");

  vtkCellArray *temp0 = NULL;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkCellArray *temp3 = NULL;
  vtkIdTypeArray *temp4 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkCellArray") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkIdTypeArray"))
    {
    vtkUnstructuredGrid::DecomposeAPolyhedronCell(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkUnstructuredGrid_Methods[] = {
  {(char*)"GetClassName", PyvtkUnstructuredGrid_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkUnstructuredGrid_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkUnstructuredGrid_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkUnstructuredGrid_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDataObjectType", PyvtkUnstructuredGrid_GetDataObjectType, 1,
   (char*)"V.GetDataObjectType() -> int\nC++: int GetDataObjectType()\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"Allocate", PyvtkUnstructuredGrid_Allocate, 1,
   (char*)"V.Allocate(int, int)\nC++: virtual void Allocate(vtkIdType numCells=1000,\n    int extSize=1000)\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"InsertNextCell", PyvtkUnstructuredGrid_InsertNextCell, 1,
   (char*)"V.InsertNextCell(int, vtkIdList) -> int\nC++: vtkIdType InsertNextCell(int type, vtkIdList *ptIds)\n\nInsert/create cell in object by a list of point ids defining cell\ntopology. Most cells require just a type which implicitly defines\na set of points and their ordering. For non-polyhedron cell type,\nptIds is the list of global Ids of unique cell points. For\npolyhedron cell, a special ptIds input format is required:\n(numCellFaces, numFace0Pts, id1, id2, id3, numFace1Pts,id1, id2,\nid3, ...)\n"},
  {(char*)"Reset", PyvtkUnstructuredGrid_Reset, 1,
   (char*)"V.Reset()\nC++: void Reset()\n\nStandard vtkDataSet methods; see vtkDataSet.h for documentation.\n"},
  {(char*)"CopyStructure", PyvtkUnstructuredGrid_CopyStructure, 1,
   (char*)"V.CopyStructure(vtkDataSet)\nC++: virtual void CopyStructure(vtkDataSet *ds)\n\nStandard vtkDataSet methods; see vtkDataSet.h for documentation.\n"},
  {(char*)"GetNumberOfCells", PyvtkUnstructuredGrid_GetNumberOfCells, 1,
   (char*)"V.GetNumberOfCells() -> int\nC++: vtkIdType GetNumberOfCells()\n\nStandard vtkDataSet methods; see vtkDataSet.h for documentation.\n"},
  {(char*)"GetCell", PyvtkUnstructuredGrid_GetCell, 1,
   (char*)"V.GetCell(int) -> vtkCell\nC++: virtual vtkCell *GetCell(vtkIdType cellId)\nV.GetCell(int, vtkGenericCell)\nC++: virtual void GetCell(vtkIdType cellId, vtkGenericCell *cell)\n\nStandard vtkDataSet methods; see vtkDataSet.h for documentation.\n"},
  {(char*)"GetCellBounds", PyvtkUnstructuredGrid_GetCellBounds, 1,
   (char*)"V.GetCellBounds(int, [float, float, float, float, float, float])\nC++: virtual void GetCellBounds(vtkIdType cellId,\n    double bounds[6])\n\nStandard vtkDataSet methods; see vtkDataSet.h for documentation.\n"},
  {(char*)"GetCellPoints", PyvtkUnstructuredGrid_GetCellPoints, 1,
   (char*)"V.GetCellPoints(int, vtkIdList)\nC++: virtual void GetCellPoints(vtkIdType cellId,\n    vtkIdList *ptIds)\n\nStandard vtkDataSet methods; see vtkDataSet.h for documentation.\n"},
  {(char*)"GetPointCells", PyvtkUnstructuredGrid_GetPointCells, 1,
   (char*)"V.GetPointCells(int, vtkIdList)\nC++: void GetPointCells(vtkIdType ptId, vtkIdList *cellIds)\n\nStandard vtkDataSet methods; see vtkDataSet.h for documentation.\n"},
  {(char*)"GetCellType", PyvtkUnstructuredGrid_GetCellType, 1,
   (char*)"V.GetCellType(int) -> int\nC++: int GetCellType(vtkIdType cellId)\n\n"},
  {(char*)"GetCellTypesArray", PyvtkUnstructuredGrid_GetCellTypesArray, 1,
   (char*)"V.GetCellTypesArray() -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *GetCellTypesArray()\n\n"},
  {(char*)"GetCellLocationsArray", PyvtkUnstructuredGrid_GetCellLocationsArray, 1,
   (char*)"V.GetCellLocationsArray() -> vtkIdTypeArray\nC++: vtkIdTypeArray *GetCellLocationsArray()\n\n"},
  {(char*)"Squeeze", PyvtkUnstructuredGrid_Squeeze, 1,
   (char*)"V.Squeeze()\nC++: void Squeeze()\n\n"},
  {(char*)"Initialize", PyvtkUnstructuredGrid_Initialize, 1,
   (char*)"V.Initialize()\nC++: void Initialize()\n\n"},
  {(char*)"GetMaxCellSize", PyvtkUnstructuredGrid_GetMaxCellSize, 1,
   (char*)"V.GetMaxCellSize() -> int\nC++: int GetMaxCellSize()\n\n"},
  {(char*)"BuildLinks", PyvtkUnstructuredGrid_BuildLinks, 1,
   (char*)"V.BuildLinks()\nC++: void BuildLinks()\n\n"},
  {(char*)"GetCellLinks", PyvtkUnstructuredGrid_GetCellLinks, 1,
   (char*)"V.GetCellLinks() -> vtkCellLinks\nC++: vtkCellLinks *GetCellLinks()\n\n"},
  {(char*)"GetFaceStream", PyvtkUnstructuredGrid_GetFaceStream, 1,
   (char*)"V.GetFaceStream(int, vtkIdList)\nC++: void GetFaceStream(vtkIdType cellId, vtkIdList *ptIds)\n\nGet the face stream of a polyhedron cell in the following format:\n(numCellFaces, numFace0Pts, id1, id2, id3, numFace1Pts,id1, id2,\nid3, ...). If the requested cell is not a polyhedron, then the\nstandard GetCellPoints is called to return a list of unique point\nids (id1, id2, id3, ...).\n"},
  {(char*)"SetCells", PyvtkUnstructuredGrid_SetCells, 1,
   (char*)"V.SetCells(int, vtkCellArray)\nC++: void SetCells(int type, vtkCellArray *cells)\nV.SetCells(vtkUnsignedCharArray, vtkIdTypeArray, vtkCellArray)\nC++: void SetCells(vtkUnsignedCharArray *cellTypes,\n    vtkIdTypeArray *cellLocations, vtkCellArray *cells)\nV.SetCells(vtkUnsignedCharArray, vtkIdTypeArray, vtkCellArray,\n    vtkIdTypeArray, vtkIdTypeArray)\nC++: void SetCells(vtkUnsignedCharArray *cellTypes,\n    vtkIdTypeArray *cellLocations, vtkCellArray *cells,\n    vtkIdTypeArray *faceLocations, vtkIdTypeArray *faces)\n\nSpecial methods specific to vtkUnstructuredGrid for defining the\ncells composing the dataset. Most cells require just arrays of\ncellTypes, cellLocations and cellConnectivities which implicitly\ndefine the set of points in each cell and their ordering. In\nthose cases the cellConnectivities are of the format\n(numFace0Pts, id1, id2, id3, numFace1Pts, id1, id2, id3...).\nHowever, some cells like vtkPolyhedron require points plus a list\nof faces. To handle vtkPolyhedron, SetCells() support a special\ninput cellConnectivities format (numCellFaces, numFace0Pts, id1,\nid2, id3, numFace1Pts,id1, id2, id3, ...) The functions use\nvtkPolyhedron::DecomposeAPolyhedronCell() to convert polyhedron\ncells into standard format.\n"},
  {(char*)"GetCells", PyvtkUnstructuredGrid_GetCells, 1,
   (char*)"V.GetCells() -> vtkCellArray\nC++: vtkCellArray *GetCells()\n\n"},
  {(char*)"RemoveReferenceToCell", PyvtkUnstructuredGrid_RemoveReferenceToCell, 1,
   (char*)"V.RemoveReferenceToCell(int, int)\nC++: void RemoveReferenceToCell(vtkIdType ptId, vtkIdType cellId)\n\n"},
  {(char*)"AddReferenceToCell", PyvtkUnstructuredGrid_AddReferenceToCell, 1,
   (char*)"V.AddReferenceToCell(int, int)\nC++: void AddReferenceToCell(vtkIdType ptId, vtkIdType cellId)\n\n"},
  {(char*)"ResizeCellList", PyvtkUnstructuredGrid_ResizeCellList, 1,
   (char*)"V.ResizeCellList(int, int)\nC++: void ResizeCellList(vtkIdType ptId, int size)\n\n"},
  {(char*)"GetCellNeighbors", PyvtkUnstructuredGrid_GetCellNeighbors, 1,
   (char*)"V.GetCellNeighbors(int, vtkIdList, vtkIdList)\nC++: virtual void GetCellNeighbors(vtkIdType cellId,\n    vtkIdList *ptIds, vtkIdList *cellIds)\n\nTopological inquiry to get all cells using list of points\nexclusive of cell specified (e.g., cellId). THIS METHOD IS THREAD\nSAFE IF FIRST CALLED FROM A SINGLE THREAD AND THE DATASET IS NOT\nMODIFIED\n"},
  {(char*)"GetUpdateExtent", PyvtkUnstructuredGrid_GetUpdateExtent, 1,
   (char*)"V.GetUpdateExtent(int, int, int)\nC++: void GetUpdateExtent(int &piece, int &numPieces,\n    int &ghostLevel)\nV.GetUpdateExtent() -> (int, int, int, int, int, int)\nC++: virtual int *GetUpdateExtent()\nV.GetUpdateExtent(int, int, int, int, int, int)\nC++: virtual void GetUpdateExtent(int &x0, int &x1, int &y0,\n    int &y1, int &z0, int &z1)\nV.GetUpdateExtent([int, int, int, int, int, int])\nC++: virtual void GetUpdateExtent(int extent[6])\n\nFor streaming.  User/next filter specifies which piece the want\nupdated. The source of this poly data has to return exactly this\npiece.\n"},
  {(char*)"GetPiece", PyvtkUnstructuredGrid_GetPiece, 1,
   (char*)"V.GetPiece() -> int\nC++: virtual int GetPiece()\n\nSet / Get the piece and the number of pieces. Similar to extent\nin 3D.\n"},
  {(char*)"GetNumberOfPieces", PyvtkUnstructuredGrid_GetNumberOfPieces, 1,
   (char*)"V.GetNumberOfPieces() -> int\nC++: virtual int GetNumberOfPieces()\n\nSet / Get the piece and the number of pieces. Similar to extent\nin 3D.\n"},
  {(char*)"GetGhostLevel", PyvtkUnstructuredGrid_GetGhostLevel, 1,
   (char*)"V.GetGhostLevel() -> int\nC++: virtual int GetGhostLevel()\n\nGet the ghost level.\n"},
  {(char*)"GetActualMemorySize", PyvtkUnstructuredGrid_GetActualMemorySize, 1,
   (char*)"V.GetActualMemorySize() -> int\nC++: unsigned long GetActualMemorySize()\n\nReturn the actual size of the data in kilobytes. This number is\nvalid only after the pipeline has updated. The memory size\nreturned is guaranteed to be greater than or equal to the memory\nrequired to represent the data (e.g., extra space in arrays, etc.\nare not included in the return value). THIS METHOD IS THREAD\nSAFE.\n"},
  {(char*)"ShallowCopy", PyvtkUnstructuredGrid_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkDataObject)\nC++: virtual void ShallowCopy(vtkDataObject *src)\n\nShallow and Deep copy.\n"},
  {(char*)"DeepCopy", PyvtkUnstructuredGrid_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkDataObject)\nC++: virtual void DeepCopy(vtkDataObject *src)\n\nShallow and Deep copy.\n"},
  {(char*)"GetIdsOfCellsOfType", PyvtkUnstructuredGrid_GetIdsOfCellsOfType, 1,
   (char*)"V.GetIdsOfCellsOfType(int, vtkIdTypeArray)\nC++: void GetIdsOfCellsOfType(int type, vtkIdTypeArray *array)\n\nFill vtkIdTypeArray container with list of cell Ids.  This method\ntraverses all cells and, for a particular cell type, inserts the\ncell Id into the container.\n"},
  {(char*)"IsHomogeneous", PyvtkUnstructuredGrid_IsHomogeneous, 1,
   (char*)"V.IsHomogeneous() -> int\nC++: int IsHomogeneous()\n\nTraverse cells and determine if cells are all of the same type.\n"},
  {(char*)"RemoveGhostCells", PyvtkUnstructuredGrid_RemoveGhostCells, 1,
   (char*)"V.RemoveGhostCells(int)\nC++: void RemoveGhostCells(int level)\n\nThis method will remove any cell that has a ghost level array\nvalue greater or equal to level.\n"},
  {(char*)"GetData", PyvtkUnstructuredGrid_GetData, 1,
   (char*)"V.GetData(vtkInformation) -> vtkUnstructuredGrid\nC++: static vtkUnstructuredGrid *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkUnstructuredGrid\nC++: static vtkUnstructuredGrid *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {(char*)"GetFaces", PyvtkUnstructuredGrid_GetFaces, 1,
   (char*)"V.GetFaces() -> vtkIdTypeArray\nC++: vtkIdTypeArray *GetFaces()\n\nGet pointer to faces and facelocations. Support for polyhedron\ncells.\n"},
  {(char*)"GetFaceLocations", PyvtkUnstructuredGrid_GetFaceLocations, 1,
   (char*)"V.GetFaceLocations() -> vtkIdTypeArray\nC++: vtkIdTypeArray *GetFaceLocations()\n\nGet pointer to faces and facelocations. Support for polyhedron\ncells.\n"},
  {(char*)"InitializeFacesRepresentation", PyvtkUnstructuredGrid_InitializeFacesRepresentation, 1,
   (char*)"V.InitializeFacesRepresentation(int) -> int\nC++: int InitializeFacesRepresentation(vtkIdType numPrevCells)\n\nSpecial function used by vtkUnstructuredGridReader. By default\nvtkUnstructuredGrid does not contain face information, which is\nonly used by polyhedron cells. If so far no polyhedron cells have\nbeen added, Faces and FaceLocations pointers will be NULL. In\nthis case, need to initialize the arrays and assign values to the\nprevious non-polyhedron cells.\n"},
  {(char*)"DecomposeAPolyhedronCell", PyvtkUnstructuredGrid_DecomposeAPolyhedronCell, 1,
   (char*)"V.DecomposeAPolyhedronCell(vtkCellArray, int, int, vtkCellArray,\n    vtkIdTypeArray)\nC++: static void DecomposeAPolyhedronCell(\n    vtkCellArray *polyhedronCellArray, vtkIdType &nCellpts,\n    vtkIdType &nCellfaces, vtkCellArray *cellArray,\n    vtkIdTypeArray *faces)\n\nA static method for converting a polyhedron vtkCellArray of\nformat [nCellFaces, nFace0Pts, i, j, k, nFace1Pts, i, j, k, ...]\ninto three components: (1) an integer indicating the number of\nfaces (2) a standard vtkCellArray storing point ids [nCell0Pts,\ni, j, k] and (3) an vtkIdTypeArray storing face connectivity in\nformat [nFace0Pts, i, j, k, nFace1Pts, i, j, k, ...] Note: input\nis assumed to contain only one polyhedron cell. Outputs (2) and\n(3) will be stacked at the end of the input cellArray and faces.\nThe original data in the input will not be touched.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkUnstructuredGrid_StaticNew()
{
  return vtkUnstructuredGrid::New();
}

PyObject *PyVTKClass_vtkUnstructuredGridNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkUnstructuredGrid_StaticNew,
    PyvtkUnstructuredGrid_Methods,
    "vtkUnstructuredGrid", modulename,
    NULL, NULL,
    PyvtkUnstructuredGrid_Doc(),
    PyVTKClass_vtkPointSetNew(modulename));
  return cls;
}

const char **PyvtkUnstructuredGrid_Doc()
{
  static const char *docstring[] = {
    "vtkUnstructuredGrid - dataset represents arbitrary combinations of \n\n",
    "Superclass: vtkPointSet\n\n",
    "vtkUnstructuredGrid is a data object that is a concrete\nimplementation of vtkDataSet. vtkUnstructuredGrid represents any\ncombinations of any cell types. This includes 0D (e.g., points), 1D\n(e.g., lines, polylines), 2D (e.g., triangles, polygons), and 3D\n(e.g., hexahedron, tetrahedron, polyhedron, etc.).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkUnstructuredGrid(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkUnstructuredGridNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkUnstructuredGrid", o) != 0)
    {
    Py_DECREF(o);
    }

}

