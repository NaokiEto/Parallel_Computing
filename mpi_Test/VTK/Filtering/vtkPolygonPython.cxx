// python wrapper for vtkPolygon
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
#include "vtkPolygon.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPolygon(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPolygon(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPolygonNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPolygonNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkCellNew
extern "C" { PyObject *PyVTKClass_vtkCellNew(const char *); }
#define DECLARED_PyVTKClass_vtkCellNew
#endif

static const char **PyvtkPolygon_Doc();


static PyObject *
PyvtkPolygon_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

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
      tempr = op->vtkPolygon::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolygon_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

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
      tempr = op->vtkPolygon::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolygon_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  vtkPolygon *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPolygon::NewInstance();
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
PyvtkPolygon_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPolygon *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPolygon::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolygon_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

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
      tempr = op->vtkPolygon::GetCellType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolygon_GetCellDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

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
      tempr = op->vtkPolygon::GetCellDimension();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolygon_GetNumberOfEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

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
      tempr = op->vtkPolygon::GetNumberOfEdges();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolygon_GetNumberOfFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

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
      tempr = op->vtkPolygon::GetNumberOfFaces();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolygon_GetEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

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
      tempr = op->vtkPolygon::GetEdge(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolygon_GetFace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

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
      tempr = op->vtkPolygon::GetFace(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolygon_CellBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

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
      tempr = op->vtkPolygon::CellBoundary(temp0, temp1, temp2);
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
PyvtkPolygon_Contour(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Contour");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

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
      op->vtkPolygon::Contour(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolygon_Clip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

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
      op->vtkPolygon::Clip(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolygon_IntersectWithLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

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
      tempr = op->vtkPolygon::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
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
PyvtkPolygon_Triangulate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Triangulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

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
      tempr = op->vtkPolygon::Triangulate(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPolygon_Triangulate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Triangulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  vtkIdList *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      tempr = op->Triangulate(temp0);
      }
    else
      {
      tempr = op->vtkPolygon::Triangulate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPolygon_Triangulate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPolygon_Triangulate_s1(self, args);
    case 1:
      return PyvtkPolygon_Triangulate_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Triangulate");
  return NULL;
}



static PyObject *
PyvtkPolygon_IsPrimaryCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPrimaryCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

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
      tempr = op->vtkPolygon::IsPrimaryCell();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolygon_ComputeArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->ComputeArea();
      }
    else
      {
      tempr = op->vtkPolygon::ComputeArea();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolygon_ComputeNormal_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeNormal");

  vtkPoints *temp0 = NULL;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    vtkPolygon::ComputeNormal(temp0, temp1);

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
PyvtkPolygon_ComputeNormal_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeNormal");

  vtkIdTypeArray *temp0 = NULL;
  vtkPoints *temp1 = NULL;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp1, "vtkPoints") &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    vtkPolygon::ComputeNormal(temp0, temp1, temp2);

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPolygon_ComputeNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkPolygon_ComputeNormal_s1(self, args);
    case 3:
      return PyvtkPolygon_ComputeNormal_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ComputeNormal");
  return NULL;
}



static PyObject *
PyvtkPolygon_ComputeCentroid(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeCentroid");

  vtkIdTypeArray *temp0 = NULL;
  vtkPoints *temp1 = NULL;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp1, "vtkPoints") &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    vtkPolygon::ComputeCentroid(temp0, temp1, temp2);

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolygon_ParameterizePolygon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParameterizePolygon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2;
  double temp3[3];
  double save3[3];
  const int size3 = 3;
  double temp4;
  double temp5[3];
  double save5[3];
  const int size5 = 3;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp5, save5, size5);

    if (ap.IsBound())
      {
      tempr = op->ParameterizePolygon(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      tempr = op->vtkPolygon::ParameterizePolygon(temp0, temp1, temp2, temp3, temp4, temp5);
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
      ap.SetArgValue(2, temp2);
      }
    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(4, temp4);
      }
    if (ap.ArrayHasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(5, temp5, size5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolygon_NonDegenerateTriangulate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NonDegenerateTriangulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  vtkIdList *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      tempr = op->NonDegenerateTriangulate(temp0);
      }
    else
      {
      tempr = op->vtkPolygon::NonDegenerateTriangulate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolygon_IntersectConvex2DCells(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IntersectConvex2DCells");

  vtkCell *temp0 = NULL;
  vtkCell *temp1 = NULL;
  double temp2;
  double temp3[3];
  double save3[3];
  const int size3 = 3;
  double temp4[3];
  double save4[3];
  const int size4 = 3;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkCell") &&
      ap.GetVTKObject(temp1, "vtkCell") &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);

    tempr = vtkPolygon::IntersectConvex2DCells(temp0, temp1, temp2, temp3, temp4);

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolygon_GetUseMVCInterpolation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseMVCInterpolation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseMVCInterpolation();
      }
    else
      {
      tempr = op->vtkPolygon::GetUseMVCInterpolation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolygon_SetUseMVCInterpolation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseMVCInterpolation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseMVCInterpolation(temp0);
      }
    else
      {
      op->vtkPolygon::SetUseMVCInterpolation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPolygon_Methods[] = {
  {(char*)"GetClassName", PyvtkPolygon_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPolygon_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPolygon_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPolygon\nC++: vtkPolygon *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPolygon_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPolygon\nC++: vtkPolygon *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetCellType", PyvtkPolygon_GetCellType, 1,
   (char*)"V.GetCellType() -> int\nC++: int GetCellType()\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"GetCellDimension", PyvtkPolygon_GetCellDimension, 1,
   (char*)"V.GetCellDimension() -> int\nC++: int GetCellDimension()\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"GetNumberOfEdges", PyvtkPolygon_GetNumberOfEdges, 1,
   (char*)"V.GetNumberOfEdges() -> int\nC++: int GetNumberOfEdges()\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"GetNumberOfFaces", PyvtkPolygon_GetNumberOfFaces, 1,
   (char*)"V.GetNumberOfFaces() -> int\nC++: int GetNumberOfFaces()\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"GetEdge", PyvtkPolygon_GetEdge, 1,
   (char*)"V.GetEdge(int) -> vtkCell\nC++: vtkCell *GetEdge(int edgeId)\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"GetFace", PyvtkPolygon_GetFace, 1,
   (char*)"V.GetFace(int) -> vtkCell\nC++: vtkCell *GetFace(int)\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"CellBoundary", PyvtkPolygon_CellBoundary, 1,
   (char*)"V.CellBoundary(int, [float, float, float], vtkIdList) -> int\nC++: int CellBoundary(int subId, double pcoords[3],\n    vtkIdList *pts)\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"Contour", PyvtkPolygon_Contour, 1,
   (char*)"V.Contour(float, vtkDataArray, vtkIncrementalPointLocator,\n    vtkCellArray, vtkCellArray, vtkCellArray, vtkPointData,\n    vtkPointData, vtkCellData, int, vtkCellData)\nC++: void Contour(double value, vtkDataArray *cellScalars,\n    vtkIncrementalPointLocator *locator, vtkCellArray *verts,\n    vtkCellArray *lines, vtkCellArray *polys, vtkPointData *inPd,\n    vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId,\n    vtkCellData *outCd)\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"Clip", PyvtkPolygon_Clip, 1,
   (char*)"V.Clip(float, vtkDataArray, vtkIncrementalPointLocator,\n    vtkCellArray, vtkPointData, vtkPointData, vtkCellData, int,\n    vtkCellData, int)\nC++: void Clip(double value, vtkDataArray *cellScalars,\n    vtkIncrementalPointLocator *locator, vtkCellArray *tris,\n    vtkPointData *inPd, vtkPointData *outPd, vtkCellData *inCd,\n    vtkIdType cellId, vtkCellData *outCd, int insideOut)\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"IntersectWithLine", PyvtkPolygon_IntersectWithLine, 1,
   (char*)"V.IntersectWithLine([float, float, float], [float, float, float],\n    float, float, [float, float, float], [float, float, float],\n    int) -> int\nC++: int IntersectWithLine(double p1[3], double p2[3], double tol,\n     double &t, double x[3], double pcoords[3], int &subId)\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"Triangulate", PyvtkPolygon_Triangulate, 1,
   (char*)"V.Triangulate(int, vtkIdList, vtkPoints) -> int\nC++: int Triangulate(int index, vtkIdList *ptIds, vtkPoints *pts)\nV.Triangulate(vtkIdList) -> int\nC++: int Triangulate(vtkIdList *outTris)\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"IsPrimaryCell", PyvtkPolygon_IsPrimaryCell, 1,
   (char*)"V.IsPrimaryCell() -> int\nC++: int IsPrimaryCell()\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"ComputeArea", PyvtkPolygon_ComputeArea, 1,
   (char*)"V.ComputeArea() -> float\nC++: double ComputeArea()\n\nCompute the area of a polygon. This is a convenience function\nwhich simply calls static double ComputeArea(vtkPoints *p,\nvtkIdType numPts, vtkIdType *pts, double normal[3]); with the\nappropriate parameters from the instantiated vtkPolygon.\n"},
  {(char*)"ComputeNormal", PyvtkPolygon_ComputeNormal, 1,
   (char*)"V.ComputeNormal(vtkPoints, [float, float, float])\nC++: static void ComputeNormal(vtkPoints *p, double n[3])\nV.ComputeNormal(vtkIdTypeArray, vtkPoints, [float, float, float])\nC++: static void ComputeNormal(vtkIdTypeArray *ids,\n    vtkPoints *pts, double n[3])\n\nPolygon specific methods.\n"},
  {(char*)"ComputeCentroid", PyvtkPolygon_ComputeCentroid, 1,
   (char*)"V.ComputeCentroid(vtkIdTypeArray, vtkPoints, [float, float,\n    float])\nC++: static void ComputeCentroid(vtkIdTypeArray *ids,\n    vtkPoints *pts, double centroid[3])\n\nCompute the centroid of a set of points.\n"},
  {(char*)"ParameterizePolygon", PyvtkPolygon_ParameterizePolygon, 1,
   (char*)"V.ParameterizePolygon([float, float, float], [float, float,\n    float], float, [float, float, float], float, [float, float,\n    float]) -> int\nC++: int ParameterizePolygon(double p0[3], double p10[3],\n    double &l10, double p20[3], double &l20, double n[3])\n\nCreate a local s-t coordinate system for a polygon. The point p0\nis the origin of the local system, p10 is s-axis vector, and p20\nis the t-axis vector. (These are expressed in the modeling\ncoordinate system and are vectors of dimension [3].) The values\nl20 and l20 are the lengths of the vectors p10 and p20, and n is\nthe polygon normal.\n"},
  {(char*)"NonDegenerateTriangulate", PyvtkPolygon_NonDegenerateTriangulate, 1,
   (char*)"V.NonDegenerateTriangulate(vtkIdList) -> int\nC++: int NonDegenerateTriangulate(vtkIdList *outTris)\n\nSame as Triangulate(vtkIdList *outTris) but with a first pass to\nsplit the polygon into non-degenerate polygons.\n"},
  {(char*)"IntersectConvex2DCells", PyvtkPolygon_IntersectConvex2DCells, 1,
   (char*)"V.IntersectConvex2DCells(vtkCell, vtkCell, float, [float, float,\n    float], [float, float, float]) -> int\nC++: static int IntersectConvex2DCells(vtkCell *cell1,\n    vtkCell *cell2, double tol, double p0[3], double p1[3])\n\nIntersect two convex 2D polygons to produce a line segment as\noutput. The return status of the methods indicated no\nintersection (returns 0); a single point of intersection (returns\n1); or a line segment (i.e., two points of intersection, returns\n2). The points of intersection are returned in the arrays p0 and\np1.  If less than two points of intersection are generated then\np1 and/or p0 may be indeterminiate. Finally, if the two convex\npolygons are parallel, then \"0\" is returned (i.e., no\nintersection) even if the triangles lie on one another.\n"},
  {(char*)"GetUseMVCInterpolation", PyvtkPolygon_GetUseMVCInterpolation, 1,
   (char*)"V.GetUseMVCInterpolation() -> bool\nC++: bool GetUseMVCInterpolation()\n\nSet/Get the flag indicating whether to use Mean Value Coordinate\nfor the interpolation. If true, InterpolateFunctions() uses the\nMean Value Coordinate to compute weights. Otherwise, the\nconventional 1/r^2 method is used. The UseMVCInterpolation\nparameter is set to false by default.\n"},
  {(char*)"SetUseMVCInterpolation", PyvtkPolygon_SetUseMVCInterpolation, 1,
   (char*)"V.SetUseMVCInterpolation(bool)\nC++: void SetUseMVCInterpolation(bool a)\n\nSet/Get the flag indicating whether to use Mean Value Coordinate\nfor the interpolation. If true, InterpolateFunctions() uses the\nMean Value Coordinate to compute weights. Otherwise, the\nconventional 1/r^2 method is used. The UseMVCInterpolation\nparameter is set to false by default.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPolygon_StaticNew()
{
  return vtkPolygon::New();
}

PyObject *PyVTKClass_vtkPolygonNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPolygon_StaticNew,
    PyvtkPolygon_Methods,
    "vtkPolygon", modulename,
    NULL, NULL,
    PyvtkPolygon_Doc(),
    PyVTKClass_vtkCellNew(modulename));
  return cls;
}

const char **PyvtkPolygon_Doc()
{
  static const char *docstring[] = {
    "vtkPolygon - a cell that represents an n-sided polygon\n\n",
    "Superclass: vtkCell\n\n",
    "vtkPolygon is a concrete implementation of vtkCell to represent a 2D\nn-sided polygon. The polygons cannot have any internal holes, and\ncannot self-intersect. Define the polygon with n-points ordered in\nthe counter- clockwise direction; do not repeat the last point.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPolygon(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPolygonNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPolygon", o) != 0)
    {
    Py_DECREF(o);
    }

}

