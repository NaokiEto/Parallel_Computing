// python wrapper for vtkInformationIdTypeKey
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
#include "vtkInformationIdTypeKey.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkInformationIdTypeKey(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkInformationIdTypeKey(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkInformationIdTypeKeyNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkInformationIdTypeKeyNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkInformationKeyNew
extern "C" { PyObject *PyVTKClass_vtkInformationKeyNew(const char *); }
#define DECLARED_PyVTKClass_vtkInformationKeyNew
#endif

static const char **PyvtkInformationIdTypeKey_Doc();


static PyObject *
PyvtkInformationIdTypeKey_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIdTypeKey *op = static_cast<vtkInformationIdTypeKey *>(vp);

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
      tempr = op->vtkInformationIdTypeKey::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationIdTypeKey_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIdTypeKey *op = static_cast<vtkInformationIdTypeKey *>(vp);

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
      tempr = op->vtkInformationIdTypeKey::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationIdTypeKey_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIdTypeKey *op = static_cast<vtkInformationIdTypeKey *>(vp);

  vtkInformationIdTypeKey *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkInformationIdTypeKey::NewInstance();
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
PyvtkInformationIdTypeKey_Set(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIdTypeKey *op = static_cast<vtkInformationIdTypeKey *>(vp);

  vtkInformation *temp0 = NULL;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->Set(temp0, temp1);
      }
    else
      {
      op->vtkInformationIdTypeKey::Set(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformationIdTypeKey_Get(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIdTypeKey *op = static_cast<vtkInformationIdTypeKey *>(vp);

  vtkInformation *temp0 = NULL;
  vtkIdType tempr;
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
      tempr = op->vtkInformationIdTypeKey::Get(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationIdTypeKey_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIdTypeKey *op = static_cast<vtkInformationIdTypeKey *>(vp);

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
      op->vtkInformationIdTypeKey::ShallowCopy(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkInformationIdTypeKey_Methods[] = {
  {(char*)"GetClassName", PyvtkInformationIdTypeKey_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInformationIdTypeKey_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInformationIdTypeKey_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkInformationIdTypeKey\nC++: vtkInformationIdTypeKey *NewInstance()\n\n"},
  {(char*)"Set", PyvtkInformationIdTypeKey_Set, 1,
   (char*)"V.Set(vtkInformation, int)\nC++: void Set(vtkInformation *info, vtkIdType)\n\nGet/Set the value associated with this key in the given\ninformation object.\n"},
  {(char*)"Get", PyvtkInformationIdTypeKey_Get, 1,
   (char*)"V.Get(vtkInformation) -> int\nC++: vtkIdType Get(vtkInformation *info)\n\nGet/Set the value associated with this key in the given\ninformation object.\n"},
  {(char*)"ShallowCopy", PyvtkInformationIdTypeKey_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkInformation, vtkInformation)\nC++: virtual void ShallowCopy(vtkInformation *from,\n    vtkInformation *to)\n\nCopy the entry associated with this key from one information\nobject to another.  If there is no entry in the first information\nobject for this key, the value is removed from the second.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkInformationIdTypeKeyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkInformationIdTypeKey_Methods,
    "vtkInformationIdTypeKey", modulename,
    NULL, NULL,
    PyvtkInformationIdTypeKey_Doc(),
    PyVTKClass_vtkInformationKeyNew(modulename));
  return cls;
}

const char **PyvtkInformationIdTypeKey_Doc()
{
  static const char *docstring[] = {
    "vtkInformationIdTypeKey - Key for vtkIdType values in vtkInformation.\n\n",
    "Superclass: vtkInformationKey\n\n",
    "vtkInformationIdTypeKey is used to represent keys for vtkIdType\nvalues in vtkInformation.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInformationIdTypeKey(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInformationIdTypeKeyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInformationIdTypeKey", o) != 0)
    {
    Py_DECREF(o);
    }

}

