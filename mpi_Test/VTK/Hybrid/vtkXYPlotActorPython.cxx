// python wrapper for vtkXYPlotActor
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
#include "vtkXYPlotActor.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXYPlotActor(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXYPlotActor(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXYPlotActorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXYPlotActorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkActor2DNew
extern "C" { PyObject *PyVTKClass_vtkActor2DNew(const char *); }
#define DECLARED_PyVTKClass_vtkActor2DNew
#endif

static const char **PyvtkXYPlotActor_Doc();


static PyObject *
PyvtkXYPlotActor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

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
      tempr = op->vtkXYPlotActor::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

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
      tempr = op->vtkXYPlotActor::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkXYPlotActor *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXYPlotActor::NewInstance();
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
PyvtkXYPlotActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkXYPlotActor *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkXYPlotActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_AddInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkDataSet *temp0 = NULL;
  char *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->AddInput(temp0, temp1, temp2);
      }
    else
      {
      op->vtkXYPlotActor::AddInput(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_AddInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->AddInput(temp0);
      }
    else
      {
      op->vtkXYPlotActor::AddInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_AddInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkXYPlotActor_AddInput_s1(self, args);
    case 1:
      return PyvtkXYPlotActor_AddInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddInput");
  return NULL;
}



static PyObject *
PyvtkXYPlotActor_RemoveInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkDataSet *temp0 = NULL;
  char *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->RemoveInput(temp0, temp1, temp2);
      }
    else
      {
      op->vtkXYPlotActor::RemoveInput(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_RemoveInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->RemoveInput(temp0);
      }
    else
      {
      op->vtkXYPlotActor::RemoveInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_RemoveInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkXYPlotActor_RemoveInput_s1(self, args);
    case 1:
      return PyvtkXYPlotActor_RemoveInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RemoveInput");
  return NULL;
}



static PyObject *
PyvtkXYPlotActor_RemoveAllInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllInputs();
      }
    else
      {
      op->vtkXYPlotActor::RemoveAllInputs();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetInputList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkDataSetCollection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInputList();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetInputList();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetPointComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPointComponent(temp0, temp1);
      }
    else
      {
      op->vtkXYPlotActor::SetPointComponent(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetPointComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointComponent(temp0);
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetPointComponent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetXValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXValues(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetXValues(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetXValuesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXValuesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXValuesMinValue();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetXValuesMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetXValuesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXValuesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXValuesMaxValue();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetXValuesMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetXValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXValues();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetXValues();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetXValuesToIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXValuesToIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetXValuesToIndex();
      }
    else
      {
      op->vtkXYPlotActor::SetXValuesToIndex();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetXValuesToArcLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXValuesToArcLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetXValuesToArcLength();
      }
    else
      {
      op->vtkXYPlotActor::SetXValuesToArcLength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetXValuesToNormalizedArcLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXValuesToNormalizedArcLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetXValuesToNormalizedArcLength();
      }
    else
      {
      op->vtkXYPlotActor::SetXValuesToNormalizedArcLength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetXValuesToValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXValuesToValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetXValuesToValue();
      }
    else
      {
      op->vtkXYPlotActor::SetXValuesToValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetXValuesAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXValuesAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXValuesAsString();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetXValuesAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_AddDataObjectInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDataObjectInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->AddDataObjectInput(temp0);
      }
    else
      {
      op->vtkXYPlotActor::AddDataObjectInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_RemoveDataObjectInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveDataObjectInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->RemoveDataObjectInput(temp0);
      }
    else
      {
      op->vtkXYPlotActor::RemoveDataObjectInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetDataObjectInputList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectInputList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkDataObjectCollection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataObjectInputList();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetDataObjectInputList();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetDataObjectPlotMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataObjectPlotMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDataObjectPlotMode(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetDataObjectPlotMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetDataObjectPlotModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectPlotModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataObjectPlotModeMinValue();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetDataObjectPlotModeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetDataObjectPlotModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectPlotModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataObjectPlotModeMaxValue();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetDataObjectPlotModeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetDataObjectPlotMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectPlotMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataObjectPlotMode();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetDataObjectPlotMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetDataObjectPlotModeToRows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataObjectPlotModeToRows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataObjectPlotModeToRows();
      }
    else
      {
      op->vtkXYPlotActor::SetDataObjectPlotModeToRows();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetDataObjectPlotModeToColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataObjectPlotModeToColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataObjectPlotModeToColumns();
      }
    else
      {
      op->vtkXYPlotActor::SetDataObjectPlotModeToColumns();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetDataObjectPlotModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectPlotModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataObjectPlotModeAsString();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetDataObjectPlotModeAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetDataObjectXComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataObjectXComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetDataObjectXComponent(temp0, temp1);
      }
    else
      {
      op->vtkXYPlotActor::SetDataObjectXComponent(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetDataObjectXComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectXComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataObjectXComponent(temp0);
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetDataObjectXComponent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetDataObjectYComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataObjectYComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetDataObjectYComponent(temp0, temp1);
      }
    else
      {
      op->vtkXYPlotActor::SetDataObjectYComponent(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetDataObjectYComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectYComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataObjectYComponent(temp0);
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetDataObjectYComponent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetPlotColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetPlotColor(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkXYPlotActor::SetPlotColor(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetPlotColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  double temp1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    if (ap.IsBound())
      {
      op->SetPlotColor(temp0, temp1);
      }
    else
      {
      op->vtkXYPlotActor::SetPlotColor(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetPlotColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkXYPlotActor_SetPlotColor_s1(self, args);
    case 2:
      return PyvtkXYPlotActor_SetPlotColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPlotColor");
  return NULL;
}



static PyObject *
PyvtkXYPlotActor_GetPlotColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPlotColor(temp0);
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetPlotColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetPlotSymbol(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotSymbol");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  vtkPolyData *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->SetPlotSymbol(temp0, temp1);
      }
    else
      {
      op->vtkXYPlotActor::SetPlotSymbol(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetPlotSymbol(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotSymbol");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  vtkPolyData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPlotSymbol(temp0);
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetPlotSymbol(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetPlotLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPlotLabel(temp0, temp1);
      }
    else
      {
      op->vtkXYPlotActor::SetPlotLabel(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetPlotLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPlotLabel(temp0);
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetPlotLabel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetPlotCurvePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotCurvePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPlotCurvePoints();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetPlotCurvePoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetPlotCurvePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotCurvePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPlotCurvePoints(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetPlotCurvePoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_PlotCurvePointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlotCurvePointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PlotCurvePointsOn();
      }
    else
      {
      op->vtkXYPlotActor::PlotCurvePointsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_PlotCurvePointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlotCurvePointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PlotCurvePointsOff();
      }
    else
      {
      op->vtkXYPlotActor::PlotCurvePointsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetPlotCurveLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotCurveLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPlotCurveLines();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetPlotCurveLines();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetPlotCurveLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotCurveLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPlotCurveLines(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetPlotCurveLines(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_PlotCurveLinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlotCurveLinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PlotCurveLinesOn();
      }
    else
      {
      op->vtkXYPlotActor::PlotCurveLinesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_PlotCurveLinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlotCurveLinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PlotCurveLinesOff();
      }
    else
      {
      op->vtkXYPlotActor::PlotCurveLinesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetPlotLines_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPlotLines(temp0, temp1);
      }
    else
      {
      op->vtkXYPlotActor::SetPlotLines(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetPlotLines_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPlotLines(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetPlotLines(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetPlotLines(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkXYPlotActor_SetPlotLines_s1(self, args);
    case 1:
      return PyvtkXYPlotActor_SetPlotLines_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPlotLines");
  return NULL;
}



static PyObject *
PyvtkXYPlotActor_GetPlotLines_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPlotLines(temp0);
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetPlotLines(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_GetPlotLines_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPlotLines();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetPlotLines();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_GetPlotLines(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkXYPlotActor_GetPlotLines_s1(self, args);
    case 0:
      return PyvtkXYPlotActor_GetPlotLines_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPlotLines");
  return NULL;
}



static PyObject *
PyvtkXYPlotActor_SetPlotPoints_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPlotPoints(temp0, temp1);
      }
    else
      {
      op->vtkXYPlotActor::SetPlotPoints(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetPlotPoints_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPlotPoints(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetPlotPoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetPlotPoints(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkXYPlotActor_SetPlotPoints_s1(self, args);
    case 1:
      return PyvtkXYPlotActor_SetPlotPoints_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPlotPoints");
  return NULL;
}



static PyObject *
PyvtkXYPlotActor_GetPlotPoints_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPlotPoints(temp0);
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetPlotPoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_GetPlotPoints_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPlotPoints();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetPlotPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_GetPlotPoints(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkXYPlotActor_GetPlotPoints_s1(self, args);
    case 0:
      return PyvtkXYPlotActor_GetPlotPoints_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPlotPoints");
  return NULL;
}



static PyObject *
PyvtkXYPlotActor_SetExchangeAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExchangeAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetExchangeAxes(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetExchangeAxes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetExchangeAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExchangeAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetExchangeAxes();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetExchangeAxes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_ExchangeAxesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExchangeAxesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExchangeAxesOn();
      }
    else
      {
      op->vtkXYPlotActor::ExchangeAxesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_ExchangeAxesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExchangeAxesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExchangeAxesOff();
      }
    else
      {
      op->vtkXYPlotActor::ExchangeAxesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetReverseXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReverseXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReverseXAxis(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetReverseXAxis(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetReverseXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReverseXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetReverseXAxis();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetReverseXAxis();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_ReverseXAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseXAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReverseXAxisOn();
      }
    else
      {
      op->vtkXYPlotActor::ReverseXAxisOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_ReverseXAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseXAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReverseXAxisOff();
      }
    else
      {
      op->vtkXYPlotActor::ReverseXAxisOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetReverseYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReverseYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReverseYAxis(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetReverseYAxis(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetReverseYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReverseYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetReverseYAxis();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetReverseYAxis();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_ReverseYAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseYAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReverseYAxisOn();
      }
    else
      {
      op->vtkXYPlotActor::ReverseYAxisOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_ReverseYAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseYAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReverseYAxisOff();
      }
    else
      {
      op->vtkXYPlotActor::ReverseYAxisOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetLegendActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLegendActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkLegendBoxActor *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLegendActor();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetLegendActor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetGlyphSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkGlyphSource2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGlyphSource();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetGlyphSource();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTitle(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetTitle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTitle();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetTitle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetXTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXTitle(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetXTitle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetXTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXTitle();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetXTitle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetYTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYTitle(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetYTitle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetYTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetYTitle();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetYTitle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetXAxisActor2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisActor2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkAxisActor2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXAxisActor2D();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetXAxisActor2D();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetYAxisActor2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisActor2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkAxisActor2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetYAxisActor2D();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetYAxisActor2D();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetXRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetXRange(temp0, temp1);
      }
    else
      {
      op->vtkXYPlotActor::SetXRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetXRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetXRange(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetXRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetXRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkXYPlotActor_SetXRange_s1(self, args);
    case 1:
      return PyvtkXYPlotActor_SetXRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetXRange");
  return NULL;
}



static PyObject *
PyvtkXYPlotActor_GetXRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXRange();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetXRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetYRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetYRange(temp0, temp1);
      }
    else
      {
      op->vtkXYPlotActor::SetYRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetYRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetYRange(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetYRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetYRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkXYPlotActor_SetYRange_s1(self, args);
    case 1:
      return PyvtkXYPlotActor_SetYRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetYRange");
  return NULL;
}



static PyObject *
PyvtkXYPlotActor_GetYRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetYRange();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetYRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetPlotRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetPlotRange(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkXYPlotActor::SetPlotRange(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetNumberOfXLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfXLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfXLabels(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetNumberOfXLabels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetNumberOfXLabelsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfXLabelsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfXLabelsMinValue();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetNumberOfXLabelsMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetNumberOfXLabelsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfXLabelsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfXLabelsMaxValue();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetNumberOfXLabelsMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetNumberOfXLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfXLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfXLabels();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetNumberOfXLabels();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetNumberOfYLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfYLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfYLabels(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetNumberOfYLabels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetNumberOfYLabelsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfYLabelsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfYLabelsMinValue();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetNumberOfYLabelsMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetNumberOfYLabelsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfYLabelsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfYLabelsMaxValue();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetNumberOfYLabelsMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetNumberOfYLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfYLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfYLabels();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetNumberOfYLabels();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetNumberOfLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfLabels(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetNumberOfLabels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAdjustXLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAdjustXLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAdjustXLabels(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetAdjustXLabels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetAdjustXLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAdjustXLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAdjustXLabels();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetAdjustXLabels();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAdjustYLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAdjustYLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAdjustYLabels(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetAdjustYLabels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetAdjustYLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAdjustYLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAdjustYLabels();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetAdjustYLabels();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetXTitlePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXTitlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXTitlePosition(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetXTitlePosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetXTitlePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXTitlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXTitlePosition();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetXTitlePosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetYTitlePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYTitlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYTitlePosition(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetYTitlePosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetYTitlePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYTitlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetYTitlePosition();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetYTitlePosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetNumberOfXMinorTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfXMinorTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfXMinorTicks(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetNumberOfXMinorTicks(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetNumberOfXMinorTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfXMinorTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfXMinorTicks();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetNumberOfXMinorTicks();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetNumberOfYMinorTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfYMinorTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfYMinorTicks(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetNumberOfYMinorTicks(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetNumberOfYMinorTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfYMinorTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfYMinorTicks();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetNumberOfYMinorTicks();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLegend(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetLegend(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLegend();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetLegend();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_LegendOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LegendOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LegendOn();
      }
    else
      {
      op->vtkXYPlotActor::LegendOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_LegendOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LegendOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LegendOff();
      }
    else
      {
      op->vtkXYPlotActor::LegendOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetTitlePosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetTitlePosition(temp0, temp1);
      }
    else
      {
      op->vtkXYPlotActor::SetTitlePosition(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetTitlePosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetTitlePosition(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetTitlePosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetTitlePosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkXYPlotActor_SetTitlePosition_s1(self, args);
    case 1:
      return PyvtkXYPlotActor_SetTitlePosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTitlePosition");
  return NULL;
}



static PyObject *
PyvtkXYPlotActor_GetTitlePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTitlePosition();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetTitlePosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAdjustTitlePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAdjustTitlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAdjustTitlePosition(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetAdjustTitlePosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetAdjustTitlePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAdjustTitlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAdjustTitlePosition();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetAdjustTitlePosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_AdjustTitlePositionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdjustTitlePositionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AdjustTitlePositionOn();
      }
    else
      {
      op->vtkXYPlotActor::AdjustTitlePositionOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_AdjustTitlePositionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdjustTitlePositionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AdjustTitlePositionOff();
      }
    else
      {
      op->vtkXYPlotActor::AdjustTitlePositionOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAdjustTitlePositionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAdjustTitlePositionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAdjustTitlePositionMode(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetAdjustTitlePositionMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetAdjustTitlePositionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAdjustTitlePositionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAdjustTitlePositionMode();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetAdjustTitlePositionMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetLegendPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLegendPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetLegendPosition(temp0, temp1);
      }
    else
      {
      op->vtkXYPlotActor::SetLegendPosition(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetLegendPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLegendPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetLegendPosition(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetLegendPosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetLegendPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkXYPlotActor_SetLegendPosition_s1(self, args);
    case 1:
      return PyvtkXYPlotActor_SetLegendPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetLegendPosition");
  return NULL;
}



static PyObject *
PyvtkXYPlotActor_GetLegendPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLegendPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLegendPosition();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetLegendPosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetLegendPosition2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLegendPosition2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetLegendPosition2(temp0, temp1);
      }
    else
      {
      op->vtkXYPlotActor::SetLegendPosition2(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetLegendPosition2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLegendPosition2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetLegendPosition2(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetLegendPosition2(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetLegendPosition2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkXYPlotActor_SetLegendPosition2_s1(self, args);
    case 1:
      return PyvtkXYPlotActor_SetLegendPosition2_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetLegendPosition2");
  return NULL;
}



static PyObject *
PyvtkXYPlotActor_GetLegendPosition2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLegendPosition2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLegendPosition2();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetLegendPosition2();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->SetTitleTextProperty(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetTitleTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkTextProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTitleTextProperty();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetTitleTextProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAxisTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->SetAxisTitleTextProperty(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetAxisTitleTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetAxisTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkTextProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAxisTitleTextProperty();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetAxisTitleTextProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAxisLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->SetAxisLabelTextProperty(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetAxisLabelTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetAxisLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkTextProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAxisLabelTextProperty();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetAxisLabelTextProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetLogx(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLogx");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLogx(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetLogx(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetLogx(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLogx");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLogx();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetLogx();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_LogxOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LogxOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LogxOn();
      }
    else
      {
      op->vtkXYPlotActor::LogxOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_LogxOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LogxOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LogxOff();
      }
    else
      {
      op->vtkXYPlotActor::LogxOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabelFormat(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetLabelFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLabelFormat();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetLabelFormat();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetXLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXLabelFormat(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetXLabelFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetXLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXLabelFormat();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetXLabelFormat();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetYLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYLabelFormat(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetYLabelFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetYLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetYLabelFormat();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetYLabelFormat();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBorder(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetBorder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetBorderMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBorderMinValue();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetBorderMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetBorderMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBorderMaxValue();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetBorderMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBorder();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetBorder();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_PlotPointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlotPointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PlotPointsOn();
      }
    else
      {
      op->vtkXYPlotActor::PlotPointsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_PlotPointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlotPointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PlotPointsOff();
      }
    else
      {
      op->vtkXYPlotActor::PlotPointsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_PlotLinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlotLinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PlotLinesOn();
      }
    else
      {
      op->vtkXYPlotActor::PlotLinesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_PlotLinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlotLinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PlotLinesOff();
      }
    else
      {
      op->vtkXYPlotActor::PlotLinesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetGlyphSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGlyphSize(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetGlyphSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetGlyphSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGlyphSizeMinValue();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetGlyphSizeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetGlyphSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGlyphSizeMaxValue();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetGlyphSizeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetGlyphSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGlyphSize();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetGlyphSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_ViewportToPlotCoordinate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ViewportToPlotCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkViewport *temp0 = NULL;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->ViewportToPlotCoordinate(temp0, temp1, temp2);
      }
    else
      {
      op->vtkXYPlotActor::ViewportToPlotCoordinate(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_ViewportToPlotCoordinate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ViewportToPlotCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      op->ViewportToPlotCoordinate(temp0);
      }
    else
      {
      op->vtkXYPlotActor::ViewportToPlotCoordinate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_ViewportToPlotCoordinate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkXYPlotActor_ViewportToPlotCoordinate_s1(self, args);
    case 1:
      return PyvtkXYPlotActor_ViewportToPlotCoordinate_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ViewportToPlotCoordinate");
  return NULL;
}



static PyObject *
PyvtkXYPlotActor_SetPlotCoordinate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPlotCoordinate(temp0, temp1);
      }
    else
      {
      op->vtkXYPlotActor::SetPlotCoordinate(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetPlotCoordinate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetPlotCoordinate(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetPlotCoordinate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetPlotCoordinate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkXYPlotActor_SetPlotCoordinate_s1(self, args);
    case 1:
      return PyvtkXYPlotActor_SetPlotCoordinate_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPlotCoordinate");
  return NULL;
}



static PyObject *
PyvtkXYPlotActor_GetPlotCoordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPlotCoordinate();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetPlotCoordinate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_PlotToViewportCoordinate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlotToViewportCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkViewport *temp0 = NULL;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->PlotToViewportCoordinate(temp0, temp1, temp2);
      }
    else
      {
      op->vtkXYPlotActor::PlotToViewportCoordinate(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_PlotToViewportCoordinate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlotToViewportCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      op->PlotToViewportCoordinate(temp0);
      }
    else
      {
      op->vtkXYPlotActor::PlotToViewportCoordinate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_PlotToViewportCoordinate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkXYPlotActor_PlotToViewportCoordinate_s1(self, args);
    case 1:
      return PyvtkXYPlotActor_PlotToViewportCoordinate_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "PlotToViewportCoordinate");
  return NULL;
}



static PyObject *
PyvtkXYPlotActor_SetViewportCoordinate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewportCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetViewportCoordinate(temp0, temp1);
      }
    else
      {
      op->vtkXYPlotActor::SetViewportCoordinate(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetViewportCoordinate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewportCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetViewportCoordinate(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetViewportCoordinate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetViewportCoordinate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkXYPlotActor_SetViewportCoordinate_s1(self, args);
    case 1:
      return PyvtkXYPlotActor_SetViewportCoordinate_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetViewportCoordinate");
  return NULL;
}



static PyObject *
PyvtkXYPlotActor_GetViewportCoordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewportCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetViewportCoordinate();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetViewportCoordinate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_IsInPlot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInPlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkViewport *temp0 = NULL;
  double temp1;
  double temp2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->IsInPlot(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkXYPlotActor::IsInPlot(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetChartBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChartBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetChartBox(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetChartBox(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetChartBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChartBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetChartBox();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetChartBox();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_ChartBoxOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ChartBoxOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ChartBoxOn();
      }
    else
      {
      op->vtkXYPlotActor::ChartBoxOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_ChartBoxOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ChartBoxOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ChartBoxOff();
      }
    else
      {
      op->vtkXYPlotActor::ChartBoxOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetChartBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChartBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetChartBorder(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetChartBorder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetChartBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChartBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetChartBorder();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetChartBorder();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_ChartBorderOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ChartBorderOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ChartBorderOn();
      }
    else
      {
      op->vtkXYPlotActor::ChartBorderOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_ChartBorderOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ChartBorderOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ChartBorderOff();
      }
    else
      {
      op->vtkXYPlotActor::ChartBorderOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetChartBoxProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChartBoxProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkProperty2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetChartBoxProperty();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetChartBoxProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetShowReferenceXLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowReferenceXLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShowReferenceXLine(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetShowReferenceXLine(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetShowReferenceXLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowReferenceXLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShowReferenceXLine();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetShowReferenceXLine();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_ShowReferenceXLineOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowReferenceXLineOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShowReferenceXLineOn();
      }
    else
      {
      op->vtkXYPlotActor::ShowReferenceXLineOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_ShowReferenceXLineOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowReferenceXLineOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShowReferenceXLineOff();
      }
    else
      {
      op->vtkXYPlotActor::ShowReferenceXLineOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetReferenceXValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReferenceXValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReferenceXValue(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetReferenceXValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetReferenceXValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReferenceXValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetReferenceXValue();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetReferenceXValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetShowReferenceYLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowReferenceYLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShowReferenceYLine(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetShowReferenceYLine(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetShowReferenceYLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowReferenceYLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShowReferenceYLine();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetShowReferenceYLine();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_ShowReferenceYLineOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowReferenceYLineOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShowReferenceYLineOn();
      }
    else
      {
      op->vtkXYPlotActor::ShowReferenceYLineOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_ShowReferenceYLineOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowReferenceYLineOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShowReferenceYLineOff();
      }
    else
      {
      op->vtkXYPlotActor::ShowReferenceYLineOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetReferenceYValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReferenceYValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReferenceYValue(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetReferenceYValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetReferenceYValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReferenceYValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetReferenceYValue();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetReferenceYValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMTime();
      }
    else
      {
      tempr = op->vtkXYPlotActor::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkViewport *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      tempr = op->RenderOpaqueGeometry(temp0);
      }
    else
      {
      tempr = op->vtkXYPlotActor::RenderOpaqueGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkViewport *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      tempr = op->RenderOverlay(temp0);
      }
    else
      {
      tempr = op->vtkXYPlotActor::RenderOverlay(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkViewport *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      tempr = op->RenderTranslucentPolygonalGeometry(temp0);
      }
    else
      {
      tempr = op->vtkXYPlotActor::RenderTranslucentPolygonalGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->HasTranslucentPolygonalGeometry();
      }
    else
      {
      tempr = op->vtkXYPlotActor::HasTranslucentPolygonalGeometry();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
    {
    if (ap.IsBound())
      {
      op->ReleaseGraphicsResources(temp0);
      }
    else
      {
      op->vtkXYPlotActor::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkXYPlotActor_Methods[] = {
  {(char*)"GetClassName", PyvtkXYPlotActor_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXYPlotActor_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXYPlotActor_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXYPlotActor\nC++: vtkXYPlotActor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXYPlotActor_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXYPlotActor\nC++: vtkXYPlotActor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddInput", PyvtkXYPlotActor_AddInput, 1,
   (char*)"V.AddInput(vtkDataSet, string, int)\nC++: void AddInput(vtkDataSet *in, const char *arrayName,\n    int component)\nV.AddInput(vtkDataSet)\nC++: void AddInput(vtkDataSet *in)\n\nAdd a dataset to the list of data to append. The array name\nspecifies which point array to plot. The array must be a\nvtkDataArray subclass, i.e. a numeric array. If the array name is\nNULL, then the default scalars are used.  The array can have\nmultiple components, but only the first component is ploted.\n"},
  {(char*)"RemoveInput", PyvtkXYPlotActor_RemoveInput, 1,
   (char*)"V.RemoveInput(vtkDataSet, string, int)\nC++: void RemoveInput(vtkDataSet *in, const char *arrayName,\n    int component)\nV.RemoveInput(vtkDataSet)\nC++: void RemoveInput(vtkDataSet *in)\n\nRemove a dataset from the list of data to append.\n"},
  {(char*)"RemoveAllInputs", PyvtkXYPlotActor_RemoveAllInputs, 1,
   (char*)"V.RemoveAllInputs()\nC++: void RemoveAllInputs()\n\nThis removes all of the data set inputs, but does not change the\ndata object inputs.\n"},
  {(char*)"GetInputList", PyvtkXYPlotActor_GetInputList, 1,
   (char*)"V.GetInputList() -> vtkDataSetCollection\nC++: vtkDataSetCollection *GetInputList()\n\nReturn the list of inputs to this filter.\n"},
  {(char*)"SetPointComponent", PyvtkXYPlotActor_SetPointComponent, 1,
   (char*)"V.SetPointComponent(int, int)\nC++: void SetPointComponent(int i, int comp)\n\nIf plotting points by value, which component to use to determine\nthe value. This sets a value per each input dataset (i.e., the\nith dataset).\n"},
  {(char*)"GetPointComponent", PyvtkXYPlotActor_GetPointComponent, 1,
   (char*)"V.GetPointComponent(int) -> int\nC++: int GetPointComponent(int i)\n\nIf plotting points by value, which component to use to determine\nthe value. This sets a value per each input dataset (i.e., the\nith dataset).\n"},
  {(char*)"SetXValues", PyvtkXYPlotActor_SetXValues, 1,
   (char*)"V.SetXValues(int)\nC++: void SetXValues(int)\n\nSpecify how the independent (x) variable is computed from the\npoints. The independent variable can be the scalar/point index\n(i.e., point id), the accumulated arc length along the points,\nthe normalized arc length, or by component value. If plotting\ndatasets (e.g., points), the value that is used is specified by\nthe PointComponent ivar.  (Note: these methods also control how\nfield data is plotted. Field data is usually plotted by value or\nindex, if plotting length 1-dimensional length measures are\nused.)\n"},
  {(char*)"GetXValuesMinValue", PyvtkXYPlotActor_GetXValuesMinValue, 1,
   (char*)"V.GetXValuesMinValue() -> int\nC++: int GetXValuesMinValue()\n\nSpecify how the independent (x) variable is computed from the\npoints. The independent variable can be the scalar/point index\n(i.e., point id), the accumulated arc length along the points,\nthe normalized arc length, or by component value. If plotting\ndatasets (e.g., points), the value that is used is specified by\nthe PointComponent ivar.  (Note: these methods also control how\nfield data is plotted. Field data is usually plotted by value or\nindex, if plotting length 1-dimensional length measures are\nused.)\n"},
  {(char*)"GetXValuesMaxValue", PyvtkXYPlotActor_GetXValuesMaxValue, 1,
   (char*)"V.GetXValuesMaxValue() -> int\nC++: int GetXValuesMaxValue()\n\nSpecify how the independent (x) variable is computed from the\npoints. The independent variable can be the scalar/point index\n(i.e., point id), the accumulated arc length along the points,\nthe normalized arc length, or by component value. If plotting\ndatasets (e.g., points), the value that is used is specified by\nthe PointComponent ivar.  (Note: these methods also control how\nfield data is plotted. Field data is usually plotted by value or\nindex, if plotting length 1-dimensional length measures are\nused.)\n"},
  {(char*)"GetXValues", PyvtkXYPlotActor_GetXValues, 1,
   (char*)"V.GetXValues() -> int\nC++: int GetXValues()\n\nSpecify how the independent (x) variable is computed from the\npoints. The independent variable can be the scalar/point index\n(i.e., point id), the accumulated arc length along the points,\nthe normalized arc length, or by component value. If plotting\ndatasets (e.g., points), the value that is used is specified by\nthe PointComponent ivar.  (Note: these methods also control how\nfield data is plotted. Field data is usually plotted by value or\nindex, if plotting length 1-dimensional length measures are\nused.)\n"},
  {(char*)"SetXValuesToIndex", PyvtkXYPlotActor_SetXValuesToIndex, 1,
   (char*)"V.SetXValuesToIndex()\nC++: void SetXValuesToIndex()\n\nSpecify how the independent (x) variable is computed from the\npoints. The independent variable can be the scalar/point index\n(i.e., point id), the accumulated arc length along the points,\nthe normalized arc length, or by component value. If plotting\ndatasets (e.g., points), the value that is used is specified by\nthe PointComponent ivar.  (Note: these methods also control how\nfield data is plotted. Field data is usually plotted by value or\nindex, if plotting length 1-dimensional length measures are\nused.)\n"},
  {(char*)"SetXValuesToArcLength", PyvtkXYPlotActor_SetXValuesToArcLength, 1,
   (char*)"V.SetXValuesToArcLength()\nC++: void SetXValuesToArcLength()\n\nSpecify how the independent (x) variable is computed from the\npoints. The independent variable can be the scalar/point index\n(i.e., point id), the accumulated arc length along the points,\nthe normalized arc length, or by component value. If plotting\ndatasets (e.g., points), the value that is used is specified by\nthe PointComponent ivar.  (Note: these methods also control how\nfield data is plotted. Field data is usually plotted by value or\nindex, if plotting length 1-dimensional length measures are\nused.)\n"},
  {(char*)"SetXValuesToNormalizedArcLength", PyvtkXYPlotActor_SetXValuesToNormalizedArcLength, 1,
   (char*)"V.SetXValuesToNormalizedArcLength()\nC++: void SetXValuesToNormalizedArcLength()\n\nSpecify how the independent (x) variable is computed from the\npoints. The independent variable can be the scalar/point index\n(i.e., point id), the accumulated arc length along the points,\nthe normalized arc length, or by component value. If plotting\ndatasets (e.g., points), the value that is used is specified by\nthe PointComponent ivar.  (Note: these methods also control how\nfield data is plotted. Field data is usually plotted by value or\nindex, if plotting length 1-dimensional length measures are\nused.)\n"},
  {(char*)"SetXValuesToValue", PyvtkXYPlotActor_SetXValuesToValue, 1,
   (char*)"V.SetXValuesToValue()\nC++: void SetXValuesToValue()\n\nSpecify how the independent (x) variable is computed from the\npoints. The independent variable can be the scalar/point index\n(i.e., point id), the accumulated arc length along the points,\nthe normalized arc length, or by component value. If plotting\ndatasets (e.g., points), the value that is used is specified by\nthe PointComponent ivar.  (Note: these methods also control how\nfield data is plotted. Field data is usually plotted by value or\nindex, if plotting length 1-dimensional length measures are\nused.)\n"},
  {(char*)"GetXValuesAsString", PyvtkXYPlotActor_GetXValuesAsString, 1,
   (char*)"V.GetXValuesAsString() -> string\nC++: const char *GetXValuesAsString()\n\nSpecify how the independent (x) variable is computed from the\npoints. The independent variable can be the scalar/point index\n(i.e., point id), the accumulated arc length along the points,\nthe normalized arc length, or by component value. If plotting\ndatasets (e.g., points), the value that is used is specified by\nthe PointComponent ivar.  (Note: these methods also control how\nfield data is plotted. Field data is usually plotted by value or\nindex, if plotting length 1-dimensional length measures are\nused.)\n"},
  {(char*)"AddDataObjectInput", PyvtkXYPlotActor_AddDataObjectInput, 1,
   (char*)"V.AddDataObjectInput(vtkDataObject)\nC++: void AddDataObjectInput(vtkDataObject *in)\n\nAdd a dataset to the list of data to append.\n"},
  {(char*)"RemoveDataObjectInput", PyvtkXYPlotActor_RemoveDataObjectInput, 1,
   (char*)"V.RemoveDataObjectInput(vtkDataObject)\nC++: void RemoveDataObjectInput(vtkDataObject *in)\n\nRemove a dataset from the list of data to append.\n"},
  {(char*)"GetDataObjectInputList", PyvtkXYPlotActor_GetDataObjectInputList, 1,
   (char*)"V.GetDataObjectInputList() -> vtkDataObjectCollection\nC++: vtkDataObjectCollection *GetDataObjectInputList()\n\nReturn the list of inputs to this filter.\n"},
  {(char*)"SetDataObjectPlotMode", PyvtkXYPlotActor_SetDataObjectPlotMode, 1,
   (char*)"V.SetDataObjectPlotMode(int)\nC++: void SetDataObjectPlotMode(int)\n\nIndicate whether to plot rows or columns. If plotting rows, then\nthe dependent variables is taken from a specified row, versus\nrows (y).\n"},
  {(char*)"GetDataObjectPlotModeMinValue", PyvtkXYPlotActor_GetDataObjectPlotModeMinValue, 1,
   (char*)"V.GetDataObjectPlotModeMinValue() -> int\nC++: int GetDataObjectPlotModeMinValue()\n\nIndicate whether to plot rows or columns. If plotting rows, then\nthe dependent variables is taken from a specified row, versus\nrows (y).\n"},
  {(char*)"GetDataObjectPlotModeMaxValue", PyvtkXYPlotActor_GetDataObjectPlotModeMaxValue, 1,
   (char*)"V.GetDataObjectPlotModeMaxValue() -> int\nC++: int GetDataObjectPlotModeMaxValue()\n\nIndicate whether to plot rows or columns. If plotting rows, then\nthe dependent variables is taken from a specified row, versus\nrows (y).\n"},
  {(char*)"GetDataObjectPlotMode", PyvtkXYPlotActor_GetDataObjectPlotMode, 1,
   (char*)"V.GetDataObjectPlotMode() -> int\nC++: int GetDataObjectPlotMode()\n\nIndicate whether to plot rows or columns. If plotting rows, then\nthe dependent variables is taken from a specified row, versus\nrows (y).\n"},
  {(char*)"SetDataObjectPlotModeToRows", PyvtkXYPlotActor_SetDataObjectPlotModeToRows, 1,
   (char*)"V.SetDataObjectPlotModeToRows()\nC++: void SetDataObjectPlotModeToRows()\n\nIndicate whether to plot rows or columns. If plotting rows, then\nthe dependent variables is taken from a specified row, versus\nrows (y).\n"},
  {(char*)"SetDataObjectPlotModeToColumns", PyvtkXYPlotActor_SetDataObjectPlotModeToColumns, 1,
   (char*)"V.SetDataObjectPlotModeToColumns()\nC++: void SetDataObjectPlotModeToColumns()\n\nIndicate whether to plot rows or columns. If plotting rows, then\nthe dependent variables is taken from a specified row, versus\nrows (y).\n"},
  {(char*)"GetDataObjectPlotModeAsString", PyvtkXYPlotActor_GetDataObjectPlotModeAsString, 1,
   (char*)"V.GetDataObjectPlotModeAsString() -> string\nC++: const char *GetDataObjectPlotModeAsString()\n\nIndicate whether to plot rows or columns. If plotting rows, then\nthe dependent variables is taken from a specified row, versus\nrows (y).\n"},
  {(char*)"SetDataObjectXComponent", PyvtkXYPlotActor_SetDataObjectXComponent, 1,
   (char*)"V.SetDataObjectXComponent(int, int)\nC++: void SetDataObjectXComponent(int i, int comp)\n\nSpecify which component of the input data object to use as the\nindependent variable for the ith input data object. (This ivar is\nignored if plotting the index.) Note that the value is\ninterpreted differently depending on DataObjectPlotMode. If the\nmode is Rows, then the value of DataObjectXComponent is the row\nnumber; otherwise it's the column number.\n"},
  {(char*)"GetDataObjectXComponent", PyvtkXYPlotActor_GetDataObjectXComponent, 1,
   (char*)"V.GetDataObjectXComponent(int) -> int\nC++: int GetDataObjectXComponent(int i)\n\nSpecify which component of the input data object to use as the\nindependent variable for the ith input data object. (This ivar is\nignored if plotting the index.) Note that the value is\ninterpreted differently depending on DataObjectPlotMode. If the\nmode is Rows, then the value of DataObjectXComponent is the row\nnumber; otherwise it's the column number.\n"},
  {(char*)"SetDataObjectYComponent", PyvtkXYPlotActor_SetDataObjectYComponent, 1,
   (char*)"V.SetDataObjectYComponent(int, int)\nC++: void SetDataObjectYComponent(int i, int comp)\n\nSpecify which component of the input data object to use as the\ndependent variable for the ith input data object. (This ivar is\nignored if plotting the index.) Note that the value is\ninterpreted differently depending on DataObjectPlotMode. If the\nmode is Rows, then the value of DataObjectYComponent is the row\nnumber; otherwise it's the column number.\n"},
  {(char*)"GetDataObjectYComponent", PyvtkXYPlotActor_GetDataObjectYComponent, 1,
   (char*)"V.GetDataObjectYComponent(int) -> int\nC++: int GetDataObjectYComponent(int i)\n\nSpecify which component of the input data object to use as the\ndependent variable for the ith input data object. (This ivar is\nignored if plotting the index.) Note that the value is\ninterpreted differently depending on DataObjectPlotMode. If the\nmode is Rows, then the value of DataObjectYComponent is the row\nnumber; otherwise it's the column number.\n"},
  {(char*)"SetPlotColor", PyvtkXYPlotActor_SetPlotColor, 1,
   (char*)"V.SetPlotColor(int, float, float, float)\nC++: void SetPlotColor(int i, double r, double g, double b)\nV.SetPlotColor(int, (float, float, float))\nC++: void SetPlotColor(int i, const double color[3])\n\n"},
  {(char*)"GetPlotColor", PyvtkXYPlotActor_GetPlotColor, 1,
   (char*)"V.GetPlotColor(int) -> (float, float, float)\nC++: double *GetPlotColor(int i)\n\n"},
  {(char*)"SetPlotSymbol", PyvtkXYPlotActor_SetPlotSymbol, 1,
   (char*)"V.SetPlotSymbol(int, vtkPolyData)\nC++: void SetPlotSymbol(int i, vtkPolyData *input)\n\n"},
  {(char*)"GetPlotSymbol", PyvtkXYPlotActor_GetPlotSymbol, 1,
   (char*)"V.GetPlotSymbol(int) -> vtkPolyData\nC++: vtkPolyData *GetPlotSymbol(int i)\n\n"},
  {(char*)"SetPlotLabel", PyvtkXYPlotActor_SetPlotLabel, 1,
   (char*)"V.SetPlotLabel(int, string)\nC++: void SetPlotLabel(int i, const char *label)\n\n"},
  {(char*)"GetPlotLabel", PyvtkXYPlotActor_GetPlotLabel, 1,
   (char*)"V.GetPlotLabel(int) -> string\nC++: const char *GetPlotLabel(int i)\n\n"},
  {(char*)"GetPlotCurvePoints", PyvtkXYPlotActor_GetPlotCurvePoints, 1,
   (char*)"V.GetPlotCurvePoints() -> int\nC++: int GetPlotCurvePoints()\n\n"},
  {(char*)"SetPlotCurvePoints", PyvtkXYPlotActor_SetPlotCurvePoints, 1,
   (char*)"V.SetPlotCurvePoints(int)\nC++: void SetPlotCurvePoints(int a)\n\n"},
  {(char*)"PlotCurvePointsOn", PyvtkXYPlotActor_PlotCurvePointsOn, 1,
   (char*)"V.PlotCurvePointsOn()\nC++: void PlotCurvePointsOn()\n\n"},
  {(char*)"PlotCurvePointsOff", PyvtkXYPlotActor_PlotCurvePointsOff, 1,
   (char*)"V.PlotCurvePointsOff()\nC++: void PlotCurvePointsOff()\n\n"},
  {(char*)"GetPlotCurveLines", PyvtkXYPlotActor_GetPlotCurveLines, 1,
   (char*)"V.GetPlotCurveLines() -> int\nC++: int GetPlotCurveLines()\n\n"},
  {(char*)"SetPlotCurveLines", PyvtkXYPlotActor_SetPlotCurveLines, 1,
   (char*)"V.SetPlotCurveLines(int)\nC++: void SetPlotCurveLines(int a)\n\n"},
  {(char*)"PlotCurveLinesOn", PyvtkXYPlotActor_PlotCurveLinesOn, 1,
   (char*)"V.PlotCurveLinesOn()\nC++: void PlotCurveLinesOn()\n\n"},
  {(char*)"PlotCurveLinesOff", PyvtkXYPlotActor_PlotCurveLinesOff, 1,
   (char*)"V.PlotCurveLinesOff()\nC++: void PlotCurveLinesOff()\n\n"},
  {(char*)"SetPlotLines", PyvtkXYPlotActor_SetPlotLines, 1,
   (char*)"V.SetPlotLines(int, int)\nC++: void SetPlotLines(int i, int)\nV.SetPlotLines(int)\nC++: void SetPlotLines(int a)\n\n"},
  {(char*)"GetPlotLines", PyvtkXYPlotActor_GetPlotLines, 1,
   (char*)"V.GetPlotLines(int) -> int\nC++: int GetPlotLines(int i)\nV.GetPlotLines() -> int\nC++: int GetPlotLines()\n\n"},
  {(char*)"SetPlotPoints", PyvtkXYPlotActor_SetPlotPoints, 1,
   (char*)"V.SetPlotPoints(int, int)\nC++: void SetPlotPoints(int i, int)\nV.SetPlotPoints(int)\nC++: void SetPlotPoints(int a)\n\n"},
  {(char*)"GetPlotPoints", PyvtkXYPlotActor_GetPlotPoints, 1,
   (char*)"V.GetPlotPoints(int) -> int\nC++: int GetPlotPoints(int i)\nV.GetPlotPoints() -> int\nC++: int GetPlotPoints()\n\n"},
  {(char*)"SetExchangeAxes", PyvtkXYPlotActor_SetExchangeAxes, 1,
   (char*)"V.SetExchangeAxes(int)\nC++: void SetExchangeAxes(int a)\n\nEnable/Disable exchange of the x-y axes (i.e., what was x becomes\ny, and vice-versa). Exchanging axes affects the labeling as well.\n"},
  {(char*)"GetExchangeAxes", PyvtkXYPlotActor_GetExchangeAxes, 1,
   (char*)"V.GetExchangeAxes() -> int\nC++: int GetExchangeAxes()\n\nEnable/Disable exchange of the x-y axes (i.e., what was x becomes\ny, and vice-versa). Exchanging axes affects the labeling as well.\n"},
  {(char*)"ExchangeAxesOn", PyvtkXYPlotActor_ExchangeAxesOn, 1,
   (char*)"V.ExchangeAxesOn()\nC++: void ExchangeAxesOn()\n\nEnable/Disable exchange of the x-y axes (i.e., what was x becomes\ny, and vice-versa). Exchanging axes affects the labeling as well.\n"},
  {(char*)"ExchangeAxesOff", PyvtkXYPlotActor_ExchangeAxesOff, 1,
   (char*)"V.ExchangeAxesOff()\nC++: void ExchangeAxesOff()\n\nEnable/Disable exchange of the x-y axes (i.e., what was x becomes\ny, and vice-versa). Exchanging axes affects the labeling as well.\n"},
  {(char*)"SetReverseXAxis", PyvtkXYPlotActor_SetReverseXAxis, 1,
   (char*)"V.SetReverseXAxis(int)\nC++: void SetReverseXAxis(int a)\n\nNormally the x-axis is plotted from minimum to maximum. Setting\nthis instance variable causes the x-axis to be plotted from\nmaximum to minimum. Note that boolean always applies to the\nx-axis even if ExchangeAxes is set.\n"},
  {(char*)"GetReverseXAxis", PyvtkXYPlotActor_GetReverseXAxis, 1,
   (char*)"V.GetReverseXAxis() -> int\nC++: int GetReverseXAxis()\n\nNormally the x-axis is plotted from minimum to maximum. Setting\nthis instance variable causes the x-axis to be plotted from\nmaximum to minimum. Note that boolean always applies to the\nx-axis even if ExchangeAxes is set.\n"},
  {(char*)"ReverseXAxisOn", PyvtkXYPlotActor_ReverseXAxisOn, 1,
   (char*)"V.ReverseXAxisOn()\nC++: void ReverseXAxisOn()\n\nNormally the x-axis is plotted from minimum to maximum. Setting\nthis instance variable causes the x-axis to be plotted from\nmaximum to minimum. Note that boolean always applies to the\nx-axis even if ExchangeAxes is set.\n"},
  {(char*)"ReverseXAxisOff", PyvtkXYPlotActor_ReverseXAxisOff, 1,
   (char*)"V.ReverseXAxisOff()\nC++: void ReverseXAxisOff()\n\nNormally the x-axis is plotted from minimum to maximum. Setting\nthis instance variable causes the x-axis to be plotted from\nmaximum to minimum. Note that boolean always applies to the\nx-axis even if ExchangeAxes is set.\n"},
  {(char*)"SetReverseYAxis", PyvtkXYPlotActor_SetReverseYAxis, 1,
   (char*)"V.SetReverseYAxis(int)\nC++: void SetReverseYAxis(int a)\n\nNormally the y-axis is plotted from minimum to maximum. Setting\nthis instance variable causes the y-axis to be plotted from\nmaximum to minimum. Note that boolean always applies to the\ny-axis even if ExchangeAxes is set.\n"},
  {(char*)"GetReverseYAxis", PyvtkXYPlotActor_GetReverseYAxis, 1,
   (char*)"V.GetReverseYAxis() -> int\nC++: int GetReverseYAxis()\n\nNormally the y-axis is plotted from minimum to maximum. Setting\nthis instance variable causes the y-axis to be plotted from\nmaximum to minimum. Note that boolean always applies to the\ny-axis even if ExchangeAxes is set.\n"},
  {(char*)"ReverseYAxisOn", PyvtkXYPlotActor_ReverseYAxisOn, 1,
   (char*)"V.ReverseYAxisOn()\nC++: void ReverseYAxisOn()\n\nNormally the y-axis is plotted from minimum to maximum. Setting\nthis instance variable causes the y-axis to be plotted from\nmaximum to minimum. Note that boolean always applies to the\ny-axis even if ExchangeAxes is set.\n"},
  {(char*)"ReverseYAxisOff", PyvtkXYPlotActor_ReverseYAxisOff, 1,
   (char*)"V.ReverseYAxisOff()\nC++: void ReverseYAxisOff()\n\nNormally the y-axis is plotted from minimum to maximum. Setting\nthis instance variable causes the y-axis to be plotted from\nmaximum to minimum. Note that boolean always applies to the\ny-axis even if ExchangeAxes is set.\n"},
  {(char*)"GetLegendActor", PyvtkXYPlotActor_GetLegendActor, 1,
   (char*)"V.GetLegendActor() -> vtkLegendBoxActor\nC++: vtkLegendBoxActor *GetLegendActor()\n\nRetrieve handles to the legend box and glyph source. This is\nuseful if you would like to change the default behavior of the\nlegend box or glyph source. For example, the default glyph can be\nchanged from a line to a vertex plus line, etc.)\n"},
  {(char*)"GetGlyphSource", PyvtkXYPlotActor_GetGlyphSource, 1,
   (char*)"V.GetGlyphSource() -> vtkGlyphSource2D\nC++: vtkGlyphSource2D *GetGlyphSource()\n\nRetrieve handles to the legend box and glyph source. This is\nuseful if you would like to change the default behavior of the\nlegend box or glyph source. For example, the default glyph can be\nchanged from a line to a vertex plus line, etc.)\n"},
  {(char*)"SetTitle", PyvtkXYPlotActor_SetTitle, 1,
   (char*)"V.SetTitle(string)\nC++: void SetTitle(char *)\n\nSet/Get the title of the x-y plot, and the title along the x and\ny axes.\n"},
  {(char*)"GetTitle", PyvtkXYPlotActor_GetTitle, 1,
   (char*)"V.GetTitle() -> string\nC++: char *GetTitle()\n\nSet/Get the title of the x-y plot, and the title along the x and\ny axes.\n"},
  {(char*)"SetXTitle", PyvtkXYPlotActor_SetXTitle, 1,
   (char*)"V.SetXTitle(string)\nC++: void SetXTitle(char *)\n\nSet/Get the title of the x-y plot, and the title along the x and\ny axes.\n"},
  {(char*)"GetXTitle", PyvtkXYPlotActor_GetXTitle, 1,
   (char*)"V.GetXTitle() -> string\nC++: char *GetXTitle()\n\nSet/Get the title of the x-y plot, and the title along the x and\ny axes.\n"},
  {(char*)"SetYTitle", PyvtkXYPlotActor_SetYTitle, 1,
   (char*)"V.SetYTitle(string)\nC++: void SetYTitle(char *)\n\nSet/Get the title of the x-y plot, and the title along the x and\ny axes.\n"},
  {(char*)"GetYTitle", PyvtkXYPlotActor_GetYTitle, 1,
   (char*)"V.GetYTitle() -> string\nC++: char *GetYTitle()\n\nSet/Get the title of the x-y plot, and the title along the x and\ny axes.\n"},
  {(char*)"GetXAxisActor2D", PyvtkXYPlotActor_GetXAxisActor2D, 1,
   (char*)"V.GetXAxisActor2D() -> vtkAxisActor2D\nC++: vtkAxisActor2D *GetXAxisActor2D()\n\nRetrieve handles to the X and Y axis (so that you can set their\ntext properties for example)\n"},
  {(char*)"GetYAxisActor2D", PyvtkXYPlotActor_GetYAxisActor2D, 1,
   (char*)"V.GetYAxisActor2D() -> vtkAxisActor2D\nC++: vtkAxisActor2D *GetYAxisActor2D()\n\nRetrieve handles to the X and Y axis (so that you can set their\ntext properties for example)\n"},
  {(char*)"SetXRange", PyvtkXYPlotActor_SetXRange, 1,
   (char*)"V.SetXRange(float, float)\nC++: void SetXRange(double, double)\nV.SetXRange((float, float))\nC++: void SetXRange(double a[2])\n\n"},
  {(char*)"GetXRange", PyvtkXYPlotActor_GetXRange, 1,
   (char*)"V.GetXRange() -> (float, float)\nC++: double *GetXRange()\n\nSet the plot range (range of independent and dependent variables)\nto plot. Data outside of the range will be clipped. If the plot\nrange of either the x or y variables is set to (v1,v2), where v1\n== v2, then the range will be computed automatically. Note that\nthe x-range values should be consistent with the way the\nindependent variable is created (via INDEX, DISTANCE, or\nARC_LENGTH).\n"},
  {(char*)"SetYRange", PyvtkXYPlotActor_SetYRange, 1,
   (char*)"V.SetYRange(float, float)\nC++: void SetYRange(double, double)\nV.SetYRange((float, float))\nC++: void SetYRange(double a[2])\n\n"},
  {(char*)"GetYRange", PyvtkXYPlotActor_GetYRange, 1,
   (char*)"V.GetYRange() -> (float, float)\nC++: double *GetYRange()\n\nSet the plot range (range of independent and dependent variables)\nto plot. Data outside of the range will be clipped. If the plot\nrange of either the x or y variables is set to (v1,v2), where v1\n== v2, then the range will be computed automatically. Note that\nthe x-range values should be consistent with the way the\nindependent variable is created (via INDEX, DISTANCE, or\nARC_LENGTH).\n"},
  {(char*)"SetPlotRange", PyvtkXYPlotActor_SetPlotRange, 1,
   (char*)"V.SetPlotRange(float, float, float, float)\nC++: void SetPlotRange(double xmin, double ymin, double xmax,\n    double ymax)\n\nSet the plot range (range of independent and dependent variables)\nto plot. Data outside of the range will be clipped. If the plot\nrange of either the x or y variables is set to (v1,v2), where v1\n== v2, then the range will be computed automatically. Note that\nthe x-range values should be consistent with the way the\nindependent variable is created (via INDEX, DISTANCE, or\nARC_LENGTH).\n"},
  {(char*)"SetNumberOfXLabels", PyvtkXYPlotActor_SetNumberOfXLabels, 1,
   (char*)"V.SetNumberOfXLabels(int)\nC++: void SetNumberOfXLabels(int)\n\nSet/Get the number of annotation labels to show along the x and y\naxes. This values is a suggestion: the number of labels may vary\ndepending on the particulars of the data. The convenience method\nSetNumberOfLables() sets the number of x and y labels to the same\nvalue.\n"},
  {(char*)"GetNumberOfXLabelsMinValue", PyvtkXYPlotActor_GetNumberOfXLabelsMinValue, 1,
   (char*)"V.GetNumberOfXLabelsMinValue() -> int\nC++: int GetNumberOfXLabelsMinValue()\n\nSet/Get the number of annotation labels to show along the x and y\naxes. This values is a suggestion: the number of labels may vary\ndepending on the particulars of the data. The convenience method\nSetNumberOfLables() sets the number of x and y labels to the same\nvalue.\n"},
  {(char*)"GetNumberOfXLabelsMaxValue", PyvtkXYPlotActor_GetNumberOfXLabelsMaxValue, 1,
   (char*)"V.GetNumberOfXLabelsMaxValue() -> int\nC++: int GetNumberOfXLabelsMaxValue()\n\nSet/Get the number of annotation labels to show along the x and y\naxes. This values is a suggestion: the number of labels may vary\ndepending on the particulars of the data. The convenience method\nSetNumberOfLables() sets the number of x and y labels to the same\nvalue.\n"},
  {(char*)"GetNumberOfXLabels", PyvtkXYPlotActor_GetNumberOfXLabels, 1,
   (char*)"V.GetNumberOfXLabels() -> int\nC++: int GetNumberOfXLabels()\n\nSet/Get the number of annotation labels to show along the x and y\naxes. This values is a suggestion: the number of labels may vary\ndepending on the particulars of the data. The convenience method\nSetNumberOfLables() sets the number of x and y labels to the same\nvalue.\n"},
  {(char*)"SetNumberOfYLabels", PyvtkXYPlotActor_SetNumberOfYLabels, 1,
   (char*)"V.SetNumberOfYLabels(int)\nC++: void SetNumberOfYLabels(int)\n\nSet/Get the number of annotation labels to show along the x and y\naxes. This values is a suggestion: the number of labels may vary\ndepending on the particulars of the data. The convenience method\nSetNumberOfLables() sets the number of x and y labels to the same\nvalue.\n"},
  {(char*)"GetNumberOfYLabelsMinValue", PyvtkXYPlotActor_GetNumberOfYLabelsMinValue, 1,
   (char*)"V.GetNumberOfYLabelsMinValue() -> int\nC++: int GetNumberOfYLabelsMinValue()\n\nSet/Get the number of annotation labels to show along the x and y\naxes. This values is a suggestion: the number of labels may vary\ndepending on the particulars of the data. The convenience method\nSetNumberOfLables() sets the number of x and y labels to the same\nvalue.\n"},
  {(char*)"GetNumberOfYLabelsMaxValue", PyvtkXYPlotActor_GetNumberOfYLabelsMaxValue, 1,
   (char*)"V.GetNumberOfYLabelsMaxValue() -> int\nC++: int GetNumberOfYLabelsMaxValue()\n\nSet/Get the number of annotation labels to show along the x and y\naxes. This values is a suggestion: the number of labels may vary\ndepending on the particulars of the data. The convenience method\nSetNumberOfLables() sets the number of x and y labels to the same\nvalue.\n"},
  {(char*)"GetNumberOfYLabels", PyvtkXYPlotActor_GetNumberOfYLabels, 1,
   (char*)"V.GetNumberOfYLabels() -> int\nC++: int GetNumberOfYLabels()\n\nSet/Get the number of annotation labels to show along the x and y\naxes. This values is a suggestion: the number of labels may vary\ndepending on the particulars of the data. The convenience method\nSetNumberOfLables() sets the number of x and y labels to the same\nvalue.\n"},
  {(char*)"SetNumberOfLabels", PyvtkXYPlotActor_SetNumberOfLabels, 1,
   (char*)"V.SetNumberOfLabels(int)\nC++: void SetNumberOfLabels(int num)\n\nSet/Get the number of annotation labels to show along the x and y\naxes. This values is a suggestion: the number of labels may vary\ndepending on the particulars of the data. The convenience method\nSetNumberOfLables() sets the number of x and y labels to the same\nvalue.\n"},
  {(char*)"SetAdjustXLabels", PyvtkXYPlotActor_SetAdjustXLabels, 1,
   (char*)"V.SetAdjustXLabels(int)\nC++: void SetAdjustXLabels(int adjust)\n\nSet/Get the flag that controls whether the labels and ticks are\nadjusted for \"nice\" numerical values to make it easier to read\nthe labels. The adjustment is based in the Range instance\nvariable. Call GetAdjustedRange and GetAdjustedNumberOfLabels to\nget the adjusted range and number of labels.\n"},
  {(char*)"GetAdjustXLabels", PyvtkXYPlotActor_GetAdjustXLabels, 1,
   (char*)"V.GetAdjustXLabels() -> int\nC++: int GetAdjustXLabels()\n\nSet/Get the flag that controls whether the labels and ticks are\nadjusted for \"nice\" numerical values to make it easier to read\nthe labels. The adjustment is based in the Range instance\nvariable. Call GetAdjustedRange and GetAdjustedNumberOfLabels to\nget the adjusted range and number of labels.\n"},
  {(char*)"SetAdjustYLabels", PyvtkXYPlotActor_SetAdjustYLabels, 1,
   (char*)"V.SetAdjustYLabels(int)\nC++: void SetAdjustYLabels(int adjust)\n\nSet/Get the flag that controls whether the labels and ticks are\nadjusted for \"nice\" numerical values to make it easier to read\nthe labels. The adjustment is based in the Range instance\nvariable. Call GetAdjustedRange and GetAdjustedNumberOfLabels to\nget the adjusted range and number of labels.\n"},
  {(char*)"GetAdjustYLabels", PyvtkXYPlotActor_GetAdjustYLabels, 1,
   (char*)"V.GetAdjustYLabels() -> int\nC++: int GetAdjustYLabels()\n\nSet/Get the flag that controls whether the labels and ticks are\nadjusted for \"nice\" numerical values to make it easier to read\nthe labels. The adjustment is based in the Range instance\nvariable. Call GetAdjustedRange and GetAdjustedNumberOfLabels to\nget the adjusted range and number of labels.\n"},
  {(char*)"SetXTitlePosition", PyvtkXYPlotActor_SetXTitlePosition, 1,
   (char*)"V.SetXTitlePosition(float)\nC++: void SetXTitlePosition(double position)\n\nSet/Get the position of the title of X or Y axis.\n"},
  {(char*)"GetXTitlePosition", PyvtkXYPlotActor_GetXTitlePosition, 1,
   (char*)"V.GetXTitlePosition() -> float\nC++: double GetXTitlePosition()\n\nSet/Get the position of the title of X or Y axis.\n"},
  {(char*)"SetYTitlePosition", PyvtkXYPlotActor_SetYTitlePosition, 1,
   (char*)"V.SetYTitlePosition(float)\nC++: void SetYTitlePosition(double position)\n\nSet/Get the position of the title of X or Y axis.\n"},
  {(char*)"GetYTitlePosition", PyvtkXYPlotActor_GetYTitlePosition, 1,
   (char*)"V.GetYTitlePosition() -> float\nC++: double GetYTitlePosition()\n\nSet/Get the position of the title of X or Y axis.\n"},
  {(char*)"SetNumberOfXMinorTicks", PyvtkXYPlotActor_SetNumberOfXMinorTicks, 1,
   (char*)"V.SetNumberOfXMinorTicks(int)\nC++: void SetNumberOfXMinorTicks(int num)\n\nSet/Get the number of minor ticks in X or Y.\n"},
  {(char*)"GetNumberOfXMinorTicks", PyvtkXYPlotActor_GetNumberOfXMinorTicks, 1,
   (char*)"V.GetNumberOfXMinorTicks() -> int\nC++: int GetNumberOfXMinorTicks()\n\nSet/Get the number of minor ticks in X or Y.\n"},
  {(char*)"SetNumberOfYMinorTicks", PyvtkXYPlotActor_SetNumberOfYMinorTicks, 1,
   (char*)"V.SetNumberOfYMinorTicks(int)\nC++: void SetNumberOfYMinorTicks(int num)\n\nSet/Get the number of minor ticks in X or Y.\n"},
  {(char*)"GetNumberOfYMinorTicks", PyvtkXYPlotActor_GetNumberOfYMinorTicks, 1,
   (char*)"V.GetNumberOfYMinorTicks() -> int\nC++: int GetNumberOfYMinorTicks()\n\nSet/Get the number of minor ticks in X or Y.\n"},
  {(char*)"SetLegend", PyvtkXYPlotActor_SetLegend, 1,
   (char*)"V.SetLegend(int)\nC++: void SetLegend(int a)\n\nEnable/Disable the creation of a legend. If on, the legend labels\nwill be created automatically unless the per plot legend symbol\nhas been set.\n"},
  {(char*)"GetLegend", PyvtkXYPlotActor_GetLegend, 1,
   (char*)"V.GetLegend() -> int\nC++: int GetLegend()\n\nEnable/Disable the creation of a legend. If on, the legend labels\nwill be created automatically unless the per plot legend symbol\nhas been set.\n"},
  {(char*)"LegendOn", PyvtkXYPlotActor_LegendOn, 1,
   (char*)"V.LegendOn()\nC++: void LegendOn()\n\nEnable/Disable the creation of a legend. If on, the legend labels\nwill be created automatically unless the per plot legend symbol\nhas been set.\n"},
  {(char*)"LegendOff", PyvtkXYPlotActor_LegendOff, 1,
   (char*)"V.LegendOff()\nC++: void LegendOff()\n\nEnable/Disable the creation of a legend. If on, the legend labels\nwill be created automatically unless the per plot legend symbol\nhas been set.\n"},
  {(char*)"SetTitlePosition", PyvtkXYPlotActor_SetTitlePosition, 1,
   (char*)"V.SetTitlePosition(float, float)\nC++: void SetTitlePosition(double, double)\nV.SetTitlePosition((float, float))\nC++: void SetTitlePosition(double a[2])\n\n"},
  {(char*)"GetTitlePosition", PyvtkXYPlotActor_GetTitlePosition, 1,
   (char*)"V.GetTitlePosition() -> (float, float)\nC++: double *GetTitlePosition()\n\n"},
  {(char*)"SetAdjustTitlePosition", PyvtkXYPlotActor_SetAdjustTitlePosition, 1,
   (char*)"V.SetAdjustTitlePosition(int)\nC++: void SetAdjustTitlePosition(int a)\n\nIf true, the xyplot actor will adjust the position of the title\nautomatically to be upper-middle. Default is true.\n"},
  {(char*)"GetAdjustTitlePosition", PyvtkXYPlotActor_GetAdjustTitlePosition, 1,
   (char*)"V.GetAdjustTitlePosition() -> int\nC++: int GetAdjustTitlePosition()\n\nIf true, the xyplot actor will adjust the position of the title\nautomatically to be upper-middle. Default is true.\n"},
  {(char*)"AdjustTitlePositionOn", PyvtkXYPlotActor_AdjustTitlePositionOn, 1,
   (char*)"V.AdjustTitlePositionOn()\nC++: void AdjustTitlePositionOn()\n\nIf true, the xyplot actor will adjust the position of the title\nautomatically to be upper-middle. Default is true.\n"},
  {(char*)"AdjustTitlePositionOff", PyvtkXYPlotActor_AdjustTitlePositionOff, 1,
   (char*)"V.AdjustTitlePositionOff()\nC++: void AdjustTitlePositionOff()\n\nIf true, the xyplot actor will adjust the position of the title\nautomatically to be upper-middle. Default is true.\n"},
  {(char*)"SetAdjustTitlePositionMode", PyvtkXYPlotActor_SetAdjustTitlePositionMode, 1,
   (char*)"V.SetAdjustTitlePositionMode(int)\nC++: void SetAdjustTitlePositionMode(int a)\n\nIf AdjustTitlePosition is truem, the xyplot actor will adjust the\nposition of the title automatically depending on the given mode,\nthe mode is a combination of the Alignment flags. by default:\nvtkXYPlotActor::AlignHCenter | vtkXYPlotActor::Top |\nvtkXYPlotActor::AlignAxisVCenter\n"},
  {(char*)"GetAdjustTitlePositionMode", PyvtkXYPlotActor_GetAdjustTitlePositionMode, 1,
   (char*)"V.GetAdjustTitlePositionMode() -> int\nC++: int GetAdjustTitlePositionMode()\n\nIf AdjustTitlePosition is truem, the xyplot actor will adjust the\nposition of the title automatically depending on the given mode,\nthe mode is a combination of the Alignment flags. by default:\nvtkXYPlotActor::AlignHCenter | vtkXYPlotActor::Top |\nvtkXYPlotActor::AlignAxisVCenter\n"},
  {(char*)"SetLegendPosition", PyvtkXYPlotActor_SetLegendPosition, 1,
   (char*)"V.SetLegendPosition(float, float)\nC++: void SetLegendPosition(double, double)\nV.SetLegendPosition((float, float))\nC++: void SetLegendPosition(double a[2])\n\n"},
  {(char*)"GetLegendPosition", PyvtkXYPlotActor_GetLegendPosition, 1,
   (char*)"V.GetLegendPosition() -> (float, float)\nC++: double *GetLegendPosition()\n\n"},
  {(char*)"SetLegendPosition2", PyvtkXYPlotActor_SetLegendPosition2, 1,
   (char*)"V.SetLegendPosition2(float, float)\nC++: void SetLegendPosition2(double, double)\nV.SetLegendPosition2((float, float))\nC++: void SetLegendPosition2(double a[2])\n\n"},
  {(char*)"GetLegendPosition2", PyvtkXYPlotActor_GetLegendPosition2, 1,
   (char*)"V.GetLegendPosition2() -> (float, float)\nC++: double *GetLegendPosition2()\n\n"},
  {(char*)"SetTitleTextProperty", PyvtkXYPlotActor_SetTitleTextProperty, 1,
   (char*)"V.SetTitleTextProperty(vtkTextProperty)\nC++: virtual void SetTitleTextProperty(vtkTextProperty *p)\n\nSet/Get the title text property.\n"},
  {(char*)"GetTitleTextProperty", PyvtkXYPlotActor_GetTitleTextProperty, 1,
   (char*)"V.GetTitleTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetTitleTextProperty()\n\nSet/Get the title text property.\n"},
  {(char*)"SetAxisTitleTextProperty", PyvtkXYPlotActor_SetAxisTitleTextProperty, 1,
   (char*)"V.SetAxisTitleTextProperty(vtkTextProperty)\nC++: virtual void SetAxisTitleTextProperty(vtkTextProperty *p)\n\nSet/Get the title text property of all axes. Note that each axis\ncan be controlled individually through the GetX/YAxisActor2D()\nmethods.\n"},
  {(char*)"GetAxisTitleTextProperty", PyvtkXYPlotActor_GetAxisTitleTextProperty, 1,
   (char*)"V.GetAxisTitleTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetAxisTitleTextProperty()\n\nSet/Get the title text property of all axes. Note that each axis\ncan be controlled individually through the GetX/YAxisActor2D()\nmethods.\n"},
  {(char*)"SetAxisLabelTextProperty", PyvtkXYPlotActor_SetAxisLabelTextProperty, 1,
   (char*)"V.SetAxisLabelTextProperty(vtkTextProperty)\nC++: virtual void SetAxisLabelTextProperty(vtkTextProperty *p)\n\nSet/Get the labels text property of all axes. Note that each axis\ncan be controlled individually through the GetX/YAxisActor2D()\nmethods.\n"},
  {(char*)"GetAxisLabelTextProperty", PyvtkXYPlotActor_GetAxisLabelTextProperty, 1,
   (char*)"V.GetAxisLabelTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetAxisLabelTextProperty()\n\nSet/Get the labels text property of all axes. Note that each axis\ncan be controlled individually through the GetX/YAxisActor2D()\nmethods.\n"},
  {(char*)"SetLogx", PyvtkXYPlotActor_SetLogx, 1,
   (char*)"V.SetLogx(int)\nC++: void SetLogx(int a)\n\nEnable/Disable plotting of Log of x-values.\n"},
  {(char*)"GetLogx", PyvtkXYPlotActor_GetLogx, 1,
   (char*)"V.GetLogx() -> int\nC++: int GetLogx()\n\nEnable/Disable plotting of Log of x-values.\n"},
  {(char*)"LogxOn", PyvtkXYPlotActor_LogxOn, 1,
   (char*)"V.LogxOn()\nC++: void LogxOn()\n\nEnable/Disable plotting of Log of x-values.\n"},
  {(char*)"LogxOff", PyvtkXYPlotActor_LogxOff, 1,
   (char*)"V.LogxOff()\nC++: void LogxOff()\n\nEnable/Disable plotting of Log of x-values.\n"},
  {(char*)"SetLabelFormat", PyvtkXYPlotActor_SetLabelFormat, 1,
   (char*)"V.SetLabelFormat(string)\nC++: virtual void SetLabelFormat(const char *_arg)\n\nSet/Get the format with which to print the labels . This sets\nboth X and Y label formats. GetLabelFormat() returns X label\nformat.\n"},
  {(char*)"GetLabelFormat", PyvtkXYPlotActor_GetLabelFormat, 1,
   (char*)"V.GetLabelFormat() -> string\nC++: const char *GetLabelFormat()\n\nSet/Get the format with which to print the labels . This sets\nboth X and Y label formats. GetLabelFormat() returns X label\nformat.\n"},
  {(char*)"SetXLabelFormat", PyvtkXYPlotActor_SetXLabelFormat, 1,
   (char*)"V.SetXLabelFormat(string)\nC++: virtual void SetXLabelFormat(const char *_arg)\n\nSet/Get the format with which to print the X label.\n"},
  {(char*)"GetXLabelFormat", PyvtkXYPlotActor_GetXLabelFormat, 1,
   (char*)"V.GetXLabelFormat() -> string\nC++: char *GetXLabelFormat()\n\nSet/Get the format with which to print the X label.\n"},
  {(char*)"SetYLabelFormat", PyvtkXYPlotActor_SetYLabelFormat, 1,
   (char*)"V.SetYLabelFormat(string)\nC++: virtual void SetYLabelFormat(const char *_arg)\n\nSet/Get the format with which to print the Y label.\n"},
  {(char*)"GetYLabelFormat", PyvtkXYPlotActor_GetYLabelFormat, 1,
   (char*)"V.GetYLabelFormat() -> string\nC++: char *GetYLabelFormat()\n\nSet/Get the format with which to print the Y label.\n"},
  {(char*)"SetBorder", PyvtkXYPlotActor_SetBorder, 1,
   (char*)"V.SetBorder(int)\nC++: void SetBorder(int)\n\nSet/Get the spacing between the plot window and the plot. The\nvalue is specified in pixels.\n"},
  {(char*)"GetBorderMinValue", PyvtkXYPlotActor_GetBorderMinValue, 1,
   (char*)"V.GetBorderMinValue() -> int\nC++: int GetBorderMinValue()\n\nSet/Get the spacing between the plot window and the plot. The\nvalue is specified in pixels.\n"},
  {(char*)"GetBorderMaxValue", PyvtkXYPlotActor_GetBorderMaxValue, 1,
   (char*)"V.GetBorderMaxValue() -> int\nC++: int GetBorderMaxValue()\n\nSet/Get the spacing between the plot window and the plot. The\nvalue is specified in pixels.\n"},
  {(char*)"GetBorder", PyvtkXYPlotActor_GetBorder, 1,
   (char*)"V.GetBorder() -> int\nC++: int GetBorder()\n\nSet/Get the spacing between the plot window and the plot. The\nvalue is specified in pixels.\n"},
  {(char*)"PlotPointsOn", PyvtkXYPlotActor_PlotPointsOn, 1,
   (char*)"V.PlotPointsOn()\nC++: void PlotPointsOn()\n\nSet/Get whether the points are rendered.  The point size can be\nset in the property object. This is a global flag which affects\nthe plot only if per curve symbols are not defined.\n"},
  {(char*)"PlotPointsOff", PyvtkXYPlotActor_PlotPointsOff, 1,
   (char*)"V.PlotPointsOff()\nC++: void PlotPointsOff()\n\nSet/Get whether the points are rendered.  The point size can be\nset in the property object. This is a global flag which affects\nthe plot only if per curve symbols are not defined.\n"},
  {(char*)"PlotLinesOn", PyvtkXYPlotActor_PlotLinesOn, 1,
   (char*)"V.PlotLinesOn()\nC++: void PlotLinesOn()\n\nSet/Get whether the lines are rendered.  The line width can be\nset in the property object.\n"},
  {(char*)"PlotLinesOff", PyvtkXYPlotActor_PlotLinesOff, 1,
   (char*)"V.PlotLinesOff()\nC++: void PlotLinesOff()\n\nSet/Get whether the lines are rendered.  The line width can be\nset in the property object.\n"},
  {(char*)"SetGlyphSize", PyvtkXYPlotActor_SetGlyphSize, 1,
   (char*)"V.SetGlyphSize(float)\nC++: void SetGlyphSize(double)\n\nSet/Get the factor that controls how big glyphs are in the plot.\nThe number is expressed as a fraction of the length of the\ndiagonal of the plot bounding box.\n"},
  {(char*)"GetGlyphSizeMinValue", PyvtkXYPlotActor_GetGlyphSizeMinValue, 1,
   (char*)"V.GetGlyphSizeMinValue() -> float\nC++: double GetGlyphSizeMinValue()\n\nSet/Get the factor that controls how big glyphs are in the plot.\nThe number is expressed as a fraction of the length of the\ndiagonal of the plot bounding box.\n"},
  {(char*)"GetGlyphSizeMaxValue", PyvtkXYPlotActor_GetGlyphSizeMaxValue, 1,
   (char*)"V.GetGlyphSizeMaxValue() -> float\nC++: double GetGlyphSizeMaxValue()\n\nSet/Get the factor that controls how big glyphs are in the plot.\nThe number is expressed as a fraction of the length of the\ndiagonal of the plot bounding box.\n"},
  {(char*)"GetGlyphSize", PyvtkXYPlotActor_GetGlyphSize, 1,
   (char*)"V.GetGlyphSize() -> float\nC++: double GetGlyphSize()\n\nSet/Get the factor that controls how big glyphs are in the plot.\nThe number is expressed as a fraction of the length of the\ndiagonal of the plot bounding box.\n"},
  {(char*)"ViewportToPlotCoordinate", PyvtkXYPlotActor_ViewportToPlotCoordinate, 1,
   (char*)"V.ViewportToPlotCoordinate(vtkViewport, float, float)\nC++: void ViewportToPlotCoordinate(vtkViewport *viewport,\n    double &u, double &v)\nV.ViewportToPlotCoordinate(vtkViewport)\nC++: void ViewportToPlotCoordinate(vtkViewport *viewport)\n\nGiven a position within the viewport used by the plot, return the\nthe plot coordinates (XAxis value, YAxis value)\n"},
  {(char*)"SetPlotCoordinate", PyvtkXYPlotActor_SetPlotCoordinate, 1,
   (char*)"V.SetPlotCoordinate(float, float)\nC++: void SetPlotCoordinate(double, double)\nV.SetPlotCoordinate((float, float))\nC++: void SetPlotCoordinate(double a[2])\n\n"},
  {(char*)"GetPlotCoordinate", PyvtkXYPlotActor_GetPlotCoordinate, 1,
   (char*)"V.GetPlotCoordinate() -> (float, float)\nC++: double *GetPlotCoordinate()\n\n"},
  {(char*)"PlotToViewportCoordinate", PyvtkXYPlotActor_PlotToViewportCoordinate, 1,
   (char*)"V.PlotToViewportCoordinate(vtkViewport, float, float)\nC++: void PlotToViewportCoordinate(vtkViewport *viewport,\n    double &u, double &v)\nV.PlotToViewportCoordinate(vtkViewport)\nC++: void PlotToViewportCoordinate(vtkViewport *viewport)\n\nGiven a plot coordinate, return the viewpoint position\n"},
  {(char*)"SetViewportCoordinate", PyvtkXYPlotActor_SetViewportCoordinate, 1,
   (char*)"V.SetViewportCoordinate(float, float)\nC++: void SetViewportCoordinate(double, double)\nV.SetViewportCoordinate((float, float))\nC++: void SetViewportCoordinate(double a[2])\n\n"},
  {(char*)"GetViewportCoordinate", PyvtkXYPlotActor_GetViewportCoordinate, 1,
   (char*)"V.GetViewportCoordinate() -> (float, float)\nC++: double *GetViewportCoordinate()\n\n"},
  {(char*)"IsInPlot", PyvtkXYPlotActor_IsInPlot, 1,
   (char*)"V.IsInPlot(vtkViewport, float, float) -> int\nC++: int IsInPlot(vtkViewport *viewport, double u, double v)\n\nIs the specified viewport position within the plot area (as\nopposed to the region used by the plot plus the labels)?\n"},
  {(char*)"SetChartBox", PyvtkXYPlotActor_SetChartBox, 1,
   (char*)"V.SetChartBox(int)\nC++: void SetChartBox(int a)\n\nSet/Get the flag that controls whether a box will be drawn/filled\ncorresponding to the chart box.\n"},
  {(char*)"GetChartBox", PyvtkXYPlotActor_GetChartBox, 1,
   (char*)"V.GetChartBox() -> int\nC++: int GetChartBox()\n\nSet/Get the flag that controls whether a box will be drawn/filled\ncorresponding to the chart box.\n"},
  {(char*)"ChartBoxOn", PyvtkXYPlotActor_ChartBoxOn, 1,
   (char*)"V.ChartBoxOn()\nC++: void ChartBoxOn()\n\nSet/Get the flag that controls whether a box will be drawn/filled\ncorresponding to the chart box.\n"},
  {(char*)"ChartBoxOff", PyvtkXYPlotActor_ChartBoxOff, 1,
   (char*)"V.ChartBoxOff()\nC++: void ChartBoxOff()\n\nSet/Get the flag that controls whether a box will be drawn/filled\ncorresponding to the chart box.\n"},
  {(char*)"SetChartBorder", PyvtkXYPlotActor_SetChartBorder, 1,
   (char*)"V.SetChartBorder(int)\nC++: void SetChartBorder(int a)\n\nSet/Get the flag that controls whether a box will be drawn/filled\ncorresponding to the legend box.\n"},
  {(char*)"GetChartBorder", PyvtkXYPlotActor_GetChartBorder, 1,
   (char*)"V.GetChartBorder() -> int\nC++: int GetChartBorder()\n\nSet/Get the flag that controls whether a box will be drawn/filled\ncorresponding to the legend box.\n"},
  {(char*)"ChartBorderOn", PyvtkXYPlotActor_ChartBorderOn, 1,
   (char*)"V.ChartBorderOn()\nC++: void ChartBorderOn()\n\nSet/Get the flag that controls whether a box will be drawn/filled\ncorresponding to the legend box.\n"},
  {(char*)"ChartBorderOff", PyvtkXYPlotActor_ChartBorderOff, 1,
   (char*)"V.ChartBorderOff()\nC++: void ChartBorderOff()\n\nSet/Get the flag that controls whether a box will be drawn/filled\ncorresponding to the legend box.\n"},
  {(char*)"GetChartBoxProperty", PyvtkXYPlotActor_GetChartBoxProperty, 1,
   (char*)"V.GetChartBoxProperty() -> vtkProperty2D\nC++: vtkProperty2D *GetChartBoxProperty()\n\nGet the box vtkProperty2D.\n"},
  {(char*)"SetShowReferenceXLine", PyvtkXYPlotActor_SetShowReferenceXLine, 1,
   (char*)"V.SetShowReferenceXLine(int)\nC++: void SetShowReferenceXLine(int a)\n\nSet/Get if the X reference line is visible. hidden by default\n"},
  {(char*)"GetShowReferenceXLine", PyvtkXYPlotActor_GetShowReferenceXLine, 1,
   (char*)"V.GetShowReferenceXLine() -> int\nC++: int GetShowReferenceXLine()\n\nSet/Get if the X reference line is visible. hidden by default\n"},
  {(char*)"ShowReferenceXLineOn", PyvtkXYPlotActor_ShowReferenceXLineOn, 1,
   (char*)"V.ShowReferenceXLineOn()\nC++: void ShowReferenceXLineOn()\n\nSet/Get if the X reference line is visible. hidden by default\n"},
  {(char*)"ShowReferenceXLineOff", PyvtkXYPlotActor_ShowReferenceXLineOff, 1,
   (char*)"V.ShowReferenceXLineOff()\nC++: void ShowReferenceXLineOff()\n\nSet/Get if the X reference line is visible. hidden by default\n"},
  {(char*)"SetReferenceXValue", PyvtkXYPlotActor_SetReferenceXValue, 1,
   (char*)"V.SetReferenceXValue(float)\nC++: void SetReferenceXValue(double a)\n\n"},
  {(char*)"GetReferenceXValue", PyvtkXYPlotActor_GetReferenceXValue, 1,
   (char*)"V.GetReferenceXValue() -> float\nC++: double GetReferenceXValue()\n\n"},
  {(char*)"SetShowReferenceYLine", PyvtkXYPlotActor_SetShowReferenceYLine, 1,
   (char*)"V.SetShowReferenceYLine(int)\nC++: void SetShowReferenceYLine(int a)\n\nSet/Get if the Y reference line is visible. hidden by default\n"},
  {(char*)"GetShowReferenceYLine", PyvtkXYPlotActor_GetShowReferenceYLine, 1,
   (char*)"V.GetShowReferenceYLine() -> int\nC++: int GetShowReferenceYLine()\n\nSet/Get if the Y reference line is visible. hidden by default\n"},
  {(char*)"ShowReferenceYLineOn", PyvtkXYPlotActor_ShowReferenceYLineOn, 1,
   (char*)"V.ShowReferenceYLineOn()\nC++: void ShowReferenceYLineOn()\n\nSet/Get if the Y reference line is visible. hidden by default\n"},
  {(char*)"ShowReferenceYLineOff", PyvtkXYPlotActor_ShowReferenceYLineOff, 1,
   (char*)"V.ShowReferenceYLineOff()\nC++: void ShowReferenceYLineOff()\n\nSet/Get if the Y reference line is visible. hidden by default\n"},
  {(char*)"SetReferenceYValue", PyvtkXYPlotActor_SetReferenceYValue, 1,
   (char*)"V.SetReferenceYValue(float)\nC++: void SetReferenceYValue(double a)\n\n"},
  {(char*)"GetReferenceYValue", PyvtkXYPlotActor_GetReferenceYValue, 1,
   (char*)"V.GetReferenceYValue() -> float\nC++: double GetReferenceYValue()\n\n"},
  {(char*)"GetMTime", PyvtkXYPlotActor_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nTake into account the modified time of internal helper classes.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkXYPlotActor_RenderOpaqueGeometry, 1,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS. Draw the x-y\nplot.\n"},
  {(char*)"RenderOverlay", PyvtkXYPlotActor_RenderOverlay, 1,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS. Draw the x-y\nplot.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkXYPlotActor_RenderTranslucentPolygonalGeometry, 1,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(vtkViewport *)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS. Draw the x-y\nplot.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkXYPlotActor_HasTranslucentPolygonalGeometry, 1,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkXYPlotActor_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXYPlotActor_StaticNew()
{
  return vtkXYPlotActor::New();
}

PyObject *PyVTKClass_vtkXYPlotActorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXYPlotActor_StaticNew,
    PyvtkXYPlotActor_Methods,
    "vtkXYPlotActor", modulename,
    NULL, NULL,
    PyvtkXYPlotActor_Doc(),
    PyVTKClass_vtkActor2DNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0x1);
    if (o && PyDict_SetItemString(d, (char *)"AlignLeft", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0x2);
    if (o && PyDict_SetItemString(d, (char *)"AlignRight", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0x4);
    if (o && PyDict_SetItemString(d, (char *)"AlignHCenter", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0x10);
    if (o && PyDict_SetItemString(d, (char *)"AlignTop", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0x20);
    if (o && PyDict_SetItemString(d, (char *)"AlignBottom", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0x40);
    if (o && PyDict_SetItemString(d, (char *)"AlignVCenter", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0x100);
    if (o && PyDict_SetItemString(d, (char *)"AlignAxisLeft", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0x200);
    if (o && PyDict_SetItemString(d, (char *)"AlignAxisRight", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0x400);
    if (o && PyDict_SetItemString(d, (char *)"AlignAxisHCenter", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0x1000);
    if (o && PyDict_SetItemString(d, (char *)"AlignAxisTop", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0x2000);
    if (o && PyDict_SetItemString(d, (char *)"AlignAxisBottom", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0x4000);
    if (o && PyDict_SetItemString(d, (char *)"AlignAxisVCenter", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkXYPlotActor_Doc()
{
  static const char *docstring[] = {
    "vtkXYPlotActor - generate an x-y plot from input dataset(s) or field\ndata\n\n",
    "Superclass: vtkActor2D\n\n",
    "vtkXYPlotActor creates an x-y plot of data from one or more input\ndata sets or field data. The class plots dataset scalar values\n(y-axis) against the points (x-axis). The x-axis values are generated\nby taking the point ids, computing a cumulative arc length, or a\nnormalized arc length. More than one input data set can be specified\nto generate multiple plots. Alternatively, if field data is supplie",
    "d\nas input, the class plots one component against another. (The user\nmust specify which component to use as the x-axis and which for the\ny-axis.)\n\nTo use this class to plot dataset(s), you must specify one or more\ninput datasets containing scalar and point data.  You'll probably\nalso want to invoke a method to control how the point coordinates are\nconverted into x values (by default point ids are ",
    "used).\n\nTo use this class to plot field data, you must specify one or more\ninput data objects with its associated field data. You'll also want\nto specify which component to use as the x-axis and which to use as\nthe y-axis. Note that when plotting field data, the x and y values\nare used directly (i.e., there are no options to normalize the\ncomponents).\n\nOnce you've set up the plot, you'll want to p",
    "osition it.  The\nPositionCoordinate defines the lower-left location of the x-y plot\n(specified in normalized viewport coordinates) and the\nPosition2Coordinate define the upper-right corner. (Note: the\nPosition2Coordinate is relative to PositionCoordinate, so you can\nmove the vtkXYPlotActor around the viewport by setting just the\nPositionCoordinate.) The combination of the two position coordinates\n",
    "specifies a rectangle in which the plot will lie.\n\nOptional features include the ability to specify axes labels, label\nformat and plot title. You can also manually specify the x and y plot\nranges (by default they are computed automatically). The Border\ninstance variable is used to create space between the boundary of the\nplot window (specified by PositionCoordinate and Position2Coordinate)\nand the",
    " plot itself.\n\nThe font property of the plot title can be modified through the\nTitleTextProperty attribute. The font property of the axes titles and\nlabels can be modified through the AxisTitleTextProperty and\nAxisLabelTextProperty attributes. You may also use the\nGetXAxisActor2D or GetYAxisActor2D methods to access each individual\naxis actor to modify their font properties. In the same way, the\nG",
    "etLegendBoxActor method can be used to access the legend box actor\nto modify its font properties.\n\nThere are several advanced features as well. You can assign per curve\nproperties (such as color and a plot symbol). (Note that each input\ndataset and/or data object creates a single curve.) Another option is\nto add a plot legend that graphically indicates the correspondance\nbetween the curve, curve s",
    "ymbols, and the data source. You can also\nexchange the x and y axes if you prefer you plot orientation that\nway.\n\nCaveats:\n\nIf you are interested in plotting something other than scalar data,\nyou can use the vtk data shuffling filters (e.g.,\nvtkAttributeDataToFieldDataFilter and\nvtkFieldDataToAttributeDataFilter) to convert the data into scalar\ndata and/or points.\n\nSee Also:\n\nvtkActor2D vtkTextMap",
    "per vtkScalarBarActor vtkAxisActor2D\nvtkCubeAxesActor2D vtkAttributeDataToFieldDataFilter\nvtkFieldDataToAttributeDataFilter vtkTextProperty\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXYPlotActor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXYPlotActorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXYPlotActor", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_XYPLOT_INDEX", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_XYPLOT_ARC_LENGTH", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_XYPLOT_NORMALIZED_ARC_LENGTH", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(3);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_XYPLOT_VALUE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_XYPLOT_ROW", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_XYPLOT_COLUMN", o) != 0)
    {
    Py_DECREF(o);
    }

}

