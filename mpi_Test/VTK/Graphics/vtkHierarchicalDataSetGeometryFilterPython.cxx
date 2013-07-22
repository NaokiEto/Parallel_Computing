// python wrapper for vtkHierarchicalDataSetGeometryFilter
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
#include "vtkHierarchicalDataSetGeometryFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkHierarchicalDataSetGeometryFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkHierarchicalDataSetGeometryFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkHierarchicalDataSetGeometryFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkHierarchicalDataSetGeometryFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkCompositeDataGeometryFilterNew
extern "C" { PyObject *PyVTKClass_vtkCompositeDataGeometryFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkCompositeDataGeometryFilterNew
#endif

static const char **PyvtkHierarchicalDataSetGeometryFilter_Doc();


static PyObject *
PyvtkHierarchicalDataSetGeometryFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalDataSetGeometryFilter *op = static_cast<vtkHierarchicalDataSetGeometryFilter *>(vp);

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
      tempr = op->vtkHierarchicalDataSetGeometryFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalDataSetGeometryFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalDataSetGeometryFilter *op = static_cast<vtkHierarchicalDataSetGeometryFilter *>(vp);

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
      tempr = op->vtkHierarchicalDataSetGeometryFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalDataSetGeometryFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalDataSetGeometryFilter *op = static_cast<vtkHierarchicalDataSetGeometryFilter *>(vp);

  vtkHierarchicalDataSetGeometryFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkHierarchicalDataSetGeometryFilter::NewInstance();
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
PyvtkHierarchicalDataSetGeometryFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkHierarchicalDataSetGeometryFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkHierarchicalDataSetGeometryFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkHierarchicalDataSetGeometryFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkHierarchicalDataSetGeometryFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHierarchicalDataSetGeometryFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHierarchicalDataSetGeometryFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkHierarchicalDataSetGeometryFilter\nC++: vtkHierarchicalDataSetGeometryFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkHierarchicalDataSetGeometryFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHierarchicalDataSetGeometryFilter\nC++: vtkHierarchicalDataSetGeometryFilter *SafeDownCast(\n    vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkHierarchicalDataSetGeometryFilter_StaticNew()
{
  return vtkHierarchicalDataSetGeometryFilter::New();
}

PyObject *PyVTKClass_vtkHierarchicalDataSetGeometryFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkHierarchicalDataSetGeometryFilter_StaticNew,
    PyvtkHierarchicalDataSetGeometryFilter_Methods,
    "vtkHierarchicalDataSetGeometryFilter", modulename,
    NULL, NULL,
    PyvtkHierarchicalDataSetGeometryFilter_Doc(),
    PyVTKClass_vtkCompositeDataGeometryFilterNew(modulename));
  return cls;
}

const char **PyvtkHierarchicalDataSetGeometryFilter_Doc()
{
  static const char *docstring[] = {
    "vtkHierarchicalDataSetGeometryFilter - extract geometry from\nhierarchical data\n\n",
    "Superclass: vtkCompositeDataGeometryFilter\n\n",
    "Legacy class. Use vtkCompositeDataGeometryFilter instead.\n\nSee Also:\n\nvtkCompositeDataGeometryFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHierarchicalDataSetGeometryFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHierarchicalDataSetGeometryFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHierarchicalDataSetGeometryFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

