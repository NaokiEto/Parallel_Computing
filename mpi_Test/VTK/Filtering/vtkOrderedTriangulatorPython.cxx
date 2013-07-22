// python wrapper for vtkOrderedTriangulator
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
#include "vtkOrderedTriangulator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkOrderedTriangulator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkOrderedTriangulator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkOrderedTriangulatorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkOrderedTriangulatorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkOrderedTriangulator_Doc();


static PyObject *
PyvtkOrderedTriangulator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

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
      tempr = op->vtkOrderedTriangulator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrderedTriangulator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

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
      tempr = op->vtkOrderedTriangulator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrderedTriangulator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  vtkOrderedTriangulator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkOrderedTriangulator::NewInstance();
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
PyvtkOrderedTriangulator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkOrderedTriangulator *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkOrderedTriangulator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrderedTriangulator_InitTriangulation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitTriangulation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  int temp6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
    {
    if (ap.IsBound())
      {
      op->InitTriangulation(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
      }
    else
      {
      op->vtkOrderedTriangulator::InitTriangulation(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkOrderedTriangulator_InitTriangulation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitTriangulation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->InitTriangulation(temp0, temp1);
      }
    else
      {
      op->vtkOrderedTriangulator::InitTriangulation(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkOrderedTriangulator_InitTriangulation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 7:
      return PyvtkOrderedTriangulator_InitTriangulation_s1(self, args);
    case 2:
      return PyvtkOrderedTriangulator_InitTriangulation_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "InitTriangulation");
  return NULL;
}



static PyObject *
PyvtkOrderedTriangulator_InsertPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  vtkIdType temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  int temp3;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      tempr = op->InsertPoint(temp0, temp1, temp2, temp3);
      }
    else
      {
      tempr = op->vtkOrderedTriangulator::InsertPoint(temp0, temp1, temp2, temp3);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkOrderedTriangulator_InsertPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  double temp3[3];
  double save3[3];
  const int size3 = 3;
  int temp4;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4))
    {
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);

    if (ap.IsBound())
      {
      tempr = op->InsertPoint(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      tempr = op->vtkOrderedTriangulator::InsertPoint(temp0, temp1, temp2, temp3, temp4);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkOrderedTriangulator_InsertPoint_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  double temp3[3];
  double save3[3];
  const int size3 = 3;
  double temp4[3];
  double save4[3];
  const int size4 = 3;
  int temp5;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5))
    {
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);

    if (ap.IsBound())
      {
      tempr = op->InsertPoint(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      tempr = op->vtkOrderedTriangulator::InsertPoint(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkOrderedTriangulator_InsertPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkOrderedTriangulator_InsertPoint_s1(self, args);
    case 5:
      return PyvtkOrderedTriangulator_InsertPoint_s2(self, args);
    case 6:
      return PyvtkOrderedTriangulator_InsertPoint_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "InsertPoint");
  return NULL;
}



static PyObject *
PyvtkOrderedTriangulator_Triangulate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Triangulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Triangulate();
      }
    else
      {
      op->vtkOrderedTriangulator::Triangulate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrderedTriangulator_TemplateTriangulate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TemplateTriangulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->TemplateTriangulate(temp0, temp1, temp2);
      }
    else
      {
      op->vtkOrderedTriangulator::TemplateTriangulate(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrderedTriangulator_UpdatePointType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePointType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->UpdatePointType(temp0, temp1);
      }
    else
      {
      op->vtkOrderedTriangulator::UpdatePointType(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrderedTriangulator_GetPointId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  vtkIdType temp0;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointId(temp0);
      }
    else
      {
      tempr = op->vtkOrderedTriangulator::GetPointId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrderedTriangulator_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfPoints();
      }
    else
      {
      tempr = op->vtkOrderedTriangulator::GetNumberOfPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrderedTriangulator_SetUseTemplates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseTemplates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseTemplates(temp0);
      }
    else
      {
      op->vtkOrderedTriangulator::SetUseTemplates(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrderedTriangulator_GetUseTemplates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseTemplates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseTemplates();
      }
    else
      {
      tempr = op->vtkOrderedTriangulator::GetUseTemplates();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrderedTriangulator_UseTemplatesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseTemplatesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseTemplatesOn();
      }
    else
      {
      op->vtkOrderedTriangulator::UseTemplatesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrderedTriangulator_UseTemplatesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseTemplatesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseTemplatesOff();
      }
    else
      {
      op->vtkOrderedTriangulator::UseTemplatesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrderedTriangulator_SetPreSorted(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreSorted");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPreSorted(temp0);
      }
    else
      {
      op->vtkOrderedTriangulator::SetPreSorted(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrderedTriangulator_GetPreSorted(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreSorted");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPreSorted();
      }
    else
      {
      tempr = op->vtkOrderedTriangulator::GetPreSorted();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrderedTriangulator_PreSortedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreSortedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PreSortedOn();
      }
    else
      {
      op->vtkOrderedTriangulator::PreSortedOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrderedTriangulator_PreSortedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreSortedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PreSortedOff();
      }
    else
      {
      op->vtkOrderedTriangulator::PreSortedOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrderedTriangulator_SetUseTwoSortIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseTwoSortIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseTwoSortIds(temp0);
      }
    else
      {
      op->vtkOrderedTriangulator::SetUseTwoSortIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrderedTriangulator_GetUseTwoSortIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseTwoSortIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseTwoSortIds();
      }
    else
      {
      tempr = op->vtkOrderedTriangulator::GetUseTwoSortIds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrderedTriangulator_UseTwoSortIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseTwoSortIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseTwoSortIdsOn();
      }
    else
      {
      op->vtkOrderedTriangulator::UseTwoSortIdsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrderedTriangulator_UseTwoSortIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseTwoSortIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseTwoSortIdsOff();
      }
    else
      {
      op->vtkOrderedTriangulator::UseTwoSortIdsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrderedTriangulator_GetTetras(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTetras");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  int temp0;
  vtkUnstructuredGrid *temp1 = NULL;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkUnstructuredGrid"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTetras(temp0, temp1);
      }
    else
      {
      tempr = op->vtkOrderedTriangulator::GetTetras(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrderedTriangulator_AddTetras_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTetras");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  int temp0;
  vtkUnstructuredGrid *temp1 = NULL;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkUnstructuredGrid"))
    {
    if (ap.IsBound())
      {
      tempr = op->AddTetras(temp0, temp1);
      }
    else
      {
      tempr = op->vtkOrderedTriangulator::AddTetras(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkOrderedTriangulator_AddTetras_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTetras");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  int temp0;
  vtkCellArray *temp1 = NULL;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkCellArray"))
    {
    if (ap.IsBound())
      {
      tempr = op->AddTetras(temp0, temp1);
      }
    else
      {
      tempr = op->vtkOrderedTriangulator::AddTetras(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkOrderedTriangulator_AddTetras_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTetras");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  int temp0;
  vtkIncrementalPointLocator *temp1 = NULL;
  vtkCellArray *temp2 = NULL;
  vtkPointData *temp3 = NULL;
  vtkPointData *temp4 = NULL;
  vtkCellData *temp5 = NULL;
  vtkIdType temp6;
  vtkCellData *temp7 = NULL;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(8) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp2, "vtkCellArray") &&
      ap.GetVTKObject(temp3, "vtkPointData") &&
      ap.GetVTKObject(temp4, "vtkPointData") &&
      ap.GetVTKObject(temp5, "vtkCellData") &&
      ap.GetValue(temp6) &&
      ap.GetVTKObject(temp7, "vtkCellData"))
    {
    if (ap.IsBound())
      {
      tempr = op->AddTetras(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }
    else
      {
      tempr = op->vtkOrderedTriangulator::AddTetras(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkOrderedTriangulator_AddTetras_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTetras");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  int temp0;
  vtkIdList *temp1 = NULL;
  vtkPoints *temp2 = NULL;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkPoints"))
    {
    if (ap.IsBound())
      {
      tempr = op->AddTetras(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkOrderedTriangulator::AddTetras(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOrderedTriangulator_AddTetras_Methods[] = {
  {NULL, PyvtkOrderedTriangulator_AddTetras_s1, 1,
   (char*)"@iO *vtkUnstructuredGrid"},
  {NULL, PyvtkOrderedTriangulator_AddTetras_s2, 1,
   (char*)"@iO *vtkCellArray"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkOrderedTriangulator_AddTetras(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkOrderedTriangulator_AddTetras_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 8:
      return PyvtkOrderedTriangulator_AddTetras_s3(self, args);
    case 3:
      return PyvtkOrderedTriangulator_AddTetras_s4(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddTetras");
  return NULL;
}



static PyObject *
PyvtkOrderedTriangulator_AddTriangles_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTriangles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  vtkCellArray *temp0 = NULL;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellArray"))
    {
    if (ap.IsBound())
      {
      tempr = op->AddTriangles(temp0);
      }
    else
      {
      tempr = op->vtkOrderedTriangulator::AddTriangles(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkOrderedTriangulator_AddTriangles_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTriangles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  vtkIdType temp0;
  vtkCellArray *temp1 = NULL;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkCellArray"))
    {
    if (ap.IsBound())
      {
      tempr = op->AddTriangles(temp0, temp1);
      }
    else
      {
      tempr = op->vtkOrderedTriangulator::AddTriangles(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkOrderedTriangulator_AddTriangles(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkOrderedTriangulator_AddTriangles_s1(self, args);
    case 2:
      return PyvtkOrderedTriangulator_AddTriangles_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddTriangles");
  return NULL;
}



static PyObject *
PyvtkOrderedTriangulator_InitTetraTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitTetraTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InitTetraTraversal();
      }
    else
      {
      op->vtkOrderedTriangulator::InitTetraTraversal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrderedTriangulator_GetNextTetra(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextTetra");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  int temp0;
  vtkTetra *temp1 = NULL;
  vtkDataArray *temp2 = NULL;
  vtkDoubleArray *temp3 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkTetra") &&
      ap.GetVTKObject(temp2, "vtkDataArray") &&
      ap.GetVTKObject(temp3, "vtkDoubleArray"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNextTetra(temp0, temp1, temp2, temp3);
      }
    else
      {
      tempr = op->vtkOrderedTriangulator::GetNextTetra(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOrderedTriangulator_Methods[] = {
  {(char*)"GetClassName", PyvtkOrderedTriangulator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOrderedTriangulator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOrderedTriangulator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkOrderedTriangulator\nC++: vtkOrderedTriangulator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOrderedTriangulator_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOrderedTriangulator\nC++: vtkOrderedTriangulator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"InitTriangulation", PyvtkOrderedTriangulator_InitTriangulation, 1,
   (char*)"V.InitTriangulation(float, float, float, float, float, float, int)\nC++: void InitTriangulation(double xmin, double xmax, double ymin,\n     double ymax, double zmin, double zmax, int numPts)\nV.InitTriangulation([float, float, float, float, float, float],\n    int)\nC++: void InitTriangulation(double bounds[6], int numPts)\n\nInitialize the triangulation process. Provide a bounding box and\nthe maximum number of points to be inserted. Note that since the\ntriangulation is performed using parametric coordinates (see\nInsertPoint()) the bounds should be represent the range of the\nparametric coordinates inserted.\n\\post no_point_inserted: GetNumberOfPoints()==0\n"},
  {(char*)"InsertPoint", PyvtkOrderedTriangulator_InsertPoint, 1,
   (char*)"V.InsertPoint(int, [float, float, float], [float, float, float],\n    int) -> int\nC++: vtkIdType InsertPoint(vtkIdType id, double x[3], double p[3],\n     int type)\nV.InsertPoint(int, int, [float, float, float], [float, float,\n    float], int) -> int\nC++: vtkIdType InsertPoint(vtkIdType id, vtkIdType sortid,\n    double x[3], double p[3], int type)\nV.InsertPoint(int, int, int, [float, float, float], [float, float,\n     float], int) -> int\nC++: vtkIdType InsertPoint(vtkIdType id, vtkIdType sortid,\n    vtkIdType sortid2, double x[3], double p[3], int type)\n\nFor each point to be inserted, provide an id, a position x,\nparametric coordinate p, and whether the point is inside\n(type=0), outside (type=1), or on the boundary (type=2). You must\ncall InitTriangulation() prior to invoking this method. Make sure\nthat the number of points inserted does not exceed the numPts\nspecified in InitTriangulation(). Also note that the \"id\" can be\nany integer and can be greater than numPts. It is used to create\ntetras (in AddTetras()) with the appropriate connectivity ids.\nThe method returns an internal id that can be used prior to the\nTriangulate() method to update the type of the point with\nUpdatePointType(). (Note: the algorithm triangulated with the\nparametric coordinate p[3] and creates tetras with the global\ncoordinate x[3]. The parametric coordinates and global\ncoordinates may be the same.)\n"},
  {(char*)"Triangulate", PyvtkOrderedTriangulator_Triangulate, 1,
   (char*)"V.Triangulate()\nC++: void Triangulate()\n\nPerform the triangulation. (Complete all calls to InsertPoint()\nprior to invoking this method.) A special version is available\nwhen templates should be used.\n"},
  {(char*)"TemplateTriangulate", PyvtkOrderedTriangulator_TemplateTriangulate, 1,
   (char*)"V.TemplateTriangulate(int, int, int)\nC++: void TemplateTriangulate(int cellType, int numPts,\n    int numEdges)\n\nPerform the triangulation. (Complete all calls to InsertPoint()\nprior to invoking this method.) A special version is available\nwhen templates should be used.\n"},
  {(char*)"UpdatePointType", PyvtkOrderedTriangulator_UpdatePointType, 1,
   (char*)"V.UpdatePointType(int, int)\nC++: void UpdatePointType(vtkIdType internalId, int type)\n\nUpdate the point type. This is useful when the merging of nearly\ncoincident points is performed. The id is the internal id\nreturned from InsertPoint(). The method should be invoked prior\nto the Triangulate method. The type is specified as inside\n(type=0), outside (type=1), or on the boundary (type=2).\n\\pre valid_range: internalId>=0 &&\n    internalId<this->GetNumberOfPoints()\n"},
  {(char*)"GetPointId", PyvtkOrderedTriangulator_GetPointId, 1,
   (char*)"V.GetPointId(int) -> int\nC++: vtkIdType GetPointId(vtkIdType internalId)\n\nReturn the Id of point `internalId'. This id is the one passed in\nargument of InsertPoint. It assumes that the point has already\nbeen inserted. The method should be invoked prior to the\nTriangulate method.\n\\pre valid_range: internalId>=0 &&\n    internalId<this->GetNumberOfPoints()\n"},
  {(char*)"GetNumberOfPoints", PyvtkOrderedTriangulator_GetNumberOfPoints, 1,
   (char*)"V.GetNumberOfPoints() -> int\nC++: int GetNumberOfPoints()\n\nReturn the number of inserted points.\n"},
  {(char*)"SetUseTemplates", PyvtkOrderedTriangulator_SetUseTemplates, 1,
   (char*)"V.SetUseTemplates(int)\nC++: void SetUseTemplates(int a)\n\nIf this flag is set, then the ordered triangulator will create\nand use templates for the triangulation. To use templates, the\nTemplateTriangulate() method should be called when appropriate.\n(Note: the TemplateTriangulate() method works for complete\n(interior) cells without extra points due to intersection, etc.)\n"},
  {(char*)"GetUseTemplates", PyvtkOrderedTriangulator_GetUseTemplates, 1,
   (char*)"V.GetUseTemplates() -> int\nC++: int GetUseTemplates()\n\nIf this flag is set, then the ordered triangulator will create\nand use templates for the triangulation. To use templates, the\nTemplateTriangulate() method should be called when appropriate.\n(Note: the TemplateTriangulate() method works for complete\n(interior) cells without extra points due to intersection, etc.)\n"},
  {(char*)"UseTemplatesOn", PyvtkOrderedTriangulator_UseTemplatesOn, 1,
   (char*)"V.UseTemplatesOn()\nC++: void UseTemplatesOn()\n\nIf this flag is set, then the ordered triangulator will create\nand use templates for the triangulation. To use templates, the\nTemplateTriangulate() method should be called when appropriate.\n(Note: the TemplateTriangulate() method works for complete\n(interior) cells without extra points due to intersection, etc.)\n"},
  {(char*)"UseTemplatesOff", PyvtkOrderedTriangulator_UseTemplatesOff, 1,
   (char*)"V.UseTemplatesOff()\nC++: void UseTemplatesOff()\n\nIf this flag is set, then the ordered triangulator will create\nand use templates for the triangulation. To use templates, the\nTemplateTriangulate() method should be called when appropriate.\n(Note: the TemplateTriangulate() method works for complete\n(interior) cells without extra points due to intersection, etc.)\n"},
  {(char*)"SetPreSorted", PyvtkOrderedTriangulator_SetPreSorted, 1,
   (char*)"V.SetPreSorted(int)\nC++: void SetPreSorted(int a)\n\nBoolean indicates whether the points have been pre-sorted. If\npre-sorted is enabled, the points are not sorted on point id. By\ndefault, presorted is off. (The point id is defined in\nInsertPoint().)\n"},
  {(char*)"GetPreSorted", PyvtkOrderedTriangulator_GetPreSorted, 1,
   (char*)"V.GetPreSorted() -> int\nC++: int GetPreSorted()\n\nBoolean indicates whether the points have been pre-sorted. If\npre-sorted is enabled, the points are not sorted on point id. By\ndefault, presorted is off. (The point id is defined in\nInsertPoint().)\n"},
  {(char*)"PreSortedOn", PyvtkOrderedTriangulator_PreSortedOn, 1,
   (char*)"V.PreSortedOn()\nC++: void PreSortedOn()\n\nBoolean indicates whether the points have been pre-sorted. If\npre-sorted is enabled, the points are not sorted on point id. By\ndefault, presorted is off. (The point id is defined in\nInsertPoint().)\n"},
  {(char*)"PreSortedOff", PyvtkOrderedTriangulator_PreSortedOff, 1,
   (char*)"V.PreSortedOff()\nC++: void PreSortedOff()\n\nBoolean indicates whether the points have been pre-sorted. If\npre-sorted is enabled, the points are not sorted on point id. By\ndefault, presorted is off. (The point id is defined in\nInsertPoint().)\n"},
  {(char*)"SetUseTwoSortIds", PyvtkOrderedTriangulator_SetUseTwoSortIds, 1,
   (char*)"V.SetUseTwoSortIds(int)\nC++: void SetUseTwoSortIds(int a)\n\nTells the triangulator that a second sort id is provided for each\npoint and should also be considered when sorting.\n"},
  {(char*)"GetUseTwoSortIds", PyvtkOrderedTriangulator_GetUseTwoSortIds, 1,
   (char*)"V.GetUseTwoSortIds() -> int\nC++: int GetUseTwoSortIds()\n\nTells the triangulator that a second sort id is provided for each\npoint and should also be considered when sorting.\n"},
  {(char*)"UseTwoSortIdsOn", PyvtkOrderedTriangulator_UseTwoSortIdsOn, 1,
   (char*)"V.UseTwoSortIdsOn()\nC++: void UseTwoSortIdsOn()\n\nTells the triangulator that a second sort id is provided for each\npoint and should also be considered when sorting.\n"},
  {(char*)"UseTwoSortIdsOff", PyvtkOrderedTriangulator_UseTwoSortIdsOff, 1,
   (char*)"V.UseTwoSortIdsOff()\nC++: void UseTwoSortIdsOff()\n\nTells the triangulator that a second sort id is provided for each\npoint and should also be considered when sorting.\n"},
  {(char*)"GetTetras", PyvtkOrderedTriangulator_GetTetras, 1,
   (char*)"V.GetTetras(int, vtkUnstructuredGrid) -> int\nC++: vtkIdType GetTetras(int classification,\n    vtkUnstructuredGrid *ugrid)\n\nInitialize and add the tetras and points from the triangulation\nto the unstructured grid provided.  New points are created and\nthe mesh is allocated. (This method differs from AddTetras() in\nthat it inserts points and cells; AddTetras only adds the tetra\ncells.) The tetrahdera added are of the type specified\n(0=inside,1=outside,2=all). Inside tetrahedron are those whose\npoints are classified \"inside\" or on the \"boundary.\"  Outside\ntetrahedron have at least one point classified \"outside.\"  The\nmethod returns the number of tetrahedrahedron of the type\nrequested.\n"},
  {(char*)"AddTetras", PyvtkOrderedTriangulator_AddTetras, 1,
   (char*)"V.AddTetras(int, vtkUnstructuredGrid) -> int\nC++: vtkIdType AddTetras(int classification,\n    vtkUnstructuredGrid *ugrid)\nV.AddTetras(int, vtkCellArray) -> int\nC++: vtkIdType AddTetras(int classification,\n    vtkCellArray *connectivity)\nV.AddTetras(int, vtkIncrementalPointLocator, vtkCellArray,\n    vtkPointData, vtkPointData, vtkCellData, int, vtkCellData)\n    -> int\nC++: vtkIdType AddTetras(int classification,\n    vtkIncrementalPointLocator *locator,\n    vtkCellArray *outConnectivity, vtkPointData *inPD,\n    vtkPointData *outPD, vtkCellData *inCD, vtkIdType cellId,\n    vtkCellData *outCD)\nV.AddTetras(int, vtkIdList, vtkPoints) -> int\nC++: vtkIdType AddTetras(int classification, vtkIdList *ptIds,\n    vtkPoints *pts)\n\nAdd the tetras to the unstructured grid provided. The\nunstructured grid is assumed to have been initialized (with\nAllocate()) and points set (with SetPoints()). The tetrahdera\nadded are of the type specified (0=inside,1=outside,2=all).\nInside tetrahedron are those whose points are classified \"inside\"\nor on the \"boundary.\" Outside tetrahedron have at least one point\nclassified \"outside.\" The method returns the number of\ntetrahedrahedron of the type requested.\n"},
  {(char*)"AddTriangles", PyvtkOrderedTriangulator_AddTriangles, 1,
   (char*)"V.AddTriangles(vtkCellArray) -> int\nC++: vtkIdType AddTriangles(vtkCellArray *connectivity)\nV.AddTriangles(int, vtkCellArray) -> int\nC++: vtkIdType AddTriangles(vtkIdType id,\n    vtkCellArray *connectivity)\n\nAdd the triangle faces classified (2=boundary) to the\nconnectivity list provided. The method returns the number of\ntriangles.\n"},
  {(char*)"InitTetraTraversal", PyvtkOrderedTriangulator_InitTetraTraversal, 1,
   (char*)"V.InitTetraTraversal()\nC++: void InitTetraTraversal()\n\nMethods to get one tetra at a time. Start with\nInitTetraTraversal() and then invoke GetNextTetra() until the\nmethod returns 0.\n"},
  {(char*)"GetNextTetra", PyvtkOrderedTriangulator_GetNextTetra, 1,
   (char*)"V.GetNextTetra(int, vtkTetra, vtkDataArray, vtkDoubleArray) -> int\nC++: int GetNextTetra(int classification, vtkTetra *tet,\n    vtkDataArray *cellScalars, vtkDoubleArray *tetScalars)\n\nMethods to get one tetra at a time. Start with\nInitTetraTraversal() and then invoke GetNextTetra() until the\nmethod returns 0. cellScalars are point-centered scalars on the\noriginal cell. tetScalars are point-centered scalars on the\ntetra: the values will be copied from cellScalars.\n\\pre tet_exists: tet!=0\n\\pre cellScalars_exists: cellScalars!=0\n\\pre tetScalars_exists: tetScalars!=0\n\\pre tetScalars_valid_size: tetScalars->GetNumberOfTuples()==4\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOrderedTriangulator_StaticNew()
{
  return vtkOrderedTriangulator::New();
}

PyObject *PyVTKClass_vtkOrderedTriangulatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOrderedTriangulator_StaticNew,
    PyvtkOrderedTriangulator_Methods,
    "vtkOrderedTriangulator", modulename,
    NULL, NULL,
    PyvtkOrderedTriangulator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkOrderedTriangulator_Doc()
{
  static const char *docstring[] = {
    "vtkOrderedTriangulator - helper class to generate triangulations\n\n",
    "Superclass: vtkObject\n\n",
    "This class is used to generate unique triangulations of points. The\nuniqueness of the triangulation is controlled by the id of the\ninserted points in combination with a Delaunay criterion. The class\nis designed to be as fast as possible (since the algorithm can be\nslow) and uses block memory allocations to support rapid\ntriangulation generation. Also, the assumption behind the class is\nthat a maxi",
    "mum of hundreds of points are to be triangulated. If you\ndesire more robust triangulation methods use\nvtkPolygon::Triangulate(), vtkDelaunay2D, or vtkDelaunay3D.\n\nBackground:\n\nThis work is documented in the technical paper: W.J. Schroeder, B.\nGeveci, M. Malaterre. Compatible Triangulations of Spatial\nDecompositions. In Proceedings of Visualization 2004, IEEE Press\nOctober 2004.\n\nDelaunay triangula",
    "tions are unique assuming a random distribution of\ninput points. The 3D Delaunay criterion is as follows: the\ncircumsphere of each tetrahedron contains no other points of the\ntriangulation except for the four points defining the tetrahedron. \nIn application this property is hard to satisfy because objects like\ncubes are defined by eight points all sharing the same circumsphere\n(center and radius);",
    " hence the Delaunay triangulation is not unique. \nThese so-called degenerate situations are typically resolved by\narbitrary selecting a triangulation. This code does something\ndifferent: it resolves degenerate triangulations by modifying the\n\"InCircumsphere\" method to use a slightly smaller radius. Hence,\ndegenerate points are always considered \"out\" of the circumsphere.\nThis, in combination with ",
    "an ordering (based on id) of the input\npoints, guarantees a unique triangulation.\n\nThere is another related characteristic of Delaunay triangulations.\nGiven a N-dimensional Delaunay triangulation, points lying on a (N-1)\ndimensional plane also form a (N-1) Delaunay triangulation. This\nmeans for example, that if a 3D cell is defined by a set of (2D)\nplanar faces, then the face triangulations are De",
    "launay. Combining\nthis with the method to generate unique triangulations described\npreviously, the triangulations on the face are guaranteed unique.\nThis fact can be used to triangulate 3D objects in such a way to\nguarantee compatible face triangulations. This is a very useful fact\nfor parallel processing, or performing operations like clipping that\nrequire compatible triangulations across 3D cell",
    " faces. (See\nvtkClipVolume for an example.)\n\nA special feature of this class is that it can generate triangulation\ntemplates on the fly. If template triangulation is enabled, then the\nordered triangulator will first triangulate the cell using the slower\nordered Delaunay approach, and then store the result as a template.\nLater, if the same cell type and cell configuration is encountered,\nthen the t",
    "emplate is reused which greatly speeds the triangulation.\n\nCaveats:\n\nDuplicate vertices will be ignored, i.e., if two points have the same\ncoordinates the second one is discarded. The implications are that\nthe user of this class must prevent duplicate points. Because the\nprecision of this algorithm is double, it's also a good idea to merge\npoints that are within some epsilon of one another.\n\nThe t",
    "riangulation is performed using the parametric coordinates of\nthe inserted points. Therefore the bounds (see InitTriangulation())\nshould represent the range of the parametric coordinates of the\ninserted points.\n\nSee Also:\n\nvtkDelaunay2D vtkDelaunay3D vtkPolygon\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOrderedTriangulator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOrderedTriangulatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOrderedTriangulator", o) != 0)
    {
    Py_DECREF(o);
    }

}

