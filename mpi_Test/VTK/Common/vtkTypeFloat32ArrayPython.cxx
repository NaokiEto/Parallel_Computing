// python wrapper for vtkTypeFloat32Array
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
#include "vtkTypeFloat32Array.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTypeFloat32Array(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTypeFloat32Array(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTypeFloat32ArrayNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTypeFloat32ArrayNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkFloatArrayNew
extern "C" { PyObject *PyVTKClass_vtkFloatArrayNew(const char *); }
#define DECLARED_PyVTKClass_vtkFloatArrayNew
#endif

static const char **PyvtkTypeFloat32Array_Doc();


static PyObject *
PyvtkTypeFloat32Array_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypeFloat32Array *op = static_cast<vtkTypeFloat32Array *>(vp);

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
      tempr = op->vtkTypeFloat32Array::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTypeFloat32Array_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypeFloat32Array *op = static_cast<vtkTypeFloat32Array *>(vp);

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
      tempr = op->vtkTypeFloat32Array::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTypeFloat32Array_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypeFloat32Array *op = static_cast<vtkTypeFloat32Array *>(vp);

  vtkTypeFloat32Array *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTypeFloat32Array::NewInstance();
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
PyvtkTypeFloat32Array_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTypeFloat32Array *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTypeFloat32Array::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTypeFloat32Array_Methods[] = {
  {(char*)"GetClassName", PyvtkTypeFloat32Array_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTypeFloat32Array_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTypeFloat32Array_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTypeFloat32Array\nC++: vtkTypeFloat32Array *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTypeFloat32Array_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTypeFloat32Array\nC++: vtkTypeFloat32Array *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTypeFloat32Array_StaticNew()
{
  return vtkTypeFloat32Array::New();
}

PyObject *PyVTKClass_vtkTypeFloat32ArrayNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTypeFloat32Array_StaticNew,
    PyvtkTypeFloat32Array_Methods,
    "vtkTypeFloat32Array", modulename,
    NULL, NULL,
    PyvtkTypeFloat32Array_Doc(),
    PyVTKClass_vtkFloatArrayNew(modulename));
  return cls;
}

const char **PyvtkTypeFloat32Array_Doc()
{
  static const char *docstring[] = {
    "vtkTypeFloat32Array - dynamic, self-adjusting array of vtkTypeFloat32\n\n",
    "Superclass: vtkFloatArray\n\n",
    "vtkTypeFloat32Array is an array of values of type vtkTypeFloat32.  It\nprovides methods for insertion and retrieval of values and will\nautomatically resize itself to hold new data.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTypeFloat32Array(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTypeFloat32ArrayNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTypeFloat32Array", o) != 0)
    {
    Py_DECREF(o);
    }

}

