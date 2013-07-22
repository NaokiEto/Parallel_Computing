// python wrapper for vtkGenericDataSetTessellator
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
#include "vtkGenericDataSetTessellator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGenericDataSetTessellator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGenericDataSetTessellator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGenericDataSetTessellatorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGenericDataSetTessellatorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkGenericDataSetTessellator_Doc();


static PyObject *
PyvtkGenericDataSetTessellator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

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
      tempr = op->vtkGenericDataSetTessellator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

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
      tempr = op->vtkGenericDataSetTessellator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  vtkGenericDataSetTessellator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGenericDataSetTessellator::NewInstance();
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
PyvtkGenericDataSetTessellator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGenericDataSetTessellator *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGenericDataSetTessellator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_SetKeepCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeepCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetKeepCellIds(temp0);
      }
    else
      {
      op->vtkGenericDataSetTessellator::SetKeepCellIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_GetKeepCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeepCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetKeepCellIds();
      }
    else
      {
      tempr = op->vtkGenericDataSetTessellator::GetKeepCellIds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_KeepCellIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "KeepCellIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->KeepCellIdsOn();
      }
    else
      {
      op->vtkGenericDataSetTessellator::KeepCellIdsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_KeepCellIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "KeepCellIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->KeepCellIdsOff();
      }
    else
      {
      op->vtkGenericDataSetTessellator::KeepCellIdsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_SetMerging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMerging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMerging(temp0);
      }
    else
      {
      op->vtkGenericDataSetTessellator::SetMerging(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_GetMerging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMerging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMerging();
      }
    else
      {
      tempr = op->vtkGenericDataSetTessellator::GetMerging();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_MergingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MergingOn();
      }
    else
      {
      op->vtkGenericDataSetTessellator::MergingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_MergingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MergingOff();
      }
    else
      {
      op->vtkGenericDataSetTessellator::MergingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

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
      op->vtkGenericDataSetTessellator::SetLocator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

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
      tempr = op->vtkGenericDataSetTessellator::GetLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultLocator();
      }
    else
      {
      op->vtkGenericDataSetTessellator::CreateDefaultLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

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
      tempr = op->vtkGenericDataSetTessellator::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGenericDataSetTessellator_Methods[] = {
  {(char*)"GetClassName", PyvtkGenericDataSetTessellator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK methods.\n"},
  {(char*)"IsA", PyvtkGenericDataSetTessellator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK methods.\n"},
  {(char*)"NewInstance", PyvtkGenericDataSetTessellator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGenericDataSetTessellator\nC++: vtkGenericDataSetTessellator *NewInstance()\n\nStandard VTK methods.\n"},
  {(char*)"SafeDownCast", PyvtkGenericDataSetTessellator_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGenericDataSetTessellator\nC++: vtkGenericDataSetTessellator *SafeDownCast(vtkObject* o)\n\nStandard VTK methods.\n"},
  {(char*)"SetKeepCellIds", PyvtkGenericDataSetTessellator_SetKeepCellIds, 1,
   (char*)"V.SetKeepCellIds(int)\nC++: void SetKeepCellIds(int a)\n\n"},
  {(char*)"GetKeepCellIds", PyvtkGenericDataSetTessellator_GetKeepCellIds, 1,
   (char*)"V.GetKeepCellIds() -> int\nC++: int GetKeepCellIds()\n\n"},
  {(char*)"KeepCellIdsOn", PyvtkGenericDataSetTessellator_KeepCellIdsOn, 1,
   (char*)"V.KeepCellIdsOn()\nC++: void KeepCellIdsOn()\n\n"},
  {(char*)"KeepCellIdsOff", PyvtkGenericDataSetTessellator_KeepCellIdsOff, 1,
   (char*)"V.KeepCellIdsOff()\nC++: void KeepCellIdsOff()\n\n"},
  {(char*)"SetMerging", PyvtkGenericDataSetTessellator_SetMerging, 1,
   (char*)"V.SetMerging(int)\nC++: void SetMerging(int a)\n\nTurn on/off merging of coincident points. Note that is merging is\non, points with different point attributes (e.g., normals) are\nmerged, which may cause rendering artifacts.\n"},
  {(char*)"GetMerging", PyvtkGenericDataSetTessellator_GetMerging, 1,
   (char*)"V.GetMerging() -> int\nC++: int GetMerging()\n\nTurn on/off merging of coincident points. Note that is merging is\non, points with different point attributes (e.g., normals) are\nmerged, which may cause rendering artifacts.\n"},
  {(char*)"MergingOn", PyvtkGenericDataSetTessellator_MergingOn, 1,
   (char*)"V.MergingOn()\nC++: void MergingOn()\n\nTurn on/off merging of coincident points. Note that is merging is\non, points with different point attributes (e.g., normals) are\nmerged, which may cause rendering artifacts.\n"},
  {(char*)"MergingOff", PyvtkGenericDataSetTessellator_MergingOff, 1,
   (char*)"V.MergingOff()\nC++: void MergingOff()\n\nTurn on/off merging of coincident points. Note that is merging is\non, points with different point attributes (e.g., normals) are\nmerged, which may cause rendering artifacts.\n"},
  {(char*)"SetLocator", PyvtkGenericDataSetTessellator_SetLocator, 1,
   (char*)"V.SetLocator(vtkIncrementalPointLocator)\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSet / get a spatial locator for merging points. By default an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"GetLocator", PyvtkGenericDataSetTessellator_GetLocator, 1,
   (char*)"V.GetLocator() -> vtkIncrementalPointLocator\nC++: vtkIncrementalPointLocator *GetLocator()\n\nSet / get a spatial locator for merging points. By default an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"CreateDefaultLocator", PyvtkGenericDataSetTessellator_CreateDefaultLocator, 1,
   (char*)"V.CreateDefaultLocator()\nC++: void CreateDefaultLocator()\n\nCreate default locator. Used to create one when none is\nspecified.\n"},
  {(char*)"GetMTime", PyvtkGenericDataSetTessellator_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nReturn the MTime also considering the locator.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGenericDataSetTessellator_StaticNew()
{
  return vtkGenericDataSetTessellator::New();
}

PyObject *PyVTKClass_vtkGenericDataSetTessellatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGenericDataSetTessellator_StaticNew,
    PyvtkGenericDataSetTessellator_Methods,
    "vtkGenericDataSetTessellator", modulename,
    NULL, NULL,
    PyvtkGenericDataSetTessellator_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkGenericDataSetTessellator_Doc()
{
  static const char *docstring[] = {
    "vtkGenericDataSetTessellator - tessellates generic, higher-order\ndatasets into linear cells\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "See Also:\n\nvtkGenericCellTessellator vtkGenericSubdivisionErrorMetric\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGenericDataSetTessellator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGenericDataSetTessellatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGenericDataSetTessellator", o) != 0)
    {
    Py_DECREF(o);
    }

}

