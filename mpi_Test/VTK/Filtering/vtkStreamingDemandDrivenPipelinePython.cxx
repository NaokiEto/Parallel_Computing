// python wrapper for vtkStreamingDemandDrivenPipeline
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
#include "vtkStreamingDemandDrivenPipeline.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkStreamingDemandDrivenPipeline(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkStreamingDemandDrivenPipeline(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkStreamingDemandDrivenPipelineNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkStreamingDemandDrivenPipelineNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDemandDrivenPipelineNew
extern "C" { PyObject *PyVTKClass_vtkDemandDrivenPipelineNew(const char *); }
#define DECLARED_PyVTKClass_vtkDemandDrivenPipelineNew
#endif

static const char **PyvtkStreamingDemandDrivenPipeline_Doc();


static PyObject *
PyvtkStreamingDemandDrivenPipeline_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

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
      tempr = op->vtkStreamingDemandDrivenPipeline::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

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
      tempr = op->vtkStreamingDemandDrivenPipeline::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  vtkStreamingDemandDrivenPipeline *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkStreamingDemandDrivenPipeline::NewInstance();
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
PyvtkStreamingDemandDrivenPipeline_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkStreamingDemandDrivenPipeline *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkStreamingDemandDrivenPipeline::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_Update_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->Update();
      }
    else
      {
      tempr = op->vtkStreamingDemandDrivenPipeline::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkStreamingDemandDrivenPipeline_Update_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->Update(temp0);
      }
    else
      {
      tempr = op->vtkStreamingDemandDrivenPipeline::Update(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkStreamingDemandDrivenPipeline_Update(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkStreamingDemandDrivenPipeline_Update_s1(self, args);
    case 1:
      return PyvtkStreamingDemandDrivenPipeline_Update_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Update");
  return NULL;
}



static PyObject *
PyvtkStreamingDemandDrivenPipeline_UpdateWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->UpdateWholeExtent();
      }
    else
      {
      tempr = op->vtkStreamingDemandDrivenPipeline::UpdateWholeExtent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_PropagateUpdateExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PropagateUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->PropagateUpdateExtent(temp0);
      }
    else
      {
      tempr = op->vtkStreamingDemandDrivenPipeline::PropagateUpdateExtent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_SetMaximumNumberOfPieces_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  int temp0;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->SetMaximumNumberOfPieces(temp0, temp1);
      }
    else
      {
      tempr = op->vtkStreamingDemandDrivenPipeline::SetMaximumNumberOfPieces(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkStreamingDemandDrivenPipeline_SetMaximumNumberOfPieces_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  vtkInformation *temp0 = NULL;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->SetMaximumNumberOfPieces(temp0, temp1);
      }
    else
      {
      tempr = op->vtkStreamingDemandDrivenPipeline::SetMaximumNumberOfPieces(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkStreamingDemandDrivenPipeline_SetMaximumNumberOfPieces_Methods[] = {
  {NULL, PyvtkStreamingDemandDrivenPipeline_SetMaximumNumberOfPieces_s1, 1,
   (char*)"@ii"},
  {NULL, PyvtkStreamingDemandDrivenPipeline_SetMaximumNumberOfPieces_s2, 1,
   (char*)"@Oi *vtkInformation"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkStreamingDemandDrivenPipeline_SetMaximumNumberOfPieces(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkStreamingDemandDrivenPipeline_SetMaximumNumberOfPieces_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetMaximumNumberOfPieces");
  return NULL;
}



static PyObject *
PyvtkStreamingDemandDrivenPipeline_GetMaximumNumberOfPieces_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumNumberOfPieces(temp0);
      }
    else
      {
      tempr = op->vtkStreamingDemandDrivenPipeline::GetMaximumNumberOfPieces(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkStreamingDemandDrivenPipeline_GetMaximumNumberOfPieces_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  vtkInformation *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumNumberOfPieces(temp0);
      }
    else
      {
      tempr = op->vtkStreamingDemandDrivenPipeline::GetMaximumNumberOfPieces(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkStreamingDemandDrivenPipeline_GetMaximumNumberOfPieces_Methods[] = {
  {NULL, PyvtkStreamingDemandDrivenPipeline_GetMaximumNumberOfPieces_s1, 1,
   (char*)"@i"},
  {NULL, PyvtkStreamingDemandDrivenPipeline_GetMaximumNumberOfPieces_s2, 1,
   (char*)"@O *vtkInformation"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkStreamingDemandDrivenPipeline_GetMaximumNumberOfPieces(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkStreamingDemandDrivenPipeline_GetMaximumNumberOfPieces_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetMaximumNumberOfPieces");
  return NULL;
}



static PyObject *
PyvtkStreamingDemandDrivenPipeline_SetWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  vtkInformation *temp0 = NULL;
  int temp1[6];
  int save1[6];
  const int size1 = 6;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      tempr = op->SetWholeExtent(temp0, temp1);
      }
    else
      {
      tempr = op->vtkStreamingDemandDrivenPipeline::SetWholeExtent(temp0, temp1);
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
PyvtkStreamingDemandDrivenPipeline_GetWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  vtkInformation *temp0 = NULL;
  int temp1[6];
  int save1[6];
  const int size1 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetWholeExtent(temp0, temp1);
      }
    else
      {
      op->vtkStreamingDemandDrivenPipeline::GetWholeExtent(temp0, temp1);
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
PyvtkStreamingDemandDrivenPipeline_SetUpdateExtentToWholeExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpdateExtentToWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->SetUpdateExtentToWholeExtent(temp0);
      }
    else
      {
      tempr = op->vtkStreamingDemandDrivenPipeline::SetUpdateExtentToWholeExtent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkStreamingDemandDrivenPipeline_SetUpdateExtentToWholeExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpdateExtentToWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  vtkInformation *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      tempr = op->SetUpdateExtentToWholeExtent(temp0);
      }
    else
      {
      tempr = op->vtkStreamingDemandDrivenPipeline::SetUpdateExtentToWholeExtent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkStreamingDemandDrivenPipeline_SetUpdateExtentToWholeExtent_Methods[] = {
  {NULL, PyvtkStreamingDemandDrivenPipeline_SetUpdateExtentToWholeExtent_s1, 1,
   (char*)"@i"},
  {NULL, PyvtkStreamingDemandDrivenPipeline_SetUpdateExtentToWholeExtent_s2, 1,
   (char*)"@O *vtkInformation"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkStreamingDemandDrivenPipeline_SetUpdateExtentToWholeExtent(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkStreamingDemandDrivenPipeline_SetUpdateExtentToWholeExtent_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetUpdateExtentToWholeExtent");
  return NULL;
}



static PyObject *
PyvtkStreamingDemandDrivenPipeline_SetUpdateExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  int temp0;
  int temp1[6];
  int save1[6];
  const int size1 = 6;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      tempr = op->SetUpdateExtent(temp0, temp1);
      }
    else
      {
      tempr = op->vtkStreamingDemandDrivenPipeline::SetUpdateExtent(temp0, temp1);
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
PyvtkStreamingDemandDrivenPipeline_SetUpdateExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  vtkInformation *temp0 = NULL;
  int temp1[6];
  int save1[6];
  const int size1 = 6;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      tempr = op->SetUpdateExtent(temp0, temp1);
      }
    else
      {
      tempr = op->vtkStreamingDemandDrivenPipeline::SetUpdateExtent(temp0, temp1);
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
PyvtkStreamingDemandDrivenPipeline_SetUpdateExtent_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
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
      tempr = op->SetUpdateExtent(temp0, temp1, temp2, temp3);
      }
    else
      {
      tempr = op->vtkStreamingDemandDrivenPipeline::SetUpdateExtent(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkStreamingDemandDrivenPipeline_SetUpdateExtent_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  vtkInformation *temp0 = NULL;
  int temp1;
  int temp2;
  int temp3;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      tempr = op->SetUpdateExtent(temp0, temp1, temp2, temp3);
      }
    else
      {
      tempr = op->vtkStreamingDemandDrivenPipeline::SetUpdateExtent(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkStreamingDemandDrivenPipeline_SetUpdateExtent_Methods[] = {
  {NULL, PyvtkStreamingDemandDrivenPipeline_SetUpdateExtent_s1, 1,
   (char*)"@iO *i"},
  {NULL, PyvtkStreamingDemandDrivenPipeline_SetUpdateExtent_s2, 1,
   (char*)"@OO *vtkInformation *i"},
  {NULL, PyvtkStreamingDemandDrivenPipeline_SetUpdateExtent_s3, 1,
   (char*)"@iiii"},
  {NULL, PyvtkStreamingDemandDrivenPipeline_SetUpdateExtent_s4, 1,
   (char*)"@Oiii *vtkInformation"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkStreamingDemandDrivenPipeline_SetUpdateExtent(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkStreamingDemandDrivenPipeline_SetUpdateExtent_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetUpdateExtent");
  return NULL;
}



static PyObject *
PyvtkStreamingDemandDrivenPipeline_GetUpdateExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  vtkInformation *temp0 = NULL;
  int temp1[6];
  int save1[6];
  const int size1 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetUpdateExtent(temp0, temp1);
      }
    else
      {
      op->vtkStreamingDemandDrivenPipeline::GetUpdateExtent(temp0, temp1);
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
PyvtkStreamingDemandDrivenPipeline_SetUpdatePiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpdatePiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  vtkInformation *temp0 = NULL;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->SetUpdatePiece(temp0, temp1);
      }
    else
      {
      tempr = op->vtkStreamingDemandDrivenPipeline::SetUpdatePiece(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_GetUpdatePiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdatePiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  vtkInformation *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUpdatePiece(temp0);
      }
    else
      {
      tempr = op->vtkStreamingDemandDrivenPipeline::GetUpdatePiece(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_SetUpdateNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpdateNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  vtkInformation *temp0 = NULL;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->SetUpdateNumberOfPieces(temp0, temp1);
      }
    else
      {
      tempr = op->vtkStreamingDemandDrivenPipeline::SetUpdateNumberOfPieces(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_GetUpdateNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  vtkInformation *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUpdateNumberOfPieces(temp0);
      }
    else
      {
      tempr = op->vtkStreamingDemandDrivenPipeline::GetUpdateNumberOfPieces(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_SetUpdateGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpdateGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  vtkInformation *temp0 = NULL;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->SetUpdateGhostLevel(temp0, temp1);
      }
    else
      {
      tempr = op->vtkStreamingDemandDrivenPipeline::SetUpdateGhostLevel(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_GetUpdateGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  vtkInformation *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUpdateGhostLevel(temp0);
      }
    else
      {
      tempr = op->vtkStreamingDemandDrivenPipeline::GetUpdateGhostLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_SetUpdateResolution_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpdateResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  int temp0;
  double temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->SetUpdateResolution(temp0, temp1);
      }
    else
      {
      tempr = op->vtkStreamingDemandDrivenPipeline::SetUpdateResolution(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkStreamingDemandDrivenPipeline_SetUpdateResolution_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpdateResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  vtkInformation *temp0 = NULL;
  double temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->SetUpdateResolution(temp0, temp1);
      }
    else
      {
      tempr = op->vtkStreamingDemandDrivenPipeline::SetUpdateResolution(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkStreamingDemandDrivenPipeline_SetUpdateResolution_Methods[] = {
  {NULL, PyvtkStreamingDemandDrivenPipeline_SetUpdateResolution_s1, 1,
   (char*)"@id"},
  {NULL, PyvtkStreamingDemandDrivenPipeline_SetUpdateResolution_s2, 1,
   (char*)"@Od *vtkInformation"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkStreamingDemandDrivenPipeline_SetUpdateResolution(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkStreamingDemandDrivenPipeline_SetUpdateResolution_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetUpdateResolution");
  return NULL;
}



static PyObject *
PyvtkStreamingDemandDrivenPipeline_GetUpdateResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  vtkInformation *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUpdateResolution(temp0);
      }
    else
      {
      tempr = op->vtkStreamingDemandDrivenPipeline::GetUpdateResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_SetUpdateTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpdateTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  int temp0;
  double temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->SetUpdateTimeStep(temp0, temp1);
      }
    else
      {
      tempr = op->vtkStreamingDemandDrivenPipeline::SetUpdateTimeStep(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_SetRequestExactExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequestExactExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  int temp0;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->SetRequestExactExtent(temp0, temp1);
      }
    else
      {
      tempr = op->vtkStreamingDemandDrivenPipeline::SetRequestExactExtent(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_GetRequestExactExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRequestExactExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRequestExactExtent(temp0);
      }
    else
      {
      tempr = op->vtkStreamingDemandDrivenPipeline::GetRequestExactExtent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_SetExtentTranslator_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentTranslator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  int temp0;
  vtkExtentTranslator *temp1 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkExtentTranslator"))
    {
    if (ap.IsBound())
      {
      tempr = op->SetExtentTranslator(temp0, temp1);
      }
    else
      {
      tempr = op->vtkStreamingDemandDrivenPipeline::SetExtentTranslator(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkStreamingDemandDrivenPipeline_SetExtentTranslator_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentTranslator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  vtkInformation *temp0 = NULL;
  vtkExtentTranslator *temp1 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkExtentTranslator"))
    {
    if (ap.IsBound())
      {
      tempr = op->SetExtentTranslator(temp0, temp1);
      }
    else
      {
      tempr = op->vtkStreamingDemandDrivenPipeline::SetExtentTranslator(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkStreamingDemandDrivenPipeline_SetExtentTranslator_Methods[] = {
  {NULL, PyvtkStreamingDemandDrivenPipeline_SetExtentTranslator_s1, 1,
   (char*)"@iO *vtkExtentTranslator"},
  {NULL, PyvtkStreamingDemandDrivenPipeline_SetExtentTranslator_s2, 1,
   (char*)"@OO *vtkInformation *vtkExtentTranslator"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkStreamingDemandDrivenPipeline_SetExtentTranslator(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkStreamingDemandDrivenPipeline_SetExtentTranslator_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetExtentTranslator");
  return NULL;
}



static PyObject *
PyvtkStreamingDemandDrivenPipeline_GetExtentTranslator_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtentTranslator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  int temp0;
  vtkExtentTranslator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetExtentTranslator(temp0);
      }
    else
      {
      tempr = op->vtkStreamingDemandDrivenPipeline::GetExtentTranslator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkStreamingDemandDrivenPipeline_GetExtentTranslator_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtentTranslator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  vtkInformation *temp0 = NULL;
  vtkExtentTranslator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetExtentTranslator(temp0);
      }
    else
      {
      tempr = op->vtkStreamingDemandDrivenPipeline::GetExtentTranslator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkStreamingDemandDrivenPipeline_GetExtentTranslator_Methods[] = {
  {NULL, PyvtkStreamingDemandDrivenPipeline_GetExtentTranslator_s1, 1,
   (char*)"@i"},
  {NULL, PyvtkStreamingDemandDrivenPipeline_GetExtentTranslator_s2, 1,
   (char*)"@O *vtkInformation"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkStreamingDemandDrivenPipeline_GetExtentTranslator(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkStreamingDemandDrivenPipeline_GetExtentTranslator_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetExtentTranslator");
  return NULL;
}



static PyObject *
PyvtkStreamingDemandDrivenPipeline_SetWholeBoundingBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeBoundingBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  int temp0;
  double temp1[6];
  double save1[6];
  const int size1 = 6;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      tempr = op->SetWholeBoundingBox(temp0, temp1);
      }
    else
      {
      tempr = op->vtkStreamingDemandDrivenPipeline::SetWholeBoundingBox(temp0, temp1);
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
PyvtkStreamingDemandDrivenPipeline_GetWholeBoundingBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeBoundingBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  int temp0;
  double temp1[6];
  double save1[6];
  const int size1 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetWholeBoundingBox(temp0, temp1);
      }
    else
      {
      op->vtkStreamingDemandDrivenPipeline::GetWholeBoundingBox(temp0, temp1);
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
PyvtkStreamingDemandDrivenPipeline_SetPieceBoundingBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPieceBoundingBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  int temp0;
  double temp1[6];
  double save1[6];
  const int size1 = 6;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      tempr = op->SetPieceBoundingBox(temp0, temp1);
      }
    else
      {
      tempr = op->vtkStreamingDemandDrivenPipeline::SetPieceBoundingBox(temp0, temp1);
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
PyvtkStreamingDemandDrivenPipeline_GetPieceBoundingBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPieceBoundingBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  int temp0;
  double temp1[6];
  double save1[6];
  const int size1 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetPieceBoundingBox(temp0, temp1);
      }
    else
      {
      op->vtkStreamingDemandDrivenPipeline::GetPieceBoundingBox(temp0, temp1);
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
PyvtkStreamingDemandDrivenPipeline_REQUEST_UPDATE_EXTENT(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "REQUEST_UPDATE_EXTENT");

  vtkInformationRequestKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkStreamingDemandDrivenPipeline::REQUEST_UPDATE_EXTENT();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_REQUEST_UPDATE_EXTENT_INFORMATION(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "REQUEST_UPDATE_EXTENT_INFORMATION");

  vtkInformationRequestKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkStreamingDemandDrivenPipeline::REQUEST_UPDATE_EXTENT_INFORMATION();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_REQUEST_RESOLUTION_PROPAGATE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "REQUEST_RESOLUTION_PROPAGATE");

  vtkInformationRequestKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkStreamingDemandDrivenPipeline::REQUEST_RESOLUTION_PROPAGATE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_CONTINUE_EXECUTING(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CONTINUE_EXECUTING");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkStreamingDemandDrivenPipeline::CONTINUE_EXECUTING();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_EXTENT_TRANSLATOR(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "EXTENT_TRANSLATOR");

  vtkInformationObjectBaseKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkStreamingDemandDrivenPipeline::EXTENT_TRANSLATOR();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_UPDATE_EXTENT_INITIALIZED(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "UPDATE_EXTENT_INITIALIZED");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkStreamingDemandDrivenPipeline::UPDATE_EXTENT_INITIALIZED();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_UPDATE_EXTENT(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "UPDATE_EXTENT");

  vtkInformationIntegerVectorKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkStreamingDemandDrivenPipeline::UPDATE_EXTENT();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_UPDATE_PIECE_NUMBER(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "UPDATE_PIECE_NUMBER");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkStreamingDemandDrivenPipeline::UPDATE_PIECE_NUMBER();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_UPDATE_NUMBER_OF_PIECES(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "UPDATE_NUMBER_OF_PIECES");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkStreamingDemandDrivenPipeline::UPDATE_NUMBER_OF_PIECES();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_UPDATE_NUMBER_OF_GHOST_LEVELS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "UPDATE_NUMBER_OF_GHOST_LEVELS");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkStreamingDemandDrivenPipeline::UPDATE_NUMBER_OF_GHOST_LEVELS();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_COMBINED_UPDATE_EXTENT(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "COMBINED_UPDATE_EXTENT");

  vtkInformationIntegerVectorKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkStreamingDemandDrivenPipeline::COMBINED_UPDATE_EXTENT();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_UPDATE_EXTENT_TRANSLATED(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "UPDATE_EXTENT_TRANSLATED");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkStreamingDemandDrivenPipeline::UPDATE_EXTENT_TRANSLATED();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_WHOLE_EXTENT(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "WHOLE_EXTENT");

  vtkInformationIntegerVectorKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkStreamingDemandDrivenPipeline::WHOLE_EXTENT();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_UNRESTRICTED_UPDATE_EXTENT(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "UNRESTRICTED_UPDATE_EXTENT");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkStreamingDemandDrivenPipeline::UNRESTRICTED_UPDATE_EXTENT();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_MAXIMUM_NUMBER_OF_PIECES(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "MAXIMUM_NUMBER_OF_PIECES");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkStreamingDemandDrivenPipeline::MAXIMUM_NUMBER_OF_PIECES();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_WHOLE_BOUNDING_BOX(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "WHOLE_BOUNDING_BOX");

  vtkInformationDoubleVectorKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkStreamingDemandDrivenPipeline::WHOLE_BOUNDING_BOX();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_PIECE_BOUNDING_BOX(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PIECE_BOUNDING_BOX");

  vtkInformationDoubleVectorKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkStreamingDemandDrivenPipeline::PIECE_BOUNDING_BOX();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_EXACT_EXTENT(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "EXACT_EXTENT");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkStreamingDemandDrivenPipeline::EXACT_EXTENT();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_TIME_STEPS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TIME_STEPS");

  vtkInformationDoubleVectorKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkStreamingDemandDrivenPipeline::TIME_STEPS();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_TIME_RANGE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TIME_RANGE");

  vtkInformationDoubleVectorKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkStreamingDemandDrivenPipeline::TIME_RANGE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_UPDATE_TIME_STEPS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "UPDATE_TIME_STEPS");

  vtkInformationDoubleVectorKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkStreamingDemandDrivenPipeline::UPDATE_TIME_STEPS();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_PRIORITY(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PRIORITY");

  vtkInformationDoubleKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkStreamingDemandDrivenPipeline::PRIORITY();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_UPDATE_RESOLUTION(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "UPDATE_RESOLUTION");

  vtkInformationDoubleKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkStreamingDemandDrivenPipeline::UPDATE_RESOLUTION();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_REMOVE_ATTRIBUTE_INFORMATION(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "REMOVE_ATTRIBUTE_INFORMATION");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkStreamingDemandDrivenPipeline::REMOVE_ATTRIBUTE_INFORMATION();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_FAST_PATH_FOR_TEMPORAL_DATA(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FAST_PATH_FOR_TEMPORAL_DATA");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkStreamingDemandDrivenPipeline::FAST_PATH_FOR_TEMPORAL_DATA();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_FAST_PATH_OBJECT_TYPE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FAST_PATH_OBJECT_TYPE");

  vtkInformationStringKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkStreamingDemandDrivenPipeline::FAST_PATH_OBJECT_TYPE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_FAST_PATH_ID_TYPE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FAST_PATH_ID_TYPE");

  vtkInformationStringKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkStreamingDemandDrivenPipeline::FAST_PATH_ID_TYPE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_FAST_PATH_OBJECT_ID(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FAST_PATH_OBJECT_ID");

  vtkInformationIdTypeKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkStreamingDemandDrivenPipeline::FAST_PATH_OBJECT_ID();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_ComputePriority_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputePriority");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->ComputePriority();
      }
    else
      {
      tempr = op->vtkStreamingDemandDrivenPipeline::ComputePriority();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkStreamingDemandDrivenPipeline_ComputePriority_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputePriority");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  int temp0;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->ComputePriority(temp0);
      }
    else
      {
      tempr = op->vtkStreamingDemandDrivenPipeline::ComputePriority(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkStreamingDemandDrivenPipeline_ComputePriority(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkStreamingDemandDrivenPipeline_ComputePriority_s1(self, args);
    case 1:
      return PyvtkStreamingDemandDrivenPipeline_ComputePriority_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ComputePriority");
  return NULL;
}


static PyMethodDef PyvtkStreamingDemandDrivenPipeline_Methods[] = {
  {(char*)"GetClassName", PyvtkStreamingDemandDrivenPipeline_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStreamingDemandDrivenPipeline_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStreamingDemandDrivenPipeline_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkStreamingDemandDrivenPipeline\nC++: vtkStreamingDemandDrivenPipeline *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStreamingDemandDrivenPipeline_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStreamingDemandDrivenPipeline\nC++: vtkStreamingDemandDrivenPipeline *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Update", PyvtkStreamingDemandDrivenPipeline_Update, 1,
   (char*)"V.Update() -> int\nC++: virtual int Update()\nV.Update(int) -> int\nC++: virtual int Update(int port)\n\nBring the outputs up-to-date.\n"},
  {(char*)"UpdateWholeExtent", PyvtkStreamingDemandDrivenPipeline_UpdateWholeExtent, 1,
   (char*)"V.UpdateWholeExtent() -> int\nC++: virtual int UpdateWholeExtent()\n\nBring the outputs up-to-date.\n"},
  {(char*)"PropagateUpdateExtent", PyvtkStreamingDemandDrivenPipeline_PropagateUpdateExtent, 1,
   (char*)"V.PropagateUpdateExtent(int) -> int\nC++: int PropagateUpdateExtent(int outputPort)\n\nPropagate the update request from the given output port back\nthrough the pipeline.  Should be called only when information is\nup to date.\n"},
  {(char*)"SetMaximumNumberOfPieces", PyvtkStreamingDemandDrivenPipeline_SetMaximumNumberOfPieces, 1,
   (char*)"V.SetMaximumNumberOfPieces(int, int) -> int\nC++: int SetMaximumNumberOfPieces(int port, int n)\nV.SetMaximumNumberOfPieces(vtkInformation, int) -> int\nC++: int SetMaximumNumberOfPieces(vtkInformation *, int n)\n\nSet/Get the maximum number of pieces that can be requested from\nthe given port.  The maximum number of pieces is meta data for\nunstructured data sets.  It gets set by the source during the\nupdate information call.  A value of -1 indicates that there is\nno maximum.\n"},
  {(char*)"GetMaximumNumberOfPieces", PyvtkStreamingDemandDrivenPipeline_GetMaximumNumberOfPieces, 1,
   (char*)"V.GetMaximumNumberOfPieces(int) -> int\nC++: int GetMaximumNumberOfPieces(int port)\nV.GetMaximumNumberOfPieces(vtkInformation) -> int\nC++: int GetMaximumNumberOfPieces(vtkInformation *)\n\nSet/Get the maximum number of pieces that can be requested from\nthe given port.  The maximum number of pieces is meta data for\nunstructured data sets.  It gets set by the source during the\nupdate information call.  A value of -1 indicates that there is\nno maximum.\n"},
  {(char*)"SetWholeExtent", PyvtkStreamingDemandDrivenPipeline_SetWholeExtent, 1,
   (char*)"V.SetWholeExtent(vtkInformation, [int, int, int, int, int, int])\n    -> int\nC++: int SetWholeExtent(vtkInformation *, int extent[6])\n\nSet/Get the whole extent of an output port.  The whole extent is\nmeta data for structured data sets.  It gets set by the algorithm\nduring the update information pass.\n"},
  {(char*)"GetWholeExtent", PyvtkStreamingDemandDrivenPipeline_GetWholeExtent, 1,
   (char*)"V.GetWholeExtent(vtkInformation, [int, int, int, int, int, int])\nC++: void GetWholeExtent(vtkInformation *, int extent[6])\n\nSet/Get the whole extent of an output port.  The whole extent is\nmeta data for structured data sets.  It gets set by the algorithm\nduring the update information pass.\n"},
  {(char*)"SetUpdateExtentToWholeExtent", PyvtkStreamingDemandDrivenPipeline_SetUpdateExtentToWholeExtent, 1,
   (char*)"V.SetUpdateExtentToWholeExtent(int) -> int\nC++: int SetUpdateExtentToWholeExtent(int port)\nV.SetUpdateExtentToWholeExtent(vtkInformation) -> int\nC++: int SetUpdateExtentToWholeExtent(vtkInformation *)\n\nIf the whole input extent is required to generate the requested\noutput extent, this method can be called to set the input update\nextent to the whole input extent. This method assumes that the\nwhole extent is known (that UpdateInformation has been called)\n"},
  {(char*)"SetUpdateExtent", PyvtkStreamingDemandDrivenPipeline_SetUpdateExtent, 1,
   (char*)"V.SetUpdateExtent(int, [int, int, int, int, int, int]) -> int\nC++: int SetUpdateExtent(int port, int extent[6])\nV.SetUpdateExtent(vtkInformation, [int, int, int, int, int, int])\n    -> int\nC++: int SetUpdateExtent(vtkInformation *, int extent[6])\nV.SetUpdateExtent(int, int, int, int) -> int\nC++: int SetUpdateExtent(int port, int piece, int numPieces,\n    int ghostLevel)\nV.SetUpdateExtent(vtkInformation, int, int, int) -> int\nC++: int SetUpdateExtent(vtkInformation *, int piece,\n    int numPieces, int ghostLevel)\n\nGet/Set the update extent for output ports that use 3D extents.\n"},
  {(char*)"GetUpdateExtent", PyvtkStreamingDemandDrivenPipeline_GetUpdateExtent, 1,
   (char*)"V.GetUpdateExtent(vtkInformation, [int, int, int, int, int, int])\nC++: void GetUpdateExtent(vtkInformation *, int extent[6])\n\nGet/Set the update extent for output ports that use 3D extents.\n"},
  {(char*)"SetUpdatePiece", PyvtkStreamingDemandDrivenPipeline_SetUpdatePiece, 1,
   (char*)"V.SetUpdatePiece(vtkInformation, int) -> int\nC++: int SetUpdatePiece(vtkInformation *, int piece)\n\nSet/Get the update piece, update number of pieces, and update\nnumber of ghost levels for an output port.  Similar to update\nextent in 3D.\n"},
  {(char*)"GetUpdatePiece", PyvtkStreamingDemandDrivenPipeline_GetUpdatePiece, 1,
   (char*)"V.GetUpdatePiece(vtkInformation) -> int\nC++: int GetUpdatePiece(vtkInformation *)\n\nSet/Get the update piece, update number of pieces, and update\nnumber of ghost levels for an output port.  Similar to update\nextent in 3D.\n"},
  {(char*)"SetUpdateNumberOfPieces", PyvtkStreamingDemandDrivenPipeline_SetUpdateNumberOfPieces, 1,
   (char*)"V.SetUpdateNumberOfPieces(vtkInformation, int) -> int\nC++: int SetUpdateNumberOfPieces(vtkInformation *, int n)\n\nSet/Get the update piece, update number of pieces, and update\nnumber of ghost levels for an output port.  Similar to update\nextent in 3D.\n"},
  {(char*)"GetUpdateNumberOfPieces", PyvtkStreamingDemandDrivenPipeline_GetUpdateNumberOfPieces, 1,
   (char*)"V.GetUpdateNumberOfPieces(vtkInformation) -> int\nC++: int GetUpdateNumberOfPieces(vtkInformation *)\n\nSet/Get the update piece, update number of pieces, and update\nnumber of ghost levels for an output port.  Similar to update\nextent in 3D.\n"},
  {(char*)"SetUpdateGhostLevel", PyvtkStreamingDemandDrivenPipeline_SetUpdateGhostLevel, 1,
   (char*)"V.SetUpdateGhostLevel(vtkInformation, int) -> int\nC++: int SetUpdateGhostLevel(vtkInformation *, int n)\n\nSet/Get the update piece, update number of pieces, and update\nnumber of ghost levels for an output port.  Similar to update\nextent in 3D.\n"},
  {(char*)"GetUpdateGhostLevel", PyvtkStreamingDemandDrivenPipeline_GetUpdateGhostLevel, 1,
   (char*)"V.GetUpdateGhostLevel(vtkInformation) -> int\nC++: int GetUpdateGhostLevel(vtkInformation *)\n\nSet/Get the update piece, update number of pieces, and update\nnumber of ghost levels for an output port.  Similar to update\nextent in 3D.\n"},
  {(char*)"SetUpdateResolution", PyvtkStreamingDemandDrivenPipeline_SetUpdateResolution, 1,
   (char*)"V.SetUpdateResolution(int, float) -> int\nC++: int SetUpdateResolution(int port, double r)\nV.SetUpdateResolution(vtkInformation, float) -> int\nC++: int SetUpdateResolution(vtkInformation *, double r)\n\nSet/Get the update piece, update number of pieces, and update\nnumber of ghost levels for an output port.  Similar to update\nextent in 3D.\n"},
  {(char*)"GetUpdateResolution", PyvtkStreamingDemandDrivenPipeline_GetUpdateResolution, 1,
   (char*)"V.GetUpdateResolution(vtkInformation) -> float\nC++: double GetUpdateResolution(vtkInformation *)\n\nSet/Get the update piece, update number of pieces, and update\nnumber of ghost levels for an output port.  Similar to update\nextent in 3D.\n"},
  {(char*)"SetUpdateTimeStep", PyvtkStreamingDemandDrivenPipeline_SetUpdateTimeStep, 1,
   (char*)"V.SetUpdateTimeStep(int, float) -> int\nC++: int SetUpdateTimeStep(int port, double time)\n\nGet/Set the update extent for output ports that use Temporal\nExtents\n"},
  {(char*)"SetRequestExactExtent", PyvtkStreamingDemandDrivenPipeline_SetRequestExactExtent, 1,
   (char*)"V.SetRequestExactExtent(int, int) -> int\nC++: int SetRequestExactExtent(int port, int flag)\n\nThis request flag indicates whether the requester can handle more\ndata than requested for the given port.  Right now it is used in\nvtkImageData.  Image filters can return more data than requested.\nThe the consumer cannot handle this (i.e. DataSetToDataSetFitler)\nthe image will crop itself.  This functionality used to be in\nImageToStructuredPoints.\n"},
  {(char*)"GetRequestExactExtent", PyvtkStreamingDemandDrivenPipeline_GetRequestExactExtent, 1,
   (char*)"V.GetRequestExactExtent(int) -> int\nC++: int GetRequestExactExtent(int port)\n\nThis request flag indicates whether the requester can handle more\ndata than requested for the given port.  Right now it is used in\nvtkImageData.  Image filters can return more data than requested.\nThe the consumer cannot handle this (i.e. DataSetToDataSetFitler)\nthe image will crop itself.  This functionality used to be in\nImageToStructuredPoints.\n"},
  {(char*)"SetExtentTranslator", PyvtkStreamingDemandDrivenPipeline_SetExtentTranslator, 1,
   (char*)"V.SetExtentTranslator(int, vtkExtentTranslator) -> int\nC++: int SetExtentTranslator(int port,\n    vtkExtentTranslator *translator)\nV.SetExtentTranslator(vtkInformation, vtkExtentTranslator) -> int\nC++: int SetExtentTranslator(vtkInformation *,\n    vtkExtentTranslator *translator)\n\nGet/Set the object that will translate pieces into structured\nextents for an output port.\n"},
  {(char*)"GetExtentTranslator", PyvtkStreamingDemandDrivenPipeline_GetExtentTranslator, 1,
   (char*)"V.GetExtentTranslator(int) -> vtkExtentTranslator\nC++: vtkExtentTranslator *GetExtentTranslator(int port)\nV.GetExtentTranslator(vtkInformation) -> vtkExtentTranslator\nC++: vtkExtentTranslator *GetExtentTranslator(\n    vtkInformation *info)\n\nGet/Set the object that will translate pieces into structured\nextents for an output port.\n"},
  {(char*)"SetWholeBoundingBox", PyvtkStreamingDemandDrivenPipeline_SetWholeBoundingBox, 1,
   (char*)"V.SetWholeBoundingBox(int, [float, float, float, float, float,\n    float]) -> int\nC++: int SetWholeBoundingBox(int port, double bb[6])\n\nSet/Get the whole bounding box of an output port data object. The\nwhole whole bounding box is meta data for data sets.  It gets set\nby the algorithm during the update information pass.\n"},
  {(char*)"GetWholeBoundingBox", PyvtkStreamingDemandDrivenPipeline_GetWholeBoundingBox, 1,
   (char*)"V.GetWholeBoundingBox(int, [float, float, float, float, float,\n    float])\nC++: void GetWholeBoundingBox(int port, double bb[6])\n\nSet/Get the whole bounding box of an output port data object. The\nwhole whole bounding box is meta data for data sets.  It gets set\nby the algorithm during the update information pass.\n"},
  {(char*)"SetPieceBoundingBox", PyvtkStreamingDemandDrivenPipeline_SetPieceBoundingBox, 1,
   (char*)"V.SetPieceBoundingBox(int, [float, float, float, float, float,\n    float]) -> int\nC++: int SetPieceBoundingBox(int port, double bb[6])\n\nSet/Get the piece bounding box of an output port data object. The\npiece bounding box is meta data for data sets.  It gets set by\nthe algorithm during the update extent information pass.\n"},
  {(char*)"GetPieceBoundingBox", PyvtkStreamingDemandDrivenPipeline_GetPieceBoundingBox, 1,
   (char*)"V.GetPieceBoundingBox(int, [float, float, float, float, float,\n    float])\nC++: void GetPieceBoundingBox(int port, double bb[6])\n\nSet/Get the piece bounding box of an output port data object. The\npiece bounding box is meta data for data sets.  It gets set by\nthe algorithm during the update extent information pass.\n"},
  {(char*)"REQUEST_UPDATE_EXTENT", PyvtkStreamingDemandDrivenPipeline_REQUEST_UPDATE_EXTENT, 1,
   (char*)"V.REQUEST_UPDATE_EXTENT() -> vtkInformationRequestKey\nC++: static vtkInformationRequestKey *REQUEST_UPDATE_EXTENT()\n\nKey defining a request to propagate the update extent upstream.\n"},
  {(char*)"REQUEST_UPDATE_EXTENT_INFORMATION", PyvtkStreamingDemandDrivenPipeline_REQUEST_UPDATE_EXTENT_INFORMATION, 1,
   (char*)"V.REQUEST_UPDATE_EXTENT_INFORMATION() -> vtkInformationRequestKey\nC++: static vtkInformationRequestKey *REQUEST_UPDATE_EXTENT_INFORMATION(\n    )\n\nKey defining a request to propagate information about the update\nextent downstream.\n"},
  {(char*)"REQUEST_RESOLUTION_PROPAGATE", PyvtkStreamingDemandDrivenPipeline_REQUEST_RESOLUTION_PROPAGATE, 1,
   (char*)"V.REQUEST_RESOLUTION_PROPAGATE() -> vtkInformationRequestKey\nC++: static vtkInformationRequestKey *REQUEST_RESOLUTION_PROPAGATE(\n    )\n\nKey defining to propagate resolution changes up the pipeline.\n"},
  {(char*)"CONTINUE_EXECUTING", PyvtkStreamingDemandDrivenPipeline_CONTINUE_EXECUTING, 1,
   (char*)"V.CONTINUE_EXECUTING() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *CONTINUE_EXECUTING()\n\nKey for an algorithm to store in a request to tell this executive\nto keep executing it.\n"},
  {(char*)"EXTENT_TRANSLATOR", PyvtkStreamingDemandDrivenPipeline_EXTENT_TRANSLATOR, 1,
   (char*)"V.EXTENT_TRANSLATOR() -> vtkInformationObjectBaseKey\nC++: static vtkInformationObjectBaseKey *EXTENT_TRANSLATOR()\n\nKey to store an extent translator in pipeline information.\n"},
  {(char*)"UPDATE_EXTENT_INITIALIZED", PyvtkStreamingDemandDrivenPipeline_UPDATE_EXTENT_INITIALIZED, 1,
   (char*)"V.UPDATE_EXTENT_INITIALIZED() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *UPDATE_EXTENT_INITIALIZED()\n\nKeys to store an update request in pipeline information.\n"},
  {(char*)"UPDATE_EXTENT", PyvtkStreamingDemandDrivenPipeline_UPDATE_EXTENT, 1,
   (char*)"V.UPDATE_EXTENT() -> vtkInformationIntegerVectorKey\nC++: static vtkInformationIntegerVectorKey *UPDATE_EXTENT()\n\nKeys to store an update request in pipeline information.\n"},
  {(char*)"UPDATE_PIECE_NUMBER", PyvtkStreamingDemandDrivenPipeline_UPDATE_PIECE_NUMBER, 1,
   (char*)"V.UPDATE_PIECE_NUMBER() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *UPDATE_PIECE_NUMBER()\n\nKeys to store an update request in pipeline information.\n"},
  {(char*)"UPDATE_NUMBER_OF_PIECES", PyvtkStreamingDemandDrivenPipeline_UPDATE_NUMBER_OF_PIECES, 1,
   (char*)"V.UPDATE_NUMBER_OF_PIECES() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *UPDATE_NUMBER_OF_PIECES()\n\nKeys to store an update request in pipeline information.\n"},
  {(char*)"UPDATE_NUMBER_OF_GHOST_LEVELS", PyvtkStreamingDemandDrivenPipeline_UPDATE_NUMBER_OF_GHOST_LEVELS, 1,
   (char*)"V.UPDATE_NUMBER_OF_GHOST_LEVELS() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *UPDATE_NUMBER_OF_GHOST_LEVELS(\n    )\n\nKeys to store an update request in pipeline information.\n"},
  {(char*)"COMBINED_UPDATE_EXTENT", PyvtkStreamingDemandDrivenPipeline_COMBINED_UPDATE_EXTENT, 1,
   (char*)"V.COMBINED_UPDATE_EXTENT() -> vtkInformationIntegerVectorKey\nC++: static vtkInformationIntegerVectorKey *COMBINED_UPDATE_EXTENT(\n    )\n\nKey for combining the update extents requested by all consumers,\nso that the final extent that is produced satisfies all\nconsumers.\n"},
  {(char*)"UPDATE_EXTENT_TRANSLATED", PyvtkStreamingDemandDrivenPipeline_UPDATE_EXTENT_TRANSLATED, 1,
   (char*)"V.UPDATE_EXTENT_TRANSLATED() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *UPDATE_EXTENT_TRANSLATED()\n\nThis is set if the extent was set through extent translation.\nGenerateGhostLevelArray() is called only when this is set.\n"},
  {(char*)"WHOLE_EXTENT", PyvtkStreamingDemandDrivenPipeline_WHOLE_EXTENT, 1,
   (char*)"V.WHOLE_EXTENT() -> vtkInformationIntegerVectorKey\nC++: static vtkInformationIntegerVectorKey *WHOLE_EXTENT()\n\nKey to store the whole extent provided in pipeline information.\n"},
  {(char*)"UNRESTRICTED_UPDATE_EXTENT", PyvtkStreamingDemandDrivenPipeline_UNRESTRICTED_UPDATE_EXTENT, 1,
   (char*)"V.UNRESTRICTED_UPDATE_EXTENT() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *UNRESTRICTED_UPDATE_EXTENT()\n\nThis is set if the update extent is not restricted to the whole\nextent, for sources that can generate an extent of any requested\nsize.\n"},
  {(char*)"MAXIMUM_NUMBER_OF_PIECES", PyvtkStreamingDemandDrivenPipeline_MAXIMUM_NUMBER_OF_PIECES, 1,
   (char*)"V.MAXIMUM_NUMBER_OF_PIECES() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *MAXIMUM_NUMBER_OF_PIECES()\n\nKey to store the maximum number of pieces provided in pipeline\ninformation.\n"},
  {(char*)"WHOLE_BOUNDING_BOX", PyvtkStreamingDemandDrivenPipeline_WHOLE_BOUNDING_BOX, 1,
   (char*)"V.WHOLE_BOUNDING_BOX() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *WHOLE_BOUNDING_BOX()\n\nKey to store the bounding box of the entire data set in pipeline\ninformation.\n"},
  {(char*)"PIECE_BOUNDING_BOX", PyvtkStreamingDemandDrivenPipeline_PIECE_BOUNDING_BOX, 1,
   (char*)"V.PIECE_BOUNDING_BOX() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *PIECE_BOUNDING_BOX()\n\nKey to store the bounding box of a portion of the data set in\npipeline information.\n"},
  {(char*)"EXACT_EXTENT", PyvtkStreamingDemandDrivenPipeline_EXACT_EXTENT, 1,
   (char*)"V.EXACT_EXTENT() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *EXACT_EXTENT()\n\nKey to specify the request for exact extent in pipeline\ninformation.\n"},
  {(char*)"TIME_STEPS", PyvtkStreamingDemandDrivenPipeline_TIME_STEPS, 1,
   (char*)"V.TIME_STEPS() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *TIME_STEPS()\n\nKey to store available time steps.\n"},
  {(char*)"TIME_RANGE", PyvtkStreamingDemandDrivenPipeline_TIME_RANGE, 1,
   (char*)"V.TIME_RANGE() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *TIME_RANGE()\n\nKey to store available time range for continuous sources.\n"},
  {(char*)"UPDATE_TIME_STEPS", PyvtkStreamingDemandDrivenPipeline_UPDATE_TIME_STEPS, 1,
   (char*)"V.UPDATE_TIME_STEPS() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *UPDATE_TIME_STEPS()\n\nUpdate time steps requested by the pipeline.\n"},
  {(char*)"PRIORITY", PyvtkStreamingDemandDrivenPipeline_PRIORITY, 1,
   (char*)"V.PRIORITY() -> vtkInformationDoubleKey\nC++: static vtkInformationDoubleKey *PRIORITY()\n\nKey that specifies from 0.0 to 1.0 the pipeline computed priority\nof this update extent. 0.0 means does not contribute and can be\nskipped.\n"},
  {(char*)"UPDATE_RESOLUTION", PyvtkStreamingDemandDrivenPipeline_UPDATE_RESOLUTION, 1,
   (char*)"V.UPDATE_RESOLUTION() -> vtkInformationDoubleKey\nC++: static vtkInformationDoubleKey *UPDATE_RESOLUTION()\n\nKey that specifies a requested resolution level for this update\nextent. 0.0 is very low and 1.0 is full resolution.\n"},
  {(char*)"REMOVE_ATTRIBUTE_INFORMATION", PyvtkStreamingDemandDrivenPipeline_REMOVE_ATTRIBUTE_INFORMATION, 1,
   (char*)"V.REMOVE_ATTRIBUTE_INFORMATION() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *REMOVE_ATTRIBUTE_INFORMATION(\n    )\n\nUsed internally to validate meta information as it flows through\npipeline\n"},
  {(char*)"FAST_PATH_FOR_TEMPORAL_DATA", PyvtkStreamingDemandDrivenPipeline_FAST_PATH_FOR_TEMPORAL_DATA, 1,
   (char*)"V.FAST_PATH_FOR_TEMPORAL_DATA() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *FAST_PATH_FOR_TEMPORAL_DATA(\n    )\n\n"},
  {(char*)"FAST_PATH_OBJECT_TYPE", PyvtkStreamingDemandDrivenPipeline_FAST_PATH_OBJECT_TYPE, 1,
   (char*)"V.FAST_PATH_OBJECT_TYPE() -> vtkInformationStringKey\nC++: static vtkInformationStringKey *FAST_PATH_OBJECT_TYPE()\n\n"},
  {(char*)"FAST_PATH_ID_TYPE", PyvtkStreamingDemandDrivenPipeline_FAST_PATH_ID_TYPE, 1,
   (char*)"V.FAST_PATH_ID_TYPE() -> vtkInformationStringKey\nC++: static vtkInformationStringKey *FAST_PATH_ID_TYPE()\n\n"},
  {(char*)"FAST_PATH_OBJECT_ID", PyvtkStreamingDemandDrivenPipeline_FAST_PATH_OBJECT_ID, 1,
   (char*)"V.FAST_PATH_OBJECT_ID() -> vtkInformationIdTypeKey\nC++: static vtkInformationIdTypeKey *FAST_PATH_OBJECT_ID()\n\n"},
  {(char*)"ComputePriority", PyvtkStreamingDemandDrivenPipeline_ComputePriority, 1,
   (char*)"V.ComputePriority() -> float\nC++: double ComputePriority()\nV.ComputePriority(int) -> float\nC++: virtual double ComputePriority(int port)\n\nIssues pipeline request to determine and return the priority of\nthe piece described by the current update extent. The priority is\na number between 0.0 and 1.0 with 0 meaning skippable\n(REQUEST_DATA not needed) and 1.0 meaning important.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkStreamingDemandDrivenPipeline_StaticNew()
{
  return vtkStreamingDemandDrivenPipeline::New();
}

PyObject *PyVTKClass_vtkStreamingDemandDrivenPipelineNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkStreamingDemandDrivenPipeline_StaticNew,
    PyvtkStreamingDemandDrivenPipeline_Methods,
    "vtkStreamingDemandDrivenPipeline", modulename,
    NULL, NULL,
    PyvtkStreamingDemandDrivenPipeline_Doc(),
    PyVTKClass_vtkDemandDrivenPipelineNew(modulename));
  return cls;
}

const char **PyvtkStreamingDemandDrivenPipeline_Doc()
{
  static const char *docstring[] = {
    "vtkStreamingDemandDrivenPipeline - Executive supporting partial\nupdates.\n\n",
    "Superclass: vtkDemandDrivenPipeline\n\n",
    "vtkStreamingDemandDrivenPipeline is an executive that supports\nupdating only a portion of the data set in the pipeline.  This is the\nstyle of pipeline update that is provided by the old-style VTK 4.x\npipeline.  Instead of always updating an entire data set, this\nexecutive supports asking for pieces or sub-extents.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStreamingDemandDrivenPipeline(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStreamingDemandDrivenPipelineNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStreamingDemandDrivenPipeline", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_UPDATE_EXTENT_COMBINE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_UPDATE_EXTENT_REPLACE", o) != 0)
    {
    Py_DECREF(o);
    }

}

