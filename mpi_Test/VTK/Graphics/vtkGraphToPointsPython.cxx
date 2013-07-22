// python wrapper for vtkGraphToPoints
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
#include "vtkGraphToPoints.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGraphToPoints(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGraphToPoints(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGraphToPointsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGraphToPointsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkGraphToPoints_Doc();


static PyObject *
PyvtkGraphToPoints_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToPoints *op = static_cast<vtkGraphToPoints *>(vp);

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
      tempr = op->vtkGraphToPoints::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphToPoints_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToPoints *op = static_cast<vtkGraphToPoints *>(vp);

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
      tempr = op->vtkGraphToPoints::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphToPoints_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToPoints *op = static_cast<vtkGraphToPoints *>(vp);

  vtkGraphToPoints *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGraphToPoints::NewInstance();
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
PyvtkGraphToPoints_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGraphToPoints *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGraphToPoints::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGraphToPoints_Methods[] = {
  {(char*)"GetClassName", PyvtkGraphToPoints_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGraphToPoints_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGraphToPoints_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGraphToPoints\nC++: vtkGraphToPoints *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGraphToPoints_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGraphToPoints\nC++: vtkGraphToPoints *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGraphToPoints_StaticNew()
{
  return vtkGraphToPoints::New();
}

PyObject *PyVTKClass_vtkGraphToPointsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGraphToPoints_StaticNew,
    PyvtkGraphToPoints_Methods,
    "vtkGraphToPoints", modulename,
    NULL, NULL,
    PyvtkGraphToPoints_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkGraphToPoints_Doc()
{
  static const char *docstring[] = {
    "vtkGraphToPoints - convert a vtkGraph a set of points.\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "Converts a vtkGraph to a vtkPolyData containing a set of points. This\nassumes that the points of the graph have already been filled\n(perhaps by vtkGraphLayout). The vertex data is passed along to the\npoint data.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGraphToPoints(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGraphToPointsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGraphToPoints", o) != 0)
    {
    Py_DECREF(o);
    }

}

