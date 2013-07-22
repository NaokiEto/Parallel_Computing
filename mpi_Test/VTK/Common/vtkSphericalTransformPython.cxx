// python wrapper for vtkSphericalTransform
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
#include "vtkSphericalTransform.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSphericalTransform(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSphericalTransform(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSphericalTransformNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSphericalTransformNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkWarpTransformNew
extern "C" { PyObject *PyVTKClass_vtkWarpTransformNew(const char *); }
#define DECLARED_PyVTKClass_vtkWarpTransformNew
#endif

static const char **PyvtkSphericalTransform_Doc();


static PyObject *
PyvtkSphericalTransform_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphericalTransform *op = static_cast<vtkSphericalTransform *>(vp);

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
      tempr = op->vtkSphericalTransform::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphericalTransform_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphericalTransform *op = static_cast<vtkSphericalTransform *>(vp);

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
      tempr = op->vtkSphericalTransform::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphericalTransform_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphericalTransform *op = static_cast<vtkSphericalTransform *>(vp);

  vtkSphericalTransform *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSphericalTransform::NewInstance();
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
PyvtkSphericalTransform_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSphericalTransform *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSphericalTransform::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphericalTransform_MakeTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphericalTransform *op = static_cast<vtkSphericalTransform *>(vp);

  vtkAbstractTransform *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->MakeTransform();
      }
    else
      {
      tempr = op->vtkSphericalTransform::MakeTransform();
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

static PyMethodDef PyvtkSphericalTransform_Methods[] = {
  {(char*)"GetClassName", PyvtkSphericalTransform_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSphericalTransform_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSphericalTransform_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSphericalTransform\nC++: vtkSphericalTransform *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSphericalTransform_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSphericalTransform\nC++: vtkSphericalTransform *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"MakeTransform", PyvtkSphericalTransform_MakeTransform, 1,
   (char*)"V.MakeTransform() -> vtkAbstractTransform\nC++: vtkAbstractTransform *MakeTransform()\n\nMake another transform of the same type.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSphericalTransform_StaticNew()
{
  return vtkSphericalTransform::New();
}

PyObject *PyVTKClass_vtkSphericalTransformNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSphericalTransform_StaticNew,
    PyvtkSphericalTransform_Methods,
    "vtkSphericalTransform", modulename,
    NULL, NULL,
    PyvtkSphericalTransform_Doc(),
    PyVTKClass_vtkWarpTransformNew(modulename));
  return cls;
}

const char **PyvtkSphericalTransform_Doc()
{
  static const char *docstring[] = {
    "vtkSphericalTransform - spherical to rectangular coords and back\n\n",
    "Superclass: vtkWarpTransform\n\n",
    "vtkSphericalTransform will convert (r,phi,theta) coordinates to\n(x,y,z) coordinates and back again.  The angles are given in radians.\nBy default, it converts spherical coordinates to rectangular, but\nGetInverse() returns a transform that will do the opposite.  The\nequation that is used is x = r*sin(phi)*cos(theta), y =\nr*sin(phi)*sin(theta), z = r*cos(phi).\n\nCaveats:\n\nThis transform is not well be",
    "haved along the line x=y=0 (i.e. along\nthe z-axis)\n\nSee Also:\n\nvtkCylindricalTransform vtkGeneralTransform\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSphericalTransform(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSphericalTransformNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSphericalTransform", o) != 0)
    {
    Py_DECREF(o);
    }

}

