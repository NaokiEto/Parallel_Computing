// python wrapper for vtkGenericCutter
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
#include "vtkGenericCutter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGenericCutter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGenericCutter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGenericCutterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGenericCutterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkGenericCutter_Doc();


static PyObject *
PyvtkGenericCutter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCutter *op = static_cast<vtkGenericCutter *>(vp);

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
      tempr = op->vtkGenericCutter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCutter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCutter *op = static_cast<vtkGenericCutter *>(vp);

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
      tempr = op->vtkGenericCutter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCutter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCutter *op = static_cast<vtkGenericCutter *>(vp);

  vtkGenericCutter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGenericCutter::NewInstance();
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
PyvtkGenericCutter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGenericCutter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGenericCutter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCutter_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCutter *op = static_cast<vtkGenericCutter *>(vp);

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
      op->vtkGenericCutter::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCutter_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCutter *op = static_cast<vtkGenericCutter *>(vp);

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
      tempr = op->vtkGenericCutter::GetValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCutter_SetNumberOfContours(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfContours");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCutter *op = static_cast<vtkGenericCutter *>(vp);

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
      op->vtkGenericCutter::SetNumberOfContours(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCutter_GetNumberOfContours(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfContours");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCutter *op = static_cast<vtkGenericCutter *>(vp);

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
      tempr = op->vtkGenericCutter::GetNumberOfContours();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCutter_GenerateValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCutter *op = static_cast<vtkGenericCutter *>(vp);

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
      op->vtkGenericCutter::GenerateValues(temp0, temp1);
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
PyvtkGenericCutter_GenerateValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCutter *op = static_cast<vtkGenericCutter *>(vp);

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
      op->vtkGenericCutter::GenerateValues(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGenericCutter_GenerateValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkGenericCutter_GenerateValues_s1(self, args);
    case 3:
      return PyvtkGenericCutter_GenerateValues_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GenerateValues");
  return NULL;
}



static PyObject *
PyvtkGenericCutter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCutter *op = static_cast<vtkGenericCutter *>(vp);

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
      tempr = op->vtkGenericCutter::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCutter_SetCutFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCutter *op = static_cast<vtkGenericCutter *>(vp);

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
      op->vtkGenericCutter::SetCutFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCutter_GetCutFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCutFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCutter *op = static_cast<vtkGenericCutter *>(vp);

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
      tempr = op->vtkGenericCutter::GetCutFunction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCutter_SetGenerateCutScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateCutScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCutter *op = static_cast<vtkGenericCutter *>(vp);

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
      op->vtkGenericCutter::SetGenerateCutScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCutter_GetGenerateCutScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateCutScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCutter *op = static_cast<vtkGenericCutter *>(vp);

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
      tempr = op->vtkGenericCutter::GetGenerateCutScalars();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCutter_GenerateCutScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateCutScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCutter *op = static_cast<vtkGenericCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateCutScalarsOn();
      }
    else
      {
      op->vtkGenericCutter::GenerateCutScalarsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCutter_GenerateCutScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateCutScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCutter *op = static_cast<vtkGenericCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateCutScalarsOff();
      }
    else
      {
      op->vtkGenericCutter::GenerateCutScalarsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCutter_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCutter *op = static_cast<vtkGenericCutter *>(vp);

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
      op->vtkGenericCutter::SetLocator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCutter_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCutter *op = static_cast<vtkGenericCutter *>(vp);

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
      tempr = op->vtkGenericCutter::GetLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCutter_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCutter *op = static_cast<vtkGenericCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultLocator();
      }
    else
      {
      op->vtkGenericCutter::CreateDefaultLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGenericCutter_Methods[] = {
  {(char*)"GetClassName", PyvtkGenericCutter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGenericCutter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGenericCutter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGenericCutter\nC++: vtkGenericCutter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGenericCutter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGenericCutter\nC++: vtkGenericCutter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetValue", PyvtkGenericCutter_SetValue, 1,
   (char*)"V.SetValue(int, float)\nC++: void SetValue(int i, double value)\n\nSet a particular contour value at contour number i. The index i\nranges between 0<=i<NumberOfContours.\n"},
  {(char*)"GetValue", PyvtkGenericCutter_GetValue, 1,
   (char*)"V.GetValue(int) -> float\nC++: double GetValue(int i)\n\nGet the ith contour value.\n"},
  {(char*)"SetNumberOfContours", PyvtkGenericCutter_SetNumberOfContours, 1,
   (char*)"V.SetNumberOfContours(int)\nC++: void SetNumberOfContours(int number)\n\nSet the number of contours to place into the list. You only\nreally need to use this method to reduce list size. The method\nSetValue() will automatically increase list size as needed.\n"},
  {(char*)"GetNumberOfContours", PyvtkGenericCutter_GetNumberOfContours, 1,
   (char*)"V.GetNumberOfContours() -> int\nC++: int GetNumberOfContours()\n\nGet the number of contours in the list of contour values.\n"},
  {(char*)"GenerateValues", PyvtkGenericCutter_GenerateValues, 1,
   (char*)"V.GenerateValues(int, [float, float])\nC++: void GenerateValues(int numContours, double range[2])\nV.GenerateValues(int, float, float)\nC++: void GenerateValues(int numContours, double rangeStart,\n    double rangeEnd)\n\nGenerate numContours equally spaced contour values between\nspecified range. Contour values will include min/max range\nvalues.\n"},
  {(char*)"GetMTime", PyvtkGenericCutter_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nOverride GetMTime because we delegate to vtkContourValues and\nrefer to vtkImplicitFunction.\n"},
  {(char*)"SetCutFunction", PyvtkGenericCutter_SetCutFunction, 1,
   (char*)"V.SetCutFunction(vtkImplicitFunction)\nC++: virtual void SetCutFunction(vtkImplicitFunction *)\n\n"},
  {(char*)"GetCutFunction", PyvtkGenericCutter_GetCutFunction, 1,
   (char*)"V.GetCutFunction() -> vtkImplicitFunction\nC++: vtkImplicitFunction *GetCutFunction()\n\n"},
  {(char*)"SetGenerateCutScalars", PyvtkGenericCutter_SetGenerateCutScalars, 1,
   (char*)"V.SetGenerateCutScalars(int)\nC++: void SetGenerateCutScalars(int a)\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated from the implicit function values, and not the input\nscalar data.\n"},
  {(char*)"GetGenerateCutScalars", PyvtkGenericCutter_GetGenerateCutScalars, 1,
   (char*)"V.GetGenerateCutScalars() -> int\nC++: int GetGenerateCutScalars()\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated from the implicit function values, and not the input\nscalar data.\n"},
  {(char*)"GenerateCutScalarsOn", PyvtkGenericCutter_GenerateCutScalarsOn, 1,
   (char*)"V.GenerateCutScalarsOn()\nC++: void GenerateCutScalarsOn()\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated from the implicit function values, and not the input\nscalar data.\n"},
  {(char*)"GenerateCutScalarsOff", PyvtkGenericCutter_GenerateCutScalarsOff, 1,
   (char*)"V.GenerateCutScalarsOff()\nC++: void GenerateCutScalarsOff()\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated from the implicit function values, and not the input\nscalar data.\n"},
  {(char*)"SetLocator", PyvtkGenericCutter_SetLocator, 1,
   (char*)"V.SetLocator(vtkIncrementalPointLocator)\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSpecify a spatial locator for merging points. By default, an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"GetLocator", PyvtkGenericCutter_GetLocator, 1,
   (char*)"V.GetLocator() -> vtkIncrementalPointLocator\nC++: vtkIncrementalPointLocator *GetLocator()\n\nSpecify a spatial locator for merging points. By default, an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"CreateDefaultLocator", PyvtkGenericCutter_CreateDefaultLocator, 1,
   (char*)"V.CreateDefaultLocator()\nC++: void CreateDefaultLocator()\n\nCreate default locator. Used to create one when none is\nspecified. The locator is used to merge coincident points.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGenericCutter_StaticNew()
{
  return vtkGenericCutter::New();
}

PyObject *PyVTKClass_vtkGenericCutterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGenericCutter_StaticNew,
    PyvtkGenericCutter_Methods,
    "vtkGenericCutter", modulename,
    NULL, NULL,
    PyvtkGenericCutter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkGenericCutter_Doc()
{
  static const char *docstring[] = {
    "vtkGenericCutter - cut a vtkGenericDataSet with an implicit function\nor scalar data\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkGenericCutter is a filter to cut through data using any subclass\nof vtkImplicitFunction. That is, a polygonal surface is created\ncorresponding to the implicit function F(x,y,z) = value(s), where you\ncan specify one or more values used to cut with.\n\nIn VTK, cutting means reducing a cell of dimension N to a cut surface\nof dimension N-1. For example, a tetrahedron when cut by a plane\n(i.e., vtkPla",
    "ne implicit function) will generate triangles. (In\ncomparison, clipping takes a N dimensional cell and creates N\ndimension primitives.)\n\nvtkGenericCutter is generally used to \"slice-through\" a dataset,\ngenerating a surface that can be visualized. It is also possible to\nuse vtkGenericCutter to do a form of volume rendering.\nvtkGenericCutter does this by generating multiple cut surfaces\n(usually pla",
    "nes) which are ordered (and rendered) from back-to-front.\nThe surfaces are set translucent to give a volumetric rendering\neffect.\n\nThis filter has been implemented to operate on generic datasets,\nrather than the typical vtkDataSet (and subclasses).\nvtkGenericDataSet is a more complex cousin of vtkDataSet, typically\nconsisting of nonlinear, higher-order cells. To process this type of\ndata, generic ",
    "cells are automatically tessellated into linear cells\nprior to isocontouring.\n\nSee Also:\n\nvtkCutter vtkImplicitFunction vtkClipPolyData vtkGenericDataSet\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGenericCutter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGenericCutterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGenericCutter", o) != 0)
    {
    Py_DECREF(o);
    }

}

