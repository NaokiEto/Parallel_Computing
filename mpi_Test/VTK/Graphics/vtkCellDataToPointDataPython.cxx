// python wrapper for vtkCellDataToPointData
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
#include "vtkCellDataToPointData.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCellDataToPointData(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCellDataToPointData(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCellDataToPointDataNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCellDataToPointDataNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkCellDataToPointData_Doc();


static PyObject *
PyvtkCellDataToPointData_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDataToPointData *op = static_cast<vtkCellDataToPointData *>(vp);

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
      tempr = op->vtkCellDataToPointData::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellDataToPointData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDataToPointData *op = static_cast<vtkCellDataToPointData *>(vp);

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
      tempr = op->vtkCellDataToPointData::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellDataToPointData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDataToPointData *op = static_cast<vtkCellDataToPointData *>(vp);

  vtkCellDataToPointData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCellDataToPointData::NewInstance();
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
PyvtkCellDataToPointData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCellDataToPointData *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCellDataToPointData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellDataToPointData_SetPassCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDataToPointData *op = static_cast<vtkCellDataToPointData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPassCellData(temp0);
      }
    else
      {
      op->vtkCellDataToPointData::SetPassCellData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellDataToPointData_GetPassCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDataToPointData *op = static_cast<vtkCellDataToPointData *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPassCellData();
      }
    else
      {
      tempr = op->vtkCellDataToPointData::GetPassCellData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellDataToPointData_PassCellDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassCellDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDataToPointData *op = static_cast<vtkCellDataToPointData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassCellDataOn();
      }
    else
      {
      op->vtkCellDataToPointData::PassCellDataOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellDataToPointData_PassCellDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassCellDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDataToPointData *op = static_cast<vtkCellDataToPointData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassCellDataOff();
      }
    else
      {
      op->vtkCellDataToPointData::PassCellDataOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCellDataToPointData_Methods[] = {
  {(char*)"GetClassName", PyvtkCellDataToPointData_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCellDataToPointData_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCellDataToPointData_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCellDataToPointData\nC++: vtkCellDataToPointData *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCellDataToPointData_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCellDataToPointData\nC++: vtkCellDataToPointData *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPassCellData", PyvtkCellDataToPointData_SetPassCellData, 1,
   (char*)"V.SetPassCellData(int)\nC++: void SetPassCellData(int a)\n\nControl whether the input cell data is to be passed to the\noutput. If on, then the input cell data is passed through to the\noutput; otherwise, only generated point data is placed into the\noutput.\n"},
  {(char*)"GetPassCellData", PyvtkCellDataToPointData_GetPassCellData, 1,
   (char*)"V.GetPassCellData() -> int\nC++: int GetPassCellData()\n\nControl whether the input cell data is to be passed to the\noutput. If on, then the input cell data is passed through to the\noutput; otherwise, only generated point data is placed into the\noutput.\n"},
  {(char*)"PassCellDataOn", PyvtkCellDataToPointData_PassCellDataOn, 1,
   (char*)"V.PassCellDataOn()\nC++: void PassCellDataOn()\n\nControl whether the input cell data is to be passed to the\noutput. If on, then the input cell data is passed through to the\noutput; otherwise, only generated point data is placed into the\noutput.\n"},
  {(char*)"PassCellDataOff", PyvtkCellDataToPointData_PassCellDataOff, 1,
   (char*)"V.PassCellDataOff()\nC++: void PassCellDataOff()\n\nControl whether the input cell data is to be passed to the\noutput. If on, then the input cell data is passed through to the\noutput; otherwise, only generated point data is placed into the\noutput.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCellDataToPointData_StaticNew()
{
  return vtkCellDataToPointData::New();
}

PyObject *PyVTKClass_vtkCellDataToPointDataNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCellDataToPointData_StaticNew,
    PyvtkCellDataToPointData_Methods,
    "vtkCellDataToPointData", modulename,
    NULL, NULL,
    PyvtkCellDataToPointData_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkCellDataToPointData_Doc()
{
  static const char *docstring[] = {
    "vtkCellDataToPointData - map cell data to point data\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkCellDataToPointData is a filter that transforms cell data (i.e.,\ndata specified per cell) into point data (i.e., data specified at\ncell points). The method of transformation is based on averaging the\ndata values of all cells using a particular point. Optionally, the\ninput cell data can be passed through to the output as well.\n\nCaveats:\n\nThis filter is an abstract filter, that is, the output is ",
    "an abstract\ntype (i.e., vtkDataSet). Use the convenience methods (e.g.,\nGetPolyDataOutput(), GetStructuredPointsOutput(), etc.) to get the\ntype of output you want.\n\nSee Also:\n\nvtkPointData vtkCellData vtkPointDataToCellData\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCellDataToPointData(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCellDataToPointDataNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCellDataToPointData", o) != 0)
    {
    Py_DECREF(o);
    }

}

