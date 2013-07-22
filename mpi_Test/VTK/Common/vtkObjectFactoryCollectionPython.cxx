// python wrapper for vtkObjectFactoryCollection
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
#include "vtkObjectFactoryCollection.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkObjectFactoryCollection(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkObjectFactoryCollection(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkObjectFactoryCollectionNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkObjectFactoryCollectionNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkCollectionNew
extern "C" { PyObject *PyVTKClass_vtkCollectionNew(const char *); }
#define DECLARED_PyVTKClass_vtkCollectionNew
#endif

static const char **PyvtkObjectFactoryCollection_Doc();


static PyObject *
PyvtkObjectFactoryCollection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectFactoryCollection *op = static_cast<vtkObjectFactoryCollection *>(vp);

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
      tempr = op->vtkObjectFactoryCollection::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkObjectFactoryCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectFactoryCollection *op = static_cast<vtkObjectFactoryCollection *>(vp);

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
      tempr = op->vtkObjectFactoryCollection::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkObjectFactoryCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectFactoryCollection *op = static_cast<vtkObjectFactoryCollection *>(vp);

  vtkObjectFactoryCollection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkObjectFactoryCollection::NewInstance();
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
PyvtkObjectFactoryCollection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkObjectFactoryCollection *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkObjectFactoryCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkObjectFactoryCollection_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectFactoryCollection *op = static_cast<vtkObjectFactoryCollection *>(vp);

  vtkObjectFactory *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectFactory"))
    {
    if (ap.IsBound())
      {
      op->AddItem(temp0);
      }
    else
      {
      op->vtkObjectFactoryCollection::AddItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkObjectFactoryCollection_GetNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectFactoryCollection *op = static_cast<vtkObjectFactoryCollection *>(vp);

  vtkObjectFactory *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNextItem();
      }
    else
      {
      tempr = op->vtkObjectFactoryCollection::GetNextItem();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkObjectFactoryCollection_Methods[] = {
  {(char*)"GetClassName", PyvtkObjectFactoryCollection_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkObjectFactoryCollection_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkObjectFactoryCollection_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkObjectFactoryCollection\nC++: vtkObjectFactoryCollection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkObjectFactoryCollection_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkObjectFactoryCollection\nC++: vtkObjectFactoryCollection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddItem", PyvtkObjectFactoryCollection_AddItem, 1,
   (char*)"V.AddItem(vtkObjectFactory)\nC++: void AddItem(vtkObjectFactory *t)\n\nAdd an ObjectFactory from the list.\n"},
  {(char*)"GetNextItem", PyvtkObjectFactoryCollection_GetNextItem, 1,
   (char*)"V.GetNextItem() -> vtkObjectFactory\nC++: vtkObjectFactory *GetNextItem()\n\nGet the next ObjectFactory in the list. Return NULL when the end\nof the list is reached.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkObjectFactoryCollection_StaticNew()
{
  return vtkObjectFactoryCollection::New();
}

PyObject *PyVTKClass_vtkObjectFactoryCollectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkObjectFactoryCollection_StaticNew,
    PyvtkObjectFactoryCollection_Methods,
    "vtkObjectFactoryCollection", modulename,
    NULL, NULL,
    PyvtkObjectFactoryCollection_Doc(),
    PyVTKClass_vtkCollectionNew(modulename));
  return cls;
}

const char **PyvtkObjectFactoryCollection_Doc()
{
  static const char *docstring[] = {
    "vtkObjectFactoryCollection - maintain a list of object factories\n\n",
    "Superclass: vtkCollection\n\n",
    "vtkObjectFactoryCollection is an object that creates and manipulates\nlists of object of type vtkObjectFactory.\n\nSee Also:\n\nvtkCollection vtkObjectFactory\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkObjectFactoryCollection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkObjectFactoryCollectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkObjectFactoryCollection", o) != 0)
    {
    Py_DECREF(o);
    }

}

