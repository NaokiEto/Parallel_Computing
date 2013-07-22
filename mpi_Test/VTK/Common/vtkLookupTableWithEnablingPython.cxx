// python wrapper for vtkLookupTableWithEnabling
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
#include "vtkLookupTableWithEnabling.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkLookupTableWithEnabling(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkLookupTableWithEnabling(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkLookupTableWithEnablingNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkLookupTableWithEnablingNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkLookupTableNew
extern "C" { PyObject *PyVTKClass_vtkLookupTableNew(const char *); }
#define DECLARED_PyVTKClass_vtkLookupTableNew
#endif

static const char **PyvtkLookupTableWithEnabling_Doc();


static PyObject *
PyvtkLookupTableWithEnabling_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTableWithEnabling *op = static_cast<vtkLookupTableWithEnabling *>(vp);

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
      tempr = op->vtkLookupTableWithEnabling::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTableWithEnabling_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTableWithEnabling *op = static_cast<vtkLookupTableWithEnabling *>(vp);

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
      tempr = op->vtkLookupTableWithEnabling::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTableWithEnabling_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTableWithEnabling *op = static_cast<vtkLookupTableWithEnabling *>(vp);

  vtkLookupTableWithEnabling *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkLookupTableWithEnabling::NewInstance();
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
PyvtkLookupTableWithEnabling_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkLookupTableWithEnabling *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkLookupTableWithEnabling::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTableWithEnabling_GetEnabledArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnabledArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTableWithEnabling *op = static_cast<vtkLookupTableWithEnabling *>(vp);

  vtkDataArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEnabledArray();
      }
    else
      {
      tempr = op->vtkLookupTableWithEnabling::GetEnabledArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTableWithEnabling_SetEnabledArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabledArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTableWithEnabling *op = static_cast<vtkLookupTableWithEnabling *>(vp);

  vtkDataArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
    {
    if (ap.IsBound())
      {
      op->SetEnabledArray(temp0);
      }
    else
      {
      op->vtkLookupTableWithEnabling::SetEnabledArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkLookupTableWithEnabling_Methods[] = {
  {(char*)"GetClassName", PyvtkLookupTableWithEnabling_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkLookupTableWithEnabling_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkLookupTableWithEnabling_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkLookupTableWithEnabling\nC++: vtkLookupTableWithEnabling *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkLookupTableWithEnabling_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLookupTableWithEnabling\nC++: vtkLookupTableWithEnabling *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetEnabledArray", PyvtkLookupTableWithEnabling_GetEnabledArray, 1,
   (char*)"V.GetEnabledArray() -> vtkDataArray\nC++: vtkDataArray *GetEnabledArray()\n\nThis must be set before MapScalars() is called. Indices of this\narray must map directly to those in the scalars array passed to\nMapScalars(). Values of 0 in the array indicate the color should\nbe desaturatated.\n"},
  {(char*)"SetEnabledArray", PyvtkLookupTableWithEnabling_SetEnabledArray, 1,
   (char*)"V.SetEnabledArray(vtkDataArray)\nC++: virtual void SetEnabledArray(vtkDataArray *enabledArray)\n\nThis must be set before MapScalars() is called. Indices of this\narray must map directly to those in the scalars array passed to\nMapScalars(). Values of 0 in the array indicate the color should\nbe desaturatated.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLookupTableWithEnabling_StaticNew()
{
  return vtkLookupTableWithEnabling::New();
}

PyObject *PyVTKClass_vtkLookupTableWithEnablingNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLookupTableWithEnabling_StaticNew,
    PyvtkLookupTableWithEnabling_Methods,
    "vtkLookupTableWithEnabling", modulename,
    NULL, NULL,
    PyvtkLookupTableWithEnabling_Doc(),
    PyVTKClass_vtkLookupTableNew(modulename));
  return cls;
}

const char **PyvtkLookupTableWithEnabling_Doc()
{
  static const char *docstring[] = {
    "vtkLookupTableWithEnabling - A lookup table that allows for an\n\n",
    "Superclass: vtkLookupTable\n\n",
    "vtkLookupTableWithEnabling \"disables\" or \"grays out\" output colors\nbased on whether the given value in EnabledArray is \"0\" or not.\n\nCaveats:\n\nYou must set the EnabledArray before MapScalars() is called. Indices\nof EnabledArray must map directly to those of the array passed to\nMapScalars().\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLookupTableWithEnabling(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLookupTableWithEnablingNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLookupTableWithEnabling", o) != 0)
    {
    Py_DECREF(o);
    }

}

