// python wrapper for vtkHyperStreamline
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
#include "vtkHyperStreamline.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkHyperStreamline(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkHyperStreamline(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkHyperStreamlineNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkHyperStreamlineNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkHyperStreamline_Doc();


static PyObject *
PyvtkHyperStreamline_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

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
      tempr = op->vtkHyperStreamline::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperStreamline_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

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
      tempr = op->vtkHyperStreamline::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperStreamline_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  vtkHyperStreamline *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkHyperStreamline::NewInstance();
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
PyvtkHyperStreamline_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkHyperStreamline *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkHyperStreamline::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperStreamline_SetStartLocation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  vtkIdType temp0;
  int temp1;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      op->SetStartLocation(temp0, temp1, temp2);
      }
    else
      {
      op->vtkHyperStreamline::SetStartLocation(temp0, temp1, temp2);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHyperStreamline_SetStartLocation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  vtkIdType temp0;
  int temp1;
  double temp2;
  double temp3;
  double temp4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      op->SetStartLocation(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkHyperStreamline::SetStartLocation(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHyperStreamline_SetStartLocation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkHyperStreamline_SetStartLocation_s1(self, args);
    case 5:
      return PyvtkHyperStreamline_SetStartLocation_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetStartLocation");
  return NULL;
}



static PyObject *
PyvtkHyperStreamline_GetStartLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  int temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      tempr = op->GetStartLocation(temp0, temp1);
      }
    else
      {
      tempr = op->vtkHyperStreamline::GetStartLocation(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
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
PyvtkHyperStreamline_SetStartPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetStartPosition(temp0);
      }
    else
      {
      op->vtkHyperStreamline::SetStartPosition(temp0);
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
PyvtkHyperStreamline_SetStartPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetStartPosition(temp0, temp1, temp2);
      }
    else
      {
      op->vtkHyperStreamline::SetStartPosition(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHyperStreamline_SetStartPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkHyperStreamline_SetStartPosition_s1(self, args);
    case 3:
      return PyvtkHyperStreamline_SetStartPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetStartPosition");
  return NULL;
}



static PyObject *
PyvtkHyperStreamline_GetStartPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStartPosition();
      }
    else
      {
      tempr = op->vtkHyperStreamline::GetStartPosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperStreamline_SetMaximumPropagationDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumPropagationDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumPropagationDistance(temp0);
      }
    else
      {
      op->vtkHyperStreamline::SetMaximumPropagationDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetMaximumPropagationDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumPropagationDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumPropagationDistanceMinValue();
      }
    else
      {
      tempr = op->vtkHyperStreamline::GetMaximumPropagationDistanceMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetMaximumPropagationDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumPropagationDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumPropagationDistanceMaxValue();
      }
    else
      {
      tempr = op->vtkHyperStreamline::GetMaximumPropagationDistanceMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetMaximumPropagationDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumPropagationDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumPropagationDistance();
      }
    else
      {
      tempr = op->vtkHyperStreamline::GetMaximumPropagationDistance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperStreamline_SetIntegrationEigenvector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationEigenvector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIntegrationEigenvector(temp0);
      }
    else
      {
      op->vtkHyperStreamline::SetIntegrationEigenvector(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetIntegrationEigenvectorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationEigenvectorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIntegrationEigenvectorMinValue();
      }
    else
      {
      tempr = op->vtkHyperStreamline::GetIntegrationEigenvectorMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetIntegrationEigenvectorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationEigenvectorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIntegrationEigenvectorMaxValue();
      }
    else
      {
      tempr = op->vtkHyperStreamline::GetIntegrationEigenvectorMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetIntegrationEigenvector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationEigenvector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIntegrationEigenvector();
      }
    else
      {
      tempr = op->vtkHyperStreamline::GetIntegrationEigenvector();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperStreamline_SetIntegrationEigenvectorToMajor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationEigenvectorToMajor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIntegrationEigenvectorToMajor();
      }
    else
      {
      op->vtkHyperStreamline::SetIntegrationEigenvectorToMajor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperStreamline_SetIntegrationEigenvectorToMedium(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationEigenvectorToMedium");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIntegrationEigenvectorToMedium();
      }
    else
      {
      op->vtkHyperStreamline::SetIntegrationEigenvectorToMedium();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperStreamline_SetIntegrationEigenvectorToMinor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationEigenvectorToMinor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIntegrationEigenvectorToMinor();
      }
    else
      {
      op->vtkHyperStreamline::SetIntegrationEigenvectorToMinor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperStreamline_IntegrateMajorEigenvector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntegrateMajorEigenvector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IntegrateMajorEigenvector();
      }
    else
      {
      op->vtkHyperStreamline::IntegrateMajorEigenvector();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperStreamline_IntegrateMediumEigenvector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntegrateMediumEigenvector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IntegrateMediumEigenvector();
      }
    else
      {
      op->vtkHyperStreamline::IntegrateMediumEigenvector();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperStreamline_IntegrateMinorEigenvector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntegrateMinorEigenvector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IntegrateMinorEigenvector();
      }
    else
      {
      op->vtkHyperStreamline::IntegrateMinorEigenvector();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperStreamline_SetIntegrationStepLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationStepLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIntegrationStepLength(temp0);
      }
    else
      {
      op->vtkHyperStreamline::SetIntegrationStepLength(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetIntegrationStepLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationStepLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIntegrationStepLengthMinValue();
      }
    else
      {
      tempr = op->vtkHyperStreamline::GetIntegrationStepLengthMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetIntegrationStepLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationStepLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIntegrationStepLengthMaxValue();
      }
    else
      {
      tempr = op->vtkHyperStreamline::GetIntegrationStepLengthMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetIntegrationStepLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationStepLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIntegrationStepLength();
      }
    else
      {
      tempr = op->vtkHyperStreamline::GetIntegrationStepLength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperStreamline_SetStepLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStepLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStepLength(temp0);
      }
    else
      {
      op->vtkHyperStreamline::SetStepLength(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetStepLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStepLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStepLengthMinValue();
      }
    else
      {
      tempr = op->vtkHyperStreamline::GetStepLengthMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetStepLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStepLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStepLengthMaxValue();
      }
    else
      {
      tempr = op->vtkHyperStreamline::GetStepLengthMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetStepLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStepLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStepLength();
      }
    else
      {
      tempr = op->vtkHyperStreamline::GetStepLength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperStreamline_SetIntegrationDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIntegrationDirection(temp0);
      }
    else
      {
      op->vtkHyperStreamline::SetIntegrationDirection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetIntegrationDirectionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationDirectionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIntegrationDirectionMinValue();
      }
    else
      {
      tempr = op->vtkHyperStreamline::GetIntegrationDirectionMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetIntegrationDirectionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationDirectionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIntegrationDirectionMaxValue();
      }
    else
      {
      tempr = op->vtkHyperStreamline::GetIntegrationDirectionMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetIntegrationDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIntegrationDirection();
      }
    else
      {
      tempr = op->vtkHyperStreamline::GetIntegrationDirection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperStreamline_SetIntegrationDirectionToForward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationDirectionToForward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIntegrationDirectionToForward();
      }
    else
      {
      op->vtkHyperStreamline::SetIntegrationDirectionToForward();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperStreamline_SetIntegrationDirectionToBackward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationDirectionToBackward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIntegrationDirectionToBackward();
      }
    else
      {
      op->vtkHyperStreamline::SetIntegrationDirectionToBackward();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperStreamline_SetIntegrationDirectionToIntegrateBothDirections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationDirectionToIntegrateBothDirections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIntegrationDirectionToIntegrateBothDirections();
      }
    else
      {
      op->vtkHyperStreamline::SetIntegrationDirectionToIntegrateBothDirections();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperStreamline_SetTerminalEigenvalue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTerminalEigenvalue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTerminalEigenvalue(temp0);
      }
    else
      {
      op->vtkHyperStreamline::SetTerminalEigenvalue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetTerminalEigenvalueMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTerminalEigenvalueMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTerminalEigenvalueMinValue();
      }
    else
      {
      tempr = op->vtkHyperStreamline::GetTerminalEigenvalueMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetTerminalEigenvalueMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTerminalEigenvalueMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTerminalEigenvalueMaxValue();
      }
    else
      {
      tempr = op->vtkHyperStreamline::GetTerminalEigenvalueMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetTerminalEigenvalue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTerminalEigenvalue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTerminalEigenvalue();
      }
    else
      {
      tempr = op->vtkHyperStreamline::GetTerminalEigenvalue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperStreamline_SetNumberOfSides(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSides");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfSides(temp0);
      }
    else
      {
      op->vtkHyperStreamline::SetNumberOfSides(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetNumberOfSidesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSidesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfSidesMinValue();
      }
    else
      {
      tempr = op->vtkHyperStreamline::GetNumberOfSidesMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetNumberOfSidesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSidesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfSidesMaxValue();
      }
    else
      {
      tempr = op->vtkHyperStreamline::GetNumberOfSidesMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetNumberOfSides(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSides");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfSides();
      }
    else
      {
      tempr = op->vtkHyperStreamline::GetNumberOfSides();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperStreamline_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRadius(temp0);
      }
    else
      {
      op->vtkHyperStreamline::SetRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRadiusMinValue();
      }
    else
      {
      tempr = op->vtkHyperStreamline::GetRadiusMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRadiusMaxValue();
      }
    else
      {
      tempr = op->vtkHyperStreamline::GetRadiusMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRadius();
      }
    else
      {
      tempr = op->vtkHyperStreamline::GetRadius();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperStreamline_SetLogScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLogScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLogScaling(temp0);
      }
    else
      {
      op->vtkHyperStreamline::SetLogScaling(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetLogScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLogScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLogScaling();
      }
    else
      {
      tempr = op->vtkHyperStreamline::GetLogScaling();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperStreamline_LogScalingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LogScalingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LogScalingOn();
      }
    else
      {
      op->vtkHyperStreamline::LogScalingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperStreamline_LogScalingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LogScalingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LogScalingOff();
      }
    else
      {
      op->vtkHyperStreamline::LogScalingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkHyperStreamline_Methods[] = {
  {(char*)"GetClassName", PyvtkHyperStreamline_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHyperStreamline_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHyperStreamline_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkHyperStreamline\nC++: vtkHyperStreamline *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkHyperStreamline_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHyperStreamline\nC++: vtkHyperStreamline *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetStartLocation", PyvtkHyperStreamline_SetStartLocation, 1,
   (char*)"V.SetStartLocation(int, int, [float, float, float])\nC++: void SetStartLocation(vtkIdType cellId, int subId,\n    double pcoords[3])\nV.SetStartLocation(int, int, float, float, float)\nC++: void SetStartLocation(vtkIdType cellId, int subId, double r,\n    double s, double t)\n\nSpecify the start of the hyperstreamline in the cell coordinate\nsystem. That is, cellId and subId (if composite cell), and\nparametric coordinates.\n"},
  {(char*)"GetStartLocation", PyvtkHyperStreamline_GetStartLocation, 1,
   (char*)"V.GetStartLocation(int, [float, float, float]) -> int\nC++: vtkIdType GetStartLocation(int &subId, double pcoords[3])\n\nGet the starting location of the hyperstreamline in the cell\ncoordinate system. Returns the cell that the starting point is\nin.\n"},
  {(char*)"SetStartPosition", PyvtkHyperStreamline_SetStartPosition, 1,
   (char*)"V.SetStartPosition([float, float, float])\nC++: void SetStartPosition(double x[3])\nV.SetStartPosition(float, float, float)\nC++: void SetStartPosition(double x, double y, double z)\n\nSpecify the start of the hyperstreamline in the global coordinate\nsystem. Starting from position implies that a search must be\nperformed to find initial cell to start integration from.\n"},
  {(char*)"GetStartPosition", PyvtkHyperStreamline_GetStartPosition, 1,
   (char*)"V.GetStartPosition() -> (float, float, float)\nC++: double *GetStartPosition()\n\nGet the start position of the hyperstreamline in global x-y-z\ncoordinates.\n"},
  {(char*)"SetMaximumPropagationDistance", PyvtkHyperStreamline_SetMaximumPropagationDistance, 1,
   (char*)"V.SetMaximumPropagationDistance(float)\nC++: void SetMaximumPropagationDistance(double)\n\nSet / get the maximum length of the hyperstreamline expressed as\nabsolute distance (i.e., arc length) value.\n"},
  {(char*)"GetMaximumPropagationDistanceMinValue", PyvtkHyperStreamline_GetMaximumPropagationDistanceMinValue, 1,
   (char*)"V.GetMaximumPropagationDistanceMinValue() -> float\nC++: double GetMaximumPropagationDistanceMinValue()\n\nSet / get the maximum length of the hyperstreamline expressed as\nabsolute distance (i.e., arc length) value.\n"},
  {(char*)"GetMaximumPropagationDistanceMaxValue", PyvtkHyperStreamline_GetMaximumPropagationDistanceMaxValue, 1,
   (char*)"V.GetMaximumPropagationDistanceMaxValue() -> float\nC++: double GetMaximumPropagationDistanceMaxValue()\n\nSet / get the maximum length of the hyperstreamline expressed as\nabsolute distance (i.e., arc length) value.\n"},
  {(char*)"GetMaximumPropagationDistance", PyvtkHyperStreamline_GetMaximumPropagationDistance, 1,
   (char*)"V.GetMaximumPropagationDistance() -> float\nC++: double GetMaximumPropagationDistance()\n\nSet / get the maximum length of the hyperstreamline expressed as\nabsolute distance (i.e., arc length) value.\n"},
  {(char*)"SetIntegrationEigenvector", PyvtkHyperStreamline_SetIntegrationEigenvector, 1,
   (char*)"V.SetIntegrationEigenvector(int)\nC++: void SetIntegrationEigenvector(int)\n\nSet / get the eigenvector field through which to ingrate. It is\npossible to integrate using the major, medium or minor\neigenvector field.  The major eigenvector is the eigenvector\nwhose corresponding eigenvalue is closest to positive infinity.\nThe minor eigenvector is the eigenvector whose corresponding\neigenvalue is closest to negative infinity.  The medium\neigenvector is the eigenvector whose corresponding eigenvalue is\nbetween the major and minor eigenvalues.\n"},
  {(char*)"GetIntegrationEigenvectorMinValue", PyvtkHyperStreamline_GetIntegrationEigenvectorMinValue, 1,
   (char*)"V.GetIntegrationEigenvectorMinValue() -> int\nC++: int GetIntegrationEigenvectorMinValue()\n\nSet / get the eigenvector field through which to ingrate. It is\npossible to integrate using the major, medium or minor\neigenvector field.  The major eigenvector is the eigenvector\nwhose corresponding eigenvalue is closest to positive infinity.\nThe minor eigenvector is the eigenvector whose corresponding\neigenvalue is closest to negative infinity.  The medium\neigenvector is the eigenvector whose corresponding eigenvalue is\nbetween the major and minor eigenvalues.\n"},
  {(char*)"GetIntegrationEigenvectorMaxValue", PyvtkHyperStreamline_GetIntegrationEigenvectorMaxValue, 1,
   (char*)"V.GetIntegrationEigenvectorMaxValue() -> int\nC++: int GetIntegrationEigenvectorMaxValue()\n\nSet / get the eigenvector field through which to ingrate. It is\npossible to integrate using the major, medium or minor\neigenvector field.  The major eigenvector is the eigenvector\nwhose corresponding eigenvalue is closest to positive infinity.\nThe minor eigenvector is the eigenvector whose corresponding\neigenvalue is closest to negative infinity.  The medium\neigenvector is the eigenvector whose corresponding eigenvalue is\nbetween the major and minor eigenvalues.\n"},
  {(char*)"GetIntegrationEigenvector", PyvtkHyperStreamline_GetIntegrationEigenvector, 1,
   (char*)"V.GetIntegrationEigenvector() -> int\nC++: int GetIntegrationEigenvector()\n\nSet / get the eigenvector field through which to ingrate. It is\npossible to integrate using the major, medium or minor\neigenvector field.  The major eigenvector is the eigenvector\nwhose corresponding eigenvalue is closest to positive infinity.\nThe minor eigenvector is the eigenvector whose corresponding\neigenvalue is closest to negative infinity.  The medium\neigenvector is the eigenvector whose corresponding eigenvalue is\nbetween the major and minor eigenvalues.\n"},
  {(char*)"SetIntegrationEigenvectorToMajor", PyvtkHyperStreamline_SetIntegrationEigenvectorToMajor, 1,
   (char*)"V.SetIntegrationEigenvectorToMajor()\nC++: void SetIntegrationEigenvectorToMajor()\n\nSet / get the eigenvector field through which to ingrate. It is\npossible to integrate using the major, medium or minor\neigenvector field.  The major eigenvector is the eigenvector\nwhose corresponding eigenvalue is closest to positive infinity.\nThe minor eigenvector is the eigenvector whose corresponding\neigenvalue is closest to negative infinity.  The medium\neigenvector is the eigenvector whose corresponding eigenvalue is\nbetween the major and minor eigenvalues.\n"},
  {(char*)"SetIntegrationEigenvectorToMedium", PyvtkHyperStreamline_SetIntegrationEigenvectorToMedium, 1,
   (char*)"V.SetIntegrationEigenvectorToMedium()\nC++: void SetIntegrationEigenvectorToMedium()\n\nSet / get the eigenvector field through which to ingrate. It is\npossible to integrate using the major, medium or minor\neigenvector field.  The major eigenvector is the eigenvector\nwhose corresponding eigenvalue is closest to positive infinity.\nThe minor eigenvector is the eigenvector whose corresponding\neigenvalue is closest to negative infinity.  The medium\neigenvector is the eigenvector whose corresponding eigenvalue is\nbetween the major and minor eigenvalues.\n"},
  {(char*)"SetIntegrationEigenvectorToMinor", PyvtkHyperStreamline_SetIntegrationEigenvectorToMinor, 1,
   (char*)"V.SetIntegrationEigenvectorToMinor()\nC++: void SetIntegrationEigenvectorToMinor()\n\nSet / get the eigenvector field through which to ingrate. It is\npossible to integrate using the major, medium or minor\neigenvector field.  The major eigenvector is the eigenvector\nwhose corresponding eigenvalue is closest to positive infinity.\nThe minor eigenvector is the eigenvector whose corresponding\neigenvalue is closest to negative infinity.  The medium\neigenvector is the eigenvector whose corresponding eigenvalue is\nbetween the major and minor eigenvalues.\n"},
  {(char*)"IntegrateMajorEigenvector", PyvtkHyperStreamline_IntegrateMajorEigenvector, 1,
   (char*)"V.IntegrateMajorEigenvector()\nC++: void IntegrateMajorEigenvector()\n\nUse the major eigenvector field as the vector field through which\nto integrate.  The major eigenvector is the eigenvector whose\ncorresponding eigenvalue is closest to positive infinity.\n"},
  {(char*)"IntegrateMediumEigenvector", PyvtkHyperStreamline_IntegrateMediumEigenvector, 1,
   (char*)"V.IntegrateMediumEigenvector()\nC++: void IntegrateMediumEigenvector()\n\nUse the medium eigenvector field as the vector field through\nwhich to integrate. The medium eigenvector is the eigenvector\nwhose corresponding eigenvalue is between the major and minor\neigenvalues.\n"},
  {(char*)"IntegrateMinorEigenvector", PyvtkHyperStreamline_IntegrateMinorEigenvector, 1,
   (char*)"V.IntegrateMinorEigenvector()\nC++: void IntegrateMinorEigenvector()\n\nUse the minor eigenvector field as the vector field through which\nto integrate. The minor eigenvector is the eigenvector whose\ncorresponding eigenvalue is closest to negative infinity.\n"},
  {(char*)"SetIntegrationStepLength", PyvtkHyperStreamline_SetIntegrationStepLength, 1,
   (char*)"V.SetIntegrationStepLength(float)\nC++: void SetIntegrationStepLength(double)\n\nSet / get a nominal integration step size (expressed as a\nfraction of the size of each cell).\n"},
  {(char*)"GetIntegrationStepLengthMinValue", PyvtkHyperStreamline_GetIntegrationStepLengthMinValue, 1,
   (char*)"V.GetIntegrationStepLengthMinValue() -> float\nC++: double GetIntegrationStepLengthMinValue()\n\nSet / get a nominal integration step size (expressed as a\nfraction of the size of each cell).\n"},
  {(char*)"GetIntegrationStepLengthMaxValue", PyvtkHyperStreamline_GetIntegrationStepLengthMaxValue, 1,
   (char*)"V.GetIntegrationStepLengthMaxValue() -> float\nC++: double GetIntegrationStepLengthMaxValue()\n\nSet / get a nominal integration step size (expressed as a\nfraction of the size of each cell).\n"},
  {(char*)"GetIntegrationStepLength", PyvtkHyperStreamline_GetIntegrationStepLength, 1,
   (char*)"V.GetIntegrationStepLength() -> float\nC++: double GetIntegrationStepLength()\n\nSet / get a nominal integration step size (expressed as a\nfraction of the size of each cell).\n"},
  {(char*)"SetStepLength", PyvtkHyperStreamline_SetStepLength, 1,
   (char*)"V.SetStepLength(float)\nC++: void SetStepLength(double)\n\nSet / get the length of a tube segment composing the\nhyperstreamline. The length is specified as a fraction of the\ndiagonal length of the input bounding box.\n"},
  {(char*)"GetStepLengthMinValue", PyvtkHyperStreamline_GetStepLengthMinValue, 1,
   (char*)"V.GetStepLengthMinValue() -> float\nC++: double GetStepLengthMinValue()\n\nSet / get the length of a tube segment composing the\nhyperstreamline. The length is specified as a fraction of the\ndiagonal length of the input bounding box.\n"},
  {(char*)"GetStepLengthMaxValue", PyvtkHyperStreamline_GetStepLengthMaxValue, 1,
   (char*)"V.GetStepLengthMaxValue() -> float\nC++: double GetStepLengthMaxValue()\n\nSet / get the length of a tube segment composing the\nhyperstreamline. The length is specified as a fraction of the\ndiagonal length of the input bounding box.\n"},
  {(char*)"GetStepLength", PyvtkHyperStreamline_GetStepLength, 1,
   (char*)"V.GetStepLength() -> float\nC++: double GetStepLength()\n\nSet / get the length of a tube segment composing the\nhyperstreamline. The length is specified as a fraction of the\ndiagonal length of the input bounding box.\n"},
  {(char*)"SetIntegrationDirection", PyvtkHyperStreamline_SetIntegrationDirection, 1,
   (char*)"V.SetIntegrationDirection(int)\nC++: void SetIntegrationDirection(int)\n\nSpecify the direction in which to integrate the hyperstreamline.\n"},
  {(char*)"GetIntegrationDirectionMinValue", PyvtkHyperStreamline_GetIntegrationDirectionMinValue, 1,
   (char*)"V.GetIntegrationDirectionMinValue() -> int\nC++: int GetIntegrationDirectionMinValue()\n\nSpecify the direction in which to integrate the hyperstreamline.\n"},
  {(char*)"GetIntegrationDirectionMaxValue", PyvtkHyperStreamline_GetIntegrationDirectionMaxValue, 1,
   (char*)"V.GetIntegrationDirectionMaxValue() -> int\nC++: int GetIntegrationDirectionMaxValue()\n\nSpecify the direction in which to integrate the hyperstreamline.\n"},
  {(char*)"GetIntegrationDirection", PyvtkHyperStreamline_GetIntegrationDirection, 1,
   (char*)"V.GetIntegrationDirection() -> int\nC++: int GetIntegrationDirection()\n\nSpecify the direction in which to integrate the hyperstreamline.\n"},
  {(char*)"SetIntegrationDirectionToForward", PyvtkHyperStreamline_SetIntegrationDirectionToForward, 1,
   (char*)"V.SetIntegrationDirectionToForward()\nC++: void SetIntegrationDirectionToForward()\n\nSpecify the direction in which to integrate the hyperstreamline.\n"},
  {(char*)"SetIntegrationDirectionToBackward", PyvtkHyperStreamline_SetIntegrationDirectionToBackward, 1,
   (char*)"V.SetIntegrationDirectionToBackward()\nC++: void SetIntegrationDirectionToBackward()\n\nSpecify the direction in which to integrate the hyperstreamline.\n"},
  {(char*)"SetIntegrationDirectionToIntegrateBothDirections", PyvtkHyperStreamline_SetIntegrationDirectionToIntegrateBothDirections, 1,
   (char*)"V.SetIntegrationDirectionToIntegrateBothDirections()\nC++: void SetIntegrationDirectionToIntegrateBothDirections()\n\nSpecify the direction in which to integrate the hyperstreamline.\n"},
  {(char*)"SetTerminalEigenvalue", PyvtkHyperStreamline_SetTerminalEigenvalue, 1,
   (char*)"V.SetTerminalEigenvalue(float)\nC++: void SetTerminalEigenvalue(double)\n\nSet/get terminal eigenvalue.  If major eigenvalue falls below\nthis value, hyperstreamline terminates propagation.\n"},
  {(char*)"GetTerminalEigenvalueMinValue", PyvtkHyperStreamline_GetTerminalEigenvalueMinValue, 1,
   (char*)"V.GetTerminalEigenvalueMinValue() -> float\nC++: double GetTerminalEigenvalueMinValue()\n\nSet/get terminal eigenvalue.  If major eigenvalue falls below\nthis value, hyperstreamline terminates propagation.\n"},
  {(char*)"GetTerminalEigenvalueMaxValue", PyvtkHyperStreamline_GetTerminalEigenvalueMaxValue, 1,
   (char*)"V.GetTerminalEigenvalueMaxValue() -> float\nC++: double GetTerminalEigenvalueMaxValue()\n\nSet/get terminal eigenvalue.  If major eigenvalue falls below\nthis value, hyperstreamline terminates propagation.\n"},
  {(char*)"GetTerminalEigenvalue", PyvtkHyperStreamline_GetTerminalEigenvalue, 1,
   (char*)"V.GetTerminalEigenvalue() -> float\nC++: double GetTerminalEigenvalue()\n\nSet/get terminal eigenvalue.  If major eigenvalue falls below\nthis value, hyperstreamline terminates propagation.\n"},
  {(char*)"SetNumberOfSides", PyvtkHyperStreamline_SetNumberOfSides, 1,
   (char*)"V.SetNumberOfSides(int)\nC++: void SetNumberOfSides(int)\n\nSet / get the number of sides for the hyperstreamlines. At a\nminimum, number of sides is 3.\n"},
  {(char*)"GetNumberOfSidesMinValue", PyvtkHyperStreamline_GetNumberOfSidesMinValue, 1,
   (char*)"V.GetNumberOfSidesMinValue() -> int\nC++: int GetNumberOfSidesMinValue()\n\nSet / get the number of sides for the hyperstreamlines. At a\nminimum, number of sides is 3.\n"},
  {(char*)"GetNumberOfSidesMaxValue", PyvtkHyperStreamline_GetNumberOfSidesMaxValue, 1,
   (char*)"V.GetNumberOfSidesMaxValue() -> int\nC++: int GetNumberOfSidesMaxValue()\n\nSet / get the number of sides for the hyperstreamlines. At a\nminimum, number of sides is 3.\n"},
  {(char*)"GetNumberOfSides", PyvtkHyperStreamline_GetNumberOfSides, 1,
   (char*)"V.GetNumberOfSides() -> int\nC++: int GetNumberOfSides()\n\nSet / get the number of sides for the hyperstreamlines. At a\nminimum, number of sides is 3.\n"},
  {(char*)"SetRadius", PyvtkHyperStreamline_SetRadius, 1,
   (char*)"V.SetRadius(float)\nC++: void SetRadius(double)\n\nSet / get the initial tube radius. This is the maximum\n\"elliptical\" radius at the beginning of the tube. Radius varies\nbased on ratio of eigenvalues.  Note that tube section is\nactually elliptical and may become a point or line in cross\nsection in some cases.\n"},
  {(char*)"GetRadiusMinValue", PyvtkHyperStreamline_GetRadiusMinValue, 1,
   (char*)"V.GetRadiusMinValue() -> float\nC++: double GetRadiusMinValue()\n\nSet / get the initial tube radius. This is the maximum\n\"elliptical\" radius at the beginning of the tube. Radius varies\nbased on ratio of eigenvalues.  Note that tube section is\nactually elliptical and may become a point or line in cross\nsection in some cases.\n"},
  {(char*)"GetRadiusMaxValue", PyvtkHyperStreamline_GetRadiusMaxValue, 1,
   (char*)"V.GetRadiusMaxValue() -> float\nC++: double GetRadiusMaxValue()\n\nSet / get the initial tube radius. This is the maximum\n\"elliptical\" radius at the beginning of the tube. Radius varies\nbased on ratio of eigenvalues.  Note that tube section is\nactually elliptical and may become a point or line in cross\nsection in some cases.\n"},
  {(char*)"GetRadius", PyvtkHyperStreamline_GetRadius, 1,
   (char*)"V.GetRadius() -> float\nC++: double GetRadius()\n\nSet / get the initial tube radius. This is the maximum\n\"elliptical\" radius at the beginning of the tube. Radius varies\nbased on ratio of eigenvalues.  Note that tube section is\nactually elliptical and may become a point or line in cross\nsection in some cases.\n"},
  {(char*)"SetLogScaling", PyvtkHyperStreamline_SetLogScaling, 1,
   (char*)"V.SetLogScaling(int)\nC++: void SetLogScaling(int a)\n\nTurn on/off logarithmic scaling. If scaling is on, the log base\n10 of the computed eigenvalues are used to scale the cross\nsection radii.\n"},
  {(char*)"GetLogScaling", PyvtkHyperStreamline_GetLogScaling, 1,
   (char*)"V.GetLogScaling() -> int\nC++: int GetLogScaling()\n\nTurn on/off logarithmic scaling. If scaling is on, the log base\n10 of the computed eigenvalues are used to scale the cross\nsection radii.\n"},
  {(char*)"LogScalingOn", PyvtkHyperStreamline_LogScalingOn, 1,
   (char*)"V.LogScalingOn()\nC++: void LogScalingOn()\n\nTurn on/off logarithmic scaling. If scaling is on, the log base\n10 of the computed eigenvalues are used to scale the cross\nsection radii.\n"},
  {(char*)"LogScalingOff", PyvtkHyperStreamline_LogScalingOff, 1,
   (char*)"V.LogScalingOff()\nC++: void LogScalingOff()\n\nTurn on/off logarithmic scaling. If scaling is on, the log base\n10 of the computed eigenvalues are used to scale the cross\nsection radii.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkHyperStreamline_StaticNew()
{
  return vtkHyperStreamline::New();
}

PyObject *PyVTKClass_vtkHyperStreamlineNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkHyperStreamline_StaticNew,
    PyvtkHyperStreamline_Methods,
    "vtkHyperStreamline", modulename,
    NULL, NULL,
    PyvtkHyperStreamline_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkHyperStreamline_Doc()
{
  static const char *docstring[] = {
    "vtkHyperStreamline - generate hyperstreamline in arbitrary dataset\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkHyperStreamline is a filter that integrates through a tensor field\nto generate a hyperstreamline. The integration is along the maximum\neigenvector and the cross section of the hyperstreamline is defined\nby the two other eigenvectors. Thus the shape of the hyperstreamline\nis \"tube-like\", with the cross section being elliptical.\nHyperstreamlines are used to visualize tensor fields.\n\nThe starting ",
    "point of a hyperstreamline can be defined in one of two\nways. First, you may specify an initial position. This is a x-y-z\nglobal coordinate. The second option is to specify a starting\nlocation. This is cellId, subId, and  cell parametric coordinates.\n\nThe integration of the hyperstreamline occurs through the major\neigenvector field. IntegrationStepLength controls the step length\nwithin each cell (",
    "i.e., this is the fraction of the cell length). The\nlength of the hyperstreamline is controlled by\nMaximumPropagationDistance. This parameter is the length of the\nhyperstreamline in units of distance. The tube itself is composed of\nmany small sub-tubes - NumberOfSides controls the number of sides in\nthe tube, and StepLength controls the length of the sub-tubes.\n\nBecause hyperstreamlines are often ",
    "created near regions of\nsingularities, it is possible to control the scaling of the tube\ncross section by using a logarithmic scale. Use LogScalingOn to turn\nthis capability on. The Radius value controls the initial radius of\nthe tube.\n\nSee Also:\n\nvtkTensorGlyph vtkStreamer\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHyperStreamline(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHyperStreamlineNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHyperStreamline", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_INTEGRATE_FORWARD", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_INTEGRATE_BACKWARD", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_INTEGRATE_BOTH_DIRECTIONS", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_INTEGRATE_MAJOR_EIGENVECTOR", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_INTEGRATE_MEDIUM_EIGENVECTOR", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_INTEGRATE_MINOR_EIGENVECTOR", o) != 0)
    {
    Py_DECREF(o);
    }

}

