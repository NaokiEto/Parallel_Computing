// python wrapper for vtkPReflectionFilter
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
#include "vtkPReflectionFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPReflectionFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPReflectionFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPReflectionFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPReflectionFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkReflectionFilterNew
extern "C" { PyObject *PyVTKClass_vtkReflectionFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkReflectionFilterNew
#endif

static const char **PyvtkPReflectionFilter_Doc();


static PyObject *
PyvtkPReflectionFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPReflectionFilter *op = static_cast<vtkPReflectionFilter *>(vp);

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
      tempr = op->vtkPReflectionFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPReflectionFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPReflectionFilter *op = static_cast<vtkPReflectionFilter *>(vp);

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
      tempr = op->vtkPReflectionFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPReflectionFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPReflectionFilter *op = static_cast<vtkPReflectionFilter *>(vp);

  vtkPReflectionFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPReflectionFilter::NewInstance();
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
PyvtkPReflectionFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPReflectionFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPReflectionFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPReflectionFilter_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPReflectionFilter *op = static_cast<vtkPReflectionFilter *>(vp);

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
      op->vtkPReflectionFilter::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPReflectionFilter_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPReflectionFilter *op = static_cast<vtkPReflectionFilter *>(vp);

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
      tempr = op->vtkPReflectionFilter::GetController();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPReflectionFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkPReflectionFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPReflectionFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPReflectionFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPReflectionFilter\nC++: vtkPReflectionFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPReflectionFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPReflectionFilter\nC++: vtkPReflectionFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkPReflectionFilter_SetController, 1,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: void SetController(vtkMultiProcessController *)\n\nGet/Set the parallel controller.\n"},
  {(char*)"GetController", PyvtkPReflectionFilter_GetController, 1,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nGet/Set the parallel controller.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPReflectionFilter_StaticNew()
{
  return vtkPReflectionFilter::New();
}

PyObject *PyVTKClass_vtkPReflectionFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPReflectionFilter_StaticNew,
    PyvtkPReflectionFilter_Methods,
    "vtkPReflectionFilter", modulename,
    NULL, NULL,
    PyvtkPReflectionFilter_Doc(),
    PyVTKClass_vtkReflectionFilterNew(modulename));
  return cls;
}

const char **PyvtkPReflectionFilter_Doc()
{
  static const char *docstring[] = {
    "vtkPReflectionFilter - parallel version of vtkReflectionFilter\n\n",
    "Superclass: vtkReflectionFilter\n\n",
    "vtkPReflectionFilter is a parallel version of vtkReflectionFilter\nwhich takes into consideration the full dataset bounds for performing\nthe reflection.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPReflectionFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPReflectionFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPReflectionFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

