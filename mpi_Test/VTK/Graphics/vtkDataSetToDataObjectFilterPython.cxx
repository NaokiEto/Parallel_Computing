// python wrapper for vtkDataSetToDataObjectFilter
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
#include "vtkDataSetToDataObjectFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDataSetToDataObjectFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDataSetToDataObjectFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDataSetToDataObjectFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDataSetToDataObjectFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
#endif

static const char **PyvtkDataSetToDataObjectFilter_Doc();


static PyObject *
PyvtkDataSetToDataObjectFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

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
      tempr = op->vtkDataSetToDataObjectFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

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
      tempr = op->vtkDataSetToDataObjectFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  vtkDataSetToDataObjectFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDataSetToDataObjectFilter::NewInstance();
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
PyvtkDataSetToDataObjectFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDataSetToDataObjectFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDataSetToDataObjectFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_SetGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGeometry(temp0);
      }
    else
      {
      op->vtkDataSetToDataObjectFilter::SetGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_GetGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGeometry();
      }
    else
      {
      tempr = op->vtkDataSetToDataObjectFilter::GetGeometry();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_GeometryOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeometryOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GeometryOn();
      }
    else
      {
      op->vtkDataSetToDataObjectFilter::GeometryOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_GeometryOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeometryOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GeometryOff();
      }
    else
      {
      op->vtkDataSetToDataObjectFilter::GeometryOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_SetTopology(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTopology");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTopology(temp0);
      }
    else
      {
      op->vtkDataSetToDataObjectFilter::SetTopology(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_GetTopology(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTopology");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTopology();
      }
    else
      {
      tempr = op->vtkDataSetToDataObjectFilter::GetTopology();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_TopologyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TopologyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TopologyOn();
      }
    else
      {
      op->vtkDataSetToDataObjectFilter::TopologyOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_TopologyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TopologyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TopologyOff();
      }
    else
      {
      op->vtkDataSetToDataObjectFilter::TopologyOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_SetFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFieldData(temp0);
      }
    else
      {
      op->vtkDataSetToDataObjectFilter::SetFieldData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_GetFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFieldData();
      }
    else
      {
      tempr = op->vtkDataSetToDataObjectFilter::GetFieldData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_FieldDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FieldDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FieldDataOn();
      }
    else
      {
      op->vtkDataSetToDataObjectFilter::FieldDataOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_FieldDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FieldDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FieldDataOff();
      }
    else
      {
      op->vtkDataSetToDataObjectFilter::FieldDataOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_SetPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPointData(temp0);
      }
    else
      {
      op->vtkDataSetToDataObjectFilter::SetPointData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_GetPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointData();
      }
    else
      {
      tempr = op->vtkDataSetToDataObjectFilter::GetPointData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_PointDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PointDataOn();
      }
    else
      {
      op->vtkDataSetToDataObjectFilter::PointDataOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_PointDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PointDataOff();
      }
    else
      {
      op->vtkDataSetToDataObjectFilter::PointDataOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_SetCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCellData(temp0);
      }
    else
      {
      op->vtkDataSetToDataObjectFilter::SetCellData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_GetCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellData();
      }
    else
      {
      tempr = op->vtkDataSetToDataObjectFilter::GetCellData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_CellDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CellDataOn();
      }
    else
      {
      op->vtkDataSetToDataObjectFilter::CellDataOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_CellDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CellDataOff();
      }
    else
      {
      op->vtkDataSetToDataObjectFilter::CellDataOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkDataSetToDataObjectFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkDataSetToDataObjectFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataSetToDataObjectFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataSetToDataObjectFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDataSetToDataObjectFilter\nC++: vtkDataSetToDataObjectFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDataSetToDataObjectFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDataSetToDataObjectFilter\nC++: vtkDataSetToDataObjectFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetGeometry", PyvtkDataSetToDataObjectFilter_SetGeometry, 1,
   (char*)"V.SetGeometry(int)\nC++: void SetGeometry(int a)\n\nTurn on/off the conversion of dataset geometry to a data object.\n"},
  {(char*)"GetGeometry", PyvtkDataSetToDataObjectFilter_GetGeometry, 1,
   (char*)"V.GetGeometry() -> int\nC++: int GetGeometry()\n\nTurn on/off the conversion of dataset geometry to a data object.\n"},
  {(char*)"GeometryOn", PyvtkDataSetToDataObjectFilter_GeometryOn, 1,
   (char*)"V.GeometryOn()\nC++: void GeometryOn()\n\nTurn on/off the conversion of dataset geometry to a data object.\n"},
  {(char*)"GeometryOff", PyvtkDataSetToDataObjectFilter_GeometryOff, 1,
   (char*)"V.GeometryOff()\nC++: void GeometryOff()\n\nTurn on/off the conversion of dataset geometry to a data object.\n"},
  {(char*)"SetTopology", PyvtkDataSetToDataObjectFilter_SetTopology, 1,
   (char*)"V.SetTopology(int)\nC++: void SetTopology(int a)\n\nTurn on/off the conversion of dataset topology to a data object.\n"},
  {(char*)"GetTopology", PyvtkDataSetToDataObjectFilter_GetTopology, 1,
   (char*)"V.GetTopology() -> int\nC++: int GetTopology()\n\nTurn on/off the conversion of dataset topology to a data object.\n"},
  {(char*)"TopologyOn", PyvtkDataSetToDataObjectFilter_TopologyOn, 1,
   (char*)"V.TopologyOn()\nC++: void TopologyOn()\n\nTurn on/off the conversion of dataset topology to a data object.\n"},
  {(char*)"TopologyOff", PyvtkDataSetToDataObjectFilter_TopologyOff, 1,
   (char*)"V.TopologyOff()\nC++: void TopologyOff()\n\nTurn on/off the conversion of dataset topology to a data object.\n"},
  {(char*)"SetFieldData", PyvtkDataSetToDataObjectFilter_SetFieldData, 1,
   (char*)"V.SetFieldData(int)\nC++: void SetFieldData(int a)\n\nTurn on/off the conversion of dataset field data to a data\nobject.\n"},
  {(char*)"GetFieldData", PyvtkDataSetToDataObjectFilter_GetFieldData, 1,
   (char*)"V.GetFieldData() -> int\nC++: int GetFieldData()\n\nTurn on/off the conversion of dataset field data to a data\nobject.\n"},
  {(char*)"FieldDataOn", PyvtkDataSetToDataObjectFilter_FieldDataOn, 1,
   (char*)"V.FieldDataOn()\nC++: void FieldDataOn()\n\nTurn on/off the conversion of dataset field data to a data\nobject.\n"},
  {(char*)"FieldDataOff", PyvtkDataSetToDataObjectFilter_FieldDataOff, 1,
   (char*)"V.FieldDataOff()\nC++: void FieldDataOff()\n\nTurn on/off the conversion of dataset field data to a data\nobject.\n"},
  {(char*)"SetPointData", PyvtkDataSetToDataObjectFilter_SetPointData, 1,
   (char*)"V.SetPointData(int)\nC++: void SetPointData(int a)\n\nTurn on/off the conversion of dataset point data to a data\nobject.\n"},
  {(char*)"GetPointData", PyvtkDataSetToDataObjectFilter_GetPointData, 1,
   (char*)"V.GetPointData() -> int\nC++: int GetPointData()\n\nTurn on/off the conversion of dataset point data to a data\nobject.\n"},
  {(char*)"PointDataOn", PyvtkDataSetToDataObjectFilter_PointDataOn, 1,
   (char*)"V.PointDataOn()\nC++: void PointDataOn()\n\nTurn on/off the conversion of dataset point data to a data\nobject.\n"},
  {(char*)"PointDataOff", PyvtkDataSetToDataObjectFilter_PointDataOff, 1,
   (char*)"V.PointDataOff()\nC++: void PointDataOff()\n\nTurn on/off the conversion of dataset point data to a data\nobject.\n"},
  {(char*)"SetCellData", PyvtkDataSetToDataObjectFilter_SetCellData, 1,
   (char*)"V.SetCellData(int)\nC++: void SetCellData(int a)\n\nTurn on/off the conversion of dataset cell data to a data object.\n"},
  {(char*)"GetCellData", PyvtkDataSetToDataObjectFilter_GetCellData, 1,
   (char*)"V.GetCellData() -> int\nC++: int GetCellData()\n\nTurn on/off the conversion of dataset cell data to a data object.\n"},
  {(char*)"CellDataOn", PyvtkDataSetToDataObjectFilter_CellDataOn, 1,
   (char*)"V.CellDataOn()\nC++: void CellDataOn()\n\nTurn on/off the conversion of dataset cell data to a data object.\n"},
  {(char*)"CellDataOff", PyvtkDataSetToDataObjectFilter_CellDataOff, 1,
   (char*)"V.CellDataOff()\nC++: void CellDataOff()\n\nTurn on/off the conversion of dataset cell data to a data object.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDataSetToDataObjectFilter_StaticNew()
{
  return vtkDataSetToDataObjectFilter::New();
}

PyObject *PyVTKClass_vtkDataSetToDataObjectFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDataSetToDataObjectFilter_StaticNew,
    PyvtkDataSetToDataObjectFilter_Methods,
    "vtkDataSetToDataObjectFilter", modulename,
    NULL, NULL,
    PyvtkDataSetToDataObjectFilter_Doc(),
    PyVTKClass_vtkDataObjectAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkDataSetToDataObjectFilter_Doc()
{
  static const char *docstring[] = {
    "vtkDataSetToDataObjectFilter - map dataset into data object (i.e., a\nfield)\n\n",
    "Superclass: vtkDataObjectAlgorithm\n\n",
    "vtkDataSetToDataObjectFilter is an class that transforms a dataset\ninto data object (i.e., a field). The field will have labeled data\narrays corresponding to the topology, geometry, field data, and point\nand cell attribute data.\n\nYou can control what portions of the dataset are converted into the\noutput data object's field data. The instance variables Geometry,\nTopology, FieldData, PointData, and ",
    "CellData are flags that control\nwhether the dataset's geometry (e.g., points, spacing, origin);\ntopology (e.g., cell connectivity, dimensions); the field data\nassociated with the dataset's superclass data object; the dataset's\npoint data attributes; and the dataset's cell data attributes. (Note:\nthe data attributes include scalars, vectors, tensors, normals,\ntexture coordinates, and field data.)\n\n",
    "The names used to create the field data are as follows. For\nvtkPolyData, \"Points\", \"Verts\", \"Lines\", \"Polys\", and \"Strips\". For\nvtkUnstructuredGrid, \"Cells\" and \"CellTypes\". For\nvtkStructuredPoints, \"Dimensions\", \"Spacing\", and \"Origin\". For\nvtkStructuredGrid, \"Points\" and \"Dimensions\". For vtkRectilinearGrid,\n\"XCoordinates\", \"YCoordinates\", and \"ZCoordinates\". for point\nattribute data, \"PointScal",
    "ars\", \"PointVectors\", etc. For cell\nattribute data, \"CellScalars\", \"CellVectors\", etc. Field data arrays\nretain their original name.\n\nSee Also:\n\nvtkDataObject vtkFieldData vtkDataObjectToDataSetFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataSetToDataObjectFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataSetToDataObjectFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataSetToDataObjectFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

