// python wrapper for vtkPPairwiseExtractHistogram2D
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
#include "vtkPPairwiseExtractHistogram2D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPPairwiseExtractHistogram2D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPPairwiseExtractHistogram2D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPPairwiseExtractHistogram2DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPPairwiseExtractHistogram2DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPairwiseExtractHistogram2DNew
extern "C" { PyObject *PyVTKClass_vtkPairwiseExtractHistogram2DNew(const char *); }
#define DECLARED_PyVTKClass_vtkPairwiseExtractHistogram2DNew
#endif

static const char **PyvtkPPairwiseExtractHistogram2D_Doc();


static PyObject *
PyvtkPPairwiseExtractHistogram2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPPairwiseExtractHistogram2D *op = static_cast<vtkPPairwiseExtractHistogram2D *>(vp);

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
      tempr = op->vtkPPairwiseExtractHistogram2D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPPairwiseExtractHistogram2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPPairwiseExtractHistogram2D *op = static_cast<vtkPPairwiseExtractHistogram2D *>(vp);

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
      tempr = op->vtkPPairwiseExtractHistogram2D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPPairwiseExtractHistogram2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPPairwiseExtractHistogram2D *op = static_cast<vtkPPairwiseExtractHistogram2D *>(vp);

  vtkPPairwiseExtractHistogram2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPPairwiseExtractHistogram2D::NewInstance();
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
PyvtkPPairwiseExtractHistogram2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPPairwiseExtractHistogram2D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPPairwiseExtractHistogram2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPPairwiseExtractHistogram2D_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPPairwiseExtractHistogram2D *op = static_cast<vtkPPairwiseExtractHistogram2D *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->SetController(temp0);
      }
    else
      {
      op->vtkPPairwiseExtractHistogram2D::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPPairwiseExtractHistogram2D_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPPairwiseExtractHistogram2D *op = static_cast<vtkPPairwiseExtractHistogram2D *>(vp);

  vtkMultiProcessController *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetController();
      }
    else
      {
      tempr = op->vtkPPairwiseExtractHistogram2D::GetController();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPPairwiseExtractHistogram2D_Methods[] = {
  {(char*)"GetClassName", PyvtkPPairwiseExtractHistogram2D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPPairwiseExtractHistogram2D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPPairwiseExtractHistogram2D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPPairwiseExtractHistogram2D\nC++: vtkPPairwiseExtractHistogram2D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPPairwiseExtractHistogram2D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPPairwiseExtractHistogram2D\nC++: vtkPPairwiseExtractHistogram2D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkPPairwiseExtractHistogram2D_SetController, 1,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\n"},
  {(char*)"GetController", PyvtkPPairwiseExtractHistogram2D_GetController, 1,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPPairwiseExtractHistogram2D_StaticNew()
{
  return vtkPPairwiseExtractHistogram2D::New();
}

PyObject *PyVTKClass_vtkPPairwiseExtractHistogram2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPPairwiseExtractHistogram2D_StaticNew,
    PyvtkPPairwiseExtractHistogram2D_Methods,
    "vtkPPairwiseExtractHistogram2D", modulename,
    NULL, NULL,
    PyvtkPPairwiseExtractHistogram2D_Doc(),
    PyVTKClass_vtkPairwiseExtractHistogram2DNew(modulename));
  return cls;
}

const char **PyvtkPPairwiseExtractHistogram2D_Doc()
{
  static const char *docstring[] = {
    "vtkPPairwiseExtractHistogram2D - compute a 2D histogram between \n\n",
    "Superclass: vtkPairwiseExtractHistogram2D\n\n",
    "This class does exactly the same this as\nvtkPairwiseExtractHistogram2D,\n but does it in a multi-process environment.  After each node\n computes their own local histograms, this class does an AllReduce\n that distributes the sum of all local histograms onto each node.\n\n\n Because vtkPairwiseExtractHistogram2D is a light wrapper around a\nseries\n of vtkExtractHistogram2D classes, this class just overri",
    "des the\nfunction\n that instantiates new histogram filters and returns the parallel\nversion\n (vtkPExtractHistogram2D).\n\nSee Also:\n\n\n vtkExtractHistogram2D vtkPairwiseExtractHistogram2D\nvtkPExtractHistogram2D\n\nThanks:\n\n\n Developed by David Feng and Philippe Pebay at Sandia National\nLaboratories\n----------------------------------------------------------------------\n    --------\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPPairwiseExtractHistogram2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPPairwiseExtractHistogram2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPPairwiseExtractHistogram2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

