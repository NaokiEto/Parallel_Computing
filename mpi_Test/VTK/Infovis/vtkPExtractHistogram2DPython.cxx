// python wrapper for vtkPExtractHistogram2D
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
#include "vtkPExtractHistogram2D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPExtractHistogram2D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPExtractHistogram2D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPExtractHistogram2DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPExtractHistogram2DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkExtractHistogram2DNew
extern "C" { PyObject *PyVTKClass_vtkExtractHistogram2DNew(const char *); }
#define DECLARED_PyVTKClass_vtkExtractHistogram2DNew
#endif

static const char **PyvtkPExtractHistogram2D_Doc();


static PyObject *
PyvtkPExtractHistogram2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExtractHistogram2D *op = static_cast<vtkPExtractHistogram2D *>(vp);

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
      tempr = op->vtkPExtractHistogram2D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExtractHistogram2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExtractHistogram2D *op = static_cast<vtkPExtractHistogram2D *>(vp);

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
      tempr = op->vtkPExtractHistogram2D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExtractHistogram2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExtractHistogram2D *op = static_cast<vtkPExtractHistogram2D *>(vp);

  vtkPExtractHistogram2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPExtractHistogram2D::NewInstance();
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
PyvtkPExtractHistogram2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPExtractHistogram2D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPExtractHistogram2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExtractHistogram2D_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExtractHistogram2D *op = static_cast<vtkPExtractHistogram2D *>(vp);

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
      op->vtkPExtractHistogram2D::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPExtractHistogram2D_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExtractHistogram2D *op = static_cast<vtkPExtractHistogram2D *>(vp);

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
      tempr = op->vtkPExtractHistogram2D::GetController();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPExtractHistogram2D_Methods[] = {
  {(char*)"GetClassName", PyvtkPExtractHistogram2D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPExtractHistogram2D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPExtractHistogram2D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPExtractHistogram2D\nC++: vtkPExtractHistogram2D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPExtractHistogram2D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPExtractHistogram2D\nC++: vtkPExtractHistogram2D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkPExtractHistogram2D_SetController, 1,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\n"},
  {(char*)"GetController", PyvtkPExtractHistogram2D_GetController, 1,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPExtractHistogram2D_StaticNew()
{
  return vtkPExtractHistogram2D::New();
}

PyObject *PyVTKClass_vtkPExtractHistogram2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPExtractHistogram2D_StaticNew,
    PyvtkPExtractHistogram2D_Methods,
    "vtkPExtractHistogram2D", modulename,
    NULL, NULL,
    PyvtkPExtractHistogram2D_Doc(),
    PyVTKClass_vtkExtractHistogram2DNew(modulename));
  return cls;
}

const char **PyvtkPExtractHistogram2D_Doc()
{
  static const char *docstring[] = {
    "vtkPExtractHistogram2D - compute a 2D histogram between two columns\n\n",
    "Superclass: vtkExtractHistogram2D\n\n",
    "This class does exactly the same this as vtkExtractHistogram2D,\n but does it in a multi-process environment.  After each node\n computes their own local histograms, this class does an AllReduce\n that distributes the sum of all local histograms onto each node.\n\nSee Also:\n\n\n vtkExtractHistogram2D\n\nThanks:\n\n\n Developed by David Feng and Philippe Pebay at Sandia National\nLaboratories\n------------------",
    "----------------------------------------------------\n    --------\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPExtractHistogram2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPExtractHistogram2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPExtractHistogram2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

