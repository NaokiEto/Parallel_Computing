// python wrapper for vtkVector
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
#include "vtkVector.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkVector(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkVector(PyObject *, const char *); }
#endif

static const char **PyvtkVector_IdLi3EE_Doc();


static PyObject *
PyvtkVector_IdLi3EE_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSize");
  void *vp = ap.GetSelfPointer(self);
  vtkVector<double, 3> *op = static_cast<vtkVector<double, 3> *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->GetSize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkVector_IdLi3EE_Methods[] = {
  {(char*)"GetSize", PyvtkVector_IdLi3EE_GetSize, 1,
   (char*)"V.GetSize() -> int\nC++: int GetSize()\n\nGet the size of the vtkVector.\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkVector_IdLi3EE_Type
extern PyTypeObject PyvtkVector_IdLi3EE_Type;
#define DECLARED_PyvtkVector_IdLi3EE_Type
#endif


static PyObject *
PyvtkVector_IdLi3EE_vtkVector_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkVector<double, 3> *op = new vtkVector<double, 3>();

    result = PyVTKSpecialObject_New("vtkVector_IdLi3EE", op);
    }

  return result;
}

static PyObject *
PyvtkVector_IdLi3EE_vtkVector_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkVector<double, 3> *op = new vtkVector<double, 3>(temp0);

    result = PyVTKSpecialObject_New("vtkVector_IdLi3EE", op);
    }

  return result;
}

static PyObject *
PyvtkVector_IdLi3EE_vtkVector_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  vtkVector<double, 3> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector_IdLi3EE"))
    {
    vtkVector<double, 3> *op = new vtkVector<double, 3>(*temp0);

    result = PyVTKSpecialObject_New("vtkVector_IdLi3EE", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector_IdLi3EE_vtkVector_Methods[] = {
  {NULL, PyvtkVector_IdLi3EE_vtkVector_s2, 1,
   (char*)"-O *d"},
  {NULL, PyvtkVector_IdLi3EE_vtkVector_s3, 1,
   (char*)"O &vtkVector_IdLi3EE"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkVector_IdLi3EE_vtkVector(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVector_IdLi3EE_vtkVector_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkVector_IdLi3EE_vtkVector_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkVector");
  return NULL;
}


static PyMethodDef PyvtkVector_IdLi3EE_NewMethod = \
{ (char*)"vtkVector_IdLi3EE", PyvtkVector_IdLi3EE_vtkVector, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkVector_IdLi3EE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkVector_IdLi3EE_vtkVector(NULL, args);
}
#endif

static void PyvtkVector_IdLi3EE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkVector<double, 3> *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

Py_ssize_t PyvtkVector_IdLi3EE_SequenceSize(PyObject *self)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkVector<double, 3> *op = static_cast<vtkVector<double, 3> *>(vp);

  return static_cast<Py_ssize_t>(op->GetSize());
}

PyObject *PyvtkVector_IdLi3EE_SequenceItem(PyObject *self, Py_ssize_t i)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkVector<double, 3> *op = static_cast<vtkVector<double, 3> *>(vp);

  int temp0;
  const double *tempr;
  PyObject *result = NULL;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
    {
    PyErr_SetString(PyExc_IndexError, "index out of range");
    }
  else
    {
    tempr = &(*op)[temp0];

    if (PyErr_Occurred() == NULL)
      {
      result = vtkPythonArgs::BuildValue(*tempr);
      }
    }

  return result;
}

int PyvtkVector_IdLi3EE_SequenceSetItem(
  PyObject *self, Py_ssize_t i, PyObject *arg1)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkVector<double, 3> *op = static_cast<vtkVector<double, 3> *>(vp);

  int temp0;
  double temp1;
  int result = -1;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
    {
    PyErr_SetString(PyExc_IndexError, "index out of range");
    }
  else if (vtkPythonArgs::GetValue(arg1, temp1))
    {
    (*op)[temp0] = temp1;

    if (PyErr_Occurred() == NULL)
      {
      result = 0;
      }
    }

  return result;
}

static PySequenceMethods PyvtkVector_IdLi3EE_AsSequence = {
  PyvtkVector_IdLi3EE_SequenceSize, // sq_length
  0, // sq_concat
  0, // sq_repeat
  PyvtkVector_IdLi3EE_SequenceItem, // sq_item
  0, // sq_slice
  PyvtkVector_IdLi3EE_SequenceSetItem, // sq_ass_item
  0, // sq_ass_slice
  0, // sq_contains
#if PY_VERSION_HEX >= 0x2000000
  0, // sq_inplace_concat
  0, // sq_inplace_repeat
#endif
};

static long PyvtkVector_IdLi3EE_Hash(PyObject *self)
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

PyTypeObject PyvtkVector_IdLi3EE_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkVector_IdLi3EE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVector_IdLi3EE_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  &PyvtkVector_IdLi3EE_AsSequence, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkVector_IdLi3EE_Hash, // tp_hash
  0, // tp_call
  PyVTKSpecialObject_SequenceString, // tp_str
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
  PyvtkVector_IdLi3EE_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkVector_IdLi3EE_New, // tp_new
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

static void *PyvtkVector_IdLi3EE_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkVector<double, 3>(*static_cast<const vtkVector<double, 3>*>(obj));
    }
  return 0;
}

static PyObject *PyvtkVector_IdLi3EE_TypeNew(const char *)
{
  return PyVTKSpecialType_New(
    &PyvtkVector_IdLi3EE_Type,
    PyvtkVector_IdLi3EE_Methods,
    PyvtkVector_IdLi3EE_vtkVector_Methods,
    &PyvtkVector_IdLi3EE_NewMethod,
    PyvtkVector_IdLi3EE_Doc(), &PyvtkVector_IdLi3EE_CCopy);
}

const char **PyvtkVector_IdLi3EE_Doc()
{
  static const char *docstring[] = {
    "vtkVector3 - templated base type for storage of 3D vectors.\n\n",
    "This class is a templated data type for storing and manipulating\nfixed size vectors, which can be used to represent two and three\ndimensional points. The memory layout is a contiguous array of the\nspecified type, such that a float[2] can be cast to a vtkVector2f and\nmanipulated. Also a float[6] could be cast and used as a\nvtkVector2f[3].\n\n",
    "V.vtkVector()\nC++: vtkVector()\nV.vtkVector((float, float, float))\nC++: explicit vtkVector(const double *init)\nV.vtkVector(vtkVector<double, 3>)\nC++: vtkVector(const &vtkVector<double, 3>)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkVector_IfLi3EE_Doc();


static PyObject *
PyvtkVector_IfLi3EE_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSize");
  void *vp = ap.GetSelfPointer(self);
  vtkVector<float, 3> *op = static_cast<vtkVector<float, 3> *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->GetSize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkVector_IfLi3EE_Methods[] = {
  {(char*)"GetSize", PyvtkVector_IfLi3EE_GetSize, 1,
   (char*)"V.GetSize() -> int\nC++: int GetSize()\n\nGet the size of the vtkVector.\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkVector_IfLi3EE_Type
extern PyTypeObject PyvtkVector_IfLi3EE_Type;
#define DECLARED_PyvtkVector_IfLi3EE_Type
#endif


static PyObject *
PyvtkVector_IfLi3EE_vtkVector_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkVector<float, 3> *op = new vtkVector<float, 3>();

    result = PyVTKSpecialObject_New("vtkVector_IfLi3EE", op);
    }

  return result;
}

static PyObject *
PyvtkVector_IfLi3EE_vtkVector_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  float temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkVector<float, 3> *op = new vtkVector<float, 3>(temp0);

    result = PyVTKSpecialObject_New("vtkVector_IfLi3EE", op);
    }

  return result;
}

static PyObject *
PyvtkVector_IfLi3EE_vtkVector_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  vtkVector<float, 3> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector_IfLi3EE"))
    {
    vtkVector<float, 3> *op = new vtkVector<float, 3>(*temp0);

    result = PyVTKSpecialObject_New("vtkVector_IfLi3EE", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector_IfLi3EE_vtkVector_Methods[] = {
  {NULL, PyvtkVector_IfLi3EE_vtkVector_s2, 1,
   (char*)"-O *f"},
  {NULL, PyvtkVector_IfLi3EE_vtkVector_s3, 1,
   (char*)"O &vtkVector_IfLi3EE"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkVector_IfLi3EE_vtkVector(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVector_IfLi3EE_vtkVector_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkVector_IfLi3EE_vtkVector_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkVector");
  return NULL;
}


static PyMethodDef PyvtkVector_IfLi3EE_NewMethod = \
{ (char*)"vtkVector_IfLi3EE", PyvtkVector_IfLi3EE_vtkVector, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkVector_IfLi3EE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkVector_IfLi3EE_vtkVector(NULL, args);
}
#endif

static void PyvtkVector_IfLi3EE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkVector<float, 3> *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

Py_ssize_t PyvtkVector_IfLi3EE_SequenceSize(PyObject *self)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkVector<float, 3> *op = static_cast<vtkVector<float, 3> *>(vp);

  return static_cast<Py_ssize_t>(op->GetSize());
}

PyObject *PyvtkVector_IfLi3EE_SequenceItem(PyObject *self, Py_ssize_t i)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkVector<float, 3> *op = static_cast<vtkVector<float, 3> *>(vp);

  int temp0;
  const float *tempr;
  PyObject *result = NULL;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
    {
    PyErr_SetString(PyExc_IndexError, "index out of range");
    }
  else
    {
    tempr = &(*op)[temp0];

    if (PyErr_Occurred() == NULL)
      {
      result = vtkPythonArgs::BuildValue(*tempr);
      }
    }

  return result;
}

int PyvtkVector_IfLi3EE_SequenceSetItem(
  PyObject *self, Py_ssize_t i, PyObject *arg1)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkVector<float, 3> *op = static_cast<vtkVector<float, 3> *>(vp);

  int temp0;
  float temp1;
  int result = -1;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
    {
    PyErr_SetString(PyExc_IndexError, "index out of range");
    }
  else if (vtkPythonArgs::GetValue(arg1, temp1))
    {
    (*op)[temp0] = temp1;

    if (PyErr_Occurred() == NULL)
      {
      result = 0;
      }
    }

  return result;
}

static PySequenceMethods PyvtkVector_IfLi3EE_AsSequence = {
  PyvtkVector_IfLi3EE_SequenceSize, // sq_length
  0, // sq_concat
  0, // sq_repeat
  PyvtkVector_IfLi3EE_SequenceItem, // sq_item
  0, // sq_slice
  PyvtkVector_IfLi3EE_SequenceSetItem, // sq_ass_item
  0, // sq_ass_slice
  0, // sq_contains
#if PY_VERSION_HEX >= 0x2000000
  0, // sq_inplace_concat
  0, // sq_inplace_repeat
#endif
};

static long PyvtkVector_IfLi3EE_Hash(PyObject *self)
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

PyTypeObject PyvtkVector_IfLi3EE_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkVector_IfLi3EE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVector_IfLi3EE_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  &PyvtkVector_IfLi3EE_AsSequence, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkVector_IfLi3EE_Hash, // tp_hash
  0, // tp_call
  PyVTKSpecialObject_SequenceString, // tp_str
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
  PyvtkVector_IfLi3EE_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkVector_IfLi3EE_New, // tp_new
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

static void *PyvtkVector_IfLi3EE_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkVector<float, 3>(*static_cast<const vtkVector<float, 3>*>(obj));
    }
  return 0;
}

static PyObject *PyvtkVector_IfLi3EE_TypeNew(const char *)
{
  return PyVTKSpecialType_New(
    &PyvtkVector_IfLi3EE_Type,
    PyvtkVector_IfLi3EE_Methods,
    PyvtkVector_IfLi3EE_vtkVector_Methods,
    &PyvtkVector_IfLi3EE_NewMethod,
    PyvtkVector_IfLi3EE_Doc(), &PyvtkVector_IfLi3EE_CCopy);
}

const char **PyvtkVector_IfLi3EE_Doc()
{
  static const char *docstring[] = {
    "vtkVector3 - templated base type for storage of 3D vectors.\n\n",
    "This class is a templated data type for storing and manipulating\nfixed size vectors, which can be used to represent two and three\ndimensional points. The memory layout is a contiguous array of the\nspecified type, such that a float[2] can be cast to a vtkVector2f and\nmanipulated. Also a float[6] could be cast and used as a\nvtkVector2f[3].\n\n",
    "V.vtkVector()\nC++: vtkVector()\nV.vtkVector((float, float, float))\nC++: explicit vtkVector(const float *init)\nV.vtkVector(vtkVector<float, 3>)\nC++: vtkVector(const &vtkVector<float, 3>)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkVector_IhLi3EE_Doc();


static PyObject *
PyvtkVector_IhLi3EE_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSize");
  void *vp = ap.GetSelfPointer(self);
  vtkVector<unsigned char, 3> *op = static_cast<vtkVector<unsigned char, 3> *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->GetSize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkVector_IhLi3EE_Methods[] = {
  {(char*)"GetSize", PyvtkVector_IhLi3EE_GetSize, 1,
   (char*)"V.GetSize() -> int\nC++: int GetSize()\n\nGet the size of the vtkVector.\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkVector_IhLi3EE_Type
extern PyTypeObject PyvtkVector_IhLi3EE_Type;
#define DECLARED_PyvtkVector_IhLi3EE_Type
#endif


static PyObject *
PyvtkVector_IhLi3EE_vtkVector_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkVector<unsigned char, 3> *op = new vtkVector<unsigned char, 3>();

    result = PyVTKSpecialObject_New("vtkVector_IhLi3EE", op);
    }

  return result;
}

static PyObject *
PyvtkVector_IhLi3EE_vtkVector_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  unsigned char temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkVector<unsigned char, 3> *op = new vtkVector<unsigned char, 3>(temp0);

    result = PyVTKSpecialObject_New("vtkVector_IhLi3EE", op);
    }

  return result;
}

static PyObject *
PyvtkVector_IhLi3EE_vtkVector_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  vtkVector<unsigned char, 3> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector_IhLi3EE"))
    {
    vtkVector<unsigned char, 3> *op = new vtkVector<unsigned char, 3>(*temp0);

    result = PyVTKSpecialObject_New("vtkVector_IhLi3EE", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector_IhLi3EE_vtkVector_Methods[] = {
  {NULL, PyvtkVector_IhLi3EE_vtkVector_s2, 1,
   (char*)"-O *b"},
  {NULL, PyvtkVector_IhLi3EE_vtkVector_s3, 1,
   (char*)"O &vtkVector_IhLi3EE"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkVector_IhLi3EE_vtkVector(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVector_IhLi3EE_vtkVector_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkVector_IhLi3EE_vtkVector_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkVector");
  return NULL;
}


static PyMethodDef PyvtkVector_IhLi3EE_NewMethod = \
{ (char*)"vtkVector_IhLi3EE", PyvtkVector_IhLi3EE_vtkVector, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkVector_IhLi3EE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkVector_IhLi3EE_vtkVector(NULL, args);
}
#endif

static void PyvtkVector_IhLi3EE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkVector<unsigned char, 3> *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

Py_ssize_t PyvtkVector_IhLi3EE_SequenceSize(PyObject *self)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkVector<unsigned char, 3> *op = static_cast<vtkVector<unsigned char, 3> *>(vp);

  return static_cast<Py_ssize_t>(op->GetSize());
}

PyObject *PyvtkVector_IhLi3EE_SequenceItem(PyObject *self, Py_ssize_t i)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkVector<unsigned char, 3> *op = static_cast<vtkVector<unsigned char, 3> *>(vp);

  int temp0;
  const unsigned char *tempr;
  PyObject *result = NULL;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
    {
    PyErr_SetString(PyExc_IndexError, "index out of range");
    }
  else
    {
    tempr = &(*op)[temp0];

    if (PyErr_Occurred() == NULL)
      {
      result = vtkPythonArgs::BuildValue(*tempr);
      }
    }

  return result;
}

int PyvtkVector_IhLi3EE_SequenceSetItem(
  PyObject *self, Py_ssize_t i, PyObject *arg1)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkVector<unsigned char, 3> *op = static_cast<vtkVector<unsigned char, 3> *>(vp);

  int temp0;
  unsigned char temp1;
  int result = -1;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
    {
    PyErr_SetString(PyExc_IndexError, "index out of range");
    }
  else if (vtkPythonArgs::GetValue(arg1, temp1))
    {
    (*op)[temp0] = temp1;

    if (PyErr_Occurred() == NULL)
      {
      result = 0;
      }
    }

  return result;
}

static PySequenceMethods PyvtkVector_IhLi3EE_AsSequence = {
  PyvtkVector_IhLi3EE_SequenceSize, // sq_length
  0, // sq_concat
  0, // sq_repeat
  PyvtkVector_IhLi3EE_SequenceItem, // sq_item
  0, // sq_slice
  PyvtkVector_IhLi3EE_SequenceSetItem, // sq_ass_item
  0, // sq_ass_slice
  0, // sq_contains
#if PY_VERSION_HEX >= 0x2000000
  0, // sq_inplace_concat
  0, // sq_inplace_repeat
#endif
};

static long PyvtkVector_IhLi3EE_Hash(PyObject *self)
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

PyTypeObject PyvtkVector_IhLi3EE_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkVector_IhLi3EE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVector_IhLi3EE_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  &PyvtkVector_IhLi3EE_AsSequence, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkVector_IhLi3EE_Hash, // tp_hash
  0, // tp_call
  PyVTKSpecialObject_SequenceString, // tp_str
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
  PyvtkVector_IhLi3EE_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkVector_IhLi3EE_New, // tp_new
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

static void *PyvtkVector_IhLi3EE_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkVector<unsigned char, 3>(*static_cast<const vtkVector<unsigned char, 3>*>(obj));
    }
  return 0;
}

static PyObject *PyvtkVector_IhLi3EE_TypeNew(const char *)
{
  return PyVTKSpecialType_New(
    &PyvtkVector_IhLi3EE_Type,
    PyvtkVector_IhLi3EE_Methods,
    PyvtkVector_IhLi3EE_vtkVector_Methods,
    &PyvtkVector_IhLi3EE_NewMethod,
    PyvtkVector_IhLi3EE_Doc(), &PyvtkVector_IhLi3EE_CCopy);
}

const char **PyvtkVector_IhLi3EE_Doc()
{
  static const char *docstring[] = {
    "vtkVector3 - templated base type for storage of 3D vectors.\n\n",
    "This class is a templated data type for storing and manipulating\nfixed size vectors, which can be used to represent two and three\ndimensional points. The memory layout is a contiguous array of the\nspecified type, such that a float[2] can be cast to a vtkVector2f and\nmanipulated. Also a float[6] could be cast and used as a\nvtkVector2f[3].\n\n",
    "V.vtkVector()\nC++: vtkVector()\nV.vtkVector((int, int, int))\nC++: explicit vtkVector(const unsigned char *init)\nV.vtkVector(vtkVector<unsigned char, 3>)\nC++: vtkVector(const &vtkVector<unsigned char, 3>)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkVector_IdLi4EE_Doc();


static PyObject *
PyvtkVector_IdLi4EE_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSize");
  void *vp = ap.GetSelfPointer(self);
  vtkVector<double, 4> *op = static_cast<vtkVector<double, 4> *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->GetSize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkVector_IdLi4EE_Methods[] = {
  {(char*)"GetSize", PyvtkVector_IdLi4EE_GetSize, 1,
   (char*)"V.GetSize() -> int\nC++: int GetSize()\n\nGet the size of the vtkVector.\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkVector_IdLi4EE_Type
extern PyTypeObject PyvtkVector_IdLi4EE_Type;
#define DECLARED_PyvtkVector_IdLi4EE_Type
#endif


static PyObject *
PyvtkVector_IdLi4EE_vtkVector_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkVector<double, 4> *op = new vtkVector<double, 4>();

    result = PyVTKSpecialObject_New("vtkVector_IdLi4EE", op);
    }

  return result;
}

static PyObject *
PyvtkVector_IdLi4EE_vtkVector_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  double temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkVector<double, 4> *op = new vtkVector<double, 4>(temp0);

    result = PyVTKSpecialObject_New("vtkVector_IdLi4EE", op);
    }

  return result;
}

static PyObject *
PyvtkVector_IdLi4EE_vtkVector_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  vtkVector<double, 4> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector_IdLi4EE"))
    {
    vtkVector<double, 4> *op = new vtkVector<double, 4>(*temp0);

    result = PyVTKSpecialObject_New("vtkVector_IdLi4EE", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector_IdLi4EE_vtkVector_Methods[] = {
  {NULL, PyvtkVector_IdLi4EE_vtkVector_s2, 1,
   (char*)"-O *d"},
  {NULL, PyvtkVector_IdLi4EE_vtkVector_s3, 1,
   (char*)"O &vtkVector_IdLi4EE"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkVector_IdLi4EE_vtkVector(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVector_IdLi4EE_vtkVector_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkVector_IdLi4EE_vtkVector_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkVector");
  return NULL;
}


static PyMethodDef PyvtkVector_IdLi4EE_NewMethod = \
{ (char*)"vtkVector_IdLi4EE", PyvtkVector_IdLi4EE_vtkVector, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkVector_IdLi4EE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkVector_IdLi4EE_vtkVector(NULL, args);
}
#endif

static void PyvtkVector_IdLi4EE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkVector<double, 4> *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

Py_ssize_t PyvtkVector_IdLi4EE_SequenceSize(PyObject *self)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkVector<double, 4> *op = static_cast<vtkVector<double, 4> *>(vp);

  return static_cast<Py_ssize_t>(op->GetSize());
}

PyObject *PyvtkVector_IdLi4EE_SequenceItem(PyObject *self, Py_ssize_t i)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkVector<double, 4> *op = static_cast<vtkVector<double, 4> *>(vp);

  int temp0;
  const double *tempr;
  PyObject *result = NULL;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
    {
    PyErr_SetString(PyExc_IndexError, "index out of range");
    }
  else
    {
    tempr = &(*op)[temp0];

    if (PyErr_Occurred() == NULL)
      {
      result = vtkPythonArgs::BuildValue(*tempr);
      }
    }

  return result;
}

int PyvtkVector_IdLi4EE_SequenceSetItem(
  PyObject *self, Py_ssize_t i, PyObject *arg1)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkVector<double, 4> *op = static_cast<vtkVector<double, 4> *>(vp);

  int temp0;
  double temp1;
  int result = -1;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
    {
    PyErr_SetString(PyExc_IndexError, "index out of range");
    }
  else if (vtkPythonArgs::GetValue(arg1, temp1))
    {
    (*op)[temp0] = temp1;

    if (PyErr_Occurred() == NULL)
      {
      result = 0;
      }
    }

  return result;
}

static PySequenceMethods PyvtkVector_IdLi4EE_AsSequence = {
  PyvtkVector_IdLi4EE_SequenceSize, // sq_length
  0, // sq_concat
  0, // sq_repeat
  PyvtkVector_IdLi4EE_SequenceItem, // sq_item
  0, // sq_slice
  PyvtkVector_IdLi4EE_SequenceSetItem, // sq_ass_item
  0, // sq_ass_slice
  0, // sq_contains
#if PY_VERSION_HEX >= 0x2000000
  0, // sq_inplace_concat
  0, // sq_inplace_repeat
#endif
};

static long PyvtkVector_IdLi4EE_Hash(PyObject *self)
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

PyTypeObject PyvtkVector_IdLi4EE_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkVector_IdLi4EE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVector_IdLi4EE_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  &PyvtkVector_IdLi4EE_AsSequence, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkVector_IdLi4EE_Hash, // tp_hash
  0, // tp_call
  PyVTKSpecialObject_SequenceString, // tp_str
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
  PyvtkVector_IdLi4EE_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkVector_IdLi4EE_New, // tp_new
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

static void *PyvtkVector_IdLi4EE_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkVector<double, 4>(*static_cast<const vtkVector<double, 4>*>(obj));
    }
  return 0;
}

static PyObject *PyvtkVector_IdLi4EE_TypeNew(const char *)
{
  return PyVTKSpecialType_New(
    &PyvtkVector_IdLi4EE_Type,
    PyvtkVector_IdLi4EE_Methods,
    PyvtkVector_IdLi4EE_vtkVector_Methods,
    &PyvtkVector_IdLi4EE_NewMethod,
    PyvtkVector_IdLi4EE_Doc(), &PyvtkVector_IdLi4EE_CCopy);
}

const char **PyvtkVector_IdLi4EE_Doc()
{
  static const char *docstring[] = {
    "vtkVector3 - templated base type for storage of 3D vectors.\n\n",
    "This class is a templated data type for storing and manipulating\nfixed size vectors, which can be used to represent two and three\ndimensional points. The memory layout is a contiguous array of the\nspecified type, such that a float[2] can be cast to a vtkVector2f and\nmanipulated. Also a float[6] could be cast and used as a\nvtkVector2f[3].\n\n",
    "V.vtkVector()\nC++: vtkVector()\nV.vtkVector((float, float, float, float))\nC++: explicit vtkVector(const double *init)\nV.vtkVector(vtkVector<double, 4>)\nC++: vtkVector(const &vtkVector<double, 4>)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkVector_IfLi4EE_Doc();


static PyObject *
PyvtkVector_IfLi4EE_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSize");
  void *vp = ap.GetSelfPointer(self);
  vtkVector<float, 4> *op = static_cast<vtkVector<float, 4> *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->GetSize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkVector_IfLi4EE_Methods[] = {
  {(char*)"GetSize", PyvtkVector_IfLi4EE_GetSize, 1,
   (char*)"V.GetSize() -> int\nC++: int GetSize()\n\nGet the size of the vtkVector.\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkVector_IfLi4EE_Type
extern PyTypeObject PyvtkVector_IfLi4EE_Type;
#define DECLARED_PyvtkVector_IfLi4EE_Type
#endif


static PyObject *
PyvtkVector_IfLi4EE_vtkVector_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkVector<float, 4> *op = new vtkVector<float, 4>();

    result = PyVTKSpecialObject_New("vtkVector_IfLi4EE", op);
    }

  return result;
}

static PyObject *
PyvtkVector_IfLi4EE_vtkVector_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  float temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkVector<float, 4> *op = new vtkVector<float, 4>(temp0);

    result = PyVTKSpecialObject_New("vtkVector_IfLi4EE", op);
    }

  return result;
}

static PyObject *
PyvtkVector_IfLi4EE_vtkVector_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  vtkVector<float, 4> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector_IfLi4EE"))
    {
    vtkVector<float, 4> *op = new vtkVector<float, 4>(*temp0);

    result = PyVTKSpecialObject_New("vtkVector_IfLi4EE", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector_IfLi4EE_vtkVector_Methods[] = {
  {NULL, PyvtkVector_IfLi4EE_vtkVector_s2, 1,
   (char*)"-O *f"},
  {NULL, PyvtkVector_IfLi4EE_vtkVector_s3, 1,
   (char*)"O &vtkVector_IfLi4EE"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkVector_IfLi4EE_vtkVector(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVector_IfLi4EE_vtkVector_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkVector_IfLi4EE_vtkVector_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkVector");
  return NULL;
}


static PyMethodDef PyvtkVector_IfLi4EE_NewMethod = \
{ (char*)"vtkVector_IfLi4EE", PyvtkVector_IfLi4EE_vtkVector, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkVector_IfLi4EE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkVector_IfLi4EE_vtkVector(NULL, args);
}
#endif

static void PyvtkVector_IfLi4EE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkVector<float, 4> *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

Py_ssize_t PyvtkVector_IfLi4EE_SequenceSize(PyObject *self)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkVector<float, 4> *op = static_cast<vtkVector<float, 4> *>(vp);

  return static_cast<Py_ssize_t>(op->GetSize());
}

PyObject *PyvtkVector_IfLi4EE_SequenceItem(PyObject *self, Py_ssize_t i)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkVector<float, 4> *op = static_cast<vtkVector<float, 4> *>(vp);

  int temp0;
  const float *tempr;
  PyObject *result = NULL;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
    {
    PyErr_SetString(PyExc_IndexError, "index out of range");
    }
  else
    {
    tempr = &(*op)[temp0];

    if (PyErr_Occurred() == NULL)
      {
      result = vtkPythonArgs::BuildValue(*tempr);
      }
    }

  return result;
}

int PyvtkVector_IfLi4EE_SequenceSetItem(
  PyObject *self, Py_ssize_t i, PyObject *arg1)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkVector<float, 4> *op = static_cast<vtkVector<float, 4> *>(vp);

  int temp0;
  float temp1;
  int result = -1;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
    {
    PyErr_SetString(PyExc_IndexError, "index out of range");
    }
  else if (vtkPythonArgs::GetValue(arg1, temp1))
    {
    (*op)[temp0] = temp1;

    if (PyErr_Occurred() == NULL)
      {
      result = 0;
      }
    }

  return result;
}

static PySequenceMethods PyvtkVector_IfLi4EE_AsSequence = {
  PyvtkVector_IfLi4EE_SequenceSize, // sq_length
  0, // sq_concat
  0, // sq_repeat
  PyvtkVector_IfLi4EE_SequenceItem, // sq_item
  0, // sq_slice
  PyvtkVector_IfLi4EE_SequenceSetItem, // sq_ass_item
  0, // sq_ass_slice
  0, // sq_contains
#if PY_VERSION_HEX >= 0x2000000
  0, // sq_inplace_concat
  0, // sq_inplace_repeat
#endif
};

static long PyvtkVector_IfLi4EE_Hash(PyObject *self)
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

PyTypeObject PyvtkVector_IfLi4EE_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkVector_IfLi4EE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVector_IfLi4EE_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  &PyvtkVector_IfLi4EE_AsSequence, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkVector_IfLi4EE_Hash, // tp_hash
  0, // tp_call
  PyVTKSpecialObject_SequenceString, // tp_str
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
  PyvtkVector_IfLi4EE_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkVector_IfLi4EE_New, // tp_new
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

static void *PyvtkVector_IfLi4EE_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkVector<float, 4>(*static_cast<const vtkVector<float, 4>*>(obj));
    }
  return 0;
}

static PyObject *PyvtkVector_IfLi4EE_TypeNew(const char *)
{
  return PyVTKSpecialType_New(
    &PyvtkVector_IfLi4EE_Type,
    PyvtkVector_IfLi4EE_Methods,
    PyvtkVector_IfLi4EE_vtkVector_Methods,
    &PyvtkVector_IfLi4EE_NewMethod,
    PyvtkVector_IfLi4EE_Doc(), &PyvtkVector_IfLi4EE_CCopy);
}

const char **PyvtkVector_IfLi4EE_Doc()
{
  static const char *docstring[] = {
    "vtkVector3 - templated base type for storage of 3D vectors.\n\n",
    "This class is a templated data type for storing and manipulating\nfixed size vectors, which can be used to represent two and three\ndimensional points. The memory layout is a contiguous array of the\nspecified type, such that a float[2] can be cast to a vtkVector2f and\nmanipulated. Also a float[6] could be cast and used as a\nvtkVector2f[3].\n\n",
    "V.vtkVector()\nC++: vtkVector()\nV.vtkVector((float, float, float, float))\nC++: explicit vtkVector(const float *init)\nV.vtkVector(vtkVector<float, 4>)\nC++: vtkVector(const &vtkVector<float, 4>)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkVector_IhLi4EE_Doc();


static PyObject *
PyvtkVector_IhLi4EE_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSize");
  void *vp = ap.GetSelfPointer(self);
  vtkVector<unsigned char, 4> *op = static_cast<vtkVector<unsigned char, 4> *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->GetSize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkVector_IhLi4EE_Methods[] = {
  {(char*)"GetSize", PyvtkVector_IhLi4EE_GetSize, 1,
   (char*)"V.GetSize() -> int\nC++: int GetSize()\n\nGet the size of the vtkVector.\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkVector_IhLi4EE_Type
extern PyTypeObject PyvtkVector_IhLi4EE_Type;
#define DECLARED_PyvtkVector_IhLi4EE_Type
#endif


static PyObject *
PyvtkVector_IhLi4EE_vtkVector_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkVector<unsigned char, 4> *op = new vtkVector<unsigned char, 4>();

    result = PyVTKSpecialObject_New("vtkVector_IhLi4EE", op);
    }

  return result;
}

static PyObject *
PyvtkVector_IhLi4EE_vtkVector_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  unsigned char temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkVector<unsigned char, 4> *op = new vtkVector<unsigned char, 4>(temp0);

    result = PyVTKSpecialObject_New("vtkVector_IhLi4EE", op);
    }

  return result;
}

static PyObject *
PyvtkVector_IhLi4EE_vtkVector_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  vtkVector<unsigned char, 4> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector_IhLi4EE"))
    {
    vtkVector<unsigned char, 4> *op = new vtkVector<unsigned char, 4>(*temp0);

    result = PyVTKSpecialObject_New("vtkVector_IhLi4EE", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector_IhLi4EE_vtkVector_Methods[] = {
  {NULL, PyvtkVector_IhLi4EE_vtkVector_s2, 1,
   (char*)"-O *b"},
  {NULL, PyvtkVector_IhLi4EE_vtkVector_s3, 1,
   (char*)"O &vtkVector_IhLi4EE"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkVector_IhLi4EE_vtkVector(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVector_IhLi4EE_vtkVector_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkVector_IhLi4EE_vtkVector_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkVector");
  return NULL;
}


static PyMethodDef PyvtkVector_IhLi4EE_NewMethod = \
{ (char*)"vtkVector_IhLi4EE", PyvtkVector_IhLi4EE_vtkVector, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkVector_IhLi4EE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkVector_IhLi4EE_vtkVector(NULL, args);
}
#endif

static void PyvtkVector_IhLi4EE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkVector<unsigned char, 4> *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

Py_ssize_t PyvtkVector_IhLi4EE_SequenceSize(PyObject *self)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkVector<unsigned char, 4> *op = static_cast<vtkVector<unsigned char, 4> *>(vp);

  return static_cast<Py_ssize_t>(op->GetSize());
}

PyObject *PyvtkVector_IhLi4EE_SequenceItem(PyObject *self, Py_ssize_t i)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkVector<unsigned char, 4> *op = static_cast<vtkVector<unsigned char, 4> *>(vp);

  int temp0;
  const unsigned char *tempr;
  PyObject *result = NULL;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
    {
    PyErr_SetString(PyExc_IndexError, "index out of range");
    }
  else
    {
    tempr = &(*op)[temp0];

    if (PyErr_Occurred() == NULL)
      {
      result = vtkPythonArgs::BuildValue(*tempr);
      }
    }

  return result;
}

int PyvtkVector_IhLi4EE_SequenceSetItem(
  PyObject *self, Py_ssize_t i, PyObject *arg1)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkVector<unsigned char, 4> *op = static_cast<vtkVector<unsigned char, 4> *>(vp);

  int temp0;
  unsigned char temp1;
  int result = -1;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
    {
    PyErr_SetString(PyExc_IndexError, "index out of range");
    }
  else if (vtkPythonArgs::GetValue(arg1, temp1))
    {
    (*op)[temp0] = temp1;

    if (PyErr_Occurred() == NULL)
      {
      result = 0;
      }
    }

  return result;
}

static PySequenceMethods PyvtkVector_IhLi4EE_AsSequence = {
  PyvtkVector_IhLi4EE_SequenceSize, // sq_length
  0, // sq_concat
  0, // sq_repeat
  PyvtkVector_IhLi4EE_SequenceItem, // sq_item
  0, // sq_slice
  PyvtkVector_IhLi4EE_SequenceSetItem, // sq_ass_item
  0, // sq_ass_slice
  0, // sq_contains
#if PY_VERSION_HEX >= 0x2000000
  0, // sq_inplace_concat
  0, // sq_inplace_repeat
#endif
};

static long PyvtkVector_IhLi4EE_Hash(PyObject *self)
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

PyTypeObject PyvtkVector_IhLi4EE_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkVector_IhLi4EE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVector_IhLi4EE_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  &PyvtkVector_IhLi4EE_AsSequence, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkVector_IhLi4EE_Hash, // tp_hash
  0, // tp_call
  PyVTKSpecialObject_SequenceString, // tp_str
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
  PyvtkVector_IhLi4EE_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkVector_IhLi4EE_New, // tp_new
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

static void *PyvtkVector_IhLi4EE_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkVector<unsigned char, 4>(*static_cast<const vtkVector<unsigned char, 4>*>(obj));
    }
  return 0;
}

static PyObject *PyvtkVector_IhLi4EE_TypeNew(const char *)
{
  return PyVTKSpecialType_New(
    &PyvtkVector_IhLi4EE_Type,
    PyvtkVector_IhLi4EE_Methods,
    PyvtkVector_IhLi4EE_vtkVector_Methods,
    &PyvtkVector_IhLi4EE_NewMethod,
    PyvtkVector_IhLi4EE_Doc(), &PyvtkVector_IhLi4EE_CCopy);
}

const char **PyvtkVector_IhLi4EE_Doc()
{
  static const char *docstring[] = {
    "vtkVector3 - templated base type for storage of 3D vectors.\n\n",
    "This class is a templated data type for storing and manipulating\nfixed size vectors, which can be used to represent two and three\ndimensional points. The memory layout is a contiguous array of the\nspecified type, such that a float[2] can be cast to a vtkVector2f and\nmanipulated. Also a float[6] could be cast and used as a\nvtkVector2f[3].\n\n",
    "V.vtkVector()\nC++: vtkVector()\nV.vtkVector((int, int, int, int))\nC++: explicit vtkVector(const unsigned char *init)\nV.vtkVector(vtkVector<unsigned char, 4>)\nC++: vtkVector(const &vtkVector<unsigned char, 4>)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkVector_IiLi4EE_Doc();


static PyObject *
PyvtkVector_IiLi4EE_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSize");
  void *vp = ap.GetSelfPointer(self);
  vtkVector<int, 4> *op = static_cast<vtkVector<int, 4> *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->GetSize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkVector_IiLi4EE_Methods[] = {
  {(char*)"GetSize", PyvtkVector_IiLi4EE_GetSize, 1,
   (char*)"V.GetSize() -> int\nC++: int GetSize()\n\nGet the size of the vtkVector.\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkVector_IiLi4EE_Type
extern PyTypeObject PyvtkVector_IiLi4EE_Type;
#define DECLARED_PyvtkVector_IiLi4EE_Type
#endif


static PyObject *
PyvtkVector_IiLi4EE_vtkVector_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkVector<int, 4> *op = new vtkVector<int, 4>();

    result = PyVTKSpecialObject_New("vtkVector_IiLi4EE", op);
    }

  return result;
}

static PyObject *
PyvtkVector_IiLi4EE_vtkVector_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  int temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkVector<int, 4> *op = new vtkVector<int, 4>(temp0);

    result = PyVTKSpecialObject_New("vtkVector_IiLi4EE", op);
    }

  return result;
}

static PyObject *
PyvtkVector_IiLi4EE_vtkVector_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  vtkVector<int, 4> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector_IiLi4EE"))
    {
    vtkVector<int, 4> *op = new vtkVector<int, 4>(*temp0);

    result = PyVTKSpecialObject_New("vtkVector_IiLi4EE", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector_IiLi4EE_vtkVector_Methods[] = {
  {NULL, PyvtkVector_IiLi4EE_vtkVector_s2, 1,
   (char*)"-O *i"},
  {NULL, PyvtkVector_IiLi4EE_vtkVector_s3, 1,
   (char*)"O &vtkVector_IiLi4EE"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkVector_IiLi4EE_vtkVector(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVector_IiLi4EE_vtkVector_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkVector_IiLi4EE_vtkVector_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkVector");
  return NULL;
}


static PyMethodDef PyvtkVector_IiLi4EE_NewMethod = \
{ (char*)"vtkVector_IiLi4EE", PyvtkVector_IiLi4EE_vtkVector, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkVector_IiLi4EE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkVector_IiLi4EE_vtkVector(NULL, args);
}
#endif

static void PyvtkVector_IiLi4EE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkVector<int, 4> *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

Py_ssize_t PyvtkVector_IiLi4EE_SequenceSize(PyObject *self)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkVector<int, 4> *op = static_cast<vtkVector<int, 4> *>(vp);

  return static_cast<Py_ssize_t>(op->GetSize());
}

PyObject *PyvtkVector_IiLi4EE_SequenceItem(PyObject *self, Py_ssize_t i)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkVector<int, 4> *op = static_cast<vtkVector<int, 4> *>(vp);

  int temp0;
  const int *tempr;
  PyObject *result = NULL;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
    {
    PyErr_SetString(PyExc_IndexError, "index out of range");
    }
  else
    {
    tempr = &(*op)[temp0];

    if (PyErr_Occurred() == NULL)
      {
      result = vtkPythonArgs::BuildValue(*tempr);
      }
    }

  return result;
}

int PyvtkVector_IiLi4EE_SequenceSetItem(
  PyObject *self, Py_ssize_t i, PyObject *arg1)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkVector<int, 4> *op = static_cast<vtkVector<int, 4> *>(vp);

  int temp0;
  int temp1;
  int result = -1;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
    {
    PyErr_SetString(PyExc_IndexError, "index out of range");
    }
  else if (vtkPythonArgs::GetValue(arg1, temp1))
    {
    (*op)[temp0] = temp1;

    if (PyErr_Occurred() == NULL)
      {
      result = 0;
      }
    }

  return result;
}

static PySequenceMethods PyvtkVector_IiLi4EE_AsSequence = {
  PyvtkVector_IiLi4EE_SequenceSize, // sq_length
  0, // sq_concat
  0, // sq_repeat
  PyvtkVector_IiLi4EE_SequenceItem, // sq_item
  0, // sq_slice
  PyvtkVector_IiLi4EE_SequenceSetItem, // sq_ass_item
  0, // sq_ass_slice
  0, // sq_contains
#if PY_VERSION_HEX >= 0x2000000
  0, // sq_inplace_concat
  0, // sq_inplace_repeat
#endif
};

static long PyvtkVector_IiLi4EE_Hash(PyObject *self)
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

PyTypeObject PyvtkVector_IiLi4EE_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkVector_IiLi4EE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVector_IiLi4EE_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  &PyvtkVector_IiLi4EE_AsSequence, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkVector_IiLi4EE_Hash, // tp_hash
  0, // tp_call
  PyVTKSpecialObject_SequenceString, // tp_str
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
  PyvtkVector_IiLi4EE_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkVector_IiLi4EE_New, // tp_new
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

static void *PyvtkVector_IiLi4EE_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkVector<int, 4>(*static_cast<const vtkVector<int, 4>*>(obj));
    }
  return 0;
}

static PyObject *PyvtkVector_IiLi4EE_TypeNew(const char *)
{
  return PyVTKSpecialType_New(
    &PyvtkVector_IiLi4EE_Type,
    PyvtkVector_IiLi4EE_Methods,
    PyvtkVector_IiLi4EE_vtkVector_Methods,
    &PyvtkVector_IiLi4EE_NewMethod,
    PyvtkVector_IiLi4EE_Doc(), &PyvtkVector_IiLi4EE_CCopy);
}

const char **PyvtkVector_IiLi4EE_Doc()
{
  static const char *docstring[] = {
    "vtkVector3 - templated base type for storage of 3D vectors.\n\n",
    "This class is a templated data type for storing and manipulating\nfixed size vectors, which can be used to represent two and three\ndimensional points. The memory layout is a contiguous array of the\nspecified type, such that a float[2] can be cast to a vtkVector2f and\nmanipulated. Also a float[6] could be cast and used as a\nvtkVector2f[3].\n\n",
    "V.vtkVector()\nC++: vtkVector()\nV.vtkVector((int, int, int, int))\nC++: explicit vtkVector(const int *init)\nV.vtkVector(vtkVector<int, 4>)\nC++: vtkVector(const &vtkVector<int, 4>)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkVector_IdLi2EE_Doc();


static PyObject *
PyvtkVector_IdLi2EE_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSize");
  void *vp = ap.GetSelfPointer(self);
  vtkVector<double, 2> *op = static_cast<vtkVector<double, 2> *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->GetSize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkVector_IdLi2EE_Methods[] = {
  {(char*)"GetSize", PyvtkVector_IdLi2EE_GetSize, 1,
   (char*)"V.GetSize() -> int\nC++: int GetSize()\n\nGet the size of the vtkVector.\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkVector_IdLi2EE_Type
extern PyTypeObject PyvtkVector_IdLi2EE_Type;
#define DECLARED_PyvtkVector_IdLi2EE_Type
#endif


static PyObject *
PyvtkVector_IdLi2EE_vtkVector_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkVector<double, 2> *op = new vtkVector<double, 2>();

    result = PyVTKSpecialObject_New("vtkVector_IdLi2EE", op);
    }

  return result;
}

static PyObject *
PyvtkVector_IdLi2EE_vtkVector_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkVector<double, 2> *op = new vtkVector<double, 2>(temp0);

    result = PyVTKSpecialObject_New("vtkVector_IdLi2EE", op);
    }

  return result;
}

static PyObject *
PyvtkVector_IdLi2EE_vtkVector_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  vtkVector<double, 2> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector_IdLi2EE"))
    {
    vtkVector<double, 2> *op = new vtkVector<double, 2>(*temp0);

    result = PyVTKSpecialObject_New("vtkVector_IdLi2EE", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector_IdLi2EE_vtkVector_Methods[] = {
  {NULL, PyvtkVector_IdLi2EE_vtkVector_s2, 1,
   (char*)"-O *d"},
  {NULL, PyvtkVector_IdLi2EE_vtkVector_s3, 1,
   (char*)"O &vtkVector_IdLi2EE"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkVector_IdLi2EE_vtkVector(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVector_IdLi2EE_vtkVector_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkVector_IdLi2EE_vtkVector_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkVector");
  return NULL;
}


static PyMethodDef PyvtkVector_IdLi2EE_NewMethod = \
{ (char*)"vtkVector_IdLi2EE", PyvtkVector_IdLi2EE_vtkVector, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkVector_IdLi2EE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkVector_IdLi2EE_vtkVector(NULL, args);
}
#endif

static void PyvtkVector_IdLi2EE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkVector<double, 2> *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

Py_ssize_t PyvtkVector_IdLi2EE_SequenceSize(PyObject *self)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkVector<double, 2> *op = static_cast<vtkVector<double, 2> *>(vp);

  return static_cast<Py_ssize_t>(op->GetSize());
}

PyObject *PyvtkVector_IdLi2EE_SequenceItem(PyObject *self, Py_ssize_t i)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkVector<double, 2> *op = static_cast<vtkVector<double, 2> *>(vp);

  int temp0;
  const double *tempr;
  PyObject *result = NULL;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
    {
    PyErr_SetString(PyExc_IndexError, "index out of range");
    }
  else
    {
    tempr = &(*op)[temp0];

    if (PyErr_Occurred() == NULL)
      {
      result = vtkPythonArgs::BuildValue(*tempr);
      }
    }

  return result;
}

int PyvtkVector_IdLi2EE_SequenceSetItem(
  PyObject *self, Py_ssize_t i, PyObject *arg1)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkVector<double, 2> *op = static_cast<vtkVector<double, 2> *>(vp);

  int temp0;
  double temp1;
  int result = -1;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
    {
    PyErr_SetString(PyExc_IndexError, "index out of range");
    }
  else if (vtkPythonArgs::GetValue(arg1, temp1))
    {
    (*op)[temp0] = temp1;

    if (PyErr_Occurred() == NULL)
      {
      result = 0;
      }
    }

  return result;
}

static PySequenceMethods PyvtkVector_IdLi2EE_AsSequence = {
  PyvtkVector_IdLi2EE_SequenceSize, // sq_length
  0, // sq_concat
  0, // sq_repeat
  PyvtkVector_IdLi2EE_SequenceItem, // sq_item
  0, // sq_slice
  PyvtkVector_IdLi2EE_SequenceSetItem, // sq_ass_item
  0, // sq_ass_slice
  0, // sq_contains
#if PY_VERSION_HEX >= 0x2000000
  0, // sq_inplace_concat
  0, // sq_inplace_repeat
#endif
};

static long PyvtkVector_IdLi2EE_Hash(PyObject *self)
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

PyTypeObject PyvtkVector_IdLi2EE_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkVector_IdLi2EE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVector_IdLi2EE_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  &PyvtkVector_IdLi2EE_AsSequence, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkVector_IdLi2EE_Hash, // tp_hash
  0, // tp_call
  PyVTKSpecialObject_SequenceString, // tp_str
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
  PyvtkVector_IdLi2EE_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkVector_IdLi2EE_New, // tp_new
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

static void *PyvtkVector_IdLi2EE_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkVector<double, 2>(*static_cast<const vtkVector<double, 2>*>(obj));
    }
  return 0;
}

static PyObject *PyvtkVector_IdLi2EE_TypeNew(const char *)
{
  return PyVTKSpecialType_New(
    &PyvtkVector_IdLi2EE_Type,
    PyvtkVector_IdLi2EE_Methods,
    PyvtkVector_IdLi2EE_vtkVector_Methods,
    &PyvtkVector_IdLi2EE_NewMethod,
    PyvtkVector_IdLi2EE_Doc(), &PyvtkVector_IdLi2EE_CCopy);
}

const char **PyvtkVector_IdLi2EE_Doc()
{
  static const char *docstring[] = {
    "vtkVector3 - templated base type for storage of 3D vectors.\n\n",
    "This class is a templated data type for storing and manipulating\nfixed size vectors, which can be used to represent two and three\ndimensional points. The memory layout is a contiguous array of the\nspecified type, such that a float[2] can be cast to a vtkVector2f and\nmanipulated. Also a float[6] could be cast and used as a\nvtkVector2f[3].\n\n",
    "V.vtkVector()\nC++: vtkVector()\nV.vtkVector((float, float))\nC++: explicit vtkVector(const double *init)\nV.vtkVector(vtkVector<double, 2>)\nC++: vtkVector(const &vtkVector<double, 2>)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkVector_IfLi2EE_Doc();


static PyObject *
PyvtkVector_IfLi2EE_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSize");
  void *vp = ap.GetSelfPointer(self);
  vtkVector<float, 2> *op = static_cast<vtkVector<float, 2> *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->GetSize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkVector_IfLi2EE_Methods[] = {
  {(char*)"GetSize", PyvtkVector_IfLi2EE_GetSize, 1,
   (char*)"V.GetSize() -> int\nC++: int GetSize()\n\nGet the size of the vtkVector.\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkVector_IfLi2EE_Type
extern PyTypeObject PyvtkVector_IfLi2EE_Type;
#define DECLARED_PyvtkVector_IfLi2EE_Type
#endif


static PyObject *
PyvtkVector_IfLi2EE_vtkVector_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkVector<float, 2> *op = new vtkVector<float, 2>();

    result = PyVTKSpecialObject_New("vtkVector_IfLi2EE", op);
    }

  return result;
}

static PyObject *
PyvtkVector_IfLi2EE_vtkVector_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  float temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkVector<float, 2> *op = new vtkVector<float, 2>(temp0);

    result = PyVTKSpecialObject_New("vtkVector_IfLi2EE", op);
    }

  return result;
}

static PyObject *
PyvtkVector_IfLi2EE_vtkVector_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  vtkVector<float, 2> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector_IfLi2EE"))
    {
    vtkVector<float, 2> *op = new vtkVector<float, 2>(*temp0);

    result = PyVTKSpecialObject_New("vtkVector_IfLi2EE", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector_IfLi2EE_vtkVector_Methods[] = {
  {NULL, PyvtkVector_IfLi2EE_vtkVector_s2, 1,
   (char*)"-O *f"},
  {NULL, PyvtkVector_IfLi2EE_vtkVector_s3, 1,
   (char*)"O &vtkVector_IfLi2EE"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkVector_IfLi2EE_vtkVector(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVector_IfLi2EE_vtkVector_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkVector_IfLi2EE_vtkVector_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkVector");
  return NULL;
}


static PyMethodDef PyvtkVector_IfLi2EE_NewMethod = \
{ (char*)"vtkVector_IfLi2EE", PyvtkVector_IfLi2EE_vtkVector, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkVector_IfLi2EE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkVector_IfLi2EE_vtkVector(NULL, args);
}
#endif

static void PyvtkVector_IfLi2EE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkVector<float, 2> *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

Py_ssize_t PyvtkVector_IfLi2EE_SequenceSize(PyObject *self)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkVector<float, 2> *op = static_cast<vtkVector<float, 2> *>(vp);

  return static_cast<Py_ssize_t>(op->GetSize());
}

PyObject *PyvtkVector_IfLi2EE_SequenceItem(PyObject *self, Py_ssize_t i)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkVector<float, 2> *op = static_cast<vtkVector<float, 2> *>(vp);

  int temp0;
  const float *tempr;
  PyObject *result = NULL;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
    {
    PyErr_SetString(PyExc_IndexError, "index out of range");
    }
  else
    {
    tempr = &(*op)[temp0];

    if (PyErr_Occurred() == NULL)
      {
      result = vtkPythonArgs::BuildValue(*tempr);
      }
    }

  return result;
}

int PyvtkVector_IfLi2EE_SequenceSetItem(
  PyObject *self, Py_ssize_t i, PyObject *arg1)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkVector<float, 2> *op = static_cast<vtkVector<float, 2> *>(vp);

  int temp0;
  float temp1;
  int result = -1;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
    {
    PyErr_SetString(PyExc_IndexError, "index out of range");
    }
  else if (vtkPythonArgs::GetValue(arg1, temp1))
    {
    (*op)[temp0] = temp1;

    if (PyErr_Occurred() == NULL)
      {
      result = 0;
      }
    }

  return result;
}

static PySequenceMethods PyvtkVector_IfLi2EE_AsSequence = {
  PyvtkVector_IfLi2EE_SequenceSize, // sq_length
  0, // sq_concat
  0, // sq_repeat
  PyvtkVector_IfLi2EE_SequenceItem, // sq_item
  0, // sq_slice
  PyvtkVector_IfLi2EE_SequenceSetItem, // sq_ass_item
  0, // sq_ass_slice
  0, // sq_contains
#if PY_VERSION_HEX >= 0x2000000
  0, // sq_inplace_concat
  0, // sq_inplace_repeat
#endif
};

static long PyvtkVector_IfLi2EE_Hash(PyObject *self)
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

PyTypeObject PyvtkVector_IfLi2EE_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkVector_IfLi2EE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVector_IfLi2EE_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  &PyvtkVector_IfLi2EE_AsSequence, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkVector_IfLi2EE_Hash, // tp_hash
  0, // tp_call
  PyVTKSpecialObject_SequenceString, // tp_str
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
  PyvtkVector_IfLi2EE_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkVector_IfLi2EE_New, // tp_new
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

static void *PyvtkVector_IfLi2EE_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkVector<float, 2>(*static_cast<const vtkVector<float, 2>*>(obj));
    }
  return 0;
}

static PyObject *PyvtkVector_IfLi2EE_TypeNew(const char *)
{
  return PyVTKSpecialType_New(
    &PyvtkVector_IfLi2EE_Type,
    PyvtkVector_IfLi2EE_Methods,
    PyvtkVector_IfLi2EE_vtkVector_Methods,
    &PyvtkVector_IfLi2EE_NewMethod,
    PyvtkVector_IfLi2EE_Doc(), &PyvtkVector_IfLi2EE_CCopy);
}

const char **PyvtkVector_IfLi2EE_Doc()
{
  static const char *docstring[] = {
    "vtkVector3 - templated base type for storage of 3D vectors.\n\n",
    "This class is a templated data type for storing and manipulating\nfixed size vectors, which can be used to represent two and three\ndimensional points. The memory layout is a contiguous array of the\nspecified type, such that a float[2] can be cast to a vtkVector2f and\nmanipulated. Also a float[6] could be cast and used as a\nvtkVector2f[3].\n\n",
    "V.vtkVector()\nC++: vtkVector()\nV.vtkVector((float, float))\nC++: explicit vtkVector(const float *init)\nV.vtkVector(vtkVector<float, 2>)\nC++: vtkVector(const &vtkVector<float, 2>)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkVector_IiLi2EE_Doc();


static PyObject *
PyvtkVector_IiLi2EE_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSize");
  void *vp = ap.GetSelfPointer(self);
  vtkVector<int, 2> *op = static_cast<vtkVector<int, 2> *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->GetSize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkVector_IiLi2EE_Methods[] = {
  {(char*)"GetSize", PyvtkVector_IiLi2EE_GetSize, 1,
   (char*)"V.GetSize() -> int\nC++: int GetSize()\n\nGet the size of the vtkVector.\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkVector_IiLi2EE_Type
extern PyTypeObject PyvtkVector_IiLi2EE_Type;
#define DECLARED_PyvtkVector_IiLi2EE_Type
#endif


static PyObject *
PyvtkVector_IiLi2EE_vtkVector_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkVector<int, 2> *op = new vtkVector<int, 2>();

    result = PyVTKSpecialObject_New("vtkVector_IiLi2EE", op);
    }

  return result;
}

static PyObject *
PyvtkVector_IiLi2EE_vtkVector_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkVector<int, 2> *op = new vtkVector<int, 2>(temp0);

    result = PyVTKSpecialObject_New("vtkVector_IiLi2EE", op);
    }

  return result;
}

static PyObject *
PyvtkVector_IiLi2EE_vtkVector_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  vtkVector<int, 2> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector_IiLi2EE"))
    {
    vtkVector<int, 2> *op = new vtkVector<int, 2>(*temp0);

    result = PyVTKSpecialObject_New("vtkVector_IiLi2EE", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector_IiLi2EE_vtkVector_Methods[] = {
  {NULL, PyvtkVector_IiLi2EE_vtkVector_s2, 1,
   (char*)"-O *i"},
  {NULL, PyvtkVector_IiLi2EE_vtkVector_s3, 1,
   (char*)"O &vtkVector_IiLi2EE"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkVector_IiLi2EE_vtkVector(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVector_IiLi2EE_vtkVector_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkVector_IiLi2EE_vtkVector_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkVector");
  return NULL;
}


static PyMethodDef PyvtkVector_IiLi2EE_NewMethod = \
{ (char*)"vtkVector_IiLi2EE", PyvtkVector_IiLi2EE_vtkVector, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkVector_IiLi2EE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkVector_IiLi2EE_vtkVector(NULL, args);
}
#endif

static void PyvtkVector_IiLi2EE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkVector<int, 2> *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

Py_ssize_t PyvtkVector_IiLi2EE_SequenceSize(PyObject *self)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkVector<int, 2> *op = static_cast<vtkVector<int, 2> *>(vp);

  return static_cast<Py_ssize_t>(op->GetSize());
}

PyObject *PyvtkVector_IiLi2EE_SequenceItem(PyObject *self, Py_ssize_t i)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkVector<int, 2> *op = static_cast<vtkVector<int, 2> *>(vp);

  int temp0;
  const int *tempr;
  PyObject *result = NULL;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
    {
    PyErr_SetString(PyExc_IndexError, "index out of range");
    }
  else
    {
    tempr = &(*op)[temp0];

    if (PyErr_Occurred() == NULL)
      {
      result = vtkPythonArgs::BuildValue(*tempr);
      }
    }

  return result;
}

int PyvtkVector_IiLi2EE_SequenceSetItem(
  PyObject *self, Py_ssize_t i, PyObject *arg1)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkVector<int, 2> *op = static_cast<vtkVector<int, 2> *>(vp);

  int temp0;
  int temp1;
  int result = -1;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
    {
    PyErr_SetString(PyExc_IndexError, "index out of range");
    }
  else if (vtkPythonArgs::GetValue(arg1, temp1))
    {
    (*op)[temp0] = temp1;

    if (PyErr_Occurred() == NULL)
      {
      result = 0;
      }
    }

  return result;
}

static PySequenceMethods PyvtkVector_IiLi2EE_AsSequence = {
  PyvtkVector_IiLi2EE_SequenceSize, // sq_length
  0, // sq_concat
  0, // sq_repeat
  PyvtkVector_IiLi2EE_SequenceItem, // sq_item
  0, // sq_slice
  PyvtkVector_IiLi2EE_SequenceSetItem, // sq_ass_item
  0, // sq_ass_slice
  0, // sq_contains
#if PY_VERSION_HEX >= 0x2000000
  0, // sq_inplace_concat
  0, // sq_inplace_repeat
#endif
};

static long PyvtkVector_IiLi2EE_Hash(PyObject *self)
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

PyTypeObject PyvtkVector_IiLi2EE_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkVector_IiLi2EE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVector_IiLi2EE_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  &PyvtkVector_IiLi2EE_AsSequence, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkVector_IiLi2EE_Hash, // tp_hash
  0, // tp_call
  PyVTKSpecialObject_SequenceString, // tp_str
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
  PyvtkVector_IiLi2EE_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkVector_IiLi2EE_New, // tp_new
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

static void *PyvtkVector_IiLi2EE_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkVector<int, 2>(*static_cast<const vtkVector<int, 2>*>(obj));
    }
  return 0;
}

static PyObject *PyvtkVector_IiLi2EE_TypeNew(const char *)
{
  return PyVTKSpecialType_New(
    &PyvtkVector_IiLi2EE_Type,
    PyvtkVector_IiLi2EE_Methods,
    PyvtkVector_IiLi2EE_vtkVector_Methods,
    &PyvtkVector_IiLi2EE_NewMethod,
    PyvtkVector_IiLi2EE_Doc(), &PyvtkVector_IiLi2EE_CCopy);
}

const char **PyvtkVector_IiLi2EE_Doc()
{
  static const char *docstring[] = {
    "vtkVector3 - templated base type for storage of 3D vectors.\n\n",
    "This class is a templated data type for storing and manipulating\nfixed size vectors, which can be used to represent two and three\ndimensional points. The memory layout is a contiguous array of the\nspecified type, such that a float[2] can be cast to a vtkVector2f and\nmanipulated. Also a float[6] could be cast and used as a\nvtkVector2f[3].\n\n",
    "V.vtkVector()\nC++: vtkVector()\nV.vtkVector((int, int))\nC++: explicit vtkVector(const int *init)\nV.vtkVector(vtkVector<int, 2>)\nC++: vtkVector(const &vtkVector<int, 2>)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkVector_IiLi3EE_Doc();


static PyObject *
PyvtkVector_IiLi3EE_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSize");
  void *vp = ap.GetSelfPointer(self);
  vtkVector<int, 3> *op = static_cast<vtkVector<int, 3> *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->GetSize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkVector_IiLi3EE_Methods[] = {
  {(char*)"GetSize", PyvtkVector_IiLi3EE_GetSize, 1,
   (char*)"V.GetSize() -> int\nC++: int GetSize()\n\nGet the size of the vtkVector.\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkVector_IiLi3EE_Type
extern PyTypeObject PyvtkVector_IiLi3EE_Type;
#define DECLARED_PyvtkVector_IiLi3EE_Type
#endif


static PyObject *
PyvtkVector_IiLi3EE_vtkVector_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkVector<int, 3> *op = new vtkVector<int, 3>();

    result = PyVTKSpecialObject_New("vtkVector_IiLi3EE", op);
    }

  return result;
}

static PyObject *
PyvtkVector_IiLi3EE_vtkVector_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  int temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkVector<int, 3> *op = new vtkVector<int, 3>(temp0);

    result = PyVTKSpecialObject_New("vtkVector_IiLi3EE", op);
    }

  return result;
}

static PyObject *
PyvtkVector_IiLi3EE_vtkVector_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  vtkVector<int, 3> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector_IiLi3EE"))
    {
    vtkVector<int, 3> *op = new vtkVector<int, 3>(*temp0);

    result = PyVTKSpecialObject_New("vtkVector_IiLi3EE", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector_IiLi3EE_vtkVector_Methods[] = {
  {NULL, PyvtkVector_IiLi3EE_vtkVector_s2, 1,
   (char*)"-O *i"},
  {NULL, PyvtkVector_IiLi3EE_vtkVector_s3, 1,
   (char*)"O &vtkVector_IiLi3EE"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkVector_IiLi3EE_vtkVector(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVector_IiLi3EE_vtkVector_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkVector_IiLi3EE_vtkVector_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkVector");
  return NULL;
}


static PyMethodDef PyvtkVector_IiLi3EE_NewMethod = \
{ (char*)"vtkVector_IiLi3EE", PyvtkVector_IiLi3EE_vtkVector, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkVector_IiLi3EE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkVector_IiLi3EE_vtkVector(NULL, args);
}
#endif

static void PyvtkVector_IiLi3EE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkVector<int, 3> *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

Py_ssize_t PyvtkVector_IiLi3EE_SequenceSize(PyObject *self)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkVector<int, 3> *op = static_cast<vtkVector<int, 3> *>(vp);

  return static_cast<Py_ssize_t>(op->GetSize());
}

PyObject *PyvtkVector_IiLi3EE_SequenceItem(PyObject *self, Py_ssize_t i)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkVector<int, 3> *op = static_cast<vtkVector<int, 3> *>(vp);

  int temp0;
  const int *tempr;
  PyObject *result = NULL;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
    {
    PyErr_SetString(PyExc_IndexError, "index out of range");
    }
  else
    {
    tempr = &(*op)[temp0];

    if (PyErr_Occurred() == NULL)
      {
      result = vtkPythonArgs::BuildValue(*tempr);
      }
    }

  return result;
}

int PyvtkVector_IiLi3EE_SequenceSetItem(
  PyObject *self, Py_ssize_t i, PyObject *arg1)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkVector<int, 3> *op = static_cast<vtkVector<int, 3> *>(vp);

  int temp0;
  int temp1;
  int result = -1;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
    {
    PyErr_SetString(PyExc_IndexError, "index out of range");
    }
  else if (vtkPythonArgs::GetValue(arg1, temp1))
    {
    (*op)[temp0] = temp1;

    if (PyErr_Occurred() == NULL)
      {
      result = 0;
      }
    }

  return result;
}

static PySequenceMethods PyvtkVector_IiLi3EE_AsSequence = {
  PyvtkVector_IiLi3EE_SequenceSize, // sq_length
  0, // sq_concat
  0, // sq_repeat
  PyvtkVector_IiLi3EE_SequenceItem, // sq_item
  0, // sq_slice
  PyvtkVector_IiLi3EE_SequenceSetItem, // sq_ass_item
  0, // sq_ass_slice
  0, // sq_contains
#if PY_VERSION_HEX >= 0x2000000
  0, // sq_inplace_concat
  0, // sq_inplace_repeat
#endif
};

static long PyvtkVector_IiLi3EE_Hash(PyObject *self)
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

PyTypeObject PyvtkVector_IiLi3EE_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkVector_IiLi3EE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVector_IiLi3EE_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  &PyvtkVector_IiLi3EE_AsSequence, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkVector_IiLi3EE_Hash, // tp_hash
  0, // tp_call
  PyVTKSpecialObject_SequenceString, // tp_str
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
  PyvtkVector_IiLi3EE_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkVector_IiLi3EE_New, // tp_new
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

static void *PyvtkVector_IiLi3EE_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkVector<int, 3>(*static_cast<const vtkVector<int, 3>*>(obj));
    }
  return 0;
}

static PyObject *PyvtkVector_IiLi3EE_TypeNew(const char *)
{
  return PyVTKSpecialType_New(
    &PyvtkVector_IiLi3EE_Type,
    PyvtkVector_IiLi3EE_Methods,
    PyvtkVector_IiLi3EE_vtkVector_Methods,
    &PyvtkVector_IiLi3EE_NewMethod,
    PyvtkVector_IiLi3EE_Doc(), &PyvtkVector_IiLi3EE_CCopy);
}

const char **PyvtkVector_IiLi3EE_Doc()
{
  static const char *docstring[] = {
    "vtkVector3 - templated base type for storage of 3D vectors.\n\n",
    "This class is a templated data type for storing and manipulating\nfixed size vectors, which can be used to represent two and three\ndimensional points. The memory layout is a contiguous array of the\nspecified type, such that a float[2] can be cast to a vtkVector2f and\nmanipulated. Also a float[6] could be cast and used as a\nvtkVector2f[3].\n\n",
    "V.vtkVector()\nC++: vtkVector()\nV.vtkVector((int, int, int))\nC++: explicit vtkVector(const int *init)\nV.vtkVector(vtkVector<int, 3>)\nC++: vtkVector(const &vtkVector<int, 3>)\n",
    NULL
  };

  return docstring;
}

static const char *PyvtkVector_Doc[] = {
    "vtkVector3 - templated base type for storage of 3D vectors.\n\n",
    "This class is a templated data type for storing and manipulating\nfixed size vectors, which can be used to represent two and three\ndimensional points. The memory layout is a contiguous array of the\nspecified type, such that a float[2] can be cast to a vtkVector2f and\nmanipulated. Also a float[6] could be cast and used as a\nvtkVector2f[3].\n\n",
    "\nProvided Types:\n\n",
    "  vtkVector[float64,3] => vtkVector<double, 3>\n",
    "  vtkVector[float32,3] => vtkVector<float, 3>\n",
    "  vtkVector[uint8,3] => vtkVector<unsigned char, 3>\n",
    "  vtkVector[float64,4] => vtkVector<double, 4>\n",
    "  vtkVector[float32,4] => vtkVector<float, 4>\n",
    "  vtkVector[uint8,4] => vtkVector<unsigned char, 4>\n",
    "  vtkVector[int32,4] => vtkVector<int, 4>\n",
    "  vtkVector[float64,2] => vtkVector<double, 2>\n",
    "  vtkVector[float32,2] => vtkVector<float, 2>\n",
    "  vtkVector[int32,2] => vtkVector<int, 2>\n",
    "  vtkVector[int32,3] => vtkVector<int, 3>\n",
    NULL
};

PyObject *PyvtkVector_TemplateNew(const char *modulename)
{
  PyObject *o;

  PyObject *temp = PyVTKTemplate_New("vtkVector", modulename,
                                     PyvtkVector_Doc);

  o = PyvtkVector_IdLi3EE_TypeNew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkVector_IfLi3EE_TypeNew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkVector_IhLi3EE_TypeNew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkVector_IdLi4EE_TypeNew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkVector_IfLi4EE_TypeNew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkVector_IhLi4EE_TypeNew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkVector_IiLi4EE_TypeNew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkVector_IdLi2EE_TypeNew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkVector_IfLi2EE_TypeNew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkVector_IiLi2EE_TypeNew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkVector_IiLi3EE_TypeNew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  return temp;
}


static const char **PyvtkVector2_IdE_Doc();


static PyObject *
PyvtkVector2_IdE_Set(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Set");
  void *vp = ap.GetSelfPointer(self);
  vtkVector2<double> *op = static_cast<vtkVector2<double> *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    op->Set(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVector2_IdE_SetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetX");
  void *vp = ap.GetSelfPointer(self);
  vtkVector2<double> *op = static_cast<vtkVector2<double> *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetX(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVector2_IdE_GetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetX");
  void *vp = ap.GetSelfPointer(self);
  vtkVector2<double> *op = static_cast<vtkVector2<double> *>(vp);

  const double *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = &op->GetX();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVector2_IdE_X(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "X");
  void *vp = ap.GetSelfPointer(self);
  vtkVector2<double> *op = static_cast<vtkVector2<double> *>(vp);

  const double *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = &op->X();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVector2_IdE_SetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetY");
  void *vp = ap.GetSelfPointer(self);
  vtkVector2<double> *op = static_cast<vtkVector2<double> *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetY(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVector2_IdE_GetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetY");
  void *vp = ap.GetSelfPointer(self);
  vtkVector2<double> *op = static_cast<vtkVector2<double> *>(vp);

  const double *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = &op->GetY();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVector2_IdE_Y(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Y");
  void *vp = ap.GetSelfPointer(self);
  vtkVector2<double> *op = static_cast<vtkVector2<double> *>(vp);

  const double *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = &op->Y();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkVector2_IdE_Methods[] = {
  {(char*)"Set", PyvtkVector2_IdE_Set, 1,
   (char*)"V.Set(float, float)\nC++: void Set(const double &x, const double &y)\n\nSet the x and y components of the vector.\n"},
  {(char*)"SetX", PyvtkVector2_IdE_SetX, 1,
   (char*)"V.SetX(float)\nC++: void SetX(const double &x)\n\nSet the x component of the vector, i.e. element 0.\n"},
  {(char*)"GetX", PyvtkVector2_IdE_GetX, 1,
   (char*)"V.GetX() -> float\nC++: const double &GetX()\n\nGet the x component of the vector, i.e. element 0.\n"},
  {(char*)"X", PyvtkVector2_IdE_X, 1,
   (char*)"V.X() -> float\nC++: const double &X()\n\nGet the x component of the vector, i.e. element 0.\n"},
  {(char*)"SetY", PyvtkVector2_IdE_SetY, 1,
   (char*)"V.SetY(float)\nC++: void SetY(const double &y)\n\nSet the y component of the vector, i.e. element 1.\n"},
  {(char*)"GetY", PyvtkVector2_IdE_GetY, 1,
   (char*)"V.GetY() -> float\nC++: const double &GetY()\n\nGet the y component of the vector, i.e. element 1.\n"},
  {(char*)"Y", PyvtkVector2_IdE_Y, 1,
   (char*)"V.Y() -> float\nC++: const double &Y()\n\nGet the y component of the vector, i.e. element 1.\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkVector2_IdE_Type
extern PyTypeObject PyvtkVector2_IdE_Type;
#define DECLARED_PyvtkVector2_IdE_Type
#endif

#ifndef DECLARED_PyvtkVector_IdLi2EE_Type
extern PyTypeObject PyvtkVector_IdLi2EE_Type;
#define DECLARED_PyvtkVector_IdLi2EE_Type
#endif


static PyObject *
PyvtkVector2_IdE_vtkVector2_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2");

  double temp0 = 0;
  double temp1 = 0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0, 2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    vtkVector2<double> *op = new vtkVector2<double>(temp0, temp1);

    result = PyVTKSpecialObject_New("vtkVector2_IdE", op);
    }

  return result;
}

static PyObject *
PyvtkVector2_IdE_vtkVector2_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2");

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkVector2<double> *op = new vtkVector2<double>(temp0);

    result = PyVTKSpecialObject_New("vtkVector2_IdE", op);
    }

  return result;
}

static PyObject *
PyvtkVector2_IdE_vtkVector2_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2");

  vtkVector2<double> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2_IdE"))
    {
    vtkVector2<double> *op = new vtkVector2<double>(*temp0);

    result = PyVTKSpecialObject_New("vtkVector2_IdE", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector2_IdE_vtkVector2_Methods[] = {
  {NULL, PyvtkVector2_IdE_vtkVector2_s1, 1,
   (char*)"|dd"},
  {NULL, PyvtkVector2_IdE_vtkVector2_s2, 1,
   (char*)"-O *d"},
  {NULL, PyvtkVector2_IdE_vtkVector2_s3, 1,
   (char*)"O &vtkVector2_IdE"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkVector2_IdE_vtkVector2(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVector2_IdE_vtkVector2_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
    case 2:
      return PyvtkVector2_IdE_vtkVector2_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkVector2");
  return NULL;
}


static PyMethodDef PyvtkVector2_IdE_NewMethod = \
{ (char*)"vtkVector2_IdE", PyvtkVector2_IdE_vtkVector2, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkVector2_IdE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkVector2_IdE_vtkVector2(NULL, args);
}
#endif

static void PyvtkVector2_IdE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkVector2<double> *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkVector2_IdE_Hash(PyObject *self)
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

PyTypeObject PyvtkVector2_IdE_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkVector2_IdE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVector2_IdE_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkVector2_IdE_Hash, // tp_hash
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
  PyvtkVector2_IdE_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyvtkVector_IdLi2EE_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkVector2_IdE_New, // tp_new
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

static void *PyvtkVector2_IdE_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkVector2<double>(*static_cast<const vtkVector2<double>*>(obj));
    }
  return 0;
}

static PyObject *PyvtkVector2_IdE_TypeNew(const char *)
{
  return PyVTKSpecialType_New(
    &PyvtkVector2_IdE_Type,
    PyvtkVector2_IdE_Methods,
    PyvtkVector2_IdE_vtkVector2_Methods,
    &PyvtkVector2_IdE_NewMethod,
    PyvtkVector2_IdE_Doc(), &PyvtkVector2_IdE_CCopy);
}

const char **PyvtkVector2_IdE_Doc()
{
  static const char *docstring[] = {
    "vtkVector3 - templated base type for storage of 3D vectors.\n\n",
    "Superclass: vtkVector[float64,2]\n\n",
    "This class is a templated data type for storing and manipulating\nfixed size vectors, which can be used to represent two and three\ndimensional points. The memory layout is a contiguous array of the\nspecified type, such that a float[2] can be cast to a vtkVector2f and\nmanipulated. Also a float[6] could be cast and used as a\nvtkVector2f[3].\n\n",
    "V.vtkVector2(float, float)\nC++: vtkVector2(const double &x=0, const double &y=0)\nV.vtkVector2((float, float))\nC++: explicit vtkVector2(const double *init)\nV.vtkVector2(vtkVector2<double>)\nC++: vtkVector2(const &vtkVector2<double>)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkVector2_IfE_Doc();


static PyObject *
PyvtkVector2_IfE_Set(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Set");
  void *vp = ap.GetSelfPointer(self);
  vtkVector2<float> *op = static_cast<vtkVector2<float> *>(vp);

  float temp0;
  float temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    op->Set(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVector2_IfE_SetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetX");
  void *vp = ap.GetSelfPointer(self);
  vtkVector2<float> *op = static_cast<vtkVector2<float> *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetX(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVector2_IfE_GetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetX");
  void *vp = ap.GetSelfPointer(self);
  vtkVector2<float> *op = static_cast<vtkVector2<float> *>(vp);

  const float *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = &op->GetX();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVector2_IfE_X(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "X");
  void *vp = ap.GetSelfPointer(self);
  vtkVector2<float> *op = static_cast<vtkVector2<float> *>(vp);

  const float *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = &op->X();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVector2_IfE_SetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetY");
  void *vp = ap.GetSelfPointer(self);
  vtkVector2<float> *op = static_cast<vtkVector2<float> *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetY(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVector2_IfE_GetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetY");
  void *vp = ap.GetSelfPointer(self);
  vtkVector2<float> *op = static_cast<vtkVector2<float> *>(vp);

  const float *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = &op->GetY();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVector2_IfE_Y(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Y");
  void *vp = ap.GetSelfPointer(self);
  vtkVector2<float> *op = static_cast<vtkVector2<float> *>(vp);

  const float *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = &op->Y();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkVector2_IfE_Methods[] = {
  {(char*)"Set", PyvtkVector2_IfE_Set, 1,
   (char*)"V.Set(float, float)\nC++: void Set(const float &x, const float &y)\n\nSet the x and y components of the vector.\n"},
  {(char*)"SetX", PyvtkVector2_IfE_SetX, 1,
   (char*)"V.SetX(float)\nC++: void SetX(const float &x)\n\nSet the x component of the vector, i.e. element 0.\n"},
  {(char*)"GetX", PyvtkVector2_IfE_GetX, 1,
   (char*)"V.GetX() -> float\nC++: const float &GetX()\n\nGet the x component of the vector, i.e. element 0.\n"},
  {(char*)"X", PyvtkVector2_IfE_X, 1,
   (char*)"V.X() -> float\nC++: const float &X()\n\nGet the x component of the vector, i.e. element 0.\n"},
  {(char*)"SetY", PyvtkVector2_IfE_SetY, 1,
   (char*)"V.SetY(float)\nC++: void SetY(const float &y)\n\nSet the y component of the vector, i.e. element 1.\n"},
  {(char*)"GetY", PyvtkVector2_IfE_GetY, 1,
   (char*)"V.GetY() -> float\nC++: const float &GetY()\n\nGet the y component of the vector, i.e. element 1.\n"},
  {(char*)"Y", PyvtkVector2_IfE_Y, 1,
   (char*)"V.Y() -> float\nC++: const float &Y()\n\nGet the y component of the vector, i.e. element 1.\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkVector2_IfE_Type
extern PyTypeObject PyvtkVector2_IfE_Type;
#define DECLARED_PyvtkVector2_IfE_Type
#endif

#ifndef DECLARED_PyvtkVector_IfLi2EE_Type
extern PyTypeObject PyvtkVector_IfLi2EE_Type;
#define DECLARED_PyvtkVector_IfLi2EE_Type
#endif


static PyObject *
PyvtkVector2_IfE_vtkVector2_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2");

  float temp0 = 0;
  float temp1 = 0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0, 2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    vtkVector2<float> *op = new vtkVector2<float>(temp0, temp1);

    result = PyVTKSpecialObject_New("vtkVector2_IfE", op);
    }

  return result;
}

static PyObject *
PyvtkVector2_IfE_vtkVector2_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2");

  float temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkVector2<float> *op = new vtkVector2<float>(temp0);

    result = PyVTKSpecialObject_New("vtkVector2_IfE", op);
    }

  return result;
}

static PyObject *
PyvtkVector2_IfE_vtkVector2_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2");

  vtkVector2<float> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2_IfE"))
    {
    vtkVector2<float> *op = new vtkVector2<float>(*temp0);

    result = PyVTKSpecialObject_New("vtkVector2_IfE", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector2_IfE_vtkVector2_Methods[] = {
  {NULL, PyvtkVector2_IfE_vtkVector2_s1, 1,
   (char*)"|ff"},
  {NULL, PyvtkVector2_IfE_vtkVector2_s2, 1,
   (char*)"-O *f"},
  {NULL, PyvtkVector2_IfE_vtkVector2_s3, 1,
   (char*)"O &vtkVector2_IfE"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkVector2_IfE_vtkVector2(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVector2_IfE_vtkVector2_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
    case 2:
      return PyvtkVector2_IfE_vtkVector2_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkVector2");
  return NULL;
}


static PyMethodDef PyvtkVector2_IfE_NewMethod = \
{ (char*)"vtkVector2_IfE", PyvtkVector2_IfE_vtkVector2, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkVector2_IfE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkVector2_IfE_vtkVector2(NULL, args);
}
#endif

static void PyvtkVector2_IfE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkVector2<float> *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkVector2_IfE_Hash(PyObject *self)
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

PyTypeObject PyvtkVector2_IfE_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkVector2_IfE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVector2_IfE_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkVector2_IfE_Hash, // tp_hash
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
  PyvtkVector2_IfE_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyvtkVector_IfLi2EE_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkVector2_IfE_New, // tp_new
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

static void *PyvtkVector2_IfE_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkVector2<float>(*static_cast<const vtkVector2<float>*>(obj));
    }
  return 0;
}

static PyObject *PyvtkVector2_IfE_TypeNew(const char *)
{
  return PyVTKSpecialType_New(
    &PyvtkVector2_IfE_Type,
    PyvtkVector2_IfE_Methods,
    PyvtkVector2_IfE_vtkVector2_Methods,
    &PyvtkVector2_IfE_NewMethod,
    PyvtkVector2_IfE_Doc(), &PyvtkVector2_IfE_CCopy);
}

const char **PyvtkVector2_IfE_Doc()
{
  static const char *docstring[] = {
    "vtkVector3 - templated base type for storage of 3D vectors.\n\n",
    "Superclass: vtkVector[float32,2]\n\n",
    "This class is a templated data type for storing and manipulating\nfixed size vectors, which can be used to represent two and three\ndimensional points. The memory layout is a contiguous array of the\nspecified type, such that a float[2] can be cast to a vtkVector2f and\nmanipulated. Also a float[6] could be cast and used as a\nvtkVector2f[3].\n\n",
    "V.vtkVector2(float, float)\nC++: vtkVector2(const float &x=0, const float &y=0)\nV.vtkVector2((float, float))\nC++: explicit vtkVector2(const float *init)\nV.vtkVector2(vtkVector2<float>)\nC++: vtkVector2(const &vtkVector2<float>)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkVector2_IiE_Doc();


static PyObject *
PyvtkVector2_IiE_Set(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Set");
  void *vp = ap.GetSelfPointer(self);
  vtkVector2<int> *op = static_cast<vtkVector2<int> *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    op->Set(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVector2_IiE_SetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetX");
  void *vp = ap.GetSelfPointer(self);
  vtkVector2<int> *op = static_cast<vtkVector2<int> *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetX(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVector2_IiE_GetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetX");
  void *vp = ap.GetSelfPointer(self);
  vtkVector2<int> *op = static_cast<vtkVector2<int> *>(vp);

  const int *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = &op->GetX();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVector2_IiE_X(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "X");
  void *vp = ap.GetSelfPointer(self);
  vtkVector2<int> *op = static_cast<vtkVector2<int> *>(vp);

  const int *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = &op->X();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVector2_IiE_SetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetY");
  void *vp = ap.GetSelfPointer(self);
  vtkVector2<int> *op = static_cast<vtkVector2<int> *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetY(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVector2_IiE_GetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetY");
  void *vp = ap.GetSelfPointer(self);
  vtkVector2<int> *op = static_cast<vtkVector2<int> *>(vp);

  const int *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = &op->GetY();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVector2_IiE_Y(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Y");
  void *vp = ap.GetSelfPointer(self);
  vtkVector2<int> *op = static_cast<vtkVector2<int> *>(vp);

  const int *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = &op->Y();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkVector2_IiE_Methods[] = {
  {(char*)"Set", PyvtkVector2_IiE_Set, 1,
   (char*)"V.Set(int, int)\nC++: void Set(const int &x, const int &y)\n\nSet the x and y components of the vector.\n"},
  {(char*)"SetX", PyvtkVector2_IiE_SetX, 1,
   (char*)"V.SetX(int)\nC++: void SetX(const int &x)\n\nSet the x component of the vector, i.e. element 0.\n"},
  {(char*)"GetX", PyvtkVector2_IiE_GetX, 1,
   (char*)"V.GetX() -> int\nC++: const int &GetX()\n\nGet the x component of the vector, i.e. element 0.\n"},
  {(char*)"X", PyvtkVector2_IiE_X, 1,
   (char*)"V.X() -> int\nC++: const int &X()\n\nGet the x component of the vector, i.e. element 0.\n"},
  {(char*)"SetY", PyvtkVector2_IiE_SetY, 1,
   (char*)"V.SetY(int)\nC++: void SetY(const int &y)\n\nSet the y component of the vector, i.e. element 1.\n"},
  {(char*)"GetY", PyvtkVector2_IiE_GetY, 1,
   (char*)"V.GetY() -> int\nC++: const int &GetY()\n\nGet the y component of the vector, i.e. element 1.\n"},
  {(char*)"Y", PyvtkVector2_IiE_Y, 1,
   (char*)"V.Y() -> int\nC++: const int &Y()\n\nGet the y component of the vector, i.e. element 1.\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkVector2_IiE_Type
extern PyTypeObject PyvtkVector2_IiE_Type;
#define DECLARED_PyvtkVector2_IiE_Type
#endif

#ifndef DECLARED_PyvtkVector_IiLi2EE_Type
extern PyTypeObject PyvtkVector_IiLi2EE_Type;
#define DECLARED_PyvtkVector_IiLi2EE_Type
#endif


static PyObject *
PyvtkVector2_IiE_vtkVector2_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2");

  int temp0 = 0;
  int temp1 = 0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0, 2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    vtkVector2<int> *op = new vtkVector2<int>(temp0, temp1);

    result = PyVTKSpecialObject_New("vtkVector2_IiE", op);
    }

  return result;
}

static PyObject *
PyvtkVector2_IiE_vtkVector2_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2");

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkVector2<int> *op = new vtkVector2<int>(temp0);

    result = PyVTKSpecialObject_New("vtkVector2_IiE", op);
    }

  return result;
}

static PyObject *
PyvtkVector2_IiE_vtkVector2_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2");

  vtkVector2<int> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2_IiE"))
    {
    vtkVector2<int> *op = new vtkVector2<int>(*temp0);

    result = PyVTKSpecialObject_New("vtkVector2_IiE", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector2_IiE_vtkVector2_Methods[] = {
  {NULL, PyvtkVector2_IiE_vtkVector2_s1, 1,
   (char*)"|ii"},
  {NULL, PyvtkVector2_IiE_vtkVector2_s2, 1,
   (char*)"-O *i"},
  {NULL, PyvtkVector2_IiE_vtkVector2_s3, 1,
   (char*)"O &vtkVector2_IiE"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkVector2_IiE_vtkVector2(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVector2_IiE_vtkVector2_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
    case 2:
      return PyvtkVector2_IiE_vtkVector2_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkVector2");
  return NULL;
}


static PyMethodDef PyvtkVector2_IiE_NewMethod = \
{ (char*)"vtkVector2_IiE", PyvtkVector2_IiE_vtkVector2, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkVector2_IiE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkVector2_IiE_vtkVector2(NULL, args);
}
#endif

static void PyvtkVector2_IiE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkVector2<int> *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkVector2_IiE_Hash(PyObject *self)
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

PyTypeObject PyvtkVector2_IiE_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkVector2_IiE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVector2_IiE_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkVector2_IiE_Hash, // tp_hash
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
  PyvtkVector2_IiE_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyvtkVector_IiLi2EE_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkVector2_IiE_New, // tp_new
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

static void *PyvtkVector2_IiE_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkVector2<int>(*static_cast<const vtkVector2<int>*>(obj));
    }
  return 0;
}

static PyObject *PyvtkVector2_IiE_TypeNew(const char *)
{
  return PyVTKSpecialType_New(
    &PyvtkVector2_IiE_Type,
    PyvtkVector2_IiE_Methods,
    PyvtkVector2_IiE_vtkVector2_Methods,
    &PyvtkVector2_IiE_NewMethod,
    PyvtkVector2_IiE_Doc(), &PyvtkVector2_IiE_CCopy);
}

const char **PyvtkVector2_IiE_Doc()
{
  static const char *docstring[] = {
    "vtkVector3 - templated base type for storage of 3D vectors.\n\n",
    "Superclass: vtkVector[int32,2]\n\n",
    "This class is a templated data type for storing and manipulating\nfixed size vectors, which can be used to represent two and three\ndimensional points. The memory layout is a contiguous array of the\nspecified type, such that a float[2] can be cast to a vtkVector2f and\nmanipulated. Also a float[6] could be cast and used as a\nvtkVector2f[3].\n\n",
    "V.vtkVector2(int, int)\nC++: vtkVector2(const int &x=0, const int &y=0)\nV.vtkVector2((int, int))\nC++: explicit vtkVector2(const int *init)\nV.vtkVector2(vtkVector2<int>)\nC++: vtkVector2(const &vtkVector2<int>)\n",
    NULL
  };

  return docstring;
}

static const char *PyvtkVector2_Doc[] = {
    "vtkVector3 - templated base type for storage of 3D vectors.\n\n",
    "Superclass: vtkVector[T,2]\n\n",
    "This class is a templated data type for storing and manipulating\nfixed size vectors, which can be used to represent two and three\ndimensional points. The memory layout is a contiguous array of the\nspecified type, such that a float[2] can be cast to a vtkVector2f and\nmanipulated. Also a float[6] could be cast and used as a\nvtkVector2f[3].\n\n",
    "\nProvided Types:\n\n",
    "  vtkVector2[float64] => vtkVector2<double>\n",
    "  vtkVector2[float32] => vtkVector2<float>\n",
    "  vtkVector2[int32] => vtkVector2<int>\n",
    NULL
};

PyObject *PyvtkVector2_TemplateNew(const char *modulename)
{
  PyObject *o;

  PyObject *temp = PyVTKTemplate_New("vtkVector2", modulename,
                                     PyvtkVector2_Doc);

  o = PyvtkVector2_IdE_TypeNew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkVector2_IfE_TypeNew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkVector2_IiE_TypeNew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  return temp;
}


static const char **PyvtkVector3_IdE_Doc();


static PyObject *
PyvtkVector3_IdE_Set(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Set");
  void *vp = ap.GetSelfPointer(self);
  vtkVector3<double> *op = static_cast<vtkVector3<double> *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    op->Set(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVector3_IdE_SetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetX");
  void *vp = ap.GetSelfPointer(self);
  vtkVector3<double> *op = static_cast<vtkVector3<double> *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetX(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVector3_IdE_GetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetX");
  void *vp = ap.GetSelfPointer(self);
  vtkVector3<double> *op = static_cast<vtkVector3<double> *>(vp);

  const double *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = &op->GetX();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVector3_IdE_X(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "X");
  void *vp = ap.GetSelfPointer(self);
  vtkVector3<double> *op = static_cast<vtkVector3<double> *>(vp);

  const double *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = &op->X();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVector3_IdE_SetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetY");
  void *vp = ap.GetSelfPointer(self);
  vtkVector3<double> *op = static_cast<vtkVector3<double> *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetY(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVector3_IdE_GetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetY");
  void *vp = ap.GetSelfPointer(self);
  vtkVector3<double> *op = static_cast<vtkVector3<double> *>(vp);

  const double *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = &op->GetY();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVector3_IdE_Y(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Y");
  void *vp = ap.GetSelfPointer(self);
  vtkVector3<double> *op = static_cast<vtkVector3<double> *>(vp);

  const double *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = &op->Y();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVector3_IdE_SetZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetZ");
  void *vp = ap.GetSelfPointer(self);
  vtkVector3<double> *op = static_cast<vtkVector3<double> *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetZ(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVector3_IdE_GetZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetZ");
  void *vp = ap.GetSelfPointer(self);
  vtkVector3<double> *op = static_cast<vtkVector3<double> *>(vp);

  const double *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = &op->GetZ();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVector3_IdE_Z(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Z");
  void *vp = ap.GetSelfPointer(self);
  vtkVector3<double> *op = static_cast<vtkVector3<double> *>(vp);

  const double *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = &op->Z();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkVector3_IdE_Methods[] = {
  {(char*)"Set", PyvtkVector3_IdE_Set, 1,
   (char*)"V.Set(float, float, float)\nC++: void Set(const double &x, const double &y, const double &z)\n\nSet the x, y and z components of the vector.\n"},
  {(char*)"SetX", PyvtkVector3_IdE_SetX, 1,
   (char*)"V.SetX(float)\nC++: void SetX(const double &x)\n\nSet the x component of the vector, i.e. element 0.\n"},
  {(char*)"GetX", PyvtkVector3_IdE_GetX, 1,
   (char*)"V.GetX() -> float\nC++: const double &GetX()\n\nGet the x component of the vector, i.e. element 0.\n"},
  {(char*)"X", PyvtkVector3_IdE_X, 1,
   (char*)"V.X() -> float\nC++: const double &X()\n\nGet the x component of the vector, i.e. element 0.\n"},
  {(char*)"SetY", PyvtkVector3_IdE_SetY, 1,
   (char*)"V.SetY(float)\nC++: void SetY(const double &y)\n\nSet the y component of the vector, i.e. element 1.\n"},
  {(char*)"GetY", PyvtkVector3_IdE_GetY, 1,
   (char*)"V.GetY() -> float\nC++: const double &GetY()\n\nGet the y component of the vector, i.e. element 1.\n"},
  {(char*)"Y", PyvtkVector3_IdE_Y, 1,
   (char*)"V.Y() -> float\nC++: const double &Y()\n\nGet the y component of the vector, i.e. element 1.\n"},
  {(char*)"SetZ", PyvtkVector3_IdE_SetZ, 1,
   (char*)"V.SetZ(float)\nC++: void SetZ(const double &z)\n\nSet the z component of the vector, i.e. element 2.\n"},
  {(char*)"GetZ", PyvtkVector3_IdE_GetZ, 1,
   (char*)"V.GetZ() -> float\nC++: const double &GetZ()\n\nGet the z component of the vector, i.e. element 2.\n"},
  {(char*)"Z", PyvtkVector3_IdE_Z, 1,
   (char*)"V.Z() -> float\nC++: const double &Z()\n\nGet the z component of the vector, i.e. element 2.\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkVector3_IdE_Type
extern PyTypeObject PyvtkVector3_IdE_Type;
#define DECLARED_PyvtkVector3_IdE_Type
#endif

#ifndef DECLARED_PyvtkVector_IdLi3EE_Type
extern PyTypeObject PyvtkVector_IdLi3EE_Type;
#define DECLARED_PyvtkVector_IdLi3EE_Type
#endif


static PyObject *
PyvtkVector3_IdE_vtkVector3_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3");

  double temp0 = 0;
  double temp1 = 0;
  double temp2 = 0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0, 3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    vtkVector3<double> *op = new vtkVector3<double>(temp0, temp1, temp2);

    result = PyVTKSpecialObject_New("vtkVector3_IdE", op);
    }

  return result;
}

static PyObject *
PyvtkVector3_IdE_vtkVector3_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3");

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkVector3<double> *op = new vtkVector3<double>(temp0);

    result = PyVTKSpecialObject_New("vtkVector3_IdE", op);
    }

  return result;
}

static PyObject *
PyvtkVector3_IdE_vtkVector3_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3");

  vtkVector3<double> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector3_IdE"))
    {
    vtkVector3<double> *op = new vtkVector3<double>(*temp0);

    result = PyVTKSpecialObject_New("vtkVector3_IdE", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector3_IdE_vtkVector3_Methods[] = {
  {NULL, PyvtkVector3_IdE_vtkVector3_s1, 1,
   (char*)"|ddd"},
  {NULL, PyvtkVector3_IdE_vtkVector3_s2, 1,
   (char*)"-O *d"},
  {NULL, PyvtkVector3_IdE_vtkVector3_s3, 1,
   (char*)"O &vtkVector3_IdE"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkVector3_IdE_vtkVector3(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVector3_IdE_vtkVector3_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
    case 2:
    case 3:
      return PyvtkVector3_IdE_vtkVector3_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkVector3");
  return NULL;
}


static PyMethodDef PyvtkVector3_IdE_NewMethod = \
{ (char*)"vtkVector3_IdE", PyvtkVector3_IdE_vtkVector3, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkVector3_IdE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkVector3_IdE_vtkVector3(NULL, args);
}
#endif

static void PyvtkVector3_IdE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkVector3<double> *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkVector3_IdE_Hash(PyObject *self)
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

PyTypeObject PyvtkVector3_IdE_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkVector3_IdE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVector3_IdE_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkVector3_IdE_Hash, // tp_hash
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
  PyvtkVector3_IdE_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyvtkVector_IdLi3EE_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkVector3_IdE_New, // tp_new
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

static void *PyvtkVector3_IdE_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkVector3<double>(*static_cast<const vtkVector3<double>*>(obj));
    }
  return 0;
}

static PyObject *PyvtkVector3_IdE_TypeNew(const char *)
{
  return PyVTKSpecialType_New(
    &PyvtkVector3_IdE_Type,
    PyvtkVector3_IdE_Methods,
    PyvtkVector3_IdE_vtkVector3_Methods,
    &PyvtkVector3_IdE_NewMethod,
    PyvtkVector3_IdE_Doc(), &PyvtkVector3_IdE_CCopy);
}

const char **PyvtkVector3_IdE_Doc()
{
  static const char *docstring[] = {
    "vtkVector3 - templated base type for storage of 3D vectors.\n\n",
    "Superclass: vtkVector[float64,3]\n\n",
    "This class is a templated data type for storing and manipulating\nfixed size vectors, which can be used to represent two and three\ndimensional points. The memory layout is a contiguous array of the\nspecified type, such that a float[2] can be cast to a vtkVector2f and\nmanipulated. Also a float[6] could be cast and used as a\nvtkVector2f[3].\n\n",
    "V.vtkVector3(float, float, float)\nC++: vtkVector3(const double &x=0, const double &y=0,\n    const double &z=0)\nV.vtkVector3((float, float, float))\nC++: explicit vtkVector3(const double *init)\nV.vtkVector3(vtkVector3<double>)\nC++: vtkVector3(const &vtkVector3<double>)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkVector3_IfE_Doc();


static PyObject *
PyvtkVector3_IfE_Set(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Set");
  void *vp = ap.GetSelfPointer(self);
  vtkVector3<float> *op = static_cast<vtkVector3<float> *>(vp);

  float temp0;
  float temp1;
  float temp2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    op->Set(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVector3_IfE_SetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetX");
  void *vp = ap.GetSelfPointer(self);
  vtkVector3<float> *op = static_cast<vtkVector3<float> *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetX(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVector3_IfE_GetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetX");
  void *vp = ap.GetSelfPointer(self);
  vtkVector3<float> *op = static_cast<vtkVector3<float> *>(vp);

  const float *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = &op->GetX();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVector3_IfE_X(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "X");
  void *vp = ap.GetSelfPointer(self);
  vtkVector3<float> *op = static_cast<vtkVector3<float> *>(vp);

  const float *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = &op->X();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVector3_IfE_SetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetY");
  void *vp = ap.GetSelfPointer(self);
  vtkVector3<float> *op = static_cast<vtkVector3<float> *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetY(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVector3_IfE_GetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetY");
  void *vp = ap.GetSelfPointer(self);
  vtkVector3<float> *op = static_cast<vtkVector3<float> *>(vp);

  const float *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = &op->GetY();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVector3_IfE_Y(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Y");
  void *vp = ap.GetSelfPointer(self);
  vtkVector3<float> *op = static_cast<vtkVector3<float> *>(vp);

  const float *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = &op->Y();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVector3_IfE_SetZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetZ");
  void *vp = ap.GetSelfPointer(self);
  vtkVector3<float> *op = static_cast<vtkVector3<float> *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetZ(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVector3_IfE_GetZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetZ");
  void *vp = ap.GetSelfPointer(self);
  vtkVector3<float> *op = static_cast<vtkVector3<float> *>(vp);

  const float *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = &op->GetZ();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVector3_IfE_Z(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Z");
  void *vp = ap.GetSelfPointer(self);
  vtkVector3<float> *op = static_cast<vtkVector3<float> *>(vp);

  const float *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = &op->Z();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkVector3_IfE_Methods[] = {
  {(char*)"Set", PyvtkVector3_IfE_Set, 1,
   (char*)"V.Set(float, float, float)\nC++: void Set(const float &x, const float &y, const float &z)\n\nSet the x, y and z components of the vector.\n"},
  {(char*)"SetX", PyvtkVector3_IfE_SetX, 1,
   (char*)"V.SetX(float)\nC++: void SetX(const float &x)\n\nSet the x component of the vector, i.e. element 0.\n"},
  {(char*)"GetX", PyvtkVector3_IfE_GetX, 1,
   (char*)"V.GetX() -> float\nC++: const float &GetX()\n\nGet the x component of the vector, i.e. element 0.\n"},
  {(char*)"X", PyvtkVector3_IfE_X, 1,
   (char*)"V.X() -> float\nC++: const float &X()\n\nGet the x component of the vector, i.e. element 0.\n"},
  {(char*)"SetY", PyvtkVector3_IfE_SetY, 1,
   (char*)"V.SetY(float)\nC++: void SetY(const float &y)\n\nSet the y component of the vector, i.e. element 1.\n"},
  {(char*)"GetY", PyvtkVector3_IfE_GetY, 1,
   (char*)"V.GetY() -> float\nC++: const float &GetY()\n\nGet the y component of the vector, i.e. element 1.\n"},
  {(char*)"Y", PyvtkVector3_IfE_Y, 1,
   (char*)"V.Y() -> float\nC++: const float &Y()\n\nGet the y component of the vector, i.e. element 1.\n"},
  {(char*)"SetZ", PyvtkVector3_IfE_SetZ, 1,
   (char*)"V.SetZ(float)\nC++: void SetZ(const float &z)\n\nSet the z component of the vector, i.e. element 2.\n"},
  {(char*)"GetZ", PyvtkVector3_IfE_GetZ, 1,
   (char*)"V.GetZ() -> float\nC++: const float &GetZ()\n\nGet the z component of the vector, i.e. element 2.\n"},
  {(char*)"Z", PyvtkVector3_IfE_Z, 1,
   (char*)"V.Z() -> float\nC++: const float &Z()\n\nGet the z component of the vector, i.e. element 2.\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkVector3_IfE_Type
extern PyTypeObject PyvtkVector3_IfE_Type;
#define DECLARED_PyvtkVector3_IfE_Type
#endif

#ifndef DECLARED_PyvtkVector_IfLi3EE_Type
extern PyTypeObject PyvtkVector_IfLi3EE_Type;
#define DECLARED_PyvtkVector_IfLi3EE_Type
#endif


static PyObject *
PyvtkVector3_IfE_vtkVector3_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3");

  float temp0 = 0;
  float temp1 = 0;
  float temp2 = 0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0, 3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    vtkVector3<float> *op = new vtkVector3<float>(temp0, temp1, temp2);

    result = PyVTKSpecialObject_New("vtkVector3_IfE", op);
    }

  return result;
}

static PyObject *
PyvtkVector3_IfE_vtkVector3_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3");

  float temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkVector3<float> *op = new vtkVector3<float>(temp0);

    result = PyVTKSpecialObject_New("vtkVector3_IfE", op);
    }

  return result;
}

static PyObject *
PyvtkVector3_IfE_vtkVector3_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3");

  vtkVector3<float> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector3_IfE"))
    {
    vtkVector3<float> *op = new vtkVector3<float>(*temp0);

    result = PyVTKSpecialObject_New("vtkVector3_IfE", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector3_IfE_vtkVector3_Methods[] = {
  {NULL, PyvtkVector3_IfE_vtkVector3_s1, 1,
   (char*)"|fff"},
  {NULL, PyvtkVector3_IfE_vtkVector3_s2, 1,
   (char*)"-O *f"},
  {NULL, PyvtkVector3_IfE_vtkVector3_s3, 1,
   (char*)"O &vtkVector3_IfE"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkVector3_IfE_vtkVector3(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVector3_IfE_vtkVector3_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
    case 2:
    case 3:
      return PyvtkVector3_IfE_vtkVector3_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkVector3");
  return NULL;
}


static PyMethodDef PyvtkVector3_IfE_NewMethod = \
{ (char*)"vtkVector3_IfE", PyvtkVector3_IfE_vtkVector3, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkVector3_IfE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkVector3_IfE_vtkVector3(NULL, args);
}
#endif

static void PyvtkVector3_IfE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkVector3<float> *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkVector3_IfE_Hash(PyObject *self)
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

PyTypeObject PyvtkVector3_IfE_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkVector3_IfE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVector3_IfE_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkVector3_IfE_Hash, // tp_hash
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
  PyvtkVector3_IfE_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyvtkVector_IfLi3EE_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkVector3_IfE_New, // tp_new
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

static void *PyvtkVector3_IfE_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkVector3<float>(*static_cast<const vtkVector3<float>*>(obj));
    }
  return 0;
}

static PyObject *PyvtkVector3_IfE_TypeNew(const char *)
{
  return PyVTKSpecialType_New(
    &PyvtkVector3_IfE_Type,
    PyvtkVector3_IfE_Methods,
    PyvtkVector3_IfE_vtkVector3_Methods,
    &PyvtkVector3_IfE_NewMethod,
    PyvtkVector3_IfE_Doc(), &PyvtkVector3_IfE_CCopy);
}

const char **PyvtkVector3_IfE_Doc()
{
  static const char *docstring[] = {
    "vtkVector3 - templated base type for storage of 3D vectors.\n\n",
    "Superclass: vtkVector[float32,3]\n\n",
    "This class is a templated data type for storing and manipulating\nfixed size vectors, which can be used to represent two and three\ndimensional points. The memory layout is a contiguous array of the\nspecified type, such that a float[2] can be cast to a vtkVector2f and\nmanipulated. Also a float[6] could be cast and used as a\nvtkVector2f[3].\n\n",
    "V.vtkVector3(float, float, float)\nC++: vtkVector3(const float &x=0, const float &y=0, const float &z=0)\nV.vtkVector3((float, float, float))\nC++: explicit vtkVector3(const float *init)\nV.vtkVector3(vtkVector3<float>)\nC++: vtkVector3(const &vtkVector3<float>)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkVector3_IiE_Doc();


static PyObject *
PyvtkVector3_IiE_Set(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Set");
  void *vp = ap.GetSelfPointer(self);
  vtkVector3<int> *op = static_cast<vtkVector3<int> *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    op->Set(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVector3_IiE_SetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetX");
  void *vp = ap.GetSelfPointer(self);
  vtkVector3<int> *op = static_cast<vtkVector3<int> *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetX(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVector3_IiE_GetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetX");
  void *vp = ap.GetSelfPointer(self);
  vtkVector3<int> *op = static_cast<vtkVector3<int> *>(vp);

  const int *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = &op->GetX();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVector3_IiE_X(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "X");
  void *vp = ap.GetSelfPointer(self);
  vtkVector3<int> *op = static_cast<vtkVector3<int> *>(vp);

  const int *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = &op->X();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVector3_IiE_SetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetY");
  void *vp = ap.GetSelfPointer(self);
  vtkVector3<int> *op = static_cast<vtkVector3<int> *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetY(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVector3_IiE_GetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetY");
  void *vp = ap.GetSelfPointer(self);
  vtkVector3<int> *op = static_cast<vtkVector3<int> *>(vp);

  const int *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = &op->GetY();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVector3_IiE_Y(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Y");
  void *vp = ap.GetSelfPointer(self);
  vtkVector3<int> *op = static_cast<vtkVector3<int> *>(vp);

  const int *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = &op->Y();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVector3_IiE_SetZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetZ");
  void *vp = ap.GetSelfPointer(self);
  vtkVector3<int> *op = static_cast<vtkVector3<int> *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetZ(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVector3_IiE_GetZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetZ");
  void *vp = ap.GetSelfPointer(self);
  vtkVector3<int> *op = static_cast<vtkVector3<int> *>(vp);

  const int *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = &op->GetZ();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVector3_IiE_Z(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Z");
  void *vp = ap.GetSelfPointer(self);
  vtkVector3<int> *op = static_cast<vtkVector3<int> *>(vp);

  const int *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = &op->Z();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkVector3_IiE_Methods[] = {
  {(char*)"Set", PyvtkVector3_IiE_Set, 1,
   (char*)"V.Set(int, int, int)\nC++: void Set(const int &x, const int &y, const int &z)\n\nSet the x, y and z components of the vector.\n"},
  {(char*)"SetX", PyvtkVector3_IiE_SetX, 1,
   (char*)"V.SetX(int)\nC++: void SetX(const int &x)\n\nSet the x component of the vector, i.e. element 0.\n"},
  {(char*)"GetX", PyvtkVector3_IiE_GetX, 1,
   (char*)"V.GetX() -> int\nC++: const int &GetX()\n\nGet the x component of the vector, i.e. element 0.\n"},
  {(char*)"X", PyvtkVector3_IiE_X, 1,
   (char*)"V.X() -> int\nC++: const int &X()\n\nGet the x component of the vector, i.e. element 0.\n"},
  {(char*)"SetY", PyvtkVector3_IiE_SetY, 1,
   (char*)"V.SetY(int)\nC++: void SetY(const int &y)\n\nSet the y component of the vector, i.e. element 1.\n"},
  {(char*)"GetY", PyvtkVector3_IiE_GetY, 1,
   (char*)"V.GetY() -> int\nC++: const int &GetY()\n\nGet the y component of the vector, i.e. element 1.\n"},
  {(char*)"Y", PyvtkVector3_IiE_Y, 1,
   (char*)"V.Y() -> int\nC++: const int &Y()\n\nGet the y component of the vector, i.e. element 1.\n"},
  {(char*)"SetZ", PyvtkVector3_IiE_SetZ, 1,
   (char*)"V.SetZ(int)\nC++: void SetZ(const int &z)\n\nSet the z component of the vector, i.e. element 2.\n"},
  {(char*)"GetZ", PyvtkVector3_IiE_GetZ, 1,
   (char*)"V.GetZ() -> int\nC++: const int &GetZ()\n\nGet the z component of the vector, i.e. element 2.\n"},
  {(char*)"Z", PyvtkVector3_IiE_Z, 1,
   (char*)"V.Z() -> int\nC++: const int &Z()\n\nGet the z component of the vector, i.e. element 2.\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkVector3_IiE_Type
extern PyTypeObject PyvtkVector3_IiE_Type;
#define DECLARED_PyvtkVector3_IiE_Type
#endif

#ifndef DECLARED_PyvtkVector_IiLi3EE_Type
extern PyTypeObject PyvtkVector_IiLi3EE_Type;
#define DECLARED_PyvtkVector_IiLi3EE_Type
#endif


static PyObject *
PyvtkVector3_IiE_vtkVector3_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3");

  int temp0 = 0;
  int temp1 = 0;
  int temp2 = 0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0, 3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    vtkVector3<int> *op = new vtkVector3<int>(temp0, temp1, temp2);

    result = PyVTKSpecialObject_New("vtkVector3_IiE", op);
    }

  return result;
}

static PyObject *
PyvtkVector3_IiE_vtkVector3_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3");

  int temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkVector3<int> *op = new vtkVector3<int>(temp0);

    result = PyVTKSpecialObject_New("vtkVector3_IiE", op);
    }

  return result;
}

static PyObject *
PyvtkVector3_IiE_vtkVector3_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3");

  vtkVector3<int> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector3_IiE"))
    {
    vtkVector3<int> *op = new vtkVector3<int>(*temp0);

    result = PyVTKSpecialObject_New("vtkVector3_IiE", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector3_IiE_vtkVector3_Methods[] = {
  {NULL, PyvtkVector3_IiE_vtkVector3_s1, 1,
   (char*)"|iii"},
  {NULL, PyvtkVector3_IiE_vtkVector3_s2, 1,
   (char*)"-O *i"},
  {NULL, PyvtkVector3_IiE_vtkVector3_s3, 1,
   (char*)"O &vtkVector3_IiE"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkVector3_IiE_vtkVector3(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVector3_IiE_vtkVector3_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
    case 2:
    case 3:
      return PyvtkVector3_IiE_vtkVector3_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkVector3");
  return NULL;
}


static PyMethodDef PyvtkVector3_IiE_NewMethod = \
{ (char*)"vtkVector3_IiE", PyvtkVector3_IiE_vtkVector3, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkVector3_IiE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkVector3_IiE_vtkVector3(NULL, args);
}
#endif

static void PyvtkVector3_IiE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkVector3<int> *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkVector3_IiE_Hash(PyObject *self)
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

PyTypeObject PyvtkVector3_IiE_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkVector3_IiE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVector3_IiE_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkVector3_IiE_Hash, // tp_hash
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
  PyvtkVector3_IiE_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyvtkVector_IiLi3EE_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkVector3_IiE_New, // tp_new
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

static void *PyvtkVector3_IiE_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkVector3<int>(*static_cast<const vtkVector3<int>*>(obj));
    }
  return 0;
}

static PyObject *PyvtkVector3_IiE_TypeNew(const char *)
{
  return PyVTKSpecialType_New(
    &PyvtkVector3_IiE_Type,
    PyvtkVector3_IiE_Methods,
    PyvtkVector3_IiE_vtkVector3_Methods,
    &PyvtkVector3_IiE_NewMethod,
    PyvtkVector3_IiE_Doc(), &PyvtkVector3_IiE_CCopy);
}

const char **PyvtkVector3_IiE_Doc()
{
  static const char *docstring[] = {
    "vtkVector3 - templated base type for storage of 3D vectors.\n\n",
    "Superclass: vtkVector[int32,3]\n\n",
    "This class is a templated data type for storing and manipulating\nfixed size vectors, which can be used to represent two and three\ndimensional points. The memory layout is a contiguous array of the\nspecified type, such that a float[2] can be cast to a vtkVector2f and\nmanipulated. Also a float[6] could be cast and used as a\nvtkVector2f[3].\n\n",
    "V.vtkVector3(int, int, int)\nC++: vtkVector3(const int &x=0, const int &y=0, const int &z=0)\nV.vtkVector3((int, int, int))\nC++: explicit vtkVector3(const int *init)\nV.vtkVector3(vtkVector3<int>)\nC++: vtkVector3(const &vtkVector3<int>)\n",
    NULL
  };

  return docstring;
}

static const char *PyvtkVector3_Doc[] = {
    "vtkVector3 - templated base type for storage of 3D vectors.\n\n",
    "Superclass: vtkVector[T,3]\n\n",
    "This class is a templated data type for storing and manipulating\nfixed size vectors, which can be used to represent two and three\ndimensional points. The memory layout is a contiguous array of the\nspecified type, such that a float[2] can be cast to a vtkVector2f and\nmanipulated. Also a float[6] could be cast and used as a\nvtkVector2f[3].\n\n",
    "\nProvided Types:\n\n",
    "  vtkVector3[float64] => vtkVector3<double>\n",
    "  vtkVector3[float32] => vtkVector3<float>\n",
    "  vtkVector3[int32] => vtkVector3<int>\n",
    NULL
};

PyObject *PyvtkVector3_TemplateNew(const char *modulename)
{
  PyObject *o;

  PyObject *temp = PyVTKTemplate_New("vtkVector3", modulename,
                                     PyvtkVector3_Doc);

  o = PyvtkVector3_IdE_TypeNew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkVector3_IfE_TypeNew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkVector3_IiE_TypeNew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  return temp;
}


static const char **PyvtkVector2i_Doc();

static PyMethodDef PyvtkVector2i_Methods[] = {
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkVector2i_Type
extern PyTypeObject PyvtkVector2i_Type;
#define DECLARED_PyvtkVector2i_Type
#endif

#ifndef DECLARED_PyvtkVector2_IiE_Type
extern PyTypeObject PyvtkVector2_IiE_Type;
#define DECLARED_PyvtkVector2_IiE_Type
#endif


static PyObject *
PyvtkVector2i_vtkVector2i_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2i");

  int temp0 = 0;
  int temp1 = 0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0, 2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    vtkVector2i *op = new vtkVector2i(temp0, temp1);

    result = PyVTKSpecialObject_New("vtkVector2i", op);
    }

  return result;
}

static PyObject *
PyvtkVector2i_vtkVector2i_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2i");

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkVector2i *op = new vtkVector2i(temp0);

    result = PyVTKSpecialObject_New("vtkVector2i", op);
    }

  return result;
}

static PyObject *
PyvtkVector2i_vtkVector2i_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2i");

  vtkVector2i *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2i"))
    {
    vtkVector2i *op = new vtkVector2i(*temp0);

    result = PyVTKSpecialObject_New("vtkVector2i", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector2i_vtkVector2i_Methods[] = {
  {NULL, PyvtkVector2i_vtkVector2i_s1, 1,
   (char*)"|ii"},
  {NULL, PyvtkVector2i_vtkVector2i_s2, 1,
   (char*)"-O *i"},
  {NULL, PyvtkVector2i_vtkVector2i_s3, 1,
   (char*)"O &vtkVector2i"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkVector2i_vtkVector2i(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVector2i_vtkVector2i_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
    case 2:
      return PyvtkVector2i_vtkVector2i_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkVector2i");
  return NULL;
}


static PyMethodDef PyvtkVector2i_NewMethod = \
{ (char*)"vtkVector2i", PyvtkVector2i_vtkVector2i, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkVector2i_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkVector2i_vtkVector2i(NULL, args);
}
#endif

static void PyvtkVector2i_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkVector2i *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkVector2i_Hash(PyObject *self)
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

PyTypeObject PyvtkVector2i_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkVector2i", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVector2i_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkVector2i_Hash, // tp_hash
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
  PyvtkVector2i_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyvtkVector2_IiE_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkVector2i_New, // tp_new
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

static void *PyvtkVector2i_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkVector2i(*static_cast<const vtkVector2i*>(obj));
    }
  return 0;
}

static PyObject *PyvtkVector2i_TypeNew(const char *)
{
  return PyVTKSpecialType_New(
    &PyvtkVector2i_Type,
    PyvtkVector2i_Methods,
    PyvtkVector2i_vtkVector2i_Methods,
    &PyvtkVector2i_NewMethod,
    PyvtkVector2i_Doc(), &PyvtkVector2i_CCopy);
}

const char **PyvtkVector2i_Doc()
{
  static const char *docstring[] = {
    "vtkVector3 - templated base type for storage of 3D vectors.\n\n",
    "Superclass: vtkVector2[int32]\n\n",
    "This class is a templated data type for storing and manipulating\nfixed size vectors, which can be used to represent two and three\ndimensional points. The memory layout is a contiguous array of the\nspecified type, such that a float[2] can be cast to a vtkVector2f and\nmanipulated. Also a float[6] could be cast and used as a\nvtkVector2f[3].\n\n",
    "V.vtkVector2i(int, int)\nC++: vtkVector2i(int x=0, int y=0)\nV.vtkVector2i((int, int))\nC++: explicit vtkVector2i(const int *init)\nV.vtkVector2i(vtkVector2i)\nC++: vtkVector2i(const &vtkVector2i)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkVector2f_Doc();

static PyMethodDef PyvtkVector2f_Methods[] = {
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkVector2f_Type
extern PyTypeObject PyvtkVector2f_Type;
#define DECLARED_PyvtkVector2f_Type
#endif

#ifndef DECLARED_PyvtkVector2_IfE_Type
extern PyTypeObject PyvtkVector2_IfE_Type;
#define DECLARED_PyvtkVector2_IfE_Type
#endif


static PyObject *
PyvtkVector2f_vtkVector2f_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2f");

  float temp0 = 0.0;
  float temp1 = 0.0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0, 2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    vtkVector2f *op = new vtkVector2f(temp0, temp1);

    result = PyVTKSpecialObject_New("vtkVector2f", op);
    }

  return result;
}

static PyObject *
PyvtkVector2f_vtkVector2f_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2f");

  float temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkVector2f *op = new vtkVector2f(temp0);

    result = PyVTKSpecialObject_New("vtkVector2f", op);
    }

  return result;
}

static PyObject *
PyvtkVector2f_vtkVector2f_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2f");

  vtkVector2f *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f"))
    {
    vtkVector2f *op = new vtkVector2f(*temp0);

    result = PyVTKSpecialObject_New("vtkVector2f", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector2f_vtkVector2f_Methods[] = {
  {NULL, PyvtkVector2f_vtkVector2f_s1, 1,
   (char*)"|ff"},
  {NULL, PyvtkVector2f_vtkVector2f_s2, 1,
   (char*)"O *f"},
  {NULL, PyvtkVector2f_vtkVector2f_s3, 1,
   (char*)"O &vtkVector2f"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkVector2f_vtkVector2f(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVector2f_vtkVector2f_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
    case 2:
      return PyvtkVector2f_vtkVector2f_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkVector2f");
  return NULL;
}


static PyMethodDef PyvtkVector2f_NewMethod = \
{ (char*)"vtkVector2f", PyvtkVector2f_vtkVector2f, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkVector2f_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkVector2f_vtkVector2f(NULL, args);
}
#endif

static void PyvtkVector2f_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkVector2f *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkVector2f_Hash(PyObject *self)
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

PyTypeObject PyvtkVector2f_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkVector2f", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVector2f_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkVector2f_Hash, // tp_hash
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
  PyvtkVector2f_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyvtkVector2_IfE_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkVector2f_New, // tp_new
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

static void *PyvtkVector2f_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkVector2f(*static_cast<const vtkVector2f*>(obj));
    }
  return 0;
}

static PyObject *PyvtkVector2f_TypeNew(const char *)
{
  return PyVTKSpecialType_New(
    &PyvtkVector2f_Type,
    PyvtkVector2f_Methods,
    PyvtkVector2f_vtkVector2f_Methods,
    &PyvtkVector2f_NewMethod,
    PyvtkVector2f_Doc(), &PyvtkVector2f_CCopy);
}

const char **PyvtkVector2f_Doc()
{
  static const char *docstring[] = {
    "vtkVector3 - templated base type for storage of 3D vectors.\n\n",
    "Superclass: vtkVector2[float32]\n\n",
    "This class is a templated data type for storing and manipulating\nfixed size vectors, which can be used to represent two and three\ndimensional points. The memory layout is a contiguous array of the\nspecified type, such that a float[2] can be cast to a vtkVector2f and\nmanipulated. Also a float[6] could be cast and used as a\nvtkVector2f[3].\n\n",
    "V.vtkVector2f(float, float)\nC++: vtkVector2f(float x=0.0, float y=0.0)\nV.vtkVector2f((float, float))\nC++: vtkVector2f(const float *i)\nV.vtkVector2f(vtkVector2f)\nC++: vtkVector2f(const &vtkVector2f)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkVector2d_Doc();

static PyMethodDef PyvtkVector2d_Methods[] = {
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkVector2d_Type
extern PyTypeObject PyvtkVector2d_Type;
#define DECLARED_PyvtkVector2d_Type
#endif

#ifndef DECLARED_PyvtkVector2_IdE_Type
extern PyTypeObject PyvtkVector2_IdE_Type;
#define DECLARED_PyvtkVector2_IdE_Type
#endif


static PyObject *
PyvtkVector2d_vtkVector2d_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2d");

  double temp0 = 0.0;
  double temp1 = 0.0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0, 2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    vtkVector2d *op = new vtkVector2d(temp0, temp1);

    result = PyVTKSpecialObject_New("vtkVector2d", op);
    }

  return result;
}

static PyObject *
PyvtkVector2d_vtkVector2d_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2d");

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkVector2d *op = new vtkVector2d(temp0);

    result = PyVTKSpecialObject_New("vtkVector2d", op);
    }

  return result;
}

static PyObject *
PyvtkVector2d_vtkVector2d_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2d");

  vtkVector2d *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2d"))
    {
    vtkVector2d *op = new vtkVector2d(*temp0);

    result = PyVTKSpecialObject_New("vtkVector2d", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector2d_vtkVector2d_Methods[] = {
  {NULL, PyvtkVector2d_vtkVector2d_s1, 1,
   (char*)"|dd"},
  {NULL, PyvtkVector2d_vtkVector2d_s2, 1,
   (char*)"-O *d"},
  {NULL, PyvtkVector2d_vtkVector2d_s3, 1,
   (char*)"O &vtkVector2d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkVector2d_vtkVector2d(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVector2d_vtkVector2d_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
    case 2:
      return PyvtkVector2d_vtkVector2d_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkVector2d");
  return NULL;
}


static PyMethodDef PyvtkVector2d_NewMethod = \
{ (char*)"vtkVector2d", PyvtkVector2d_vtkVector2d, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkVector2d_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkVector2d_vtkVector2d(NULL, args);
}
#endif

static void PyvtkVector2d_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkVector2d *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkVector2d_Hash(PyObject *self)
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

PyTypeObject PyvtkVector2d_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkVector2d", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVector2d_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkVector2d_Hash, // tp_hash
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
  PyvtkVector2d_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyvtkVector2_IdE_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkVector2d_New, // tp_new
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

static void *PyvtkVector2d_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkVector2d(*static_cast<const vtkVector2d*>(obj));
    }
  return 0;
}

static PyObject *PyvtkVector2d_TypeNew(const char *)
{
  return PyVTKSpecialType_New(
    &PyvtkVector2d_Type,
    PyvtkVector2d_Methods,
    PyvtkVector2d_vtkVector2d_Methods,
    &PyvtkVector2d_NewMethod,
    PyvtkVector2d_Doc(), &PyvtkVector2d_CCopy);
}

const char **PyvtkVector2d_Doc()
{
  static const char *docstring[] = {
    "vtkVector3 - templated base type for storage of 3D vectors.\n\n",
    "Superclass: vtkVector2[float64]\n\n",
    "This class is a templated data type for storing and manipulating\nfixed size vectors, which can be used to represent two and three\ndimensional points. The memory layout is a contiguous array of the\nspecified type, such that a float[2] can be cast to a vtkVector2f and\nmanipulated. Also a float[6] could be cast and used as a\nvtkVector2f[3].\n\n",
    "V.vtkVector2d(float, float)\nC++: vtkVector2d(double x=0.0, double y=0.0)\nV.vtkVector2d((float, float))\nC++: explicit vtkVector2d(const double *init)\nV.vtkVector2d(vtkVector2d)\nC++: vtkVector2d(const &vtkVector2d)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkVector3i_Doc();

static PyMethodDef PyvtkVector3i_Methods[] = {
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkVector3i_Type
extern PyTypeObject PyvtkVector3i_Type;
#define DECLARED_PyvtkVector3i_Type
#endif

#ifndef DECLARED_PyvtkVector3_IiE_Type
extern PyTypeObject PyvtkVector3_IiE_Type;
#define DECLARED_PyvtkVector3_IiE_Type
#endif


static PyObject *
PyvtkVector3i_vtkVector3i_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3i");

  int temp0 = 0;
  int temp1 = 0;
  int temp2 = 0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0, 3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    vtkVector3i *op = new vtkVector3i(temp0, temp1, temp2);

    result = PyVTKSpecialObject_New("vtkVector3i", op);
    }

  return result;
}

static PyObject *
PyvtkVector3i_vtkVector3i_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3i");

  int temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkVector3i *op = new vtkVector3i(temp0);

    result = PyVTKSpecialObject_New("vtkVector3i", op);
    }

  return result;
}

static PyObject *
PyvtkVector3i_vtkVector3i_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3i");

  vtkVector3i *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector3i"))
    {
    vtkVector3i *op = new vtkVector3i(*temp0);

    result = PyVTKSpecialObject_New("vtkVector3i", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector3i_vtkVector3i_Methods[] = {
  {NULL, PyvtkVector3i_vtkVector3i_s1, 1,
   (char*)"|iii"},
  {NULL, PyvtkVector3i_vtkVector3i_s2, 1,
   (char*)"-O *i"},
  {NULL, PyvtkVector3i_vtkVector3i_s3, 1,
   (char*)"O &vtkVector3i"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkVector3i_vtkVector3i(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVector3i_vtkVector3i_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
    case 2:
    case 3:
      return PyvtkVector3i_vtkVector3i_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkVector3i");
  return NULL;
}


static PyMethodDef PyvtkVector3i_NewMethod = \
{ (char*)"vtkVector3i", PyvtkVector3i_vtkVector3i, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkVector3i_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkVector3i_vtkVector3i(NULL, args);
}
#endif

static void PyvtkVector3i_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkVector3i *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkVector3i_Hash(PyObject *self)
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

PyTypeObject PyvtkVector3i_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkVector3i", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVector3i_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkVector3i_Hash, // tp_hash
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
  PyvtkVector3i_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyvtkVector3_IiE_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkVector3i_New, // tp_new
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

static void *PyvtkVector3i_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkVector3i(*static_cast<const vtkVector3i*>(obj));
    }
  return 0;
}

static PyObject *PyvtkVector3i_TypeNew(const char *)
{
  return PyVTKSpecialType_New(
    &PyvtkVector3i_Type,
    PyvtkVector3i_Methods,
    PyvtkVector3i_vtkVector3i_Methods,
    &PyvtkVector3i_NewMethod,
    PyvtkVector3i_Doc(), &PyvtkVector3i_CCopy);
}

const char **PyvtkVector3i_Doc()
{
  static const char *docstring[] = {
    "vtkVector3 - templated base type for storage of 3D vectors.\n\n",
    "Superclass: vtkVector3[int32]\n\n",
    "This class is a templated data type for storing and manipulating\nfixed size vectors, which can be used to represent two and three\ndimensional points. The memory layout is a contiguous array of the\nspecified type, such that a float[2] can be cast to a vtkVector2f and\nmanipulated. Also a float[6] could be cast and used as a\nvtkVector2f[3].\n\n",
    "V.vtkVector3i(int, int, int)\nC++: vtkVector3i(int x=0, int y=0, int z=0)\nV.vtkVector3i((int, int, int))\nC++: explicit vtkVector3i(const int *init)\nV.vtkVector3i(vtkVector3i)\nC++: vtkVector3i(const &vtkVector3i)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkVector3f_Doc();

static PyMethodDef PyvtkVector3f_Methods[] = {
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkVector3f_Type
extern PyTypeObject PyvtkVector3f_Type;
#define DECLARED_PyvtkVector3f_Type
#endif

#ifndef DECLARED_PyvtkVector3_IfE_Type
extern PyTypeObject PyvtkVector3_IfE_Type;
#define DECLARED_PyvtkVector3_IfE_Type
#endif


static PyObject *
PyvtkVector3f_vtkVector3f_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3f");

  float temp0 = 0.0;
  float temp1 = 0.0;
  float temp2 = 0.0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0, 3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    vtkVector3f *op = new vtkVector3f(temp0, temp1, temp2);

    result = PyVTKSpecialObject_New("vtkVector3f", op);
    }

  return result;
}

static PyObject *
PyvtkVector3f_vtkVector3f_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3f");

  float temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkVector3f *op = new vtkVector3f(temp0);

    result = PyVTKSpecialObject_New("vtkVector3f", op);
    }

  return result;
}

static PyObject *
PyvtkVector3f_vtkVector3f_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3f");

  vtkVector3f *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector3f"))
    {
    vtkVector3f *op = new vtkVector3f(*temp0);

    result = PyVTKSpecialObject_New("vtkVector3f", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector3f_vtkVector3f_Methods[] = {
  {NULL, PyvtkVector3f_vtkVector3f_s1, 1,
   (char*)"|fff"},
  {NULL, PyvtkVector3f_vtkVector3f_s2, 1,
   (char*)"-O *f"},
  {NULL, PyvtkVector3f_vtkVector3f_s3, 1,
   (char*)"O &vtkVector3f"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkVector3f_vtkVector3f(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVector3f_vtkVector3f_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
    case 2:
    case 3:
      return PyvtkVector3f_vtkVector3f_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkVector3f");
  return NULL;
}


static PyMethodDef PyvtkVector3f_NewMethod = \
{ (char*)"vtkVector3f", PyvtkVector3f_vtkVector3f, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkVector3f_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkVector3f_vtkVector3f(NULL, args);
}
#endif

static void PyvtkVector3f_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkVector3f *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkVector3f_Hash(PyObject *self)
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

PyTypeObject PyvtkVector3f_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkVector3f", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVector3f_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkVector3f_Hash, // tp_hash
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
  PyvtkVector3f_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyvtkVector3_IfE_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkVector3f_New, // tp_new
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

static void *PyvtkVector3f_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkVector3f(*static_cast<const vtkVector3f*>(obj));
    }
  return 0;
}

static PyObject *PyvtkVector3f_TypeNew(const char *)
{
  return PyVTKSpecialType_New(
    &PyvtkVector3f_Type,
    PyvtkVector3f_Methods,
    PyvtkVector3f_vtkVector3f_Methods,
    &PyvtkVector3f_NewMethod,
    PyvtkVector3f_Doc(), &PyvtkVector3f_CCopy);
}

const char **PyvtkVector3f_Doc()
{
  static const char *docstring[] = {
    "vtkVector3 - templated base type for storage of 3D vectors.\n\n",
    "Superclass: vtkVector3[float32]\n\n",
    "This class is a templated data type for storing and manipulating\nfixed size vectors, which can be used to represent two and three\ndimensional points. The memory layout is a contiguous array of the\nspecified type, such that a float[2] can be cast to a vtkVector2f and\nmanipulated. Also a float[6] could be cast and used as a\nvtkVector2f[3].\n\n",
    "V.vtkVector3f(float, float, float)\nC++: vtkVector3f(float x=0.0, float y=0.0, float z=0.0)\nV.vtkVector3f((float, float, float))\nC++: explicit vtkVector3f(const float *init)\nV.vtkVector3f(vtkVector3f)\nC++: vtkVector3f(const &vtkVector3f)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkVector3d_Doc();

static PyMethodDef PyvtkVector3d_Methods[] = {
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkVector3d_Type
extern PyTypeObject PyvtkVector3d_Type;
#define DECLARED_PyvtkVector3d_Type
#endif

#ifndef DECLARED_PyvtkVector3_IdE_Type
extern PyTypeObject PyvtkVector3_IdE_Type;
#define DECLARED_PyvtkVector3_IdE_Type
#endif


static PyObject *
PyvtkVector3d_vtkVector3d_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3d");

  double temp0 = 0.0;
  double temp1 = 0.0;
  double temp2 = 0.0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0, 3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    vtkVector3d *op = new vtkVector3d(temp0, temp1, temp2);

    result = PyVTKSpecialObject_New("vtkVector3d", op);
    }

  return result;
}

static PyObject *
PyvtkVector3d_vtkVector3d_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3d");

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkVector3d *op = new vtkVector3d(temp0);

    result = PyVTKSpecialObject_New("vtkVector3d", op);
    }

  return result;
}

static PyObject *
PyvtkVector3d_vtkVector3d_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3d");

  vtkVector3d *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector3d"))
    {
    vtkVector3d *op = new vtkVector3d(*temp0);

    result = PyVTKSpecialObject_New("vtkVector3d", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector3d_vtkVector3d_Methods[] = {
  {NULL, PyvtkVector3d_vtkVector3d_s1, 1,
   (char*)"|ddd"},
  {NULL, PyvtkVector3d_vtkVector3d_s2, 1,
   (char*)"-O *d"},
  {NULL, PyvtkVector3d_vtkVector3d_s3, 1,
   (char*)"O &vtkVector3d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkVector3d_vtkVector3d(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVector3d_vtkVector3d_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
    case 2:
    case 3:
      return PyvtkVector3d_vtkVector3d_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkVector3d");
  return NULL;
}


static PyMethodDef PyvtkVector3d_NewMethod = \
{ (char*)"vtkVector3d", PyvtkVector3d_vtkVector3d, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkVector3d_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkVector3d_vtkVector3d(NULL, args);
}
#endif

static void PyvtkVector3d_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkVector3d *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkVector3d_Hash(PyObject *self)
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

PyTypeObject PyvtkVector3d_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkVector3d", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVector3d_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkVector3d_Hash, // tp_hash
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
  PyvtkVector3d_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyvtkVector3_IdE_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkVector3d_New, // tp_new
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

static void *PyvtkVector3d_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkVector3d(*static_cast<const vtkVector3d*>(obj));
    }
  return 0;
}

static PyObject *PyvtkVector3d_TypeNew(const char *)
{
  return PyVTKSpecialType_New(
    &PyvtkVector3d_Type,
    PyvtkVector3d_Methods,
    PyvtkVector3d_vtkVector3d_Methods,
    &PyvtkVector3d_NewMethod,
    PyvtkVector3d_Doc(), &PyvtkVector3d_CCopy);
}

const char **PyvtkVector3d_Doc()
{
  static const char *docstring[] = {
    "vtkVector3 - templated base type for storage of 3D vectors.\n\n",
    "Superclass: vtkVector3[float64]\n\n",
    "This class is a templated data type for storing and manipulating\nfixed size vectors, which can be used to represent two and three\ndimensional points. The memory layout is a contiguous array of the\nspecified type, such that a float[2] can be cast to a vtkVector2f and\nmanipulated. Also a float[6] could be cast and used as a\nvtkVector2f[3].\n\n",
    "V.vtkVector3d(float, float, float)\nC++: vtkVector3d(double x=0.0, double y=0.0, double z=0.0)\nV.vtkVector3d((float, float, float))\nC++: explicit vtkVector3d(const double *init)\nV.vtkVector3d(vtkVector3d)\nC++: vtkVector3d(const &vtkVector3d)\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVector(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyvtkVector_TemplateNew(modulename);

  if (o)
    {
    PyObject *l = PyObject_CallMethod(o, (char *)"values", 0);
    Py_ssize_t n = PyList_GET_SIZE(l);
    for (Py_ssize_t i = 0; i < n; i++)
      {
      PyObject *ot = PyList_GET_ITEM(l, i);
      const char *nt = NULL;
      if (PyVTKClass_Check(ot))
        {
        nt = PyString_AsString(((PyVTKClass *)ot)->vtk_name);
        }
      else if (PyType_Check(ot))
        {
        nt = ((PyTypeObject *)ot)->tp_name;
        }
      else if (PyCFunction_Check(ot))
        {
        nt = ((PyCFunctionObject *)ot)->m_ml->ml_name;
        }
      if (nt)
        {
        PyDict_SetItemString(dict, (char *)nt, ot);
        }
      }
    Py_DECREF(l);
    }

  if (o && PyDict_SetItemString(dict, (char *)"vtkVector", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkVector2_TemplateNew(modulename);

  if (o)
    {
    PyObject *l = PyObject_CallMethod(o, (char *)"values", 0);
    Py_ssize_t n = PyList_GET_SIZE(l);
    for (Py_ssize_t i = 0; i < n; i++)
      {
      PyObject *ot = PyList_GET_ITEM(l, i);
      const char *nt = NULL;
      if (PyVTKClass_Check(ot))
        {
        nt = PyString_AsString(((PyVTKClass *)ot)->vtk_name);
        }
      else if (PyType_Check(ot))
        {
        nt = ((PyTypeObject *)ot)->tp_name;
        }
      else if (PyCFunction_Check(ot))
        {
        nt = ((PyCFunctionObject *)ot)->m_ml->ml_name;
        }
      if (nt)
        {
        PyDict_SetItemString(dict, (char *)nt, ot);
        }
      }
    Py_DECREF(l);
    }

  if (o && PyDict_SetItemString(dict, (char *)"vtkVector2", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkVector3_TemplateNew(modulename);

  if (o)
    {
    PyObject *l = PyObject_CallMethod(o, (char *)"values", 0);
    Py_ssize_t n = PyList_GET_SIZE(l);
    for (Py_ssize_t i = 0; i < n; i++)
      {
      PyObject *ot = PyList_GET_ITEM(l, i);
      const char *nt = NULL;
      if (PyVTKClass_Check(ot))
        {
        nt = PyString_AsString(((PyVTKClass *)ot)->vtk_name);
        }
      else if (PyType_Check(ot))
        {
        nt = ((PyTypeObject *)ot)->tp_name;
        }
      else if (PyCFunction_Check(ot))
        {
        nt = ((PyCFunctionObject *)ot)->m_ml->ml_name;
        }
      if (nt)
        {
        PyDict_SetItemString(dict, (char *)nt, ot);
        }
      }
    Py_DECREF(l);
    }

  if (o && PyDict_SetItemString(dict, (char *)"vtkVector3", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkVector2i_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVector2i", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkVector2f_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVector2f", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkVector2d_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVector2d", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkVector3i_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVector3i", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkVector3f_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVector3f", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkVector3d_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVector3d", o) != 0)
    {
    Py_DECREF(o);
    }

}

