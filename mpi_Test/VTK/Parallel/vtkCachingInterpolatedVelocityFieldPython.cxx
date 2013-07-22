// python wrapper for vtkCachingInterpolatedVelocityField
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
#include "vtkCachingInterpolatedVelocityField.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCachingInterpolatedVelocityField(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCachingInterpolatedVelocityField(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCachingInterpolatedVelocityFieldNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCachingInterpolatedVelocityFieldNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkFunctionSetNew
extern "C" { PyObject *PyVTKClass_vtkFunctionSetNew(const char *); }
#define DECLARED_PyVTKClass_vtkFunctionSetNew
#endif

static const char **PyvtkCachingInterpolatedVelocityField_Doc();


static PyObject *
PyvtkCachingInterpolatedVelocityField_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

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
      tempr = op->vtkCachingInterpolatedVelocityField::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCachingInterpolatedVelocityField_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

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
      tempr = op->vtkCachingInterpolatedVelocityField::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCachingInterpolatedVelocityField_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

  vtkCachingInterpolatedVelocityField *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCachingInterpolatedVelocityField::NewInstance();
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
PyvtkCachingInterpolatedVelocityField_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCachingInterpolatedVelocityField *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCachingInterpolatedVelocityField::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCachingInterpolatedVelocityField_SetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

  int temp0;
  vtkDataSet *temp1 = NULL;
  bool temp2 = false;
  vtkAbstractCellLocator *temp3 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataSet") &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkAbstractCellLocator"))
    {
    if (ap.IsBound())
      {
      op->SetDataSet(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkCachingInterpolatedVelocityField::SetDataSet(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCachingInterpolatedVelocityField_GetVectorsSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorsSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVectorsSelection();
      }
    else
      {
      tempr = op->vtkCachingInterpolatedVelocityField::GetVectorsSelection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCachingInterpolatedVelocityField_SelectVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SelectVectors(temp0);
      }
    else
      {
      op->vtkCachingInterpolatedVelocityField::SelectVectors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCachingInterpolatedVelocityField_SetLastCellInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastCellInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetLastCellInfo(temp0, temp1);
      }
    else
      {
      op->vtkCachingInterpolatedVelocityField::SetLastCellInfo(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCachingInterpolatedVelocityField_ClearLastCellInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearLastCellInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearLastCellInfo();
      }
    else
      {
      op->vtkCachingInterpolatedVelocityField::ClearLastCellInfo();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCachingInterpolatedVelocityField_GetLastLocalCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastLocalCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

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
      tempr = op->GetLastLocalCoordinates(temp0);
      }
    else
      {
      tempr = op->vtkCachingInterpolatedVelocityField::GetLastLocalCoordinates(temp0);
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
PyvtkCachingInterpolatedVelocityField_GetCellCacheHit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellCacheHit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellCacheHit();
      }
    else
      {
      tempr = op->vtkCachingInterpolatedVelocityField::GetCellCacheHit();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCachingInterpolatedVelocityField_GetDataSetCacheHit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSetCacheHit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataSetCacheHit();
      }
    else
      {
      tempr = op->vtkCachingInterpolatedVelocityField::GetDataSetCacheHit();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCachingInterpolatedVelocityField_GetCacheMiss(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheMiss");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCacheMiss();
      }
    else
      {
      tempr = op->vtkCachingInterpolatedVelocityField::GetCacheMiss();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCachingInterpolatedVelocityField_Methods[] = {
  {(char*)"GetClassName", PyvtkCachingInterpolatedVelocityField_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCachingInterpolatedVelocityField_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCachingInterpolatedVelocityField_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCachingInterpolatedVelocityField\nC++: vtkCachingInterpolatedVelocityField *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCachingInterpolatedVelocityField_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCachingInterpolatedVelocityField\nC++: vtkCachingInterpolatedVelocityField *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"SetDataSet", PyvtkCachingInterpolatedVelocityField_SetDataSet, 1,
   (char*)"V.SetDataSet(int, vtkDataSet, bool, vtkAbstractCellLocator)\nC++: virtual void SetDataSet(int I, vtkDataSet *dataset,\n    bool staticdataset, vtkAbstractCellLocator *locator)\n\nAdd a dataset used by the interpolation function evaluation.\n"},
  {(char*)"GetVectorsSelection", PyvtkCachingInterpolatedVelocityField_GetVectorsSelection, 1,
   (char*)"V.GetVectorsSelection() -> string\nC++: char *GetVectorsSelection()\n\nIf you want to work with an arbitrary vector array, then set its\nname here. By default this in NULL and the filter will use the\nactive vector array.\n"},
  {(char*)"SelectVectors", PyvtkCachingInterpolatedVelocityField_SelectVectors, 1,
   (char*)"V.SelectVectors(string)\nC++: void SelectVectors(const char *fieldName)\n\nIf you want to work with an arbitrary vector array, then set its\nname here. By default this in NULL and the filter will use the\nactive vector array.\n"},
  {(char*)"SetLastCellInfo", PyvtkCachingInterpolatedVelocityField_SetLastCellInfo, 1,
   (char*)"V.SetLastCellInfo(int, int)\nC++: void SetLastCellInfo(vtkIdType c, int datasetindex)\n\nReturn the cell id cached from last evaluation.\n"},
  {(char*)"ClearLastCellInfo", PyvtkCachingInterpolatedVelocityField_ClearLastCellInfo, 1,
   (char*)"V.ClearLastCellInfo()\nC++: void ClearLastCellInfo()\n\nSet the last cell id to -1 so that the next search does not start\nfrom the previous cell\n"},
  {(char*)"GetLastLocalCoordinates", PyvtkCachingInterpolatedVelocityField_GetLastLocalCoordinates, 1,
   (char*)"V.GetLastLocalCoordinates([float, float, float]) -> int\nC++: int GetLastLocalCoordinates(double pcoords[3])\n\nReturns the interpolation weights/pcoords cached from last\nevaluation if the cached cell is valid (returns 1). Otherwise, it\ndoes not change w and returns 0.\n"},
  {(char*)"GetCellCacheHit", PyvtkCachingInterpolatedVelocityField_GetCellCacheHit, 1,
   (char*)"V.GetCellCacheHit() -> int\nC++: int GetCellCacheHit()\n\nCaching statistics.\n"},
  {(char*)"GetDataSetCacheHit", PyvtkCachingInterpolatedVelocityField_GetDataSetCacheHit, 1,
   (char*)"V.GetDataSetCacheHit() -> int\nC++: int GetDataSetCacheHit()\n\nCaching statistics.\n"},
  {(char*)"GetCacheMiss", PyvtkCachingInterpolatedVelocityField_GetCacheMiss, 1,
   (char*)"V.GetCacheMiss() -> int\nC++: int GetCacheMiss()\n\nCaching statistics.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCachingInterpolatedVelocityField_StaticNew()
{
  return vtkCachingInterpolatedVelocityField::New();
}

PyObject *PyVTKClass_vtkCachingInterpolatedVelocityFieldNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCachingInterpolatedVelocityField_StaticNew,
    PyvtkCachingInterpolatedVelocityField_Methods,
    "vtkCachingInterpolatedVelocityField", modulename,
    NULL, NULL,
    PyvtkCachingInterpolatedVelocityField_Doc(),
    PyVTKClass_vtkFunctionSetNew(modulename));
  return cls;
}

const char **PyvtkCachingInterpolatedVelocityField_Doc()
{
  static const char *docstring[] = {
    "vtkCachingInterpolatedVelocityField - Interface for obtaining\n\n",
    "Superclass: vtkFunctionSet\n\n",
    "vtkCachingInterpolatedVelocityField acts as a continuous velocity\nfield by performing cell interpolation on the underlying vtkDataSet.\nThis is a concrete sub-class of vtkFunctionSet with\nNumberOfIndependentVariables = 4 (x,y,z,t) and NumberOfFunctions = 3\n(u,v,w). Normally, every time an evaluation is performed, the cell\nwhich contains the point (x,y,z) has to be found by calling FindCell.\nThis is",
    " a computationally expensive operation. In certain cases, the\ncell search can be avoided or shortened by providing a guess for the\ncell id. For example, in streamline integration, the next evaluation\nis usually in the same or a neighbour cell. For this reason,\nvtkCachingInterpolatedVelocityField stores the last cell id. If\ncaching is turned on, it uses this id as the starting point.\n\nCaveats:\n\nvtk",
    "CachingInterpolatedVelocityField is not thread safe. A new\ninstance should be created by each thread.\n\nSee Also:\n\nvtkFunctionSet vtkStreamer\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCachingInterpolatedVelocityField(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCachingInterpolatedVelocityFieldNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCachingInterpolatedVelocityField", o) != 0)
    {
    Py_DECREF(o);
    }

}

