// python wrapper for vtkTypeUInt8Array
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
#include "vtkTypeUInt8Array.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTypeUInt8Array(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTypeUInt8Array(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTypeUInt8ArrayNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTypeUInt8ArrayNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkUnsignedCharArrayNew
extern "C" { PyObject *PyVTKClass_vtkUnsignedCharArrayNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnsignedCharArrayNew
#endif

static const char **PyvtkTypeUInt8Array_Doc();


static PyObject *
PyvtkTypeUInt8Array_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypeUInt8Array *op = static_cast<vtkTypeUInt8Array *>(vp);

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
      tempr = op->vtkTypeUInt8Array::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTypeUInt8Array_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypeUInt8Array *op = static_cast<vtkTypeUInt8Array *>(vp);

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
      tempr = op->vtkTypeUInt8Array::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTypeUInt8Array_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypeUInt8Array *op = static_cast<vtkTypeUInt8Array *>(vp);

  vtkTypeUInt8Array *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTypeUInt8Array::NewInstance();
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
PyvtkTypeUInt8Array_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTypeUInt8Array *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTypeUInt8Array::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTypeUInt8Array_Methods[] = {
  {(char*)"GetClassName", PyvtkTypeUInt8Array_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTypeUInt8Array_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTypeUInt8Array_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTypeUInt8Array\nC++: vtkTypeUInt8Array *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTypeUInt8Array_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTypeUInt8Array\nC++: vtkTypeUInt8Array *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTypeUInt8Array_StaticNew()
{
  return vtkTypeUInt8Array::New();
}

PyObject *PyVTKClass_vtkTypeUInt8ArrayNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTypeUInt8Array_StaticNew,
    PyvtkTypeUInt8Array_Methods,
    "vtkTypeUInt8Array", modulename,
    NULL, NULL,
    PyvtkTypeUInt8Array_Doc(),
    PyVTKClass_vtkUnsignedCharArrayNew(modulename));
  return cls;
}

const char **PyvtkTypeUInt8Array_Doc()
{
  static const char *docstring[] = {
    "vtkTypeUInt8Array - dynamic, self-adjusting array of vtkTypeUInt8\n\n",
    "Superclass: vtkUnsignedCharArray\n\n",
    "vtkTypeUInt8Array is an array of values of type vtkTypeUInt8.  It\nprovides methods for insertion and retrieval of values and will\nautomatically resize itself to hold new data.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTypeUInt8Array(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTypeUInt8ArrayNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTypeUInt8Array", o) != 0)
    {
    Py_DECREF(o);
    }

}

