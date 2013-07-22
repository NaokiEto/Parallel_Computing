// python wrapper for vtkBiQuadraticQuad
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
#include "vtkBiQuadraticQuad.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkBiQuadraticQuad(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkBiQuadraticQuad(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkBiQuadraticQuadNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkBiQuadraticQuadNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkNonLinearCellNew
extern "C" { PyObject *PyVTKClass_vtkNonLinearCellNew(const char *); }
#define DECLARED_PyVTKClass_vtkNonLinearCellNew
#endif

static const char **PyvtkBiQuadraticQuad_Doc();


static PyObject *
PyvtkBiQuadraticQuad_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuad *op = static_cast<vtkBiQuadraticQuad *>(vp);

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
      tempr = op->vtkBiQuadraticQuad::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiQuadraticQuad_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuad *op = static_cast<vtkBiQuadraticQuad *>(vp);

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
      tempr = op->vtkBiQuadraticQuad::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiQuadraticQuad_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuad *op = static_cast<vtkBiQuadraticQuad *>(vp);

  vtkBiQuadraticQuad *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkBiQuadraticQuad::NewInstance();
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
PyvtkBiQuadraticQuad_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkBiQuadraticQuad *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkBiQuadraticQuad::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiQuadraticQuad_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuad *op = static_cast<vtkBiQuadraticQuad *>(vp);

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
      tempr = op->vtkBiQuadraticQuad::GetCellType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiQuadraticQuad_GetCellDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuad *op = static_cast<vtkBiQuadraticQuad *>(vp);

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
      tempr = op->vtkBiQuadraticQuad::GetCellDimension();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiQuadraticQuad_GetNumberOfEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuad *op = static_cast<vtkBiQuadraticQuad *>(vp);

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
      tempr = op->vtkBiQuadraticQuad::GetNumberOfEdges();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiQuadraticQuad_GetNumberOfFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuad *op = static_cast<vtkBiQuadraticQuad *>(vp);

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
      tempr = op->vtkBiQuadraticQuad::GetNumberOfFaces();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiQuadraticQuad_GetEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuad *op = static_cast<vtkBiQuadraticQuad *>(vp);

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
      tempr = op->vtkBiQuadraticQuad::GetEdge(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiQuadraticQuad_GetFace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuad *op = static_cast<vtkBiQuadraticQuad *>(vp);

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
      tempr = op->vtkBiQuadraticQuad::GetFace(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiQuadraticQuad_CellBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuad *op = static_cast<vtkBiQuadraticQuad *>(vp);

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
      tempr = op->vtkBiQuadraticQuad::CellBoundary(temp0, temp1, temp2);
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
PyvtkBiQuadraticQuad_Triangulate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Triangulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuad *op = static_cast<vtkBiQuadraticQuad *>(vp);

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
      tempr = op->vtkBiQuadraticQuad::Triangulate(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiQuadraticQuad_Contour(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Contour");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuad *op = static_cast<vtkBiQuadraticQuad *>(vp);

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
      op->vtkBiQuadraticQuad::Contour(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBiQuadraticQuad_Clip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuad *op = static_cast<vtkBiQuadraticQuad *>(vp);

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
      op->vtkBiQuadraticQuad::Clip(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBiQuadraticQuad_IntersectWithLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuad *op = static_cast<vtkBiQuadraticQuad *>(vp);

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
      tempr = op->vtkBiQuadraticQuad::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
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
PyvtkBiQuadraticQuad_GetParametricCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParametricCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuad *op = static_cast<vtkBiQuadraticQuad *>(vp);

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
      tempr = op->vtkBiQuadraticQuad::GetParametricCenter(temp0);
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
PyvtkBiQuadraticQuad_InterpolationFunctions(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "InterpolationFunctions");

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[9];
  double save1[9];
  const int size1 = 9;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    vtkBiQuadraticQuad::InterpolationFunctions(temp0, temp1);

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
PyvtkBiQuadraticQuad_InterpolationDerivs(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "InterpolationDerivs");

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[18];
  double save1[18];
  const int size1 = 18;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    vtkBiQuadraticQuad::InterpolationDerivs(temp0, temp1);

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
PyvtkBiQuadraticQuad_InterpolateFunctions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateFunctions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuad *op = static_cast<vtkBiQuadraticQuad *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[9];
  double save1[9];
  const int size1 = 9;
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
      op->vtkBiQuadraticQuad::InterpolateFunctions(temp0, temp1);
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
PyvtkBiQuadraticQuad_InterpolateDerivs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateDerivs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuad *op = static_cast<vtkBiQuadraticQuad *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[18];
  double save1[18];
  const int size1 = 18;
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
      op->vtkBiQuadraticQuad::InterpolateDerivs(temp0, temp1);
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

static PyMethodDef PyvtkBiQuadraticQuad_Methods[] = {
  {(char*)"GetClassName", PyvtkBiQuadraticQuad_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBiQuadraticQuad_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBiQuadraticQuad_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkBiQuadraticQuad\nC++: vtkBiQuadraticQuad *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkBiQuadraticQuad_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBiQuadraticQuad\nC++: vtkBiQuadraticQuad *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetCellType", PyvtkBiQuadraticQuad_GetCellType, 1,
   (char*)"V.GetCellType() -> int\nC++: int GetCellType()\n\nImplement the vtkCell API. See the vtkCell API for descriptions\nof these methods.\n"},
  {(char*)"GetCellDimension", PyvtkBiQuadraticQuad_GetCellDimension, 1,
   (char*)"V.GetCellDimension() -> int\nC++: int GetCellDimension()\n\nImplement the vtkCell API. See the vtkCell API for descriptions\nof these methods.\n"},
  {(char*)"GetNumberOfEdges", PyvtkBiQuadraticQuad_GetNumberOfEdges, 1,
   (char*)"V.GetNumberOfEdges() -> int\nC++: int GetNumberOfEdges()\n\nImplement the vtkCell API. See the vtkCell API for descriptions\nof these methods.\n"},
  {(char*)"GetNumberOfFaces", PyvtkBiQuadraticQuad_GetNumberOfFaces, 1,
   (char*)"V.GetNumberOfFaces() -> int\nC++: int GetNumberOfFaces()\n\nImplement the vtkCell API. See the vtkCell API for descriptions\nof these methods.\n"},
  {(char*)"GetEdge", PyvtkBiQuadraticQuad_GetEdge, 1,
   (char*)"V.GetEdge(int) -> vtkCell\nC++: vtkCell *GetEdge(int)\n\nImplement the vtkCell API. See the vtkCell API for descriptions\nof these methods.\n"},
  {(char*)"GetFace", PyvtkBiQuadraticQuad_GetFace, 1,
   (char*)"V.GetFace(int) -> vtkCell\nC++: vtkCell *GetFace(int)\n\nImplement the vtkCell API. See the vtkCell API for descriptions\nof these methods.\n"},
  {(char*)"CellBoundary", PyvtkBiQuadraticQuad_CellBoundary, 1,
   (char*)"V.CellBoundary(int, [float, float, float], vtkIdList) -> int\nC++: int CellBoundary(int subId, double pcoords[3],\n    vtkIdList *pts)\n\n"},
  {(char*)"Triangulate", PyvtkBiQuadraticQuad_Triangulate, 1,
   (char*)"V.Triangulate(int, vtkIdList, vtkPoints) -> int\nC++: int Triangulate(int index, vtkIdList *ptIds, vtkPoints *pts)\n\n"},
  {(char*)"Contour", PyvtkBiQuadraticQuad_Contour, 1,
   (char*)"V.Contour(float, vtkDataArray, vtkIncrementalPointLocator,\n    vtkCellArray, vtkCellArray, vtkCellArray, vtkPointData,\n    vtkPointData, vtkCellData, int, vtkCellData)\nC++: void Contour(double value, vtkDataArray *cellScalars,\n    vtkIncrementalPointLocator *locator, vtkCellArray *verts,\n    vtkCellArray *lines, vtkCellArray *polys, vtkPointData *inPd,\n    vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId,\n    vtkCellData *outCd)\n\n"},
  {(char*)"Clip", PyvtkBiQuadraticQuad_Clip, 1,
   (char*)"V.Clip(float, vtkDataArray, vtkIncrementalPointLocator,\n    vtkCellArray, vtkPointData, vtkPointData, vtkCellData, int,\n    vtkCellData, int)\nC++: void Clip(double value, vtkDataArray *cellScalars,\n    vtkIncrementalPointLocator *locator, vtkCellArray *polys,\n    vtkPointData *inPd, vtkPointData *outPd, vtkCellData *inCd,\n    vtkIdType cellId, vtkCellData *outCd, int insideOut)\n\nClip this biquadratic quad using scalar value provided. Like\ncontouring, except that it cuts the twi quads to produce linear\ntriangles.\n"},
  {(char*)"IntersectWithLine", PyvtkBiQuadraticQuad_IntersectWithLine, 1,
   (char*)"V.IntersectWithLine([float, float, float], [float, float, float],\n    float, float, [float, float, float], [float, float, float],\n    int) -> int\nC++: int IntersectWithLine(double p1[3], double p2[3], double tol,\n     double &t, double x[3], double pcoords[3], int &subId)\n\nLine-edge intersection. Intersection has to occur within [0,1]\nparametric coordinates and with specified tolerance.\n"},
  {(char*)"GetParametricCenter", PyvtkBiQuadraticQuad_GetParametricCenter, 1,
   (char*)"V.GetParametricCenter([float, float, float]) -> int\nC++: int GetParametricCenter(double pcoords[3])\n\nReturn the center of the pyramid in parametric coordinates.\n"},
  {(char*)"InterpolationFunctions", PyvtkBiQuadraticQuad_InterpolationFunctions, 1,
   (char*)"V.InterpolationFunctions([float, float, float], [float, float,\n    float, float, float, float, float, float, float])\nC++: static void InterpolationFunctions(double pcoords[3],\n    double weights[9])\n\n@deprecated Replaced by vtkBiQuadraticQuad::InterpolateFunctions\nas of VTK 5.2\n"},
  {(char*)"InterpolationDerivs", PyvtkBiQuadraticQuad_InterpolationDerivs, 1,
   (char*)"V.InterpolationDerivs([float, float, float], [float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float])\nC++: static void InterpolationDerivs(double pcoords[3],\n    double derivs[18])\n\n@deprecated Replaced by vtkBiQuadraticQuad::InterpolateDerivs as\nof VTK 5.2\n"},
  {(char*)"InterpolateFunctions", PyvtkBiQuadraticQuad_InterpolateFunctions, 1,
   (char*)"V.InterpolateFunctions([float, float, float], [float, float,\n    float, float, float, float, float, float, float])\nC++: virtual void InterpolateFunctions(double pcoords[3],\n    double weights[9])\n\nCompute the interpolation functions/derivatives (aka shape\nfunctions/derivatives)\n"},
  {(char*)"InterpolateDerivs", PyvtkBiQuadraticQuad_InterpolateDerivs, 1,
   (char*)"V.InterpolateDerivs([float, float, float], [float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float])\nC++: virtual void InterpolateDerivs(double pcoords[3],\n    double derivs[18])\n\nCompute the interpolation functions/derivatives (aka shape\nfunctions/derivatives)\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBiQuadraticQuad_StaticNew()
{
  return vtkBiQuadraticQuad::New();
}

PyObject *PyVTKClass_vtkBiQuadraticQuadNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBiQuadraticQuad_StaticNew,
    PyvtkBiQuadraticQuad_Methods,
    "vtkBiQuadraticQuad", modulename,
    NULL, NULL,
    PyvtkBiQuadraticQuad_Doc(),
    PyVTKClass_vtkNonLinearCellNew(modulename));
  return cls;
}

const char **PyvtkBiQuadraticQuad_Doc()
{
  static const char *docstring[] = {
    "vtkBiQuadraticQuad - cell represents a parabolic, 9-node\n\n",
    "Superclass: vtkNonLinearCell\n\n",
    "vtkQuadraticQuad is a concrete implementation of vtkNonLinearCell to\nrepresent a two-dimensional, 9-node isoparametric parabolic\nquadrilateral element with a Centerpoint. The interpolation is the\nstandard finite element, quadratic isoparametric shape function. The\ncell includes a mid-edge node for each of the four edges of the cell\nand a center node at the surface. The ordering of the eight points",
    "\ndefining the cell are point ids (0-3,4-8) where ids 0-3 define the\nfour corner vertices of the quad; ids 4-7 define the midedge nodes\n(0,1), (1,2), (2,3), (3,0) and 8 define the face center node.\n\nSee Also:\n\nvtkQuadraticEdge vtkQuadraticTriangle vtkQuadraticTetra\nvtkQuadraticHexahedron vtkQuadraticWedge vtkQuadraticPyramid\nvtkQuadraticQuad\n\nThanks:\n\nThanks to Soeren Gebbert  who developed this cl",
    "ass and integrated it\ninto VTK 5.0.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBiQuadraticQuad(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBiQuadraticQuadNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBiQuadraticQuad", o) != 0)
    {
    Py_DECREF(o);
    }

}

