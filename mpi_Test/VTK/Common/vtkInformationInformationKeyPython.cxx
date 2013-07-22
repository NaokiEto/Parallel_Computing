// python wrapper for vtkInformationInformationKey
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
#include "vtkInformationInformationKey.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkInformationInformationKey(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkInformationInformationKey(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkInformationInformationKeyNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkInformationInformationKeyNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkInformationKeyNew
extern "C" { PyObject *PyVTKClass_vtkInformationKeyNew(const char *); }
#define DECLARED_PyVTKClass_vtkInformationKeyNew
#endif

static const char **PyvtkInformationInformationKey_Doc();


static PyObject *
PyvtkInformationInformationKey_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationInformationKey *op = static_cast<vtkInformationInformationKey *>(vp);

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
      tempr = op->vtkInformationInformationKey::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationInformationKey_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationInformationKey *op = static_cast<vtkInformationInformationKey *>(vp);

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
      tempr = op->vtkInformationInformationKey::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationInformationKey_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationInformationKey *op = static_cast<vtkInformationInformationKey *>(vp);

  vtkInformationInformationKey *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkInformationInformationKey::NewInstance();
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
PyvtkInformationInformationKey_Set(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationInformationKey *op = static_cast<vtkInformationInformationKey *>(vp);

  vtkInformation *temp0 = NULL;
  vtkInformation *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      op->Set(temp0, temp1);
      }
    else
      {
      op->vtkInformationInformationKey::Set(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformationInformationKey_Get(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationInformationKey *op = static_cast<vtkInformationInformationKey *>(vp);

  vtkInformation *temp0 = NULL;
  vtkInformation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      tempr = op->Get(temp0);
      }
    else
      {
      tempr = op->vtkInformationInformationKey::Get(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationInformationKey_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationInformationKey *op = static_cast<vtkInformationInformationKey *>(vp);

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
      op->vtkInformationInformationKey::ShallowCopy(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformationInformationKey_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationInformationKey *op = static_cast<vtkInformationInformationKey *>(vp);

  vtkInformation *temp0 = NULL;
  vtkInformation *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0, temp1);
      }
    else
      {
      op->vtkInformationInformationKey::DeepCopy(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkInformationInformationKey_Methods[] = {
  {(char*)"GetClassName", PyvtkInformationInformationKey_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInformationInformationKey_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInformationInformationKey_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkInformationInformationKey\nC++: vtkInformationInformationKey *NewInstance()\n\n"},
  {(char*)"Set", PyvtkInformationInformationKey_Set, 1,
   (char*)"V.Set(vtkInformation, vtkInformation)\nC++: void Set(vtkInformation *info, vtkInformation *)\n\nGet/Set the value associated with this key in the given\ninformation object.\n"},
  {(char*)"Get", PyvtkInformationInformationKey_Get, 1,
   (char*)"V.Get(vtkInformation) -> vtkInformation\nC++: vtkInformation *Get(vtkInformation *info)\n\nGet/Set the value associated with this key in the given\ninformation object.\n"},
  {(char*)"ShallowCopy", PyvtkInformationInformationKey_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkInformation, vtkInformation)\nC++: virtual void ShallowCopy(vtkInformation *from,\n    vtkInformation *to)\n\nCopy the entry associated with this key from one information\nobject to another.  If there is no entry in the first information\nobject for this key, the value is removed from the second.\n"},
  {(char*)"DeepCopy", PyvtkInformationInformationKey_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkInformation, vtkInformation)\nC++: virtual void DeepCopy(vtkInformation *from,\n    vtkInformation *to)\n\nDuplicate (new instance created) the entry associated with this\nkey from one information object to another (new instances of any\ncontained vtkInformation and vtkInformationVector objects are\ncreated).\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkInformationInformationKeyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkInformationInformationKey_Methods,
    "vtkInformationInformationKey", modulename,
    NULL, NULL,
    PyvtkInformationInformationKey_Doc(),
    PyVTKClass_vtkInformationKeyNew(modulename));
  return cls;
}

const char **PyvtkInformationInformationKey_Doc()
{
  static const char *docstring[] = {
    "vtkInformationInformationKey - Key for vtkInformation values.\n\n",
    "Superclass: vtkInformationKey\n\n",
    "vtkInformationInformationKey is used to represent keys in\nvtkInformation for other information objects.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInformationInformationKey(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInformationInformationKeyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInformationInformationKey", o) != 0)
    {
    Py_DECREF(o);
    }

}

