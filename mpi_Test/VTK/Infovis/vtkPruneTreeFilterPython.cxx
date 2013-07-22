// python wrapper for vtkPruneTreeFilter
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
#include "vtkPruneTreeFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPruneTreeFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPruneTreeFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPruneTreeFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPruneTreeFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkTreeAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTreeAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTreeAlgorithmNew
#endif

static const char **PyvtkPruneTreeFilter_Doc();


static PyObject *
PyvtkPruneTreeFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPruneTreeFilter *op = static_cast<vtkPruneTreeFilter *>(vp);

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
      tempr = op->vtkPruneTreeFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPruneTreeFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPruneTreeFilter *op = static_cast<vtkPruneTreeFilter *>(vp);

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
      tempr = op->vtkPruneTreeFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPruneTreeFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPruneTreeFilter *op = static_cast<vtkPruneTreeFilter *>(vp);

  vtkPruneTreeFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPruneTreeFilter::NewInstance();
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
PyvtkPruneTreeFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPruneTreeFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPruneTreeFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPruneTreeFilter_GetParentVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParentVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPruneTreeFilter *op = static_cast<vtkPruneTreeFilter *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetParentVertex();
      }
    else
      {
      tempr = op->vtkPruneTreeFilter::GetParentVertex();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPruneTreeFilter_SetParentVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParentVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPruneTreeFilter *op = static_cast<vtkPruneTreeFilter *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetParentVertex(temp0);
      }
    else
      {
      op->vtkPruneTreeFilter::SetParentVertex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPruneTreeFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkPruneTreeFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPruneTreeFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPruneTreeFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPruneTreeFilter\nC++: vtkPruneTreeFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPruneTreeFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPruneTreeFilter\nC++: vtkPruneTreeFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetParentVertex", PyvtkPruneTreeFilter_GetParentVertex, 1,
   (char*)"V.GetParentVertex() -> int\nC++: vtkIdType GetParentVertex()\n\nSet the parent vertex of the subtree to remove.\n"},
  {(char*)"SetParentVertex", PyvtkPruneTreeFilter_SetParentVertex, 1,
   (char*)"V.SetParentVertex(int)\nC++: void SetParentVertex(vtkIdType a)\n\nSet the parent vertex of the subtree to remove.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPruneTreeFilter_StaticNew()
{
  return vtkPruneTreeFilter::New();
}

PyObject *PyVTKClass_vtkPruneTreeFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPruneTreeFilter_StaticNew,
    PyvtkPruneTreeFilter_Methods,
    "vtkPruneTreeFilter", modulename,
    NULL, NULL,
    PyvtkPruneTreeFilter_Doc(),
    PyVTKClass_vtkTreeAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPruneTreeFilter_Doc()
{
  static const char *docstring[] = {
    "vtkPruneTreeFilter - prune a subtree out of a vtkTree\n\n",
    "Superclass: vtkTreeAlgorithm\n\n",
    "Removes a subtree rooted at a particular vertex in a vtkTree.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPruneTreeFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPruneTreeFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPruneTreeFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

