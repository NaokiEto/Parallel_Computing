// python wrapper for vtkCullerCollection
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
#include "vtkCullerCollection.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCullerCollection(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCullerCollection(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCullerCollectionNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCullerCollectionNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkCollectionNew
extern "C" { PyObject *PyVTKClass_vtkCollectionNew(const char *); }
#define DECLARED_PyVTKClass_vtkCollectionNew
#endif

static const char **PyvtkCullerCollection_Doc();


static PyObject *
PyvtkCullerCollection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCullerCollection *op = static_cast<vtkCullerCollection *>(vp);

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
      tempr = op->vtkCullerCollection::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCullerCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCullerCollection *op = static_cast<vtkCullerCollection *>(vp);

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
      tempr = op->vtkCullerCollection::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCullerCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCullerCollection *op = static_cast<vtkCullerCollection *>(vp);

  vtkCullerCollection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCullerCollection::NewInstance();
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
PyvtkCullerCollection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCullerCollection *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCullerCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCullerCollection_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCullerCollection *op = static_cast<vtkCullerCollection *>(vp);

  vtkCuller *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCuller"))
    {
    if (ap.IsBound())
      {
      op->AddItem(temp0);
      }
    else
      {
      op->vtkCullerCollection::AddItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCullerCollection_GetNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCullerCollection *op = static_cast<vtkCullerCollection *>(vp);

  vtkCuller *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNextItem();
      }
    else
      {
      tempr = op->vtkCullerCollection::GetNextItem();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCullerCollection_GetLastItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCullerCollection *op = static_cast<vtkCullerCollection *>(vp);

  vtkCuller *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLastItem();
      }
    else
      {
      tempr = op->vtkCullerCollection::GetLastItem();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCullerCollection_Methods[] = {
  {(char*)"GetClassName", PyvtkCullerCollection_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCullerCollection_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCullerCollection_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCullerCollection\nC++: vtkCullerCollection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCullerCollection_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCullerCollection\nC++: vtkCullerCollection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddItem", PyvtkCullerCollection_AddItem, 1,
   (char*)"V.AddItem(vtkCuller)\nC++: void AddItem(vtkCuller *a)\n\nAdd an Culler to the list.\n"},
  {(char*)"GetNextItem", PyvtkCullerCollection_GetNextItem, 1,
   (char*)"V.GetNextItem() -> vtkCuller\nC++: vtkCuller *GetNextItem()\n\nGet the next Culler in the list.\n"},
  {(char*)"GetLastItem", PyvtkCullerCollection_GetLastItem, 1,
   (char*)"V.GetLastItem() -> vtkCuller\nC++: vtkCuller *GetLastItem()\n\nGet the last Culler in the list.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCullerCollection_StaticNew()
{
  return vtkCullerCollection::New();
}

PyObject *PyVTKClass_vtkCullerCollectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCullerCollection_StaticNew,
    PyvtkCullerCollection_Methods,
    "vtkCullerCollection", modulename,
    NULL, NULL,
    PyvtkCullerCollection_Doc(),
    PyVTKClass_vtkCollectionNew(modulename));
  return cls;
}

const char **PyvtkCullerCollection_Doc()
{
  static const char *docstring[] = {
    "vtkCullerCollection - a list of Cullers\n\n",
    "Superclass: vtkCollection\n\n",
    "vtkCullerCollection represents and provides methods to manipulate a\nlist of Cullers (i.e., vtkCuller and subclasses). The list is\nunsorted and duplicate entries are not prevented.\n\nSee Also:\n\nvtkCuller vtkCollection\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCullerCollection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCullerCollectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCullerCollection", o) != 0)
    {
    Py_DECREF(o);
    }

}

