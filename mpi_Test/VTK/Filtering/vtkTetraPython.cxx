// python wrapper for vtkTetra
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
#include "vtkTetra.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTetra(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTetra(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTetraNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTetraNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkCell3DNew
extern "C" { PyObject *PyVTKClass_vtkCell3DNew(const char *); }
#define DECLARED_PyVTKClass_vtkCell3DNew
#endif

static const char **PyvtkTetra_Doc();


static PyObject *
PyvtkTetra_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTetra *op = static_cast<vtkTetra *>(vp);

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
      tempr = op->vtkTetra::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTetra_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTetra *op = static_cast<vtkTetra *>(vp);

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
      tempr = op->vtkTetra::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTetra_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTetra *op = static_cast<vtkTetra *>(vp);

  vtkTetra *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTetra::NewInstance();
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
PyvtkTetra_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTetra *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTetra::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTetra_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTetra *op = static_cast<vtkTetra *>(vp);

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
      tempr = op->vtkTetra::GetCellType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTetra_GetNumberOfEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTetra *op = static_cast<vtkTetra *>(vp);

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
      tempr = op->vtkTetra::GetNumberOfEdges();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTetra_GetNumberOfFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTetra *op = static_cast<vtkTetra *>(vp);

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
      tempr = op->vtkTetra::GetNumberOfFaces();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTetra_GetEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTetra *op = static_cast<vtkTetra *>(vp);

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
      tempr = op->vtkTetra::GetEdge(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTetra_GetFace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTetra *op = static_cast<vtkTetra *>(vp);

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
      tempr = op->vtkTetra::GetFace(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTetra_Contour(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Contour");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTetra *op = static_cast<vtkTetra *>(vp);

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
      op->vtkTetra::Contour(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTetra_Clip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTetra *op = static_cast<vtkTetra *>(vp);

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
      op->vtkTetra::Clip(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTetra_IntersectWithLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTetra *op = static_cast<vtkTetra *>(vp);

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
      tempr = op->vtkTetra::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
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
PyvtkTetra_Triangulate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Triangulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTetra *op = static_cast<vtkTetra *>(vp);

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
      tempr = op->vtkTetra::Triangulate(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTetra_CellBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTetra *op = static_cast<vtkTetra *>(vp);

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
      tempr = op->vtkTetra::CellBoundary(temp0, temp1, temp2);
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
PyvtkTetra_GetParametricCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParametricCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTetra *op = static_cast<vtkTetra *>(vp);

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
      tempr = op->vtkTetra::GetParametricCenter(temp0);
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
PyvtkTetra_GetParametricDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParametricDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTetra *op = static_cast<vtkTetra *>(vp);

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
      tempr = op->vtkTetra::GetParametricDistance(temp0);
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
PyvtkTetra_TetraCenter(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TetraCenter");

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  double temp3[3];
  double save3[3];
  const int size3 = 3;
  double temp4[3];
  double save4[3];
  const int size4 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);

    vtkTetra::TetraCenter(temp0, temp1, temp2, temp3, temp4);

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
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTetra_Circumsphere(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Circumsphere");

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  double temp3[3];
  double save3[3];
  const int size3 = 3;
  double temp4[3];
  double save4[3];
  const int size4 = 3;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);

    tempr = vtkTetra::Circumsphere(temp0, temp1, temp2, temp3, temp4);

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
PyvtkTetra_Insphere(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Insphere");

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  double temp3[3];
  double save3[3];
  const int size3 = 3;
  double temp4[3];
  double save4[3];
  const int size4 = 3;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);

    tempr = vtkTetra::Insphere(temp0, temp1, temp2, temp3, temp4);

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
PyvtkTetra_BarycentricCoords(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "BarycentricCoords");

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  double temp3[3];
  double save3[3];
  const int size3 = 3;
  double temp4[3];
  double save4[3];
  const int size4 = 3;
  double temp5[4];
  double save5[4];
  const int size5 = 4;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);
    ap.SaveArray(temp5, save5, size5);

    tempr = vtkTetra::BarycentricCoords(temp0, temp1, temp2, temp3, temp4, temp5);

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
PyvtkTetra_ComputeVolume(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeVolume");

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  double temp3[3];
  double save3[3];
  const int size3 = 3;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);

    tempr = vtkTetra::ComputeVolume(temp0, temp1, temp2, temp3);

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

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTetra_InterpolationFunctions(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "InterpolationFunctions");

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[4];
  double save1[4];
  const int size1 = 4;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    vtkTetra::InterpolationFunctions(temp0, temp1);

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
PyvtkTetra_InterpolationDerivs(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "InterpolationDerivs");

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[12];
  double save1[12];
  const int size1 = 12;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    vtkTetra::InterpolationDerivs(temp0, temp1);

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
PyvtkTetra_InterpolateFunctions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateFunctions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTetra *op = static_cast<vtkTetra *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[4];
  double save1[4];
  const int size1 = 4;
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
      op->vtkTetra::InterpolateFunctions(temp0, temp1);
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
PyvtkTetra_InterpolateDerivs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateDerivs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTetra *op = static_cast<vtkTetra *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[12];
  double save1[12];
  const int size1 = 12;
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
      op->vtkTetra::InterpolateDerivs(temp0, temp1);
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
PyvtkTetra_GetEdgeArray(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetEdgeArray");

  int temp0;
  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkTetra::GetEdgeArray(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkTetra_GetFaceArray(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetFaceArray");

  int temp0;
  int *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkTetra::GetFaceArray(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkTetra_Methods[] = {
  {(char*)"GetClassName", PyvtkTetra_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTetra_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTetra_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTetra\nC++: vtkTetra *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTetra_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTetra\nC++: vtkTetra *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetCellType", PyvtkTetra_GetCellType, 1,
   (char*)"V.GetCellType() -> int\nC++: int GetCellType()\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"GetNumberOfEdges", PyvtkTetra_GetNumberOfEdges, 1,
   (char*)"V.GetNumberOfEdges() -> int\nC++: int GetNumberOfEdges()\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"GetNumberOfFaces", PyvtkTetra_GetNumberOfFaces, 1,
   (char*)"V.GetNumberOfFaces() -> int\nC++: int GetNumberOfFaces()\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"GetEdge", PyvtkTetra_GetEdge, 1,
   (char*)"V.GetEdge(int) -> vtkCell\nC++: vtkCell *GetEdge(int edgeId)\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"GetFace", PyvtkTetra_GetFace, 1,
   (char*)"V.GetFace(int) -> vtkCell\nC++: vtkCell *GetFace(int faceId)\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"Contour", PyvtkTetra_Contour, 1,
   (char*)"V.Contour(float, vtkDataArray, vtkIncrementalPointLocator,\n    vtkCellArray, vtkCellArray, vtkCellArray, vtkPointData,\n    vtkPointData, vtkCellData, int, vtkCellData)\nC++: void Contour(double value, vtkDataArray *cellScalars,\n    vtkIncrementalPointLocator *locator, vtkCellArray *verts,\n    vtkCellArray *lines, vtkCellArray *polys, vtkPointData *inPd,\n    vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId,\n    vtkCellData *outCd)\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"Clip", PyvtkTetra_Clip, 1,
   (char*)"V.Clip(float, vtkDataArray, vtkIncrementalPointLocator,\n    vtkCellArray, vtkPointData, vtkPointData, vtkCellData, int,\n    vtkCellData, int)\nC++: void Clip(double value, vtkDataArray *cellScalars,\n    vtkIncrementalPointLocator *locator,\n    vtkCellArray *connectivity, vtkPointData *inPd,\n    vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId,\n    vtkCellData *outCd, int insideOut)\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"IntersectWithLine", PyvtkTetra_IntersectWithLine, 1,
   (char*)"V.IntersectWithLine([float, float, float], [float, float, float],\n    float, float, [float, float, float], [float, float, float],\n    int) -> int\nC++: int IntersectWithLine(double p1[3], double p2[3], double tol,\n     double &t, double x[3], double pcoords[3], int &subId)\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"Triangulate", PyvtkTetra_Triangulate, 1,
   (char*)"V.Triangulate(int, vtkIdList, vtkPoints) -> int\nC++: int Triangulate(int index, vtkIdList *ptIds, vtkPoints *pts)\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"CellBoundary", PyvtkTetra_CellBoundary, 1,
   (char*)"V.CellBoundary(int, [float, float, float], vtkIdList) -> int\nC++: int CellBoundary(int subId, double pcoords[3],\n    vtkIdList *pts)\n\nReturns the set of points that are on the boundary of the\ntetrahedron that are closest parametrically to the point\nspecified. This may include faces, edges, or vertices.\n"},
  {(char*)"GetParametricCenter", PyvtkTetra_GetParametricCenter, 1,
   (char*)"V.GetParametricCenter([float, float, float]) -> int\nC++: int GetParametricCenter(double pcoords[3])\n\nReturn the center of the tetrahedron in parametric coordinates.\n"},
  {(char*)"GetParametricDistance", PyvtkTetra_GetParametricDistance, 1,
   (char*)"V.GetParametricDistance([float, float, float]) -> float\nC++: double GetParametricDistance(double pcoords[3])\n\nReturn the distance of the parametric coordinate provided to the\ncell. If inside the cell, a distance of zero is returned.\n"},
  {(char*)"TetraCenter", PyvtkTetra_TetraCenter, 1,
   (char*)"V.TetraCenter([float, float, float], [float, float, float],\n    [float, float, float], [float, float, float], [float, float,\n    float])\nC++: static void TetraCenter(double p1[3], double p2[3],\n    double p3[3], double p4[3], double center[3])\n\nCompute the center of the tetrahedron,\n"},
  {(char*)"Circumsphere", PyvtkTetra_Circumsphere, 1,
   (char*)"V.Circumsphere([float, float, float], [float, float, float],\n    [float, float, float], [float, float, float], [float, float,\n    float]) -> float\nC++: static double Circumsphere(double p1[3], double p2[3],\n    double p3[3], double p4[3], double center[3])\n\nCompute the circumcenter (center[3]) and radius squared (method\nreturn value) of a tetrahedron defined by the four points x1, x2,\nx3, and x4.\n"},
  {(char*)"Insphere", PyvtkTetra_Insphere, 1,
   (char*)"V.Insphere([float, float, float], [float, float, float], [float,\n    float, float], [float, float, float], [float, float, float])\n    -> float\nC++: static double Insphere(double p1[3], double p2[3],\n    double p3[3], double p4[3], double center[3])\n\nCompute the center (center[3]) and radius (method return value)\nof a sphere that just fits inside the faces of a tetrahedron\ndefined by the four points x1, x2, x3, and x4.\n"},
  {(char*)"BarycentricCoords", PyvtkTetra_BarycentricCoords, 1,
   (char*)"V.BarycentricCoords([float, float, float], [float, float, float],\n    [float, float, float], [float, float, float], [float, float,\n    float], [float, float, float, float]) -> int\nC++: static int BarycentricCoords(double x[3], double x1[3],\n    double x2[3], double x3[3], double x4[3], double bcoords[4])\n\nGiven a 3D point x[3], determine the barycentric coordinates of\nthe point. Barycentric coordinates are a natural coordinate\nsystem for simplices that express a position as a linear\ncombination of the vertices. For a tetrahedron, there are four\nbarycentric coordinates (because there are four vertices), and\nthe sum of the coordinates must equal 1. If a point x is inside a\nsimplex, then all four coordinates will be strictly positive.  If\nthree coordinates are zero (so the fourth =1), then the point x\nis on a vertex. If two coordinates are zero, the point x is on an\nedge (and so on). In this method, you must specify the vertex\ncoordinates x1->x4. Returns 0 if tetrahedron is degenerate.\n"},
  {(char*)"ComputeVolume", PyvtkTetra_ComputeVolume, 1,
   (char*)"V.ComputeVolume([float, float, float], [float, float, float],\n    [float, float, float], [float, float, float]) -> float\nC++: static double ComputeVolume(double p1[3], double p2[3],\n    double p3[3], double p4[3])\n\nCompute the volume of a tetrahedron defined by the four points\np1, p2, p3, and p4.\n"},
  {(char*)"InterpolationFunctions", PyvtkTetra_InterpolationFunctions, 1,
   (char*)"V.InterpolationFunctions([float, float, float], [float, float,\n    float, float])\nC++: static void InterpolationFunctions(double pcoords[3],\n    double weights[4])\n\n@deprecated Replaced by vtkTetra::InterpolateFunctions as of VTK\n5.2\n"},
  {(char*)"InterpolationDerivs", PyvtkTetra_InterpolationDerivs, 1,
   (char*)"V.InterpolationDerivs([float, float, float], [float, float, float,\n     float, float, float, float, float, float, float, float,\n    float])\nC++: static void InterpolationDerivs(double pcoords[3],\n    double derivs[12])\n\n@deprecated Replaced by vtkTetra::InterpolateDerivs as of VTK 5.2\n"},
  {(char*)"InterpolateFunctions", PyvtkTetra_InterpolateFunctions, 1,
   (char*)"V.InterpolateFunctions([float, float, float], [float, float,\n    float, float])\nC++: virtual void InterpolateFunctions(double pcoords[3],\n    double weights[4])\n\nCompute the interpolation functions/derivatives (aka shape\nfunctions/derivatives)\n"},
  {(char*)"InterpolateDerivs", PyvtkTetra_InterpolateDerivs, 1,
   (char*)"V.InterpolateDerivs([float, float, float], [float, float, float,\n    float, float, float, float, float, float, float, float,\n    float])\nC++: virtual void InterpolateDerivs(double pcoords[3],\n    double derivs[12])\n\nCompute the interpolation functions/derivatives (aka shape\nfunctions/derivatives)\n"},
  {(char*)"GetEdgeArray", PyvtkTetra_GetEdgeArray, 1,
   (char*)"V.GetEdgeArray(int) -> (int, int)\nC++: static int *GetEdgeArray(int edgeId)\n\nReturn the ids of the vertices defining edge/face\n(`edgeId`/`faceId'). Ids are related to the cell, not to the\ndataset.\n"},
  {(char*)"GetFaceArray", PyvtkTetra_GetFaceArray, 1,
   (char*)"V.GetFaceArray(int) -> (int, int, int)\nC++: static int *GetFaceArray(int faceId)\n\nReturn the ids of the vertices defining edge/face\n(`edgeId`/`faceId'). Ids are related to the cell, not to the\ndataset.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTetra_StaticNew()
{
  return vtkTetra::New();
}

PyObject *PyVTKClass_vtkTetraNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTetra_StaticNew,
    PyvtkTetra_Methods,
    "vtkTetra", modulename,
    NULL, NULL,
    PyvtkTetra_Doc(),
    PyVTKClass_vtkCell3DNew(modulename));
  return cls;
}

const char **PyvtkTetra_Doc()
{
  static const char *docstring[] = {
    "vtkTetra - a 3D cell that represents a tetrahedron\n\n",
    "Superclass: vtkCell3D\n\n",
    "vtkTetra is a concrete implementation of vtkCell to represent a 3D\ntetrahedron. vtkTetra uses the standard isoparametric shape functions\nfor a linear tetrahedron. The tetrahedron is defined by the four\npoints (0-3); where (0,1,2) is the base of the tetrahedron which,\nusing the right hand rule, forms a triangle whose normal points in\nthe direction of the fourth point.\n\nSee Also:\n\nvtkConvexPointSet ",
    "vtkHexahedron vtkPyramid vtkVoxel vtkWedge\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTetra(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTetraNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTetra", o) != 0)
    {
    Py_DECREF(o);
    }

}

