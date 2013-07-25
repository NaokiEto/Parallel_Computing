// python wrapper for vtkImageCityBlockDistance
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
#include "vtkImageCityBlockDistance.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageCityBlockDistance(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageCityBlockDistance(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageCityBlockDistanceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageCityBlockDistanceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageDecomposeFilterNew
extern "C" { PyObject *PyVTKClass_vtkImageDecomposeFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageDecomposeFilterNew
#endif

static const char **PyvtkImageCityBlockDistance_Doc();


static PyObject *
PyvtkImageCityBlockDistance_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCityBlockDistance *op = static_cast<vtkImageCityBlockDistance *>(vp);

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
      tempr = op->vtkImageCityBlockDistance::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCityBlockDistance_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCityBlockDistance *op = static_cast<vtkImageCityBlockDistance *>(vp);

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
      tempr = op->vtkImageCityBlockDistance::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCityBlockDistance_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCityBlockDistance *op = static_cast<vtkImageCityBlockDistance *>(vp);

  vtkImageCityBlockDistance *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageCityBlockDistance::NewInstance();
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
PyvtkImageCityBlockDistance_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageCityBlockDistance *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageCityBlockDistance::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageCityBlockDistance_Methods[] = {
  {(char*)"GetClassName", PyvtkImageCityBlockDistance_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageCityBlockDistance_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageCityBlockDistance_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageCityBlockDistance\nC++: vtkImageCityBlockDistance *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageCityBlockDistance_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageCityBlockDistance\nC++: vtkImageCityBlockDistance *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageCityBlockDistance_StaticNew()
{
  return vtkImageCityBlockDistance::New();
}

PyObject *PyVTKClass_vtkImageCityBlockDistanceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageCityBlockDistance_StaticNew,
    PyvtkImageCityBlockDistance_Methods,
    "vtkImageCityBlockDistance", modulename,
    NULL, NULL,
    PyvtkImageCityBlockDistance_Doc(),
    PyVTKClass_vtkImageDecomposeFilterNew(modulename));
  return cls;
}

const char **PyvtkImageCityBlockDistance_Doc()
{
  static const char *docstring[] = {
    "vtkImageCityBlockDistance - 1,2 or 3D distance map.\n\n",
    "Superclass: vtkImageDecomposeFilter\n\n",
    "vtkImageCityBlockDistance creates a distance map using the city block\n(Manhatten) distance measure.  The input is a mask.  Zero values are\nconsidered boundaries.  The output pixel is the minimum of the input\npixel and the distance to a boundary (or neighbor value + 1 unit).\ndistance values are calculated in pixels. The filter works by taking\n6 passes (for 3d distance map): 2 along each axis (forwa",
    "rd and\nbackward). Each pass keeps a running minimum distance. For some\nreason, I preserve the sign if the distance.  If the input mask is\ninitially negative, the output distances will be negative. Distances\nmaps can have inside (negative regions) and outsides (positive\nregions).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageCityBlockDistance(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageCityBlockDistanceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageCityBlockDistance", o) != 0)
    {
    Py_DECREF(o);
    }

}
