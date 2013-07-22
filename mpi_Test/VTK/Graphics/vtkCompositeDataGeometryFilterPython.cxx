// python wrapper for vtkCompositeDataGeometryFilter
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
#include "vtkCompositeDataGeometryFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCompositeDataGeometryFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCompositeDataGeometryFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCompositeDataGeometryFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCompositeDataGeometryFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkCompositeDataGeometryFilter_Doc();


static PyObject *
PyvtkCompositeDataGeometryFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataGeometryFilter *op = static_cast<vtkCompositeDataGeometryFilter *>(vp);

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
      tempr = op->vtkCompositeDataGeometryFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataGeometryFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataGeometryFilter *op = static_cast<vtkCompositeDataGeometryFilter *>(vp);

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
      tempr = op->vtkCompositeDataGeometryFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataGeometryFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataGeometryFilter *op = static_cast<vtkCompositeDataGeometryFilter *>(vp);

  vtkCompositeDataGeometryFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCompositeDataGeometryFilter::NewInstance();
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
PyvtkCompositeDataGeometryFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCompositeDataGeometryFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCompositeDataGeometryFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCompositeDataGeometryFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkCompositeDataGeometryFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCompositeDataGeometryFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCompositeDataGeometryFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCompositeDataGeometryFilter\nC++: vtkCompositeDataGeometryFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCompositeDataGeometryFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCompositeDataGeometryFilter\nC++: vtkCompositeDataGeometryFilter *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCompositeDataGeometryFilter_StaticNew()
{
  return vtkCompositeDataGeometryFilter::New();
}

PyObject *PyVTKClass_vtkCompositeDataGeometryFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCompositeDataGeometryFilter_StaticNew,
    PyvtkCompositeDataGeometryFilter_Methods,
    "vtkCompositeDataGeometryFilter", modulename,
    NULL, NULL,
    PyvtkCompositeDataGeometryFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkCompositeDataGeometryFilter_Doc()
{
  static const char *docstring[] = {
    "vtkCompositeDataGeometryFilter - extract geometry from multi-group\ndata\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkCompositeDataGeometryFilter applies vtkGeometryFilter to all\nleaves in vtkCompositeDataSet. Place this filter at the end of a\npipeline before a polydata consumer such as a polydata mapper to\nextract geometry from all blocks and append them to one polydata\nobject.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCompositeDataGeometryFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCompositeDataGeometryFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCompositeDataGeometryFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

