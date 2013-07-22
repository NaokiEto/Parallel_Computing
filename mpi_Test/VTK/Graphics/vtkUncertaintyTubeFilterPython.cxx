// python wrapper for vtkUncertaintyTubeFilter
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
#include "vtkUncertaintyTubeFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkUncertaintyTubeFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkUncertaintyTubeFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkUncertaintyTubeFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkUncertaintyTubeFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkUncertaintyTubeFilter_Doc();


static PyObject *
PyvtkUncertaintyTubeFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUncertaintyTubeFilter *op = static_cast<vtkUncertaintyTubeFilter *>(vp);

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
      tempr = op->vtkUncertaintyTubeFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUncertaintyTubeFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUncertaintyTubeFilter *op = static_cast<vtkUncertaintyTubeFilter *>(vp);

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
      tempr = op->vtkUncertaintyTubeFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUncertaintyTubeFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUncertaintyTubeFilter *op = static_cast<vtkUncertaintyTubeFilter *>(vp);

  vtkUncertaintyTubeFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkUncertaintyTubeFilter::NewInstance();
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
PyvtkUncertaintyTubeFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkUncertaintyTubeFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkUncertaintyTubeFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUncertaintyTubeFilter_SetNumberOfSides(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSides");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUncertaintyTubeFilter *op = static_cast<vtkUncertaintyTubeFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfSides(temp0);
      }
    else
      {
      op->vtkUncertaintyTubeFilter::SetNumberOfSides(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUncertaintyTubeFilter_GetNumberOfSidesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSidesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUncertaintyTubeFilter *op = static_cast<vtkUncertaintyTubeFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfSidesMinValue();
      }
    else
      {
      tempr = op->vtkUncertaintyTubeFilter::GetNumberOfSidesMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUncertaintyTubeFilter_GetNumberOfSidesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSidesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUncertaintyTubeFilter *op = static_cast<vtkUncertaintyTubeFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfSidesMaxValue();
      }
    else
      {
      tempr = op->vtkUncertaintyTubeFilter::GetNumberOfSidesMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUncertaintyTubeFilter_GetNumberOfSides(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSides");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUncertaintyTubeFilter *op = static_cast<vtkUncertaintyTubeFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfSides();
      }
    else
      {
      tempr = op->vtkUncertaintyTubeFilter::GetNumberOfSides();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkUncertaintyTubeFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkUncertaintyTubeFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for printing and obtaining type information for\ninstances of this class.\n"},
  {(char*)"IsA", PyvtkUncertaintyTubeFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for printing and obtaining type information for\ninstances of this class.\n"},
  {(char*)"NewInstance", PyvtkUncertaintyTubeFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkUncertaintyTubeFilter\nC++: vtkUncertaintyTubeFilter *NewInstance()\n\nStandard methods for printing and obtaining type information for\ninstances of this class.\n"},
  {(char*)"SafeDownCast", PyvtkUncertaintyTubeFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkUncertaintyTubeFilter\nC++: vtkUncertaintyTubeFilter *SafeDownCast(vtkObject* o)\n\nStandard methods for printing and obtaining type information for\ninstances of this class.\n"},
  {(char*)"SetNumberOfSides", PyvtkUncertaintyTubeFilter_SetNumberOfSides, 1,
   (char*)"V.SetNumberOfSides(int)\nC++: void SetNumberOfSides(int)\n\nSet / get the number of sides for the tube. At a minimum, the\nnumber of sides is 3.\n"},
  {(char*)"GetNumberOfSidesMinValue", PyvtkUncertaintyTubeFilter_GetNumberOfSidesMinValue, 1,
   (char*)"V.GetNumberOfSidesMinValue() -> int\nC++: int GetNumberOfSidesMinValue()\n\nSet / get the number of sides for the tube. At a minimum, the\nnumber of sides is 3.\n"},
  {(char*)"GetNumberOfSidesMaxValue", PyvtkUncertaintyTubeFilter_GetNumberOfSidesMaxValue, 1,
   (char*)"V.GetNumberOfSidesMaxValue() -> int\nC++: int GetNumberOfSidesMaxValue()\n\nSet / get the number of sides for the tube. At a minimum, the\nnumber of sides is 3.\n"},
  {(char*)"GetNumberOfSides", PyvtkUncertaintyTubeFilter_GetNumberOfSides, 1,
   (char*)"V.GetNumberOfSides() -> int\nC++: int GetNumberOfSides()\n\nSet / get the number of sides for the tube. At a minimum, the\nnumber of sides is 3.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkUncertaintyTubeFilter_StaticNew()
{
  return vtkUncertaintyTubeFilter::New();
}

PyObject *PyVTKClass_vtkUncertaintyTubeFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkUncertaintyTubeFilter_StaticNew,
    PyvtkUncertaintyTubeFilter_Methods,
    "vtkUncertaintyTubeFilter", modulename,
    NULL, NULL,
    PyvtkUncertaintyTubeFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkUncertaintyTubeFilter_Doc()
{
  static const char *docstring[] = {
    "vtkUncertaintyTubeFilter - generate uncertainty tubes along a polyline\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkUncertaintyTubeFilter is a filter that generates ellipsoidal (in\ncross section) tubes that follows a polyline. The input is a\nvtkPolyData with polylines that have associated vector point data.\nThe vector data represents the uncertainty of the polyline in the\nx-y-z directions.\n\nCaveats:\n\nThe vector uncertainty values define an axis-aligned ellipsoid at\neach polyline point. The uncertainty tubes ",
    "can be envisioned as the\ninterpolation of these ellipsoids between the points defining the\npolyline (or rather, the interpolation of the cross section of the\nellipsoids alog the polyline).\n\nSee Also:\n\nvtkTensorGlyph vtkStreamer\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkUncertaintyTubeFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkUncertaintyTubeFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkUncertaintyTubeFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

