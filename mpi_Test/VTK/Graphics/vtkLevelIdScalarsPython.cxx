// python wrapper for vtkLevelIdScalars
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
#include "vtkLevelIdScalars.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkLevelIdScalars(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkLevelIdScalars(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkLevelIdScalarsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkLevelIdScalarsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkHierarchicalBoxDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkHierarchicalBoxDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkHierarchicalBoxDataSetAlgorithmNew
#endif

static const char **PyvtkLevelIdScalars_Doc();


static PyObject *
PyvtkLevelIdScalars_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLevelIdScalars *op = static_cast<vtkLevelIdScalars *>(vp);

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
      tempr = op->vtkLevelIdScalars::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLevelIdScalars_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLevelIdScalars *op = static_cast<vtkLevelIdScalars *>(vp);

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
      tempr = op->vtkLevelIdScalars::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLevelIdScalars_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLevelIdScalars *op = static_cast<vtkLevelIdScalars *>(vp);

  vtkLevelIdScalars *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkLevelIdScalars::NewInstance();
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
PyvtkLevelIdScalars_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkLevelIdScalars *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkLevelIdScalars::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLevelIdScalars_Methods[] = {
  {(char*)"GetClassName", PyvtkLevelIdScalars_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkLevelIdScalars_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkLevelIdScalars_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkLevelIdScalars\nC++: vtkLevelIdScalars *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkLevelIdScalars_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLevelIdScalars\nC++: vtkLevelIdScalars *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLevelIdScalars_StaticNew()
{
  return vtkLevelIdScalars::New();
}

PyObject *PyVTKClass_vtkLevelIdScalarsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLevelIdScalars_StaticNew,
    PyvtkLevelIdScalars_Methods,
    "vtkLevelIdScalars", modulename,
    NULL, NULL,
    PyvtkLevelIdScalars_Doc(),
    PyVTKClass_vtkHierarchicalBoxDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkLevelIdScalars_Doc()
{
  static const char *docstring[] = {
    "vtkLevelIdScalars - generate scalars from levels.\n\n",
    "Superclass: vtkHierarchicalBoxDataSetAlgorithm\n\n",
    "vtkLevelIdScalars is a filter that generates scalars using the level\nnumber for each level. Note that all datasets within a level get the\nsame scalar. The new scalars array is named LevelIdScalars.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLevelIdScalars(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLevelIdScalarsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLevelIdScalars", o) != 0)
    {
    Py_DECREF(o);
    }

}

