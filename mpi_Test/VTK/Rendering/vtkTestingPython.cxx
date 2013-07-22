// python wrapper for vtkTesting
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
#include "vtkTesting.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTesting(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTesting(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTestingNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTestingNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkTesting_Doc();


static PyObject *
PyvtkTesting_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

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
      tempr = op->vtkTesting::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

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
      tempr = op->vtkTesting::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  vtkTesting *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTesting::NewInstance();
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
PyvtkTesting_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTesting *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTesting::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_SetFrontBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrontBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFrontBuffer(temp0);
      }
    else
      {
      op->vtkTesting::SetFrontBuffer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_GetFrontBufferMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrontBufferMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFrontBufferMinValue();
      }
    else
      {
      tempr = op->vtkTesting::GetFrontBufferMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_GetFrontBufferMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrontBufferMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFrontBufferMaxValue();
      }
    else
      {
      tempr = op->vtkTesting::GetFrontBufferMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_FrontBufferOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FrontBufferOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FrontBufferOn();
      }
    else
      {
      op->vtkTesting::FrontBufferOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_FrontBufferOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FrontBufferOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FrontBufferOff();
      }
    else
      {
      op->vtkTesting::FrontBufferOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_GetFrontBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrontBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFrontBuffer();
      }
    else
      {
      tempr = op->vtkTesting::GetFrontBuffer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_RegressionTest_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegressionTest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  double temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->RegressionTest(temp0);
      }
    else
      {
      tempr = op->vtkTesting::RegressionTest(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTesting_RegressionTest_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegressionTest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  vtkImageData *temp0 = NULL;
  double temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->RegressionTest(temp0, temp1);
      }
    else
      {
      tempr = op->vtkTesting::RegressionTest(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTesting_RegressionTest(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkTesting_RegressionTest_s1(self, args);
    case 2:
      return PyvtkTesting_RegressionTest_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RegressionTest");
  return NULL;
}



static PyObject *
PyvtkTesting_CompareAverageOfL2Norm_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CompareAverageOfL2Norm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  vtkDataSet *temp0 = NULL;
  vtkDataSet *temp1 = NULL;
  double temp2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetVTKObject(temp1, "vtkDataSet") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->CompareAverageOfL2Norm(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkTesting::CompareAverageOfL2Norm(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTesting_CompareAverageOfL2Norm_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CompareAverageOfL2Norm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  vtkDataArray *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  double temp2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->CompareAverageOfL2Norm(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkTesting::CompareAverageOfL2Norm(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTesting_CompareAverageOfL2Norm_Methods[] = {
  {NULL, PyvtkTesting_CompareAverageOfL2Norm_s1, 1,
   (char*)"@OOd *vtkDataSet *vtkDataSet"},
  {NULL, PyvtkTesting_CompareAverageOfL2Norm_s2, 1,
   (char*)"@OOd *vtkDataArray *vtkDataArray"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTesting_CompareAverageOfL2Norm(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTesting_CompareAverageOfL2Norm_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "CompareAverageOfL2Norm");
  return NULL;
}



static PyObject *
PyvtkTesting_SetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  vtkRenderWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
    {
    if (ap.IsBound())
      {
      op->SetRenderWindow(temp0);
      }
    else
      {
      op->vtkTesting::SetRenderWindow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  vtkRenderWindow *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRenderWindow();
      }
    else
      {
      tempr = op->vtkTesting::GetRenderWindow();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_SetValidImageFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValidImageFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetValidImageFileName(temp0);
      }
    else
      {
      op->vtkTesting::SetValidImageFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_GetValidImageFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValidImageFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetValidImageFileName();
      }
    else
      {
      tempr = op->vtkTesting::GetValidImageFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_GetImageDifference(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageDifference");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetImageDifference();
      }
    else
      {
      tempr = op->vtkTesting::GetImageDifference();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_AddArgument(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddArgument");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddArgument(temp0);
      }
    else
      {
      op->vtkTesting::AddArgument(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_GetArgument(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArgument");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  char *temp0 = NULL;
  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetArgument(temp0);
      }
    else
      {
      tempr = op->vtkTesting::GetArgument(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_CleanArguments(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CleanArguments");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CleanArguments();
      }
    else
      {
      op->vtkTesting::CleanArguments();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_GetDataRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataRoot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataRoot();
      }
    else
      {
      tempr = op->vtkTesting::GetDataRoot();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_SetDataRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataRoot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDataRoot(temp0);
      }
    else
      {
      op->vtkTesting::SetDataRoot(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_GetTempDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTempDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTempDirectory();
      }
    else
      {
      tempr = op->vtkTesting::GetTempDirectory();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_SetTempDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTempDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTempDirectory(temp0);
      }
    else
      {
      op->vtkTesting::SetTempDirectory(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_IsValidImageSpecified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsValidImageSpecified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsValidImageSpecified();
      }
    else
      {
      tempr = op->vtkTesting::IsValidImageSpecified();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_IsInteractiveModeSpecified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInteractiveModeSpecified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsInteractiveModeSpecified();
      }
    else
      {
      tempr = op->vtkTesting::IsInteractiveModeSpecified();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_IsFlagSpecified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsFlagSpecified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsFlagSpecified(temp0);
      }
    else
      {
      tempr = op->vtkTesting::IsFlagSpecified(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_SetBorderOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBorderOffset(temp0);
      }
    else
      {
      op->vtkTesting::SetBorderOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_GetBorderOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBorderOffset();
      }
    else
      {
      tempr = op->vtkTesting::GetBorderOffset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_SetVerbose(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVerbose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVerbose(temp0);
      }
    else
      {
      op->vtkTesting::SetVerbose(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_GetVerbose(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerbose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVerbose();
      }
    else
      {
      tempr = op->vtkTesting::GetVerbose();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTesting_Methods[] = {
  {(char*)"GetClassName", PyvtkTesting_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTesting_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTesting_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTesting\nC++: vtkTesting *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTesting_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTesting\nC++: vtkTesting *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFrontBuffer", PyvtkTesting_SetFrontBuffer, 1,
   (char*)"V.SetFrontBuffer(int)\nC++: void SetFrontBuffer(int)\n\nUse front buffer for tests. By default use back buffer.\n"},
  {(char*)"GetFrontBufferMinValue", PyvtkTesting_GetFrontBufferMinValue, 1,
   (char*)"V.GetFrontBufferMinValue() -> int\nC++: int GetFrontBufferMinValue()\n\nUse front buffer for tests. By default use back buffer.\n"},
  {(char*)"GetFrontBufferMaxValue", PyvtkTesting_GetFrontBufferMaxValue, 1,
   (char*)"V.GetFrontBufferMaxValue() -> int\nC++: int GetFrontBufferMaxValue()\n\nUse front buffer for tests. By default use back buffer.\n"},
  {(char*)"FrontBufferOn", PyvtkTesting_FrontBufferOn, 1,
   (char*)"V.FrontBufferOn()\nC++: void FrontBufferOn()\n\nUse front buffer for tests. By default use back buffer.\n"},
  {(char*)"FrontBufferOff", PyvtkTesting_FrontBufferOff, 1,
   (char*)"V.FrontBufferOff()\nC++: void FrontBufferOff()\n\nUse front buffer for tests. By default use back buffer.\n"},
  {(char*)"GetFrontBuffer", PyvtkTesting_GetFrontBuffer, 1,
   (char*)"V.GetFrontBuffer() -> int\nC++: int GetFrontBuffer()\n\nUse front buffer for tests. By default use back buffer.\n"},
  {(char*)"RegressionTest", PyvtkTesting_RegressionTest, 1,
   (char*)"V.RegressionTest(float) -> int\nC++: virtual int RegressionTest(double thresh)\nV.RegressionTest(vtkImageData, float) -> int\nC++: virtual int RegressionTest(vtkImageData *image,\n    double thresh)\n\nPerform the test and return result. At the same time the output\nwill be written cout\n"},
  {(char*)"CompareAverageOfL2Norm", PyvtkTesting_CompareAverageOfL2Norm, 1,
   (char*)"V.CompareAverageOfL2Norm(vtkDataSet, vtkDataSet, float) -> int\nC++: int CompareAverageOfL2Norm(vtkDataSet *pdA, vtkDataSet *pdB,\n    double tol)\nV.CompareAverageOfL2Norm(vtkDataArray, vtkDataArray, float) -> int\nC++: int CompareAverageOfL2Norm(vtkDataArray *daA,\n    vtkDataArray *daB, double tol)\n\nCompute the average L2 norm between all point data data arrays of\ntypes float and double present in the data sets \"dsA\" and \"dsB\"\n(this includes instances of vtkPoints) Compare the result of each\nL2 comutation to \"tol\".\n"},
  {(char*)"SetRenderWindow", PyvtkTesting_SetRenderWindow, 1,
   (char*)"V.SetRenderWindow(vtkRenderWindow)\nC++: virtual void SetRenderWindow(vtkRenderWindow *rw)\n\nSet and get the render window that will be used for regression\ntesting.\n"},
  {(char*)"GetRenderWindow", PyvtkTesting_GetRenderWindow, 1,
   (char*)"V.GetRenderWindow() -> vtkRenderWindow\nC++: vtkRenderWindow *GetRenderWindow()\n\nSet and get the render window that will be used for regression\ntesting.\n"},
  {(char*)"SetValidImageFileName", PyvtkTesting_SetValidImageFileName, 1,
   (char*)"V.SetValidImageFileName(string)\nC++: void SetValidImageFileName(char *)\n\nSet/Get the name of the valid image file\n"},
  {(char*)"GetValidImageFileName", PyvtkTesting_GetValidImageFileName, 1,
   (char*)"V.GetValidImageFileName() -> string\nC++: const char *GetValidImageFileName()\n\nSet/Get the name of the valid image file\n"},
  {(char*)"GetImageDifference", PyvtkTesting_GetImageDifference, 1,
   (char*)"V.GetImageDifference() -> float\nC++: double GetImageDifference()\n\nGet the image difference.\n"},
  {(char*)"AddArgument", PyvtkTesting_AddArgument, 1,
   (char*)"V.AddArgument(string)\nC++: void AddArgument(const char *argv)\n\nPass the command line arguments into this class to be processed.\nMany of the Get methods such as GetValidImage and GetBaselineRoot\nrely on the arguments to be passed in prior to retrieving these\nvalues. Just call AddArgument for each argument that was passed\ninto the command line\n"},
  {(char*)"GetArgument", PyvtkTesting_GetArgument, 1,
   (char*)"V.GetArgument(string) -> string\nC++: char *GetArgument(const char *arg)\n\nSearch for a specific argument by name and return its value\n(assumed to be the next on the command tail). Up to caller to\ndelete the returned string.\n"},
  {(char*)"CleanArguments", PyvtkTesting_CleanArguments, 1,
   (char*)"V.CleanArguments()\nC++: void CleanArguments()\n\n"},
  {(char*)"GetDataRoot", PyvtkTesting_GetDataRoot, 1,
   (char*)"V.GetDataRoot() -> string\nC++: const char *GetDataRoot()\n\nGet some parameters from the command line arguments, env, or\ndefaults\n"},
  {(char*)"SetDataRoot", PyvtkTesting_SetDataRoot, 1,
   (char*)"V.SetDataRoot(string)\nC++: void SetDataRoot(char *)\n\nGet some parameters from the command line arguments, env, or\ndefaults\n"},
  {(char*)"GetTempDirectory", PyvtkTesting_GetTempDirectory, 1,
   (char*)"V.GetTempDirectory() -> string\nC++: const char *GetTempDirectory()\n\nGet some parameters from the command line arguments, env, or\ndefaults\n"},
  {(char*)"SetTempDirectory", PyvtkTesting_SetTempDirectory, 1,
   (char*)"V.SetTempDirectory(string)\nC++: void SetTempDirectory(char *)\n\nGet some parameters from the command line arguments, env, or\ndefaults\n"},
  {(char*)"IsValidImageSpecified", PyvtkTesting_IsValidImageSpecified, 1,
   (char*)"V.IsValidImageSpecified() -> int\nC++: int IsValidImageSpecified()\n\nIs a valid image specified on the command line areguments?\n"},
  {(char*)"IsInteractiveModeSpecified", PyvtkTesting_IsInteractiveModeSpecified, 1,
   (char*)"V.IsInteractiveModeSpecified() -> int\nC++: int IsInteractiveModeSpecified()\n\nIs the interactive mode specified?\n"},
  {(char*)"IsFlagSpecified", PyvtkTesting_IsFlagSpecified, 1,
   (char*)"V.IsFlagSpecified(string) -> int\nC++: int IsFlagSpecified(const char *flag)\n\nIs some arbitrary user flag (\"-X\", \"-Z\" etc) specified\n"},
  {(char*)"SetBorderOffset", PyvtkTesting_SetBorderOffset, 1,
   (char*)"V.SetBorderOffset(int)\nC++: void SetBorderOffset(int a)\n\nNumber of pixels added as borders to avoid problems with window\ndecorations added by some window managers.\n"},
  {(char*)"GetBorderOffset", PyvtkTesting_GetBorderOffset, 1,
   (char*)"V.GetBorderOffset() -> int\nC++: int GetBorderOffset()\n\nNumber of pixels added as borders to avoid problems with window\ndecorations added by some window managers.\n"},
  {(char*)"SetVerbose", PyvtkTesting_SetVerbose, 1,
   (char*)"V.SetVerbose(int)\nC++: void SetVerbose(int a)\n\nGet/Set verbosity level. A level of 0 is quiet.\n"},
  {(char*)"GetVerbose", PyvtkTesting_GetVerbose, 1,
   (char*)"V.GetVerbose() -> int\nC++: int GetVerbose()\n\nGet/Set verbosity level. A level of 0 is quiet.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTesting_StaticNew()
{
  return vtkTesting::New();
}

PyObject *PyVTKClass_vtkTestingNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTesting_StaticNew,
    PyvtkTesting_Methods,
    "vtkTesting", modulename,
    NULL, NULL,
    PyvtkTesting_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"FAILED", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"PASSED", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"NOT_RUN", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"DO_INTERACTOR", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkTesting_Doc()
{
  static const char *docstring[] = {
    "vtkTesting - a unified VTK regression testing framework\n\n",
    "Superclass: vtkObject\n\n",
    "This is a VTK regression testing framework. Looks like this:\n\n\n vtkTesting* t = vtkTesting::New();\n\n\n Two options for setting arguments\n\n\n Option 1:\n for ( cc = 1; cc < argc; cc ++ )\n   {\n   t->AddArgument(argv[cc]);\n   }\n\n\n Option 2:\n t->AddArgument(\"-D\");\n t->AddArgument(my_data_dir);\n t->AddArgument(\"-V\");\n t->AddArgument(my_valid_image);\n\n\n ...\n\n\n Two options of doing testing:\n\n\n Option 1:\n t-",
    ">SetRenderWindow(renWin);\n int res = t->RegressionTest(threshold);\n\n\n Option 2:\n int res = t->RegressionTest(test_image, threshold);\n\n\n ...\n\n\n if ( res == vtkTesting::PASSED )\n   {\n   Test passed\n   }\n else\n   {\n   Test failed\n   }\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTesting(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTestingNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTesting", o) != 0)
    {
    Py_DECREF(o);
    }

}

