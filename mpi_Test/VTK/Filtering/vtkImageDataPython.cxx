// python wrapper for vtkImageData
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
#include "vtkImageData.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageData(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageData(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageDataNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageDataNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataSetNew
extern "C" { PyObject *PyVTKClass_vtkDataSetNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetNew
#endif

static const char **PyvtkImageData_Doc();


static PyObject *
PyvtkImageData_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      tempr = op->vtkImageData::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      tempr = op->vtkImageData::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  vtkImageData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageData::NewInstance();
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
PyvtkImageData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageData *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_CopyStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->vtkImageData::CopyStructure(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      tempr = op->vtkImageData::GetDataObjectType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      tempr = op->vtkImageData::GetNumberOfCells();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      tempr = op->vtkImageData::GetNumberOfPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_GetPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      tempr = op->vtkImageData::GetPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkImageData_GetPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->vtkImageData::GetPoint(temp0, temp1);
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
PyvtkImageData_GetPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImageData_GetPoint_s1(self, args);
    case 2:
      return PyvtkImageData_GetPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint");
  return NULL;
}



static PyObject *
PyvtkImageData_GetCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      tempr = op->vtkImageData::GetCell(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImageData_GetCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->vtkImageData::GetCell(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageData_GetCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImageData_GetCell_s1(self, args);
    case 2:
      return PyvtkImageData_GetCell_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetCell");
  return NULL;
}



static PyObject *
PyvtkImageData_GetCellBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->vtkImageData::GetCellBounds(temp0, temp1);
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
PyvtkImageData_FindPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      tempr = op->vtkImageData::FindPoint(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImageData_FindPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      tempr = op->vtkImageData::FindPoint(temp0);
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
PyvtkImageData_FindPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageData_FindPoint_s1(self, args);
    case 1:
      return PyvtkImageData_FindPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "FindPoint");
  return NULL;
}



static PyObject *
PyvtkImageData_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      tempr = op->vtkImageData::GetCellType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_GetCellPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->vtkImageData::GetCellPoints(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_GetPointCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->vtkImageData::GetPointCells(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_ComputeBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeBounds();
      }
    else
      {
      op->vtkImageData::ComputeBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_GetMaxCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      tempr = op->vtkImageData::GetMaxCellSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkImageData::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_SetDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->vtkImageData::SetDimensions(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageData_SetDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  int temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetDimensions(temp0);
      }
    else
      {
      op->vtkImageData::SetDimensions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageData_SetDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageData_SetDimensions_s1(self, args);
    case 1:
      return PyvtkImageData_SetDimensions_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDimensions");
  return NULL;
}



static PyObject *
PyvtkImageData_GetDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      tempr = op->vtkImageData::GetDimensions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkImageData_GetDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->vtkImageData::GetDimensions(temp0);
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
PyvtkImageData_GetDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkImageData_GetDimensions_s1(self, args);
    case 1:
      return PyvtkImageData_GetDimensions_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetDimensions");
  return NULL;
}



static PyObject *
PyvtkImageData_ComputeStructuredCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeStructuredCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      tempr = op->vtkImageData::ComputeStructuredCoordinates(temp0, temp1, temp2);
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
PyvtkImageData_GetVoxelGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVoxelGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  vtkDataArray *temp3 = NULL;
  vtkDataArray *temp4 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkDataArray") &&
      ap.GetVTKObject(temp4, "vtkDataArray"))
    {
    if (ap.IsBound())
      {
      op->GetVoxelGradient(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkImageData::GetVoxelGradient(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_GetPointGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  vtkDataArray *temp3 = NULL;
  double temp4[3];
  double save4[3];
  const int size4 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkDataArray") &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp4, save4, size4);

    if (ap.IsBound())
      {
      op->GetPointGradient(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkImageData::GetPointGradient(temp0, temp1, temp2, temp3, temp4);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_GetDataDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      tempr = op->vtkImageData::GetDataDimension();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_ComputePointId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputePointId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      tempr = op->vtkImageData::ComputePointId(temp0);
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
PyvtkImageData_ComputeCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      tempr = op->vtkImageData::ComputeCellId(temp0);
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
PyvtkImageData_SetAxisUpdateExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->SetAxisUpdateExtent(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageData::SetAxisUpdateExtent(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_GetAxisUpdateExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->GetAxisUpdateExtent(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageData::GetAxisUpdateExtent(temp0, temp1, temp2);
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
PyvtkImageData_UpdateInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdateInformation();
      }
    else
      {
      op->vtkImageData::UpdateInformation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_SetExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->vtkImageData::SetExtent(temp0);
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
PyvtkImageData_SetExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->vtkImageData::SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageData_SetExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImageData_SetExtent_s1(self, args);
    case 6:
      return PyvtkImageData_SetExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetExtent");
  return NULL;
}



static PyObject *
PyvtkImageData_GetExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      tempr = op->vtkImageData::GetExtent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_GetEstimatedMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEstimatedMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEstimatedMemorySize();
      }
    else
      {
      tempr = op->vtkImageData::GetEstimatedMemorySize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_GetScalarTypeMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarTypeMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarTypeMin();
      }
    else
      {
      tempr = op->vtkImageData::GetScalarTypeMin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_GetScalarTypeMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarTypeMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarTypeMax();
      }
    else
      {
      tempr = op->vtkImageData::GetScalarTypeMax();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_GetScalarSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarSize();
      }
    else
      {
      tempr = op->vtkImageData::GetScalarSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_GetIncrements_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncrements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  vtkIdType *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIncrements();
      }
    else
      {
      tempr = op->vtkImageData::GetIncrements();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkImageData_GetIncrements_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncrements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->GetIncrements(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageData::GetIncrements(temp0, temp1, temp2);
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
PyvtkImageData_GetIncrements_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncrements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  vtkIdType temp0[3];
  vtkIdType save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetIncrements(temp0);
      }
    else
      {
      op->vtkImageData::GetIncrements(temp0);
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
PyvtkImageData_GetIncrements(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkImageData_GetIncrements_s1(self, args);
    case 3:
      return PyvtkImageData_GetIncrements_s2(self, args);
    case 1:
      return PyvtkImageData_GetIncrements_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetIncrements");
  return NULL;
}



static PyObject *
PyvtkImageData_GetContinuousIncrements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContinuousIncrements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkIdType temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetContinuousIncrements(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkImageData::GetContinuousIncrements(temp0, temp1, temp2, temp3);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
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
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_GetScalarPointerForExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarPointerForExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  void  *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      tempr = op->GetScalarPointerForExtent(temp0);
      }
    else
      {
      tempr = op->vtkImageData::GetScalarPointerForExtent(temp0);
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
PyvtkImageData_GetScalarPointer_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  int temp0[3];
  int save0[3];
  const int size0 = 3;
  void  *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      tempr = op->GetScalarPointer(temp0);
      }
    else
      {
      tempr = op->vtkImageData::GetScalarPointer(temp0);
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
PyvtkImageData_GetScalarPointer_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  void  *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarPointer(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkImageData::GetScalarPointer(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImageData_GetScalarPointer_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  void  *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarPointer();
      }
    else
      {
      tempr = op->vtkImageData::GetScalarPointer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImageData_GetScalarPointer(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImageData_GetScalarPointer_s1(self, args);
    case 3:
      return PyvtkImageData_GetScalarPointer_s2(self, args);
    case 0:
      return PyvtkImageData_GetScalarPointer_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetScalarPointer");
  return NULL;
}



static PyObject *
PyvtkImageData_GetScalarComponentAsFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarComponentAsFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarComponentAsFloat(temp0, temp1, temp2, temp3);
      }
    else
      {
      tempr = op->vtkImageData::GetScalarComponentAsFloat(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_SetScalarComponentFromFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarComponentFromFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  float temp4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      op->SetScalarComponentFromFloat(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkImageData::SetScalarComponentFromFloat(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_GetScalarComponentAsDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarComponentAsDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarComponentAsDouble(temp0, temp1, temp2, temp3);
      }
    else
      {
      tempr = op->vtkImageData::GetScalarComponentAsDouble(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_SetScalarComponentFromDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarComponentFromDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  double temp4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      op->SetScalarComponentFromDouble(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkImageData::SetScalarComponentFromDouble(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_AllocateScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllocateScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllocateScalars();
      }
    else
      {
      op->vtkImageData::AllocateScalars();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_CopyAndCastFrom_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAndCastFrom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  vtkImageData *temp0 = NULL;
  int temp1[6];
  int save1[6];
  const int size1 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->CopyAndCastFrom(temp0, temp1);
      }
    else
      {
      op->vtkImageData::CopyAndCastFrom(temp0, temp1);
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
PyvtkImageData_CopyAndCastFrom_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAndCastFrom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  vtkImageData *temp0 = NULL;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  int temp6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(7) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
    {
    if (ap.IsBound())
      {
      op->CopyAndCastFrom(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
      }
    else
      {
      op->vtkImageData::CopyAndCastFrom(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageData_CopyAndCastFrom(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkImageData_CopyAndCastFrom_s1(self, args);
    case 7:
      return PyvtkImageData_CopyAndCastFrom_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "CopyAndCastFrom");
  return NULL;
}



static PyObject *
PyvtkImageData_Crop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Crop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Crop();
      }
    else
      {
      op->vtkImageData::Crop();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      tempr = op->vtkImageData::GetActualMemorySize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_SetSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetSpacing(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageData::SetSpacing(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageData_SetSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetSpacing(temp0);
      }
    else
      {
      op->vtkImageData::SetSpacing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageData_SetSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageData_SetSpacing_s1(self, args);
    case 1:
      return PyvtkImageData_SetSpacing_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSpacing");
  return NULL;
}



static PyObject *
PyvtkImageData_GetSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSpacing();
      }
    else
      {
      tempr = op->vtkImageData::GetSpacing();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetOrigin(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageData::SetOrigin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageData_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOrigin(temp0);
      }
    else
      {
      op->vtkImageData::SetOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageData_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageData_SetOrigin_s1(self, args);
    case 1:
      return PyvtkImageData_SetOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return NULL;
}



static PyObject *
PyvtkImageData_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOrigin();
      }
    else
      {
      tempr = op->vtkImageData::GetOrigin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_SetScalarTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToFloat();
      }
    else
      {
      op->vtkImageData::SetScalarTypeToFloat();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_SetScalarTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToDouble();
      }
    else
      {
      op->vtkImageData::SetScalarTypeToDouble();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_SetScalarTypeToInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToInt();
      }
    else
      {
      op->vtkImageData::SetScalarTypeToInt();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_SetScalarTypeToUnsignedInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToUnsignedInt();
      }
    else
      {
      op->vtkImageData::SetScalarTypeToUnsignedInt();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_SetScalarTypeToLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToLong();
      }
    else
      {
      op->vtkImageData::SetScalarTypeToLong();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_SetScalarTypeToUnsignedLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToUnsignedLong();
      }
    else
      {
      op->vtkImageData::SetScalarTypeToUnsignedLong();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_SetScalarTypeToShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToShort();
      }
    else
      {
      op->vtkImageData::SetScalarTypeToShort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_SetScalarTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToUnsignedShort();
      }
    else
      {
      op->vtkImageData::SetScalarTypeToUnsignedShort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_SetScalarTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToUnsignedChar();
      }
    else
      {
      op->vtkImageData::SetScalarTypeToUnsignedChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_SetScalarTypeToSignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToSignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToSignedChar();
      }
    else
      {
      op->vtkImageData::SetScalarTypeToSignedChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_SetScalarTypeToChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToChar();
      }
    else
      {
      op->vtkImageData::SetScalarTypeToChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_SetScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalarType(temp0);
      }
    else
      {
      op->vtkImageData::SetScalarType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_GetScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarType();
      }
    else
      {
      tempr = op->vtkImageData::GetScalarType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_GetScalarTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarTypeAsString();
      }
    else
      {
      tempr = op->vtkImageData::GetScalarTypeAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_SetNumberOfScalarComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfScalarComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfScalarComponents(temp0);
      }
    else
      {
      op->vtkImageData::SetNumberOfScalarComponents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_GetNumberOfScalarComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfScalarComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfScalarComponents();
      }
    else
      {
      tempr = op->vtkImageData::GetNumberOfScalarComponents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_CopyTypeSpecificInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyTypeSpecificInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->CopyTypeSpecificInformation(temp0);
      }
    else
      {
      op->vtkImageData::CopyTypeSpecificInformation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_CopyInformationToPipeline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyInformationToPipeline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  vtkInformation *temp0 = NULL;
  vtkInformation *temp1 = NULL;
  vtkInformation *temp2 = NULL;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformation") &&
      ap.GetVTKObject(temp2, "vtkInformation") &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->CopyInformationToPipeline(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkImageData::CopyInformationToPipeline(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_CopyInformationFromPipeline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyInformationFromPipeline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      op->CopyInformationFromPipeline(temp0);
      }
    else
      {
      op->vtkImageData::CopyInformationFromPipeline(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_PrepareForNewData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrepareForNewData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PrepareForNewData();
      }
    else
      {
      op->vtkImageData::PrepareForNewData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->vtkImageData::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->vtkImageData::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_GetArrayPointerForExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayPointerForExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  vtkDataArray *temp0 = NULL;
  int temp1[6];
  int save1[6];
  const int size1 = 6;
  void  *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      tempr = op->GetArrayPointerForExtent(temp0, temp1);
      }
    else
      {
      tempr = op->vtkImageData::GetArrayPointerForExtent(temp0, temp1);
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
PyvtkImageData_GetArrayPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  vtkDataArray *temp0 = NULL;
  int temp1[3];
  int save1[3];
  const int size1 = 3;
  void  *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      tempr = op->GetArrayPointer(temp0, temp1);
      }
    else
      {
      tempr = op->vtkImageData::GetArrayPointer(temp0, temp1);
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
PyvtkImageData_GetArrayIncrements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayIncrements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  vtkDataArray *temp0 = NULL;
  vtkIdType temp1[3];
  vtkIdType save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetArrayIncrements(temp0, temp1);
      }
    else
      {
      op->vtkImageData::GetArrayIncrements(temp0, temp1);
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
PyvtkImageData_GetExtentType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtentType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      tempr = op->vtkImageData::GetExtentType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageData_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = NULL;
  vtkImageData *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    tempr = vtkImageData::GetData(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImageData_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = NULL;
  int temp1 = 0;
  vtkImageData *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    tempr = vtkImageData::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageData_GetData_Methods[] = {
  {NULL, PyvtkImageData_GetData_s1, 1,
   (char*)"O *vtkInformation"},
  {NULL, PyvtkImageData_GetData_s2, 1,
   (char*)"O|i *vtkInformationVector"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkImageData_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkImageData_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkImageData_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return NULL;
}


static PyMethodDef PyvtkImageData_Methods[] = {
  {(char*)"GetClassName", PyvtkImageData_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageData_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageData_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageData\nC++: vtkImageData *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageData_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageData\nC++: vtkImageData *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CopyStructure", PyvtkImageData_CopyStructure, 1,
   (char*)"V.CopyStructure(vtkDataSet)\nC++: virtual void CopyStructure(vtkDataSet *ds)\n\nCopy the geometric and topological structure of an input image\ndata object.\n"},
  {(char*)"GetDataObjectType", PyvtkImageData_GetDataObjectType, 1,
   (char*)"V.GetDataObjectType() -> int\nC++: virtual int GetDataObjectType()\n\nReturn what type of dataset this is.\n"},
  {(char*)"GetNumberOfCells", PyvtkImageData_GetNumberOfCells, 1,
   (char*)"V.GetNumberOfCells() -> int\nC++: virtual vtkIdType GetNumberOfCells()\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"GetNumberOfPoints", PyvtkImageData_GetNumberOfPoints, 1,
   (char*)"V.GetNumberOfPoints() -> int\nC++: virtual vtkIdType GetNumberOfPoints()\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"GetPoint", PyvtkImageData_GetPoint, 1,
   (char*)"V.GetPoint(int) -> (float, float, float)\nC++: virtual double *GetPoint(vtkIdType ptId)\nV.GetPoint(int, [float, float, float])\nC++: virtual void GetPoint(vtkIdType id, double x[3])\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"GetCell", PyvtkImageData_GetCell, 1,
   (char*)"V.GetCell(int) -> vtkCell\nC++: virtual vtkCell *GetCell(vtkIdType cellId)\nV.GetCell(int, vtkGenericCell)\nC++: virtual void GetCell(vtkIdType cellId, vtkGenericCell *cell)\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"GetCellBounds", PyvtkImageData_GetCellBounds, 1,
   (char*)"V.GetCellBounds(int, [float, float, float, float, float, float])\nC++: virtual void GetCellBounds(vtkIdType cellId,\n    double bounds[6])\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"FindPoint", PyvtkImageData_FindPoint, 1,
   (char*)"V.FindPoint(float, float, float) -> int\nC++: virtual vtkIdType FindPoint(double x, double y, double z)\nV.FindPoint([float, float, float]) -> int\nC++: virtual vtkIdType FindPoint(double x[3])\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"GetCellType", PyvtkImageData_GetCellType, 1,
   (char*)"V.GetCellType(int) -> int\nC++: virtual int GetCellType(vtkIdType cellId)\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"GetCellPoints", PyvtkImageData_GetCellPoints, 1,
   (char*)"V.GetCellPoints(int, vtkIdList)\nC++: virtual void GetCellPoints(vtkIdType cellId,\n    vtkIdList *ptIds)\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"GetPointCells", PyvtkImageData_GetPointCells, 1,
   (char*)"V.GetPointCells(int, vtkIdList)\nC++: virtual void GetPointCells(vtkIdType ptId,\n    vtkIdList *cellIds)\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"ComputeBounds", PyvtkImageData_ComputeBounds, 1,
   (char*)"V.ComputeBounds()\nC++: virtual void ComputeBounds()\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"GetMaxCellSize", PyvtkImageData_GetMaxCellSize, 1,
   (char*)"V.GetMaxCellSize() -> int\nC++: virtual int GetMaxCellSize()\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"Initialize", PyvtkImageData_Initialize, 1,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nRestore data object to initial state.\n"},
  {(char*)"SetDimensions", PyvtkImageData_SetDimensions, 1,
   (char*)"V.SetDimensions(int, int, int)\nC++: virtual void SetDimensions(int i, int j, int k)\nV.SetDimensions((int, int, int))\nC++: virtual void SetDimensions(const int dims[3])\n\n\\deprecated{This is for backward compatibility only - use\nSetExtent().} Same as SetExtent(0, i-1, 0, j-1, 0, k-1)\n"},
  {(char*)"GetDimensions", PyvtkImageData_GetDimensions, 1,
   (char*)"V.GetDimensions() -> (int, int, int)\nC++: virtual int *GetDimensions()\nV.GetDimensions([int, int, int])\nC++: virtual void GetDimensions(int dims[3])\n\nGet dimensions of this structured points dataset. It is the\nnumber of points on each axis. Dimensions are computed from\nExtents during this call.\n"},
  {(char*)"ComputeStructuredCoordinates", PyvtkImageData_ComputeStructuredCoordinates, 1,
   (char*)"V.ComputeStructuredCoordinates([float, float, float], [int, int,\n    int], [float, float, float]) -> int\nC++: virtual int ComputeStructuredCoordinates(double x[3],\n    int ijk[3], double pcoords[3])\n\nConvenience function computes the structured coordinates for a\npoint x[3]. The voxel is specified by the array ijk[3], and the\nparametric coordinates in the cell are specified with pcoords[3].\nThe function returns a 0 if the point x is outside of the volume,\nand a 1 if inside the volume.\n"},
  {(char*)"GetVoxelGradient", PyvtkImageData_GetVoxelGradient, 1,
   (char*)"V.GetVoxelGradient(int, int, int, vtkDataArray, vtkDataArray)\nC++: virtual void GetVoxelGradient(int i, int j, int k,\n    vtkDataArray *s, vtkDataArray *g)\n\nGiven structured coordinates (i,j,k) for a voxel cell, compute\nthe eight gradient values for the voxel corners. The order in\nwhich the gradient vectors are arranged corresponds to the\nordering of the voxel points. Gradient vector is computed by\ncentral differences (except on edges of volume where forward\ndifference is used). The scalars s are the scalars from which the\ngradient is to be computed. This method will treat only 3D\nstructured point datasets (i.e., volumes).\n"},
  {(char*)"GetPointGradient", PyvtkImageData_GetPointGradient, 1,
   (char*)"V.GetPointGradient(int, int, int, vtkDataArray, [float, float,\n    float])\nC++: virtual void GetPointGradient(int i, int j, int k,\n    vtkDataArray *s, double g[3])\n\nGiven structured coordinates (i,j,k) for a point in a structured\npoint dataset, compute the gradient vector from the scalar data\nat that point. The scalars s are the scalars from which the\ngradient is to be computed. This method will treat structured\npoint datasets of any dimension.\n"},
  {(char*)"GetDataDimension", PyvtkImageData_GetDataDimension, 1,
   (char*)"V.GetDataDimension() -> int\nC++: virtual int GetDataDimension()\n\nReturn the dimensionality of the data.\n"},
  {(char*)"ComputePointId", PyvtkImageData_ComputePointId, 1,
   (char*)"V.ComputePointId([int, int, int]) -> int\nC++: virtual vtkIdType ComputePointId(int ijk[3])\n\nGiven a location in structured coordinates (i-j-k), return the\npoint id.\n"},
  {(char*)"ComputeCellId", PyvtkImageData_ComputeCellId, 1,
   (char*)"V.ComputeCellId([int, int, int]) -> int\nC++: virtual vtkIdType ComputeCellId(int ijk[3])\n\nGiven a location in structured coordinates (i-j-k), return the\ncell id.\n"},
  {(char*)"SetAxisUpdateExtent", PyvtkImageData_SetAxisUpdateExtent, 1,
   (char*)"V.SetAxisUpdateExtent(int, int, int)\nC++: virtual void SetAxisUpdateExtent(int axis, int min, int max)\n\nSet / Get the extent on just one axis\n"},
  {(char*)"GetAxisUpdateExtent", PyvtkImageData_GetAxisUpdateExtent, 1,
   (char*)"V.GetAxisUpdateExtent(int, int, int)\nC++: virtual void GetAxisUpdateExtent(int axis, int &min,\n    int &max)\n\nSet / Get the extent on just one axis\n"},
  {(char*)"UpdateInformation", PyvtkImageData_UpdateInformation, 1,
   (char*)"V.UpdateInformation()\nC++: virtual void UpdateInformation()\n\nOverride to copy information from pipeline information to data\ninformation for backward compatibility.  See\nvtkDataObject::UpdateInformation for details.\n"},
  {(char*)"SetExtent", PyvtkImageData_SetExtent, 1,
   (char*)"V.SetExtent([int, int, int, int, int, int])\nC++: virtual void SetExtent(int extent[6])\nV.SetExtent(int, int, int, int, int, int)\nC++: virtual void SetExtent(int x1, int x2, int y1, int y2,\n    int z1, int z2)\n\nSet/Get the extent. On each axis, the extent is defined by the\nindex of the first point and the index of the last point.  The\nextent should be set before the \"Scalars\" are set or allocated. \nThe Extent is stored in the order (X, Y, Z). The dataset extent\ndoes not have to start at (0,0,0). (0,0,0) is just the extent of\nthe origin. The first point (the one with Id=0) is at extent\n(Extent[0],Extent[2],Extent[4]). As for any dataset, a data array\non point data starts at Id=0.\n"},
  {(char*)"GetExtent", PyvtkImageData_GetExtent, 1,
   (char*)"V.GetExtent() -> (int, int, int, int, int, int)\nC++: int *GetExtent()\n\n"},
  {(char*)"GetEstimatedMemorySize", PyvtkImageData_GetEstimatedMemorySize, 1,
   (char*)"V.GetEstimatedMemorySize() -> int\nC++: virtual unsigned long GetEstimatedMemorySize()\n\nGet the estimated size of this data object itself. Should be\ncalled after UpdateInformation() and PropagateUpdateExtent() have\nboth been called. This estimate should be fairly accurate since\nthis is structured data.\n"},
  {(char*)"GetScalarTypeMin", PyvtkImageData_GetScalarTypeMin, 1,
   (char*)"V.GetScalarTypeMin() -> float\nC++: virtual double GetScalarTypeMin()\n\nThese returns the minimum and maximum values the ScalarType can\nhold without overflowing.\n"},
  {(char*)"GetScalarTypeMax", PyvtkImageData_GetScalarTypeMax, 1,
   (char*)"V.GetScalarTypeMax() -> float\nC++: virtual double GetScalarTypeMax()\n\nThese returns the minimum and maximum values the ScalarType can\nhold without overflowing.\n"},
  {(char*)"GetScalarSize", PyvtkImageData_GetScalarSize, 1,
   (char*)"V.GetScalarSize() -> int\nC++: virtual int GetScalarSize()\n\nGet the size of the scalar type in bytes.\n"},
  {(char*)"GetIncrements", PyvtkImageData_GetIncrements, 1,
   (char*)"V.GetIncrements() -> (int, int, int)\nC++: virtual vtkIdType *GetIncrements()\nV.GetIncrements(int, int, int)\nC++: virtual void GetIncrements(vtkIdType &incX, vtkIdType &incY,\n    vtkIdType &incZ)\nV.GetIncrements([int, int, int])\nC++: virtual void GetIncrements(vtkIdType inc[3])\n\nDifferent ways to get the increments for moving around the data.\nGetIncrements() calls ComputeIncrements() to ensure the\nincrements are up to date.\n"},
  {(char*)"GetContinuousIncrements", PyvtkImageData_GetContinuousIncrements, 1,
   (char*)"V.GetContinuousIncrements([int, int, int, int, int, int], int,\n    int, int)\nC++: virtual void GetContinuousIncrements(int extent[6],\n    vtkIdType &incX, vtkIdType &incY, vtkIdType &incZ)\n\nDifferent ways to get the increments for moving around the data.\nincX is always returned with 0.  incY is returned with the\nincrement needed to move from the end of one X scanline of data\nto the start of the next line.  incZ is filled in with the\nincrement needed to move from the end of one image to the start\nof the next.  The proper way to use these values is to for a loop\nover Z, Y, X, C, incrementing the pointer by 1 after each\ncomponent.  When the end of the component is reached, the pointer\nis set to the beginning of the next pixel, thus incX is properly\nset to 0.\n"},
  {(char*)"GetScalarPointerForExtent", PyvtkImageData_GetScalarPointerForExtent, 1,
   (char*)"V.GetScalarPointerForExtent([int, int, int, int, int, int]) ->\nC++: virtual void *GetScalarPointerForExtent(int extent[6])\n\nAccess the native pointer for the scalar data\n"},
  {(char*)"GetScalarPointer", PyvtkImageData_GetScalarPointer, 1,
   (char*)"V.GetScalarPointer([int, int, int]) ->\nC++: virtual void *GetScalarPointer(int coordinates[3])\nV.GetScalarPointer(int, int, int) ->\nC++: virtual void *GetScalarPointer(int x, int y, int z)\nV.GetScalarPointer() ->\nC++: virtual void *GetScalarPointer()\n\nAccess the native pointer for the scalar data\n"},
  {(char*)"GetScalarComponentAsFloat", PyvtkImageData_GetScalarComponentAsFloat, 1,
   (char*)"V.GetScalarComponentAsFloat(int, int, int, int) -> float\nC++: virtual float GetScalarComponentAsFloat(int x, int y, int z,\n    int component)\n\nFor access to data from tcl\n"},
  {(char*)"SetScalarComponentFromFloat", PyvtkImageData_SetScalarComponentFromFloat, 1,
   (char*)"V.SetScalarComponentFromFloat(int, int, int, int, float)\nC++: virtual void SetScalarComponentFromFloat(int x, int y, int z,\n     int component, float v)\n\nFor access to data from tcl\n"},
  {(char*)"GetScalarComponentAsDouble", PyvtkImageData_GetScalarComponentAsDouble, 1,
   (char*)"V.GetScalarComponentAsDouble(int, int, int, int) -> float\nC++: virtual double GetScalarComponentAsDouble(int x, int y,\n    int z, int component)\n\nFor access to data from tcl\n"},
  {(char*)"SetScalarComponentFromDouble", PyvtkImageData_SetScalarComponentFromDouble, 1,
   (char*)"V.SetScalarComponentFromDouble(int, int, int, int, float)\nC++: virtual void SetScalarComponentFromDouble(int x, int y,\n    int z, int component, double v)\n\nFor access to data from tcl\n"},
  {(char*)"AllocateScalars", PyvtkImageData_AllocateScalars, 1,
   (char*)"V.AllocateScalars()\nC++: virtual void AllocateScalars()\n\nAllocate the vtkScalars object associated with this object.\n"},
  {(char*)"CopyAndCastFrom", PyvtkImageData_CopyAndCastFrom, 1,
   (char*)"V.CopyAndCastFrom(vtkImageData, [int, int, int, int, int, int])\nC++: virtual void CopyAndCastFrom(vtkImageData *inData,\n    int extent[6])\nV.CopyAndCastFrom(vtkImageData, int, int, int, int, int, int)\nC++: virtual void CopyAndCastFrom(vtkImageData *inData, int x0,\n    int x1, int y0, int y1, int z0, int z1)\n\nThis method is passed a input and output region, and executes the\nfilter algorithm to fill the output from the input. It just\nexecutes a switch statement to call the correct function for the\nregions data types.\n"},
  {(char*)"Crop", PyvtkImageData_Crop, 1,
   (char*)"V.Crop()\nC++: virtual void Crop()\n\nReallocates and copies to set the Extent to the UpdateExtent.\nThis is used internally when the exact extent is requested, and\nthe source generated more than the update extent.\n"},
  {(char*)"GetActualMemorySize", PyvtkImageData_GetActualMemorySize, 1,
   (char*)"V.GetActualMemorySize() -> int\nC++: virtual unsigned long GetActualMemorySize()\n\nReturn the actual size of the data in kilobytes. This number is\nvalid only after the pipeline has updated. The memory size\nreturned is guaranteed to be greater than or equal to the memory\nrequired to represent the data (e.g., extra space in arrays, etc.\nare not included in the return value). THIS METHOD IS THREAD\nSAFE.\n"},
  {(char*)"SetSpacing", PyvtkImageData_SetSpacing, 1,
   (char*)"V.SetSpacing(float, float, float)\nC++: void SetSpacing(double, double, double)\nV.SetSpacing((float, float, float))\nC++: void SetSpacing(double a[3])\n\n"},
  {(char*)"GetSpacing", PyvtkImageData_GetSpacing, 1,
   (char*)"V.GetSpacing() -> (float, float, float)\nC++: double *GetSpacing()\n\n"},
  {(char*)"SetOrigin", PyvtkImageData_SetOrigin, 1,
   (char*)"V.SetOrigin(float, float, float)\nC++: void SetOrigin(double, double, double)\nV.SetOrigin((float, float, float))\nC++: void SetOrigin(double a[3])\n\n"},
  {(char*)"GetOrigin", PyvtkImageData_GetOrigin, 1,
   (char*)"V.GetOrigin() -> (float, float, float)\nC++: double *GetOrigin()\n\n"},
  {(char*)"SetScalarTypeToFloat", PyvtkImageData_SetScalarTypeToFloat, 1,
   (char*)"V.SetScalarTypeToFloat()\nC++: void SetScalarTypeToFloat()\n\nSet/Get the data scalar type (i.e VTK_DOUBLE). Note that these\nmethods are setting and getting the pipeline scalar type. i.e.\nthey are setting the type that the image data will be once it has\nexecuted. Until the REQUEST_DATA pass the actual scalars may be\nof some other type. This is for backwards compatibility\n"},
  {(char*)"SetScalarTypeToDouble", PyvtkImageData_SetScalarTypeToDouble, 1,
   (char*)"V.SetScalarTypeToDouble()\nC++: void SetScalarTypeToDouble()\n\nSet/Get the data scalar type (i.e VTK_DOUBLE). Note that these\nmethods are setting and getting the pipeline scalar type. i.e.\nthey are setting the type that the image data will be once it has\nexecuted. Until the REQUEST_DATA pass the actual scalars may be\nof some other type. This is for backwards compatibility\n"},
  {(char*)"SetScalarTypeToInt", PyvtkImageData_SetScalarTypeToInt, 1,
   (char*)"V.SetScalarTypeToInt()\nC++: void SetScalarTypeToInt()\n\nSet/Get the data scalar type (i.e VTK_DOUBLE). Note that these\nmethods are setting and getting the pipeline scalar type. i.e.\nthey are setting the type that the image data will be once it has\nexecuted. Until the REQUEST_DATA pass the actual scalars may be\nof some other type. This is for backwards compatibility\n"},
  {(char*)"SetScalarTypeToUnsignedInt", PyvtkImageData_SetScalarTypeToUnsignedInt, 1,
   (char*)"V.SetScalarTypeToUnsignedInt()\nC++: void SetScalarTypeToUnsignedInt()\n\nSet/Get the data scalar type (i.e VTK_DOUBLE). Note that these\nmethods are setting and getting the pipeline scalar type. i.e.\nthey are setting the type that the image data will be once it has\nexecuted. Until the REQUEST_DATA pass the actual scalars may be\nof some other type. This is for backwards compatibility\n"},
  {(char*)"SetScalarTypeToLong", PyvtkImageData_SetScalarTypeToLong, 1,
   (char*)"V.SetScalarTypeToLong()\nC++: void SetScalarTypeToLong()\n\nSet/Get the data scalar type (i.e VTK_DOUBLE). Note that these\nmethods are setting and getting the pipeline scalar type. i.e.\nthey are setting the type that the image data will be once it has\nexecuted. Until the REQUEST_DATA pass the actual scalars may be\nof some other type. This is for backwards compatibility\n"},
  {(char*)"SetScalarTypeToUnsignedLong", PyvtkImageData_SetScalarTypeToUnsignedLong, 1,
   (char*)"V.SetScalarTypeToUnsignedLong()\nC++: void SetScalarTypeToUnsignedLong()\n\nSet/Get the data scalar type (i.e VTK_DOUBLE). Note that these\nmethods are setting and getting the pipeline scalar type. i.e.\nthey are setting the type that the image data will be once it has\nexecuted. Until the REQUEST_DATA pass the actual scalars may be\nof some other type. This is for backwards compatibility\n"},
  {(char*)"SetScalarTypeToShort", PyvtkImageData_SetScalarTypeToShort, 1,
   (char*)"V.SetScalarTypeToShort()\nC++: void SetScalarTypeToShort()\n\nSet/Get the data scalar type (i.e VTK_DOUBLE). Note that these\nmethods are setting and getting the pipeline scalar type. i.e.\nthey are setting the type that the image data will be once it has\nexecuted. Until the REQUEST_DATA pass the actual scalars may be\nof some other type. This is for backwards compatibility\n"},
  {(char*)"SetScalarTypeToUnsignedShort", PyvtkImageData_SetScalarTypeToUnsignedShort, 1,
   (char*)"V.SetScalarTypeToUnsignedShort()\nC++: void SetScalarTypeToUnsignedShort()\n\nSet/Get the data scalar type (i.e VTK_DOUBLE). Note that these\nmethods are setting and getting the pipeline scalar type. i.e.\nthey are setting the type that the image data will be once it has\nexecuted. Until the REQUEST_DATA pass the actual scalars may be\nof some other type. This is for backwards compatibility\n"},
  {(char*)"SetScalarTypeToUnsignedChar", PyvtkImageData_SetScalarTypeToUnsignedChar, 1,
   (char*)"V.SetScalarTypeToUnsignedChar()\nC++: void SetScalarTypeToUnsignedChar()\n\nSet/Get the data scalar type (i.e VTK_DOUBLE). Note that these\nmethods are setting and getting the pipeline scalar type. i.e.\nthey are setting the type that the image data will be once it has\nexecuted. Until the REQUEST_DATA pass the actual scalars may be\nof some other type. This is for backwards compatibility\n"},
  {(char*)"SetScalarTypeToSignedChar", PyvtkImageData_SetScalarTypeToSignedChar, 1,
   (char*)"V.SetScalarTypeToSignedChar()\nC++: void SetScalarTypeToSignedChar()\n\nSet/Get the data scalar type (i.e VTK_DOUBLE). Note that these\nmethods are setting and getting the pipeline scalar type. i.e.\nthey are setting the type that the image data will be once it has\nexecuted. Until the REQUEST_DATA pass the actual scalars may be\nof some other type. This is for backwards compatibility\n"},
  {(char*)"SetScalarTypeToChar", PyvtkImageData_SetScalarTypeToChar, 1,
   (char*)"V.SetScalarTypeToChar()\nC++: void SetScalarTypeToChar()\n\nSet/Get the data scalar type (i.e VTK_DOUBLE). Note that these\nmethods are setting and getting the pipeline scalar type. i.e.\nthey are setting the type that the image data will be once it has\nexecuted. Until the REQUEST_DATA pass the actual scalars may be\nof some other type. This is for backwards compatibility\n"},
  {(char*)"SetScalarType", PyvtkImageData_SetScalarType, 1,
   (char*)"V.SetScalarType(int)\nC++: void SetScalarType(int)\n\nSet/Get the data scalar type (i.e VTK_DOUBLE). Note that these\nmethods are setting and getting the pipeline scalar type. i.e.\nthey are setting the type that the image data will be once it has\nexecuted. Until the REQUEST_DATA pass the actual scalars may be\nof some other type. This is for backwards compatibility\n"},
  {(char*)"GetScalarType", PyvtkImageData_GetScalarType, 1,
   (char*)"V.GetScalarType() -> int\nC++: int GetScalarType()\n\nSet/Get the data scalar type (i.e VTK_DOUBLE). Note that these\nmethods are setting and getting the pipeline scalar type. i.e.\nthey are setting the type that the image data will be once it has\nexecuted. Until the REQUEST_DATA pass the actual scalars may be\nof some other type. This is for backwards compatibility\n"},
  {(char*)"GetScalarTypeAsString", PyvtkImageData_GetScalarTypeAsString, 1,
   (char*)"V.GetScalarTypeAsString() -> string\nC++: const char *GetScalarTypeAsString()\n\nSet/Get the data scalar type (i.e VTK_DOUBLE). Note that these\nmethods are setting and getting the pipeline scalar type. i.e.\nthey are setting the type that the image data will be once it has\nexecuted. Until the REQUEST_DATA pass the actual scalars may be\nof some other type. This is for backwards compatibility\n"},
  {(char*)"SetNumberOfScalarComponents", PyvtkImageData_SetNumberOfScalarComponents, 1,
   (char*)"V.SetNumberOfScalarComponents(int)\nC++: void SetNumberOfScalarComponents(int n)\n\nSet/Get the number of scalar components for points. As with the\nSetScalarType method this is setting pipeline info.\n"},
  {(char*)"GetNumberOfScalarComponents", PyvtkImageData_GetNumberOfScalarComponents, 1,
   (char*)"V.GetNumberOfScalarComponents() -> int\nC++: int GetNumberOfScalarComponents()\n\nSet/Get the number of scalar components for points. As with the\nSetScalarType method this is setting pipeline info.\n"},
  {(char*)"CopyTypeSpecificInformation", PyvtkImageData_CopyTypeSpecificInformation, 1,
   (char*)"V.CopyTypeSpecificInformation(vtkDataObject)\nC++: virtual void CopyTypeSpecificInformation(\n    vtkDataObject *image)\n\n"},
  {(char*)"CopyInformationToPipeline", PyvtkImageData_CopyInformationToPipeline, 1,
   (char*)"V.CopyInformationToPipeline(vtkInformation, vtkInformation,\n    vtkInformation, int)\nC++: virtual void CopyInformationToPipeline(\n    vtkInformation *request, vtkInformation *input,\n    vtkInformation *output, int forceCopy)\n\nOverride these to handle origin, spacing, scalar type, and scalar\nnumber of components.  See vtkDataObject for details.\n"},
  {(char*)"CopyInformationFromPipeline", PyvtkImageData_CopyInformationFromPipeline, 1,
   (char*)"V.CopyInformationFromPipeline(vtkInformation)\nC++: virtual void CopyInformationFromPipeline(\n    vtkInformation *request)\n\nOverride these to handle origin, spacing, scalar type, and scalar\nnumber of components.  See vtkDataObject for details.\n"},
  {(char*)"PrepareForNewData", PyvtkImageData_PrepareForNewData, 1,
   (char*)"V.PrepareForNewData()\nC++: virtual void PrepareForNewData()\n\nmake the output data ready for new data to be inserted. For most\nobjects we just call Initialize. But for image data we leave the\nold data in case the memory can be reused.\n"},
  {(char*)"ShallowCopy", PyvtkImageData_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkDataObject)\nC++: virtual void ShallowCopy(vtkDataObject *src)\n\nShallow and Deep copy.\n"},
  {(char*)"DeepCopy", PyvtkImageData_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkDataObject)\nC++: virtual void DeepCopy(vtkDataObject *src)\n\nShallow and Deep copy.\n"},
  {(char*)"GetArrayPointerForExtent", PyvtkImageData_GetArrayPointerForExtent, 1,
   (char*)"V.GetArrayPointerForExtent(vtkDataArray, [int, int, int, int, int,\n     int]) ->\nC++: void *GetArrayPointerForExtent(vtkDataArray *array,\n    int extent[6])\n\nThese are convenience methods for getting a pointer from any\nfiled array.  It is a start at expanding image filters to process\nany array (not just scalars).\n"},
  {(char*)"GetArrayPointer", PyvtkImageData_GetArrayPointer, 1,
   (char*)"V.GetArrayPointer(vtkDataArray, [int, int, int]) ->\nC++: void *GetArrayPointer(vtkDataArray *array,\n    int coordinates[3])\n\nThese are convenience methods for getting a pointer from any\nfiled array.  It is a start at expanding image filters to process\nany array (not just scalars).\n"},
  {(char*)"GetArrayIncrements", PyvtkImageData_GetArrayIncrements, 1,
   (char*)"V.GetArrayIncrements(vtkDataArray, [int, int, int])\nC++: void GetArrayIncrements(vtkDataArray *array,\n    vtkIdType increments[3])\n\nSince various arrays have different number of components, the\nwill have different increments.\n"},
  {(char*)"GetExtentType", PyvtkImageData_GetExtentType, 1,
   (char*)"V.GetExtentType() -> int\nC++: virtual int GetExtentType()\n\nThe extent type is a 3D extent\n"},
  {(char*)"GetData", PyvtkImageData_GetData, 1,
   (char*)"V.GetData(vtkInformation) -> vtkImageData\nC++: static vtkImageData *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkImageData\nC++: static vtkImageData *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageData_StaticNew()
{
  return vtkImageData::New();
}

PyObject *PyVTKClass_vtkImageDataNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageData_StaticNew,
    PyvtkImageData_Methods,
    "vtkImageData", modulename,
    NULL, NULL,
    PyvtkImageData_Doc(),
    PyVTKClass_vtkDataSetNew(modulename));
  return cls;
}

const char **PyvtkImageData_Doc()
{
  static const char *docstring[] = {
    "vtkImageData - topologically and geometrically regular array of data\n\n",
    "Superclass: vtkDataSet\n\n",
    "vtkImageData is a data object that is a concrete implementation of\nvtkDataSet. vtkImageData represents a geometric structure that is a\ntopological and geometrical regular array of points. Examples include\nvolumes (voxel data) and pixmaps.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageData(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageDataNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageData", o) != 0)
    {
    Py_DECREF(o);
    }

}

