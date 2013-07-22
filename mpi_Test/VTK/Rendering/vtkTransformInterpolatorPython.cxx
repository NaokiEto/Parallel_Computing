// python wrapper for vtkTransformInterpolator
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
#include "vtkTransformInterpolator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTransformInterpolator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTransformInterpolator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTransformInterpolatorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTransformInterpolatorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkTransformInterpolator_Doc();


static PyObject *
PyvtkTransformInterpolator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

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
      tempr = op->vtkTransformInterpolator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

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
      tempr = op->vtkTransformInterpolator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  vtkTransformInterpolator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTransformInterpolator::NewInstance();
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
PyvtkTransformInterpolator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTransformInterpolator *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTransformInterpolator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_GetNumberOfTransforms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTransforms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfTransforms();
      }
    else
      {
      tempr = op->vtkTransformInterpolator::GetNumberOfTransforms();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_GetMinimumT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinimumT();
      }
    else
      {
      tempr = op->vtkTransformInterpolator::GetMinimumT();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_GetMaximumT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumT();
      }
    else
      {
      tempr = op->vtkTransformInterpolator::GetMaximumT();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkTransformInterpolator::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_AddTransform_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  double temp0;
  vtkTransform *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkTransform"))
    {
    if (ap.IsBound())
      {
      op->AddTransform(temp0, temp1);
      }
    else
      {
      op->vtkTransformInterpolator::AddTransform(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTransformInterpolator_AddTransform_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  double temp0;
  vtkMatrix4x4 *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4"))
    {
    if (ap.IsBound())
      {
      op->AddTransform(temp0, temp1);
      }
    else
      {
      op->vtkTransformInterpolator::AddTransform(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTransformInterpolator_AddTransform_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  double temp0;
  vtkProp3D *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkProp3D"))
    {
    if (ap.IsBound())
      {
      op->AddTransform(temp0, temp1);
      }
    else
      {
      op->vtkTransformInterpolator::AddTransform(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTransformInterpolator_AddTransform_Methods[] = {
  {NULL, PyvtkTransformInterpolator_AddTransform_s1, 1,
   (char*)"@dO *vtkTransform"},
  {NULL, PyvtkTransformInterpolator_AddTransform_s2, 1,
   (char*)"@dO *vtkMatrix4x4"},
  {NULL, PyvtkTransformInterpolator_AddTransform_s3, 1,
   (char*)"@dO *vtkProp3D"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTransformInterpolator_AddTransform(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTransformInterpolator_AddTransform_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddTransform");
  return NULL;
}



static PyObject *
PyvtkTransformInterpolator_RemoveTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveTransform(temp0);
      }
    else
      {
      op->vtkTransformInterpolator::RemoveTransform(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_InterpolateTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  double temp0;
  vtkTransform *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkTransform"))
    {
    if (ap.IsBound())
      {
      op->InterpolateTransform(temp0, temp1);
      }
    else
      {
      op->vtkTransformInterpolator::InterpolateTransform(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_SetInterpolationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationType(temp0);
      }
    else
      {
      op->vtkTransformInterpolator::SetInterpolationType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_GetInterpolationTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInterpolationTypeMinValue();
      }
    else
      {
      tempr = op->vtkTransformInterpolator::GetInterpolationTypeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_GetInterpolationTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInterpolationTypeMaxValue();
      }
    else
      {
      tempr = op->vtkTransformInterpolator::GetInterpolationTypeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_GetInterpolationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInterpolationType();
      }
    else
      {
      tempr = op->vtkTransformInterpolator::GetInterpolationType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_SetInterpolationTypeToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationTypeToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationTypeToLinear();
      }
    else
      {
      op->vtkTransformInterpolator::SetInterpolationTypeToLinear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_SetInterpolationTypeToSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationTypeToSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationTypeToSpline();
      }
    else
      {
      op->vtkTransformInterpolator::SetInterpolationTypeToSpline();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_SetInterpolationTypeToManual(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationTypeToManual");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationTypeToManual();
      }
    else
      {
      op->vtkTransformInterpolator::SetInterpolationTypeToManual();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_SetPositionInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPositionInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  vtkTupleInterpolator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTupleInterpolator"))
    {
    if (ap.IsBound())
      {
      op->SetPositionInterpolator(temp0);
      }
    else
      {
      op->vtkTransformInterpolator::SetPositionInterpolator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_GetPositionInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  vtkTupleInterpolator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPositionInterpolator();
      }
    else
      {
      tempr = op->vtkTransformInterpolator::GetPositionInterpolator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_SetScaleInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  vtkTupleInterpolator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTupleInterpolator"))
    {
    if (ap.IsBound())
      {
      op->SetScaleInterpolator(temp0);
      }
    else
      {
      op->vtkTransformInterpolator::SetScaleInterpolator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_GetScaleInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  vtkTupleInterpolator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScaleInterpolator();
      }
    else
      {
      tempr = op->vtkTransformInterpolator::GetScaleInterpolator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_SetRotationInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  vtkQuaternionInterpolator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkQuaternionInterpolator"))
    {
    if (ap.IsBound())
      {
      op->SetRotationInterpolator(temp0);
      }
    else
      {
      op->vtkTransformInterpolator::SetRotationInterpolator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_GetRotationInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  vtkQuaternionInterpolator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRotationInterpolator();
      }
    else
      {
      tempr = op->vtkTransformInterpolator::GetRotationInterpolator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

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
      tempr = op->vtkTransformInterpolator::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTransformInterpolator_Methods[] = {
  {(char*)"GetClassName", PyvtkTransformInterpolator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTransformInterpolator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTransformInterpolator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTransformInterpolator\nC++: vtkTransformInterpolator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTransformInterpolator_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTransformInterpolator\nC++: vtkTransformInterpolator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetNumberOfTransforms", PyvtkTransformInterpolator_GetNumberOfTransforms, 1,
   (char*)"V.GetNumberOfTransforms() -> int\nC++: int GetNumberOfTransforms()\n\nReturn the number of transforms in the list of transforms.\n"},
  {(char*)"GetMinimumT", PyvtkTransformInterpolator_GetMinimumT, 1,
   (char*)"V.GetMinimumT() -> float\nC++: double GetMinimumT()\n\nObtain some information about the interpolation range. The\nnumbers returned (corresponding to parameter t, usually thought\nof as time) are undefined if the list of transforms is empty.\n"},
  {(char*)"GetMaximumT", PyvtkTransformInterpolator_GetMaximumT, 1,
   (char*)"V.GetMaximumT() -> float\nC++: double GetMaximumT()\n\nObtain some information about the interpolation range. The\nnumbers returned (corresponding to parameter t, usually thought\nof as time) are undefined if the list of transforms is empty.\n"},
  {(char*)"Initialize", PyvtkTransformInterpolator_Initialize, 1,
   (char*)"V.Initialize()\nC++: void Initialize()\n\nClear the list of transforms.\n"},
  {(char*)"AddTransform", PyvtkTransformInterpolator_AddTransform, 1,
   (char*)"V.AddTransform(float, vtkTransform)\nC++: void AddTransform(double t, vtkTransform *xform)\nV.AddTransform(float, vtkMatrix4x4)\nC++: void AddTransform(double t, vtkMatrix4x4 *matrix)\nV.AddTransform(float, vtkProp3D)\nC++: void AddTransform(double t, vtkProp3D *prop3D)\n\nAdd another transform to the list of transformations defining the\ntransform function. Note that using the same time t value more\nthan once replaces the previous transform value at t. At least\ntwo transforms must be added to define a function. There are\nvariants to this method depending on whether you are adding a\nvtkTransform, vtkMaxtirx4x4, and/or vtkProp3D.\n"},
  {(char*)"RemoveTransform", PyvtkTransformInterpolator_RemoveTransform, 1,
   (char*)"V.RemoveTransform(float)\nC++: void RemoveTransform(double t)\n\nDelete the transform at a particular parameter t. If there is no\ntransform defined at location t, then the method does nothing.\n"},
  {(char*)"InterpolateTransform", PyvtkTransformInterpolator_InterpolateTransform, 1,
   (char*)"V.InterpolateTransform(float, vtkTransform)\nC++: void InterpolateTransform(double t, vtkTransform *xform)\n\nInterpolate the list of transforms and determine a new transform\n(i.e., fill in the transformation provided). If t is outside the\nrange of (min,max) values, then t is clamped.\n"},
  {(char*)"SetInterpolationType", PyvtkTransformInterpolator_SetInterpolationType, 1,
   (char*)"V.SetInterpolationType(int)\nC++: void SetInterpolationType(int)\n\nThese are convenience methods to switch between linear and spline\ninterpolation. The methods simply forward the request for linear\nor spline interpolation to the position, scale and orientation\ninterpolators. Note that if the InterpolationType is set to\n\"Manual\", then the interpolators are expected to be directly\nmanipulated and this class does not forward the request for\ninterpolation type to its interpolators.\n"},
  {(char*)"GetInterpolationTypeMinValue", PyvtkTransformInterpolator_GetInterpolationTypeMinValue, 1,
   (char*)"V.GetInterpolationTypeMinValue() -> int\nC++: int GetInterpolationTypeMinValue()\n\nThese are convenience methods to switch between linear and spline\ninterpolation. The methods simply forward the request for linear\nor spline interpolation to the position, scale and orientation\ninterpolators. Note that if the InterpolationType is set to\n\"Manual\", then the interpolators are expected to be directly\nmanipulated and this class does not forward the request for\ninterpolation type to its interpolators.\n"},
  {(char*)"GetInterpolationTypeMaxValue", PyvtkTransformInterpolator_GetInterpolationTypeMaxValue, 1,
   (char*)"V.GetInterpolationTypeMaxValue() -> int\nC++: int GetInterpolationTypeMaxValue()\n\nThese are convenience methods to switch between linear and spline\ninterpolation. The methods simply forward the request for linear\nor spline interpolation to the position, scale and orientation\ninterpolators. Note that if the InterpolationType is set to\n\"Manual\", then the interpolators are expected to be directly\nmanipulated and this class does not forward the request for\ninterpolation type to its interpolators.\n"},
  {(char*)"GetInterpolationType", PyvtkTransformInterpolator_GetInterpolationType, 1,
   (char*)"V.GetInterpolationType() -> int\nC++: int GetInterpolationType()\n\nThese are convenience methods to switch between linear and spline\ninterpolation. The methods simply forward the request for linear\nor spline interpolation to the position, scale and orientation\ninterpolators. Note that if the InterpolationType is set to\n\"Manual\", then the interpolators are expected to be directly\nmanipulated and this class does not forward the request for\ninterpolation type to its interpolators.\n"},
  {(char*)"SetInterpolationTypeToLinear", PyvtkTransformInterpolator_SetInterpolationTypeToLinear, 1,
   (char*)"V.SetInterpolationTypeToLinear()\nC++: void SetInterpolationTypeToLinear()\n\nThese are convenience methods to switch between linear and spline\ninterpolation. The methods simply forward the request for linear\nor spline interpolation to the position, scale and orientation\ninterpolators. Note that if the InterpolationType is set to\n\"Manual\", then the interpolators are expected to be directly\nmanipulated and this class does not forward the request for\ninterpolation type to its interpolators.\n"},
  {(char*)"SetInterpolationTypeToSpline", PyvtkTransformInterpolator_SetInterpolationTypeToSpline, 1,
   (char*)"V.SetInterpolationTypeToSpline()\nC++: void SetInterpolationTypeToSpline()\n\nThese are convenience methods to switch between linear and spline\ninterpolation. The methods simply forward the request for linear\nor spline interpolation to the position, scale and orientation\ninterpolators. Note that if the InterpolationType is set to\n\"Manual\", then the interpolators are expected to be directly\nmanipulated and this class does not forward the request for\ninterpolation type to its interpolators.\n"},
  {(char*)"SetInterpolationTypeToManual", PyvtkTransformInterpolator_SetInterpolationTypeToManual, 1,
   (char*)"V.SetInterpolationTypeToManual()\nC++: void SetInterpolationTypeToManual()\n\nThese are convenience methods to switch between linear and spline\ninterpolation. The methods simply forward the request for linear\nor spline interpolation to the position, scale and orientation\ninterpolators. Note that if the InterpolationType is set to\n\"Manual\", then the interpolators are expected to be directly\nmanipulated and this class does not forward the request for\ninterpolation type to its interpolators.\n"},
  {(char*)"SetPositionInterpolator", PyvtkTransformInterpolator_SetPositionInterpolator, 1,
   (char*)"V.SetPositionInterpolator(vtkTupleInterpolator)\nC++: virtual void SetPositionInterpolator(vtkTupleInterpolator *)\n\nSet/Get the tuple interpolator used to interpolate the position\nportion of the transformation matrix. Note that you can modify\nthe behavior of the interpolator (linear vs spline interpolation;\nchange spline basis) by manipulating the interpolator instances.\n"},
  {(char*)"GetPositionInterpolator", PyvtkTransformInterpolator_GetPositionInterpolator, 1,
   (char*)"V.GetPositionInterpolator() -> vtkTupleInterpolator\nC++: vtkTupleInterpolator *GetPositionInterpolator()\n\nSet/Get the tuple interpolator used to interpolate the position\nportion of the transformation matrix. Note that you can modify\nthe behavior of the interpolator (linear vs spline interpolation;\nchange spline basis) by manipulating the interpolator instances.\n"},
  {(char*)"SetScaleInterpolator", PyvtkTransformInterpolator_SetScaleInterpolator, 1,
   (char*)"V.SetScaleInterpolator(vtkTupleInterpolator)\nC++: virtual void SetScaleInterpolator(vtkTupleInterpolator *)\n\nSet/Get the tuple interpolator used to interpolate the scale\nportion of the transformation matrix. Note that you can modify\nthe behavior of the interpolator (linear vs spline interpolation;\nchange spline basis) by manipulating the interpolator instances.\n"},
  {(char*)"GetScaleInterpolator", PyvtkTransformInterpolator_GetScaleInterpolator, 1,
   (char*)"V.GetScaleInterpolator() -> vtkTupleInterpolator\nC++: vtkTupleInterpolator *GetScaleInterpolator()\n\nSet/Get the tuple interpolator used to interpolate the scale\nportion of the transformation matrix. Note that you can modify\nthe behavior of the interpolator (linear vs spline interpolation;\nchange spline basis) by manipulating the interpolator instances.\n"},
  {(char*)"SetRotationInterpolator", PyvtkTransformInterpolator_SetRotationInterpolator, 1,
   (char*)"V.SetRotationInterpolator(vtkQuaternionInterpolator)\nC++: virtual void SetRotationInterpolator(\n    vtkQuaternionInterpolator *)\n\nSet/Get the tuple interpolator used to interpolate the\norientation portion of the transformation matrix. Note that you\ncan modify the behavior of the interpolator (linear vs spline\ninterpolation; change spline basis) by manipulating the\ninterpolator instances.\n"},
  {(char*)"GetRotationInterpolator", PyvtkTransformInterpolator_GetRotationInterpolator, 1,
   (char*)"V.GetRotationInterpolator() -> vtkQuaternionInterpolator\nC++: vtkQuaternionInterpolator *GetRotationInterpolator()\n\nSet/Get the tuple interpolator used to interpolate the\norientation portion of the transformation matrix. Note that you\ncan modify the behavior of the interpolator (linear vs spline\ninterpolation; change spline basis) by manipulating the\ninterpolator instances.\n"},
  {(char*)"GetMTime", PyvtkTransformInterpolator_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nOverride GetMTime() because we depend on the interpolators which\nmay be modified outside of this class.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTransformInterpolator_StaticNew()
{
  return vtkTransformInterpolator::New();
}

PyObject *PyVTKClass_vtkTransformInterpolatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTransformInterpolator_StaticNew,
    PyvtkTransformInterpolator_Methods,
    "vtkTransformInterpolator", modulename,
    NULL, NULL,
    PyvtkTransformInterpolator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"INTERPOLATION_TYPE_LINEAR", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"INTERPOLATION_TYPE_SPLINE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"INTERPOLATION_TYPE_MANUAL", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkTransformInterpolator_Doc()
{
  static const char *docstring[] = {
    "vtkTransformInterpolator - interpolate a series of transformation\nmatrices\n\n",
    "Superclass: vtkObject\n\n",
    "This class is used to interpolate a series of 4x4 transformation\nmatrices. Position, scale and orientation (i.e., rotations) are\ninterpolated separately, and can be interpolated linearly or with a\nspline function. Note that orientation is interpolated using\nquaternions via SLERP (spherical linear interpolation) or the special\nvtkQuaternionSpline class.\n\nTo use this class, specify at least two pair",
    "s of (t,transformation\nmatrix) with the AddTransform() method.  Then interpolated the\ntransforms with the InterpolateTransform(t,transform) method, where\n\"t\" must be in the range of (min,max) times specified by the\nAddTransform() method.\n\nBy default, spline interpolation is used for the interpolation of the\ntransformation matrices. The position, scale and orientation of the\nmatrices are interpolat",
    "ed with instances of the classes\nvtkTupleInterpolator (position,scale) and vtkQuaternionInterpolator\n(rotation). The user can override the interpolation behavior by\ngaining access to these separate interpolation classes.  These\ninterpolator classes (vtkTupleInterpolator and\nvtkQuaternionInterpolator) can be modified to perform linear versus\nspline interpolation, and/or different spline basis funct",
    "ions can be\nspecified.\n\nCaveats:\n\nThe interpolator classes are initialized when the\nInterpolateTransform() is called. Any changes to the interpolators,\nor additions to the list of transforms to be interpolated, causes a\nreinitialization of the interpolators the next time\nInterpolateTransform() is invoked. Thus the best performance is\nobtained by 1) configuring the interpolators, 2) adding all the\n",
    "transforms, and 3) finally performing interpolation.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTransformInterpolator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTransformInterpolatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTransformInterpolator", o) != 0)
    {
    Py_DECREF(o);
    }

}

