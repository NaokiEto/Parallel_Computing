// python wrapper for vtkTreeMapToPolyData
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
#include "vtkTreeMapToPolyData.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTreeMapToPolyData(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTreeMapToPolyData(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTreeMapToPolyDataNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTreeMapToPolyDataNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkTreeMapToPolyData_Doc();


static PyObject *
PyvtkTreeMapToPolyData_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapToPolyData *op = static_cast<vtkTreeMapToPolyData *>(vp);

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
      tempr = op->vtkTreeMapToPolyData::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeMapToPolyData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapToPolyData *op = static_cast<vtkTreeMapToPolyData *>(vp);

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
      tempr = op->vtkTreeMapToPolyData::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeMapToPolyData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapToPolyData *op = static_cast<vtkTreeMapToPolyData *>(vp);

  vtkTreeMapToPolyData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTreeMapToPolyData::NewInstance();
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
PyvtkTreeMapToPolyData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTreeMapToPolyData *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTreeMapToPolyData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeMapToPolyData_SetRectanglesArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRectanglesArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapToPolyData *op = static_cast<vtkTreeMapToPolyData *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRectanglesArrayName(temp0);
      }
    else
      {
      op->vtkTreeMapToPolyData::SetRectanglesArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeMapToPolyData_SetLevelArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLevelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapToPolyData *op = static_cast<vtkTreeMapToPolyData *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLevelArrayName(temp0);
      }
    else
      {
      op->vtkTreeMapToPolyData::SetLevelArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeMapToPolyData_GetLevelDeltaZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevelDeltaZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapToPolyData *op = static_cast<vtkTreeMapToPolyData *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLevelDeltaZ();
      }
    else
      {
      tempr = op->vtkTreeMapToPolyData::GetLevelDeltaZ();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeMapToPolyData_SetLevelDeltaZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLevelDeltaZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapToPolyData *op = static_cast<vtkTreeMapToPolyData *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLevelDeltaZ(temp0);
      }
    else
      {
      op->vtkTreeMapToPolyData::SetLevelDeltaZ(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeMapToPolyData_GetAddNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAddNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapToPolyData *op = static_cast<vtkTreeMapToPolyData *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAddNormals();
      }
    else
      {
      tempr = op->vtkTreeMapToPolyData::GetAddNormals();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeMapToPolyData_SetAddNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAddNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapToPolyData *op = static_cast<vtkTreeMapToPolyData *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAddNormals(temp0);
      }
    else
      {
      op->vtkTreeMapToPolyData::SetAddNormals(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeMapToPolyData_FillInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapToPolyData *op = static_cast<vtkTreeMapToPolyData *>(vp);

  int temp0;
  vtkInformation *temp1 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      tempr = op->FillInputPortInformation(temp0, temp1);
      }
    else
      {
      tempr = op->vtkTreeMapToPolyData::FillInputPortInformation(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTreeMapToPolyData_Methods[] = {
  {(char*)"GetClassName", PyvtkTreeMapToPolyData_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTreeMapToPolyData_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTreeMapToPolyData_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTreeMapToPolyData\nC++: vtkTreeMapToPolyData *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTreeMapToPolyData_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTreeMapToPolyData\nC++: vtkTreeMapToPolyData *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetRectanglesArrayName", PyvtkTreeMapToPolyData_SetRectanglesArrayName, 1,
   (char*)"V.SetRectanglesArrayName(string)\nC++: virtual void SetRectanglesArrayName(const char *name)\n\nThe field containing quadruples of the form (min x, max x, min y,\nmax y) representing the bounds of the rectangles for each vertex.\nThis array may be added to the tree using vtkTreeMapLayout.\n"},
  {(char*)"SetLevelArrayName", PyvtkTreeMapToPolyData_SetLevelArrayName, 1,
   (char*)"V.SetLevelArrayName(string)\nC++: virtual void SetLevelArrayName(const char *name)\n\nThe field containing the level of each tree node. This can be\nadded using vtkTreeLevelsFilter before this filter. If this is\nnot present, the filter simply calls tree->GetLevel(v) for each\nvertex, which will produce the same result, but may not be as\nefficient.\n"},
  {(char*)"GetLevelDeltaZ", PyvtkTreeMapToPolyData_GetLevelDeltaZ, 1,
   (char*)"V.GetLevelDeltaZ() -> float\nC++: double GetLevelDeltaZ()\n\nThe spacing along the z-axis between tree map levels.\n"},
  {(char*)"SetLevelDeltaZ", PyvtkTreeMapToPolyData_SetLevelDeltaZ, 1,
   (char*)"V.SetLevelDeltaZ(float)\nC++: void SetLevelDeltaZ(double a)\n\nThe spacing along the z-axis between tree map levels.\n"},
  {(char*)"GetAddNormals", PyvtkTreeMapToPolyData_GetAddNormals, 1,
   (char*)"V.GetAddNormals() -> bool\nC++: bool GetAddNormals()\n\nThe spacing along the z-axis between tree map levels.\n"},
  {(char*)"SetAddNormals", PyvtkTreeMapToPolyData_SetAddNormals, 1,
   (char*)"V.SetAddNormals(bool)\nC++: void SetAddNormals(bool a)\n\nThe spacing along the z-axis between tree map levels.\n"},
  {(char*)"FillInputPortInformation", PyvtkTreeMapToPolyData_FillInputPortInformation, 1,
   (char*)"V.FillInputPortInformation(int, vtkInformation) -> int\nC++: int FillInputPortInformation(int port, vtkInformation *info)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTreeMapToPolyData_StaticNew()
{
  return vtkTreeMapToPolyData::New();
}

PyObject *PyVTKClass_vtkTreeMapToPolyDataNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTreeMapToPolyData_StaticNew,
    PyvtkTreeMapToPolyData_Methods,
    "vtkTreeMapToPolyData", modulename,
    NULL, NULL,
    PyvtkTreeMapToPolyData_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTreeMapToPolyData_Doc()
{
  static const char *docstring[] = {
    "vtkTreeMapToPolyData - converts a tree to a polygonal data\nrepresenting a tree map\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "This algorithm requires that the vtkTreeMapLayout filter has already\napplied to the data in order to create the quadruple array (min x,\nmax x, min y, max y) of bounds for each vertex of the tree.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTreeMapToPolyData(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTreeMapToPolyDataNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTreeMapToPolyData", o) != 0)
    {
    Py_DECREF(o);
    }

}

