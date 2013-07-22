// python wrapper for vtkPassArrays
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
#include "vtkPassArrays.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPassArrays(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPassArrays(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPassArraysNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPassArraysNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
#endif

static const char **PyvtkPassArrays_Doc();


static PyObject *
PyvtkPassArrays_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

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
      tempr = op->vtkPassArrays::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPassArrays_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

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
      tempr = op->vtkPassArrays::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPassArrays_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  vtkPassArrays *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPassArrays::NewInstance();
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
PyvtkPassArrays_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPassArrays *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPassArrays::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPassArrays_AddArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  int temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddArray(temp0, temp1);
      }
    else
      {
      op->vtkPassArrays::AddArray(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPassArrays_ClearArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearArrays();
      }
    else
      {
      op->vtkPassArrays::ClearArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPassArrays_SetRemoveArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRemoveArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRemoveArrays(temp0);
      }
    else
      {
      op->vtkPassArrays::SetRemoveArrays(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPassArrays_GetRemoveArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRemoveArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRemoveArrays();
      }
    else
      {
      tempr = op->vtkPassArrays::GetRemoveArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPassArrays_RemoveArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveArraysOn();
      }
    else
      {
      op->vtkPassArrays::RemoveArraysOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPassArrays_RemoveArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveArraysOff();
      }
    else
      {
      op->vtkPassArrays::RemoveArraysOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPassArrays_SetUseFieldTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseFieldTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseFieldTypes(temp0);
      }
    else
      {
      op->vtkPassArrays::SetUseFieldTypes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPassArrays_GetUseFieldTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseFieldTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseFieldTypes();
      }
    else
      {
      tempr = op->vtkPassArrays::GetUseFieldTypes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPassArrays_UseFieldTypesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseFieldTypesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseFieldTypesOn();
      }
    else
      {
      op->vtkPassArrays::UseFieldTypesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPassArrays_UseFieldTypesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseFieldTypesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseFieldTypesOff();
      }
    else
      {
      op->vtkPassArrays::UseFieldTypesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPassArrays_AddFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddFieldType(temp0);
      }
    else
      {
      op->vtkPassArrays::AddFieldType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPassArrays_ClearFieldTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearFieldTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearFieldTypes();
      }
    else
      {
      op->vtkPassArrays::ClearFieldTypes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPassArrays_Methods[] = {
  {(char*)"GetClassName", PyvtkPassArrays_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPassArrays_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPassArrays_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPassArrays\nC++: vtkPassArrays *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPassArrays_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPassArrays\nC++: vtkPassArrays *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddArray", PyvtkPassArrays_AddArray, 1,
   (char*)"V.AddArray(int, string)\nC++: virtual void AddArray(int fieldType, const char *name)\n\nAdds an array to pass through. fieldType where the array that\nshould be passed (point data, cell data, etc.). It should be one\nof the constants defined in the vtkDataObject::AttributeTypes\nenumeration.\n"},
  {(char*)"ClearArrays", PyvtkPassArrays_ClearArrays, 1,
   (char*)"V.ClearArrays()\nC++: virtual void ClearArrays()\n\nClear all arrays to pass through.\n"},
  {(char*)"SetRemoveArrays", PyvtkPassArrays_SetRemoveArrays, 1,
   (char*)"V.SetRemoveArrays(bool)\nC++: void SetRemoveArrays(bool a)\n\nInstead of passing only the specified arrays, remove the\nspecified arrays and keep all other arrays. Default is off.\n"},
  {(char*)"GetRemoveArrays", PyvtkPassArrays_GetRemoveArrays, 1,
   (char*)"V.GetRemoveArrays() -> bool\nC++: bool GetRemoveArrays()\n\nInstead of passing only the specified arrays, remove the\nspecified arrays and keep all other arrays. Default is off.\n"},
  {(char*)"RemoveArraysOn", PyvtkPassArrays_RemoveArraysOn, 1,
   (char*)"V.RemoveArraysOn()\nC++: void RemoveArraysOn()\n\nInstead of passing only the specified arrays, remove the\nspecified arrays and keep all other arrays. Default is off.\n"},
  {(char*)"RemoveArraysOff", PyvtkPassArrays_RemoveArraysOff, 1,
   (char*)"V.RemoveArraysOff()\nC++: void RemoveArraysOff()\n\nInstead of passing only the specified arrays, remove the\nspecified arrays and keep all other arrays. Default is off.\n"},
  {(char*)"SetUseFieldTypes", PyvtkPassArrays_SetUseFieldTypes, 1,
   (char*)"V.SetUseFieldTypes(bool)\nC++: void SetUseFieldTypes(bool a)\n\nProcess only those field types explicitly specified with\nAddFieldType. Otherwise, processes field types associated with at\nleast one specified array. Default is off.\n"},
  {(char*)"GetUseFieldTypes", PyvtkPassArrays_GetUseFieldTypes, 1,
   (char*)"V.GetUseFieldTypes() -> bool\nC++: bool GetUseFieldTypes()\n\nProcess only those field types explicitly specified with\nAddFieldType. Otherwise, processes field types associated with at\nleast one specified array. Default is off.\n"},
  {(char*)"UseFieldTypesOn", PyvtkPassArrays_UseFieldTypesOn, 1,
   (char*)"V.UseFieldTypesOn()\nC++: void UseFieldTypesOn()\n\nProcess only those field types explicitly specified with\nAddFieldType. Otherwise, processes field types associated with at\nleast one specified array. Default is off.\n"},
  {(char*)"UseFieldTypesOff", PyvtkPassArrays_UseFieldTypesOff, 1,
   (char*)"V.UseFieldTypesOff()\nC++: void UseFieldTypesOff()\n\nProcess only those field types explicitly specified with\nAddFieldType. Otherwise, processes field types associated with at\nleast one specified array. Default is off.\n"},
  {(char*)"AddFieldType", PyvtkPassArrays_AddFieldType, 1,
   (char*)"V.AddFieldType(int)\nC++: virtual void AddFieldType(int fieldType)\n\nAdd a field type to process. fieldType where the array that\nshould be passed (point data, cell data, etc.). It should be one\nof the constants defined in the vtkDataObject::AttributeTypes\nenumeration. NOTE: These are only used if UseFieldType is turned\non.\n"},
  {(char*)"ClearFieldTypes", PyvtkPassArrays_ClearFieldTypes, 1,
   (char*)"V.ClearFieldTypes()\nC++: virtual void ClearFieldTypes()\n\nClear all field types to process.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPassArrays_StaticNew()
{
  return vtkPassArrays::New();
}

PyObject *PyVTKClass_vtkPassArraysNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPassArrays_StaticNew,
    PyvtkPassArrays_Methods,
    "vtkPassArrays", modulename,
    NULL, NULL,
    PyvtkPassArrays_Doc(),
    PyVTKClass_vtkDataObjectAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPassArrays_Doc()
{
  static const char *docstring[] = {
    "vtkPassArrays - Passes a subset of arrays to the output\n\n",
    "Superclass: vtkDataObjectAlgorithm\n\n",
    "This filter preserves all the topology of the input, but only a\nsubset of arrays are passed to the output. Add an array to be passed\nto the output data object with AddArray(). If RemoveArrays is on, the\nspecified arrays will be the ones that are removed instead of the\nones that are kept.\n\nArrays with special attributes (scalars, pedigree ids, etc.) will\nretain those attributes in the output.\n\nBy d",
    "efault, only those field types with at least one array specified\nthrough AddArray will be processed. If instead UseFieldTypes is\nturned on, you explicitly set which field types to process with\nAddFieldType.\n\nExample 1:\n\npassArray->AddArray(vtkDataObject::POINT, \"velocity\"); \n\nThe output will have only that one array \"velocity\" in the point\ndata, but cell and field data will be untouched.\n\nExample ",
    "2:\n\npassArray->AddArray(vtkDataObject::POINT, \"velocity\");\npassArray->UseFieldTypesOn();\npassArray->AddFieldType(vtkDataObject::POINT);\npassArray->AddFieldType(vtkDataObject::CELL); \n\nThe point data would still contain the single array, but the cell\ndata would be cleared since you did not specify any arrays to pass.\nField data would still be untouched.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPassArrays(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPassArraysNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPassArrays", o) != 0)
    {
    Py_DECREF(o);
    }

}

