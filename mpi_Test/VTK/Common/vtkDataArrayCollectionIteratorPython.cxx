// python wrapper for vtkDataArrayCollectionIterator
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
#include "vtkDataArrayCollectionIterator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDataArrayCollectionIterator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDataArrayCollectionIterator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDataArrayCollectionIteratorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDataArrayCollectionIteratorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkCollectionIteratorNew
extern "C" { PyObject *PyVTKClass_vtkCollectionIteratorNew(const char *); }
#define DECLARED_PyVTKClass_vtkCollectionIteratorNew
#endif

static const char **PyvtkDataArrayCollectionIterator_Doc();


static PyObject *
PyvtkDataArrayCollectionIterator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArrayCollectionIterator *op = static_cast<vtkDataArrayCollectionIterator *>(vp);

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
      tempr = op->vtkDataArrayCollectionIterator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataArrayCollectionIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArrayCollectionIterator *op = static_cast<vtkDataArrayCollectionIterator *>(vp);

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
      tempr = op->vtkDataArrayCollectionIterator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataArrayCollectionIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArrayCollectionIterator *op = static_cast<vtkDataArrayCollectionIterator *>(vp);

  vtkDataArrayCollectionIterator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDataArrayCollectionIterator::NewInstance();
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
PyvtkDataArrayCollectionIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDataArrayCollectionIterator *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDataArrayCollectionIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataArrayCollectionIterator_SetCollection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCollection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArrayCollectionIterator *op = static_cast<vtkDataArrayCollectionIterator *>(vp);

  vtkCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCollection"))
    {
    if (ap.IsBound())
      {
      op->SetCollection(temp0);
      }
    else
      {
      op->vtkDataArrayCollectionIterator::SetCollection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataArrayCollectionIterator_SetCollection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCollection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArrayCollectionIterator *op = static_cast<vtkDataArrayCollectionIterator *>(vp);

  vtkDataArrayCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArrayCollection"))
    {
    if (ap.IsBound())
      {
      op->SetCollection(temp0);
      }
    else
      {
      op->vtkDataArrayCollectionIterator::SetCollection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkDataArrayCollectionIterator_SetCollection_Methods[] = {
  {NULL, PyvtkDataArrayCollectionIterator_SetCollection_s1, 1,
   (char*)"@O *vtkCollection"},
  {NULL, PyvtkDataArrayCollectionIterator_SetCollection_s2, 1,
   (char*)"@O *vtkDataArrayCollection"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDataArrayCollectionIterator_SetCollection(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataArrayCollectionIterator_SetCollection_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCollection");
  return NULL;
}



static PyObject *
PyvtkDataArrayCollectionIterator_GetDataArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArrayCollectionIterator *op = static_cast<vtkDataArrayCollectionIterator *>(vp);

  vtkDataArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataArray();
      }
    else
      {
      tempr = op->vtkDataArrayCollectionIterator::GetDataArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDataArrayCollectionIterator_Methods[] = {
  {(char*)"GetClassName", PyvtkDataArrayCollectionIterator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataArrayCollectionIterator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataArrayCollectionIterator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDataArrayCollectionIterator\nC++: vtkDataArrayCollectionIterator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDataArrayCollectionIterator_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDataArrayCollectionIterator\nC++: vtkDataArrayCollectionIterator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCollection", PyvtkDataArrayCollectionIterator_SetCollection, 1,
   (char*)"V.SetCollection(vtkCollection)\nC++: virtual void SetCollection(vtkCollection *)\nV.SetCollection(vtkDataArrayCollection)\nC++: void SetCollection(vtkDataArrayCollection *)\n\nSet the collection over which to iterate.\n"},
  {(char*)"GetDataArray", PyvtkDataArrayCollectionIterator_GetDataArray, 1,
   (char*)"V.GetDataArray() -> vtkDataArray\nC++: vtkDataArray *GetDataArray()\n\nGet the item at the current iterator position.  Valid only when\nIsDoneWithTraversal() returns 1.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDataArrayCollectionIterator_StaticNew()
{
  return vtkDataArrayCollectionIterator::New();
}

PyObject *PyVTKClass_vtkDataArrayCollectionIteratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDataArrayCollectionIterator_StaticNew,
    PyvtkDataArrayCollectionIterator_Methods,
    "vtkDataArrayCollectionIterator", modulename,
    NULL, NULL,
    PyvtkDataArrayCollectionIterator_Doc(),
    PyVTKClass_vtkCollectionIteratorNew(modulename));
  return cls;
}

const char **PyvtkDataArrayCollectionIterator_Doc()
{
  static const char *docstring[] = {
    "vtkDataArrayCollectionIterator - iterator through a\nvtkDataArrayCollection.\n\n",
    "Superclass: vtkCollectionIterator\n\n",
    "vtkDataArrayCollectionIterator provides an implementation of\nvtkCollectionIterator which allows the items to be retrieved with the\nproper subclass pointer type for vtkDataArrayCollection.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataArrayCollectionIterator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataArrayCollectionIteratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataArrayCollectionIterator", o) != 0)
    {
    Py_DECREF(o);
    }

}

