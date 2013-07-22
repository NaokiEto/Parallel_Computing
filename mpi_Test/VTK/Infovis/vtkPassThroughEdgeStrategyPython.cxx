// python wrapper for vtkPassThroughEdgeStrategy
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
#include "vtkPassThroughEdgeStrategy.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPassThroughEdgeStrategy(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPassThroughEdgeStrategy(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPassThroughEdgeStrategyNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPassThroughEdgeStrategyNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkEdgeLayoutStrategyNew
extern "C" { PyObject *PyVTKClass_vtkEdgeLayoutStrategyNew(const char *); }
#define DECLARED_PyVTKClass_vtkEdgeLayoutStrategyNew
#endif

static const char **PyvtkPassThroughEdgeStrategy_Doc();


static PyObject *
PyvtkPassThroughEdgeStrategy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassThroughEdgeStrategy *op = static_cast<vtkPassThroughEdgeStrategy *>(vp);

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
      tempr = op->vtkPassThroughEdgeStrategy::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPassThroughEdgeStrategy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassThroughEdgeStrategy *op = static_cast<vtkPassThroughEdgeStrategy *>(vp);

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
      tempr = op->vtkPassThroughEdgeStrategy::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPassThroughEdgeStrategy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassThroughEdgeStrategy *op = static_cast<vtkPassThroughEdgeStrategy *>(vp);

  vtkPassThroughEdgeStrategy *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPassThroughEdgeStrategy::NewInstance();
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
PyvtkPassThroughEdgeStrategy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPassThroughEdgeStrategy *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPassThroughEdgeStrategy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPassThroughEdgeStrategy_Layout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Layout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassThroughEdgeStrategy *op = static_cast<vtkPassThroughEdgeStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Layout();
      }
    else
      {
      op->vtkPassThroughEdgeStrategy::Layout();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPassThroughEdgeStrategy_Methods[] = {
  {(char*)"GetClassName", PyvtkPassThroughEdgeStrategy_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPassThroughEdgeStrategy_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPassThroughEdgeStrategy_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPassThroughEdgeStrategy\nC++: vtkPassThroughEdgeStrategy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPassThroughEdgeStrategy_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPassThroughEdgeStrategy\nC++: vtkPassThroughEdgeStrategy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Layout", PyvtkPassThroughEdgeStrategy_Layout, 1,
   (char*)"V.Layout()\nC++: virtual void Layout()\n\nThis is the layout method where the graph that was set in\nSetGraph() is laid out.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPassThroughEdgeStrategy_StaticNew()
{
  return vtkPassThroughEdgeStrategy::New();
}

PyObject *PyVTKClass_vtkPassThroughEdgeStrategyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPassThroughEdgeStrategy_StaticNew,
    PyvtkPassThroughEdgeStrategy_Methods,
    "vtkPassThroughEdgeStrategy", modulename,
    NULL, NULL,
    PyvtkPassThroughEdgeStrategy_Doc(),
    PyVTKClass_vtkEdgeLayoutStrategyNew(modulename));
  return cls;
}

const char **PyvtkPassThroughEdgeStrategy_Doc()
{
  static const char *docstring[] = {
    "vtkPassThroughEdgeStrategy - passes edge routing information through\n\n",
    "Superclass: vtkEdgeLayoutStrategy\n\n",
    "Simply passes existing edge layout information from the input to the\noutput without making changes.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPassThroughEdgeStrategy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPassThroughEdgeStrategyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPassThroughEdgeStrategy", o) != 0)
    {
    Py_DECREF(o);
    }

}

