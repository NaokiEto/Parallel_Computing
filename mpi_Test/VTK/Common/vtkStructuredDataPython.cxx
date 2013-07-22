// python wrapper for vtkStructuredData
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
#include "vtkStructuredData.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkStructuredData(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkStructuredData(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkStructuredDataNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkStructuredDataNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkStructuredData_Doc();


static PyObject *
PyvtkStructuredData_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredData *op = static_cast<vtkStructuredData *>(vp);

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
      tempr = op->vtkStructuredData::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredData *op = static_cast<vtkStructuredData *>(vp);

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
      tempr = op->vtkStructuredData::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredData *op = static_cast<vtkStructuredData *>(vp);

  vtkStructuredData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkStructuredData::NewInstance();
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
PyvtkStructuredData_SetDimensions(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetDimensions");

  int temp0[3];
  int save0[3];
  const int size0 = 3;
  int temp1[3];
  int save1[3];
  const int size1 = 3;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    tempr = vtkStructuredData::SetDimensions(temp0, temp1);

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
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredData_SetExtent(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetExtent");

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  int temp1[6];
  int save1[6];
  const int size1 = 6;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    tempr = vtkStructuredData::SetExtent(temp0, temp1);

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
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredData_GetDataDescription(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDataDescription");

  int temp0[3];
  int save0[3];
  const int size0 = 3;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    tempr = vtkStructuredData::GetDataDescription(temp0);

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
PyvtkStructuredData_GetDataDimension(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDataDimension");

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkStructuredData::GetDataDimension(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredData_GetCellPoints(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCellPoints");

  vtkIdType temp0;
  vtkIdList *temp1 = NULL;
  int temp2;
  int temp3[3];
  int save3[3];
  const int size3 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp3, save3, size3);

    vtkStructuredData::GetCellPoints(temp0, temp1, temp2, temp3);

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredData_GetPointCells(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPointCells");

  vtkIdType temp0;
  vtkIdList *temp1 = NULL;
  int temp2[3];
  int save2[3];
  const int size2 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    vtkStructuredData::GetPointCells(temp0, temp1, temp2);

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
PyvtkStructuredData_GetCellNeighbors(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCellNeighbors");

  vtkIdType temp0;
  vtkIdList *temp1 = NULL;
  vtkIdList *temp2 = NULL;
  int temp3[3];
  int save3[3];
  const int size3 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkIdList") &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp3, save3, size3);

    vtkStructuredData::GetCellNeighbors(temp0, temp1, temp2, temp3);

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredData_ComputePointIdForExtent(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputePointIdForExtent");

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  int temp1[3];
  int save1[3];
  const int size1 = 3;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    tempr = vtkStructuredData::ComputePointIdForExtent(temp0, temp1);

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
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredData_ComputeCellIdForExtent(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeCellIdForExtent");

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  int temp1[3];
  int save1[3];
  const int size1 = 3;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    tempr = vtkStructuredData::ComputeCellIdForExtent(temp0, temp1);

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
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredData_ComputePointId(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputePointId");

  int temp0[3];
  int save0[3];
  const int size0 = 3;
  int temp1[3];
  int save1[3];
  const int size1 = 3;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    tempr = vtkStructuredData::ComputePointId(temp0, temp1);

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
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredData_ComputeCellId(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeCellId");

  int temp0[3];
  int save0[3];
  const int size0 = 3;
  int temp1[3];
  int save1[3];
  const int size1 = 3;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    tempr = vtkStructuredData::ComputeCellId(temp0, temp1);

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
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkStructuredData_Methods[] = {
  {(char*)"GetClassName", PyvtkStructuredData_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStructuredData_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStructuredData_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkStructuredData\nC++: vtkStructuredData *NewInstance()\n\n"},
  {(char*)"SetDimensions", PyvtkStructuredData_SetDimensions, 1,
   (char*)"V.SetDimensions([int, int, int], [int, int, int]) -> int\nC++: static int SetDimensions(int inDim[3], int dim[3])\n\nSpecify the dimensions of a regular, rectangular dataset. The\ninput is the new dimensions (inDim) and the current dimensions\n(dim). The function returns the dimension of the dataset (0-3D).\nIf the dimensions are improperly specified a -1 is returned. If\nthe dimensions are unchanged, a value of 100 is returned.\n"},
  {(char*)"SetExtent", PyvtkStructuredData_SetExtent, 1,
   (char*)"V.SetExtent([int, int, int, int, int, int], [int, int, int, int,\n    int, int]) -> int\nC++: static int SetExtent(int inExt[6], int ext[6])\n\nSpecify the dimensions of a regular, rectangular dataset. The\ninput is the new dimensions (inDim) and the current dimensions\n(dim). The function returns the dimension of the dataset (0-3D).\nIf the dimensions are improperly specified a -1 is returned. If\nthe dimensions are unchanged, a value of 100 is returned.\n"},
  {(char*)"GetDataDescription", PyvtkStructuredData_GetDataDescription, 1,
   (char*)"V.GetDataDescription([int, int, int]) -> int\nC++: static int GetDataDescription(int dims[3])\n\nReturns the data description given the dimensions (eg.\nVTK_SINGLE_POINT, VTK_X_LINE, VTK_XY_PLANE etc.)\n"},
  {(char*)"GetDataDimension", PyvtkStructuredData_GetDataDimension, 1,
   (char*)"V.GetDataDimension(int) -> int\nC++: static int GetDataDimension(int dataDescription)\n\nReturn the topological dimension of the data (e.g., 0, 1, 2, or\n3D).\n"},
  {(char*)"GetCellPoints", PyvtkStructuredData_GetCellPoints, 1,
   (char*)"V.GetCellPoints(int, vtkIdList, int, [int, int, int])\nC++: static void GetCellPoints(vtkIdType cellId, vtkIdList *ptIds,\n     int dataDescription, int dim[3])\n\nGet the points defining a cell. (See vtkDataSet for more info.)\n"},
  {(char*)"GetPointCells", PyvtkStructuredData_GetPointCells, 1,
   (char*)"V.GetPointCells(int, vtkIdList, [int, int, int])\nC++: static void GetPointCells(vtkIdType ptId, vtkIdList *cellIds,\n     int dim[3])\n\nGet the cells using a point. (See vtkDataSet for more info.)\n"},
  {(char*)"GetCellNeighbors", PyvtkStructuredData_GetCellNeighbors, 1,
   (char*)"V.GetCellNeighbors(int, vtkIdList, vtkIdList, [int, int, int])\nC++: static void GetCellNeighbors(vtkIdType cellId,\n    vtkIdList *ptIds, vtkIdList *cellIds, int dim[3])\n\nGet the cells using the points ptIds, exclusive of the cell\ncellId. (See vtkDataSet for more info.)\n"},
  {(char*)"ComputePointIdForExtent", PyvtkStructuredData_ComputePointIdForExtent, 1,
   (char*)"V.ComputePointIdForExtent([int, int, int, int, int, int], [int,\n    int, int]) -> int\nC++: static vtkIdType ComputePointIdForExtent(int extent[6],\n    int ijk[3])\n\nGiven a location in structured coordinates (i-j-k), and the\nextent of the structured dataset, return the point id.\n"},
  {(char*)"ComputeCellIdForExtent", PyvtkStructuredData_ComputeCellIdForExtent, 1,
   (char*)"V.ComputeCellIdForExtent([int, int, int, int, int, int], [int,\n    int, int]) -> int\nC++: static vtkIdType ComputeCellIdForExtent(int extent[6],\n    int ijk[3])\n\nGiven a location in structured coordinates (i-j-k), and the\nextent of the structured dataset, return the point id.\n"},
  {(char*)"ComputePointId", PyvtkStructuredData_ComputePointId, 1,
   (char*)"V.ComputePointId([int, int, int], [int, int, int]) -> int\nC++: static vtkIdType ComputePointId(int dim[3], int ijk[3])\n\nGiven a location in structured coordinates (i-j-k), and the\ndimensions of the structured dataset, return the point id.  This\nmethod does not adjust for the beginning of the extent.\n"},
  {(char*)"ComputeCellId", PyvtkStructuredData_ComputeCellId, 1,
   (char*)"V.ComputeCellId([int, int, int], [int, int, int]) -> int\nC++: static vtkIdType ComputeCellId(int dim[3], int ijk[3])\n\nGiven a location in structured coordinates (i-j-k), and the\ndimensions of the structured dataset, return the cell id.  This\nmethod does not adjust for the beginning of the extent.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkStructuredDataNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkStructuredData_Methods,
    "vtkStructuredData", modulename,
    NULL, NULL,
    PyvtkStructuredData_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkStructuredData_Doc()
{
  static const char *docstring[] = {
    "vtkStructuredData - abstract class for topologically regular data\n\n",
    "Superclass: vtkObject\n\n",
    "vtkStructuredData is an abstract class that specifies an interface\nfor topologically regular data. Regular data is data that can be\naccessed in rectangular fashion using an i-j-k index. A finite\ndifference grid, a volume, or a pixmap are all considered regular.\n\nSee Also:\n\nvtkStructuredGrid vtkUniformGrid vtkRectilinearGrid\nvtkRectilinearGrid\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStructuredData(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStructuredDataNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStructuredData", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_UNCHANGED", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SINGLE_POINT", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_X_LINE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(3);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_Y_LINE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(4);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_Z_LINE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(5);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_XY_PLANE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(6);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_YZ_PLANE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(7);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_XZ_PLANE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(8);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_XYZ_GRID", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(9);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_EMPTY", o) != 0)
    {
    Py_DECREF(o);
    }

}

