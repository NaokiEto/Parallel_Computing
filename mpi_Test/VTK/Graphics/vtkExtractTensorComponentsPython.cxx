// python wrapper for vtkExtractTensorComponents
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
#include "vtkExtractTensorComponents.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkExtractTensorComponents(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkExtractTensorComponents(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkExtractTensorComponentsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkExtractTensorComponentsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkExtractTensorComponents_Doc();


static PyObject *
PyvtkExtractTensorComponents_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

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
      tempr = op->vtkExtractTensorComponents::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

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
      tempr = op->vtkExtractTensorComponents::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  vtkExtractTensorComponents *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkExtractTensorComponents::NewInstance();
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
PyvtkExtractTensorComponents_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkExtractTensorComponents *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkExtractTensorComponents::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_SetPassTensorsToOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassTensorsToOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPassTensorsToOutput(temp0);
      }
    else
      {
      op->vtkExtractTensorComponents::SetPassTensorsToOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_GetPassTensorsToOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassTensorsToOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPassTensorsToOutput();
      }
    else
      {
      tempr = op->vtkExtractTensorComponents::GetPassTensorsToOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_PassTensorsToOutputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassTensorsToOutputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassTensorsToOutputOn();
      }
    else
      {
      op->vtkExtractTensorComponents::PassTensorsToOutputOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_PassTensorsToOutputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassTensorsToOutputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassTensorsToOutputOff();
      }
    else
      {
      op->vtkExtractTensorComponents::PassTensorsToOutputOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_SetExtractScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetExtractScalars(temp0);
      }
    else
      {
      op->vtkExtractTensorComponents::SetExtractScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_GetExtractScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetExtractScalars();
      }
    else
      {
      tempr = op->vtkExtractTensorComponents::GetExtractScalars();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_ExtractScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExtractScalarsOn();
      }
    else
      {
      op->vtkExtractTensorComponents::ExtractScalarsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_ExtractScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExtractScalarsOff();
      }
    else
      {
      op->vtkExtractTensorComponents::ExtractScalarsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_SetScalarComponents_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetScalarComponents(temp0, temp1);
      }
    else
      {
      op->vtkExtractTensorComponents::SetScalarComponents(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExtractTensorComponents_SetScalarComponents_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetScalarComponents(temp0);
      }
    else
      {
      op->vtkExtractTensorComponents::SetScalarComponents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExtractTensorComponents_SetScalarComponents(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkExtractTensorComponents_SetScalarComponents_s1(self, args);
    case 1:
      return PyvtkExtractTensorComponents_SetScalarComponents_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetScalarComponents");
  return NULL;
}



static PyObject *
PyvtkExtractTensorComponents_GetScalarComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarComponents();
      }
    else
      {
      tempr = op->vtkExtractTensorComponents::GetScalarComponents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_SetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalarMode(temp0);
      }
    else
      {
      op->vtkExtractTensorComponents::SetScalarMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_GetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarMode();
      }
    else
      {
      tempr = op->vtkExtractTensorComponents::GetScalarMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_SetScalarModeToComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToComponent();
      }
    else
      {
      op->vtkExtractTensorComponents::SetScalarModeToComponent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_SetScalarModeToEffectiveStress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToEffectiveStress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToEffectiveStress();
      }
    else
      {
      op->vtkExtractTensorComponents::SetScalarModeToEffectiveStress();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_SetScalarModeToDeterminant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToDeterminant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToDeterminant();
      }
    else
      {
      op->vtkExtractTensorComponents::SetScalarModeToDeterminant();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_ScalarIsComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarIsComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalarIsComponent();
      }
    else
      {
      op->vtkExtractTensorComponents::ScalarIsComponent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_ScalarIsEffectiveStress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarIsEffectiveStress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalarIsEffectiveStress();
      }
    else
      {
      op->vtkExtractTensorComponents::ScalarIsEffectiveStress();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_ScalarIsDeterminant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarIsDeterminant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalarIsDeterminant();
      }
    else
      {
      op->vtkExtractTensorComponents::ScalarIsDeterminant();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_SetExtractVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetExtractVectors(temp0);
      }
    else
      {
      op->vtkExtractTensorComponents::SetExtractVectors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_GetExtractVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetExtractVectors();
      }
    else
      {
      tempr = op->vtkExtractTensorComponents::GetExtractVectors();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_ExtractVectorsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractVectorsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExtractVectorsOn();
      }
    else
      {
      op->vtkExtractTensorComponents::ExtractVectorsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_ExtractVectorsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractVectorsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExtractVectorsOff();
      }
    else
      {
      op->vtkExtractTensorComponents::ExtractVectorsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_SetVectorComponents_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetVectorComponents(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkExtractTensorComponents::SetVectorComponents(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExtractTensorComponents_SetVectorComponents_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  int temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetVectorComponents(temp0);
      }
    else
      {
      op->vtkExtractTensorComponents::SetVectorComponents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExtractTensorComponents_SetVectorComponents(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkExtractTensorComponents_SetVectorComponents_s1(self, args);
    case 1:
      return PyvtkExtractTensorComponents_SetVectorComponents_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetVectorComponents");
  return NULL;
}



static PyObject *
PyvtkExtractTensorComponents_GetVectorComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  int *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVectorComponents();
      }
    else
      {
      tempr = op->vtkExtractTensorComponents::GetVectorComponents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_SetExtractNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetExtractNormals(temp0);
      }
    else
      {
      op->vtkExtractTensorComponents::SetExtractNormals(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_GetExtractNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetExtractNormals();
      }
    else
      {
      tempr = op->vtkExtractTensorComponents::GetExtractNormals();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_ExtractNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExtractNormalsOn();
      }
    else
      {
      op->vtkExtractTensorComponents::ExtractNormalsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_ExtractNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExtractNormalsOff();
      }
    else
      {
      op->vtkExtractTensorComponents::ExtractNormalsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_SetNormalizeNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalizeNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNormalizeNormals(temp0);
      }
    else
      {
      op->vtkExtractTensorComponents::SetNormalizeNormals(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_GetNormalizeNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalizeNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNormalizeNormals();
      }
    else
      {
      tempr = op->vtkExtractTensorComponents::GetNormalizeNormals();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_NormalizeNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizeNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NormalizeNormalsOn();
      }
    else
      {
      op->vtkExtractTensorComponents::NormalizeNormalsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_NormalizeNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizeNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NormalizeNormalsOff();
      }
    else
      {
      op->vtkExtractTensorComponents::NormalizeNormalsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_SetNormalComponents_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetNormalComponents(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkExtractTensorComponents::SetNormalComponents(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExtractTensorComponents_SetNormalComponents_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  int temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetNormalComponents(temp0);
      }
    else
      {
      op->vtkExtractTensorComponents::SetNormalComponents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExtractTensorComponents_SetNormalComponents(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkExtractTensorComponents_SetNormalComponents_s1(self, args);
    case 1:
      return PyvtkExtractTensorComponents_SetNormalComponents_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetNormalComponents");
  return NULL;
}



static PyObject *
PyvtkExtractTensorComponents_GetNormalComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  int *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNormalComponents();
      }
    else
      {
      tempr = op->vtkExtractTensorComponents::GetNormalComponents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_SetExtractTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetExtractTCoords(temp0);
      }
    else
      {
      op->vtkExtractTensorComponents::SetExtractTCoords(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_GetExtractTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetExtractTCoords();
      }
    else
      {
      tempr = op->vtkExtractTensorComponents::GetExtractTCoords();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_ExtractTCoordsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractTCoordsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExtractTCoordsOn();
      }
    else
      {
      op->vtkExtractTensorComponents::ExtractTCoordsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_ExtractTCoordsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractTCoordsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExtractTCoordsOff();
      }
    else
      {
      op->vtkExtractTensorComponents::ExtractTCoordsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_SetNumberOfTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfTCoords(temp0);
      }
    else
      {
      op->vtkExtractTensorComponents::SetNumberOfTCoords(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_GetNumberOfTCoordsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTCoordsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfTCoordsMinValue();
      }
    else
      {
      tempr = op->vtkExtractTensorComponents::GetNumberOfTCoordsMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_GetNumberOfTCoordsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTCoordsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfTCoordsMaxValue();
      }
    else
      {
      tempr = op->vtkExtractTensorComponents::GetNumberOfTCoordsMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_GetNumberOfTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfTCoords();
      }
    else
      {
      tempr = op->vtkExtractTensorComponents::GetNumberOfTCoords();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_SetTCoordComponents_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTCoordComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetTCoordComponents(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkExtractTensorComponents::SetTCoordComponents(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExtractTensorComponents_SetTCoordComponents_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTCoordComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  int temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetTCoordComponents(temp0);
      }
    else
      {
      op->vtkExtractTensorComponents::SetTCoordComponents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExtractTensorComponents_SetTCoordComponents(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkExtractTensorComponents_SetTCoordComponents_s1(self, args);
    case 1:
      return PyvtkExtractTensorComponents_SetTCoordComponents_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTCoordComponents");
  return NULL;
}



static PyObject *
PyvtkExtractTensorComponents_GetTCoordComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTCoordComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  int *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTCoordComponents();
      }
    else
      {
      tempr = op->vtkExtractTensorComponents::GetTCoordComponents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkExtractTensorComponents_Methods[] = {
  {(char*)"GetClassName", PyvtkExtractTensorComponents_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtractTensorComponents_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtractTensorComponents_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkExtractTensorComponents\nC++: vtkExtractTensorComponents *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtractTensorComponents_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtractTensorComponents\nC++: vtkExtractTensorComponents *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPassTensorsToOutput", PyvtkExtractTensorComponents_SetPassTensorsToOutput, 1,
   (char*)"V.SetPassTensorsToOutput(int)\nC++: void SetPassTensorsToOutput(int a)\n\nBoolean controls whether tensor data is passed through to output.\n"},
  {(char*)"GetPassTensorsToOutput", PyvtkExtractTensorComponents_GetPassTensorsToOutput, 1,
   (char*)"V.GetPassTensorsToOutput() -> int\nC++: int GetPassTensorsToOutput()\n\nBoolean controls whether tensor data is passed through to output.\n"},
  {(char*)"PassTensorsToOutputOn", PyvtkExtractTensorComponents_PassTensorsToOutputOn, 1,
   (char*)"V.PassTensorsToOutputOn()\nC++: void PassTensorsToOutputOn()\n\nBoolean controls whether tensor data is passed through to output.\n"},
  {(char*)"PassTensorsToOutputOff", PyvtkExtractTensorComponents_PassTensorsToOutputOff, 1,
   (char*)"V.PassTensorsToOutputOff()\nC++: void PassTensorsToOutputOff()\n\nBoolean controls whether tensor data is passed through to output.\n"},
  {(char*)"SetExtractScalars", PyvtkExtractTensorComponents_SetExtractScalars, 1,
   (char*)"V.SetExtractScalars(int)\nC++: void SetExtractScalars(int a)\n\nBoolean controls whether scalar data is extracted from tensor.\n"},
  {(char*)"GetExtractScalars", PyvtkExtractTensorComponents_GetExtractScalars, 1,
   (char*)"V.GetExtractScalars() -> int\nC++: int GetExtractScalars()\n\nBoolean controls whether scalar data is extracted from tensor.\n"},
  {(char*)"ExtractScalarsOn", PyvtkExtractTensorComponents_ExtractScalarsOn, 1,
   (char*)"V.ExtractScalarsOn()\nC++: void ExtractScalarsOn()\n\nBoolean controls whether scalar data is extracted from tensor.\n"},
  {(char*)"ExtractScalarsOff", PyvtkExtractTensorComponents_ExtractScalarsOff, 1,
   (char*)"V.ExtractScalarsOff()\nC++: void ExtractScalarsOff()\n\nBoolean controls whether scalar data is extracted from tensor.\n"},
  {(char*)"SetScalarComponents", PyvtkExtractTensorComponents_SetScalarComponents, 1,
   (char*)"V.SetScalarComponents(int, int)\nC++: void SetScalarComponents(int, int)\nV.SetScalarComponents((int, int))\nC++: void SetScalarComponents(int a[2])\n\n"},
  {(char*)"GetScalarComponents", PyvtkExtractTensorComponents_GetScalarComponents, 1,
   (char*)"V.GetScalarComponents() -> (int, int)\nC++: int *GetScalarComponents()\n\nSpecify the (row,column) tensor component to extract as a scalar.\n"},
  {(char*)"SetScalarMode", PyvtkExtractTensorComponents_SetScalarMode, 1,
   (char*)"V.SetScalarMode(int)\nC++: void SetScalarMode(int a)\n\nSpecify how to extract the scalar. You can extract it as one of\nthe components of the tensor, as effective stress, or as the\ndeterminant of the tensor. If you extract a component make sure\nthat you set the ScalarComponents ivar.\n"},
  {(char*)"GetScalarMode", PyvtkExtractTensorComponents_GetScalarMode, 1,
   (char*)"V.GetScalarMode() -> int\nC++: int GetScalarMode()\n\nSpecify how to extract the scalar. You can extract it as one of\nthe components of the tensor, as effective stress, or as the\ndeterminant of the tensor. If you extract a component make sure\nthat you set the ScalarComponents ivar.\n"},
  {(char*)"SetScalarModeToComponent", PyvtkExtractTensorComponents_SetScalarModeToComponent, 1,
   (char*)"V.SetScalarModeToComponent()\nC++: void SetScalarModeToComponent()\n\nSpecify how to extract the scalar. You can extract it as one of\nthe components of the tensor, as effective stress, or as the\ndeterminant of the tensor. If you extract a component make sure\nthat you set the ScalarComponents ivar.\n"},
  {(char*)"SetScalarModeToEffectiveStress", PyvtkExtractTensorComponents_SetScalarModeToEffectiveStress, 1,
   (char*)"V.SetScalarModeToEffectiveStress()\nC++: void SetScalarModeToEffectiveStress()\n\nSpecify how to extract the scalar. You can extract it as one of\nthe components of the tensor, as effective stress, or as the\ndeterminant of the tensor. If you extract a component make sure\nthat you set the ScalarComponents ivar.\n"},
  {(char*)"SetScalarModeToDeterminant", PyvtkExtractTensorComponents_SetScalarModeToDeterminant, 1,
   (char*)"V.SetScalarModeToDeterminant()\nC++: void SetScalarModeToDeterminant()\n\nSpecify how to extract the scalar. You can extract it as one of\nthe components of the tensor, as effective stress, or as the\ndeterminant of the tensor. If you extract a component make sure\nthat you set the ScalarComponents ivar.\n"},
  {(char*)"ScalarIsComponent", PyvtkExtractTensorComponents_ScalarIsComponent, 1,
   (char*)"V.ScalarIsComponent()\nC++: void ScalarIsComponent()\n\nSpecify how to extract the scalar. You can extract it as one of\nthe components of the tensor, as effective stress, or as the\ndeterminant of the tensor. If you extract a component make sure\nthat you set the ScalarComponents ivar.\n"},
  {(char*)"ScalarIsEffectiveStress", PyvtkExtractTensorComponents_ScalarIsEffectiveStress, 1,
   (char*)"V.ScalarIsEffectiveStress()\nC++: void ScalarIsEffectiveStress()\n\nSpecify how to extract the scalar. You can extract it as one of\nthe components of the tensor, as effective stress, or as the\ndeterminant of the tensor. If you extract a component make sure\nthat you set the ScalarComponents ivar.\n"},
  {(char*)"ScalarIsDeterminant", PyvtkExtractTensorComponents_ScalarIsDeterminant, 1,
   (char*)"V.ScalarIsDeterminant()\nC++: void ScalarIsDeterminant()\n\nSpecify how to extract the scalar. You can extract it as one of\nthe components of the tensor, as effective stress, or as the\ndeterminant of the tensor. If you extract a component make sure\nthat you set the ScalarComponents ivar.\n"},
  {(char*)"SetExtractVectors", PyvtkExtractTensorComponents_SetExtractVectors, 1,
   (char*)"V.SetExtractVectors(int)\nC++: void SetExtractVectors(int a)\n\nBoolean controls whether vector data is extracted from tensor.\n"},
  {(char*)"GetExtractVectors", PyvtkExtractTensorComponents_GetExtractVectors, 1,
   (char*)"V.GetExtractVectors() -> int\nC++: int GetExtractVectors()\n\nBoolean controls whether vector data is extracted from tensor.\n"},
  {(char*)"ExtractVectorsOn", PyvtkExtractTensorComponents_ExtractVectorsOn, 1,
   (char*)"V.ExtractVectorsOn()\nC++: void ExtractVectorsOn()\n\nBoolean controls whether vector data is extracted from tensor.\n"},
  {(char*)"ExtractVectorsOff", PyvtkExtractTensorComponents_ExtractVectorsOff, 1,
   (char*)"V.ExtractVectorsOff()\nC++: void ExtractVectorsOff()\n\nBoolean controls whether vector data is extracted from tensor.\n"},
  {(char*)"SetVectorComponents", PyvtkExtractTensorComponents_SetVectorComponents, 1,
   (char*)"V.SetVectorComponents(int, int, int, int, int, int)\nC++: void SetVectorComponents(int, int, int, int, int, int)\nV.SetVectorComponents((int, int, int, int, int, int))\nC++: void SetVectorComponents(int a[6])\n\n"},
  {(char*)"GetVectorComponents", PyvtkExtractTensorComponents_GetVectorComponents, 1,
   (char*)"V.GetVectorComponents() -> (int, int, int, int, int, int)\nC++: int *GetVectorComponents()\n\nSpecify the ((row,column)0,(row,column)1,(row,column)2) tensor\ncomponents to extract as a vector.\n"},
  {(char*)"SetExtractNormals", PyvtkExtractTensorComponents_SetExtractNormals, 1,
   (char*)"V.SetExtractNormals(int)\nC++: void SetExtractNormals(int a)\n\nBoolean controls whether normal data is extracted from tensor.\n"},
  {(char*)"GetExtractNormals", PyvtkExtractTensorComponents_GetExtractNormals, 1,
   (char*)"V.GetExtractNormals() -> int\nC++: int GetExtractNormals()\n\nBoolean controls whether normal data is extracted from tensor.\n"},
  {(char*)"ExtractNormalsOn", PyvtkExtractTensorComponents_ExtractNormalsOn, 1,
   (char*)"V.ExtractNormalsOn()\nC++: void ExtractNormalsOn()\n\nBoolean controls whether normal data is extracted from tensor.\n"},
  {(char*)"ExtractNormalsOff", PyvtkExtractTensorComponents_ExtractNormalsOff, 1,
   (char*)"V.ExtractNormalsOff()\nC++: void ExtractNormalsOff()\n\nBoolean controls whether normal data is extracted from tensor.\n"},
  {(char*)"SetNormalizeNormals", PyvtkExtractTensorComponents_SetNormalizeNormals, 1,
   (char*)"V.SetNormalizeNormals(int)\nC++: void SetNormalizeNormals(int a)\n\nBoolean controls whether normal vector is converted to unit\nnormal after extraction.\n"},
  {(char*)"GetNormalizeNormals", PyvtkExtractTensorComponents_GetNormalizeNormals, 1,
   (char*)"V.GetNormalizeNormals() -> int\nC++: int GetNormalizeNormals()\n\nBoolean controls whether normal vector is converted to unit\nnormal after extraction.\n"},
  {(char*)"NormalizeNormalsOn", PyvtkExtractTensorComponents_NormalizeNormalsOn, 1,
   (char*)"V.NormalizeNormalsOn()\nC++: void NormalizeNormalsOn()\n\nBoolean controls whether normal vector is converted to unit\nnormal after extraction.\n"},
  {(char*)"NormalizeNormalsOff", PyvtkExtractTensorComponents_NormalizeNormalsOff, 1,
   (char*)"V.NormalizeNormalsOff()\nC++: void NormalizeNormalsOff()\n\nBoolean controls whether normal vector is converted to unit\nnormal after extraction.\n"},
  {(char*)"SetNormalComponents", PyvtkExtractTensorComponents_SetNormalComponents, 1,
   (char*)"V.SetNormalComponents(int, int, int, int, int, int)\nC++: void SetNormalComponents(int, int, int, int, int, int)\nV.SetNormalComponents((int, int, int, int, int, int))\nC++: void SetNormalComponents(int a[6])\n\n"},
  {(char*)"GetNormalComponents", PyvtkExtractTensorComponents_GetNormalComponents, 1,
   (char*)"V.GetNormalComponents() -> (int, int, int, int, int, int)\nC++: int *GetNormalComponents()\n\nSpecify the ((row,column)0,(row,column)1,(row,column)2) tensor\ncomponents to extract as a vector.\n"},
  {(char*)"SetExtractTCoords", PyvtkExtractTensorComponents_SetExtractTCoords, 1,
   (char*)"V.SetExtractTCoords(int)\nC++: void SetExtractTCoords(int a)\n\nBoolean controls whether texture coordinates are extracted from\ntensor.\n"},
  {(char*)"GetExtractTCoords", PyvtkExtractTensorComponents_GetExtractTCoords, 1,
   (char*)"V.GetExtractTCoords() -> int\nC++: int GetExtractTCoords()\n\nBoolean controls whether texture coordinates are extracted from\ntensor.\n"},
  {(char*)"ExtractTCoordsOn", PyvtkExtractTensorComponents_ExtractTCoordsOn, 1,
   (char*)"V.ExtractTCoordsOn()\nC++: void ExtractTCoordsOn()\n\nBoolean controls whether texture coordinates are extracted from\ntensor.\n"},
  {(char*)"ExtractTCoordsOff", PyvtkExtractTensorComponents_ExtractTCoordsOff, 1,
   (char*)"V.ExtractTCoordsOff()\nC++: void ExtractTCoordsOff()\n\nBoolean controls whether texture coordinates are extracted from\ntensor.\n"},
  {(char*)"SetNumberOfTCoords", PyvtkExtractTensorComponents_SetNumberOfTCoords, 1,
   (char*)"V.SetNumberOfTCoords(int)\nC++: void SetNumberOfTCoords(int)\n\nSet the dimension of the texture coordinates to extract.\n"},
  {(char*)"GetNumberOfTCoordsMinValue", PyvtkExtractTensorComponents_GetNumberOfTCoordsMinValue, 1,
   (char*)"V.GetNumberOfTCoordsMinValue() -> int\nC++: int GetNumberOfTCoordsMinValue()\n\nSet the dimension of the texture coordinates to extract.\n"},
  {(char*)"GetNumberOfTCoordsMaxValue", PyvtkExtractTensorComponents_GetNumberOfTCoordsMaxValue, 1,
   (char*)"V.GetNumberOfTCoordsMaxValue() -> int\nC++: int GetNumberOfTCoordsMaxValue()\n\nSet the dimension of the texture coordinates to extract.\n"},
  {(char*)"GetNumberOfTCoords", PyvtkExtractTensorComponents_GetNumberOfTCoords, 1,
   (char*)"V.GetNumberOfTCoords() -> int\nC++: int GetNumberOfTCoords()\n\nSet the dimension of the texture coordinates to extract.\n"},
  {(char*)"SetTCoordComponents", PyvtkExtractTensorComponents_SetTCoordComponents, 1,
   (char*)"V.SetTCoordComponents(int, int, int, int, int, int)\nC++: void SetTCoordComponents(int, int, int, int, int, int)\nV.SetTCoordComponents((int, int, int, int, int, int))\nC++: void SetTCoordComponents(int a[6])\n\n"},
  {(char*)"GetTCoordComponents", PyvtkExtractTensorComponents_GetTCoordComponents, 1,
   (char*)"V.GetTCoordComponents() -> (int, int, int, int, int, int)\nC++: int *GetTCoordComponents()\n\nSpecify the ((row,column)0,(row,column)1,(row,column)2) tensor\ncomponents to extract as a vector. Up to NumberOfTCoords\ncomponents are extracted.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtractTensorComponents_StaticNew()
{
  return vtkExtractTensorComponents::New();
}

PyObject *PyVTKClass_vtkExtractTensorComponentsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtractTensorComponents_StaticNew,
    PyvtkExtractTensorComponents_Methods,
    "vtkExtractTensorComponents", modulename,
    NULL, NULL,
    PyvtkExtractTensorComponents_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkExtractTensorComponents_Doc()
{
  static const char *docstring[] = {
    "vtkExtractTensorComponents - extract parts of tensor and create a\nscalar, vector, normal, or texture coordinates.\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkExtractTensorComponents is a filter that extracts components of a\ntensor to create a scalar, vector, normal, or texture coords. For\nexample, if the tensor contains components of stress, then you could\nextract the normal stress in the x-direction as a scalar (i.e.,\ntensor component (0,0).\n\nTo use this filter, you must set some boolean flags to control which\ndata is extracted from the tensors, an",
    "d whether you want to pass the\ntensor data through to the output. Also, you must specify the tensor\ncomponent(s) for each type of data you want to extract. The tensor\ncomponent(s) is(are) specified using matrix notation into a 3x3\nmatrix. That is, use the (row,column) address to specify a particular\ntensor component; and if the data you are extracting requires more\nthan one component, use a list o",
    "f addresses. (Note that the addresses\nare 0-offset -> (0,0) specifies upper left corner of the tensor.)\n\nThere are two optional methods to extract scalar data. You can\nextract the determinant of the tensor, or you can extract the\neffective stress of the tensor. These require that the ivar\nExtractScalars is on, and the appropriate scalar extraction mode is\nset.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtractTensorComponents(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtractTensorComponentsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtractTensorComponents", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_EXTRACT_COMPONENT", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_EXTRACT_EFFECTIVE_STRESS", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_EXTRACT_DETERMINANT", o) != 0)
    {
    Py_DECREF(o);
    }

}

