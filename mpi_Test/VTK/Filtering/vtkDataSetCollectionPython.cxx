// python wrapper for vtkDataSetCollection
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
#include "vtkDataSetCollection.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDataSetCollection(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDataSetCollection(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDataSetCollectionNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDataSetCollectionNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkCollectionNew
extern "C" { PyObject *PyVTKClass_vtkCollectionNew(const char *); }
#define DECLARED_PyVTKClass_vtkCollectionNew
#endif

static const char **PyvtkDataSetCollection_Doc();


static PyObject *
PyvtkDataSetCollection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetCollection *op = static_cast<vtkDataSetCollection *>(vp);

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
      tempr = op->vtkDataSetCollection::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetCollection *op = static_cast<vtkDataSetCollection *>(vp);

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
      tempr = op->vtkDataSetCollection::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetCollection *op = static_cast<vtkDataSetCollection *>(vp);

  vtkDataSetCollection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDataSetCollection::NewInstance();
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
PyvtkDataSetCollection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDataSetCollection *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDataSetCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetCollection_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetCollection *op = static_cast<vtkDataSetCollection *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->AddItem(temp0);
      }
    else
      {
      op->vtkDataSetCollection::AddItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetCollection_GetNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetCollection *op = static_cast<vtkDataSetCollection *>(vp);

  vtkDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNextItem();
      }
    else
      {
      tempr = op->vtkDataSetCollection::GetNextItem();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetCollection_GetNextDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetCollection *op = static_cast<vtkDataSetCollection *>(vp);

  vtkDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNextDataSet();
      }
    else
      {
      tempr = op->vtkDataSetCollection::GetNextDataSet();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetCollection_GetItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetCollection *op = static_cast<vtkDataSetCollection *>(vp);

  int temp0;
  vtkDataSet *tempr;
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
      tempr = op->vtkDataSetCollection::GetItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetCollection_GetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetCollection *op = static_cast<vtkDataSetCollection *>(vp);

  int temp0;
  vtkDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataSet(temp0);
      }
    else
      {
      tempr = op->vtkDataSetCollection::GetDataSet(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDataSetCollection_Methods[] = {
  {(char*)"GetClassName", PyvtkDataSetCollection_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataSetCollection_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataSetCollection_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDataSetCollection\nC++: vtkDataSetCollection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDataSetCollection_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDataSetCollection\nC++: vtkDataSetCollection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddItem", PyvtkDataSetCollection_AddItem, 1,
   (char*)"V.AddItem(vtkDataSet)\nC++: void AddItem(vtkDataSet *ds)\n\nAdd a dataset to the list.\n"},
  {(char*)"GetNextItem", PyvtkDataSetCollection_GetNextItem, 1,
   (char*)"V.GetNextItem() -> vtkDataSet\nC++: vtkDataSet *GetNextItem()\n\nGet the next dataset in the list.\n"},
  {(char*)"GetNextDataSet", PyvtkDataSetCollection_GetNextDataSet, 1,
   (char*)"V.GetNextDataSet() -> vtkDataSet\nC++: vtkDataSet *GetNextDataSet()\n\nGet the next dataset in the list.\n"},
  {(char*)"GetItem", PyvtkDataSetCollection_GetItem, 1,
   (char*)"V.GetItem(int) -> vtkDataSet\nC++: vtkDataSet *GetItem(int i)\n\nGet the ith dataset in the list.\n"},
  {(char*)"GetDataSet", PyvtkDataSetCollection_GetDataSet, 1,
   (char*)"V.GetDataSet(int) -> vtkDataSet\nC++: vtkDataSet *GetDataSet(int i)\n\nGet the ith dataset in the list.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDataSetCollection_StaticNew()
{
  return vtkDataSetCollection::New();
}

PyObject *PyVTKClass_vtkDataSetCollectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDataSetCollection_StaticNew,
    PyvtkDataSetCollection_Methods,
    "vtkDataSetCollection", modulename,
    NULL, NULL,
    PyvtkDataSetCollection_Doc(),
    PyVTKClass_vtkCollectionNew(modulename));
  return cls;
}

const char **PyvtkDataSetCollection_Doc()
{
  static const char *docstring[] = {
    "vtkDataSetCollection - maintain an unordered list of dataset objects\n\n",
    "Superclass: vtkCollection\n\n",
    "vtkDataSetCollection is an object that creates and manipulates lists\nof datasets. See also vtkCollection and subclasses.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataSetCollection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataSetCollectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataSetCollection", o) != 0)
    {
    Py_DECREF(o);
    }

}

