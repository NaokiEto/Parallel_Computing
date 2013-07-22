// python wrapper for vtkExecutiveCollection
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
#include "vtkExecutiveCollection.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkExecutiveCollection(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkExecutiveCollection(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkExecutiveCollectionNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkExecutiveCollectionNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkCollectionNew
extern "C" { PyObject *PyVTKClass_vtkCollectionNew(const char *); }
#define DECLARED_PyVTKClass_vtkCollectionNew
#endif

static const char **PyvtkExecutiveCollection_Doc();


static PyObject *
PyvtkExecutiveCollection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutiveCollection *op = static_cast<vtkExecutiveCollection *>(vp);

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
      tempr = op->vtkExecutiveCollection::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutiveCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutiveCollection *op = static_cast<vtkExecutiveCollection *>(vp);

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
      tempr = op->vtkExecutiveCollection::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutiveCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutiveCollection *op = static_cast<vtkExecutiveCollection *>(vp);

  vtkExecutiveCollection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkExecutiveCollection::NewInstance();
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
PyvtkExecutiveCollection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkExecutiveCollection *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkExecutiveCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutiveCollection_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutiveCollection *op = static_cast<vtkExecutiveCollection *>(vp);

  vtkExecutive *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkExecutive"))
    {
    if (ap.IsBound())
      {
      op->AddItem(temp0);
      }
    else
      {
      op->vtkExecutiveCollection::AddItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExecutiveCollection_GetNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutiveCollection *op = static_cast<vtkExecutiveCollection *>(vp);

  vtkExecutive *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNextItem();
      }
    else
      {
      tempr = op->vtkExecutiveCollection::GetNextItem();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkExecutiveCollection_Methods[] = {
  {(char*)"GetClassName", PyvtkExecutiveCollection_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExecutiveCollection_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExecutiveCollection_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkExecutiveCollection\nC++: vtkExecutiveCollection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExecutiveCollection_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExecutiveCollection\nC++: vtkExecutiveCollection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddItem", PyvtkExecutiveCollection_AddItem, 1,
   (char*)"V.AddItem(vtkExecutive)\nC++: void AddItem(vtkExecutive *exec)\n\nAdd an executive to the list.\n"},
  {(char*)"GetNextItem", PyvtkExecutiveCollection_GetNextItem, 1,
   (char*)"V.GetNextItem() -> vtkExecutive\nC++: vtkExecutive *GetNextItem()\n\nGet the next executive in the list.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExecutiveCollection_StaticNew()
{
  return vtkExecutiveCollection::New();
}

PyObject *PyVTKClass_vtkExecutiveCollectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExecutiveCollection_StaticNew,
    PyvtkExecutiveCollection_Methods,
    "vtkExecutiveCollection", modulename,
    NULL, NULL,
    PyvtkExecutiveCollection_Doc(),
    PyVTKClass_vtkCollectionNew(modulename));
  return cls;
}

const char **PyvtkExecutiveCollection_Doc()
{
  static const char *docstring[] = {
    "vtkExecutiveCollection - maintain a list of executive objects\n\n",
    "Superclass: vtkCollection\n\n",
    "vtkExecutiveCollection is an object that creates and manipulates\nlists of objects that are (inherited from) vtkExecutives.\n\nSee Also:\n\nvtkExecutive vtkCollection\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExecutiveCollection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExecutiveCollectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExecutiveCollection", o) != 0)
    {
    Py_DECREF(o);
    }

}

