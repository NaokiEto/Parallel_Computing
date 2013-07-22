// python wrapper for vtkEdgeLayoutStrategy
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
#include "vtkEdgeLayoutStrategy.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkEdgeLayoutStrategy(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkEdgeLayoutStrategy(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkEdgeLayoutStrategyNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkEdgeLayoutStrategyNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkEdgeLayoutStrategy_Doc();


static PyObject *
PyvtkEdgeLayoutStrategy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeLayoutStrategy *op = static_cast<vtkEdgeLayoutStrategy *>(vp);

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
      tempr = op->vtkEdgeLayoutStrategy::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeLayoutStrategy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeLayoutStrategy *op = static_cast<vtkEdgeLayoutStrategy *>(vp);

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
      tempr = op->vtkEdgeLayoutStrategy::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeLayoutStrategy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeLayoutStrategy *op = static_cast<vtkEdgeLayoutStrategy *>(vp);

  vtkEdgeLayoutStrategy *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkEdgeLayoutStrategy::NewInstance();
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
PyvtkEdgeLayoutStrategy_SetGraph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeLayoutStrategy *op = static_cast<vtkEdgeLayoutStrategy *>(vp);

  vtkGraph *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGraph"))
    {
    if (ap.IsBound())
      {
      op->SetGraph(temp0);
      }
    else
      {
      op->vtkEdgeLayoutStrategy::SetGraph(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeLayoutStrategy_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeLayoutStrategy *op = static_cast<vtkEdgeLayoutStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkEdgeLayoutStrategy::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeLayoutStrategy_Layout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Layout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeLayoutStrategy *op = static_cast<vtkEdgeLayoutStrategy *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->Layout();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeLayoutStrategy_SetEdgeWeightArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeWeightArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeLayoutStrategy *op = static_cast<vtkEdgeLayoutStrategy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdgeWeightArrayName(temp0);
      }
    else
      {
      op->vtkEdgeLayoutStrategy::SetEdgeWeightArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeLayoutStrategy_GetEdgeWeightArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeWeightArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeLayoutStrategy *op = static_cast<vtkEdgeLayoutStrategy *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgeWeightArrayName();
      }
    else
      {
      tempr = op->vtkEdgeLayoutStrategy::GetEdgeWeightArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkEdgeLayoutStrategy_Methods[] = {
  {(char*)"GetClassName", PyvtkEdgeLayoutStrategy_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkEdgeLayoutStrategy_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkEdgeLayoutStrategy_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkEdgeLayoutStrategy\nC++: vtkEdgeLayoutStrategy *NewInstance()\n\n"},
  {(char*)"SetGraph", PyvtkEdgeLayoutStrategy_SetGraph, 1,
   (char*)"V.SetGraph(vtkGraph)\nC++: virtual void SetGraph(vtkGraph *graph)\n\nSetting the graph for the layout strategy\n"},
  {(char*)"Initialize", PyvtkEdgeLayoutStrategy_Initialize, 1,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nThis method allows the layout strategy to do initialization of\ndata structures or whatever else it might want to do.\n"},
  {(char*)"Layout", PyvtkEdgeLayoutStrategy_Layout, 1,
   (char*)"V.Layout()\nC++: virtual void Layout()\n\nThis is the layout method where the graph that was set in\nSetGraph() is laid out.\n"},
  {(char*)"SetEdgeWeightArrayName", PyvtkEdgeLayoutStrategy_SetEdgeWeightArrayName, 1,
   (char*)"V.SetEdgeWeightArrayName(string)\nC++: void SetEdgeWeightArrayName(char *)\n\nSet/Get the field to use for the edge weights.\n"},
  {(char*)"GetEdgeWeightArrayName", PyvtkEdgeLayoutStrategy_GetEdgeWeightArrayName, 1,
   (char*)"V.GetEdgeWeightArrayName() -> string\nC++: char *GetEdgeWeightArrayName()\n\nSet/Get the field to use for the edge weights.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkEdgeLayoutStrategyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkEdgeLayoutStrategy_Methods,
    "vtkEdgeLayoutStrategy", modulename,
    NULL, NULL,
    PyvtkEdgeLayoutStrategy_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkEdgeLayoutStrategy_Doc()
{
  static const char *docstring[] = {
    "vtkEdgeLayoutStrategy - abstract superclass for all edge layout\nstrategies\n\n",
    "Superclass: vtkObject\n\n",
    "All edge layouts should subclass from this class. \nvtkEdgeLayoutStrategy works as a plug-in to the vtkEdgeLayout\nalgorithm.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkEdgeLayoutStrategy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkEdgeLayoutStrategyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkEdgeLayoutStrategy", o) != 0)
    {
    Py_DECREF(o);
    }

}

