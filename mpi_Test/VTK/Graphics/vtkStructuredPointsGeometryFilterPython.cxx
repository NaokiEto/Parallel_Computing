// python wrapper for vtkStructuredPointsGeometryFilter
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
#include "vtkStructuredPointsGeometryFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkStructuredPointsGeometryFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkStructuredPointsGeometryFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkStructuredPointsGeometryFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkStructuredPointsGeometryFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageDataGeometryFilterNew
extern "C" { PyObject *PyVTKClass_vtkImageDataGeometryFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageDataGeometryFilterNew
#endif

static const char **PyvtkStructuredPointsGeometryFilter_Doc();


static PyObject *
PyvtkStructuredPointsGeometryFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsGeometryFilter *op = static_cast<vtkStructuredPointsGeometryFilter *>(vp);

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
      tempr = op->vtkStructuredPointsGeometryFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredPointsGeometryFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsGeometryFilter *op = static_cast<vtkStructuredPointsGeometryFilter *>(vp);

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
      tempr = op->vtkStructuredPointsGeometryFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredPointsGeometryFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsGeometryFilter *op = static_cast<vtkStructuredPointsGeometryFilter *>(vp);

  vtkStructuredPointsGeometryFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkStructuredPointsGeometryFilter::NewInstance();
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
PyvtkStructuredPointsGeometryFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkStructuredPointsGeometryFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkStructuredPointsGeometryFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkStructuredPointsGeometryFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkStructuredPointsGeometryFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStructuredPointsGeometryFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStructuredPointsGeometryFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkStructuredPointsGeometryFilter\nC++: vtkStructuredPointsGeometryFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStructuredPointsGeometryFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStructuredPointsGeometryFilter\nC++: vtkStructuredPointsGeometryFilter *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkStructuredPointsGeometryFilter_StaticNew()
{
  return vtkStructuredPointsGeometryFilter::New();
}

PyObject *PyVTKClass_vtkStructuredPointsGeometryFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkStructuredPointsGeometryFilter_StaticNew,
    PyvtkStructuredPointsGeometryFilter_Methods,
    "vtkStructuredPointsGeometryFilter", modulename,
    NULL, NULL,
    PyvtkStructuredPointsGeometryFilter_Doc(),
    PyVTKClass_vtkImageDataGeometryFilterNew(modulename));
  return cls;
}

const char **PyvtkStructuredPointsGeometryFilter_Doc()
{
  static const char *docstring[] = {
    "vtkStructuredPointsGeometryFilter - obsolete class\n\n",
    "Superclass: vtkImageDataGeometryFilter\n\n",
    "vtkStructuredPointsGeometryFilter has been renamed to\nvtkImageDataGeometryFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStructuredPointsGeometryFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStructuredPointsGeometryFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStructuredPointsGeometryFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

