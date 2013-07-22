// python wrapper for vtkTreeMapLayoutStrategy
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
#include "vtkTreeMapLayoutStrategy.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTreeMapLayoutStrategy(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTreeMapLayoutStrategy(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTreeMapLayoutStrategyNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTreeMapLayoutStrategyNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAreaLayoutStrategyNew
extern "C" { PyObject *PyVTKClass_vtkAreaLayoutStrategyNew(const char *); }
#define DECLARED_PyVTKClass_vtkAreaLayoutStrategyNew
#endif

static const char **PyvtkTreeMapLayoutStrategy_Doc();


static PyObject *
PyvtkTreeMapLayoutStrategy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapLayoutStrategy *op = static_cast<vtkTreeMapLayoutStrategy *>(vp);

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
      tempr = op->vtkTreeMapLayoutStrategy::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeMapLayoutStrategy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapLayoutStrategy *op = static_cast<vtkTreeMapLayoutStrategy *>(vp);

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
      tempr = op->vtkTreeMapLayoutStrategy::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeMapLayoutStrategy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapLayoutStrategy *op = static_cast<vtkTreeMapLayoutStrategy *>(vp);

  vtkTreeMapLayoutStrategy *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTreeMapLayoutStrategy::NewInstance();
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
PyvtkTreeMapLayoutStrategy_FindVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapLayoutStrategy *op = static_cast<vtkTreeMapLayoutStrategy *>(vp);

  vtkTree *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  float temp2[2];
  float save2[2];
  const int size2 = 2;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTree") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      tempr = op->FindVertex(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkTreeMapLayoutStrategy::FindVertex(temp0, temp1, temp2);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTreeMapLayoutStrategy_Methods[] = {
  {(char*)"GetClassName", PyvtkTreeMapLayoutStrategy_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTreeMapLayoutStrategy_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTreeMapLayoutStrategy_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTreeMapLayoutStrategy\nC++: vtkTreeMapLayoutStrategy *NewInstance()\n\n"},
  {(char*)"FindVertex", PyvtkTreeMapLayoutStrategy_FindVertex, 1,
   (char*)"V.FindVertex(vtkTree, vtkDataArray, [float, float]) -> int\nC++: virtual vtkIdType FindVertex(vtkTree *tree,\n    vtkDataArray *areaArray, float pnt[2])\n\nFind the vertex at a certain location, or -1 if none found.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkTreeMapLayoutStrategyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkTreeMapLayoutStrategy_Methods,
    "vtkTreeMapLayoutStrategy", modulename,
    NULL, NULL,
    PyvtkTreeMapLayoutStrategy_Doc(),
    PyVTKClass_vtkAreaLayoutStrategyNew(modulename));
  return cls;
}

const char **PyvtkTreeMapLayoutStrategy_Doc()
{
  static const char *docstring[] = {
    "vtkTreeMapLayoutStrategy - abstract superclass for all tree map\nlayout strategies\n\n",
    "Superclass: vtkAreaLayoutStrategy\n\n",
    "All subclasses of this class perform a tree map layout on a tree.\nThis involves assigning a rectangular region to each vertex in the\ntree, and placing that information in a data array with four\ncomponents per tuple representing (Xmin, Xmax, Ymin, Ymax).\n\nInstances of subclasses of this class may be assigned as the layout\nstrategy to vtkTreeMapLayout\n\nThanks:\n\nThanks to Brian Wylie and Ken Moreland",
    " from Sandia National\nLaboratories for help developing this class.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTreeMapLayoutStrategy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTreeMapLayoutStrategyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTreeMapLayoutStrategy", o) != 0)
    {
    Py_DECREF(o);
    }

}

