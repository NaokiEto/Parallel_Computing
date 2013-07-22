// python wrapper for vtkMutexLock
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
#include "vtkMutexLock.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMutexLock(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMutexLock(PyObject *, const char *); }
#endif

static const char **PyvtkSimpleMutexLock_Doc();


static PyObject *
PyvtkSimpleMutexLock_Lock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Lock");
  void *vp = ap.GetSelfPointer(self);
  vtkSimpleMutexLock *op = static_cast<vtkSimpleMutexLock *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    op->Lock();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleMutexLock_Unlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Unlock");
  void *vp = ap.GetSelfPointer(self);
  vtkSimpleMutexLock *op = static_cast<vtkSimpleMutexLock *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    op->Unlock();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSimpleMutexLock_Methods[] = {
  {(char*)"Lock", PyvtkSimpleMutexLock_Lock, 1,
   (char*)"V.Lock()\nC++: void Lock(void)\n\nLock the vtkMutexLock\n"},
  {(char*)"Unlock", PyvtkSimpleMutexLock_Unlock, 1,
   (char*)"V.Unlock()\nC++: void Unlock(void)\n\nUnlock the vtkMutexLock\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkSimpleMutexLock_Type
extern PyTypeObject PyvtkSimpleMutexLock_Type;
#define DECLARED_PyvtkSimpleMutexLock_Type
#endif


static PyObject *
PyvtkSimpleMutexLock_vtkSimpleMutexLock(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkSimpleMutexLock");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkSimpleMutexLock *op = new vtkSimpleMutexLock();

    result = PyVTKSpecialObject_New("vtkSimpleMutexLock", op);
    }

  return result;
}

static PyMethodDef PyvtkSimpleMutexLock_vtkSimpleMutexLock_Methods[] = {
  {NULL, NULL, 0, NULL}
};

static PyMethodDef PyvtkSimpleMutexLock_NewMethod = \
{ (char*)"vtkSimpleMutexLock", PyvtkSimpleMutexLock_vtkSimpleMutexLock, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkSimpleMutexLock_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkSimpleMutexLock_vtkSimpleMutexLock(NULL, args);
}
#endif

static void PyvtkSimpleMutexLock_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkSimpleMutexLock *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkSimpleMutexLock_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", self->ob_type->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

PyTypeObject PyvtkSimpleMutexLock_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkSimpleMutexLock", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkSimpleMutexLock_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkSimpleMutexLock_Hash, // tp_hash
  0, // tp_call
  0, // tp_str
#if PY_VERSION_HEX >= 0x02020000
  PyObject_GenericGetAttr, // tp_getattro
#else
  PyVTKSpecialObject_GetAttr, // tp_getattro
#endif
  0, // tp_setattro
  0, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  0, // tp_doc
  0, // tp_traverse
  0, // tp_clear
  0, // tp_richcompare
  0, // tp_weaklistoffset
#if PY_VERSION_HEX >= 0x02020000
  0, // tp_iter
  0, // tp_iternext
  PyvtkSimpleMutexLock_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkSimpleMutexLock_New, // tp_new
#if PY_VERSION_HEX >= 0x02030000
  PyObject_Del, // tp_free
#else
  _PyObject_Del, // tp_free
#endif
  0, // tp_is_gc
  0, // tp_bases
  0, // tp_mro
  0, // tp_cache
  0, // tp_subclasses
  0, // tp_weaklist
#endif
  VTK_WRAP_PYTHON_SUPRESS_UNINITIALIZED
};

static void *PyvtkSimpleMutexLock_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkSimpleMutexLock(*static_cast<const vtkSimpleMutexLock*>(obj));
    }
  return 0;
}

static PyObject *PyvtkSimpleMutexLock_TypeNew(const char *)
{
  return PyVTKSpecialType_New(
    &PyvtkSimpleMutexLock_Type,
    PyvtkSimpleMutexLock_Methods,
    PyvtkSimpleMutexLock_vtkSimpleMutexLock_Methods,
    &PyvtkSimpleMutexLock_NewMethod,
    PyvtkSimpleMutexLock_Doc(), &PyvtkSimpleMutexLock_CCopy);
}

const char **PyvtkSimpleMutexLock_Doc()
{
  static const char *docstring[] = {
    "vtkMutexLock - mutual exclusion locking class\n\n",
    "vtkMutexLock allows the locking of variables which are accessed\nthrough different threads.  This header file also defines\nvtkSimpleMutexLock which is not a subclass of vtkObject.\n\n",
    "V.vtkSimpleMutexLock()\nC++: vtkSimpleMutexLock()\n",
    NULL
  };

  return docstring;
}

#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMutexLockNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMutexLockNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkMutexLock_Doc();


static PyObject *
PyvtkMutexLock_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutexLock *op = static_cast<vtkMutexLock *>(vp);

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
      tempr = op->vtkMutexLock::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMutexLock_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutexLock *op = static_cast<vtkMutexLock *>(vp);

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
      tempr = op->vtkMutexLock::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMutexLock_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutexLock *op = static_cast<vtkMutexLock *>(vp);

  vtkMutexLock *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMutexLock::NewInstance();
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
PyvtkMutexLock_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkMutexLock *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkMutexLock::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMutexLock_Lock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Lock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutexLock *op = static_cast<vtkMutexLock *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Lock();
      }
    else
      {
      op->vtkMutexLock::Lock();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMutexLock_Unlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Unlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutexLock *op = static_cast<vtkMutexLock *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Unlock();
      }
    else
      {
      op->vtkMutexLock::Unlock();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMutexLock_Methods[] = {
  {(char*)"GetClassName", PyvtkMutexLock_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMutexLock_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMutexLock_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMutexLock\nC++: vtkMutexLock *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMutexLock_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMutexLock\nC++: vtkMutexLock *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Lock", PyvtkMutexLock_Lock, 1,
   (char*)"V.Lock()\nC++: void Lock(void)\n\nLock the vtkMutexLock\n"},
  {(char*)"Unlock", PyvtkMutexLock_Unlock, 1,
   (char*)"V.Unlock()\nC++: void Unlock(void)\n\nUnlock the vtkMutexLock\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMutexLock_StaticNew()
{
  return vtkMutexLock::New();
}

PyObject *PyVTKClass_vtkMutexLockNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMutexLock_StaticNew,
    PyvtkMutexLock_Methods,
    "vtkMutexLock", modulename,
    NULL, NULL,
    PyvtkMutexLock_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkMutexLock_Doc()
{
  static const char *docstring[] = {
    "vtkMutexLock - mutual exclusion locking class\n\n",
    "Superclass: vtkObject\n\n",
    "vtkMutexLock allows the locking of variables which are accessed\nthrough different threads.  This header file also defines\nvtkSimpleMutexLock which is not a subclass of vtkObject.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMutexLock(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyvtkSimpleMutexLock_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSimpleMutexLock", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkMutexLockNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMutexLock", o) != 0)
    {
    Py_DECREF(o);
    }

}

