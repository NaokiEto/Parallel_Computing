// python wrapper for vtkPComputeHistogram2DOutliers
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
#include "vtkPComputeHistogram2DOutliers.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPComputeHistogram2DOutliers(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPComputeHistogram2DOutliers(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPComputeHistogram2DOutliersNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPComputeHistogram2DOutliersNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkComputeHistogram2DOutliersNew
extern "C" { PyObject *PyVTKClass_vtkComputeHistogram2DOutliersNew(const char *); }
#define DECLARED_PyVTKClass_vtkComputeHistogram2DOutliersNew
#endif

static const char **PyvtkPComputeHistogram2DOutliers_Doc();


static PyObject *
PyvtkPComputeHistogram2DOutliers_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPComputeHistogram2DOutliers *op = static_cast<vtkPComputeHistogram2DOutliers *>(vp);

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
      tempr = op->vtkPComputeHistogram2DOutliers::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPComputeHistogram2DOutliers_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPComputeHistogram2DOutliers *op = static_cast<vtkPComputeHistogram2DOutliers *>(vp);

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
      tempr = op->vtkPComputeHistogram2DOutliers::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPComputeHistogram2DOutliers_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPComputeHistogram2DOutliers *op = static_cast<vtkPComputeHistogram2DOutliers *>(vp);

  vtkPComputeHistogram2DOutliers *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPComputeHistogram2DOutliers::NewInstance();
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
PyvtkPComputeHistogram2DOutliers_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPComputeHistogram2DOutliers *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPComputeHistogram2DOutliers::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPComputeHistogram2DOutliers_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPComputeHistogram2DOutliers *op = static_cast<vtkPComputeHistogram2DOutliers *>(vp);

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
      op->vtkPComputeHistogram2DOutliers::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPComputeHistogram2DOutliers_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPComputeHistogram2DOutliers *op = static_cast<vtkPComputeHistogram2DOutliers *>(vp);

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
      tempr = op->vtkPComputeHistogram2DOutliers::GetController();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPComputeHistogram2DOutliers_Methods[] = {
  {(char*)"GetClassName", PyvtkPComputeHistogram2DOutliers_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPComputeHistogram2DOutliers_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPComputeHistogram2DOutliers_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPComputeHistogram2DOutliers\nC++: vtkPComputeHistogram2DOutliers *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPComputeHistogram2DOutliers_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPComputeHistogram2DOutliers\nC++: vtkPComputeHistogram2DOutliers *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkPComputeHistogram2DOutliers_SetController, 1,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\n"},
  {(char*)"GetController", PyvtkPComputeHistogram2DOutliers_GetController, 1,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPComputeHistogram2DOutliers_StaticNew()
{
  return vtkPComputeHistogram2DOutliers::New();
}

PyObject *PyVTKClass_vtkPComputeHistogram2DOutliersNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPComputeHistogram2DOutliers_StaticNew,
    PyvtkPComputeHistogram2DOutliers_Methods,
    "vtkPComputeHistogram2DOutliers", modulename,
    NULL, NULL,
    PyvtkPComputeHistogram2DOutliers_Doc(),
    PyVTKClass_vtkComputeHistogram2DOutliersNew(modulename));
  return cls;
}

const char **PyvtkPComputeHistogram2DOutliers_Doc()
{
  static const char *docstring[] = {
    "vtkPComputeHistogram2DOutliers - extract outlier rows from\n\n",
    "Superclass: vtkComputeHistogram2DOutliers\n\n",
    "This class does exactly the same this as\nvtkComputeHistogram2DOutliers,\n but does it in a multi-process environment.  After each node\n computes their own local outliers, class does an AllGather\n that distributes the outliers to every node.  This could probably\njust\n be a Gather onto the root node instead.\n\n\n After this operation, the row selection will only contain local row\nids,\n since I'm not su",
    "re how to deal with distributed ids.\n\nSee Also:\n\n\n vtkComputeHistogram2DOutliers\n\nThanks:\n\n\n Developed by David Feng at Sandia National Laboratories\n----------------------------------------------------------------------\n    --------\n----------------------------------------------------------------------\n    --------\n----------------------------------------------------------------------\n    --------",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPComputeHistogram2DOutliers(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPComputeHistogram2DOutliersNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPComputeHistogram2DOutliers", o) != 0)
    {
    Py_DECREF(o);
    }

}

