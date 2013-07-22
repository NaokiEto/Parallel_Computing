// python wrapper for vtkInstantiator
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
#include "vtkInstantiator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkInstantiator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkInstantiator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkInstantiatorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkInstantiatorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkInstantiator_Doc();


static PyObject *
PyvtkInstantiator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInstantiator *op = static_cast<vtkInstantiator *>(vp);

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
      tempr = op->vtkInstantiator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInstantiator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInstantiator *op = static_cast<vtkInstantiator *>(vp);

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
      tempr = op->vtkInstantiator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInstantiator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInstantiator *op = static_cast<vtkInstantiator *>(vp);

  vtkInstantiator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkInstantiator::NewInstance();
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
PyvtkInstantiator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkInstantiator *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkInstantiator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInstantiator_CreateInstance(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateInstance");

  char *temp0 = NULL;
  vtkObject *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkInstantiator::CreateInstance(temp0);

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

static PyMethodDef PyvtkInstantiator_Methods[] = {
  {(char*)"GetClassName", PyvtkInstantiator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInstantiator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInstantiator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkInstantiator\nC++: vtkInstantiator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkInstantiator_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkInstantiator\nC++: vtkInstantiator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CreateInstance", PyvtkInstantiator_CreateInstance, 1,
   (char*)"V.CreateInstance(string) -> vtkObject\nC++: static vtkObject *CreateInstance(const char *className)\n\nCreate an instance of the class whose name is given.  If creation\nfails, a NULL pointer is returned.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkInstantiator_StaticNew()
{
  return vtkInstantiator::New();
}

PyObject *PyVTKClass_vtkInstantiatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkInstantiator_StaticNew,
    PyvtkInstantiator_Methods,
    "vtkInstantiator", modulename,
    NULL, NULL,
    PyvtkInstantiator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkInstantiator_Doc()
{
  static const char *docstring[] = {
    "vtkInstantiator - create an instance of any VTK class from its name.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkInstantiator provides an interface to create an instance of any\nVTK class from its name.  Instances are created through registered\npointers to functions returning the objects.  New classes can also be\nregistered with the creator.  VTK libraries automatically register\ntheir classes with the creator when they are loaded.  Instances are\ncreated using the static New() method, so the normal vtkObjec",
    "tFactory\nmechanism is still invoked.\n\nWhen using this class from language wrappers (Tcl, Python, or Java),\nthe vtkInstantiator should be able to create any class from any kit\nthat has been loaded.\n\nIn C++ code, one should include the header for each kit from which\none wishes to create instances through vtkInstantiator.  This is\nnecessary to ensure proper linking when building static libraries. Be\n",
    "careful, though, because including each kit's header means every\nclass from that kit will be linked into your executable whether or\nnot the class is used.  The headers are:\n\n\n  vtkCommon          - vtkCommonInstantiator.h\n  vtkFiltering       - vtkFilteringInstantiator.h\n  vtkIO              - vtkIOInstantiator.h\n  vtkImaging         - vtkImagingInstantiator.h\n  vtkGraphics        - vtkGraphicsIns",
    "tantiator.h\n  vtkRendering       - vtkRenderingInstantiator.h\n  vtkVolumeRendering - vtkVolumeRenderingInstantiator.h\n  vtkHybrid          - vtkHybridInstantiator.h\n  vtkParallel        - vtkParallelInstantiator.h\n\nThe VTK_MAKE_INSTANTIATOR() command in CMake is used to automatically\ngenerate the creator registration for each VTK library.  It can also\nbe used to create registration code for VTK-st",
    "yle user libraries that\nare linked to vtkCommon.  After using this command to register\nclasses from a new library, the generated header must be included.\n\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkInstantiatorInitialize_Doc();

static PyMethodDef PyvtkInstantiatorInitialize_Methods[] = {
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkInstantiatorInitialize_Type
extern PyTypeObject PyvtkInstantiatorInitialize_Type;
#define DECLARED_PyvtkInstantiatorInitialize_Type
#endif


static PyObject *
PyvtkInstantiatorInitialize_vtkInstantiatorInitialize(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkInstantiatorInitialize");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInstantiatorInitialize *op = new vtkInstantiatorInitialize();

    result = PyVTKSpecialObject_New("vtkInstantiatorInitialize", op);
    }

  return result;
}

static PyMethodDef PyvtkInstantiatorInitialize_vtkInstantiatorInitialize_Methods[] = {
  {NULL, NULL, 0, NULL}
};

static PyMethodDef PyvtkInstantiatorInitialize_NewMethod = \
{ (char*)"vtkInstantiatorInitialize", PyvtkInstantiatorInitialize_vtkInstantiatorInitialize, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkInstantiatorInitialize_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkInstantiatorInitialize_vtkInstantiatorInitialize(NULL, args);
}
#endif

static void PyvtkInstantiatorInitialize_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkInstantiatorInitialize *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkInstantiatorInitialize_Hash(PyObject *self)
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

PyTypeObject PyvtkInstantiatorInitialize_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkInstantiatorInitialize", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkInstantiatorInitialize_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkInstantiatorInitialize_Hash, // tp_hash
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
  PyvtkInstantiatorInitialize_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkInstantiatorInitialize_New, // tp_new
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

static void *PyvtkInstantiatorInitialize_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkInstantiatorInitialize(*static_cast<const vtkInstantiatorInitialize*>(obj));
    }
  return 0;
}

static PyObject *PyvtkInstantiatorInitialize_TypeNew(const char *)
{
  return PyVTKSpecialType_New(
    &PyvtkInstantiatorInitialize_Type,
    PyvtkInstantiatorInitialize_Methods,
    PyvtkInstantiatorInitialize_vtkInstantiatorInitialize_Methods,
    &PyvtkInstantiatorInitialize_NewMethod,
    PyvtkInstantiatorInitialize_Doc(), &PyvtkInstantiatorInitialize_CCopy);
}

const char **PyvtkInstantiatorInitialize_Doc()
{
  static const char *docstring[] = {
    "vtkInstantiator - create an instance of any VTK class from its name.\n\n",
    "vtkInstantiator provides an interface to create an instance of any\nVTK class from its name.  Instances are created through registered\npointers to functions returning the objects.  New classes can also be\nregistered with the creator.  VTK libraries automatically register\ntheir classes with the creator when they are loaded.  Instances are\ncreated using the static New() method, so the normal vtkObjec",
    "tFactory\nmechanism is still invoked.\n\nWhen using this class from language wrappers (Tcl, Python, or Java),\nthe vtkInstantiator should be able to create any class from any kit\nthat has been loaded.\n\nIn C++ code, one should include the header for each kit from which\none wishes to create instances through vtkInstantiator.  This is\nnecessary to ensure proper linking when building static libraries. Be\n",
    "careful, though, because including each kit's header means every\nclass from that kit will be linked into your executable whether or\nnot the class is used.  The headers are:\n\n\n  vtkCommon          - vtkCommonInstantiator.h\n  vtkFiltering       - vtkFilteringInstantiator.h\n  vtkIO              - vtkIOInstantiator.h\n  vtkImaging         - vtkImagingInstantiator.h\n  vtkGraphics        - vtkGraphicsIns",
    "tantiator.h\n  vtkRendering       - vtkRenderingInstantiator.h\n  vtkVolumeRendering - vtkVolumeRenderingInstantiator.h\n  vtkHybrid          - vtkHybridInstantiator.h\n  vtkParallel        - vtkParallelInstantiator.h\n\nThe VTK_MAKE_INSTANTIATOR() command in CMake is used to automatically\ngenerate the creator registration for each VTK library.  It can also\nbe used to create registration code for VTK-st",
    "yle user libraries that\nare linked to vtkCommon.  After using this command to register\nclasses from a new library, the generated header must be included.\n\n",
    "V.vtkInstantiatorInitialize()\nC++: vtkInstantiatorInitialize()\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInstantiator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInstantiatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInstantiator", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkInstantiatorInitialize_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInstantiatorInitialize", o) != 0)
    {
    Py_DECREF(o);
    }

}

