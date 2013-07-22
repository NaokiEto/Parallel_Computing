// python wrapper for vtkCylindricalTransform
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
#include "vtkCylindricalTransform.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCylindricalTransform(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCylindricalTransform(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCylindricalTransformNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCylindricalTransformNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkWarpTransformNew
extern "C" { PyObject *PyVTKClass_vtkWarpTransformNew(const char *); }
#define DECLARED_PyVTKClass_vtkWarpTransformNew
#endif

static const char **PyvtkCylindricalTransform_Doc();


static PyObject *
PyvtkCylindricalTransform_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylindricalTransform *op = static_cast<vtkCylindricalTransform *>(vp);

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
      tempr = op->vtkCylindricalTransform::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCylindricalTransform_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylindricalTransform *op = static_cast<vtkCylindricalTransform *>(vp);

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
      tempr = op->vtkCylindricalTransform::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCylindricalTransform_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylindricalTransform *op = static_cast<vtkCylindricalTransform *>(vp);

  vtkCylindricalTransform *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCylindricalTransform::NewInstance();
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
PyvtkCylindricalTransform_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCylindricalTransform *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCylindricalTransform::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCylindricalTransform_MakeTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylindricalTransform *op = static_cast<vtkCylindricalTransform *>(vp);

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
      tempr = op->vtkCylindricalTransform::MakeTransform();
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

static PyMethodDef PyvtkCylindricalTransform_Methods[] = {
  {(char*)"GetClassName", PyvtkCylindricalTransform_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCylindricalTransform_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCylindricalTransform_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCylindricalTransform\nC++: vtkCylindricalTransform *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCylindricalTransform_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCylindricalTransform\nC++: vtkCylindricalTransform *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"MakeTransform", PyvtkCylindricalTransform_MakeTransform, 1,
   (char*)"V.MakeTransform() -> vtkAbstractTransform\nC++: vtkAbstractTransform *MakeTransform()\n\nMake another transform of the same type.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCylindricalTransform_StaticNew()
{
  return vtkCylindricalTransform::New();
}

PyObject *PyVTKClass_vtkCylindricalTransformNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCylindricalTransform_StaticNew,
    PyvtkCylindricalTransform_Methods,
    "vtkCylindricalTransform", modulename,
    NULL, NULL,
    PyvtkCylindricalTransform_Doc(),
    PyVTKClass_vtkWarpTransformNew(modulename));
  return cls;
}

const char **PyvtkCylindricalTransform_Doc()
{
  static const char *docstring[] = {
    "vtkCylindricalTransform - cylindrical to rectangular coords and back\n\n",
    "Superclass: vtkWarpTransform\n\n",
    "vtkCylindricalTransform will convert (r,theta,z) coordinates to\n(x,y,z) coordinates and back again.  The angles are given in radians.\nBy default, it converts cylindrical coordinates to rectangular, but\nGetInverse() returns a transform that will do the opposite.  The\nequation that is used is x = r*cos(theta), y = r*sin(theta), z = z.\n\nCaveats:\n\nThis transform is not well behaved along the line x=y=",
    "0 (i.e. along\nthe z-axis)\n\nSee Also:\n\nvtkSphericalTransform vtkGeneralTransform\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCylindricalTransform(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCylindricalTransformNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCylindricalTransform", o) != 0)
    {
    Py_DECREF(o);
    }

}

