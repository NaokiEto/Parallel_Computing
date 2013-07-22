// python wrapper for vtkLabelHierarchy
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
#include "vtkLabelHierarchy.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkLabelHierarchy(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkLabelHierarchy(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkLabelHierarchyNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkLabelHierarchyNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPointSetNew
extern "C" { PyObject *PyVTKClass_vtkPointSetNew(const char *); }
#define DECLARED_PyVTKClass_vtkPointSetNew
#endif

static const char **PyvtkLabelHierarchy_Doc();


static PyObject *
PyvtkLabelHierarchy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

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
      tempr = op->vtkLabelHierarchy::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

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
      tempr = op->vtkLabelHierarchy::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  vtkLabelHierarchy *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkLabelHierarchy::NewInstance();
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
PyvtkLabelHierarchy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkLabelHierarchy *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkLabelHierarchy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_SetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  vtkPoints *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
    {
    if (ap.IsBound())
      {
      op->SetPoints(temp0);
      }
    else
      {
      op->vtkLabelHierarchy::SetPoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_ComputeHierarchy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeHierarchy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeHierarchy();
      }
    else
      {
      op->vtkLabelHierarchy::ComputeHierarchy();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_SetTargetLabelCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTargetLabelCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTargetLabelCount(temp0);
      }
    else
      {
      op->vtkLabelHierarchy::SetTargetLabelCount(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_GetTargetLabelCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetLabelCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTargetLabelCount();
      }
    else
      {
      tempr = op->vtkLabelHierarchy::GetTargetLabelCount();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_SetMaximumDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumDepth(temp0);
      }
    else
      {
      op->vtkLabelHierarchy::SetMaximumDepth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_GetMaximumDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumDepth();
      }
    else
      {
      tempr = op->vtkLabelHierarchy::GetMaximumDepth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_SetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->SetTextProperty(temp0);
      }
    else
      {
      op->vtkLabelHierarchy::SetTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_GetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  vtkTextProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextProperty();
      }
    else
      {
      tempr = op->vtkLabelHierarchy::GetTextProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_SetPriorities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPriorities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  vtkDataArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
    {
    if (ap.IsBound())
      {
      op->SetPriorities(temp0);
      }
    else
      {
      op->vtkLabelHierarchy::SetPriorities(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_GetPriorities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPriorities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  vtkDataArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPriorities();
      }
    else
      {
      tempr = op->vtkLabelHierarchy::GetPriorities();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_SetLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  vtkAbstractArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
    {
    if (ap.IsBound())
      {
      op->SetLabels(temp0);
      }
    else
      {
      op->vtkLabelHierarchy::SetLabels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_GetLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  vtkAbstractArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLabels();
      }
    else
      {
      tempr = op->vtkLabelHierarchy::GetLabels();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_SetOrientations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  vtkDataArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
    {
    if (ap.IsBound())
      {
      op->SetOrientations(temp0);
      }
    else
      {
      op->vtkLabelHierarchy::SetOrientations(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_GetOrientations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  vtkDataArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOrientations();
      }
    else
      {
      tempr = op->vtkLabelHierarchy::GetOrientations();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_SetIconIndices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconIndices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  vtkIntArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIntArray"))
    {
    if (ap.IsBound())
      {
      op->SetIconIndices(temp0);
      }
    else
      {
      op->vtkLabelHierarchy::SetIconIndices(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_GetIconIndices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIconIndices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  vtkIntArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIconIndices();
      }
    else
      {
      tempr = op->vtkLabelHierarchy::GetIconIndices();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_SetSizes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSizes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  vtkDataArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
    {
    if (ap.IsBound())
      {
      op->SetSizes(temp0);
      }
    else
      {
      op->vtkLabelHierarchy::SetSizes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_GetSizes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSizes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  vtkDataArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSizes();
      }
    else
      {
      tempr = op->vtkLabelHierarchy::GetSizes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_SetBoundedSizes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundedSizes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  vtkDataArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
    {
    if (ap.IsBound())
      {
      op->SetBoundedSizes(temp0);
      }
    else
      {
      op->vtkLabelHierarchy::SetBoundedSizes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_GetBoundedSizes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundedSizes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  vtkDataArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBoundedSizes();
      }
    else
      {
      tempr = op->vtkLabelHierarchy::GetBoundedSizes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  int temp0;
  vtkRenderer *temp1 = NULL;
  vtkCamera *temp2 = NULL;
  double temp3[24];
  double save3[24];
  const int size3 = 24;
  bool temp4 = false;
  float temp5[2];
  float save5[2];
  const int size5 = 2;
  vtkLabelHierarchyIterator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkRenderer") &&
      ap.GetVTKObject(temp2, "vtkCamera") &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5))
    {
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp5, save5, size5);

    if (ap.IsBound())
      {
      tempr = op->NewIterator(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      tempr = op->vtkLabelHierarchy::NewIterator(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (ap.ArrayHasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(5, temp5, size5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_GetDiscreteNodeCoordinatesFromWorldPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiscreteNodeCoordinatesFromWorldPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  int temp0[3];
  int save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetDiscreteNodeCoordinatesFromWorldPoint(temp0, temp1, temp2);
      }
    else
      {
      op->vtkLabelHierarchy::GetDiscreteNodeCoordinatesFromWorldPoint(temp0, temp1, temp2);
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
PyvtkLabelHierarchy_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfCells();
      }
    else
      {
      tempr = op->vtkLabelHierarchy::GetNumberOfCells();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_GetCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  vtkIdType temp0;
  vtkCell *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCell(temp0);
      }
    else
      {
      tempr = op->vtkLabelHierarchy::GetCell(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkLabelHierarchy_GetCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  vtkIdType temp0;
  vtkGenericCell *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkGenericCell"))
    {
    if (ap.IsBound())
      {
      op->GetCell(temp0, temp1);
      }
    else
      {
      op->vtkLabelHierarchy::GetCell(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLabelHierarchy_GetCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkLabelHierarchy_GetCell_s1(self, args);
    case 2:
      return PyvtkLabelHierarchy_GetCell_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetCell");
  return NULL;
}



static PyObject *
PyvtkLabelHierarchy_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  vtkIdType temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellType(temp0);
      }
    else
      {
      tempr = op->vtkLabelHierarchy::GetCellType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_GetCellPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  vtkIdType temp0;
  vtkIdList *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      op->GetCellPoints(temp0, temp1);
      }
    else
      {
      op->vtkLabelHierarchy::GetCellPoints(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_GetPointCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  vtkIdType temp0;
  vtkIdList *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      op->GetPointCells(temp0, temp1);
      }
    else
      {
      op->vtkLabelHierarchy::GetPointCells(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_GetMaxCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaxCellSize();
      }
    else
      {
      tempr = op->vtkLabelHierarchy::GetMaxCellSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_GetCenterPts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterPts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  vtkPoints *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCenterPts();
      }
    else
      {
      tempr = op->vtkLabelHierarchy::GetCenterPts();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_GetCoincidentPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoincidentPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  vtkCoincidentPoints *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCoincidentPoints();
      }
    else
      {
      tempr = op->vtkLabelHierarchy::GetCoincidentPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLabelHierarchy_Methods[] = {
  {(char*)"GetClassName", PyvtkLabelHierarchy_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkLabelHierarchy_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkLabelHierarchy_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkLabelHierarchy\nC++: vtkLabelHierarchy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkLabelHierarchy_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLabelHierarchy\nC++: vtkLabelHierarchy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPoints", PyvtkLabelHierarchy_SetPoints, 1,
   (char*)"V.SetPoints(vtkPoints)\nC++: virtual void SetPoints(vtkPoints *)\n\nOverride SetPoints so we can reset the hierarchy when the points\nchange.\n"},
  {(char*)"ComputeHierarchy", PyvtkLabelHierarchy_ComputeHierarchy, 1,
   (char*)"V.ComputeHierarchy()\nC++: virtual void ComputeHierarchy()\n\nFill the hierarchy with the input labels.\n"},
  {(char*)"SetTargetLabelCount", PyvtkLabelHierarchy_SetTargetLabelCount, 1,
   (char*)"V.SetTargetLabelCount(int)\nC++: void SetTargetLabelCount(int a)\n\nThe number of labels that is ideally present at any octree node.\nIt is best if this is a multiple of $2^d $.\n"},
  {(char*)"GetTargetLabelCount", PyvtkLabelHierarchy_GetTargetLabelCount, 1,
   (char*)"V.GetTargetLabelCount() -> int\nC++: int GetTargetLabelCount()\n\nThe number of labels that is ideally present at any octree node.\nIt is best if this is a multiple of $2^d $.\n"},
  {(char*)"SetMaximumDepth", PyvtkLabelHierarchy_SetMaximumDepth, 1,
   (char*)"V.SetMaximumDepth(int)\nC++: void SetMaximumDepth(int a)\n\nThe maximum depth of the octree.\n"},
  {(char*)"GetMaximumDepth", PyvtkLabelHierarchy_GetMaximumDepth, 1,
   (char*)"V.GetMaximumDepth() -> int\nC++: int GetMaximumDepth()\n\nThe maximum depth of the octree.\n"},
  {(char*)"SetTextProperty", PyvtkLabelHierarchy_SetTextProperty, 1,
   (char*)"V.SetTextProperty(vtkTextProperty)\nC++: virtual void SetTextProperty(vtkTextProperty *tprop)\n\nThe default text property assigned to labels in this hierarchy.\n"},
  {(char*)"GetTextProperty", PyvtkLabelHierarchy_GetTextProperty, 1,
   (char*)"V.GetTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetTextProperty()\n\nThe default text property assigned to labels in this hierarchy.\n"},
  {(char*)"SetPriorities", PyvtkLabelHierarchy_SetPriorities, 1,
   (char*)"V.SetPriorities(vtkDataArray)\nC++: virtual void SetPriorities(vtkDataArray *arr)\n\nSet/get the array specifying the importance (priority) of each\nlabel.\n"},
  {(char*)"GetPriorities", PyvtkLabelHierarchy_GetPriorities, 1,
   (char*)"V.GetPriorities() -> vtkDataArray\nC++: vtkDataArray *GetPriorities()\n\nSet/get the array specifying the importance (priority) of each\nlabel.\n"},
  {(char*)"SetLabels", PyvtkLabelHierarchy_SetLabels, 1,
   (char*)"V.SetLabels(vtkAbstractArray)\nC++: virtual void SetLabels(vtkAbstractArray *arr)\n\nSet/get the array specifying the text of each label.\n"},
  {(char*)"GetLabels", PyvtkLabelHierarchy_GetLabels, 1,
   (char*)"V.GetLabels() -> vtkAbstractArray\nC++: vtkAbstractArray *GetLabels()\n\nSet/get the array specifying the text of each label.\n"},
  {(char*)"SetOrientations", PyvtkLabelHierarchy_SetOrientations, 1,
   (char*)"V.SetOrientations(vtkDataArray)\nC++: virtual void SetOrientations(vtkDataArray *arr)\n\nSet/get the array specifying the orientation of each label.\n"},
  {(char*)"GetOrientations", PyvtkLabelHierarchy_GetOrientations, 1,
   (char*)"V.GetOrientations() -> vtkDataArray\nC++: vtkDataArray *GetOrientations()\n\nSet/get the array specifying the orientation of each label.\n"},
  {(char*)"SetIconIndices", PyvtkLabelHierarchy_SetIconIndices, 1,
   (char*)"V.SetIconIndices(vtkIntArray)\nC++: virtual void SetIconIndices(vtkIntArray *arr)\n\nSet/get the array specifying the icon index of each label.\n"},
  {(char*)"GetIconIndices", PyvtkLabelHierarchy_GetIconIndices, 1,
   (char*)"V.GetIconIndices() -> vtkIntArray\nC++: vtkIntArray *GetIconIndices()\n\nSet/get the array specifying the icon index of each label.\n"},
  {(char*)"SetSizes", PyvtkLabelHierarchy_SetSizes, 1,
   (char*)"V.SetSizes(vtkDataArray)\nC++: virtual void SetSizes(vtkDataArray *arr)\n\nSet/get the array specifying the size of each label.\n"},
  {(char*)"GetSizes", PyvtkLabelHierarchy_GetSizes, 1,
   (char*)"V.GetSizes() -> vtkDataArray\nC++: vtkDataArray *GetSizes()\n\nSet/get the array specifying the size of each label.\n"},
  {(char*)"SetBoundedSizes", PyvtkLabelHierarchy_SetBoundedSizes, 1,
   (char*)"V.SetBoundedSizes(vtkDataArray)\nC++: virtual void SetBoundedSizes(vtkDataArray *arr)\n\nSet/get the array specifying the maximum width and height in\nworld coordinates of each label.\n"},
  {(char*)"GetBoundedSizes", PyvtkLabelHierarchy_GetBoundedSizes, 1,
   (char*)"V.GetBoundedSizes() -> vtkDataArray\nC++: vtkDataArray *GetBoundedSizes()\n\nSet/get the array specifying the maximum width and height in\nworld coordinates of each label.\n"},
  {(char*)"NewIterator", PyvtkLabelHierarchy_NewIterator, 1,
   (char*)"V.NewIterator(int, vtkRenderer, vtkCamera, [float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float], bool, [float, float])\n    -> vtkLabelHierarchyIterator\nC++: vtkLabelHierarchyIterator *NewIterator(int type,\n    vtkRenderer *ren, vtkCamera *cam, double frustumPlanes[24],\n    bool positionsAsNormals, float bucketSize[2])\n\nReturns an iterator for this data object. positionsAsNormals\nshould only be true when labels are on a sphere centered at the\norigin (3D world).\n@param type - the type should be one of FULL_SORT, QUEUE,\n    DEPTH_FIRST, or FRUSTUM.\n@param ren - the current renderer (used for viewport information)\n@param cam - the current camera.\n@param frustumPlanes - should be the output of the camera's\n    frustum planes.\n@param positionsAsNormals - throws out octree nodes on the\n    opposite side of the origin.\n@param bucketSize - an array of 2 integers describing the width\n    and height of label placer buckets.\n"},
  {(char*)"GetDiscreteNodeCoordinatesFromWorldPoint", PyvtkLabelHierarchy_GetDiscreteNodeCoordinatesFromWorldPoint, 1,
   (char*)"V.GetDiscreteNodeCoordinatesFromWorldPoint([int, int, int],\n    [float, float, float], int)\nC++: void GetDiscreteNodeCoordinatesFromWorldPoint(int ijk[3],\n    double pt[3], int level)\n\nGiven a depth in the hierarchy ( level) and a point pt in world\nspace, compute ijk. This is used to find other octree nodes at\nthe same level that are within the search radius for candidate\nlabels to be placed. It is called with pt set to the camera eye\npoint and pythagorean quadruples increasingly distant from the\norigin are added to ijk to identify octree nodes whose labels\nshould be placed.\n@param[out] ijk - discrete coordinates of the octree node at\n    level containing pt.\n@param[in]  pt - input world point coordinates\n@param[in]  level - input octree level to be considered\n"},
  {(char*)"GetNumberOfCells", PyvtkLabelHierarchy_GetNumberOfCells, 1,
   (char*)"V.GetNumberOfCells() -> int\nC++: virtual vtkIdType GetNumberOfCells()\n\nInherited members (from vtkDataSet)\n"},
  {(char*)"GetCell", PyvtkLabelHierarchy_GetCell, 1,
   (char*)"V.GetCell(int) -> vtkCell\nC++: virtual vtkCell *GetCell(vtkIdType)\nV.GetCell(int, vtkGenericCell)\nC++: virtual void GetCell(vtkIdType, vtkGenericCell *)\n\nInherited members (from vtkDataSet)\n"},
  {(char*)"GetCellType", PyvtkLabelHierarchy_GetCellType, 1,
   (char*)"V.GetCellType(int) -> int\nC++: virtual int GetCellType(vtkIdType)\n\nInherited members (from vtkDataSet)\n"},
  {(char*)"GetCellPoints", PyvtkLabelHierarchy_GetCellPoints, 1,
   (char*)"V.GetCellPoints(int, vtkIdList)\nC++: virtual void GetCellPoints(vtkIdType, vtkIdList *)\n\nInherited members (from vtkDataSet)\n"},
  {(char*)"GetPointCells", PyvtkLabelHierarchy_GetPointCells, 1,
   (char*)"V.GetPointCells(int, vtkIdList)\nC++: virtual void GetPointCells(vtkIdType, vtkIdList *)\n\nInherited members (from vtkDataSet)\n"},
  {(char*)"GetMaxCellSize", PyvtkLabelHierarchy_GetMaxCellSize, 1,
   (char*)"V.GetMaxCellSize() -> int\nC++: virtual int GetMaxCellSize()\n\nInherited members (from vtkDataSet)\n"},
  {(char*)"GetCenterPts", PyvtkLabelHierarchy_GetCenterPts, 1,
   (char*)"V.GetCenterPts() -> vtkPoints\nC++: vtkPoints *GetCenterPts()\n\nProvide access to original coordinates of sets of coincident\npoints\n"},
  {(char*)"GetCoincidentPoints", PyvtkLabelHierarchy_GetCoincidentPoints, 1,
   (char*)"V.GetCoincidentPoints() -> vtkCoincidentPoints\nC++: vtkCoincidentPoints *GetCoincidentPoints()\n\nProvide access to the set of coincident points that have been\nperturbed by the hierarchy in order to render labels for each\nwithout overlap.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLabelHierarchy_StaticNew()
{
  return vtkLabelHierarchy::New();
}

PyObject *PyVTKClass_vtkLabelHierarchyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLabelHierarchy_StaticNew,
    PyvtkLabelHierarchy_Methods,
    "vtkLabelHierarchy", modulename,
    NULL, NULL,
    PyvtkLabelHierarchy_Doc(),
    PyVTKClass_vtkPointSetNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"FULL_SORT", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"QUEUE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"DEPTH_FIRST", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"FRUSTUM", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkLabelHierarchy_Doc()
{
  static const char *docstring[] = {
    "vtkLabelHierarchy - contains an octree of labels\n\n",
    "Superclass: vtkPointSet\n\n",
    "This class represents labels in a hierarchy used to denote rendering\npriority. A binary tree of labels is maintained that subdivides the\nbounds of the of the label anchors spatially. Which level of the tree\na label occupies determines its priority; those at higher levels of\nthe tree will be more likely to render than those at lower levels of\nthe tree.\n\nPass vtkLabelHierarchy objects to a vtkLabelP",
    "lacementMapper filter\nfor dynamic, non-overlapping, per-frame placement of labels.\n\nNote that if we have a d-dimensional binary tree and we want a fixed\nnumber $n $ of labels in each node (all nodes, not just leaves), we\ncan compute the depth of tree required assuming a uniform\ndistribution of points. Given a total of $N $ points we know\nthat$\\frac{N}{|T|} = n $, where $|T| $ is the cardinality of",
    " the tree\n(i.e., the number of nodes it contains). Because we have a uniform\ndistribution, the tree will be uniformly subdivided and thus $|T| = 1\n+ 2^d + \\left(2^d\\right)^2 + \\cdots + \\left(2^d\\right)^k $, where $d $\nis the dimensionality of the input points (fixed at 3 for now). As $k $\nbecomes large, $|T|\\approx 2 \\left(2^d\\right)^k $. Using this\napproximation, we can solve for $k $:\\[ k =\n\\fra",
    "c{\\log{\\frac{N}{2n}}}{\\log{2^d}} \\] Given a set of $N $ input\nlabel anchors, we'll compute $k $ and then bin the anchors into tree\nnodes at level $k $ of the tree. After this, all the nodes will be in\nthe leaves of the tree and those leaves will be at the $k $-th level;\nno anchors will be in levels $1, 2, \\ldots, k-1 $. To fix that, we'll\nchoose to move some anchors upwards. The exact number to mo",
    "ve upwards\ndepends on TargetLabelCount. We'll move as many up as required to\nhave TargetLabelCount at each node.\n\nYou should avoid situations where MaximumDepth does not allow\nforTargetLabelCount or fewer entries at each node. The MaximumDepth\nis a hard limit while TargetLabelCount is a suggested optimum. You\nwill end up with many more than TargetLabelCount entries per node and\nthings will be sloo",
    "oow.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLabelHierarchy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLabelHierarchyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLabelHierarchy", o) != 0)
    {
    Py_DECREF(o);
    }

}

