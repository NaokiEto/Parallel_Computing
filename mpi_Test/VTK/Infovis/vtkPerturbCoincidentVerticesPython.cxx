// python wrapper for vtkPerturbCoincidentVertices
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
#include "vtkPerturbCoincidentVertices.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPerturbCoincidentVertices(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPerturbCoincidentVertices(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPerturbCoincidentVerticesNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPerturbCoincidentVerticesNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkGraphAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkGraphAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkGraphAlgorithmNew
#endif

static const char **PyvtkPerturbCoincidentVertices_Doc();


static PyObject *
PyvtkPerturbCoincidentVertices_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerturbCoincidentVertices *op = static_cast<vtkPerturbCoincidentVertices *>(vp);

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
      tempr = op->vtkPerturbCoincidentVertices::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPerturbCoincidentVertices_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerturbCoincidentVertices *op = static_cast<vtkPerturbCoincidentVertices *>(vp);

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
      tempr = op->vtkPerturbCoincidentVertices::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPerturbCoincidentVertices_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerturbCoincidentVertices *op = static_cast<vtkPerturbCoincidentVertices *>(vp);

  vtkPerturbCoincidentVertices *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPerturbCoincidentVertices::NewInstance();
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
PyvtkPerturbCoincidentVertices_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPerturbCoincidentVertices *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPerturbCoincidentVertices::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPerturbCoincidentVertices_SetPerturbFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPerturbFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerturbCoincidentVertices *op = static_cast<vtkPerturbCoincidentVertices *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPerturbFactor(temp0);
      }
    else
      {
      op->vtkPerturbCoincidentVertices::SetPerturbFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPerturbCoincidentVertices_GetPerturbFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPerturbFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerturbCoincidentVertices *op = static_cast<vtkPerturbCoincidentVertices *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPerturbFactor();
      }
    else
      {
      tempr = op->vtkPerturbCoincidentVertices::GetPerturbFactor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPerturbCoincidentVertices_Methods[] = {
  {(char*)"GetClassName", PyvtkPerturbCoincidentVertices_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPerturbCoincidentVertices_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPerturbCoincidentVertices_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPerturbCoincidentVertices\nC++: vtkPerturbCoincidentVertices *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPerturbCoincidentVertices_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPerturbCoincidentVertices\nC++: vtkPerturbCoincidentVertices *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPerturbFactor", PyvtkPerturbCoincidentVertices_SetPerturbFactor, 1,
   (char*)"V.SetPerturbFactor(float)\nC++: void SetPerturbFactor(double a)\n\nSpecify the perturbation factor (defaults to 1.0)\n"},
  {(char*)"GetPerturbFactor", PyvtkPerturbCoincidentVertices_GetPerturbFactor, 1,
   (char*)"V.GetPerturbFactor() -> float\nC++: double GetPerturbFactor()\n\nSpecify the perturbation factor (defaults to 1.0)\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPerturbCoincidentVertices_StaticNew()
{
  return vtkPerturbCoincidentVertices::New();
}

PyObject *PyVTKClass_vtkPerturbCoincidentVerticesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPerturbCoincidentVertices_StaticNew,
    PyvtkPerturbCoincidentVertices_Methods,
    "vtkPerturbCoincidentVertices", modulename,
    NULL, NULL,
    PyvtkPerturbCoincidentVertices_Doc(),
    PyVTKClass_vtkGraphAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPerturbCoincidentVertices_Doc()
{
  static const char *docstring[] = {
    "vtkPerturbCoincidentVertices - Perturbs vertices that are coincident.\n\n",
    "Superclass: vtkGraphAlgorithm\n\n",
    "This filter perturbs vertices in a graph that have coincident\ncoordinates. In particular this happens all the time with graphs that\nare georeferenced, so we need a nice scheme to perturb the vertices\nso that when the user zooms in the vertices can be distiquished.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPerturbCoincidentVertices(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPerturbCoincidentVerticesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPerturbCoincidentVertices", o) != 0)
    {
    Py_DECREF(o);
    }

}

