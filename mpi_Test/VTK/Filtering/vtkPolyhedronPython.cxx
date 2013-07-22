// python wrapper for vtkPolyhedron
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
#include "vtkPolyhedron.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPolyhedron(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPolyhedron(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPolyhedronNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPolyhedronNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkCell3DNew
extern "C" { PyObject *PyVTKClass_vtkCell3DNew(const char *); }
#define DECLARED_PyVTKClass_vtkCell3DNew
#endif

static const char **PyvtkPolyhedron_Doc();


static PyObject *
PyvtkPolyhedron_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

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
      tempr = op->vtkPolyhedron::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyhedron_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

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
      tempr = op->vtkPolyhedron::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyhedron_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

  vtkPolyhedron *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPolyhedron::NewInstance();
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
PyvtkPolyhedron_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPolyhedron *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPolyhedron::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyhedron_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

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
      tempr = op->vtkPolyhedron::GetCellType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyhedron_RequiresInitialization(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequiresInitialization");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

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
      tempr = op->vtkPolyhedron::RequiresInitialization();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyhedron_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkPolyhedron::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyhedron_GetNumberOfEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

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
      tempr = op->vtkPolyhedron::GetNumberOfEdges();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyhedron_GetEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

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
      tempr = op->vtkPolyhedron::GetEdge(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyhedron_GetNumberOfFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

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
      tempr = op->vtkPolyhedron::GetNumberOfFaces();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyhedron_GetFace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

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
      tempr = op->vtkPolyhedron::GetFace(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyhedron_Contour(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Contour");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

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
      op->vtkPolyhedron::Contour(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyhedron_Clip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

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
      op->vtkPolyhedron::Clip(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyhedron_IntersectWithLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

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
      tempr = op->vtkPolyhedron::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
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
PyvtkPolyhedron_Triangulate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Triangulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

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
      tempr = op->vtkPolyhedron::Triangulate(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyhedron_CellBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

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
      tempr = op->vtkPolyhedron::CellBoundary(temp0, temp1, temp2);
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
PyvtkPolyhedron_GetParametricCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParametricCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

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
      tempr = op->vtkPolyhedron::GetParametricCenter(temp0);
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
PyvtkPolyhedron_IsPrimaryCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPrimaryCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

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
      tempr = op->vtkPolyhedron::IsPrimaryCell();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyhedron_RequiresExplicitFaceRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequiresExplicitFaceRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

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
      tempr = op->vtkPolyhedron::RequiresExplicitFaceRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyhedron_IsInside(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInside");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      tempr = op->IsInside(temp0, temp1);
      }
    else
      {
      tempr = op->vtkPolyhedron::IsInside(temp0, temp1);
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
PyvtkPolyhedron_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

  vtkPolyData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPolyData();
      }
    else
      {
      tempr = op->vtkPolyhedron::GetPolyData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPolyhedron_Methods[] = {
  {(char*)"GetClassName", PyvtkPolyhedron_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard new methods.\n"},
  {(char*)"IsA", PyvtkPolyhedron_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard new methods.\n"},
  {(char*)"NewInstance", PyvtkPolyhedron_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPolyhedron\nC++: vtkPolyhedron *NewInstance()\n\nStandard new methods.\n"},
  {(char*)"SafeDownCast", PyvtkPolyhedron_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPolyhedron\nC++: vtkPolyhedron *SafeDownCast(vtkObject* o)\n\nStandard new methods.\n"},
  {(char*)"GetCellType", PyvtkPolyhedron_GetCellType, 1,
   (char*)"V.GetCellType() -> int\nC++: virtual int GetCellType()\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"RequiresInitialization", PyvtkPolyhedron_RequiresInitialization, 1,
   (char*)"V.RequiresInitialization() -> int\nC++: virtual int RequiresInitialization()\n\nThis cell requires that it be initialized prior to access.\n"},
  {(char*)"Initialize", PyvtkPolyhedron_Initialize, 1,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nThis cell requires that it be initialized prior to access.\n"},
  {(char*)"GetNumberOfEdges", PyvtkPolyhedron_GetNumberOfEdges, 1,
   (char*)"V.GetNumberOfEdges() -> int\nC++: virtual int GetNumberOfEdges()\n\nA polyhedron is represented internally by a set of polygonal\nfaces. These faces can be processed to explicitly determine\nedges.\n"},
  {(char*)"GetEdge", PyvtkPolyhedron_GetEdge, 1,
   (char*)"V.GetEdge(int) -> vtkCell\nC++: virtual vtkCell *GetEdge(int)\n\nA polyhedron is represented internally by a set of polygonal\nfaces. These faces can be processed to explicitly determine\nedges.\n"},
  {(char*)"GetNumberOfFaces", PyvtkPolyhedron_GetNumberOfFaces, 1,
   (char*)"V.GetNumberOfFaces() -> int\nC++: virtual int GetNumberOfFaces()\n\nA polyhedron is represented internally by a set of polygonal\nfaces. These faces can be processed to explicitly determine\nedges.\n"},
  {(char*)"GetFace", PyvtkPolyhedron_GetFace, 1,
   (char*)"V.GetFace(int) -> vtkCell\nC++: virtual vtkCell *GetFace(int faceId)\n\nA polyhedron is represented internally by a set of polygonal\nfaces. These faces can be processed to explicitly determine\nedges.\n"},
  {(char*)"Contour", PyvtkPolyhedron_Contour, 1,
   (char*)"V.Contour(float, vtkDataArray, vtkIncrementalPointLocator,\n    vtkCellArray, vtkCellArray, vtkCellArray, vtkPointData,\n    vtkPointData, vtkCellData, int, vtkCellData)\nC++: virtual void Contour(double value, vtkDataArray *scalars,\n    vtkIncrementalPointLocator *locator, vtkCellArray *verts,\n    vtkCellArray *lines, vtkCellArray *polys, vtkPointData *inPd,\n    vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId,\n    vtkCellData *outCd)\n\nSatisfy the vtkCell API. This method contours the input\npolyhedron and outputs a polygon. When the result polygon is not\nplanar, it will be triangulated. The current implementation\nassumes water-tight polyhedron cells.\n"},
  {(char*)"Clip", PyvtkPolyhedron_Clip, 1,
   (char*)"V.Clip(float, vtkDataArray, vtkIncrementalPointLocator,\n    vtkCellArray, vtkPointData, vtkPointData, vtkCellData, int,\n    vtkCellData, int)\nC++: virtual void Clip(double value, vtkDataArray *scalars,\n    vtkIncrementalPointLocator *locator,\n    vtkCellArray *connectivity, vtkPointData *inPd,\n    vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId,\n    vtkCellData *outCd, int insideOut)\n\nSatisfy the vtkCell API. This method clips the input polyhedron\nand outputs a new polyhedron. The face information of the output\npolyhedron is encoded in the output vtkCellArray using a special\nformat: CellLength [nCellFaces, nFace0Pts, i, j, k, nFace1Pts, i,\nj, k, ...]. Use the static method\nvtkUnstructuredGrid::DecomposePolyhedronCellArray to convert it\ninto a standard format. Note: the algorithm assumes water-tight\npolyhedron cells.\n"},
  {(char*)"IntersectWithLine", PyvtkPolyhedron_IntersectWithLine, 1,
   (char*)"V.IntersectWithLine([float, float, float], [float, float, float],\n    float, float, [float, float, float], [float, float, float],\n    int) -> int\nC++: virtual int IntersectWithLine(double p1[3], double p2[3],\n    double tol, double &t, double x[3], double pcoords[3],\n    int &subId)\n\nIntersect the line (p1,p2) with a given tolerance tol to\ndetermine a point of intersection x[3] with parametric coordinate\nt along the line. The parametric coordinates are returned as well\n(subId can be ignored). Returns the number of intersection\npoints.\n"},
  {(char*)"Triangulate", PyvtkPolyhedron_Triangulate, 1,
   (char*)"V.Triangulate(int, vtkIdList, vtkPoints) -> int\nC++: virtual int Triangulate(int index, vtkIdList *ptIds,\n    vtkPoints *pts)\n\nUse vtkOrderedTriangulator to tetrahedralize the polyhedron mesh.\nThis method works well for a convex polyhedron but may return\nwrong result in a concave case. Once triangulation has been\nperformed, the results are saved in ptIds and pts. The ptIds is a\nvtkIdList with 4xn number of ids (n is the number of result\ntetrahedrons). The first 4 represent the point ids of the first\ntetrahedron, the second 4 represents the point ids of the second\ntetrahedron and so on. The point ids represent global dataset\nids. The points of result tetrahedons are stored in pts. Note\nthat there are 4xm output points (m is the number of points in\nthe original polyhedron). A point may be stored multiple times\nwhen it is shared by more than one tetrahedrons. The points\nstored in pts are ordered the same as they are listed in ptIds.\n"},
  {(char*)"CellBoundary", PyvtkPolyhedron_CellBoundary, 1,
   (char*)"V.CellBoundary(int, [float, float, float], vtkIdList) -> int\nC++: virtual int CellBoundary(int subId, double pcoords[3],\n    vtkIdList *pts)\n\nFind the boundary face closest to the point defined by the\npcoords[3] and subId of the cell (subId can be ignored).\n"},
  {(char*)"GetParametricCenter", PyvtkPolyhedron_GetParametricCenter, 1,
   (char*)"V.GetParametricCenter([float, float, float]) -> int\nC++: virtual int GetParametricCenter(double pcoords[3])\n\nReturn the center of the cell in parametric coordinates. In this\ncell, the center of the bounding box is returned.\n"},
  {(char*)"IsPrimaryCell", PyvtkPolyhedron_IsPrimaryCell, 1,
   (char*)"V.IsPrimaryCell() -> int\nC++: int IsPrimaryCell()\n\nA polyhedron is a full-fledged primary cell.\n"},
  {(char*)"RequiresExplicitFaceRepresentation", PyvtkPolyhedron_RequiresExplicitFaceRepresentation, 1,
   (char*)"V.RequiresExplicitFaceRepresentation() -> int\nC++: virtual int RequiresExplicitFaceRepresentation()\n\nMethods supporting the definition of faces. Note that the\nGetFaces() returns a list of faces in vtkCellArray form; use the\nmethod GetNumberOfFaces() to determine the number of faces in the\nlist. The SetFaces() method is also in vtkCellArray form, except\nthat it begins with a leading count indicating the total number\nof faces in the list.\n"},
  {(char*)"IsInside", PyvtkPolyhedron_IsInside, 1,
   (char*)"V.IsInside([float, float, float], float) -> int\nC++: int IsInside(double x[3], double tolerance)\n\n"},
  {(char*)"GetPolyData", PyvtkPolyhedron_GetPolyData, 1,
   (char*)"V.GetPolyData() -> vtkPolyData\nC++: vtkPolyData *GetPolyData()\n\nConstruct polydata if no one exist, then return this->PolyData\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPolyhedron_StaticNew()
{
  return vtkPolyhedron::New();
}

PyObject *PyVTKClass_vtkPolyhedronNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPolyhedron_StaticNew,
    PyvtkPolyhedron_Methods,
    "vtkPolyhedron", modulename,
    NULL, NULL,
    PyvtkPolyhedron_Doc(),
    PyVTKClass_vtkCell3DNew(modulename));
  return cls;
}

const char **PyvtkPolyhedron_Doc()
{
  static const char *docstring[] = {
    "vtkPolyhedron - a 3D cell defined by a set of polygonal faces\n\n",
    "Superclass: vtkCell3D\n\n",
    "vtkPolyhedron is a concrete implementation that represents a 3D cell\ndefined by a set of polygonal faces. The polyhedron should be\nwatertight, non-self-intersecting and manifold (each edge is used\ntwice).\n\nInterpolation functions and weights are defined / computed using the\nmethod of Mean Value Coordinates (MVC). See the VTK class\nvtkMeanValueCoordinatesInterpolator for more information.\n\nThe clas",
    "s assumes that the polyhedron is non-convex. However, the\npolygonal faces should be planar. Non-planar polygonal faces will\ndefinitely cause problems, especially in severely warped situations.\n\nSee Also:\n\nvtkCell3D vtkConvecPointSet vtkMeanValueCoordinatesInterpolator\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPolyhedron(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPolyhedronNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPolyhedron", o) != 0)
    {
    Py_DECREF(o);
    }

}

