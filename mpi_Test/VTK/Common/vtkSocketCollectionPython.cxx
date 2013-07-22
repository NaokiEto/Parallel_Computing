// python wrapper for vtkSocketCollection
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
#include "vtkSocketCollection.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSocketCollection(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSocketCollection(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSocketCollectionNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSocketCollectionNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkCollectionNew
extern "C" { PyObject *PyVTKClass_vtkCollectionNew(const char *); }
#define DECLARED_PyVTKClass_vtkCollectionNew
#endif

static const char **PyvtkSocketCollection_Doc();


static PyObject *
PyvtkSocketCollection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCollection *op = static_cast<vtkSocketCollection *>(vp);

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
      tempr = op->vtkSocketCollection::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCollection *op = static_cast<vtkSocketCollection *>(vp);

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
      tempr = op->vtkSocketCollection::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCollection *op = static_cast<vtkSocketCollection *>(vp);

  vtkSocketCollection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSocketCollection::NewInstance();
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
PyvtkSocketCollection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSocketCollection *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSocketCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCollection_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCollection *op = static_cast<vtkSocketCollection *>(vp);

  vtkSocket *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSocket"))
    {
    if (ap.IsBound())
      {
      op->AddItem(temp0);
      }
    else
      {
      op->vtkSocketCollection::AddItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCollection_SelectSockets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectSockets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCollection *op = static_cast<vtkSocketCollection *>(vp);

  unsigned long temp0 = 0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    if (ap.IsBound())
      {
      tempr = op->SelectSockets(temp0);
      }
    else
      {
      tempr = op->vtkSocketCollection::SelectSockets(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCollection_GetLastSelectedSocket(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastSelectedSocket");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCollection *op = static_cast<vtkSocketCollection *>(vp);

  vtkSocket *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLastSelectedSocket();
      }
    else
      {
      tempr = op->vtkSocketCollection::GetLastSelectedSocket();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCollection_ReplaceItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCollection *op = static_cast<vtkSocketCollection *>(vp);

  int temp0;
  vtkObject *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkObject"))
    {
    if (ap.IsBound())
      {
      op->ReplaceItem(temp0, temp1);
      }
    else
      {
      op->vtkSocketCollection::ReplaceItem(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCollection_RemoveItem_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCollection *op = static_cast<vtkSocketCollection *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveItem(temp0);
      }
    else
      {
      op->vtkSocketCollection::RemoveItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSocketCollection_RemoveItem_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCollection *op = static_cast<vtkSocketCollection *>(vp);

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    if (ap.IsBound())
      {
      op->RemoveItem(temp0);
      }
    else
      {
      op->vtkSocketCollection::RemoveItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSocketCollection_RemoveItem_Methods[] = {
  {NULL, PyvtkSocketCollection_RemoveItem_s1, 1,
   (char*)"@i"},
  {NULL, PyvtkSocketCollection_RemoveItem_s2, 1,
   (char*)"@O *vtkObject"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSocketCollection_RemoveItem(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSocketCollection_RemoveItem_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RemoveItem");
  return NULL;
}



static PyObject *
PyvtkSocketCollection_RemoveAllItems(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllItems");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCollection *op = static_cast<vtkSocketCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllItems();
      }
    else
      {
      op->vtkSocketCollection::RemoveAllItems();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSocketCollection_Methods[] = {
  {(char*)"GetClassName", PyvtkSocketCollection_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSocketCollection_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSocketCollection_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSocketCollection\nC++: vtkSocketCollection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSocketCollection_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSocketCollection\nC++: vtkSocketCollection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddItem", PyvtkSocketCollection_AddItem, 1,
   (char*)"V.AddItem(vtkSocket)\nC++: void AddItem(vtkSocket *soc)\n\n"},
  {(char*)"SelectSockets", PyvtkSocketCollection_SelectSockets, 1,
   (char*)"V.SelectSockets(int) -> int\nC++: int SelectSockets(unsigned long msec=0)\n\nSelect all Connected sockets in the collection. If msec is\nspecified, it timesout after msec milliseconds on inactivity.\nReturns 0 on timeout, -1 on error; 1 is a socket was selected.\nThe selected socket can be retrieved by GetLastSelectedSocket().\n"},
  {(char*)"GetLastSelectedSocket", PyvtkSocketCollection_GetLastSelectedSocket, 1,
   (char*)"V.GetLastSelectedSocket() -> vtkSocket\nC++: vtkSocket *GetLastSelectedSocket()\n\nReturns the socket selected during the last SelectSockets(), if\nany. NULL otherwise.\n"},
  {(char*)"ReplaceItem", PyvtkSocketCollection_ReplaceItem, 1,
   (char*)"V.ReplaceItem(int, vtkObject)\nC++: void ReplaceItem(int i, vtkObject *)\n\nOverridden to unset SelectedSocket.\n"},
  {(char*)"RemoveItem", PyvtkSocketCollection_RemoveItem, 1,
   (char*)"V.RemoveItem(int)\nC++: void RemoveItem(int i)\nV.RemoveItem(vtkObject)\nC++: void RemoveItem(vtkObject *)\n\nOverridden to unset SelectedSocket.\n"},
  {(char*)"RemoveAllItems", PyvtkSocketCollection_RemoveAllItems, 1,
   (char*)"V.RemoveAllItems()\nC++: void RemoveAllItems()\n\nOverridden to unset SelectedSocket.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSocketCollection_StaticNew()
{
  return vtkSocketCollection::New();
}

PyObject *PyVTKClass_vtkSocketCollectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSocketCollection_StaticNew,
    PyvtkSocketCollection_Methods,
    "vtkSocketCollection", modulename,
    NULL, NULL,
    PyvtkSocketCollection_Doc(),
    PyVTKClass_vtkCollectionNew(modulename));
  return cls;
}

const char **PyvtkSocketCollection_Doc()
{
  static const char *docstring[] = {
    "vtkSocketCollection -  a collection for sockets.\n\n",
    "Superclass: vtkCollection\n\n",
    "Apart from being vtkCollection subclass for sockets, this class\nprovides means to wait for activity on all the sockets in the\ncollection simultaneously.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSocketCollection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSocketCollectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSocketCollection", o) != 0)
    {
    Py_DECREF(o);
    }

}

