// python wrapper for vtkDataSetSurfaceFilter
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
#include "vtkDataSetSurfaceFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDataSetSurfaceFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDataSetSurfaceFilter(PyObject *, const char *); }
#endif

static const char **PyvtkFastGeomQuadStruct_Doc();

static PyMethodDef PyvtkFastGeomQuadStruct_Methods[] = {
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkFastGeomQuadStruct_Type
extern PyTypeObject PyvtkFastGeomQuadStruct_Type;
#define DECLARED_PyvtkFastGeomQuadStruct_Type
#endif


static PyObject *
PyvtkFastGeomQuadStruct_vtkFastGeomQuadStruct(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkFastGeomQuadStruct");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkFastGeomQuadStruct *op = new vtkFastGeomQuadStruct();

    result = PyVTKSpecialObject_New("vtkFastGeomQuadStruct", op);
    }

  return result;
}

static PyMethodDef PyvtkFastGeomQuadStruct_vtkFastGeomQuadStruct_Methods[] = {
  {NULL, NULL, 0, NULL}
};

static PyMethodDef PyvtkFastGeomQuadStruct_NewMethod = \
{ (char*)"vtkFastGeomQuadStruct", PyvtkFastGeomQuadStruct_vtkFastGeomQuadStruct, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkFastGeomQuadStruct_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkFastGeomQuadStruct_vtkFastGeomQuadStruct(NULL, args);
}
#endif

static void PyvtkFastGeomQuadStruct_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkFastGeomQuadStruct *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkFastGeomQuadStruct_Hash(PyObject *self)
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

PyTypeObject PyvtkFastGeomQuadStruct_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkFastGeomQuadStruct", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkFastGeomQuadStruct_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkFastGeomQuadStruct_Hash, // tp_hash
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
  PyvtkFastGeomQuadStruct_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkFastGeomQuadStruct_New, // tp_new
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

static void *PyvtkFastGeomQuadStruct_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkFastGeomQuadStruct(*static_cast<const vtkFastGeomQuadStruct*>(obj));
    }
  return 0;
}

static PyObject *PyvtkFastGeomQuadStruct_TypeNew(const char *)
{
  return PyVTKSpecialType_New(
    &PyvtkFastGeomQuadStruct_Type,
    PyvtkFastGeomQuadStruct_Methods,
    PyvtkFastGeomQuadStruct_vtkFastGeomQuadStruct_Methods,
    &PyvtkFastGeomQuadStruct_NewMethod,
    PyvtkFastGeomQuadStruct_Doc(), &PyvtkFastGeomQuadStruct_CCopy);
}

const char **PyvtkFastGeomQuadStruct_Doc()
{
  static const char *docstring[] = {
    "vtkDataSetSurfaceFilter - Extracts outer (polygonal) surface.\n\n",
    "vtkDataSetSurfaceFilter is a faster version of vtkGeometry filter,\nbut it does not have an option to select bounds.  It may use more\nmemory than vtkGeometryFilter.  It only has one option: whether to\nuse triangle strips when the input type is structured.\n\nSee Also:\n\nvtkGeometryFilter vtkStructuredGridGeometryFilter.\n\n",
    "V.vtkFastGeomQuadStruct()\nC++: vtkFastGeomQuadStruct()\n",
    NULL
  };

  return docstring;
}

#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDataSetSurfaceFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDataSetSurfaceFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkDataSetSurfaceFilter_Doc();


static PyObject *
PyvtkDataSetSurfaceFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

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
      tempr = op->vtkDataSetSurfaceFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

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
      tempr = op->vtkDataSetSurfaceFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  vtkDataSetSurfaceFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDataSetSurfaceFilter::NewInstance();
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
PyvtkDataSetSurfaceFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDataSetSurfaceFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDataSetSurfaceFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_SetUseStrips(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseStrips");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseStrips(temp0);
      }
    else
      {
      op->vtkDataSetSurfaceFilter::SetUseStrips(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_GetUseStrips(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseStrips");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseStrips();
      }
    else
      {
      tempr = op->vtkDataSetSurfaceFilter::GetUseStrips();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_UseStripsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseStripsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseStripsOn();
      }
    else
      {
      op->vtkDataSetSurfaceFilter::UseStripsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_UseStripsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseStripsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseStripsOff();
      }
    else
      {
      op->vtkDataSetSurfaceFilter::UseStripsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_SetPieceInvariant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPieceInvariant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPieceInvariant(temp0);
      }
    else
      {
      op->vtkDataSetSurfaceFilter::SetPieceInvariant(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_GetPieceInvariant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPieceInvariant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPieceInvariant();
      }
    else
      {
      tempr = op->vtkDataSetSurfaceFilter::GetPieceInvariant();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_SetPassThroughCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassThroughCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPassThroughCellIds(temp0);
      }
    else
      {
      op->vtkDataSetSurfaceFilter::SetPassThroughCellIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_GetPassThroughCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassThroughCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPassThroughCellIds();
      }
    else
      {
      tempr = op->vtkDataSetSurfaceFilter::GetPassThroughCellIds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_PassThroughCellIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughCellIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassThroughCellIdsOn();
      }
    else
      {
      op->vtkDataSetSurfaceFilter::PassThroughCellIdsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_PassThroughCellIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughCellIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassThroughCellIdsOff();
      }
    else
      {
      op->vtkDataSetSurfaceFilter::PassThroughCellIdsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_SetPassThroughPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassThroughPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPassThroughPointIds(temp0);
      }
    else
      {
      op->vtkDataSetSurfaceFilter::SetPassThroughPointIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_GetPassThroughPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassThroughPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPassThroughPointIds();
      }
    else
      {
      tempr = op->vtkDataSetSurfaceFilter::GetPassThroughPointIds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_PassThroughPointIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughPointIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassThroughPointIdsOn();
      }
    else
      {
      op->vtkDataSetSurfaceFilter::PassThroughPointIdsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_PassThroughPointIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughPointIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassThroughPointIdsOff();
      }
    else
      {
      op->vtkDataSetSurfaceFilter::PassThroughPointIdsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_SetOriginalCellIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginalCellIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOriginalCellIdsName(temp0);
      }
    else
      {
      op->vtkDataSetSurfaceFilter::SetOriginalCellIdsName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_GetOriginalCellIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginalCellIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOriginalCellIdsName();
      }
    else
      {
      tempr = op->vtkDataSetSurfaceFilter::GetOriginalCellIdsName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_SetOriginalPointIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginalPointIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOriginalPointIdsName(temp0);
      }
    else
      {
      op->vtkDataSetSurfaceFilter::SetOriginalPointIdsName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_GetOriginalPointIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginalPointIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOriginalPointIdsName();
      }
    else
      {
      tempr = op->vtkDataSetSurfaceFilter::GetOriginalPointIdsName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_SetNonlinearSubdivisionLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNonlinearSubdivisionLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNonlinearSubdivisionLevel(temp0);
      }
    else
      {
      op->vtkDataSetSurfaceFilter::SetNonlinearSubdivisionLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_GetNonlinearSubdivisionLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonlinearSubdivisionLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNonlinearSubdivisionLevel();
      }
    else
      {
      tempr = op->vtkDataSetSurfaceFilter::GetNonlinearSubdivisionLevel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_UnstructuredGridExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnstructuredGridExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  vtkDataSet *temp0 = NULL;
  vtkPolyData *temp1 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetVTKObject(temp1, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      tempr = op->UnstructuredGridExecute(temp0, temp1);
      }
    else
      {
      tempr = op->vtkDataSetSurfaceFilter::UnstructuredGridExecute(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_DataSetExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DataSetExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  vtkDataSet *temp0 = NULL;
  vtkPolyData *temp1 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetVTKObject(temp1, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      tempr = op->DataSetExecute(temp0, temp1);
      }
    else
      {
      tempr = op->vtkDataSetSurfaceFilter::DataSetExecute(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDataSetSurfaceFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkDataSetSurfaceFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataSetSurfaceFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataSetSurfaceFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDataSetSurfaceFilter\nC++: vtkDataSetSurfaceFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDataSetSurfaceFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDataSetSurfaceFilter\nC++: vtkDataSetSurfaceFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetUseStrips", PyvtkDataSetSurfaceFilter_SetUseStrips, 1,
   (char*)"V.SetUseStrips(int)\nC++: void SetUseStrips(int a)\n\nWhen input is structured data, this flag will generate faces with\ntriangle strips.  This should render faster and use less memory,\nbut no cell data is copied.  By default, UseStrips is Off.\n"},
  {(char*)"GetUseStrips", PyvtkDataSetSurfaceFilter_GetUseStrips, 1,
   (char*)"V.GetUseStrips() -> int\nC++: int GetUseStrips()\n\nWhen input is structured data, this flag will generate faces with\ntriangle strips.  This should render faster and use less memory,\nbut no cell data is copied.  By default, UseStrips is Off.\n"},
  {(char*)"UseStripsOn", PyvtkDataSetSurfaceFilter_UseStripsOn, 1,
   (char*)"V.UseStripsOn()\nC++: void UseStripsOn()\n\nWhen input is structured data, this flag will generate faces with\ntriangle strips.  This should render faster and use less memory,\nbut no cell data is copied.  By default, UseStrips is Off.\n"},
  {(char*)"UseStripsOff", PyvtkDataSetSurfaceFilter_UseStripsOff, 1,
   (char*)"V.UseStripsOff()\nC++: void UseStripsOff()\n\nWhen input is structured data, this flag will generate faces with\ntriangle strips.  This should render faster and use less memory,\nbut no cell data is copied.  By default, UseStrips is Off.\n"},
  {(char*)"SetPieceInvariant", PyvtkDataSetSurfaceFilter_SetPieceInvariant, 1,
   (char*)"V.SetPieceInvariant(int)\nC++: void SetPieceInvariant(int a)\n\nIf PieceInvariant is true, vtkDataSetSurfaceFilter requests 1\nghost level from input in order to remove internal surface that\nare between processes. False by default.\n"},
  {(char*)"GetPieceInvariant", PyvtkDataSetSurfaceFilter_GetPieceInvariant, 1,
   (char*)"V.GetPieceInvariant() -> int\nC++: int GetPieceInvariant()\n\nIf PieceInvariant is true, vtkDataSetSurfaceFilter requests 1\nghost level from input in order to remove internal surface that\nare between processes. False by default.\n"},
  {(char*)"SetPassThroughCellIds", PyvtkDataSetSurfaceFilter_SetPassThroughCellIds, 1,
   (char*)"V.SetPassThroughCellIds(int)\nC++: void SetPassThroughCellIds(int a)\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for cell picking. The default is\noff to conserve memory. Note that PassThroughCellIds will be\nignored if UseStrips is on, since in that case each tringle strip\ncan represent more than on of the input cells.\n"},
  {(char*)"GetPassThroughCellIds", PyvtkDataSetSurfaceFilter_GetPassThroughCellIds, 1,
   (char*)"V.GetPassThroughCellIds() -> int\nC++: int GetPassThroughCellIds()\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for cell picking. The default is\noff to conserve memory. Note that PassThroughCellIds will be\nignored if UseStrips is on, since in that case each tringle strip\ncan represent more than on of the input cells.\n"},
  {(char*)"PassThroughCellIdsOn", PyvtkDataSetSurfaceFilter_PassThroughCellIdsOn, 1,
   (char*)"V.PassThroughCellIdsOn()\nC++: void PassThroughCellIdsOn()\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for cell picking. The default is\noff to conserve memory. Note that PassThroughCellIds will be\nignored if UseStrips is on, since in that case each tringle strip\ncan represent more than on of the input cells.\n"},
  {(char*)"PassThroughCellIdsOff", PyvtkDataSetSurfaceFilter_PassThroughCellIdsOff, 1,
   (char*)"V.PassThroughCellIdsOff()\nC++: void PassThroughCellIdsOff()\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for cell picking. The default is\noff to conserve memory. Note that PassThroughCellIds will be\nignored if UseStrips is on, since in that case each tringle strip\ncan represent more than on of the input cells.\n"},
  {(char*)"SetPassThroughPointIds", PyvtkDataSetSurfaceFilter_SetPassThroughPointIds, 1,
   (char*)"V.SetPassThroughPointIds(int)\nC++: void SetPassThroughPointIds(int a)\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for cell picking. The default is\noff to conserve memory. Note that PassThroughCellIds will be\nignored if UseStrips is on, since in that case each tringle strip\ncan represent more than on of the input cells.\n"},
  {(char*)"GetPassThroughPointIds", PyvtkDataSetSurfaceFilter_GetPassThroughPointIds, 1,
   (char*)"V.GetPassThroughPointIds() -> int\nC++: int GetPassThroughPointIds()\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for cell picking. The default is\noff to conserve memory. Note that PassThroughCellIds will be\nignored if UseStrips is on, since in that case each tringle strip\ncan represent more than on of the input cells.\n"},
  {(char*)"PassThroughPointIdsOn", PyvtkDataSetSurfaceFilter_PassThroughPointIdsOn, 1,
   (char*)"V.PassThroughPointIdsOn()\nC++: void PassThroughPointIdsOn()\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for cell picking. The default is\noff to conserve memory. Note that PassThroughCellIds will be\nignored if UseStrips is on, since in that case each tringle strip\ncan represent more than on of the input cells.\n"},
  {(char*)"PassThroughPointIdsOff", PyvtkDataSetSurfaceFilter_PassThroughPointIdsOff, 1,
   (char*)"V.PassThroughPointIdsOff()\nC++: void PassThroughPointIdsOff()\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for cell picking. The default is\noff to conserve memory. Note that PassThroughCellIds will be\nignored if UseStrips is on, since in that case each tringle strip\ncan represent more than on of the input cells.\n"},
  {(char*)"SetOriginalCellIdsName", PyvtkDataSetSurfaceFilter_SetOriginalCellIdsName, 1,
   (char*)"V.SetOriginalCellIdsName(string)\nC++: void SetOriginalCellIdsName(char *)\n\nIf PassThroughCellIds or PassThroughPointIds is on, then these\nivars control the name given to the field in which the ids are\nwritten into.  If set to NULL, then vtkOriginalCellIds or\nvtkOriginalPointIds (the default) is used, respectively.\n"},
  {(char*)"GetOriginalCellIdsName", PyvtkDataSetSurfaceFilter_GetOriginalCellIdsName, 1,
   (char*)"V.GetOriginalCellIdsName() -> string\nC++: virtual const char *GetOriginalCellIdsName()\n\nIf PassThroughCellIds or PassThroughPointIds is on, then these\nivars control the name given to the field in which the ids are\nwritten into.  If set to NULL, then vtkOriginalCellIds or\nvtkOriginalPointIds (the default) is used, respectively.\n"},
  {(char*)"SetOriginalPointIdsName", PyvtkDataSetSurfaceFilter_SetOriginalPointIdsName, 1,
   (char*)"V.SetOriginalPointIdsName(string)\nC++: void SetOriginalPointIdsName(char *)\n\nIf PassThroughCellIds or PassThroughPointIds is on, then these\nivars control the name given to the field in which the ids are\nwritten into.  If set to NULL, then vtkOriginalCellIds or\nvtkOriginalPointIds (the default) is used, respectively.\n"},
  {(char*)"GetOriginalPointIdsName", PyvtkDataSetSurfaceFilter_GetOriginalPointIdsName, 1,
   (char*)"V.GetOriginalPointIdsName() -> string\nC++: virtual const char *GetOriginalPointIdsName()\n\nIf PassThroughCellIds or PassThroughPointIds is on, then these\nivars control the name given to the field in which the ids are\nwritten into.  If set to NULL, then vtkOriginalCellIds or\nvtkOriginalPointIds (the default) is used, respectively.\n"},
  {(char*)"SetNonlinearSubdivisionLevel", PyvtkDataSetSurfaceFilter_SetNonlinearSubdivisionLevel, 1,
   (char*)"V.SetNonlinearSubdivisionLevel(int)\nC++: void SetNonlinearSubdivisionLevel(int a)\n\nIf the input is an unstructured grid with nonlinear faces, this\nparameter determines how many times the face is subdivided into\nlinear faces.  If 0, the output is the equivalent of its linear\ncouterpart (and the midpoints determining the nonlinear\ninterpolation are discarded).  If 1 (the default), the nonlinear\nface is triangulated based on the midpoints.  If greater than 1,\nthe triangulated pieces are recursively subdivided to reach the\ndesired subdivision.  Setting the value to greater than 1 may\ncause some point data to not be passed even if no nonlinear faces\nexist.  This option has no effect if the input is not an\nunstructured grid.\n"},
  {(char*)"GetNonlinearSubdivisionLevel", PyvtkDataSetSurfaceFilter_GetNonlinearSubdivisionLevel, 1,
   (char*)"V.GetNonlinearSubdivisionLevel() -> int\nC++: int GetNonlinearSubdivisionLevel()\n\nIf the input is an unstructured grid with nonlinear faces, this\nparameter determines how many times the face is subdivided into\nlinear faces.  If 0, the output is the equivalent of its linear\ncouterpart (and the midpoints determining the nonlinear\ninterpolation are discarded).  If 1 (the default), the nonlinear\nface is triangulated based on the midpoints.  If greater than 1,\nthe triangulated pieces are recursively subdivided to reach the\ndesired subdivision.  Setting the value to greater than 1 may\ncause some point data to not be passed even if no nonlinear faces\nexist.  This option has no effect if the input is not an\nunstructured grid.\n"},
  {(char*)"UnstructuredGridExecute", PyvtkDataSetSurfaceFilter_UnstructuredGridExecute, 1,
   (char*)"V.UnstructuredGridExecute(vtkDataSet, vtkPolyData) -> int\nC++: virtual int UnstructuredGridExecute(vtkDataSet *input,\n    vtkPolyData *output)\n\nDirect access methods that can be used to use the this class as\nan algorithm without using it as a filter.\n"},
  {(char*)"DataSetExecute", PyvtkDataSetSurfaceFilter_DataSetExecute, 1,
   (char*)"V.DataSetExecute(vtkDataSet, vtkPolyData) -> int\nC++: virtual int DataSetExecute(vtkDataSet *input,\n    vtkPolyData *output)\n\nDirect access methods that can be used to use the this class as\nan algorithm without using it as a filter.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDataSetSurfaceFilter_StaticNew()
{
  return vtkDataSetSurfaceFilter::New();
}

PyObject *PyVTKClass_vtkDataSetSurfaceFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDataSetSurfaceFilter_StaticNew,
    PyvtkDataSetSurfaceFilter_Methods,
    "vtkDataSetSurfaceFilter", modulename,
    NULL, NULL,
    PyvtkDataSetSurfaceFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkDataSetSurfaceFilter_Doc()
{
  static const char *docstring[] = {
    "vtkDataSetSurfaceFilter - Extracts outer (polygonal) surface.\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkDataSetSurfaceFilter is a faster version of vtkGeometry filter,\nbut it does not have an option to select bounds.  It may use more\nmemory than vtkGeometryFilter.  It only has one option: whether to\nuse triangle strips when the input type is structured.\n\nSee Also:\n\nvtkGeometryFilter vtkStructuredGridGeometryFilter.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataSetSurfaceFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyvtkFastGeomQuadStruct_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkFastGeomQuadStruct", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkDataSetSurfaceFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataSetSurfaceFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}
