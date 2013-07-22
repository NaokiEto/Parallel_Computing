// python wrapper for vtkStripper
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
#include "vtkStripper.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkStripper(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkStripper(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkStripperNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkStripperNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkStripper_Doc();


static PyObject *
PyvtkStripper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

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
      tempr = op->vtkStripper::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStripper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

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
      tempr = op->vtkStripper::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStripper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  vtkStripper *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkStripper::NewInstance();
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
PyvtkStripper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkStripper *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkStripper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStripper_SetMaximumLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumLength(temp0);
      }
    else
      {
      op->vtkStripper::SetMaximumLength(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStripper_GetMaximumLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumLengthMinValue();
      }
    else
      {
      tempr = op->vtkStripper::GetMaximumLengthMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStripper_GetMaximumLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumLengthMaxValue();
      }
    else
      {
      tempr = op->vtkStripper::GetMaximumLengthMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStripper_GetMaximumLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumLength();
      }
    else
      {
      tempr = op->vtkStripper::GetMaximumLength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStripper_PassCellDataAsFieldDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassCellDataAsFieldDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassCellDataAsFieldDataOn();
      }
    else
      {
      op->vtkStripper::PassCellDataAsFieldDataOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStripper_PassCellDataAsFieldDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassCellDataAsFieldDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassCellDataAsFieldDataOff();
      }
    else
      {
      op->vtkStripper::PassCellDataAsFieldDataOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStripper_SetPassCellDataAsFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassCellDataAsFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPassCellDataAsFieldData(temp0);
      }
    else
      {
      op->vtkStripper::SetPassCellDataAsFieldData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStripper_GetPassCellDataAsFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassCellDataAsFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPassCellDataAsFieldData();
      }
    else
      {
      tempr = op->vtkStripper::GetPassCellDataAsFieldData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStripper_SetPassThroughCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassThroughCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPassThroughCellIds(temp0);
      }
    else
      {
      op->vtkStripper::SetPassThroughCellIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStripper_GetPassThroughCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassThroughCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPassThroughCellIds();
      }
    else
      {
      tempr = op->vtkStripper::GetPassThroughCellIds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStripper_PassThroughCellIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughCellIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassThroughCellIdsOn();
      }
    else
      {
      op->vtkStripper::PassThroughCellIdsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStripper_PassThroughCellIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughCellIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassThroughCellIdsOff();
      }
    else
      {
      op->vtkStripper::PassThroughCellIdsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStripper_SetPassThroughPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassThroughPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPassThroughPointIds(temp0);
      }
    else
      {
      op->vtkStripper::SetPassThroughPointIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStripper_GetPassThroughPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassThroughPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPassThroughPointIds();
      }
    else
      {
      tempr = op->vtkStripper::GetPassThroughPointIds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStripper_PassThroughPointIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughPointIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassThroughPointIdsOn();
      }
    else
      {
      op->vtkStripper::PassThroughPointIdsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStripper_PassThroughPointIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughPointIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassThroughPointIdsOff();
      }
    else
      {
      op->vtkStripper::PassThroughPointIdsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkStripper_Methods[] = {
  {(char*)"GetClassName", PyvtkStripper_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStripper_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStripper_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkStripper\nC++: vtkStripper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStripper_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStripper\nC++: vtkStripper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetMaximumLength", PyvtkStripper_SetMaximumLength, 1,
   (char*)"V.SetMaximumLength(int)\nC++: void SetMaximumLength(int)\n\nSpecify the maximum number of triangles in a triangle strip,\nand/or the maximum number of lines in a poly-line.\n"},
  {(char*)"GetMaximumLengthMinValue", PyvtkStripper_GetMaximumLengthMinValue, 1,
   (char*)"V.GetMaximumLengthMinValue() -> int\nC++: int GetMaximumLengthMinValue()\n\nSpecify the maximum number of triangles in a triangle strip,\nand/or the maximum number of lines in a poly-line.\n"},
  {(char*)"GetMaximumLengthMaxValue", PyvtkStripper_GetMaximumLengthMaxValue, 1,
   (char*)"V.GetMaximumLengthMaxValue() -> int\nC++: int GetMaximumLengthMaxValue()\n\nSpecify the maximum number of triangles in a triangle strip,\nand/or the maximum number of lines in a poly-line.\n"},
  {(char*)"GetMaximumLength", PyvtkStripper_GetMaximumLength, 1,
   (char*)"V.GetMaximumLength() -> int\nC++: int GetMaximumLength()\n\nSpecify the maximum number of triangles in a triangle strip,\nand/or the maximum number of lines in a poly-line.\n"},
  {(char*)"PassCellDataAsFieldDataOn", PyvtkStripper_PassCellDataAsFieldDataOn, 1,
   (char*)"V.PassCellDataAsFieldDataOn()\nC++: void PassCellDataAsFieldDataOn()\n\nEnable/Disable passing of the CellData in the input to the output\nas FieldData. Note the field data is tranformed.\n"},
  {(char*)"PassCellDataAsFieldDataOff", PyvtkStripper_PassCellDataAsFieldDataOff, 1,
   (char*)"V.PassCellDataAsFieldDataOff()\nC++: void PassCellDataAsFieldDataOff()\n\nEnable/Disable passing of the CellData in the input to the output\nas FieldData. Note the field data is tranformed.\n"},
  {(char*)"SetPassCellDataAsFieldData", PyvtkStripper_SetPassCellDataAsFieldData, 1,
   (char*)"V.SetPassCellDataAsFieldData(int)\nC++: void SetPassCellDataAsFieldData(int a)\n\nEnable/Disable passing of the CellData in the input to the output\nas FieldData. Note the field data is tranformed.\n"},
  {(char*)"GetPassCellDataAsFieldData", PyvtkStripper_GetPassCellDataAsFieldData, 1,
   (char*)"V.GetPassCellDataAsFieldData() -> int\nC++: int GetPassCellDataAsFieldData()\n\nEnable/Disable passing of the CellData in the input to the output\nas FieldData. Note the field data is tranformed.\n"},
  {(char*)"SetPassThroughCellIds", PyvtkStripper_SetPassThroughCellIds, 1,
   (char*)"V.SetPassThroughCellIds(int)\nC++: void SetPassThroughCellIds(int a)\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for picking. The default is off\nto conserve memory.\n"},
  {(char*)"GetPassThroughCellIds", PyvtkStripper_GetPassThroughCellIds, 1,
   (char*)"V.GetPassThroughCellIds() -> int\nC++: int GetPassThroughCellIds()\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for picking. The default is off\nto conserve memory.\n"},
  {(char*)"PassThroughCellIdsOn", PyvtkStripper_PassThroughCellIdsOn, 1,
   (char*)"V.PassThroughCellIdsOn()\nC++: void PassThroughCellIdsOn()\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for picking. The default is off\nto conserve memory.\n"},
  {(char*)"PassThroughCellIdsOff", PyvtkStripper_PassThroughCellIdsOff, 1,
   (char*)"V.PassThroughCellIdsOff()\nC++: void PassThroughCellIdsOff()\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for picking. The default is off\nto conserve memory.\n"},
  {(char*)"SetPassThroughPointIds", PyvtkStripper_SetPassThroughPointIds, 1,
   (char*)"V.SetPassThroughPointIds(int)\nC++: void SetPassThroughPointIds(int a)\n\nIf on, the output polygonal dataset will have a pointdata array\nthat holds the point index of the original vertex that produced\neach output vertex. This is useful for picking. The default is\noff to conserve memory.\n"},
  {(char*)"GetPassThroughPointIds", PyvtkStripper_GetPassThroughPointIds, 1,
   (char*)"V.GetPassThroughPointIds() -> int\nC++: int GetPassThroughPointIds()\n\nIf on, the output polygonal dataset will have a pointdata array\nthat holds the point index of the original vertex that produced\neach output vertex. This is useful for picking. The default is\noff to conserve memory.\n"},
  {(char*)"PassThroughPointIdsOn", PyvtkStripper_PassThroughPointIdsOn, 1,
   (char*)"V.PassThroughPointIdsOn()\nC++: void PassThroughPointIdsOn()\n\nIf on, the output polygonal dataset will have a pointdata array\nthat holds the point index of the original vertex that produced\neach output vertex. This is useful for picking. The default is\noff to conserve memory.\n"},
  {(char*)"PassThroughPointIdsOff", PyvtkStripper_PassThroughPointIdsOff, 1,
   (char*)"V.PassThroughPointIdsOff()\nC++: void PassThroughPointIdsOff()\n\nIf on, the output polygonal dataset will have a pointdata array\nthat holds the point index of the original vertex that produced\neach output vertex. This is useful for picking. The default is\noff to conserve memory.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkStripper_StaticNew()
{
  return vtkStripper::New();
}

PyObject *PyVTKClass_vtkStripperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkStripper_StaticNew,
    PyvtkStripper_Methods,
    "vtkStripper", modulename,
    NULL, NULL,
    PyvtkStripper_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkStripper_Doc()
{
  static const char *docstring[] = {
    "vtkStripper - create triangle strips and/or poly-lines\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "Caveats:\n\nIf triangle strips or poly-lines exist in the input data they will be\npassed through to the output data. This filter will only construct\ntriangle strips if triangle polygons are available; and will only\nconstruct poly-lines if lines are available.\n\nSee Also:\n\nvtkTriangleFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStripper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStripperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStripper", o) != 0)
    {
    Py_DECREF(o);
    }

}

