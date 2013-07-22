// python wrapper for vtkCell
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
#include "vtkCell.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCell(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCell(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCellNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCellNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkCell_Doc();


static PyObject *
PyvtkCell_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell *op = static_cast<vtkCell *>(vp);

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
      tempr = op->vtkCell::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCell_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell *op = static_cast<vtkCell *>(vp);

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
      tempr = op->vtkCell::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCell_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell *op = static_cast<vtkCell *>(vp);

  vtkCell *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCell::NewInstance();
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
PyvtkCell_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell *op = static_cast<vtkCell *>(vp);

  vtkCell *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkCell::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCell_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell *op = static_cast<vtkCell *>(vp);

  vtkCell *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkCell::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCell_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell *op = static_cast<vtkCell *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetCellType();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCell_GetCellDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell *op = static_cast<vtkCell *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetCellDimension();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCell_IsLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell *op = static_cast<vtkCell *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsLinear();
      }
    else
      {
      tempr = op->vtkCell::IsLinear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCell_RequiresInitialization(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequiresInitialization");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell *op = static_cast<vtkCell *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->RequiresInitialization();
      }
    else
      {
      tempr = op->vtkCell::RequiresInitialization();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCell_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell *op = static_cast<vtkCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkCell::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCell_IsExplicitCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsExplicitCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell *op = static_cast<vtkCell *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsExplicitCell();
      }
    else
      {
      tempr = op->vtkCell::IsExplicitCell();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCell_RequiresExplicitFaceRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequiresExplicitFaceRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell *op = static_cast<vtkCell *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->RequiresExplicitFaceRepresentation();
      }
    else
      {
      tempr = op->vtkCell::RequiresExplicitFaceRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCell_GetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell *op = static_cast<vtkCell *>(vp);

  vtkPoints *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPoints();
      }
    else
      {
      tempr = op->vtkCell::GetPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCell_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell *op = static_cast<vtkCell *>(vp);

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
      tempr = op->vtkCell::GetNumberOfPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCell_GetNumberOfEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell *op = static_cast<vtkCell *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetNumberOfEdges();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCell_GetNumberOfFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell *op = static_cast<vtkCell *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetNumberOfFaces();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCell_GetPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell *op = static_cast<vtkCell *>(vp);

  vtkIdList *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointIds();
      }
    else
      {
      tempr = op->vtkCell::GetPointIds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCell_GetPointId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell *op = static_cast<vtkCell *>(vp);

  int temp0;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointId(temp0);
      }
    else
      {
      tempr = op->vtkCell::GetPointId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCell_GetEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell *op = static_cast<vtkCell *>(vp);

  int temp0;
  vtkCell *tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = op->GetEdge(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCell_GetFace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell *op = static_cast<vtkCell *>(vp);

  int temp0;
  vtkCell *tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = op->GetFace(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCell_CellBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell *op = static_cast<vtkCell *>(vp);

  int temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  vtkIdList *temp2 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkIdList"))
    {
    ap.SaveArray(temp1, save1, size1);

    tempr = op->CellBoundary(temp0, temp1, temp2);

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
PyvtkCell_Contour(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Contour");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell *op = static_cast<vtkCell *>(vp);

  double temp0;
  vtkDataArray *temp1 = NULL;
  vtkIncrementalPointLocator *temp2 = NULL;
  vtkCellArray *temp3 = NULL;
  vtkCellArray *temp4 = NULL;
  vtkCellArray *temp5 = NULL;
  vtkPointData *temp6 = NULL;
  vtkPointData *temp7 = NULL;
  vtkCellData *temp8 = NULL;
  vtkIdType temp9;
  vtkCellData *temp10 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(11) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetVTKObject(temp2, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkCellArray") &&
      ap.GetVTKObject(temp5, "vtkCellArray") &&
      ap.GetVTKObject(temp6, "vtkPointData") &&
      ap.GetVTKObject(temp7, "vtkPointData") &&
      ap.GetVTKObject(temp8, "vtkCellData") &&
      ap.GetValue(temp9) &&
      ap.GetVTKObject(temp10, "vtkCellData"))
    {
    op->Contour(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCell_Clip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell *op = static_cast<vtkCell *>(vp);

  double temp0;
  vtkDataArray *temp1 = NULL;
  vtkIncrementalPointLocator *temp2 = NULL;
  vtkCellArray *temp3 = NULL;
  vtkPointData *temp4 = NULL;
  vtkPointData *temp5 = NULL;
  vtkCellData *temp6 = NULL;
  vtkIdType temp7;
  vtkCellData *temp8 = NULL;
  int temp9;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(10) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetVTKObject(temp2, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkPointData") &&
      ap.GetVTKObject(temp5, "vtkPointData") &&
      ap.GetVTKObject(temp6, "vtkCellData") &&
      ap.GetValue(temp7) &&
      ap.GetVTKObject(temp8, "vtkCellData") &&
      ap.GetValue(temp9))
    {
    op->Clip(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCell_IntersectWithLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell *op = static_cast<vtkCell *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2;
  double temp3;
  double temp4[3];
  double save4[3];
  const int size4 = 3;
  double temp5[3];
  double save5[3];
  const int size5 = 3;
  int temp6;
  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(7) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetValue(temp6))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp4, save4, size4);
    ap.SaveArray(temp5, save5, size5);

    tempr = op->IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6);

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

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(3, temp3);
      }
    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (ap.ArrayHasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(5, temp5, size5);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(6, temp6);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCell_Triangulate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Triangulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell *op = static_cast<vtkCell *>(vp);

  int temp0;
  vtkIdList *temp1 = NULL;
  vtkPoints *temp2 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkPoints"))
    {
    tempr = op->Triangulate(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCell_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell *op = static_cast<vtkCell *>(vp);

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
      op->vtkCell::GetBounds(temp0);
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
PyvtkCell_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell *op = static_cast<vtkCell *>(vp);

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
      tempr = op->vtkCell::GetBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkCell_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkCell_GetBounds_s1(self, args);
    case 0:
      return PyvtkCell_GetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return NULL;
}



static PyObject *
PyvtkCell_GetLength2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLength2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell *op = static_cast<vtkCell *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLength2();
      }
    else
      {
      tempr = op->vtkCell::GetLength2();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCell_GetParametricCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParametricCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell *op = static_cast<vtkCell *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      tempr = op->GetParametricCenter(temp0);
      }
    else
      {
      tempr = op->vtkCell::GetParametricCenter(temp0);
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
PyvtkCell_GetParametricDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParametricDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell *op = static_cast<vtkCell *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      tempr = op->GetParametricDistance(temp0);
      }
    else
      {
      tempr = op->vtkCell::GetParametricDistance(temp0);
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
PyvtkCell_IsPrimaryCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPrimaryCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell *op = static_cast<vtkCell *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsPrimaryCell();
      }
    else
      {
      tempr = op->vtkCell::IsPrimaryCell();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCell_InterpolateFunctions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateFunctions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell *op = static_cast<vtkCell *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->InterpolateFunctions(temp0, temp1);
      }
    else
      {
      op->vtkCell::InterpolateFunctions(temp0, temp1);
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

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCell_InterpolateDerivs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateDerivs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell *op = static_cast<vtkCell *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->InterpolateDerivs(temp0, temp1);
      }
    else
      {
      op->vtkCell::InterpolateDerivs(temp0, temp1);
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

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCell_Methods[] = {
  {(char*)"GetClassName", PyvtkCell_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCell_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCell_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCell\nC++: vtkCell *NewInstance()\n\n"},
  {(char*)"ShallowCopy", PyvtkCell_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkCell)\nC++: virtual void ShallowCopy(vtkCell *c)\n\nCopy this cell by reference counting the internal data\nstructures. This is safe if you want a \"read-only\" copy. If you\nmodify the cell you might wish to use DeepCopy().\n"},
  {(char*)"DeepCopy", PyvtkCell_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkCell)\nC++: virtual void DeepCopy(vtkCell *c)\n\nCopy this cell by completely copying internal data structures.\nThis is slower but safer than ShallowCopy().\n"},
  {(char*)"GetCellType", PyvtkCell_GetCellType, 1,
   (char*)"V.GetCellType() -> int\nC++: virtual int GetCellType()\n\nReturn the type of cell.\n"},
  {(char*)"GetCellDimension", PyvtkCell_GetCellDimension, 1,
   (char*)"V.GetCellDimension() -> int\nC++: virtual int GetCellDimension()\n\nReturn the topological dimensional of the cell (0,1,2, or 3).\n"},
  {(char*)"IsLinear", PyvtkCell_IsLinear, 1,
   (char*)"V.IsLinear() -> int\nC++: virtual int IsLinear()\n\nNon-linear cells require special treatment beyond the usual cell\ntype and connectivity list information.  Most cells in VTK are\nimplicit cells.\n"},
  {(char*)"RequiresInitialization", PyvtkCell_RequiresInitialization, 1,
   (char*)"V.RequiresInitialization() -> int\nC++: virtual int RequiresInitialization()\n\nSome cells require initialization prior to access. For example,\nthey may have to triangulate themselves or set up internal data\nstructures.\n"},
  {(char*)"Initialize", PyvtkCell_Initialize, 1,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nSome cells require initialization prior to access. For example,\nthey may have to triangulate themselves or set up internal data\nstructures.\n"},
  {(char*)"IsExplicitCell", PyvtkCell_IsExplicitCell, 1,
   (char*)"V.IsExplicitCell() -> int\nC++: virtual int IsExplicitCell()\n\nExplicit cells require additional representational information\nbeyond the usual cell type and connectivity list information.\nMost cells in VTK are implicit cells.\n"},
  {(char*)"RequiresExplicitFaceRepresentation", PyvtkCell_RequiresExplicitFaceRepresentation, 1,
   (char*)"V.RequiresExplicitFaceRepresentation() -> int\nC++: virtual int RequiresExplicitFaceRepresentation()\n\nDetermine whether the cell requires explicit face representation,\nand methods for setting and getting the faces (see vtkPolyhedron\nfor example usage of these methods).\n"},
  {(char*)"GetPoints", PyvtkCell_GetPoints, 1,
   (char*)"V.GetPoints() -> vtkPoints\nC++: vtkPoints *GetPoints()\n\nGet the point coordinates for the cell.\n"},
  {(char*)"GetNumberOfPoints", PyvtkCell_GetNumberOfPoints, 1,
   (char*)"V.GetNumberOfPoints() -> int\nC++: vtkIdType GetNumberOfPoints()\n\nReturn the number of points in the cell.\n"},
  {(char*)"GetNumberOfEdges", PyvtkCell_GetNumberOfEdges, 1,
   (char*)"V.GetNumberOfEdges() -> int\nC++: virtual int GetNumberOfEdges()\n\nReturn the number of edges in the cell.\n"},
  {(char*)"GetNumberOfFaces", PyvtkCell_GetNumberOfFaces, 1,
   (char*)"V.GetNumberOfFaces() -> int\nC++: virtual int GetNumberOfFaces()\n\nReturn the number of faces in the cell.\n"},
  {(char*)"GetPointIds", PyvtkCell_GetPointIds, 1,
   (char*)"V.GetPointIds() -> vtkIdList\nC++: vtkIdList *GetPointIds()\n\nReturn the list of point ids defining the cell.\n"},
  {(char*)"GetPointId", PyvtkCell_GetPointId, 1,
   (char*)"V.GetPointId(int) -> int\nC++: vtkIdType GetPointId(int ptId)\n\nFor cell point i, return the actual point id.\n"},
  {(char*)"GetEdge", PyvtkCell_GetEdge, 1,
   (char*)"V.GetEdge(int) -> vtkCell\nC++: virtual vtkCell *GetEdge(int edgeId)\n\nReturn the edge cell from the edgeId of the cell.\n"},
  {(char*)"GetFace", PyvtkCell_GetFace, 1,
   (char*)"V.GetFace(int) -> vtkCell\nC++: virtual vtkCell *GetFace(int faceId)\n\nReturn the face cell from the faceId of the cell.\n"},
  {(char*)"CellBoundary", PyvtkCell_CellBoundary, 1,
   (char*)"V.CellBoundary(int, [float, float, float], vtkIdList) -> int\nC++: virtual int CellBoundary(int subId, double pcoords[3],\n    vtkIdList *pts)\n\nGiven parametric coordinates of a point, return the closest cell\nboundary, and whether the point is inside or outside of the cell.\nThe cell boundary is defined by a list of points (pts) that\nspecify a face (3D cell), edge (2D cell), or vertex (1D cell). If\nthe return value of the method is != 0, then the point is inside\nthe cell.\n"},
  {(char*)"Contour", PyvtkCell_Contour, 1,
   (char*)"V.Contour(float, vtkDataArray, vtkIncrementalPointLocator,\n    vtkCellArray, vtkCellArray, vtkCellArray, vtkPointData,\n    vtkPointData, vtkCellData, int, vtkCellData)\nC++: virtual void Contour(double value, vtkDataArray *cellScalars,\n     vtkIncrementalPointLocator *locator, vtkCellArray *verts,\n    vtkCellArray *lines, vtkCellArray *polys, vtkPointData *inPd,\n    vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId,\n    vtkCellData *outCd)\n\nGenerate contouring primitives. The scalar list cellScalars are\nscalar values at each cell point. The point locator is\nessentially a points list that merges points as they are inserted\n(i.e., prevents duplicates). Contouring primitives can be\nvertices, lines, or polygons. It is possible to interpolate point\ndata along the edge by providing input and output point data - if\noutPd is NULL, then no interpolation is performed. Also, if the\noutput cell data is non-NULL, the cell data from the contoured\ncell is passed to the generated contouring primitives. (Note: the\nCopyAllocate() method must be invoked on both the output cell and\npoint data. The cellId refers to the cell from which the cell\ndata is copied.)\n"},
  {(char*)"Clip", PyvtkCell_Clip, 1,
   (char*)"V.Clip(float, vtkDataArray, vtkIncrementalPointLocator,\n    vtkCellArray, vtkPointData, vtkPointData, vtkCellData, int,\n    vtkCellData, int)\nC++: virtual void Clip(double value, vtkDataArray *cellScalars,\n    vtkIncrementalPointLocator *locator,\n    vtkCellArray *connectivity, vtkPointData *inPd,\n    vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId,\n    vtkCellData *outCd, int insideOut)\n\nCut (or clip) the cell based on the input cellScalars and the\nspecified value. The output of the clip operation will be one or\nmore cells of the same topological dimension as the original\ncell. The flag insideOut controls what part of the cell is\nconsidered inside - normally cell points whose scalar value is\ngreater than \"value\" are considered inside. If insideOut is on,\nthis is reversed. Also, if the output cell data is non-NULL, the\ncell data from the clipped cell is passed to the generated\ncontouring primitives. (Note: the CopyAllocate() method must be\ninvoked on both the output cell and point data. The cellId refers\nto the cell from which the cell data is copied.)\n"},
  {(char*)"IntersectWithLine", PyvtkCell_IntersectWithLine, 1,
   (char*)"V.IntersectWithLine([float, float, float], [float, float, float],\n    float, float, [float, float, float], [float, float, float],\n    int) -> int\nC++: virtual int IntersectWithLine(double p1[3], double p2[3],\n    double tol, double &t, double x[3], double pcoords[3],\n    int &subId)\n\nIntersect with a ray. Return parametric coordinates (both line\nand cell) and global intersection coordinates, given ray\ndefinition and tolerance. The method returns non-zero value if\nintersection occurs.\n"},
  {(char*)"Triangulate", PyvtkCell_Triangulate, 1,
   (char*)"V.Triangulate(int, vtkIdList, vtkPoints) -> int\nC++: virtual int Triangulate(int index, vtkIdList *ptIds,\n    vtkPoints *pts)\n\nGenerate simplices of proper dimension. If cell is 3D,\ntetrahedron are generated; if 2D triangles; if 1D lines; if 0D\npoints. The form of the output is a sequence of points, each n+1\npoints (where n is topological cell dimension) defining a\nsimplex. The index is a parameter that controls which\ntriangulation to use (if more than one is possible). If numerical\ndegeneracy encountered, 0 is returned, otherwise 1 is returned.\nThis method does not insert new points: all the points that\ndefine the simplices are the points that define the cell.\n"},
  {(char*)"GetBounds", PyvtkCell_GetBounds, 1,
   (char*)"V.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6])\nV.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds()\n\nCompute cell bounding box (xmin,xmax,ymin,ymax,zmin,zmax). Copy\nresult into user provided array.\n"},
  {(char*)"GetLength2", PyvtkCell_GetLength2, 1,
   (char*)"V.GetLength2() -> float\nC++: double GetLength2()\n\nCompute Length squared of cell (i.e., bounding box diagonal\nsquared).\n"},
  {(char*)"GetParametricCenter", PyvtkCell_GetParametricCenter, 1,
   (char*)"V.GetParametricCenter([float, float, float]) -> int\nC++: virtual int GetParametricCenter(double pcoords[3])\n\nReturn center of the cell in parametric coordinates.  Note that\nthe parametric center is not always located at (0.5,0.5,0.5). The\nreturn value is the subId that the center is in (if a composite\ncell). If you want the center in x-y-z space, invoke the\nEvaluateLocation() method.\n"},
  {(char*)"GetParametricDistance", PyvtkCell_GetParametricDistance, 1,
   (char*)"V.GetParametricDistance([float, float, float]) -> float\nC++: virtual double GetParametricDistance(double pcoords[3])\n\nReturn the distance of the parametric coordinate provided to the\ncell. If inside the cell, a distance of zero is returned. This is\nused during picking to get the correct cell picked. (The\ntolerance will occasionally allow cells to be picked who are not\nreally intersected \"inside\" the cell.)\n"},
  {(char*)"IsPrimaryCell", PyvtkCell_IsPrimaryCell, 1,
   (char*)"V.IsPrimaryCell() -> int\nC++: virtual int IsPrimaryCell()\n\nReturn whether this cell type has a fixed topology or whether the\ntopology varies depending on the data (e.g., vtkConvexPointSet).\nThis compares to composite cells that are typically composed of\nprimary cells (e.g., a triangle strip composite cell is made up\nof triangle primary cells).\n"},
  {(char*)"InterpolateFunctions", PyvtkCell_InterpolateFunctions, 1,
   (char*)"V.InterpolateFunctions([float, float, float], [float, float,\n    float])\nC++: virtual void InterpolateFunctions(double pcoords[3],\n    double weights[3])\n\nCompute the interpolation functions/derivatives (aka shape\nfunctions/derivatives) No-ops at this level. Typically overridden\nin subclasses.\n"},
  {(char*)"InterpolateDerivs", PyvtkCell_InterpolateDerivs, 1,
   (char*)"V.InterpolateDerivs([float, float, float], [float, float, float])\nC++: virtual void InterpolateDerivs(double pcoords[3],\n    double derivs[3])\n\nCompute the interpolation functions/derivatives (aka shape\nfunctions/derivatives) No-ops at this level. Typically overridden\nin subclasses.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkCellNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkCell_Methods,
    "vtkCell", modulename,
    NULL, NULL,
    PyvtkCell_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkCell_Doc()
{
  static const char *docstring[] = {
    "vtkCell - abstract class to specify cell behavior\n\n",
    "Superclass: vtkObject\n\n",
    "vtkCell is an abstract class that specifies the interfaces for data\ncells. Data cells are simple topological elements like points, lines,\npolygons, and tetrahedra of which visualization datasets are\ncomposed. In some cases visualization datasets may explicitly\nrepresent cells (e.g., vtkPolyData, vtkUnstructuredGrid), and in some\ncases, the datasets are implicitly composed of cells (e.g.,\nvtkStruct",
    "uredPoints).\n\nCaveats:\n\nThe #define VTK_CELL_SIZE is a parameter used to construct cells and\nprovide a general guideline for controlling object execution. This\nparameter is not a hard boundary: you can create cells with more\npoints.\n\nSee Also:\n\nvtkHexahedron vtkLine vtkPixel vtkPolyLine vtkPolyVertex vtkPolygon\nvtkQuad vtkTetra vtkTriangle vtkTriangleStrip vtkVertex vtkVoxel\nvtkWedge vtkPyramid\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCell(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCellNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCell", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(512);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_CELL_SIZE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyFloat_FromDouble(1.e-05);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_TOL", o) != 0)
    {
    Py_DECREF(o);
    }

}

