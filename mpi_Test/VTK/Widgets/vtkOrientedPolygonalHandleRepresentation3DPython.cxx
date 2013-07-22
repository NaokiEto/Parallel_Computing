// python wrapper for vtkOrientedPolygonalHandleRepresentation3D
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
#include "vtkOrientedPolygonalHandleRepresentation3D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkOrientedPolygonalHandleRepresentation3D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkOrientedPolygonalHandleRepresentation3D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkOrientedPolygonalHandleRepresentation3DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkOrientedPolygonalHandleRepresentation3DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAbstractPolygonalHandleRepresentation3DNew
extern "C" { PyObject *PyVTKClass_vtkAbstractPolygonalHandleRepresentation3DNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractPolygonalHandleRepresentation3DNew
#endif

static const char **PyvtkOrientedPolygonalHandleRepresentation3D_Doc();


static PyObject *
PyvtkOrientedPolygonalHandleRepresentation3D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedPolygonalHandleRepresentation3D *op = static_cast<vtkOrientedPolygonalHandleRepresentation3D *>(vp);

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
      tempr = op->vtkOrientedPolygonalHandleRepresentation3D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrientedPolygonalHandleRepresentation3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedPolygonalHandleRepresentation3D *op = static_cast<vtkOrientedPolygonalHandleRepresentation3D *>(vp);

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
      tempr = op->vtkOrientedPolygonalHandleRepresentation3D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrientedPolygonalHandleRepresentation3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedPolygonalHandleRepresentation3D *op = static_cast<vtkOrientedPolygonalHandleRepresentation3D *>(vp);

  vtkOrientedPolygonalHandleRepresentation3D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkOrientedPolygonalHandleRepresentation3D::NewInstance();
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
PyvtkOrientedPolygonalHandleRepresentation3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkOrientedPolygonalHandleRepresentation3D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkOrientedPolygonalHandleRepresentation3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOrientedPolygonalHandleRepresentation3D_Methods[] = {
  {(char*)"GetClassName", PyvtkOrientedPolygonalHandleRepresentation3D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for instances of this class.\n"},
  {(char*)"IsA", PyvtkOrientedPolygonalHandleRepresentation3D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for instances of this class.\n"},
  {(char*)"NewInstance", PyvtkOrientedPolygonalHandleRepresentation3D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkOrientedPolygonalHandleRepresentation3D\nC++: vtkOrientedPolygonalHandleRepresentation3D *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {(char*)"SafeDownCast", PyvtkOrientedPolygonalHandleRepresentation3D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject)\n    -> vtkOrientedPolygonalHandleRepresentation3D\nC++: vtkOrientedPolygonalHandleRepresentation3D *SafeDownCast(\n    vtkObject* o)\n\nStandard methods for instances of this class.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOrientedPolygonalHandleRepresentation3D_StaticNew()
{
  return vtkOrientedPolygonalHandleRepresentation3D::New();
}

PyObject *PyVTKClass_vtkOrientedPolygonalHandleRepresentation3DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOrientedPolygonalHandleRepresentation3D_StaticNew,
    PyvtkOrientedPolygonalHandleRepresentation3D_Methods,
    "vtkOrientedPolygonalHandleRepresentation3D", modulename,
    NULL, NULL,
    PyvtkOrientedPolygonalHandleRepresentation3D_Doc(),
    PyVTKClass_vtkAbstractPolygonalHandleRepresentation3DNew(modulename));
  return cls;
}

const char **PyvtkOrientedPolygonalHandleRepresentation3D_Doc()
{
  static const char *docstring[] = {
    "vtkOrientedPolygonalHandleRepresentation3D - represent a user defined\nhandle geometry in 3D while maintaining a fixed orientation w.r.t the\ncamera.\n\n",
    "Superclass: vtkAbstractPolygonalHandleRepresentation3D\n\n",
    "This class serves as the geometrical representation of a\nvtkHandleWidget. The handle can be represented by an arbitrary\npolygonal data (vtkPolyData), set via SetHandle(vtkPolyData *). The\nactual position of the handle will be initially assumed to be\n(0,0,0). You can specify an offset from this position if desired.\nThis class differs from vtkPolygonalHandleRepresentation3D in that\nthe handle will a",
    "lways remain front facing, ie it maintains a fixed\norientation with respect to the camera. This is done by using\nvtkFollowers internally to render the actors.\n\nSee Also:\n\nvtkPolygonalHandleRepresentation3D vtkHandleRepresentation\nvtkHandleWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOrientedPolygonalHandleRepresentation3D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOrientedPolygonalHandleRepresentation3DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOrientedPolygonalHandleRepresentation3D", o) != 0)
    {
    Py_DECREF(o);
    }

}

