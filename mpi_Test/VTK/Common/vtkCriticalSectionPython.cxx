// python wrapper for vtkCriticalSection
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
#include "vtkCriticalSection.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCriticalSection(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCriticalSection(PyObject *, const char *); }
#endif

static const char **PyvtkSimpleCriticalSection_Doc();


static PyObject *
PyvtkSimpleCriticalSection_Init(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Init");
  void *vp = ap.GetSelfPointer(self);
  vtkSimpleCriticalSection *op = static_cast<vtkSimpleCriticalSection *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    op->Init();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleCriticalSection_Lock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Lock");
  void *vp = ap.GetSelfPointer(self);
  vtkSimpleCriticalSection *op = static_cast<vtkSimpleCriticalSection *>(vp);

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
PyvtkSimpleCriticalSection_Unlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Unlock");
  void *vp = ap.GetSelfPointer(self);
  vtkSimpleCriticalSection *op = static_cast<vtkSimpleCriticalSection *>(vp);

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

static PyMethodDef PyvtkSimpleCriticalSection_Methods[] = {
  {(char*)"Init", PyvtkSimpleCriticalSection_Init, 1,
   (char*)"V.Init()\nC++: void Init()\n\n"},
  {(char*)"Lock", PyvtkSimpleCriticalSection_Lock, 1,
   (char*)"V.Lock()\nC++: void Lock()\n\nLock the vtkCriticalSection\n"},
  {(char*)"Unlock", PyvtkSimpleCriticalSection_Unlock, 1,
   (char*)"V.Unlock()\nC++: void Unlock()\n\nUnlock the vtkCriticalSection\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkSimpleCriticalSection_Type
extern PyTypeObject PyvtkSimpleCriticalSection_Type;
#define DECLARED_PyvtkSimpleCriticalSection_Type
#endif


static PyObject *
PyvtkSimpleCriticalSection_vtkSimpleCriticalSection_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkSimpleCriticalSection");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkSimpleCriticalSection *op = new vtkSimpleCriticalSection();

    result = PyVTKSpecialObject_New("vtkSimpleCriticalSection", op);
    }

  return result;
}

static PyObject *
PyvtkSimpleCriticalSection_vtkSimpleCriticalSection_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkSimpleCriticalSection");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSimpleCriticalSection *op = new vtkSimpleCriticalSection(temp0);

    result = PyVTKSpecialObject_New("vtkSimpleCriticalSection", op);
    }

  return result;
}

static PyMethodDef PyvtkSimpleCriticalSection_vtkSimpleCriticalSection_Methods[] = {
  {NULL, PyvtkSimpleCriticalSection_vtkSimpleCriticalSection_s2, 1,
   (char*)"i"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSimpleCriticalSection_vtkSimpleCriticalSection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkSimpleCriticalSection_vtkSimpleCriticalSection_s1(self, args);
    case 1:
      return PyvtkSimpleCriticalSection_vtkSimpleCriticalSection_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkSimpleCriticalSection");
  return NULL;
}


static PyMethodDef PyvtkSimpleCriticalSection_NewMethod = \
{ (char*)"vtkSimpleCriticalSection", PyvtkSimpleCriticalSection_vtkSimpleCriticalSection, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkSimpleCriticalSection_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkSimpleCriticalSection_vtkSimpleCriticalSection(NULL, args);
}
#endif

static void PyvtkSimpleCriticalSection_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkSimpleCriticalSection *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkSimpleCriticalSection_Hash(PyObject *self)
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

PyTypeObject PyvtkSimpleCriticalSection_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkSimpleCriticalSection", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkSimpleCriticalSection_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkSimpleCriticalSection_Hash, // tp_hash
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
  PyvtkSimpleCriticalSection_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkSimpleCriticalSection_New, // tp_new
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

static void *PyvtkSimpleCriticalSection_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkSimpleCriticalSection(*static_cast<const vtkSimpleCriticalSection*>(obj));
    }
  return 0;
}

static PyObject *PyvtkSimpleCriticalSection_TypeNew(const char *)
{
  return PyVTKSpecialType_New(
    &PyvtkSimpleCriticalSection_Type,
    PyvtkSimpleCriticalSection_Methods,
    PyvtkSimpleCriticalSection_vtkSimpleCriticalSection_Methods,
    &PyvtkSimpleCriticalSection_NewMethod,
    PyvtkSimpleCriticalSection_Doc(), &PyvtkSimpleCriticalSection_CCopy);
}

const char **PyvtkSimpleCriticalSection_Doc()
{
  static const char *docstring[] = {
    "vtkCriticalSection - Critical section locking class\n\n",
    "vtkCriticalSection allows the locking of variables which are accessed\nthrough different threads.  This header file also defines\nvtkSimpleCriticalSection which is not a subclass of vtkObject. The\nAPI is identical to that of vtkMutexLock, and the behavior is\nidentical as well, except on Windows 9x/NT platforms. The only\ndifference on these platforms is that vtkMutexLock is more flexible,\nin that it ",
    "works across processes as well as across threads, but also\ncosts more, in that it evokes a 600-cycle x86 ring transition. The\nvtkCriticalSection provides a higher-performance equivalent (on\nWindows) but won't work across processes. Since it is unclear how, in\nvtk, an object at the vtk level can be shared across processes in the\nfirst place, one should use vtkCriticalSection unless one has a very\ng",
    "ood reason to use vtkMutexLock. If higher-performance equivalents\nfor non-Windows platforms (Irix, SunOS, etc) are discovered, they\nshould replace the implementations in this class\n\n",
    "V.vtkSimpleCriticalSection()\nC++: vtkSimpleCriticalSection()\nV.vtkSimpleCriticalSection(int)\nC++: vtkSimpleCriticalSection(int isLocked)\n",
    NULL
  };

  return docstring;
}

#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCriticalSectionNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCriticalSectionNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkCriticalSection_Doc();


static PyObject *
PyvtkCriticalSection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCriticalSection *op = static_cast<vtkCriticalSection *>(vp);

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
      tempr = op->vtkCriticalSection::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCriticalSection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCriticalSection *op = static_cast<vtkCriticalSection *>(vp);

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
      tempr = op->vtkCriticalSection::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCriticalSection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCriticalSection *op = static_cast<vtkCriticalSection *>(vp);

  vtkCriticalSection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCriticalSection::NewInstance();
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
PyvtkCriticalSection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCriticalSection *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCriticalSection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCriticalSection_Lock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Lock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCriticalSection *op = static_cast<vtkCriticalSection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Lock();
      }
    else
      {
      op->vtkCriticalSection::Lock();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCriticalSection_Unlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Unlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCriticalSection *op = static_cast<vtkCriticalSection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Unlock();
      }
    else
      {
      op->vtkCriticalSection::Unlock();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCriticalSection_Methods[] = {
  {(char*)"GetClassName", PyvtkCriticalSection_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCriticalSection_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCriticalSection_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCriticalSection\nC++: vtkCriticalSection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCriticalSection_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCriticalSection\nC++: vtkCriticalSection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Lock", PyvtkCriticalSection_Lock, 1,
   (char*)"V.Lock()\nC++: void Lock()\n\nLock the vtkCriticalSection\n"},
  {(char*)"Unlock", PyvtkCriticalSection_Unlock, 1,
   (char*)"V.Unlock()\nC++: void Unlock()\n\nUnlock the vtkCriticalSection\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCriticalSection_StaticNew()
{
  return vtkCriticalSection::New();
}

PyObject *PyVTKClass_vtkCriticalSectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCriticalSection_StaticNew,
    PyvtkCriticalSection_Methods,
    "vtkCriticalSection", modulename,
    NULL, NULL,
    PyvtkCriticalSection_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkCriticalSection_Doc()
{
  static const char *docstring[] = {
    "vtkCriticalSection - Critical section locking class\n\n",
    "Superclass: vtkObject\n\n",
    "vtkCriticalSection allows the locking of variables which are accessed\nthrough different threads.  This header file also defines\nvtkSimpleCriticalSection which is not a subclass of vtkObject. The\nAPI is identical to that of vtkMutexLock, and the behavior is\nidentical as well, except on Windows 9x/NT platforms. The only\ndifference on these platforms is that vtkMutexLock is more flexible,\nin that it ",
    "works across processes as well as across threads, but also\ncosts more, in that it evokes a 600-cycle x86 ring transition. The\nvtkCriticalSection provides a higher-performance equivalent (on\nWindows) but won't work across processes. Since it is unclear how, in\nvtk, an object at the vtk level can be shared across processes in the\nfirst place, one should use vtkCriticalSection unless one has a very\ng",
    "ood reason to use vtkMutexLock. If higher-performance equivalents\nfor non-Windows platforms (Irix, SunOS, etc) are discovered, they\nshould replace the implementations in this class\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCriticalSection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyvtkSimpleCriticalSection_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSimpleCriticalSection", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkCriticalSectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCriticalSection", o) != 0)
    {
    Py_DECREF(o);
    }

}

