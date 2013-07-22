// python wrapper for vtkInformationInformationVectorKey
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
#include "vtkInformationInformationVectorKey.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkInformationInformationVectorKey(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkInformationInformationVectorKey(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkInformationInformationVectorKeyNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkInformationInformationVectorKeyNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkInformationKeyNew
extern "C" { PyObject *PyVTKClass_vtkInformationKeyNew(const char *); }
#define DECLARED_PyVTKClass_vtkInformationKeyNew
#endif

static const char **PyvtkInformationInformationVectorKey_Doc();


static PyObject *
PyvtkInformationInformationVectorKey_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationInformationVectorKey *op = static_cast<vtkInformationInformationVectorKey *>(vp);

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
      tempr = op->vtkInformationInformationVectorKey::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationInformationVectorKey_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationInformationVectorKey *op = static_cast<vtkInformationInformationVectorKey *>(vp);

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
      tempr = op->vtkInformationInformationVectorKey::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationInformationVectorKey_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationInformationVectorKey *op = static_cast<vtkInformationInformationVectorKey *>(vp);

  vtkInformationInformationVectorKey *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkInformationInformationVectorKey::NewInstance();
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
PyvtkInformationInformationVectorKey_Set(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationInformationVectorKey *op = static_cast<vtkInformationInformationVectorKey *>(vp);

  vtkInformation *temp0 = NULL;
  vtkInformationVector *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationVector"))
    {
    if (ap.IsBound())
      {
      op->Set(temp0, temp1);
      }
    else
      {
      op->vtkInformationInformationVectorKey::Set(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformationInformationVectorKey_Get(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationInformationVectorKey *op = static_cast<vtkInformationInformationVectorKey *>(vp);

  vtkInformation *temp0 = NULL;
  vtkInformationVector *tempr;
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
      tempr = op->vtkInformationInformationVectorKey::Get(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationInformationVectorKey_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationInformationVectorKey *op = static_cast<vtkInformationInformationVectorKey *>(vp);

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
      op->vtkInformationInformationVectorKey::ShallowCopy(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformationInformationVectorKey_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationInformationVectorKey *op = static_cast<vtkInformationInformationVectorKey *>(vp);

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
      op->vtkInformationInformationVectorKey::DeepCopy(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformationInformationVectorKey_Report(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Report");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationInformationVectorKey *op = static_cast<vtkInformationInformationVectorKey *>(vp);

  vtkInformation *temp0 = NULL;
  vtkGarbageCollector *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkGarbageCollector"))
    {
    if (ap.IsBound())
      {
      op->Report(temp0, temp1);
      }
    else
      {
      op->vtkInformationInformationVectorKey::Report(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkInformationInformationVectorKey_Methods[] = {
  {(char*)"GetClassName", PyvtkInformationInformationVectorKey_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInformationInformationVectorKey_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInformationInformationVectorKey_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkInformationInformationVectorKey\nC++: vtkInformationInformationVectorKey *NewInstance()\n\n"},
  {(char*)"Set", PyvtkInformationInformationVectorKey_Set, 1,
   (char*)"V.Set(vtkInformation, vtkInformationVector)\nC++: void Set(vtkInformation *info, vtkInformationVector *)\n\nGet/Set the value associated with this key in the given\ninformation object.\n"},
  {(char*)"Get", PyvtkInformationInformationVectorKey_Get, 1,
   (char*)"V.Get(vtkInformation) -> vtkInformationVector\nC++: vtkInformationVector *Get(vtkInformation *info)\n\nGet/Set the value associated with this key in the given\ninformation object.\n"},
  {(char*)"ShallowCopy", PyvtkInformationInformationVectorKey_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkInformation, vtkInformation)\nC++: virtual void ShallowCopy(vtkInformation *from,\n    vtkInformation *to)\n\nCopy the entry associated with this key from one information\nobject to another.  If there is no entry in the first information\nobject for this key, the value is removed from the second.\n"},
  {(char*)"DeepCopy", PyvtkInformationInformationVectorKey_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkInformation, vtkInformation)\nC++: virtual void DeepCopy(vtkInformation *from,\n    vtkInformation *to)\n\nDuplicate (new instance created) the entry associated with this\nkey from one information object to another (new instances of any\ncontained vtkInformation and vtkInformationVector objects are\ncreated).\n"},
  {(char*)"Report", PyvtkInformationInformationVectorKey_Report, 1,
   (char*)"V.Report(vtkInformation, vtkGarbageCollector)\nC++: virtual void Report(vtkInformation *info,\n    vtkGarbageCollector *collector)\n\nReport a reference this key has in the given information object.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkInformationInformationVectorKeyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkInformationInformationVectorKey_Methods,
    "vtkInformationInformationVectorKey", modulename,
    NULL, NULL,
    PyvtkInformationInformationVectorKey_Doc(),
    PyVTKClass_vtkInformationKeyNew(modulename));
  return cls;
}

const char **PyvtkInformationInformationVectorKey_Doc()
{
  static const char *docstring[] = {
    "vtkInformationInformationVectorKey - Key for vtkInformation vectors.\n\n",
    "Superclass: vtkInformationKey\n\n",
    "vtkInformationInformationVectorKey is used to represent keys in\nvtkInformation for vectors of other vtkInformation objects.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInformationInformationVectorKey(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInformationInformationVectorKeyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInformationInformationVectorKey", o) != 0)
    {
    Py_DECREF(o);
    }

}

