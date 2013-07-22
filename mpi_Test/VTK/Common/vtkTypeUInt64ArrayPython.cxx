// python wrapper for vtkTypeUInt64Array
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
#include "vtkTypeUInt64Array.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTypeUInt64Array(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTypeUInt64Array(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTypeUInt64ArrayNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTypeUInt64ArrayNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkUnsignedLongLongArrayNew
extern "C" { PyObject *PyVTKClass_vtkUnsignedLongLongArrayNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnsignedLongLongArrayNew
#endif

static const char **PyvtkTypeUInt64Array_Doc();


static PyObject *
PyvtkTypeUInt64Array_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypeUInt64Array *op = static_cast<vtkTypeUInt64Array *>(vp);

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
      tempr = op->vtkTypeUInt64Array::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTypeUInt64Array_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypeUInt64Array *op = static_cast<vtkTypeUInt64Array *>(vp);

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
      tempr = op->vtkTypeUInt64Array::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTypeUInt64Array_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypeUInt64Array *op = static_cast<vtkTypeUInt64Array *>(vp);

  vtkTypeUInt64Array *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTypeUInt64Array::NewInstance();
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
PyvtkTypeUInt64Array_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTypeUInt64Array *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTypeUInt64Array::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTypeUInt64Array_Methods[] = {
  {(char*)"GetClassName", PyvtkTypeUInt64Array_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTypeUInt64Array_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTypeUInt64Array_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTypeUInt64Array\nC++: vtkTypeUInt64Array *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTypeUInt64Array_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTypeUInt64Array\nC++: vtkTypeUInt64Array *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTypeUInt64Array_StaticNew()
{
  return vtkTypeUInt64Array::New();
}

PyObject *PyVTKClass_vtkTypeUInt64ArrayNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTypeUInt64Array_StaticNew,
    PyvtkTypeUInt64Array_Methods,
    "vtkTypeUInt64Array", modulename,
    NULL, NULL,
    PyvtkTypeUInt64Array_Doc(),
    PyVTKClass_vtkUnsignedLongLongArrayNew(modulename));
  return cls;
}

const char **PyvtkTypeUInt64Array_Doc()
{
  static const char *docstring[] = {
    "vtkTypeUInt64Array - dynamic, self-adjusting array of vtkTypeUInt64\n\n",
    "Superclass: vtkUnsignedLongLongArray\n\n",
    "vtkTypeUInt64Array is an array of values of type vtkTypeUInt64.  It\nprovides methods for insertion and retrieval of values and will\nautomatically resize itself to hold new data.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTypeUInt64Array(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTypeUInt64ArrayNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTypeUInt64Array", o) != 0)
    {
    Py_DECREF(o);
    }

}

