// python wrapper for vtkPassThroughFilter
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
#include "vtkPassThroughFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPassThroughFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPassThroughFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPassThroughFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPassThroughFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkPassThroughFilter_Doc();


static PyObject *
PyvtkPassThroughFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassThroughFilter *op = static_cast<vtkPassThroughFilter *>(vp);

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
      tempr = op->vtkPassThroughFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPassThroughFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassThroughFilter *op = static_cast<vtkPassThroughFilter *>(vp);

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
      tempr = op->vtkPassThroughFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPassThroughFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassThroughFilter *op = static_cast<vtkPassThroughFilter *>(vp);

  vtkPassThroughFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPassThroughFilter::NewInstance();
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
PyvtkPassThroughFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPassThroughFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPassThroughFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPassThroughFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkPassThroughFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPassThroughFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPassThroughFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPassThroughFilter\nC++: vtkPassThroughFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPassThroughFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPassThroughFilter\nC++: vtkPassThroughFilter *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPassThroughFilter_StaticNew()
{
  return vtkPassThroughFilter::New();
}

PyObject *PyVTKClass_vtkPassThroughFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPassThroughFilter_StaticNew,
    PyvtkPassThroughFilter_Methods,
    "vtkPassThroughFilter", modulename,
    NULL, NULL,
    PyvtkPassThroughFilter_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPassThroughFilter_Doc()
{
  static const char *docstring[] = {
    "vtkPassThroughFilter - Filter which shallow copies it's input to it's\noutput\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "This filter shallow copies it's input to it's output. It is normally\nused by PVSources with multiple outputs as the VTK filter in the\ndummy connection objects at each output.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPassThroughFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPassThroughFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPassThroughFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

