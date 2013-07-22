// python wrapper for vtkTreeLevelsFilter
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
#include "vtkTreeLevelsFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTreeLevelsFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTreeLevelsFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTreeLevelsFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTreeLevelsFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkTreeAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTreeAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTreeAlgorithmNew
#endif

static const char **PyvtkTreeLevelsFilter_Doc();


static PyObject *
PyvtkTreeLevelsFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLevelsFilter *op = static_cast<vtkTreeLevelsFilter *>(vp);

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
      tempr = op->vtkTreeLevelsFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeLevelsFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLevelsFilter *op = static_cast<vtkTreeLevelsFilter *>(vp);

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
      tempr = op->vtkTreeLevelsFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeLevelsFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLevelsFilter *op = static_cast<vtkTreeLevelsFilter *>(vp);

  vtkTreeLevelsFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTreeLevelsFilter::NewInstance();
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
PyvtkTreeLevelsFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTreeLevelsFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTreeLevelsFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTreeLevelsFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkTreeLevelsFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTreeLevelsFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTreeLevelsFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTreeLevelsFilter\nC++: vtkTreeLevelsFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTreeLevelsFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTreeLevelsFilter\nC++: vtkTreeLevelsFilter *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTreeLevelsFilter_StaticNew()
{
  return vtkTreeLevelsFilter::New();
}

PyObject *PyVTKClass_vtkTreeLevelsFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTreeLevelsFilter_StaticNew,
    PyvtkTreeLevelsFilter_Methods,
    "vtkTreeLevelsFilter", modulename,
    NULL, NULL,
    PyvtkTreeLevelsFilter_Doc(),
    PyVTKClass_vtkTreeAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTreeLevelsFilter_Doc()
{
  static const char *docstring[] = {
    "vtkTreeLevelsFilter - adds level and leaf fields to a vtkTree\n\n",
    "Superclass: vtkTreeAlgorithm\n\n",
    "The filter currently add two arrays to the incoming vtkTree\ndatastructure.\n1) \"levels\" this is the distance from the root of the vertex. Root =\n   0 and you add 1 for each level down from the root\n2) \"leaf\" this array simply indicates whether the vertex is a leaf or\nnot\n\nThanks:\n\nThanks to Brian Wylie from Sandia National Laboratories for creating\nthis class.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTreeLevelsFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTreeLevelsFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTreeLevelsFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

