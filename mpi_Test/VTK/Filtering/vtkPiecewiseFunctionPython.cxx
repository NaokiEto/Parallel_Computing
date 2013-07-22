// python wrapper for vtkPiecewiseFunction
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
#include "vtkPiecewiseFunction.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPiecewiseFunction(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPiecewiseFunction(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPiecewiseFunctionNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPiecewiseFunctionNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataObjectNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectNew
#endif

static const char **PyvtkPiecewiseFunction_Doc();


static PyObject *
PyvtkPiecewiseFunction_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

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
      tempr = op->vtkPiecewiseFunction::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

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
      tempr = op->vtkPiecewiseFunction::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  vtkPiecewiseFunction *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPiecewiseFunction::NewInstance();
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
PyvtkPiecewiseFunction_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPiecewiseFunction *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPiecewiseFunction::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkPiecewiseFunction::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkPiecewiseFunction::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataObjectType();
      }
    else
      {
      tempr = op->vtkPiecewiseFunction::GetDataObjectType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSize();
      }
    else
      {
      tempr = op->vtkPiecewiseFunction::GetSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_AddPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  double temp0;
  double temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->AddPoint(temp0, temp1);
      }
    else
      {
      tempr = op->vtkPiecewiseFunction::AddPoint(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPiecewiseFunction_AddPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      tempr = op->AddPoint(temp0, temp1, temp2, temp3);
      }
    else
      {
      tempr = op->vtkPiecewiseFunction::AddPoint(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPiecewiseFunction_AddPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkPiecewiseFunction_AddPoint_s1(self, args);
    case 4:
      return PyvtkPiecewiseFunction_AddPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddPoint");
  return NULL;
}



static PyObject *
PyvtkPiecewiseFunction_RemovePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  double temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->RemovePoint(temp0);
      }
    else
      {
      tempr = op->vtkPiecewiseFunction::RemovePoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_RemoveAllPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllPoints();
      }
    else
      {
      op->vtkPiecewiseFunction::RemoveAllPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_AddSegment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSegment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

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
      op->AddSegment(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPiecewiseFunction::AddSegment(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  double temp0;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetValue(temp0);
      }
    else
      {
      tempr = op->vtkPiecewiseFunction::GetValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_GetNodeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  int temp0;
  double temp1[4];
  double save1[4];
  const int size1 = 4;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      tempr = op->GetNodeValue(temp0, temp1);
      }
    else
      {
      tempr = op->vtkPiecewiseFunction::GetNodeValue(temp0, temp1);
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
PyvtkPiecewiseFunction_SetNodeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNodeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  int temp0;
  double temp1[4];
  double save1[4];
  const int size1 = 4;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      tempr = op->SetNodeValue(temp0, temp1);
      }
    else
      {
      tempr = op->vtkPiecewiseFunction::SetNodeValue(temp0, temp1);
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
PyvtkPiecewiseFunction_GetRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRange();
      }
    else
      {
      tempr = op->vtkPiecewiseFunction::GetRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_AdjustRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdjustRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      tempr = op->AdjustRange(temp0);
      }
    else
      {
      tempr = op->vtkPiecewiseFunction::AdjustRange(temp0);
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
PyvtkPiecewiseFunction_SetClamping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClamping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetClamping(temp0);
      }
    else
      {
      op->vtkPiecewiseFunction::SetClamping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_GetClamping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClamping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetClamping();
      }
    else
      {
      tempr = op->vtkPiecewiseFunction::GetClamping();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_ClampingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClampingOn();
      }
    else
      {
      op->vtkPiecewiseFunction::ClampingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_ClampingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClampingOff();
      }
    else
      {
      op->vtkPiecewiseFunction::ClampingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_GetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetType();
      }
    else
      {
      tempr = op->vtkPiecewiseFunction::GetType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_GetFirstNonZeroValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFirstNonZeroValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFirstNonZeroValue();
      }
    else
      {
      tempr = op->vtkPiecewiseFunction::GetFirstNonZeroValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkPiecewiseFunction::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = NULL;
  vtkPiecewiseFunction *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    tempr = vtkPiecewiseFunction::GetData(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPiecewiseFunction_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = NULL;
  int temp1 = 0;
  vtkPiecewiseFunction *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    tempr = vtkPiecewiseFunction::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPiecewiseFunction_GetData_Methods[] = {
  {NULL, PyvtkPiecewiseFunction_GetData_s1, 1,
   (char*)"O *vtkInformation"},
  {NULL, PyvtkPiecewiseFunction_GetData_s2, 1,
   (char*)"O|i *vtkInformationVector"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPiecewiseFunction_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPiecewiseFunction_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkPiecewiseFunction_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return NULL;
}



static PyObject *
PyvtkPiecewiseFunction_SetAllowDuplicateScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllowDuplicateScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAllowDuplicateScalars(temp0);
      }
    else
      {
      op->vtkPiecewiseFunction::SetAllowDuplicateScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_GetAllowDuplicateScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllowDuplicateScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAllowDuplicateScalars();
      }
    else
      {
      tempr = op->vtkPiecewiseFunction::GetAllowDuplicateScalars();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_AllowDuplicateScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowDuplicateScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllowDuplicateScalarsOn();
      }
    else
      {
      op->vtkPiecewiseFunction::AllowDuplicateScalarsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_AllowDuplicateScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowDuplicateScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllowDuplicateScalarsOff();
      }
    else
      {
      op->vtkPiecewiseFunction::AllowDuplicateScalarsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPiecewiseFunction_Methods[] = {
  {(char*)"GetClassName", PyvtkPiecewiseFunction_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPiecewiseFunction_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPiecewiseFunction_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPiecewiseFunction\nC++: vtkPiecewiseFunction *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPiecewiseFunction_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPiecewiseFunction\nC++: vtkPiecewiseFunction *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"DeepCopy", PyvtkPiecewiseFunction_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkDataObject)\nC++: void DeepCopy(vtkDataObject *f)\n\n"},
  {(char*)"ShallowCopy", PyvtkPiecewiseFunction_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkDataObject)\nC++: void ShallowCopy(vtkDataObject *f)\n\n"},
  {(char*)"GetDataObjectType", PyvtkPiecewiseFunction_GetDataObjectType, 1,
   (char*)"V.GetDataObjectType() -> int\nC++: int GetDataObjectType()\n\nReturn what type of dataset this is.\n"},
  {(char*)"GetSize", PyvtkPiecewiseFunction_GetSize, 1,
   (char*)"V.GetSize() -> int\nC++: int GetSize()\n\nGet the number of points used to specify the function\n"},
  {(char*)"AddPoint", PyvtkPiecewiseFunction_AddPoint, 1,
   (char*)"V.AddPoint(float, float) -> int\nC++: int AddPoint(double x, double y)\nV.AddPoint(float, float, float, float) -> int\nC++: int AddPoint(double x, double y, double midpoint,\n    double sharpness)\n\nAdd/Remove points to/from the function. If a duplicate point is\nadded then the function value is changed at that location. Return\nthe index of the point (0 based), or -1 on error.\n"},
  {(char*)"RemovePoint", PyvtkPiecewiseFunction_RemovePoint, 1,
   (char*)"V.RemovePoint(float) -> int\nC++: int RemovePoint(double x)\n\nAdd/Remove points to/from the function. If a duplicate point is\nadded then the function value is changed at that location. Return\nthe index of the point (0 based), or -1 on error.\n"},
  {(char*)"RemoveAllPoints", PyvtkPiecewiseFunction_RemoveAllPoints, 1,
   (char*)"V.RemoveAllPoints()\nC++: void RemoveAllPoints()\n\nRemoves all points from the function.\n"},
  {(char*)"AddSegment", PyvtkPiecewiseFunction_AddSegment, 1,
   (char*)"V.AddSegment(float, float, float, float)\nC++: void AddSegment(double x1, double y1, double x2, double y2)\n\nAdd a line segment to the function. All points defined between\nthe two points specified are removed from the function. This is a\nlegacy method that does not allow the specification of the\nsharpness and midpoint values for the two nodes.\n"},
  {(char*)"GetValue", PyvtkPiecewiseFunction_GetValue, 1,
   (char*)"V.GetValue(float) -> float\nC++: double GetValue(double x)\n\nReturns the value of the function at the specified location using\nthe specified interpolation.\n"},
  {(char*)"GetNodeValue", PyvtkPiecewiseFunction_GetNodeValue, 1,
   (char*)"V.GetNodeValue(int, [float, float, float, float]) -> int\nC++: int GetNodeValue(int index, double val[4])\n\nFor the node specified by index, set/get the location (X), value\n(Y), midpoint, and sharpness values at the node.\n"},
  {(char*)"SetNodeValue", PyvtkPiecewiseFunction_SetNodeValue, 1,
   (char*)"V.SetNodeValue(int, [float, float, float, float]) -> int\nC++: int SetNodeValue(int index, double val[4])\n\nFor the node specified by index, set/get the location (X), value\n(Y), midpoint, and sharpness values at the node.\n"},
  {(char*)"GetRange", PyvtkPiecewiseFunction_GetRange, 1,
   (char*)"V.GetRange() -> (float, float)\nC++: double *GetRange()\n\n"},
  {(char*)"AdjustRange", PyvtkPiecewiseFunction_AdjustRange, 1,
   (char*)"V.AdjustRange([float, float]) -> int\nC++: int AdjustRange(double range[2])\n\nRemove all points out of the new range, and make sure there is a\npoint at each end of that range. Return 1 on success, 0\notherwise.\n"},
  {(char*)"SetClamping", PyvtkPiecewiseFunction_SetClamping, 1,
   (char*)"V.SetClamping(int)\nC++: void SetClamping(int a)\n\nWhen zero range clamping is Off, GetValue() returns 0.0 when a\nvalue is requested outside of the points specified. When zero\nrange clamping is On, GetValue() returns the value at the value\nat the lowest point for a request below all points specified and\nreturns the value at the highest point for a request above all\npoints specified. On is the default.\n"},
  {(char*)"GetClamping", PyvtkPiecewiseFunction_GetClamping, 1,
   (char*)"V.GetClamping() -> int\nC++: int GetClamping()\n\nWhen zero range clamping is Off, GetValue() returns 0.0 when a\nvalue is requested outside of the points specified. When zero\nrange clamping is On, GetValue() returns the value at the value\nat the lowest point for a request below all points specified and\nreturns the value at the highest point for a request above all\npoints specified. On is the default.\n"},
  {(char*)"ClampingOn", PyvtkPiecewiseFunction_ClampingOn, 1,
   (char*)"V.ClampingOn()\nC++: void ClampingOn()\n\nWhen zero range clamping is Off, GetValue() returns 0.0 when a\nvalue is requested outside of the points specified. When zero\nrange clamping is On, GetValue() returns the value at the value\nat the lowest point for a request below all points specified and\nreturns the value at the highest point for a request above all\npoints specified. On is the default.\n"},
  {(char*)"ClampingOff", PyvtkPiecewiseFunction_ClampingOff, 1,
   (char*)"V.ClampingOff()\nC++: void ClampingOff()\n\nWhen zero range clamping is Off, GetValue() returns 0.0 when a\nvalue is requested outside of the points specified. When zero\nrange clamping is On, GetValue() returns the value at the value\nat the lowest point for a request below all points specified and\nreturns the value at the highest point for a request above all\npoints specified. On is the default.\n"},
  {(char*)"GetType", PyvtkPiecewiseFunction_GetType, 1,
   (char*)"V.GetType() -> string\nC++: const char *GetType()\n\nReturn the type of function: Function Types:\n   0 : Constant        (No change in slope between end points)\n   1 : NonDecreasing   (Always increasing or zero slope)\n   2 : NonIncreasing   (Always decreasing or zero slope)\n   3 : Varied          (Contains both decreasing and increasing\nslopes)\n"},
  {(char*)"GetFirstNonZeroValue", PyvtkPiecewiseFunction_GetFirstNonZeroValue, 1,
   (char*)"V.GetFirstNonZeroValue() -> float\nC++: double GetFirstNonZeroValue()\n\nReturns the first point location which precedes a non-zero\nsegment of the function. Note that the value at this point may be\nzero.\n"},
  {(char*)"Initialize", PyvtkPiecewiseFunction_Initialize, 1,
   (char*)"V.Initialize()\nC++: void Initialize()\n\nClears out the current function. A newly created\nvtkPiecewiseFunction is alreay initialized, so there is no need\nto call this method which in turn simply calls RemoveAllPoints()\n"},
  {(char*)"GetData", PyvtkPiecewiseFunction_GetData, 1,
   (char*)"V.GetData(vtkInformation) -> vtkPiecewiseFunction\nC++: static vtkPiecewiseFunction *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkPiecewiseFunction\nC++: static vtkPiecewiseFunction *GetData(vtkInformationVector *v,\n     int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {(char*)"SetAllowDuplicateScalars", PyvtkPiecewiseFunction_SetAllowDuplicateScalars, 1,
   (char*)"V.SetAllowDuplicateScalars(int)\nC++: void SetAllowDuplicateScalars(int a)\n\nToggle whether to allow duplicate scalar values in the piecewise\nfunction (off by default).\n"},
  {(char*)"GetAllowDuplicateScalars", PyvtkPiecewiseFunction_GetAllowDuplicateScalars, 1,
   (char*)"V.GetAllowDuplicateScalars() -> int\nC++: int GetAllowDuplicateScalars()\n\nToggle whether to allow duplicate scalar values in the piecewise\nfunction (off by default).\n"},
  {(char*)"AllowDuplicateScalarsOn", PyvtkPiecewiseFunction_AllowDuplicateScalarsOn, 1,
   (char*)"V.AllowDuplicateScalarsOn()\nC++: void AllowDuplicateScalarsOn()\n\nToggle whether to allow duplicate scalar values in the piecewise\nfunction (off by default).\n"},
  {(char*)"AllowDuplicateScalarsOff", PyvtkPiecewiseFunction_AllowDuplicateScalarsOff, 1,
   (char*)"V.AllowDuplicateScalarsOff()\nC++: void AllowDuplicateScalarsOff()\n\nToggle whether to allow duplicate scalar values in the piecewise\nfunction (off by default).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPiecewiseFunction_StaticNew()
{
  return vtkPiecewiseFunction::New();
}

PyObject *PyVTKClass_vtkPiecewiseFunctionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPiecewiseFunction_StaticNew,
    PyvtkPiecewiseFunction_Methods,
    "vtkPiecewiseFunction", modulename,
    NULL, NULL,
    PyvtkPiecewiseFunction_Doc(),
    PyVTKClass_vtkDataObjectNew(modulename));
  return cls;
}

const char **PyvtkPiecewiseFunction_Doc()
{
  static const char *docstring[] = {
    "vtkPiecewiseFunction - Defines a 1D piecewise function.\n\n",
    "Superclass: vtkDataObject\n\n",
    "Defines a piecewise function mapping. This mapping allows the\naddition of control points, and allows the user to control the\nfunction between the control points. A piecewise hermite curve is\nused between control points, based on the sharpness and midpoint\nparameters. A sharpness of 0 yields a piecewise linear function and a\nsharpness of 1 yields a piecewise constant function. The midpoint is\nthe n",
    "ormalized distance between control points at which the curve\nreaches the median Y value. The midpoint and sharpness values\nspecified when adding a node are used to control the transition to\nthe next node (the last node's values are ignored) Outside the range\nof nodes, the values are 0 if Clamping is off, or the nearest node\npoint if Clamping is on. Using the legacy methods for adding points \n(whic",
    "h do not have Sharpness and Midpoint parameters) will default to\nMidpoint = 0.5 (halfway between the control points) and Sharpness =\n0.0 (linear).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPiecewiseFunction(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPiecewiseFunctionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPiecewiseFunction", o) != 0)
    {
    Py_DECREF(o);
    }

}

