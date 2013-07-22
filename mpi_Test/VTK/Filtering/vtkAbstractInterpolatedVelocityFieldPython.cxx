// python wrapper for vtkAbstractInterpolatedVelocityField
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
#include "vtkAbstractInterpolatedVelocityField.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkAbstractInterpolatedVelocityField(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkAbstractInterpolatedVelocityField(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkAbstractInterpolatedVelocityFieldNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkAbstractInterpolatedVelocityFieldNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkFunctionSetNew
extern "C" { PyObject *PyVTKClass_vtkFunctionSetNew(const char *); }
#define DECLARED_PyVTKClass_vtkFunctionSetNew
#endif

static const char **PyvtkAbstractInterpolatedVelocityField_Doc();


static PyObject *
PyvtkAbstractInterpolatedVelocityField_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

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
      tempr = op->vtkAbstractInterpolatedVelocityField::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

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
      tempr = op->vtkAbstractInterpolatedVelocityField::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  vtkAbstractInterpolatedVelocityField *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkAbstractInterpolatedVelocityField::NewInstance();
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
PyvtkAbstractInterpolatedVelocityField_SetCaching(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCaching");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCaching(temp0);
      }
    else
      {
      op->vtkAbstractInterpolatedVelocityField::SetCaching(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_GetCaching(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCaching");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCaching();
      }
    else
      {
      tempr = op->vtkAbstractInterpolatedVelocityField::GetCaching();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_GetCacheHit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheHit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCacheHit();
      }
    else
      {
      tempr = op->vtkAbstractInterpolatedVelocityField::GetCacheHit();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_GetCacheMiss(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheMiss");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

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
      tempr = op->vtkAbstractInterpolatedVelocityField::GetCacheMiss();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_GetLastDataSetIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastDataSetIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLastDataSetIndex();
      }
    else
      {
      tempr = op->vtkAbstractInterpolatedVelocityField::GetLastDataSetIndex();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_GetLastDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  vtkDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLastDataSet();
      }
    else
      {
      tempr = op->vtkAbstractInterpolatedVelocityField::GetLastDataSet();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_GetLastCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLastCellId();
      }
    else
      {
      tempr = op->vtkAbstractInterpolatedVelocityField::GetLastCellId();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_SetLastCellId_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLastCellId(temp0);
      }
    else
      {
      op->vtkAbstractInterpolatedVelocityField::SetLastCellId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractInterpolatedVelocityField_SetLastCellId_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    op->SetLastCellId(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractInterpolatedVelocityField_SetLastCellId(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkAbstractInterpolatedVelocityField_SetLastCellId_s1(self, args);
    case 2:
      return PyvtkAbstractInterpolatedVelocityField_SetLastCellId_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetLastCellId");
  return NULL;
}



static PyObject *
PyvtkAbstractInterpolatedVelocityField_GetVectorsSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorsSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

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
      tempr = op->vtkAbstractInterpolatedVelocityField::GetVectorsSelection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_SelectVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

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
      op->vtkAbstractInterpolatedVelocityField::SelectVectors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_SetNormalizeVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalizeVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNormalizeVector(temp0);
      }
    else
      {
      op->vtkAbstractInterpolatedVelocityField::SetNormalizeVector(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_GetNormalizeVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalizeVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNormalizeVector();
      }
    else
      {
      tempr = op->vtkAbstractInterpolatedVelocityField::GetNormalizeVector();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_CopyParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  vtkAbstractInterpolatedVelocityField *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractInterpolatedVelocityField"))
    {
    if (ap.IsBound())
      {
      op->CopyParameters(temp0);
      }
    else
      {
      op->vtkAbstractInterpolatedVelocityField::CopyParameters(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_AddDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    op->AddDataSet(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_ClearLastCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearLastCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearLastCellId();
      }
    else
      {
      op->vtkAbstractInterpolatedVelocityField::ClearLastCellId();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_GetLastLocalCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastLocalCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

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
      tempr = op->vtkAbstractInterpolatedVelocityField::GetLastLocalCoordinates(temp0);
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

static PyMethodDef PyvtkAbstractInterpolatedVelocityField_Methods[] = {
  {(char*)"GetClassName", PyvtkAbstractInterpolatedVelocityField_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAbstractInterpolatedVelocityField_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAbstractInterpolatedVelocityField_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkAbstractInterpolatedVelocityField\nC++: vtkAbstractInterpolatedVelocityField *NewInstance()\n\n"},
  {(char*)"SetCaching", PyvtkAbstractInterpolatedVelocityField_SetCaching, 1,
   (char*)"V.SetCaching(bool)\nC++: void SetCaching(bool a)\n\nSet/Get the caching flag. If this flag is turned ON, there are\ntwo levels of caching for derived concrete class\nvtkInterpolatedVelocityField and one level of caching for derived\nconcrete class vtkCellLocatorInterpolatedVelocityField. Otherwise\na global cell location is always invoked for evaluating the\nfunction values at any point.\n"},
  {(char*)"GetCaching", PyvtkAbstractInterpolatedVelocityField_GetCaching, 1,
   (char*)"V.GetCaching() -> bool\nC++: bool GetCaching()\n\nSet/Get the caching flag. If this flag is turned ON, there are\ntwo levels of caching for derived concrete class\nvtkInterpolatedVelocityField and one level of caching for derived\nconcrete class vtkCellLocatorInterpolatedVelocityField. Otherwise\na global cell location is always invoked for evaluating the\nfunction values at any point.\n"},
  {(char*)"GetCacheHit", PyvtkAbstractInterpolatedVelocityField_GetCacheHit, 1,
   (char*)"V.GetCacheHit() -> int\nC++: int GetCacheHit()\n\nGet the caching statistics. CacheHit refers to the number of\nlevel #0 cache hits while CacheMiss is the number of level #0\ncache misses.\n"},
  {(char*)"GetCacheMiss", PyvtkAbstractInterpolatedVelocityField_GetCacheMiss, 1,
   (char*)"V.GetCacheMiss() -> int\nC++: int GetCacheMiss()\n\nGet the caching statistics. CacheHit refers to the number of\nlevel #0 cache hits while CacheMiss is the number of level #0\ncache misses.\n"},
  {(char*)"GetLastDataSetIndex", PyvtkAbstractInterpolatedVelocityField_GetLastDataSetIndex, 1,
   (char*)"V.GetLastDataSetIndex() -> int\nC++: int GetLastDataSetIndex()\n\nGet the most recently visited dataset and it id. The dataset is\nused for a guess regarding where the next point will be, without\nsearching through all datasets. When setting the last dataset,\ncare is needed as no reference counting or checks are performed.\nThis feature is intended for custom interpolators only that cache\ndatasets independently.\n"},
  {(char*)"GetLastDataSet", PyvtkAbstractInterpolatedVelocityField_GetLastDataSet, 1,
   (char*)"V.GetLastDataSet() -> vtkDataSet\nC++: vtkDataSet *GetLastDataSet()\n\nGet the most recently visited dataset and it id. The dataset is\nused for a guess regarding where the next point will be, without\nsearching through all datasets. When setting the last dataset,\ncare is needed as no reference counting or checks are performed.\nThis feature is intended for custom interpolators only that cache\ndatasets independently.\n"},
  {(char*)"GetLastCellId", PyvtkAbstractInterpolatedVelocityField_GetLastCellId, 1,
   (char*)"V.GetLastCellId() -> int\nC++: vtkIdType GetLastCellId()\n\nGet/Set the id of the cell cached from last evaluation.\n"},
  {(char*)"SetLastCellId", PyvtkAbstractInterpolatedVelocityField_SetLastCellId, 1,
   (char*)"V.SetLastCellId(int)\nC++: virtual void SetLastCellId(vtkIdType c)\nV.SetLastCellId(int, int)\nC++: virtual void SetLastCellId(vtkIdType c, int dataindex)\n\nGet/Set the id of the cell cached from last evaluation.\n"},
  {(char*)"GetVectorsSelection", PyvtkAbstractInterpolatedVelocityField_GetVectorsSelection, 1,
   (char*)"V.GetVectorsSelection() -> string\nC++: char *GetVectorsSelection()\n\nGet/Set the name of a spcified vector array. By default it is\nNULL, with the active vector array for use.\n"},
  {(char*)"SelectVectors", PyvtkAbstractInterpolatedVelocityField_SelectVectors, 1,
   (char*)"V.SelectVectors(string)\nC++: void SelectVectors(const char *fieldName)\n\nGet/Set the name of a spcified vector array. By default it is\nNULL, with the active vector array for use.\n"},
  {(char*)"SetNormalizeVector", PyvtkAbstractInterpolatedVelocityField_SetNormalizeVector, 1,
   (char*)"V.SetNormalizeVector(bool)\nC++: void SetNormalizeVector(bool a)\n\nSet/Get the flag indicating vector post-normalization (following\nvector interpolation). Vector post-normalization is required to\navoid the 'curve-overshooting' problem (caused by high velocity\nmagnitude) that occurs when Cell-Length is used as the step size\nunit (particularly the Minimum step size unit). Furthermore, it\nis required by RK45 to achieve, as expected, high numerical\naccuracy (or high smoothness of flow lines) through adaptive step\nsizing. Note this operation is performed (when NormalizeVector\nTRUE) right after vector interpolation such that the differing\namount of contribution of each node (of a cell) to the resulting\ndirection of the interpolated vector, due to the possibly\nsignificantly-differing velocity magnitude values at the nodes\n(which is the case with large cells), can be reflected as is.\nAlso note that this flag needs to be turned to FALSE after\nvtkInitialValueProblemSolver:: ComputeNextStep() as subsequent\noperations, e.g., vorticity computation, may need non-normalized\nvectors.\n"},
  {(char*)"GetNormalizeVector", PyvtkAbstractInterpolatedVelocityField_GetNormalizeVector, 1,
   (char*)"V.GetNormalizeVector() -> bool\nC++: bool GetNormalizeVector()\n\nSet/Get the flag indicating vector post-normalization (following\nvector interpolation). Vector post-normalization is required to\navoid the 'curve-overshooting' problem (caused by high velocity\nmagnitude) that occurs when Cell-Length is used as the step size\nunit (particularly the Minimum step size unit). Furthermore, it\nis required by RK45 to achieve, as expected, high numerical\naccuracy (or high smoothness of flow lines) through adaptive step\nsizing. Note this operation is performed (when NormalizeVector\nTRUE) right after vector interpolation such that the differing\namount of contribution of each node (of a cell) to the resulting\ndirection of the interpolated vector, due to the possibly\nsignificantly-differing velocity magnitude values at the nodes\n(which is the case with large cells), can be reflected as is.\nAlso note that this flag needs to be turned to FALSE after\nvtkInitialValueProblemSolver:: ComputeNextStep() as subsequent\noperations, e.g., vorticity computation, may need non-normalized\nvectors.\n"},
  {(char*)"CopyParameters", PyvtkAbstractInterpolatedVelocityField_CopyParameters, 1,
   (char*)"V.CopyParameters(vtkAbstractInterpolatedVelocityField)\nC++: virtual void CopyParameters(\n    vtkAbstractInterpolatedVelocityField *from)\n\nImport parameters. Sub-classes can add more after chaining.\n"},
  {(char*)"AddDataSet", PyvtkAbstractInterpolatedVelocityField_AddDataSet, 1,
   (char*)"V.AddDataSet(vtkDataSet)\nC++: virtual void AddDataSet(vtkDataSet *dataset)\n\nAdd a dataset for implicit velocity function evaluation. If more\nthan one dataset is added, the evaluation point is searched in\nall until a match is found. THIS FUNCTION DOES NOT CHANGE THE\nREFERENCE COUNT OF dataset FOR THREAD SAFETY REASONS.\n"},
  {(char*)"ClearLastCellId", PyvtkAbstractInterpolatedVelocityField_ClearLastCellId, 1,
   (char*)"V.ClearLastCellId()\nC++: void ClearLastCellId()\n\nSet the last cell id to -1 to incur a global cell search for the\nnext point.\n"},
  {(char*)"GetLastLocalCoordinates", PyvtkAbstractInterpolatedVelocityField_GetLastLocalCoordinates, 1,
   (char*)"V.GetLastLocalCoordinates([float, float, float]) -> int\nC++: int GetLastLocalCoordinates(double pcoords[3])\n\nGet the interpolation weights cached from last evaluation. Return\n1 if the cached cell is valid and 0 otherwise.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkAbstractInterpolatedVelocityFieldNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkAbstractInterpolatedVelocityField_Methods,
    "vtkAbstractInterpolatedVelocityField", modulename,
    NULL, NULL,
    PyvtkAbstractInterpolatedVelocityField_Doc(),
    PyVTKClass_vtkFunctionSetNew(modulename));
  return cls;
}

const char **PyvtkAbstractInterpolatedVelocityField_Doc()
{
  static const char *docstring[] = {
    "vtkAbstractInterpolatedVelocityField - An abstract class for \n\n",
    "Superclass: vtkFunctionSet\n\n",
    "vtkAbstractInterpolatedVelocityField acts as a continuous velocity\nfield\n by performing cell interpolation on the underlying vtkDataSet. This\nis an\n abstract sub-class of vtkFunctionSet, NumberOfIndependentVariables =\n4\n (x,y,z,t) and NumberOfFunctions = 3 (u,v,w). With a brute-force\nscheme,\n every time an evaluation is performed, the target cell containing\npoint\n (x,y,z) needs to be found by call",
    "ing FindCell(), via either\nvtkDataSet or\n vtkAbstractCelllocator's sub-classes (vtkCellLocator &\nvtkModifiedBSPTree).\n As it incurs a large cost, one (for\nvtkCellLocatorInterpolatedVelocityField\n via vtkAbstractCellLocator) or two (for vtkInterpolatedVelocityField\nvia\n vtkDataSet that involves vtkPointLocator in addressing vtkPointSet)\nlevels\n of cell caching may be exploited to increase the perfo",
    "rmance.\n\n\n For vtkInterpolatedVelocityField, level #0 begins with intra-cell\ncaching.\n Specifically if the previous cell is valid and the next point is\nstill in\n it ( i.e., vtkCell::EvaluatePosition() returns 1, coupled with newly\ncreated\n parametric coordinates & weights ), the function values can be\ninterpolated\n and only vtkCell::EvaluatePosition() is invoked. If this fails, then\nlevel #1\n foll",
    "ows by inter-cell search for the target cell that contains the\nnext point.\n By an inter-cell search, the previous cell provides an important\nclue or serves\n as an immediate neighbor to aid in locating the target cell via\nvtkPointSet::\n FindCell(). If this still fails, a global cell location / search is\ninvoked via\n vtkPointSet::FindCell(). Here regardless of either inter-cell or\nglobal search,\n vt",
    "kPointLocator is in fact employed (for datasets of type\nvtkPointSet only, note\n vtkImageData and vtkRectilinearGrid are able to provide rapid and\nrobust cell\n location due to the simple mesh topology) as a crucial tool\nunderlying the cell\n locator. However, the use of vtkPointLocator makes\nvtkInterpolatedVelocityField\n non-robust in cell location for vtkPointSet.\n\n\n For vtkCellLocatorInterpolatedV",
    "elocityField, the only caching (level\n#0) works\n by intra-cell trial. In case of failure, a global search for the\ntarget cell is\n invoked via vtkAbstractCellLocator::FindCell() and the actual work\nis done by\n either vtkCellLocator or vtkModifiedBSPTree (for datasets of type\nvtkPointSet\n only, while vtkImageData and vtkRectilinearGrid themselves are able\nto provide\n fast robust cell location). With",
    "out the involvement of\nvtkPointLocator, robust\n cell location is achieved for vtkPointSet.\n\nCaveats:\n\n\n vtkAbstractInterpolatedVelocityField is not thread safe. A new\ninstance\n should be created by each thread.\n\nSee Also:\n\n\n vtkInterpolatedVelocityField vtkCellLocatorInterpolatedVelocityField\n vtkGenericInterpolatedVelocityField\nvtkCachingInterpolatedVelocityField\n vtkTemporalInterpolatedVelocityF",
    "ield vtkFunctionSet vtkStreamer\nvtkStreamTracer\n\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkAbstractInterpolatedVelocityFieldDataSetsType_Doc();

static PyMethodDef PyvtkAbstractInterpolatedVelocityFieldDataSetsType_Methods[] = {
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkAbstractInterpolatedVelocityFieldDataSetsType_Type
extern PyTypeObject PyvtkAbstractInterpolatedVelocityFieldDataSetsType_Type;
#define DECLARED_PyvtkAbstractInterpolatedVelocityFieldDataSetsType_Type
#endif


static PyObject *
PyvtkAbstractInterpolatedVelocityFieldDataSetsType_vtkAbstractInterpolatedVelocityFieldDataSetsType(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkAbstractInterpolatedVelocityFieldDataSetsType");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkAbstractInterpolatedVelocityFieldDataSetsType *op = new vtkAbstractInterpolatedVelocityFieldDataSetsType();

    result = PyVTKSpecialObject_New("vtkAbstractInterpolatedVelocityFieldDataSetsType", op);
    }

  return result;
}

static PyMethodDef PyvtkAbstractInterpolatedVelocityFieldDataSetsType_vtkAbstractInterpolatedVelocityFieldDataSetsType_Methods[] = {
  {NULL, NULL, 0, NULL}
};

static PyMethodDef PyvtkAbstractInterpolatedVelocityFieldDataSetsType_NewMethod = \
{ (char*)"vtkAbstractInterpolatedVelocityFieldDataSetsType", PyvtkAbstractInterpolatedVelocityFieldDataSetsType_vtkAbstractInterpolatedVelocityFieldDataSetsType, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkAbstractInterpolatedVelocityFieldDataSetsType_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkAbstractInterpolatedVelocityFieldDataSetsType_vtkAbstractInterpolatedVelocityFieldDataSetsType(NULL, args);
}
#endif

static void PyvtkAbstractInterpolatedVelocityFieldDataSetsType_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkAbstractInterpolatedVelocityFieldDataSetsType *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkAbstractInterpolatedVelocityFieldDataSetsType_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", self->ob_type->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

PyTypeObject PyvtkAbstractInterpolatedVelocityFieldDataSetsType_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkAbstractInterpolatedVelocityFieldDataSetsType", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkAbstractInterpolatedVelocityFieldDataSetsType_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkAbstractInterpolatedVelocityFieldDataSetsType_Hash, // tp_hash
  0, // tp_call
  0, // tp_str
#if PY_VERSION_HEX >= 0x02020000
  PyObject_GenericGetAttr, // tp_getattro
#else
  PyVTKSpecialObject_GetAttr, // tp_getattro
#endif
  0, // tp_setattro
  0, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  0, // tp_doc
  0, // tp_traverse
  0, // tp_clear
  0, // tp_richcompare
  0, // tp_weaklistoffset
#if PY_VERSION_HEX >= 0x02020000
  0, // tp_iter
  0, // tp_iternext
  PyvtkAbstractInterpolatedVelocityFieldDataSetsType_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkAbstractInterpolatedVelocityFieldDataSetsType_New, // tp_new
#if PY_VERSION_HEX >= 0x02030000
  PyObject_Del, // tp_free
#else
  _PyObject_Del, // tp_free
#endif
  0, // tp_is_gc
  0, // tp_bases
  0, // tp_mro
  0, // tp_cache
  0, // tp_subclasses
  0, // tp_weaklist
#endif
  VTK_WRAP_PYTHON_SUPRESS_UNINITIALIZED
};

static void *PyvtkAbstractInterpolatedVelocityFieldDataSetsType_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkAbstractInterpolatedVelocityFieldDataSetsType(*static_cast<const vtkAbstractInterpolatedVelocityFieldDataSetsType*>(obj));
    }
  return 0;
}

static PyObject *PyvtkAbstractInterpolatedVelocityFieldDataSetsType_TypeNew(const char *)
{
  return PyVTKSpecialType_New(
    &PyvtkAbstractInterpolatedVelocityFieldDataSetsType_Type,
    PyvtkAbstractInterpolatedVelocityFieldDataSetsType_Methods,
    PyvtkAbstractInterpolatedVelocityFieldDataSetsType_vtkAbstractInterpolatedVelocityFieldDataSetsType_Methods,
    &PyvtkAbstractInterpolatedVelocityFieldDataSetsType_NewMethod,
    PyvtkAbstractInterpolatedVelocityFieldDataSetsType_Doc(), &PyvtkAbstractInterpolatedVelocityFieldDataSetsType_CCopy);
}

const char **PyvtkAbstractInterpolatedVelocityFieldDataSetsType_Doc()
{
  static const char *docstring[] = {
    "vtkAbstractInterpolatedVelocityField - An abstract class for \n\n",
    "vtkAbstractInterpolatedVelocityField acts as a continuous velocity\nfield\n by performing cell interpolation on the underlying vtkDataSet. This\nis an\n abstract sub-class of vtkFunctionSet, NumberOfIndependentVariables =\n4\n (x,y,z,t) and NumberOfFunctions = 3 (u,v,w). With a brute-force\nscheme,\n every time an evaluation is performed, the target cell containing\npoint\n (x,y,z) needs to be found by call",
    "ing FindCell(), via either\nvtkDataSet or\n vtkAbstractCelllocator's sub-classes (vtkCellLocator &\nvtkModifiedBSPTree).\n As it incurs a large cost, one (for\nvtkCellLocatorInterpolatedVelocityField\n via vtkAbstractCellLocator) or two (for vtkInterpolatedVelocityField\nvia\n vtkDataSet that involves vtkPointLocator in addressing vtkPointSet)\nlevels\n of cell caching may be exploited to increase the perfo",
    "rmance.\n\n\n For vtkInterpolatedVelocityField, level #0 begins with intra-cell\ncaching.\n Specifically if the previous cell is valid and the next point is\nstill in\n it ( i.e., vtkCell::EvaluatePosition() returns 1, coupled with newly\ncreated\n parametric coordinates & weights ), the function values can be\ninterpolated\n and only vtkCell::EvaluatePosition() is invoked. If this fails, then\nlevel #1\n foll",
    "ows by inter-cell search for the target cell that contains the\nnext point.\n By an inter-cell search, the previous cell provides an important\nclue or serves\n as an immediate neighbor to aid in locating the target cell via\nvtkPointSet::\n FindCell(). If this still fails, a global cell location / search is\ninvoked via\n vtkPointSet::FindCell(). Here regardless of either inter-cell or\nglobal search,\n vt",
    "kPointLocator is in fact employed (for datasets of type\nvtkPointSet only, note\n vtkImageData and vtkRectilinearGrid are able to provide rapid and\nrobust cell\n location due to the simple mesh topology) as a crucial tool\nunderlying the cell\n locator. However, the use of vtkPointLocator makes\nvtkInterpolatedVelocityField\n non-robust in cell location for vtkPointSet.\n\n\n For vtkCellLocatorInterpolatedV",
    "elocityField, the only caching (level\n#0) works\n by intra-cell trial. In case of failure, a global search for the\ntarget cell is\n invoked via vtkAbstractCellLocator::FindCell() and the actual work\nis done by\n either vtkCellLocator or vtkModifiedBSPTree (for datasets of type\nvtkPointSet\n only, while vtkImageData and vtkRectilinearGrid themselves are able\nto provide\n fast robust cell location). With",
    "out the involvement of\nvtkPointLocator, robust\n cell location is achieved for vtkPointSet.\n\nCaveats:\n\n\n vtkAbstractInterpolatedVelocityField is not thread safe. A new\ninstance\n should be created by each thread.\n\nSee Also:\n\n\n vtkInterpolatedVelocityField vtkCellLocatorInterpolatedVelocityField\n vtkGenericInterpolatedVelocityField\nvtkCachingInterpolatedVelocityField\n vtkTemporalInterpolatedVelocityF",
    "ield vtkFunctionSet vtkStreamer\nvtkStreamTracer\n\n",
    "V.vtkAbstractInterpolatedVelocityFieldDataSetsType()\nC++: vtkAbstractInterpolatedVelocityFieldDataSetsType()\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAbstractInterpolatedVelocityField(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAbstractInterpolatedVelocityFieldNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAbstractInterpolatedVelocityField", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkAbstractInterpolatedVelocityFieldDataSetsType_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAbstractInterpolatedVelocityFieldDataSetsType", o) != 0)
    {
    Py_DECREF(o);
    }

}

