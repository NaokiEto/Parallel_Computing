// python wrapper for vtkOverrideInformation
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
#include "vtkOverrideInformation.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkOverrideInformation(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkOverrideInformation(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkOverrideInformationNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkOverrideInformationNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkOverrideInformation_Doc();


static PyObject *
PyvtkOverrideInformation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverrideInformation *op = static_cast<vtkOverrideInformation *>(vp);

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
      tempr = op->vtkOverrideInformation::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOverrideInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverrideInformation *op = static_cast<vtkOverrideInformation *>(vp);

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
      tempr = op->vtkOverrideInformation::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOverrideInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverrideInformation *op = static_cast<vtkOverrideInformation *>(vp);

  vtkOverrideInformation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkOverrideInformation::NewInstance();
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
PyvtkOverrideInformation_GetClassOverrideName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassOverrideName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverrideInformation *op = static_cast<vtkOverrideInformation *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetClassOverrideName();
      }
    else
      {
      tempr = op->vtkOverrideInformation::GetClassOverrideName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOverrideInformation_GetClassOverrideWithName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassOverrideWithName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverrideInformation *op = static_cast<vtkOverrideInformation *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetClassOverrideWithName();
      }
    else
      {
      tempr = op->vtkOverrideInformation::GetClassOverrideWithName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOverrideInformation_GetDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverrideInformation *op = static_cast<vtkOverrideInformation *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDescription();
      }
    else
      {
      tempr = op->vtkOverrideInformation::GetDescription();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOverrideInformation_GetObjectFactory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectFactory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverrideInformation *op = static_cast<vtkOverrideInformation *>(vp);

  vtkObjectFactory *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetObjectFactory();
      }
    else
      {
      tempr = op->vtkOverrideInformation::GetObjectFactory();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOverrideInformation_SetClassOverrideName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClassOverrideName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverrideInformation *op = static_cast<vtkOverrideInformation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetClassOverrideName(temp0);
      }
    else
      {
      op->vtkOverrideInformation::SetClassOverrideName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOverrideInformation_SetClassOverrideWithName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClassOverrideWithName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverrideInformation *op = static_cast<vtkOverrideInformation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetClassOverrideWithName(temp0);
      }
    else
      {
      op->vtkOverrideInformation::SetClassOverrideWithName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOverrideInformation_SetDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverrideInformation *op = static_cast<vtkOverrideInformation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDescription(temp0);
      }
    else
      {
      op->vtkOverrideInformation::SetDescription(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkOverrideInformation_Methods[] = {
  {(char*)"GetClassName", PyvtkOverrideInformation_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOverrideInformation_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOverrideInformation_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkOverrideInformation\nC++: vtkOverrideInformation *NewInstance()\n\n"},
  {(char*)"GetClassOverrideName", PyvtkOverrideInformation_GetClassOverrideName, 1,
   (char*)"V.GetClassOverrideName() -> string\nC++: const char *GetClassOverrideName()\n\nReturns the name of the class being overriden.  For example, if\nyou had a factory that provided an override for vtkVertex, then\nthis funciton would return \"vtkVertex\"\n"},
  {(char*)"GetClassOverrideWithName", PyvtkOverrideInformation_GetClassOverrideWithName, 1,
   (char*)"V.GetClassOverrideWithName() -> string\nC++: const char *GetClassOverrideWithName()\n\nReturns the name of the class that will override the class. For\nexample, if you had a factory that provided an override for\nvtkVertex called vtkMyVertex, then this would return\n\"vtkMyVertex\"\n"},
  {(char*)"GetDescription", PyvtkOverrideInformation_GetDescription, 1,
   (char*)"V.GetDescription() -> string\nC++: const char *GetDescription()\n\nReturn a human readable or GUI displayable description of this\noverride.\n"},
  {(char*)"GetObjectFactory", PyvtkOverrideInformation_GetObjectFactory, 1,
   (char*)"V.GetObjectFactory() -> vtkObjectFactory\nC++: vtkObjectFactory *GetObjectFactory()\n\nReturn the specific object factory that this override occurs in.\n"},
  {(char*)"SetClassOverrideName", PyvtkOverrideInformation_SetClassOverrideName, 1,
   (char*)"V.SetClassOverrideName(string)\nC++: void SetClassOverrideName(char *)\n\nSet the class override name\n"},
  {(char*)"SetClassOverrideWithName", PyvtkOverrideInformation_SetClassOverrideWithName, 1,
   (char*)"V.SetClassOverrideWithName(string)\nC++: void SetClassOverrideWithName(char *)\n\n"},
  {(char*)"SetDescription", PyvtkOverrideInformation_SetDescription, 1,
   (char*)"V.SetDescription(string)\nC++: void SetDescription(char *)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOverrideInformation_StaticNew()
{
  return vtkOverrideInformation::New();
}

PyObject *PyVTKClass_vtkOverrideInformationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOverrideInformation_StaticNew,
    PyvtkOverrideInformation_Methods,
    "vtkOverrideInformation", modulename,
    NULL, NULL,
    PyvtkOverrideInformation_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkOverrideInformation_Doc()
{
  static const char *docstring[] = {
    "vtkOverrideInformation - Factory object override information\n\n",
    "Superclass: vtkObject\n\n",
    "vtkOverrideInformation is used to represent the information about a\nclass which is overriden in a vtkObjectFactory.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOverrideInformation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOverrideInformationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOverrideInformation", o) != 0)
    {
    Py_DECREF(o);
    }

}

