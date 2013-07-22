// python wrapper for vtkSplineGraphEdges
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
#include "vtkSplineGraphEdges.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSplineGraphEdges(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSplineGraphEdges(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSplineGraphEdgesNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSplineGraphEdgesNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkGraphAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkGraphAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkGraphAlgorithmNew
#endif

static const char **PyvtkSplineGraphEdges_Doc();


static PyObject *
PyvtkSplineGraphEdges_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineGraphEdges *op = static_cast<vtkSplineGraphEdges *>(vp);

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
      tempr = op->vtkSplineGraphEdges::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineGraphEdges_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineGraphEdges *op = static_cast<vtkSplineGraphEdges *>(vp);

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
      tempr = op->vtkSplineGraphEdges::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineGraphEdges_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineGraphEdges *op = static_cast<vtkSplineGraphEdges *>(vp);

  vtkSplineGraphEdges *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSplineGraphEdges::NewInstance();
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
PyvtkSplineGraphEdges_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSplineGraphEdges *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSplineGraphEdges::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineGraphEdges_SetSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineGraphEdges *op = static_cast<vtkSplineGraphEdges *>(vp);

  vtkSpline *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSpline"))
    {
    if (ap.IsBound())
      {
      op->SetSpline(temp0);
      }
    else
      {
      op->vtkSplineGraphEdges::SetSpline(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineGraphEdges_GetSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineGraphEdges *op = static_cast<vtkSplineGraphEdges *>(vp);

  vtkSpline *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSpline();
      }
    else
      {
      tempr = op->vtkSplineGraphEdges::GetSpline();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineGraphEdges_SetSplineType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSplineType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineGraphEdges *op = static_cast<vtkSplineGraphEdges *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSplineType(temp0);
      }
    else
      {
      op->vtkSplineGraphEdges::SetSplineType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineGraphEdges_GetSplineType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplineType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineGraphEdges *op = static_cast<vtkSplineGraphEdges *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSplineType();
      }
    else
      {
      tempr = op->vtkSplineGraphEdges::GetSplineType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineGraphEdges_SetNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineGraphEdges *op = static_cast<vtkSplineGraphEdges *>(vp);

  vtkIdType temp0;
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
      op->vtkSplineGraphEdges::SetNumberOfSubdivisions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineGraphEdges_GetNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineGraphEdges *op = static_cast<vtkSplineGraphEdges *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfSubdivisions();
      }
    else
      {
      tempr = op->vtkSplineGraphEdges::GetNumberOfSubdivisions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSplineGraphEdges_Methods[] = {
  {(char*)"GetClassName", PyvtkSplineGraphEdges_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSplineGraphEdges_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSplineGraphEdges_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSplineGraphEdges\nC++: vtkSplineGraphEdges *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSplineGraphEdges_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSplineGraphEdges\nC++: vtkSplineGraphEdges *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSpline", PyvtkSplineGraphEdges_SetSpline, 1,
   (char*)"V.SetSpline(vtkSpline)\nC++: virtual void SetSpline(vtkSpline *s)\n\nIf SplineType is CUSTOM, uses this spline.\n"},
  {(char*)"GetSpline", PyvtkSplineGraphEdges_GetSpline, 1,
   (char*)"V.GetSpline() -> vtkSpline\nC++: vtkSpline *GetSpline()\n\nIf SplineType is CUSTOM, uses this spline.\n"},
  {(char*)"SetSplineType", PyvtkSplineGraphEdges_SetSplineType, 1,
   (char*)"V.SetSplineType(int)\nC++: void SetSplineType(int a)\n\nSpline type used by the filter. BSPLINE (0) - Use optimized\nb-spline (default). CUSTOM (1) - Use spline set with SetSpline.\n"},
  {(char*)"GetSplineType", PyvtkSplineGraphEdges_GetSplineType, 1,
   (char*)"V.GetSplineType() -> int\nC++: int GetSplineType()\n\nSpline type used by the filter. BSPLINE (0) - Use optimized\nb-spline (default). CUSTOM (1) - Use spline set with SetSpline.\n"},
  {(char*)"SetNumberOfSubdivisions", PyvtkSplineGraphEdges_SetNumberOfSubdivisions, 1,
   (char*)"V.SetNumberOfSubdivisions(int)\nC++: void SetNumberOfSubdivisions(vtkIdType a)\n\nThe number of subdivisions in the spline.\n"},
  {(char*)"GetNumberOfSubdivisions", PyvtkSplineGraphEdges_GetNumberOfSubdivisions, 1,
   (char*)"V.GetNumberOfSubdivisions() -> int\nC++: vtkIdType GetNumberOfSubdivisions()\n\nThe number of subdivisions in the spline.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSplineGraphEdges_StaticNew()
{
  return vtkSplineGraphEdges::New();
}

PyObject *PyVTKClass_vtkSplineGraphEdgesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSplineGraphEdges_StaticNew,
    PyvtkSplineGraphEdges_Methods,
    "vtkSplineGraphEdges", modulename,
    NULL, NULL,
    PyvtkSplineGraphEdges_Doc(),
    PyVTKClass_vtkGraphAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"BSPLINE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"CUSTOM", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkSplineGraphEdges_Doc()
{
  static const char *docstring[] = {
    "vtkSplineGraphEdges - subsample graph edges to make smooth curves\n\n",
    "Superclass: vtkGraphAlgorithm\n\n",
    "vtkSplineGraphEdges uses a vtkSpline to make edges into nicely\nsampled splines. By default, the filter will use an optimized\nb-spline. Otherwise, it will use a custom vtkSpline instance set by\nthe user.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSplineGraphEdges(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSplineGraphEdgesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSplineGraphEdges", o) != 0)
    {
    Py_DECREF(o);
    }

}

