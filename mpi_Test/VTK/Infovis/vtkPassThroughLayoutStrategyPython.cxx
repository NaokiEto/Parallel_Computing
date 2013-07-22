// python wrapper for vtkPassThroughLayoutStrategy
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
#include "vtkPassThroughLayoutStrategy.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPassThroughLayoutStrategy(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPassThroughLayoutStrategy(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPassThroughLayoutStrategyNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPassThroughLayoutStrategyNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkGraphLayoutStrategyNew
extern "C" { PyObject *PyVTKClass_vtkGraphLayoutStrategyNew(const char *); }
#define DECLARED_PyVTKClass_vtkGraphLayoutStrategyNew
#endif

static const char **PyvtkPassThroughLayoutStrategy_Doc();


static PyObject *
PyvtkPassThroughLayoutStrategy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassThroughLayoutStrategy *op = static_cast<vtkPassThroughLayoutStrategy *>(vp);

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
      tempr = op->vtkPassThroughLayoutStrategy::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPassThroughLayoutStrategy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassThroughLayoutStrategy *op = static_cast<vtkPassThroughLayoutStrategy *>(vp);

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
      tempr = op->vtkPassThroughLayoutStrategy::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPassThroughLayoutStrategy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassThroughLayoutStrategy *op = static_cast<vtkPassThroughLayoutStrategy *>(vp);

  vtkPassThroughLayoutStrategy *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPassThroughLayoutStrategy::NewInstance();
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
PyvtkPassThroughLayoutStrategy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPassThroughLayoutStrategy *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPassThroughLayoutStrategy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPassThroughLayoutStrategy_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassThroughLayoutStrategy *op = static_cast<vtkPassThroughLayoutStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkPassThroughLayoutStrategy::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPassThroughLayoutStrategy_Layout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Layout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassThroughLayoutStrategy *op = static_cast<vtkPassThroughLayoutStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Layout();
      }
    else
      {
      op->vtkPassThroughLayoutStrategy::Layout();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPassThroughLayoutStrategy_IsLayoutComplete(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsLayoutComplete");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassThroughLayoutStrategy *op = static_cast<vtkPassThroughLayoutStrategy *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsLayoutComplete();
      }
    else
      {
      tempr = op->vtkPassThroughLayoutStrategy::IsLayoutComplete();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPassThroughLayoutStrategy_Methods[] = {
  {(char*)"GetClassName", PyvtkPassThroughLayoutStrategy_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPassThroughLayoutStrategy_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPassThroughLayoutStrategy_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPassThroughLayoutStrategy\nC++: vtkPassThroughLayoutStrategy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPassThroughLayoutStrategy_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPassThroughLayoutStrategy\nC++: vtkPassThroughLayoutStrategy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkPassThroughLayoutStrategy_Initialize, 1,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nThis strategy sets up some data structures for faster processing\nof each Layout() call\n"},
  {(char*)"Layout", PyvtkPassThroughLayoutStrategy_Layout, 1,
   (char*)"V.Layout()\nC++: virtual void Layout()\n\nThis is the layout method where the graph that was set in\nSetGraph() is laid out. The method can either entirely layout the\ngraph or iteratively lay out the graph. If you have an iterative\nlayout please implement the IsLayoutComplete() method.\n"},
  {(char*)"IsLayoutComplete", PyvtkPassThroughLayoutStrategy_IsLayoutComplete, 1,
   (char*)"V.IsLayoutComplete() -> int\nC++: virtual int IsLayoutComplete()\n\nI'm an iterative layout so this method lets the caller know if\nI'm done laying out the graph\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPassThroughLayoutStrategy_StaticNew()
{
  return vtkPassThroughLayoutStrategy::New();
}

PyObject *PyVTKClass_vtkPassThroughLayoutStrategyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPassThroughLayoutStrategy_StaticNew,
    PyvtkPassThroughLayoutStrategy_Methods,
    "vtkPassThroughLayoutStrategy", modulename,
    NULL, NULL,
    PyvtkPassThroughLayoutStrategy_Doc(),
    PyVTKClass_vtkGraphLayoutStrategyNew(modulename));
  return cls;
}

const char **PyvtkPassThroughLayoutStrategy_Doc()
{
  static const char *docstring[] = {
    "vtkPassThroughLayoutStrategy - a layout strategy that does absolutely\nnothing\n\n",
    "Superclass: vtkGraphLayoutStrategy\n\n",
    "Yes, this incredible strategy does absoluted nothing to the data so\nin affect passes through the graph untouched. This strategy is useful\nin the cases where the graph is already laid out.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPassThroughLayoutStrategy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPassThroughLayoutStrategyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPassThroughLayoutStrategy", o) != 0)
    {
    Py_DECREF(o);
    }

}

