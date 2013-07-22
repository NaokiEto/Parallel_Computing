// python wrapper for vtkBase64Utilities
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
#include "vtkBase64Utilities.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkBase64Utilities(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkBase64Utilities(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkBase64UtilitiesNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkBase64UtilitiesNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkBase64Utilities_Doc();


static PyObject *
PyvtkBase64Utilities_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBase64Utilities *op = static_cast<vtkBase64Utilities *>(vp);

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
      tempr = op->vtkBase64Utilities::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBase64Utilities_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBase64Utilities *op = static_cast<vtkBase64Utilities *>(vp);

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
      tempr = op->vtkBase64Utilities::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBase64Utilities_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBase64Utilities *op = static_cast<vtkBase64Utilities *>(vp);

  vtkBase64Utilities *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkBase64Utilities::NewInstance();
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
PyvtkBase64Utilities_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkBase64Utilities *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkBase64Utilities::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkBase64Utilities_Methods[] = {
  {(char*)"GetClassName", PyvtkBase64Utilities_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBase64Utilities_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBase64Utilities_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkBase64Utilities\nC++: vtkBase64Utilities *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkBase64Utilities_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBase64Utilities\nC++: vtkBase64Utilities *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBase64Utilities_StaticNew()
{
  return vtkBase64Utilities::New();
}

PyObject *PyVTKClass_vtkBase64UtilitiesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBase64Utilities_StaticNew,
    PyvtkBase64Utilities_Methods,
    "vtkBase64Utilities", modulename,
    NULL, NULL,
    PyvtkBase64Utilities_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkBase64Utilities_Doc()
{
  static const char *docstring[] = {
    "vtkBase64Utilities - base64 encode and decode utilities.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkBase64Utilities implements base64 encoding and decoding.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBase64Utilities(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBase64UtilitiesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBase64Utilities", o) != 0)
    {
    Py_DECREF(o);
    }

}

