// python wrapper for vtkCellLocator
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
#include "vtkCellLocator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCellLocator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCellLocator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCellLocatorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCellLocatorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAbstractCellLocatorNew
extern "C" { PyObject *PyVTKClass_vtkAbstractCellLocatorNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractCellLocatorNew
#endif

static const char **PyvtkCellLocator_Doc();


static PyObject *
PyvtkCellLocator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLocator *op = static_cast<vtkCellLocator *>(vp);

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
      tempr = op->vtkCellLocator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellLocator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLocator *op = static_cast<vtkCellLocator *>(vp);

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
      tempr = op->vtkCellLocator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellLocator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLocator *op = static_cast<vtkCellLocator *>(vp);

  vtkCellLocator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCellLocator::NewInstance();
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
PyvtkCellLocator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCellLocator *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCellLocator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellLocator_SetNumberOfCellsPerBucket(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfCellsPerBucket");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLocator *op = static_cast<vtkCellLocator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfCellsPerBucket(temp0);
      }
    else
      {
      op->vtkCellLocator::SetNumberOfCellsPerBucket(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellLocator_GetNumberOfCellsPerBucket(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellsPerBucket");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLocator *op = static_cast<vtkCellLocator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfCellsPerBucket();
      }
    else
      {
      tempr = op->vtkCellLocator::GetNumberOfCellsPerBucket();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellLocator_IntersectWithLine_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLocator *op = static_cast<vtkCellLocator *>(vp);

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
      tempr = op->vtkCellLocator::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
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
PyvtkCellLocator_IntersectWithLine_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLocator *op = static_cast<vtkCellLocator *>(vp);

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
      tempr = op->vtkCellLocator::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
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
PyvtkCellLocator_IntersectWithLine_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLocator *op = static_cast<vtkCellLocator *>(vp);

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
      tempr = op->vtkCellLocator::IntersectWithLine(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCellLocator_IntersectWithLine_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLocator *op = static_cast<vtkCellLocator *>(vp);

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
      tempr = op->vtkCellLocator::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
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
PyvtkCellLocator_IntersectWithLine(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 7:
      return PyvtkCellLocator_IntersectWithLine_s1(self, args);
    case 8:
      return PyvtkCellLocator_IntersectWithLine_s2(self, args);
    case 4:
      return PyvtkCellLocator_IntersectWithLine_s3(self, args);
    case 9:
      return PyvtkCellLocator_IntersectWithLine_s4(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "IntersectWithLine");
  return NULL;
}



static PyObject *
PyvtkCellLocator_FindClosestPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLocator *op = static_cast<vtkCellLocator *>(vp);

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
      op->vtkCellLocator::FindClosestPoint(temp0, temp1, temp2, temp3, temp4);
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
PyvtkCellLocator_FindClosestPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLocator *op = static_cast<vtkCellLocator *>(vp);

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
      op->vtkCellLocator::FindClosestPoint(temp0, temp1, temp2, temp3, temp4, temp5);
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
PyvtkCellLocator_FindClosestPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 5:
      return PyvtkCellLocator_FindClosestPoint_s1(self, args);
    case 6:
      return PyvtkCellLocator_FindClosestPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "FindClosestPoint");
  return NULL;
}



static PyObject *
PyvtkCellLocator_FindClosestPointWithinRadius_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPointWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLocator *op = static_cast<vtkCellLocator *>(vp);

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
      tempr = op->vtkCellLocator::FindClosestPointWithinRadius(temp0, temp1, temp2, temp3, temp4, temp5);
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
PyvtkCellLocator_FindClosestPointWithinRadius_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPointWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLocator *op = static_cast<vtkCellLocator *>(vp);

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
      tempr = op->vtkCellLocator::FindClosestPointWithinRadius(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
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
PyvtkCellLocator_FindClosestPointWithinRadius_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPointWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLocator *op = static_cast<vtkCellLocator *>(vp);

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
      tempr = op->vtkCellLocator::FindClosestPointWithinRadius(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
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
PyvtkCellLocator_FindClosestPointWithinRadius(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkCellLocator_FindClosestPointWithinRadius_s1(self, args);
    case 7:
      return PyvtkCellLocator_FindClosestPointWithinRadius_s2(self, args);
    case 8:
      return PyvtkCellLocator_FindClosestPointWithinRadius_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "FindClosestPointWithinRadius");
  return NULL;
}



static PyObject *
PyvtkCellLocator_GetCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLocator *op = static_cast<vtkCellLocator *>(vp);

  int temp0;
  vtkIdList *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCells(temp0);
      }
    else
      {
      tempr = op->vtkCellLocator::GetCells(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellLocator_GetNumberOfBuckets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBuckets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLocator *op = static_cast<vtkCellLocator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfBuckets();
      }
    else
      {
      tempr = op->vtkCellLocator::GetNumberOfBuckets();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellLocator_FindCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLocator *op = static_cast<vtkCellLocator *>(vp);

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
      tempr = op->vtkCellLocator::FindCell(temp0);
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
PyvtkCellLocator_FindCellsAlongLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCellsAlongLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLocator *op = static_cast<vtkCellLocator *>(vp);

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
      op->vtkCellLocator::FindCellsAlongLine(temp0, temp1, temp2, temp3);
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
PyvtkCellLocator_FreeSearchStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeSearchStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLocator *op = static_cast<vtkCellLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FreeSearchStructure();
      }
    else
      {
      op->vtkCellLocator::FreeSearchStructure();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellLocator_BuildLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLocator *op = static_cast<vtkCellLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildLocator();
      }
    else
      {
      op->vtkCellLocator::BuildLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellLocator_BuildLocatorIfNeeded(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLocatorIfNeeded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLocator *op = static_cast<vtkCellLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildLocatorIfNeeded();
      }
    else
      {
      op->vtkCellLocator::BuildLocatorIfNeeded();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellLocator_ForceBuildLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceBuildLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLocator *op = static_cast<vtkCellLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ForceBuildLocator();
      }
    else
      {
      op->vtkCellLocator::ForceBuildLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellLocator_BuildLocatorInternal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLocatorInternal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLocator *op = static_cast<vtkCellLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildLocatorInternal();
      }
    else
      {
      op->vtkCellLocator::BuildLocatorInternal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellLocator_GenerateRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLocator *op = static_cast<vtkCellLocator *>(vp);

  int temp0;
  vtkPolyData *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->GenerateRepresentation(temp0, temp1);
      }
    else
      {
      op->vtkCellLocator::GenerateRepresentation(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCellLocator_Methods[] = {
  {(char*)"GetClassName", PyvtkCellLocator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCellLocator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCellLocator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCellLocator\nC++: vtkCellLocator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCellLocator_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCellLocator\nC++: vtkCellLocator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetNumberOfCellsPerBucket", PyvtkCellLocator_SetNumberOfCellsPerBucket, 1,
   (char*)"V.SetNumberOfCellsPerBucket(int)\nC++: void SetNumberOfCellsPerBucket(int N)\n\nSpecify the average number of cells in each octant.\n"},
  {(char*)"GetNumberOfCellsPerBucket", PyvtkCellLocator_GetNumberOfCellsPerBucket, 1,
   (char*)"V.GetNumberOfCellsPerBucket() -> int\nC++: int GetNumberOfCellsPerBucket()\n\nSpecify the average number of cells in each octant.\n"},
  {(char*)"IntersectWithLine", PyvtkCellLocator_IntersectWithLine, 1,
   (char*)"V.IntersectWithLine([float, float, float], [float, float, float],\n    float, float, [float, float, float], [float, float, float],\n    int) -> int\nC++: virtual int IntersectWithLine(double a0[3], double a1[3],\n    double tol, double &t, double x[3], double pcoords[3],\n    int &subId)\nV.IntersectWithLine([float, float, float], [float, float, float],\n    float, float, [float, float, float], [float, float, float],\n    int, int) -> int\nC++: virtual int IntersectWithLine(double a0[3], double a1[3],\n    double tol, double &t, double x[3], double pcoords[3],\n    int &subId, vtkIdType &cellId)\nV.IntersectWithLine((float, float, float), (float, float, float),\n    vtkPoints, vtkIdList) -> int\nC++: virtual int IntersectWithLine(const double a0[3],\n    const double a1[3], vtkPoints *points, vtkIdList *cellIds)\nV.IntersectWithLine([float, float, float], [float, float, float],\n    float, float, [float, float, float], [float, float, float],\n    int, int, vtkGenericCell) -> int\nC++: virtual int IntersectWithLine(double a0[3], double a1[3],\n    double tol, double &t, double x[3], double pcoords[3],\n    int &subId, vtkIdType &cellId, vtkGenericCell *cell)\n\nreimplemented from vtkAbstractCellLocator to support bad\ncompilers\n"},
  {(char*)"FindClosestPoint", PyvtkCellLocator_FindClosestPoint, 1,
   (char*)"V.FindClosestPoint([float, float, float], [float, float, float],\n    int, int, float)\nC++: virtual void FindClosestPoint(double x[3],\n    double closestPoint[3], vtkIdType &cellId, int &subId,\n    double &dist2)\nV.FindClosestPoint([float, float, float], [float, float, float],\n    vtkGenericCell, int, int, float)\nC++: virtual void FindClosestPoint(double x[3],\n    double closestPoint[3], vtkGenericCell *cell,\n    vtkIdType &cellId, int &subId, double &dist2)\n\nreimplemented from vtkAbstractCellLocator to support bad\ncompilers\n"},
  {(char*)"FindClosestPointWithinRadius", PyvtkCellLocator_FindClosestPointWithinRadius, 1,
   (char*)"V.FindClosestPointWithinRadius([float, float, float], float,\n    [float, float, float], int, int, float) -> int\nC++: virtual vtkIdType FindClosestPointWithinRadius(double x[3],\n    double radius, double closestPoint[3], vtkIdType &cellId,\n    int &subId, double &dist2)\nV.FindClosestPointWithinRadius([float, float, float], float,\n    [float, float, float], vtkGenericCell, int, int, float) -> int\nC++: virtual vtkIdType FindClosestPointWithinRadius(double x[3],\n    double radius, double closestPoint[3], vtkGenericCell *cell,\n    vtkIdType &cellId, int &subId, double &dist2)\nV.FindClosestPointWithinRadius([float, float, float], float,\n    [float, float, float], vtkGenericCell, int, int, float, int)\n    -> int\nC++: virtual vtkIdType FindClosestPointWithinRadius(double x[3],\n    double radius, double closestPoint[3], vtkGenericCell *cell,\n    vtkIdType &cellId, int &subId, double &dist2, int &inside)\n\nreimplemented from vtkAbstractCellLocator to support bad\ncompilers\n"},
  {(char*)"GetCells", PyvtkCellLocator_GetCells, 1,
   (char*)"V.GetCells(int) -> vtkIdList\nC++: virtual vtkIdList *GetCells(int bucket)\n\nGet the cells in a particular bucket.\n"},
  {(char*)"GetNumberOfBuckets", PyvtkCellLocator_GetNumberOfBuckets, 1,
   (char*)"V.GetNumberOfBuckets() -> int\nC++: virtual int GetNumberOfBuckets(void)\n\nReturn number of buckets available. Insure that the locator has\nbeen built before attempting to access buckets (octants).\n"},
  {(char*)"FindCell", PyvtkCellLocator_FindCell, 1,
   (char*)"V.FindCell([float, float, float]) -> int\nC++: virtual vtkIdType FindCell(double x[3])\n\nReturns the Id of the cell containing the point, returns -1 if no\ncell found. This interface uses a tolerance of zero\n"},
  {(char*)"FindCellsAlongLine", PyvtkCellLocator_FindCellsAlongLine, 1,
   (char*)"V.FindCellsAlongLine([float, float, float], [float, float, float],\n     float, vtkIdList)\nC++: virtual void FindCellsAlongLine(double p1[3], double p2[3],\n    double tolerance, vtkIdList *cells)\n\nGiven a finite line defined by the two points (p1,p2), return the\nlist of unique cell ids in the buckets containing the line. It is\npossible that an empty cell list is returned. The user must\nprovide the vtkIdList to populate. This method returns data only\nafter the locator has been built.\n"},
  {(char*)"FreeSearchStructure", PyvtkCellLocator_FreeSearchStructure, 1,
   (char*)"V.FreeSearchStructure()\nC++: virtual void FreeSearchStructure()\n\nSatisfy vtkLocator abstract interface.\n"},
  {(char*)"BuildLocator", PyvtkCellLocator_BuildLocator, 1,
   (char*)"V.BuildLocator()\nC++: virtual void BuildLocator()\n\nSatisfy vtkLocator abstract interface.\n"},
  {(char*)"BuildLocatorIfNeeded", PyvtkCellLocator_BuildLocatorIfNeeded, 1,
   (char*)"V.BuildLocatorIfNeeded()\nC++: virtual void BuildLocatorIfNeeded()\n\nSatisfy vtkLocator abstract interface.\n"},
  {(char*)"ForceBuildLocator", PyvtkCellLocator_ForceBuildLocator, 1,
   (char*)"V.ForceBuildLocator()\nC++: virtual void ForceBuildLocator()\n\nSatisfy vtkLocator abstract interface.\n"},
  {(char*)"BuildLocatorInternal", PyvtkCellLocator_BuildLocatorInternal, 1,
   (char*)"V.BuildLocatorInternal()\nC++: virtual void BuildLocatorInternal()\n\nSatisfy vtkLocator abstract interface.\n"},
  {(char*)"GenerateRepresentation", PyvtkCellLocator_GenerateRepresentation, 1,
   (char*)"V.GenerateRepresentation(int, vtkPolyData)\nC++: virtual void GenerateRepresentation(int level,\n    vtkPolyData *pd)\n\nSatisfy vtkLocator abstract interface.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCellLocator_StaticNew()
{
  return vtkCellLocator::New();
}

PyObject *PyVTKClass_vtkCellLocatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCellLocator_StaticNew,
    PyvtkCellLocator_Methods,
    "vtkCellLocator", modulename,
    NULL, NULL,
    PyvtkCellLocator_Doc(),
    PyVTKClass_vtkAbstractCellLocatorNew(modulename));
  return cls;
}

const char **PyvtkCellLocator_Doc()
{
  static const char *docstring[] = {
    "vtkCellLocator - octree-based spatial search object to quickly locate\ncells\n\n",
    "Superclass: vtkAbstractCellLocator\n\n",
    "vtkCellLocator is a spatial search object to quickly locate cells in\n3D. vtkCellLocator uses a uniform-level octree subdivision, where\neach octant (an octant is also referred to as a bucket) carries an\nindication of whether it is empty or not, and each leaf octant\ncarries a list of the cells inside of it. (An octant is not empty if\nit has one or more cells inside of it.)  Typical operations are\nin",
    "tersection with a line to return candidate cells, or intersection\nwith another vtkCellLocator to return candidate cells.\n\nCaveats:\n\nMany other types of spatial locators have been developed, such as\nvariable depth octrees and kd-trees. These are often more efficient\nfor the operations described here. vtkCellLocator has been designed\nfor subclassing; so these locators can be derived if necessary.\n\nS",
    "ee Also:\n\nvtkLocator vtkPointLocator vtkOBBTree\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCellLocator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCellLocatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCellLocator", o) != 0)
    {
    Py_DECREF(o);
    }

}

