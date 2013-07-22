// python wrapper for vtkTransformFilter
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
#include "vtkTransformFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTransformFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTransformFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTransformFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTransformFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPointSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPointSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPointSetAlgorithmNew
#endif

static const char **PyvtkTransformFilter_Doc();


static PyObject *
PyvtkTransformFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformFilter *op = static_cast<vtkTransformFilter *>(vp);

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
      tempr = op->vtkTransformFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformFilter *op = static_cast<vtkTransformFilter *>(vp);

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
      tempr = op->vtkTransformFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformFilter *op = static_cast<vtkTransformFilter *>(vp);

  vtkTransformFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTransformFilter::NewInstance();
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
PyvtkTransformFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTransformFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTransformFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformFilter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformFilter *op = static_cast<vtkTransformFilter *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMTime();
      }
    else
      {
      tempr = op->vtkTransformFilter::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformFilter_SetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformFilter *op = static_cast<vtkTransformFilter *>(vp);

  vtkAbstractTransform *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
    {
    if (ap.IsBound())
      {
      op->SetTransform(temp0);
      }
    else
      {
      op->vtkTransformFilter::SetTransform(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransformFilter_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformFilter *op = static_cast<vtkTransformFilter *>(vp);

  vtkAbstractTransform *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTransform();
      }
    else
      {
      tempr = op->vtkTransformFilter::GetTransform();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTransformFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkTransformFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTransformFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTransformFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTransformFilter\nC++: vtkTransformFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTransformFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTransformFilter\nC++: vtkTransformFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetMTime", PyvtkTransformFilter_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nReturn the MTime also considering the transform.\n"},
  {(char*)"SetTransform", PyvtkTransformFilter_SetTransform, 1,
   (char*)"V.SetTransform(vtkAbstractTransform)\nC++: virtual void SetTransform(vtkAbstractTransform *)\n\nSpecify the transform object used to transform points.\n"},
  {(char*)"GetTransform", PyvtkTransformFilter_GetTransform, 1,
   (char*)"V.GetTransform() -> vtkAbstractTransform\nC++: vtkAbstractTransform *GetTransform()\n\nSpecify the transform object used to transform points.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTransformFilter_StaticNew()
{
  return vtkTransformFilter::New();
}

PyObject *PyVTKClass_vtkTransformFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTransformFilter_StaticNew,
    PyvtkTransformFilter_Methods,
    "vtkTransformFilter", modulename,
    NULL, NULL,
    PyvtkTransformFilter_Doc(),
    PyVTKClass_vtkPointSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTransformFilter_Doc()
{
  static const char *docstring[] = {
    "vtkTransformFilter - transform points and associated normals and\nvectors\n\n",
    "Superclass: vtkPointSetAlgorithm\n\n",
    "vtkTransformFilter is a filter to transform point coordinates, and\nassociated point normals and vectors. Other point data is passed\nthrough the filter.\n\nAn alternative method of transformation is to use vtkActor's methods\nto scale, rotate, and translate objects. The difference between the\ntwo methods is that vtkActor's transformation simply effects where\nobjects are rendered (via the graphics pipe",
    "line), whereas\nvtkTransformFilter actually modifies point coordinates in the\nvisualization pipeline. This is necessary for some objects (e.g.,\nvtkProbeFilter) that require point coordinates as input.\n\nSee Also:\n\nvtkAbstractTransform vtkTransformPolyDataFilter vtkActor\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTransformFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTransformFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTransformFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

