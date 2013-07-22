// python wrapper for vtkArcParallelEdgeStrategy
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
#include "vtkArcParallelEdgeStrategy.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkArcParallelEdgeStrategy(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkArcParallelEdgeStrategy(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkArcParallelEdgeStrategyNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkArcParallelEdgeStrategyNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkEdgeLayoutStrategyNew
extern "C" { PyObject *PyVTKClass_vtkEdgeLayoutStrategyNew(const char *); }
#define DECLARED_PyVTKClass_vtkEdgeLayoutStrategyNew
#endif

static const char **PyvtkArcParallelEdgeStrategy_Doc();


static PyObject *
PyvtkArcParallelEdgeStrategy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcParallelEdgeStrategy *op = static_cast<vtkArcParallelEdgeStrategy *>(vp);

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
      tempr = op->vtkArcParallelEdgeStrategy::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcParallelEdgeStrategy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcParallelEdgeStrategy *op = static_cast<vtkArcParallelEdgeStrategy *>(vp);

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
      tempr = op->vtkArcParallelEdgeStrategy::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcParallelEdgeStrategy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcParallelEdgeStrategy *op = static_cast<vtkArcParallelEdgeStrategy *>(vp);

  vtkArcParallelEdgeStrategy *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkArcParallelEdgeStrategy::NewInstance();
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
PyvtkArcParallelEdgeStrategy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkArcParallelEdgeStrategy *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkArcParallelEdgeStrategy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcParallelEdgeStrategy_Layout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Layout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcParallelEdgeStrategy *op = static_cast<vtkArcParallelEdgeStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Layout();
      }
    else
      {
      op->vtkArcParallelEdgeStrategy::Layout();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArcParallelEdgeStrategy_GetNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcParallelEdgeStrategy *op = static_cast<vtkArcParallelEdgeStrategy *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfSubdivisions();
      }
    else
      {
      tempr = op->vtkArcParallelEdgeStrategy::GetNumberOfSubdivisions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcParallelEdgeStrategy_SetNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcParallelEdgeStrategy *op = static_cast<vtkArcParallelEdgeStrategy *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfSubdivisions(temp0);
      }
    else
      {
      op->vtkArcParallelEdgeStrategy::SetNumberOfSubdivisions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkArcParallelEdgeStrategy_Methods[] = {
  {(char*)"GetClassName", PyvtkArcParallelEdgeStrategy_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkArcParallelEdgeStrategy_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkArcParallelEdgeStrategy_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkArcParallelEdgeStrategy\nC++: vtkArcParallelEdgeStrategy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkArcParallelEdgeStrategy_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkArcParallelEdgeStrategy\nC++: vtkArcParallelEdgeStrategy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Layout", PyvtkArcParallelEdgeStrategy_Layout, 1,
   (char*)"V.Layout()\nC++: virtual void Layout()\n\nThis is the layout method where the graph that was set in\nSetGraph() is laid out.\n"},
  {(char*)"GetNumberOfSubdivisions", PyvtkArcParallelEdgeStrategy_GetNumberOfSubdivisions, 1,
   (char*)"V.GetNumberOfSubdivisions() -> int\nC++: int GetNumberOfSubdivisions()\n\nGet/Set the number of subdivisions on each edge.\n"},
  {(char*)"SetNumberOfSubdivisions", PyvtkArcParallelEdgeStrategy_SetNumberOfSubdivisions, 1,
   (char*)"V.SetNumberOfSubdivisions(int)\nC++: void SetNumberOfSubdivisions(int a)\n\nGet/Set the number of subdivisions on each edge.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkArcParallelEdgeStrategy_StaticNew()
{
  return vtkArcParallelEdgeStrategy::New();
}

PyObject *PyVTKClass_vtkArcParallelEdgeStrategyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkArcParallelEdgeStrategy_StaticNew,
    PyvtkArcParallelEdgeStrategy_Methods,
    "vtkArcParallelEdgeStrategy", modulename,
    NULL, NULL,
    PyvtkArcParallelEdgeStrategy_Doc(),
    PyVTKClass_vtkEdgeLayoutStrategyNew(modulename));
  return cls;
}

const char **PyvtkArcParallelEdgeStrategy_Doc()
{
  static const char *docstring[] = {
    "vtkArcParallelEdgeStrategy - routes parallel edges as arcs\n\n",
    "Superclass: vtkEdgeLayoutStrategy\n\n",
    "Parallel edges are drawn as arcs, and self-loops are drawn as ovals.\nWhen only one edge connects two vertices it is drawn as a straight\nline.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkArcParallelEdgeStrategy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkArcParallelEdgeStrategyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkArcParallelEdgeStrategy", o) != 0)
    {
    Py_DECREF(o);
    }

}

