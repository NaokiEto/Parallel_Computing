// python wrapper for vtkGenericCellTessellator
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
#include "vtkGenericCellTessellator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGenericCellTessellator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGenericCellTessellator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGenericCellTessellatorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGenericCellTessellatorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkGenericCellTessellator_Doc();


static PyObject *
PyvtkGenericCellTessellator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCellTessellator *op = static_cast<vtkGenericCellTessellator *>(vp);

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
      tempr = op->vtkGenericCellTessellator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCellTessellator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCellTessellator *op = static_cast<vtkGenericCellTessellator *>(vp);

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
      tempr = op->vtkGenericCellTessellator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCellTessellator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCellTessellator *op = static_cast<vtkGenericCellTessellator *>(vp);

  vtkGenericCellTessellator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGenericCellTessellator::NewInstance();
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
PyvtkGenericCellTessellator_TessellateFace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TessellateFace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCellTessellator *op = static_cast<vtkGenericCellTessellator *>(vp);

  vtkGenericAdaptorCell *temp0 = NULL;
  vtkGenericAttributeCollection *temp1 = NULL;
  vtkIdType temp2;
  vtkDoubleArray *temp3 = NULL;
  vtkCellArray *temp4 = NULL;
  vtkPointData *temp5 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(6) &&
      ap.GetVTKObject(temp0, "vtkGenericAdaptorCell") &&
      ap.GetVTKObject(temp1, "vtkGenericAttributeCollection") &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkDoubleArray") &&
      ap.GetVTKObject(temp4, "vtkCellArray") &&
      ap.GetVTKObject(temp5, "vtkPointData"))
    {
    op->TessellateFace(temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCellTessellator_Tessellate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Tessellate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCellTessellator *op = static_cast<vtkGenericCellTessellator *>(vp);

  vtkGenericAdaptorCell *temp0 = NULL;
  vtkGenericAttributeCollection *temp1 = NULL;
  vtkDoubleArray *temp2 = NULL;
  vtkCellArray *temp3 = NULL;
  vtkPointData *temp4 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkGenericAdaptorCell") &&
      ap.GetVTKObject(temp1, "vtkGenericAttributeCollection") &&
      ap.GetVTKObject(temp2, "vtkDoubleArray") &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkPointData"))
    {
    op->Tessellate(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCellTessellator_Triangulate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Triangulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCellTessellator *op = static_cast<vtkGenericCellTessellator *>(vp);

  vtkGenericAdaptorCell *temp0 = NULL;
  vtkGenericAttributeCollection *temp1 = NULL;
  vtkDoubleArray *temp2 = NULL;
  vtkCellArray *temp3 = NULL;
  vtkPointData *temp4 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkGenericAdaptorCell") &&
      ap.GetVTKObject(temp1, "vtkGenericAttributeCollection") &&
      ap.GetVTKObject(temp2, "vtkDoubleArray") &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkPointData"))
    {
    op->Triangulate(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCellTessellator_SetErrorMetrics(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetErrorMetrics");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCellTessellator *op = static_cast<vtkGenericCellTessellator *>(vp);

  vtkCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCollection"))
    {
    if (ap.IsBound())
      {
      op->SetErrorMetrics(temp0);
      }
    else
      {
      op->vtkGenericCellTessellator::SetErrorMetrics(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCellTessellator_GetErrorMetrics(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetErrorMetrics");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCellTessellator *op = static_cast<vtkGenericCellTessellator *>(vp);

  vtkCollection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetErrorMetrics();
      }
    else
      {
      tempr = op->vtkGenericCellTessellator::GetErrorMetrics();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCellTessellator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCellTessellator *op = static_cast<vtkGenericCellTessellator *>(vp);

  vtkGenericDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericDataSet"))
    {
    op->Initialize(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCellTessellator_InitErrorMetrics(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitErrorMetrics");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCellTessellator *op = static_cast<vtkGenericCellTessellator *>(vp);

  vtkGenericDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericDataSet"))
    {
    if (ap.IsBound())
      {
      op->InitErrorMetrics(temp0);
      }
    else
      {
      op->vtkGenericCellTessellator::InitErrorMetrics(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCellTessellator_GetMeasurement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeasurement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCellTessellator *op = static_cast<vtkGenericCellTessellator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMeasurement();
      }
    else
      {
      tempr = op->vtkGenericCellTessellator::GetMeasurement();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCellTessellator_SetMeasurement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMeasurement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCellTessellator *op = static_cast<vtkGenericCellTessellator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMeasurement(temp0);
      }
    else
      {
      op->vtkGenericCellTessellator::SetMeasurement(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGenericCellTessellator_Methods[] = {
  {(char*)"GetClassName", PyvtkGenericCellTessellator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGenericCellTessellator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGenericCellTessellator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGenericCellTessellator\nC++: vtkGenericCellTessellator *NewInstance()\n\n"},
  {(char*)"TessellateFace", PyvtkGenericCellTessellator_TessellateFace, 1,
   (char*)"V.TessellateFace(vtkGenericAdaptorCell,\n    vtkGenericAttributeCollection, int, vtkDoubleArray,\n    vtkCellArray, vtkPointData)\nC++: virtual void TessellateFace(vtkGenericAdaptorCell *cell,\n    vtkGenericAttributeCollection *att, vtkIdType index,\n    vtkDoubleArray *points, vtkCellArray *cellArray,\n    vtkPointData *internalPd)\n\nTessellate a face of a 3D `cell'. The face is specified by the\nindex value. The result is a set of smaller linear triangles in\n`cellArray' with `points' and point data `internalPd'.\n\\pre cell_exists: cell!=0\n\\pre valid_dimension: cell->GetDimension()==3\n\\pre valid_index_range: (index>=0) &&\n    (index<cell->GetNumberOfBoundaries(2))\n\\pre att_exists: att!=0\n\\pre points_exists: points!=0\n\\pre cellArray_exists: cellArray!=0\n\\pre internalPd_exists: internalPd!=0\n"},
  {(char*)"Tessellate", PyvtkGenericCellTessellator_Tessellate, 1,
   (char*)"V.Tessellate(vtkGenericAdaptorCell, vtkGenericAttributeCollection,\n     vtkDoubleArray, vtkCellArray, vtkPointData)\nC++: virtual void Tessellate(vtkGenericAdaptorCell *cell,\n    vtkGenericAttributeCollection *att, vtkDoubleArray *points,\n    vtkCellArray *cellArray, vtkPointData *internalPd)\n\nTessellate a 3D `cell'. The result is a set of smaller linear\ntetrahedra in `cellArray' with `points' and point data\n`internalPd'.\n\\pre cell_exists: cell!=0\n\\pre valid_dimension: cell->GetDimension()==3\n\\pre att_exists: att!=0\n\\pre points_exists: points!=0\n\\pre cellArray_exists: cellArray!=0\n\\pre internalPd_exists: internalPd!=0\n"},
  {(char*)"Triangulate", PyvtkGenericCellTessellator_Triangulate, 1,
   (char*)"V.Triangulate(vtkGenericAdaptorCell,\n    vtkGenericAttributeCollection, vtkDoubleArray, vtkCellArray,\n    vtkPointData)\nC++: virtual void Triangulate(vtkGenericAdaptorCell *cell,\n    vtkGenericAttributeCollection *att, vtkDoubleArray *points,\n    vtkCellArray *cellArray, vtkPointData *internalPd)\n\nTriangulate a 2D `cell'. The result is a set of smaller linear\ntriangles in `cellArray' with `points' and point data\n`internalPd'.\n\\pre cell_exists: cell!=0\n\\pre valid_dimension: cell->GetDimension()==2\n\\pre att_exists: att!=0\n\\pre points_exists: points!=0\n\\pre cellArray_exists: cellArray!=0\n\\pre internalPd_exists: internalPd!=0\n"},
  {(char*)"SetErrorMetrics", PyvtkGenericCellTessellator_SetErrorMetrics, 1,
   (char*)"V.SetErrorMetrics(vtkCollection)\nC++: virtual void SetErrorMetrics(vtkCollection *someErrorMetrics)\n\nSpecify the list of error metrics used to decide if an edge has\nto be splitted or not. It is a collection of\nvtkGenericSubdivisionErrorMetric-s.\n"},
  {(char*)"GetErrorMetrics", PyvtkGenericCellTessellator_GetErrorMetrics, 1,
   (char*)"V.GetErrorMetrics() -> vtkCollection\nC++: vtkCollection *GetErrorMetrics()\n\nSpecify the list of error metrics used to decide if an edge has\nto be splitted or not. It is a collection of\nvtkGenericSubdivisionErrorMetric-s.\n"},
  {(char*)"Initialize", PyvtkGenericCellTessellator_Initialize, 1,
   (char*)"V.Initialize(vtkGenericDataSet)\nC++: virtual void Initialize(vtkGenericDataSet *ds)\n\nInitialize the tessellator with a data set `ds'.\n"},
  {(char*)"InitErrorMetrics", PyvtkGenericCellTessellator_InitErrorMetrics, 1,
   (char*)"V.InitErrorMetrics(vtkGenericDataSet)\nC++: void InitErrorMetrics(vtkGenericDataSet *ds)\n\nInit the error metric with the dataset. Should be called in each\nfilter before any tessellation of any cell.\n"},
  {(char*)"GetMeasurement", PyvtkGenericCellTessellator_GetMeasurement, 1,
   (char*)"V.GetMeasurement() -> int\nC++: int GetMeasurement()\n\nIf true, measure the quality of the fixed subdivision.\n"},
  {(char*)"SetMeasurement", PyvtkGenericCellTessellator_SetMeasurement, 1,
   (char*)"V.SetMeasurement(int)\nC++: void SetMeasurement(int a)\n\nIf true, measure the quality of the fixed subdivision.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkGenericCellTessellatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkGenericCellTessellator_Methods,
    "vtkGenericCellTessellator", modulename,
    NULL, NULL,
    PyvtkGenericCellTessellator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkGenericCellTessellator_Doc()
{
  static const char *docstring[] = {
    "vtkGenericCellTessellator - helper class to perform cell tessellation\n\n",
    "Superclass: vtkObject\n\n",
    "vtkGenericCellTessellator is a helper class to perform adaptive\ntessellation of particular cell topologies. The major purpose for\nthis class is to transform higher-order cell types (e.g.,\nhigher-order finite elements) into linear cells that can then be\neasily visualized by VTK. This class works in conjunction with the\nvtkGenericDataSet and vtkGenericAdaptorCell classes.\n\nThis algorithm is based on",
    " edge subdivision. An error metric along\neach edge is evaluated, and if the error is greater than some\ntolerance, the edge is subdivided (as well as all connected 2D and 3D\ncells). The process repeats until the error metric is satisfied.\n\nA significant issue addressed by this algorithm is to insure face\ncompatibility across neigboring cells. That is, diagonals due to face\ntriangulation must match ",
    "to insure that the mesh is compatible. The\nalgorithm employs a precomputed table to accelerate the tessellation\nprocess. The table was generated with the help of\nvtkOrderedTriangulator; the basic idea is that the choice of diagonal\nis made by considering the relative value of the point ids.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGenericCellTessellator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGenericCellTessellatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGenericCellTessellator", o) != 0)
    {
    Py_DECREF(o);
    }

}

