// python wrapper for vtkTemporalInterpolatedVelocityField
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
#include "vtkTemporalInterpolatedVelocityField.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTemporalInterpolatedVelocityField(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTemporalInterpolatedVelocityField(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTemporalInterpolatedVelocityFieldNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTemporalInterpolatedVelocityFieldNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkFunctionSetNew
extern "C" { PyObject *PyVTKClass_vtkFunctionSetNew(const char *); }
#define DECLARED_PyVTKClass_vtkFunctionSetNew
#endif

static const char **PyvtkTemporalInterpolatedVelocityField_Doc();


static PyObject *
PyvtkTemporalInterpolatedVelocityField_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

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
      tempr = op->vtkTemporalInterpolatedVelocityField::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

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
      tempr = op->vtkTemporalInterpolatedVelocityField::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  vtkTemporalInterpolatedVelocityField *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTemporalInterpolatedVelocityField::NewInstance();
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
PyvtkTemporalInterpolatedVelocityField_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTemporalInterpolatedVelocityField *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTemporalInterpolatedVelocityField::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_SelectVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

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
      op->vtkTemporalInterpolatedVelocityField::SelectVectors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_SetDataSetAtTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSetAtTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  int temp0;
  int temp1;
  double temp2;
  vtkDataSet *temp3 = NULL;
  bool temp4 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkDataSet") &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      op->SetDataSetAtTime(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkTemporalInterpolatedVelocityField::SetDataSetAtTime(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_GetCachedCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCachedCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  vtkIdType temp0[2];
  vtkIdType save0[2];
  const int size0 = 2;
  int temp1[2];
  int save1[2];
  const int size1 = 2;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      tempr = op->GetCachedCellIds(temp0, temp1);
      }
    else
      {
      tempr = op->vtkTemporalInterpolatedVelocityField::GetCachedCellIds(temp0, temp1);
      }

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
PyvtkTemporalInterpolatedVelocityField_SetCachedCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCachedCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  vtkIdType temp0[2];
  vtkIdType save0[2];
  const int size0 = 2;
  int temp1[2];
  int save1[2];
  const int size1 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->SetCachedCellIds(temp0, temp1);
      }
    else
      {
      op->vtkTemporalInterpolatedVelocityField::SetCachedCellIds(temp0, temp1);
      }

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
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_ClearCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearCache();
      }
    else
      {
      op->vtkTemporalInterpolatedVelocityField::ClearCache();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_GetLastGoodVelocity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastGoodVelocity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLastGoodVelocity();
      }
    else
      {
      tempr = op->vtkTemporalInterpolatedVelocityField::GetLastGoodVelocity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_GetCurrentWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCurrentWeight();
      }
    else
      {
      tempr = op->vtkTemporalInterpolatedVelocityField::GetCurrentWeight();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_InterpolatePoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolatePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  vtkPointData *temp0 = NULL;
  vtkPointData *temp1 = NULL;
  vtkIdType temp2;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkPointData") &&
      ap.GetVTKObject(temp1, "vtkPointData") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->InterpolatePoint(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkTemporalInterpolatedVelocityField::InterpolatePoint(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTemporalInterpolatedVelocityField_InterpolatePoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolatePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  int temp0;
  vtkPointData *temp1 = NULL;
  vtkIdType temp2;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPointData") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->InterpolatePoint(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkTemporalInterpolatedVelocityField::InterpolatePoint(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTemporalInterpolatedVelocityField_InterpolatePoint_Methods[] = {
  {NULL, PyvtkTemporalInterpolatedVelocityField_InterpolatePoint_s1, 1,
   (char*)"@OOL *vtkPointData *vtkPointData"},
  {NULL, PyvtkTemporalInterpolatedVelocityField_InterpolatePoint_s2, 1,
   (char*)"@iOL *vtkPointData"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTemporalInterpolatedVelocityField_InterpolatePoint(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTemporalInterpolatedVelocityField_InterpolatePoint_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "InterpolatePoint");
  return NULL;
}



static PyObject *
PyvtkTemporalInterpolatedVelocityField_ShowCacheResults(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowCacheResults");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShowCacheResults();
      }
    else
      {
      op->vtkTemporalInterpolatedVelocityField::ShowCacheResults();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_IsStatic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsStatic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  int temp0;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsStatic(temp0);
      }
    else
      {
      tempr = op->vtkTemporalInterpolatedVelocityField::IsStatic(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_AdvanceOneTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdvanceOneTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AdvanceOneTimeStep();
      }
    else
      {
      op->vtkTemporalInterpolatedVelocityField::AdvanceOneTimeStep();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTemporalInterpolatedVelocityField_Methods[] = {
  {(char*)"GetClassName", PyvtkTemporalInterpolatedVelocityField_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTemporalInterpolatedVelocityField_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTemporalInterpolatedVelocityField_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTemporalInterpolatedVelocityField\nC++: vtkTemporalInterpolatedVelocityField *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTemporalInterpolatedVelocityField_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTemporalInterpolatedVelocityField\nC++: vtkTemporalInterpolatedVelocityField *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"SelectVectors", PyvtkTemporalInterpolatedVelocityField_SelectVectors, 1,
   (char*)"V.SelectVectors(string)\nC++: void SelectVectors(const char *fieldName)\n\nIf you want to work with an arbitrary vector array, then set its\nname here. By default this is NULL and the filter will use the\nactive vector array.\n"},
  {(char*)"SetDataSetAtTime", PyvtkTemporalInterpolatedVelocityField_SetDataSetAtTime, 1,
   (char*)"V.SetDataSetAtTime(int, int, float, vtkDataSet, bool)\nC++: void SetDataSetAtTime(int I, int N, double T,\n    vtkDataSet *dataset, bool staticdataset)\n\nIn order to use this class, two sets of data must be supplied,\ncorresponding to times T1 and T2. Data is added via this\nfunction.\n"},
  {(char*)"GetCachedCellIds", PyvtkTemporalInterpolatedVelocityField_GetCachedCellIds, 1,
   (char*)"V.GetCachedCellIds([int, int], [int, int]) -> bool\nC++: bool GetCachedCellIds(vtkIdType id[2], int ds[2])\n\nBetween iterations of the Particle Tracer, Id's of the Cell are\nstored and then at the start of the next particle the Ids are set\nto 'pre-fill' the cache.\n"},
  {(char*)"SetCachedCellIds", PyvtkTemporalInterpolatedVelocityField_SetCachedCellIds, 1,
   (char*)"V.SetCachedCellIds([int, int], [int, int])\nC++: void SetCachedCellIds(vtkIdType id[2], int ds[2])\n\nBetween iterations of the Particle Tracer, Id's of the Cell are\nstored and then at the start of the next particle the Ids are set\nto 'pre-fill' the cache.\n"},
  {(char*)"ClearCache", PyvtkTemporalInterpolatedVelocityField_ClearCache, 1,
   (char*)"V.ClearCache()\nC++: void ClearCache()\n\nSet the last cell id to -1 so that the next search does not start\nfrom the previous cell\n"},
  {(char*)"GetLastGoodVelocity", PyvtkTemporalInterpolatedVelocityField_GetLastGoodVelocity, 1,
   (char*)"V.GetLastGoodVelocity() -> (float, float, float)\nC++: double *GetLastGoodVelocity()\n\n"},
  {(char*)"GetCurrentWeight", PyvtkTemporalInterpolatedVelocityField_GetCurrentWeight, 1,
   (char*)"V.GetCurrentWeight() -> float\nC++: double GetCurrentWeight()\n\nGet the most recent weight between 0->1 from T1->T2. Initial\nvalue is 0.\n"},
  {(char*)"InterpolatePoint", PyvtkTemporalInterpolatedVelocityField_InterpolatePoint, 1,
   (char*)"V.InterpolatePoint(vtkPointData, vtkPointData, int) -> bool\nC++: bool InterpolatePoint(vtkPointData *outPD1,\n    vtkPointData *outPD2, vtkIdType outIndex)\nV.InterpolatePoint(int, vtkPointData, int) -> bool\nC++: bool InterpolatePoint(int T, vtkPointData *outPD1,\n    vtkIdType outIndex)\n\n"},
  {(char*)"ShowCacheResults", PyvtkTemporalInterpolatedVelocityField_ShowCacheResults, 1,
   (char*)"V.ShowCacheResults()\nC++: void ShowCacheResults()\n\n"},
  {(char*)"IsStatic", PyvtkTemporalInterpolatedVelocityField_IsStatic, 1,
   (char*)"V.IsStatic(int) -> bool\nC++: bool IsStatic(int datasetIndex)\n\n"},
  {(char*)"AdvanceOneTimeStep", PyvtkTemporalInterpolatedVelocityField_AdvanceOneTimeStep, 1,
   (char*)"V.AdvanceOneTimeStep()\nC++: void AdvanceOneTimeStep()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTemporalInterpolatedVelocityField_StaticNew()
{
  return vtkTemporalInterpolatedVelocityField::New();
}

PyObject *PyVTKClass_vtkTemporalInterpolatedVelocityFieldNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTemporalInterpolatedVelocityField_StaticNew,
    PyvtkTemporalInterpolatedVelocityField_Methods,
    "vtkTemporalInterpolatedVelocityField", modulename,
    NULL, NULL,
    PyvtkTemporalInterpolatedVelocityField_Doc(),
    PyVTKClass_vtkFunctionSetNew(modulename));
  return cls;
}

const char **PyvtkTemporalInterpolatedVelocityField_Doc()
{
  static const char *docstring[] = {
    "vtkTemporalInterpolatedVelocityField - A helper class for \n\n",
    "Superclass: vtkFunctionSet\n\n",
    "vtkTemporalInterpolatedVelocityField is a general purpose helper for\nthe temporal particle tracing code (vtkTemporalStreamTracer)\n\nIt maintains two copies of vtkCachingInterpolatedVelocityField\ninternally and uses them to obtain velocity values at time T0 and T1.\n\nIn fact the class does quite a bit more than this because when the\ngeometry of the datasets is the same at T0 and T1, we can re-use\ncac",
    "hed cell Ids and weights used in the cell interpolation routines.\nAdditionally, the same weights can be used when interpolating (point)\nscalar values and computing vorticity etc.\n\nCaveats:\n\nvtkTemporalInterpolatedVelocityField is probably not thread safe. A\nnew instance should be created by each thread.\n\nDatasets are added in lists. The list for T1 must be idential to that\nfor T0 in structure/topo",
    "logy and dataset order, and any datasets\nmarked as static, must remain so for all T - changing a dataset from\nstatic to dynamic between time steps will result in undefined\nbehaviour (=crash probably)\n\nSee Also:\n\nvtkCachingInterpolatedVelocityField vtkTemporalStreamTracer\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTemporalInterpolatedVelocityField(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTemporalInterpolatedVelocityFieldNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTemporalInterpolatedVelocityField", o) != 0)
    {
    Py_DECREF(o);
    }

}

