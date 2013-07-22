// python wrapper for vtkCutter
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
#include "vtkCutter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCutter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCutter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCutterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCutterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkCutter_Doc();


static PyObject *
PyvtkCutter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

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
      tempr = op->vtkCutter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

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
      tempr = op->vtkCutter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  vtkCutter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCutter::NewInstance();
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
PyvtkCutter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCutter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCutter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

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
      op->vtkCutter::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

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
      tempr = op->vtkCutter::GetValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_SetNumberOfContours(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfContours");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

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
      op->vtkCutter::SetNumberOfContours(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_GetNumberOfContours(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfContours");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

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
      tempr = op->vtkCutter::GetNumberOfContours();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_GenerateValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

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
      op->vtkCutter::GenerateValues(temp0, temp1);
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
PyvtkCutter_GenerateValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

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
      op->vtkCutter::GenerateValues(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCutter_GenerateValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkCutter_GenerateValues_s1(self, args);
    case 3:
      return PyvtkCutter_GenerateValues_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GenerateValues");
  return NULL;
}



static PyObject *
PyvtkCutter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

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
      tempr = op->vtkCutter::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_SetCutFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  vtkImplicitFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
    {
    if (ap.IsBound())
      {
      op->SetCutFunction(temp0);
      }
    else
      {
      op->vtkCutter::SetCutFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_GetCutFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCutFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  vtkImplicitFunction *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCutFunction();
      }
    else
      {
      tempr = op->vtkCutter::GetCutFunction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_SetGenerateCutScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateCutScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateCutScalars(temp0);
      }
    else
      {
      op->vtkCutter::SetGenerateCutScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_GetGenerateCutScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateCutScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenerateCutScalars();
      }
    else
      {
      tempr = op->vtkCutter::GetGenerateCutScalars();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_GenerateCutScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateCutScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateCutScalarsOn();
      }
    else
      {
      op->vtkCutter::GenerateCutScalarsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_GenerateCutScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateCutScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateCutScalarsOff();
      }
    else
      {
      op->vtkCutter::GenerateCutScalarsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

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
      op->vtkCutter::SetLocator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

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
      tempr = op->vtkCutter::GetLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_SetSortBy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSortBy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSortBy(temp0);
      }
    else
      {
      op->vtkCutter::SetSortBy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_GetSortByMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortByMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSortByMinValue();
      }
    else
      {
      tempr = op->vtkCutter::GetSortByMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_GetSortByMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortByMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSortByMaxValue();
      }
    else
      {
      tempr = op->vtkCutter::GetSortByMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_GetSortBy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortBy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSortBy();
      }
    else
      {
      tempr = op->vtkCutter::GetSortBy();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_SetSortByToSortByValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSortByToSortByValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSortByToSortByValue();
      }
    else
      {
      op->vtkCutter::SetSortByToSortByValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_SetSortByToSortByCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSortByToSortByCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSortByToSortByCell();
      }
    else
      {
      op->vtkCutter::SetSortByToSortByCell();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_GetSortByAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortByAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSortByAsString();
      }
    else
      {
      tempr = op->vtkCutter::GetSortByAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultLocator();
      }
    else
      {
      op->vtkCutter::CreateDefaultLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCutter_Methods[] = {
  {(char*)"GetClassName", PyvtkCutter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCutter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCutter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCutter\nC++: vtkCutter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCutter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCutter\nC++: vtkCutter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetValue", PyvtkCutter_SetValue, 1,
   (char*)"V.SetValue(int, float)\nC++: void SetValue(int i, double value)\n\nSet a particular contour value at contour number i. The index i\nranges between 0<=i<NumberOfContours.\n"},
  {(char*)"GetValue", PyvtkCutter_GetValue, 1,
   (char*)"V.GetValue(int) -> float\nC++: double GetValue(int i)\n\nGet the ith contour value.\n"},
  {(char*)"SetNumberOfContours", PyvtkCutter_SetNumberOfContours, 1,
   (char*)"V.SetNumberOfContours(int)\nC++: void SetNumberOfContours(int number)\n\nSet the number of contours to place into the list. You only\nreally need to use this method to reduce list size. The method\nSetValue() will automatically increase list size as needed.\n"},
  {(char*)"GetNumberOfContours", PyvtkCutter_GetNumberOfContours, 1,
   (char*)"V.GetNumberOfContours() -> int\nC++: int GetNumberOfContours()\n\nGet the number of contours in the list of contour values.\n"},
  {(char*)"GenerateValues", PyvtkCutter_GenerateValues, 1,
   (char*)"V.GenerateValues(int, [float, float])\nC++: void GenerateValues(int numContours, double range[2])\nV.GenerateValues(int, float, float)\nC++: void GenerateValues(int numContours, double rangeStart,\n    double rangeEnd)\n\nGenerate numContours equally spaced contour values between\nspecified range. Contour values will include min/max range\nvalues.\n"},
  {(char*)"GetMTime", PyvtkCutter_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nOverride GetMTime because we delegate to vtkContourValues and\nrefer to vtkImplicitFunction.\n"},
  {(char*)"SetCutFunction", PyvtkCutter_SetCutFunction, 1,
   (char*)"V.SetCutFunction(vtkImplicitFunction)\nC++: virtual void SetCutFunction(vtkImplicitFunction *)\n\n"},
  {(char*)"GetCutFunction", PyvtkCutter_GetCutFunction, 1,
   (char*)"V.GetCutFunction() -> vtkImplicitFunction\nC++: vtkImplicitFunction *GetCutFunction()\n\n"},
  {(char*)"SetGenerateCutScalars", PyvtkCutter_SetGenerateCutScalars, 1,
   (char*)"V.SetGenerateCutScalars(int)\nC++: void SetGenerateCutScalars(int a)\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated from the implicit function values, and not the input\nscalar data.\n"},
  {(char*)"GetGenerateCutScalars", PyvtkCutter_GetGenerateCutScalars, 1,
   (char*)"V.GetGenerateCutScalars() -> int\nC++: int GetGenerateCutScalars()\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated from the implicit function values, and not the input\nscalar data.\n"},
  {(char*)"GenerateCutScalarsOn", PyvtkCutter_GenerateCutScalarsOn, 1,
   (char*)"V.GenerateCutScalarsOn()\nC++: void GenerateCutScalarsOn()\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated from the implicit function values, and not the input\nscalar data.\n"},
  {(char*)"GenerateCutScalarsOff", PyvtkCutter_GenerateCutScalarsOff, 1,
   (char*)"V.GenerateCutScalarsOff()\nC++: void GenerateCutScalarsOff()\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated from the implicit function values, and not the input\nscalar data.\n"},
  {(char*)"SetLocator", PyvtkCutter_SetLocator, 1,
   (char*)"V.SetLocator(vtkIncrementalPointLocator)\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSpecify a spatial locator for merging points. By default, an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"GetLocator", PyvtkCutter_GetLocator, 1,
   (char*)"V.GetLocator() -> vtkIncrementalPointLocator\nC++: vtkIncrementalPointLocator *GetLocator()\n\nSpecify a spatial locator for merging points. By default, an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"SetSortBy", PyvtkCutter_SetSortBy, 1,
   (char*)"V.SetSortBy(int)\nC++: void SetSortBy(int)\n\nSet the sorting order for the generated polydata. There are two\npossibilities:\n  Sort by value = 0 - This is the most efficient sort. For each\ncell,\n     all contour values are processed. This is the default.\n  Sort by cell = 1 - For each contour value, all cells are\nprocessed.\n     This order should be used if the extracted polygons must be\nrendered\n     in a back-to-front or front-to-back order. This is very\nproblem\n     dependent. For most applications, the default order is fine\n(and faster).\n\nSort by cell is going to have a problem if the input has 2D and\n3D cells. Cell data will be scrambled becauses with vtkPolyData\noutput, verts and lines have lower cell ids than triangles.\n"},
  {(char*)"GetSortByMinValue", PyvtkCutter_GetSortByMinValue, 1,
   (char*)"V.GetSortByMinValue() -> int\nC++: int GetSortByMinValue()\n\nSet the sorting order for the generated polydata. There are two\npossibilities:\n  Sort by value = 0 - This is the most efficient sort. For each\ncell,\n     all contour values are processed. This is the default.\n  Sort by cell = 1 - For each contour value, all cells are\nprocessed.\n     This order should be used if the extracted polygons must be\nrendered\n     in a back-to-front or front-to-back order. This is very\nproblem\n     dependent. For most applications, the default order is fine\n(and faster).\n\nSort by cell is going to have a problem if the input has 2D and\n3D cells. Cell data will be scrambled becauses with vtkPolyData\noutput, verts and lines have lower cell ids than triangles.\n"},
  {(char*)"GetSortByMaxValue", PyvtkCutter_GetSortByMaxValue, 1,
   (char*)"V.GetSortByMaxValue() -> int\nC++: int GetSortByMaxValue()\n\nSet the sorting order for the generated polydata. There are two\npossibilities:\n  Sort by value = 0 - This is the most efficient sort. For each\ncell,\n     all contour values are processed. This is the default.\n  Sort by cell = 1 - For each contour value, all cells are\nprocessed.\n     This order should be used if the extracted polygons must be\nrendered\n     in a back-to-front or front-to-back order. This is very\nproblem\n     dependent. For most applications, the default order is fine\n(and faster).\n\nSort by cell is going to have a problem if the input has 2D and\n3D cells. Cell data will be scrambled becauses with vtkPolyData\noutput, verts and lines have lower cell ids than triangles.\n"},
  {(char*)"GetSortBy", PyvtkCutter_GetSortBy, 1,
   (char*)"V.GetSortBy() -> int\nC++: int GetSortBy()\n\nSet the sorting order for the generated polydata. There are two\npossibilities:\n  Sort by value = 0 - This is the most efficient sort. For each\ncell,\n     all contour values are processed. This is the default.\n  Sort by cell = 1 - For each contour value, all cells are\nprocessed.\n     This order should be used if the extracted polygons must be\nrendered\n     in a back-to-front or front-to-back order. This is very\nproblem\n     dependent. For most applications, the default order is fine\n(and faster).\n\nSort by cell is going to have a problem if the input has 2D and\n3D cells. Cell data will be scrambled becauses with vtkPolyData\noutput, verts and lines have lower cell ids than triangles.\n"},
  {(char*)"SetSortByToSortByValue", PyvtkCutter_SetSortByToSortByValue, 1,
   (char*)"V.SetSortByToSortByValue()\nC++: void SetSortByToSortByValue()\n\nSet the sorting order for the generated polydata. There are two\npossibilities:\n  Sort by value = 0 - This is the most efficient sort. For each\ncell,\n     all contour values are processed. This is the default.\n  Sort by cell = 1 - For each contour value, all cells are\nprocessed.\n     This order should be used if the extracted polygons must be\nrendered\n     in a back-to-front or front-to-back order. This is very\nproblem\n     dependent. For most applications, the default order is fine\n(and faster).\n\nSort by cell is going to have a problem if the input has 2D and\n3D cells. Cell data will be scrambled becauses with vtkPolyData\noutput, verts and lines have lower cell ids than triangles.\n"},
  {(char*)"SetSortByToSortByCell", PyvtkCutter_SetSortByToSortByCell, 1,
   (char*)"V.SetSortByToSortByCell()\nC++: void SetSortByToSortByCell()\n\nSet the sorting order for the generated polydata. There are two\npossibilities:\n  Sort by value = 0 - This is the most efficient sort. For each\ncell,\n     all contour values are processed. This is the default.\n  Sort by cell = 1 - For each contour value, all cells are\nprocessed.\n     This order should be used if the extracted polygons must be\nrendered\n     in a back-to-front or front-to-back order. This is very\nproblem\n     dependent. For most applications, the default order is fine\n(and faster).\n\nSort by cell is going to have a problem if the input has 2D and\n3D cells. Cell data will be scrambled becauses with vtkPolyData\noutput, verts and lines have lower cell ids than triangles.\n"},
  {(char*)"GetSortByAsString", PyvtkCutter_GetSortByAsString, 1,
   (char*)"V.GetSortByAsString() -> string\nC++: const char *GetSortByAsString()\n\nSet the sorting order for the generated polydata. There are two\npossibilities:\n  Sort by value = 0 - This is the most efficient sort. For each\ncell,\n     all contour values are processed. This is the default.\n  Sort by cell = 1 - For each contour value, all cells are\nprocessed.\n     This order should be used if the extracted polygons must be\nrendered\n     in a back-to-front or front-to-back order. This is very\nproblem\n     dependent. For most applications, the default order is fine\n(and faster).\n\nSort by cell is going to have a problem if the input has 2D and\n3D cells. Cell data will be scrambled becauses with vtkPolyData\noutput, verts and lines have lower cell ids than triangles.\n"},
  {(char*)"CreateDefaultLocator", PyvtkCutter_CreateDefaultLocator, 1,
   (char*)"V.CreateDefaultLocator()\nC++: void CreateDefaultLocator()\n\nCreate default locator. Used to create one when none is\nspecified. The locator is used to merge coincident points.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCutter_StaticNew()
{
  return vtkCutter::New();
}

PyObject *PyVTKClass_vtkCutterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCutter_StaticNew,
    PyvtkCutter_Methods,
    "vtkCutter", modulename,
    NULL, NULL,
    PyvtkCutter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkCutter_Doc()
{
  static const char *docstring[] = {
    "vtkCutter - Cut vtkDataSet with user-specified implicit function\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkCutter is a filter to cut through data using any subclass of\nvtkImplicitFunction. That is, a polygonal surface is created\ncorresponding to the implicit function F(x,y,z) = value(s), where you\ncan specify one or more values used to cut with.\n\nIn VTK, cutting means reducing a cell of dimension N to a cut surface\nof dimension N-1. For example, a tetrahedron when cut by a plane\n(i.e., vtkPlane impl",
    "icit function) will generate triangles. (In\ncomparison, clipping takes a N dimensional cell and creates N\ndimension primitives.)\n\nvtkCutter is generally used to \"slice-through\" a dataset, generating\na surface that can be visualized. It is also possible to use\nvtkCutter to do a form of volume rendering. vtkCutter does this by\ngenerating multiple cut surfaces (usually planes) which are ordered\n(and ",
    "rendered) from back-to-front. The surfaces are set translucent\nto give a volumetric rendering effect.\n\nNote that data can be cut using either 1) the scalar values\nassociated with the dataset or 2) an implicit function associated\nwith this class. By default, if an implicit function is set it is\nused to clip the data set, otherwise the dataset scalars are used to\nperform the clipping.\n\nSee Also:\n\nvt",
    "kImplicitFunction vtkClipPolyData\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCutter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCutterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCutter", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SORT_BY_VALUE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SORT_BY_CELL", o) != 0)
    {
    Py_DECREF(o);
    }

}

