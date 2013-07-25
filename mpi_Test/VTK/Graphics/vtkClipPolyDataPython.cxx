// python wrapper for vtkClipPolyData
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
#include "vtkClipPolyData.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkClipPolyData(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkClipPolyData(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkClipPolyDataNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkClipPolyDataNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkClipPolyData_Doc();


static PyObject *
PyvtkClipPolyData_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipPolyData *op = static_cast<vtkClipPolyData *>(vp);

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
      tempr = op->vtkClipPolyData::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipPolyData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipPolyData *op = static_cast<vtkClipPolyData *>(vp);

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
      tempr = op->vtkClipPolyData::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipPolyData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipPolyData *op = static_cast<vtkClipPolyData *>(vp);

  vtkClipPolyData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkClipPolyData::NewInstance();
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
PyvtkClipPolyData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkClipPolyData *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkClipPolyData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipPolyData_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipPolyData *op = static_cast<vtkClipPolyData *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0);
      }
    else
      {
      op->vtkClipPolyData::SetValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipPolyData_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipPolyData *op = static_cast<vtkClipPolyData *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetValue();
      }
    else
      {
      tempr = op->vtkClipPolyData::GetValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipPolyData_SetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipPolyData *op = static_cast<vtkClipPolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInsideOut(temp0);
      }
    else
      {
      op->vtkClipPolyData::SetInsideOut(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipPolyData_GetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipPolyData *op = static_cast<vtkClipPolyData *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInsideOut();
      }
    else
      {
      tempr = op->vtkClipPolyData::GetInsideOut();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipPolyData_InsideOutOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipPolyData *op = static_cast<vtkClipPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InsideOutOn();
      }
    else
      {
      op->vtkClipPolyData::InsideOutOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipPolyData_InsideOutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipPolyData *op = static_cast<vtkClipPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InsideOutOff();
      }
    else
      {
      op->vtkClipPolyData::InsideOutOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipPolyData_SetClipFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipPolyData *op = static_cast<vtkClipPolyData *>(vp);

  vtkImplicitFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
    {
    if (ap.IsBound())
      {
      op->SetClipFunction(temp0);
      }
    else
      {
      op->vtkClipPolyData::SetClipFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipPolyData_GetClipFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClipFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipPolyData *op = static_cast<vtkClipPolyData *>(vp);

  vtkImplicitFunction *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetClipFunction();
      }
    else
      {
      tempr = op->vtkClipPolyData::GetClipFunction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipPolyData_SetGenerateClipScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateClipScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipPolyData *op = static_cast<vtkClipPolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateClipScalars(temp0);
      }
    else
      {
      op->vtkClipPolyData::SetGenerateClipScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipPolyData_GetGenerateClipScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateClipScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipPolyData *op = static_cast<vtkClipPolyData *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenerateClipScalars();
      }
    else
      {
      tempr = op->vtkClipPolyData::GetGenerateClipScalars();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipPolyData_GenerateClipScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClipScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipPolyData *op = static_cast<vtkClipPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateClipScalarsOn();
      }
    else
      {
      op->vtkClipPolyData::GenerateClipScalarsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipPolyData_GenerateClipScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClipScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipPolyData *op = static_cast<vtkClipPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateClipScalarsOff();
      }
    else
      {
      op->vtkClipPolyData::GenerateClipScalarsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipPolyData_SetGenerateClippedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateClippedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipPolyData *op = static_cast<vtkClipPolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateClippedOutput(temp0);
      }
    else
      {
      op->vtkClipPolyData::SetGenerateClippedOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipPolyData_GetGenerateClippedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateClippedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipPolyData *op = static_cast<vtkClipPolyData *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenerateClippedOutput();
      }
    else
      {
      tempr = op->vtkClipPolyData::GetGenerateClippedOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipPolyData_GenerateClippedOutputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClippedOutputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipPolyData *op = static_cast<vtkClipPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateClippedOutputOn();
      }
    else
      {
      op->vtkClipPolyData::GenerateClippedOutputOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipPolyData_GenerateClippedOutputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClippedOutputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipPolyData *op = static_cast<vtkClipPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateClippedOutputOff();
      }
    else
      {
      op->vtkClipPolyData::GenerateClippedOutputOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipPolyData_GetClippedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClippedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipPolyData *op = static_cast<vtkClipPolyData *>(vp);

  vtkPolyData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetClippedOutput();
      }
    else
      {
      tempr = op->vtkClipPolyData::GetClippedOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipPolyData_GetClippedOutputPort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClippedOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipPolyData *op = static_cast<vtkClipPolyData *>(vp);

  vtkAlgorithmOutput *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetClippedOutputPort();
      }
    else
      {
      tempr = op->vtkClipPolyData::GetClippedOutputPort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipPolyData_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipPolyData *op = static_cast<vtkClipPolyData *>(vp);

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
      op->vtkClipPolyData::SetLocator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipPolyData_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipPolyData *op = static_cast<vtkClipPolyData *>(vp);

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
      tempr = op->vtkClipPolyData::GetLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipPolyData_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipPolyData *op = static_cast<vtkClipPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultLocator();
      }
    else
      {
      op->vtkClipPolyData::CreateDefaultLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipPolyData_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipPolyData *op = static_cast<vtkClipPolyData *>(vp);

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
      tempr = op->vtkClipPolyData::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkClipPolyData_Methods[] = {
  {(char*)"GetClassName", PyvtkClipPolyData_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkClipPolyData_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkClipPolyData_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkClipPolyData\nC++: vtkClipPolyData *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkClipPolyData_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkClipPolyData\nC++: vtkClipPolyData *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetValue", PyvtkClipPolyData_SetValue, 1,
   (char*)"V.SetValue(float)\nC++: void SetValue(double a)\n\nSet the clipping value of the implicit function (if clipping with\nimplicit function) or scalar value (if clipping with scalars).\nThe default value is 0.0.\n"},
  {(char*)"GetValue", PyvtkClipPolyData_GetValue, 1,
   (char*)"V.GetValue() -> float\nC++: double GetValue()\n\nSet the clipping value of the implicit function (if clipping with\nimplicit function) or scalar value (if clipping with scalars).\nThe default value is 0.0.\n"},
  {(char*)"SetInsideOut", PyvtkClipPolyData_SetInsideOut, 1,
   (char*)"V.SetInsideOut(int)\nC++: void SetInsideOut(int a)\n\nSet/Get the InsideOut flag. When off, a vertex is considered\ninside the implicit function if its value is greater than the\nValue ivar. When InsideOutside is turned on, a vertex is\nconsidered inside the implicit function if its implicit function\nvalue is less than or equal to the Value ivar.  InsideOut is off\nby default.\n"},
  {(char*)"GetInsideOut", PyvtkClipPolyData_GetInsideOut, 1,
   (char*)"V.GetInsideOut() -> int\nC++: int GetInsideOut()\n\nSet/Get the InsideOut flag. When off, a vertex is considered\ninside the implicit function if its value is greater than the\nValue ivar. When InsideOutside is turned on, a vertex is\nconsidered inside the implicit function if its implicit function\nvalue is less than or equal to the Value ivar.  InsideOut is off\nby default.\n"},
  {(char*)"InsideOutOn", PyvtkClipPolyData_InsideOutOn, 1,
   (char*)"V.InsideOutOn()\nC++: void InsideOutOn()\n\nSet/Get the InsideOut flag. When off, a vertex is considered\ninside the implicit function if its value is greater than the\nValue ivar. When InsideOutside is turned on, a vertex is\nconsidered inside the implicit function if its implicit function\nvalue is less than or equal to the Value ivar.  InsideOut is off\nby default.\n"},
  {(char*)"InsideOutOff", PyvtkClipPolyData_InsideOutOff, 1,
   (char*)"V.InsideOutOff()\nC++: void InsideOutOff()\n\nSet/Get the InsideOut flag. When off, a vertex is considered\ninside the implicit function if its value is greater than the\nValue ivar. When InsideOutside is turned on, a vertex is\nconsidered inside the implicit function if its implicit function\nvalue is less than or equal to the Value ivar.  InsideOut is off\nby default.\n"},
  {(char*)"SetClipFunction", PyvtkClipPolyData_SetClipFunction, 1,
   (char*)"V.SetClipFunction(vtkImplicitFunction)\nC++: virtual void SetClipFunction(vtkImplicitFunction *)\n\n"},
  {(char*)"GetClipFunction", PyvtkClipPolyData_GetClipFunction, 1,
   (char*)"V.GetClipFunction() -> vtkImplicitFunction\nC++: vtkImplicitFunction *GetClipFunction()\n\n"},
  {(char*)"SetGenerateClipScalars", PyvtkClipPolyData_SetGenerateClipScalars, 1,
   (char*)"V.SetGenerateClipScalars(int)\nC++: void SetGenerateClipScalars(int a)\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated from the implicit function values, and not the input\nscalar data. If you enable this flag but do not provide an\nimplicit function an error will be reported.\n"},
  {(char*)"GetGenerateClipScalars", PyvtkClipPolyData_GetGenerateClipScalars, 1,
   (char*)"V.GetGenerateClipScalars() -> int\nC++: int GetGenerateClipScalars()\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated from the implicit function values, and not the input\nscalar data. If you enable this flag but do not provide an\nimplicit function an error will be reported.\n"},
  {(char*)"GenerateClipScalarsOn", PyvtkClipPolyData_GenerateClipScalarsOn, 1,
   (char*)"V.GenerateClipScalarsOn()\nC++: void GenerateClipScalarsOn()\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated from the implicit function values, and not the input\nscalar data. If you enable this flag but do not provide an\nimplicit function an error will be reported.\n"},
  {(char*)"GenerateClipScalarsOff", PyvtkClipPolyData_GenerateClipScalarsOff, 1,
   (char*)"V.GenerateClipScalarsOff()\nC++: void GenerateClipScalarsOff()\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated from the implicit function values, and not the input\nscalar data. If you enable this flag but do not provide an\nimplicit function an error will be reported.\n"},
  {(char*)"SetGenerateClippedOutput", PyvtkClipPolyData_SetGenerateClippedOutput, 1,
   (char*)"V.SetGenerateClippedOutput(int)\nC++: void SetGenerateClippedOutput(int a)\n\nControl whether a second output is generated. The second output\ncontains the polygonal data that's been clipped away.\n"},
  {(char*)"GetGenerateClippedOutput", PyvtkClipPolyData_GetGenerateClippedOutput, 1,
   (char*)"V.GetGenerateClippedOutput() -> int\nC++: int GetGenerateClippedOutput()\n\nControl whether a second output is generated. The second output\ncontains the polygonal data that's been clipped away.\n"},
  {(char*)"GenerateClippedOutputOn", PyvtkClipPolyData_GenerateClippedOutputOn, 1,
   (char*)"V.GenerateClippedOutputOn()\nC++: void GenerateClippedOutputOn()\n\nControl whether a second output is generated. The second output\ncontains the polygonal data that's been clipped away.\n"},
  {(char*)"GenerateClippedOutputOff", PyvtkClipPolyData_GenerateClippedOutputOff, 1,
   (char*)"V.GenerateClippedOutputOff()\nC++: void GenerateClippedOutputOff()\n\nControl whether a second output is generated. The second output\ncontains the polygonal data that's been clipped away.\n"},
  {(char*)"GetClippedOutput", PyvtkClipPolyData_GetClippedOutput, 1,
   (char*)"V.GetClippedOutput() -> vtkPolyData\nC++: vtkPolyData *GetClippedOutput()\n\nReturn the Clipped output.\n"},
  {(char*)"GetClippedOutputPort", PyvtkClipPolyData_GetClippedOutputPort, 1,
   (char*)"V.GetClippedOutputPort() -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetClippedOutputPort()\n\nReturn the output port (a vtkAlgorithmOutput) of the clipped\noutput.\n"},
  {(char*)"SetLocator", PyvtkClipPolyData_SetLocator, 1,
   (char*)"V.SetLocator(vtkIncrementalPointLocator)\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSpecify a spatial locator for merging points. By default, an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"GetLocator", PyvtkClipPolyData_GetLocator, 1,
   (char*)"V.GetLocator() -> vtkIncrementalPointLocator\nC++: vtkIncrementalPointLocator *GetLocator()\n\nSpecify a spatial locator for merging points. By default, an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"CreateDefaultLocator", PyvtkClipPolyData_CreateDefaultLocator, 1,
   (char*)"V.CreateDefaultLocator()\nC++: void CreateDefaultLocator()\n\nCreate default locator. Used to create one when none is\nspecified. The locator is used to merge coincident points.\n"},
  {(char*)"GetMTime", PyvtkClipPolyData_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nReturn the mtime also considering the locator and clip function.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkClipPolyData_StaticNew()
{
  return vtkClipPolyData::New();
}

PyObject *PyVTKClass_vtkClipPolyDataNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkClipPolyData_StaticNew,
    PyvtkClipPolyData_Methods,
    "vtkClipPolyData", modulename,
    NULL, NULL,
    PyvtkClipPolyData_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkClipPolyData_Doc()
{
  static const char *docstring[] = {
    "vtkClipPolyData - clip polygonal data with user-specified implicit\nfunction or input scalar data\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkClipPolyData is a filter that clips polygonal data using either\nany subclass of vtkImplicitFunction, or the input scalar data.\nClipping means that it actually \"cuts\" through the cells of the\ndataset, returning everything inside of the specified implicit\nfunction (or greater than the scalar value) including \"pieces\" of a\ncell. (Compare this with vtkExtractGeometry, which pulls out entire,\nuncut ",
    "cells.) The output of this filter is polygonal data.\n\nTo use this filter, you must decide if you will be clipping with an\nimplicit function, or whether you will be using the input scalar\ndata.  If you want to clip with an implicit function, you must:\n1) define an implicit function\n2) set it with the SetClipFunction method\n3) apply the GenerateClipScalarsOn method If a ClipFunction is not\n   specif",
    "ied, or GenerateClipScalars is off (the default), then the\n   input's scalar data will be used to clip the polydata.\n\nYou can also specify a scalar value, which is used to decide what is\ninside and outside of the implicit function. You can also reverse the\nsense of what inside/outside is by setting the InsideOut instance\nvariable. (The cutting algorithm proceeds by computing an implicit\nfunction v",
    "alue or using the input scalar data for each point in the\ndataset. This is compared to the scalar value to determine\ninside/outside.)\n\nThis filter can be configured to compute a second output. The second\noutput is the polygonal data that is clipped away. Set the\nGenerateClippedData boolean on if you wish to access this output\ndata.\n\nCaveats:\n\nIn order to cut all types of cells in polygonal data, v",
    "tkClipPolyData\ntriangulates some cells, and then cuts the resulting simplices (i.e.,\npoints, lines, and triangles). This means that the resulting output\nmay consist of different cell types than the input data.\n\nSee Also:\n\nvtkImplicitFunction vtkCutter vtkClipVolume\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkClipPolyData(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkClipPolyDataNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkClipPolyData", o) != 0)
    {
    Py_DECREF(o);
    }

}
