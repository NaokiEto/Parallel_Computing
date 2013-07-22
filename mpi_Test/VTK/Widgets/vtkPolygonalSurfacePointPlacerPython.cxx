// python wrapper for vtkPolygonalSurfacePointPlacer
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
#include "vtkPolygonalSurfacePointPlacer.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPolygonalSurfacePointPlacer(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPolygonalSurfacePointPlacer(PyObject *, const char *); }
#endif

static const char **PyvtkPolygonalSurfacePointPlacerNode_Doc();

static PyMethodDef PyvtkPolygonalSurfacePointPlacerNode_Methods[] = {
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkPolygonalSurfacePointPlacerNode_Type
extern PyTypeObject PyvtkPolygonalSurfacePointPlacerNode_Type;
#define DECLARED_PyvtkPolygonalSurfacePointPlacerNode_Type
#endif


static PyObject *
PyvtkPolygonalSurfacePointPlacerNode_vtkPolygonalSurfacePointPlacerNode(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkPolygonalSurfacePointPlacerNode");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkPolygonalSurfacePointPlacerNode *op = new vtkPolygonalSurfacePointPlacerNode();

    result = PyVTKSpecialObject_New("vtkPolygonalSurfacePointPlacerNode", op);
    }

  return result;
}

static PyMethodDef PyvtkPolygonalSurfacePointPlacerNode_vtkPolygonalSurfacePointPlacerNode_Methods[] = {
  {NULL, NULL, 0, NULL}
};

static PyMethodDef PyvtkPolygonalSurfacePointPlacerNode_NewMethod = \
{ (char*)"vtkPolygonalSurfacePointPlacerNode", PyvtkPolygonalSurfacePointPlacerNode_vtkPolygonalSurfacePointPlacerNode, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkPolygonalSurfacePointPlacerNode_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkPolygonalSurfacePointPlacerNode_vtkPolygonalSurfacePointPlacerNode(NULL, args);
}
#endif

static void PyvtkPolygonalSurfacePointPlacerNode_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkPolygonalSurfacePointPlacerNode *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkPolygonalSurfacePointPlacerNode_Hash(PyObject *self)
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

PyTypeObject PyvtkPolygonalSurfacePointPlacerNode_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkPolygonalSurfacePointPlacerNode", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkPolygonalSurfacePointPlacerNode_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkPolygonalSurfacePointPlacerNode_Hash, // tp_hash
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
  PyvtkPolygonalSurfacePointPlacerNode_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkPolygonalSurfacePointPlacerNode_New, // tp_new
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

static void *PyvtkPolygonalSurfacePointPlacerNode_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkPolygonalSurfacePointPlacerNode(*static_cast<const vtkPolygonalSurfacePointPlacerNode*>(obj));
    }
  return 0;
}

static PyObject *PyvtkPolygonalSurfacePointPlacerNode_TypeNew(const char *)
{
  return PyVTKSpecialType_New(
    &PyvtkPolygonalSurfacePointPlacerNode_Type,
    PyvtkPolygonalSurfacePointPlacerNode_Methods,
    PyvtkPolygonalSurfacePointPlacerNode_vtkPolygonalSurfacePointPlacerNode_Methods,
    &PyvtkPolygonalSurfacePointPlacerNode_NewMethod,
    PyvtkPolygonalSurfacePointPlacerNode_Doc(), &PyvtkPolygonalSurfacePointPlacerNode_CCopy);
}

const char **PyvtkPolygonalSurfacePointPlacerNode_Doc()
{
  static const char *docstring[] = {
    "- Place points on the surface of polygonal data.\n\n",
    "vtkPolygonalSurfacePointPlacer places points on polygonal data and is\nmeant to be used in conjunction with\nvtkPolygonalSurfaceContourLineInterpolator.\n\nUsage:\n\nCaveats:\n\nYou should have computed cell normals for the input polydata if you\nare specifying a distance offset.\n\nSee Also:\n\nvtkPointPlacer vtkPolyDataNormals\n\n",
    "V.vtkPolygonalSurfacePointPlacerNode()\nC++: vtkPolygonalSurfacePointPlacerNode()\n",
    NULL
  };

  return docstring;
}

#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPolygonalSurfacePointPlacerNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPolygonalSurfacePointPlacerNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataPointPlacerNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataPointPlacerNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataPointPlacerNew
#endif

static const char **PyvtkPolygonalSurfacePointPlacer_Doc();


static PyObject *
PyvtkPolygonalSurfacePointPlacer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfacePointPlacer *op = static_cast<vtkPolygonalSurfacePointPlacer *>(vp);

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
      tempr = op->vtkPolygonalSurfacePointPlacer::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolygonalSurfacePointPlacer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfacePointPlacer *op = static_cast<vtkPolygonalSurfacePointPlacer *>(vp);

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
      tempr = op->vtkPolygonalSurfacePointPlacer::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolygonalSurfacePointPlacer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfacePointPlacer *op = static_cast<vtkPolygonalSurfacePointPlacer *>(vp);

  vtkPolygonalSurfacePointPlacer *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPolygonalSurfacePointPlacer::NewInstance();
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
PyvtkPolygonalSurfacePointPlacer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPolygonalSurfacePointPlacer *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPolygonalSurfacePointPlacer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolygonalSurfacePointPlacer_AddProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfacePointPlacer *op = static_cast<vtkPolygonalSurfacePointPlacer *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->AddProp(temp0);
      }
    else
      {
      op->vtkPolygonalSurfacePointPlacer::AddProp(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolygonalSurfacePointPlacer_RemoveViewProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveViewProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfacePointPlacer *op = static_cast<vtkPolygonalSurfacePointPlacer *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->RemoveViewProp(temp0);
      }
    else
      {
      op->vtkPolygonalSurfacePointPlacer::RemoveViewProp(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolygonalSurfacePointPlacer_RemoveAllProps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllProps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfacePointPlacer *op = static_cast<vtkPolygonalSurfacePointPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllProps();
      }
    else
      {
      op->vtkPolygonalSurfacePointPlacer::RemoveAllProps();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolygonalSurfacePointPlacer_ComputeWorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfacePointPlacer *op = static_cast<vtkPolygonalSurfacePointPlacer *>(vp);

  vtkRenderer *temp0 = NULL;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  double temp3[9];
  double save3[9];
  const int size3 = 9;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);

    if (ap.IsBound())
      {
      tempr = op->ComputeWorldPosition(temp0, temp1, temp2, temp3);
      }
    else
      {
      tempr = op->vtkPolygonalSurfacePointPlacer::ComputeWorldPosition(temp0, temp1, temp2, temp3);
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

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPolygonalSurfacePointPlacer_ComputeWorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfacePointPlacer *op = static_cast<vtkPolygonalSurfacePointPlacer *>(vp);

  vtkRenderer *temp0 = NULL;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  double temp3[3];
  double save3[3];
  const int size3 = 3;
  double temp4[9];
  double save4[9];
  const int size4 = 9;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);

    if (ap.IsBound())
      {
      tempr = op->ComputeWorldPosition(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      tempr = op->vtkPolygonalSurfacePointPlacer::ComputeWorldPosition(temp0, temp1, temp2, temp3, temp4);
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

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPolygonalSurfacePointPlacer_ComputeWorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkPolygonalSurfacePointPlacer_ComputeWorldPosition_s1(self, args);
    case 5:
      return PyvtkPolygonalSurfacePointPlacer_ComputeWorldPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ComputeWorldPosition");
  return NULL;
}



static PyObject *
PyvtkPolygonalSurfacePointPlacer_ValidateWorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ValidateWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfacePointPlacer *op = static_cast<vtkPolygonalSurfacePointPlacer *>(vp);

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
      tempr = op->ValidateWorldPosition(temp0);
      }
    else
      {
      tempr = op->vtkPolygonalSurfacePointPlacer::ValidateWorldPosition(temp0);
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
PyvtkPolygonalSurfacePointPlacer_ValidateWorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ValidateWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfacePointPlacer *op = static_cast<vtkPolygonalSurfacePointPlacer *>(vp);

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
      tempr = op->ValidateWorldPosition(temp0, temp1);
      }
    else
      {
      tempr = op->vtkPolygonalSurfacePointPlacer::ValidateWorldPosition(temp0, temp1);
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
PyvtkPolygonalSurfacePointPlacer_ValidateWorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPolygonalSurfacePointPlacer_ValidateWorldPosition_s1(self, args);
    case 2:
      return PyvtkPolygonalSurfacePointPlacer_ValidateWorldPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ValidateWorldPosition");
  return NULL;
}



static PyObject *
PyvtkPolygonalSurfacePointPlacer_ValidateDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ValidateDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfacePointPlacer *op = static_cast<vtkPolygonalSurfacePointPlacer *>(vp);

  vtkRenderer *temp0 = NULL;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      tempr = op->ValidateDisplayPosition(temp0, temp1);
      }
    else
      {
      tempr = op->vtkPolygonalSurfacePointPlacer::ValidateDisplayPosition(temp0, temp1);
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
PyvtkPolygonalSurfacePointPlacer_GetCellPicker(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPicker");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfacePointPlacer *op = static_cast<vtkPolygonalSurfacePointPlacer *>(vp);

  vtkCellPicker *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellPicker();
      }
    else
      {
      tempr = op->vtkPolygonalSurfacePointPlacer::GetCellPicker();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolygonalSurfacePointPlacer_GetPolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfacePointPlacer *op = static_cast<vtkPolygonalSurfacePointPlacer *>(vp);

  vtkPolyDataCollection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPolys();
      }
    else
      {
      tempr = op->vtkPolygonalSurfacePointPlacer::GetPolys();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolygonalSurfacePointPlacer_SetDistanceOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfacePointPlacer *op = static_cast<vtkPolygonalSurfacePointPlacer *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDistanceOffset(temp0);
      }
    else
      {
      op->vtkPolygonalSurfacePointPlacer::SetDistanceOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolygonalSurfacePointPlacer_GetDistanceOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfacePointPlacer *op = static_cast<vtkPolygonalSurfacePointPlacer *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDistanceOffset();
      }
    else
      {
      tempr = op->vtkPolygonalSurfacePointPlacer::GetDistanceOffset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPolygonalSurfacePointPlacer_Methods[] = {
  {(char*)"GetClassName", PyvtkPolygonalSurfacePointPlacer_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for instances of this class.\n"},
  {(char*)"IsA", PyvtkPolygonalSurfacePointPlacer_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for instances of this class.\n"},
  {(char*)"NewInstance", PyvtkPolygonalSurfacePointPlacer_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPolygonalSurfacePointPlacer\nC++: vtkPolygonalSurfacePointPlacer *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {(char*)"SafeDownCast", PyvtkPolygonalSurfacePointPlacer_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPolygonalSurfacePointPlacer\nC++: vtkPolygonalSurfacePointPlacer *SafeDownCast(vtkObject* o)\n\nStandard methods for instances of this class.\n"},
  {(char*)"AddProp", PyvtkPolygonalSurfacePointPlacer_AddProp, 1,
   (char*)"V.AddProp(vtkProp)\nC++: virtual void AddProp(vtkProp *)\n\n"},
  {(char*)"RemoveViewProp", PyvtkPolygonalSurfacePointPlacer_RemoveViewProp, 1,
   (char*)"V.RemoveViewProp(vtkProp)\nC++: virtual void RemoveViewProp(vtkProp *prop)\n\n"},
  {(char*)"RemoveAllProps", PyvtkPolygonalSurfacePointPlacer_RemoveAllProps, 1,
   (char*)"V.RemoveAllProps()\nC++: virtual void RemoveAllProps()\n\n"},
  {(char*)"ComputeWorldPosition", PyvtkPolygonalSurfacePointPlacer_ComputeWorldPosition, 1,
   (char*)"V.ComputeWorldPosition(vtkRenderer, [float, float], [float, float,\n     float], [float, float, float, float, float, float, float,\n    float, float]) -> int\nC++: virtual int ComputeWorldPosition(vtkRenderer *ren,\n    double displayPos[2], double worldPos[3],\n    double worldOrient[9])\nV.ComputeWorldPosition(vtkRenderer, [float, float], [float, float,\n     float], [float, float, float], [float, float, float, float,\n    float, float, float, float, float]) -> int\nC++: virtual int ComputeWorldPosition(vtkRenderer *ren,\n    double displayPos[2], double refWorldPos[3],\n    double worldPos[3], double worldOrient[9])\n\nGiven a renderer and a display position in pixel coordinates,\ncompute the world position and orientation where this point will\nbe placed. This method is typically used by the representation to\nplace the point initially. For the Terrain point placer this\ncomputes world points that lie at the specified height above the\nterrain.\n"},
  {(char*)"ValidateWorldPosition", PyvtkPolygonalSurfacePointPlacer_ValidateWorldPosition, 1,
   (char*)"V.ValidateWorldPosition([float, float, float]) -> int\nC++: virtual int ValidateWorldPosition(double worldPos[3])\nV.ValidateWorldPosition([float, float, float], [float, float,\n    float, float, float, float, float, float, float]) -> int\nC++: virtual int ValidateWorldPosition(double worldPos[3],\n    double worldOrient[9])\n\nGiven a world position check the validity of this position\naccording to the constraints of the placer\n"},
  {(char*)"ValidateDisplayPosition", PyvtkPolygonalSurfacePointPlacer_ValidateDisplayPosition, 1,
   (char*)"V.ValidateDisplayPosition(vtkRenderer, [float, float]) -> int\nC++: virtual int ValidateDisplayPosition(vtkRenderer *,\n    double displayPos[2])\n\nGiven a display position, check the validity of this position.\n"},
  {(char*)"GetCellPicker", PyvtkPolygonalSurfacePointPlacer_GetCellPicker, 1,
   (char*)"V.GetCellPicker() -> vtkCellPicker\nC++: vtkCellPicker *GetCellPicker()\n\nGet the Prop picker.\n"},
  {(char*)"GetPolys", PyvtkPolygonalSurfacePointPlacer_GetPolys, 1,
   (char*)"V.GetPolys() -> vtkPolyDataCollection\nC++: vtkPolyDataCollection *GetPolys()\n\nBe sure to add polydata on which you wish to place points to this\nlist or they will not be considered for placement.\n"},
  {(char*)"SetDistanceOffset", PyvtkPolygonalSurfacePointPlacer_SetDistanceOffset, 1,
   (char*)"V.SetDistanceOffset(float)\nC++: void SetDistanceOffset(double a)\n\nHeight offset at which points may be placed on the polygonal\nsurface. If you specify a non-zero value here, be sure to compute\ncell normals on your input polygonal data (easily done with\nvtkPolyDataNormals).\n"},
  {(char*)"GetDistanceOffset", PyvtkPolygonalSurfacePointPlacer_GetDistanceOffset, 1,
   (char*)"V.GetDistanceOffset() -> float\nC++: double GetDistanceOffset()\n\nHeight offset at which points may be placed on the polygonal\nsurface. If you specify a non-zero value here, be sure to compute\ncell normals on your input polygonal data (easily done with\nvtkPolyDataNormals).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPolygonalSurfacePointPlacer_StaticNew()
{
  return vtkPolygonalSurfacePointPlacer::New();
}

PyObject *PyVTKClass_vtkPolygonalSurfacePointPlacerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPolygonalSurfacePointPlacer_StaticNew,
    PyvtkPolygonalSurfacePointPlacer_Methods,
    "vtkPolygonalSurfacePointPlacer", modulename,
    NULL, NULL,
    PyvtkPolygonalSurfacePointPlacer_Doc(),
    PyVTKClass_vtkPolyDataPointPlacerNew(modulename));
  return cls;
}

const char **PyvtkPolygonalSurfacePointPlacer_Doc()
{
  static const char *docstring[] = {
    "- Place points on the surface of polygonal data.\n\n",
    "Superclass: vtkPolyDataPointPlacer\n\n",
    "vtkPolygonalSurfacePointPlacer places points on polygonal data and is\nmeant to be used in conjunction with\nvtkPolygonalSurfaceContourLineInterpolator.\n\nUsage:\n\nCaveats:\n\nYou should have computed cell normals for the input polydata if you\nare specifying a distance offset.\n\nSee Also:\n\nvtkPointPlacer vtkPolyDataNormals\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPolygonalSurfacePointPlacer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyvtkPolygonalSurfacePointPlacerNode_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPolygonalSurfacePointPlacerNode", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkPolygonalSurfacePointPlacerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPolygonalSurfacePointPlacer", o) != 0)
    {
    Py_DECREF(o);
    }

}

