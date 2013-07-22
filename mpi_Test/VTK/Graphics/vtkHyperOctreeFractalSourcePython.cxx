// python wrapper for vtkHyperOctreeFractalSource
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
#include "vtkHyperOctreeFractalSource.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkHyperOctreeFractalSource(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkHyperOctreeFractalSource(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkHyperOctreeFractalSourceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkHyperOctreeFractalSourceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkHyperOctreeAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkHyperOctreeAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkHyperOctreeAlgorithmNew
#endif

static const char **PyvtkHyperOctreeFractalSource_Doc();


static PyObject *
PyvtkHyperOctreeFractalSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

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
      tempr = op->vtkHyperOctreeFractalSource::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeFractalSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

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
      tempr = op->vtkHyperOctreeFractalSource::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeFractalSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

  vtkHyperOctreeFractalSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkHyperOctreeFractalSource::NewInstance();
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
PyvtkHyperOctreeFractalSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkHyperOctreeFractalSource *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkHyperOctreeFractalSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeFractalSource_GetMaximumLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumLevel();
      }
    else
      {
      tempr = op->vtkHyperOctreeFractalSource::GetMaximumLevel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeFractalSource_SetMaximumLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumLevel(temp0);
      }
    else
      {
      op->vtkHyperOctreeFractalSource::SetMaximumLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeFractalSource_SetMinimumLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinimumLevel(temp0);
      }
    else
      {
      op->vtkHyperOctreeFractalSource::SetMinimumLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeFractalSource_GetMinimumLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinimumLevel();
      }
    else
      {
      tempr = op->vtkHyperOctreeFractalSource::GetMinimumLevel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeFractalSource_SetProjectionAxes_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

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
      op->SetProjectionAxes(temp0, temp1, temp2);
      }
    else
      {
      op->vtkHyperOctreeFractalSource::SetProjectionAxes(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHyperOctreeFractalSource_SetProjectionAxes_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

  int temp0[3];
  int save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetProjectionAxes(temp0);
      }
    else
      {
      op->vtkHyperOctreeFractalSource::SetProjectionAxes(temp0);
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
PyvtkHyperOctreeFractalSource_SetProjectionAxes(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkHyperOctreeFractalSource_SetProjectionAxes_s1(self, args);
    case 1:
      return PyvtkHyperOctreeFractalSource_SetProjectionAxes_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetProjectionAxes");
  return NULL;
}



static PyObject *
PyvtkHyperOctreeFractalSource_GetProjectionAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

  int *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProjectionAxes();
      }
    else
      {
      tempr = op->vtkHyperOctreeFractalSource::GetProjectionAxes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeFractalSource_SetOriginCX_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginCX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

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
      op->SetOriginCX(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkHyperOctreeFractalSource::SetOriginCX(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHyperOctreeFractalSource_SetOriginCX_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginCX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

  double temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOriginCX(temp0);
      }
    else
      {
      op->vtkHyperOctreeFractalSource::SetOriginCX(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHyperOctreeFractalSource_SetOriginCX(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkHyperOctreeFractalSource_SetOriginCX_s1(self, args);
    case 1:
      return PyvtkHyperOctreeFractalSource_SetOriginCX_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOriginCX");
  return NULL;
}



static PyObject *
PyvtkHyperOctreeFractalSource_GetOriginCX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginCX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

  double *tempr;
  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOriginCX();
      }
    else
      {
      tempr = op->vtkHyperOctreeFractalSource::GetOriginCX();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeFractalSource_SetSizeCX_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSizeCX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

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
      op->SetSizeCX(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkHyperOctreeFractalSource::SetSizeCX(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHyperOctreeFractalSource_SetSizeCX_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSizeCX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

  double temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetSizeCX(temp0);
      }
    else
      {
      op->vtkHyperOctreeFractalSource::SetSizeCX(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHyperOctreeFractalSource_SetSizeCX(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkHyperOctreeFractalSource_SetSizeCX_s1(self, args);
    case 1:
      return PyvtkHyperOctreeFractalSource_SetSizeCX_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSizeCX");
  return NULL;
}



static PyObject *
PyvtkHyperOctreeFractalSource_GetSizeCX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSizeCX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

  double *tempr;
  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSizeCX();
      }
    else
      {
      tempr = op->vtkHyperOctreeFractalSource::GetSizeCX();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeFractalSource_SetMaximumNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

  unsigned short temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumNumberOfIterations(temp0);
      }
    else
      {
      op->vtkHyperOctreeFractalSource::SetMaximumNumberOfIterations(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeFractalSource_GetMaximumNumberOfIterationsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfIterationsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

  unsigned short tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumNumberOfIterationsMinValue();
      }
    else
      {
      tempr = op->vtkHyperOctreeFractalSource::GetMaximumNumberOfIterationsMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeFractalSource_GetMaximumNumberOfIterationsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfIterationsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

  unsigned short tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumNumberOfIterationsMaxValue();
      }
    else
      {
      tempr = op->vtkHyperOctreeFractalSource::GetMaximumNumberOfIterationsMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeFractalSource_GetMaximumNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

  unsigned char tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumNumberOfIterations();
      }
    else
      {
      tempr = op->vtkHyperOctreeFractalSource::GetMaximumNumberOfIterations();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeFractalSource_SetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDimension(temp0);
      }
    else
      {
      op->vtkHyperOctreeFractalSource::SetDimension(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeFractalSource_GetDimensionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDimensionMinValue();
      }
    else
      {
      tempr = op->vtkHyperOctreeFractalSource::GetDimensionMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeFractalSource_GetDimensionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDimensionMaxValue();
      }
    else
      {
      tempr = op->vtkHyperOctreeFractalSource::GetDimensionMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeFractalSource_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDimension();
      }
    else
      {
      tempr = op->vtkHyperOctreeFractalSource::GetDimension();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeFractalSource_SetSpanThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpanThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSpanThreshold(temp0);
      }
    else
      {
      op->vtkHyperOctreeFractalSource::SetSpanThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeFractalSource_GetSpanThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpanThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSpanThreshold();
      }
    else
      {
      tempr = op->vtkHyperOctreeFractalSource::GetSpanThreshold();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkHyperOctreeFractalSource_Methods[] = {
  {(char*)"GetClassName", PyvtkHyperOctreeFractalSource_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHyperOctreeFractalSource_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHyperOctreeFractalSource_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkHyperOctreeFractalSource\nC++: vtkHyperOctreeFractalSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkHyperOctreeFractalSource_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHyperOctreeFractalSource\nC++: vtkHyperOctreeFractalSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetMaximumLevel", PyvtkHyperOctreeFractalSource_GetMaximumLevel, 1,
   (char*)"V.GetMaximumLevel() -> int\nC++: int GetMaximumLevel()\n\nReturn the maximum number of levels of the hyperoctree.\n\\post positive_result: result>=1\n"},
  {(char*)"SetMaximumLevel", PyvtkHyperOctreeFractalSource_SetMaximumLevel, 1,
   (char*)"V.SetMaximumLevel(int)\nC++: void SetMaximumLevel(int levels)\n\nSet the maximum number of levels of the hyperoctree. If\nGetMinLevels()>=levels, GetMinLevels() is changed to levels-1.\n\\pre positive_levels: levels>=1\n\\post is_set: this->GetLevels()==levels\n\\post min_is_valid: this->GetMinLevels()<this->GetLevels()\n"},
  {(char*)"SetMinimumLevel", PyvtkHyperOctreeFractalSource_SetMinimumLevel, 1,
   (char*)"V.SetMinimumLevel(int)\nC++: void SetMinimumLevel(int level)\n\nReturn the minimal number of levels of systematic subdivision.\n\\post positive_result: result>=0\n"},
  {(char*)"GetMinimumLevel", PyvtkHyperOctreeFractalSource_GetMinimumLevel, 1,
   (char*)"V.GetMinimumLevel() -> int\nC++: int GetMinimumLevel()\n\nReturn the minimal number of levels of systematic subdivision.\n\\post positive_result: result>=0\n"},
  {(char*)"SetProjectionAxes", PyvtkHyperOctreeFractalSource_SetProjectionAxes, 1,
   (char*)"V.SetProjectionAxes(int, int, int)\nC++: void SetProjectionAxes(int x, int y, int z)\nV.SetProjectionAxes([int, int, int])\nC++: void SetProjectionAxes(int a[3])\n\nSet the projection from  the 4D space (4 parameters / 2 imaginary\nnumbers) to the axes of the 3D Volume. 0=C_Real, 1=C_Imaginary,\n2=X_Real, 4=X_Imaginary\n"},
  {(char*)"GetProjectionAxes", PyvtkHyperOctreeFractalSource_GetProjectionAxes, 1,
   (char*)"V.GetProjectionAxes() -> (int, int, int)\nC++: int *GetProjectionAxes()\n\n"},
  {(char*)"SetOriginCX", PyvtkHyperOctreeFractalSource_SetOriginCX, 1,
   (char*)"V.SetOriginCX(float, float, float, float)\nC++: void SetOriginCX(double, double, double, double)\nV.SetOriginCX((float, float, float, float))\nC++: void SetOriginCX(double a[4])\n\n"},
  {(char*)"GetOriginCX", PyvtkHyperOctreeFractalSource_GetOriginCX, 1,
   (char*)"V.GetOriginCX() -> (float, float, float, float)\nC++: double *GetOriginCX()\n\n"},
  {(char*)"SetSizeCX", PyvtkHyperOctreeFractalSource_SetSizeCX, 1,
   (char*)"V.SetSizeCX(float, float, float, float)\nC++: void SetSizeCX(double, double, double, double)\nV.SetSizeCX((float, float, float, float))\nC++: void SetSizeCX(double a[4])\n\n"},
  {(char*)"GetSizeCX", PyvtkHyperOctreeFractalSource_GetSizeCX, 1,
   (char*)"V.GetSizeCX() -> (float, float, float, float)\nC++: double *GetSizeCX()\n\n"},
  {(char*)"SetMaximumNumberOfIterations", PyvtkHyperOctreeFractalSource_SetMaximumNumberOfIterations, 1,
   (char*)"V.SetMaximumNumberOfIterations(int)\nC++: void SetMaximumNumberOfIterations(unsigned short)\n\nThe maximum number of cycles run to see if the value goes over 2\n"},
  {(char*)"GetMaximumNumberOfIterationsMinValue", PyvtkHyperOctreeFractalSource_GetMaximumNumberOfIterationsMinValue, 1,
   (char*)"V.GetMaximumNumberOfIterationsMinValue() -> int\nC++: unsigned short GetMaximumNumberOfIterationsMinValue()\n\nThe maximum number of cycles run to see if the value goes over 2\n"},
  {(char*)"GetMaximumNumberOfIterationsMaxValue", PyvtkHyperOctreeFractalSource_GetMaximumNumberOfIterationsMaxValue, 1,
   (char*)"V.GetMaximumNumberOfIterationsMaxValue() -> int\nC++: unsigned short GetMaximumNumberOfIterationsMaxValue()\n\nThe maximum number of cycles run to see if the value goes over 2\n"},
  {(char*)"GetMaximumNumberOfIterations", PyvtkHyperOctreeFractalSource_GetMaximumNumberOfIterations, 1,
   (char*)"V.GetMaximumNumberOfIterations() -> int\nC++: unsigned char GetMaximumNumberOfIterations()\n\nThe maximum number of cycles run to see if the value goes over 2\n"},
  {(char*)"SetDimension", PyvtkHyperOctreeFractalSource_SetDimension, 1,
   (char*)"V.SetDimension(int)\nC++: void SetDimension(int)\n\nCreate a 2D or 3D fractal.\n"},
  {(char*)"GetDimensionMinValue", PyvtkHyperOctreeFractalSource_GetDimensionMinValue, 1,
   (char*)"V.GetDimensionMinValue() -> int\nC++: int GetDimensionMinValue()\n\nCreate a 2D or 3D fractal.\n"},
  {(char*)"GetDimensionMaxValue", PyvtkHyperOctreeFractalSource_GetDimensionMaxValue, 1,
   (char*)"V.GetDimensionMaxValue() -> int\nC++: int GetDimensionMaxValue()\n\nCreate a 2D or 3D fractal.\n"},
  {(char*)"GetDimension", PyvtkHyperOctreeFractalSource_GetDimension, 1,
   (char*)"V.GetDimension() -> int\nC++: int GetDimension()\n\nCreate a 2D or 3D fractal.\n"},
  {(char*)"SetSpanThreshold", PyvtkHyperOctreeFractalSource_SetSpanThreshold, 1,
   (char*)"V.SetSpanThreshold(float)\nC++: void SetSpanThreshold(double a)\n\nControls when a leaf gets subdivided.  If the corner values span\na larger range than this value, the leaf is subdivided.  This\ndefaults to 2.\n"},
  {(char*)"GetSpanThreshold", PyvtkHyperOctreeFractalSource_GetSpanThreshold, 1,
   (char*)"V.GetSpanThreshold() -> float\nC++: double GetSpanThreshold()\n\nControls when a leaf gets subdivided.  If the corner values span\na larger range than this value, the leaf is subdivided.  This\ndefaults to 2.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkHyperOctreeFractalSource_StaticNew()
{
  return vtkHyperOctreeFractalSource::New();
}

PyObject *PyVTKClass_vtkHyperOctreeFractalSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkHyperOctreeFractalSource_StaticNew,
    PyvtkHyperOctreeFractalSource_Methods,
    "vtkHyperOctreeFractalSource", modulename,
    NULL, NULL,
    PyvtkHyperOctreeFractalSource_Doc(),
    PyVTKClass_vtkHyperOctreeAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkHyperOctreeFractalSource_Doc()
{
  static const char *docstring[] = {
    "vtkHyperOctreeFractalSource - Create an octree from a fractal.\n\n",
    "Superclass: vtkHyperOctreeAlgorithm\n\n",
    "See Also:\n\nvtkHyperOctreeSampleFunction\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHyperOctreeFractalSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHyperOctreeFractalSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHyperOctreeFractalSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

