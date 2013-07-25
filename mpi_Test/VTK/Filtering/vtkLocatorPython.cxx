// python wrapper for vtkLocator
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
#include "vtkLocator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkLocator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkLocator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkLocatorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkLocatorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkLocator_Doc();


static PyObject *
PyvtkLocator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLocator *op = static_cast<vtkLocator *>(vp);

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
      tempr = op->vtkLocator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLocator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLocator *op = static_cast<vtkLocator *>(vp);

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
      tempr = op->vtkLocator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLocator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLocator *op = static_cast<vtkLocator *>(vp);

  vtkLocator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkLocator::NewInstance();
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
PyvtkLocator_SetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLocator *op = static_cast<vtkLocator *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->SetDataSet(temp0);
      }
    else
      {
      op->vtkLocator::SetDataSet(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLocator_GetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLocator *op = static_cast<vtkLocator *>(vp);

  vtkDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataSet();
      }
    else
      {
      tempr = op->vtkLocator::GetDataSet();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLocator_SetMaxLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLocator *op = static_cast<vtkLocator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaxLevel(temp0);
      }
    else
      {
      op->vtkLocator::SetMaxLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLocator_GetMaxLevelMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxLevelMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLocator *op = static_cast<vtkLocator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaxLevelMinValue();
      }
    else
      {
      tempr = op->vtkLocator::GetMaxLevelMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLocator_GetMaxLevelMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxLevelMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLocator *op = static_cast<vtkLocator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaxLevelMaxValue();
      }
    else
      {
      tempr = op->vtkLocator::GetMaxLevelMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLocator_GetMaxLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLocator *op = static_cast<vtkLocator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaxLevel();
      }
    else
      {
      tempr = op->vtkLocator::GetMaxLevel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLocator_GetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLocator *op = static_cast<vtkLocator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLevel();
      }
    else
      {
      tempr = op->vtkLocator::GetLevel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLocator_SetAutomatic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutomatic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLocator *op = static_cast<vtkLocator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAutomatic(temp0);
      }
    else
      {
      op->vtkLocator::SetAutomatic(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLocator_GetAutomatic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutomatic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLocator *op = static_cast<vtkLocator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAutomatic();
      }
    else
      {
      tempr = op->vtkLocator::GetAutomatic();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLocator_AutomaticOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLocator *op = static_cast<vtkLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutomaticOn();
      }
    else
      {
      op->vtkLocator::AutomaticOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLocator_AutomaticOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLocator *op = static_cast<vtkLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutomaticOff();
      }
    else
      {
      op->vtkLocator::AutomaticOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLocator_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLocator *op = static_cast<vtkLocator *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTolerance(temp0);
      }
    else
      {
      op->vtkLocator::SetTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLocator_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLocator *op = static_cast<vtkLocator *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetToleranceMinValue();
      }
    else
      {
      tempr = op->vtkLocator::GetToleranceMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLocator_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLocator *op = static_cast<vtkLocator *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetToleranceMaxValue();
      }
    else
      {
      tempr = op->vtkLocator::GetToleranceMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLocator_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLocator *op = static_cast<vtkLocator *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTolerance();
      }
    else
      {
      tempr = op->vtkLocator::GetTolerance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLocator_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLocator *op = static_cast<vtkLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkLocator::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLocator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLocator *op = static_cast<vtkLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkLocator::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLocator_BuildLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLocator *op = static_cast<vtkLocator *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->BuildLocator();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLocator_FreeSearchStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeSearchStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLocator *op = static_cast<vtkLocator *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->FreeSearchStructure();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLocator_GenerateRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLocator *op = static_cast<vtkLocator *>(vp);

  int temp0;
  vtkPolyData *temp1 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPolyData"))
    {
    op->GenerateRepresentation(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLocator_GetBuildTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBuildTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLocator *op = static_cast<vtkLocator *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBuildTime();
      }
    else
      {
      tempr = op->vtkLocator::GetBuildTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLocator_Methods[] = {
  {(char*)"GetClassName", PyvtkLocator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkLocator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkLocator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkLocator\nC++: vtkLocator *NewInstance()\n\n"},
  {(char*)"SetDataSet", PyvtkLocator_SetDataSet, 1,
   (char*)"V.SetDataSet(vtkDataSet)\nC++: virtual void SetDataSet(vtkDataSet *)\n\nBuild the locator from the points/cells defining this dataset.\n"},
  {(char*)"GetDataSet", PyvtkLocator_GetDataSet, 1,
   (char*)"V.GetDataSet() -> vtkDataSet\nC++: vtkDataSet *GetDataSet()\n\nBuild the locator from the points/cells defining this dataset.\n"},
  {(char*)"SetMaxLevel", PyvtkLocator_SetMaxLevel, 1,
   (char*)"V.SetMaxLevel(int)\nC++: void SetMaxLevel(int)\n\nSet the maximum allowable level for the tree. If the Automatic\nivar is off, this will be the target depth of the locator.\nInitial value is 8.\n"},
  {(char*)"GetMaxLevelMinValue", PyvtkLocator_GetMaxLevelMinValue, 1,
   (char*)"V.GetMaxLevelMinValue() -> int\nC++: int GetMaxLevelMinValue()\n\nSet the maximum allowable level for the tree. If the Automatic\nivar is off, this will be the target depth of the locator.\nInitial value is 8.\n"},
  {(char*)"GetMaxLevelMaxValue", PyvtkLocator_GetMaxLevelMaxValue, 1,
   (char*)"V.GetMaxLevelMaxValue() -> int\nC++: int GetMaxLevelMaxValue()\n\nSet the maximum allowable level for the tree. If the Automatic\nivar is off, this will be the target depth of the locator.\nInitial value is 8.\n"},
  {(char*)"GetMaxLevel", PyvtkLocator_GetMaxLevel, 1,
   (char*)"V.GetMaxLevel() -> int\nC++: int GetMaxLevel()\n\nSet the maximum allowable level for the tree. If the Automatic\nivar is off, this will be the target depth of the locator.\nInitial value is 8.\n"},
  {(char*)"GetLevel", PyvtkLocator_GetLevel, 1,
   (char*)"V.GetLevel() -> int\nC++: int GetLevel()\n\nGet the level of the locator (determined automatically if\nAutomatic is true). The value of this ivar may change each time\nthe locator is built. Initial value is 8.\n"},
  {(char*)"SetAutomatic", PyvtkLocator_SetAutomatic, 1,
   (char*)"V.SetAutomatic(int)\nC++: void SetAutomatic(int a)\n\nBoolean controls whether locator depth/resolution of locator is\ncomputed automatically from average number of entities in bucket.\nIf not set, there will be an explicit method to control the\nconstruction of the locator (found in the subclass).\n"},
  {(char*)"GetAutomatic", PyvtkLocator_GetAutomatic, 1,
   (char*)"V.GetAutomatic() -> int\nC++: int GetAutomatic()\n\nBoolean controls whether locator depth/resolution of locator is\ncomputed automatically from average number of entities in bucket.\nIf not set, there will be an explicit method to control the\nconstruction of the locator (found in the subclass).\n"},
  {(char*)"AutomaticOn", PyvtkLocator_AutomaticOn, 1,
   (char*)"V.AutomaticOn()\nC++: void AutomaticOn()\n\nBoolean controls whether locator depth/resolution of locator is\ncomputed automatically from average number of entities in bucket.\nIf not set, there will be an explicit method to control the\nconstruction of the locator (found in the subclass).\n"},
  {(char*)"AutomaticOff", PyvtkLocator_AutomaticOff, 1,
   (char*)"V.AutomaticOff()\nC++: void AutomaticOff()\n\nBoolean controls whether locator depth/resolution of locator is\ncomputed automatically from average number of entities in bucket.\nIf not set, there will be an explicit method to control the\nconstruction of the locator (found in the subclass).\n"},
  {(char*)"SetTolerance", PyvtkLocator_SetTolerance, 1,
   (char*)"V.SetTolerance(float)\nC++: void SetTolerance(double)\n\nSpecify absolute tolerance (in world coordinates) for performing\ngeometric operations.\n"},
  {(char*)"GetToleranceMinValue", PyvtkLocator_GetToleranceMinValue, 1,
   (char*)"V.GetToleranceMinValue() -> float\nC++: double GetToleranceMinValue()\n\nSpecify absolute tolerance (in world coordinates) for performing\ngeometric operations.\n"},
  {(char*)"GetToleranceMaxValue", PyvtkLocator_GetToleranceMaxValue, 1,
   (char*)"V.GetToleranceMaxValue() -> float\nC++: double GetToleranceMaxValue()\n\nSpecify absolute tolerance (in world coordinates) for performing\ngeometric operations.\n"},
  {(char*)"GetTolerance", PyvtkLocator_GetTolerance, 1,
   (char*)"V.GetTolerance() -> float\nC++: double GetTolerance()\n\nSpecify absolute tolerance (in world coordinates) for performing\ngeometric operations.\n"},
  {(char*)"Update", PyvtkLocator_Update, 1,
   (char*)"V.Update()\nC++: virtual void Update()\n\nCause the locator to rebuild itself if it or its input dataset\nhas changed.\n"},
  {(char*)"Initialize", PyvtkLocator_Initialize, 1,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nInitialize locator. Frees memory and resets object as\nappropriate.\n"},
  {(char*)"BuildLocator", PyvtkLocator_BuildLocator, 1,
   (char*)"V.BuildLocator()\nC++: virtual void BuildLocator()\n\nBuild the locator from the input dataset.\n"},
  {(char*)"FreeSearchStructure", PyvtkLocator_FreeSearchStructure, 1,
   (char*)"V.FreeSearchStructure()\nC++: virtual void FreeSearchStructure()\n\nFree the memory required for the spatial data structure.\n"},
  {(char*)"GenerateRepresentation", PyvtkLocator_GenerateRepresentation, 1,
   (char*)"V.GenerateRepresentation(int, vtkPolyData)\nC++: virtual void GenerateRepresentation(int level,\n    vtkPolyData *pd)\n\nMethod to build a representation at a particular level. Note that\nthe method GetLevel() returns the maximum number of levels\navailable for the tree. You must provide a vtkPolyData object\ninto which to place the data.\n"},
  {(char*)"GetBuildTime", PyvtkLocator_GetBuildTime, 1,
   (char*)"V.GetBuildTime() -> int\nC++: unsigned long GetBuildTime()\n\nReturn the time of the last data structure build.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkLocatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkLocator_Methods,
    "vtkLocator", modulename,
    NULL, NULL,
    PyvtkLocator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkLocator_Doc()
{
  static const char *docstring[] = {
    "vtkLocator - abstract base class for objects that accelerate spatial\nsearches\n\n",
    "Superclass: vtkObject\n\n",
    "vtkLocator is an abstract base class for spatial search objects, or\nlocators. The principle behind locators is that they divide 3-space\ninto small pieces (or \"buckets\") that can be quickly found in\nresponse to queries like point location, line intersection, or\nobject-object intersection.\n\nThe purpose of this base class is to provide ivars and methods shared\nby all locators. The GenerateRepresentat",
    "ion() is one such interesting\nmethod. This method works in conjunction with vtkLocatorFilter to\ncreate polygonal representations for the locator. For example, if the\nlocator is an OBB tree (i.e., vtkOBBTree.h), then the representation\nis a set of one or more oriented bounding boxes, depending upon the\nspecified level.\n\nLocators typically work as follows. One or more \"entities\", such as\npoints or c",
    "ells, are inserted into the tree. These entities are\nassociated with one or more buckets. Then, when performing geometric\noperations, the operations are performed first on the buckets, and\nthen if the operation tests positive, then on the entities in the\nbucket. For example, during collision tests, the locators are\ncollided first to identify intersecting buckets. If an intersection\nis found, more ",
    "expensive operations are then carried out on the\nentities in the bucket.\n\nTo obtain good performance, locators are often organized in a tree\nstructure.  In such a structure, there are frequently multiple\n\"levels\" corresponding to different nodes in the tree. So the word\nlevel (in the context of the locator) can be used to specify a\nparticular representation in the tree.  For example, in an octree\n",
    "(which is a tree with 8 children), level 0 is the bounding box, or\nroot octant, and level 1 consists of its eight children.\n\nSee Also:\n\nvtkPointLocator vtkCellLocator vtkOBBTree vtkMergePoints\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLocator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLocatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLocator", o) != 0)
    {
    Py_DECREF(o);
    }

}
