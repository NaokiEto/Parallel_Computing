// python wrapper for vtkGenericDataSet
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
#include "vtkGenericDataSet.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGenericDataSet(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGenericDataSet(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGenericDataSetNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGenericDataSetNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataObjectNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectNew
#endif

static const char **PyvtkGenericDataSet_Doc();


static PyObject *
PyvtkGenericDataSet_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

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
      tempr = op->vtkGenericDataSet::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

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
      tempr = op->vtkGenericDataSet::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

  vtkGenericDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGenericDataSet::NewInstance();
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
PyvtkGenericDataSet_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetNumberOfPoints();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataSet_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

  int temp0 = -1;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    tempr = op->GetNumberOfCells(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataSet_GetCellDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

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
PyvtkGenericDataSet_GetCellTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

  vtkCellTypes *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellTypes"))
    {
    if (ap.IsBound())
      {
      op->GetCellTypes(temp0);
      }
    else
      {
      op->vtkGenericDataSet::GetCellTypes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataSet_NewCellIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewCellIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

  int temp0 = -1;
  vtkGenericCellIterator *tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    tempr = op->NewCellIterator(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataSet_NewBoundaryIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewBoundaryIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

  int temp0 = -1;
  int temp1 = 0;
  vtkGenericCellIterator *tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0, 2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    tempr = op->NewBoundaryIterator(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataSet_NewPointIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewPointIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

  vtkGenericPointIterator *tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->NewPointIterator();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataSet_FindPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  vtkGenericPointIterator *temp1 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkGenericPointIterator"))
    {
    ap.SaveArray(temp0, save0, size0);

    op->FindPoint(temp0, temp1);

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
PyvtkGenericDataSet_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMTime();
      }
    else
      {
      tempr = op->vtkGenericDataSet::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataSet_ComputeBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->ComputeBounds();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataSet_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

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
      op->vtkGenericDataSet::GetBounds(temp0);
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
PyvtkGenericDataSet_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetCenter(temp0);
      }
    else
      {
      op->vtkGenericDataSet::GetCenter(temp0);
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
PyvtkGenericDataSet_GetLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLength();
      }
    else
      {
      tempr = op->vtkGenericDataSet::GetLength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataSet_GetAttributes_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

  vtkGenericAttributeCollection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAttributes();
      }
    else
      {
      tempr = op->vtkGenericDataSet::GetAttributes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkGenericDataSet_GetAttributes_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

  int temp0;
  vtkDataSetAttributes *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAttributes(temp0);
      }
    else
      {
      tempr = op->vtkGenericDataSet::GetAttributes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkGenericDataSet_GetAttributes(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkGenericDataSet_GetAttributes_s1(self, args);
    case 1:
      return PyvtkGenericDataSet_GetAttributes_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetAttributes");
  return NULL;
}



static PyObject *
PyvtkGenericDataSet_SetTessellator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTessellator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

  vtkGenericCellTessellator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericCellTessellator"))
    {
    if (ap.IsBound())
      {
      op->SetTessellator(temp0);
      }
    else
      {
      op->vtkGenericDataSet::SetTessellator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataSet_GetTessellator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTessellator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

  vtkGenericCellTessellator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTessellator();
      }
    else
      {
      tempr = op->vtkGenericDataSet::GetTessellator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataSet_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

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
      tempr = op->vtkGenericDataSet::GetActualMemorySize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataSet_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

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
      tempr = op->vtkGenericDataSet::GetDataObjectType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataSet_GetEstimatedSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEstimatedSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetEstimatedSize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataSet_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = NULL;
  vtkGenericDataSet *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    tempr = vtkGenericDataSet::GetData(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkGenericDataSet_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = NULL;
  int temp1 = 0;
  vtkGenericDataSet *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    tempr = vtkGenericDataSet::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGenericDataSet_GetData_Methods[] = {
  {NULL, PyvtkGenericDataSet_GetData_s1, 1,
   (char*)"O *vtkInformation"},
  {NULL, PyvtkGenericDataSet_GetData_s2, 1,
   (char*)"O|i *vtkInformationVector"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkGenericDataSet_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkGenericDataSet_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkGenericDataSet_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return NULL;
}


static PyMethodDef PyvtkGenericDataSet_Methods[] = {
  {(char*)"GetClassName", PyvtkGenericDataSet_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK type and print macros.\n"},
  {(char*)"IsA", PyvtkGenericDataSet_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK type and print macros.\n"},
  {(char*)"NewInstance", PyvtkGenericDataSet_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGenericDataSet\nC++: vtkGenericDataSet *NewInstance()\n\nStandard VTK type and print macros.\n"},
  {(char*)"GetNumberOfPoints", PyvtkGenericDataSet_GetNumberOfPoints, 1,
   (char*)"V.GetNumberOfPoints() -> int\nC++: virtual vtkIdType GetNumberOfPoints()\n\nReturn the number of points composing the dataset. See\nNewPointIterator() for more details.\n\\post positive_result: result>=0\n"},
  {(char*)"GetNumberOfCells", PyvtkGenericDataSet_GetNumberOfCells, 1,
   (char*)"V.GetNumberOfCells(int) -> int\nC++: virtual vtkIdType GetNumberOfCells(int dim=-1)\n\nReturn the number of cells that explicitly define the dataset.\nSee NewCellIterator() for more details.\n\\pre valid_dim_range: (dim>=-1) && (dim<=3)\n\\post positive_result: result>=0\n"},
  {(char*)"GetCellDimension", PyvtkGenericDataSet_GetCellDimension, 1,
   (char*)"V.GetCellDimension() -> int\nC++: virtual int GetCellDimension()\n\nReturn -1 if the dataset is explicitly defined by cells of\nvarying dimensions or if there are no cells. If the dataset is\nexplicitly defined by cells of a unique dimension, return this\ndimension.\n\\post valid_range: (result>=-1) && (result<=3)\n"},
  {(char*)"GetCellTypes", PyvtkGenericDataSet_GetCellTypes, 1,
   (char*)"V.GetCellTypes(vtkCellTypes)\nC++: virtual void GetCellTypes(vtkCellTypes *types)\n\nGet a list of types of cells in a dataset. The list consists of\nan array of types (not necessarily in any order), with a single\nentry per type. For example a dataset 5 triangles, 3 lines, and\n100 hexahedra would result a list of three entries, corresponding\nto the types VTK_TRIANGLE, VTK_LINE, and VTK_HEXAHEDRON. THIS\nMETHOD IS THREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND\nTHE DATASET IS NOT MODIFIED\n\\pre types_exist: types!=0\n"},
  {(char*)"NewCellIterator", PyvtkGenericDataSet_NewCellIterator, 1,
   (char*)"V.NewCellIterator(int) -> vtkGenericCellIterator\nC++: virtual vtkGenericCellIterator *NewCellIterator(int dim=-1)\n\nReturn an iterator to traverse cells of dimension `dim' (or all\ndimensions if -1) that explicitly define the dataset. For\ninstance, it will return only tetrahedra if the mesh is defined\nby tetrahedra. If the mesh is composed of two parts, one with\ntetrahedra and another part with triangles, it will return both,\nbut will not return the boundary edges and vertices of these\ncells. The user is responsible for deleting the iterator.\n\\pre valid_dim_range: (dim>=-1) && (dim<=3)\n\\post result_exists: result!=0\n"},
  {(char*)"NewBoundaryIterator", PyvtkGenericDataSet_NewBoundaryIterator, 1,
   (char*)"V.NewBoundaryIterator(int, int) -> vtkGenericCellIterator\nC++: virtual vtkGenericCellIterator *NewBoundaryIterator(\n    int dim=-1, int exteriorOnly=0)\n\nReturn an iterator to traverse cell boundaries of dimension `dim'\n(or all dimensions if -1) of the dataset.  If `exteriorOnly' is\ntrue, only the exterior cell boundaries of the dataset will be\nreturned, otherwise it will return exterior and interior cell\nboundaries. The user is responsible for deleting the iterator.\n\\pre valid_dim_range: (dim>=-1) && (dim<=2)\n\\post result_exists: result!=0\n"},
  {(char*)"NewPointIterator", PyvtkGenericDataSet_NewPointIterator, 1,
   (char*)"V.NewPointIterator() -> vtkGenericPointIterator\nC++: virtual vtkGenericPointIterator *NewPointIterator()\n\nReturn an iterator to traverse the points composing the dataset;\nthey can be points that define a cell (corner points) or isolated\npoints. The user is responsible for deleting the iterator.\n\\post result_exists: result!=0\n"},
  {(char*)"FindPoint", PyvtkGenericDataSet_FindPoint, 1,
   (char*)"V.FindPoint([float, float, float], vtkGenericPointIterator)\nC++: virtual void FindPoint(double x[3],\n    vtkGenericPointIterator *p)\n\nLocate the closest point `p' to position `x' (global\ncoordinates).\n\\pre not_empty: GetNumberOfPoints()>0\n\\pre p_exists: p!=0\n"},
  {(char*)"GetMTime", PyvtkGenericDataSet_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long GetMTime()\n\nDatasets are composite objects and need to check each part for\ntheir modified time.\n"},
  {(char*)"ComputeBounds", PyvtkGenericDataSet_ComputeBounds, 1,
   (char*)"V.ComputeBounds()\nC++: virtual void ComputeBounds()\n\nCompute the geometry bounding box.\n"},
  {(char*)"GetBounds", PyvtkGenericDataSet_GetBounds, 1,
   (char*)"V.GetBounds([float, float, float, float, float, float])\nC++: virtual void GetBounds(double bounds[6])\n\nReturn the geometry bounding box in global coordinates in the\nform (xmin,xmax, ymin,ymax, zmin,zmax) in the `bounds' array.\n"},
  {(char*)"GetCenter", PyvtkGenericDataSet_GetCenter, 1,
   (char*)"V.GetCenter([float, float, float])\nC++: virtual void GetCenter(double center[3])\n\nGet the center of the bounding box in global coordinates.\n"},
  {(char*)"GetLength", PyvtkGenericDataSet_GetLength, 1,
   (char*)"V.GetLength() -> float\nC++: virtual double GetLength()\n\nReturn the length of the diagonal of the bounding box.\n\\post positive_result: result>=0\n"},
  {(char*)"GetAttributes", PyvtkGenericDataSet_GetAttributes, 1,
   (char*)"V.GetAttributes() -> vtkGenericAttributeCollection\nC++: vtkGenericAttributeCollection *GetAttributes()\nV.GetAttributes(int) -> vtkDataSetAttributes\nC++: virtual vtkDataSetAttributes *GetAttributes(int type)\n\nGet the collection of attributes associated with this dataset.\n"},
  {(char*)"SetTessellator", PyvtkGenericDataSet_SetTessellator, 1,
   (char*)"V.SetTessellator(vtkGenericCellTessellator)\nC++: virtual void SetTessellator(\n    vtkGenericCellTessellator *tessellator)\n\nSet/Get a cell tessellator if cells must be tessellated during\nprocessing.\n\\pre tessellator_exists: tessellator!=0\n"},
  {(char*)"GetTessellator", PyvtkGenericDataSet_GetTessellator, 1,
   (char*)"V.GetTessellator() -> vtkGenericCellTessellator\nC++: vtkGenericCellTessellator *GetTessellator()\n\nSet/Get a cell tessellator if cells must be tessellated during\nprocessing.\n\\pre tessellator_exists: tessellator!=0\n"},
  {(char*)"GetActualMemorySize", PyvtkGenericDataSet_GetActualMemorySize, 1,
   (char*)"V.GetActualMemorySize() -> int\nC++: virtual unsigned long GetActualMemorySize()\n\nActual size of the data in kilobytes; only valid after the\npipeline has updated. It is guaranteed to be greater than or\nequal to the memory required to represent the data.\n"},
  {(char*)"GetDataObjectType", PyvtkGenericDataSet_GetDataObjectType, 1,
   (char*)"V.GetDataObjectType() -> int\nC++: int GetDataObjectType()\n\nReturn the type of data object.\n"},
  {(char*)"GetEstimatedSize", PyvtkGenericDataSet_GetEstimatedSize, 1,
   (char*)"V.GetEstimatedSize() -> int\nC++: virtual vtkIdType GetEstimatedSize()\n\nEstimated size needed after tessellation (or special operation)\n"},
  {(char*)"GetData", PyvtkGenericDataSet_GetData, 1,
   (char*)"V.GetData(vtkInformation) -> vtkGenericDataSet\nC++: static vtkGenericDataSet *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkGenericDataSet\nC++: static vtkGenericDataSet *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkGenericDataSetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkGenericDataSet_Methods,
    "vtkGenericDataSet", modulename,
    NULL, NULL,
    PyvtkGenericDataSet_Doc(),
    PyVTKClass_vtkDataObjectNew(modulename));
  return cls;
}

const char **PyvtkGenericDataSet_Doc()
{
  static const char *docstring[] = {
    "vtkGenericDataSet - defines dataset interface\n\n",
    "Superclass: vtkDataObject\n\n",
    "In VTK, spatial-temporal data is defined in terms of a dataset. The\ndataset consists of geometry (e.g., points), topology (e.g., cells),\nand attributes (e.g., scalars, vectors, etc.) vtkGenericDataSet is an\nabstract class defining this abstraction.\n\nSince vtkGenericDataSet provides a general interface to manipulate\ndata, algorithms that process it tend to be slower than those\nspecialized for a par",
    "ticular data type. For this reason, there are\nconcrete, non-abstract subclasses that represent and provide access\nto data more efficiently. Note that filters to process this dataset\ntype are currently found in the VTK/GenericFiltering/ subdirectory.\n\nUnlike the vtkDataSet class, vtkGenericDataSet provides a more\nflexible interface including support for iterators. vtkGenericDataSet\nis also designed",
    " to interface VTK to external simulation packages\nwithout the penalty of copying memory (see\nVTK/GenericFiltering/README.html) for more information. Thus\nvtkGenericDataSet plays a central role in the adaptor framework.\n\nPlease note that this class introduces the concepts of \"boundary\ncells\". This refers to the boundaries of a cell (e.g., face of a\ntetrahedron) which may in turn be represented as a",
    " cell. Boundary\ncells are derivative topological features of cells, and are therefore\nnever explicitly represented in the dataset. Often in visualization\nalgorithms, looping over boundaries (edges or faces) is employed,\nwhile the actual dataset cells may not traversed. Thus there are\nmethods to loop over these boundary cells.\n\nFinally, as a point of clarification, points are not the same as\nvertic",
    "es. Vertices refer to points, and points specify a position is\nspace. Vertices are a type of 0-D cell. Also, the concept of a\nDOFNode, which is where coefficients for higher-order cells are kept,\nis a new concept introduced by the adaptor framework (see\nvtkGenericAdaptorCell for more information).\n\nSee Also:\n\nvtkGenericAdaptorCell vtkDataSet\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGenericDataSet(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGenericDataSetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGenericDataSet", o) != 0)
    {
    Py_DECREF(o);
    }

}
