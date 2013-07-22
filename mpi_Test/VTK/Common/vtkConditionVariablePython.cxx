// python wrapper for vtkConditionVariable
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
#include "vtkConditionVariable.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkConditionVariable(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkConditionVariable(PyObject *, const char *); }
#endif

static const char **PyvtkSimpleConditionVariable_Doc();


static PyObject *
PyvtkSimpleConditionVariable_Signal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Signal");
  void *vp = ap.GetSelfPointer(self);
  vtkSimpleConditionVariable *op = static_cast<vtkSimpleConditionVariable *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    op->Signal();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleConditionVariable_Broadcast(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Broadcast");
  void *vp = ap.GetSelfPointer(self);
  vtkSimpleConditionVariable *op = static_cast<vtkSimpleConditionVariable *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    op->Broadcast();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSimpleConditionVariable_Methods[] = {
  {(char*)"Signal", PyvtkSimpleConditionVariable_Signal, 1,
   (char*)"V.Signal()\nC++: void Signal()\n\nWake one thread waiting for the condition to change.\n"},
  {(char*)"Broadcast", PyvtkSimpleConditionVariable_Broadcast, 1,
   (char*)"V.Broadcast()\nC++: void Broadcast()\n\nWake all threads waiting for the condition to change.\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkSimpleConditionVariable_Type
extern PyTypeObject PyvtkSimpleConditionVariable_Type;
#define DECLARED_PyvtkSimpleConditionVariable_Type
#endif


static PyObject *
PyvtkSimpleConditionVariable_vtkSimpleConditionVariable(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkSimpleConditionVariable");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkSimpleConditionVariable *op = new vtkSimpleConditionVariable();

    result = PyVTKSpecialObject_New("vtkSimpleConditionVariable", op);
    }

  return result;
}

static PyMethodDef PyvtkSimpleConditionVariable_vtkSimpleConditionVariable_Methods[] = {
  {NULL, NULL, 0, NULL}
};

static PyMethodDef PyvtkSimpleConditionVariable_NewMethod = \
{ (char*)"vtkSimpleConditionVariable", PyvtkSimpleConditionVariable_vtkSimpleConditionVariable, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkSimpleConditionVariable_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkSimpleConditionVariable_vtkSimpleConditionVariable(NULL, args);
}
#endif

static void PyvtkSimpleConditionVariable_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkSimpleConditionVariable *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkSimpleConditionVariable_Hash(PyObject *self)
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

PyTypeObject PyvtkSimpleConditionVariable_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkSimpleConditionVariable", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkSimpleConditionVariable_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkSimpleConditionVariable_Hash, // tp_hash
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
  PyvtkSimpleConditionVariable_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkSimpleConditionVariable_New, // tp_new
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

static void *PyvtkSimpleConditionVariable_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkSimpleConditionVariable(*static_cast<const vtkSimpleConditionVariable*>(obj));
    }
  return 0;
}

static PyObject *PyvtkSimpleConditionVariable_TypeNew(const char *)
{
  return PyVTKSpecialType_New(
    &PyvtkSimpleConditionVariable_Type,
    PyvtkSimpleConditionVariable_Methods,
    PyvtkSimpleConditionVariable_vtkSimpleConditionVariable_Methods,
    &PyvtkSimpleConditionVariable_NewMethod,
    PyvtkSimpleConditionVariable_Doc(), &PyvtkSimpleConditionVariable_CCopy);
}

const char **PyvtkSimpleConditionVariable_Doc()
{
  static const char *docstring[] = {
    "vtkConditionVariable - mutual exclusion locking class\n\n",
    "vtkConditionVariable allows the locking of variables which are\naccessed through different threads.  This header file also defines\nvtkSimpleConditionVariable which is not a subclass of vtkObject.\n\nThe win32 implementation is based on notes provided by Douglas C.\nSchmidt and Irfan Pyarali, Department of Computer Science, Washington\nUniversity, St. Louis, Missouri.\nhttp://www.cs.wustl.edu/~schmidt/wi",
    "n32-cv-1.html\n\n",
    "V.vtkSimpleConditionVariable()\nC++: vtkSimpleConditionVariable()\n",
    NULL
  };

  return docstring;
}

#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkConditionVariableNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkConditionVariableNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkConditionVariable_Doc();


static PyObject *
PyvtkConditionVariable_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConditionVariable *op = static_cast<vtkConditionVariable *>(vp);

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
      tempr = op->vtkConditionVariable::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConditionVariable_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConditionVariable *op = static_cast<vtkConditionVariable *>(vp);

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
      tempr = op->vtkConditionVariable::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConditionVariable_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConditionVariable *op = static_cast<vtkConditionVariable *>(vp);

  vtkConditionVariable *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkConditionVariable::NewInstance();
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
PyvtkConditionVariable_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkConditionVariable *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkConditionVariable::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConditionVariable_Signal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Signal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConditionVariable *op = static_cast<vtkConditionVariable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Signal();
      }
    else
      {
      op->vtkConditionVariable::Signal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConditionVariable_Broadcast(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConditionVariable *op = static_cast<vtkConditionVariable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Broadcast();
      }
    else
      {
      op->vtkConditionVariable::Broadcast();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConditionVariable_Wait(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Wait");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConditionVariable *op = static_cast<vtkConditionVariable *>(vp);

  vtkMutexLock *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMutexLock"))
    {
    if (ap.IsBound())
      {
      tempr = op->Wait(temp0);
      }
    else
      {
      tempr = op->vtkConditionVariable::Wait(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkConditionVariable_Methods[] = {
  {(char*)"GetClassName", PyvtkConditionVariable_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkConditionVariable_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkConditionVariable_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkConditionVariable\nC++: vtkConditionVariable *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkConditionVariable_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkConditionVariable\nC++: vtkConditionVariable *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Signal", PyvtkConditionVariable_Signal, 1,
   (char*)"V.Signal()\nC++: void Signal()\n\nWake one thread waiting for the condition to change.\n"},
  {(char*)"Broadcast", PyvtkConditionVariable_Broadcast, 1,
   (char*)"V.Broadcast()\nC++: void Broadcast()\n\nWake all threads waiting for the condition to change.\n"},
  {(char*)"Wait", PyvtkConditionVariable_Wait, 1,
   (char*)"V.Wait(vtkMutexLock) -> int\nC++: int Wait(vtkMutexLock *mutex)\n\nWait for the condition to change. Upon entry, the mutex must be\nlocked and the lock held by the calling thread. Upon exit, the\nmutex will be locked and held by the calling thread. Between\nentry and exit, the mutex will be unlocked and may be held by\nother threads.\n\n@param mutex The mutex that should be locked on entry and will be\nlocked on exit (but not in between)@retval Normally, this\n    function returns 0. Should a thread be interrupted by a\n    signal, a non-zero value may be returned.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkConditionVariable_StaticNew()
{
  return vtkConditionVariable::New();
}

PyObject *PyVTKClass_vtkConditionVariableNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkConditionVariable_StaticNew,
    PyvtkConditionVariable_Methods,
    "vtkConditionVariable", modulename,
    NULL, NULL,
    PyvtkConditionVariable_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkConditionVariable_Doc()
{
  static const char *docstring[] = {
    "vtkConditionVariable - mutual exclusion locking class\n\n",
    "Superclass: vtkObject\n\n",
    "vtkConditionVariable allows the locking of variables which are\naccessed through different threads.  This header file also defines\nvtkSimpleConditionVariable which is not a subclass of vtkObject.\n\nThe win32 implementation is based on notes provided by Douglas C.\nSchmidt and Irfan Pyarali, Department of Computer Science, Washington\nUniversity, St. Louis, Missouri.\nhttp://www.cs.wustl.edu/~schmidt/wi",
    "n32-cv-1.html\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkConditionVariable(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyvtkSimpleConditionVariable_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSimpleConditionVariable", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkConditionVariableNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkConditionVariable", o) != 0)
    {
    Py_DECREF(o);
    }

}

