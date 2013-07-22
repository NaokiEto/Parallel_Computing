// python wrapper for vtkRenderWindowCollection
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
#include "vtkRenderWindowCollection.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkRenderWindowCollection(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkRenderWindowCollection(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkRenderWindowCollectionNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkRenderWindowCollectionNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkCollectionNew
extern "C" { PyObject *PyVTKClass_vtkCollectionNew(const char *); }
#define DECLARED_PyVTKClass_vtkCollectionNew
#endif

static const char **PyvtkRenderWindowCollection_Doc();


static PyObject *
PyvtkRenderWindowCollection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowCollection *op = static_cast<vtkRenderWindowCollection *>(vp);

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
      tempr = op->vtkRenderWindowCollection::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowCollection *op = static_cast<vtkRenderWindowCollection *>(vp);

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
      tempr = op->vtkRenderWindowCollection::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowCollection *op = static_cast<vtkRenderWindowCollection *>(vp);

  vtkRenderWindowCollection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkRenderWindowCollection::NewInstance();
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
PyvtkRenderWindowCollection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkRenderWindowCollection *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkRenderWindowCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowCollection_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowCollection *op = static_cast<vtkRenderWindowCollection *>(vp);

  vtkRenderWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
    {
    if (ap.IsBound())
      {
      op->AddItem(temp0);
      }
    else
      {
      op->vtkRenderWindowCollection::AddItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowCollection_GetNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowCollection *op = static_cast<vtkRenderWindowCollection *>(vp);

  vtkRenderWindow *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNextItem();
      }
    else
      {
      tempr = op->vtkRenderWindowCollection::GetNextItem();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkRenderWindowCollection_Methods[] = {
  {(char*)"GetClassName", PyvtkRenderWindowCollection_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRenderWindowCollection_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRenderWindowCollection_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkRenderWindowCollection\nC++: vtkRenderWindowCollection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRenderWindowCollection_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRenderWindowCollection\nC++: vtkRenderWindowCollection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddItem", PyvtkRenderWindowCollection_AddItem, 1,
   (char*)"V.AddItem(vtkRenderWindow)\nC++: void AddItem(vtkRenderWindow *a)\n\nAdd a RenderWindow to the list.\n"},
  {(char*)"GetNextItem", PyvtkRenderWindowCollection_GetNextItem, 1,
   (char*)"V.GetNextItem() -> vtkRenderWindow\nC++: vtkRenderWindow *GetNextItem()\n\nGet the next RenderWindow in the list. Return NULL when at the\nend of the list.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRenderWindowCollection_StaticNew()
{
  return vtkRenderWindowCollection::New();
}

PyObject *PyVTKClass_vtkRenderWindowCollectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRenderWindowCollection_StaticNew,
    PyvtkRenderWindowCollection_Methods,
    "vtkRenderWindowCollection", modulename,
    NULL, NULL,
    PyvtkRenderWindowCollection_Doc(),
    PyVTKClass_vtkCollectionNew(modulename));
  return cls;
}

const char **PyvtkRenderWindowCollection_Doc()
{
  static const char *docstring[] = {
    "vtkRenderWindowCollection - a list of RenderWindows\n\n",
    "Superclass: vtkCollection\n\n",
    "vtkRenderWindowCollection represents and provides methods to\nmanipulate a list of RenderWindows. The list is unsorted and\nduplicate entries are not prevented.\n\nSee Also:\n\nvtkRenderWindow vtkCollection\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRenderWindowCollection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRenderWindowCollectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRenderWindowCollection", o) != 0)
    {
    Py_DECREF(o);
    }

}

