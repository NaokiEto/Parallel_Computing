// python wrapper for vtkGeoAdaptiveArcs
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
#include "vtkGeoAdaptiveArcs.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGeoAdaptiveArcs(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGeoAdaptiveArcs(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGeoAdaptiveArcsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGeoAdaptiveArcsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkGeoAdaptiveArcs_Doc();


static PyObject *
PyvtkGeoAdaptiveArcs_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAdaptiveArcs *op = static_cast<vtkGeoAdaptiveArcs *>(vp);

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
      tempr = op->vtkGeoAdaptiveArcs::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoAdaptiveArcs_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAdaptiveArcs *op = static_cast<vtkGeoAdaptiveArcs *>(vp);

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
      tempr = op->vtkGeoAdaptiveArcs::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoAdaptiveArcs_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAdaptiveArcs *op = static_cast<vtkGeoAdaptiveArcs *>(vp);

  vtkGeoAdaptiveArcs *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGeoAdaptiveArcs::NewInstance();
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
PyvtkGeoAdaptiveArcs_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGeoAdaptiveArcs *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGeoAdaptiveArcs::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoAdaptiveArcs_SetGlobeRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlobeRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAdaptiveArcs *op = static_cast<vtkGeoAdaptiveArcs *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGlobeRadius(temp0);
      }
    else
      {
      op->vtkGeoAdaptiveArcs::SetGlobeRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoAdaptiveArcs_GetGlobeRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobeRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAdaptiveArcs *op = static_cast<vtkGeoAdaptiveArcs *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGlobeRadius();
      }
    else
      {
      tempr = op->vtkGeoAdaptiveArcs::GetGlobeRadius();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoAdaptiveArcs_SetMaximumPixelSeparation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumPixelSeparation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAdaptiveArcs *op = static_cast<vtkGeoAdaptiveArcs *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumPixelSeparation(temp0);
      }
    else
      {
      op->vtkGeoAdaptiveArcs::SetMaximumPixelSeparation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoAdaptiveArcs_GetMaximumPixelSeparation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumPixelSeparation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAdaptiveArcs *op = static_cast<vtkGeoAdaptiveArcs *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumPixelSeparation();
      }
    else
      {
      tempr = op->vtkGeoAdaptiveArcs::GetMaximumPixelSeparation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoAdaptiveArcs_SetMinimumPixelSeparation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumPixelSeparation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAdaptiveArcs *op = static_cast<vtkGeoAdaptiveArcs *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinimumPixelSeparation(temp0);
      }
    else
      {
      op->vtkGeoAdaptiveArcs::SetMinimumPixelSeparation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoAdaptiveArcs_GetMinimumPixelSeparation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumPixelSeparation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAdaptiveArcs *op = static_cast<vtkGeoAdaptiveArcs *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinimumPixelSeparation();
      }
    else
      {
      tempr = op->vtkGeoAdaptiveArcs::GetMinimumPixelSeparation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoAdaptiveArcs_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAdaptiveArcs *op = static_cast<vtkGeoAdaptiveArcs *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->SetRenderer(temp0);
      }
    else
      {
      op->vtkGeoAdaptiveArcs::SetRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoAdaptiveArcs_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAdaptiveArcs *op = static_cast<vtkGeoAdaptiveArcs *>(vp);

  vtkRenderer *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRenderer();
      }
    else
      {
      tempr = op->vtkGeoAdaptiveArcs::GetRenderer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoAdaptiveArcs_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAdaptiveArcs *op = static_cast<vtkGeoAdaptiveArcs *>(vp);

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
      tempr = op->vtkGeoAdaptiveArcs::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGeoAdaptiveArcs_Methods[] = {
  {(char*)"GetClassName", PyvtkGeoAdaptiveArcs_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGeoAdaptiveArcs_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGeoAdaptiveArcs_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGeoAdaptiveArcs\nC++: vtkGeoAdaptiveArcs *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGeoAdaptiveArcs_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGeoAdaptiveArcs\nC++: vtkGeoAdaptiveArcs *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetGlobeRadius", PyvtkGeoAdaptiveArcs_SetGlobeRadius, 1,
   (char*)"V.SetGlobeRadius(float)\nC++: void SetGlobeRadius(double a)\n\nThe base radius used to determine the earth's surface. Default is\nthe earth's radius in meters. TODO: Change this to take in a\nvtkGeoTerrain to get altitude.\n"},
  {(char*)"GetGlobeRadius", PyvtkGeoAdaptiveArcs_GetGlobeRadius, 1,
   (char*)"V.GetGlobeRadius() -> float\nC++: double GetGlobeRadius()\n\nThe base radius used to determine the earth's surface. Default is\nthe earth's radius in meters. TODO: Change this to take in a\nvtkGeoTerrain to get altitude.\n"},
  {(char*)"SetMaximumPixelSeparation", PyvtkGeoAdaptiveArcs_SetMaximumPixelSeparation, 1,
   (char*)"V.SetMaximumPixelSeparation(float)\nC++: void SetMaximumPixelSeparation(double a)\n\nThe maximum number of pixels between points on the arcs. If two\nadjacent points are farther than the threshold, the line segment\nwill be subdivided such that each point is separated by at most\nthe threshold.\n"},
  {(char*)"GetMaximumPixelSeparation", PyvtkGeoAdaptiveArcs_GetMaximumPixelSeparation, 1,
   (char*)"V.GetMaximumPixelSeparation() -> float\nC++: double GetMaximumPixelSeparation()\n\nThe maximum number of pixels between points on the arcs. If two\nadjacent points are farther than the threshold, the line segment\nwill be subdivided such that each point is separated by at most\nthe threshold.\n"},
  {(char*)"SetMinimumPixelSeparation", PyvtkGeoAdaptiveArcs_SetMinimumPixelSeparation, 1,
   (char*)"V.SetMinimumPixelSeparation(float)\nC++: void SetMinimumPixelSeparation(double a)\n\nThe minimum number of pixels between points on the arcs. Points\ncloser than the threshold will be skipped until a point farther\nthan the minimum threshold is reached.\n"},
  {(char*)"GetMinimumPixelSeparation", PyvtkGeoAdaptiveArcs_GetMinimumPixelSeparation, 1,
   (char*)"V.GetMinimumPixelSeparation() -> float\nC++: double GetMinimumPixelSeparation()\n\nThe minimum number of pixels between points on the arcs. Points\ncloser than the threshold will be skipped until a point farther\nthan the minimum threshold is reached.\n"},
  {(char*)"SetRenderer", PyvtkGeoAdaptiveArcs_SetRenderer, 1,
   (char*)"V.SetRenderer(vtkRenderer)\nC++: virtual void SetRenderer(vtkRenderer *ren)\n\nThe renderer used to estimate the number of pixels between\npoints.\n"},
  {(char*)"GetRenderer", PyvtkGeoAdaptiveArcs_GetRenderer, 1,
   (char*)"V.GetRenderer() -> vtkRenderer\nC++: vtkRenderer *GetRenderer()\n\nThe renderer used to estimate the number of pixels between\npoints.\n"},
  {(char*)"GetMTime", PyvtkGeoAdaptiveArcs_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long GetMTime()\n\nReturn the modified time of this object.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGeoAdaptiveArcs_StaticNew()
{
  return vtkGeoAdaptiveArcs::New();
}

PyObject *PyVTKClass_vtkGeoAdaptiveArcsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGeoAdaptiveArcs_StaticNew,
    PyvtkGeoAdaptiveArcs_Methods,
    "vtkGeoAdaptiveArcs", modulename,
    NULL, NULL,
    PyvtkGeoAdaptiveArcs_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkGeoAdaptiveArcs_Doc()
{
  static const char *docstring[] = {
    "vtkGeoArcs - layout graph edges on a globe as arcs.\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGeoAdaptiveArcs(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGeoAdaptiveArcsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGeoAdaptiveArcs", o) != 0)
    {
    Py_DECREF(o);
    }

}

