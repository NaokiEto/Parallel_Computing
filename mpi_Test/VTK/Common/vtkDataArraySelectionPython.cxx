// python wrapper for vtkDataArraySelection
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
#include "vtkDataArraySelection.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDataArraySelection(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDataArraySelection(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDataArraySelectionNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDataArraySelectionNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkDataArraySelection_Doc();


static PyObject *
PyvtkDataArraySelection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

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
      tempr = op->vtkDataArraySelection::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataArraySelection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

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
      tempr = op->vtkDataArraySelection::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataArraySelection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  vtkDataArraySelection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDataArraySelection::NewInstance();
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
PyvtkDataArraySelection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDataArraySelection *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDataArraySelection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataArraySelection_EnableArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->EnableArray(temp0);
      }
    else
      {
      op->vtkDataArraySelection::EnableArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataArraySelection_DisableArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->DisableArray(temp0);
      }
    else
      {
      op->vtkDataArraySelection::DisableArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataArraySelection_ArrayIsEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ArrayIsEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->ArrayIsEnabled(temp0);
      }
    else
      {
      tempr = op->vtkDataArraySelection::ArrayIsEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataArraySelection_ArrayExists(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ArrayExists");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->ArrayExists(temp0);
      }
    else
      {
      tempr = op->vtkDataArraySelection::ArrayExists(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataArraySelection_EnableAllArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableAllArrays();
      }
    else
      {
      op->vtkDataArraySelection::EnableAllArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataArraySelection_DisableAllArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DisableAllArrays();
      }
    else
      {
      op->vtkDataArraySelection::DisableAllArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataArraySelection_GetNumberOfArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfArrays();
      }
    else
      {
      tempr = op->vtkDataArraySelection::GetNumberOfArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataArraySelection_GetNumberOfArraysEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfArraysEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfArraysEnabled();
      }
    else
      {
      tempr = op->vtkDataArraySelection::GetNumberOfArraysEnabled();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataArraySelection_GetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetArrayName(temp0);
      }
    else
      {
      tempr = op->vtkDataArraySelection::GetArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataArraySelection_GetArrayIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetArrayIndex(temp0);
      }
    else
      {
      tempr = op->vtkDataArraySelection::GetArrayIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataArraySelection_GetEnabledArrayIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnabledArrayIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEnabledArrayIndex(temp0);
      }
    else
      {
      tempr = op->vtkDataArraySelection::GetEnabledArrayIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataArraySelection_GetArraySetting_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArraySetting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetArraySetting(temp0);
      }
    else
      {
      tempr = op->vtkDataArraySelection::GetArraySetting(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataArraySelection_GetArraySetting_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArraySetting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetArraySetting(temp0);
      }
    else
      {
      tempr = op->vtkDataArraySelection::GetArraySetting(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDataArraySelection_GetArraySetting_Methods[] = {
  {NULL, PyvtkDataArraySelection_GetArraySetting_s1, 1,
   (char*)"@z"},
  {NULL, PyvtkDataArraySelection_GetArraySetting_s2, 1,
   (char*)"@i"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDataArraySelection_GetArraySetting(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataArraySelection_GetArraySetting_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetArraySetting");
  return NULL;
}



static PyObject *
PyvtkDataArraySelection_RemoveAllArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllArrays();
      }
    else
      {
      op->vtkDataArraySelection::RemoveAllArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataArraySelection_AddArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->AddArray(temp0);
      }
    else
      {
      tempr = op->vtkDataArraySelection::AddArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataArraySelection_RemoveArrayByIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveArrayByIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveArrayByIndex(temp0);
      }
    else
      {
      op->vtkDataArraySelection::RemoveArrayByIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataArraySelection_RemoveArrayByName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveArrayByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveArrayByName(temp0);
      }
    else
      {
      op->vtkDataArraySelection::RemoveArrayByName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataArraySelection_CopySelections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopySelections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  vtkDataArraySelection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArraySelection"))
    {
    if (ap.IsBound())
      {
      op->CopySelections(temp0);
      }
    else
      {
      op->vtkDataArraySelection::CopySelections(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkDataArraySelection_Methods[] = {
  {(char*)"GetClassName", PyvtkDataArraySelection_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataArraySelection_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataArraySelection_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDataArraySelection\nC++: vtkDataArraySelection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDataArraySelection_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDataArraySelection\nC++: vtkDataArraySelection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"EnableArray", PyvtkDataArraySelection_EnableArray, 1,
   (char*)"V.EnableArray(string)\nC++: void EnableArray(const char *name)\n\nEnable the array with the given name.  Creates a new entry if\nnone exists.\n"},
  {(char*)"DisableArray", PyvtkDataArraySelection_DisableArray, 1,
   (char*)"V.DisableArray(string)\nC++: void DisableArray(const char *name)\n\nDisable the array with the given name.  Creates a new entry if\nnone exists.\n"},
  {(char*)"ArrayIsEnabled", PyvtkDataArraySelection_ArrayIsEnabled, 1,
   (char*)"V.ArrayIsEnabled(string) -> int\nC++: int ArrayIsEnabled(const char *name)\n\nReturn whether the array with the given name is enabled.  If\nthere is no entry, the array is assumed to be disabled.\n"},
  {(char*)"ArrayExists", PyvtkDataArraySelection_ArrayExists, 1,
   (char*)"V.ArrayExists(string) -> int\nC++: int ArrayExists(const char *name)\n\nReturn whether the array with the given name exists.\n"},
  {(char*)"EnableAllArrays", PyvtkDataArraySelection_EnableAllArrays, 1,
   (char*)"V.EnableAllArrays()\nC++: void EnableAllArrays()\n\nEnable all arrays that currently have an entry.\n"},
  {(char*)"DisableAllArrays", PyvtkDataArraySelection_DisableAllArrays, 1,
   (char*)"V.DisableAllArrays()\nC++: void DisableAllArrays()\n\nDisable all arrays that currently have an entry.\n"},
  {(char*)"GetNumberOfArrays", PyvtkDataArraySelection_GetNumberOfArrays, 1,
   (char*)"V.GetNumberOfArrays() -> int\nC++: int GetNumberOfArrays()\n\nGet the number of arrays that currently have an entry.\n"},
  {(char*)"GetNumberOfArraysEnabled", PyvtkDataArraySelection_GetNumberOfArraysEnabled, 1,
   (char*)"V.GetNumberOfArraysEnabled() -> int\nC++: int GetNumberOfArraysEnabled()\n\nGet the number of arrays that are enabled.\n"},
  {(char*)"GetArrayName", PyvtkDataArraySelection_GetArrayName, 1,
   (char*)"V.GetArrayName(int) -> string\nC++: const char *GetArrayName(int index)\n\nGet the name of the array entry at the given index.\n"},
  {(char*)"GetArrayIndex", PyvtkDataArraySelection_GetArrayIndex, 1,
   (char*)"V.GetArrayIndex(string) -> int\nC++: int GetArrayIndex(const char *name)\n\nGet an index of the array containing name within the enabled\narrays\n"},
  {(char*)"GetEnabledArrayIndex", PyvtkDataArraySelection_GetEnabledArrayIndex, 1,
   (char*)"V.GetEnabledArrayIndex(string) -> int\nC++: int GetEnabledArrayIndex(const char *name)\n\nGet the index of an array with the given name among those that\nare enabled.  Returns -1 if the array is not enabled.\n"},
  {(char*)"GetArraySetting", PyvtkDataArraySelection_GetArraySetting, 1,
   (char*)"V.GetArraySetting(string) -> int\nC++: int GetArraySetting(const char *name)\nV.GetArraySetting(int) -> int\nC++: int GetArraySetting(int index)\n\nGet whether the array at the given index is enabled.\n"},
  {(char*)"RemoveAllArrays", PyvtkDataArraySelection_RemoveAllArrays, 1,
   (char*)"V.RemoveAllArrays()\nC++: void RemoveAllArrays()\n\nRemove all array entries.\n"},
  {(char*)"AddArray", PyvtkDataArraySelection_AddArray, 1,
   (char*)"V.AddArray(string) -> int\nC++: int AddArray(const char *name)\n\nAdd to the list of arrays that have entries.  For arrays that\nalready have entries, the settings are untouched.  For arrays\nthat don't already have an entry, they are assumed to be enabled.\nThis method should be called only by the filter owning this\nobject.\n"},
  {(char*)"RemoveArrayByIndex", PyvtkDataArraySelection_RemoveArrayByIndex, 1,
   (char*)"V.RemoveArrayByIndex(int)\nC++: void RemoveArrayByIndex(int index)\n\nRemove an array setting given its index.\n"},
  {(char*)"RemoveArrayByName", PyvtkDataArraySelection_RemoveArrayByName, 1,
   (char*)"V.RemoveArrayByName(string)\nC++: void RemoveArrayByName(const char *name)\n\nRemove an array setting given its name.\n"},
  {(char*)"CopySelections", PyvtkDataArraySelection_CopySelections, 1,
   (char*)"V.CopySelections(vtkDataArraySelection)\nC++: void CopySelections(vtkDataArraySelection *selections)\n\nCopy the selections from the given vtkDataArraySelection\ninstance.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDataArraySelection_StaticNew()
{
  return vtkDataArraySelection::New();
}

PyObject *PyVTKClass_vtkDataArraySelectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDataArraySelection_StaticNew,
    PyvtkDataArraySelection_Methods,
    "vtkDataArraySelection", modulename,
    NULL, NULL,
    PyvtkDataArraySelection_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkDataArraySelection_Doc()
{
  static const char *docstring[] = {
    "vtkDataArraySelection - Store on/off settings for data arrays for a\nvtkSource.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkDataArraySelection can be used by vtkSource subclasses to store\non/off settings for whether each vtkDataArray in its input should be\npassed in the source's output.  This is primarily intended to allow\nfile readers to configure what data arrays are read from the file.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataArraySelection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataArraySelectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataArraySelection", o) != 0)
    {
    Py_DECREF(o);
    }

}

