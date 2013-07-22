// python wrapper for vtkMarchingContourFilter
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
#include "vtkMarchingContourFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMarchingContourFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMarchingContourFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMarchingContourFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMarchingContourFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkMarchingContourFilter_Doc();


static PyObject *
PyvtkMarchingContourFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingContourFilter *op = static_cast<vtkMarchingContourFilter *>(vp);

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
      tempr = op->vtkMarchingContourFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingContourFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingContourFilter *op = static_cast<vtkMarchingContourFilter *>(vp);

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
      tempr = op->vtkMarchingContourFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingContourFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingContourFilter *op = static_cast<vtkMarchingContourFilter *>(vp);

  vtkMarchingContourFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMarchingContourFilter::NewInstance();
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
PyvtkMarchingContourFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkMarchingContourFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkMarchingContourFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingContourFilter_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingContourFilter *op = static_cast<vtkMarchingContourFilter *>(vp);

  int temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1);
      }
    else
      {
      op->vtkMarchingContourFilter::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingContourFilter_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingContourFilter *op = static_cast<vtkMarchingContourFilter *>(vp);

  int temp0;
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
      tempr = op->vtkMarchingContourFilter::GetValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingContourFilter_SetNumberOfContours(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfContours");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingContourFilter *op = static_cast<vtkMarchingContourFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfContours(temp0);
      }
    else
      {
      op->vtkMarchingContourFilter::SetNumberOfContours(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingContourFilter_GetNumberOfContours(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfContours");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingContourFilter *op = static_cast<vtkMarchingContourFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfContours();
      }
    else
      {
      tempr = op->vtkMarchingContourFilter::GetNumberOfContours();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingContourFilter_GenerateValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingContourFilter *op = static_cast<vtkMarchingContourFilter *>(vp);

  int temp0;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GenerateValues(temp0, temp1);
      }
    else
      {
      op->vtkMarchingContourFilter::GenerateValues(temp0, temp1);
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
PyvtkMarchingContourFilter_GenerateValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingContourFilter *op = static_cast<vtkMarchingContourFilter *>(vp);

  int temp0;
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
      op->GenerateValues(temp0, temp1, temp2);
      }
    else
      {
      op->vtkMarchingContourFilter::GenerateValues(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMarchingContourFilter_GenerateValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkMarchingContourFilter_GenerateValues_s1(self, args);
    case 3:
      return PyvtkMarchingContourFilter_GenerateValues_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GenerateValues");
  return NULL;
}



static PyObject *
PyvtkMarchingContourFilter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingContourFilter *op = static_cast<vtkMarchingContourFilter *>(vp);

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
      tempr = op->vtkMarchingContourFilter::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingContourFilter_SetComputeNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingContourFilter *op = static_cast<vtkMarchingContourFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComputeNormals(temp0);
      }
    else
      {
      op->vtkMarchingContourFilter::SetComputeNormals(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingContourFilter_GetComputeNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingContourFilter *op = static_cast<vtkMarchingContourFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComputeNormals();
      }
    else
      {
      tempr = op->vtkMarchingContourFilter::GetComputeNormals();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingContourFilter_ComputeNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingContourFilter *op = static_cast<vtkMarchingContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeNormalsOn();
      }
    else
      {
      op->vtkMarchingContourFilter::ComputeNormalsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingContourFilter_ComputeNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingContourFilter *op = static_cast<vtkMarchingContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeNormalsOff();
      }
    else
      {
      op->vtkMarchingContourFilter::ComputeNormalsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingContourFilter_SetComputeGradients(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeGradients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingContourFilter *op = static_cast<vtkMarchingContourFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComputeGradients(temp0);
      }
    else
      {
      op->vtkMarchingContourFilter::SetComputeGradients(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingContourFilter_GetComputeGradients(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeGradients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingContourFilter *op = static_cast<vtkMarchingContourFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComputeGradients();
      }
    else
      {
      tempr = op->vtkMarchingContourFilter::GetComputeGradients();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingContourFilter_ComputeGradientsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeGradientsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingContourFilter *op = static_cast<vtkMarchingContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeGradientsOn();
      }
    else
      {
      op->vtkMarchingContourFilter::ComputeGradientsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingContourFilter_ComputeGradientsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeGradientsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingContourFilter *op = static_cast<vtkMarchingContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeGradientsOff();
      }
    else
      {
      op->vtkMarchingContourFilter::ComputeGradientsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingContourFilter_SetComputeScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingContourFilter *op = static_cast<vtkMarchingContourFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComputeScalars(temp0);
      }
    else
      {
      op->vtkMarchingContourFilter::SetComputeScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingContourFilter_GetComputeScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingContourFilter *op = static_cast<vtkMarchingContourFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComputeScalars();
      }
    else
      {
      tempr = op->vtkMarchingContourFilter::GetComputeScalars();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingContourFilter_ComputeScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingContourFilter *op = static_cast<vtkMarchingContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeScalarsOn();
      }
    else
      {
      op->vtkMarchingContourFilter::ComputeScalarsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingContourFilter_ComputeScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingContourFilter *op = static_cast<vtkMarchingContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeScalarsOff();
      }
    else
      {
      op->vtkMarchingContourFilter::ComputeScalarsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingContourFilter_SetUseScalarTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseScalarTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingContourFilter *op = static_cast<vtkMarchingContourFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseScalarTree(temp0);
      }
    else
      {
      op->vtkMarchingContourFilter::SetUseScalarTree(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingContourFilter_GetUseScalarTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseScalarTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingContourFilter *op = static_cast<vtkMarchingContourFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseScalarTree();
      }
    else
      {
      tempr = op->vtkMarchingContourFilter::GetUseScalarTree();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingContourFilter_UseScalarTreeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseScalarTreeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingContourFilter *op = static_cast<vtkMarchingContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseScalarTreeOn();
      }
    else
      {
      op->vtkMarchingContourFilter::UseScalarTreeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingContourFilter_UseScalarTreeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseScalarTreeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingContourFilter *op = static_cast<vtkMarchingContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseScalarTreeOff();
      }
    else
      {
      op->vtkMarchingContourFilter::UseScalarTreeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingContourFilter_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingContourFilter *op = static_cast<vtkMarchingContourFilter *>(vp);

  vtkIncrementalPointLocator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIncrementalPointLocator"))
    {
    if (ap.IsBound())
      {
      op->SetLocator(temp0);
      }
    else
      {
      op->vtkMarchingContourFilter::SetLocator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingContourFilter_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingContourFilter *op = static_cast<vtkMarchingContourFilter *>(vp);

  vtkIncrementalPointLocator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLocator();
      }
    else
      {
      tempr = op->vtkMarchingContourFilter::GetLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingContourFilter_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingContourFilter *op = static_cast<vtkMarchingContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultLocator();
      }
    else
      {
      op->vtkMarchingContourFilter::CreateDefaultLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMarchingContourFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkMarchingContourFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMarchingContourFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMarchingContourFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMarchingContourFilter\nC++: vtkMarchingContourFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMarchingContourFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMarchingContourFilter\nC++: vtkMarchingContourFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetValue", PyvtkMarchingContourFilter_SetValue, 1,
   (char*)"V.SetValue(int, float)\nC++: void SetValue(int i, double value)\n\nMethods to set / get contour values.\n"},
  {(char*)"GetValue", PyvtkMarchingContourFilter_GetValue, 1,
   (char*)"V.GetValue(int) -> float\nC++: double GetValue(int i)\n\nMethods to set / get contour values.\n"},
  {(char*)"SetNumberOfContours", PyvtkMarchingContourFilter_SetNumberOfContours, 1,
   (char*)"V.SetNumberOfContours(int)\nC++: void SetNumberOfContours(int number)\n\nMethods to set / get contour values.\n"},
  {(char*)"GetNumberOfContours", PyvtkMarchingContourFilter_GetNumberOfContours, 1,
   (char*)"V.GetNumberOfContours() -> int\nC++: int GetNumberOfContours()\n\nMethods to set / get contour values.\n"},
  {(char*)"GenerateValues", PyvtkMarchingContourFilter_GenerateValues, 1,
   (char*)"V.GenerateValues(int, [float, float])\nC++: void GenerateValues(int numContours, double range[2])\nV.GenerateValues(int, float, float)\nC++: void GenerateValues(int numContours, double rangeStart,\n    double rangeEnd)\n\nMethods to set / get contour values.\n"},
  {(char*)"GetMTime", PyvtkMarchingContourFilter_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nModified GetMTime Because we delegate to vtkContourValues\n"},
  {(char*)"SetComputeNormals", PyvtkMarchingContourFilter_SetComputeNormals, 1,
   (char*)"V.SetComputeNormals(int)\nC++: void SetComputeNormals(int a)\n\nSet/Get the computation of normals. Normal computation is fairly\nexpensive in both time and storage. If the output data will be\nprocessed by filters that modify topology or geometry, it may be\nwise to turn Normals and Gradients off.\n"},
  {(char*)"GetComputeNormals", PyvtkMarchingContourFilter_GetComputeNormals, 1,
   (char*)"V.GetComputeNormals() -> int\nC++: int GetComputeNormals()\n\nSet/Get the computation of normals. Normal computation is fairly\nexpensive in both time and storage. If the output data will be\nprocessed by filters that modify topology or geometry, it may be\nwise to turn Normals and Gradients off.\n"},
  {(char*)"ComputeNormalsOn", PyvtkMarchingContourFilter_ComputeNormalsOn, 1,
   (char*)"V.ComputeNormalsOn()\nC++: void ComputeNormalsOn()\n\nSet/Get the computation of normals. Normal computation is fairly\nexpensive in both time and storage. If the output data will be\nprocessed by filters that modify topology or geometry, it may be\nwise to turn Normals and Gradients off.\n"},
  {(char*)"ComputeNormalsOff", PyvtkMarchingContourFilter_ComputeNormalsOff, 1,
   (char*)"V.ComputeNormalsOff()\nC++: void ComputeNormalsOff()\n\nSet/Get the computation of normals. Normal computation is fairly\nexpensive in both time and storage. If the output data will be\nprocessed by filters that modify topology or geometry, it may be\nwise to turn Normals and Gradients off.\n"},
  {(char*)"SetComputeGradients", PyvtkMarchingContourFilter_SetComputeGradients, 1,
   (char*)"V.SetComputeGradients(int)\nC++: void SetComputeGradients(int a)\n\nSet/Get the computation of gradients. Gradient computation is\nfairly expensive in both time and storage. Note that if\nComputeNormals is on, gradients will have to be calculated, but\nwill not be stored in the output dataset.  If the output data\nwill be processed by filters that modify topology or geometry, it\nmay be wise to turn Normals and Gradients off.\n"},
  {(char*)"GetComputeGradients", PyvtkMarchingContourFilter_GetComputeGradients, 1,
   (char*)"V.GetComputeGradients() -> int\nC++: int GetComputeGradients()\n\nSet/Get the computation of gradients. Gradient computation is\nfairly expensive in both time and storage. Note that if\nComputeNormals is on, gradients will have to be calculated, but\nwill not be stored in the output dataset.  If the output data\nwill be processed by filters that modify topology or geometry, it\nmay be wise to turn Normals and Gradients off.\n"},
  {(char*)"ComputeGradientsOn", PyvtkMarchingContourFilter_ComputeGradientsOn, 1,
   (char*)"V.ComputeGradientsOn()\nC++: void ComputeGradientsOn()\n\nSet/Get the computation of gradients. Gradient computation is\nfairly expensive in both time and storage. Note that if\nComputeNormals is on, gradients will have to be calculated, but\nwill not be stored in the output dataset.  If the output data\nwill be processed by filters that modify topology or geometry, it\nmay be wise to turn Normals and Gradients off.\n"},
  {(char*)"ComputeGradientsOff", PyvtkMarchingContourFilter_ComputeGradientsOff, 1,
   (char*)"V.ComputeGradientsOff()\nC++: void ComputeGradientsOff()\n\nSet/Get the computation of gradients. Gradient computation is\nfairly expensive in both time and storage. Note that if\nComputeNormals is on, gradients will have to be calculated, but\nwill not be stored in the output dataset.  If the output data\nwill be processed by filters that modify topology or geometry, it\nmay be wise to turn Normals and Gradients off.\n"},
  {(char*)"SetComputeScalars", PyvtkMarchingContourFilter_SetComputeScalars, 1,
   (char*)"V.SetComputeScalars(int)\nC++: void SetComputeScalars(int a)\n\nSet/Get the computation of scalars.\n"},
  {(char*)"GetComputeScalars", PyvtkMarchingContourFilter_GetComputeScalars, 1,
   (char*)"V.GetComputeScalars() -> int\nC++: int GetComputeScalars()\n\nSet/Get the computation of scalars.\n"},
  {(char*)"ComputeScalarsOn", PyvtkMarchingContourFilter_ComputeScalarsOn, 1,
   (char*)"V.ComputeScalarsOn()\nC++: void ComputeScalarsOn()\n\nSet/Get the computation of scalars.\n"},
  {(char*)"ComputeScalarsOff", PyvtkMarchingContourFilter_ComputeScalarsOff, 1,
   (char*)"V.ComputeScalarsOff()\nC++: void ComputeScalarsOff()\n\nSet/Get the computation of scalars.\n"},
  {(char*)"SetUseScalarTree", PyvtkMarchingContourFilter_SetUseScalarTree, 1,
   (char*)"V.SetUseScalarTree(int)\nC++: void SetUseScalarTree(int a)\n\nEnable the use of a scalar tree to accelerate contour extraction.\n"},
  {(char*)"GetUseScalarTree", PyvtkMarchingContourFilter_GetUseScalarTree, 1,
   (char*)"V.GetUseScalarTree() -> int\nC++: int GetUseScalarTree()\n\nEnable the use of a scalar tree to accelerate contour extraction.\n"},
  {(char*)"UseScalarTreeOn", PyvtkMarchingContourFilter_UseScalarTreeOn, 1,
   (char*)"V.UseScalarTreeOn()\nC++: void UseScalarTreeOn()\n\nEnable the use of a scalar tree to accelerate contour extraction.\n"},
  {(char*)"UseScalarTreeOff", PyvtkMarchingContourFilter_UseScalarTreeOff, 1,
   (char*)"V.UseScalarTreeOff()\nC++: void UseScalarTreeOff()\n\nEnable the use of a scalar tree to accelerate contour extraction.\n"},
  {(char*)"SetLocator", PyvtkMarchingContourFilter_SetLocator, 1,
   (char*)"V.SetLocator(vtkIncrementalPointLocator)\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSet / get a spatial locator for merging points. By default, an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"GetLocator", PyvtkMarchingContourFilter_GetLocator, 1,
   (char*)"V.GetLocator() -> vtkIncrementalPointLocator\nC++: vtkIncrementalPointLocator *GetLocator()\n\nSet / get a spatial locator for merging points. By default, an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"CreateDefaultLocator", PyvtkMarchingContourFilter_CreateDefaultLocator, 1,
   (char*)"V.CreateDefaultLocator()\nC++: void CreateDefaultLocator()\n\nCreate default locator. Used to create one when none is\nspecified. The locator is used to merge coincident points.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMarchingContourFilter_StaticNew()
{
  return vtkMarchingContourFilter::New();
}

PyObject *PyVTKClass_vtkMarchingContourFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMarchingContourFilter_StaticNew,
    PyvtkMarchingContourFilter_Methods,
    "vtkMarchingContourFilter", modulename,
    NULL, NULL,
    PyvtkMarchingContourFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkMarchingContourFilter_Doc()
{
  static const char *docstring[] = {
    "vtkMarchingContourFilter - generate isosurfaces/isolines from scalar\nvalues\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkMarchingContourFilter is a filter that takes as input any dataset\nand generates on output isosurfaces and/or isolines. The exact form\nof the output depends upon the dimensionality of the input data. Data\nconsisting of 3D cells will generate isosurfaces, data consisting of\n2D cells will generate isolines, and data with 1D or 0D cells will\ngenerate isopoints. Combinations of output type are possi",
    "ble if the\ninput dimension is mixed.\n\nThis filter will identify special dataset types (e.g., structured\npoints) and use the appropriate specialized filter to process the\ndata. For examples, if the input dataset type is a volume, this\nfilter will create an internal vtkMarchingCubes instance and use it.\nThis gives much better performance.\n\nTo use this filter you must specify one or more contour valu",
    "es. You\ncan either use the method SetValue() to specify each contour value,\nor use GenerateValues() to generate a series of evenly spaced\ncontours. It is also possible to accelerate the operation of this\nfilter (at the cost of extra memory) by using a vtkScalarTree. A\nscalar tree is used to quickly locate cells that contain a contour\nsurface. This is especially effective if multiple contours are b",
    "eing\nextracted. If you want to use a scalar tree, invoke the method\nUseScalarTreeOn().\n\nCaveats:\n\nFor unstructured data or structured grids, normals and gradients are\nnot computed.  This calculation will be implemented in the future. In\nthe mean time, use vtkPolyDataNormals to compute the surface normals.\n\nSee Also:\n\nvtkMarchingCubes vtkSliceCubes vtkDividingCubes vtkMarchingSquares\nvtkImageMarchi",
    "ngCubes\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMarchingContourFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMarchingContourFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMarchingContourFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

