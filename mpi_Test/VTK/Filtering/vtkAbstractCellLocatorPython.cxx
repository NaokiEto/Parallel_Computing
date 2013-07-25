// python wrapper for vtkAbstractCellLocator
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
#include "vtkAbstractCellLocator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkAbstractCellLocator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkAbstractCellLocator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkAbstractCellLocatorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkAbstractCellLocatorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkLocatorNew
extern "C" { PyObject *PyVTKClass_vtkLocatorNew(const char *); }
#define DECLARED_PyVTKClass_vtkLocatorNew
#endif

static const char **PyvtkAbstractCellLocator_Doc();


static PyObject *
PyvtkAbstractCellLocator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

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
      tempr = op->vtkAbstractCellLocator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

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
      tempr = op->vtkAbstractCellLocator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  vtkAbstractCellLocator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkAbstractCellLocator::NewInstance();
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
PyvtkAbstractCellLocator_SetNumberOfCellsPerNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfCellsPerNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfCellsPerNode(temp0);
      }
    else
      {
      op->vtkAbstractCellLocator::SetNumberOfCellsPerNode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_GetNumberOfCellsPerNodeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellsPerNodeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfCellsPerNodeMinValue();
      }
    else
      {
      tempr = op->vtkAbstractCellLocator::GetNumberOfCellsPerNodeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_GetNumberOfCellsPerNodeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellsPerNodeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfCellsPerNodeMaxValue();
      }
    else
      {
      tempr = op->vtkAbstractCellLocator::GetNumberOfCellsPerNodeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_GetNumberOfCellsPerNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellsPerNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfCellsPerNode();
      }
    else
      {
      tempr = op->vtkAbstractCellLocator::GetNumberOfCellsPerNode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_SetCacheCellBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCacheCellBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCacheCellBounds(temp0);
      }
    else
      {
      op->vtkAbstractCellLocator::SetCacheCellBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_GetCacheCellBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheCellBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCacheCellBounds();
      }
    else
      {
      tempr = op->vtkAbstractCellLocator::GetCacheCellBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_CacheCellBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CacheCellBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CacheCellBoundsOn();
      }
    else
      {
      op->vtkAbstractCellLocator::CacheCellBoundsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_CacheCellBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CacheCellBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CacheCellBoundsOff();
      }
    else
      {
      op->vtkAbstractCellLocator::CacheCellBoundsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_SetRetainCellLists(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRetainCellLists");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRetainCellLists(temp0);
      }
    else
      {
      op->vtkAbstractCellLocator::SetRetainCellLists(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_GetRetainCellLists(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRetainCellLists");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRetainCellLists();
      }
    else
      {
      tempr = op->vtkAbstractCellLocator::GetRetainCellLists();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_RetainCellListsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RetainCellListsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RetainCellListsOn();
      }
    else
      {
      op->vtkAbstractCellLocator::RetainCellListsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_RetainCellListsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RetainCellListsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RetainCellListsOff();
      }
    else
      {
      op->vtkAbstractCellLocator::RetainCellListsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_SetLazyEvaluation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLazyEvaluation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLazyEvaluation(temp0);
      }
    else
      {
      op->vtkAbstractCellLocator::SetLazyEvaluation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_GetLazyEvaluation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLazyEvaluation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLazyEvaluation();
      }
    else
      {
      tempr = op->vtkAbstractCellLocator::GetLazyEvaluation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_LazyEvaluationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LazyEvaluationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LazyEvaluationOn();
      }
    else
      {
      op->vtkAbstractCellLocator::LazyEvaluationOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_LazyEvaluationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LazyEvaluationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LazyEvaluationOff();
      }
    else
      {
      op->vtkAbstractCellLocator::LazyEvaluationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_SetUseExistingSearchStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseExistingSearchStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseExistingSearchStructure(temp0);
      }
    else
      {
      op->vtkAbstractCellLocator::SetUseExistingSearchStructure(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_GetUseExistingSearchStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseExistingSearchStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseExistingSearchStructure();
      }
    else
      {
      tempr = op->vtkAbstractCellLocator::GetUseExistingSearchStructure();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_UseExistingSearchStructureOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseExistingSearchStructureOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseExistingSearchStructureOn();
      }
    else
      {
      op->vtkAbstractCellLocator::UseExistingSearchStructureOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_UseExistingSearchStructureOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseExistingSearchStructureOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseExistingSearchStructureOff();
      }
    else
      {
      op->vtkAbstractCellLocator::UseExistingSearchStructureOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_IntersectWithLine_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2;
  double temp3;
  double temp4[3];
  double save4[3];
  const int size4 = 3;
  double temp5[3];
  double save5[3];
  const int size5 = 3;
  int temp6;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(7) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetValue(temp6))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp4, save4, size4);
    ap.SaveArray(temp5, save5, size5);

    if (ap.IsBound())
      {
      tempr = op->IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
      }
    else
      {
      tempr = op->vtkAbstractCellLocator::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
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
      ap.SetArgValue(3, temp3);
      }
    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (ap.ArrayHasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(5, temp5, size5);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(6, temp6);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractCellLocator_IntersectWithLine_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2;
  double temp3;
  double temp4[3];
  double save4[3];
  const int size4 = 3;
  double temp5[3];
  double save5[3];
  const int size5 = 3;
  int temp6;
  vtkIdType temp7;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(8) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp4, save4, size4);
    ap.SaveArray(temp5, save5, size5);

    if (ap.IsBound())
      {
      tempr = op->IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }
    else
      {
      tempr = op->vtkAbstractCellLocator::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
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
      ap.SetArgValue(3, temp3);
      }
    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (ap.ArrayHasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(5, temp5, size5);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(6, temp6);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(7, temp7);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractCellLocator_IntersectWithLine_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2;
  double temp3;
  double temp4[3];
  double save4[3];
  const int size4 = 3;
  double temp5[3];
  double save5[3];
  const int size5 = 3;
  int temp6;
  vtkIdType temp7;
  vtkGenericCell *temp8 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(9) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7) &&
      ap.GetVTKObject(temp8, "vtkGenericCell"))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp4, save4, size4);
    ap.SaveArray(temp5, save5, size5);

    if (ap.IsBound())
      {
      tempr = op->IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
      }
    else
      {
      tempr = op->vtkAbstractCellLocator::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
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
      ap.SetArgValue(3, temp3);
      }
    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (ap.ArrayHasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(5, temp5, size5);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(6, temp6);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(7, temp7);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractCellLocator_IntersectWithLine_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  const int size1 = 3;
  vtkPoints *temp2 = NULL;
  vtkIdList *temp3 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkPoints") &&
      ap.GetVTKObject(temp3, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      tempr = op->IntersectWithLine(temp0, temp1, temp2, temp3);
      }
    else
      {
      tempr = op->vtkAbstractCellLocator::IntersectWithLine(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractCellLocator_IntersectWithLine(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 7:
      return PyvtkAbstractCellLocator_IntersectWithLine_s1(self, args);
    case 8:
      return PyvtkAbstractCellLocator_IntersectWithLine_s2(self, args);
    case 9:
      return PyvtkAbstractCellLocator_IntersectWithLine_s3(self, args);
    case 4:
      return PyvtkAbstractCellLocator_IntersectWithLine_s4(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "IntersectWithLine");
  return NULL;
}



static PyObject *
PyvtkAbstractCellLocator_FindClosestPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  vtkIdType temp2;
  int temp3;
  double temp4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->FindClosestPoint(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkAbstractCellLocator::FindClosestPoint(temp0, temp1, temp2, temp3, temp4);
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
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(3, temp3);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(4, temp4);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractCellLocator_FindClosestPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  vtkGenericCell *temp2 = NULL;
  vtkIdType temp3;
  int temp4;
  double temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkGenericCell") &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->FindClosestPoint(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkAbstractCellLocator::FindClosestPoint(temp0, temp1, temp2, temp3, temp4, temp5);
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
      ap.SetArgValue(3, temp3);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(4, temp4);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(5, temp5);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractCellLocator_FindClosestPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 5:
      return PyvtkAbstractCellLocator_FindClosestPoint_s1(self, args);
    case 6:
      return PyvtkAbstractCellLocator_FindClosestPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "FindClosestPoint");
  return NULL;
}



static PyObject *
PyvtkAbstractCellLocator_FindClosestPointWithinRadius_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPointWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  vtkIdType temp3;
  int temp4;
  double temp5;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      tempr = op->FindClosestPointWithinRadius(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      tempr = op->vtkAbstractCellLocator::FindClosestPointWithinRadius(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(3, temp3);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(4, temp4);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(5, temp5);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractCellLocator_FindClosestPointWithinRadius_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPointWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  vtkGenericCell *temp3 = NULL;
  vtkIdType temp4;
  int temp5;
  double temp6;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(7) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetVTKObject(temp3, "vtkGenericCell") &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      tempr = op->FindClosestPointWithinRadius(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
      }
    else
      {
      tempr = op->vtkAbstractCellLocator::FindClosestPointWithinRadius(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(4, temp4);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(5, temp5);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(6, temp6);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractCellLocator_FindClosestPointWithinRadius_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPointWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  vtkGenericCell *temp3 = NULL;
  vtkIdType temp4;
  int temp5;
  double temp6;
  int temp7;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(8) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetVTKObject(temp3, "vtkGenericCell") &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      tempr = op->FindClosestPointWithinRadius(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }
    else
      {
      tempr = op->vtkAbstractCellLocator::FindClosestPointWithinRadius(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(4, temp4);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(5, temp5);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(6, temp6);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(7, temp7);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractCellLocator_FindClosestPointWithinRadius(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkAbstractCellLocator_FindClosestPointWithinRadius_s1(self, args);
    case 7:
      return PyvtkAbstractCellLocator_FindClosestPointWithinRadius_s2(self, args);
    case 8:
      return PyvtkAbstractCellLocator_FindClosestPointWithinRadius_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "FindClosestPointWithinRadius");
  return NULL;
}



static PyObject *
PyvtkAbstractCellLocator_FindCellsAlongLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCellsAlongLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2;
  vtkIdList *temp3 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkIdList"))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->FindCellsAlongLine(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkAbstractCellLocator::FindCellsAlongLine(temp0, temp1, temp2, temp3);
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
PyvtkAbstractCellLocator_FindCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      tempr = op->FindCell(temp0);
      }
    else
      {
      tempr = op->vtkAbstractCellLocator::FindCell(temp0);
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
PyvtkAbstractCellLocator_InsideCellBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideCellBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  vtkIdType temp1;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      tempr = op->InsideCellBounds(temp0, temp1);
      }
    else
      {
      tempr = op->vtkAbstractCellLocator::InsideCellBounds(temp0, temp1);
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

static PyMethodDef PyvtkAbstractCellLocator_Methods[] = {
  {(char*)"GetClassName", PyvtkAbstractCellLocator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAbstractCellLocator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAbstractCellLocator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkAbstractCellLocator\nC++: vtkAbstractCellLocator *NewInstance()\n\n"},
  {(char*)"SetNumberOfCellsPerNode", PyvtkAbstractCellLocator_SetNumberOfCellsPerNode, 1,
   (char*)"V.SetNumberOfCellsPerNode(int)\nC++: void SetNumberOfCellsPerNode(int)\n\nSpecify the preferred/maximum number of cells in each\nnode/bucket. Default 32. Locators generally operate by\nsubdividing space into smaller regions until the number of cells\nin each region (or node) reaches the desired level.\n"},
  {(char*)"GetNumberOfCellsPerNodeMinValue", PyvtkAbstractCellLocator_GetNumberOfCellsPerNodeMinValue, 1,
   (char*)"V.GetNumberOfCellsPerNodeMinValue() -> int\nC++: int GetNumberOfCellsPerNodeMinValue()\n\nSpecify the preferred/maximum number of cells in each\nnode/bucket. Default 32. Locators generally operate by\nsubdividing space into smaller regions until the number of cells\nin each region (or node) reaches the desired level.\n"},
  {(char*)"GetNumberOfCellsPerNodeMaxValue", PyvtkAbstractCellLocator_GetNumberOfCellsPerNodeMaxValue, 1,
   (char*)"V.GetNumberOfCellsPerNodeMaxValue() -> int\nC++: int GetNumberOfCellsPerNodeMaxValue()\n\nSpecify the preferred/maximum number of cells in each\nnode/bucket. Default 32. Locators generally operate by\nsubdividing space into smaller regions until the number of cells\nin each region (or node) reaches the desired level.\n"},
  {(char*)"GetNumberOfCellsPerNode", PyvtkAbstractCellLocator_GetNumberOfCellsPerNode, 1,
   (char*)"V.GetNumberOfCellsPerNode() -> int\nC++: int GetNumberOfCellsPerNode()\n\nSpecify the preferred/maximum number of cells in each\nnode/bucket. Default 32. Locators generally operate by\nsubdividing space into smaller regions until the number of cells\nin each region (or node) reaches the desired level.\n"},
  {(char*)"SetCacheCellBounds", PyvtkAbstractCellLocator_SetCacheCellBounds, 1,
   (char*)"V.SetCacheCellBounds(int)\nC++: void SetCacheCellBounds(int a)\n\nBoolean controls whether the bounds of each cell are computed\nonly once and then saved.  Should be 10 to 20% faster if\nrepeatedly calling any of the Intersect/Find routines and the\nextra memory won't cause disk caching (24 extra bytes per cell\nare required to save the bounds).\n"},
  {(char*)"GetCacheCellBounds", PyvtkAbstractCellLocator_GetCacheCellBounds, 1,
   (char*)"V.GetCacheCellBounds() -> int\nC++: int GetCacheCellBounds()\n\nBoolean controls whether the bounds of each cell are computed\nonly once and then saved.  Should be 10 to 20% faster if\nrepeatedly calling any of the Intersect/Find routines and the\nextra memory won't cause disk caching (24 extra bytes per cell\nare required to save the bounds).\n"},
  {(char*)"CacheCellBoundsOn", PyvtkAbstractCellLocator_CacheCellBoundsOn, 1,
   (char*)"V.CacheCellBoundsOn()\nC++: void CacheCellBoundsOn()\n\nBoolean controls whether the bounds of each cell are computed\nonly once and then saved.  Should be 10 to 20% faster if\nrepeatedly calling any of the Intersect/Find routines and the\nextra memory won't cause disk caching (24 extra bytes per cell\nare required to save the bounds).\n"},
  {(char*)"CacheCellBoundsOff", PyvtkAbstractCellLocator_CacheCellBoundsOff, 1,
   (char*)"V.CacheCellBoundsOff()\nC++: void CacheCellBoundsOff()\n\nBoolean controls whether the bounds of each cell are computed\nonly once and then saved.  Should be 10 to 20% faster if\nrepeatedly calling any of the Intersect/Find routines and the\nextra memory won't cause disk caching (24 extra bytes per cell\nare required to save the bounds).\n"},
  {(char*)"SetRetainCellLists", PyvtkAbstractCellLocator_SetRetainCellLists, 1,
   (char*)"V.SetRetainCellLists(int)\nC++: void SetRetainCellLists(int a)\n\nBoolean controls whether to maintain list of cells in each node.\nnot applicable to all implementations, but if the locator is\nbeing used as a geometry simplification technique, there is no\nneed to keep them.\n"},
  {(char*)"GetRetainCellLists", PyvtkAbstractCellLocator_GetRetainCellLists, 1,
   (char*)"V.GetRetainCellLists() -> int\nC++: int GetRetainCellLists()\n\nBoolean controls whether to maintain list of cells in each node.\nnot applicable to all implementations, but if the locator is\nbeing used as a geometry simplification technique, there is no\nneed to keep them.\n"},
  {(char*)"RetainCellListsOn", PyvtkAbstractCellLocator_RetainCellListsOn, 1,
   (char*)"V.RetainCellListsOn()\nC++: void RetainCellListsOn()\n\nBoolean controls whether to maintain list of cells in each node.\nnot applicable to all implementations, but if the locator is\nbeing used as a geometry simplification technique, there is no\nneed to keep them.\n"},
  {(char*)"RetainCellListsOff", PyvtkAbstractCellLocator_RetainCellListsOff, 1,
   (char*)"V.RetainCellListsOff()\nC++: void RetainCellListsOff()\n\nBoolean controls whether to maintain list of cells in each node.\nnot applicable to all implementations, but if the locator is\nbeing used as a geometry simplification technique, there is no\nneed to keep them.\n"},
  {(char*)"SetLazyEvaluation", PyvtkAbstractCellLocator_SetLazyEvaluation, 1,
   (char*)"V.SetLazyEvaluation(int)\nC++: void SetLazyEvaluation(int a)\n\nMost Locators build their search structures during BuildLocator\nbut some may delay construction until it is actually needed. If\nLazyEvaluation is supported, this turns on/off the feature. if\nnot supported, it is ignored.\n"},
  {(char*)"GetLazyEvaluation", PyvtkAbstractCellLocator_GetLazyEvaluation, 1,
   (char*)"V.GetLazyEvaluation() -> int\nC++: int GetLazyEvaluation()\n\nMost Locators build their search structures during BuildLocator\nbut some may delay construction until it is actually needed. If\nLazyEvaluation is supported, this turns on/off the feature. if\nnot supported, it is ignored.\n"},
  {(char*)"LazyEvaluationOn", PyvtkAbstractCellLocator_LazyEvaluationOn, 1,
   (char*)"V.LazyEvaluationOn()\nC++: void LazyEvaluationOn()\n\nMost Locators build their search structures during BuildLocator\nbut some may delay construction until it is actually needed. If\nLazyEvaluation is supported, this turns on/off the feature. if\nnot supported, it is ignored.\n"},
  {(char*)"LazyEvaluationOff", PyvtkAbstractCellLocator_LazyEvaluationOff, 1,
   (char*)"V.LazyEvaluationOff()\nC++: void LazyEvaluationOff()\n\nMost Locators build their search structures during BuildLocator\nbut some may delay construction until it is actually needed. If\nLazyEvaluation is supported, this turns on/off the feature. if\nnot supported, it is ignored.\n"},
  {(char*)"SetUseExistingSearchStructure", PyvtkAbstractCellLocator_SetUseExistingSearchStructure, 1,
   (char*)"V.SetUseExistingSearchStructure(int)\nC++: void SetUseExistingSearchStructure(int a)\n\nSome locators support querying a new dataset without rebuilding\nthe search structure (typically this may occur when a dataset\nchanges due to a time update, but is actually the same topology)\nTurning on this flag enables some locators to skip the rebuilding\nphase\n"},
  {(char*)"GetUseExistingSearchStructure", PyvtkAbstractCellLocator_GetUseExistingSearchStructure, 1,
   (char*)"V.GetUseExistingSearchStructure() -> int\nC++: int GetUseExistingSearchStructure()\n\nSome locators support querying a new dataset without rebuilding\nthe search structure (typically this may occur when a dataset\nchanges due to a time update, but is actually the same topology)\nTurning on this flag enables some locators to skip the rebuilding\nphase\n"},
  {(char*)"UseExistingSearchStructureOn", PyvtkAbstractCellLocator_UseExistingSearchStructureOn, 1,
   (char*)"V.UseExistingSearchStructureOn()\nC++: void UseExistingSearchStructureOn()\n\nSome locators support querying a new dataset without rebuilding\nthe search structure (typically this may occur when a dataset\nchanges due to a time update, but is actually the same topology)\nTurning on this flag enables some locators to skip the rebuilding\nphase\n"},
  {(char*)"UseExistingSearchStructureOff", PyvtkAbstractCellLocator_UseExistingSearchStructureOff, 1,
   (char*)"V.UseExistingSearchStructureOff()\nC++: void UseExistingSearchStructureOff()\n\nSome locators support querying a new dataset without rebuilding\nthe search structure (typically this may occur when a dataset\nchanges due to a time update, but is actually the same topology)\nTurning on this flag enables some locators to skip the rebuilding\nphase\n"},
  {(char*)"IntersectWithLine", PyvtkAbstractCellLocator_IntersectWithLine, 1,
   (char*)"V.IntersectWithLine([float, float, float], [float, float, float],\n    float, float, [float, float, float], [float, float, float],\n    int) -> int\nC++: virtual int IntersectWithLine(double p1[3], double p2[3],\n    double tol, double &t, double x[3], double pcoords[3],\n    int &subId)\nV.IntersectWithLine([float, float, float], [float, float, float],\n    float, float, [float, float, float], [float, float, float],\n    int, int) -> int\nC++: virtual int IntersectWithLine(double p1[3], double p2[3],\n    double tol, double &t, double x[3], double pcoords[3],\n    int &subId, vtkIdType &cellId)\nV.IntersectWithLine([float, float, float], [float, float, float],\n    float, float, [float, float, float], [float, float, float],\n    int, int, vtkGenericCell) -> int\nC++: virtual int IntersectWithLine(double p1[3], double p2[3],\n    double tol, double &t, double x[3], double pcoords[3],\n    int &subId, vtkIdType &cellId, vtkGenericCell *cell)\nV.IntersectWithLine((float, float, float), (float, float, float),\n    vtkPoints, vtkIdList) -> int\nC++: virtual int IntersectWithLine(const double p1[3],\n    const double p2[3], vtkPoints *points, vtkIdList *cellIds)\n\nReturn intersection point (if any) of finite line with cells\ncontained in cell locator.\n"},
  {(char*)"FindClosestPoint", PyvtkAbstractCellLocator_FindClosestPoint, 1,
   (char*)"V.FindClosestPoint([float, float, float], [float, float, float],\n    int, int, float)\nC++: virtual void FindClosestPoint(double x[3],\n    double closestPoint[3], vtkIdType &cellId, int &subId,\n    double &dist2)\nV.FindClosestPoint([float, float, float], [float, float, float],\n    vtkGenericCell, int, int, float)\nC++: virtual void FindClosestPoint(double x[3],\n    double closestPoint[3], vtkGenericCell *cell,\n    vtkIdType &cellId, int &subId, double &dist2)\n\nReturn the closest point and the cell which is closest to the\npoint x. The closest point is somewhere on a cell, it need not be\none of the vertices of the cell.\n"},
  {(char*)"FindClosestPointWithinRadius", PyvtkAbstractCellLocator_FindClosestPointWithinRadius, 1,
   (char*)"V.FindClosestPointWithinRadius([float, float, float], float,\n    [float, float, float], int, int, float) -> int\nC++: virtual vtkIdType FindClosestPointWithinRadius(double x[3],\n    double radius, double closestPoint[3], vtkIdType &cellId,\n    int &subId, double &dist2)\nV.FindClosestPointWithinRadius([float, float, float], float,\n    [float, float, float], vtkGenericCell, int, int, float) -> int\nC++: virtual vtkIdType FindClosestPointWithinRadius(double x[3],\n    double radius, double closestPoint[3], vtkGenericCell *cell,\n    vtkIdType &cellId, int &subId, double &dist2)\nV.FindClosestPointWithinRadius([float, float, float], float,\n    [float, float, float], vtkGenericCell, int, int, float, int)\n    -> int\nC++: virtual vtkIdType FindClosestPointWithinRadius(double x[3],\n    double radius, double closestPoint[3], vtkGenericCell *cell,\n    vtkIdType &cellId, int &subId, double &dist2, int &inside)\n\nReturn the closest point within a specified radius and the cell\nwhich is closest to the point x. The closest point is somewhere\non a cell, it need not be one of the vertices of the cell. This\nmethod returns 1 if a point is found within the specified radius.\nIf there are no cells within the specified radius, the method\nreturns 0 and the values of closestPoint, cellId, subId, and\ndist2 are undefined.\n"},
  {(char*)"FindCellsAlongLine", PyvtkAbstractCellLocator_FindCellsAlongLine, 1,
   (char*)"V.FindCellsAlongLine([float, float, float], [float, float, float],\n     float, vtkIdList)\nC++: virtual void FindCellsAlongLine(double p1[3], double p2[3],\n    double tolerance, vtkIdList *cells)\n\nGiven a finite line defined by the two points (p1,p2), return the\nlist of unique cell ids in the buckets containing the line. It is\npossible that an empty cell list is returned. The user must\nprovide the vtkIdList to populate. This method returns data only\nafter the locator has been built.\n"},
  {(char*)"FindCell", PyvtkAbstractCellLocator_FindCell, 1,
   (char*)"V.FindCell([float, float, float]) -> int\nC++: virtual vtkIdType FindCell(double x[3])\n\nReturns the Id of the cell containing the point, returns -1 if no\ncell found. This interface uses a tolerance of zero\n"},
  {(char*)"InsideCellBounds", PyvtkAbstractCellLocator_InsideCellBounds, 1,
   (char*)"V.InsideCellBounds([float, float, float], int) -> bool\nC++: virtual bool InsideCellBounds(double x[3], vtkIdType cell_ID)\n\nQuickly test if a point is inside the bounds of a particular\ncell. Some locators cache cell bounds and this function can make\nuse of fast access to the data.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkAbstractCellLocatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkAbstractCellLocator_Methods,
    "vtkAbstractCellLocator", modulename,
    NULL, NULL,
    PyvtkAbstractCellLocator_Doc(),
    PyVTKClass_vtkLocatorNew(modulename));
  return cls;
}

const char **PyvtkAbstractCellLocator_Doc()
{
  static const char *docstring[] = {
    "vtkAbstractCellLocator - an abstract base class for locators which\nfind cells\n\n",
    "Superclass: vtkLocator\n\n",
    "vtkAbstractCellLocator is a spatial search object to quickly locate\ncells in 3D. vtkAbstractCellLocator supplies a basic interface which\nconcrete subclasses should implement.\n\nWarning:\n\nWhen deriving a class from vtkAbstractCellLocator, one should include\nthe 'hidden' member functions by the following construct in the\nderived class\n //BTX\n  using vtkAbstractCellLocator::IntersectWithLine;\n  using ",
    "vtkAbstractCellLocator::FindClosestPoint;\n  using vtkAbstractCellLocator::FindClosestPointWithinRadius;\n //ETX\n \n\nSee Also:\n\nvtkLocator vtkPointLocator vtkOBBTree vtkCellLocator\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAbstractCellLocator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAbstractCellLocatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAbstractCellLocator", o) != 0)
    {
    Py_DECREF(o);
    }

}
