// python wrapper for vtkDataArrayCollection
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
#include "vtkDataArrayCollection.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDataArrayCollection(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDataArrayCollection(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDataArrayCollectionNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDataArrayCollectionNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkCollectionNew
extern "C" { PyObject *PyVTKClass_vtkCollectionNew(const char *); }
#define DECLARED_PyVTKClass_vtkCollectionNew
#endif

static const char **PyvtkDataArrayCollection_Doc();


static PyObject *
PyvtkDataArrayCollection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArrayCollection *op = static_cast<vtkDataArrayCollection *>(vp);

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
      tempr = op->vtkDataArrayCollection::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataArrayCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArrayCollection *op = static_cast<vtkDataArrayCollection *>(vp);

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
      tempr = op->vtkDataArrayCollection::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataArrayCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArrayCollection *op = static_cast<vtkDataArrayCollection *>(vp);

  vtkDataArrayCollection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDataArrayCollection::NewInstance();
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
PyvtkDataArrayCollection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDataArrayCollection *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDataArrayCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataArrayCollection_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArrayCollection *op = static_cast<vtkDataArrayCollection *>(vp);

  vtkDataArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
    {
    if (ap.IsBound())
      {
      op->AddItem(temp0);
      }
    else
      {
      op->vtkDataArrayCollection::AddItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataArrayCollection_GetNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArrayCollection *op = static_cast<vtkDataArrayCollection *>(vp);

  vtkDataArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNextItem();
      }
    else
      {
      tempr = op->vtkDataArrayCollection::GetNextItem();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataArrayCollection_GetItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArrayCollection *op = static_cast<vtkDataArrayCollection *>(vp);

  int temp0;
  vtkDataArray *tempr;
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
      tempr = op->vtkDataArrayCollection::GetItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDataArrayCollection_Methods[] = {
  {(char*)"GetClassName", PyvtkDataArrayCollection_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataArrayCollection_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataArrayCollection_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDataArrayCollection\nC++: vtkDataArrayCollection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDataArrayCollection_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDataArrayCollection\nC++: vtkDataArrayCollection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddItem", PyvtkDataArrayCollection_AddItem, 1,
   (char*)"V.AddItem(vtkDataArray)\nC++: void AddItem(vtkDataArray *ds)\n\nAdd a dataarray to the list.\n"},
  {(char*)"GetNextItem", PyvtkDataArrayCollection_GetNextItem, 1,
   (char*)"V.GetNextItem() -> vtkDataArray\nC++: vtkDataArray *GetNextItem()\n\nGet the next dataarray in the list.\n"},
  {(char*)"GetItem", PyvtkDataArrayCollection_GetItem, 1,
   (char*)"V.GetItem(int) -> vtkDataArray\nC++: vtkDataArray *GetItem(int i)\n\nGet the ith dataarray in the list.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDataArrayCollection_StaticNew()
{
  return vtkDataArrayCollection::New();
}

PyObject *PyVTKClass_vtkDataArrayCollectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDataArrayCollection_StaticNew,
    PyvtkDataArrayCollection_Methods,
    "vtkDataArrayCollection", modulename,
    NULL, NULL,
    PyvtkDataArrayCollection_Doc(),
    PyVTKClass_vtkCollectionNew(modulename));
  return cls;
}

const char **PyvtkDataArrayCollection_Doc()
{
  static const char *docstring[] = {
    "vtkDataArrayCollection - maintain an unordered list of dataarray\nobjects\n\n",
    "Superclass: vtkCollection\n\n",
    "vtkDataArrayCollection is an object that creates and manipulates\nlists of datasets. See also vtkCollection and subclasses.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataArrayCollection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataArrayCollectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataArrayCollection", o) != 0)
    {
    Py_DECREF(o);
    }

}

