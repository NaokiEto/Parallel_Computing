// python wrapper for vtkCollectionIterator
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
#include "vtkCollectionIterator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCollectionIterator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCollectionIterator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCollectionIteratorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCollectionIteratorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkCollectionIterator_Doc();


static PyObject *
PyvtkCollectionIterator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectionIterator *op = static_cast<vtkCollectionIterator *>(vp);

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
      tempr = op->vtkCollectionIterator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollectionIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectionIterator *op = static_cast<vtkCollectionIterator *>(vp);

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
      tempr = op->vtkCollectionIterator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollectionIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectionIterator *op = static_cast<vtkCollectionIterator *>(vp);

  vtkCollectionIterator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCollectionIterator::NewInstance();
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
PyvtkCollectionIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCollectionIterator *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCollectionIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollectionIterator_SetCollection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCollection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectionIterator *op = static_cast<vtkCollectionIterator *>(vp);

  vtkCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCollection"))
    {
    if (ap.IsBound())
      {
      op->SetCollection(temp0);
      }
    else
      {
      op->vtkCollectionIterator::SetCollection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCollectionIterator_GetCollection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCollection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectionIterator *op = static_cast<vtkCollectionIterator *>(vp);

  vtkCollection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCollection();
      }
    else
      {
      tempr = op->vtkCollectionIterator::GetCollection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollectionIterator_InitTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectionIterator *op = static_cast<vtkCollectionIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InitTraversal();
      }
    else
      {
      op->vtkCollectionIterator::InitTraversal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCollectionIterator_GoToFirstItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToFirstItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectionIterator *op = static_cast<vtkCollectionIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GoToFirstItem();
      }
    else
      {
      op->vtkCollectionIterator::GoToFirstItem();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCollectionIterator_GoToNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectionIterator *op = static_cast<vtkCollectionIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GoToNextItem();
      }
    else
      {
      op->vtkCollectionIterator::GoToNextItem();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCollectionIterator_IsDoneWithTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDoneWithTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectionIterator *op = static_cast<vtkCollectionIterator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsDoneWithTraversal();
      }
    else
      {
      tempr = op->vtkCollectionIterator::IsDoneWithTraversal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollectionIterator_GetCurrentObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectionIterator *op = static_cast<vtkCollectionIterator *>(vp);

  vtkObject *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCurrentObject();
      }
    else
      {
      tempr = op->vtkCollectionIterator::GetCurrentObject();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkCollectionIterator_GetObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectionIterator *op = static_cast<vtkCollectionIterator *>(vp);

  vtkObject *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetObject();
      }
    else
      {
      tempr = op->vtkCollectionIterator::GetObject();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}
#endif

static PyMethodDef PyvtkCollectionIterator_Methods[] = {
  {(char*)"GetClassName", PyvtkCollectionIterator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCollectionIterator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCollectionIterator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCollectionIterator\nC++: vtkCollectionIterator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCollectionIterator_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCollectionIterator\nC++: vtkCollectionIterator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCollection", PyvtkCollectionIterator_SetCollection, 1,
   (char*)"V.SetCollection(vtkCollection)\nC++: virtual void SetCollection(vtkCollection *)\n\nSet/Get the collection over which to iterate.\n"},
  {(char*)"GetCollection", PyvtkCollectionIterator_GetCollection, 1,
   (char*)"V.GetCollection() -> vtkCollection\nC++: vtkCollection *GetCollection()\n\nSet/Get the collection over which to iterate.\n"},
  {(char*)"InitTraversal", PyvtkCollectionIterator_InitTraversal, 1,
   (char*)"V.InitTraversal()\nC++: void InitTraversal()\n\nPosition the iterator at the first item in the collection.\n"},
  {(char*)"GoToFirstItem", PyvtkCollectionIterator_GoToFirstItem, 1,
   (char*)"V.GoToFirstItem()\nC++: void GoToFirstItem()\n\nPosition the iterator at the first item in the collection.\n"},
  {(char*)"GoToNextItem", PyvtkCollectionIterator_GoToNextItem, 1,
   (char*)"V.GoToNextItem()\nC++: void GoToNextItem()\n\nMove the iterator to the next item in the collection.\n"},
  {(char*)"IsDoneWithTraversal", PyvtkCollectionIterator_IsDoneWithTraversal, 1,
   (char*)"V.IsDoneWithTraversal() -> int\nC++: int IsDoneWithTraversal()\n\nTest whether the iterator is currently positioned at a valid\nitem. Returns 1 for yes, 0 for no.\n"},
  {(char*)"GetCurrentObject", PyvtkCollectionIterator_GetCurrentObject, 1,
   (char*)"V.GetCurrentObject() -> vtkObject\nC++: vtkObject *GetCurrentObject()\n\nGet the item at the current iterator position.  Valid only when\nIsDoneWithTraversal() returns 1.\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"GetObject", PyvtkCollectionIterator_GetObject, 1,
   (char*)"V.GetObject() -> vtkObject\nC++: vtkObject *GetObject()\n\n@deprecated Replaced by vtkCollectionIterator::GetCurrentObject()\nas of VTK 5.0.\n"},
#endif
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCollectionIterator_StaticNew()
{
  return vtkCollectionIterator::New();
}

PyObject *PyVTKClass_vtkCollectionIteratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCollectionIterator_StaticNew,
    PyvtkCollectionIterator_Methods,
    "vtkCollectionIterator", modulename,
    NULL, NULL,
    PyvtkCollectionIterator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkCollectionIterator_Doc()
{
  static const char *docstring[] = {
    "vtkCollectionIterator - iterator through a vtkCollection.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkCollectionIterator provides an alternative way to traverse through\nthe objects in a vtkCollection.  Unlike the collection's built in\ninterface, this allows multiple iterators to simultaneously traverse\nthe collection.  If items are removed from the collection, only the\niterators currently pointing to those items are invalidated.  Other\niterators will still continue to function normally.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCollectionIterator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCollectionIteratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCollectionIterator", o) != 0)
    {
    Py_DECREF(o);
    }

}

