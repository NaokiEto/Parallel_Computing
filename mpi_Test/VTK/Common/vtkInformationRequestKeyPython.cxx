// python wrapper for vtkInformationRequestKey
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
#include "vtkInformationRequestKey.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkInformationRequestKey(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkInformationRequestKey(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkInformationRequestKeyNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkInformationRequestKeyNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkInformationKeyNew
extern "C" { PyObject *PyVTKClass_vtkInformationKeyNew(const char *); }
#define DECLARED_PyVTKClass_vtkInformationKeyNew
#endif

static const char **PyvtkInformationRequestKey_Doc();


static PyObject *
PyvtkInformationRequestKey_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationRequestKey *op = static_cast<vtkInformationRequestKey *>(vp);

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
      tempr = op->vtkInformationRequestKey::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationRequestKey_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationRequestKey *op = static_cast<vtkInformationRequestKey *>(vp);

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
      tempr = op->vtkInformationRequestKey::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationRequestKey_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationRequestKey *op = static_cast<vtkInformationRequestKey *>(vp);

  vtkInformationRequestKey *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkInformationRequestKey::NewInstance();
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
PyvtkInformationRequestKey_Set(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationRequestKey *op = static_cast<vtkInformationRequestKey *>(vp);

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
      op->vtkInformationRequestKey::Set(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformationRequestKey_Remove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationRequestKey *op = static_cast<vtkInformationRequestKey *>(vp);

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      op->Remove(temp0);
      }
    else
      {
      op->vtkInformationRequestKey::Remove(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformationRequestKey_Has(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationRequestKey *op = static_cast<vtkInformationRequestKey *>(vp);

  vtkInformation *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      tempr = op->Has(temp0);
      }
    else
      {
      tempr = op->vtkInformationRequestKey::Has(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationRequestKey_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationRequestKey *op = static_cast<vtkInformationRequestKey *>(vp);

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
      op->vtkInformationRequestKey::ShallowCopy(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkInformationRequestKey_Methods[] = {
  {(char*)"GetClassName", PyvtkInformationRequestKey_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInformationRequestKey_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInformationRequestKey_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkInformationRequestKey\nC++: vtkInformationRequestKey *NewInstance()\n\n"},
  {(char*)"Set", PyvtkInformationRequestKey_Set, 1,
   (char*)"V.Set(vtkInformation)\nC++: void Set(vtkInformation *info)\n\nGet/Set the value associated with this key in the given\ninformation object.\n"},
  {(char*)"Remove", PyvtkInformationRequestKey_Remove, 1,
   (char*)"V.Remove(vtkInformation)\nC++: void Remove(vtkInformation *info)\n\nGet/Set the value associated with this key in the given\ninformation object.\n"},
  {(char*)"Has", PyvtkInformationRequestKey_Has, 1,
   (char*)"V.Has(vtkInformation) -> int\nC++: int Has(vtkInformation *info)\n\nGet/Set the value associated with this key in the given\ninformation object.\n"},
  {(char*)"ShallowCopy", PyvtkInformationRequestKey_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkInformation, vtkInformation)\nC++: virtual void ShallowCopy(vtkInformation *from,\n    vtkInformation *to)\n\nCopy the entry associated with this key from one information\nobject to another.  If there is no entry in the first information\nobject for this key, the value is removed from the second.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkInformationRequestKeyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkInformationRequestKey_Methods,
    "vtkInformationRequestKey", modulename,
    NULL, NULL,
    PyvtkInformationRequestKey_Doc(),
    PyVTKClass_vtkInformationKeyNew(modulename));
  return cls;
}

const char **PyvtkInformationRequestKey_Doc()
{
  static const char *docstring[] = {
    "vtkInformationRequestKey - Key for pointer to pointer.\n\n",
    "Superclass: vtkInformationKey\n\n",
    "vtkInformationRequestKey is used to represent keys for pointer to\npointer values in vtkInformation.h\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInformationRequestKey(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInformationRequestKeyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInformationRequestKey", o) != 0)
    {
    Py_DECREF(o);
    }

}

