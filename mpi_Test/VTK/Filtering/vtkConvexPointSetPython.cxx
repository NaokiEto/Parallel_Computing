// python wrapper for vtkConvexPointSet
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
#include "vtkConvexPointSet.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkConvexPointSet(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkConvexPointSet(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkConvexPointSetNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkConvexPointSetNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkCell3DNew
extern "C" { PyObject *PyVTKClass_vtkCell3DNew(const char *); }
#define DECLARED_PyVTKClass_vtkCell3DNew
#endif

static const char **PyvtkConvexPointSet_Doc();


static PyObject *
PyvtkConvexPointSet_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

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
      tempr = op->vtkConvexPointSet::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConvexPointSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

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
      tempr = op->vtkConvexPointSet::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConvexPointSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

  vtkConvexPointSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkConvexPointSet::NewInstance();
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
PyvtkConvexPointSet_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkConvexPointSet *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkConvexPointSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConvexPointSet_HasFixedTopology(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasFixedTopology");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->HasFixedTopology();
      }
    else
      {
      tempr = op->vtkConvexPointSet::HasFixedTopology();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConvexPointSet_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

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
      tempr = op->vtkConvexPointSet::GetCellType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConvexPointSet_RequiresInitialization(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequiresInitialization");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

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
      tempr = op->vtkConvexPointSet::RequiresInitialization();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConvexPointSet_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkConvexPointSet::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConvexPointSet_GetNumberOfEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

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
      tempr = op->vtkConvexPointSet::GetNumberOfEdges();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConvexPointSet_GetEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

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
      tempr = op->vtkConvexPointSet::GetEdge(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConvexPointSet_GetNumberOfFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

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
      tempr = op->vtkConvexPointSet::GetNumberOfFaces();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConvexPointSet_GetFace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

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
      tempr = op->vtkConvexPointSet::GetFace(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConvexPointSet_Contour(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Contour");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

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
      op->vtkConvexPointSet::Contour(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConvexPointSet_Clip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

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
      op->vtkConvexPointSet::Clip(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConvexPointSet_IntersectWithLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

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
      tempr = op->vtkConvexPointSet::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
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
PyvtkConvexPointSet_Triangulate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Triangulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

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
      tempr = op->vtkConvexPointSet::Triangulate(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConvexPointSet_CellBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

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
      tempr = op->vtkConvexPointSet::CellBoundary(temp0, temp1, temp2);
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
PyvtkConvexPointSet_GetParametricCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParametricCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

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
      tempr = op->vtkConvexPointSet::GetParametricCenter(temp0);
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
PyvtkConvexPointSet_IsPrimaryCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPrimaryCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

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
      tempr = op->vtkConvexPointSet::IsPrimaryCell();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkConvexPointSet_Methods[] = {
  {(char*)"GetClassName", PyvtkConvexPointSet_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkConvexPointSet_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkConvexPointSet_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkConvexPointSet\nC++: vtkConvexPointSet *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkConvexPointSet_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkConvexPointSet\nC++: vtkConvexPointSet *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"HasFixedTopology", PyvtkConvexPointSet_HasFixedTopology, 1,
   (char*)"V.HasFixedTopology() -> int\nC++: virtual int HasFixedTopology()\n\nSee vtkCell3D API for description of this method.\n"},
  {(char*)"GetCellType", PyvtkConvexPointSet_GetCellType, 1,
   (char*)"V.GetCellType() -> int\nC++: virtual int GetCellType()\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"RequiresInitialization", PyvtkConvexPointSet_RequiresInitialization, 1,
   (char*)"V.RequiresInitialization() -> int\nC++: virtual int RequiresInitialization()\n\nThis cell requires that it be initialized prior to access.\n"},
  {(char*)"Initialize", PyvtkConvexPointSet_Initialize, 1,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nThis cell requires that it be initialized prior to access.\n"},
  {(char*)"GetNumberOfEdges", PyvtkConvexPointSet_GetNumberOfEdges, 1,
   (char*)"V.GetNumberOfEdges() -> int\nC++: virtual int GetNumberOfEdges()\n\nA convex point set has no explicit cell edge or faces; however\nimplicitly (after triangulation) it does. Currently the method\nGetNumberOfEdges() always returns 0 while the GetNumberOfFaces()\nreturns the number of boundary triangles of the triangulation of\nthe convex point set. The method GetNumberOfFaces() triggers a\ntriangulation of the convex point set; repeated calls to\nGetFace() then return the boundary faces. (Note:\nGetNumberOfEdges() currently returns 0 because it is a rarely\nused method and hard to implement. It can be changed in the\nfuture.\n"},
  {(char*)"GetEdge", PyvtkConvexPointSet_GetEdge, 1,
   (char*)"V.GetEdge(int) -> vtkCell\nC++: virtual vtkCell *GetEdge(int)\n\nA convex point set has no explicit cell edge or faces; however\nimplicitly (after triangulation) it does. Currently the method\nGetNumberOfEdges() always returns 0 while the GetNumberOfFaces()\nreturns the number of boundary triangles of the triangulation of\nthe convex point set. The method GetNumberOfFaces() triggers a\ntriangulation of the convex point set; repeated calls to\nGetFace() then return the boundary faces. (Note:\nGetNumberOfEdges() currently returns 0 because it is a rarely\nused method and hard to implement. It can be changed in the\nfuture.\n"},
  {(char*)"GetNumberOfFaces", PyvtkConvexPointSet_GetNumberOfFaces, 1,
   (char*)"V.GetNumberOfFaces() -> int\nC++: virtual int GetNumberOfFaces()\n\nA convex point set has no explicit cell edge or faces; however\nimplicitly (after triangulation) it does. Currently the method\nGetNumberOfEdges() always returns 0 while the GetNumberOfFaces()\nreturns the number of boundary triangles of the triangulation of\nthe convex point set. The method GetNumberOfFaces() triggers a\ntriangulation of the convex point set; repeated calls to\nGetFace() then return the boundary faces. (Note:\nGetNumberOfEdges() currently returns 0 because it is a rarely\nused method and hard to implement. It can be changed in the\nfuture.\n"},
  {(char*)"GetFace", PyvtkConvexPointSet_GetFace, 1,
   (char*)"V.GetFace(int) -> vtkCell\nC++: virtual vtkCell *GetFace(int faceId)\n\nA convex point set has no explicit cell edge or faces; however\nimplicitly (after triangulation) it does. Currently the method\nGetNumberOfEdges() always returns 0 while the GetNumberOfFaces()\nreturns the number of boundary triangles of the triangulation of\nthe convex point set. The method GetNumberOfFaces() triggers a\ntriangulation of the convex point set; repeated calls to\nGetFace() then return the boundary faces. (Note:\nGetNumberOfEdges() currently returns 0 because it is a rarely\nused method and hard to implement. It can be changed in the\nfuture.\n"},
  {(char*)"Contour", PyvtkConvexPointSet_Contour, 1,
   (char*)"V.Contour(float, vtkDataArray, vtkIncrementalPointLocator,\n    vtkCellArray, vtkCellArray, vtkCellArray, vtkPointData,\n    vtkPointData, vtkCellData, int, vtkCellData)\nC++: virtual void Contour(double value, vtkDataArray *cellScalars,\n     vtkIncrementalPointLocator *locator, vtkCellArray *verts,\n    vtkCellArray *lines, vtkCellArray *polys, vtkPointData *inPd,\n    vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId,\n    vtkCellData *outCd)\n\nSatisfy the vtkCell API. This method contours by triangulating\nthe cell and then contouring the resulting tetrahedra.\n"},
  {(char*)"Clip", PyvtkConvexPointSet_Clip, 1,
   (char*)"V.Clip(float, vtkDataArray, vtkIncrementalPointLocator,\n    vtkCellArray, vtkPointData, vtkPointData, vtkCellData, int,\n    vtkCellData, int)\nC++: virtual void Clip(double value, vtkDataArray *cellScalars,\n    vtkIncrementalPointLocator *locator,\n    vtkCellArray *connectivity, vtkPointData *inPd,\n    vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId,\n    vtkCellData *outCd, int insideOut)\n\nSatisfy the vtkCell API. This method contours by triangulating\nthe cell and then adding clip-edge intersection points into the\ntriangulation; extracting the clipped region.\n"},
  {(char*)"IntersectWithLine", PyvtkConvexPointSet_IntersectWithLine, 1,
   (char*)"V.IntersectWithLine([float, float, float], [float, float, float],\n    float, float, [float, float, float], [float, float, float],\n    int) -> int\nC++: virtual int IntersectWithLine(double p1[3], double p2[3],\n    double tol, double &t, double x[3], double pcoords[3],\n    int &subId)\n\nTriangulates the cells and then intersects them to determine the\nintersection point.\n"},
  {(char*)"Triangulate", PyvtkConvexPointSet_Triangulate, 1,
   (char*)"V.Triangulate(int, vtkIdList, vtkPoints) -> int\nC++: virtual int Triangulate(int index, vtkIdList *ptIds,\n    vtkPoints *pts)\n\nTriangulate using methods of vtkOrderedTriangulator.\n"},
  {(char*)"CellBoundary", PyvtkConvexPointSet_CellBoundary, 1,
   (char*)"V.CellBoundary(int, [float, float, float], vtkIdList) -> int\nC++: virtual int CellBoundary(int subId, double pcoords[3],\n    vtkIdList *pts)\n\nReturns the set of points forming a face of the triangulation of\nthese points that are on the boundary of the cell that are\nclosest parametrically to the point specified.\n"},
  {(char*)"GetParametricCenter", PyvtkConvexPointSet_GetParametricCenter, 1,
   (char*)"V.GetParametricCenter([float, float, float]) -> int\nC++: virtual int GetParametricCenter(double pcoords[3])\n\nReturn the center of the cell in parametric coordinates.\n"},
  {(char*)"IsPrimaryCell", PyvtkConvexPointSet_IsPrimaryCell, 1,
   (char*)"V.IsPrimaryCell() -> int\nC++: int IsPrimaryCell()\n\nA convex point set is triangulated prior to any operations on it\nso it is not a primary cell, it is a composite cell.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkConvexPointSet_StaticNew()
{
  return vtkConvexPointSet::New();
}

PyObject *PyVTKClass_vtkConvexPointSetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkConvexPointSet_StaticNew,
    PyvtkConvexPointSet_Methods,
    "vtkConvexPointSet", modulename,
    NULL, NULL,
    PyvtkConvexPointSet_Doc(),
    PyVTKClass_vtkCell3DNew(modulename));
  return cls;
}

const char **PyvtkConvexPointSet_Doc()
{
  static const char *docstring[] = {
    "vtkConvexPointSet - a 3D cell defined by a set of convex points\n\n",
    "Superclass: vtkCell3D\n\n",
    "vtkConvexPointSet is a concrete implementation that represents a 3D\ncell defined by a convex set of points. An example of such a cell is\nan octant (from an octree). vtkConvexPointSet uses the ordered\ntriangulations approach (vtkOrderedTriangulator) to create\ntriangulations guaranteed to be compatible across shared faces. This\nallows a general approach to processing complex, convex cell types.\n\nSee",
    " Also:\n\nvtkHexahedron vtkPyramid vtkTetra vtkVoxel vtkWedge\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkConvexPointSet(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkConvexPointSetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkConvexPointSet", o) != 0)
    {
    Py_DECREF(o);
    }

}

