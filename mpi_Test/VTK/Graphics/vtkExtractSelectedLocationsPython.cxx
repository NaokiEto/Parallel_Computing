// python wrapper for vtkExtractSelectedLocations
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
#include "vtkExtractSelectedLocations.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkExtractSelectedLocations(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkExtractSelectedLocations(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkExtractSelectedLocationsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkExtractSelectedLocationsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkExtractSelectionBaseNew
extern "C" { PyObject *PyVTKClass_vtkExtractSelectionBaseNew(const char *); }
#define DECLARED_PyVTKClass_vtkExtractSelectionBaseNew
#endif

static const char **PyvtkExtractSelectedLocations_Doc();


static PyObject *
PyvtkExtractSelectedLocations_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedLocations *op = static_cast<vtkExtractSelectedLocations *>(vp);

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
      tempr = op->vtkExtractSelectedLocations::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedLocations_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedLocations *op = static_cast<vtkExtractSelectedLocations *>(vp);

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
      tempr = op->vtkExtractSelectedLocations::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedLocations_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedLocations *op = static_cast<vtkExtractSelectedLocations *>(vp);

  vtkExtractSelectedLocations *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkExtractSelectedLocations::NewInstance();
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
PyvtkExtractSelectedLocations_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkExtractSelectedLocations *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkExtractSelectedLocations::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkExtractSelectedLocations_Methods[] = {
  {(char*)"GetClassName", PyvtkExtractSelectedLocations_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtractSelectedLocations_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtractSelectedLocations_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkExtractSelectedLocations\nC++: vtkExtractSelectedLocations *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtractSelectedLocations_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtractSelectedLocations\nC++: vtkExtractSelectedLocations *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtractSelectedLocations_StaticNew()
{
  return vtkExtractSelectedLocations::New();
}

PyObject *PyVTKClass_vtkExtractSelectedLocationsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtractSelectedLocations_StaticNew,
    PyvtkExtractSelectedLocations_Methods,
    "vtkExtractSelectedLocations", modulename,
    NULL, NULL,
    PyvtkExtractSelectedLocations_Doc(),
    PyVTKClass_vtkExtractSelectionBaseNew(modulename));
  return cls;
}

const char **PyvtkExtractSelectedLocations_Doc()
{
  static const char *docstring[] = {
    "vtkExtractSelectedLocations - extract cells within a dataset that \n\n",
    "Superclass: vtkExtractSelectionBase\n\n",
    "vtkExtractSelectedLocations extracts all cells whose volume contain\nat least one point listed in the LOCATIONS content of the\nvtkSelection. This filter adds a scalar array called\nvtkOriginalCellIds that says what input cell produced each output\ncell. This is an example of a Pedigree ID which helps to trace back\nresults.\n\nSee Also:\n\nvtkSelection vtkExtractSelection\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtractSelectedLocations(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtractSelectedLocationsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtractSelectedLocations", o) != 0)
    {
    Py_DECREF(o);
    }

}

