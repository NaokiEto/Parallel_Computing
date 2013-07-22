// python wrapper for vtkPlaneCollection
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
#include "vtkPlaneCollection.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPlaneCollection(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPlaneCollection(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPlaneCollectionNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPlaneCollectionNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkCollectionNew
extern "C" { PyObject *PyVTKClass_vtkCollectionNew(const char *); }
#define DECLARED_PyVTKClass_vtkCollectionNew
#endif

static const char **PyvtkPlaneCollection_Doc();


static PyObject *
PyvtkPlaneCollection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCollection *op = static_cast<vtkPlaneCollection *>(vp);

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
      tempr = op->vtkPlaneCollection::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCollection *op = static_cast<vtkPlaneCollection *>(vp);

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
      tempr = op->vtkPlaneCollection::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCollection *op = static_cast<vtkPlaneCollection *>(vp);

  vtkPlaneCollection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPlaneCollection::NewInstance();
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
PyvtkPlaneCollection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPlaneCollection *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPlaneCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneCollection_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCollection *op = static_cast<vtkPlaneCollection *>(vp);

  vtkPlane *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
    {
    if (ap.IsBound())
      {
      op->AddItem(temp0);
      }
    else
      {
      op->vtkPlaneCollection::AddItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneCollection_GetNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCollection *op = static_cast<vtkPlaneCollection *>(vp);

  vtkPlane *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNextItem();
      }
    else
      {
      tempr = op->vtkPlaneCollection::GetNextItem();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneCollection_GetItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCollection *op = static_cast<vtkPlaneCollection *>(vp);

  int temp0;
  vtkPlane *tempr;
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
      tempr = op->vtkPlaneCollection::GetItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPlaneCollection_Methods[] = {
  {(char*)"GetClassName", PyvtkPlaneCollection_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPlaneCollection_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPlaneCollection_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPlaneCollection\nC++: vtkPlaneCollection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPlaneCollection_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPlaneCollection\nC++: vtkPlaneCollection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddItem", PyvtkPlaneCollection_AddItem, 1,
   (char*)"V.AddItem(vtkPlane)\nC++: void AddItem(vtkPlane *)\n\nAdd a plane to the list.\n"},
  {(char*)"GetNextItem", PyvtkPlaneCollection_GetNextItem, 1,
   (char*)"V.GetNextItem() -> vtkPlane\nC++: vtkPlane *GetNextItem()\n\nGet the next plane in the list.\n"},
  {(char*)"GetItem", PyvtkPlaneCollection_GetItem, 1,
   (char*)"V.GetItem(int) -> vtkPlane\nC++: vtkPlane *GetItem(int i)\n\nGet the ith plane in the list.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPlaneCollection_StaticNew()
{
  return vtkPlaneCollection::New();
}

PyObject *PyVTKClass_vtkPlaneCollectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPlaneCollection_StaticNew,
    PyvtkPlaneCollection_Methods,
    "vtkPlaneCollection", modulename,
    NULL, NULL,
    PyvtkPlaneCollection_Doc(),
    PyVTKClass_vtkCollectionNew(modulename));
  return cls;
}

const char **PyvtkPlaneCollection_Doc()
{
  static const char *docstring[] = {
    "vtkPlaneCollection - maintain a list of planes\n\n",
    "Superclass: vtkCollection\n\n",
    "vtkPlaneCollection is an object that creates and manipulates lists of\nobjects of type vtkPlane.\n\nSee Also:\n\nvtkCollection\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPlaneCollection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPlaneCollectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPlaneCollection", o) != 0)
    {
    Py_DECREF(o);
    }

}

