// python wrapper for vtkMaskPolyData
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
#include "vtkMaskPolyData.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMaskPolyData(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMaskPolyData(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMaskPolyDataNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMaskPolyDataNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkMaskPolyData_Doc();


static PyObject *
PyvtkMaskPolyData_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPolyData *op = static_cast<vtkMaskPolyData *>(vp);

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
      tempr = op->vtkMaskPolyData::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPolyData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPolyData *op = static_cast<vtkMaskPolyData *>(vp);

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
      tempr = op->vtkMaskPolyData::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPolyData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPolyData *op = static_cast<vtkMaskPolyData *>(vp);

  vtkMaskPolyData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMaskPolyData::NewInstance();
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
PyvtkMaskPolyData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkMaskPolyData *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkMaskPolyData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPolyData_SetOnRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOnRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPolyData *op = static_cast<vtkMaskPolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOnRatio(temp0);
      }
    else
      {
      op->vtkMaskPolyData::SetOnRatio(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPolyData_GetOnRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOnRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPolyData *op = static_cast<vtkMaskPolyData *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOnRatioMinValue();
      }
    else
      {
      tempr = op->vtkMaskPolyData::GetOnRatioMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPolyData_GetOnRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOnRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPolyData *op = static_cast<vtkMaskPolyData *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOnRatioMaxValue();
      }
    else
      {
      tempr = op->vtkMaskPolyData::GetOnRatioMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPolyData_GetOnRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOnRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPolyData *op = static_cast<vtkMaskPolyData *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOnRatio();
      }
    else
      {
      tempr = op->vtkMaskPolyData::GetOnRatio();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPolyData_SetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPolyData *op = static_cast<vtkMaskPolyData *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOffset(temp0);
      }
    else
      {
      op->vtkMaskPolyData::SetOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPolyData_GetOffsetMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffsetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPolyData *op = static_cast<vtkMaskPolyData *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOffsetMinValue();
      }
    else
      {
      tempr = op->vtkMaskPolyData::GetOffsetMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPolyData_GetOffsetMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffsetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPolyData *op = static_cast<vtkMaskPolyData *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOffsetMaxValue();
      }
    else
      {
      tempr = op->vtkMaskPolyData::GetOffsetMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPolyData_GetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPolyData *op = static_cast<vtkMaskPolyData *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOffset();
      }
    else
      {
      tempr = op->vtkMaskPolyData::GetOffset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMaskPolyData_Methods[] = {
  {(char*)"GetClassName", PyvtkMaskPolyData_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMaskPolyData_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMaskPolyData_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMaskPolyData\nC++: vtkMaskPolyData *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMaskPolyData_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMaskPolyData\nC++: vtkMaskPolyData *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetOnRatio", PyvtkMaskPolyData_SetOnRatio, 1,
   (char*)"V.SetOnRatio(int)\nC++: void SetOnRatio(int)\n\nTurn on every nth entity (cell).\n"},
  {(char*)"GetOnRatioMinValue", PyvtkMaskPolyData_GetOnRatioMinValue, 1,
   (char*)"V.GetOnRatioMinValue() -> int\nC++: int GetOnRatioMinValue()\n\nTurn on every nth entity (cell).\n"},
  {(char*)"GetOnRatioMaxValue", PyvtkMaskPolyData_GetOnRatioMaxValue, 1,
   (char*)"V.GetOnRatioMaxValue() -> int\nC++: int GetOnRatioMaxValue()\n\nTurn on every nth entity (cell).\n"},
  {(char*)"GetOnRatio", PyvtkMaskPolyData_GetOnRatio, 1,
   (char*)"V.GetOnRatio() -> int\nC++: int GetOnRatio()\n\nTurn on every nth entity (cell).\n"},
  {(char*)"SetOffset", PyvtkMaskPolyData_SetOffset, 1,
   (char*)"V.SetOffset(int)\nC++: void SetOffset(vtkIdType)\n\nStart with this entity (cell).\n"},
  {(char*)"GetOffsetMinValue", PyvtkMaskPolyData_GetOffsetMinValue, 1,
   (char*)"V.GetOffsetMinValue() -> int\nC++: vtkIdType GetOffsetMinValue()\n\nStart with this entity (cell).\n"},
  {(char*)"GetOffsetMaxValue", PyvtkMaskPolyData_GetOffsetMaxValue, 1,
   (char*)"V.GetOffsetMaxValue() -> int\nC++: vtkIdType GetOffsetMaxValue()\n\nStart with this entity (cell).\n"},
  {(char*)"GetOffset", PyvtkMaskPolyData_GetOffset, 1,
   (char*)"V.GetOffset() -> int\nC++: vtkIdType GetOffset()\n\nStart with this entity (cell).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMaskPolyData_StaticNew()
{
  return vtkMaskPolyData::New();
}

PyObject *PyVTKClass_vtkMaskPolyDataNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMaskPolyData_StaticNew,
    PyvtkMaskPolyData_Methods,
    "vtkMaskPolyData", modulename,
    NULL, NULL,
    PyvtkMaskPolyData_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkMaskPolyData_Doc()
{
  static const char *docstring[] = {
    "vtkMaskPolyData - sample subset of input polygonal data cells\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkMaskPolyData is a filter that sub-samples the cells of input\npolygonal data. The user specifies every nth item, with an initial\noffset to begin sampling.\n\nSee Also:\n\nvtkMaskPoints\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMaskPolyData(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMaskPolyDataNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMaskPolyData", o) != 0)
    {
    Py_DECREF(o);
    }

}

