// python wrapper for vtkPProbeFilter
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
#include "vtkPProbeFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPProbeFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPProbeFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPProbeFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPProbeFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkCompositeDataProbeFilterNew
extern "C" { PyObject *PyVTKClass_vtkCompositeDataProbeFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkCompositeDataProbeFilterNew
#endif

static const char **PyvtkPProbeFilter_Doc();


static PyObject *
PyvtkPProbeFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPProbeFilter *op = static_cast<vtkPProbeFilter *>(vp);

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
      tempr = op->vtkPProbeFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPProbeFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPProbeFilter *op = static_cast<vtkPProbeFilter *>(vp);

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
      tempr = op->vtkPProbeFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPProbeFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPProbeFilter *op = static_cast<vtkPProbeFilter *>(vp);

  vtkPProbeFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPProbeFilter::NewInstance();
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
PyvtkPProbeFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPProbeFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPProbeFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPProbeFilter_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPProbeFilter *op = static_cast<vtkPProbeFilter *>(vp);

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
      op->vtkPProbeFilter::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPProbeFilter_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPProbeFilter *op = static_cast<vtkPProbeFilter *>(vp);

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
      tempr = op->vtkPProbeFilter::GetController();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPProbeFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkPProbeFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPProbeFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPProbeFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPProbeFilter\nC++: vtkPProbeFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPProbeFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPProbeFilter\nC++: vtkPProbeFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkPProbeFilter_SetController, 1,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nSet and get the controller.\n"},
  {(char*)"GetController", PyvtkPProbeFilter_GetController, 1,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nSet and get the controller.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPProbeFilter_StaticNew()
{
  return vtkPProbeFilter::New();
}

PyObject *PyVTKClass_vtkPProbeFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPProbeFilter_StaticNew,
    PyvtkPProbeFilter_Methods,
    "vtkPProbeFilter", modulename,
    NULL, NULL,
    PyvtkPProbeFilter_Doc(),
    PyVTKClass_vtkCompositeDataProbeFilterNew(modulename));
  return cls;
}

const char **PyvtkPProbeFilter_Doc()
{
  static const char *docstring[] = {
    "vtkPProbeFilter - probe dataset in parallel\n\n",
    "Superclass: vtkCompositeDataProbeFilter\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPProbeFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPProbeFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPProbeFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

