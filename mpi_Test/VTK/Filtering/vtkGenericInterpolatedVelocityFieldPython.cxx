// python wrapper for vtkGenericInterpolatedVelocityField
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
#include "vtkGenericInterpolatedVelocityField.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGenericInterpolatedVelocityField(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGenericInterpolatedVelocityField(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGenericInterpolatedVelocityFieldNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGenericInterpolatedVelocityFieldNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkFunctionSetNew
extern "C" { PyObject *PyVTKClass_vtkFunctionSetNew(const char *); }
#define DECLARED_PyVTKClass_vtkFunctionSetNew
#endif

static const char **PyvtkGenericInterpolatedVelocityField_Doc();


static PyObject *
PyvtkGenericInterpolatedVelocityField_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

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
      tempr = op->vtkGenericInterpolatedVelocityField::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericInterpolatedVelocityField_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

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
      tempr = op->vtkGenericInterpolatedVelocityField::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericInterpolatedVelocityField_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

  vtkGenericInterpolatedVelocityField *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGenericInterpolatedVelocityField::NewInstance();
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
PyvtkGenericInterpolatedVelocityField_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGenericInterpolatedVelocityField *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGenericInterpolatedVelocityField::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericInterpolatedVelocityField_AddDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

  vtkGenericDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericDataSet"))
    {
    if (ap.IsBound())
      {
      op->AddDataSet(temp0);
      }
    else
      {
      op->vtkGenericInterpolatedVelocityField::AddDataSet(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericInterpolatedVelocityField_ClearLastCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearLastCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearLastCell();
      }
    else
      {
      op->vtkGenericInterpolatedVelocityField::ClearLastCell();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericInterpolatedVelocityField_GetLastCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

  vtkGenericAdaptorCell *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLastCell();
      }
    else
      {
      tempr = op->vtkGenericInterpolatedVelocityField::GetLastCell();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericInterpolatedVelocityField_GetLastLocalCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastLocalCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      tempr = op->GetLastLocalCoordinates(temp0);
      }
    else
      {
      tempr = op->vtkGenericInterpolatedVelocityField::GetLastLocalCoordinates(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericInterpolatedVelocityField_GetCaching(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCaching");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCaching();
      }
    else
      {
      tempr = op->vtkGenericInterpolatedVelocityField::GetCaching();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericInterpolatedVelocityField_SetCaching(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCaching");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCaching(temp0);
      }
    else
      {
      op->vtkGenericInterpolatedVelocityField::SetCaching(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericInterpolatedVelocityField_CachingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CachingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CachingOn();
      }
    else
      {
      op->vtkGenericInterpolatedVelocityField::CachingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericInterpolatedVelocityField_CachingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CachingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CachingOff();
      }
    else
      {
      op->vtkGenericInterpolatedVelocityField::CachingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericInterpolatedVelocityField_GetCacheHit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheHit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCacheHit();
      }
    else
      {
      tempr = op->vtkGenericInterpolatedVelocityField::GetCacheHit();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericInterpolatedVelocityField_GetCacheMiss(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheMiss");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCacheMiss();
      }
    else
      {
      tempr = op->vtkGenericInterpolatedVelocityField::GetCacheMiss();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericInterpolatedVelocityField_GetVectorsSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorsSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVectorsSelection();
      }
    else
      {
      tempr = op->vtkGenericInterpolatedVelocityField::GetVectorsSelection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericInterpolatedVelocityField_SelectVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SelectVectors(temp0);
      }
    else
      {
      op->vtkGenericInterpolatedVelocityField::SelectVectors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericInterpolatedVelocityField_GetLastDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

  vtkGenericDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLastDataSet();
      }
    else
      {
      tempr = op->vtkGenericInterpolatedVelocityField::GetLastDataSet();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericInterpolatedVelocityField_CopyParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

  vtkGenericInterpolatedVelocityField *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericInterpolatedVelocityField"))
    {
    if (ap.IsBound())
      {
      op->CopyParameters(temp0);
      }
    else
      {
      op->vtkGenericInterpolatedVelocityField::CopyParameters(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGenericInterpolatedVelocityField_Methods[] = {
  {(char*)"GetClassName", PyvtkGenericInterpolatedVelocityField_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGenericInterpolatedVelocityField_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGenericInterpolatedVelocityField_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGenericInterpolatedVelocityField\nC++: vtkGenericInterpolatedVelocityField *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGenericInterpolatedVelocityField_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGenericInterpolatedVelocityField\nC++: vtkGenericInterpolatedVelocityField *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"AddDataSet", PyvtkGenericInterpolatedVelocityField_AddDataSet, 1,
   (char*)"V.AddDataSet(vtkGenericDataSet)\nC++: virtual void AddDataSet(vtkGenericDataSet *dataset)\n\nAdd a dataset used for the implicit function evaluation. If more\nthan one dataset is added, the evaluation point is searched in\nall until a match is found. THIS FUNCTION DOES NOT CHANGE THE\nREFERENCE COUNT OF dataset FOR THREAD SAFETY REASONS.\n"},
  {(char*)"ClearLastCell", PyvtkGenericInterpolatedVelocityField_ClearLastCell, 1,
   (char*)"V.ClearLastCell()\nC++: void ClearLastCell()\n\nSet the last cell id to -1 so that the next search does not start\nfrom the previous cell\n"},
  {(char*)"GetLastCell", PyvtkGenericInterpolatedVelocityField_GetLastCell, 1,
   (char*)"V.GetLastCell() -> vtkGenericAdaptorCell\nC++: vtkGenericAdaptorCell *GetLastCell()\n\nReturn the cell cached from last evaluation.\n"},
  {(char*)"GetLastLocalCoordinates", PyvtkGenericInterpolatedVelocityField_GetLastLocalCoordinates, 1,
   (char*)"V.GetLastLocalCoordinates([float, float, float]) -> int\nC++: int GetLastLocalCoordinates(double pcoords[3])\n\nReturns the interpolation weights cached from last evaluation if\nthe cached cell is valid (returns 1). Otherwise, it does not\nchange w and returns 0.\n"},
  {(char*)"GetCaching", PyvtkGenericInterpolatedVelocityField_GetCaching, 1,
   (char*)"V.GetCaching() -> int\nC++: int GetCaching()\n\nTurn caching on/off.\n"},
  {(char*)"SetCaching", PyvtkGenericInterpolatedVelocityField_SetCaching, 1,
   (char*)"V.SetCaching(int)\nC++: void SetCaching(int a)\n\nTurn caching on/off.\n"},
  {(char*)"CachingOn", PyvtkGenericInterpolatedVelocityField_CachingOn, 1,
   (char*)"V.CachingOn()\nC++: void CachingOn()\n\nTurn caching on/off.\n"},
  {(char*)"CachingOff", PyvtkGenericInterpolatedVelocityField_CachingOff, 1,
   (char*)"V.CachingOff()\nC++: void CachingOff()\n\nTurn caching on/off.\n"},
  {(char*)"GetCacheHit", PyvtkGenericInterpolatedVelocityField_GetCacheHit, 1,
   (char*)"V.GetCacheHit() -> int\nC++: int GetCacheHit()\n\nCaching statistics.\n"},
  {(char*)"GetCacheMiss", PyvtkGenericInterpolatedVelocityField_GetCacheMiss, 1,
   (char*)"V.GetCacheMiss() -> int\nC++: int GetCacheMiss()\n\nCaching statistics.\n"},
  {(char*)"GetVectorsSelection", PyvtkGenericInterpolatedVelocityField_GetVectorsSelection, 1,
   (char*)"V.GetVectorsSelection() -> string\nC++: char *GetVectorsSelection()\n\nIf you want to work with an arbitrary vector array, then set its\nname here. By default this in NULL and the filter will use the\nactive vector array.\n"},
  {(char*)"SelectVectors", PyvtkGenericInterpolatedVelocityField_SelectVectors, 1,
   (char*)"V.SelectVectors(string)\nC++: void SelectVectors(const char *fieldName)\n\nIf you want to work with an arbitrary vector array, then set its\nname here. By default this in NULL and the filter will use the\nactive vector array.\n"},
  {(char*)"GetLastDataSet", PyvtkGenericInterpolatedVelocityField_GetLastDataSet, 1,
   (char*)"V.GetLastDataSet() -> vtkGenericDataSet\nC++: vtkGenericDataSet *GetLastDataSet()\n\nReturns the last dataset that was visited. Can be used as a first\nguess as to where the next point will be as well as to avoid\nsearching through all datasets to get more information about the\npoint.\n"},
  {(char*)"CopyParameters", PyvtkGenericInterpolatedVelocityField_CopyParameters, 1,
   (char*)"V.CopyParameters(vtkGenericInterpolatedVelocityField)\nC++: virtual void CopyParameters(\n    vtkGenericInterpolatedVelocityField *from)\n\nCopy the user set parameters from source. This copies the Caching\nparameters. Sub-classes can add more after chaining.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGenericInterpolatedVelocityField_StaticNew()
{
  return vtkGenericInterpolatedVelocityField::New();
}

PyObject *PyVTKClass_vtkGenericInterpolatedVelocityFieldNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGenericInterpolatedVelocityField_StaticNew,
    PyvtkGenericInterpolatedVelocityField_Methods,
    "vtkGenericInterpolatedVelocityField", modulename,
    NULL, NULL,
    PyvtkGenericInterpolatedVelocityField_Doc(),
    PyVTKClass_vtkFunctionSetNew(modulename));
  return cls;
}

const char **PyvtkGenericInterpolatedVelocityField_Doc()
{
  static const char *docstring[] = {
    "vtkGenericInterpolatedVelocityField - Interface for obtaining\n\n",
    "Superclass: vtkFunctionSet\n\n",
    "vtkGenericInterpolatedVelocityField acts as a continuous velocity\nfield by performing cell interpolation on the underlying vtkDataSet.\nThis is a concrete sub-class of vtkFunctionSet with\nNumberOfIndependentVariables = 4 (x,y,z,t) and NumberOfFunctions = 3\n(u,v,w). Normally, every time an evaluation is performed, the cell\nwhich contains the point (x,y,z) has to be found by calling FindCell.\nThis is",
    " a computationally expansive operation. In certain cases, the\ncell search can be avoided or shortened by providing a guess for the\ncell iterator. For example, in streamline integration, the next\nevaluation is usually in the same or a neighbour cell. For this\nreason, vtkGenericInterpolatedVelocityField stores the last cell\niterator. If caching is turned on, it uses this iterator as the\nstarting poi",
    "nt.\n\nCaveats:\n\nvtkGenericInterpolatedVelocityField is not thread safe. A new\ninstance should be created by each thread.\n\nSee Also:\n\nvtkFunctionSet vtkGenericStreamTracer\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGenericInterpolatedVelocityField(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGenericInterpolatedVelocityFieldNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGenericInterpolatedVelocityField", o) != 0)
    {
    Py_DECREF(o);
    }

}

