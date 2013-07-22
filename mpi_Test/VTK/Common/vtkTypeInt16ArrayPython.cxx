// python wrapper for vtkTypeInt16Array
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
#include "vtkTypeInt16Array.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTypeInt16Array(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTypeInt16Array(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTypeInt16ArrayNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTypeInt16ArrayNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkShortArrayNew
extern "C" { PyObject *PyVTKClass_vtkShortArrayNew(const char *); }
#define DECLARED_PyVTKClass_vtkShortArrayNew
#endif

static const char **PyvtkTypeInt16Array_Doc();


static PyObject *
PyvtkTypeInt16Array_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypeInt16Array *op = static_cast<vtkTypeInt16Array *>(vp);

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
      tempr = op->vtkTypeInt16Array::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTypeInt16Array_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypeInt16Array *op = static_cast<vtkTypeInt16Array *>(vp);

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
      tempr = op->vtkTypeInt16Array::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTypeInt16Array_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypeInt16Array *op = static_cast<vtkTypeInt16Array *>(vp);

  vtkTypeInt16Array *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTypeInt16Array::NewInstance();
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
PyvtkTypeInt16Array_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTypeInt16Array *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTypeInt16Array::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTypeInt16Array_Methods[] = {
  {(char*)"GetClassName", PyvtkTypeInt16Array_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTypeInt16Array_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTypeInt16Array_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTypeInt16Array\nC++: vtkTypeInt16Array *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTypeInt16Array_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTypeInt16Array\nC++: vtkTypeInt16Array *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTypeInt16Array_StaticNew()
{
  return vtkTypeInt16Array::New();
}

PyObject *PyVTKClass_vtkTypeInt16ArrayNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTypeInt16Array_StaticNew,
    PyvtkTypeInt16Array_Methods,
    "vtkTypeInt16Array", modulename,
    NULL, NULL,
    PyvtkTypeInt16Array_Doc(),
    PyVTKClass_vtkShortArrayNew(modulename));
  return cls;
}

const char **PyvtkTypeInt16Array_Doc()
{
  static const char *docstring[] = {
    "vtkTypeInt16Array - dynamic, self-adjusting array of vtkTypeInt16\n\n",
    "Superclass: vtkShortArray\n\n",
    "vtkTypeInt16Array is an array of values of type vtkTypeInt16.  It\nprovides methods for insertion and retrieval of values and will\nautomatically resize itself to hold new data.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTypeInt16Array(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTypeInt16ArrayNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTypeInt16Array", o) != 0)
    {
    Py_DECREF(o);
    }

}

