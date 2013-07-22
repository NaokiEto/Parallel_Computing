// python wrapper for vtkAssemblyPaths
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
#include "vtkAssemblyPaths.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkAssemblyPaths(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkAssemblyPaths(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkAssemblyPathsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkAssemblyPathsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkCollectionNew
extern "C" { PyObject *PyVTKClass_vtkCollectionNew(const char *); }
#define DECLARED_PyVTKClass_vtkCollectionNew
#endif

static const char **PyvtkAssemblyPaths_Doc();


static PyObject *
PyvtkAssemblyPaths_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPaths *op = static_cast<vtkAssemblyPaths *>(vp);

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
      tempr = op->vtkAssemblyPaths::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssemblyPaths_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPaths *op = static_cast<vtkAssemblyPaths *>(vp);

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
      tempr = op->vtkAssemblyPaths::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssemblyPaths_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPaths *op = static_cast<vtkAssemblyPaths *>(vp);

  vtkAssemblyPaths *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkAssemblyPaths::NewInstance();
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
PyvtkAssemblyPaths_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkAssemblyPaths *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkAssemblyPaths::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssemblyPaths_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPaths *op = static_cast<vtkAssemblyPaths *>(vp);

  vtkAssemblyPath *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAssemblyPath"))
    {
    if (ap.IsBound())
      {
      op->AddItem(temp0);
      }
    else
      {
      op->vtkAssemblyPaths::AddItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAssemblyPaths_RemoveItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPaths *op = static_cast<vtkAssemblyPaths *>(vp);

  vtkAssemblyPath *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAssemblyPath"))
    {
    if (ap.IsBound())
      {
      op->RemoveItem(temp0);
      }
    else
      {
      op->vtkAssemblyPaths::RemoveItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAssemblyPaths_IsItemPresent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsItemPresent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPaths *op = static_cast<vtkAssemblyPaths *>(vp);

  vtkAssemblyPath *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAssemblyPath"))
    {
    if (ap.IsBound())
      {
      tempr = op->IsItemPresent(temp0);
      }
    else
      {
      tempr = op->vtkAssemblyPaths::IsItemPresent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssemblyPaths_GetNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPaths *op = static_cast<vtkAssemblyPaths *>(vp);

  vtkAssemblyPath *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNextItem();
      }
    else
      {
      tempr = op->vtkAssemblyPaths::GetNextItem();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssemblyPaths_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPaths *op = static_cast<vtkAssemblyPaths *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMTime();
      }
    else
      {
      tempr = op->vtkAssemblyPaths::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAssemblyPaths_Methods[] = {
  {(char*)"GetClassName", PyvtkAssemblyPaths_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAssemblyPaths_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAssemblyPaths_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkAssemblyPaths\nC++: vtkAssemblyPaths *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAssemblyPaths_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAssemblyPaths\nC++: vtkAssemblyPaths *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddItem", PyvtkAssemblyPaths_AddItem, 1,
   (char*)"V.AddItem(vtkAssemblyPath)\nC++: void AddItem(vtkAssemblyPath *p)\n\nAdd a path to the list.\n"},
  {(char*)"RemoveItem", PyvtkAssemblyPaths_RemoveItem, 1,
   (char*)"V.RemoveItem(vtkAssemblyPath)\nC++: void RemoveItem(vtkAssemblyPath *p)\n\nRemove a path from the list.\n"},
  {(char*)"IsItemPresent", PyvtkAssemblyPaths_IsItemPresent, 1,
   (char*)"V.IsItemPresent(vtkAssemblyPath) -> int\nC++: int IsItemPresent(vtkAssemblyPath *p)\n\nDetermine whether a particular path is present. Returns its\nposition in the list.\n"},
  {(char*)"GetNextItem", PyvtkAssemblyPaths_GetNextItem, 1,
   (char*)"V.GetNextItem() -> vtkAssemblyPath\nC++: vtkAssemblyPath *GetNextItem()\n\nGet the next path in the list.\n"},
  {(char*)"GetMTime", PyvtkAssemblyPaths_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long GetMTime()\n\nOverride the standard GetMTime() to check for the modified times\nof the paths.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAssemblyPaths_StaticNew()
{
  return vtkAssemblyPaths::New();
}

PyObject *PyVTKClass_vtkAssemblyPathsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAssemblyPaths_StaticNew,
    PyvtkAssemblyPaths_Methods,
    "vtkAssemblyPaths", modulename,
    NULL, NULL,
    PyvtkAssemblyPaths_Doc(),
    PyVTKClass_vtkCollectionNew(modulename));
  return cls;
}

const char **PyvtkAssemblyPaths_Doc()
{
  static const char *docstring[] = {
    "vtkAssemblyPaths - a list of lists of props representing an assembly\nhierarchy\n\n",
    "Superclass: vtkCollection\n\n",
    "vtkAssemblyPaths represents an assembly hierarchy as a list of\nvtkAssemblyPath. Each path represents the complete path from the top\nlevel assembly (if any) down to the leaf prop.\n\nSee Also:\n\nvtkAssemblyPath vtkAssemblyNode vtkPicker vtkAssembly vtkProp\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAssemblyPaths(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAssemblyPathsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAssemblyPaths", o) != 0)
    {
    Py_DECREF(o);
    }

}

