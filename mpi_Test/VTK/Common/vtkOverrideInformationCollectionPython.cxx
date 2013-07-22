// python wrapper for vtkOverrideInformationCollection
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
#include "vtkOverrideInformationCollection.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkOverrideInformationCollection(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkOverrideInformationCollection(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkOverrideInformationCollectionNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkOverrideInformationCollectionNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkCollectionNew
extern "C" { PyObject *PyVTKClass_vtkCollectionNew(const char *); }
#define DECLARED_PyVTKClass_vtkCollectionNew
#endif

static const char **PyvtkOverrideInformationCollection_Doc();


static PyObject *
PyvtkOverrideInformationCollection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverrideInformationCollection *op = static_cast<vtkOverrideInformationCollection *>(vp);

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
      tempr = op->vtkOverrideInformationCollection::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOverrideInformationCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverrideInformationCollection *op = static_cast<vtkOverrideInformationCollection *>(vp);

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
      tempr = op->vtkOverrideInformationCollection::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOverrideInformationCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverrideInformationCollection *op = static_cast<vtkOverrideInformationCollection *>(vp);

  vtkOverrideInformationCollection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkOverrideInformationCollection::NewInstance();
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
PyvtkOverrideInformationCollection_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverrideInformationCollection *op = static_cast<vtkOverrideInformationCollection *>(vp);

  vtkOverrideInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOverrideInformation"))
    {
    if (ap.IsBound())
      {
      op->AddItem(temp0);
      }
    else
      {
      op->vtkOverrideInformationCollection::AddItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOverrideInformationCollection_GetNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverrideInformationCollection *op = static_cast<vtkOverrideInformationCollection *>(vp);

  vtkOverrideInformation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNextItem();
      }
    else
      {
      tempr = op->vtkOverrideInformationCollection::GetNextItem();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOverrideInformationCollection_Methods[] = {
  {(char*)"GetClassName", PyvtkOverrideInformationCollection_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOverrideInformationCollection_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOverrideInformationCollection_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkOverrideInformationCollection\nC++: vtkOverrideInformationCollection *NewInstance()\n\n"},
  {(char*)"AddItem", PyvtkOverrideInformationCollection_AddItem, 1,
   (char*)"V.AddItem(vtkOverrideInformation)\nC++: void AddItem(vtkOverrideInformation *)\n\nAdd a OverrideInformation to the list.\n"},
  {(char*)"GetNextItem", PyvtkOverrideInformationCollection_GetNextItem, 1,
   (char*)"V.GetNextItem() -> vtkOverrideInformation\nC++: vtkOverrideInformation *GetNextItem()\n\nGet the next OverrideInformation in the list.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOverrideInformationCollection_StaticNew()
{
  return vtkOverrideInformationCollection::New();
}

PyObject *PyVTKClass_vtkOverrideInformationCollectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOverrideInformationCollection_StaticNew,
    PyvtkOverrideInformationCollection_Methods,
    "vtkOverrideInformationCollection", modulename,
    NULL, NULL,
    PyvtkOverrideInformationCollection_Doc(),
    PyVTKClass_vtkCollectionNew(modulename));
  return cls;
}

const char **PyvtkOverrideInformationCollection_Doc()
{
  static const char *docstring[] = {
    "vtkOverrideInformationCollection - maintain a list of override\ninformation objects\n\n",
    "Superclass: vtkCollection\n\n",
    "vtkOverrideInformationCollection is an object that creates and\nmanipulates lists of objects of type vtkOverrideInformation.\n\nSee Also:\n\nvtkCollection\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOverrideInformationCollection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOverrideInformationCollectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOverrideInformationCollection", o) != 0)
    {
    Py_DECREF(o);
    }

}

