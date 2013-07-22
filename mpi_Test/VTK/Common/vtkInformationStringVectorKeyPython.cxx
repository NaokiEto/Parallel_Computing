// python wrapper for vtkInformationStringVectorKey
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
#include "vtkInformationStringVectorKey.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkInformationStringVectorKey(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkInformationStringVectorKey(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkInformationStringVectorKeyNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkInformationStringVectorKeyNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkInformationKeyNew
extern "C" { PyObject *PyVTKClass_vtkInformationKeyNew(const char *); }
#define DECLARED_PyVTKClass_vtkInformationKeyNew
#endif

static const char **PyvtkInformationStringVectorKey_Doc();


static PyObject *
PyvtkInformationStringVectorKey_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationStringVectorKey *op = static_cast<vtkInformationStringVectorKey *>(vp);

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
      tempr = op->vtkInformationStringVectorKey::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationStringVectorKey_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationStringVectorKey *op = static_cast<vtkInformationStringVectorKey *>(vp);

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
      tempr = op->vtkInformationStringVectorKey::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationStringVectorKey_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationStringVectorKey *op = static_cast<vtkInformationStringVectorKey *>(vp);

  vtkInformationStringVectorKey *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkInformationStringVectorKey::NewInstance();
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
PyvtkInformationStringVectorKey_Append(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationStringVectorKey *op = static_cast<vtkInformationStringVectorKey *>(vp);

  vtkInformation *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->Append(temp0, temp1);
      }
    else
      {
      op->vtkInformationStringVectorKey::Append(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformationStringVectorKey_Set(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationStringVectorKey *op = static_cast<vtkInformationStringVectorKey *>(vp);

  vtkInformation *temp0 = NULL;
  char *temp1 = NULL;
  int temp2 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    if (ap.IsBound())
      {
      op->Set(temp0, temp1, temp2);
      }
    else
      {
      op->vtkInformationStringVectorKey::Set(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformationStringVectorKey_Get(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationStringVectorKey *op = static_cast<vtkInformationStringVectorKey *>(vp);

  vtkInformation *temp0 = NULL;
  int temp1 = 0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    if (ap.IsBound())
      {
      tempr = op->Get(temp0, temp1);
      }
    else
      {
      tempr = op->vtkInformationStringVectorKey::Get(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationStringVectorKey_Length(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Length");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationStringVectorKey *op = static_cast<vtkInformationStringVectorKey *>(vp);

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
      tempr = op->vtkInformationStringVectorKey::Length(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationStringVectorKey_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationStringVectorKey *op = static_cast<vtkInformationStringVectorKey *>(vp);

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
      op->vtkInformationStringVectorKey::ShallowCopy(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkInformationStringVectorKey_Methods[] = {
  {(char*)"GetClassName", PyvtkInformationStringVectorKey_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInformationStringVectorKey_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInformationStringVectorKey_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkInformationStringVectorKey\nC++: vtkInformationStringVectorKey *NewInstance()\n\n"},
  {(char*)"Append", PyvtkInformationStringVectorKey_Append, 1,
   (char*)"V.Append(vtkInformation, string)\nC++: void Append(vtkInformation *info, const char *value)\n\nGet/Set the value associated with this key in the given\ninformation object.\n"},
  {(char*)"Set", PyvtkInformationStringVectorKey_Set, 1,
   (char*)"V.Set(vtkInformation, string, int)\nC++: void Set(vtkInformation *info, const char *value, int idx=0)\n\nGet/Set the value associated with this key in the given\ninformation object.\n"},
  {(char*)"Get", PyvtkInformationStringVectorKey_Get, 1,
   (char*)"V.Get(vtkInformation, int) -> string\nC++: const char *Get(vtkInformation *info, int idx=0)\n\nGet/Set the value associated with this key in the given\ninformation object.\n"},
  {(char*)"Length", PyvtkInformationStringVectorKey_Length, 1,
   (char*)"V.Length(vtkInformation) -> int\nC++: int Length(vtkInformation *info)\n\nGet/Set the value associated with this key in the given\ninformation object.\n"},
  {(char*)"ShallowCopy", PyvtkInformationStringVectorKey_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkInformation, vtkInformation)\nC++: virtual void ShallowCopy(vtkInformation *from,\n    vtkInformation *to)\n\nCopy the entry associated with this key from one information\nobject to another.  If there is no entry in the first information\nobject for this key, the value is removed from the second.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkInformationStringVectorKeyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkInformationStringVectorKey_Methods,
    "vtkInformationStringVectorKey", modulename,
    NULL, NULL,
    PyvtkInformationStringVectorKey_Doc(),
    PyVTKClass_vtkInformationKeyNew(modulename));
  return cls;
}

const char **PyvtkInformationStringVectorKey_Doc()
{
  static const char *docstring[] = {
    "vtkInformationStringVectorKey - Key for String vector values.\n\n",
    "Superclass: vtkInformationKey\n\n",
    "vtkInformationStringVectorKey is used to represent keys for String\nvector values in vtkInformation.h\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInformationStringVectorKey(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInformationStringVectorKeyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInformationStringVectorKey", o) != 0)
    {
    Py_DECREF(o);
    }

}

