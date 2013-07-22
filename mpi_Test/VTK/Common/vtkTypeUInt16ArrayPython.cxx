// python wrapper for vtkTypeUInt16Array
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
#include "vtkTypeUInt16Array.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTypeUInt16Array(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTypeUInt16Array(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTypeUInt16ArrayNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTypeUInt16ArrayNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkUnsignedShortArrayNew
extern "C" { PyObject *PyVTKClass_vtkUnsignedShortArrayNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnsignedShortArrayNew
#endif

static const char **PyvtkTypeUInt16Array_Doc();


static PyObject *
PyvtkTypeUInt16Array_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypeUInt16Array *op = static_cast<vtkTypeUInt16Array *>(vp);

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
      tempr = op->vtkTypeUInt16Array::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTypeUInt16Array_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypeUInt16Array *op = static_cast<vtkTypeUInt16Array *>(vp);

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
      tempr = op->vtkTypeUInt16Array::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTypeUInt16Array_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypeUInt16Array *op = static_cast<vtkTypeUInt16Array *>(vp);

  vtkTypeUInt16Array *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTypeUInt16Array::NewInstance();
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
PyvtkTypeUInt16Array_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTypeUInt16Array *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTypeUInt16Array::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTypeUInt16Array_Methods[] = {
  {(char*)"GetClassName", PyvtkTypeUInt16Array_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTypeUInt16Array_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTypeUInt16Array_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTypeUInt16Array\nC++: vtkTypeUInt16Array *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTypeUInt16Array_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTypeUInt16Array\nC++: vtkTypeUInt16Array *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTypeUInt16Array_StaticNew()
{
  return vtkTypeUInt16Array::New();
}

PyObject *PyVTKClass_vtkTypeUInt16ArrayNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTypeUInt16Array_StaticNew,
    PyvtkTypeUInt16Array_Methods,
    "vtkTypeUInt16Array", modulename,
    NULL, NULL,
    PyvtkTypeUInt16Array_Doc(),
    PyVTKClass_vtkUnsignedShortArrayNew(modulename));
  return cls;
}

const char **PyvtkTypeUInt16Array_Doc()
{
  static const char *docstring[] = {
    "vtkTypeUInt16Array - dynamic, self-adjusting array of vtkTypeUInt16\n\n",
    "Superclass: vtkUnsignedShortArray\n\n",
    "vtkTypeUInt16Array is an array of values of type vtkTypeUInt16.  It\nprovides methods for insertion and retrieval of values and will\nautomatically resize itself to hold new data.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTypeUInt16Array(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTypeUInt16ArrayNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTypeUInt16Array", o) != 0)
    {
    Py_DECREF(o);
    }

}

