// python wrapper for vtkInformationKeyVectorKey
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
#include "vtkInformationKeyVectorKey.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkInformationKeyVectorKey(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkInformationKeyVectorKey(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkInformationKeyVectorKeyNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkInformationKeyVectorKeyNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkInformationKeyNew
extern "C" { PyObject *PyVTKClass_vtkInformationKeyNew(const char *); }
#define DECLARED_PyVTKClass_vtkInformationKeyNew
#endif

static const char **PyvtkInformationKeyVectorKey_Doc();


static PyObject *
PyvtkInformationKeyVectorKey_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKeyVectorKey *op = static_cast<vtkInformationKeyVectorKey *>(vp);

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
      tempr = op->vtkInformationKeyVectorKey::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationKeyVectorKey_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKeyVectorKey *op = static_cast<vtkInformationKeyVectorKey *>(vp);

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
      tempr = op->vtkInformationKeyVectorKey::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationKeyVectorKey_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKeyVectorKey *op = static_cast<vtkInformationKeyVectorKey *>(vp);

  vtkInformationKeyVectorKey *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkInformationKeyVectorKey::NewInstance();
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
PyvtkInformationKeyVectorKey_Append(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKeyVectorKey *op = static_cast<vtkInformationKeyVectorKey *>(vp);

  vtkInformation *temp0 = NULL;
  vtkInformationKey *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationKey"))
    {
    if (ap.IsBound())
      {
      op->Append(temp0, temp1);
      }
    else
      {
      op->vtkInformationKeyVectorKey::Append(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformationKeyVectorKey_AppendUnique(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendUnique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKeyVectorKey *op = static_cast<vtkInformationKeyVectorKey *>(vp);

  vtkInformation *temp0 = NULL;
  vtkInformationKey *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationKey"))
    {
    if (ap.IsBound())
      {
      op->AppendUnique(temp0, temp1);
      }
    else
      {
      op->vtkInformationKeyVectorKey::AppendUnique(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformationKeyVectorKey_RemoveItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKeyVectorKey *op = static_cast<vtkInformationKeyVectorKey *>(vp);

  vtkInformation *temp0 = NULL;
  vtkInformationKey *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationKey"))
    {
    if (ap.IsBound())
      {
      op->RemoveItem(temp0, temp1);
      }
    else
      {
      op->vtkInformationKeyVectorKey::RemoveItem(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformationKeyVectorKey_Get(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKeyVectorKey *op = static_cast<vtkInformationKeyVectorKey *>(vp);

  vtkInformation *temp0 = NULL;
  int temp1;
  vtkInformationKey *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->Get(temp0, temp1);
      }
    else
      {
      tempr = op->vtkInformationKeyVectorKey::Get(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationKeyVectorKey_Length(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Length");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKeyVectorKey *op = static_cast<vtkInformationKeyVectorKey *>(vp);

  vtkInformation *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      tempr = op->Length(temp0);
      }
    else
      {
      tempr = op->vtkInformationKeyVectorKey::Length(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationKeyVectorKey_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKeyVectorKey *op = static_cast<vtkInformationKeyVectorKey *>(vp);

  vtkInformation *temp0 = NULL;
  vtkInformation *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0, temp1);
      }
    else
      {
      op->vtkInformationKeyVectorKey::ShallowCopy(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkInformationKeyVectorKey_Methods[] = {
  {(char*)"GetClassName", PyvtkInformationKeyVectorKey_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInformationKeyVectorKey_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInformationKeyVectorKey_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkInformationKeyVectorKey\nC++: vtkInformationKeyVectorKey *NewInstance()\n\n"},
  {(char*)"Append", PyvtkInformationKeyVectorKey_Append, 1,
   (char*)"V.Append(vtkInformation, vtkInformationKey)\nC++: void Append(vtkInformation *info, vtkInformationKey *value)\n\nGet/Set the value associated with this key in the given\ninformation object.\n"},
  {(char*)"AppendUnique", PyvtkInformationKeyVectorKey_AppendUnique, 1,
   (char*)"V.AppendUnique(vtkInformation, vtkInformationKey)\nC++: void AppendUnique(vtkInformation *info,\n    vtkInformationKey *value)\n\nGet/Set the value associated with this key in the given\ninformation object.\n"},
  {(char*)"RemoveItem", PyvtkInformationKeyVectorKey_RemoveItem, 1,
   (char*)"V.RemoveItem(vtkInformation, vtkInformationKey)\nC++: void RemoveItem(vtkInformation *info,\n    vtkInformationKey *value)\n\nGet/Set the value associated with this key in the given\ninformation object.\n"},
  {(char*)"Get", PyvtkInformationKeyVectorKey_Get, 1,
   (char*)"V.Get(vtkInformation, int) -> vtkInformationKey\nC++: vtkInformationKey *Get(vtkInformation *info, int idx)\n\nGet/Set the value associated with this key in the given\ninformation object.\n"},
  {(char*)"Length", PyvtkInformationKeyVectorKey_Length, 1,
   (char*)"V.Length(vtkInformation) -> int\nC++: int Length(vtkInformation *info)\n\nGet/Set the value associated with this key in the given\ninformation object.\n"},
  {(char*)"ShallowCopy", PyvtkInformationKeyVectorKey_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkInformation, vtkInformation)\nC++: virtual void ShallowCopy(vtkInformation *from,\n    vtkInformation *to)\n\nCopy the entry associated with this key from one information\nobject to another.  If there is no entry in the first information\nobject for this key, the value is removed from the second.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkInformationKeyVectorKeyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkInformationKeyVectorKey_Methods,
    "vtkInformationKeyVectorKey", modulename,
    NULL, NULL,
    PyvtkInformationKeyVectorKey_Doc(),
    PyVTKClass_vtkInformationKeyNew(modulename));
  return cls;
}

const char **PyvtkInformationKeyVectorKey_Doc()
{
  static const char *docstring[] = {
    "vtkInformationKeyVectorKey - Key for vector-of-keys values.\n\n",
    "Superclass: vtkInformationKey\n\n",
    "vtkInformationKeyVectorKey is used to represent keys for\nvector-of-keys values in vtkInformation.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInformationKeyVectorKey(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInformationKeyVectorKeyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInformationKeyVectorKey", o) != 0)
    {
    Py_DECREF(o);
    }

}

