// python wrapper for vtkInformationExecutivePortKey
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
#include "vtkInformationExecutivePortKey.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkInformationExecutivePortKey(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkInformationExecutivePortKey(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkInformationExecutivePortKeyNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkInformationExecutivePortKeyNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkInformationKeyNew
extern "C" { PyObject *PyVTKClass_vtkInformationKeyNew(const char *); }
#define DECLARED_PyVTKClass_vtkInformationKeyNew
#endif

static const char **PyvtkInformationExecutivePortKey_Doc();


static PyObject *
PyvtkInformationExecutivePortKey_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationExecutivePortKey *op = static_cast<vtkInformationExecutivePortKey *>(vp);

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
      tempr = op->vtkInformationExecutivePortKey::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationExecutivePortKey_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationExecutivePortKey *op = static_cast<vtkInformationExecutivePortKey *>(vp);

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
      tempr = op->vtkInformationExecutivePortKey::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationExecutivePortKey_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationExecutivePortKey *op = static_cast<vtkInformationExecutivePortKey *>(vp);

  vtkInformationExecutivePortKey *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkInformationExecutivePortKey::NewInstance();
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
PyvtkInformationExecutivePortKey_Set(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationExecutivePortKey *op = static_cast<vtkInformationExecutivePortKey *>(vp);

  vtkInformation *temp0 = NULL;
  vtkExecutive *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkExecutive") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->Set(temp0, temp1, temp2);
      }
    else
      {
      op->vtkInformationExecutivePortKey::Set(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformationExecutivePortKey_GetExecutive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExecutive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationExecutivePortKey *op = static_cast<vtkInformationExecutivePortKey *>(vp);

  vtkInformation *temp0 = NULL;
  vtkExecutive *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetExecutive(temp0);
      }
    else
      {
      tempr = op->vtkInformationExecutivePortKey::GetExecutive(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationExecutivePortKey_GetPort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationExecutivePortKey *op = static_cast<vtkInformationExecutivePortKey *>(vp);

  vtkInformation *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPort(temp0);
      }
    else
      {
      tempr = op->vtkInformationExecutivePortKey::GetPort(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationExecutivePortKey_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationExecutivePortKey *op = static_cast<vtkInformationExecutivePortKey *>(vp);

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
      op->vtkInformationExecutivePortKey::ShallowCopy(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformationExecutivePortKey_Report(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Report");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationExecutivePortKey *op = static_cast<vtkInformationExecutivePortKey *>(vp);

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
      op->vtkInformationExecutivePortKey::Report(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkInformationExecutivePortKey_Methods[] = {
  {(char*)"GetClassName", PyvtkInformationExecutivePortKey_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInformationExecutivePortKey_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInformationExecutivePortKey_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkInformationExecutivePortKey\nC++: vtkInformationExecutivePortKey *NewInstance()\n\n"},
  {(char*)"Set", PyvtkInformationExecutivePortKey_Set, 1,
   (char*)"V.Set(vtkInformation, vtkExecutive, int)\nC++: void Set(vtkInformation *info, vtkExecutive *, int)\n\nGet/Set the value associated with this key in the given\ninformation object.\n"},
  {(char*)"GetExecutive", PyvtkInformationExecutivePortKey_GetExecutive, 1,
   (char*)"V.GetExecutive(vtkInformation) -> vtkExecutive\nC++: vtkExecutive *GetExecutive(vtkInformation *info)\n\nGet/Set the value associated with this key in the given\ninformation object.\n"},
  {(char*)"GetPort", PyvtkInformationExecutivePortKey_GetPort, 1,
   (char*)"V.GetPort(vtkInformation) -> int\nC++: int GetPort(vtkInformation *info)\n\nGet/Set the value associated with this key in the given\ninformation object.\n"},
  {(char*)"ShallowCopy", PyvtkInformationExecutivePortKey_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkInformation, vtkInformation)\nC++: virtual void ShallowCopy(vtkInformation *from,\n    vtkInformation *to)\n\nCopy the entry associated with this key from one information\nobject to another.  If there is no entry in the first information\nobject for this key, the value is removed from the second.\n"},
  {(char*)"Report", PyvtkInformationExecutivePortKey_Report, 1,
   (char*)"V.Report(vtkInformation, vtkGarbageCollector)\nC++: virtual void Report(vtkInformation *info,\n    vtkGarbageCollector *collector)\n\nReport a reference this key has in the given information object.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkInformationExecutivePortKeyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkInformationExecutivePortKey_Methods,
    "vtkInformationExecutivePortKey", modulename,
    NULL, NULL,
    PyvtkInformationExecutivePortKey_Doc(),
    PyVTKClass_vtkInformationKeyNew(modulename));
  return cls;
}

const char **PyvtkInformationExecutivePortKey_Doc()
{
  static const char *docstring[] = {
    "vtkInformationExecutivePortKey - Key for vtkExecutive/Port value\npairs.\n\n",
    "Superclass: vtkInformationKey\n\n",
    "vtkInformationExecutivePortKey is used to represent keys in\nvtkInformation for values that are vtkExecutive instances paired with\nport numbers.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInformationExecutivePortKey(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInformationExecutivePortKeyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInformationExecutivePortKey", o) != 0)
    {
    Py_DECREF(o);
    }

}

