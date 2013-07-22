// python wrapper for vtkWedge
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
#include "vtkWedge.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkWedge(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkWedge(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkWedgeNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkWedgeNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkCell3DNew
extern "C" { PyObject *PyVTKClass_vtkCell3DNew(const char *); }
#define DECLARED_PyVTKClass_vtkCell3DNew
#endif

static const char **PyvtkWedge_Doc();


static PyObject *
PyvtkWedge_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

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
      tempr = op->vtkWedge::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWedge_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

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
      tempr = op->vtkWedge::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWedge_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

  vtkWedge *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkWedge::NewInstance();
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
PyvtkWedge_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkWedge *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkWedge::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWedge_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

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
      tempr = op->vtkWedge::GetCellType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWedge_GetCellDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

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
      tempr = op->vtkWedge::GetCellDimension();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWedge_GetNumberOfEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

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
      tempr = op->vtkWedge::GetNumberOfEdges();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWedge_GetNumberOfFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

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
      tempr = op->vtkWedge::GetNumberOfFaces();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWedge_GetEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

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
      tempr = op->vtkWedge::GetEdge(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWedge_GetFace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

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
      tempr = op->vtkWedge::GetFace(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWedge_CellBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

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
      tempr = op->vtkWedge::CellBoundary(temp0, temp1, temp2);
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
PyvtkWedge_Contour(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Contour");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

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
      op->vtkWedge::Contour(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWedge_IntersectWithLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

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
      tempr = op->vtkWedge::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
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
PyvtkWedge_Triangulate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Triangulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

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
      tempr = op->vtkWedge::Triangulate(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWedge_GetParametricCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParametricCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

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
      tempr = op->vtkWedge::GetParametricCenter(temp0);
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
PyvtkWedge_InterpolationFunctions(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "InterpolationFunctions");

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[6];
  double save1[6];
  const int size1 = 6;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    vtkWedge::InterpolationFunctions(temp0, temp1);

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
PyvtkWedge_InterpolationDerivs(PyObject *, PyObject *args)
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

    vtkWedge::InterpolationDerivs(temp0, temp1);

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
PyvtkWedge_InterpolateFunctions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateFunctions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[6];
  double save1[6];
  const int size1 = 6;
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
      op->vtkWedge::InterpolateFunctions(temp0, temp1);
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
PyvtkWedge_InterpolateDerivs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateDerivs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

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
      op->vtkWedge::InterpolateDerivs(temp0, temp1);
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
PyvtkWedge_GetEdgeArray(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetEdgeArray");

  int temp0;
  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkWedge::GetEdgeArray(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkWedge_GetFaceArray(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetFaceArray");

  int temp0;
  int *tempr;
  int sizer = 4;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkWedge::GetFaceArray(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkWedge_Methods[] = {
  {(char*)"GetClassName", PyvtkWedge_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkWedge_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkWedge_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkWedge\nC++: vtkWedge *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkWedge_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkWedge\nC++: vtkWedge *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetCellType", PyvtkWedge_GetCellType, 1,
   (char*)"V.GetCellType() -> int\nC++: int GetCellType()\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"GetCellDimension", PyvtkWedge_GetCellDimension, 1,
   (char*)"V.GetCellDimension() -> int\nC++: int GetCellDimension()\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"GetNumberOfEdges", PyvtkWedge_GetNumberOfEdges, 1,
   (char*)"V.GetNumberOfEdges() -> int\nC++: int GetNumberOfEdges()\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"GetNumberOfFaces", PyvtkWedge_GetNumberOfFaces, 1,
   (char*)"V.GetNumberOfFaces() -> int\nC++: int GetNumberOfFaces()\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"GetEdge", PyvtkWedge_GetEdge, 1,
   (char*)"V.GetEdge(int) -> vtkCell\nC++: vtkCell *GetEdge(int edgeId)\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"GetFace", PyvtkWedge_GetFace, 1,
   (char*)"V.GetFace(int) -> vtkCell\nC++: vtkCell *GetFace(int faceId)\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"CellBoundary", PyvtkWedge_CellBoundary, 1,
   (char*)"V.CellBoundary(int, [float, float, float], vtkIdList) -> int\nC++: int CellBoundary(int subId, double pcoords[3],\n    vtkIdList *pts)\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"Contour", PyvtkWedge_Contour, 1,
   (char*)"V.Contour(float, vtkDataArray, vtkIncrementalPointLocator,\n    vtkCellArray, vtkCellArray, vtkCellArray, vtkPointData,\n    vtkPointData, vtkCellData, int, vtkCellData)\nC++: void Contour(double value, vtkDataArray *cellScalars,\n    vtkIncrementalPointLocator *locator, vtkCellArray *verts,\n    vtkCellArray *lines, vtkCellArray *polys, vtkPointData *inPd,\n    vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId,\n    vtkCellData *outCd)\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"IntersectWithLine", PyvtkWedge_IntersectWithLine, 1,
   (char*)"V.IntersectWithLine([float, float, float], [float, float, float],\n    float, float, [float, float, float], [float, float, float],\n    int) -> int\nC++: int IntersectWithLine(double p1[3], double p2[3], double tol,\n     double &t, double x[3], double pcoords[3], int &subId)\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"Triangulate", PyvtkWedge_Triangulate, 1,
   (char*)"V.Triangulate(int, vtkIdList, vtkPoints) -> int\nC++: int Triangulate(int index, vtkIdList *ptIds, vtkPoints *pts)\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"GetParametricCenter", PyvtkWedge_GetParametricCenter, 1,
   (char*)"V.GetParametricCenter([float, float, float]) -> int\nC++: int GetParametricCenter(double pcoords[3])\n\nReturn the center of the wedge in parametric coordinates.\n"},
  {(char*)"InterpolationFunctions", PyvtkWedge_InterpolationFunctions, 1,
   (char*)"V.InterpolationFunctions([float, float, float], [float, float,\n    float, float, float, float])\nC++: static void InterpolationFunctions(double pcoords[3],\n    double weights[6])\n\n@deprecated Replaced by vtkWedge::InterpolateFunctions as of VTK\n5.2\n"},
  {(char*)"InterpolationDerivs", PyvtkWedge_InterpolationDerivs, 1,
   (char*)"V.InterpolationDerivs([float, float, float], [float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float])\nC++: static void InterpolationDerivs(double pcoords[3],\n    double derivs[18])\n\n@deprecated Replaced by vtkWedge::InterpolateDerivs as of VTK 5.2\n"},
  {(char*)"InterpolateFunctions", PyvtkWedge_InterpolateFunctions, 1,
   (char*)"V.InterpolateFunctions([float, float, float], [float, float,\n    float, float, float, float])\nC++: virtual void InterpolateFunctions(double pcoords[3],\n    double weights[6])\n\nCompute the interpolation functions/derivatives (aka shape\nfunctions/derivatives)\n"},
  {(char*)"InterpolateDerivs", PyvtkWedge_InterpolateDerivs, 1,
   (char*)"V.InterpolateDerivs([float, float, float], [float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float])\nC++: virtual void InterpolateDerivs(double pcoords[3],\n    double derivs[18])\n\nCompute the interpolation functions/derivatives (aka shape\nfunctions/derivatives)\n"},
  {(char*)"GetEdgeArray", PyvtkWedge_GetEdgeArray, 1,
   (char*)"V.GetEdgeArray(int) -> (int, int)\nC++: static int *GetEdgeArray(int edgeId)\n\nReturn the ids of the vertices defining edge/face\n(`edgeId`/`faceId'). Ids are related to the cell, not to the\ndataset.\n"},
  {(char*)"GetFaceArray", PyvtkWedge_GetFaceArray, 1,
   (char*)"V.GetFaceArray(int) -> (int, int, int, int)\nC++: static int *GetFaceArray(int faceId)\n\nReturn the ids of the vertices defining edge/face\n(`edgeId`/`faceId'). Ids are related to the cell, not to the\ndataset.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkWedge_StaticNew()
{
  return vtkWedge::New();
}

PyObject *PyVTKClass_vtkWedgeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkWedge_StaticNew,
    PyvtkWedge_Methods,
    "vtkWedge", modulename,
    NULL, NULL,
    PyvtkWedge_Doc(),
    PyVTKClass_vtkCell3DNew(modulename));
  return cls;
}

const char **PyvtkWedge_Doc()
{
  static const char *docstring[] = {
    "vtkWedge - a 3D cell that represents a linear wedge\n\n",
    "Superclass: vtkCell3D\n\n",
    "vtkWedge is a concrete implementation of vtkCell to represent a\nlinear 3D wedge. A wedge consists of two triangular and three\nquadrilateral faces and is defined by the six points (0-5). vtkWedge\nuses the standard isoparametric shape functions for a linear wedge.\nThe wedge is defined by the six points (0-5) where (0,1,2) is the\nbase of the wedge which, using the right hand rule, forms a triangle\nwh",
    "ose normal points outward (away from the triangular face (3,4,5)).\n\nSee Also:\n\nvtkConvexPointSet vtkHexahedron vtkPyramid vtkTetra vtkVoxel\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkWedge(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkWedgeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkWedge", o) != 0)
    {
    Py_DECREF(o);
    }

}

