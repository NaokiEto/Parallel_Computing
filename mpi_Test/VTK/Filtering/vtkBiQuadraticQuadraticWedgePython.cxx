// python wrapper for vtkBiQuadraticQuadraticWedge
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
#include "vtkBiQuadraticQuadraticWedge.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkBiQuadraticQuadraticWedge(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkBiQuadraticQuadraticWedge(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkBiQuadraticQuadraticWedgeNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkBiQuadraticQuadraticWedgeNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkNonLinearCellNew
extern "C" { PyObject *PyVTKClass_vtkNonLinearCellNew(const char *); }
#define DECLARED_PyVTKClass_vtkNonLinearCellNew
#endif

static const char **PyvtkBiQuadraticQuadraticWedge_Doc();


static PyObject *
PyvtkBiQuadraticQuadraticWedge_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuadraticWedge *op = static_cast<vtkBiQuadraticQuadraticWedge *>(vp);

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
      tempr = op->vtkBiQuadraticQuadraticWedge::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiQuadraticQuadraticWedge_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuadraticWedge *op = static_cast<vtkBiQuadraticQuadraticWedge *>(vp);

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
      tempr = op->vtkBiQuadraticQuadraticWedge::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiQuadraticQuadraticWedge_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuadraticWedge *op = static_cast<vtkBiQuadraticQuadraticWedge *>(vp);

  vtkBiQuadraticQuadraticWedge *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkBiQuadraticQuadraticWedge::NewInstance();
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
PyvtkBiQuadraticQuadraticWedge_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkBiQuadraticQuadraticWedge *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkBiQuadraticQuadraticWedge::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiQuadraticQuadraticWedge_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuadraticWedge *op = static_cast<vtkBiQuadraticQuadraticWedge *>(vp);

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
      tempr = op->vtkBiQuadraticQuadraticWedge::GetCellType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiQuadraticQuadraticWedge_GetCellDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuadraticWedge *op = static_cast<vtkBiQuadraticQuadraticWedge *>(vp);

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
      tempr = op->vtkBiQuadraticQuadraticWedge::GetCellDimension();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiQuadraticQuadraticWedge_GetNumberOfEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuadraticWedge *op = static_cast<vtkBiQuadraticQuadraticWedge *>(vp);

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
      tempr = op->vtkBiQuadraticQuadraticWedge::GetNumberOfEdges();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiQuadraticQuadraticWedge_GetNumberOfFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuadraticWedge *op = static_cast<vtkBiQuadraticQuadraticWedge *>(vp);

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
      tempr = op->vtkBiQuadraticQuadraticWedge::GetNumberOfFaces();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiQuadraticQuadraticWedge_GetEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuadraticWedge *op = static_cast<vtkBiQuadraticQuadraticWedge *>(vp);

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
      tempr = op->vtkBiQuadraticQuadraticWedge::GetEdge(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiQuadraticQuadraticWedge_GetFace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuadraticWedge *op = static_cast<vtkBiQuadraticQuadraticWedge *>(vp);

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
      tempr = op->vtkBiQuadraticQuadraticWedge::GetFace(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiQuadraticQuadraticWedge_CellBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuadraticWedge *op = static_cast<vtkBiQuadraticQuadraticWedge *>(vp);

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
      tempr = op->vtkBiQuadraticQuadraticWedge::CellBoundary(temp0, temp1, temp2);
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
PyvtkBiQuadraticQuadraticWedge_Contour(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Contour");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuadraticWedge *op = static_cast<vtkBiQuadraticQuadraticWedge *>(vp);

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
      op->vtkBiQuadraticQuadraticWedge::Contour(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBiQuadraticQuadraticWedge_Triangulate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Triangulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuadraticWedge *op = static_cast<vtkBiQuadraticQuadraticWedge *>(vp);

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
      tempr = op->vtkBiQuadraticQuadraticWedge::Triangulate(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiQuadraticQuadraticWedge_Clip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuadraticWedge *op = static_cast<vtkBiQuadraticQuadraticWedge *>(vp);

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
      op->vtkBiQuadraticQuadraticWedge::Clip(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBiQuadraticQuadraticWedge_IntersectWithLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuadraticWedge *op = static_cast<vtkBiQuadraticQuadraticWedge *>(vp);

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
      tempr = op->vtkBiQuadraticQuadraticWedge::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
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
PyvtkBiQuadraticQuadraticWedge_GetParametricCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParametricCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuadraticWedge *op = static_cast<vtkBiQuadraticQuadraticWedge *>(vp);

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
      tempr = op->vtkBiQuadraticQuadraticWedge::GetParametricCenter(temp0);
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
PyvtkBiQuadraticQuadraticWedge_InterpolationFunctions(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "InterpolationFunctions");

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[15];
  double save1[15];
  const int size1 = 15;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    vtkBiQuadraticQuadraticWedge::InterpolationFunctions(temp0, temp1);

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
PyvtkBiQuadraticQuadraticWedge_InterpolationDerivs(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "InterpolationDerivs");

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[45];
  double save1[45];
  const int size1 = 45;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    vtkBiQuadraticQuadraticWedge::InterpolationDerivs(temp0, temp1);

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
PyvtkBiQuadraticQuadraticWedge_InterpolateFunctions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateFunctions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuadraticWedge *op = static_cast<vtkBiQuadraticQuadraticWedge *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[15];
  double save1[15];
  const int size1 = 15;
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
      op->vtkBiQuadraticQuadraticWedge::InterpolateFunctions(temp0, temp1);
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
PyvtkBiQuadraticQuadraticWedge_InterpolateDerivs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateDerivs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuadraticWedge *op = static_cast<vtkBiQuadraticQuadraticWedge *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[45];
  double save1[45];
  const int size1 = 45;
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
      op->vtkBiQuadraticQuadraticWedge::InterpolateDerivs(temp0, temp1);
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

static PyMethodDef PyvtkBiQuadraticQuadraticWedge_Methods[] = {
  {(char*)"GetClassName", PyvtkBiQuadraticQuadraticWedge_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBiQuadraticQuadraticWedge_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBiQuadraticQuadraticWedge_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkBiQuadraticQuadraticWedge\nC++: vtkBiQuadraticQuadraticWedge *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkBiQuadraticQuadraticWedge_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBiQuadraticQuadraticWedge\nC++: vtkBiQuadraticQuadraticWedge *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetCellType", PyvtkBiQuadraticQuadraticWedge_GetCellType, 1,
   (char*)"V.GetCellType() -> int\nC++: int GetCellType()\n\nImplement the vtkCell API. See the vtkCell API for descriptions\nof these methods.\n"},
  {(char*)"GetCellDimension", PyvtkBiQuadraticQuadraticWedge_GetCellDimension, 1,
   (char*)"V.GetCellDimension() -> int\nC++: int GetCellDimension()\n\nImplement the vtkCell API. See the vtkCell API for descriptions\nof these methods.\n"},
  {(char*)"GetNumberOfEdges", PyvtkBiQuadraticQuadraticWedge_GetNumberOfEdges, 1,
   (char*)"V.GetNumberOfEdges() -> int\nC++: int GetNumberOfEdges()\n\nImplement the vtkCell API. See the vtkCell API for descriptions\nof these methods.\n"},
  {(char*)"GetNumberOfFaces", PyvtkBiQuadraticQuadraticWedge_GetNumberOfFaces, 1,
   (char*)"V.GetNumberOfFaces() -> int\nC++: int GetNumberOfFaces()\n\nImplement the vtkCell API. See the vtkCell API for descriptions\nof these methods.\n"},
  {(char*)"GetEdge", PyvtkBiQuadraticQuadraticWedge_GetEdge, 1,
   (char*)"V.GetEdge(int) -> vtkCell\nC++: vtkCell *GetEdge(int edgeId)\n\nImplement the vtkCell API. See the vtkCell API for descriptions\nof these methods.\n"},
  {(char*)"GetFace", PyvtkBiQuadraticQuadraticWedge_GetFace, 1,
   (char*)"V.GetFace(int) -> vtkCell\nC++: vtkCell *GetFace(int faceId)\n\nImplement the vtkCell API. See the vtkCell API for descriptions\nof these methods.\n"},
  {(char*)"CellBoundary", PyvtkBiQuadraticQuadraticWedge_CellBoundary, 1,
   (char*)"V.CellBoundary(int, [float, float, float], vtkIdList) -> int\nC++: int CellBoundary(int subId, double pcoords[3],\n    vtkIdList *pts)\n\n"},
  {(char*)"Contour", PyvtkBiQuadraticQuadraticWedge_Contour, 1,
   (char*)"V.Contour(float, vtkDataArray, vtkIncrementalPointLocator,\n    vtkCellArray, vtkCellArray, vtkCellArray, vtkPointData,\n    vtkPointData, vtkCellData, int, vtkCellData)\nC++: void Contour(double value, vtkDataArray *cellScalars,\n    vtkIncrementalPointLocator *locator, vtkCellArray *verts,\n    vtkCellArray *lines, vtkCellArray *polys, vtkPointData *inPd,\n    vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId,\n    vtkCellData *outCd)\n\n"},
  {(char*)"Triangulate", PyvtkBiQuadraticQuadraticWedge_Triangulate, 1,
   (char*)"V.Triangulate(int, vtkIdList, vtkPoints) -> int\nC++: int Triangulate(int index, vtkIdList *ptIds, vtkPoints *pts)\n\n"},
  {(char*)"Clip", PyvtkBiQuadraticQuadraticWedge_Clip, 1,
   (char*)"V.Clip(float, vtkDataArray, vtkIncrementalPointLocator,\n    vtkCellArray, vtkPointData, vtkPointData, vtkCellData, int,\n    vtkCellData, int)\nC++: void Clip(double value, vtkDataArray *cellScalars,\n    vtkIncrementalPointLocator *locator, vtkCellArray *tetras,\n    vtkPointData *inPd, vtkPointData *outPd, vtkCellData *inCd,\n    vtkIdType cellId, vtkCellData *outCd, int insideOut)\n\nClip this quadratic Wedge using scalar value provided. Like\ncontouring, except that it cuts the hex to produce linear\ntetrahedron.\n"},
  {(char*)"IntersectWithLine", PyvtkBiQuadraticQuadraticWedge_IntersectWithLine, 1,
   (char*)"V.IntersectWithLine([float, float, float], [float, float, float],\n    float, float, [float, float, float], [float, float, float],\n    int) -> int\nC++: int IntersectWithLine(double p1[3], double p2[3], double tol,\n     double &t, double x[3], double pcoords[3], int &subId)\n\nLine-edge intersection. Intersection has to occur within [0,1]\nparametric coordinates and with specified tolerance.\n"},
  {(char*)"GetParametricCenter", PyvtkBiQuadraticQuadraticWedge_GetParametricCenter, 1,
   (char*)"V.GetParametricCenter([float, float, float]) -> int\nC++: int GetParametricCenter(double pcoords[3])\n\nReturn the center of the quadratic wedge in parametric\ncoordinates.\n"},
  {(char*)"InterpolationFunctions", PyvtkBiQuadraticQuadraticWedge_InterpolationFunctions, 1,
   (char*)"V.InterpolationFunctions([float, float, float], [float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float])\nC++: static void InterpolationFunctions(double pcoords[3],\n    double weights[15])\n\n@deprecated Replaced by\nvtkBiQuadraticQuadraticWedge::InterpolateFunctions as of VTK 5.2\n"},
  {(char*)"InterpolationDerivs", PyvtkBiQuadraticQuadraticWedge_InterpolationDerivs, 1,
   (char*)"V.InterpolationDerivs([float, float, float], [float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float])\nC++: static void InterpolationDerivs(double pcoords[3],\n    double derivs[45])\n\n@deprecated Replaced by\nvtkBiQuadraticQuadraticWedge::InterpolateDerivs as of VTK 5.2\n"},
  {(char*)"InterpolateFunctions", PyvtkBiQuadraticQuadraticWedge_InterpolateFunctions, 1,
   (char*)"V.InterpolateFunctions([float, float, float], [float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float])\nC++: virtual void InterpolateFunctions(double pcoords[3],\n    double weights[15])\n\nCompute the interpolation functions/derivatives (aka shape\nfunctions/derivatives)\n"},
  {(char*)"InterpolateDerivs", PyvtkBiQuadraticQuadraticWedge_InterpolateDerivs, 1,
   (char*)"V.InterpolateDerivs([float, float, float], [float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float])\nC++: virtual void InterpolateDerivs(double pcoords[3],\n    double derivs[45])\n\nCompute the interpolation functions/derivatives (aka shape\nfunctions/derivatives)\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBiQuadraticQuadraticWedge_StaticNew()
{
  return vtkBiQuadraticQuadraticWedge::New();
}

PyObject *PyVTKClass_vtkBiQuadraticQuadraticWedgeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBiQuadraticQuadraticWedge_StaticNew,
    PyvtkBiQuadraticQuadraticWedge_Methods,
    "vtkBiQuadraticQuadraticWedge", modulename,
    NULL, NULL,
    PyvtkBiQuadraticQuadraticWedge_Doc(),
    PyVTKClass_vtkNonLinearCellNew(modulename));
  return cls;
}

const char **PyvtkBiQuadraticQuadraticWedge_Doc()
{
  static const char *docstring[] = {
    "vtkBiQuadraticQuadraticWedge - cell represents a parabolic, 18-node\nisoparametric wedge\n\n",
    "Superclass: vtkNonLinearCell\n\n",
    "vtkBiQuadraticQuadraticWedge is a concrete implementation of\nvtkNonLinearCell to represent a three-dimensional, 18-node\nisoparametric biquadratic wedge. The interpolation is the standard\nfinite element, biquadratic-quadratic isoparametric shape function\nplus the linear functions. The cell includes a mid-edge node. The\nordering of the 18 points defining the cell is point ids (0-5,6-15,\n16-18) where",
    " point ids 0-5 are the six corner vertices of the wedge;\nfollowed by nine midedge nodes (6-15) and 3 center-face nodes. Note\nthat these midedge nodes correspond lie on the edges defined by\n(0,1), (1,2), (2,0), (3,4), (4,5), (5,3), (0,3), (1,4), (2,5), and\nthe center-face nodes are lieing in quads 16-(0,1,4,3), 17-(1,2,5,4)\nand (2,0,3,5).\n\nSee Also:\n\nvtkQuadraticEdge vtkQuadraticTriangle vtkQuadrat",
    "icTetra\nvtkQuadraticHexahedron vtkQuadraticQuad vtkQuadraticPyramid\n\nThanks:\n\nThanks to Soeren Gebbert  who developed this class and integrated it\ninto VTK 5.0.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBiQuadraticQuadraticWedge(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBiQuadraticQuadraticWedgeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBiQuadraticQuadraticWedge", o) != 0)
    {
    Py_DECREF(o);
    }

}

