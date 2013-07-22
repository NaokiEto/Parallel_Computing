// python wrapper for vtkVolumeCollection
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
#include "vtkVolumeCollection.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkVolumeCollection(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkVolumeCollection(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkVolumeCollectionNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkVolumeCollectionNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPropCollectionNew
extern "C" { PyObject *PyVTKClass_vtkPropCollectionNew(const char *); }
#define DECLARED_PyVTKClass_vtkPropCollectionNew
#endif

static const char **PyvtkVolumeCollection_Doc();


static PyObject *
PyvtkVolumeCollection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeCollection *op = static_cast<vtkVolumeCollection *>(vp);

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
      tempr = op->vtkVolumeCollection::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeCollection *op = static_cast<vtkVolumeCollection *>(vp);

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
      tempr = op->vtkVolumeCollection::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeCollection *op = static_cast<vtkVolumeCollection *>(vp);

  vtkVolumeCollection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkVolumeCollection::NewInstance();
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
PyvtkVolumeCollection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkVolumeCollection *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkVolumeCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeCollection_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeCollection *op = static_cast<vtkVolumeCollection *>(vp);

  vtkVolume *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolume"))
    {
    if (ap.IsBound())
      {
      op->AddItem(temp0);
      }
    else
      {
      op->vtkVolumeCollection::AddItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeCollection_GetNextVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeCollection *op = static_cast<vtkVolumeCollection *>(vp);

  vtkVolume *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNextVolume();
      }
    else
      {
      tempr = op->vtkVolumeCollection::GetNextVolume();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeCollection_GetNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeCollection *op = static_cast<vtkVolumeCollection *>(vp);

  vtkVolume *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNextItem();
      }
    else
      {
      tempr = op->vtkVolumeCollection::GetNextItem();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkVolumeCollection_Methods[] = {
  {(char*)"GetClassName", PyvtkVolumeCollection_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVolumeCollection_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVolumeCollection_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkVolumeCollection\nC++: vtkVolumeCollection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkVolumeCollection_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkVolumeCollection\nC++: vtkVolumeCollection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddItem", PyvtkVolumeCollection_AddItem, 1,
   (char*)"V.AddItem(vtkVolume)\nC++: void AddItem(vtkVolume *a)\n\nAdd a Volume to the list.\n"},
  {(char*)"GetNextVolume", PyvtkVolumeCollection_GetNextVolume, 1,
   (char*)"V.GetNextVolume() -> vtkVolume\nC++: vtkVolume *GetNextVolume()\n\nGet the next Volume in the list. Return NULL when at the end of\nthe list.\n"},
  {(char*)"GetNextItem", PyvtkVolumeCollection_GetNextItem, 1,
   (char*)"V.GetNextItem() -> vtkVolume\nC++: vtkVolume *GetNextItem()\n\nAccess routine provided for compatibility with previous versions\nof VTK.  Please use the GetNextVolume() variant where possible.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkVolumeCollection_StaticNew()
{
  return vtkVolumeCollection::New();
}

PyObject *PyVTKClass_vtkVolumeCollectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkVolumeCollection_StaticNew,
    PyvtkVolumeCollection_Methods,
    "vtkVolumeCollection", modulename,
    NULL, NULL,
    PyvtkVolumeCollection_Doc(),
    PyVTKClass_vtkPropCollectionNew(modulename));
  return cls;
}

const char **PyvtkVolumeCollection_Doc()
{
  static const char *docstring[] = {
    "vtkVolumeCollection - a list of volumes\n\n",
    "Superclass: vtkPropCollection\n\n",
    "vtkVolumeCollection represents and provides methods to manipulate a\nlist of volumes (i.e., vtkVolume and subclasses). The list is\nunsorted and duplicate entries are not prevented.\n\nSee Also:\n\nvtkCollection vtkVolume\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVolumeCollection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVolumeCollectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVolumeCollection", o) != 0)
    {
    Py_DECREF(o);
    }

}

