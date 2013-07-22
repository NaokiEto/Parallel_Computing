// python wrapper for vtkEdgeLayout
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
#include "vtkEdgeLayout.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkEdgeLayout(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkEdgeLayout(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkEdgeLayoutNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkEdgeLayoutNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkGraphAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkGraphAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkGraphAlgorithmNew
#endif

static const char **PyvtkEdgeLayout_Doc();


static PyObject *
PyvtkEdgeLayout_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeLayout *op = static_cast<vtkEdgeLayout *>(vp);

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
      tempr = op->vtkEdgeLayout::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeLayout_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeLayout *op = static_cast<vtkEdgeLayout *>(vp);

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
      tempr = op->vtkEdgeLayout::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeLayout_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeLayout *op = static_cast<vtkEdgeLayout *>(vp);

  vtkEdgeLayout *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkEdgeLayout::NewInstance();
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
PyvtkEdgeLayout_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkEdgeLayout *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkEdgeLayout::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeLayout_SetLayoutStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeLayout *op = static_cast<vtkEdgeLayout *>(vp);

  vtkEdgeLayoutStrategy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkEdgeLayoutStrategy"))
    {
    if (ap.IsBound())
      {
      op->SetLayoutStrategy(temp0);
      }
    else
      {
      op->vtkEdgeLayout::SetLayoutStrategy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeLayout_GetLayoutStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeLayout *op = static_cast<vtkEdgeLayout *>(vp);

  vtkEdgeLayoutStrategy *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLayoutStrategy();
      }
    else
      {
      tempr = op->vtkEdgeLayout::GetLayoutStrategy();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeLayout_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeLayout *op = static_cast<vtkEdgeLayout *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMTime();
      }
    else
      {
      tempr = op->vtkEdgeLayout::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkEdgeLayout_Methods[] = {
  {(char*)"GetClassName", PyvtkEdgeLayout_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkEdgeLayout_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkEdgeLayout_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkEdgeLayout\nC++: vtkEdgeLayout *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkEdgeLayout_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkEdgeLayout\nC++: vtkEdgeLayout *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetLayoutStrategy", PyvtkEdgeLayout_SetLayoutStrategy, 1,
   (char*)"V.SetLayoutStrategy(vtkEdgeLayoutStrategy)\nC++: void SetLayoutStrategy(vtkEdgeLayoutStrategy *strategy)\n\nThe layout strategy to use during graph layout.\n"},
  {(char*)"GetLayoutStrategy", PyvtkEdgeLayout_GetLayoutStrategy, 1,
   (char*)"V.GetLayoutStrategy() -> vtkEdgeLayoutStrategy\nC++: vtkEdgeLayoutStrategy *GetLayoutStrategy()\n\nThe layout strategy to use during graph layout.\n"},
  {(char*)"GetMTime", PyvtkEdgeLayout_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long GetMTime()\n\nGet the modification time of the layout algorithm.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkEdgeLayout_StaticNew()
{
  return vtkEdgeLayout::New();
}

PyObject *PyVTKClass_vtkEdgeLayoutNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkEdgeLayout_StaticNew,
    PyvtkEdgeLayout_Methods,
    "vtkEdgeLayout", modulename,
    NULL, NULL,
    PyvtkEdgeLayout_Doc(),
    PyVTKClass_vtkGraphAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkEdgeLayout_Doc()
{
  static const char *docstring[] = {
    "vtkEdgeLayout - layout graph edges\n\n",
    "Superclass: vtkGraphAlgorithm\n\n",
    "This class is a shell for many edge layout strategies which may be\nset using the SetLayoutStrategy() function.  The layout strategies do\nthe actual work.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkEdgeLayout(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkEdgeLayoutNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkEdgeLayout", o) != 0)
    {
    Py_DECREF(o);
    }

}

