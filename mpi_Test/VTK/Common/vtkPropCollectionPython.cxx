// python wrapper for vtkPropCollection
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
#include "vtkPropCollection.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPropCollection(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPropCollection(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPropCollectionNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPropCollectionNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkCollectionNew
extern "C" { PyObject *PyVTKClass_vtkCollectionNew(const char *); }
#define DECLARED_PyVTKClass_vtkCollectionNew
#endif

static const char **PyvtkPropCollection_Doc();


static PyObject *
PyvtkPropCollection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropCollection *op = static_cast<vtkPropCollection *>(vp);

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
      tempr = op->vtkPropCollection::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPropCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropCollection *op = static_cast<vtkPropCollection *>(vp);

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
      tempr = op->vtkPropCollection::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPropCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropCollection *op = static_cast<vtkPropCollection *>(vp);

  vtkPropCollection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPropCollection::NewInstance();
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
PyvtkPropCollection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPropCollection *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPropCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPropCollection_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropCollection *op = static_cast<vtkPropCollection *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->AddItem(temp0);
      }
    else
      {
      op->vtkPropCollection::AddItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPropCollection_GetNextProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropCollection *op = static_cast<vtkPropCollection *>(vp);

  vtkProp *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNextProp();
      }
    else
      {
      tempr = op->vtkPropCollection::GetNextProp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPropCollection_GetLastProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropCollection *op = static_cast<vtkPropCollection *>(vp);

  vtkProp *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLastProp();
      }
    else
      {
      tempr = op->vtkPropCollection::GetLastProp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPropCollection_GetNumberOfPaths(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPaths");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropCollection *op = static_cast<vtkPropCollection *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfPaths();
      }
    else
      {
      tempr = op->vtkPropCollection::GetNumberOfPaths();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPropCollection_Methods[] = {
  {(char*)"GetClassName", PyvtkPropCollection_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPropCollection_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPropCollection_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPropCollection\nC++: vtkPropCollection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPropCollection_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPropCollection\nC++: vtkPropCollection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddItem", PyvtkPropCollection_AddItem, 1,
   (char*)"V.AddItem(vtkProp)\nC++: void AddItem(vtkProp *a)\n\nAdd an Prop to the list.\n"},
  {(char*)"GetNextProp", PyvtkPropCollection_GetNextProp, 1,
   (char*)"V.GetNextProp() -> vtkProp\nC++: vtkProp *GetNextProp()\n\nGet the next Prop in the list.\n"},
  {(char*)"GetLastProp", PyvtkPropCollection_GetLastProp, 1,
   (char*)"V.GetLastProp() -> vtkProp\nC++: vtkProp *GetLastProp()\n\nGet the last Prop in the list.\n"},
  {(char*)"GetNumberOfPaths", PyvtkPropCollection_GetNumberOfPaths, 1,
   (char*)"V.GetNumberOfPaths() -> int\nC++: int GetNumberOfPaths()\n\nGet the number of paths contained in this list. (Recall that a\nvtkProp can consist of multiple parts.) Used in picking and other\nactivities to get the parts of composite entities like\nvtkAssembly or vtkPropAssembly.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPropCollection_StaticNew()
{
  return vtkPropCollection::New();
}

PyObject *PyVTKClass_vtkPropCollectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPropCollection_StaticNew,
    PyvtkPropCollection_Methods,
    "vtkPropCollection", modulename,
    NULL, NULL,
    PyvtkPropCollection_Doc(),
    PyVTKClass_vtkCollectionNew(modulename));
  return cls;
}

const char **PyvtkPropCollection_Doc()
{
  static const char *docstring[] = {
    "vtkPropCollection - a list of Props\n\n",
    "Superclass: vtkCollection\n\n",
    "vtkPropCollection represents and provides methods to manipulate a\nlist of Props (i.e., vtkProp and subclasses). The list is unsorted\nand duplicate entries are not prevented.\n\nSee Also:\n\nvtkProp vtkCollection\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPropCollection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPropCollectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPropCollection", o) != 0)
    {
    Py_DECREF(o);
    }

}

