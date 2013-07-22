// python wrapper for vtkExtractLevel
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
#include "vtkExtractLevel.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkExtractLevel(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkExtractLevel(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkExtractLevelNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkExtractLevelNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkHierarchicalBoxDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkHierarchicalBoxDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkHierarchicalBoxDataSetAlgorithmNew
#endif

static const char **PyvtkExtractLevel_Doc();


static PyObject *
PyvtkExtractLevel_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractLevel *op = static_cast<vtkExtractLevel *>(vp);

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
      tempr = op->vtkExtractLevel::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractLevel_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractLevel *op = static_cast<vtkExtractLevel *>(vp);

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
      tempr = op->vtkExtractLevel::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractLevel_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractLevel *op = static_cast<vtkExtractLevel *>(vp);

  vtkExtractLevel *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkExtractLevel::NewInstance();
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
PyvtkExtractLevel_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkExtractLevel *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkExtractLevel::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractLevel_AddLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractLevel *op = static_cast<vtkExtractLevel *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddLevel(temp0);
      }
    else
      {
      op->vtkExtractLevel::AddLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractLevel_RemoveLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractLevel *op = static_cast<vtkExtractLevel *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveLevel(temp0);
      }
    else
      {
      op->vtkExtractLevel::RemoveLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractLevel_RemoveAllLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractLevel *op = static_cast<vtkExtractLevel *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllLevels();
      }
    else
      {
      op->vtkExtractLevel::RemoveAllLevels();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExtractLevel_Methods[] = {
  {(char*)"GetClassName", PyvtkExtractLevel_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtractLevel_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtractLevel_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkExtractLevel\nC++: vtkExtractLevel *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtractLevel_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtractLevel\nC++: vtkExtractLevel *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddLevel", PyvtkExtractLevel_AddLevel, 1,
   (char*)"V.AddLevel(int)\nC++: void AddLevel(unsigned int level)\n\nSelect the levels that should be extracted. All other levels will\nhave no datasets in them.\n"},
  {(char*)"RemoveLevel", PyvtkExtractLevel_RemoveLevel, 1,
   (char*)"V.RemoveLevel(int)\nC++: void RemoveLevel(unsigned int level)\n\nSelect the levels that should be extracted. All other levels will\nhave no datasets in them.\n"},
  {(char*)"RemoveAllLevels", PyvtkExtractLevel_RemoveAllLevels, 1,
   (char*)"V.RemoveAllLevels()\nC++: void RemoveAllLevels()\n\nSelect the levels that should be extracted. All other levels will\nhave no datasets in them.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtractLevel_StaticNew()
{
  return vtkExtractLevel::New();
}

PyObject *PyVTKClass_vtkExtractLevelNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtractLevel_StaticNew,
    PyvtkExtractLevel_Methods,
    "vtkExtractLevel", modulename,
    NULL, NULL,
    PyvtkExtractLevel_Doc(),
    PyVTKClass_vtkHierarchicalBoxDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkExtractLevel_Doc()
{
  static const char *docstring[] = {
    "vtkExtractLevel - extract levels between min and max from a\n\n",
    "Superclass: vtkHierarchicalBoxDataSetAlgorithm\n\n",
    "vtkExtractLevel filter extracts the levels between (and including)\nthe user specified min and max levels.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtractLevel(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtractLevelNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtractLevel", o) != 0)
    {
    Py_DECREF(o);
    }

}

