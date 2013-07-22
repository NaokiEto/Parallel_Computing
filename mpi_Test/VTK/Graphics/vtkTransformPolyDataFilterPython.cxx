// python wrapper for vtkTransformPolyDataFilter
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
#include "vtkTransformPolyDataFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTransformPolyDataFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTransformPolyDataFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTransformPolyDataFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTransformPolyDataFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkTransformPolyDataFilter_Doc();


static PyObject *
PyvtkTransformPolyDataFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformPolyDataFilter *op = static_cast<vtkTransformPolyDataFilter *>(vp);

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
      tempr = op->vtkTransformPolyDataFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformPolyDataFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformPolyDataFilter *op = static_cast<vtkTransformPolyDataFilter *>(vp);

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
      tempr = op->vtkTransformPolyDataFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformPolyDataFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformPolyDataFilter *op = static_cast<vtkTransformPolyDataFilter *>(vp);

  vtkTransformPolyDataFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTransformPolyDataFilter::NewInstance();
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
PyvtkTransformPolyDataFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTransformPolyDataFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTransformPolyDataFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformPolyDataFilter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformPolyDataFilter *op = static_cast<vtkTransformPolyDataFilter *>(vp);

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
      tempr = op->vtkTransformPolyDataFilter::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformPolyDataFilter_SetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformPolyDataFilter *op = static_cast<vtkTransformPolyDataFilter *>(vp);

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
      op->vtkTransformPolyDataFilter::SetTransform(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransformPolyDataFilter_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformPolyDataFilter *op = static_cast<vtkTransformPolyDataFilter *>(vp);

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
      tempr = op->vtkTransformPolyDataFilter::GetTransform();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTransformPolyDataFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkTransformPolyDataFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTransformPolyDataFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTransformPolyDataFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTransformPolyDataFilter\nC++: vtkTransformPolyDataFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTransformPolyDataFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTransformPolyDataFilter\nC++: vtkTransformPolyDataFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetMTime", PyvtkTransformPolyDataFilter_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nReturn the MTime also considering the transform.\n"},
  {(char*)"SetTransform", PyvtkTransformPolyDataFilter_SetTransform, 1,
   (char*)"V.SetTransform(vtkAbstractTransform)\nC++: virtual void SetTransform(vtkAbstractTransform *)\n\nSpecify the transform object used to transform points.\n"},
  {(char*)"GetTransform", PyvtkTransformPolyDataFilter_GetTransform, 1,
   (char*)"V.GetTransform() -> vtkAbstractTransform\nC++: vtkAbstractTransform *GetTransform()\n\nSpecify the transform object used to transform points.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTransformPolyDataFilter_StaticNew()
{
  return vtkTransformPolyDataFilter::New();
}

PyObject *PyVTKClass_vtkTransformPolyDataFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTransformPolyDataFilter_StaticNew,
    PyvtkTransformPolyDataFilter_Methods,
    "vtkTransformPolyDataFilter", modulename,
    NULL, NULL,
    PyvtkTransformPolyDataFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTransformPolyDataFilter_Doc()
{
  static const char *docstring[] = {
    "vtkTransformPolyDataFilter - transform points and associated normals\nand vectors for polygonal dataset\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkTransformPolyDataFilter is a filter to transform point coordinates\nand associated point and cell normals and vectors. Other point and\ncell data is passed through the filter unchanged. This filter is\nspecialized for polygonal data. See vtkTransformFilter for more\ngeneral data.\n\nAn alternative method of transformation is to use vtkActor's methods\nto scale, rotate, and translate objects. The diffe",
    "rence between the\ntwo methods is that vtkActor's transformation simply effects where\nobjects are rendered (via the graphics pipeline), whereas\nvtkTransformPolyDataFilter actually modifies point coordinates in the\nvisualization pipeline. This is necessary for some objects (e.g.,\nvtkProbeFilter) that require point coordinates as input.\n\nSee Also:\n\nvtkTransform vtkTransformFilter vtkActor\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTransformPolyDataFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTransformPolyDataFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTransformPolyDataFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

