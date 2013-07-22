// python wrapper for vtkInformationExecutivePortVectorKey
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
#include "vtkInformationExecutivePortVectorKey.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkInformationExecutivePortVectorKey(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkInformationExecutivePortVectorKey(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkInformationExecutivePortVectorKeyNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkInformationExecutivePortVectorKeyNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkInformationKeyNew
extern "C" { PyObject *PyVTKClass_vtkInformationKeyNew(const char *); }
#define DECLARED_PyVTKClass_vtkInformationKeyNew
#endif

static const char **PyvtkInformationExecutivePortVectorKey_Doc();


static PyObject *
PyvtkInformationExecutivePortVectorKey_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationExecutivePortVectorKey *op = static_cast<vtkInformationExecutivePortVectorKey *>(vp);

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
      tempr = op->vtkInformationExecutivePortVectorKey::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationExecutivePortVectorKey_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationExecutivePortVectorKey *op = static_cast<vtkInformationExecutivePortVectorKey *>(vp);

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
      tempr = op->vtkInformationExecutivePortVectorKey::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationExecutivePortVectorKey_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationExecutivePortVectorKey *op = static_cast<vtkInformationExecutivePortVectorKey *>(vp);

  vtkInformationExecutivePortVectorKey *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkInformationExecutivePortVectorKey::NewInstance();
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
PyvtkInformationExecutivePortVectorKey_Append(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationExecutivePortVectorKey *op = static_cast<vtkInformationExecutivePortVectorKey *>(vp);

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
      op->Append(temp0, temp1, temp2);
      }
    else
      {
      op->vtkInformationExecutivePortVectorKey::Append(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformationExecutivePortVectorKey_Remove_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationExecutivePortVectorKey *op = static_cast<vtkInformationExecutivePortVectorKey *>(vp);

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
      op->Remove(temp0, temp1, temp2);
      }
    else
      {
      op->vtkInformationExecutivePortVectorKey::Remove(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformationExecutivePortVectorKey_Remove_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationExecutivePortVectorKey *op = static_cast<vtkInformationExecutivePortVectorKey *>(vp);

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
      op->vtkInformationExecutivePortVectorKey::Remove(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInformationExecutivePortVectorKey_Remove(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkInformationExecutivePortVectorKey_Remove_s1(self, args);
    case 1:
      return PyvtkInformationExecutivePortVectorKey_Remove_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Remove");
  return NULL;
}



static PyObject *
PyvtkInformationExecutivePortVectorKey_Length(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Length");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationExecutivePortVectorKey *op = static_cast<vtkInformationExecutivePortVectorKey *>(vp);

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
      tempr = op->vtkInformationExecutivePortVectorKey::Length(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationExecutivePortVectorKey_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationExecutivePortVectorKey *op = static_cast<vtkInformationExecutivePortVectorKey *>(vp);

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
      op->vtkInformationExecutivePortVectorKey::ShallowCopy(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformationExecutivePortVectorKey_Report(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Report");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationExecutivePortVectorKey *op = static_cast<vtkInformationExecutivePortVectorKey *>(vp);

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
      op->vtkInformationExecutivePortVectorKey::Report(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkInformationExecutivePortVectorKey_Methods[] = {
  {(char*)"GetClassName", PyvtkInformationExecutivePortVectorKey_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInformationExecutivePortVectorKey_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInformationExecutivePortVectorKey_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkInformationExecutivePortVectorKey\nC++: vtkInformationExecutivePortVectorKey *NewInstance()\n\n"},
  {(char*)"Append", PyvtkInformationExecutivePortVectorKey_Append, 1,
   (char*)"V.Append(vtkInformation, vtkExecutive, int)\nC++: void Append(vtkInformation *info, vtkExecutive *executive,\n    int port)\n\nGet/Set the value associated with this key in the given\ninformation object.\n"},
  {(char*)"Remove", PyvtkInformationExecutivePortVectorKey_Remove, 1,
   (char*)"V.Remove(vtkInformation, vtkExecutive, int)\nC++: void Remove(vtkInformation *info, vtkExecutive *executive,\n    int port)\nV.Remove(vtkInformation)\nC++: virtual void Remove(vtkInformation *info)\n\nGet/Set the value associated with this key in the given\ninformation object.\n"},
  {(char*)"Length", PyvtkInformationExecutivePortVectorKey_Length, 1,
   (char*)"V.Length(vtkInformation) -> int\nC++: int Length(vtkInformation *info)\n\nGet/Set the value associated with this key in the given\ninformation object.\n"},
  {(char*)"ShallowCopy", PyvtkInformationExecutivePortVectorKey_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkInformation, vtkInformation)\nC++: virtual void ShallowCopy(vtkInformation *from,\n    vtkInformation *to)\n\nCopy the entry associated with this key from one information\nobject to another.  If there is no entry in the first information\nobject for this key, the value is removed from the second.\n"},
  {(char*)"Report", PyvtkInformationExecutivePortVectorKey_Report, 1,
   (char*)"V.Report(vtkInformation, vtkGarbageCollector)\nC++: virtual void Report(vtkInformation *info,\n    vtkGarbageCollector *collector)\n\nReport a reference this key has in the given information object.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkInformationExecutivePortVectorKeyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkInformationExecutivePortVectorKey_Methods,
    "vtkInformationExecutivePortVectorKey", modulename,
    NULL, NULL,
    PyvtkInformationExecutivePortVectorKey_Doc(),
    PyVTKClass_vtkInformationKeyNew(modulename));
  return cls;
}

const char **PyvtkInformationExecutivePortVectorKey_Doc()
{
  static const char *docstring[] = {
    "vtkInformationExecutivePortVectorKey - Key for vtkExecutive/Port\nvalue pair vectors.\n\n",
    "Superclass: vtkInformationKey\n\n",
    "vtkInformationExecutivePortVectorKey is used to represent keys in\nvtkInformation for values that are vectors of vtkExecutive instances\npaired with port numbers.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInformationExecutivePortVectorKey(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInformationExecutivePortVectorKeyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInformationExecutivePortVectorKey", o) != 0)
    {
    Py_DECREF(o);
    }

}

