// python wrapper for vtkContourRepresentation
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
#include "vtkContourRepresentation.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkContourRepresentation(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkContourRepresentation(PyObject *, const char *); }
#endif

static const char **PyvtkContourRepresentationPoint_Doc();

static PyMethodDef PyvtkContourRepresentationPoint_Methods[] = {
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkContourRepresentationPoint_Type
extern PyTypeObject PyvtkContourRepresentationPoint_Type;
#define DECLARED_PyvtkContourRepresentationPoint_Type
#endif


static PyObject *
PyvtkContourRepresentationPoint_vtkContourRepresentationPoint(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkContourRepresentationPoint");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkContourRepresentationPoint *op = new vtkContourRepresentationPoint();

    result = PyVTKSpecialObject_New("vtkContourRepresentationPoint", op);
    }

  return result;
}

static PyMethodDef PyvtkContourRepresentationPoint_vtkContourRepresentationPoint_Methods[] = {
  {NULL, NULL, 0, NULL}
};

static PyMethodDef PyvtkContourRepresentationPoint_NewMethod = \
{ (char*)"vtkContourRepresentationPoint", PyvtkContourRepresentationPoint_vtkContourRepresentationPoint, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkContourRepresentationPoint_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkContourRepresentationPoint_vtkContourRepresentationPoint(NULL, args);
}
#endif

static void PyvtkContourRepresentationPoint_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkContourRepresentationPoint *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkContourRepresentationPoint_Hash(PyObject *self)
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

PyTypeObject PyvtkContourRepresentationPoint_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkContourRepresentationPoint", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkContourRepresentationPoint_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkContourRepresentationPoint_Hash, // tp_hash
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
  PyvtkContourRepresentationPoint_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkContourRepresentationPoint_New, // tp_new
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

static void *PyvtkContourRepresentationPoint_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkContourRepresentationPoint(*static_cast<const vtkContourRepresentationPoint*>(obj));
    }
  return 0;
}

static PyObject *PyvtkContourRepresentationPoint_TypeNew(const char *)
{
  return PyVTKSpecialType_New(
    &PyvtkContourRepresentationPoint_Type,
    PyvtkContourRepresentationPoint_Methods,
    PyvtkContourRepresentationPoint_vtkContourRepresentationPoint_Methods,
    &PyvtkContourRepresentationPoint_NewMethod,
    PyvtkContourRepresentationPoint_Doc(), &PyvtkContourRepresentationPoint_CCopy);
}

const char **PyvtkContourRepresentationPoint_Doc()
{
  static const char *docstring[] = {
    "vtkContourRepresentation - represent the vtkContourWidget\n\n",
    "The vtkContourRepresentation is a superclass for various types of\nrepresentations for the vtkContourWidget.\n\nManaging contour points:\n\nThe classes vtkContourRepresentationNode,\nvtkContourRepresentationInternals, vtkContourRepresentationPoint\nmanage the data structure used to represent nodes and points on a\ncontour. A contour may contain several nodes and several more points.\nNodes are usually the ",
    "result of user clicked points on the contour.\nAdditional points are created between nodes to generate a smooth\ncurve using some Interpolator. See the method\nSetLineInterpolator.\\par The data structure stores both the world and\ndisplay positions for every point. (This may seem like a\nduplication.) The default behaviour of this class is to use the\nWorldPosition to do all the math. Typically a point ",
    "is added at a\ngiven display position. Its corresponding world position is computed\nusing the point placer and stored. Any query of the display position\nof a stored point is done via the Renderer, which computes the\ndisplay position given a world position.\n\n\\par So why maintain the display position ? Consider drawing a\ncontour on a volume widget. You might want the contour to be located\nat a certai",
    "n world position in the volume or you might want to be\noverlayed over the window like an Actor2D. The default behaviour of\nthis class is to provide the former behaviour.\n\n\\par To achieve the latter behaviour override the methods that return\nthe display position (to return the set display position instead of\ncomputing it from the world positions) and the method BuildLines() to\ninterpolate lines usi",
    "ng their display positions intead of world\npositions.\n\nSee Also:\n\nvtkContourWidget\n\n",
    "V.vtkContourRepresentationPoint()\nC++: vtkContourRepresentationPoint()\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkContourRepresentationNode_Doc();

static PyMethodDef PyvtkContourRepresentationNode_Methods[] = {
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkContourRepresentationNode_Type
extern PyTypeObject PyvtkContourRepresentationNode_Type;
#define DECLARED_PyvtkContourRepresentationNode_Type
#endif


static PyObject *
PyvtkContourRepresentationNode_vtkContourRepresentationNode(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkContourRepresentationNode");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkContourRepresentationNode *op = new vtkContourRepresentationNode();

    result = PyVTKSpecialObject_New("vtkContourRepresentationNode", op);
    }

  return result;
}

static PyMethodDef PyvtkContourRepresentationNode_vtkContourRepresentationNode_Methods[] = {
  {NULL, NULL, 0, NULL}
};

static PyMethodDef PyvtkContourRepresentationNode_NewMethod = \
{ (char*)"vtkContourRepresentationNode", PyvtkContourRepresentationNode_vtkContourRepresentationNode, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkContourRepresentationNode_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkContourRepresentationNode_vtkContourRepresentationNode(NULL, args);
}
#endif

static void PyvtkContourRepresentationNode_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkContourRepresentationNode *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkContourRepresentationNode_Hash(PyObject *self)
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

PyTypeObject PyvtkContourRepresentationNode_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkContourRepresentationNode", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkContourRepresentationNode_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkContourRepresentationNode_Hash, // tp_hash
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
  PyvtkContourRepresentationNode_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkContourRepresentationNode_New, // tp_new
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

static void *PyvtkContourRepresentationNode_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkContourRepresentationNode(*static_cast<const vtkContourRepresentationNode*>(obj));
    }
  return 0;
}

static PyObject *PyvtkContourRepresentationNode_TypeNew(const char *)
{
  return PyVTKSpecialType_New(
    &PyvtkContourRepresentationNode_Type,
    PyvtkContourRepresentationNode_Methods,
    PyvtkContourRepresentationNode_vtkContourRepresentationNode_Methods,
    &PyvtkContourRepresentationNode_NewMethod,
    PyvtkContourRepresentationNode_Doc(), &PyvtkContourRepresentationNode_CCopy);
}

const char **PyvtkContourRepresentationNode_Doc()
{
  static const char *docstring[] = {
    "vtkContourRepresentation - represent the vtkContourWidget\n\n",
    "The vtkContourRepresentation is a superclass for various types of\nrepresentations for the vtkContourWidget.\n\nManaging contour points:\n\nThe classes vtkContourRepresentationNode,\nvtkContourRepresentationInternals, vtkContourRepresentationPoint\nmanage the data structure used to represent nodes and points on a\ncontour. A contour may contain several nodes and several more points.\nNodes are usually the ",
    "result of user clicked points on the contour.\nAdditional points are created between nodes to generate a smooth\ncurve using some Interpolator. See the method\nSetLineInterpolator.\\par The data structure stores both the world and\ndisplay positions for every point. (This may seem like a\nduplication.) The default behaviour of this class is to use the\nWorldPosition to do all the math. Typically a point ",
    "is added at a\ngiven display position. Its corresponding world position is computed\nusing the point placer and stored. Any query of the display position\nof a stored point is done via the Renderer, which computes the\ndisplay position given a world position.\n\n\\par So why maintain the display position ? Consider drawing a\ncontour on a volume widget. You might want the contour to be located\nat a certai",
    "n world position in the volume or you might want to be\noverlayed over the window like an Actor2D. The default behaviour of\nthis class is to provide the former behaviour.\n\n\\par To achieve the latter behaviour override the methods that return\nthe display position (to return the set display position instead of\ncomputing it from the world positions) and the method BuildLines() to\ninterpolate lines usi",
    "ng their display positions intead of world\npositions.\n\nSee Also:\n\nvtkContourWidget\n\n",
    "V.vtkContourRepresentationNode()\nC++: vtkContourRepresentationNode()\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkContourRepresentationInternals_Doc();


static PyObject *
PyvtkContourRepresentationInternals_ClearNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "ClearNodes");
  void *vp = ap.GetSelfPointer(self);
  vtkContourRepresentationInternals *op = static_cast<vtkContourRepresentationInternals *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    op->ClearNodes();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkContourRepresentationInternals_Methods[] = {
  {(char*)"ClearNodes", PyvtkContourRepresentationInternals_ClearNodes, 1,
   (char*)"V.ClearNodes()\nC++: void ClearNodes()\n\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkContourRepresentationInternals_Type
extern PyTypeObject PyvtkContourRepresentationInternals_Type;
#define DECLARED_PyvtkContourRepresentationInternals_Type
#endif


static PyObject *
PyvtkContourRepresentationInternals_vtkContourRepresentationInternals(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkContourRepresentationInternals");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkContourRepresentationInternals *op = new vtkContourRepresentationInternals();

    result = PyVTKSpecialObject_New("vtkContourRepresentationInternals", op);
    }

  return result;
}

static PyMethodDef PyvtkContourRepresentationInternals_vtkContourRepresentationInternals_Methods[] = {
  {NULL, NULL, 0, NULL}
};

static PyMethodDef PyvtkContourRepresentationInternals_NewMethod = \
{ (char*)"vtkContourRepresentationInternals", PyvtkContourRepresentationInternals_vtkContourRepresentationInternals, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkContourRepresentationInternals_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkContourRepresentationInternals_vtkContourRepresentationInternals(NULL, args);
}
#endif

static void PyvtkContourRepresentationInternals_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkContourRepresentationInternals *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkContourRepresentationInternals_Hash(PyObject *self)
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

PyTypeObject PyvtkContourRepresentationInternals_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkContourRepresentationInternals", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkContourRepresentationInternals_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkContourRepresentationInternals_Hash, // tp_hash
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
  PyvtkContourRepresentationInternals_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkContourRepresentationInternals_New, // tp_new
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

static void *PyvtkContourRepresentationInternals_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkContourRepresentationInternals(*static_cast<const vtkContourRepresentationInternals*>(obj));
    }
  return 0;
}

static PyObject *PyvtkContourRepresentationInternals_TypeNew(const char *)
{
  return PyVTKSpecialType_New(
    &PyvtkContourRepresentationInternals_Type,
    PyvtkContourRepresentationInternals_Methods,
    PyvtkContourRepresentationInternals_vtkContourRepresentationInternals_Methods,
    &PyvtkContourRepresentationInternals_NewMethod,
    PyvtkContourRepresentationInternals_Doc(), &PyvtkContourRepresentationInternals_CCopy);
}

const char **PyvtkContourRepresentationInternals_Doc()
{
  static const char *docstring[] = {
    "vtkContourRepresentation - represent the vtkContourWidget\n\n",
    "The vtkContourRepresentation is a superclass for various types of\nrepresentations for the vtkContourWidget.\n\nManaging contour points:\n\nThe classes vtkContourRepresentationNode,\nvtkContourRepresentationInternals, vtkContourRepresentationPoint\nmanage the data structure used to represent nodes and points on a\ncontour. A contour may contain several nodes and several more points.\nNodes are usually the ",
    "result of user clicked points on the contour.\nAdditional points are created between nodes to generate a smooth\ncurve using some Interpolator. See the method\nSetLineInterpolator.\\par The data structure stores both the world and\ndisplay positions for every point. (This may seem like a\nduplication.) The default behaviour of this class is to use the\nWorldPosition to do all the math. Typically a point ",
    "is added at a\ngiven display position. Its corresponding world position is computed\nusing the point placer and stored. Any query of the display position\nof a stored point is done via the Renderer, which computes the\ndisplay position given a world position.\n\n\\par So why maintain the display position ? Consider drawing a\ncontour on a volume widget. You might want the contour to be located\nat a certai",
    "n world position in the volume or you might want to be\noverlayed over the window like an Actor2D. The default behaviour of\nthis class is to provide the former behaviour.\n\n\\par To achieve the latter behaviour override the methods that return\nthe display position (to return the set display position instead of\ncomputing it from the world positions) and the method BuildLines() to\ninterpolate lines usi",
    "ng their display positions intead of world\npositions.\n\nSee Also:\n\nvtkContourWidget\n\n",
    "V.vtkContourRepresentationInternals()\nC++: vtkContourRepresentationInternals()\n",
    NULL
  };

  return docstring;
}

#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkContourRepresentationNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkContourRepresentationNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkWidgetRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkWidgetRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkWidgetRepresentationNew
#endif

static const char **PyvtkContourRepresentation_Doc();


static PyObject *
PyvtkContourRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

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
      tempr = op->vtkContourRepresentation::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

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
      tempr = op->vtkContourRepresentation::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  vtkContourRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkContourRepresentation::NewInstance();
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
PyvtkContourRepresentation_AddNodeAtWorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNodeAtWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  double temp0;
  double temp1;
  double temp2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->AddNodeAtWorldPosition(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkContourRepresentation::AddNodeAtWorldPosition(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkContourRepresentation_AddNodeAtWorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNodeAtWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      tempr = op->AddNodeAtWorldPosition(temp0);
      }
    else
      {
      tempr = op->vtkContourRepresentation::AddNodeAtWorldPosition(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkContourRepresentation_AddNodeAtWorldPosition_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNodeAtWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[9];
  double save1[9];
  const int size1 = 9;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      tempr = op->AddNodeAtWorldPosition(temp0, temp1);
      }
    else
      {
      tempr = op->vtkContourRepresentation::AddNodeAtWorldPosition(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkContourRepresentation_AddNodeAtWorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkContourRepresentation_AddNodeAtWorldPosition_s1(self, args);
    case 1:
      return PyvtkContourRepresentation_AddNodeAtWorldPosition_s2(self, args);
    case 2:
      return PyvtkContourRepresentation_AddNodeAtWorldPosition_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddNodeAtWorldPosition");
  return NULL;
}



static PyObject *
PyvtkContourRepresentation_AddNodeAtDisplayPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNodeAtDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      tempr = op->AddNodeAtDisplayPosition(temp0);
      }
    else
      {
      tempr = op->vtkContourRepresentation::AddNodeAtDisplayPosition(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkContourRepresentation_AddNodeAtDisplayPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNodeAtDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0[2];
  int save0[2];
  const int size0 = 2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      tempr = op->AddNodeAtDisplayPosition(temp0);
      }
    else
      {
      tempr = op->vtkContourRepresentation::AddNodeAtDisplayPosition(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkContourRepresentation_AddNodeAtDisplayPosition_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNodeAtDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->AddNodeAtDisplayPosition(temp0, temp1);
      }
    else
      {
      tempr = op->vtkContourRepresentation::AddNodeAtDisplayPosition(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkContourRepresentation_AddNodeAtDisplayPosition_Methods[] = {
  {NULL, PyvtkContourRepresentation_AddNodeAtDisplayPosition_s1, 1,
   (char*)"@O *d"},
  {NULL, PyvtkContourRepresentation_AddNodeAtDisplayPosition_s2, 1,
   (char*)"@O *i"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkContourRepresentation_AddNodeAtDisplayPosition(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkContourRepresentation_AddNodeAtDisplayPosition_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkContourRepresentation_AddNodeAtDisplayPosition_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddNodeAtDisplayPosition");
  return NULL;
}



static PyObject *
PyvtkContourRepresentation_ActivateNode_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ActivateNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      tempr = op->ActivateNode(temp0);
      }
    else
      {
      tempr = op->vtkContourRepresentation::ActivateNode(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkContourRepresentation_ActivateNode_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ActivateNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0[2];
  int save0[2];
  const int size0 = 2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      tempr = op->ActivateNode(temp0);
      }
    else
      {
      tempr = op->vtkContourRepresentation::ActivateNode(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkContourRepresentation_ActivateNode_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ActivateNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->ActivateNode(temp0, temp1);
      }
    else
      {
      tempr = op->vtkContourRepresentation::ActivateNode(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkContourRepresentation_ActivateNode_Methods[] = {
  {NULL, PyvtkContourRepresentation_ActivateNode_s1, 1,
   (char*)"@O *d"},
  {NULL, PyvtkContourRepresentation_ActivateNode_s2, 1,
   (char*)"@O *i"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkContourRepresentation_ActivateNode(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkContourRepresentation_ActivateNode_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkContourRepresentation_ActivateNode_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ActivateNode");
  return NULL;
}



static PyObject *
PyvtkContourRepresentation_SetActiveNodeToWorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveNodeToWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      tempr = op->SetActiveNodeToWorldPosition(temp0);
      }
    else
      {
      tempr = op->vtkContourRepresentation::SetActiveNodeToWorldPosition(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkContourRepresentation_SetActiveNodeToWorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveNodeToWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[9];
  double save1[9];
  const int size1 = 9;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      tempr = op->SetActiveNodeToWorldPosition(temp0, temp1);
      }
    else
      {
      tempr = op->vtkContourRepresentation::SetActiveNodeToWorldPosition(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkContourRepresentation_SetActiveNodeToWorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkContourRepresentation_SetActiveNodeToWorldPosition_s1(self, args);
    case 2:
      return PyvtkContourRepresentation_SetActiveNodeToWorldPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetActiveNodeToWorldPosition");
  return NULL;
}



static PyObject *
PyvtkContourRepresentation_SetActiveNodeToDisplayPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveNodeToDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      tempr = op->SetActiveNodeToDisplayPosition(temp0);
      }
    else
      {
      tempr = op->vtkContourRepresentation::SetActiveNodeToDisplayPosition(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkContourRepresentation_SetActiveNodeToDisplayPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveNodeToDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0[2];
  int save0[2];
  const int size0 = 2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      tempr = op->SetActiveNodeToDisplayPosition(temp0);
      }
    else
      {
      tempr = op->vtkContourRepresentation::SetActiveNodeToDisplayPosition(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkContourRepresentation_SetActiveNodeToDisplayPosition_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveNodeToDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->SetActiveNodeToDisplayPosition(temp0, temp1);
      }
    else
      {
      tempr = op->vtkContourRepresentation::SetActiveNodeToDisplayPosition(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkContourRepresentation_SetActiveNodeToDisplayPosition_Methods[] = {
  {NULL, PyvtkContourRepresentation_SetActiveNodeToDisplayPosition_s1, 1,
   (char*)"@O *d"},
  {NULL, PyvtkContourRepresentation_SetActiveNodeToDisplayPosition_s2, 1,
   (char*)"@O *i"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkContourRepresentation_SetActiveNodeToDisplayPosition(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkContourRepresentation_SetActiveNodeToDisplayPosition_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkContourRepresentation_SetActiveNodeToDisplayPosition_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetActiveNodeToDisplayPosition");
  return NULL;
}



static PyObject *
PyvtkContourRepresentation_ToggleActiveNodeSelected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToggleActiveNodeSelected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->ToggleActiveNodeSelected();
      }
    else
      {
      tempr = op->vtkContourRepresentation::ToggleActiveNodeSelected();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetActiveNodeSelected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveNodeSelected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetActiveNodeSelected();
      }
    else
      {
      tempr = op->vtkContourRepresentation::GetActiveNodeSelected();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetNthNodeSelected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthNodeSelected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNthNodeSelected(temp0);
      }
    else
      {
      tempr = op->vtkContourRepresentation::GetNthNodeSelected(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_SetNthNodeSelected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthNodeSelected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->SetNthNodeSelected(temp0);
      }
    else
      {
      tempr = op->vtkContourRepresentation::SetNthNodeSelected(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetActiveNodeWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveNodeWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      tempr = op->GetActiveNodeWorldPosition(temp0);
      }
    else
      {
      tempr = op->vtkContourRepresentation::GetActiveNodeWorldPosition(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetActiveNodeWorldOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveNodeWorldOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  double temp0[9];
  double save0[9];
  const int size0 = 9;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      tempr = op->GetActiveNodeWorldOrientation(temp0);
      }
    else
      {
      tempr = op->vtkContourRepresentation::GetActiveNodeWorldOrientation(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetActiveNodeDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveNodeDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      tempr = op->GetActiveNodeDisplayPosition(temp0);
      }
    else
      {
      tempr = op->vtkContourRepresentation::GetActiveNodeDisplayPosition(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetNumberOfNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfNodes();
      }
    else
      {
      tempr = op->vtkContourRepresentation::GetNumberOfNodes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetNthNodeDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthNodeDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      tempr = op->GetNthNodeDisplayPosition(temp0, temp1);
      }
    else
      {
      tempr = op->vtkContourRepresentation::GetNthNodeDisplayPosition(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetNthNodeWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthNodeWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      tempr = op->GetNthNodeWorldPosition(temp0, temp1);
      }
    else
      {
      tempr = op->vtkContourRepresentation::GetNthNodeWorldPosition(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetNthNodeWorldOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthNodeWorldOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  double temp1[9];
  double save1[9];
  const int size1 = 9;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      tempr = op->GetNthNodeWorldOrientation(temp0, temp1);
      }
    else
      {
      tempr = op->vtkContourRepresentation::GetNthNodeWorldOrientation(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_SetNthNodeDisplayPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthNodeDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->SetNthNodeDisplayPosition(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkContourRepresentation::SetNthNodeDisplayPosition(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkContourRepresentation_SetNthNodeDisplayPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthNodeDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  int temp1[2];
  int save1[2];
  const int size1 = 2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      tempr = op->SetNthNodeDisplayPosition(temp0, temp1);
      }
    else
      {
      tempr = op->vtkContourRepresentation::SetNthNodeDisplayPosition(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkContourRepresentation_SetNthNodeDisplayPosition_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthNodeDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      tempr = op->SetNthNodeDisplayPosition(temp0, temp1);
      }
    else
      {
      tempr = op->vtkContourRepresentation::SetNthNodeDisplayPosition(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkContourRepresentation_SetNthNodeDisplayPosition_Methods[] = {
  {NULL, PyvtkContourRepresentation_SetNthNodeDisplayPosition_s2, 1,
   (char*)"@iO *i"},
  {NULL, PyvtkContourRepresentation_SetNthNodeDisplayPosition_s3, 1,
   (char*)"@iO *d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkContourRepresentation_SetNthNodeDisplayPosition(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkContourRepresentation_SetNthNodeDisplayPosition_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkContourRepresentation_SetNthNodeDisplayPosition_s1(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetNthNodeDisplayPosition");
  return NULL;
}



static PyObject *
PyvtkContourRepresentation_SetNthNodeWorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthNodeWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      tempr = op->SetNthNodeWorldPosition(temp0, temp1);
      }
    else
      {
      tempr = op->vtkContourRepresentation::SetNthNodeWorldPosition(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkContourRepresentation_SetNthNodeWorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthNodeWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2[9];
  double save2[9];
  const int size2 = 9;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      tempr = op->SetNthNodeWorldPosition(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkContourRepresentation::SetNthNodeWorldPosition(temp0, temp1, temp2);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkContourRepresentation_SetNthNodeWorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkContourRepresentation_SetNthNodeWorldPosition_s1(self, args);
    case 3:
      return PyvtkContourRepresentation_SetNthNodeWorldPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetNthNodeWorldPosition");
  return NULL;
}



static PyObject *
PyvtkContourRepresentation_GetNthNodeSlope(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthNodeSlope");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      tempr = op->GetNthNodeSlope(temp0, temp1);
      }
    else
      {
      tempr = op->vtkContourRepresentation::GetNthNodeSlope(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetNumberOfIntermediatePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIntermediatePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfIntermediatePoints(temp0);
      }
    else
      {
      tempr = op->vtkContourRepresentation::GetNumberOfIntermediatePoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetIntermediatePointWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntermediatePointWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  int temp1;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      tempr = op->GetIntermediatePointWorldPosition(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkContourRepresentation::GetIntermediatePointWorldPosition(temp0, temp1, temp2);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_AddIntermediatePointWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddIntermediatePointWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      tempr = op->AddIntermediatePointWorldPosition(temp0, temp1);
      }
    else
      {
      tempr = op->vtkContourRepresentation::AddIntermediatePointWorldPosition(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_DeleteLastNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteLastNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->DeleteLastNode();
      }
    else
      {
      tempr = op->vtkContourRepresentation::DeleteLastNode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_DeleteActiveNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteActiveNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->DeleteActiveNode();
      }
    else
      {
      tempr = op->vtkContourRepresentation::DeleteActiveNode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_DeleteNthNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteNthNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->DeleteNthNode(temp0);
      }
    else
      {
      tempr = op->vtkContourRepresentation::DeleteNthNode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_ClearAllNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearAllNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearAllNodes();
      }
    else
      {
      op->vtkContourRepresentation::ClearAllNodes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_AddNodeOnContour(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNodeOnContour");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->AddNodeOnContour(temp0, temp1);
      }
    else
      {
      tempr = op->vtkContourRepresentation::AddNodeOnContour(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_SetPixelTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPixelTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPixelTolerance(temp0);
      }
    else
      {
      op->vtkContourRepresentation::SetPixelTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetPixelToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPixelToleranceMinValue();
      }
    else
      {
      tempr = op->vtkContourRepresentation::GetPixelToleranceMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetPixelToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPixelToleranceMaxValue();
      }
    else
      {
      tempr = op->vtkContourRepresentation::GetPixelToleranceMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetPixelTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPixelTolerance();
      }
    else
      {
      tempr = op->vtkContourRepresentation::GetPixelTolerance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_SetWorldTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWorldTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWorldTolerance(temp0);
      }
    else
      {
      op->vtkContourRepresentation::SetWorldTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetWorldToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWorldToleranceMinValue();
      }
    else
      {
      tempr = op->vtkContourRepresentation::GetWorldToleranceMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetWorldToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWorldToleranceMaxValue();
      }
    else
      {
      tempr = op->vtkContourRepresentation::GetWorldToleranceMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetWorldTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWorldTolerance();
      }
    else
      {
      tempr = op->vtkContourRepresentation::GetWorldTolerance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetCurrentOperation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCurrentOperation();
      }
    else
      {
      tempr = op->vtkContourRepresentation::GetCurrentOperation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_SetCurrentOperation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCurrentOperation(temp0);
      }
    else
      {
      op->vtkContourRepresentation::SetCurrentOperation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetCurrentOperationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentOperationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCurrentOperationMinValue();
      }
    else
      {
      tempr = op->vtkContourRepresentation::GetCurrentOperationMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetCurrentOperationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentOperationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCurrentOperationMaxValue();
      }
    else
      {
      tempr = op->vtkContourRepresentation::GetCurrentOperationMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_SetCurrentOperationToInactive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentOperationToInactive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCurrentOperationToInactive();
      }
    else
      {
      op->vtkContourRepresentation::SetCurrentOperationToInactive();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_SetCurrentOperationToTranslate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentOperationToTranslate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCurrentOperationToTranslate();
      }
    else
      {
      op->vtkContourRepresentation::SetCurrentOperationToTranslate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_SetCurrentOperationToShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentOperationToShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCurrentOperationToShift();
      }
    else
      {
      op->vtkContourRepresentation::SetCurrentOperationToShift();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_SetCurrentOperationToScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentOperationToScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCurrentOperationToScale();
      }
    else
      {
      op->vtkContourRepresentation::SetCurrentOperationToScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_SetPointPlacer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointPlacer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  vtkPointPlacer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPointPlacer"))
    {
    if (ap.IsBound())
      {
      op->SetPointPlacer(temp0);
      }
    else
      {
      op->vtkContourRepresentation::SetPointPlacer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetPointPlacer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointPlacer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  vtkPointPlacer *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointPlacer();
      }
    else
      {
      tempr = op->vtkContourRepresentation::GetPointPlacer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_SetLineInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  vtkContourLineInterpolator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContourLineInterpolator"))
    {
    if (ap.IsBound())
      {
      op->SetLineInterpolator(temp0);
      }
    else
      {
      op->vtkContourRepresentation::SetLineInterpolator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetLineInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  vtkContourLineInterpolator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLineInterpolator();
      }
    else
      {
      tempr = op->vtkContourRepresentation::GetLineInterpolator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->BuildRepresentation();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2 = 0;
  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    tempr = op->ComputeInteractionState(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    op->StartWidgetInteraction(temp0);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    op->WidgetInteraction(temp0);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  vtkWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
    {
    op->ReleaseGraphicsResources(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    tempr = op->RenderOverlay(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    tempr = op->RenderOpaqueGeometry(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    tempr = op->RenderTranslucentPolygonalGeometry(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->HasTranslucentPolygonalGeometry();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_SetClosedLoop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClosedLoop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetClosedLoop(temp0);
      }
    else
      {
      op->vtkContourRepresentation::SetClosedLoop(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetClosedLoop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClosedLoop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetClosedLoop();
      }
    else
      {
      tempr = op->vtkContourRepresentation::GetClosedLoop();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_ClosedLoopOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClosedLoopOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClosedLoopOn();
      }
    else
      {
      op->vtkContourRepresentation::ClosedLoopOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_ClosedLoopOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClosedLoopOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClosedLoopOff();
      }
    else
      {
      op->vtkContourRepresentation::ClosedLoopOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_SetShowSelectedNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowSelectedNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShowSelectedNodes(temp0);
      }
    else
      {
      op->vtkContourRepresentation::SetShowSelectedNodes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetShowSelectedNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowSelectedNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShowSelectedNodes();
      }
    else
      {
      tempr = op->vtkContourRepresentation::GetShowSelectedNodes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_ShowSelectedNodesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowSelectedNodesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShowSelectedNodesOn();
      }
    else
      {
      op->vtkContourRepresentation::ShowSelectedNodesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_ShowSelectedNodesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowSelectedNodesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShowSelectedNodesOff();
      }
    else
      {
      op->vtkContourRepresentation::ShowSelectedNodesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetContourRepresentationAsPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContourRepresentationAsPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  vtkPolyData *tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetContourRepresentationAsPolyData();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetNodePolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodePolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->GetNodePolyData(temp0);
      }
    else
      {
      op->vtkContourRepresentation::GetNodePolyData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourRepresentation_SetRebuildLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRebuildLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRebuildLocator(temp0);
      }
    else
      {
      op->vtkContourRepresentation::SetRebuildLocator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkContourRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkContourRepresentation_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK methods.\n"},
  {(char*)"IsA", PyvtkContourRepresentation_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK methods.\n"},
  {(char*)"NewInstance", PyvtkContourRepresentation_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkContourRepresentation\nC++: vtkContourRepresentation *NewInstance()\n\nStandard VTK methods.\n"},
  {(char*)"AddNodeAtWorldPosition", PyvtkContourRepresentation_AddNodeAtWorldPosition, 1,
   (char*)"V.AddNodeAtWorldPosition(float, float, float) -> int\nC++: virtual int AddNodeAtWorldPosition(double x, double y,\n    double z)\nV.AddNodeAtWorldPosition([float, float, float]) -> int\nC++: virtual int AddNodeAtWorldPosition(double worldPos[3])\nV.AddNodeAtWorldPosition([float, float, float], [float, float,\n    float, float, float, float, float, float, float]) -> int\nC++: virtual int AddNodeAtWorldPosition(double worldPos[3],\n    double worldOrient[9])\n\nAdd a node at a specific world position. Returns 0 if the node\ncould not be added, 1 otherwise.\n"},
  {(char*)"AddNodeAtDisplayPosition", PyvtkContourRepresentation_AddNodeAtDisplayPosition, 1,
   (char*)"V.AddNodeAtDisplayPosition([float, float]) -> int\nC++: virtual int AddNodeAtDisplayPosition(double displayPos[2])\nV.AddNodeAtDisplayPosition([int, int]) -> int\nC++: virtual int AddNodeAtDisplayPosition(int displayPos[2])\nV.AddNodeAtDisplayPosition(int, int) -> int\nC++: virtual int AddNodeAtDisplayPosition(int X, int Y)\n\nAdd a node at a specific display position. This will be converted\ninto a world position according to the current constraints of the\npoint placer. Return 0 if a point could not be added, 1\notherwise.\n"},
  {(char*)"ActivateNode", PyvtkContourRepresentation_ActivateNode, 1,
   (char*)"V.ActivateNode([float, float]) -> int\nC++: virtual int ActivateNode(double displayPos[2])\nV.ActivateNode([int, int]) -> int\nC++: virtual int ActivateNode(int displayPos[2])\nV.ActivateNode(int, int) -> int\nC++: virtual int ActivateNode(int X, int Y)\n\nGiven a display position, activate a node. The closest node\nwithin tolerance will be activated. If a node is activated, 1\nwill be returned, otherwise 0 will be returned.\n"},
  {(char*)"SetActiveNodeToWorldPosition", PyvtkContourRepresentation_SetActiveNodeToWorldPosition, 1,
   (char*)"V.SetActiveNodeToWorldPosition([float, float, float]) -> int\nC++: virtual int SetActiveNodeToWorldPosition(double pos[3])\nV.SetActiveNodeToWorldPosition([float, float, float], [float,\n    float, float, float, float, float, float, float, float])\n    -> int\nC++: virtual int SetActiveNodeToWorldPosition(double pos[3],\n    double orient[9])\n\n"},
  {(char*)"SetActiveNodeToDisplayPosition", PyvtkContourRepresentation_SetActiveNodeToDisplayPosition, 1,
   (char*)"V.SetActiveNodeToDisplayPosition([float, float]) -> int\nC++: virtual int SetActiveNodeToDisplayPosition(double pos[2])\nV.SetActiveNodeToDisplayPosition([int, int]) -> int\nC++: virtual int SetActiveNodeToDisplayPosition(int pos[2])\nV.SetActiveNodeToDisplayPosition(int, int) -> int\nC++: virtual int SetActiveNodeToDisplayPosition(int X, int Y)\n\nMove the active node based on a specified display position. The\ndisplay position will be converted into a world position. If the\nnew position is not valid or there is no active node, a 0 will be\nreturned. Otherwise, on success a 1 will be returned.\n"},
  {(char*)"ToggleActiveNodeSelected", PyvtkContourRepresentation_ToggleActiveNodeSelected, 1,
   (char*)"V.ToggleActiveNodeSelected() -> int\nC++: virtual int ToggleActiveNodeSelected()\n\nSet/Get whether the active or nth node is selected.\n"},
  {(char*)"GetActiveNodeSelected", PyvtkContourRepresentation_GetActiveNodeSelected, 1,
   (char*)"V.GetActiveNodeSelected() -> int\nC++: virtual int GetActiveNodeSelected()\n\nSet/Get whether the active or nth node is selected.\n"},
  {(char*)"GetNthNodeSelected", PyvtkContourRepresentation_GetNthNodeSelected, 1,
   (char*)"V.GetNthNodeSelected(int) -> int\nC++: virtual int GetNthNodeSelected(int)\n\nSet/Get whether the active or nth node is selected.\n"},
  {(char*)"SetNthNodeSelected", PyvtkContourRepresentation_SetNthNodeSelected, 1,
   (char*)"V.SetNthNodeSelected(int) -> int\nC++: virtual int SetNthNodeSelected(int)\n\nSet/Get whether the active or nth node is selected.\n"},
  {(char*)"GetActiveNodeWorldPosition", PyvtkContourRepresentation_GetActiveNodeWorldPosition, 1,
   (char*)"V.GetActiveNodeWorldPosition([float, float, float]) -> int\nC++: virtual int GetActiveNodeWorldPosition(double pos[3])\n\nGet the world position of the active node. Will return 0 if there\nis no active node, or 1 otherwise.\n"},
  {(char*)"GetActiveNodeWorldOrientation", PyvtkContourRepresentation_GetActiveNodeWorldOrientation, 1,
   (char*)"V.GetActiveNodeWorldOrientation([float, float, float, float,\n    float, float, float, float, float]) -> int\nC++: virtual int GetActiveNodeWorldOrientation(double orient[9])\n\nGet the world orientation of the active node. Will return 0 if\nthere is no active node, or 1 otherwise.\n"},
  {(char*)"GetActiveNodeDisplayPosition", PyvtkContourRepresentation_GetActiveNodeDisplayPosition, 1,
   (char*)"V.GetActiveNodeDisplayPosition([float, float]) -> int\nC++: virtual int GetActiveNodeDisplayPosition(double pos[2])\n\nGet the display position of the active node. Will return 0 if\nthere is no active node, or 1 otherwise.\n"},
  {(char*)"GetNumberOfNodes", PyvtkContourRepresentation_GetNumberOfNodes, 1,
   (char*)"V.GetNumberOfNodes() -> int\nC++: virtual int GetNumberOfNodes()\n\nGet the number of nodes.\n"},
  {(char*)"GetNthNodeDisplayPosition", PyvtkContourRepresentation_GetNthNodeDisplayPosition, 1,
   (char*)"V.GetNthNodeDisplayPosition(int, [float, float]) -> int\nC++: virtual int GetNthNodeDisplayPosition(int n, double pos[2])\n\nGet the nth node's display position. Will return 1 on success, or\n0 if there are not at least (n+1) nodes (0 based counting).\n"},
  {(char*)"GetNthNodeWorldPosition", PyvtkContourRepresentation_GetNthNodeWorldPosition, 1,
   (char*)"V.GetNthNodeWorldPosition(int, [float, float, float]) -> int\nC++: virtual int GetNthNodeWorldPosition(int n, double pos[3])\n\nGet the nth node's world position. Will return 1 on success, or 0\nif there are not at least (n+1) nodes (0 based counting).\n"},
  {(char*)"GetNthNodeWorldOrientation", PyvtkContourRepresentation_GetNthNodeWorldOrientation, 1,
   (char*)"V.GetNthNodeWorldOrientation(int, [float, float, float, float,\n    float, float, float, float, float]) -> int\nC++: virtual int GetNthNodeWorldOrientation(int n,\n    double orient[9])\n\nGet the nth node's world orientation. Will return 1 on success,\nor 0 if there are not at least (n+1) nodes (0 based counting).\n"},
  {(char*)"SetNthNodeDisplayPosition", PyvtkContourRepresentation_SetNthNodeDisplayPosition, 1,
   (char*)"V.SetNthNodeDisplayPosition(int, int, int) -> int\nC++: virtual int SetNthNodeDisplayPosition(int n, int X, int Y)\nV.SetNthNodeDisplayPosition(int, [int, int]) -> int\nC++: virtual int SetNthNodeDisplayPosition(int n, int pos[2])\nV.SetNthNodeDisplayPosition(int, [float, float]) -> int\nC++: virtual int SetNthNodeDisplayPosition(int n, double pos[2])\n\nSet the nth node's display position. Display position will be\nconverted into world position according to the constraints of the\npoint placer. Will return 1 on success, or 0 if there are not at\nleast (n+1) nodes (0 based counting) or the world position is not\nvalid.\n"},
  {(char*)"SetNthNodeWorldPosition", PyvtkContourRepresentation_SetNthNodeWorldPosition, 1,
   (char*)"V.SetNthNodeWorldPosition(int, [float, float, float]) -> int\nC++: virtual int SetNthNodeWorldPosition(int n, double pos[3])\nV.SetNthNodeWorldPosition(int, [float, float, float], [float,\n    float, float, float, float, float, float, float, float])\n    -> int\nC++: virtual int SetNthNodeWorldPosition(int n, double pos[3],\n    double orient[9])\n\nSet the nth node's world position. Will return 1 on success, or 0\nif there are not at least (n+1) nodes (0 based counting) or the\nworld position is not valid according to the point placer.\n"},
  {(char*)"GetNthNodeSlope", PyvtkContourRepresentation_GetNthNodeSlope, 1,
   (char*)"V.GetNthNodeSlope(int, [float, float, float]) -> int\nC++: virtual int GetNthNodeSlope(int idx, double slope[3])\n\nGet the nth node's slope. Will return 1 on success, or 0 if there\nare not at least (n+1) nodes (0 based counting).\n"},
  {(char*)"GetNumberOfIntermediatePoints", PyvtkContourRepresentation_GetNumberOfIntermediatePoints, 1,
   (char*)"V.GetNumberOfIntermediatePoints(int) -> int\nC++: virtual int GetNumberOfIntermediatePoints(int n)\n\n"},
  {(char*)"GetIntermediatePointWorldPosition", PyvtkContourRepresentation_GetIntermediatePointWorldPosition, 1,
   (char*)"V.GetIntermediatePointWorldPosition(int, int, [float, float,\n    float]) -> int\nC++: virtual int GetIntermediatePointWorldPosition(int n, int idx,\n     double point[3])\n\nGet the world position of the intermediate point at index idx\nbetween nodes n and (n+1) (or n and 0 if n is the last node and\nthe loop is closed). Returns 1 on success or 0 if n or idx are\nout of range.\n"},
  {(char*)"AddIntermediatePointWorldPosition", PyvtkContourRepresentation_AddIntermediatePointWorldPosition, 1,
   (char*)"V.AddIntermediatePointWorldPosition(int, [float, float, float])\n    -> int\nC++: virtual int AddIntermediatePointWorldPosition(int n,\n    double point[3])\n\nAdd an intermediate point between node n and n+1 (or n and 0 if n\nis the last node and the loop is closed). Returns 1 on success or\n0 if n is out of range.\n"},
  {(char*)"DeleteLastNode", PyvtkContourRepresentation_DeleteLastNode, 1,
   (char*)"V.DeleteLastNode() -> int\nC++: virtual int DeleteLastNode()\n\nDelete the last node. Returns 1 on success or 0 if there were not\nany nodes.\n"},
  {(char*)"DeleteActiveNode", PyvtkContourRepresentation_DeleteActiveNode, 1,
   (char*)"V.DeleteActiveNode() -> int\nC++: virtual int DeleteActiveNode()\n\nDelete the active node. Returns 1 on success or 0 if the active\nnode did not indicate a valid node.\n"},
  {(char*)"DeleteNthNode", PyvtkContourRepresentation_DeleteNthNode, 1,
   (char*)"V.DeleteNthNode(int) -> int\nC++: virtual int DeleteNthNode(int n)\n\nDelete the nth node. Return 1 on success or 0 if n is out of\nrange.\n"},
  {(char*)"ClearAllNodes", PyvtkContourRepresentation_ClearAllNodes, 1,
   (char*)"V.ClearAllNodes()\nC++: virtual void ClearAllNodes()\n\nDelete all nodes.\n"},
  {(char*)"AddNodeOnContour", PyvtkContourRepresentation_AddNodeOnContour, 1,
   (char*)"V.AddNodeOnContour(int, int) -> int\nC++: virtual int AddNodeOnContour(int X, int Y)\n\nGiven a specific X, Y pixel location, add a new node on the\ncontour at this location.\n"},
  {(char*)"SetPixelTolerance", PyvtkContourRepresentation_SetPixelTolerance, 1,
   (char*)"V.SetPixelTolerance(int)\nC++: void SetPixelTolerance(int)\n\nThe tolerance to use when calculations are performed in display\ncoordinates\n"},
  {(char*)"GetPixelToleranceMinValue", PyvtkContourRepresentation_GetPixelToleranceMinValue, 1,
   (char*)"V.GetPixelToleranceMinValue() -> int\nC++: int GetPixelToleranceMinValue()\n\nThe tolerance to use when calculations are performed in display\ncoordinates\n"},
  {(char*)"GetPixelToleranceMaxValue", PyvtkContourRepresentation_GetPixelToleranceMaxValue, 1,
   (char*)"V.GetPixelToleranceMaxValue() -> int\nC++: int GetPixelToleranceMaxValue()\n\nThe tolerance to use when calculations are performed in display\ncoordinates\n"},
  {(char*)"GetPixelTolerance", PyvtkContourRepresentation_GetPixelTolerance, 1,
   (char*)"V.GetPixelTolerance() -> int\nC++: int GetPixelTolerance()\n\nThe tolerance to use when calculations are performed in display\ncoordinates\n"},
  {(char*)"SetWorldTolerance", PyvtkContourRepresentation_SetWorldTolerance, 1,
   (char*)"V.SetWorldTolerance(float)\nC++: void SetWorldTolerance(double)\n\nThe tolerance to use when calculations are performed in world\ncoordinates\n"},
  {(char*)"GetWorldToleranceMinValue", PyvtkContourRepresentation_GetWorldToleranceMinValue, 1,
   (char*)"V.GetWorldToleranceMinValue() -> float\nC++: double GetWorldToleranceMinValue()\n\nThe tolerance to use when calculations are performed in world\ncoordinates\n"},
  {(char*)"GetWorldToleranceMaxValue", PyvtkContourRepresentation_GetWorldToleranceMaxValue, 1,
   (char*)"V.GetWorldToleranceMaxValue() -> float\nC++: double GetWorldToleranceMaxValue()\n\nThe tolerance to use when calculations are performed in world\ncoordinates\n"},
  {(char*)"GetWorldTolerance", PyvtkContourRepresentation_GetWorldTolerance, 1,
   (char*)"V.GetWorldTolerance() -> float\nC++: double GetWorldTolerance()\n\nThe tolerance to use when calculations are performed in world\ncoordinates\n"},
  {(char*)"GetCurrentOperation", PyvtkContourRepresentation_GetCurrentOperation, 1,
   (char*)"V.GetCurrentOperation() -> int\nC++: int GetCurrentOperation()\n\nSet / get the current operation. The widget is either inactive,\nor it is being translated.\n"},
  {(char*)"SetCurrentOperation", PyvtkContourRepresentation_SetCurrentOperation, 1,
   (char*)"V.SetCurrentOperation(int)\nC++: void SetCurrentOperation(int)\n\nSet / get the current operation. The widget is either inactive,\nor it is being translated.\n"},
  {(char*)"GetCurrentOperationMinValue", PyvtkContourRepresentation_GetCurrentOperationMinValue, 1,
   (char*)"V.GetCurrentOperationMinValue() -> int\nC++: int GetCurrentOperationMinValue()\n\nSet / get the current operation. The widget is either inactive,\nor it is being translated.\n"},
  {(char*)"GetCurrentOperationMaxValue", PyvtkContourRepresentation_GetCurrentOperationMaxValue, 1,
   (char*)"V.GetCurrentOperationMaxValue() -> int\nC++: int GetCurrentOperationMaxValue()\n\nSet / get the current operation. The widget is either inactive,\nor it is being translated.\n"},
  {(char*)"SetCurrentOperationToInactive", PyvtkContourRepresentation_SetCurrentOperationToInactive, 1,
   (char*)"V.SetCurrentOperationToInactive()\nC++: void SetCurrentOperationToInactive()\n\nSet / get the current operation. The widget is either inactive,\nor it is being translated.\n"},
  {(char*)"SetCurrentOperationToTranslate", PyvtkContourRepresentation_SetCurrentOperationToTranslate, 1,
   (char*)"V.SetCurrentOperationToTranslate()\nC++: void SetCurrentOperationToTranslate()\n\nSet / get the current operation. The widget is either inactive,\nor it is being translated.\n"},
  {(char*)"SetCurrentOperationToShift", PyvtkContourRepresentation_SetCurrentOperationToShift, 1,
   (char*)"V.SetCurrentOperationToShift()\nC++: void SetCurrentOperationToShift()\n\nSet / get the current operation. The widget is either inactive,\nor it is being translated.\n"},
  {(char*)"SetCurrentOperationToScale", PyvtkContourRepresentation_SetCurrentOperationToScale, 1,
   (char*)"V.SetCurrentOperationToScale()\nC++: void SetCurrentOperationToScale()\n\nSet / get the current operation. The widget is either inactive,\nor it is being translated.\n"},
  {(char*)"SetPointPlacer", PyvtkContourRepresentation_SetPointPlacer, 1,
   (char*)"V.SetPointPlacer(vtkPointPlacer)\nC++: void SetPointPlacer(vtkPointPlacer *)\n\n"},
  {(char*)"GetPointPlacer", PyvtkContourRepresentation_GetPointPlacer, 1,
   (char*)"V.GetPointPlacer() -> vtkPointPlacer\nC++: vtkPointPlacer *GetPointPlacer()\n\n"},
  {(char*)"SetLineInterpolator", PyvtkContourRepresentation_SetLineInterpolator, 1,
   (char*)"V.SetLineInterpolator(vtkContourLineInterpolator)\nC++: void SetLineInterpolator(vtkContourLineInterpolator *)\n\nSet / Get the Line Interpolator. The line interpolator is\nresponsible for generating the line segments connecting nodes.\n"},
  {(char*)"GetLineInterpolator", PyvtkContourRepresentation_GetLineInterpolator, 1,
   (char*)"V.GetLineInterpolator() -> vtkContourLineInterpolator\nC++: vtkContourLineInterpolator *GetLineInterpolator()\n\nSet / Get the Line Interpolator. The line interpolator is\nresponsible for generating the line segments connecting nodes.\n"},
  {(char*)"BuildRepresentation", PyvtkContourRepresentation_BuildRepresentation, 1,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"ComputeInteractionState", PyvtkContourRepresentation_ComputeInteractionState, 1,
   (char*)"V.ComputeInteractionState(int, int, int) -> int\nC++: virtual int ComputeInteractionState(int X, int Y,\n    int modified=0)\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"StartWidgetInteraction", PyvtkContourRepresentation_StartWidgetInteraction, 1,
   (char*)"V.StartWidgetInteraction([float, float])\nC++: virtual void StartWidgetInteraction(double e[2])\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"WidgetInteraction", PyvtkContourRepresentation_WidgetInteraction, 1,
   (char*)"V.WidgetInteraction([float, float])\nC++: virtual void WidgetInteraction(double e[2])\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkContourRepresentation_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *w)\n\nMethods required by vtkProp superclass.\n"},
  {(char*)"RenderOverlay", PyvtkContourRepresentation_RenderOverlay, 1,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: virtual int RenderOverlay(vtkViewport *viewport)\n\nMethods required by vtkProp superclass.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkContourRepresentation_RenderOpaqueGeometry, 1,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *viewport)\n\nMethods required by vtkProp superclass.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkContourRepresentation_RenderTranslucentPolygonalGeometry, 1,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(\n    vtkViewport *viewport)\n\nMethods required by vtkProp superclass.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkContourRepresentation_HasTranslucentPolygonalGeometry, 1,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nMethods required by vtkProp superclass.\n"},
  {(char*)"SetClosedLoop", PyvtkContourRepresentation_SetClosedLoop, 1,
   (char*)"V.SetClosedLoop(int)\nC++: void SetClosedLoop(int val)\n\nSet / Get the ClosedLoop value. This ivar indicates whether the\ncontour forms a closed loop.\n"},
  {(char*)"GetClosedLoop", PyvtkContourRepresentation_GetClosedLoop, 1,
   (char*)"V.GetClosedLoop() -> int\nC++: int GetClosedLoop()\n\nSet / Get the ClosedLoop value. This ivar indicates whether the\ncontour forms a closed loop.\n"},
  {(char*)"ClosedLoopOn", PyvtkContourRepresentation_ClosedLoopOn, 1,
   (char*)"V.ClosedLoopOn()\nC++: void ClosedLoopOn()\n\nSet / Get the ClosedLoop value. This ivar indicates whether the\ncontour forms a closed loop.\n"},
  {(char*)"ClosedLoopOff", PyvtkContourRepresentation_ClosedLoopOff, 1,
   (char*)"V.ClosedLoopOff()\nC++: void ClosedLoopOff()\n\nSet / Get the ClosedLoop value. This ivar indicates whether the\ncontour forms a closed loop.\n"},
  {(char*)"SetShowSelectedNodes", PyvtkContourRepresentation_SetShowSelectedNodes, 1,
   (char*)"V.SetShowSelectedNodes(int)\nC++: virtual void SetShowSelectedNodes(int)\n\nA flag to indicate whether to show the Selected nodes Default is\nto set it to false.\n"},
  {(char*)"GetShowSelectedNodes", PyvtkContourRepresentation_GetShowSelectedNodes, 1,
   (char*)"V.GetShowSelectedNodes() -> int\nC++: int GetShowSelectedNodes()\n\nA flag to indicate whether to show the Selected nodes Default is\nto set it to false.\n"},
  {(char*)"ShowSelectedNodesOn", PyvtkContourRepresentation_ShowSelectedNodesOn, 1,
   (char*)"V.ShowSelectedNodesOn()\nC++: void ShowSelectedNodesOn()\n\nA flag to indicate whether to show the Selected nodes Default is\nto set it to false.\n"},
  {(char*)"ShowSelectedNodesOff", PyvtkContourRepresentation_ShowSelectedNodesOff, 1,
   (char*)"V.ShowSelectedNodesOff()\nC++: void ShowSelectedNodesOff()\n\nA flag to indicate whether to show the Selected nodes Default is\nto set it to false.\n"},
  {(char*)"GetContourRepresentationAsPolyData", PyvtkContourRepresentation_GetContourRepresentationAsPolyData, 1,
   (char*)"V.GetContourRepresentationAsPolyData() -> vtkPolyData\nC++: virtual vtkPolyData *GetContourRepresentationAsPolyData()\n\nGet the points in this contour as a vtkPolyData.\n"},
  {(char*)"GetNodePolyData", PyvtkContourRepresentation_GetNodePolyData, 1,
   (char*)"V.GetNodePolyData(vtkPolyData)\nC++: void GetNodePolyData(vtkPolyData *poly)\n\nGet the nodes and not the intermediate points in this contour as\na vtkPolyData.\n"},
  {(char*)"SetRebuildLocator", PyvtkContourRepresentation_SetRebuildLocator, 1,
   (char*)"V.SetRebuildLocator(bool)\nC++: void SetRebuildLocator(bool a)\n\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkContourRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkContourRepresentation_Methods,
    "vtkContourRepresentation", modulename,
    NULL, NULL,
    PyvtkContourRepresentation_Doc(),
    PyVTKClass_vtkWidgetRepresentationNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"Outside", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"Nearby", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"Inactive", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"Translate", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"Shift", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"Scale", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkContourRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkContourRepresentation - represent the vtkContourWidget\n\n",
    "Superclass: vtkWidgetRepresentation\n\n",
    "The vtkContourRepresentation is a superclass for various types of\nrepresentations for the vtkContourWidget.\n\nManaging contour points:\n\nThe classes vtkContourRepresentationNode,\nvtkContourRepresentationInternals, vtkContourRepresentationPoint\nmanage the data structure used to represent nodes and points on a\ncontour. A contour may contain several nodes and several more points.\nNodes are usually the ",
    "result of user clicked points on the contour.\nAdditional points are created between nodes to generate a smooth\ncurve using some Interpolator. See the method\nSetLineInterpolator.\\par The data structure stores both the world and\ndisplay positions for every point. (This may seem like a\nduplication.) The default behaviour of this class is to use the\nWorldPosition to do all the math. Typically a point ",
    "is added at a\ngiven display position. Its corresponding world position is computed\nusing the point placer and stored. Any query of the display position\nof a stored point is done via the Renderer, which computes the\ndisplay position given a world position.\n\n\\par So why maintain the display position ? Consider drawing a\ncontour on a volume widget. You might want the contour to be located\nat a certai",
    "n world position in the volume or you might want to be\noverlayed over the window like an Actor2D. The default behaviour of\nthis class is to provide the former behaviour.\n\n\\par To achieve the latter behaviour override the methods that return\nthe display position (to return the set display position instead of\ncomputing it from the world positions) and the method BuildLines() to\ninterpolate lines usi",
    "ng their display positions intead of world\npositions.\n\nSee Also:\n\nvtkContourWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkContourRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyvtkContourRepresentationPoint_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkContourRepresentationPoint", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkContourRepresentationNode_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkContourRepresentationNode", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkContourRepresentationInternals_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkContourRepresentationInternals", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkContourRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkContourRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

