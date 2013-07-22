// python wrapper for vtkGraphInternals
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
#include "vtkGraphInternals.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGraphInternals(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGraphInternals(PyObject *, const char *); }
#endif

static const char **PyvtkVertexAdjacencyList_Doc();

static PyMethodDef PyvtkVertexAdjacencyList_Methods[] = {
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkVertexAdjacencyList_Type
extern PyTypeObject PyvtkVertexAdjacencyList_Type;
#define DECLARED_PyvtkVertexAdjacencyList_Type
#endif


static PyObject *
PyvtkVertexAdjacencyList_vtkVertexAdjacencyList(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVertexAdjacencyList");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkVertexAdjacencyList *op = new vtkVertexAdjacencyList();

    result = PyVTKSpecialObject_New("vtkVertexAdjacencyList", op);
    }

  return result;
}

static PyMethodDef PyvtkVertexAdjacencyList_vtkVertexAdjacencyList_Methods[] = {
  {NULL, NULL, 0, NULL}
};

static PyMethodDef PyvtkVertexAdjacencyList_NewMethod = \
{ (char*)"vtkVertexAdjacencyList", PyvtkVertexAdjacencyList_vtkVertexAdjacencyList, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkVertexAdjacencyList_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkVertexAdjacencyList_vtkVertexAdjacencyList(NULL, args);
}
#endif

static void PyvtkVertexAdjacencyList_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkVertexAdjacencyList *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkVertexAdjacencyList_Hash(PyObject *self)
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

PyTypeObject PyvtkVertexAdjacencyList_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkVertexAdjacencyList", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVertexAdjacencyList_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkVertexAdjacencyList_Hash, // tp_hash
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
  PyvtkVertexAdjacencyList_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkVertexAdjacencyList_New, // tp_new
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

static void *PyvtkVertexAdjacencyList_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkVertexAdjacencyList(*static_cast<const vtkVertexAdjacencyList*>(obj));
    }
  return 0;
}

static PyObject *PyvtkVertexAdjacencyList_TypeNew(const char *)
{
  return PyVTKSpecialType_New(
    &PyvtkVertexAdjacencyList_Type,
    PyvtkVertexAdjacencyList_Methods,
    PyvtkVertexAdjacencyList_vtkVertexAdjacencyList_Methods,
    &PyvtkVertexAdjacencyList_NewMethod,
    PyvtkVertexAdjacencyList_Doc(), &PyvtkVertexAdjacencyList_CCopy);
}

const char **PyvtkVertexAdjacencyList_Doc()
{
  static const char *docstring[] = {
    "vtkGraphInternals - Internal representation of vtkGraph\n\n",
    "This is the internal representation of vtkGraph, used only in rare\ncases where one must modify that representation.\n\n",
    "V.vtkVertexAdjacencyList()\nC++: vtkVertexAdjacencyList()\n",
    NULL
  };

  return docstring;
}

#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGraphInternalsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGraphInternalsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkGraphInternals_Doc();


static PyObject *
PyvtkGraphInternals_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphInternals *op = static_cast<vtkGraphInternals *>(vp);

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
      tempr = op->vtkGraphInternals::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphInternals_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphInternals *op = static_cast<vtkGraphInternals *>(vp);

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
      tempr = op->vtkGraphInternals::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphInternals_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphInternals *op = static_cast<vtkGraphInternals *>(vp);

  vtkGraphInternals *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGraphInternals::NewInstance();
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
PyvtkGraphInternals_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGraphInternals *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGraphInternals::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGraphInternals_Methods[] = {
  {(char*)"GetClassName", PyvtkGraphInternals_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGraphInternals_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGraphInternals_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGraphInternals\nC++: vtkGraphInternals *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGraphInternals_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGraphInternals\nC++: vtkGraphInternals *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGraphInternals_StaticNew()
{
  return vtkGraphInternals::New();
}

PyObject *PyVTKClass_vtkGraphInternalsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGraphInternals_StaticNew,
    PyvtkGraphInternals_Methods,
    "vtkGraphInternals", modulename,
    NULL, NULL,
    PyvtkGraphInternals_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkGraphInternals_Doc()
{
  static const char *docstring[] = {
    "vtkGraphInternals - Internal representation of vtkGraph\n\n",
    "Superclass: vtkObject\n\n",
    "This is the internal representation of vtkGraph, used only in rare\ncases where one must modify that representation.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGraphInternals(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyvtkVertexAdjacencyList_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVertexAdjacencyList", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkGraphInternalsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGraphInternals", o) != 0)
    {
    Py_DECREF(o);
    }

}

