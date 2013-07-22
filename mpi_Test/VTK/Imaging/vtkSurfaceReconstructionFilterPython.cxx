// python wrapper for vtkSurfaceReconstructionFilter
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
#include "vtkSurfaceReconstructionFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSurfaceReconstructionFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSurfaceReconstructionFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSurfaceReconstructionFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSurfaceReconstructionFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkSurfaceReconstructionFilter_Doc();


static PyObject *
PyvtkSurfaceReconstructionFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceReconstructionFilter *op = static_cast<vtkSurfaceReconstructionFilter *>(vp);

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
      tempr = op->vtkSurfaceReconstructionFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceReconstructionFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceReconstructionFilter *op = static_cast<vtkSurfaceReconstructionFilter *>(vp);

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
      tempr = op->vtkSurfaceReconstructionFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceReconstructionFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceReconstructionFilter *op = static_cast<vtkSurfaceReconstructionFilter *>(vp);

  vtkSurfaceReconstructionFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSurfaceReconstructionFilter::NewInstance();
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
PyvtkSurfaceReconstructionFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSurfaceReconstructionFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSurfaceReconstructionFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceReconstructionFilter_GetNeighborhoodSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNeighborhoodSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceReconstructionFilter *op = static_cast<vtkSurfaceReconstructionFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNeighborhoodSize();
      }
    else
      {
      tempr = op->vtkSurfaceReconstructionFilter::GetNeighborhoodSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceReconstructionFilter_SetNeighborhoodSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNeighborhoodSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceReconstructionFilter *op = static_cast<vtkSurfaceReconstructionFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNeighborhoodSize(temp0);
      }
    else
      {
      op->vtkSurfaceReconstructionFilter::SetNeighborhoodSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceReconstructionFilter_GetSampleSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceReconstructionFilter *op = static_cast<vtkSurfaceReconstructionFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSampleSpacing();
      }
    else
      {
      tempr = op->vtkSurfaceReconstructionFilter::GetSampleSpacing();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceReconstructionFilter_SetSampleSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceReconstructionFilter *op = static_cast<vtkSurfaceReconstructionFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSampleSpacing(temp0);
      }
    else
      {
      op->vtkSurfaceReconstructionFilter::SetSampleSpacing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSurfaceReconstructionFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkSurfaceReconstructionFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSurfaceReconstructionFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSurfaceReconstructionFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSurfaceReconstructionFilter\nC++: vtkSurfaceReconstructionFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSurfaceReconstructionFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSurfaceReconstructionFilter\nC++: vtkSurfaceReconstructionFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetNeighborhoodSize", PyvtkSurfaceReconstructionFilter_GetNeighborhoodSize, 1,
   (char*)"V.GetNeighborhoodSize() -> int\nC++: int GetNeighborhoodSize()\n\nSpecify the number of neighbors each point has, used for\nestimating the local surface orientation.  The default value of\n20 should be OK for most applications, higher values can be\nspecified if the spread of points is uneven. Values as low as 10\nmay yield adequate results for some surfaces. Higher values cause\nthe algorithm to take longer. Higher values will cause errors on\nsharp boundaries.\n"},
  {(char*)"SetNeighborhoodSize", PyvtkSurfaceReconstructionFilter_SetNeighborhoodSize, 1,
   (char*)"V.SetNeighborhoodSize(int)\nC++: void SetNeighborhoodSize(int a)\n\nSpecify the number of neighbors each point has, used for\nestimating the local surface orientation.  The default value of\n20 should be OK for most applications, higher values can be\nspecified if the spread of points is uneven. Values as low as 10\nmay yield adequate results for some surfaces. Higher values cause\nthe algorithm to take longer. Higher values will cause errors on\nsharp boundaries.\n"},
  {(char*)"GetSampleSpacing", PyvtkSurfaceReconstructionFilter_GetSampleSpacing, 1,
   (char*)"V.GetSampleSpacing() -> float\nC++: double GetSampleSpacing()\n\nSpecify the spacing of the 3D sampling grid. If not set, a\nreasonable guess will be made.\n"},
  {(char*)"SetSampleSpacing", PyvtkSurfaceReconstructionFilter_SetSampleSpacing, 1,
   (char*)"V.SetSampleSpacing(float)\nC++: void SetSampleSpacing(double a)\n\nSpecify the spacing of the 3D sampling grid. If not set, a\nreasonable guess will be made.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSurfaceReconstructionFilter_StaticNew()
{
  return vtkSurfaceReconstructionFilter::New();
}

PyObject *PyVTKClass_vtkSurfaceReconstructionFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSurfaceReconstructionFilter_StaticNew,
    PyvtkSurfaceReconstructionFilter_Methods,
    "vtkSurfaceReconstructionFilter", modulename,
    NULL, NULL,
    PyvtkSurfaceReconstructionFilter_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkSurfaceReconstructionFilter_Doc()
{
  static const char *docstring[] = {
    "vtkSurfaceReconstructionFilter - reconstructs a surface from\nunorganized points\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkSurfaceReconstructionFilter takes a list of points assumed to lie\non the surface of a solid 3D object. A signed measure of the distance\nto the surface is computed and sampled on a regular grid. The grid\ncan then be contoured at zero to extract the surface. The default\nvalues for neighborhood size and sample spacing should give\nreasonable results for most uses but can be set if desired. This\npro",
    "cedure is based on the PhD work of Hugues Hoppe:\nhttp://www.research.microsoft.com/~hoppe\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSurfaceReconstructionFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSurfaceReconstructionFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSurfaceReconstructionFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

