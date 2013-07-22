// python wrapper for vtkGlyph2D
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
#include "vtkGlyph2D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGlyph2D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGlyph2D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGlyph2DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGlyph2DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkGlyph3DNew
extern "C" { PyObject *PyVTKClass_vtkGlyph3DNew(const char *); }
#define DECLARED_PyVTKClass_vtkGlyph3DNew
#endif

static const char **PyvtkGlyph2D_Doc();


static PyObject *
PyvtkGlyph2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph2D *op = static_cast<vtkGlyph2D *>(vp);

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
      tempr = op->vtkGlyph2D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph2D *op = static_cast<vtkGlyph2D *>(vp);

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
      tempr = op->vtkGlyph2D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph2D *op = static_cast<vtkGlyph2D *>(vp);

  vtkGlyph2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGlyph2D::NewInstance();
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
PyvtkGlyph2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGlyph2D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGlyph2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGlyph2D_Methods[] = {
  {(char*)"GetClassName", PyvtkGlyph2D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGlyph2D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGlyph2D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGlyph2D\nC++: vtkGlyph2D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGlyph2D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGlyph2D\nC++: vtkGlyph2D *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGlyph2D_StaticNew()
{
  return vtkGlyph2D::New();
}

PyObject *PyVTKClass_vtkGlyph2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGlyph2D_StaticNew,
    PyvtkGlyph2D_Methods,
    "vtkGlyph2D", modulename,
    NULL, NULL,
    PyvtkGlyph2D_Doc(),
    PyVTKClass_vtkGlyph3DNew(modulename));
  return cls;
}

const char **PyvtkGlyph2D_Doc()
{
  static const char *docstring[] = {
    "vtkGlyph2D - copy oriented and scaled glyph geometry to every input\npoint (2D specialization)\n\n",
    "Superclass: vtkGlyph3D\n\n",
    "This subclass of vtkGlyph3D is a specialization to 2D.\nTransformations (i.e., translation, scaling, and rotation) are\nconstrained to the plane. For example, rotations due to a vector are\ncomputed from the x-y coordinates of the vector only, and are assumed\nto occur around the z-axis. (See vtkGlyph3D for documentation on the\ninterface to this class.)\n\nSee Also:\n\nvtkTensorGlyph vtkGlyph3D vtkProgram",
    "mableGlyphFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGlyph2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGlyph2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGlyph2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

