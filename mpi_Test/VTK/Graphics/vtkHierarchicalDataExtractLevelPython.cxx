// python wrapper for vtkHierarchicalDataExtractLevel
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
#include "vtkHierarchicalDataExtractLevel.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkHierarchicalDataExtractLevel(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkHierarchicalDataExtractLevel(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkHierarchicalDataExtractLevelNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkHierarchicalDataExtractLevelNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkExtractLevelNew
extern "C" { PyObject *PyVTKClass_vtkExtractLevelNew(const char *); }
#define DECLARED_PyVTKClass_vtkExtractLevelNew
#endif

static const char **PyvtkHierarchicalDataExtractLevel_Doc();


static PyObject *
PyvtkHierarchicalDataExtractLevel_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalDataExtractLevel *op = static_cast<vtkHierarchicalDataExtractLevel *>(vp);

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
      tempr = op->vtkHierarchicalDataExtractLevel::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalDataExtractLevel_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalDataExtractLevel *op = static_cast<vtkHierarchicalDataExtractLevel *>(vp);

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
      tempr = op->vtkHierarchicalDataExtractLevel::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalDataExtractLevel_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalDataExtractLevel *op = static_cast<vtkHierarchicalDataExtractLevel *>(vp);

  vtkHierarchicalDataExtractLevel *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkHierarchicalDataExtractLevel::NewInstance();
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
PyvtkHierarchicalDataExtractLevel_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkHierarchicalDataExtractLevel *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkHierarchicalDataExtractLevel::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkHierarchicalDataExtractLevel_Methods[] = {
  {(char*)"GetClassName", PyvtkHierarchicalDataExtractLevel_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHierarchicalDataExtractLevel_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHierarchicalDataExtractLevel_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkHierarchicalDataExtractLevel\nC++: vtkHierarchicalDataExtractLevel *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkHierarchicalDataExtractLevel_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHierarchicalDataExtractLevel\nC++: vtkHierarchicalDataExtractLevel *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkHierarchicalDataExtractLevel_StaticNew()
{
  return vtkHierarchicalDataExtractLevel::New();
}

PyObject *PyVTKClass_vtkHierarchicalDataExtractLevelNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkHierarchicalDataExtractLevel_StaticNew,
    PyvtkHierarchicalDataExtractLevel_Methods,
    "vtkHierarchicalDataExtractLevel", modulename,
    NULL, NULL,
    PyvtkHierarchicalDataExtractLevel_Doc(),
    PyVTKClass_vtkExtractLevelNew(modulename));
  return cls;
}

const char **PyvtkHierarchicalDataExtractLevel_Doc()
{
  static const char *docstring[] = {
    "vtkHierarchicalDataExtractLevel - extact levels between min and max\n\n",
    "Superclass: vtkExtractLevel\n\n",
    "Legacy class. Use vtkExtractLevel instead.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHierarchicalDataExtractLevel(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHierarchicalDataExtractLevelNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHierarchicalDataExtractLevel", o) != 0)
    {
    Py_DECREF(o);
    }

}

