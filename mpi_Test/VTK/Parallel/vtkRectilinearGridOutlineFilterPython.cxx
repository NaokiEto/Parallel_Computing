// python wrapper for vtkRectilinearGridOutlineFilter
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
#include "vtkRectilinearGridOutlineFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkRectilinearGridOutlineFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkRectilinearGridOutlineFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkRectilinearGridOutlineFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkRectilinearGridOutlineFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkRectilinearGridOutlineFilter_Doc();


static PyObject *
PyvtkRectilinearGridOutlineFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridOutlineFilter *op = static_cast<vtkRectilinearGridOutlineFilter *>(vp);

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
      tempr = op->vtkRectilinearGridOutlineFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridOutlineFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridOutlineFilter *op = static_cast<vtkRectilinearGridOutlineFilter *>(vp);

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
      tempr = op->vtkRectilinearGridOutlineFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridOutlineFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridOutlineFilter *op = static_cast<vtkRectilinearGridOutlineFilter *>(vp);

  vtkRectilinearGridOutlineFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkRectilinearGridOutlineFilter::NewInstance();
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
PyvtkRectilinearGridOutlineFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkRectilinearGridOutlineFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkRectilinearGridOutlineFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkRectilinearGridOutlineFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkRectilinearGridOutlineFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRectilinearGridOutlineFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRectilinearGridOutlineFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkRectilinearGridOutlineFilter\nC++: vtkRectilinearGridOutlineFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRectilinearGridOutlineFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRectilinearGridOutlineFilter\nC++: vtkRectilinearGridOutlineFilter *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRectilinearGridOutlineFilter_StaticNew()
{
  return vtkRectilinearGridOutlineFilter::New();
}

PyObject *PyVTKClass_vtkRectilinearGridOutlineFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRectilinearGridOutlineFilter_StaticNew,
    PyvtkRectilinearGridOutlineFilter_Methods,
    "vtkRectilinearGridOutlineFilter", modulename,
    NULL, NULL,
    PyvtkRectilinearGridOutlineFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkRectilinearGridOutlineFilter_Doc()
{
  static const char *docstring[] = {
    "vtkRectilinearGridOutlineFilter - create wireframe outline for a\nrectilinear grid.\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkRectilinearGridOutlineFilter works in parallel.  There is no\nreason. to use this filter if you are not breaking the processing\ninto pieces. With one piece you can simply use vtkOutlineFilter. \nThis filter ignores internal edges when the extent is not the whole\nextent.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRectilinearGridOutlineFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRectilinearGridOutlineFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRectilinearGridOutlineFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

