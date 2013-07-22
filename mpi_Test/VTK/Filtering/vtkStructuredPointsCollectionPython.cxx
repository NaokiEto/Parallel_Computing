// python wrapper for vtkStructuredPointsCollection
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
#include "vtkStructuredPointsCollection.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkStructuredPointsCollection(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkStructuredPointsCollection(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkStructuredPointsCollectionNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkStructuredPointsCollectionNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkCollectionNew
extern "C" { PyObject *PyVTKClass_vtkCollectionNew(const char *); }
#define DECLARED_PyVTKClass_vtkCollectionNew
#endif

static const char **PyvtkStructuredPointsCollection_Doc();


static PyObject *
PyvtkStructuredPointsCollection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsCollection *op = static_cast<vtkStructuredPointsCollection *>(vp);

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
      tempr = op->vtkStructuredPointsCollection::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredPointsCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsCollection *op = static_cast<vtkStructuredPointsCollection *>(vp);

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
      tempr = op->vtkStructuredPointsCollection::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredPointsCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsCollection *op = static_cast<vtkStructuredPointsCollection *>(vp);

  vtkStructuredPointsCollection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkStructuredPointsCollection::NewInstance();
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
PyvtkStructuredPointsCollection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkStructuredPointsCollection *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkStructuredPointsCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredPointsCollection_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsCollection *op = static_cast<vtkStructuredPointsCollection *>(vp);

  vtkStructuredPoints *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStructuredPoints"))
    {
    if (ap.IsBound())
      {
      op->AddItem(temp0);
      }
    else
      {
      op->vtkStructuredPointsCollection::AddItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredPointsCollection_GetNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsCollection *op = static_cast<vtkStructuredPointsCollection *>(vp);

  vtkStructuredPoints *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNextItem();
      }
    else
      {
      tempr = op->vtkStructuredPointsCollection::GetNextItem();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkStructuredPointsCollection_Methods[] = {
  {(char*)"GetClassName", PyvtkStructuredPointsCollection_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStructuredPointsCollection_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStructuredPointsCollection_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkStructuredPointsCollection\nC++: vtkStructuredPointsCollection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStructuredPointsCollection_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStructuredPointsCollection\nC++: vtkStructuredPointsCollection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddItem", PyvtkStructuredPointsCollection_AddItem, 1,
   (char*)"V.AddItem(vtkStructuredPoints)\nC++: void AddItem(vtkStructuredPoints *ds)\n\nAdd a pointer to a vtkStructuredPoints to the list.\n"},
  {(char*)"GetNextItem", PyvtkStructuredPointsCollection_GetNextItem, 1,
   (char*)"V.GetNextItem() -> vtkStructuredPoints\nC++: vtkStructuredPoints *GetNextItem()\n\nGet the next item in the collection. NULL is returned if the\ncollection is exhausted.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkStructuredPointsCollection_StaticNew()
{
  return vtkStructuredPointsCollection::New();
}

PyObject *PyVTKClass_vtkStructuredPointsCollectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkStructuredPointsCollection_StaticNew,
    PyvtkStructuredPointsCollection_Methods,
    "vtkStructuredPointsCollection", modulename,
    NULL, NULL,
    PyvtkStructuredPointsCollection_Doc(),
    PyVTKClass_vtkCollectionNew(modulename));
  return cls;
}

const char **PyvtkStructuredPointsCollection_Doc()
{
  static const char *docstring[] = {
    "vtkStructuredPointsCollection - maintain a list of structured points\ndata objects\n\n",
    "Superclass: vtkCollection\n\n",
    "vtkStructuredPointsCollection is an object that creates and\nmanipulates lists of structured points datasets. See also\nvtkCollection and subclasses.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStructuredPointsCollection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStructuredPointsCollectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStructuredPointsCollection", o) != 0)
    {
    Py_DECREF(o);
    }

}

