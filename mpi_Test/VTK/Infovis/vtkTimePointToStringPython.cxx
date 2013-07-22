// python wrapper for vtkTimePointToString
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
#include "vtkTimePointToString.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTimePointToString(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTimePointToString(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTimePointToStringNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTimePointToStringNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
#endif

static const char **PyvtkTimePointToString_Doc();


static PyObject *
PyvtkTimePointToString_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimePointToString *op = static_cast<vtkTimePointToString *>(vp);

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
      tempr = op->vtkTimePointToString::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimePointToString_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimePointToString *op = static_cast<vtkTimePointToString *>(vp);

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
      tempr = op->vtkTimePointToString::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimePointToString_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimePointToString *op = static_cast<vtkTimePointToString *>(vp);

  vtkTimePointToString *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTimePointToString::NewInstance();
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
PyvtkTimePointToString_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTimePointToString *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTimePointToString::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimePointToString_SetISO8601Format(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetISO8601Format");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimePointToString *op = static_cast<vtkTimePointToString *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetISO8601Format(temp0);
      }
    else
      {
      op->vtkTimePointToString::SetISO8601Format(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimePointToString_GetISO8601Format(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetISO8601Format");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimePointToString *op = static_cast<vtkTimePointToString *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetISO8601Format();
      }
    else
      {
      tempr = op->vtkTimePointToString::GetISO8601Format();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimePointToString_SetOutputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimePointToString *op = static_cast<vtkTimePointToString *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputArrayName(temp0);
      }
    else
      {
      op->vtkTimePointToString::SetOutputArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimePointToString_GetOutputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimePointToString *op = static_cast<vtkTimePointToString *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputArrayName();
      }
    else
      {
      tempr = op->vtkTimePointToString::GetOutputArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTimePointToString_Methods[] = {
  {(char*)"GetClassName", PyvtkTimePointToString_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTimePointToString_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTimePointToString_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTimePointToString\nC++: vtkTimePointToString *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTimePointToString_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTimePointToString\nC++: vtkTimePointToString *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetISO8601Format", PyvtkTimePointToString_SetISO8601Format, 1,
   (char*)"V.SetISO8601Format(int)\nC++: void SetISO8601Format(int a)\n\nThe format to use when converting the timestamp to a string.\n"},
  {(char*)"GetISO8601Format", PyvtkTimePointToString_GetISO8601Format, 1,
   (char*)"V.GetISO8601Format() -> int\nC++: int GetISO8601Format()\n\nThe format to use when converting the timestamp to a string.\n"},
  {(char*)"SetOutputArrayName", PyvtkTimePointToString_SetOutputArrayName, 1,
   (char*)"V.SetOutputArrayName(string)\nC++: void SetOutputArrayName(char *)\n\nThe name of the output array. If this is not specified, the name\nwill be the input array name with \" [to string]\" appended to it.\n"},
  {(char*)"GetOutputArrayName", PyvtkTimePointToString_GetOutputArrayName, 1,
   (char*)"V.GetOutputArrayName() -> string\nC++: char *GetOutputArrayName()\n\nThe name of the output array. If this is not specified, the name\nwill be the input array name with \" [to string]\" appended to it.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTimePointToString_StaticNew()
{
  return vtkTimePointToString::New();
}

PyObject *PyVTKClass_vtkTimePointToStringNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTimePointToString_StaticNew,
    PyvtkTimePointToString_Methods,
    "vtkTimePointToString", modulename,
    NULL, NULL,
    PyvtkTimePointToString_Doc(),
    PyVTKClass_vtkDataObjectAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTimePointToString_Doc()
{
  static const char *docstring[] = {
    "vtkTimePointToString - Converts a timestamp array to a string array\n\n",
    "Superclass: vtkDataObjectAlgorithm\n\n",
    "vtkTimePointToString is a filter for converting a timestamp array\ninto string array using one of the formats defined in\nvtkTimePointUtility.h.\n\nUse SetInputArrayToProcess to indicate the array to process. This\narray must be an unsigned 64-bit integer array for DATETIME formats,\nand may be either an unsigned 32-bit or unsigned 64-bit array for\nDATE and TIME formats.\n\nIf the new array name is not sp",
    "ecified, the array name will be the\nold name appended by \" [to string]\".\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTimePointToString(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTimePointToStringNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTimePointToString", o) != 0)
    {
    Py_DECREF(o);
    }

}

