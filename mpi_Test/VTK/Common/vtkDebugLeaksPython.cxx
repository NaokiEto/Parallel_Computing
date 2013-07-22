// python wrapper for vtkDebugLeaks
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
#include "vtkDebugLeaks.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDebugLeaks(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDebugLeaks(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDebugLeaksNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDebugLeaksNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkDebugLeaks_Doc();


static PyObject *
PyvtkDebugLeaks_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDebugLeaks *op = static_cast<vtkDebugLeaks *>(vp);

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
      tempr = op->vtkDebugLeaks::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDebugLeaks_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDebugLeaks *op = static_cast<vtkDebugLeaks *>(vp);

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
      tempr = op->vtkDebugLeaks::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDebugLeaks_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDebugLeaks *op = static_cast<vtkDebugLeaks *>(vp);

  vtkDebugLeaks *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDebugLeaks::NewInstance();
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
PyvtkDebugLeaks_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDebugLeaks *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDebugLeaks::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDebugLeaks_ConstructClass(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ConstructClass");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkDebugLeaks::ConstructClass(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDebugLeaks_DestructClass(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DestructClass");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkDebugLeaks::DestructClass(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDebugLeaks_PrintCurrentLeaks(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PrintCurrentLeaks");

  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkDebugLeaks::PrintCurrentLeaks();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkDebugLeaks_PromptUserOn(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PromptUserOn");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkDebugLeaks::PromptUserOn();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkDebugLeaks_PromptUserOff(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PromptUserOff");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkDebugLeaks::PromptUserOff();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}
#endif


static PyObject *
PyvtkDebugLeaks_GetExitError(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetExitError");

  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkDebugLeaks::GetExitError();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDebugLeaks_SetExitError(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetExitError");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkDebugLeaks::SetExitError(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkDebugLeaks_Methods[] = {
  {(char*)"GetClassName", PyvtkDebugLeaks_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDebugLeaks_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDebugLeaks_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDebugLeaks\nC++: vtkDebugLeaks *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDebugLeaks_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDebugLeaks\nC++: vtkDebugLeaks *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ConstructClass", PyvtkDebugLeaks_ConstructClass, 1,
   (char*)"V.ConstructClass(string)\nC++: static void ConstructClass(const char *classname)\n\nCall this when creating a class of a given name.\n"},
  {(char*)"DestructClass", PyvtkDebugLeaks_DestructClass, 1,
   (char*)"V.DestructClass(string)\nC++: static void DestructClass(const char *classname)\n\nCall this when deleting a class of a given name.\n"},
  {(char*)"PrintCurrentLeaks", PyvtkDebugLeaks_PrintCurrentLeaks, 1,
   (char*)"V.PrintCurrentLeaks() -> int\nC++: static int PrintCurrentLeaks()\n\nPrint all the values in the table.  Returns non-zero if there\nwere leaks.\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"PromptUserOn", PyvtkDebugLeaks_PromptUserOn, 1,
   (char*)"V.PromptUserOn()\nC++: static void PromptUserOn()\n\n@deprecated Turn prompt at exit on/off (this setting is\ndeprecated and will be ignored).\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"PromptUserOff", PyvtkDebugLeaks_PromptUserOff, 1,
   (char*)"V.PromptUserOff()\nC++: static void PromptUserOff()\n\n@deprecated Turn prompt at exit on/off (this setting is\ndeprecated and will be ignored).\n"},
#endif
  {(char*)"GetExitError", PyvtkDebugLeaks_GetExitError, 1,
   (char*)"V.GetExitError() -> int\nC++: static int GetExitError()\n\nGet/Set flag for exiting with an error when leaks are present.\nDefault is on when testing and off otherwise.\n"},
  {(char*)"SetExitError", PyvtkDebugLeaks_SetExitError, 1,
   (char*)"V.SetExitError(int)\nC++: static void SetExitError(int)\n\nGet/Set flag for exiting with an error when leaks are present.\nDefault is on when testing and off otherwise.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDebugLeaks_StaticNew()
{
  return vtkDebugLeaks::New();
}

PyObject *PyVTKClass_vtkDebugLeaksNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDebugLeaks_StaticNew,
    PyvtkDebugLeaks_Methods,
    "vtkDebugLeaks", modulename,
    NULL, NULL,
    PyvtkDebugLeaks_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkDebugLeaks_Doc()
{
  static const char *docstring[] = {
    "vtkDebugLeaks - identify memory leaks at program termination\n\n",
    "Superclass: vtkObject\n\n",
    "vtkDebugLeaks is used to report memory leaks at the exit of the\nprogram. It uses the vtkObjectFactory to intercept the construction\nof all VTK objects. It uses the UnRegister method of vtkObject to\nintercept the destruction of all objects. A table of object name to\nnumber of instances is kept. At the exit of the program if there are\nstill VTK objects around it will print them out.  To enable this\n",
    "class add the flag\n-DVTK_DEBUG_LEAKS to the compile line, and rebuild vtkObject and\n    vtkObjectFactory.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDebugLeaks(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDebugLeaksNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDebugLeaks", o) != 0)
    {
    Py_DECREF(o);
    }

}

