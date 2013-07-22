// python wrapper for vtkGraphEdge
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
#include "vtkGraphEdge.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGraphEdge(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGraphEdge(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGraphEdgeNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGraphEdgeNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkGraphEdge_Doc();


static PyObject *
PyvtkGraphEdge_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphEdge *op = static_cast<vtkGraphEdge *>(vp);

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
      tempr = op->vtkGraphEdge::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphEdge_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphEdge *op = static_cast<vtkGraphEdge *>(vp);

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
      tempr = op->vtkGraphEdge::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphEdge_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphEdge *op = static_cast<vtkGraphEdge *>(vp);

  vtkGraphEdge *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGraphEdge::NewInstance();
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
PyvtkGraphEdge_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGraphEdge *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGraphEdge::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphEdge_SetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphEdge *op = static_cast<vtkGraphEdge *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSource(temp0);
      }
    else
      {
      op->vtkGraphEdge::SetSource(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphEdge_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphEdge *op = static_cast<vtkGraphEdge *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSource();
      }
    else
      {
      tempr = op->vtkGraphEdge::GetSource();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphEdge_SetTarget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTarget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphEdge *op = static_cast<vtkGraphEdge *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTarget(temp0);
      }
    else
      {
      op->vtkGraphEdge::SetTarget(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphEdge_GetTarget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTarget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphEdge *op = static_cast<vtkGraphEdge *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTarget();
      }
    else
      {
      tempr = op->vtkGraphEdge::GetTarget();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphEdge_SetId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphEdge *op = static_cast<vtkGraphEdge *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetId(temp0);
      }
    else
      {
      op->vtkGraphEdge::SetId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphEdge_GetId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphEdge *op = static_cast<vtkGraphEdge *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetId();
      }
    else
      {
      tempr = op->vtkGraphEdge::GetId();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGraphEdge_Methods[] = {
  {(char*)"GetClassName", PyvtkGraphEdge_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGraphEdge_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGraphEdge_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGraphEdge\nC++: vtkGraphEdge *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGraphEdge_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGraphEdge\nC++: vtkGraphEdge *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSource", PyvtkGraphEdge_SetSource, 1,
   (char*)"V.SetSource(int)\nC++: void SetSource(vtkIdType a)\n\nThe source of the edge.\n"},
  {(char*)"GetSource", PyvtkGraphEdge_GetSource, 1,
   (char*)"V.GetSource() -> int\nC++: vtkIdType GetSource()\n\nThe source of the edge.\n"},
  {(char*)"SetTarget", PyvtkGraphEdge_SetTarget, 1,
   (char*)"V.SetTarget(int)\nC++: void SetTarget(vtkIdType a)\n\nThe target of the edge.\n"},
  {(char*)"GetTarget", PyvtkGraphEdge_GetTarget, 1,
   (char*)"V.GetTarget() -> int\nC++: vtkIdType GetTarget()\n\nThe target of the edge.\n"},
  {(char*)"SetId", PyvtkGraphEdge_SetId, 1,
   (char*)"V.SetId(int)\nC++: void SetId(vtkIdType a)\n\nThe id of the edge.\n"},
  {(char*)"GetId", PyvtkGraphEdge_GetId, 1,
   (char*)"V.GetId() -> int\nC++: vtkIdType GetId()\n\nThe id of the edge.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGraphEdge_StaticNew()
{
  return vtkGraphEdge::New();
}

PyObject *PyVTKClass_vtkGraphEdgeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGraphEdge_StaticNew,
    PyvtkGraphEdge_Methods,
    "vtkGraphEdge", modulename,
    NULL, NULL,
    PyvtkGraphEdge_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkGraphEdge_Doc()
{
  static const char *docstring[] = {
    "vtkGraphEdge - Representation of a single graph edge.\n\n",
    "Superclass: vtkObject\n\n",
    "A heavy-weight (vtkObject subclass) graph edge object that may be\nused instead of the vtkEdgeType struct, for use with wrappers. The\nedge contains the source and target vertex ids, and the edge id.\n\nSee Also:\n\nvtkGraph\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGraphEdge(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGraphEdgeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGraphEdge", o) != 0)
    {
    Py_DECREF(o);
    }

}

