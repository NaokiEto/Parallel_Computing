// python wrapper for vtkGenericCell
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
#include "vtkGenericCell.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGenericCell(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGenericCell(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGenericCellNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGenericCellNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkCellNew
extern "C" { PyObject *PyVTKClass_vtkCellNew(const char *); }
#define DECLARED_PyVTKClass_vtkCellNew
#endif

static const char **PyvtkGenericCell_Doc();


static PyObject *
PyvtkGenericCell_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

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
      tempr = op->vtkGenericCell::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

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
      tempr = op->vtkGenericCell::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  vtkGenericCell *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGenericCell::NewInstance();
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
PyvtkGenericCell_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGenericCell *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGenericCell::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

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
      op->vtkGenericCell::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

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
      op->vtkGenericCell::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellType();
      }
    else
      {
      tempr = op->vtkGenericCell::GetCellType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_GetCellDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellDimension();
      }
    else
      {
      tempr = op->vtkGenericCell::GetCellDimension();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_IsLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

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
      tempr = op->vtkGenericCell::IsLinear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_RequiresInitialization(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequiresInitialization");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

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
      tempr = op->vtkGenericCell::RequiresInitialization();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkGenericCell::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_RequiresExplicitFaceRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequiresExplicitFaceRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

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
      tempr = op->vtkGenericCell::RequiresExplicitFaceRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_GetNumberOfEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfEdges();
      }
    else
      {
      tempr = op->vtkGenericCell::GetNumberOfEdges();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_GetNumberOfFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfFaces();
      }
    else
      {
      tempr = op->vtkGenericCell::GetNumberOfFaces();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_GetEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  int temp0;
  vtkCell *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdge(temp0);
      }
    else
      {
      tempr = op->vtkGenericCell::GetEdge(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_GetFace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  int temp0;
  vtkCell *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFace(temp0);
      }
    else
      {
      tempr = op->vtkGenericCell::GetFace(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_CellBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  int temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  vtkIdList *temp2 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkIdList"))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      tempr = op->CellBoundary(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkGenericCell::CellBoundary(temp0, temp1, temp2);
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
PyvtkGenericCell_Contour(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Contour");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

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

  if (op && ap.CheckArgCount(11) &&
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
    if (ap.IsBound())
      {
      op->Contour(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10);
      }
    else
      {
      op->vtkGenericCell::Contour(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_Clip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

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

  if (op && ap.CheckArgCount(10) &&
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
    if (ap.IsBound())
      {
      op->Clip(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
      }
    else
      {
      op->vtkGenericCell::Clip(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_IntersectWithLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

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

  if (op && ap.CheckArgCount(7) &&
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

    if (ap.IsBound())
      {
      tempr = op->IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
      }
    else
      {
      tempr = op->vtkGenericCell::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
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
PyvtkGenericCell_Triangulate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Triangulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  int temp0;
  vtkIdList *temp1 = NULL;
  vtkPoints *temp2 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkPoints"))
    {
    if (ap.IsBound())
      {
      tempr = op->Triangulate(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkGenericCell::Triangulate(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_GetParametricCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParametricCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

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
      tempr = op->vtkGenericCell::GetParametricCenter(temp0);
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
PyvtkGenericCell_IsPrimaryCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPrimaryCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

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
      tempr = op->vtkGenericCell::IsPrimaryCell();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCellType(temp0);
      }
    else
      {
      op->vtkGenericCell::SetCellType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToEmptyCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToEmptyCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCellTypeToEmptyCell();
      }
    else
      {
      op->vtkGenericCell::SetCellTypeToEmptyCell();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCellTypeToVertex();
      }
    else
      {
      op->vtkGenericCell::SetCellTypeToVertex();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToPolyVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToPolyVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCellTypeToPolyVertex();
      }
    else
      {
      op->vtkGenericCell::SetCellTypeToPolyVertex();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCellTypeToLine();
      }
    else
      {
      op->vtkGenericCell::SetCellTypeToLine();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToPolyLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToPolyLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCellTypeToPolyLine();
      }
    else
      {
      op->vtkGenericCell::SetCellTypeToPolyLine();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToTriangle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToTriangle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCellTypeToTriangle();
      }
    else
      {
      op->vtkGenericCell::SetCellTypeToTriangle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToTriangleStrip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToTriangleStrip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCellTypeToTriangleStrip();
      }
    else
      {
      op->vtkGenericCell::SetCellTypeToTriangleStrip();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToPolygon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToPolygon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCellTypeToPolygon();
      }
    else
      {
      op->vtkGenericCell::SetCellTypeToPolygon();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToPixel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToPixel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCellTypeToPixel();
      }
    else
      {
      op->vtkGenericCell::SetCellTypeToPixel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToQuad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToQuad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCellTypeToQuad();
      }
    else
      {
      op->vtkGenericCell::SetCellTypeToQuad();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToTetra(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToTetra");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCellTypeToTetra();
      }
    else
      {
      op->vtkGenericCell::SetCellTypeToTetra();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToVoxel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToVoxel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCellTypeToVoxel();
      }
    else
      {
      op->vtkGenericCell::SetCellTypeToVoxel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToHexahedron(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToHexahedron");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCellTypeToHexahedron();
      }
    else
      {
      op->vtkGenericCell::SetCellTypeToHexahedron();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToWedge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToWedge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCellTypeToWedge();
      }
    else
      {
      op->vtkGenericCell::SetCellTypeToWedge();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToPyramid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToPyramid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCellTypeToPyramid();
      }
    else
      {
      op->vtkGenericCell::SetCellTypeToPyramid();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToPentagonalPrism(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToPentagonalPrism");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCellTypeToPentagonalPrism();
      }
    else
      {
      op->vtkGenericCell::SetCellTypeToPentagonalPrism();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToHexagonalPrism(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToHexagonalPrism");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCellTypeToHexagonalPrism();
      }
    else
      {
      op->vtkGenericCell::SetCellTypeToHexagonalPrism();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToPolyhedron(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToPolyhedron");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCellTypeToPolyhedron();
      }
    else
      {
      op->vtkGenericCell::SetCellTypeToPolyhedron();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToConvexPointSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToConvexPointSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCellTypeToConvexPointSet();
      }
    else
      {
      op->vtkGenericCell::SetCellTypeToConvexPointSet();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToQuadraticEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToQuadraticEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCellTypeToQuadraticEdge();
      }
    else
      {
      op->vtkGenericCell::SetCellTypeToQuadraticEdge();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToCubicLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToCubicLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCellTypeToCubicLine();
      }
    else
      {
      op->vtkGenericCell::SetCellTypeToCubicLine();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToQuadraticTriangle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToQuadraticTriangle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCellTypeToQuadraticTriangle();
      }
    else
      {
      op->vtkGenericCell::SetCellTypeToQuadraticTriangle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToBiQuadraticTriangle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToBiQuadraticTriangle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCellTypeToBiQuadraticTriangle();
      }
    else
      {
      op->vtkGenericCell::SetCellTypeToBiQuadraticTriangle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToQuadraticQuad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToQuadraticQuad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCellTypeToQuadraticQuad();
      }
    else
      {
      op->vtkGenericCell::SetCellTypeToQuadraticQuad();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToQuadraticTetra(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToQuadraticTetra");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCellTypeToQuadraticTetra();
      }
    else
      {
      op->vtkGenericCell::SetCellTypeToQuadraticTetra();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToQuadraticHexahedron(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToQuadraticHexahedron");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCellTypeToQuadraticHexahedron();
      }
    else
      {
      op->vtkGenericCell::SetCellTypeToQuadraticHexahedron();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToQuadraticWedge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToQuadraticWedge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCellTypeToQuadraticWedge();
      }
    else
      {
      op->vtkGenericCell::SetCellTypeToQuadraticWedge();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToQuadraticPyramid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToQuadraticPyramid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCellTypeToQuadraticPyramid();
      }
    else
      {
      op->vtkGenericCell::SetCellTypeToQuadraticPyramid();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToQuadraticLinearQuad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToQuadraticLinearQuad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCellTypeToQuadraticLinearQuad();
      }
    else
      {
      op->vtkGenericCell::SetCellTypeToQuadraticLinearQuad();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToBiQuadraticQuad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToBiQuadraticQuad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCellTypeToBiQuadraticQuad();
      }
    else
      {
      op->vtkGenericCell::SetCellTypeToBiQuadraticQuad();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToQuadraticLinearWedge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToQuadraticLinearWedge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCellTypeToQuadraticLinearWedge();
      }
    else
      {
      op->vtkGenericCell::SetCellTypeToQuadraticLinearWedge();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToBiQuadraticQuadraticWedge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToBiQuadraticQuadraticWedge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCellTypeToBiQuadraticQuadraticWedge();
      }
    else
      {
      op->vtkGenericCell::SetCellTypeToBiQuadraticQuadraticWedge();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToTriQuadraticHexahedron(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToTriQuadraticHexahedron");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCellTypeToTriQuadraticHexahedron();
      }
    else
      {
      op->vtkGenericCell::SetCellTypeToTriQuadraticHexahedron();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToBiQuadraticQuadraticHexahedron(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToBiQuadraticQuadraticHexahedron");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCellTypeToBiQuadraticQuadraticHexahedron();
      }
    else
      {
      op->vtkGenericCell::SetCellTypeToBiQuadraticQuadraticHexahedron();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCell_InstantiateCell(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "InstantiateCell");

  int temp0;
  vtkCell *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkGenericCell::InstantiateCell(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGenericCell_Methods[] = {
  {(char*)"GetClassName", PyvtkGenericCell_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGenericCell_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGenericCell_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGenericCell\nC++: vtkGenericCell *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGenericCell_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGenericCell\nC++: vtkGenericCell *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ShallowCopy", PyvtkGenericCell_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkCell)\nC++: void ShallowCopy(vtkCell *c)\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"DeepCopy", PyvtkGenericCell_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkCell)\nC++: void DeepCopy(vtkCell *c)\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"GetCellType", PyvtkGenericCell_GetCellType, 1,
   (char*)"V.GetCellType() -> int\nC++: int GetCellType()\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"GetCellDimension", PyvtkGenericCell_GetCellDimension, 1,
   (char*)"V.GetCellDimension() -> int\nC++: int GetCellDimension()\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"IsLinear", PyvtkGenericCell_IsLinear, 1,
   (char*)"V.IsLinear() -> int\nC++: int IsLinear()\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"RequiresInitialization", PyvtkGenericCell_RequiresInitialization, 1,
   (char*)"V.RequiresInitialization() -> int\nC++: int RequiresInitialization()\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"Initialize", PyvtkGenericCell_Initialize, 1,
   (char*)"V.Initialize()\nC++: void Initialize()\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"RequiresExplicitFaceRepresentation", PyvtkGenericCell_RequiresExplicitFaceRepresentation, 1,
   (char*)"V.RequiresExplicitFaceRepresentation() -> int\nC++: int RequiresExplicitFaceRepresentation()\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"GetNumberOfEdges", PyvtkGenericCell_GetNumberOfEdges, 1,
   (char*)"V.GetNumberOfEdges() -> int\nC++: int GetNumberOfEdges()\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"GetNumberOfFaces", PyvtkGenericCell_GetNumberOfFaces, 1,
   (char*)"V.GetNumberOfFaces() -> int\nC++: int GetNumberOfFaces()\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"GetEdge", PyvtkGenericCell_GetEdge, 1,
   (char*)"V.GetEdge(int) -> vtkCell\nC++: vtkCell *GetEdge(int edgeId)\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"GetFace", PyvtkGenericCell_GetFace, 1,
   (char*)"V.GetFace(int) -> vtkCell\nC++: vtkCell *GetFace(int faceId)\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"CellBoundary", PyvtkGenericCell_CellBoundary, 1,
   (char*)"V.CellBoundary(int, [float, float, float], vtkIdList) -> int\nC++: int CellBoundary(int subId, double pcoords[3],\n    vtkIdList *pts)\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"Contour", PyvtkGenericCell_Contour, 1,
   (char*)"V.Contour(float, vtkDataArray, vtkIncrementalPointLocator,\n    vtkCellArray, vtkCellArray, vtkCellArray, vtkPointData,\n    vtkPointData, vtkCellData, int, vtkCellData)\nC++: void Contour(double value, vtkDataArray *cellScalars,\n    vtkIncrementalPointLocator *locator, vtkCellArray *verts,\n    vtkCellArray *lines, vtkCellArray *polys, vtkPointData *inPd,\n    vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId,\n    vtkCellData *outCd)\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"Clip", PyvtkGenericCell_Clip, 1,
   (char*)"V.Clip(float, vtkDataArray, vtkIncrementalPointLocator,\n    vtkCellArray, vtkPointData, vtkPointData, vtkCellData, int,\n    vtkCellData, int)\nC++: void Clip(double value, vtkDataArray *cellScalars,\n    vtkIncrementalPointLocator *locator,\n    vtkCellArray *connectivity, vtkPointData *inPd,\n    vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId,\n    vtkCellData *outCd, int insideOut)\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"IntersectWithLine", PyvtkGenericCell_IntersectWithLine, 1,
   (char*)"V.IntersectWithLine([float, float, float], [float, float, float],\n    float, float, [float, float, float], [float, float, float],\n    int) -> int\nC++: int IntersectWithLine(double p1[3], double p2[3], double tol,\n     double &t, double x[3], double pcoords[3], int &subId)\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"Triangulate", PyvtkGenericCell_Triangulate, 1,
   (char*)"V.Triangulate(int, vtkIdList, vtkPoints) -> int\nC++: int Triangulate(int index, vtkIdList *ptIds, vtkPoints *pts)\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"GetParametricCenter", PyvtkGenericCell_GetParametricCenter, 1,
   (char*)"V.GetParametricCenter([float, float, float]) -> int\nC++: int GetParametricCenter(double pcoords[3])\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"IsPrimaryCell", PyvtkGenericCell_IsPrimaryCell, 1,
   (char*)"V.IsPrimaryCell() -> int\nC++: int IsPrimaryCell()\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"SetCellType", PyvtkGenericCell_SetCellType, 1,
   (char*)"V.SetCellType(int)\nC++: void SetCellType(int cellType)\n\nThis method is used to support the\nvtkDataSet::GetCell(vtkGenericCell *) method. It allows\nvtkGenericCell to act like any cell type by dereferencing an\ninternal instance of a concrete cell type. When you set the cell\ntype, you are resetting a pointer to an internal cell which is\nthen used for computation.\n"},
  {(char*)"SetCellTypeToEmptyCell", PyvtkGenericCell_SetCellTypeToEmptyCell, 1,
   (char*)"V.SetCellTypeToEmptyCell()\nC++: void SetCellTypeToEmptyCell()\n\nThis method is used to support the\nvtkDataSet::GetCell(vtkGenericCell *) method. It allows\nvtkGenericCell to act like any cell type by dereferencing an\ninternal instance of a concrete cell type. When you set the cell\ntype, you are resetting a pointer to an internal cell which is\nthen used for computation.\n"},
  {(char*)"SetCellTypeToVertex", PyvtkGenericCell_SetCellTypeToVertex, 1,
   (char*)"V.SetCellTypeToVertex()\nC++: void SetCellTypeToVertex()\n\nThis method is used to support the\nvtkDataSet::GetCell(vtkGenericCell *) method. It allows\nvtkGenericCell to act like any cell type by dereferencing an\ninternal instance of a concrete cell type. When you set the cell\ntype, you are resetting a pointer to an internal cell which is\nthen used for computation.\n"},
  {(char*)"SetCellTypeToPolyVertex", PyvtkGenericCell_SetCellTypeToPolyVertex, 1,
   (char*)"V.SetCellTypeToPolyVertex()\nC++: void SetCellTypeToPolyVertex()\n\nThis method is used to support the\nvtkDataSet::GetCell(vtkGenericCell *) method. It allows\nvtkGenericCell to act like any cell type by dereferencing an\ninternal instance of a concrete cell type. When you set the cell\ntype, you are resetting a pointer to an internal cell which is\nthen used for computation.\n"},
  {(char*)"SetCellTypeToLine", PyvtkGenericCell_SetCellTypeToLine, 1,
   (char*)"V.SetCellTypeToLine()\nC++: void SetCellTypeToLine()\n\nThis method is used to support the\nvtkDataSet::GetCell(vtkGenericCell *) method. It allows\nvtkGenericCell to act like any cell type by dereferencing an\ninternal instance of a concrete cell type. When you set the cell\ntype, you are resetting a pointer to an internal cell which is\nthen used for computation.\n"},
  {(char*)"SetCellTypeToPolyLine", PyvtkGenericCell_SetCellTypeToPolyLine, 1,
   (char*)"V.SetCellTypeToPolyLine()\nC++: void SetCellTypeToPolyLine()\n\nThis method is used to support the\nvtkDataSet::GetCell(vtkGenericCell *) method. It allows\nvtkGenericCell to act like any cell type by dereferencing an\ninternal instance of a concrete cell type. When you set the cell\ntype, you are resetting a pointer to an internal cell which is\nthen used for computation.\n"},
  {(char*)"SetCellTypeToTriangle", PyvtkGenericCell_SetCellTypeToTriangle, 1,
   (char*)"V.SetCellTypeToTriangle()\nC++: void SetCellTypeToTriangle()\n\nThis method is used to support the\nvtkDataSet::GetCell(vtkGenericCell *) method. It allows\nvtkGenericCell to act like any cell type by dereferencing an\ninternal instance of a concrete cell type. When you set the cell\ntype, you are resetting a pointer to an internal cell which is\nthen used for computation.\n"},
  {(char*)"SetCellTypeToTriangleStrip", PyvtkGenericCell_SetCellTypeToTriangleStrip, 1,
   (char*)"V.SetCellTypeToTriangleStrip()\nC++: void SetCellTypeToTriangleStrip()\n\nThis method is used to support the\nvtkDataSet::GetCell(vtkGenericCell *) method. It allows\nvtkGenericCell to act like any cell type by dereferencing an\ninternal instance of a concrete cell type. When you set the cell\ntype, you are resetting a pointer to an internal cell which is\nthen used for computation.\n"},
  {(char*)"SetCellTypeToPolygon", PyvtkGenericCell_SetCellTypeToPolygon, 1,
   (char*)"V.SetCellTypeToPolygon()\nC++: void SetCellTypeToPolygon()\n\nThis method is used to support the\nvtkDataSet::GetCell(vtkGenericCell *) method. It allows\nvtkGenericCell to act like any cell type by dereferencing an\ninternal instance of a concrete cell type. When you set the cell\ntype, you are resetting a pointer to an internal cell which is\nthen used for computation.\n"},
  {(char*)"SetCellTypeToPixel", PyvtkGenericCell_SetCellTypeToPixel, 1,
   (char*)"V.SetCellTypeToPixel()\nC++: void SetCellTypeToPixel()\n\nThis method is used to support the\nvtkDataSet::GetCell(vtkGenericCell *) method. It allows\nvtkGenericCell to act like any cell type by dereferencing an\ninternal instance of a concrete cell type. When you set the cell\ntype, you are resetting a pointer to an internal cell which is\nthen used for computation.\n"},
  {(char*)"SetCellTypeToQuad", PyvtkGenericCell_SetCellTypeToQuad, 1,
   (char*)"V.SetCellTypeToQuad()\nC++: void SetCellTypeToQuad()\n\nThis method is used to support the\nvtkDataSet::GetCell(vtkGenericCell *) method. It allows\nvtkGenericCell to act like any cell type by dereferencing an\ninternal instance of a concrete cell type. When you set the cell\ntype, you are resetting a pointer to an internal cell which is\nthen used for computation.\n"},
  {(char*)"SetCellTypeToTetra", PyvtkGenericCell_SetCellTypeToTetra, 1,
   (char*)"V.SetCellTypeToTetra()\nC++: void SetCellTypeToTetra()\n\nThis method is used to support the\nvtkDataSet::GetCell(vtkGenericCell *) method. It allows\nvtkGenericCell to act like any cell type by dereferencing an\ninternal instance of a concrete cell type. When you set the cell\ntype, you are resetting a pointer to an internal cell which is\nthen used for computation.\n"},
  {(char*)"SetCellTypeToVoxel", PyvtkGenericCell_SetCellTypeToVoxel, 1,
   (char*)"V.SetCellTypeToVoxel()\nC++: void SetCellTypeToVoxel()\n\nThis method is used to support the\nvtkDataSet::GetCell(vtkGenericCell *) method. It allows\nvtkGenericCell to act like any cell type by dereferencing an\ninternal instance of a concrete cell type. When you set the cell\ntype, you are resetting a pointer to an internal cell which is\nthen used for computation.\n"},
  {(char*)"SetCellTypeToHexahedron", PyvtkGenericCell_SetCellTypeToHexahedron, 1,
   (char*)"V.SetCellTypeToHexahedron()\nC++: void SetCellTypeToHexahedron()\n\nThis method is used to support the\nvtkDataSet::GetCell(vtkGenericCell *) method. It allows\nvtkGenericCell to act like any cell type by dereferencing an\ninternal instance of a concrete cell type. When you set the cell\ntype, you are resetting a pointer to an internal cell which is\nthen used for computation.\n"},
  {(char*)"SetCellTypeToWedge", PyvtkGenericCell_SetCellTypeToWedge, 1,
   (char*)"V.SetCellTypeToWedge()\nC++: void SetCellTypeToWedge()\n\nThis method is used to support the\nvtkDataSet::GetCell(vtkGenericCell *) method. It allows\nvtkGenericCell to act like any cell type by dereferencing an\ninternal instance of a concrete cell type. When you set the cell\ntype, you are resetting a pointer to an internal cell which is\nthen used for computation.\n"},
  {(char*)"SetCellTypeToPyramid", PyvtkGenericCell_SetCellTypeToPyramid, 1,
   (char*)"V.SetCellTypeToPyramid()\nC++: void SetCellTypeToPyramid()\n\nThis method is used to support the\nvtkDataSet::GetCell(vtkGenericCell *) method. It allows\nvtkGenericCell to act like any cell type by dereferencing an\ninternal instance of a concrete cell type. When you set the cell\ntype, you are resetting a pointer to an internal cell which is\nthen used for computation.\n"},
  {(char*)"SetCellTypeToPentagonalPrism", PyvtkGenericCell_SetCellTypeToPentagonalPrism, 1,
   (char*)"V.SetCellTypeToPentagonalPrism()\nC++: void SetCellTypeToPentagonalPrism()\n\nThis method is used to support the\nvtkDataSet::GetCell(vtkGenericCell *) method. It allows\nvtkGenericCell to act like any cell type by dereferencing an\ninternal instance of a concrete cell type. When you set the cell\ntype, you are resetting a pointer to an internal cell which is\nthen used for computation.\n"},
  {(char*)"SetCellTypeToHexagonalPrism", PyvtkGenericCell_SetCellTypeToHexagonalPrism, 1,
   (char*)"V.SetCellTypeToHexagonalPrism()\nC++: void SetCellTypeToHexagonalPrism()\n\nThis method is used to support the\nvtkDataSet::GetCell(vtkGenericCell *) method. It allows\nvtkGenericCell to act like any cell type by dereferencing an\ninternal instance of a concrete cell type. When you set the cell\ntype, you are resetting a pointer to an internal cell which is\nthen used for computation.\n"},
  {(char*)"SetCellTypeToPolyhedron", PyvtkGenericCell_SetCellTypeToPolyhedron, 1,
   (char*)"V.SetCellTypeToPolyhedron()\nC++: void SetCellTypeToPolyhedron()\n\nThis method is used to support the\nvtkDataSet::GetCell(vtkGenericCell *) method. It allows\nvtkGenericCell to act like any cell type by dereferencing an\ninternal instance of a concrete cell type. When you set the cell\ntype, you are resetting a pointer to an internal cell which is\nthen used for computation.\n"},
  {(char*)"SetCellTypeToConvexPointSet", PyvtkGenericCell_SetCellTypeToConvexPointSet, 1,
   (char*)"V.SetCellTypeToConvexPointSet()\nC++: void SetCellTypeToConvexPointSet()\n\nThis method is used to support the\nvtkDataSet::GetCell(vtkGenericCell *) method. It allows\nvtkGenericCell to act like any cell type by dereferencing an\ninternal instance of a concrete cell type. When you set the cell\ntype, you are resetting a pointer to an internal cell which is\nthen used for computation.\n"},
  {(char*)"SetCellTypeToQuadraticEdge", PyvtkGenericCell_SetCellTypeToQuadraticEdge, 1,
   (char*)"V.SetCellTypeToQuadraticEdge()\nC++: void SetCellTypeToQuadraticEdge()\n\nThis method is used to support the\nvtkDataSet::GetCell(vtkGenericCell *) method. It allows\nvtkGenericCell to act like any cell type by dereferencing an\ninternal instance of a concrete cell type. When you set the cell\ntype, you are resetting a pointer to an internal cell which is\nthen used for computation.\n"},
  {(char*)"SetCellTypeToCubicLine", PyvtkGenericCell_SetCellTypeToCubicLine, 1,
   (char*)"V.SetCellTypeToCubicLine()\nC++: void SetCellTypeToCubicLine()\n\nThis method is used to support the\nvtkDataSet::GetCell(vtkGenericCell *) method. It allows\nvtkGenericCell to act like any cell type by dereferencing an\ninternal instance of a concrete cell type. When you set the cell\ntype, you are resetting a pointer to an internal cell which is\nthen used for computation.\n"},
  {(char*)"SetCellTypeToQuadraticTriangle", PyvtkGenericCell_SetCellTypeToQuadraticTriangle, 1,
   (char*)"V.SetCellTypeToQuadraticTriangle()\nC++: void SetCellTypeToQuadraticTriangle()\n\nThis method is used to support the\nvtkDataSet::GetCell(vtkGenericCell *) method. It allows\nvtkGenericCell to act like any cell type by dereferencing an\ninternal instance of a concrete cell type. When you set the cell\ntype, you are resetting a pointer to an internal cell which is\nthen used for computation.\n"},
  {(char*)"SetCellTypeToBiQuadraticTriangle", PyvtkGenericCell_SetCellTypeToBiQuadraticTriangle, 1,
   (char*)"V.SetCellTypeToBiQuadraticTriangle()\nC++: void SetCellTypeToBiQuadraticTriangle()\n\nThis method is used to support the\nvtkDataSet::GetCell(vtkGenericCell *) method. It allows\nvtkGenericCell to act like any cell type by dereferencing an\ninternal instance of a concrete cell type. When you set the cell\ntype, you are resetting a pointer to an internal cell which is\nthen used for computation.\n"},
  {(char*)"SetCellTypeToQuadraticQuad", PyvtkGenericCell_SetCellTypeToQuadraticQuad, 1,
   (char*)"V.SetCellTypeToQuadraticQuad()\nC++: void SetCellTypeToQuadraticQuad()\n\nThis method is used to support the\nvtkDataSet::GetCell(vtkGenericCell *) method. It allows\nvtkGenericCell to act like any cell type by dereferencing an\ninternal instance of a concrete cell type. When you set the cell\ntype, you are resetting a pointer to an internal cell which is\nthen used for computation.\n"},
  {(char*)"SetCellTypeToQuadraticTetra", PyvtkGenericCell_SetCellTypeToQuadraticTetra, 1,
   (char*)"V.SetCellTypeToQuadraticTetra()\nC++: void SetCellTypeToQuadraticTetra()\n\nThis method is used to support the\nvtkDataSet::GetCell(vtkGenericCell *) method. It allows\nvtkGenericCell to act like any cell type by dereferencing an\ninternal instance of a concrete cell type. When you set the cell\ntype, you are resetting a pointer to an internal cell which is\nthen used for computation.\n"},
  {(char*)"SetCellTypeToQuadraticHexahedron", PyvtkGenericCell_SetCellTypeToQuadraticHexahedron, 1,
   (char*)"V.SetCellTypeToQuadraticHexahedron()\nC++: void SetCellTypeToQuadraticHexahedron()\n\nThis method is used to support the\nvtkDataSet::GetCell(vtkGenericCell *) method. It allows\nvtkGenericCell to act like any cell type by dereferencing an\ninternal instance of a concrete cell type. When you set the cell\ntype, you are resetting a pointer to an internal cell which is\nthen used for computation.\n"},
  {(char*)"SetCellTypeToQuadraticWedge", PyvtkGenericCell_SetCellTypeToQuadraticWedge, 1,
   (char*)"V.SetCellTypeToQuadraticWedge()\nC++: void SetCellTypeToQuadraticWedge()\n\nThis method is used to support the\nvtkDataSet::GetCell(vtkGenericCell *) method. It allows\nvtkGenericCell to act like any cell type by dereferencing an\ninternal instance of a concrete cell type. When you set the cell\ntype, you are resetting a pointer to an internal cell which is\nthen used for computation.\n"},
  {(char*)"SetCellTypeToQuadraticPyramid", PyvtkGenericCell_SetCellTypeToQuadraticPyramid, 1,
   (char*)"V.SetCellTypeToQuadraticPyramid()\nC++: void SetCellTypeToQuadraticPyramid()\n\nThis method is used to support the\nvtkDataSet::GetCell(vtkGenericCell *) method. It allows\nvtkGenericCell to act like any cell type by dereferencing an\ninternal instance of a concrete cell type. When you set the cell\ntype, you are resetting a pointer to an internal cell which is\nthen used for computation.\n"},
  {(char*)"SetCellTypeToQuadraticLinearQuad", PyvtkGenericCell_SetCellTypeToQuadraticLinearQuad, 1,
   (char*)"V.SetCellTypeToQuadraticLinearQuad()\nC++: void SetCellTypeToQuadraticLinearQuad()\n\nThis method is used to support the\nvtkDataSet::GetCell(vtkGenericCell *) method. It allows\nvtkGenericCell to act like any cell type by dereferencing an\ninternal instance of a concrete cell type. When you set the cell\ntype, you are resetting a pointer to an internal cell which is\nthen used for computation.\n"},
  {(char*)"SetCellTypeToBiQuadraticQuad", PyvtkGenericCell_SetCellTypeToBiQuadraticQuad, 1,
   (char*)"V.SetCellTypeToBiQuadraticQuad()\nC++: void SetCellTypeToBiQuadraticQuad()\n\nThis method is used to support the\nvtkDataSet::GetCell(vtkGenericCell *) method. It allows\nvtkGenericCell to act like any cell type by dereferencing an\ninternal instance of a concrete cell type. When you set the cell\ntype, you are resetting a pointer to an internal cell which is\nthen used for computation.\n"},
  {(char*)"SetCellTypeToQuadraticLinearWedge", PyvtkGenericCell_SetCellTypeToQuadraticLinearWedge, 1,
   (char*)"V.SetCellTypeToQuadraticLinearWedge()\nC++: void SetCellTypeToQuadraticLinearWedge()\n\nThis method is used to support the\nvtkDataSet::GetCell(vtkGenericCell *) method. It allows\nvtkGenericCell to act like any cell type by dereferencing an\ninternal instance of a concrete cell type. When you set the cell\ntype, you are resetting a pointer to an internal cell which is\nthen used for computation.\n"},
  {(char*)"SetCellTypeToBiQuadraticQuadraticWedge", PyvtkGenericCell_SetCellTypeToBiQuadraticQuadraticWedge, 1,
   (char*)"V.SetCellTypeToBiQuadraticQuadraticWedge()\nC++: void SetCellTypeToBiQuadraticQuadraticWedge()\n\nThis method is used to support the\nvtkDataSet::GetCell(vtkGenericCell *) method. It allows\nvtkGenericCell to act like any cell type by dereferencing an\ninternal instance of a concrete cell type. When you set the cell\ntype, you are resetting a pointer to an internal cell which is\nthen used for computation.\n"},
  {(char*)"SetCellTypeToTriQuadraticHexahedron", PyvtkGenericCell_SetCellTypeToTriQuadraticHexahedron, 1,
   (char*)"V.SetCellTypeToTriQuadraticHexahedron()\nC++: void SetCellTypeToTriQuadraticHexahedron()\n\nThis method is used to support the\nvtkDataSet::GetCell(vtkGenericCell *) method. It allows\nvtkGenericCell to act like any cell type by dereferencing an\ninternal instance of a concrete cell type. When you set the cell\ntype, you are resetting a pointer to an internal cell which is\nthen used for computation.\n"},
  {(char*)"SetCellTypeToBiQuadraticQuadraticHexahedron", PyvtkGenericCell_SetCellTypeToBiQuadraticQuadraticHexahedron, 1,
   (char*)"V.SetCellTypeToBiQuadraticQuadraticHexahedron()\nC++: void SetCellTypeToBiQuadraticQuadraticHexahedron()\n\nThis method is used to support the\nvtkDataSet::GetCell(vtkGenericCell *) method. It allows\nvtkGenericCell to act like any cell type by dereferencing an\ninternal instance of a concrete cell type. When you set the cell\ntype, you are resetting a pointer to an internal cell which is\nthen used for computation.\n"},
  {(char*)"InstantiateCell", PyvtkGenericCell_InstantiateCell, 1,
   (char*)"V.InstantiateCell(int) -> vtkCell\nC++: static vtkCell *InstantiateCell(int cellType)\n\nInstantiate a new vtkCell based on it's cell type value\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGenericCell_StaticNew()
{
  return vtkGenericCell::New();
}

PyObject *PyVTKClass_vtkGenericCellNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGenericCell_StaticNew,
    PyvtkGenericCell_Methods,
    "vtkGenericCell", modulename,
    NULL, NULL,
    PyvtkGenericCell_Doc(),
    PyVTKClass_vtkCellNew(modulename));
  return cls;
}

const char **PyvtkGenericCell_Doc()
{
  static const char *docstring[] = {
    "vtkGenericCell - provides thread-safe access to cells\n\n",
    "Superclass: vtkCell\n\n",
    "vtkGenericCell is a class that provides access to concrete types of\ncells. It's main purpose is to allow thread-safe access to cells,\nsupporting the vtkDataSet::GetCell(vtkGenericCell *) method.\nvtkGenericCell acts like any type of cell, it just dereferences an\ninternal representation. The SetCellType() methods use #define\nconstants; these are defined in the file vtkCellType.h.\n\nSee Also:\n\nvtkCell",
    " vtkDataSet\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGenericCell(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGenericCellNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGenericCell", o) != 0)
    {
    Py_DECREF(o);
    }

}

