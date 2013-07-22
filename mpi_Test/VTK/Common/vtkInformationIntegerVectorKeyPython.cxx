// python wrapper for vtkInformationIntegerVectorKey
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
#include "vtkInformationIntegerVectorKey.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkInformationIntegerVectorKey(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkInformationIntegerVectorKey(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkInformationIntegerVectorKeyNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkInformationIntegerVectorKeyNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkInformationKeyNew
extern "C" { PyObject *PyVTKClass_vtkInformationKeyNew(const char *); }
#define DECLARED_PyVTKClass_vtkInformationKeyNew
#endif

static const char **PyvtkInformationIntegerVectorKey_Doc();


static PyObject *
PyvtkInformationIntegerVectorKey_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIntegerVectorKey *op = static_cast<vtkInformationIntegerVectorKey *>(vp);

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
      tempr = op->vtkInformationIntegerVectorKey::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationIntegerVectorKey_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIntegerVectorKey *op = static_cast<vtkInformationIntegerVectorKey *>(vp);

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
      tempr = op->vtkInformationIntegerVectorKey::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationIntegerVectorKey_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIntegerVectorKey *op = static_cast<vtkInformationIntegerVectorKey *>(vp);

  vtkInformationIntegerVectorKey *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkInformationIntegerVectorKey::NewInstance();
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
PyvtkInformationIntegerVectorKey_Append(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIntegerVectorKey *op = static_cast<vtkInformationIntegerVectorKey *>(vp);

  vtkInformation *temp0 = NULL;
  int temp1;
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
      op->vtkInformationIntegerVectorKey::Append(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformationIntegerVectorKey_Set(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIntegerVectorKey *op = static_cast<vtkInformationIntegerVectorKey *>(vp);

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      op->Set(temp0);
      }
    else
      {
      op->vtkInformationIntegerVectorKey::Set(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformationIntegerVectorKey_Get(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIntegerVectorKey *op = static_cast<vtkInformationIntegerVectorKey *>(vp);

  vtkInformation *temp0 = NULL;
  int temp1;
  int tempr;
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
      tempr = op->vtkInformationIntegerVectorKey::Get(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationIntegerVectorKey_Length(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Length");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIntegerVectorKey *op = static_cast<vtkInformationIntegerVectorKey *>(vp);

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
      tempr = op->vtkInformationIntegerVectorKey::Length(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationIntegerVectorKey_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIntegerVectorKey *op = static_cast<vtkInformationIntegerVectorKey *>(vp);

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
      op->vtkInformationIntegerVectorKey::ShallowCopy(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkInformationIntegerVectorKey_Methods[] = {
  {(char*)"GetClassName", PyvtkInformationIntegerVectorKey_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInformationIntegerVectorKey_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInformationIntegerVectorKey_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkInformationIntegerVectorKey\nC++: vtkInformationIntegerVectorKey *NewInstance()\n\n"},
  {(char*)"Append", PyvtkInformationIntegerVectorKey_Append, 1,
   (char*)"V.Append(vtkInformation, int)\nC++: void Append(vtkInformation *info, int value)\n\nGet/Set the value associated with this key in the given\ninformation object.\n"},
  {(char*)"Set", PyvtkInformationIntegerVectorKey_Set, 1,
   (char*)"V.Set(vtkInformation)\nC++: void Set(vtkInformation *info)\n\nGet/Set the value associated with this key in the given\ninformation object.\n"},
  {(char*)"Get", PyvtkInformationIntegerVectorKey_Get, 1,
   (char*)"V.Get(vtkInformation, int) -> int\nC++: int Get(vtkInformation *info, int idx)\n\nGet/Set the value associated with this key in the given\ninformation object.\n"},
  {(char*)"Length", PyvtkInformationIntegerVectorKey_Length, 1,
   (char*)"V.Length(vtkInformation) -> int\nC++: int Length(vtkInformation *info)\n\nGet/Set the value associated with this key in the given\ninformation object.\n"},
  {(char*)"ShallowCopy", PyvtkInformationIntegerVectorKey_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkInformation, vtkInformation)\nC++: virtual void ShallowCopy(vtkInformation *from,\n    vtkInformation *to)\n\nCopy the entry associated with this key from one information\nobject to another.  If there is no entry in the first information\nobject for this key, the value is removed from the second.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkInformationIntegerVectorKeyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkInformationIntegerVectorKey_Methods,
    "vtkInformationIntegerVectorKey", modulename,
    NULL, NULL,
    PyvtkInformationIntegerVectorKey_Doc(),
    PyVTKClass_vtkInformationKeyNew(modulename));
  return cls;
}

const char **PyvtkInformationIntegerVectorKey_Doc()
{
  static const char *docstring[] = {
    "vtkInformationIntegerVectorKey - Key for integer vector values.\n\n",
    "Superclass: vtkInformationKey\n\n",
    "vtkInformationIntegerVectorKey is used to represent keys for integer\nvector values in vtkInformation.h\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInformationIntegerVectorKey(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInformationIntegerVectorKeyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInformationIntegerVectorKey", o) != 0)
    {
    Py_DECREF(o);
    }

}

