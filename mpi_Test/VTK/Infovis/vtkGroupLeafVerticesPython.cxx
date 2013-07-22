// python wrapper for vtkGroupLeafVertices
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
#include "vtkGroupLeafVertices.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGroupLeafVertices(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGroupLeafVertices(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGroupLeafVerticesNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGroupLeafVerticesNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkTreeAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTreeAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTreeAlgorithmNew
#endif

static const char **PyvtkGroupLeafVertices_Doc();


static PyObject *
PyvtkGroupLeafVertices_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGroupLeafVertices *op = static_cast<vtkGroupLeafVertices *>(vp);

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
      tempr = op->vtkGroupLeafVertices::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGroupLeafVertices_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGroupLeafVertices *op = static_cast<vtkGroupLeafVertices *>(vp);

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
      tempr = op->vtkGroupLeafVertices::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGroupLeafVertices_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGroupLeafVertices *op = static_cast<vtkGroupLeafVertices *>(vp);

  vtkGroupLeafVertices *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGroupLeafVertices::NewInstance();
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
PyvtkGroupLeafVertices_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGroupLeafVertices *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGroupLeafVertices::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGroupLeafVertices_SetGroupDomain(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGroupDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGroupLeafVertices *op = static_cast<vtkGroupLeafVertices *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGroupDomain(temp0);
      }
    else
      {
      op->vtkGroupLeafVertices::SetGroupDomain(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGroupLeafVertices_GetGroupDomain(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGroupDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGroupLeafVertices *op = static_cast<vtkGroupLeafVertices *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGroupDomain();
      }
    else
      {
      tempr = op->vtkGroupLeafVertices::GetGroupDomain();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGroupLeafVertices_Methods[] = {
  {(char*)"GetClassName", PyvtkGroupLeafVertices_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGroupLeafVertices_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGroupLeafVertices_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGroupLeafVertices\nC++: vtkGroupLeafVertices *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGroupLeafVertices_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGroupLeafVertices\nC++: vtkGroupLeafVertices *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetGroupDomain", PyvtkGroupLeafVertices_SetGroupDomain, 1,
   (char*)"V.SetGroupDomain(string)\nC++: void SetGroupDomain(char *)\n\nThe name of the domain that non-leaf vertices will be assigned\nto. If the input graph already contains vertices in this domain:\n- If the ids for this domain are numeric, starts assignment with\n  max id\n- If the ids for this domain are strings, starts assignment with \"group\n  X\" where \"X\" is the max id. Default is \"group_vertex\".\n"},
  {(char*)"GetGroupDomain", PyvtkGroupLeafVertices_GetGroupDomain, 1,
   (char*)"V.GetGroupDomain() -> string\nC++: char *GetGroupDomain()\n\nThe name of the domain that non-leaf vertices will be assigned\nto. If the input graph already contains vertices in this domain:\n- If the ids for this domain are numeric, starts assignment with\n  max id\n- If the ids for this domain are strings, starts assignment with \"group\n  X\" where \"X\" is the max id. Default is \"group_vertex\".\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGroupLeafVertices_StaticNew()
{
  return vtkGroupLeafVertices::New();
}

PyObject *PyVTKClass_vtkGroupLeafVerticesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGroupLeafVertices_StaticNew,
    PyvtkGroupLeafVertices_Methods,
    "vtkGroupLeafVertices", modulename,
    NULL, NULL,
    PyvtkGroupLeafVertices_Doc(),
    PyVTKClass_vtkTreeAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkGroupLeafVertices_Doc()
{
  static const char *docstring[] = {
    "vtkGroupLeafVertices - Filter that expands a tree, categorizing leaf\nvertices\n\n",
    "Superclass: vtkTreeAlgorithm\n\n",
    "Use SetInputArrayToProcess(0, ...) to set the array to group on.\nCurrently this array must be a vtkStringArray.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGroupLeafVertices(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGroupLeafVerticesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGroupLeafVertices", o) != 0)
    {
    Py_DECREF(o);
    }

}

