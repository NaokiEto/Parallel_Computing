// python wrapper for vtkImageMathematics
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
#include "vtkImageMathematics.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageMathematics(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageMathematics(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageMathematicsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageMathematicsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageMathematics_Doc();


static PyObject *
PyvtkImageMathematics_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

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
      tempr = op->vtkImageMathematics::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMathematics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

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
      tempr = op->vtkImageMathematics::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMathematics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  vtkImageMathematics *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageMathematics::NewInstance();
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
PyvtkImageMathematics_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageMathematics *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageMathematics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetOperation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOperation(temp0);
      }
    else
      {
      op->vtkImageMathematics::SetOperation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMathematics_GetOperation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOperation();
      }
    else
      {
      tempr = op->vtkImageMathematics::GetOperation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetOperationToAdd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToAdd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationToAdd();
      }
    else
      {
      op->vtkImageMathematics::SetOperationToAdd();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetOperationToSubtract(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToSubtract");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationToSubtract();
      }
    else
      {
      op->vtkImageMathematics::SetOperationToSubtract();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetOperationToMultiply(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToMultiply");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationToMultiply();
      }
    else
      {
      op->vtkImageMathematics::SetOperationToMultiply();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetOperationToDivide(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToDivide");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationToDivide();
      }
    else
      {
      op->vtkImageMathematics::SetOperationToDivide();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetOperationToConjugate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToConjugate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationToConjugate();
      }
    else
      {
      op->vtkImageMathematics::SetOperationToConjugate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetOperationToComplexMultiply(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToComplexMultiply");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationToComplexMultiply();
      }
    else
      {
      op->vtkImageMathematics::SetOperationToComplexMultiply();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetOperationToInvert(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToInvert");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationToInvert();
      }
    else
      {
      op->vtkImageMathematics::SetOperationToInvert();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetOperationToSin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToSin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationToSin();
      }
    else
      {
      op->vtkImageMathematics::SetOperationToSin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetOperationToCos(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToCos");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationToCos();
      }
    else
      {
      op->vtkImageMathematics::SetOperationToCos();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetOperationToExp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToExp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationToExp();
      }
    else
      {
      op->vtkImageMathematics::SetOperationToExp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetOperationToLog(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToLog");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationToLog();
      }
    else
      {
      op->vtkImageMathematics::SetOperationToLog();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetOperationToAbsoluteValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToAbsoluteValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationToAbsoluteValue();
      }
    else
      {
      op->vtkImageMathematics::SetOperationToAbsoluteValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetOperationToSquare(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToSquare");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationToSquare();
      }
    else
      {
      op->vtkImageMathematics::SetOperationToSquare();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetOperationToSquareRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToSquareRoot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationToSquareRoot();
      }
    else
      {
      op->vtkImageMathematics::SetOperationToSquareRoot();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetOperationToMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationToMin();
      }
    else
      {
      op->vtkImageMathematics::SetOperationToMin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetOperationToMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationToMax();
      }
    else
      {
      op->vtkImageMathematics::SetOperationToMax();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetOperationToATAN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToATAN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationToATAN();
      }
    else
      {
      op->vtkImageMathematics::SetOperationToATAN();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetOperationToATAN2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToATAN2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationToATAN2();
      }
    else
      {
      op->vtkImageMathematics::SetOperationToATAN2();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetOperationToMultiplyByK(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToMultiplyByK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationToMultiplyByK();
      }
    else
      {
      op->vtkImageMathematics::SetOperationToMultiplyByK();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetOperationToAddConstant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToAddConstant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationToAddConstant();
      }
    else
      {
      op->vtkImageMathematics::SetOperationToAddConstant();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetOperationToReplaceCByK(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToReplaceCByK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationToReplaceCByK();
      }
    else
      {
      op->vtkImageMathematics::SetOperationToReplaceCByK();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetConstantK(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstantK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetConstantK(temp0);
      }
    else
      {
      op->vtkImageMathematics::SetConstantK(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMathematics_GetConstantK(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstantK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetConstantK();
      }
    else
      {
      tempr = op->vtkImageMathematics::GetConstantK();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetConstantC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstantC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetConstantC(temp0);
      }
    else
      {
      op->vtkImageMathematics::SetConstantC(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMathematics_GetConstantC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstantC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetConstantC();
      }
    else
      {
      tempr = op->vtkImageMathematics::GetConstantC();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetDivideByZeroToC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDivideByZeroToC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDivideByZeroToC(temp0);
      }
    else
      {
      op->vtkImageMathematics::SetDivideByZeroToC(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMathematics_GetDivideByZeroToC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDivideByZeroToC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDivideByZeroToC();
      }
    else
      {
      tempr = op->vtkImageMathematics::GetDivideByZeroToC();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMathematics_DivideByZeroToCOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DivideByZeroToCOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DivideByZeroToCOn();
      }
    else
      {
      op->vtkImageMathematics::DivideByZeroToCOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMathematics_DivideByZeroToCOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DivideByZeroToCOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DivideByZeroToCOff();
      }
    else
      {
      op->vtkImageMathematics::DivideByZeroToCOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetInput1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInput1(temp0);
      }
    else
      {
      op->vtkImageMathematics::SetInput1(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMathematics_SetInput2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMathematics *op = static_cast<vtkImageMathematics *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInput2(temp0);
      }
    else
      {
      op->vtkImageMathematics::SetInput2(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageMathematics_Methods[] = {
  {(char*)"GetClassName", PyvtkImageMathematics_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageMathematics_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageMathematics_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageMathematics\nC++: vtkImageMathematics *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageMathematics_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageMathematics\nC++: vtkImageMathematics *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetOperation", PyvtkImageMathematics_SetOperation, 1,
   (char*)"V.SetOperation(int)\nC++: void SetOperation(int a)\n\nSet/Get the Operation to perform.\n"},
  {(char*)"GetOperation", PyvtkImageMathematics_GetOperation, 1,
   (char*)"V.GetOperation() -> int\nC++: int GetOperation()\n\nSet/Get the Operation to perform.\n"},
  {(char*)"SetOperationToAdd", PyvtkImageMathematics_SetOperationToAdd, 1,
   (char*)"V.SetOperationToAdd()\nC++: void SetOperationToAdd()\n\nSet each pixel in the output image to the sum of the\ncorresponding pixels in Input1 and Input2.\n"},
  {(char*)"SetOperationToSubtract", PyvtkImageMathematics_SetOperationToSubtract, 1,
   (char*)"V.SetOperationToSubtract()\nC++: void SetOperationToSubtract()\n\nSet each pixel in the output image to the difference of the\ncorresponding pixels in Input1 and Input2 (output = Input1 -\nInput2).\n"},
  {(char*)"SetOperationToMultiply", PyvtkImageMathematics_SetOperationToMultiply, 1,
   (char*)"V.SetOperationToMultiply()\nC++: void SetOperationToMultiply()\n\nSet each pixel in the output image to the product of the\ncorresponding pixels in Input1 and Input2.\n"},
  {(char*)"SetOperationToDivide", PyvtkImageMathematics_SetOperationToDivide, 1,
   (char*)"V.SetOperationToDivide()\nC++: void SetOperationToDivide()\n\nSet each pixel in the output image to the quotient of the\ncorresponding pixels in Input1 and Input2 (Output = Input1 /\nInput2).\n"},
  {(char*)"SetOperationToConjugate", PyvtkImageMathematics_SetOperationToConjugate, 1,
   (char*)"V.SetOperationToConjugate()\nC++: void SetOperationToConjugate()\n\n"},
  {(char*)"SetOperationToComplexMultiply", PyvtkImageMathematics_SetOperationToComplexMultiply, 1,
   (char*)"V.SetOperationToComplexMultiply()\nC++: void SetOperationToComplexMultiply()\n\n"},
  {(char*)"SetOperationToInvert", PyvtkImageMathematics_SetOperationToInvert, 1,
   (char*)"V.SetOperationToInvert()\nC++: void SetOperationToInvert()\n\nSet each pixel in the output image to 1 over the corresponding\npixel in Input1 and Input2 (output = 1 / Input1). Input2 is not\nused.\n"},
  {(char*)"SetOperationToSin", PyvtkImageMathematics_SetOperationToSin, 1,
   (char*)"V.SetOperationToSin()\nC++: void SetOperationToSin()\n\nSet each pixel in the output image to the sine of the\ncorresponding pixel in Input1. Input2 is not used.\n"},
  {(char*)"SetOperationToCos", PyvtkImageMathematics_SetOperationToCos, 1,
   (char*)"V.SetOperationToCos()\nC++: void SetOperationToCos()\n\nSet each pixel in the output image to the cosine of the\ncorresponding pixel in Input1. Input2 is not used.\n"},
  {(char*)"SetOperationToExp", PyvtkImageMathematics_SetOperationToExp, 1,
   (char*)"V.SetOperationToExp()\nC++: void SetOperationToExp()\n\nSet each pixel in the output image to the exponential of the\ncorresponding pixel in Input1. Input2 is not used.\n"},
  {(char*)"SetOperationToLog", PyvtkImageMathematics_SetOperationToLog, 1,
   (char*)"V.SetOperationToLog()\nC++: void SetOperationToLog()\n\nSet each pixel in the output image to the log of the\ncorresponding pixel in Input1. Input2 is not used.\n"},
  {(char*)"SetOperationToAbsoluteValue", PyvtkImageMathematics_SetOperationToAbsoluteValue, 1,
   (char*)"V.SetOperationToAbsoluteValue()\nC++: void SetOperationToAbsoluteValue()\n\nSet each pixel in the output image to the absolute value of the\ncorresponding pixel in Input1. Input2 is not used.\n"},
  {(char*)"SetOperationToSquare", PyvtkImageMathematics_SetOperationToSquare, 1,
   (char*)"V.SetOperationToSquare()\nC++: void SetOperationToSquare()\n\nSet each pixel in the output image to the square of the\ncorresponding pixel in Input1. Input2 is not used.\n"},
  {(char*)"SetOperationToSquareRoot", PyvtkImageMathematics_SetOperationToSquareRoot, 1,
   (char*)"V.SetOperationToSquareRoot()\nC++: void SetOperationToSquareRoot()\n\nSet each pixel in the output image to the square root of the\ncorresponding pixel in Input1. Input2 is not used.\n"},
  {(char*)"SetOperationToMin", PyvtkImageMathematics_SetOperationToMin, 1,
   (char*)"V.SetOperationToMin()\nC++: void SetOperationToMin()\n\nSet each pixel in the output image to the minimum of the\ncorresponding pixels in Input1 and Input2. (Output = min(Input1,\nInput2))\n"},
  {(char*)"SetOperationToMax", PyvtkImageMathematics_SetOperationToMax, 1,
   (char*)"V.SetOperationToMax()\nC++: void SetOperationToMax()\n\nSet each pixel in the output image to the maximum of the\ncorresponding pixels in Input1 and Input2. (Output = max(Input1,\nInput2))\n"},
  {(char*)"SetOperationToATAN", PyvtkImageMathematics_SetOperationToATAN, 1,
   (char*)"V.SetOperationToATAN()\nC++: void SetOperationToATAN()\n\nSet each pixel in the output image to the arctangent of the\ncorresponding pixel in Input1. Input2 is not used.\n"},
  {(char*)"SetOperationToATAN2", PyvtkImageMathematics_SetOperationToATAN2, 1,
   (char*)"V.SetOperationToATAN2()\nC++: void SetOperationToATAN2()\n\n"},
  {(char*)"SetOperationToMultiplyByK", PyvtkImageMathematics_SetOperationToMultiplyByK, 1,
   (char*)"V.SetOperationToMultiplyByK()\nC++: void SetOperationToMultiplyByK()\n\nSet each pixel in the output image to the product of ConstantK\nwith the corresponding pixel in Input1. Input2 is not used.\n"},
  {(char*)"SetOperationToAddConstant", PyvtkImageMathematics_SetOperationToAddConstant, 1,
   (char*)"V.SetOperationToAddConstant()\nC++: void SetOperationToAddConstant()\n\nSet each pixel in the output image to the product of ConstantC\nwith the corresponding pixel in Input1. Input2 is not used.\n"},
  {(char*)"SetOperationToReplaceCByK", PyvtkImageMathematics_SetOperationToReplaceCByK, 1,
   (char*)"V.SetOperationToReplaceCByK()\nC++: void SetOperationToReplaceCByK()\n\nFind every pixel in Input1 that equals ConstantC and set the\ncorresponding pixels in the Output to ConstantK. Input2 is not\nused.\n"},
  {(char*)"SetConstantK", PyvtkImageMathematics_SetConstantK, 1,
   (char*)"V.SetConstantK(float)\nC++: void SetConstantK(double a)\n\nA constant used by some operations (typically multiplicative).\nDefault is 1.\n"},
  {(char*)"GetConstantK", PyvtkImageMathematics_GetConstantK, 1,
   (char*)"V.GetConstantK() -> float\nC++: double GetConstantK()\n\nA constant used by some operations (typically multiplicative).\nDefault is 1.\n"},
  {(char*)"SetConstantC", PyvtkImageMathematics_SetConstantC, 1,
   (char*)"V.SetConstantC(float)\nC++: void SetConstantC(double a)\n\nA constant used by some operations (typically additive). Default\nis 0.\n"},
  {(char*)"GetConstantC", PyvtkImageMathematics_GetConstantC, 1,
   (char*)"V.GetConstantC() -> float\nC++: double GetConstantC()\n\nA constant used by some operations (typically additive). Default\nis 0.\n"},
  {(char*)"SetDivideByZeroToC", PyvtkImageMathematics_SetDivideByZeroToC, 1,
   (char*)"V.SetDivideByZeroToC(int)\nC++: void SetDivideByZeroToC(int a)\n\nHow to handle divide by zero. Default is 0.\n"},
  {(char*)"GetDivideByZeroToC", PyvtkImageMathematics_GetDivideByZeroToC, 1,
   (char*)"V.GetDivideByZeroToC() -> int\nC++: int GetDivideByZeroToC()\n\nHow to handle divide by zero. Default is 0.\n"},
  {(char*)"DivideByZeroToCOn", PyvtkImageMathematics_DivideByZeroToCOn, 1,
   (char*)"V.DivideByZeroToCOn()\nC++: void DivideByZeroToCOn()\n\nHow to handle divide by zero. Default is 0.\n"},
  {(char*)"DivideByZeroToCOff", PyvtkImageMathematics_DivideByZeroToCOff, 1,
   (char*)"V.DivideByZeroToCOff()\nC++: void DivideByZeroToCOff()\n\nHow to handle divide by zero. Default is 0.\n"},
  {(char*)"SetInput1", PyvtkImageMathematics_SetInput1, 1,
   (char*)"V.SetInput1(vtkDataObject)\nC++: virtual void SetInput1(vtkDataObject *in)\n\nSet the two inputs to this filter. For some operations, the\nsecond input is not used.\n"},
  {(char*)"SetInput2", PyvtkImageMathematics_SetInput2, 1,
   (char*)"V.SetInput2(vtkDataObject)\nC++: virtual void SetInput2(vtkDataObject *in)\n\nSet the two inputs to this filter. For some operations, the\nsecond input is not used.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageMathematics_StaticNew()
{
  return vtkImageMathematics::New();
}

PyObject *PyVTKClass_vtkImageMathematicsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageMathematics_StaticNew,
    PyvtkImageMathematics_Methods,
    "vtkImageMathematics", modulename,
    NULL, NULL,
    PyvtkImageMathematics_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageMathematics_Doc()
{
  static const char *docstring[] = {
    "vtkImageMathematics - Add, subtract, multiply, divide, invert, sin,\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "vtkImageMathematics implements basic mathematic operations\nSetOperation is used to select the filters behavior.  The filter can\ntake two or one input.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageMathematics(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageMathematicsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageMathematics", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_ADD", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SUBTRACT", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_MULTIPLY", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(3);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_DIVIDE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(4);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_INVERT", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(5);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SIN", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(6);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_COS", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(7);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_EXP", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(8);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_LOG", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(9);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_ABS", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(10);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SQR", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(11);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SQRT", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(12);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_MIN", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(13);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_MAX", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(14);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_ATAN", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(15);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_ATAN2", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(16);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_MULTIPLYBYK", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(17);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_ADDC", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(18);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_CONJUGATE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(19);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_COMPLEX_MULTIPLY", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(20);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_REPLACECBYK", o) != 0)
    {
    Py_DECREF(o);
    }

}

