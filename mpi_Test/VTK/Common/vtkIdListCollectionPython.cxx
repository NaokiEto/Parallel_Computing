// python wrapper for vtkIdListCollection
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
#include "vtkIdListCollection.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkIdListCollection(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkIdListCollection(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkIdListCollectionNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkIdListCollectionNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkCollectionNew
extern "C" { PyObject *PyVTKClass_vtkCollectionNew(const char *); }
#define DECLARED_PyVTKClass_vtkCollectionNew
#endif

static const char **PyvtkIdListCollection_Doc();


static PyObject *
PyvtkIdListCollection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdListCollection *op = static_cast<vtkIdListCollection *>(vp);

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
      tempr = op->vtkIdListCollection::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIdListCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdListCollection *op = static_cast<vtkIdListCollection *>(vp);

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
      tempr = op->vtkIdListCollection::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIdListCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdListCollection *op = static_cast<vtkIdListCollection *>(vp);

  vtkIdListCollection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkIdListCollection::NewInstance();
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
PyvtkIdListCollection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkIdListCollection *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkIdListCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIdListCollection_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdListCollection *op = static_cast<vtkIdListCollection *>(vp);

  vtkIdList *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      op->AddItem(temp0);
      }
    else
      {
      op->vtkIdListCollection::AddItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIdListCollection_GetNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdListCollection *op = static_cast<vtkIdListCollection *>(vp);

  vtkIdList *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNextItem();
      }
    else
      {
      tempr = op->vtkIdListCollection::GetNextItem();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIdListCollection_GetItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdListCollection *op = static_cast<vtkIdListCollection *>(vp);

  int temp0;
  vtkIdList *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetItem(temp0);
      }
    else
      {
      tempr = op->vtkIdListCollection::GetItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkIdListCollection_Methods[] = {
  {(char*)"GetClassName", PyvtkIdListCollection_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkIdListCollection_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkIdListCollection_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkIdListCollection\nC++: vtkIdListCollection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkIdListCollection_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkIdListCollection\nC++: vtkIdListCollection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddItem", PyvtkIdListCollection_AddItem, 1,
   (char*)"V.AddItem(vtkIdList)\nC++: void AddItem(vtkIdList *ds)\n\nAdd a dataset to the list.\n"},
  {(char*)"GetNextItem", PyvtkIdListCollection_GetNextItem, 1,
   (char*)"V.GetNextItem() -> vtkIdList\nC++: vtkIdList *GetNextItem()\n\nGet the next dataset in the list.\n"},
  {(char*)"GetItem", PyvtkIdListCollection_GetItem, 1,
   (char*)"V.GetItem(int) -> vtkIdList\nC++: vtkIdList *GetItem(int i)\n\nGet the ith dataset in the list.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkIdListCollection_StaticNew()
{
  return vtkIdListCollection::New();
}

PyObject *PyVTKClass_vtkIdListCollectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkIdListCollection_StaticNew,
    PyvtkIdListCollection_Methods,
    "vtkIdListCollection", modulename,
    NULL, NULL,
    PyvtkIdListCollection_Doc(),
    PyVTKClass_vtkCollectionNew(modulename));
  return cls;
}

const char **PyvtkIdListCollection_Doc()
{
  static const char *docstring[] = {
    "vtkIdListCollection - maintain an unordered list of dataarray objects\n\n",
    "Superclass: vtkCollection\n\n",
    "vtkIdListCollection is an object that creates and manipulates lists\nof datasets. See also vtkCollection and subclasses.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkIdListCollection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkIdListCollectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkIdListCollection", o) != 0)
    {
    Py_DECREF(o);
    }

}

