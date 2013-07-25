// python wrapper for vtkImplicitFunctionCollection
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
#include "vtkImplicitFunctionCollection.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImplicitFunctionCollection(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImplicitFunctionCollection(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImplicitFunctionCollectionNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImplicitFunctionCollectionNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkCollectionNew
extern "C" { PyObject *PyVTKClass_vtkCollectionNew(const char *); }
#define DECLARED_PyVTKClass_vtkCollectionNew
#endif

static const char **PyvtkImplicitFunctionCollection_Doc();


static PyObject *
PyvtkImplicitFunctionCollection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunctionCollection *op = static_cast<vtkImplicitFunctionCollection *>(vp);

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
      tempr = op->vtkImplicitFunctionCollection::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitFunctionCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunctionCollection *op = static_cast<vtkImplicitFunctionCollection *>(vp);

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
      tempr = op->vtkImplicitFunctionCollection::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitFunctionCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunctionCollection *op = static_cast<vtkImplicitFunctionCollection *>(vp);

  vtkImplicitFunctionCollection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImplicitFunctionCollection::NewInstance();
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
PyvtkImplicitFunctionCollection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImplicitFunctionCollection *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImplicitFunctionCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitFunctionCollection_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunctionCollection *op = static_cast<vtkImplicitFunctionCollection *>(vp);

  vtkImplicitFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
    {
    if (ap.IsBound())
      {
      op->AddItem(temp0);
      }
    else
      {
      op->vtkImplicitFunctionCollection::AddItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitFunctionCollection_GetNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunctionCollection *op = static_cast<vtkImplicitFunctionCollection *>(vp);

  vtkImplicitFunction *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNextItem();
      }
    else
      {
      tempr = op->vtkImplicitFunctionCollection::GetNextItem();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImplicitFunctionCollection_Methods[] = {
  {(char*)"GetClassName", PyvtkImplicitFunctionCollection_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImplicitFunctionCollection_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImplicitFunctionCollection_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImplicitFunctionCollection\nC++: vtkImplicitFunctionCollection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImplicitFunctionCollection_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImplicitFunctionCollection\nC++: vtkImplicitFunctionCollection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddItem", PyvtkImplicitFunctionCollection_AddItem, 1,
   (char*)"V.AddItem(vtkImplicitFunction)\nC++: void AddItem(vtkImplicitFunction *)\n\nAdd an implicit function to the list.\n"},
  {(char*)"GetNextItem", PyvtkImplicitFunctionCollection_GetNextItem, 1,
   (char*)"V.GetNextItem() -> vtkImplicitFunction\nC++: vtkImplicitFunction *GetNextItem()\n\nGet the next implicit function in the list.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImplicitFunctionCollection_StaticNew()
{
  return vtkImplicitFunctionCollection::New();
}

PyObject *PyVTKClass_vtkImplicitFunctionCollectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImplicitFunctionCollection_StaticNew,
    PyvtkImplicitFunctionCollection_Methods,
    "vtkImplicitFunctionCollection", modulename,
    NULL, NULL,
    PyvtkImplicitFunctionCollection_Doc(),
    PyVTKClass_vtkCollectionNew(modulename));
  return cls;
}

const char **PyvtkImplicitFunctionCollection_Doc()
{
  static const char *docstring[] = {
    "vtkImplicitFunctionCollection - maintain a list of implicit functions\n\n",
    "Superclass: vtkCollection\n\n",
    "vtkImplicitFunctionCollection is an object that creates and\nmanipulates lists of objects of type vtkImplicitFunction.\n\nSee Also:\n\nvtkCollection vtkPlaneCollection\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImplicitFunctionCollection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImplicitFunctionCollectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImplicitFunctionCollection", o) != 0)
    {
    Py_DECREF(o);
    }

}
