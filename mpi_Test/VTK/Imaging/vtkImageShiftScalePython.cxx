// python wrapper for vtkImageShiftScale
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
#include "vtkImageShiftScale.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageShiftScale(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageShiftScale(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageShiftScaleNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageShiftScaleNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageShiftScale_Doc();


static PyObject *
PyvtkImageShiftScale_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShiftScale *op = static_cast<vtkImageShiftScale *>(vp);

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
      tempr = op->vtkImageShiftScale::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageShiftScale_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShiftScale *op = static_cast<vtkImageShiftScale *>(vp);

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
      tempr = op->vtkImageShiftScale::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageShiftScale_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShiftScale *op = static_cast<vtkImageShiftScale *>(vp);

  vtkImageShiftScale *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageShiftScale::NewInstance();
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
PyvtkImageShiftScale_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageShiftScale *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageShiftScale::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageShiftScale_SetShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShiftScale *op = static_cast<vtkImageShiftScale *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShift(temp0);
      }
    else
      {
      op->vtkImageShiftScale::SetShift(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageShiftScale_GetShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShiftScale *op = static_cast<vtkImageShiftScale *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShift();
      }
    else
      {
      tempr = op->vtkImageShiftScale::GetShift();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageShiftScale_SetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShiftScale *op = static_cast<vtkImageShiftScale *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScale(temp0);
      }
    else
      {
      op->vtkImageShiftScale::SetScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageShiftScale_GetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShiftScale *op = static_cast<vtkImageShiftScale *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScale();
      }
    else
      {
      tempr = op->vtkImageShiftScale::GetScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageShiftScale_SetOutputScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShiftScale *op = static_cast<vtkImageShiftScale *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarType(temp0);
      }
    else
      {
      op->vtkImageShiftScale::SetOutputScalarType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageShiftScale_GetOutputScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShiftScale *op = static_cast<vtkImageShiftScale *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputScalarType();
      }
    else
      {
      tempr = op->vtkImageShiftScale::GetOutputScalarType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageShiftScale_SetOutputScalarTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShiftScale *op = static_cast<vtkImageShiftScale *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToDouble();
      }
    else
      {
      op->vtkImageShiftScale::SetOutputScalarTypeToDouble();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageShiftScale_SetOutputScalarTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShiftScale *op = static_cast<vtkImageShiftScale *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToFloat();
      }
    else
      {
      op->vtkImageShiftScale::SetOutputScalarTypeToFloat();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageShiftScale_SetOutputScalarTypeToLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShiftScale *op = static_cast<vtkImageShiftScale *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToLong();
      }
    else
      {
      op->vtkImageShiftScale::SetOutputScalarTypeToLong();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageShiftScale_SetOutputScalarTypeToUnsignedLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShiftScale *op = static_cast<vtkImageShiftScale *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToUnsignedLong();
      }
    else
      {
      op->vtkImageShiftScale::SetOutputScalarTypeToUnsignedLong();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageShiftScale_SetOutputScalarTypeToInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShiftScale *op = static_cast<vtkImageShiftScale *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToInt();
      }
    else
      {
      op->vtkImageShiftScale::SetOutputScalarTypeToInt();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageShiftScale_SetOutputScalarTypeToUnsignedInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShiftScale *op = static_cast<vtkImageShiftScale *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToUnsignedInt();
      }
    else
      {
      op->vtkImageShiftScale::SetOutputScalarTypeToUnsignedInt();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageShiftScale_SetOutputScalarTypeToShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShiftScale *op = static_cast<vtkImageShiftScale *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToShort();
      }
    else
      {
      op->vtkImageShiftScale::SetOutputScalarTypeToShort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageShiftScale_SetOutputScalarTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShiftScale *op = static_cast<vtkImageShiftScale *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToUnsignedShort();
      }
    else
      {
      op->vtkImageShiftScale::SetOutputScalarTypeToUnsignedShort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageShiftScale_SetOutputScalarTypeToChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShiftScale *op = static_cast<vtkImageShiftScale *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToChar();
      }
    else
      {
      op->vtkImageShiftScale::SetOutputScalarTypeToChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageShiftScale_SetOutputScalarTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShiftScale *op = static_cast<vtkImageShiftScale *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToUnsignedChar();
      }
    else
      {
      op->vtkImageShiftScale::SetOutputScalarTypeToUnsignedChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageShiftScale_SetClampOverflow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClampOverflow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShiftScale *op = static_cast<vtkImageShiftScale *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetClampOverflow(temp0);
      }
    else
      {
      op->vtkImageShiftScale::SetClampOverflow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageShiftScale_GetClampOverflow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClampOverflow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShiftScale *op = static_cast<vtkImageShiftScale *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetClampOverflow();
      }
    else
      {
      tempr = op->vtkImageShiftScale::GetClampOverflow();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageShiftScale_ClampOverflowOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampOverflowOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShiftScale *op = static_cast<vtkImageShiftScale *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClampOverflowOn();
      }
    else
      {
      op->vtkImageShiftScale::ClampOverflowOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageShiftScale_ClampOverflowOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampOverflowOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShiftScale *op = static_cast<vtkImageShiftScale *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClampOverflowOff();
      }
    else
      {
      op->vtkImageShiftScale::ClampOverflowOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageShiftScale_Methods[] = {
  {(char*)"GetClassName", PyvtkImageShiftScale_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageShiftScale_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageShiftScale_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageShiftScale\nC++: vtkImageShiftScale *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageShiftScale_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageShiftScale\nC++: vtkImageShiftScale *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetShift", PyvtkImageShiftScale_SetShift, 1,
   (char*)"V.SetShift(float)\nC++: void SetShift(double a)\n\nSet/Get the shift value. This value is added to each pixel\n"},
  {(char*)"GetShift", PyvtkImageShiftScale_GetShift, 1,
   (char*)"V.GetShift() -> float\nC++: double GetShift()\n\nSet/Get the shift value. This value is added to each pixel\n"},
  {(char*)"SetScale", PyvtkImageShiftScale_SetScale, 1,
   (char*)"V.SetScale(float)\nC++: void SetScale(double a)\n\nSet/Get the scale value. Each pixel is multiplied by this value.\n"},
  {(char*)"GetScale", PyvtkImageShiftScale_GetScale, 1,
   (char*)"V.GetScale() -> float\nC++: double GetScale()\n\nSet/Get the scale value. Each pixel is multiplied by this value.\n"},
  {(char*)"SetOutputScalarType", PyvtkImageShiftScale_SetOutputScalarType, 1,
   (char*)"V.SetOutputScalarType(int)\nC++: void SetOutputScalarType(int a)\n\nSet the desired output scalar type. The result of the shift and\nscale operations is cast to the type specified.\n"},
  {(char*)"GetOutputScalarType", PyvtkImageShiftScale_GetOutputScalarType, 1,
   (char*)"V.GetOutputScalarType() -> int\nC++: int GetOutputScalarType()\n\nSet the desired output scalar type. The result of the shift and\nscale operations is cast to the type specified.\n"},
  {(char*)"SetOutputScalarTypeToDouble", PyvtkImageShiftScale_SetOutputScalarTypeToDouble, 1,
   (char*)"V.SetOutputScalarTypeToDouble()\nC++: void SetOutputScalarTypeToDouble()\n\nSet the desired output scalar type. The result of the shift and\nscale operations is cast to the type specified.\n"},
  {(char*)"SetOutputScalarTypeToFloat", PyvtkImageShiftScale_SetOutputScalarTypeToFloat, 1,
   (char*)"V.SetOutputScalarTypeToFloat()\nC++: void SetOutputScalarTypeToFloat()\n\nSet the desired output scalar type. The result of the shift and\nscale operations is cast to the type specified.\n"},
  {(char*)"SetOutputScalarTypeToLong", PyvtkImageShiftScale_SetOutputScalarTypeToLong, 1,
   (char*)"V.SetOutputScalarTypeToLong()\nC++: void SetOutputScalarTypeToLong()\n\nSet the desired output scalar type. The result of the shift and\nscale operations is cast to the type specified.\n"},
  {(char*)"SetOutputScalarTypeToUnsignedLong", PyvtkImageShiftScale_SetOutputScalarTypeToUnsignedLong, 1,
   (char*)"V.SetOutputScalarTypeToUnsignedLong()\nC++: void SetOutputScalarTypeToUnsignedLong()\n\nSet the desired output scalar type. The result of the shift and\nscale operations is cast to the type specified.\n"},
  {(char*)"SetOutputScalarTypeToInt", PyvtkImageShiftScale_SetOutputScalarTypeToInt, 1,
   (char*)"V.SetOutputScalarTypeToInt()\nC++: void SetOutputScalarTypeToInt()\n\nSet the desired output scalar type. The result of the shift and\nscale operations is cast to the type specified.\n"},
  {(char*)"SetOutputScalarTypeToUnsignedInt", PyvtkImageShiftScale_SetOutputScalarTypeToUnsignedInt, 1,
   (char*)"V.SetOutputScalarTypeToUnsignedInt()\nC++: void SetOutputScalarTypeToUnsignedInt()\n\nSet the desired output scalar type. The result of the shift and\nscale operations is cast to the type specified.\n"},
  {(char*)"SetOutputScalarTypeToShort", PyvtkImageShiftScale_SetOutputScalarTypeToShort, 1,
   (char*)"V.SetOutputScalarTypeToShort()\nC++: void SetOutputScalarTypeToShort()\n\nSet the desired output scalar type. The result of the shift and\nscale operations is cast to the type specified.\n"},
  {(char*)"SetOutputScalarTypeToUnsignedShort", PyvtkImageShiftScale_SetOutputScalarTypeToUnsignedShort, 1,
   (char*)"V.SetOutputScalarTypeToUnsignedShort()\nC++: void SetOutputScalarTypeToUnsignedShort()\n\nSet the desired output scalar type. The result of the shift and\nscale operations is cast to the type specified.\n"},
  {(char*)"SetOutputScalarTypeToChar", PyvtkImageShiftScale_SetOutputScalarTypeToChar, 1,
   (char*)"V.SetOutputScalarTypeToChar()\nC++: void SetOutputScalarTypeToChar()\n\nSet the desired output scalar type. The result of the shift and\nscale operations is cast to the type specified.\n"},
  {(char*)"SetOutputScalarTypeToUnsignedChar", PyvtkImageShiftScale_SetOutputScalarTypeToUnsignedChar, 1,
   (char*)"V.SetOutputScalarTypeToUnsignedChar()\nC++: void SetOutputScalarTypeToUnsignedChar()\n\nSet the desired output scalar type. The result of the shift and\nscale operations is cast to the type specified.\n"},
  {(char*)"SetClampOverflow", PyvtkImageShiftScale_SetClampOverflow, 1,
   (char*)"V.SetClampOverflow(int)\nC++: void SetClampOverflow(int a)\n\nWhen the ClampOverflow flag is on, the data is thresholded so\nthat the output value does not exceed the max or min of the data\ntype. By default, ClampOverflow is off.\n"},
  {(char*)"GetClampOverflow", PyvtkImageShiftScale_GetClampOverflow, 1,
   (char*)"V.GetClampOverflow() -> int\nC++: int GetClampOverflow()\n\nWhen the ClampOverflow flag is on, the data is thresholded so\nthat the output value does not exceed the max or min of the data\ntype. By default, ClampOverflow is off.\n"},
  {(char*)"ClampOverflowOn", PyvtkImageShiftScale_ClampOverflowOn, 1,
   (char*)"V.ClampOverflowOn()\nC++: void ClampOverflowOn()\n\nWhen the ClampOverflow flag is on, the data is thresholded so\nthat the output value does not exceed the max or min of the data\ntype. By default, ClampOverflow is off.\n"},
  {(char*)"ClampOverflowOff", PyvtkImageShiftScale_ClampOverflowOff, 1,
   (char*)"V.ClampOverflowOff()\nC++: void ClampOverflowOff()\n\nWhen the ClampOverflow flag is on, the data is thresholded so\nthat the output value does not exceed the max or min of the data\ntype. By default, ClampOverflow is off.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageShiftScale_StaticNew()
{
  return vtkImageShiftScale::New();
}

PyObject *PyVTKClass_vtkImageShiftScaleNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageShiftScale_StaticNew,
    PyvtkImageShiftScale_Methods,
    "vtkImageShiftScale", modulename,
    NULL, NULL,
    PyvtkImageShiftScale_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageShiftScale_Doc()
{
  static const char *docstring[] = {
    "vtkImageShiftScale - shift and scale an input image\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "With vtkImageShiftScale Pixels are shifted (a constant value added)\nand then scaled (multiplied by a scalar. As a convenience, this class\nallows you to set the output scalar type similar to vtkImageCast.\nThis is because shift scale operations frequently convert data types.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageShiftScale(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageShiftScaleNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageShiftScale", o) != 0)
    {
    Py_DECREF(o);
    }

}

