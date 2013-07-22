// python wrapper for vtkMapperCollection
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
#include "vtkMapperCollection.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMapperCollection(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMapperCollection(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMapperCollectionNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMapperCollectionNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkCollectionNew
extern "C" { PyObject *PyVTKClass_vtkCollectionNew(const char *); }
#define DECLARED_PyVTKClass_vtkCollectionNew
#endif

static const char **PyvtkMapperCollection_Doc();


static PyObject *
PyvtkMapperCollection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapperCollection *op = static_cast<vtkMapperCollection *>(vp);

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
      tempr = op->vtkMapperCollection::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapperCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapperCollection *op = static_cast<vtkMapperCollection *>(vp);

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
      tempr = op->vtkMapperCollection::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapperCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapperCollection *op = static_cast<vtkMapperCollection *>(vp);

  vtkMapperCollection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMapperCollection::NewInstance();
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
PyvtkMapperCollection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkMapperCollection *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkMapperCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapperCollection_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapperCollection *op = static_cast<vtkMapperCollection *>(vp);

  vtkMapper *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMapper"))
    {
    if (ap.IsBound())
      {
      op->AddItem(temp0);
      }
    else
      {
      op->vtkMapperCollection::AddItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapperCollection_GetNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapperCollection *op = static_cast<vtkMapperCollection *>(vp);

  vtkMapper *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNextItem();
      }
    else
      {
      tempr = op->vtkMapperCollection::GetNextItem();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapperCollection_GetLastItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapperCollection *op = static_cast<vtkMapperCollection *>(vp);

  vtkMapper *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLastItem();
      }
    else
      {
      tempr = op->vtkMapperCollection::GetLastItem();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMapperCollection_Methods[] = {
  {(char*)"GetClassName", PyvtkMapperCollection_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMapperCollection_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMapperCollection_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMapperCollection\nC++: vtkMapperCollection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMapperCollection_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMapperCollection\nC++: vtkMapperCollection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddItem", PyvtkMapperCollection_AddItem, 1,
   (char*)"V.AddItem(vtkMapper)\nC++: void AddItem(vtkMapper *a)\n\nAdd an mapper to the list.\n"},
  {(char*)"GetNextItem", PyvtkMapperCollection_GetNextItem, 1,
   (char*)"V.GetNextItem() -> vtkMapper\nC++: vtkMapper *GetNextItem()\n\nGet the next mapper in the list.\n"},
  {(char*)"GetLastItem", PyvtkMapperCollection_GetLastItem, 1,
   (char*)"V.GetLastItem() -> vtkMapper\nC++: vtkMapper *GetLastItem()\n\nGet the last mapper in the list.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMapperCollection_StaticNew()
{
  return vtkMapperCollection::New();
}

PyObject *PyVTKClass_vtkMapperCollectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMapperCollection_StaticNew,
    PyvtkMapperCollection_Methods,
    "vtkMapperCollection", modulename,
    NULL, NULL,
    PyvtkMapperCollection_Doc(),
    PyVTKClass_vtkCollectionNew(modulename));
  return cls;
}

const char **PyvtkMapperCollection_Doc()
{
  static const char *docstring[] = {
    "vtkMapperCollection - a list of mappers\n\n",
    "Superclass: vtkCollection\n\n",
    "vtkMapperCollection represents and provides methods to manipulate a\nlist of mappers (i.e., vtkMapper and subclasses). The list is\nunsorted and duplicate entries are not prevented.\n\nSee Also:\n\nvtkMapper vtkCollection\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMapperCollection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMapperCollectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMapperCollection", o) != 0)
    {
    Py_DECREF(o);
    }

}

