// python wrapper for vtkStringToNumeric
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
#include "vtkStringToNumeric.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkStringToNumeric(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkStringToNumeric(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkStringToNumericNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkStringToNumericNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
#endif

static const char **PyvtkStringToNumeric_Doc();


static PyObject *
PyvtkStringToNumeric_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

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
      tempr = op->vtkStringToNumeric::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

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
      tempr = op->vtkStringToNumeric::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  vtkStringToNumeric *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkStringToNumeric::NewInstance();
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
PyvtkStringToNumeric_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkStringToNumeric *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkStringToNumeric::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_SetConvertFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConvertFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetConvertFieldData(temp0);
      }
    else
      {
      op->vtkStringToNumeric::SetConvertFieldData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_GetConvertFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvertFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetConvertFieldData();
      }
    else
      {
      tempr = op->vtkStringToNumeric::GetConvertFieldData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_ConvertFieldDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertFieldDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConvertFieldDataOn();
      }
    else
      {
      op->vtkStringToNumeric::ConvertFieldDataOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_ConvertFieldDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertFieldDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConvertFieldDataOff();
      }
    else
      {
      op->vtkStringToNumeric::ConvertFieldDataOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_SetConvertPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConvertPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetConvertPointData(temp0);
      }
    else
      {
      op->vtkStringToNumeric::SetConvertPointData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_GetConvertPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvertPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetConvertPointData();
      }
    else
      {
      tempr = op->vtkStringToNumeric::GetConvertPointData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_ConvertPointDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertPointDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConvertPointDataOn();
      }
    else
      {
      op->vtkStringToNumeric::ConvertPointDataOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_ConvertPointDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertPointDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConvertPointDataOff();
      }
    else
      {
      op->vtkStringToNumeric::ConvertPointDataOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_SetConvertCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConvertCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetConvertCellData(temp0);
      }
    else
      {
      op->vtkStringToNumeric::SetConvertCellData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_GetConvertCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvertCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetConvertCellData();
      }
    else
      {
      tempr = op->vtkStringToNumeric::GetConvertCellData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_ConvertCellDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertCellDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConvertCellDataOn();
      }
    else
      {
      op->vtkStringToNumeric::ConvertCellDataOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_ConvertCellDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertCellDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConvertCellDataOff();
      }
    else
      {
      op->vtkStringToNumeric::ConvertCellDataOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_SetConvertVertexData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConvertVertexData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetConvertVertexData(temp0);
      }
    else
      {
      op->vtkStringToNumeric::SetConvertVertexData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_GetConvertVertexData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvertVertexData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetConvertVertexData();
      }
    else
      {
      tempr = op->vtkStringToNumeric::GetConvertVertexData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_ConvertVertexDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertVertexDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConvertVertexDataOn();
      }
    else
      {
      op->vtkStringToNumeric::ConvertVertexDataOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_ConvertVertexDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertVertexDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConvertVertexDataOff();
      }
    else
      {
      op->vtkStringToNumeric::ConvertVertexDataOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_SetConvertEdgeData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConvertEdgeData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetConvertEdgeData(temp0);
      }
    else
      {
      op->vtkStringToNumeric::SetConvertEdgeData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_GetConvertEdgeData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvertEdgeData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetConvertEdgeData();
      }
    else
      {
      tempr = op->vtkStringToNumeric::GetConvertEdgeData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_ConvertEdgeDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertEdgeDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConvertEdgeDataOn();
      }
    else
      {
      op->vtkStringToNumeric::ConvertEdgeDataOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_ConvertEdgeDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertEdgeDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConvertEdgeDataOff();
      }
    else
      {
      op->vtkStringToNumeric::ConvertEdgeDataOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_SetConvertRowData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConvertRowData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetConvertRowData(temp0);
      }
    else
      {
      op->vtkStringToNumeric::SetConvertRowData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_GetConvertRowData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvertRowData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetConvertRowData();
      }
    else
      {
      tempr = op->vtkStringToNumeric::GetConvertRowData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_ConvertRowDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertRowDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConvertRowDataOn();
      }
    else
      {
      op->vtkStringToNumeric::ConvertRowDataOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_ConvertRowDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertRowDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConvertRowDataOff();
      }
    else
      {
      op->vtkStringToNumeric::ConvertRowDataOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkStringToNumeric_Methods[] = {
  {(char*)"GetClassName", PyvtkStringToNumeric_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStringToNumeric_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStringToNumeric_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkStringToNumeric\nC++: vtkStringToNumeric *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStringToNumeric_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStringToNumeric\nC++: vtkStringToNumeric *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetConvertFieldData", PyvtkStringToNumeric_SetConvertFieldData, 1,
   (char*)"V.SetConvertFieldData(bool)\nC++: void SetConvertFieldData(bool a)\n\nWhether to detect and convert field data arrays.  Default is on.\n"},
  {(char*)"GetConvertFieldData", PyvtkStringToNumeric_GetConvertFieldData, 1,
   (char*)"V.GetConvertFieldData() -> bool\nC++: bool GetConvertFieldData()\n\nWhether to detect and convert field data arrays.  Default is on.\n"},
  {(char*)"ConvertFieldDataOn", PyvtkStringToNumeric_ConvertFieldDataOn, 1,
   (char*)"V.ConvertFieldDataOn()\nC++: void ConvertFieldDataOn()\n\nWhether to detect and convert field data arrays.  Default is on.\n"},
  {(char*)"ConvertFieldDataOff", PyvtkStringToNumeric_ConvertFieldDataOff, 1,
   (char*)"V.ConvertFieldDataOff()\nC++: void ConvertFieldDataOff()\n\nWhether to detect and convert field data arrays.  Default is on.\n"},
  {(char*)"SetConvertPointData", PyvtkStringToNumeric_SetConvertPointData, 1,
   (char*)"V.SetConvertPointData(bool)\nC++: void SetConvertPointData(bool a)\n\nWhether to detect and convert cell data arrays.  Default is on.\n"},
  {(char*)"GetConvertPointData", PyvtkStringToNumeric_GetConvertPointData, 1,
   (char*)"V.GetConvertPointData() -> bool\nC++: bool GetConvertPointData()\n\nWhether to detect and convert cell data arrays.  Default is on.\n"},
  {(char*)"ConvertPointDataOn", PyvtkStringToNumeric_ConvertPointDataOn, 1,
   (char*)"V.ConvertPointDataOn()\nC++: void ConvertPointDataOn()\n\nWhether to detect and convert cell data arrays.  Default is on.\n"},
  {(char*)"ConvertPointDataOff", PyvtkStringToNumeric_ConvertPointDataOff, 1,
   (char*)"V.ConvertPointDataOff()\nC++: void ConvertPointDataOff()\n\nWhether to detect and convert cell data arrays.  Default is on.\n"},
  {(char*)"SetConvertCellData", PyvtkStringToNumeric_SetConvertCellData, 1,
   (char*)"V.SetConvertCellData(bool)\nC++: void SetConvertCellData(bool a)\n\nWhether to detect and convert point data arrays.  Default is on.\n"},
  {(char*)"GetConvertCellData", PyvtkStringToNumeric_GetConvertCellData, 1,
   (char*)"V.GetConvertCellData() -> bool\nC++: bool GetConvertCellData()\n\nWhether to detect and convert point data arrays.  Default is on.\n"},
  {(char*)"ConvertCellDataOn", PyvtkStringToNumeric_ConvertCellDataOn, 1,
   (char*)"V.ConvertCellDataOn()\nC++: void ConvertCellDataOn()\n\nWhether to detect and convert point data arrays.  Default is on.\n"},
  {(char*)"ConvertCellDataOff", PyvtkStringToNumeric_ConvertCellDataOff, 1,
   (char*)"V.ConvertCellDataOff()\nC++: void ConvertCellDataOff()\n\nWhether to detect and convert point data arrays.  Default is on.\n"},
  {(char*)"SetConvertVertexData", PyvtkStringToNumeric_SetConvertVertexData, 1,
   (char*)"V.SetConvertVertexData(bool)\nC++: virtual void SetConvertVertexData(bool b)\n\nWhether to detect and convert vertex data arrays.  Default is on.\n"},
  {(char*)"GetConvertVertexData", PyvtkStringToNumeric_GetConvertVertexData, 1,
   (char*)"V.GetConvertVertexData() -> bool\nC++: virtual bool GetConvertVertexData()\n\nWhether to detect and convert vertex data arrays.  Default is on.\n"},
  {(char*)"ConvertVertexDataOn", PyvtkStringToNumeric_ConvertVertexDataOn, 1,
   (char*)"V.ConvertVertexDataOn()\nC++: void ConvertVertexDataOn()\n\nWhether to detect and convert vertex data arrays.  Default is on.\n"},
  {(char*)"ConvertVertexDataOff", PyvtkStringToNumeric_ConvertVertexDataOff, 1,
   (char*)"V.ConvertVertexDataOff()\nC++: void ConvertVertexDataOff()\n\nWhether to detect and convert vertex data arrays.  Default is on.\n"},
  {(char*)"SetConvertEdgeData", PyvtkStringToNumeric_SetConvertEdgeData, 1,
   (char*)"V.SetConvertEdgeData(bool)\nC++: virtual void SetConvertEdgeData(bool b)\n\nWhether to detect and convert edge data arrays.  Default is on.\n"},
  {(char*)"GetConvertEdgeData", PyvtkStringToNumeric_GetConvertEdgeData, 1,
   (char*)"V.GetConvertEdgeData() -> bool\nC++: virtual bool GetConvertEdgeData()\n\nWhether to detect and convert edge data arrays.  Default is on.\n"},
  {(char*)"ConvertEdgeDataOn", PyvtkStringToNumeric_ConvertEdgeDataOn, 1,
   (char*)"V.ConvertEdgeDataOn()\nC++: void ConvertEdgeDataOn()\n\nWhether to detect and convert edge data arrays.  Default is on.\n"},
  {(char*)"ConvertEdgeDataOff", PyvtkStringToNumeric_ConvertEdgeDataOff, 1,
   (char*)"V.ConvertEdgeDataOff()\nC++: void ConvertEdgeDataOff()\n\nWhether to detect and convert edge data arrays.  Default is on.\n"},
  {(char*)"SetConvertRowData", PyvtkStringToNumeric_SetConvertRowData, 1,
   (char*)"V.SetConvertRowData(bool)\nC++: virtual void SetConvertRowData(bool b)\n\nWhether to detect and convert row data arrays.  Default is on.\n"},
  {(char*)"GetConvertRowData", PyvtkStringToNumeric_GetConvertRowData, 1,
   (char*)"V.GetConvertRowData() -> bool\nC++: virtual bool GetConvertRowData()\n\nWhether to detect and convert row data arrays.  Default is on.\n"},
  {(char*)"ConvertRowDataOn", PyvtkStringToNumeric_ConvertRowDataOn, 1,
   (char*)"V.ConvertRowDataOn()\nC++: void ConvertRowDataOn()\n\nWhether to detect and convert row data arrays.  Default is on.\n"},
  {(char*)"ConvertRowDataOff", PyvtkStringToNumeric_ConvertRowDataOff, 1,
   (char*)"V.ConvertRowDataOff()\nC++: void ConvertRowDataOff()\n\nWhether to detect and convert row data arrays.  Default is on.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkStringToNumeric_StaticNew()
{
  return vtkStringToNumeric::New();
}

PyObject *PyVTKClass_vtkStringToNumericNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkStringToNumeric_StaticNew,
    PyvtkStringToNumeric_Methods,
    "vtkStringToNumeric", modulename,
    NULL, NULL,
    PyvtkStringToNumeric_Doc(),
    PyVTKClass_vtkDataObjectAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkStringToNumeric_Doc()
{
  static const char *docstring[] = {
    "vtkStringToNumeric - Converts string arrays to numeric arrays\n\n",
    "Superclass: vtkDataObjectAlgorithm\n\n",
    "vtkStringToNumeric is a filter for converting a string array into a\nnumeric arrays.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStringToNumeric(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStringToNumericNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStringToNumeric", o) != 0)
    {
    Py_DECREF(o);
    }

}

