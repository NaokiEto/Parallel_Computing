// python wrapper for vtkDistanceToCamera
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
#include "vtkDistanceToCamera.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDistanceToCamera(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDistanceToCamera(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDistanceToCameraNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDistanceToCameraNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkDistanceToCamera_Doc();


static PyObject *
PyvtkDistanceToCamera_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceToCamera *op = static_cast<vtkDistanceToCamera *>(vp);

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
      tempr = op->vtkDistanceToCamera::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceToCamera_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceToCamera *op = static_cast<vtkDistanceToCamera *>(vp);

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
      tempr = op->vtkDistanceToCamera::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceToCamera_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceToCamera *op = static_cast<vtkDistanceToCamera *>(vp);

  vtkDistanceToCamera *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDistanceToCamera::NewInstance();
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
PyvtkDistanceToCamera_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDistanceToCamera *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDistanceToCamera::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceToCamera_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceToCamera *op = static_cast<vtkDistanceToCamera *>(vp);

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
      op->vtkDistanceToCamera::SetRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceToCamera_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceToCamera *op = static_cast<vtkDistanceToCamera *>(vp);

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
      tempr = op->vtkDistanceToCamera::GetRenderer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceToCamera_SetScreenSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScreenSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceToCamera *op = static_cast<vtkDistanceToCamera *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScreenSize(temp0);
      }
    else
      {
      op->vtkDistanceToCamera::SetScreenSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceToCamera_GetScreenSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScreenSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceToCamera *op = static_cast<vtkDistanceToCamera *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScreenSize();
      }
    else
      {
      tempr = op->vtkDistanceToCamera::GetScreenSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceToCamera_SetScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceToCamera *op = static_cast<vtkDistanceToCamera *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScaling(temp0);
      }
    else
      {
      op->vtkDistanceToCamera::SetScaling(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceToCamera_GetScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceToCamera *op = static_cast<vtkDistanceToCamera *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScaling();
      }
    else
      {
      tempr = op->vtkDistanceToCamera::GetScaling();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceToCamera_ScalingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceToCamera *op = static_cast<vtkDistanceToCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalingOn();
      }
    else
      {
      op->vtkDistanceToCamera::ScalingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceToCamera_ScalingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceToCamera *op = static_cast<vtkDistanceToCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalingOff();
      }
    else
      {
      op->vtkDistanceToCamera::ScalingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceToCamera_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceToCamera *op = static_cast<vtkDistanceToCamera *>(vp);

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
      tempr = op->vtkDistanceToCamera::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDistanceToCamera_Methods[] = {
  {(char*)"GetClassName", PyvtkDistanceToCamera_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDistanceToCamera_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDistanceToCamera_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDistanceToCamera\nC++: vtkDistanceToCamera *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDistanceToCamera_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDistanceToCamera\nC++: vtkDistanceToCamera *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetRenderer", PyvtkDistanceToCamera_SetRenderer, 1,
   (char*)"V.SetRenderer(vtkRenderer)\nC++: void SetRenderer(vtkRenderer *ren)\n\nThe renderer which will ultimately render these points.\n"},
  {(char*)"GetRenderer", PyvtkDistanceToCamera_GetRenderer, 1,
   (char*)"V.GetRenderer() -> vtkRenderer\nC++: vtkRenderer *GetRenderer()\n\nThe renderer which will ultimately render these points.\n"},
  {(char*)"SetScreenSize", PyvtkDistanceToCamera_SetScreenSize, 1,
   (char*)"V.SetScreenSize(float)\nC++: void SetScreenSize(double a)\n\nThe desired screen size obtained by scaling glyphs by the\ndistance array. It assumes the glyph at each point will be unit\nsize.\n"},
  {(char*)"GetScreenSize", PyvtkDistanceToCamera_GetScreenSize, 1,
   (char*)"V.GetScreenSize() -> float\nC++: double GetScreenSize()\n\nThe desired screen size obtained by scaling glyphs by the\ndistance array. It assumes the glyph at each point will be unit\nsize.\n"},
  {(char*)"SetScaling", PyvtkDistanceToCamera_SetScaling, 1,
   (char*)"V.SetScaling(bool)\nC++: void SetScaling(bool a)\n\nWhether to scale the distance by the input array to process.\n"},
  {(char*)"GetScaling", PyvtkDistanceToCamera_GetScaling, 1,
   (char*)"V.GetScaling() -> bool\nC++: bool GetScaling()\n\nWhether to scale the distance by the input array to process.\n"},
  {(char*)"ScalingOn", PyvtkDistanceToCamera_ScalingOn, 1,
   (char*)"V.ScalingOn()\nC++: void ScalingOn()\n\nWhether to scale the distance by the input array to process.\n"},
  {(char*)"ScalingOff", PyvtkDistanceToCamera_ScalingOff, 1,
   (char*)"V.ScalingOff()\nC++: void ScalingOff()\n\nWhether to scale the distance by the input array to process.\n"},
  {(char*)"GetMTime", PyvtkDistanceToCamera_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long GetMTime()\n\nThe modified time of this filter.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDistanceToCamera_StaticNew()
{
  return vtkDistanceToCamera::New();
}

PyObject *PyVTKClass_vtkDistanceToCameraNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDistanceToCamera_StaticNew,
    PyvtkDistanceToCamera_Methods,
    "vtkDistanceToCamera", modulename,
    NULL, NULL,
    PyvtkDistanceToCamera_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkDistanceToCamera_Doc()
{
  static const char *docstring[] = {
    "vtkDistanceToCamera - calculates distance from points to the camera.\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "This filter adds a double array containing the distance from each\npoint to the camera. If Scaling is on, it will use the values in the\ninput array to process in order to scale the size of the points.\nScreenSize sets the size in screen pixels that you would want a\nrendered rectangle at that point to be, if it was scaled by the\noutput array.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDistanceToCamera(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDistanceToCameraNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDistanceToCamera", o) != 0)
    {
    Py_DECREF(o);
    }

}

