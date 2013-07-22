// python wrapper for vtkTypeInt32Array
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
#include "vtkTypeInt32Array.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTypeInt32Array(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTypeInt32Array(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTypeInt32ArrayNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTypeInt32ArrayNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkIntArrayNew
extern "C" { PyObject *PyVTKClass_vtkIntArrayNew(const char *); }
#define DECLARED_PyVTKClass_vtkIntArrayNew
#endif

static const char **PyvtkTypeInt32Array_Doc();


static PyObject *
PyvtkTypeInt32Array_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypeInt32Array *op = static_cast<vtkTypeInt32Array *>(vp);

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
      tempr = op->vtkTypeInt32Array::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTypeInt32Array_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypeInt32Array *op = static_cast<vtkTypeInt32Array *>(vp);

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
      tempr = op->vtkTypeInt32Array::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTypeInt32Array_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypeInt32Array *op = static_cast<vtkTypeInt32Array *>(vp);

  vtkTypeInt32Array *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTypeInt32Array::NewInstance();
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
PyvtkTypeInt32Array_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTypeInt32Array *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTypeInt32Array::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTypeInt32Array_Methods[] = {
  {(char*)"GetClassName", PyvtkTypeInt32Array_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTypeInt32Array_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTypeInt32Array_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTypeInt32Array\nC++: vtkTypeInt32Array *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTypeInt32Array_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTypeInt32Array\nC++: vtkTypeInt32Array *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTypeInt32Array_StaticNew()
{
  return vtkTypeInt32Array::New();
}

PyObject *PyVTKClass_vtkTypeInt32ArrayNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTypeInt32Array_StaticNew,
    PyvtkTypeInt32Array_Methods,
    "vtkTypeInt32Array", modulename,
    NULL, NULL,
    PyvtkTypeInt32Array_Doc(),
    PyVTKClass_vtkIntArrayNew(modulename));
  return cls;
}

const char **PyvtkTypeInt32Array_Doc()
{
  static const char *docstring[] = {
    "vtkTypeInt32Array - dynamic, self-adjusting array of vtkTypeInt32\n\n",
    "Superclass: vtkIntArray\n\n",
    "vtkTypeInt32Array is an array of values of type vtkTypeInt32.  It\nprovides methods for insertion and retrieval of values and will\nautomatically resize itself to hold new data.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTypeInt32Array(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTypeInt32ArrayNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTypeInt32Array", o) != 0)
    {
    Py_DECREF(o);
    }

}

